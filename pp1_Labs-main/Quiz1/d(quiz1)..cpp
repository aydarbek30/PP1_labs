#include <iostream> //aydarbek

using namespace std;
int main(){
int num;
int mn=40000;
cin >> num;
    for (int i = 1; i <= num; ++i){
        if (num % i == 0){
            if (i<mn and i!=1){
                mn = i;
}
}
}
    cout << mn;
    return 0;
}