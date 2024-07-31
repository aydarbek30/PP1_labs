#include <iostream> //aydarbek

using namespace std;

int main()
{
int a, target;
cin >> a;
cin >> target;

int arr[a];
int max = -1000000;
int ii;

for(int i = 0; i < a; i++){
    cin >> arr[i];
        
if(max < arr[i] && arr[i] <= target){
    max= arr[i];
ii = i+1;

}
}

cout << ii << endl;

return 0;
}