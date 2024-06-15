#include <iostream> 

using namespace std;

long long int sqrtInteger(int x){
    
    int s = 0;
    int e = x;
    long long  mid = s +(e-s)/2;

    long long ans = -1 ;

    while(s<=e){
        long long square = mid * mid;

        if(square == x)
            return mid;

        if(square < x){
            ans = mid;
            s = mid +1;
        }
        else 
            e = mid -1;

        mid = s + (e-s)/2;
    }
    return ans;
}

double sqrtprecise(int x,int precision, int temp_sol){

    double factor = 1;
    double ans = temp_sol;

    for(int i=0;i<precision;i++){
        factor = factor/10;
        for(double j=ans;j*j<x; j= j + factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    cout << "Enter the number you want square root of : " ;
    int n;
    cin >> n;
    cout << "Enter precision : " ;
    int precision;
    cin >> precision;

    int tempsol = sqrtInteger(n);

    cout << "Square root : " << sqrtprecise(n,precision,tempsol)   << endl ;

    return 0;
}