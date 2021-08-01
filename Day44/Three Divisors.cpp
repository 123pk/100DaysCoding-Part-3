/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 252
Approach :- Find all the factors of given number (unique) if they are equal to 3 return true else false
*/
class Solution {
public:
    bool isThree(int n) {
        set<int>P;
        for(int i=1;i*i<=n;++i){
            if(n%i==0){
                P.insert(i);
                P.insert(n/i);
            }
        }
        return P.size()==3;
    }
};
