#include <iostream>
using namespace std;

int main() {
    int *A[3];
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];


    // Print the arrays
    for (int i = 0; i < 3; ++i) {  // Loop through each row
        for (int j = 0; j < 4; ++j) {  // Loop through each element in the row
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    // Free the allocated memory
    for (int i = 0; i < 3; ++i) {
        delete[] A[i];
    }

    return 0;
}