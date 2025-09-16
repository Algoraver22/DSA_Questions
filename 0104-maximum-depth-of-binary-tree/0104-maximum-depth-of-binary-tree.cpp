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
    int cal( TreeNode* root)
    {
        if ( root == NULL)
          return 0;

        int left = cal( root -> left);
        int right = cal ( root -> right);

        return 1+max( left , right);   
    }
    int maxDepth(TreeNode* root) {
        if ( root == NULL)
           return 0;

        return cal ( root) ;
    }
};