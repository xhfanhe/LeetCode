class Solution {
public:
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		vector<vector<int>> retVal;
		levelOrder(root, retVal, 0);
		reverse(retVal.begin(), retVal.end());
		return retVal;
	}
	
	void levelOrder(TreeNode* root, vector<vector<int>> &v, int num) {
		if(root == NULL) return;
		if(v.empty() || num>(v.size()-1)) v.push_back(vector<int>());
		v[num].push_back(root->val);
		levelOrder(root->left, v, num+1);
		levelOrder(root->right, v, num+1);
	}
};
