#include <iostream>
using namespace std;

int main()
{
int n;
int kek=0;
cin>>n;
    
int a[n];
    for(int i=0;i<n; i++){
        cin>>a[i];
}

    for(int i=0;i<n/2;i++)
{

int rev=0;     
while (a[n-i-1]!=0)
{
	rev=rev*10;
		rev=rev+(a[n-i-1]%10);
		    a[n-i-1]=a[n-i-1]/10;
}
        
if(a[i]!=rev)
kek+=1;
}
    
    
if(kek==0)
    cout<<"YES"<<endl;
     
else
    cout<<"NO"<<endl;
    return 0;
}