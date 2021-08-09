/*
Platform :- Leetcode
Approach :- We can do like the basic addition we have learnt for the first time in our school using same concept of "carry" and moving from end to front .
            Take i,j where i = num1.size()-1 & j = num2.size()-1 , we will run a [ while( i>=0 || j>=0 ) ] we do the addition and take care of carry 
*/
class Solution {
public:
    string addStrings(string nums1, string nums2) {
        int i = nums1.size()-1;
        int j = nums2.size()-1;
        
        string ans="";
        int carry=0;
        while(i>=0 || j>=0){
            if(i<0){
                int temp=carry+(nums2[j]-'0');
                int rem = temp%10;
                ans+=to_string(rem);
                temp/=10;
                carry=temp;
                j--;
            }
            else if(j<0){
                int temp=carry+(nums1[i]-'0');
                int rem = temp%10;
                ans+=to_string(rem);
                temp/=10;
                carry=temp;
                i--;
            }
            else{
                int temp=carry+(nums2[j]-'0')+(nums1[i]-'0');
                int rem = temp%10;
                ans+=to_string(rem);
                temp/=10;
                carry=temp;
                i--;
                j--;
            }
           // cout<<ans<<" "<<(i+1)<<" "<<(j+1)<<" "<<carry<<endl;
        }
        if(carry){
            ans+=to_string(carry);
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};
