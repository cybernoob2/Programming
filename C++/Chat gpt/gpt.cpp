#include <iostream>
using namespace std;

int main() {
    // Step 1: Define a fixed-size array (e.g., size 5)
    const int size = 5;
    int array[size];

    // Step 2: Use a loop to get user input
    cout << "Enter 5 elements for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    // Step 3: Display the array (optional)
    cout << "The array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    
    return 0;
}
