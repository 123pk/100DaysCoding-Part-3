/*
Platform :- Codeforces
Contest :- Codeforces Round 667 Div 3
Approach :- convert number into string reverse the string and traverse till the time sum of digits >k , make them to zero and take care of carry which will be taken forward 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        int x;
        cin>>n>>x;
        
        string s;
        s = to_string(n);
        
        int count=0;
        for(auto &x:s)count+=x-'0';
        
        reverse(s.begin(),s.end());
        
        long long ans=0;
        int carry=0;
        for(int i=0;i<s.size();++i){
            if(count<=x)break;
            
            if(carry){
                 
                    int temp=10-(s[i]-'0');
                    if(carry>=temp){
                        count-=(s[i]-'0');
                        carry-=temp;
                        carry+=1;
                        s[i]='0';
                    }
                    else{
                        
                        s[i]=(s[i]+carry);carry=0;
                    }
                  
            }
           // cout<<s[i]<<" carry "<<carry<<" ";
            if(s[i]=='0')continue;
            
            long long z=10-(s[i]-'0');
            count+=1;
            count-=(s[i]-'0');
            carry++;
            long long add=i;
            add=pow(10ll,add)*z;
           // cout<<ans<<" "<<(add)<<"\n";
            ans+=add;
        }
         
        cout<<ans<<"\n";
    }
}
