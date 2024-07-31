#include <iostream> //aydarbek
#include <cmath>
using namespace std;
int main(){
int N;
cin >> N;
int s=sqrt(N);
if (s*s==N){
        cout << "Perfecto";
}
    else{
        cout << "Simple";
}
    return 0;
}