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
//   vector<vector<int>>ans;
//         if ( root == NULL)
//             return ans;
//         queue<TreeNode* >q;
//         q.push(root);
//         int lev = 0 ;
//         while ( !q.empty())
//         {
//             int size = q.size();
//             vector<int>res;

//             for ( int i = 0 ; i < size ; i++)
//             {
//                 TreeNode*  valu = q.front();
//                 q.pop();
//                 int data = valu -> val;
//                 res.push_back(data);

//                 if ( valu -> left )
//                    q.push(valu -> left);

//                 if ( valu -> right)
//                    q.push( valu -> right);   

//             }
//             if ( lev % 2 != 0)
//                 reverse ( res.begin() , res.end());

//             ans.push_back(res);

//             lev++;
//         }
//         return ans;

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;

         if ( root == NULL)
             return ans;
        queue<TreeNode* >qu;
        qu.push( root );

        int lev = 0;

       while (!qu.empty()) {
    int n = qu.size();         
    vector<int> res;
   

    for (int i = 0; i < n; i++) {
        TreeNode* node = qu.front();
        qu.pop();
        res.push_back(node->val);

        if (node->left) qu.push(node->left);
        if (node->right) qu.push(node->right);
    }
  if ( lev % 2 != 0)
    reverse(res.begin() , res.end());
    lev++;
    ans.push_back(res);

        }

      return ans;
       
    }
};