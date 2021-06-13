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
}

