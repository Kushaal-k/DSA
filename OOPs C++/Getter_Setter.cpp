#include <iostream> 

using namespace std;

class Hero{
    private:
    
    int health;

    public:
    char level;

    // getter
    int getHealth(){
        return health;
    }

    // setter
    void setHealth(int h){
        health = h;
    }
};

int main(){

    Hero h1;

    // Getter and Setter is used to access private member outside the class
    cout << "Health of hero is " << h1.getHealth() << endl;
    
    h1.setHealth(70);

    cout << "Health of hero is " << h1.getHealth() << endl;

    return 0;
}