/*
Platform :- Leetcode
Approach :- use a mx to store the max time taken by any key , for each (0<= i < n) if ( mx < ( releasetime[i] - releasetime[i-1] ) ) then we change mx to that value and store the 
            key[i] in it else if they are equal then we store the lexiographically bigger character in our answer.
*/
class Solution {
public:
    char slowestKey(vector<int>& releaseTime, string keyPressed) {
        char ch;
        int mx;
        for(int i=0;i<releaseTime.size();++i){
            if(i==0){
                mx=releaseTime[i];
                ch=keyPressed[i];
            }
            else{
                int temp = releaseTime[i]-releaseTime[i-1];
                if(temp>=mx){
                    if(temp==mx){
                        ch=max(ch,keyPressed[i]);
                    }
                    else{
                        ch = keyPressed[i];
                        mx = temp;
                    }
                }
            }
        }
        
        return ch;
    }
};
