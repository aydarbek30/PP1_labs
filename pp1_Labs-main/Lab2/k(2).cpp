#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;
int c = 1;


while(true) {
    if(c*c <= n) {

        cout <<c*c<<endl;
        c++;
    }


   if (c*c > n) {
    break;
   }
}


    return 0;
}