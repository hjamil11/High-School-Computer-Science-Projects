//============================================================================
// Name        : apcspFP.cpp
// Author      : Hamad Ahmed
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

// Function Prototype
int sum (int, int);
int difference(int, int);
int product(int, int);
double divide(int, int);
int square(int);
double squareRoot(int);

int main()
{
	// Instantiates the variables.
	int num1, num2, a, b, c ;
    double solution , x1 , x2;
	char choice;

    cout <<"Choose an operator: '+', '-', '*', '/', 's' for square, 'q' for Quadratic Formula, 'k' for square root or 'e' to exit: \n";
	cin >> choice;
	
	while(choice != 'e') 
	{
	if (choice == '+') 
	{
		cout << "Enter number one: \n";
		cin >> num1;
		cout << "Enter number two: \n";
		cin >> num2;
		cout << sum(num1, num2) << endl;
	}
	else if (choice == '-') 
	{
		cout << "Enter number one: \n";
		cin >> num1;
		cout << "Enter number two: \n";
		cin >> num2;
		cout << difference(num1, num2) << endl;
	}
	else if (choice == '*') 
	{
		cout << "Enter number one: \n";
		cin >> num1;
		cout << "Enter number two: \n";
		cin >> num2;
		cout << product(num1, num2) << endl;
	}
	else if (choice == '/') 
	{
		cout << "Enter number one: \n";
		cin >> num1;
		cout << "Enter number two: \n";
		cin >> num2;
		cout << divide(num1, num2) << endl;
	}
	else if (choice == 's' || choice == 'S')
	{
		cout << "Enter the number: ";
		cin >> num1;
	    cout << square(num1) << endl;
	}
	else if (choice == 'q' || choice == 'Q')
	{
		cout << "Enter a: \n";
		cin >> a;
		cout << "Enter b: \n";
		cin >> b;
		cout << "Enter c: \n";
		cin >> c;
		solution = b*b - 4*a*c;
		if (solution > 0)
		{
			x1 = (-b + sqrt(solution)) / (2*a);
			x2 = (-b - sqrt(solution)) / (2*a);
			cout << "Roots are Real and different."  << endl;
			cout << "{" << "x1 = " << x1;
			cout << ", x2 = " << x2 <<"}"<< endl;
		}
		else 
		{
			x1 = -b/(2*a);
			x2 = sqrt(-solution)/(2*a);
			cout << "Roots are complex and different."  << endl;
			cout <<"{"<< "x1 = " << x1 << "+" << x2 << "i" ;
			cout << " x2 = " << x1 << "-" << x2 << "i" <<"}" << endl;
		}
	}
	else if (choice == 'k')
	{
		cout << "Enter a number: \n";
		cin >> num1;
		solution = squareRoot(num1);
		cout << "Square root of " << num1 << " is " << solution << '.' << endl;
	}
	else 
	{
		cout << "\nInvalid Entry!\n";
	}
	
	cout <<"Choose an operator: '+', '-', '*', '/', 's' for square, 'q' for Quadratic Formula, 'k' for square root or 'e' to exit: \n";
	cin >> choice;
	}
	cout << "Thank You!" << endl;

	return 0;
}
// Defines the sum function.
int sum(int snum1, int snum2)
{
	// Declares toReturn variable.
	int solution;
	// Calc the sum.
	solution = snum1 + snum2;
	// Send the solution to the call.
	return solution;
}

// Defines the difference function.
int difference(int dnum1, int dnum2)
{
	// Declares solution and calc .
	int solution = dnum1 - dnum2;
	// Send the solution to the call.
	return solution;
}

// Defines the product function.
int product(int pnum1, int pnum2)
{
	// Declares solution and calc .
	int solution = pnum1 * pnum2;
	// Send the solution to the call.
	return solution;
}

// Defines the divide function.
double divide(int dnum1, int dnum2)
{
	// Declares solution and calc .
	int solution = dnum1 / dnum2;
	// Send the solution to the call.
	return solution;
}

int square(int snum1) {
	// Declares solution and calc.
	int solution = pow(snum1, 2);
	// Send the solutiion to the call.
	return solution;
}
double squareRoot(int sum1) {
  return sqrt(sum1);
}
