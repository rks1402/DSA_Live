#include<iostream>
using namespace std;

void printFibonacci(int n){

    int a = -1;
    int b = 1;

    for(int i = 1; i <=n ; i++){
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }

}

int main(){

    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    printFibonacci(n);

    return 0;
}