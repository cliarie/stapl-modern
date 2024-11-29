add_executable(test_algorithm test_algorithm.cpp)
target_link_libraries(test_algorithm stapl-modern)

add_executable(test_container test_container.cpp)
target_link_libraries(test_container stapl-modern)

add_executable(test_executor test_executor.cpp)
target_link_libraries(test_executor stapl-modern)

add_test(NAME AlgorithmTest COMMAND test_algorithm)
add_test(NAME ContainerTest COMMAND test_container)
add_test(NAME ExecutorTest COMMAND test_executor)
