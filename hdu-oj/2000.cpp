/**
 * ASCII码排序
 * 输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
 * Input
 * 输入数据有多组，每组占一行，有三个字符组成，之间无空格。
 * Output
 * 对于每组输入数据，输出一行，字符中间用一个空格分开。
 */ 

#include<iostream>
#include<algorithm>
using namespace std;

string s;
void solve(){
    while(cin >> s){
        sort(s.begin(), s.end());
        cout << s[0] << " " << s[1] << " " << s[2] << endl;
    }
}

int main(){
    solve();
    return 0;
}