#ifndef STAPL_UTILITY_HPP
#define STAPL_UTILITY_HPP

#include <iostream>

namespace stapl{

template<typename Container>
void print_container(const Container& container){
    for (const auto& elem : container){
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

}

#endif // STAPL_UTILITY_HPP
