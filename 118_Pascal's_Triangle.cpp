class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> pascal;
		if(numRows == 0) return pascal;

		pascal.push_back(vector<int> ());	
		pascal[0].push_back(1);
		if(numRows == 1) return pascal;
		
		for(int i = 1; i < numRows; i++) {
			pascal.push_back(vector<int> ());
			pascal[i].push_back(1);
			for(int j = 1; j < i; j++) {
				int num = pascal[i-1][j] + pascal[i-1][j-1];
				pascal[i].push_back(num);
			}
			pascal[i].push_back(1);
		}
		return pascal;
	}
};
