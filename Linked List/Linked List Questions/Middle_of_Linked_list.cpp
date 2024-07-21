#include <iostream> 

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = next;
    }

    ~Node(){
        if(this -> next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

int getLength(Node* head){
    int len = 0;

    while(head!=NULL){
        head = head->next;
        len++;
    }
    return len;
}


//Approach 1 
Node* findMiddle(Node* head){
    int len = getLength(head);
    int ans = (len/2)+1;

    Node* temp = NULL;
    int cnt = 0 ;
    while(cnt<ans){
        temp = temp->next;
        cnt++;
    }

    return temp;
}


//Approach 2 - More optimized (better T.C.)

Node* getMiddle(Node* head){
    if(head==NULL||head->next ==NULL)
        return head;

    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL)
            fast = fast->next;
        slow = slow->next;
    }

    return slow;
}