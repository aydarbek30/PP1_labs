#include <iostream>  //aydarbek
#include <string>
using namespace std;

int main(void) {
int n;
int S;
int C;

cin >> n;

   for(int i = 0; i < n; i++){
      	S = (n - i) - 1;
      	C = (2 * i) + 1;

      	for(int j = 0; j < S; ++j){
        	cout << '.';
}

      	for(int j = 0; j < C; ++j){
      		cout << '*';
}

	for(int j = 0; j < S; ++j){
        	cout << '.';
}
cout << endl;
}

   return 0;
}