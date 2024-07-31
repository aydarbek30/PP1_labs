#include <iostream>  //aydarbek
using namespace std;



int main(){
int n;

int count = 0;
cin>>n;


int a[n];
int b[n];


for (int i=0; i<n; i++)
{
        cin>>a[i];
}


for (int i=0; i<n; i++)
{
        cin>>b[i];
}


int h;
cin >> h;


for (int i=0; i<n; i++)
{

if (a[i] <=h && b[i]>= h)

{
count++;
}  

}
cout<<count;
}