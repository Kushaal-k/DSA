#include <iostream> 
#include "Villian.cpp"

using namespace std;

// Class is a user-defined datatype. Hero is a datatype which contains different properties and behaviour
class Hero{

    // Private can only be accessed inside class(all properties are private by default)
    private : 
    int damage;

    // Public can be accessed outside the class
    public : 
    // properties
    int health;
    char level;

    void print_damage(){
        cout << damage << endl;
    }
};

int main(){
    // Here G_One is an object
    Hero G_ONE;
    Villian Ra_One; 

    G_ONE.health = 100; 

    cout << "Health is " << G_ONE.health << endl;
    cout << "Health of Villian is " << Ra_One.health << endl;
    
    // cout << G_ONE.damage << endl; error
    G_ONE.print_damage();
    return 0;
}