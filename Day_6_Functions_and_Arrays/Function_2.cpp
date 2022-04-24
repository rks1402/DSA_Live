#include<iostream>
using namespace std;

void print_even(int n){

    for(int i = 2; i <= n; i += 2){
        cout << i << endl;
    }

}

int main(){

    int n = 20;

    print_even(n);

    return 0;
}