find_package(GTest REQUIRED)

add_executable(lru_tests test_lru_cache.cpp)

target_link_libraries(lru_tests PRIVATE GTest::gtest_main lru_cache)

include(GoogleTest)
gtest_discover_tests(lru_tests)