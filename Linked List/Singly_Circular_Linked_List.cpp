#include <iostream> 

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this-> next =next;   
    }

    ~Node(){
        if(this->next == NULL){
            delete next ;
            next = NULL;
        }
    }
};

void InsertNode(Node* &tail,int element,int d){

    Node* temp = new Node(d);

    if(tail==NULL){
        tail = temp;
        temp->next = temp;
    }
    else{
        Node* curr = tail;
        
        while(curr->data != element){
            curr = curr-> next;
        }

        temp-> next = curr->next ;
        curr->next = temp;
    }
}

void DeleteNode(Node* &tail,int value){
    if(tail == NULL)
        cout << "List is empty.";


    else{
        Node* prev = tail;
        Node* curr = prev->next;
        
        while(curr->data!=value){
            prev = curr;
            curr = curr->next;
        }

        prev ->next = curr->next;

        if(curr == prev){
            tail = NULL;
        }
        else if(tail==curr){
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

void print(Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout << "List is empty." << endl;
    }

    do{
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail!=temp);

    cout << endl;

}

int main(){
    Node* tail = NULL;

    InsertNode(tail,5,3);
    print(tail);

    InsertNode(tail,3,5);
    print(tail);

    InsertNode(tail,3,7);
    print(tail);

    InsertNode(tail,5,9);
    print(tail);

    DeleteNode(tail,3);
    print(tail);
    return 0;
}