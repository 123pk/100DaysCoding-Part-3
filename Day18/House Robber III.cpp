/*
Platform :- Leetcode
Hint :- dfs on trees 
*/
class Solution {
    pair<int,int> dfs(TreeNode* root){
        if(!root){
            return {0,0};
        }
        pair<int,int>left = dfs(root->left);
        pair<int,int>right = dfs(root->right);
        return make_pair( root->val+left.second+right.second ,
                         (max(left.first,left.second)+max(right.first,right.second)));
    }
public:
    int rob(TreeNode* root) {
        pair<int,int>ans = dfs(root);
        return max(ans.first,ans.second);
    }
};
