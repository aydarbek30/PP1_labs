#include <iostream>
using namespace std;


int main () {

int n;
cin>>n;
int arr[n][n];


for(int i = 0; i<n; i++){
for(int j =0; j<n; j++){
cin>>arr[i][j];
}
}



int max = arr[0][0];
long long max2 = -1000000001;

for(int i = 0; i<n; i++){

    for(int j =0; j<n; j++){

    if (arr[i][j] > max ){

    max = arr[i][j];
    }
    }
}

for(int i = 0; i<n; i++){

    for(int j =0; j<n; j++){

    if (arr[i][j] > max2 ){
        if(arr[i][j] != max){
            max2 = arr[i][j];
        }
        }
        }
}

if(-1000000001 == max2){
    cout << 0;
    return 0;
}

cout << max2;

return 0;
}