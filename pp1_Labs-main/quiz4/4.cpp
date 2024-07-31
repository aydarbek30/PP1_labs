#include <iostream>   //aydarbekamatov
#include <string>

using namespace std;


bool checkDigit(char d){
    string digits = "1234567890";
    for(int i = 0; i < digits.size(); i++){
        if(d == digits[i]){
            return true;
        }
    }
    return false;
}


bool isDigit(string sample){    
    
    bool dotAppeared = false;
    if(sample[0] == '-'){
        for(int i = 1; i < sample.size(); i++){
            if(sample[i] == '.'){
                if(dotAppeared){
                    return false;
                }
                dotAppeared = true;
                continue;
            }
            if(!checkDigit(sample[i]) and sample[i] != ' '){
                return false;
            }
        }
    }
    return true;
}


int main(){
    
    cout << isDigit(" -3.23 ");
    return 0;
}