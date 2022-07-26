#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>

int main(void) {
	std::list <int> lst{1,2,3,4,5,6,7,8,9,0};
	auto res = std::find(lst.begin(), lst.end(), 0);
        std::cout << *res << std::endl;

return 0;
}
