class Solution {
public:
	bool hasCycle(ListNode *head) {
		if(head == NULL) return false;
		ListNode *walker = head;
		ListNode *runner = head;
		while(runner->next && runner->next->next) {
			walker = walker->next;
			runner = runner->next->next;
			if(walker == runner) return true;
		}
		return false;
	}
};
