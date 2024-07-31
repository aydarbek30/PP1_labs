#include <iostream>

using namespace std;

void squarePatch(int n){
     for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << n << " ";
            
        }
        cout << endl;
    }

}
int main() {
    int n;
    cin >> n;
   
   squarePatch(n);
    return 0;
}