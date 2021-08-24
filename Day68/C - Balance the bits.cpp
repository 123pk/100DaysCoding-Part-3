/*
Platform :- Codeforces
Contest :- Codeforces Round 712 Div 2
Approach :- If you carefully analyse the problem , you will find that it doesn't really matter what we put at places where both string are different , so problem comes down to
            filling all the places where string 1 and string 2 have same character . So for that we take all the index where s[i] == '1' and fill starting position with'('
            ans ending position with ')' now we move starting pointer forward and ending postion backward till the time starting position<= ending position.
            --> then we fill the disimilar position in either '()()()' way or ')()()()' way as it doesnot effect and then check if both fomed stirings are equal or not 
*/
#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    stack<char>P;
    for(auto &x:s){
        if(x=='('){
            P.push(x);
        }
        else{
           if(P.empty())return false;
           P.pop();
        } 
    }
    
    return P.empty();
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int ans=0;
        string a=s,b=s;
        
        vector<int>o,z;
        for(int i=0;i<n;++i){
            if(s[i]=='1')o.push_back(i);
            else z.push_back(i);
        }
        
        if(o.size()==0){
            cout<<"NO\n";
            continue;
        }
        
        int i=0;
        int j= o.size()-1;
         
        
        while(i<=j){
          //  cout<<i<<" "<<j<<endl;
            a[o[i]] = b[o[i]] = '(';
            i++;
            
            if(i<=j){
                a[o[j]]=b[o[j]]=')';
                j--;
            }
        }
     //   cout<<a<<" "<<b<<endl;
        if(z.size()){
            int i=0;
        int j=0;
        
        
        while(i<z.size()){
          if(j==0){
              a[z[i]]='(';
              b[z[i]]=')';
              j=1;
          }
          else{
              j=0;
              a[z[i]]=')';
              b[z[i]]='(';
          }
          i++;
        }
        
        }
       // cout<<a<<" "<<b<<"\n";
        if(check(a)){
            if(check(b)){
                cout<<"YES\n";
                cout<<a<<"\n"<<b<<"\n";
            }
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
        
    }
}
