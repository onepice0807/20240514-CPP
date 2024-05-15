#include <iostream>
#include <string>

using namespace std;

// �������

class Monster {
private:
	string _name;
	int _health;
	int _attack;
	int _defense;

public:

	static int MonsterCount; // ������� ���� : ������� ������ ��ü�� ���� ���� �ʴ�.

	Monster(string name, int health, int attack, int defense) // ���ڸ� �޴� ������
		: _name(name), _health(health), _attack(attack), _defense(defense)
	{
		cout << _name << "Monster ������ ȣ��" << endl;
		MonsterCount++;

	}

	// �Ҹ��ڴ� ��ü�� ���ŵɶ� �ڵ����� ȣ���� ��
	// �Ҹ��ڴ� ������ ������ �����Ϸ��� �ڵ����� ����� ��
	// �Ҹ��ڴ� ���ڸ� ���� �ʴ´�.
	// �Ҹ��ڿ��� ��ü�� ���ŵ� �� �Ĵܿ� ����� �ϴ� �۾��� ó���Ѵ�.

	~Monster() { // �Ҹ���
		cout << _name << "Monster �Ҹ��� ȣ��" << endl;
		MonsterCount--;
	}

	void Info() {
		cout << "���͸� : " << _name << endl;
		cout << "����� : " << _health << endl;
		cout << "���ݷ� : " << _attack << endl;
		cout << "���� : " << _defense << endl;
		cout << "���� �Ѽ� : " << MonsterCount << endl;
	}

};

// ������� ������ ��ü�� �������� �ʴ�.
// �ʱ�ȭ Ŭ���� ������ �ܺο��� ����� �Ѵ�.
int Monster::MonsterCount = 0; // ������� ���� �ʱ�ȭ

int main() {
	Monster dragon("dragon", 100, 300, 200);
	dragon.Info();
	{
		Monster ogre("ogre", 60, 10, 8);
		ogre.Info();

		{
			Monster troll("troll", 60, 15, 10);
			troll.Info();
		}
		ogre.Info();
	}
	dragon.Info();
	Monster slime("slime", 30, 20, 5);

	slime.Info();

	return 0;
}