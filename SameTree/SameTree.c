//
// Created by zxw on 18-1-28.
//
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p == NULL || q == NULL){
        return (p == q);
    }else{
        if(p->val != q->val){
            return false;
        }else{
            return isSameTree(p->left, q->left)&&isSameTree(p->right, q->right);
        }
    }

}
