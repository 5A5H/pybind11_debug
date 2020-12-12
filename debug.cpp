// The Module debug

// include c++ headder
#include <memory>
#include <iostream>
#include <vector>

// including the pybind11 headder
#include <pybind11/pybind11.h>
#include <pybind11/iostream.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// list of Function Declarations
void init_Function(py::module &m);

// generating pybind module
PYBIND11_MODULE(debug, m) 
{
    m.doc() = "A Pybind11 Module";
    init_Function(m);
}

// implementation
void init_Function(py::module &m)
{
    m.def("HelloWorld", []() 
    {
        std::cout << "HelloWorld!" << std::endl; 
        std::vector<double> My = {0.0, 0.0, 0.1, 0.2};
        double a = 4.0;
        int b = 1;
        std::cout << "Value :" << a*b+My[0]*My[1]+My[2]*My[3] << std::endl; 

    } 
    ,py::call_guard<py::scoped_ostream_redirect>()
    );
}