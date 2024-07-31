#include <iostream>   //aydarbek
#include <algorithm>
using namespace std;

int main(){



int n;
int m;
cin>>n;
cin>>m;


int a[n][m];
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){


        cin>>a[i][j];
}
}

int e[n];
for(int i=0; i<n; i++){
    e[i]=0;
}


for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        e[i]=e[i]+a[i][j];
}
}


for(int i=0; i<n; i++){
    e[i]=e[i]/m;
    cout<<e[i]<<" ";
}
    return 0;
}