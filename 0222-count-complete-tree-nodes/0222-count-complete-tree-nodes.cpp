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
    int countNodes(TreeNode* root) {
        //optimal 1
    //   if(root == NULL)
    //     return 0;
    //   int left = countNodes(root->left);
    //   int right = countNodes(root->right);
    //   return 1+left+right;  

    //optimal 2
    
    if(root == NULL)
       return 0;
    int left_level=1, right_level=1;
    TreeNode *l = root->left;
    while(l){
        l=l->left;
        left_level = left_level + 1;
    }  
    TreeNode *r = root->right;
    while(r){
        r=r->right;
        right_level = right_level+1;
    }
    if(left_level == right_level){
        return pow(2,left_level)-1;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
    }
};