/*
Platform :- Leetcode
Approach :- do bfs in all possible directions with valid nodes and count the min steps to exit or reach the border
*/
class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& B) {
        int x=B[0];
        int y=B[1];
        int ans=-1;
        int f=0;
        pair<int,int>start={x,y};
        int n=maze.size();
        int m=maze[0].size();
        int z=INT_MAX;
        
        queue<pair<pair<int,int>,int>>P;
        P.push({{x,y},0});
        set<pair<int,int>>used;
        used.insert({x,y});
        
        while(!P.empty()){
            int c=P.size();
            for(int i=1;i<=c;++i){
                pair<pair<int,int>,int>temp = P.front();
                P.pop();
                int x=temp.first.first;
                int y=temp.first.second;
                int val=temp.second;
                 
                if(temp.first!=start){
                   // cout<<" %% ";
                    if(x==0||x==n-1||y==0||y==m-1){
                        z=min(z,val);
                        f=1;
                        continue;
                    }
                }
                
                
                
                if((x-1)>=0){
                    if(maze[x-1][y]=='.'){
                        if(used.find({x-1,y})==used.end()){
                            used.insert({x-1,y});
                            P.push({{x-1,y},val+1});
                        }
                    }
                }
                
                if((x+1)<n){
                    if(maze[x+1][y]=='.'){
                        if(used.find({x+1,y})==used.end()){
                            used.insert({x+1,y});
                            P.push({{x+1,y},val+1});
                        }
                    }
                }
                if((y-1)>=0){
                    if(maze[x][y-1]=='.'){
                        if(used.find({x,y-1})==used.end()){
                            used.insert({x,y-1});
                            P.push({{x,y-1},val+1});
                        }
                    }
                }
                if((y+1)<m){
                    if(maze[x][y+1]=='.'){
                        if(used.find({x,y+1})==used.end()){
                            used.insert({x,y+1});
                            P.push({{x,y+1},val+1});
                        }
                    }
                }
                
            }
        }
      //  cout<<f<<" "<<z<<" how !\n";
        if(f==0)return ans;
        ans=z;
        return ans;
    }
};
