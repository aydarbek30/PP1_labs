#include <iostream>
using namespace std;

int main () {
int n, q[500500];
cin >> n;

for (int i = 1; i <= n; ++ i) {
    cin >> q[i];
}

for (int i = 1; i <= n; ++ i) {
    for (int j = 1; j <= n; ++ j) {

if (q[i] >= q[j])
    swap (q[i], q[j]);

}
}

    for (int i = 1; i <= n; ++ i) {
        cout << q[i] << ' ';       
}

    return 0;
}