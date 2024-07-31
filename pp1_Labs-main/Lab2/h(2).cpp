#include <iostream>
using namespace std;

int main () {

int n,a,c;
cin>>n;

int count1 = 0;
int count2 = 0;
    
for (int i = 0; i<n; i++) {

cin>>a;

    if(a%2==0) {

    count1++;  
    }

    else if (a%2==1)
    count2++;
}
        cout<<count1<<" "<<count2<<endl;

return 0;
}
