#include <iostream>
#include <algorithm>
using namespace std;

int main() {

int n,a,max;
cin>>n;
a = 0;
max = a;


for(int i = 0; i < n; i++){
    cin>>a;
    if(a>max){max=a;}
}

cout<<max<<endl;

    return 0;
}