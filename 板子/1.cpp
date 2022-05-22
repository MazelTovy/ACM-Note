
// string <-> number
// sscanf sprintf a + 'ruanjianbuniu' + w;
// stringstream

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

double s2n(string s)
{
	stringstream ss;
	double a;
	ss << s;
	ss >> a;
	return a;
}		// convert string to number

string n2s(double a)
{
	stringstream ss;
	string s;
	ss << a;
	ss >> s;
	return s;
}		// convert number to string


int main ()
{
	string a;
	double b;
	cin >> b;
	a = n2s(b);
	cout << a << endl;
	a += 'ab';
	cout << a;
	return 0;
}









