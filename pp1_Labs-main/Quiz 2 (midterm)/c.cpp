#include  <iostream>  //aydarbek
using namespace std;

int main(){

int n;
cin>>n;


int a[n];
int b[n];

int count1=0;
int count2=0;


for(int i=0;  i<n; i++){
    cin>>a[i];
}


for(int i=0; i<n; i++){
    if(a[i]%2==0){

        b[count1]=a[i];
        count1++;
}
}

count2 += count1;


for(int i=0; i<n; i++){


    if(a[i]%2==1){
        b[count2]=a[i];
        count2++;
}


}
for(int i=0; i<n; i++){

    cout<<b[i]<<" ";
}


    return 0;
}