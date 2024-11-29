#ifndef STAPL_ALGORITHM_HPP
#define STAPL_ALGORITHM_HPP

#include <execution>
#include <algorithm>
#include <vector>
#include <boost/range/algorithm.hpp>
#include <boost/range/algorithm_ext.hpp>
#include <tbb/parallel_sort.h>

namespace stapl{

// parallel sort using std::execution::par
// this is a wrapper around std::sort
template<typename Iterator>
void parallel_sort(Iterator begin, Iterator end){
#ifdef __cpp_lib_execution
    std::sort(std::execution::par, begin, end);
#else
    tbb::parallel_sort(begin, end);
#endif
}

// boost-based find_if for ranges
template<typename Range, typename Predicate>
auto boost_find_if(Range& range, Predicate pred){
    return boost::find_if(range, pred);
}

}

#endif
