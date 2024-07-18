#include <iostream> 

using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        if(next!=NULL){
            delete next ;
            next = NULL;    
        }
    }

};

void InsertAtHead(Node* &head,Node* &tail,int d){
    Node* temp = new Node(d);
    if(head==NULL){
        head = temp;
        tail = temp;
    }
    else{
        
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    

}

void InsertAtTail(Node* &head,Node* &tail,int d){
    Node* temp = new Node(d);
    if(tail==NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
    

}

void InsertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position==1){
        InsertAtHead(head,tail,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next ==NULL){
        InsertAtTail(head,tail,d);
        return;
    }

    Node* nodetoinsert = new Node(d);

    nodetoinsert -> next = temp -> next;
    temp -> next -> prev = nodetoinsert;
    temp -> next  = nodetoinsert;
    nodetoinsert -> prev = temp;

}

void DeleteNode(int position,Node* &head,Node* &tail){

    //Deletion of first position
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp -> next = NULL;
        delete temp;
    }

    else{
        Node* curr = head;
        Node* prev = NULL;
        
        int cnt =1;
        while(cnt<position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        // Updation of new tail if position is last 
        if(prev->next == NULL){
            tail = prev;
        }
        delete curr;

    }
}

void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next; 
    }
    cout << endl;

}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

int main(){
    
    

    Node* head = NULL;
    Node* tail = NULL;

    InsertAtHead(head,tail,15);
    print(head);

    InsertAtHead(head,tail,17);
    print(head);

    InsertAtTail(head,tail,34);
    print(head);

    InsertAtPosition(head,tail,4,12);
    print(head);

    DeleteNode(2,head,tail);
    print(head);

    cout << head->data << endl;
    cout << tail->data << endl;

    return 0;
}