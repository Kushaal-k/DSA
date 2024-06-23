#include <iostream> 

using namespace std;

// Check for valid characters(alpha-numeric)

bool valid_char(char c){
    if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9'))
        return true;
    else 
        return false;
}

// changing all characters in lowercase
void lowercase(string& s){
    for(int i;s[i] !='\0';i++){
        if(s[i]>='A' && s[i]<='Z')
            s[i] = s[i] + 32;
    }
}

// Reversing the string 
string reverse(string str){
    string st = str; 
    int s = 0 ;
    int e = st.length()-1;

    while(s<=e){
        swap(st[s++],st[e--]);
    }
    return st;
}

// check if strings are palindrome
bool check_palindrome(string a, string b){
    if(a == b)
        return true;
    else 
        return false;
}

int main(){
    string s;
    cout << "Enter the string to check if its palindrome : " << endl;

    getline(cin,s);

    string temp = "";

    for(int i=0;i<s.length();i++){
        if(valid_char(s[i]))
            temp.push_back(s[i]);
    }

    lowercase(temp);

    if(check_palindrome(temp,reverse(temp)))
        cout << "The string is palindrome after removing invalid characters." << endl;
    else
        cout << "The string is not palindrome." << endl;

    return 0;
}