/// week13-2a.cpp
/// Leetcode ¾Ç²ß­pµe 21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        ListNode* now = ans;
        while (list1 !=nullptr && list2 != nullptr ) {
            if (list1->val <= list2->val) {
                now->next = list1;
                list1 = list1->next;
                now = now->next;
            } else {
                now->next = list2;
                list2 = list2->next;
                now = now->next;
            }
        }
        if (list1 != nullptr) now->next = list1;
        if (list2 != nullptr) now->next = list2;
        return ans->next;
    }
};
