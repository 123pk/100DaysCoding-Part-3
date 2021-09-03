/*
Platform :- leetcode
Approaach :- The key idea is:
         1. We scan numbers from left to right, build the tree one node by one step;
         2. We use a stack to keep some (not all) tree nodes and ensure a decreasing order;
         3. For each number, we keep pop the stack until empty or a bigger number; The bigger number (if exist, it will be still in stack) is current number's root, 
            and the last popped number (if exist) is current number's left child (temporarily, this relationship may change in the future); Then we push current number into the stack.
*/
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        vector<TreeNode*> stk;
        for (int i = 0; i < nums.size(); ++i)
        {
            TreeNode* cur = new TreeNode(nums[i]);
            while (!stk.empty() && stk.back()->val < nums[i])
            {
                cur->left = stk.back();
                stk.pop_back();
            }
            if (!stk.empty())
                stk.back()->right = cur;
            stk.push_back(cur);
        }
        return stk.front();
    }
};
