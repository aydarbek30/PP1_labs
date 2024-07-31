#include <iostream>  //aydarbek

using namespace std;
int main(){
int sal, money=0, month=0;
cin >> sal;
    int Iphone=500000;
    while (money<+Iphone){
        money += sal/100*30;
        sal=sal/100*110;
        month ++;
}
    cout << month;
}