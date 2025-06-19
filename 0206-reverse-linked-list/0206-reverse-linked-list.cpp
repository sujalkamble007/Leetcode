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
    ListNode* reverseList(ListNode* head) {
        //optimal first iteration 
        //using prev ,temp and front 
            //do four step while(temp != NULL)
                //1. store temp->next into front   (front =temp->next)
                //2. update link                    (temp->next = prev)
                //3. move prev                      (prev = temp)
                //4. move temp                      (temp front) 

    ListNode* temp =head;
    ListNode* prev =NULL;
    ListNode* front=NULL;
    while(temp != NULL){
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
    }
    return prev;

    }
};