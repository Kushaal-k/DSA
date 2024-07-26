#include <iostream> 

using namespace std;

class stack{

    public :
        int *arr;
        int top;
        int size;

    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){

        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else   
            cout << "Stack overflow" << endl;
    }

    void pop(){

        if(top>=0){
            top--;
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout << "Stack is empty." << endl;
            return -1;
        }
    }

    bool empty(){
        if(top==-1)
            return true;

        return false;
    }
};

int main(){

    stack* s = new stack(5);

    s->push(10);
    s->push(12);

    s->pop();

    cout << "Top element " << s->peek() << endl;
    
    if(s->empty())
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty." << endl;

    return 0;
}