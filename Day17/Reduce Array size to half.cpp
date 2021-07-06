/*
Platform :- Leetcode
Approach :- sort the array based on their  frequency in decresing order , remove element with highest frequency out of all continue this until you acheive size <= half
*/
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int>temp;
        map<int,int>P;
        for(auto &x:arr)P[x]++;
        
        for(auto &x:P){
            temp.push_back(x.second);
        }
        
        sort(temp.begin(),temp.end(),greater<int>());
        int ans=0,count=0;
        int n=arr.size();
        for(auto &x:temp){
            if(count<(n/2)){
                count+=x;
                ans++;
            }
            else break;
        }
        
        
        return ans;
        
        
    }
};
