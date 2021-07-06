/*
Platform :- Leetcode
Approach :- find all the path from root to leaf and calculate sum of path too if sum is equal to target add the path to your answer array
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        
        if(!root)return ans;
        queue<pair<TreeNode*,pair<int,vector<int>>>>Q;
        Q.push({root,{root->val,{root->val}}});
        
        while(!Q.empty()){
            int c=Q.size();
            
            for(int i=1;i<=c;++i){
                pair<TreeNode*,pair<int,vector<int>>>temp=Q.front();
                Q.pop();
                TreeNode*y=temp.first;
                int tot=temp.second.first;
                vector<int>z=temp.second.second;
                
                
                
                if(y->left||y->right){
                    if(y->right){
                       z.push_back(y->right->val);
                        Q.push({y->right,{tot+y->right->val,z}});
                    }
                    
                    if(y->left){
                        z=temp.second.second;
                        z.push_back(y->left->val);
                        Q.push({y->left,{tot+y->left->val,z}});
                    }
                }
                else{
                    if(tot==targetSum){
                        ans.push_back(z);
                    }
                }
            }
        }
        
        return ans;
    }
};
