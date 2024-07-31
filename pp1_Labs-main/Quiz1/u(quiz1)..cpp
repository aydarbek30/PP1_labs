#include <iostream>  //aydarbek

using namespace std;
int main(){
double x, y; 

int day=1;
cin >> x >> y;
while (true){
        if (x>=y){
            break;
}
        x+=x*0.1;
        day++;
}
    cout << day;
}