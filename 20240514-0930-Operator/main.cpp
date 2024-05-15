#include <iostream>

using namespace std;
// ������ ����
// ����� ����

int main() {
	100; // ���(constant)
	200;

	int sum = 100 + 200;

	// ������ ������� �絵�� �� �� �ִ�.
	// ������ ���鶧 ������ ���� �տ� const Ű���带 ����ϸ�
	// ������ ������� ��� �ȴ�.
	// ����� ������ ������ ���ÿ� ���� �ʱ�ȭ �ؾ� �Ѵ�
	const int MAX = 200;

	// MAX = 4000; // MAX�� ����� �������� �����ϰ� �ִ� ���� ������ �� ����.

	// ������ ����
	int a = 1000;
	int b = 2000;
	
	// ������ ������ ������ ������ ���ÿ� �ʱ�ȭ ����� ��
	// a������ ��Ī�� refa�� ������
	int& refa = a; // ������ ���� refa�� ���� 

	cout << "before refa = " << refa << endl;
	cout << "a = " << a << endl;
	cout << endl;
	refa = 800;

	cout << "after refa = " << refa << endl;
	cout << "a = " << a << endl;

	// �������� ����
	int* pa; // int������ �����ϰ� �ִ� ������ �ּҰ��� �����ϴ� ���� pa

	pa = &a;

	cout << "before a = " << a << endl;
	cout << "before *pa = " << *pa << endl;
	*pa = 4000;
	cout << endl;
	cout << "after a = " << a << endl;
	cout << "after *pa = " << *pa << endl;

	pa = &b;
	cout << endl;
	cout << "before a = " << a << endl;
	cout << "before *pa = " << *pa << endl;
	cout << "before b = " << b << endl;
	*pa = 6000;
	cout << endl;
	cout << "after a = " << a << endl;
	cout << "after *pa = " << *pa << endl;
	cout << "after b = " << b << endl;

	// ������ ������ �������� ������ �������� �۵� ����� �����ϳ�
	// ������ ������ �ʱⰪ���� ���޵� ������ �ּҰ��� ������ �� ����.
	// ������ ������ ������ �� ������ �޸� �������� ����Ų��

	return 0;
}