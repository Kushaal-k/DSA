#include <iostream> 

using namespace std;

class Node{
    public :
    int data;
    Node* next;


    // Constructor
    Node(int data){
        this -> data = data;
        this-> next = NULL;
    }
};

//Insertion at head
void InsetionAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

//Insertion at tail
void InsertionAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

//Insertion at any position
void InsertionAtPosition(Node* &head,Node* &tail,int position,int d){

    // Inserting at first position 
    if(position==1){
        InsetionAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    // Inserting at last position
    if(temp->next == NULL){
        InsertionAtTail(tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}


int main(){
    
    Node* node1 = new Node(10);

    Node* head = node1;
    print(head);

    InsetionAtHead(head,12);
    print(head);

    InsetionAtHead(head,15);
    print(head);

    Node* tail = node1;
    // print(head);

    // InsertionAtTail(tail,12);
    // print(head);

    // InsertionAtTail(tail,15);
    // print(head);

    InsertionAtPosition(head,tail,1,20);
    print(head);

    InsertionAtPosition(head,tail,5,27);
    print(head);

    cout << head->data << endl;
    cout << tail->data << endl;
    return 0;
}