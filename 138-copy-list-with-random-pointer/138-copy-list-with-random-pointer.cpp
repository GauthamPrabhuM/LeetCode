/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *temp=head; Node *front=head;
        //inserting a dummy node between two nodes
        while(temp!=NULL){
            front=temp->next;
            Node *copy=new Node(temp->val);
            temp->next=copy;
            copy->next=front;
            temp=front;
        }
        // assigning value of the random pointer
        temp=head;
        while(temp!=NULL){
            if(temp->random!=NULL)
                temp->next->random=temp->random->next;
            temp=temp->next->next;
        }
        //restore original 
        temp=head;
        Node *newHead=new Node(0);
        Node *copy=newHead;
        while(temp!=NULL){
            front=temp->next->next;
            copy->next=temp->next;
            temp->next=front;
            copy=copy->next;
            temp=front;
        }
        return newHead->next;
        
        
    }
};