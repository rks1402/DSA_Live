#include<iostream>
using namespace std;

int Factorial(int n){
    int ans = 1;

    for(int i= 1; i<=n; i++){
        ans = ans*i;
    }

    return ans;
}

int main(){

    int n = 7;
    cout << Factorial(n);

    return 0;
}