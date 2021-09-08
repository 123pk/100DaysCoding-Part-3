/*
Platform :- Codeforces
Contest :- Codeforces Educaional Round 113 Div 2
Approach :- Fill all grid with row 'i' where ith player is of type '1' , fill A[i][j] = A[j][i]='=' , now we are left with player with atleast one win , to do so maintain a set
            which show if the which  player has win atleast one match and is satisfying condition '2' and fill A[i][j]='+' and A[j][i]='-' accordingly and add in set 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        
        
        string s;
        cin>>s;
        
        vector<int>draw,win;
        for(int i=0;i<n;++i){
            if(s[i]=='1'){
                draw.push_back(i);
            }
            else win.push_back(i);
        }
        
        vector<vector<char>> ch(n,vector<char>(n,'#'));
        
        for(int i=0;i<draw.size();++i){
            for(int j=0;j<n;++j){
                if(draw[i]==j){
                    ch[draw[i]][j]='X';
                    continue;
                }
                ch[draw[i]][j]='=';
                ch[j][draw[i]]='=';
            }
        }
        
        for(int i=0;i<n;++i)ch[i][i]='X';
        
        set<int>used;
        int g=0;
        for(int l=0;l<win.size();++l){
            int i = win[l];
            int f=0;
            if(used.find(i)!=used.end()){
                f=1;
            }
            
            for(int j=0;j<n;++j){
                if(f){
                    if(ch[i][j]=='#'){
                        ch[i][j]='-';
                        ch[j][i]='+';
                        used.insert(j);
                    }
                }
                else{
                    if(ch[i][j]=='#'){
                        f=1;
                        ch[i][j]='+';
                        ch[j][i]='-';
                        used.insert(i);
                    }
                }
            }
            if(f==0){
                g=1;break;
            }
        }
        
        if(g)cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int i=0;i<n;++i){
                for(int j=0;j<n;++j){
                    cout<<ch[i][j];
                }
                cout<<"\n";
            }
        }
    }
}
