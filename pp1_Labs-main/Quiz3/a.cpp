#include <iostream>  //Aydarbek

using namespace std;

void kek(string s){
bool x = true;


for(int i = 0; i < s.size(); i++){
    if(s[i] >= '0' && s[i] <= '9'){
        x = false;
}
}

if(x)
     cout << s << endl;
    
}

int main(){
    string mem;
    getline(cin, mem);
    string s ="";
    for(int i = 0; i <= mem.size(); i++){
        if(mem[i] != ' ' && i < mem.size()){
            s += mem[i];
           
}

else{
    kek(s);
         s = "";
}

}
    return 0;
}