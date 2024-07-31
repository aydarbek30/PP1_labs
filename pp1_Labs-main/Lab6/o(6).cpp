#include <iostream> //aydarbek

using namespace std;

int kek(string s)
{
    int count = 0;

    for(int i = 0; i < s.size(); i++){
        count = count+int(s[i])-48;
    }

    return count;
}

int main()
{
    string a;
    cin >> a;
    int b;

    b = a[a.size()-1]-48; 

    if(kek(a)%b == 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}