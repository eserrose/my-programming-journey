#include <iostream>
#include <string>
using namespace std;
string & update (string * spt)
{
	(*spt)[1] = 'a';
	return *spt;
}
string update (string & srf)
{
	srf[1] = 'i';
	return srf;
}
int main ()
{
	string s = "loveCS";
	update(&s)[0] = 's';
	cout << s << endl;
	s = "loveCS";
	update(s)[2] = 'k';
	cout << s << endl;
	string * p = new string;
	*p = "loveCS";
	update(p)[2] = 't';
	cout << *p << endl;
	return 0;
}
