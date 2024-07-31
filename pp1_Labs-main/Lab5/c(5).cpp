#include <iostream>

using namespace std;

int main(){
    string line, subline;
    cin >> line >> subline;
    int counter = 0;
    int i = 0;
    bool flag = false;
    while(counter < subline.length()){
        if(line[i] == subline[counter]){
            flag = true;
            counter++;
        }
        else if(counter > 0 && line[i] != subline[counter]){
            flag = false;
            break;
        }
        i++;
    }

    if(flag == true){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}