#include <iostream> 

using namespace std;

class male{
    public :
    int height ;
    int weight;
};

class female{
    public:
    char beauty_level = 'A';
};

class child : public male,public female{

};

int main(){
    child c1;
    cout << c1.height << endl;
    cout << c1.weight << endl;
    cout << c1.beauty_level << endl;
    return 0;
}