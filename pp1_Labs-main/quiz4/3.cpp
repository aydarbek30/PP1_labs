#include <iostream>   //aydarbekamatov

using namespace std;


int pillarDistance(int pillars, int distance, int width){
    distance *= 100;
    int ans = 0;
    for(int i = 1; i < pillars; i++){
        ans += distance + width;
    }
    return ans;
}

int main(){
    
    int pillars, distance, width;
    cin >> pillars >> distance >> width;
    cout << pillarDistance(pillars, distance, width);
    return 0;
}