#include <iostream>
#include <string>

using namespace std;

class SonData {
private:
    // �̸�, ����, ������, Ű, ĳ����, ������, �ֹ�, ����, Ȩ�׶���, ��ų
    string _name; // �̸�
    int _gender; // 0�� ����, 1�� ���� // ����
    float _weight; // ������
    float _height; // Ű
    string _beforeTeam; // ������
    int _position; // 0 : forward, 1 : midfield...
    bool _mainFoot; // true : ������, false : �޹�
    string _nationality; // ����
    string _homeGround; // Ȩ�׶���
    string& _skill; // ��ų
    string empty; 

public:
    // �����ڴ� �ݵ�� �ʿ�
    // �����ڸ� ������ ������ �����Ϸ��� �ڵ����� ����
    // �ڵ����� �����Ǵ� �����ڴ� �⺻ ������
    // �⺻ �����ڴ� �ƹ� ���ڰ��� ���� �ʴ� �����ڸ� �̾߱� �մϴ�.
    // �����ڴ� ��������� �ʱ�ȭ�� ��ü�� �����ɶ� ����Ǿ�� �ϴ�
    // �۾��� �����ڿ��� ó���մϴ�.

    // �������� ������Ģ��
    // �����ڰ� ���� ��쿡�� �����Ϸ��� �⺻�����ڸ� �ڵ����� ������.
    // ���ڸ� �޴� �����ڰ� �ϳ��� �ִ� ��쿡�� �����Ϸ��� �⺻�����ڸ�
    // �ڵ����� ����� ���� ����
    // �⺻ �����ڰ� ���ٴ� �ǹ̴� ���ڰ��� �������� �ʰ� ��ü�� ���� �� ���ٴ� �ǹ�.  
    SonData() 
        : _name("����"), _gender(3), _weight(0.0f), _height(0.0f), _beforeTeam("����")
        , _position(0), _mainFoot(true), _nationality("����"), _homeGround("����")
        , _skill(empty)
    {
    }

    // ���ڸ� �޴� ������
    SonData(string name, int gender, float weight, float height, string beforeTeam,
        int position, bool mainFoot, string nationality, string homeGround, string skill)
        : _name(name), _gender(gender), _weight(weight), _height(height), _beforeTeam(beforeTeam)
        , _position(position), _mainFoot(mainFoot), _nationality(nationality), _homeGround(homeGround)
        , _skill(skill)
    {
      
    }

    // ���ڸ� 1�� �޴� ������
    SonData(string name) 
        : _name(name), _gender(3), _weight(0.0f), _height(0.0f), _beforeTeam("����")
        , _position(0), _mainFoot(true), _nationality("����"), _homeGround("����")
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
        cout << "�̸� : " << _name << endl;
        switch (_gender)
        {
        case 0:
            cout << "���� : ����" << endl;
            break;
        case 1:
            cout << "���� : ����" << endl;
            break;
        default:
            cout << "���� : Ȯ���� �Ұ����մϴ�." << endl;
            break;
        }

        cout << "������ : " << _weight << endl;
        cout << "Ű : " << _height << endl;
        cout << "���� �Ҽ��� : " << _beforeTeam << endl;
        switch (_position)
        {
        case 0:
            cout << "������ : ����" << endl;
            break;
        case 1:
            cout << "������ : �̵��ʴ�" << endl;
            break;
        default:
            cout << "������ : �ٸ� ������" << endl;
            break;
        }
        if (_mainFoot) {
            cout << "���ֻ���ϴ� �߹��� : �����ʹ�" << endl;
        }
        else {
            cout << "���ֻ���ϴ� �߹��� : ���ʹ�" << endl;
        }
        cout << "���� : " << _nationality << endl;
        cout << "���� �Ҽ��� : " << _homeGround << endl;
        cout << "�ֿ� ��ų : " << _skill << endl;
    }
};



int main() {
    // ���� : �౸���ӿ��� �ʿ��� ������� ����Ÿ�� ���ϰ�
    // ĸ��ȭ�ؼ� ��ü�� ����� ���� �����ϰ� ����غ�����

    // ��ü�� �����ɶ� �ڵ����� ȣ��Ǿ����� ����Լ��� �ִ�.
    // �� ����Լ��� ȣ��Ǿ������ ������ ��ü�� ������ ���� �ִ�.
    // �� ����Լ��� �����ڶ�� �Ѵ�..


    SonData sonData;
    /*
    sonData.SetName("�����");
    sonData.SetGender(1);
    sonData.SetWeight(80.5f);
    sonData.SetHeight(180.3f);
    sonData.SetBeforeTeam("��������");
    sonData.SetPosition(0);
    sonData.SetMainFoot(true);
    sonData.SetNationality("���ѹα�");
    sonData.SetHomeGround("��Ʈ��");
    sonData.SetSkill("����ű");
    */

    /*
    cout << "�̸� : " << sonData.GetName() << endl;
    switch (sonData.GetGender())
    {
    case 0:
        cout << "���� : ����" << endl;
        break;
    case 1:
        cout << "���� : ����" << endl;
        break;
    default:
        cout << "���� : Ȯ���� �Ұ����մϴ�." << endl;
        break;
    }

    cout << "������ : " << sonData.GetWeight() << endl;
    cout << "Ű : " << sonData.GetHeight() << endl;
    cout << "���� �Ҽ��� : " << sonData.GetBeforeTeam() << endl;
    switch (sonData.GetPosition())
    {
    case 0:
        cout << "������ : ����" << endl;
        break;
    case 1:
        cout << "������ : �̵��ʴ�" << endl;
        break;
    default:
        cout << "������ : �ٸ� ������" << endl;
        break;
    }
    if (sonData.GetMainFoot()) {
        cout << "���ֻ���ϴ� �߹��� : �����ʹ�" << endl;
    }
    else {
        cout << "���ֻ���ϴ� �߹��� : ���ʹ�" << endl;
    }
    cout << "���� : " << sonData.GetNationality() << endl;
    cout << "���� �Ҽ��� : " << sonData.GetHomeGround() << endl;
    cout << "�ֿ� ��ų : " << sonData.GetSkill() << endl;
    */

    sonData.Info();
    cout << endl;

    

    SonData sonData9("�����", 1, 80.5f, 180.3f, "��������", 0, true, "���ѹα�", "��Ʈ��", "����ű");

    

    sonData9.Info();

    return 0;
}