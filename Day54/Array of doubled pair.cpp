/*
Platform :- Leetcode
Approach :- sort the array in descending order , now there are two cases 
           1. element of array is non-negative
              --> look for x/2 , half of current element and check P[x]<=P[x/2] , if x is odd or this condition is not satisfied return false
           2. element of array is negative
              --> then  look for 2*x , double of this element P[x] <=P[2*x] , if this condition is not satisfied return false
           if you come out of loop then all your condition are satisfied and return true
*/
class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        
        map<int,int>P;
        for(auto &x:arr){
            P[x]++;
        }
        sort(arr.begin(),arr.end(),greater<int>());
        for(auto&x:arr){
            if(P[x]){
             
                if(x<0){
                    int temp=x*2;
                    if(P[x]<=P[temp]){
                        P[temp]-=P[x];
                        P[x]=0;
                    }
                    else return false;
                    continue;
                }
                
                if(x%2)return false;
                
                int temp=x/2;
                if(P[x]<=P[temp]){
                    P[temp]-=P[x];
                    P[x]=0;
                }
                else return false;
            }
        }
        return true;
    }
};
