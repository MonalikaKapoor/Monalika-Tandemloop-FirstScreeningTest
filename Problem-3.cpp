/*

Problem Statement :- With a single integer as the input, 
				generate the following until a = x 
				[series of numbers as shown in the below examples]

Output: (examples)
    1) input a = 1, then output : 1
	2) input a = 2, then output : 1
    3) input a = 3, then output : 1, 3, 5
    4) input a = 4, then output : 1, 3, 5
    5) input a = 5, then output : 1, 3, 5, 7, 9
    6) input a = 6, then output : 1, 3, 5, 7, 9
    .
    .
    7) input a = x, then output : 1, 3, 5, 7, .......

*/

#include <iostream>
using namespace std;

int main()	{
	int a;
	cin >> a;
	if(a%2 == 0)	a--;
	for(int i=1;a>0;a--,i+=2)	{
		cout << i << ' ';
	}

}