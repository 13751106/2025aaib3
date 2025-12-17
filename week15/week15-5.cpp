/// week15-5.cpp
/// LeetCode ¾Ç²ß­pµe 104. Maximum Depth of Binary Tree
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root==nullptr) return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return max(left, right)+1;
    }
};
