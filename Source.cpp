#include <iostream>
using namespace std;


int int1 = 3.14;
int num1, num2, resNum;//defines these variables as an int without giving them a value
bool bool1, repeatCalc, uRepeat;
float float1 = 1.07f;
double double1 = 3.1415;
string string1 = "Hello World";
string input1 = "";//
string opInput;

void doubleLine()
{
	cout << endl << endl;
}
void printDataTypes()
{
	cout << "int: " << int1 << endl
		<< "boolean: " << bool1 << endl
		<< "float: " << float1 << endl
		<< "double: " << double1 << endl
		<< "string: " << string1 << endl << endl
		<< "Collection of common data types" << endl << endl;
}

void multiplyInts()
{
	while (repeatCalc)
	{
		cout << "We are going to do an operation with 2 numbers, please input any value (whole number)" << endl;

		cout << "Set a primary Number: "; cin >> num1;
		cout << endl << "Please input an operator: + - * /: "; cin >> opInput;
		cout << endl << "Set a secondary Number: "; cin >> num2;

		if (opInput._Equal("*")) { /*We are checking to make sure the user input the operator*/
			cout << endl << "Operation: " << num1 << " * " << num2; resNum = num1 * num2;/*We are completing the operation*/
			cout << endl << "Result: " << resNum;
		}
		else if (opInput == "/") {
			cout << endl << "Operation: " << num1 << " / " << num2; resNum = num1 / num2; 
			cout << endl << "Result: " << resNum;
		}
		else if (opInput == "+") {
			cout << endl << "Operation: " << num1 << " + " << num2; resNum = num1 + num2; 
			cout << endl << "Result: " << resNum;
		}
		else if (opInput == "-") {
			cout << endl << "Operation: " << num1 << " - " << num2; resNum = num1 - num2; 
			cout << endl << "Result: " << resNum;
		}
		else
		{
			cout << endl << "You have used an incorrect operator!, no result is possible..." << endl; 
			cout << endl << "Result: " << resNum;
		}
		cout << endl << "Would you like to do another operation? y / n: "; cin >> input1;
		if (input1 == "n") {
			repeatCalc = false;
			break;
		}
	}
}

int main() 
{
	//printDataTypes();
	repeatCalc = true;
	multiplyInts();
	doubleLine();
	cout << ":)";
	return 1;
}