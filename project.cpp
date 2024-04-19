#include <iostream>
#include <vector>

using namespace std;

// Function to perform various matrix operations
void matrixOperations(vector<vector<int>>& matrix1, vector<vector<int>>& matrix2) {
    // Flattening
    vector<int> flattened1;
    for (const auto& row : matrix1) {
        flattened1.insert(flattened1.end(), row.begin(), row.end());
    }
    
    vector<int> flattened2;
    for (const auto& row : matrix2) {
        flattened2.insert(flattened2.end(), row.begin(), row.end());
    }
    
    // Reshaping
    vector<vector<int>> reshaped1(3, vector<int>(2));
    int index = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            reshaped1[i][j] = flattened1[index++];
        }
    }
    
    vector<vector<int>> reshaped2(2, vector<int>(3));
    index = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            reshaped2[i][j] = flattened2[index++];
        }
    }
    
    // Transposing
    vector<vector<int>> transposed1(2, vector<int>(3));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transposed1[i][j] = matrix1[j][i];
        }
    }
    
    vector<vector<int>> transposed2(3, vector<int>(2));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            transposed2[i][j] = matrix2[j][i];
        }
    }
    
    // Matrix Addition
    vector<vector<int>> added(2, vector<int>(3));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            added[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Matrix Multiplication
    vector<vector<int>> multiplied(2, vector<int>(3));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            multiplied[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                multiplied[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    // Matrix Transpose
    vector<vector<int>> transposed(3, vector<int>(2));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            transposed[i][j] = matrix1[j][i];
        }
    }
    
    // Matrix Rank Calculation
    int rank = matrix1.size();
    
    // Matrix Size Calculation
    int rows = matrix1.size();
    int cols = matrix1[0].size();
    
    // Display results or further processing can be done here
}

int main() {
    vector<vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}};
    vector<vector<int>> matrix2 = {{7, 8, 9}, {10, 11, 12}};
    
    matrixOperations(matrix1, matrix2);
    
    return 0;
}
