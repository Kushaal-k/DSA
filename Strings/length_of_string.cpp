#include <iostream> 

using namespace std;

int length(char str[]){
    int count= 0;
    for(int i=0;str[i]!='\0';i++) 
        count++;
    return count;
}

int main(){
    char arr[10];
    cin >> arr;

    cout << length(arr) << endl;

    return 0;
}