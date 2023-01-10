class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p==NULL && q==NULL)  return true;

        if(p==NULL || q==NULL)  return false;

        bool cond1=p->val==q->val;
        bool cond2=isSameTree(p->left,q->left);
        bool cond3=isSameTree(p->right,q->right);

        return cond1&&cond2&&cond3;
        
    }
};
