/*
Platform :- Codeforces 
Contest :- Codeforces Round 739 Div 3
Approach :- reverse the string and store the index of each character when first appeared, sort the characters based on increasing order of that index , now the number of occurence
            of ( ith ) character in original array is ( total_occurence / i ) if (total_occurence % i!=0) then it is not possible else we find [ x = sum of [ ( total_occurence / i ) ] ]
            and choose the first 'x' elements and try to create the given string if we are not able to do so we print ("-1") else we print the string and order in which character 
            are choosen
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        map<char,int>P,R;
        for(int i=s.size()-1;i>=0;--i){
            if(P[s[i]]==0)P[s[i]]=i+1;
            R[s[i]]++;
        }
        string fin;
        vector<pair<int,char>>Q;
        for(auto x:P){
            Q.push_back({x.second,x.first});
        }
        
        sort(Q.begin(),Q.end());
        int f=0;
        int d=1;
        int z=0;
        for(auto &x:Q){
            fin+=x.second;
            if(R[x.second]%d){
                f=1;break;
            }
            else{
                R[x.second]/=d;
                z+=R[x.second];
            }
            d++;
        }
        
        if(f)cout<<"-1\n";
        else{
            string ans;
            for(int i=0;i<z;++i){
                ans+=s[i];
                R[s[i]]--;
            }
            
            for(char ch='a';ch<='z';++ch){
                if(R[ch]){
                    f=1;break;
                }
            }
            
            if(f)cout<<"-1\n";
            else{
                string rec;
                rec=ans;
                string temp=ans;
                set<char>used;
                for(int i=0;i<fin.size();++i){
                    used.insert(fin[i]);
                    for(int j=0;j<temp.size();++j){
                        if(used.find(temp[j])==used.end()){
                            rec+=temp[j];
                        }
                    }
                }
                
                if(rec!=s)f=1;
                
                if(f)cout<<"-1\n";
                else cout<<ans<<" "<<fin<<"\n";
            }
        }
    }
}
