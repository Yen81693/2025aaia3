/// week14-1.cpp ¾Ç²ß­pµe Linked List
/// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;
        while(head != nullptr){
            a.push_back(head->val);
            head = head->next;
        }

        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans;
        for(int i=a.size()-1; i>=0; i--){
            ans2->next = new ListNode(a[i]);
            ans2 = ans2->next;
        }
        return ans->next;
    }
};
