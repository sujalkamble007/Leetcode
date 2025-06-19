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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //again using the concept of fast and slow pointer 
            //idea is move fast till n steps
                    //check if(fast == NULL) then n is first node
                        //return head->next
            //then move slow from head and fast by one step
                //till f->next != NULL
            //then assign delete the node 
                //connect the slow->next=slow->next->next;
                //delete the delete 
            //return head

        ListNode* fast =head;

        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        if(fast == NULL) return head->next;

        ListNode* slow=head;

        while(fast->next != NULL){
            fast=fast->next;
            slow= slow->next;
        }

        ListNode* del = slow->next;
        slow->next = slow->next->next;
        delete(del);

        return head;
    }
};