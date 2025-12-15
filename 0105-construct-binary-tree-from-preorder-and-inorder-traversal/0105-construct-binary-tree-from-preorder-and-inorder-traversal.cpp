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
   TreeNode* build(vector<int>& preorder,int pl , int ph , vector<int>& inorder , int il , int ih )
   {
    if ( pl > ph)
      return NULL;
    TreeNode* root = new TreeNode(preorder[pl]);

    if ( pl == ph)
        return root;

    int i = il;

    while( il <= ih)
    {
        if (inorder[i] == preorder[pl])
          break;

        i++;  
    }   
    int left = i - il;
    int right = ih - i;

    root -> left = build( preorder , pl + 1 , pl + left , inorder , il , i -1); 
     root -> right = build( preorder , pl + 1 + left , ph , inorder , i+1 , ih); 
     return root;

   }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
       return build(preorder , 0 , n-1  ,inorder , 0 , n-1);
        
    }
};