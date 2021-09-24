/*
Platform :- Geeksforgeeks
Contest :- Job-A-Thon
Approach :- Find all the disjoint set or disjoing mini graphs and store the number of nodes in vector , now try to find the max sum of elements of that array less than equal to K
            which is standard problem and is done using dp .
*/
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
int printDistSum(vector<int> arr, int n,int K)
{
    int sum = 0;
    for (int i=0; i<n; i++)
        sum += arr[i];
 
    // dp[i][j] would be true if arr[0..i-1] has
    // a subset with sum equal to j.
    bool dp[n+1][sum+1];
    memset(dp, 0, sizeof(dp));
 
    // There is always a subset with 0 sum
    for (int i=0; i<=n; i++)
        dp[i][0] = true;
 
    // Fill dp[][] in bottom up manner
    for (int i=1; i<=n; i++)
    {
        dp[i][arr[i-1]] = true;
        for (int j=1; j<=sum; j++)
        {
            // Sums that were achievable
            // without current array element
            if (dp[i-1][j] == true)
            {
                dp[i][j] = true;
                dp[i][j + arr[i-1]] = true;
            }
        }
    }
    
    int ans=0;
    // Print last row elements
    for (int j=0; j<=sum; j++){
        if (dp[n][j]==true){
            if(j<=K){
              ans=j;
            }
            else break;
        }
        
        if(j>K)break;
    }
            
    
    return ans;
}

class Solution {
public:
    int maxTowers(int n, int m, vector<vector<int>> connections, int X){
        // code here
        vector<int>graph[n];
        for(int i=0;i<m;++i){
            graph[connections[i][0]].push_back(connections[i][1]);
            graph[connections[i][1]].push_back(connections[i][0]);
        }
        
        int c=0,ans=0;
        vector<int>used(n);
        vector<int>choose;
        for(int i=0;i<n;++i){
            if(used[i]==0){
                c=0;
                used[i]=1;
                queue<int>bfs;
                bfs.push(i);
                c=1;
                while(!bfs.empty()){
                    int sz = bfs.size();
                    for(int j=0;j<sz;++j){
                        int temp = bfs.front();
                        bfs.pop();
                        
                        for(int k=0;k<graph[temp].size();++k){
                            if(used[graph[temp][k]]==0){
                                used[graph[temp][k]]=1;
                                c++;
                                bfs.push(graph[temp][k]);
                            }
                        }
                    }
                }
              //  cout<<c<<" ";
                if(c<=X)choose.push_back(c);
            }
        }
        
        sort(choose.begin(),choose.end());
       int m1=choose.size();
        ans = printDistSum(choose,m1,X);
        return ans;
    }
};
