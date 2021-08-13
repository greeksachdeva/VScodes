/*
 * @lc app=leetcode id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nulong long intptr), right(nulong long intptr) {}
 *     TreeNode(int x) : val(x), left(nulong long intptr), right(nulong long intptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   long long int solve(TreeNode* root, long long int &ans)
    {
        if(root==NULL)
            return 0;

        long long int left = solve(root->left,ans);
        long long int right = solve(root->right,ans);

        long long int temp = max(left, right) + 1;
        long long int res = max(temp, 1 + left + right);
        ans = max(res,ans);
        return temp;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        long long int ans = INT_MIN;
        solve(root, ans);
        return ans-1;
        
    }
    
};
// @lc code=end

