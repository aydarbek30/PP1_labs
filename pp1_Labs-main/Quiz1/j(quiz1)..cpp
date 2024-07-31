#include <iostream>  //aydarbek

using namespace std;
int main(){
    int a, b, c, x, y, z, s;
    cin >> a >> b >> c >> x >> y >> z >> s;
    int s1 = a*x;
    int s2 = b*y;
    int s3 = c*z;
    int SP=s1+s2+s3;
    if (SP<=s){
        cout << "Yes";
}
    else{
        cout << "No";
}
    return 0;
}