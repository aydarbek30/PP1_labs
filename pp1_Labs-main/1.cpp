#include <iostream>
using namespace std;


bool checkForFactor(int base, int factor){
    return base%factor == 0;
}
int main(){
    int n, m;
    cin >> n >> m;

    cout << checkForFactor(n, m);
    return 0;
}