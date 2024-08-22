// #LC 151 - Reverse word in a string 
// Given an input string s, reverse the order of the words.

#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> reverse;
        int i=0;
        while(s[i]!='\0'){
            string ans = "";
            while(s[i]==' '){
               i++;
            }
            if(s[i]=='\0'){
                break;
            }
            
            while(s[i]!=' ' && s[i]!='\0'){
                ans += s[i];
                i++;
            }
            reverse.push_back(ans);
        }

        string result="";
        for(int j=reverse.size()-1;j>=0;j--){
            result+=reverse[j];
            cout << j << endl;
            if(j>0)
                result += ' ';
        }

        return result;

    }
};


int main(){
    Solution s;
    cout << s.reverseWords(" the sky is  blue   ") << "yoooooo see that";
    return 0;
}