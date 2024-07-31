#include <iostream>  //aydarbek

using namespace std;
int main(){
int N;
cin >> N;
int S=0;
while (N>0){
        if (S%7==0){
            N=N+0;
}
       else if (S%2==0){
            N = N - 4;
}
        else if (S%2==1){
            N = N + 3;
} 
        S++;
}
    cout << S;
}