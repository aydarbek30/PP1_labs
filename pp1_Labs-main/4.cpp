#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    n = s.size();
    char arr[s.size()];
    for (int i = 0; i < s.size(); i++)
    {
        arr[i] = s[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n- 1 - i; j++)
        {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i];
    }
    
    return 0;
    
    

}