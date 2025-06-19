// Problem Description
// 求实数的绝对值。

// Input
// 输入数据有多组，每组占一行，每行包含一个实数。

// Output
// 对于每组输入数据，输出它的绝对值，要求每组数据输出一行，结果保留两位小数。

#include <iostream>
#include <iomanip>
using namespace std;

double x;
int main(){
    while(cin >> x){
        if (x < 0) {
            x = -x; 
        }
        cout << fixed << setprecision(2) << x << endl;
    }
}