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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode *t=head, *p=head->next;
        int pre=head->val;
        while(p){
            if(pre!=p->val){
                t->next=p;
                pre=p->val;
                t=t->next;}
            p=p->next;}
        t->next=NULL;
        return head;
    }
};