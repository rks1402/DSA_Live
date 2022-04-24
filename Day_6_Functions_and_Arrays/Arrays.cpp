#include<iostream>
using namespace std;

void print_array(int arr[], int size){

    for(int i = 0; i < size; i++){

        //accessing elements of array
        cout << arr[i] << " ";
    }
    cout << endl;
}

void util(int arr[], int size){
    arr[0] = 23;
    print_array(arr, size);
}

int main(){

    int arr[100];

    int n;
    cout << "Give the Size of Array";
    cin >> n;

    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    // int arr[] = {3,6,9};

    // util(arr, 3);

    // cout << "Printing in main function" << endl;
    // print_array(arr, 3);

    // creation
    // int arr1[10];

    // int arr[5] = {1,2,3,4,5};
    // print_array(arr, 5);
    
    // int arr2[] = {1,2,3,4,5};

    // int arr3[15] = {1,2};

    // access


    return 0;
}