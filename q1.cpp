#include <iostream>
#include <iomanip>
using namespace std;

//********************
void getinput(int &, int &);
void swapTwoValues(int, int);
void getinput(float &, float &);
void swapTwoValues(float, float);
//********************

int main()
{
	int n1, n2;
	float fnum1, fnum2;
	getinput(n1, n2);
	cout << " Before Swap" << setw(5) << n1 << setw(5) << n2 << setw(5) << endl;
	swapTwoValues(n1, n2);
	cout << " After Swap" << setw(5) << n1 << setw(5) << n2 << setw(5) << endl;


	getinput(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
	swapTwoValues(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
}

// ******************************
void getinput(int &n1, int &n2) {
	cout << "Enter Number 1: ";
	cin >> n1;
	cout << "Enter Number 2: ";
	cin >> n2;

}

void swapTwoValues(int n1, int n2) {
	int temp_num = n1;
	n1 = n2;
	n2 = temp_num;

}

void getinput(float &fnum1, float &fnum2) {
	cout << "Enter Number 1: ";
	cin >> fnum1;
	cout << "Enter Number 2: ";
	cin >> fnum1;
	
}

void swapTwoValues(float fnum1, float fnum2) {
	int temp_num = fnum1;
	fnum1 = fnum2;
	fnum2 = temp_num;

}
// ******************************