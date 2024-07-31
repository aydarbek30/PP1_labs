#include <iostream> //aydarbek
using namespace std;

int main(){


int h;
int w;
int n;

cin>>h;
cin>>w;
cin>>n;


int kek[h][w];
int x1,x2,y1,y2;
int count1=0;

for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){

    kek[i][j]=0;
}
} 
for(int k=0; k<n; k++){
    cin>>x1>>y1>>x2>>y2;

for(int i=x1; i<x2; i++){
    for(int j=y1; j<y2; j++){

    kek[i][j]=1;


}
}
}
for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){

    if(kek[i][j] == 0){
          count1++;

}
}
}


cout<<count1;

    return 0;
}