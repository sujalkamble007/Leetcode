/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        //use tortoise and hare algorithm 
            //move fast by 2 and slow by one till (fast !=NULL && Fast->next != NULL)
            //if slow == fast 
                //move fast to head 
                    //move both by one step simultaneously 
                        //till they collide and return slow
        //return false if no cycle

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast != NULL && fast->next != NULL){
            fast=fast->next->next;
            slow =slow->next;

            if(slow == fast){
                fast=head;
                while(slow!=fast){
                      slow=slow->next;
                      fast=fast->next;
                }
                return slow;
            }
        }

      return NULL;
    }
}; 