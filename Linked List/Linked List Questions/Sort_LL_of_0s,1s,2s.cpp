// Question Link : https://www.naukri.com/code360/problems/sort-linked-list-of-0s-1s-2s_1071937

#include <iostream> 

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next = NULL;
    }
};

void InsertionAtTail(Node* &head,Node* &tail,int d){
    Node* temp = new Node(d);
    if(tail==NULL){
        head = temp;
        tail = head;

    }
    else{
        tail->next = temp;
        tail = temp;
    }
    
}

void print(Node* head){
    if(head==NULL){
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;

    while(temp!=NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}


// Approach 1 - replacement of data allowed 
Node* sortList(Node* &head){
    int zerocount =0;
    int onecount = 0;
    int twocount = 0;

    Node* temp  = head;
    while(temp!=NULL){
        if(temp->data == 0)
            zerocount++;
        else if(temp->data == 1)
            onecount++;
        else if(temp->data == 2)
            twocount++;

        temp = temp->next;
    }
    temp = head;
    while(temp!=NULL){
        if(zerocount!=0){
            temp->data = 0;
            zerocount--;
        }
        else if(onecount!=0){
            temp->data = 1;
            onecount--;
        }
        else if(zerocount!=0){
            temp->data = 2;
            twocount--;
        }
        temp = temp->next;
    }
    return head;
}



// Approach 2 - Replacement of data is not allowed 
Node* sortList2(Node* &head){

    Node* zerohead = new Node(-1);
    Node* zerotail = zerohead;
    Node* onehead = new Node(-1);
    Node* onetail = onehead;
    Node* twohead = new Node(-1);
    Node* twotail = twohead;

    Node* curr = head;

    while(curr!=NULL){

        int value = curr->data;

        if(value==0)
            InsertionAtTail(curr,zerotail,0);
        else if(value==1)
            InsertionAtTail(curr,onetail,1);
        else if(value==2)
            InsertionAtTail(curr,twotail,2);

        curr = curr->next;
    }

    if(onehead->next !=NULL)
        zerotail -> next = onehead -> next;
    else
        zerotail -> next = twohead -> next;

    onetail->next = twohead->next;
    twotail->next = NULL;

    head = zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
    return head;
}

int main(){
    Node* head= NULL;
    Node* tail=NULL;

    InsertionAtTail(head,tail,0);
    InsertionAtTail(head,tail,1);
    InsertionAtTail(head,tail,0);
    InsertionAtTail(head,tail,0);
    InsertionAtTail(head,tail,1);
    InsertionAtTail(head,tail,2);
    InsertionAtTail(head,tail,1);
    InsertionAtTail(head,tail,2);
    cout << "List : ";
    print(head);

    // cout << "Sorted list using approach 1 : ";
    // head = sortList(head);
    // print(head);
    
    cout << "Sorted list using approach 2 : ";
    head = sortList2(head);
    print(head);

    return 0;
}