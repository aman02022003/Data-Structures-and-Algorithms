class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(!root){
            return ans;
        }
        bool LtoRdir=true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int width=q.size();
            vector<int>onelevel(width);
            for(int i=0;i<width;i++){
                TreeNode* frontnode=q.front();
                q.pop();
                int index=LtoRdir ? i :width-i-1;
                onelevel[index]=frontnode->val;

                if(frontnode->left){
                    q.push(frontnode->left);
                }
                if(frontnode->right){
                    q.push(frontnode->right);
                }
               
            }
             LtoRdir=!LtoRdir;
                ans.push_back(onelevel);
        }
        return ans;

    }
};
