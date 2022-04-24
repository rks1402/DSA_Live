#include<iostream>
using namespace std;

void Squares(int n){

    for(int i = 1; i<=n ; i++){
        cout << i*i << endl;
    }

}

int main(){

    int n = 6;
    Squares(n);

    return 0;
}