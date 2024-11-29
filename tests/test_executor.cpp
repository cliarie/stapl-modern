#include <stapl/executor.hpp>
#include <iostream>

int main(){
    stapl::executor exec;
    for (int i = 0; i < 5; ++i){
        exec.submit([i]() {
            std::cout << "Task " << i << " executed\n";
        });
    }
    exec.wait();
    return 0;
}
