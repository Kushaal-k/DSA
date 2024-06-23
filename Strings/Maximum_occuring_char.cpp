#include <iostream> 

using namespace std;

char getmaxoccurchar(string s){
    
    int arr[26] = {0};

    for(int i=0;i<s.length();i++){

        int num = 0 ;

        if(s[i]>='a' && s[i]<='z')
            num = s[i] - 'a';

        else if(s[i]>='A' && s[i]<='Z')
            num = s[i] -'A';

        else 
            continue;

        arr[num]++;
    }

    int max = -1,ans =0;

    for(int i=0;i<26;i++){
        if(max<arr[i]){
            ans =i;
            max = arr[i];
        }
    }

    char finalAns = 'a' + ans;

    return finalAns;
}

int main(){
    string s;
    getline(cin,s);

    cout << getmaxoccurchar(s) << endl;
    
}