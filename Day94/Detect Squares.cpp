/*
Platform :- Leetcode
Contest :- Weekly contest 259
Approach :- 
*/
class DetectSquares {
public:
    vector<int>x[1001],y[1001];
    map<pair<int,int>,int>pres;
    DetectSquares() {
        
    }
    
    void add(vector<int> point) {
        x[point[0]].push_back(point[1]);
        y[point[1]].push_back(point[0]);
        pres[{point[0],point[1]}]++;
    }
    
    int count(vector<int> point) {
        int ans=0;
        vector<int>z[1001];
        for(int i=0;i<x[point[0]].size();++i){
            if(abs(point[1]-x[point[0]][i])==0)continue;
            z[abs(point[1]-x[point[0]][i])].push_back(x[point[0]][i]);
           
        }
        
        for(int i=0;i<y[point[1]].size();++i){
            if(z[abs(point[0]-y[point[1]][i])].size()){
                for(auto &x:z[abs(point[0]-y[point[1]][i])]){
                    ans+=pres[{y[point[1]][i],x}];
                }
                                
            }
        }
        
        return ans;
    }
};
