  bool isMirrore(TreeNode* p, TreeNode* q){
        if(!p && !q){
            return true;
        }
        if(p && q){
            return (p->val==q->val) && isMirrore(p->left,q->right) && isMirrore(p->right,q->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return isMirrore(root->left,root->right);
    }
