#include <bits/stdc++.h>

using namespace std;

struct Date 
{
	int day;
	int month;
	int year;
	
	Date(int day, int month, int year) 
	{
		this -> day = day;
		this -> month = month;
		this -> year = year;
	}
	
	string make_valid(int number, int _size) 
	{
		string s = to_string(number);
		while (s.size() < _size) 
			s = "0" + s;
		return s;
	}

	void display() 
	{
		cout << make_valid(day, 2) + "/" + make_valid(month, 2) + "/" + make_valid(year, 4) << endl;
	}
};

int main() 
{
	int a, b, c;
	cin >> a >> b >> c;
	Date t(a, b, c);

	t.display();
	
	return 0;
}