#include<iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= i;
    }

    return ans;
}

int ncr(int n, int r){
    int ans;
    ans = factorial(n)/(factorial(n-r) * factorial(r));

    return ans;
}


int main(){

    int n = 5;

    for(int row = 0; row < n; row++){
        for(int col = 0; col <= row; col++){
            cout << ncr(row, col) << " ";
        }
        cout << endl;
    }

    return 0;
}