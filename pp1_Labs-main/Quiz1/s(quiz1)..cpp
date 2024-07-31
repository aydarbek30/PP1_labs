#include <iostream>  //aydarbek

using namespace std;
int main(){
int a, b, c;
cin >> a >> b >> c;
if ((a==b and a+b>c) or (a==c and a+c>b) or (b==c and b+c>a)){
        cout << "Yes";
}
else{
        cout << "No";
    }
}