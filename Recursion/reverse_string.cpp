#include <iostream> 

using namespace std;

void reverse(string& s,int i,int j){
    if(i>j)
        return;

    swap(s[i],s[j]);
    i++;
    j--;

    reverse(s,i,j);
}

int main(){
    string name = "Kushaal";

    reverse(name,0,name.length()-1);
    cout << name << endl;

    return 0;
}