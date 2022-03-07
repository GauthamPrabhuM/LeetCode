**beautiful problem** , mix of  3 concepts, **1st find middle of ll, then reverse right half of ll, compare right half with left half**
```
bool isPalindrome(ListNode* head) {
if(head==NULL || head->next==NULL) return true;
ListNode *fast(head);
ListNode *slow(head);
while(fast && fast->next){
slow=slow->next;
fast=fast->next->next;
}
fast=head;
ListNode *t=reverse(slow);
while(t){
if(fast->val!=t->val)return false;
fast=fast->next;
t=t->next;
}
return true;
}
ListNode *reverse(ListNode *slow){
ListNode *prev(NULL);
while(slow){
ListNode *t=slow->next;
slow->next=prev;
prev=slow;
slow=t;
}
return prev;
}
```