#include <iostream> //aydarbek

using namespace std;

int main(){
 int mid, end, fin;
 cin >> mid >> end >> fin;
 int half = mid + end;
 int full = fin + half;
 if ( half >= 30 and fin >= 20 and full >= 70 ){
        cout << "YES!";
}
    else{
        cout << "NO.";
}
}