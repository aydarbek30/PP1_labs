#include <iostream> //aydarbek
using namespace std;

int kek(int arr[]){
    int kek = arr[0];

    for(int i = 0; i < 4; i++){
        if(arr[i] >= kek){
            kek = arr[i];
        }
    }

    return kek;
}

int main()
{
    int arr[4];

    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }

    cout << kek(arr) << endl;
}