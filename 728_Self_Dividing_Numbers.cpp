class Solution {
	public:
	vector<int> selfDividingNumbers(int left, int right) {
		vector<int> out;
		for(int i = left; i <= right; i++) {
			bool ok = 1;
			int j = i;
			while(j) {
				int d = j%10;
				if(d == 0 || i%d) {
					ok = 0;
					break;
				}
				j /= 10;
			}
			if(ok) out.push_back(i);
		}
		return out;
	}
}; 
