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
    ListNode* reverse(ListNode* temp){
        ListNode* front = NULL;
        ListNode* prev = NULL;
        while(temp != NULL){
            front =temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {

        //if singal node or no node return true
        //find the middle 
        //reverse from middle->next (odd fast->next != null && even==> fast->next->next != NULL)
        //traverse again from first and reverse newhead
        //if not equal reverse again and return false
            //if yes reverse and return true

        if(head == NULL || head->next == NULL) return true;

        ListNode* fast =head;
        ListNode* slow =head;

        while( fast->next != NULL && fast->next->next != NULL ){
            fast=fast->next->next;
            slow=slow->next;
        }
         ListNode* newhead=reverse(slow->next);

         ListNode* first = head;
         ListNode* second = newhead;

         while(second != NULL){
            if(first->val != second->val){
                reverse(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
         }
         reverse(newhead);
         return true;
    }
};