#include <iostream> 

using namespace std;

int power(int a,int b){
    if(b==0)
        return 1;

    if (b==1)
        return a;

    int ans = power(a,b/2);

    if(b&1)
        return a * ans * ans;
    else 
        return ans * ans;
}

int main(){
    int a,b;
    
    cout << "Enter two numbers : ";
    cin >> a;
    cin >> b;
    
    cout << a << " raised to the power of " << b << " is " << power(a,b) << endl;

    return 0;
}