/*
Platform :- Hackerrank
Approach :- find n,m which are floor and ceil of lenght of string , if ( m*n < s.length() ) then we add 1 to n , now we bruteforce all the values in 2d character array
            where no of rows is 'n' and no of coloumn is 'm' and fill the matrix with s[k] , k++ , if k>=s.length then we let the cell empty
*/
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    int m = ceil(sqrt(s.size()));
    int n = floor(sqrt(s.size()));
    
    if((m*n)<s.size())n++;
    
    char ch[n][m];
    int k=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(k<s.size()){
                ch[i][j]=s[k];
                k++;
            }
            else{
                ch[i][j]='*';
            }
        }
    }
    
    string ans;
    for(int j=0;j<m;++j){
        for(int i=0;i<n;++i){
            if(ch[i][j]=='*')continue;
            ans+=ch[i][j];
        }
        ans+=' ';
    }
    
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
