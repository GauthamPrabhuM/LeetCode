class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
       ListNode ans(0);
       ListNode *head=&ans;
       int carry=0;
        while(l1||l2||carry)
        {
         int a;
         int b;
         if(l1)
         {
          a=l1->val;
          l1=l1->next;
         }
         else 
             a=0;
         if(l2)
         {
             b=l2->val;
             l2=l2->next;
         }
            else
                b=0;
        ListNode *t=new ListNode((a+b+carry)%10);
        carry=(a+b+carry)/10;
        head->next=t;
        head=head->next;
        
        }
    return ans.next;
    }
};
