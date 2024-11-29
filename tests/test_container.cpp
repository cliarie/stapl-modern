#include <stapl/container.hpp>
#include <stapl/utility.hpp>

int main(){
    stapl::distributed_vector<int> dv;

    for (int i = 0; i < 10; ++i){
        dv.push_back(i);
    }

    stapl::print_container(dv);
    return 0;
}
