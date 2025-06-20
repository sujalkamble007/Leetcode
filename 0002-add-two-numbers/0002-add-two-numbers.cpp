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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //create the dummy node 
        //assign temp to it
            //initialize carry=0;
                //iterate till l1!=NULL || l1!=NULL || carry
                    //initialize sum=0;
                        //if l1!NULL 
                            //calulate sum and move l1
                        //if  l2!NULL 
                            //calulate sum and move l2
                //add carry to sum
                //reassign carry to sum/10
            //create the new node storing the sum%10
        //temp->next = node 
        //temp-->next
    //return dummy->next


        ListNode* dummy =new ListNode(-1);
        ListNode* temp=dummy;

        int carry=0;
        while(l1 !=NULL || l2 !=NULL || carry){
            int sum=0;

            if(l1 != NULL){
                sum+=l1->val;
                l1=l1->next;
            }
             if(l2 != NULL){
                sum+=l2->val;
                l2=l2->next;
            }

            sum+=carry;
            carry=sum/10;

            ListNode* node =new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
        }
            return dummy->next;
        }
    
};