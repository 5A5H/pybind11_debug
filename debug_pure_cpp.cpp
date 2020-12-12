// The Module debug

// include c++ headder
#include <memory>
#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::cout << "HelloWorld!" << std::endl; 
    std::vector<double> My = {0.0, 0.0, 0.1, 0.2};
    double a = 4.0;
    int b = 1;
    std::cout << "Value :" << a*b+My[0]*My[1]+My[2]*My[3] << std::endl;
    return 0;
}
