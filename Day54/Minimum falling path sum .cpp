/*
Platform :- Leetcode
Approach :- we will create a new grid with same dimension as of input grid and fill row 1 as it is in main grid then from row 2 we will greedily check for minimum sum possible
            for each index .  we will  lookat cells at (i-1,j), (i-1,j-1) and (i-1 ,j+1) valid pairs out of these three and find the minimum cost for cell (i,j) which is 
            minimum cost out of those three valid cells + value of current cell in main grid and store that minimum value in our new grid .
            
            At the end we will check all the value in last row and return the minimum value
*/

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>>dist(n,vector<int>(m,1000));
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                
                if(i==0){
                    dist[i][j] = matrix[i][j];
                    continue;
                }
                dist[i][j] = min(dist[i-1][j]+matrix[i][j],dist[i][j]);
                
                if((j+1)<m){
                    dist[i][j] = min(dist[i-1][j+1]+matrix[i][j],dist[i][j]);
                }
                
                if((j-1)>=0){
                    dist[i][j] = min(dist[i-1][j-1]+matrix[i][j],dist[i][j]);
                }
            }
        }
        
        int ans = INT_MAX;
        for(int i=0;i<m;++i){
            ans = min(ans,dist[n-1][i]);
        }
        return ans;
    }
};
