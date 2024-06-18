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

int main(){
    cout << "Enter the number you want square root of : " ;
    int n;
    cin >> n;

    cout << "Square root in integer : " << sqrtInteger(n) << endl ;

}