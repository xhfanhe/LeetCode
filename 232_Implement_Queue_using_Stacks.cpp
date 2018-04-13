class MyQueue {
	stack<int> input, output;
public:
	void push(int x) {
		input.push(x);
	}

	int pop() {
		int n = peek();
		output.pop();
		return n;
	}

	int peek() {
		if(output.empty()) {
			while(input.size()) {
				output.push(input.top());
				input.pop();
			}
		}
		return output.top();
	}

	bool empty() {
		return input.empty() && output.empty();
	}
};
