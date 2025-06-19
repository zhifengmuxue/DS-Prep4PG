/**
 * 计算两点间的距离
 * 
 * 输入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。
 * input 
 * 输入数据有多组，每组占一行，由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开
 * output 
 * 对于每组输入数据，输出一行，结果保留两位小数。
 */

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double xa, ya, xb, yb;
int main(){
    while(cin >> xa >> ya >> xb >> yb){
        cout << fixed << setprecision(2) << sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb)) << endl;
    }
}