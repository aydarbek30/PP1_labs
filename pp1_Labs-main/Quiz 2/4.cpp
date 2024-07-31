// aydarbek amatov 21b031085
#include <iostream>
#include <string>


using namespace std;


int main(){
    string player1, player2;
    cin >> player1 >> player2;
    
    if(player1 == player2){
        cout << "Draw!";
        return 0;
    }
    string ans = "Player2 has won!";
    if(player1 == "scissors" && player2 == "paper"){
        ans = "Player1 has won!";
    }
    if(player1 == "paper" && player2 == "rock"){
        ans = "Player1 has won!";
    }
    if(player1 == "rock" && player2 == "paper"){
        ans = "Player1 has won!";
    }
    cout << ans;
    return 0;
    
}