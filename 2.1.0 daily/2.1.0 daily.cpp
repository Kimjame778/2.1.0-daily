#include <iostream>
#include <cmath>

using namespace std;

bool ageCheck(int num)
{
	return num > 12;
}


int main()
{
	int age;

	cout << "What is your age : \n";
	cin >> age;
	cout << ageCheck(age);

	
}
