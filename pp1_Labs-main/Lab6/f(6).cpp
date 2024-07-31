#include <iostream> //aydarbek
#include <string>

using namespace std;

int kek(string a)
{
    int count = 0;

    for(int i = 0; i < a.size(); i++)
    {
        if(int(a[i]) >= 48 and int(a[i]) <= 57){
            count++;
        }
    }

    return count;
}

int main(){
    string a;
    cin >> a;
    int b;
    cin >> b;
    
    if(kek(a) >= b){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}