/*
Platform :- Leetcode
Approach :- like merge sort we keep on breaking our array into smaller sub array and the choosing the middle of the and accordingly making it left child or right child
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
    
    TreeNode* merge(vector<int>&A,int start,int end){
        if(end<=start)return NULL;
        
        TreeNode*root=new TreeNode;
        root->val=A[(start+end)/2];
        
        root->left=merge(A,start,(start+end)/2);
        root->right=merge(A,(start+end)/2+1,end);
        
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return merge(nums,0,n);
    }       
};
