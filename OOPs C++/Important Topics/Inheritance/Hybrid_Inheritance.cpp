#include <iostream> 

using namespace std;

// Combination of different types of inheritance 

// E.g. combination of hierarchical and single 

class A{
    public :
    void fun1(){
        cout << "I am inside A." << endl;
    }
};

class D{
    public :
    void fun2(){
        cout << "I am inside D." << endl;
    }
};

class B : public A{
    public :
    void fun3(){
        cout << "I am inside B." << endl;
    }
};

class C : public A,public D{
    public :
    void fun4(){
        cout << "I am inside C." << endl;
    }
};

int main(){
    A obj1;
    obj1.fun1();

    B obj2;
    obj2.fun1();
    obj2.fun3();

    C obj3;
    obj3.fun1();
    obj3.fun2();
    obj3.fun4();
    return 0;
}