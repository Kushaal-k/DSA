// #LeetCode 1945

#include <iostream> 

using namespace std;
int sum(int n) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
}

int getLucky(string s,int k) {
            string s1 = "";

            for(int i=0;i<s.length();i++){
                int temp = (s[i] - 'a')+1;
                cout << temp << endl;
                string temp2 = to_string(temp);
                s1 += temp2;
            }
            int ans = 0;
            for (char c : s1) {
                ans += c - '0';
            }
            while(k){
                ans = sum(ans);
                k--;
            }
            return ans;
}

int main(){
    string s;
    getline(cin,s);
    int k;
    cin >> k ;
    cout << getLucky(s,k) << endl;
    return 0;
}