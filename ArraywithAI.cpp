#include <iostream>
#include <algorithm>
using namespace std;

bool isSorted(int arr[], int n) {
    return is_sorted(arr, arr + n);
}

int main() {
    // Contoh 1
    int arr1[] = {10, 20, 30, 40, 50};
    int n1 = 5;
    
    if (isSorted(arr1, n1)) {
        cout << "Array 1: true" << endl;
    } else {
        cout << "Array 1: false" << endl;
    }
    
    // Contoh 2
    int arr2[] = {90, 80, 100, 70, 40, 30};
    int n2 = 6;
    
    if (isSorted(arr2, n2)) {
        cout << "Array 2: true" << endl;
    } else {
        cout << "Array 2: false" << endl;
    }
    
    return 0;
}
