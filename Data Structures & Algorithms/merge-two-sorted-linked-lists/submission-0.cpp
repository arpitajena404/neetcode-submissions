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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* head = new ListNode();
        head->next = NULL;
        ListNode* run = head;

        while(t1 != NULL && t2 != NULL){
            if(t1->val <= t2->val){
                run->next = t1;
                t1 = t1->next;
            }
            else{
                run->next = t2;
                t2 = t2->next;
            }
            run = run->next;
        }
        if(t1 != NULL){
            while(t1!= NULL){
                run->next = t1;
                run = run->next;
                t1 = t1->next;
            }
        }
        if(t2 != NULL){
            while(t2!= NULL){
                run->next = t2;
                run = run->next;
                t2 = t2->next;
            }
        }
        return head->next;
    }
};
