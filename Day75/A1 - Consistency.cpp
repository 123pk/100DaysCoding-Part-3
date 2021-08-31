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
    fin.open("input.txt");
    ofstream fout;
    fout.open("output.txt");

    int t;
    fin>>t;

    for(int z=1;z<=t;++z)
    {

        long int n;
        fin>>n;

        string s;
        fin>>s;

        long int c=count(s.begin(),s.end(),'A');
        long int d=s.size()-c;
        long int p=s.size()/2;
        if(p==c||p==d)
        {
        	fout<<"Case #"<<z<<": "<<"Y"<<endl;
		}
		else
		{
			fout<<"Case #"<<z<<": "<<"N"<<endl;
		}


        

    }
    fin.close();
    fout.close();
    getch();
}
