#ifndef QMACROS_HPP
#define QMACROS_HPP

#include <iostream>
#include <iostream>

#define inner_stringify(X) #X
#define QMAC_STRINGIFY(X) inner_stringify(X)
#define QMAC_LINE std::cout<<"Line: " << __LINE__ << "\n"

#endif