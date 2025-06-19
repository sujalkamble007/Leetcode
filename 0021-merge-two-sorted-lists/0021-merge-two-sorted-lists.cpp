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
    ListNode* mergeTwoLists(ListNode*   head1, ListNode* head2) {
        //using the concept of dummy node
        //keeping two pointer t1=list1 and t2 =list2
        //iterate till one might finish off
            //check which is smaller 
                //1. temp->next = t1  || t2
                //2. t1=t1->next || t2=t2->next

                //3.. temp=temp->next
        //if(t1 != NULL ) temp =t1;
            //else temp=t2;

        //return dummy->next;
        ListNode* t1=head1;
        ListNode* t2=head2;

        ListNode* dummy =new ListNode(-1);
        ListNode* temp=dummy;

        while(t1!=NULL && t2!=NULL){
            if(t1->val >= t2->val){
                temp->next=t2;
                t2=t2->next;
            }else{
                temp->next=t1;
                t1=t1->next;
            }
            temp=temp->next;
        }

        if(t1 != NULL) temp->next=t1;
        else temp->next=t2;

        return dummy->next;

    }
};