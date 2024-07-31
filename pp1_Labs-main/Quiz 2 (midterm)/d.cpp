#include<iostream>   //aydarbek
using namespace std;

void lolik(int arr[], int n)
{

    int i, j;
    for (i = 0; i < n - 1; i++)
    for (j = 0; j < n - i - 1; j++)
    if (arr[j] > arr[j + 1])
    swap(arr[j], arr[j + 1]);

}


int main(){
int n;
cin>>n;


int a[n];
for(int i=0; i<n; i++){
    cin>>a[i];
}
   
    int count1[n];
    for(int i=0; i<n; i++){
        
        count1[i]=0;

}


    lolik(a,n);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                count1[i]++;
}
}
}
    int max=0;
    for(int i=0; i<n; i++){
        if(count1[i]>=max){
            max=count1[i];
        }
    }
    for(int i=n-1; i>=0; i--){
        if(count1[i]==max){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}