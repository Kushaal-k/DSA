// LC 186. Reverse Words in a String II
// Given an input string , reverse the string word by word. 

// Example:

// Input:  ["t","h","e"," ","s","k","y"," ","i","s"," ","b","l","u","e"]
// Output: ["b","l","u","e"," ","i","s"," ","s","k","y"," ","t","h","e"]


#include <iostream> 
#include <vector>

using namespace std;

int length(char arr[]){
    int count = 0;
    for(int i = 0;arr[i]!='\0';i++)
        count ++;
    return count;
}

void reverse(char arr[]){
    int j =0;
    for(int i =0;i<=length(arr);i++){
        if(arr[i] ==' ' || arr[i]=='\0'){
            int e=i-1;
            while(j<=e)
                swap(arr[j++],arr[e--]);
            j = i+1;
        }
    }
}

int main(){
    char arr[20] = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};

    for(int i=0;i<length(arr);i++)
        cout << arr[i];
    cout << endl;

    reverse(arr);
    cout << "Reversed words of string : " << endl;
    for(int i=0;i<length(arr);i++)
        cout << arr[i];
    cout << endl;

    return 0;
}