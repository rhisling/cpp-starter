#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <iostream>
#include "deque.hpp"
#include "add_two/add_two.hpp"


static int Factorial(int number) {
    return number <= 1 ? number : Factorial(number - 1) * number;  // fail
// return number <= 1 ? 1      : Factorial( number - 1 ) * number;  // pass
}

TEST_CASE("Factorial of 0 is 1 (fail)", "[single-file]") {
    REQUIRE(Factorial(0) == 0);
}

TEST_CASE("Factorials of 1 and higher are computed (pass)", "[single-file]") {
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(3) == 6);
    REQUIRE(Factorial(10) == 3628800);

}

TEST_CASE("check add two fucntion") {
    REQUIRE(calc::add_two(1) == 3);
}


TEST_CASE("empty deque") {
    Deque<int> deque;
    REQUIRE(deque.empty());
    REQUIRE(deque.size() == 0);
    REQUIRE_THROWS_AS(deque.front(), std::out_of_range);
    REQUIRE_THROWS_AS(deque.back(), std::out_of_range);
    REQUIRE_THROWS_AS(deque.pop_front(), std::out_of_range);
    REQUIRE_THROWS_AS(deque.pop_back(), std::out_of_range);
}

TEST_CASE("test deque with muliple element") {
    Deque<int> deque;
    deque.push_front(1);
    deque.push_front(2);
    deque.push_front(3);
    REQUIRE(deque.size() == 3);
    REQUIRE(deque.front() == 3);
    deque.pop_front();
    REQUIRE(deque.size() == 2);
    REQUIRE(deque.front() == 2);
    deque.pop_front();
    REQUIRE(deque.size() == 1);
    REQUIRE(deque.front() == 1);
    deque.pop_front();
    REQUIRE(deque.empty());
    REQUIRE_THROWS_AS(deque.front(), std::out_of_range);
}

