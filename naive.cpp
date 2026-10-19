// naive implementation in c++

#include <iostream>
#include <iterator>
#include <print>

int main() {
    int matrix1[3][3] = { //first matrix to multiply
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

int matrix2[3][3] = { //first matrix to multiply
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

size_t m1_rows = std::size(matrix1);
size_t m1_cols = std::size(matrix1[0]);
size_t m2_rows = std::size(matrix2);
size_t m2_cols = std::size(matrix2[0]);


std::print("Matrix1 (rows, cols) ({}, {}) \nMatrix2 (rows, cols) ({}, {})", m1_rows, m1_cols, m2_rows, m2_cols);


// naive multiplication here

}