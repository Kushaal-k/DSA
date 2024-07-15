#include <iostream> 

using namespace std;

class Human{
    public :
    int height ;
    int weight;

    void print(){
        cout << "I am inside human class." << endl;
    }
};

class male:public Human{
    public:
    void print1(){
        cout << "I am inside male class." << endl;
    }
    
};

class female:public Human{
    public:
    void print2(){
        cout << "I am inside female class." << endl;
    }
};

class girl:public female{
    public:
    void print3(){
        cout << "I am inside girl class." << endl;
    }
};

class boy :public male{
    public:
    void print4(){
        cout << "I am inside boy class." << endl;
    }
};

int main(){
    male m1;
    m1.print();
    m1.print1();

    female f1;
    f1.print();
    f1.print2();

    boy b1;
    b1.print();
    b1.print1();
    b1.print4();

    girl g1;
    g1.print();
    g1.print2();
    g1.print3();

    return 0;
}