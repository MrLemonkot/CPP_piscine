#include "Array.hpp"

int main()
{
	try {
		Array<int> test_1(5);
		cout << "specific size array test_1 was created" << endl;

		Array<double>	test_2;
		cout << "empty array test_2 was created" << endl;
	}
	catch(const exception& e) {
		cerr << e.what() << endl;
	}

	cout << "-------------" << endl;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	Array<int> tmp = numbers;
	Array<int> test(tmp);

	for (int i = 0; i < MAX_VAL; i++) {
		if (mirror[i] != numbers[i]) {
			cerr << "didn't save the same value!!" << endl;
			return 1;
		}
	}
	try {
		numbers[-2] = 0;
	}
	catch(const exception& e) {
		cerr << e.what() << endl;
	}
	try {
		numbers[MAX_VAL] = 0;
	}
	catch(const exception& e) {
		cerr << e.what() << endl;
	}

	for (int i = 0; i < MAX_VAL; i++) {
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}