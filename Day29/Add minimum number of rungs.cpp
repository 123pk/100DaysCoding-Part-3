/*
Platform :- Leetcode
Contest :- Leetcode weekly contest 250
Approach :- if the difference between two adjacent values of array is more than 'dist' then we need to add ((A[i]-A[i-1])-1)/dist  rungs to it
*/
class Solution {
public:
    int addRungs(vector<int>& rugs, int d) {
        int ans=0;
        int temp=0;
        for(int i=0;i<rugs.size();++i){
            int z=(rugs[i]-temp);
            if(z>d){
                
                int val=rugs[i]-(temp+1);
     //           cout<<val<<" "<<temp<<" ";
                ans+=(val/d);
                
                cout<<temp<<endl;
            }
             
                temp=rugs[i];
             
           // cout<<ans<<" check \n"<<temp<<" ";
        }
        return ans;
    }
};
