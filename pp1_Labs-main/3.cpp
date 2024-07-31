#include <iostream>

using namespace std;

void miniPeaks(int n){
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n-1; i++)
    {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            cout << arr[i] << " ";
        }
    }
    
}
int main(){

    int n;
    cin >> n;
   miniPeaks(n);
   return 0;
    
}