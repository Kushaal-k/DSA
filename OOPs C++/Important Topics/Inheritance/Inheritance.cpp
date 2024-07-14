#include <iostream> 

using namespace std;

class Human{
    public :
    int health ;
    int age;
    int weight;

    void setproperties(int health,int age,int weight){
        this->health = health;
        this->age = age;
        this->weight = weight;
    }

    void getproperties(){
        cout << "Health : " << health << endl;
        cout << "Age : " << age << endl;
        cout << "Weight : " << weight << endl;
    }
};

// Inheritance 
class Male : public Human{

    public:
    string name;

    void setname(string s){
        this->name = s ;
    }

    void getname(){
        cout << "Name : " << this->name;
    }

};

int main(){
    Male ramesh;
    ramesh.setproperties(80,27,64);
    ramesh.getproperties();

    ramesh.setname("Kushaal");
    ramesh.getname();

    return 0;
}