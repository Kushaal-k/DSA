#include <iostream> 

using namespace std;

int gcd(int a,int b){
    if(a==0)
        return b ;
    if(b==0)
        return a ; 
    while(a!=b){
        if(a>b)
            a-=b;
        else 
            b-=a;
    }
    return a;
}

int gcd_recursive(int a,int b){
    if(b==0){
        return a;
    }
    else
        return gcd_recursive(b,a%b);
}

int main(){
    int a,b;
    cout << "Enter two number to find GCD : ";
    cin >> a ;
    cin >> b ; 

    cout << "The GCD of both number is " << endl;

    cout << gcd(a,b) << endl;
    cout << gcd_recursive(a,b);
    
    return 0;
}