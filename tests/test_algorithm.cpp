#include <stapl/algorithm.hpp>
#include <stapl/utility.hpp>
#include <iostream>
#include <vector>

int main(){
    std::vector<int> data = {5, 2, 9, 1, 5, 6};

    stapl::parallel_sort(data.begin(), data.end());
    stapl::print_container(data);
    return 0;
}
