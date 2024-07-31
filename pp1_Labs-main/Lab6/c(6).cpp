#include <iostream> //aydarbek
using namespace std;

void kek(int n){
int a[n],b[n];
int m=n;
int count=0;
for(int i=0;i<n;i++){
cin>>a[i];
}


for(int i=0;i<n;i++){
cin>>b[i];
}



for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i]==b[j]){
b[j]=b[m-1];
m--;
count++;
break;
}
}
}
cout<<count;
}


int main(){
int n;
cin>>n;
kek(n);
}