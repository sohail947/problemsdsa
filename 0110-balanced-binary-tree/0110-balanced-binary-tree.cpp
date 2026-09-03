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
    bool isBalanced(TreeNode* root) {
        return defheight(root) != -1;
    }
    int defheight(TreeNode* root){
    if(root == NULL) return 0;

    int leftht = defheight(root->left);
    if(leftht == -1) return -1;
     int rightht= defheight(root->right);
     if(rightht == -1) return -1;

     if(abs(leftht-rightht)>1) return -1;
     return max(leftht,rightht) + 1;
    }     
    };