/*
Platform :- Leetcode
Problem :- Remove All Adjacent Duplicates In String
Approach :- we will use stack and push element in stack and if top elememnt of stack is equal to current element we pop it out of stack , at the end the string 
            formed by left characters in stack in correct order is our answer 
*/
class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        stack<char>P;
        for(auto x:s){
            if(!P.empty()){
                if(P.top()==x){
                    P.pop();
                }
                else P.push(x);
            }
            else P.push(x);
        }
        
        while(!P.empty()){
            ans+=P.top();
            P.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
