/*
Platform :- Leetcode
Problem :- Lowest common ancestor
Approach :- The first node that is greater than both the elements is our lca for those nodes in binary search tree , do bfs and as soon as you find the above condition
            break and return the value
*/
class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL)
        {
            return root;
        }
        
        queue<TreeNode*>P;
        int temp1=min(p->val,q->val);
        int temp2=max(q->val,p->val);
        
        P.push(root);
        int c=1;
        while(!P.empty())
        {
            for(int i=0;i<c;++i)
            {
                TreeNode*t1=P.front();
                if(t1->val>=temp1&&t1->val<=temp2)
                {
                    return t1;
                }
                if(t1->left!=NULL)
                {
                    P.push(t1->left);
                }
                
                if(t1->right!=NULL)
                {
                    P.push(t1->right);
                }
                P.pop();
            }
        }
        return root;
        
    }
};
