#include <iostream>
#include <string>

using namespace std;

// 정적멤버

class Monster {
private:
	string _name;
	int _health;
	int _attack;
	int _defense;

public:

	static int MonsterCount; // 정적멤버 변수 : 정적멤버 변수는 객체에 속해 있지 않다.

	Monster(string name, int health, int attack, int defense) // 인자를 받는 생성자
		: _name(name), _health(health), _attack(attack), _defense(defense)
	{
		cout << _name << "Monster 생성자 호출" << endl;
		MonsterCount++;

	}

	// 소멸자는 객체가 제거될때 자동으로 호출이 됨
	// 소멸자는 만들지 않으면 컴파일러가 자동으로 만들어 줌
	// 소멸자는 인자를 받지 않는다.
	// 소멸자에는 객체가 제거될 때 후단에 해줘야 하는 작업을 처리한다.

	~Monster() { // 소멸자
		cout << _name << "Monster 소멸자 호출" << endl;
		MonsterCount--;
	}

	void Info() {
		cout << "몬스터명 : " << _name << endl;
		cout << "생명력 : " << _health << endl;
		cout << "공격령 : " << _attack << endl;
		cout << "방어력 : " << _defense << endl;
		cout << "몬스터 총수 : " << MonsterCount << endl;
	}

};

// 정적멤버 변수는 객체에 속해있지 않다.
// 초기화 클래스 선언은 외부에서 해줘야 한다.
int Monster::MonsterCount = 0; // 정적멤버 변수 초기화

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