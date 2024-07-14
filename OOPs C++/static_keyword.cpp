#include <iostream> 

using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;
    // static keyword is used when we need to create a datatype that is independent of object 
    static int Timetocomplete;

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

    //Static functions
    static int random(){
        // static function can only access static datatype 
        return Timetocomplete;
    }
};


// Initialization of static datatype 
int Hero::Timetocomplete = 5;

int main (){

    cout << Hero::Timetocomplete << endl;
    cout << Hero::random() << endl;
    return 0;
}