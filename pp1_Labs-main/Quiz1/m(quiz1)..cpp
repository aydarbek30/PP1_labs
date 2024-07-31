#include <iostream>  //aydarbek

using namespace std;
int main(){
int n, a, d;

cin >> n >> a >> d;
int an = a + (n-1)*d;

for (int i=a; i<=an; i+=d){
        cout << i << " ";}
    int S = (a + an)*n / 2;
    cout << "\nsum: " << S;
}