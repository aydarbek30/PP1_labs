#include <iostream> //aydarbeks

using namespace std;
int main(){
int x, y, a, b;
cin >> x >> y >> a >> b;
if (x/a>0 && y/b>0){
        cout << "Yes";
        return 0;
}
else if (x/a>0 && y/b<=0){
        y = x-a+y;
        if (y/b>0){
            cout << "Yes";
        }
        else {
            cout << "No";
            return 0;
        }
}
else {
        cout << "No";
}
}