class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }

        int lefth=maxDepth(root->left);
        int righth=maxDepth(root->right);
        int ans=max(lefth,righth)+1;
        return ans;
    }
};
