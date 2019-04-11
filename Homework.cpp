#include <iostream>
#include <string>
using namespace std;


int main(void) {
	string student_id;
	student_id = "2018-111864";
	cout << student_id << endl;

	int X;
	cin >> X;
	int n1;
	int n2;
	for (int i = 0; i < 10000000; i++)
	{
		if (X <= (i*(i + 1) / 2))
		{
			n1 = 1 + (i*(i + 1) / 2);
			n2 = i;
			break;
		}
	}
	int chai = n1 - X;
	cout << n2 + 1 - chai << "/" << chai << endl;

	return 0;
}