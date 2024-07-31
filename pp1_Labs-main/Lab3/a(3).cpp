#include <iostream>
#include <math.h>
using namespace std;


int main () {

int a;
cin>>a;

int arr[a] ;


for(int i = 0; i<a; i++) {
cin>>arr[i];


if (arr[i]%2 == 1) {
    cout<<arr[i]<<endl;
}
}

    return 0;
}