#include <iostream>
#include <vector>
using namespace std;

vector <int> sumOddAndEven(vector <int> a){
    int m = 0;
    int n = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] % 2 == 0){
            m += a[i];
        }
        else {
            n += a[i];
        }
    }
    vector<int> v;
    v.push_back(m);
    v.push_back(n);
    return v;

}
    
int main(){
   int n;
        vector <int> a;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            a.push_back(t);
        }
    cout << sumOddAndEven(a)[0] <<' ' << sumOddAndEven(a)[1];
    return 0;
    
}