/*
Platform :- Codeforces
Contest :- Codeforces Global Round 14
Approach :- If you will carefully read the  problem you will be able to distinguish problem into two cases 
           Case 1 :- when (l == r)  then we iterate through left socks and their frequency , if same color of socks is present in right side then we remove the ( min(left[x],right[x]) )
                     from both ends and add up the remaining left[x] .
                    
           Case 2 :- when (l != r) in this case we first make l == r in efficient way possible which is to change those elements from left to right or vice versa which are 
                     available in large extent and before doing so we remove the matching pairs of left and right from both sides , so we are left with unmatcher left and right socks
                     if the amount of some unmatched socks is >1 then we add floor[x/2] to minimum value side.
                     and then it becomes case 1 and we solve in same way as we solve case 1.
*/
#include<bits/stdc++.h>
using namespace std;

int cost(map<int,int>left,map<int,int>right){
    int ans=0;
    
    for(auto &x:left){
        if(right[x.first]){
            x.second-=min(x.second,right[x.first]);
            if(x.second)ans+=x.second;
        }
        else ans+=x.second;
    }
    
    return ans;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        
        vector<int> A(n);
        map<int,int>left,right;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(i<l)left[A[i]]++;
            else right[A[i]]++;
        }
        
        int ans=0;
        if(l==r){
            ans+=cost(left,right);
        }
        else{
            //make l = = r;
            priority_queue<pair<int,int>>P;
            
            for(auto& x:left){
                if(right[x.first]){
                    int temp=min(x.second,right[x.first]);
                    right[x.first]-=temp;
                    x.second-=temp;
                }
            }
            
            if(l>r){
                for(auto x:left){
                    P.push({x.second,x.first});
                }
                
                while(r<l){
                    pair<int,int>temp = P.top();
                    P.pop();
                    
                    if(temp.first>1){
                        int z  = temp.first/2;
                        z = min(z,abs(l-r)/2);
                        r+=z;
                        l-=z;
                        ans+=z;
                        left[temp.second]-=z;
                        right[temp.second]+=z;
                    }
                    else{
                        ans++;
                        r++;
                        l--;
                        left[temp.second]--;
                        right[temp.second]++;
                    }
                }
            }
            else{
                for(auto x:right){
                    P.push({x.second,x.first});
                }
                while(r>l){
                    pair<int,int>temp = P.top();
                    P.pop();
                    
                    if(temp.first>1){
                        int z  = temp.first/2;
                        z = min(z,abs(l-r)/2);
                        r-=z;
                        l+=z;
                        ans+=z;
                        left[temp.second]+=z;
                        right[temp.second]-=z;
                    }
                    else{
                        ans++;
                        r--;
                        l++;
                        left[temp.second]++;
                        right[temp.second]--;
                    }
                }
                
               // for(auto x:left)cout<<x.first<<' '<<x.second<<"\n";
                
               // for(auto x:right)cout<<x.first<<' '<<x.second<<"\n";
            }
            
            ans+=cost(left,right);
        }
        cout<<ans<<"\n";
        
    }
}
