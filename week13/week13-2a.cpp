/// week13-2a.cpp 學習計畫 Linked List 第1題
/// 21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = new ListNode(888);
        ans -> next = ans2;

        return ans;
    }
};
