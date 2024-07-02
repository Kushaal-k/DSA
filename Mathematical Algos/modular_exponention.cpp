// You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is defined
//  as A raised to power B and A % C is the remainder when A is divided by C.

// Constraints :
// 1 <= T <= 100   
// 1 <= X, N, M <= 10^9

// Sample Input 1 :
// 2 
// 3 1 2
// 4 3 10
// Sample Output 1 :
// 1
// 4
// Explanation for Sample Output 1:
// In test case 1, 
// X = 3, N = 1, and M = 2 
// X ^ N = 3 ^ 1 = 3 
// X ^ N % M = 3 % 2 = 1. 
// So the answer will be 1.


#include <iostream> 

using namespace std;

int modularExponentiation(int x,int n,int m){
    int res = 1;

    while(n>0){
        if(n&1)
            res = (1LL *(res) * (x)%m)%m;
        x = (1LL * (x)%m * (x)%m)%m;
        n = n>>1;
    }
    return res;
}

int main(){
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << modularExponentiation(a,b,c) << endl;

    return 0;
}