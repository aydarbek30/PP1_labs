#include <iostream> //aydarbek

using namespace std;
int main(){
int n;
cin >> n; 
    if(n==1){
        cout << "0";
return 0;
}
    else if (n%2==0){
        cout << n/2;
}
    else if (n%2==1){
        cout << n;
}
   
    return 0;
}