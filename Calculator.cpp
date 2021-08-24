#include <iostream>
using namespace std;
int main()
{
	char ch;
	int num;
	//ch = 'y';
	cout << "\nThis Program is a Calculator\n\n";
	do
	{
	 
		cout << "Enter the option you want to do! (1 to 5)\n";
		cout << "1. Addition\n";
		cout << "2. Subtraction\n";
		cout << "3. Multiplication\n";
		cout << "4. Division\n";
		cout << "5.Exit\n";
		cin >> num;
		while (num <= 0 || num > 5)
		{
			cout << "ERROR! Please give input between 1 and 5\n";
			cout << "Enter the option you want to do!\n";
			cout << "1. Addition\n";
			cout << "2. Subtraction\n";
			cout << "3. Multiplication\n";
			cout << "4. Devision\n";
			cout << "5.Exit\n";
			cin >> num;
		}
		if (num == 1)
		{
			int num1, num2;
			cout << "Please enter numbers you want to add\n";
			cin >> num1 >> num2;
			cout << "The answer is: " << num1 + num2 << endl;
		}
		if (num == 2)
		{
			int num1, num2;
			cout << "Please enter numbers you want to subtract\n";
			cin >> num1 >> num2;
			cout << "The answer is: " << num1 - num2 << endl;
		}
		if (num == 3)
		{
			int num1, num2;
			cout << "Please enter numbers you want to multiply\n";
			cin >> num1 >> num2;
			cout << "The answer is: " << num1 * num2 << endl;
		}
		if (num == 4)
		{
			double num1, num2;
			cout << "Please enter numbers you want to divide\n";
			cin >> num1 >> num2;
			if (num2 == 0)
			{
				cout << "Sorry I Can't devide with 0\n";
				break;
			}
			cout << "The answer is: " << num1 / num2 << endl;
		}
		if (num == 5)
		{
			break;
		}
		cout << "Do you want to continue ? (Y/N)\n";
		cin >> ch;
		if (ch == 'n' || ch == 'N')
		{
			break;
		}
	} while (ch == 'y' || ch == 'Y');

	return 0;
}