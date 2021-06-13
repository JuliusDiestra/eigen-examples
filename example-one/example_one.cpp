#include <iostream>
#include <Eigen/Eigen>

int main()
{
    Eigen::MatrixXd m(2,2);
    m(0,1) = 3;
    m(1,0) = 3;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    std::cout << m << std::endl;
}