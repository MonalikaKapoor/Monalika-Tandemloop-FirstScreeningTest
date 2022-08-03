/*

Problem Statement :- Create a small calculator which performs 
operations such as Addition, Subtraction, Multiplication and 
Division using class.

Calculator inputs :> ‘a’, ‘b’ and ‘type of operation’
Datatype :> ‘a’ = double, ‘b’ = double, ‘type of operation’ = string

*/


#include <iostream>
using namespace std;

class calculator{
public:
	double a,b;
	string operation;
	double result;
	calculator()	{a=0;b=0;result=0;}
	calculator(int a, int b, string op)	{
		this->a = a;
		this->b = b;
		this->operation = op;
	}
};

int main()	{
	calculator c;
	cin >> c.a >> c.b >> c.operation;	// taking input of members of class
	if(c.operation == "+")	c.result = c.a + c.b; // Addition
	else if(c.operation == "-")	c.result = c.a - c.b; // Subtraction
	else if(c.operation == "*")	c.result = c.a * c.b; // Multiplication
	else if(c.operation == "/")	c.result = c.a/c.b; // Division
	cout << c.result << '\n';
}