#include "iter.hpp"

int main()
{
	int test_1[] = {4, 8, 15, 16, 23, 42};

	iter(test_1, 6, outPut);
	cout << endl << "------------" << endl;

	string test_2[] = {"one", "two", "three", "four",
					   "five", "six", "seven"};

	iter(test_2, 7, outPut);
	cout << endl << "------------" << endl;
}
