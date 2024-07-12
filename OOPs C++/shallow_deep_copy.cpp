#include <iostream> 
#include <string.h>

using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;
    char* name;

    Hero(){
        name = new char[100];
    }

    // A constructor has no return type 
    Hero(int health,char level){
        this->health = health;
        this->level = level;

    }

    // Copy Constructor 
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }
    
    void print(){
        cout << "[ Name : " << this-> name << ", ";
        cout << "Health : " << this->health << ", ";
        cout << "Level : " << this-> level << " ]" << endl;
        cout << endl;
    }
};

int main(){

    Hero h1;
    h1.setHealth(40);
    h1.setLevel('A');
    char name[8] = "Kushaal";
    h1.setname(name);

    // Default Copying an constructor makes a shallow copy
    Hero h3(h1);
    h3.print();

    // shallow copy send reference by which all copy get changes
    h1.name[0] = 'G';


    // making own copy construstor do deep copy 
    h1.print();
    h3.print();

    
    return 0;
}