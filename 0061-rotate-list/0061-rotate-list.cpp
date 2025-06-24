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
    ListNode* nthNode(ListNode* temp, int count){
        while(temp != NULL){
            count--;
            if(count == 0)break;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        //eage case if head is null or k==0 return head
        //iterate thorugh list till last node 
            //calculate len
            //connect that to head 
        //calculate reach = len - k
        //if (k%len == 0)return original 
        //module k = k%len

        // newhead =find temp node before rotate i.e reach
        //head =newhead->next;
        //newhead->next = NULL
        //return head
        if(head == NULL || k==0) return head;
        ListNode* tail=head;
        ListNode* temp=head;

        int len=1;

        while(tail->next != NULL){
            len++;
            tail=tail->next;
        }
        if(k%len == 0)return head;
        tail->next=head;
        
        k=k%len;    
        int reach=len-k;
        ListNode* newhead=nthNode(head ,reach);

            head=newhead->next;
            newhead->next=NULL;

            return head;

    }
};