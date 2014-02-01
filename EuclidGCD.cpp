/*Title: Euclid 
* Abstract: practice to understand Euclid's gcd algorithm.
* ID: 1202
* Name: Terrence Johnson
* Date: 1/31/14
*/


#include<iostream>


using namespace std;

int gcd(int m, int n);

int main()
{
	int int1 = 0, int2 = 0, answer = 0;;

	cout << "Enter the first int: ";
	cin >> int1;

	cout << "Enter the second int: ";
	cin >> int2;

	if(int1 > int2)
	{
		answer = gcd(int1,int2);
	}
	else
		answer = gcd(int2, int1);

	cout << answer;
	cin.get();

	return 0;
}

int gcd(int m, int n)
{
	int r = 0; 

	while(n != 0)
	{	
		r = m % n;
		m = n;
		n = r;
	}
	return m;

}