#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iterator>


int main() {
	std::ifstream file11("file11.txt");
	std::ofstream fileo1("file01.txt"), fileo2("file02.txt");
	std::istream_iterator<int> filei1(file11), eof;
        std::ostream_iterator<int> file01(fileo1, " "),  file02(fileo2, "\n");	
	

	std::vector<int> n(filei1, eof);

	while(filei1 != eof) {
	   for(int i = 0; i != n.size(); i++) {
	     if(n[i] % 2 == 0) {
		     file01 = n[i];
	     filei1++;
	     }
	     else {
	      file02 = n[i];
	     filei1++;
	     }
	   }

	}	


return 0;
}
