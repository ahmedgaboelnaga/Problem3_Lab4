#include<iostream>

using namespace std;

int main()
{
	//WRITE A C++ PROGRAM TO PRINT NUMBER OF ZEROS OF A SERIES OF 10 NUMBERS ENTERED BY THE USER. (STUDENTS TEST)

	int n, zeros = 0;

	cout << "Enter the numbers: " << endl;

	int i = 1;
	while (i <= 10)
	{
		cin >> n;

		if (n == 0)
		{
			zeros++;
		}

		i++;
	}

	cout << "Number of zeros: " << zeros << endl;

	return 0;
}