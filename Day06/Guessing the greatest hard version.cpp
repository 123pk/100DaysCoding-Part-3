/*
Pltform :- Codeforces 
Contest :- Codeforces Round 703 Div 2
Approach :- standard Binary search
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int start=1,end=n,si=-1;
    cout<<"? "<<start<<" "<<end<<endl;
    cin>>si;
    int mid=(start+end)/2;
    if(n==2){
        if(si==1)cout<<"! "<<2<<endl;
        else cout<<"! "<<1<<endl;
        cout.flush();
        exit(0);
    }
    
    int z;
    int t=39;
    int ans=1;
    
    while(t){
       
        if(si==end||si==start){
             mid=(start+end)/2;
            if(si==start){
                cout<<"? "<<si<<" "<<mid<<endl;
                cin>>z;
                cout.flush();
                if(z==si){
                    end=mid;
                }
                else{
                    start=mid;
                    cout<<"? "<<mid<<" "<<end<<endl;
                    cin>>z;
                    si=z;
                }
            }
            else{
                cout<<"? "<<mid<<" "<<si<<endl;
                cin>>z;
                cout.flush();
                if(z==si){
                    start=mid;
                }
                else{
                    end=mid;
                    cout<<"? "<<start<<" "<<mid<<endl;
                    cin>>z;
                    si=z;
                }
            }
        }
        else{
            cout<<"? "<<start<<" "<<si<<endl;
            cin>>z;
            cout.flush();
            
            if(z==si){
                end=si;
            }
            else{
                start=si;
            }
            
        }
        t--;
        if((end-start)==1)break;
    }
    if(si==start)ans=end;
    else ans=start;
    cout<<"! "<<ans<<endl;
    cout.flush();
}
