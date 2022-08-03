/*

Problem Statement :- Get the total count of number list in the dictionary which is 
multiple of [1,2,3,4,5,6,7,8,9]
    
(Examples)
    
input: [1,2,8,9,12,46,76,82,15,20,30]
Output:
	{1: 11, 2: 8, 3: 4, 4: 4, 5: 3, 6: 2, 7: 0, 8: 1, 9: 1}

*/

#include <iostream>
using namespace std;

//Display function to print the required output
void display(int count[], int n)	{
	cout << '{';
	for(int i=1;i<n-1;i++)	{
		cout << i << ':' << count[i] << ", ";
	}
	cout << n-1 << ':' << count[n-1] << '}';
}

int main()	{
	int arr[] = {32,41,4,14,76,41,465,862,13,54,13,76,354,76,21,6567,132,56};
	int n = sizeof(arr)/sizeof(arr[0]);

    // Calculating the count of multiples of each number
	int count[10] = {0};
	for(int num=1; num<=9;num++)	{
		for(int x:arr)	{
			if(x%num == 0)	count[num]++;
		}
	}

	display(count,10);
}