/*
Platform :- Leetcode
Approach :- We use two stack one to store the number of children deleted of current node and other store the current node , if no of deleted children for current node is 2 then 
            we pop our the current node from stack and increment the number of deleted node of parent of current node by 1. If stack is not empty after traversing to the very end
            then we return false else return true.
*/
class Solution {
public:
    bool isValidSerialization(string preorder) {
        
        
        preorder+=',';
        string temp;
        int g=0;
        for(auto &x:preorder){
            if(x!=','){
                if(x=='#')temp+=x;
                else g=1;
            }
            else {
                if(g){
                    temp+='*';
                    g=0;
                }
            }
        }
    //    cout<<temp<<"\n";
        
        int f=0,c=0,d=0;
        stack<char>P;
        stack<int>Q;
        for(int i=0;i<temp.size();++i){
            if(temp[i]=='#'){
                if(P.empty() && i)return false;
                
                while(!P.empty()){
                    int tot = Q.top();
                    tot+=1;
                    if(tot==2){
                        P.pop();
                        Q.pop();
                    }
                    else {
                        Q.pop();
                        Q.push(tot);
                        break;
                    }
                }
            }
            else{
                P.push(temp[i]);
                Q.push(0);
            }
            if(i!=temp.size()-1 && P.empty()){
                return false;
            }
        }
         
        return P.empty();
    }
};
