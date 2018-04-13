class Solution {
public:
	ListNode* sortList(ListNode* head) {
		if (!head || !head->next) return head;
		ListNode* cur = head;
		int length = 0;
		while (cur) {
			length++;
			cur = cur->next;
		}

		ListNode dummy(INT_MIN);
		dummy.next = head;
		ListNode *left, *right, *tail;
		
		for (int step = 1; step < length; step <<= 1) {
			cur = dummy.next;
			tail = &dummy;
			while (cur) {
				left = cur;
				right = split(left, step);
				cur = split(right, step);
				tail = merge(left, right, tail);
			}
		}
		return dummy.next;
	}

private:
	ListNode* split(ListNode* head, int n) {
		for (int i = 1; i < n && head; i++) 
			head = head->next;
		if (!head) return NULL;
		ListNode* second = head->next;
		head->next = NULL;
		return second;
	}

	ListNode* merge(ListNode* l, ListNode* r, ListNode* t) {
		ListNode* c = t;
		while (l && r) {
			if (l->val < r->val) {
				c->next = l;
				c = c->next;
				l = l->next;
			} else {
				c->next = r;
				c = c->next;
				r = r->next;
			}
		}
		c->next = l ? l : r;
		while (c->next) c = c->next;
		return c;
	}
};
