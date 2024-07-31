#include <iostream>  //aydarbek

using namespace std;
int main(){
int N;
cin >> N;

int a = N / 1000;
int b = N % 1000 / 100;
int c = N % 100 / 10;
int d = N % 10;
if (a==d and b==c){
cout << "YES";
}
    else{
        cout << "NO";
}
}