#include <iostream>

using namespace std;
// 참조형 변수
// 상수형 변수

int main() {
	100; // 상수(constant)
	200;

	int sum = 100 + 200;

	// 변수를 상수성을 띄도록 할 수 있다.
	// 변수를 만들때 변수의 정의 앞에 const 키워드를 사용하면
	// 변수가 상수성을 띄게 된다.
	// 상수형 변수는 생성과 동시에 값을 초기화 해야 한다
	const int MAX = 200;

	// MAX = 4000; // MAX는 상수형 변수여서 저장하고 있는 값을 변경할 수 없다.

	// 참조형 변수
	int a = 1000;
	int b = 2000;
	
	// 참조형 변수는 변수를 생성과 동시에 초기화 해줘야 함
	// a변수의 별칭인 refa가 생성됨
	int& refa = a; // 참조형 변수 refa를 생성 

	cout << "before refa = " << refa << endl;
	cout << "a = " << a << endl;
	cout << endl;
	refa = 800;

	cout << "after refa = " << refa << endl;
	cout << "a = " << a << endl;

	// 포인터형 변수
	int* pa; // int형값을 저장하고 있는 공간의 주소값을 저장하는 변수 pa

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

	// 참조형 변수는 포인터형 변수와 내부적인 작동 방식은 동일하나
	// 참조형 변수는 초기값으로 전달된 변수의 주소값을 변경할 수 없다.
	// 참조형 변수는 생성할 때 변수의 메모리 공간만을 가리킨다

	return 0;
}