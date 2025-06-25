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
    void insertCopyBetween(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            Node* node = new Node(temp->val);
            node->next = temp->next;
            temp->next = node;
            temp = node->next;
        }
    }

    void connectRandom(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            Node* copy = temp->next;
            copy->random = temp->random ? temp->random->next : NULL;
            temp = temp->next->next;
        }
    }

    Node* getList(Node* head) {
        Node* temp = head;
        Node* dummy = new Node(-1);
        Node* copyTail = dummy;

        while (temp != NULL) {
            copyTail->next = temp->next;
            copyTail = copyTail->next;

            temp->next = temp->next->next;
            temp = temp->next;
        }
        return dummy->next;
    }

    Node* copyRandomList(Node* head) {
        //create in 3 function 
        //1.insert copy node in between
        //2.connect random pointer
        //3.connect next pointer
        if (head == NULL) return NULL;
        insertCopyBetween(head);
        connectRandom(head);
        return getList(head);
    }
};
