#include <iostream>
#include <string>

using namespace std;

// Ŭ������ ���鶧 �����ڰ� �ݵ�� �ʿ��� ��찡 �ִ�.
// ����߿� ������ ����� ����� ����� �ִ� ��쿡�� �ݵ�� �����ڸ� ��������

class Student {
private:
	string _name;
	int _grade;
	int _classNum;

	const int MAXSTUDENTCOUNT; // ��ü �л���(����� �ɹ�����)
	int& _specialClassNum; // ƯȰ��(������ �������)

public:
	// �������� �߰�ȣ �� �ȿ��� ���Կ����ڷ� ��������� �ʱ�ȭ �ϴ� ����
	// ��ü�� �޸� �Ҵ��� ������ ���Կ����� ���ؼ� ��������� ���� �ʱ�ȭ�ϴ� ���Դϴ�.
	// �������������� ��������������� �޸𸮰� �Ҵ�ʰ� ���ÿ� ���� �ʱ�ȭ�Ǿ�� �Ǳ� ������
	// �������� �Ѱ�ȣ ���ȿ��� �ʱ�ȭ�� �� �� ����.
	// ��������� ���� ������ �ʱ�ȭ ����Ʈ�� ���� �ʱ�ȭ �ϴ� ��쿡��
	// ��ü�� �޸� �Ҵ��� �ʰ� ���ÿ� �ʱ�ȭ �۾��� �����
	// ����� ��������� ������ ��������� ������ �ʱ�ȭ ����Ʈ�� �ʱ�ȭ �ؾ� �Ѵ�.
	Student(int MAX, int& specialClassNum) 
		: MAXSTUDENTCOUNT(MAX), _specialClassNum(specialClassNum) // ������ �ʱ�ȭ ����Ʈ
	{
		// MAXSTUDENTCOUNT = MAX;
		// _specialClassNum = specialClassNum;
	}

	Student(string name, int grade, int classNum, int MAX, int& specialClassNum)
		: _name(name), _grade(grade), _classNum(classNum), MAXSTUDENTCOUNT(MAX), _specialClassNum(specialClassNum)
	{
	
	}
	void Info() {
		cout << "�̸� : " << _name << endl;
		cout << "�г� : " << _grade << endl;
		cout << "�� : " << _classNum << endl;
		cout << "���л��� : " << MAXSTUDENTCOUNT << endl;
		cout << "ƯȰ�� : " << _specialClassNum << endl;
	}
};

int main() {
	int specialStudentNum = 11;

	Student st("Monster", 3, 4, 200, specialStudentNum);
	st.Info();

	cout << endl;

	specialStudentNum = 30;

	st.Info();
	
	return 0;
}