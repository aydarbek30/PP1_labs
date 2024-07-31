#include <iostream>
#include <algorithm>
using namespace std;

int main() {

int n,a;
cin>>n;
int count = 0;


for (int i = 0; i<n; i++) {

    cin>>a;

    if (a%10 == 7) {

    count++;
    }

}
    cout<<count<<endl;

return 0;


}

