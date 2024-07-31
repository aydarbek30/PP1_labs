#include <iostream> 

using namespace std;

int main()
{
    
int n;
cin >> n;
int arr[n];
int max = -1000000;
int ans;

for(int i = 0; i < n; i++){
    cin >> arr[i];

if(max < arr[i]){
     max = arr[i];
}
}

for(int i = 0; i < n; i++){
        if(max == arr[i]){
        ans = i+1;
}
}

 cout << ans << endl;

    return 0;
}