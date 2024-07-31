#include<iostream>  //aydarbek

using namespace std;

int main(){
int n;
cin>>n;
int kek[n][n];

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){


        cin>>kek[i][j];

}
}


int max[n];
    for(int i=0; i<n; i++){

max[i]=-1;
}


for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){

    if(kek[i][j]>=max[i]){
    max[i]=kek[i][j];
}
}  
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        
       kek[i][j]=max[i];

       cout<<kek[i][j]<<" ";
}
        cout<<endl;
    }



    return 0;
}
