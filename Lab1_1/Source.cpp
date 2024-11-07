#include<iostream>
#include<Windows.h>

using namespace std;

bool conjunctRes(bool p, bool q) {
	return (p == q && p == true);
}

bool disjunctionRes(bool p, bool q) {
	return(p == true || q == true);
}

bool excConjRes(bool p, bool q) {
	return (p != q);
}

bool firstImplRes(bool p, bool q) {
	return(!p || q);
}

bool secImplRes(bool p, bool q) {
	return(!q || p );
}

bool equalityRes(bool p, bool q) {
	return p == q;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool p = true;
	bool q = true;

	cout << "����������� p = " << p
		<< endl << "����������� q = " <<
		q << endl;

	cout << "��������� p �� q = " <<
		conjunctRes(p, q) << endl;
	cout << "��������� p �� q = " <<
		disjunctionRes(p, q) << endl;
	cout << "������������� ��� p �� q = " <<
		excConjRes(p, q) << endl;
	cout << "���������  p �� q = " <<
		firstImplRes(p, q) << endl;
	cout << "���������  q �� p = " <<
		secImplRes(p, q) << endl;
	cout << "������������  p �� q = " <<
		equalityRes(p, q) << endl;
}