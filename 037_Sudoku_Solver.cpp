class Solution {
public:
	void solveSudoku(vector<vector<char>>& board) {
		solve(board);
	}

private:
	bool solve(vector<vector<char>>& board) {
		for(int r = 0; r < 9; r++) {
			for(int c = 0; c < 9; c++) {
				if(board[r][c] == '.') {
					for(char k = '1'; k <= '9'; k++) {
						if(isValid(board, r, c, k)) {
							board[r][c] = k;
							if(solve(board)) return true;
							board[r][c] = '.';
						}
					}
					return false;
				}
			}
		}
		return true;
	}

	bool isValid(vector<vector<char>>& board, int r, int c, char k) {
		for(int row = 0; row < 9; row++) {
			if(board[row][c] == k) return false;
		}
		for(int col = 0; col < 9; col++) {
			if(board[r][col] == k) return false;
		}
		for(int i = (r/3)*3; i < (r/3+1)*3; i++) {
			for(int j = (c/3)*3; j < (c/3+1)*3; j++) {
				if(board[i][j] == k) return false;
			}
		}
		return true;
	}
};
