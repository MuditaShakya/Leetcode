class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        if (!head || l == r) // Edge cases: empty list or no reversal needed
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        // Move prev to the node before the sublist to be reversed
        for (int i = 0; i < l - 1; ++i)
            prev = prev->next;

        ListNode* curr = prev->next;
        ListNode* next = nullptr;

        // Reverse the sublist from l to r
        for (int i = 0; i < r - l; ++i) {
            next = curr->next;
            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;
        }

        return dummy->next;
    }
};
