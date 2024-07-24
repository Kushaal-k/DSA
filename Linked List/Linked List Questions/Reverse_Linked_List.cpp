#include <iostream>

using namespace std;

class ListNode{
    public :
    int data;
    ListNode* next;


    // Constructor
    ListNode(int data){
        this -> data = data;
        this-> next = NULL;
    }
};


class Solution {
private:
    void reverse(ListNode* &head,ListNode* curr,ListNode* prev){

        if(curr== NULL){
            head = prev;
            return;
        }

        ListNode* forward = curr -> next;
        reverse(head,forward,curr);
        curr->next = prev;
    }
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        if(curr!= NULL){
            next = curr ->next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
public:
    ListNode* reverseList(ListNode* head) {


        ListNode* curr = head;
        ListNode* prev = NULL;
        reverse(head,curr,prev);
        return head;
        

        // if(head==NULL || head->next == NULL){
        //     return head;
        // }

        // ListNode* prev = NULL;
        // ListNode* curr = head;
        // ListNode* forward = NULL;

        // while(curr!=NULL){
        //     forward = curr->next;
        //     curr ->next = prev;
        //     prev = curr;
        //     curr = forward;
        // }
        
        // return prev;
    }
};

void print(ListNode* head){
    ListNode* temp = head;

    while(temp!=NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    ListNode* head = NULL;

    ListNode* reverseList(head);

    return 0;
}