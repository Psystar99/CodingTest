/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        int maxval=max(p->val,q->val);
        int minval=min(p->val,q->val);
        
        while(1){
          //1. 한쪽 왼 한쪽 오
        if(minval<root->val&&root->val<maxval){
            return root;
        }
        //2. 둘다 왼
        else if(maxval<root->val){
            root=root->left;
        }
        //3. 둘다 오
        else if(root->val<minval){
            root=root->right;
        }
        //4. root 자체가 p나 q
        else if(root->val==maxval||root->val==minval) return root;
        }
        
    }
};
