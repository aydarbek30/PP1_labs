#include <iostream>   //aydarbekamatov

using namespace std;

int whenFatherTwoTimesOlder(int fatherAge, int sonsAge){
    int cnt = 0;
    int fatherCopy = fatherAge, sonsCopy = sonsAge;
    while(sonsCopy > 0){
        if(fatherCopy == sonsCopy * 2){
            return cnt;
        }
        fatherCopy--;
        sonsCopy--;
        cnt++;
    }
    cnt = 0;
    while(true){
        if(fatherAge == sonsAge * 2){
            return cnt;
        }
        fatherAge++;
        sonsAge++;
        cnt++;
    }
}

int main(){
    
    int father, son;
    cin >> father >> son;
    cout << whenFatherTwoTimesOlder(father, son);
    return 0;
}