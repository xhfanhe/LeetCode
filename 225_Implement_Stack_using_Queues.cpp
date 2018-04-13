class MyStack {
private:
	queu<int> q;
public:
	/** Initialize your data structure here. */
	MyStack() {
	}

	void push(int x) {
		q.push(x);
		for(int i = 0; i < q.size()-1; i++) {
			q.push(q.front());
			q.pop();
		}
	}

	int pop() {
		int res = q.front();
		q.pop();
		return res;
	}

	int top() {
		return q.front();
	}
	
	bool empty() {
		return q.empty();
	}
};
