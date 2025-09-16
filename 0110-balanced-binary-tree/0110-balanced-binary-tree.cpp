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
 
//         if (node == NULL)
//         {
//             return 0;
//         }
//         int lh = check(node  -> left);
//          int rh = check(node -> right);

//          return 1+ (max(lh , rh));
// }
//     bool isBalanced(TreeNode* root) {

//         if ( root == NULL)
//              return true;
      
//         int lh = check(root -> left);
//          int rh = check(root -> right);

        
//          if ( abs((lh - rh ))<= 1   & isBalanced(root -> left) && isBalanced(root -> right))
//             return true;

//          else  return false; 
class Solution {
public:

int check ( TreeNode* node)
{
          if (node == NULL)
        {
            return 0;
        }
        int lh = check(node  -> left);
         int rh = check(node -> right);

         return 1+ (max(lh , rh));
       
        
    }
     bool isBalanced(TreeNode* root) {

        if ( root == NULL)
             return true;
      
        int lh = check(root -> left);
         int rh = check(root -> right);

        
         if ( abs((lh - rh ))<= 1   & isBalanced(root -> left) && isBalanced(root -> right))
            return true;

         else  return false; 
     }
};