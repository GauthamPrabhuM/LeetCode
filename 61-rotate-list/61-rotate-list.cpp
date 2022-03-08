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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head|| !head->next)return head;
        ListNode *cur=head;ListNode *res;
        int l=1;
        while(cur->next!=NULL){
            l++;
            cur=cur->next;
        }
        k=k%l;
        int x=l-k;
        cur->next=head;
        while(x--)cur=cur->next;
        res=cur->next;
        cur->next=NULL;
        return res;
    }
};