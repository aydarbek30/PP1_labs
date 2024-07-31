#include   <iostream>  //aydarbek
using namespace std;


int main(){


int n;
int m;

cin>>n;
cin>>m;


int a[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

        cin>>a[i][j];
}
}


int b;
cin>>b;


for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
    if( a[i][j] > b){

    cout<<"Penalty!";

return 0;
}
}
}

cout<<"No penalty for today.";

    return 0;
}