/*
Platform :- Leetcode
Approach :- First compute the total sum value of each node ,here we used bfs to find the sum then do dfs and for each node find the sum of nodes of subtree where current node is
            root of that subtree and the find the max value of ( sum *(tot-sum)) ,here [ tot =  sum of values of all nodes ] and [ sum = sum of nodes of subtree of current node]
            
            For avoidng TLE in c++ use long long to caculate the max value and while returning the value returun its mod.
*/
int mod = 1e9+7;
class Solution {
public:
    int dfs(TreeNode* node,long long& ans,long long tot){
        if(!node)return 0;
        
        if(!node->left && !node->right)return node->val;
        
        //temp is the sum of nodes of subtree where current node is root
        long long temp = node->val + dfs(node->left,ans,tot) + dfs(node->right,ans,tot);
         
        ans = max(ans,temp*(tot-temp));
        return temp;
        
    }
    
    int maxProduct(TreeNode* root) {
        long long tot=0;
        if(!root)return tot;
        
        
        //Approach is to find the total sum of nodes and then dfs and find the 
        //sum of node for each subtree of that node
        queue<TreeNode*>bfs;
        bfs.push(root);
        
        while(!bfs.empty()){
            int c = bfs.size();
            for(int i=1;i<=c;++i){
                TreeNode* temp = bfs.front();
                bfs.pop();
                tot+=temp->val;
                if(temp->left){
                    bfs.push(temp->left);
                }
                
                if(temp->right)bfs.push(temp->right);
            }
        }
        long long ans=root->val;
        
        dfs(root,ans,tot);
        return ans%mod ;
    }
};
