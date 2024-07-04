#include <iostream> 

using namespace std;

bool checkPalindrome(string s,int i,int j){

    if (i>j)
        return true;

    if(s[i]!=s[j])
        return false;
    else {
        return checkPalindrome(s,i+1,j-1);
    }
}

int main(){
    string name = "nitin";

    if(checkPalindrome(name,0,name.length()-1))
        cout << "String is plaindrome." << endl;
    else 
        cout << "String is not palindrome." << endl;

    return 0;
}