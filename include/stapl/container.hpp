#ifndef STAPL_CONTAINER_HPP
#define STAPL_CONTAINER_HPP

#include <vector>
#include <map>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/map.hpp>

namespace stapl {

template<typename T>
class distributed_vector{
    std::vector<T> data;

public:
    distributed_vector() = default;
    void push_back(const T& t){
        data.push_back(t);
    }
    T& operator[](size_t index){
        return data[index];
    }
    size_t size() const{
        return data.size();
    }

    auto begin(){
        return data.begin();
    }
    auto end(){
        return data.end();
    }

    auto begin() const{
        return data.cbegin();
    }

    auto end() const{
        return data.cend();
    }

    // serialization
    template<typename Archive>
    void serialize(Archive& ar, const unsigned int version){
        ar & data;
    }
};

}

#endif
