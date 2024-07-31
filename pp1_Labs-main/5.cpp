#include <iostream>
#include <vector>
using namespace std;

vector<int> accumulatingArray(vector<int>  arr){
    int sum = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        sum = arr[i - 1];
        arr[i] += sum;
        
    }
    return arr;
}  
    int main(){
        int n; 
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
           int t;
           cin >> t;
           a.push_back(t);
        }
        a = accumulatingArray(a);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }
        return 0;
    }