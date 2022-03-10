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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *h=head;int l1=left-1;int k=0;int x=0;int l2=l1;
        int r1=right-l1;int r2=r1;
        while(l1--)h=h->next;
        ListNode *h1=h;
        vector<int> val(r1);
        while(r1--){val[k++]=h->val;h=h->next;}
        reverse(val.begin(),val.end());
        while(r2--){h1->val=val[x++];h1=h1->next;}
        return head;     
    }
};