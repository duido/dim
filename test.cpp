#include <iostream>

using namespace std;

#define N 3

int main(){
    int m[N][N] = {{0,0,0},{0,0,0},{0,0,0}};


    cout << "-------------" << endl;
    for(int i = 0;i < N;i++){
        cout << "| " << m[i][0] << " | " << m[i][1] << " | " << m[i][2] << " |" << endl;
        cout << "-------------" << endl;
    }


    return 0;
}
