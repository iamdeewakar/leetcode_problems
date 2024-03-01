/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast = head;
        ListNode* slow = head;
        for(int i =1;i<k;i++){
            fast = fast->next;
        }
        ListNode* kthfrombegining=nullptr;
        ListNode* kthfromend= nullptr;
        kthfrombegining = fast;
        while(fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        kthfromend = slow;
        int temp = kthfrombegining->val;
        kthfrombegining->val = kthfromend->val;
        kthfromend->val = temp;

        return head;

    }
};