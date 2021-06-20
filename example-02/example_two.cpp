#include <iostream>
#include <Eigen/Eigen>

int main()
{
    // Declare matrix: 3x3 of doubles
    Eigen::MatrixXd m(3,3);
    m(0,0) = 3;
    m(0,1) = 3;
    m(0,2) = -1;
    m(1,0) = 3;
    m(1,1) = 3;
    m(1,2) = -1;
    m(2,0) = 3;
    m(2,1) = 3;
    m(2,2) = -1;
    std::cout << "Matrix <m> \n" << m << std::endl;
    // Declare column vector
    Eigen::VectorXd v(3);
    v << 1,2,3;
    std::cout << "Column vector <v> \n" << v << std::endl;
    // Multiply vector and column vector
    std::cout << "Multiply matrix m and v" << std::endl;
    std::cout << m*v << std::endl;    
    
    
    // Declare vectors and matrices with fixed sizes
    Eigen::RowVector3d v1;  // Declare row vector 1x3
    Eigen::Vector3d v2;     // Declare column vector 3x1
    Eigen::Matrix3d m1;      // Declare matrix 3x3
    // Initialize vectors and matrices
    m1(0,0) = 3;
    m1(0,1) = 3;
    m1(0,2) = -1;
    m1(1,0) = 3;
    m1(1,1) = 3;
    m1(1,2) = -1;
    m1(2,0) = 3;
    m1(2,1) = 3;
    m1(2,2) = -1;
    v1 << 1,2,3;
    v2 << 4,5,6;
    // Multiply vectors and matrices
    std::cout << "USING FIXED SIZES" << std::endl;
    std::cout << "v1*m1*v2 = \n" << v1*m*v2 << std::endl;
}

