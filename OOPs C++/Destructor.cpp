#include <iostream> 

using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    Hero(){
        cout << "Default constructor called" << endl;
    }

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

    // Destructor is use to de-allocae memory 
    // destructor also dont have a return type.
    
    ~Hero(){
        cout << "Destructor called" << endl;
    }
};

int main(){
    // default destructor is called for static allocated object
    Hero h1;

    Hero *h2 = new Hero;
    delete h2;
    


    return 0;
}