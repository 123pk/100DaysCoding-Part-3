/*
Platform :- Facebook
Contest :- Facebook Hackercup 2021 Round 1
Approach :- remove all 'F' from the stiring and now you are left with 'O' and 'X', count all the points where we have 'OX' or 'XO' print the value which is maximum
*/
#include<bits/stdc++.h>
#include<iostream>
#include<istream>
#include<ostream>
#include<fstream>
using namespace std;

int main(){
	ifstream fin;
    fin.open("input2.txt");
    ofstream fout;
    fout.open("output.txt");
    int t;
    fin>>t;
    
    for(int z=1;z<=t;++z){
        fout<<"Case #"<<z<<": ";
        
        int n;
        fin>>n;
        
        string s;
        fin>>s;
        
        //when start with left hand 
        int f=0,g=0,c=0;
        for(int i=0;i<n;++i){
            if(s[i]=='F')continue;
            else{
                if(s[i]=='O'){
                    if(f){
                        g=1;
                        f=0;
                        c++;
                    }
                    else{
                        g=1;
                    }
                }
                else{
                    if(g){
                        f=1;
                        g=0;
                        c++;
                    }
                    else{
                        f=1;
                    }
                }
            }
        }
        
        
        fout<<c<<"\n";
        
    }
    fout.close();
	fin.close();
    
}
