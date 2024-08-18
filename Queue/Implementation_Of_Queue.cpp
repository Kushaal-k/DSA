#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

class Queue{

    int* arr;
    int qfront;
    int rear;
    int size;


    public:
        Queue(){
            size = 100001;
            arr = new int [size];
            qfront = 0 ;
            rear = 0;
        }

        void inqueue(int data){
            if((rear ==size))
                cout << "Queue is full." << endl;

            else{
                arr[rear] = data;
                rear++;
            }
        }

        int dequeue(){
            if(qfront == rear){
                return -1;
            }
            else{
                int ans = arr[qfront];
                arr[qfront] = -1;
                qfront++;
                if(qfront==rear){
                    qfront = 0;
                    rear = 0;
                }
                return ans;
            }
        }

        int front(){
            if(qfront == rear)
                return -1;
            
            else 
                return arr[qfront];
        }

        bool Empty(){
            if(rear == qfront)
                return true;
            return false;
        }
    
    
};

int main(){
    Queue *q = new Queue;

    q->dequeue();

    q->inqueue(6);
    q->inqueue(2);
    q->inqueue(1);
    q->inqueue(9);

    q->dequeue();

    cout << q->front() << endl;
    return 0;
}











