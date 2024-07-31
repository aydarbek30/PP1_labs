#include <iostream>

using namespace std;

int main(){
    string line;
    cin >> line;
    
    int length = line.length();
    bool flag = false;

    for(int i = 0; i < length; i++){
        if(line[i] == line[length - 1 -i]){
            flag = true;
            continue;
        }
        else{
            flag = false;
            break;
        }
    }

    if(flag == true){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}