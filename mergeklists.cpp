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
    ListNode* mergeTwoLists(ListNode *one, ListNode *two)
    {
        if(!one)return two;
        if(!two)return one;
        if(one->val<two->val)
        {
            one->next=mergeTwoLists(one->next,two);
            return one;
        }
        else
        {
            two->next=mergeTwoLists(one,two->next);
            return two;
        }
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         if(lists.size() == 0) return NULL;
         if(lists.size() == 1) return lists[0];
        for(int itr = 1; itr < lists.size(); itr++)
            lists[0] = mergeTwoLists(lists[0], lists[itr]);
         return lists[0];     
    }
};
