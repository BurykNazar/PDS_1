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

	cout << "Висловлення p = " << p
		<< endl << "Висловлення q = " <<
		q << endl;

	cout << "Конюнкція p та q = " <<
		conjunctRes(p, q) << endl;
	cout << "Дизюнкція p та q = " <<
		disjunctionRes(p, q) << endl;
	cout << "Альтернативне або p та q = " <<
		excConjRes(p, q) << endl;
	cout << "Імплікація  p та q = " <<
		firstImplRes(p, q) << endl;
	cout << "Імплікація  q та p = " <<
		secImplRes(p, q) << endl;
	cout << "Еквівалетність  p та q = " <<
		equalityRes(p, q) << endl;
}