#include <iostream>
#include <string>

using namespace std;

class SonData {
private:
    // 이름, 성별, 몸무게, 키, 캐리어, 포지션, 주발, 국적, 홈그라운드, 스킬
    string _name; // 이름
    int _gender; // 0은 여자, 1은 남자 // 성별
    float _weight; // 몸무게
    float _height; // 키
    string _beforeTeam; // 이전팀
    int _position; // 0 : forward, 1 : midfield...
    bool _mainFoot; // true : 오른발, false : 왼발
    string _nationality; // 국적
    string _homeGround; // 홈그라운드
    string& _skill; // 스킬
    string empty; 

public:
    // 생성자는 반드시 필요
    // 생성자를 만들지 않으면 컴파일러가 자동으로 생성
    // 자동으로 생성되는 생성자는 기본 생성자
    // 기본 생성자는 아무 인자값도 받지 않는 생성자를 이야기 합니다.
    // 생성자는 멤버변수의 초기화나 객체가 생성될때 선행되어야 하는
    // 작업을 생성자에서 처리합니다.

    // 생성자의 생성규칙은
    // 생성자가 없는 경우에는 컴파일러가 기본생서자를 자동으로 생성함.
    // 인자를 받는 생성자가 하나라도 있는 경우에는 컴파일러는 기본생성자를
    // 자동으로 만들어 주지 않음
    // 기본 생성자가 없다는 의미는 인자값을 전달하지 않고 객체를 만들 수 없다는 의미.  
    SonData() 
        : _name("없음"), _gender(3), _weight(0.0f), _height(0.0f), _beforeTeam("없음")
        , _position(0), _mainFoot(true), _nationality("없음"), _homeGround("없음")
        , _skill(empty)
    {
    }

    // 인자를 받는 생성자
    SonData(string name, int gender, float weight, float height, string beforeTeam,
        int position, bool mainFoot, string nationality, string homeGround, string skill)
        : _name(name), _gender(gender), _weight(weight), _height(height), _beforeTeam(beforeTeam)
        , _position(position), _mainFoot(mainFoot), _nationality(nationality), _homeGround(homeGround)
        , _skill(skill)
    {
      
    }

    // 인자를 1개 받는 생성자
    SonData(string name) 
        : _name(name), _gender(3), _weight(0.0f), _height(0.0f), _beforeTeam("없음")
        , _position(0), _mainFoot(true), _nationality("없음"), _homeGround("없음")
        , _skill(empty)
    {
       
    }

    void SetName(string value) {
        _name = value;
    }
    string GetName() {
        return _name;
    }

    void SetGender(int value) {
        _gender = value;
    }
    int GetGender() {
        return _gender;
    }

    void SetWeight(float value) {
        _weight = value;
    }
    float GetWeight() {
        return _weight;
    }

    void SetHeight(float value) {
        _height = value;
    }
    float GetHeight() {
        return _height;
    }

    void SetBeforeTeam(string value) {
        _beforeTeam = value;
    }
    string GetBeforeTeam() {
        return _beforeTeam;
    }

    void SetPosition(int value) {
        _position = value;
    }
    int GetPosition() {
        return _position;
    }

    void SetMainFoot(bool value) {
        _mainFoot = value;
    }
    bool GetMainFoot() {
        return _mainFoot;
    }

    void SetNationality(string value) {
        _nationality = value;
    }
    string GetNationality() {
        return _nationality;
    }

    void SetHomeGround(string value) {
        _homeGround = value;
    }
    string GetHomeGround() {
        return _homeGround;
    }

    void SetSkill(string value) {
        _skill = value;
    }
    string GetSkill() {
        return _skill;
    }

    void Info() {
        cout << "이름 : " << _name << endl;
        switch (_gender)
        {
        case 0:
            cout << "성별 : 여자" << endl;
            break;
        case 1:
            cout << "성별 : 남자" << endl;
            break;
        default:
            cout << "성별 : 확인이 불가능합니다." << endl;
            break;
        }

        cout << "몸무게 : " << _weight << endl;
        cout << "키 : " << _height << endl;
        cout << "이전 소속팀 : " << _beforeTeam << endl;
        switch (_position)
        {
        case 0:
            cout << "포지션 : 윙어" << endl;
            break;
        case 1:
            cout << "포지션 : 미드필더" << endl;
            break;
        default:
            cout << "포지션 : 다른 포지션" << endl;
            break;
        }
        if (_mainFoot) {
            cout << "자주사용하는 발방향 : 오른쪽발" << endl;
        }
        else {
            cout << "자주사용하는 발방향 : 왼쪽발" << endl;
        }
        cout << "국적 : " << _nationality << endl;
        cout << "현재 소속팀 : " << _homeGround << endl;
        cout << "주요 스킬 : " << _skill << endl;
    }
};



int main() {
    // 문제 : 축구게임에서 필요한 손흥민의 데이타를 취하고
    // 캡슐화해서 객체를 만들고 값을 저장하고 출력해보세요

    // 객체가 생성될때 자동으로 호출되어지는 멤버함수가 있다.
    // 이 멤버함수가 호출되어야지만 온전한 객체로 생성될 수가 있다.
    // 이 멤버함수를 생성자라고 한다..


    SonData sonData;
    /*
    sonData.SetName("손흥민");
    sonData.SetGender(1);
    sonData.SetWeight(80.5f);
    sonData.SetHeight(180.3f);
    sonData.SetBeforeTeam("레버쿠젠");
    sonData.SetPosition(0);
    sonData.SetMainFoot(true);
    sonData.SetNationality("대한민국");
    sonData.SetHomeGround("토트넘");
    sonData.SetSkill("프리킥");
    */

    /*
    cout << "이름 : " << sonData.GetName() << endl;
    switch (sonData.GetGender())
    {
    case 0:
        cout << "성별 : 여자" << endl;
        break;
    case 1:
        cout << "성별 : 남자" << endl;
        break;
    default:
        cout << "성별 : 확인이 불가능합니다." << endl;
        break;
    }

    cout << "몸무게 : " << sonData.GetWeight() << endl;
    cout << "키 : " << sonData.GetHeight() << endl;
    cout << "이전 소속팀 : " << sonData.GetBeforeTeam() << endl;
    switch (sonData.GetPosition())
    {
    case 0:
        cout << "포지션 : 윙어" << endl;
        break;
    case 1:
        cout << "포지션 : 미드필더" << endl;
        break;
    default:
        cout << "포지션 : 다른 포지션" << endl;
        break;
    }
    if (sonData.GetMainFoot()) {
        cout << "자주사용하는 발방향 : 오른쪽발" << endl;
    }
    else {
        cout << "자주사용하는 발방향 : 왼쪽발" << endl;
    }
    cout << "국적 : " << sonData.GetNationality() << endl;
    cout << "현재 소속팀 : " << sonData.GetHomeGround() << endl;
    cout << "주요 스킬 : " << sonData.GetSkill() << endl;
    */

    sonData.Info();
    cout << endl;

    

    SonData sonData9("손흥민", 1, 80.5f, 180.3f, "레버쿠젠", 0, true, "대한민국", "토트넘", "프리킥");

    

    sonData9.Info();

    return 0;
}