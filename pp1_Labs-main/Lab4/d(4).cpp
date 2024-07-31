#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;
int arr[n][n];

for(int i=0; i<n; i++){
for(int j=0;j<n;j++){
}
}


for(int i=0; i<n; i++){
    for(int j=0; j<n;j++){
        if(i == 0 or j == 0){
            cout << i + j << ' ';
            continue;
        }

    cout<<i*j << ' ';
}
cout<<"\n";
}



    return 0;
}