/*
Platform :- Facebook.com/codingcompetitions
Contest :- Facebook Hackercup 2021 Qualification round
Approach :- We will treat each character and node and the relation given as the edge between them then we will find the cost of coverting current nodes to all others which are 
            reachable from this node using dfs/bfs and cost of each edge be '1' then we look for character which is reachable from all the characters and have minimum cost
*/
#include <bits/stdc++.h>
#include<iostream>
#include<istream>
#include<ostream>
#include<fstream>
using namespace std;
#include<conio.h>

int main() {

    ifstream fin;
    fin.open("input2.txt");
    ofstream fout;
    fout.open("output.txt");

    int t;
    fin>>t;
    for(int z=1;z<=t;++z){
        
        fout<<"Case #"<<z<<": ";
        
        vector<int>al(26);
        string s;
        fin>>s;
        int n=s.size();
        
        
        
        vector<int>P[26];
        int m;
        fin>>m;
        for(int i=0;i<m;++i){
            char u,v;
            fin>>u>>v;
            
            P[u-'A'].push_back(v-'A');
        }
        
        
        
        //we will check from each character where else can I move
        map<int,int>Q;
        map<int,int>cost;
        set<int>unq;
        for(int zz=0;zz<n;++zz){
                char x=s[zz];
                int i=x-'A'; 
                //do bfs from each charcter to last character it can reach
                queue<pair<int,int> >bfs;
                bfs.push({i,0});
                vector<int>used(26);
                used[i]++;
                
                while(!bfs.empty()){
                    int sz = bfs.size();
                    for(int k=1;k<=sz;++k){
                        pair<int,int>temp = bfs.front();
                        bfs.pop();
                        int ch = temp.first;
                        int c = temp.second;
                        
                        //update the cost and number of occurence
                        Q[ch]++;
                        cost[ch]+=c;
                        
                        for(int j=0;j<P[ch].size();++j){
                            if(used[P[ch][j]]==0){
                                used[P[ch][j]]++;
                                bfs.push({P[ch][j],c+1});
                            }
                        }
                    }
                }
                 
            
        }
        map<int, int>::iterator x;
        //values which occure exactly n times
        int ans=-1;
        for(x = Q.begin(); x != Q.end(); ++x){
         //   cout<<x.first<<" "<<x.second<<"\n";
            if(x->second>=n){
               if(ans==-1){
                   ans=cost[x->first];
               }
               else ans=min(ans,cost[x->first]);
            }
        }
        
        fout<<ans<<"\n";
    }

    fin.close();
    fout.close();
    getch();
}

