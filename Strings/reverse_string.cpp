#include <iostream> 

using namespace std;

int length(char str[]){
    int count= 0;
    for(int i=0;str[i]!='\0';i++) 
        count++;
    return count;
}
void reverse(char str[]){
    int s = 0 ;
    int e = length(str)-1;

    while(s<=e){
        swap(str[s++],str[e--]);
    }
}

int main(){
    char s[10];
    cin >> s;

    reverse(s);

    cout << s;
    cout << endl;
    return 0;

}