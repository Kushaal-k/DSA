#include <iostream> 

using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }
};

int main(){

    // static allocation 
    Hero h1;
    h1.setHealth(70);
    cout << "Health of hero is " << h1.getHealth() << endl;
    
    // dynamic allocation 
    Hero *b = new Hero;
    (*b).setHealth(60);
    
    cout << "Health of hero is " << (*b).getHealth() << endl;

    b -> setHealth(80);
    cout << "Health of hero is " << b->getHealth() << endl;


    return 0;
}