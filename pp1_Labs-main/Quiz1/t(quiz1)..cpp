#include <iostream>  //aydarbek

using namespace std;
int main(){
int n;
cin >> n;
int x[n];
int sum = 0;
for (int i=0; i<n; i++){
        cin >> x[i];
    }
    for (int i=0; i<n; i++){
        while (x[i]>0){
            sum += x[i] % 10;
            x[i]/=10;
}
        if (sum % 2 == 0){
            cout << "Sum of digits is even!" << endl;
}
        else{
            cout << "Sum of digits is odd!" << endl;
}
        sum=0;
}
}
