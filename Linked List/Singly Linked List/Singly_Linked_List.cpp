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
        if(this -> next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

int main(){
    
    Node* node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    return 0;
}