/*
Platform :- Leetcode
Approach :- let your answer be [ min( one ,zero ) ] where (one = no_of_one_in_string ) and ( zero = no_of_zero_in_string ) , now run a loop and and for each index find the cost 
            if we can make all the value to left of that index to be '0' and all the values to right to be '1' .
            We we use two more value e,f which will take count of number of one's till that index and number of '0' till that index we can find number of '0' to left and '1' to 
            the right easily.
*/
class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int c=0,d=0;
        for(auto &x:s){
            if(x=='0')c++;
            else d++;
        }
        
        int ans=min(c,d);
        int e=0,f=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='1')f++;
            else e++;
            
            int temp=(f+(c-e));
            ans=min(ans,temp);
        }
        
        return ans;
    }
};
