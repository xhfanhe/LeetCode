class Solution {
public:
	vector<pair<int, int>> getSkyline(vector<vector<int>>& buildings) {
		multiset<pair<int, int>> seq;
		pair<int, int> curr = {0, 0};
		multiset<int> height = {0};
		vector<pair<int, int>> result;
		for(auto p: buildings) {
			seq.emplace(p[0], -p[2]);
			seq.emplace(p[1], p[2]);
		}
		for(auto p: seq) {
			if(p.second < 0) height.emplace(-p.second);
			else height.erase(height.find(p.second));
			if(curr.second != *height.rbegin()) {
				curr.first = p.first;
				curr.second = *height.rbegin();
				result.push_back(curr);
			}
		}
	}
};
