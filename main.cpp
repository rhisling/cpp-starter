#include <iostream>
#include "deque.hpp"


int addTwo(int a) {
    return a + 2;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    Deque<int> dq;
    std::cout << dq.size() << std::endl;
    return 0;
}
