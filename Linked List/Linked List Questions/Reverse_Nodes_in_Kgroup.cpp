// #LeetCode 25
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
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
            return NULL;

        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        int count = 0;

        while(curr!=NULL && count<k){
            next = curr->next;
            curr-> next = prev;
            prev = curr;
            curr = next;

            count++;
        }
        int count2 = 0;
        ListNode* temp = next;
        bool Reverse = true;
        while(count2<k){
            if(temp==NULL){
                Reverse = false;
            }
            else
                temp = temp->next; 
            count2++;
        }

        if(next!=NULL && Reverse){
            head->next= reverseKGroup(next,k);
        }
        else{
            head->next = next;
        }

        return prev;
    }
};