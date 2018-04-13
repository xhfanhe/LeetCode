class Solution {
public:
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		if (lists.empty()) return NULL;
		int n = lists.size();
		while (n > 1) {
			for (int i = 0; i < n / 2; i++) 
				lists[i] = mergeTwoLists(lists[i], lists[n - i - 1]);
			n = (n + 1) / 2;
		}
		return lists.front();
	}

	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == NULL) return l2;
		else if (l2 == NULL) return l1;
		if (l1->val <= l2->val) {
			l1->next = mergeTwoLists(l1->next, l2);
			return l1;
		} else {
			l2->next = mergeTwoLists(l2->next, l1);
			return l2;
		}
		assert(false);
	}
};
