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
    bool hasCycle(ListNode *head) {
        //using the tortoise and have algorithm 
        //using fast and slow pointer 
            //while fast != NULL && fast->next != NULL 
                //bcz if list has no cycle and fast->NULL len=even if fast->next-> len =odd
                //move slow by one 
                //move fast by two
                //if slow == fast  return true 
        //return false

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow == fast )return true;
        }
        return false;
    }
};