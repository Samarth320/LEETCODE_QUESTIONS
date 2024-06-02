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

    void find_Post_Order(TreeNode* root , vector<int>& ans)
    {
        if(root == NULL)
        return;

        else
        {
           find_Post_Order(root->left , ans); 
           find_Post_Order(root->right , ans); 
           ans.push_back(root->val);
        }
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;

        find_Post_Order(root,ans);

        return ans;
    }
};