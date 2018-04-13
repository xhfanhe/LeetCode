class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if(!head) return NULL;
		if(!head->next) return head;
		ListNode* p = head->next;
		int val = head->val;
		if(val != p->val) {
			head->next = deleteDuplicates(p);
			return head;
		} else {
			while(p && p->val == val) p = p->next;
			return deleteDuplicates(p);
		}
		assert(false);
	}
};
