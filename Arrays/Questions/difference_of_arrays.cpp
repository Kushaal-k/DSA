// Assumptions : a2>a1.
// Find a2-a1

#include <iostream> 
// #include <bits/stdc++.h>

using namespace std;

int main(){

    int m,n;

    cout << "Enter size of first array : " << endl;
    cin >> m;

    int *a1 = new int[m];
    for(int i=0;i<m;i++)
        cin >> *(a1+i);

    cout << "Enter size of second array : " << endl;
    cin >> n;

    int *a2 = new int[n];
    for(int i=0;i<n;i++)
        cin >> *(a2+i);
    
    int* diff = new int[n];
    int k = n-1,i=m-1,j=n-1;
    int c = 0;

    for(int i;i<n;i++)
        diff[i] = 0;

    while(i>=0 && j>=0){
        if((a2[j] + c ) >= a1[i]){
            diff[k] = a2[j] + c - a1[i];
            c = 0;
        }
        else {
            diff[k] = (a2[j]+10+c) - a1[i] ;
            c = -1;
        }

        k--;
        j--;
        i--;
    }
    
    while(j>=0){
        diff[k--] = a2[j--] + c;
        c = 0; 
    }

    int index=0;
    while(index<n){
        if(diff[index]!=0){
            break;
        }
        index++;
    }

    cout << "Subtraction of second array from first array : "  ;
    while(index<n){
       cout << diff[index] << " ";
       index++;
    }

    return 0;   
}