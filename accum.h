
/*Description: This header file contains the definition of the function accum which computes the sum of 
elements in a given vector. The function is templated to handle numeric types like int or double, and it is
overloaded for the std::string type to concatenate the elements with commas. The header also includes the 
necessary standard C++ library headers, such as <vector> and <string>, to work with vectors and strings. */

#ifndef ACCUM_H
#define ACCUM_H

#include <vector>
#include <string>
#include <sstream>

// Forward declaration for the accum function
template <typename T>
T accum(const std::vector<T>& v);

// Specialization for std::string type
template <>
std::string accum(const std::vector<std::string>& v) {
    std::stringstream ss;
    for (size_t i = 0; i < v.size(); ++i) {
        ss << v[i];
        if (i < v.size() - 1)
            ss << ", ";
    }
    return ss.str();
}

// Definition of the accum function for numeric types
template <typename T>
T accum(const std::vector<T>& v) {
    T sum = T();
    for (const T& item : v) {
        sum += item;
    }
    return sum;
}

#endif // ACCUM_H
