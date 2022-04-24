#include<iostream>
using namespace std;

void print_name(int n){
    for(int i = 1; i <= n ; i++){
        cout << "Rahul Kumar Sharma" << endl;
    }
}

int main(){

    int n = 6;
    print_name(n);

    return 0;
}