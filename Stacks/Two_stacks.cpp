// Question Link : https://www.naukri.com/code360/problems/two-stacks_983634

#include <iostream> 

using namespace std;

class TwoStack{
    int top1;
    int top2;
    int size;
    int *arr;

    public:
        TwoStack(int s){
            this->size = s;
            arr = new int[s];
            top1 = -1;
            top2 = s;
        }

        void push1(int element){
            if(top1-top2 >1){
                top1++;
                arr[top1] = element;
            }
            else 
                cout << "Stack overflow" << endl;
        }

        void push2(int element){
            if(top1-top2 >1){
                top2--;
                arr[top2] = element;
            }
            else 
                cout << "Stack overflow" << endl;
        }

        int pop1(){ 
            if(top1>=0){
                int ans = arr[top1];
                top1--;
                return ans;
            }
            return -1;
        }

        int pop2(){
            if(top2>=0){
                int ans = arr[top2];
                top2++;
                return ans;
            }
            return -1;
        }
};


int main(){
    
    return 0;
}