#include <iostream>
#include <Eigen/Eigen>

int main() {
    // Create Random Matrix
    std::cout << "Initialize Matrices with random values" << std::endl;
    Eigen::MatrixXd matrix = Eigen::MatrixXd::Random(3,3);      // Declare matrix and initialize with random values.
    std::cout << matrix << std::endl;
    // Matrix Transpose
    std::cout << "Matrix transpose :" << std::endl;
    Eigen::MatrixXd matrix_transpose = matrix.transpose();
    std::cout << matrix_transpose << std::endl;
    // Matrix Inverse
    std::cout << "Matrix inverse :" << std::endl;
    Eigen::MatrixXd matrix_inverse = matrix.inverse();
    std::cout << matrix_inverse << std::endl;
}

