/**
根据输入的半径值，计算球的体积。
 
Input
输入数据有多组，每组占一行，每行包括一个实数，表示球的半径。
 
Output
输出对应的球的体积，对于每组输入数据，输出一行，计算结果保留三位小数。
 */

#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.1415927

int main(){
    double r;
    while(cin >> r)
        cout << fixed << setprecision(3) <<  (4.0 / 3.0) * PI * r * r * r <<endl;
    return 0;
}