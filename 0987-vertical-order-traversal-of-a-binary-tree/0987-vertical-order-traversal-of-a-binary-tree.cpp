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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*, pair<int,int>>> qu; 
       
        multimap<int, pair<int,int>> mpp; 
        qu.push({root, {0,0}});
        vector<vector<int>> ans;

        while (!qu.empty()) {
            auto [node, pos] = qu.front();
            qu.pop();
            int col = pos.first;
            int row = pos.second;

            mpp.insert({col, {row, node->val}});

            if (node->left) qu.push({node->left, {col-1, row+1}});
            if (node->right) qu.push({node->right, {col+1, row+1}});
        }

        for (auto it = mpp.begin(); it != mpp.end();) {
            int key = it->first;
            auto start = mpp.lower_bound(key);
            auto end   = mpp.upper_bound(key);

            vector<pair<int,int>> tmp;
            for (auto jt = start; jt != end; ++jt) {
                tmp.push_back(jt->second);
            }

           
            sort(tmp.begin(), tmp.end(), [](auto &a, auto &b){
                if (a.first == b.first) return a.second < b.second;
                return a.first < b.first;
            });

            vector<int> res;
            for (auto &p : tmp) res.push_back(p.second);
            ans.push_back(res);

            it = end; 
        }

        return ans;
    }
};
