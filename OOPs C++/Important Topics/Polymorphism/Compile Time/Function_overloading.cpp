#include<iostream>
using namespace std;

// Function Overloading can be done by changing the arguments in the functions, Changing return type cannot do function overloading 
class A {

    public:
    void sayHello() {
        cout << "Hello Kushaal" << endl;
    }
    
    int sayHello(char name) {
        cout << "Hello Kushaal" << endl;
        return 1;
    }

    void sayHello(string name) {
        cout << "Hello " << name  << endl;
    }

};

int main(){
    A obj1;

    obj1.sayHello();
    obj1.sayHello('A');
    obj1.sayHello("Kushaal");
}