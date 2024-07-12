#include <iostream> 

using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    // A constructor has no return type 
    Hero(int health,char level){
        this->health = health;
        this->level = level;
    }

    // Copy Constructor 
    Hero(Hero& temp){
        cout << "Copying constructor" << endl;
        this->health = temp.health;
        this->level = temp.level;
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

    Hero h1(70,'A');
    // Copying an constructor 
    Hero h3(h1);
    h3.print();

    Hero h4(h1);
    h4.print();
    return 0;
}