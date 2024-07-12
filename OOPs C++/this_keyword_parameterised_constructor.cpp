#include <iostream> 

using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    // if one parameterised constructor is called then default constructor dies 
    Hero(){
        cout << "Hello world!!" << endl;
    }

    // parameterised constructor 
    Hero(int health,char level){
        this->health = health; //this keyword is used to accesss currently executing data
        this->level = level;
    }

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }
};

int main(){

    // Default constructor h1.Hero() is called
    Hero h1(10,'A');
    cout << "Health of hero is " << h1.getHealth() << endl;    
    h1.setHealth(70);
    cout << "Health of hero is " << h1.getHealth() << endl;
    cout << "The level of hero is " << h1.level << endl;
    
    Hero *h2 = new Hero(50,'B');

    cout << "Health of hero is " << h2->getHealth() << endl;
    cout << "The level of hero is " << h2->level << endl;

    return 0;
}