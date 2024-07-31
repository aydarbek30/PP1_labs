#include<iostream>  //aydarbek

using namespace std;

int main(){


int n;
cin>>n;


int a[n];
for(int i=0; i<n; i++){
    cin>>a[i];
}


int max  =  -1100001;

for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){


         if(a[i]*a[j] >= max){
            max=a[i]*a[j];
            
}
}
}
cout<<max;

 return 0;
}