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
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        int cnt = 0;
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
            cnt++;
        }
        cnt--;
        int i = 0;
        while(i < cnt){
            if(v[i] != v[cnt]){
                return false;
            }else{
                cnt--;
                i++;
            }
        }
        return true;
        
    }
};