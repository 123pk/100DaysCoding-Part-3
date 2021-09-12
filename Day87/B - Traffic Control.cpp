/*
Platform :- Facebook 
Contest :- Facebook Hackercup 2021 Round 1
Approach :- If you will carefully read the constraints and the condition you will find the solution only exist for value 'a' and 'b' if both are greater than or equal to (n+m-1)
            Now if this condition is satisfied then we can always have one common side let in our case be the right most column which will be part of shortest path for both the paths
            from top rigtht to bottom left and top left to bottom right , we will fill it with all '1' , now we are left to fill top row and bottom row with last cell already filled
            under last column , so we will fill '1'  in each cell from j = m-2 to 1 , as j==0 we fill all the remaining values required to make path sum 'a' and 'b' for all other cell
            we fill them with 1000.
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
           int n,m,a,b;
        fin>>n>>m>>a>>b;
        
        int lim = n+m-1;
        if(a<lim || b<lim)fout<<"Impossible\n";
        else{
            fout<<"Possible\n";
            a = a-n;
            b = b-n;
            for(int i=0;i<n;++i){
                for(int j=0;j<m;++j){
                    if(j==m-1){
                        fout<<1<<" ";
                    }
                    else{
                        if(i==0||i==n-1){
                            if(i==0){
                                if(j==0){
                                    fout<<(a-(m-2))<<" ";
                                }
                                else {
                                    fout<<"1 ";
                                //    a--;
                                }
                            }
                            else {
                                if(j==0){
                                    fout<<(b-(m-2))<<" ";
                                }
                                else{
                                    fout<<1<<" ";
                                    b--;
                                }
                            }
                        }
                        else fout<<"1000 ";
                    }
                    
                }
                fout<<"\n";
            }
            
        }
        
    }
    fout.close();
	fin.close();
    
}
