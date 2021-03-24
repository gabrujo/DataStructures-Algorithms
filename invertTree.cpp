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
    TreeNode* invertTree(TreeNode* root) {
        //mirror image of the binary tree
        //recursion problem
        //start from the root
        //first travel to left, then right
        
        //swap the left and right leafs
        //swapping, using a third variable
        swap(root);
        return root;
           
     }
 private:
    void swap (TreeNode* current){
        if (!current)
            return;
        
        swap(current->left);
        swap(current->right);
        
        TreeNode *temp;
        temp = current->left;
        current->left = current->right;
        current->right = temp;
        
    }

};
