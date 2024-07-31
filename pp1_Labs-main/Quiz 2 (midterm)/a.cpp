#include<iostream> //aydarbek
using namespace std;

int main(){



  
int n;
cin>>n;

int a[n];
int L=0;
int R=0;
int count1=0;
int count2=0;


for(int i=0;i<n;i++){
cin>>a[i];
}

for(int i=0;i<n;i++){
  if(a[i]%2==0){
    L+=a[i];
    count1++;
}
  else{
    R+=a[i];
      count2++;
}
}



cout<<" Left hand magic power: " << L*count1<<endl;
cout<<" Right hand magic power: " << R*count2;

return 0;
}