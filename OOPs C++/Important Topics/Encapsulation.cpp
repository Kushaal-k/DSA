#include <iostream> 

using namespace std;

// Encapsulation is defined as wrapping up data and information under a single unit. 
class Hero{
    private:
    int health;

    public:
    char level;

    void sethealth(int health){
        this-> health = health;
    }

    void gethealth(){
        cout << health << endl;
    }

};

int main(){
    Hero h1;
    h1.sethealth(70);
    h1.gethealth();

    return 0;
}