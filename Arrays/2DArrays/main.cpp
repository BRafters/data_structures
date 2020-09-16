#include <iostream>
#include <ctime>

// This program will demonstrate the use of 2D arrays on both the stack and heap

// Fills a given 2D array with random numbers
void fillArray(int ** arr, int row, int col){
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            arr[i][j] = 1 + rand() % 20;
        }
    }
}

void print(int ** arr, int row, int col){
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%2d ", arr[i][j]);
        }
        putchar('\n');
    }
}

int main() {
    // Seed random
    srand(time(0));

    // Create const ints for 2D array sizes
    const int rows = 3;
    const int cols = 4;

    int arr1[rows][cols];
    // Create two different arrays, one on stack, one on heap
    int ** a2 = (int **) malloc(rows * sizeof(int));
    for (int i = 0; i < rows; ++i) {
        a2[i] = (int *) malloc(cols * sizeof(int));
    }

    // Fill the stack array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr1[i][j] = 1 + rand() % 20;
        }
    }

    // Fill the heap array
    fillArray(a2, rows, cols);

    // Print each array
    std::cout << "Printing 2D stack array" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%2d ", arr1[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');

    std::cout << "Printing 2D heap array" << std::endl;
    print(a2, rows, cols);


}
