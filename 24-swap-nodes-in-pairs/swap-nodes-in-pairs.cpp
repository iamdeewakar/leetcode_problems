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
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr = head;
        while(curr && curr->next){
            int temp = curr->val;
            curr->val = curr->next->val;
            curr->next->val = temp;

        //move to next 
        curr= curr->next->next;

        }

        return head;

        
    }
};