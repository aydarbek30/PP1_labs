#include <iostream>
#include <vector>
using namespace std;

int letterCounter(vector <vector<char> > a,  char b){
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j <a[i].size() ; j++)
        {
            if(a[i][j] == b) {
                cnt ++;
            }
        }
        
    }
    return cnt;
}
int main(){
    vector<vector<char> > a;

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        vector <char> b;
        for(int j = 0; j < m; j++){
            char c;
            cin >> c;
            b.push_back(c);
        }
        a.push_back(b);

    }
    

    cout << letterCounter(a, 'D');
    return 0;
}