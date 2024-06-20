#include <iostream> 
#include <vector>

using namespace std;

int main(){
    
    vector<int> v;

    vector<int> a(5,1);

    vector<int> b(a);

    cout<<"Elements in b : ";
    for(int i: b)
        cout << i << " " ; 
    cout << endl;

    cout<< "Capacity of v : " << v.capacity() << endl;

    v.push_back(1);

    cout<< "Capacity of v : " << v.capacity() << endl;

    v.push_back(2);
    v.push_back(3);

    cout<< "Capacity of v : " << v.capacity() << endl;

    cout<< "Size of v : " << v.size() << endl;

    cout << "Element at 2nd index : " << v. at(2) << endl;

    cout << "Front : " << v.front() << endl;
    cout << "Back : " << v.back() << endl; 

    v.pop_back(); 
    cout << "After pop : ";
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    v.clear();

    cout << "Size after clear : " << v.size() << endl;

    return 0;
}