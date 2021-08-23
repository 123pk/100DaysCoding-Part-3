/*
Platform :- Leetcode
Approach :- Do bfs on array and maintain a haspmap which store which element is present or not ,if we reach a node which has value 'x' then we check if (k-x) is already present
            or not ,if it is present then we return true else we didn't found any such case then return false
*/

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        map<int,int>Q;
        
        if(!root)return 0;
        
        queue<TreeNode*>P;
        P.push(root);
        
        while(!P.empty()){
            int c = P.size();
            for(int i=0;i<c;++i){
                TreeNode* temp = P.front();
                P.pop();
                
                
                if(Q[k-temp->val])return true;
                Q[temp->val]++;
                if(temp->left){
                    P.push(temp->left);
                }
                
                if(temp->right)P.push(temp->right);
            }
        }
        return false;
    }
};
