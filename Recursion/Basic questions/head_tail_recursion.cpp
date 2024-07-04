#include <iostream> 

using namespace std;

void print_head(int n){
    if(n==0)
        return;

    print_head(n-1);

    cout << n << " ";
}

void print_tail(int n){
    if(n==0)
        return;

    cout << n << " ";

    print_tail(n-1);
}

int main(){

    int n;
    cin >> n;

    cout << endl << endl;

    print_head(n);
    cout << endl << endl;

    print_tail(n);
    cout << endl << endl;

    return 0;
}