/// week14-3.cpp
/// LeetCode ¾Ç²ß­pµe 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;
        while (head != nullptr) {
            a.push_back( head->val );
            head = head->next;
        }

        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        for (int i=a.size()-1; i>=0; i--) {
            now->next = new ListNode( a[i] );
            now = now->next;
        }
        return ans->next;
    }
};
