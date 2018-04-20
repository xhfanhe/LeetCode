class Solution {
public:
	ListNode* reverseKGroup(ListNode* head, int k) {
		if (head == NULL || k == 1) return head;
		int num = 0;
		ListNode *preheader = new ListNode(INT_MIN);
		preheader->next = head;
		ListNode *cur = preheader, *pre = preheader, *nex;
		while (cur = cur->next)
			num++;
		while (num >= k) {
			cur = pre->next;
			nex = cur->next;
			for (int i = 1; i < k; i++) {
				cur->next = nex->next;
				nex->next = pre->next;
				pre->next = nex;
				nex = cur->next;
			}
			pre = cur;
			num -= k;
		}
		return preheader->next;
	}
};