#include <iostream>

using namespace std;

int main() 
{
	int n, a, b, c, p, q, r, s, i;
	cin >> n;
	
	a = n % 1000;
	b = n % 100;
	c = n % 10;
	p = (n-a)/1000;
	q = (a-a%100)/100;
	r = (b-c)/10;
	s = c;

	for (i=1; i<=p; i++)
		cout << "m";
	if (q<5)
	{
		for (i=1; i<=q; i++)
			cout << "c";
	}
	else 
	{
		cout << "d";
		for (i=1; i<=q-5; i++)
			cout << "c";
	}
	
	if (r<5)
	{
		for (i=1; i<=r; i++)
			cout << "x";
	}
	else 
	{
		cout << "l";
		for (i=1; i<=r-5; i++)
			cout << "x";
	}
	
	if (s<5)
	{
		for (i=1; i<=s; i++)
			cout << "i";
	}
	else 
	{
		cout << "v";
		for (i=1; i<=s-5; i++)
			cout << "i";
	}

	return 0;
}
