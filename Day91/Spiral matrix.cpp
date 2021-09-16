/*
Platform :- Leetcode
Approach :- basic implementation , there are four cyclic operations you need to make ( go from) 
            1. left to right
            2. top to bottom
            3. right to left
            4. bottom to top
            ans keep pushing the elements , you will also have to maintain four variables which will be your limit for left,right,up and down movement.
*/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        
        int l=0,t=0,r=matrix[0].size()-1,b=matrix.size()-1,f=0;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        
        while(1){
            int g=0;
            if(f==0){
                //left to right
                for(int j = l;j<=r;++j){
                    g=1;
                    ans.push_back(matrix[t][j]);
                }
                t++;
            }
            else if(f==1){
                //top to down
                for(int i = t;i<=b;++i){
                    g=1;
                    ans.push_back(matrix[i][r]);
                }
                r--;
            }
            else if(f==2){
                //right to left
                for(int j = r;j>=l;--j){
                    g=1;
                    ans.push_back(matrix[b][j]);
                }
                b--;
            }
            else{
                //down to top
                for(int i = b;i>=t;--i){
                    g=1;
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
            if(g==0)break;
           // cout<<l<<" "<<t<<" "<<r<<" "<<b<<endl;
            f++;
            f=f%4;
        }
        
        return ans;
    }
};
