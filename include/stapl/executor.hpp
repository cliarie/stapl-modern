#ifndef STAPL_EXECUTOR_HPP
#define STAPL_EXECUTOR_HPP

#include <thread>
#include <future>
#include <vector>
#include <boost/asio/thread_pool.hpp>
#include <boost/asio/post.hpp>

namespace stapl{

class executor{
    boost::asio::thread_pool pool;

public:
    explicit executor(size_t threads = std::thread::hardware_concurrency()) : pool(threads) {}

    template<typename F>
    void submit(F&& task){
        boost::asio::post(pool, std::forward<F>(task));
    }
    void wait(){
        pool.join();
    }
};

}

#endif
