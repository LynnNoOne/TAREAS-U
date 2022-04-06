#include <iostream>
using namespace std;

int main() {
 int multipl = 0;
	for (int i = 1; i < 1000; i++) {
	  if ((i % 3 == 0) || (i % 5 == 0)) {
		 multipl += i;
	  }
	}
 cout << multipl;

return 0;
}