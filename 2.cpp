#include <iostream>

using namespace std;

int main() {

	int fib1 = 1;
	int fib2 = 1;
	int fib3;

    int fibsum = 0;

	while (true) {
        
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;

		if (fib3 > 4000000) {
			break;
		}

		if (fib3 % 2 == 0) {
			fibsum += fib3;
		}
	}

	cout << fibsum << endl;


	return 0;
}