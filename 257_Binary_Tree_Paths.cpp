class Solution {
public:
	vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> res;
		if(root == NULL) return res; 
		if(root->left == NULL && root->right == NULL) {
			res.push_back(to_string(root->val));
			return res;
		}
		string app = to_string(root->val) + "->";
		vector<string> left = binaryTreePaths(root->left);
		vector<string> right = binaryTreePaths(root->right);
		for(int i = 0; i < max(left.size(), right.size()); i++) {
			if(i < left.size()) {
				left[i] = app + left[i];
				res.push_back(left[i]);
			}
			if(i < right.size()) {
				right[i] = app + right[i];
				res.push_back(right[i]);
			}
		}
		return res;
	}
};
