/*
Platform :- Leetcode
Problem :- Course Schedule II
*/
class Solution {
public:
    vector<int> findOrder(int no_course, vector<vector<int>>& pre) {
        
        vector<int>in(no_course);
        vector<int>P[no_course];
        for(int i=0;i<pre.size();++i){
            P[pre[i][1]].push_back(pre[i][0]);
            in[pre[i][0]]++;
        }
        
        queue<int>bfs;
        int c=no_course;
        for(int i=0;i<c;++i){
           
            if(in[i]==0){
                bfs.push(i);
                no_course--;
            }
        }
        
        
        vector<int>ans;
        while(!bfs.empty()){
            int temp = bfs.front();
            bfs.pop();
            ans.push_back(temp);
            for(int i=0;i<P[temp].size();++i){
                in[P[temp][i]]--;
                if(in[P[temp][i]]==0){
                    bfs.push(P[temp][i]);
                    no_course--;
                }
            }
        }
         
        if(no_course==0)return ans;
        return {};
    }
};
