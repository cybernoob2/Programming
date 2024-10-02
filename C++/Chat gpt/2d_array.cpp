#include <iostream>
using namespace std;

int main() {
    // Step 1: Get the number of rows and columns from the user
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Step 2: Dynamically allocate memory for the 2D array
    int** array = new int*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[cols];
    }

    // Step 3: Use nested loops to get user input
    cout << "Enter elements for the " << rows << "x" << cols << " array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i+1 << "][" << j+1 << "]: ";
            cin >> array[i][j];
        }
    }

    // Step 4: Display the 2D array (optional)
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " " ;
        }
        cout << endl;
    }

    // Step 5: Free dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
