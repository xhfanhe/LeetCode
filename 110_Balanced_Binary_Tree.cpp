class Solution {
public:
	bool isBalanced(TreeNode* root) {
		return dfsDepth(root) != -1;
	}

	int dfsDepth(TreeNode* root) {
		if(root == NULL) return 0;
		int leftDepth = dfsDepth(root->left);
		if(leftDepth == -1) return -1;
		int rightDepth = dfsDepth(root->right);
		if(rightDepth == -1) return -1;
		if(abs(leftDepth-rightDepth) > 1) return -1;
		return(max(leftDepth, rightDepth)+1);
	}
};
