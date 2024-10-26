#include<iostream>
using namespace std;
int main() {
	int a;
	cout << "enter which table :\n";
	cin >> a;
	for (int i =1; i <=10; i++)
	{
		cout <<"x"<<i<<"=" << a * i << "\n";
	}

	return 0;
}
