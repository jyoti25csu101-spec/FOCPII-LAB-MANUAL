#include<iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int largest, second;

    if(arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    for(int i = 2; i < 5; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << second << endl;

    return 0;
}