// See Mode_of_inheritance.png for reference

#include <iostream> 

using namespace std;

class Human{

    private: 
    int age;

    protected :
    int weight;

    public :
    int health ;

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
        cout << "Name : " << this->name << endl;
    }

};

class Female : private Human{

    public:
    string name;

    void setname(string s){
        this->name = s ;
    }

    void getname(){
        cout << "Name : " << this->name << endl;
    }

};

class child : protected Human{

    public:
    string name;

    void setname(string s){
        this->name = s ;
    }

    void getname(){
        cout << "Name : " << this->name << endl;
    }

};

int main(){
    Male m1;
    m1.setproperties(80,27,64);
    m1.getproperties();

    m1.setname("Kushaal");
    m1.getname();

    Female radhika;

    // radhika.setproperties(20,27,73);  // error 
    radhika.setname("Radhika");
    radhika.getname();


    child raju;
    // raju.setproperties(10,23,32); // error
    raju.setname("Raju");
    raju.getname();



    return 0;
}