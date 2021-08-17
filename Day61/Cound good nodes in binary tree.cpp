/*
Platform :- Leetcode
Approach :- We do dfs (recursively) and maintain a variable 'mx' that stores the max value till that current node in that path and if ( 'mx'<= node->val ) we increment our count++
*/
class Solution {
public:
    int count(TreeNode* node,int mx){
        if(!node)return 0;
        int d=0;
        if(mx<=node->val){
            mx = node->val;
            d=1;
        }
        
        
        return  d+count(node->left,mx)+count(node->right,mx);
         
    }
    int goodNodes(TreeNode* root) {
        if(!root)return 0;
        return count(root,root->val);
    }
};
