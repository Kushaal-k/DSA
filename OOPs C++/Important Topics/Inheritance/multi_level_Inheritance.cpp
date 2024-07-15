#include <iostream> 

using namespace std;

class parent{
    public :
    int height ;
    int weight;
};

class child : public parent{

};

class raju : public child{

};

int main(){
    raju c1;
    cout << c1.height << endl;
    cout << c1.weight << endl;
    return 0;
}