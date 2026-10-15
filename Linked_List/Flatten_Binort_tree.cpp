/*
Problrm -> Given a tree convert it inti right skewed tree.
 */


class Solution {
public:
    void check(TreeNode *root){
        if(root==nullptr){
            return;
        }
        TreeNode *hold = root->right;
        root->right = root->left;
        root->left = nullptr;
        check(root->right);
        TreeNode* temp = root;
        while (temp->right != nullptr) temp = temp->right;
        temp->right = hold;
        check(hold);
    }
    void flatten(TreeNode* root) {
        check(root);
    }
};
