#include<iostream>
using namespace std;

void printnumber(int num){

num = 10;
cout << "Printing Number " << num << endl;

}

int main(){

    int num = 6;
    
    //function to call
    printnumber(num);

    cout << "Printing number " << num << endl;

    return 0;
}