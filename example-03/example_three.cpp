#include <iostream>
#include <Eigen/Eigen>

int main() {
    // Declare vectors and matrices and initialize them directly
    std::cout << "Initialize Matrices and Vectors with zeros" << std::endl;
    Eigen::RowVectorXd vec1 = Eigen::RowVectorXd::Zero(3);      // Declare row vector 1x3
    Eigen::VectorXd vec2 = Eigen::VectorXd::Zero(3);            // Declare column vector 3x1
    Eigen::MatrixXd matrix1 = Eigen::MatrixXd::Zero(3,3);       // Declare matrix 3x3    
    std::cout << "Row vector: " << std::endl;
    std::cout << vec1 << std::endl;
    std::cout << "Column vector: " << std::endl;
    std::cout << vec2 << std::endl;
    std::cout << "Matrix: " << std::endl;
    std::cout << matrix1 << std::endl;
    // Create Random Matrix
    std::cout << "Initialize Matrices with random values" << std::endl;
    Eigen::MatrixXd matrix2 = Eigen::MatrixXd::Random(3,3);      // Declare matrix and initialize with random values.
    std::cout << matrix2 << std::endl;
}

