#include<iostream>
#include<Windows.h>
#include <string>

using namespace std;

const unsigned int N = 8;

const string bitset1 = "01001100";
const string bitset2 = "10011110";

string getDisjunction(string bitset1, string bitset2) {
	string disjunction;
	disjunction.resize(N);
	for (size_t i = 0; i < N; i++) {
		if (bitset1.at(i) == '1' || bitset2.at(i) == '1')
			disjunction[i] = '1';
		else
			disjunction[i] = '0';
	}
	return disjunction;
}

string getConjunction(string bitset1, string bitset2) {
	string conjunction;
	conjunction.resize(N);
	for (size_t i = 0; i < N; i++) {
		if (bitset1.at(i) == '1' && bitset2.at(i) == '1')
			conjunction[i] = '1';
		else
			conjunction[i] = '0';
	}
	return conjunction;
}

string getExcConj(string bitset1, string bitset2) {
	string excConj;
	excConj.resize(N);
	for (size_t i = 0; i < N; i++) {
		if (bitset1.at(i) == '1' || bitset2.at(i) == '1') {
			excConj[i] = '1';
			if (bitset1.at(i) == '1' && bitset2.at(i) == '1')
				excConj[i] = '0';
		}
		else
			excConj[i] = '0';
	}
	return excConj;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cout << "������� ����� 1: " <<
		bitset1 << endl <<
		"������� ����� 2: " <<
		bitset2 << endl;
	cout << "���'������ ������ �����: " <<
		getDisjunction(bitset1, bitset2) << endl;
	cout << "��������� ������ �����: " <<
		getConjunction(bitset1, bitset2) << endl;
	cout << "�������� ��� ������ �����: " <<
		getExcConj(bitset1, bitset2);
	return 0;
}