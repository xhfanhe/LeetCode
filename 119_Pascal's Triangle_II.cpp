class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> pascal(rowIndex+1, 0);
		pascal[0] = 1;
		if(rowIndex == 0) return pascal;

		for(int i = 1; i <= rowIndex; i++) {
			for(int j = i; j >= 1; j--) {
				pascal[j] += pascal[j-1];
			}
		}
		return pascal;
	}
};
