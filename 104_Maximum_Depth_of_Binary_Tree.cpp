/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * 	int val;
 * 	TreeNode *left;
 * 	TreeNode *right;
 * 	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	int maxDepth(TreeNode* root) {
		int d = 0;
		if(root == NULL) return 0;
		else if(root->left==NULL && root->right==NULL) return 1;
		else d += 1+max(maxDepth(root->left), maxDepth(root->right));
		return d;
	}
};
