// LeetCode 567
#include <iostream>
using namespace std;


bool checkEqual(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    
    int count1[26] = {0};

    for(int i=0;i<s1.length();i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // traverse s2 string in window size s1 length and compare 

    int i=0;
    int windowsize = s1.length();
    int count2[26] = {0};

    // Running for 1st window
    while(i < windowsize && i<s2.length()){
        int index = s2[i] - 'a';
        count2[index]++ ;
        i++;
    }
    
    if(checkEqual(count1,count2))
        return true;
    
    // running for next windows
    while(i<s2.length()){
        char ch = s2[i];
        int index = ch - 'a';
        count2[index]++;

        char oldch = s2[i-windowsize];
        index = oldch - 'a';
        count2[index]--;

        i++;

        if(checkEqual(count1,count2))
        return true;

    }

    return false;
}

int main(){
    string s1,s2;

    cout << "Enter 1st string : ";
    cin >> s1;

    cout << "Enter 2nd string : ";
    cin >> s2;

    if(checkInclusion(s1,s2))
        cout << "True";
    else 
        cout << "False";

    return 0;
}