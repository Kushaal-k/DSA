// LeetCode 1910

// with using stl function

#include <iostream> 

using namespace std;

string removeOccurrences(string& s, string part) {
        
    while(s.length()!=0 && (s.find(part) < s.length()))
        s.erase(s.find(part),part.length());

    return s;
}

int main(){
    string s,part;
    cout << "Enter the string : ";
    getline(cin,s);
    cout << "Enter the sub string : ";
    getline(cin,part);

    removeOccurrences(s,part);

    cout << s << endl;

}