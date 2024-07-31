#include<iostream>  //aydarbek

using namespace std;


int main(){

string b;
cin>>b;


int sum=0;
int mem;
mem  =  b[0]-48;


for(int i=1; i<b.size(); i++){
sum+=b[i]-48;


}

    sum=sum%10;

    if(mem==sum){

       cout<<"YES"<<endl;
}
    else{
        cout<<"NO"<<endl;
}

    return 0;
}
