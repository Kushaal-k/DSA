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

    //Destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory free for node with data : " << value << endl;
    }
};

void InsetionAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertionAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

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

//Deletion of element in SLL
void DeleteNode(int position,Node* &head,Node* &tail){

    //Deletion of first position
    if(position == 1){
        Node* temp = head;
        head = head -> next;
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
        

        prev->next = curr->next;
        curr ->next = NULL;
        // Updation of new tail if position is last 
        if(prev->next == NULL){
            tail = prev;
        }
        delete curr;

        
    }
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

    cout << "Tail : " << tail->data << endl;
    cout << "Head : " << head->data << endl;

    DeleteNode(5,head,tail);
    print(head);

    DeleteNode(1,head,tail);
    print(head);

    cout << "Tail : " << tail->data << endl;
    cout << "Head : " << head->data << endl;



    return 0;
}