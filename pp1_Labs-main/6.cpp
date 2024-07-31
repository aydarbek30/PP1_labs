#include <iostream>
#include <vector>
using namespace std;

int combinations(vector<int> a){
    int b = 1;
    for (int i = 0; i < a.size(); i++)
    {
        b *= a[i];
    }
    return b;

    
    
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

        cout << combinations(a);
        return 0;
        
    }