#include <iostream>

using namespace std;


int main() {

int n;
cin>>n;
long long sum = 0;
int arr[n];



for(int i = 0;i<n; i++){

cin>>arr[i];

sum += arr[i];


}

cout<<sum<<endl;

return 0;
}


//aidarbek30