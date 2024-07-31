#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int x;
    int cnt = 0;

    for(int i = 0 ; i < n; ++i){
        cin >> a[i];
        x = a[i];
        while(true){
            if(x % 10 == 0){
                cnt++;
            }
            x /= 10;
            if(x < 1)break;
        }
    }
    cout << cnt;
    return 0;
}