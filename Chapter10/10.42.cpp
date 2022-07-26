#include <iostream>
#include <list>

int main() {
    std::list<std::string> lst{"hi", "hi", "hello"};
    lst.unique();
    for (auto &i : lst) {
        std::cout << i << std::endl;
    }
    return 0;
}