/*
Platform :- Facebook.com/codingcompetitions
Contest :- Facebook Hackercup 2021
Approach :- Find the cost of converting all letters to one of the most frequent consonent and cost of converting all letters to most frequent vowel, and the min value of both is
            our answer
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
    fin.open("input3.txt");
    ofstream fout;
    fout.open("output.txt");

    int t;
    fin>>t;
    
    for(int z=1;z<=t;++z){
    	fout<<"Case #"<<z<<": ";
    string s;
    fin>>s;
    
    int c=0;
    int n = s.size();
    vector<int>P(26);
    for(int i=0;i<n;++i){
    	char x = s[i];
        if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
            c++;
        }
        P[x-'A']++;
    }
    
     //cost of converting all to one vowel
     int temp = n-c;
     int cost1=0;
     cost1+=temp;
     int mx1=0,mx2=0;
     for(char ch='A';ch<='Z';++ch){
         if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
             mx1 = max(mx1,P[ch-'A']);
         }
         else mx2 = max(mx2,P[ch-'A']);
     }
     
     cost1+=(c-mx1)*2;
     //cost of coverting all to one consonent
     int cost2 = c;
     cost2+=(temp-mx2)*2;
     
     
     //ans is min of cost1 and cost2
     int ans = min(cost1,cost2);
     fout<<ans<<"\n";
  }

     
    fin.close();
    fout.close();
    getch();
}

