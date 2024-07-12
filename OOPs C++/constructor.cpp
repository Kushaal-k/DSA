#include <iostream> 

using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    // A constructor has no return type 
    Hero(){
        cout << "Hello World" << endl;
    }

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }
    
    void print(){
        cout << "Level is " << this-> level << endl;
        cout << "Health is " << this->health << endl;
    }
};

int main(){

    // Default constructor h1.Hero() is called
    Hero h1;
        
    h1.setHealth(70);
    h1.level = 'A';
    h1.print();
    
    Hero *h2 = new Hero;

    cout << "Health of hero is " << h2->getHealth() << endl;
    return 0;
}