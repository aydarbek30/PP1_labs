#include <iostream>
using namespace std;


int main () {


int n,b,max;
cin>>n;
int arr[n];
max = -1000000;



for(int i = 0; i<n; i++)  {
    
cin>>arr[i];

if(arr[i]>max) {

    max=arr[i];

}
}

cout<<max<<endl;


    return 0;
}