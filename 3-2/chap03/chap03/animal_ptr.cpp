// �I�΂ꂽ�����̖�����\��

#include <iostream>

using namespace std;

enum Animal { Dog, Cat, Monkey, Invalid };

//--- ������ ---//
void dog()
{
	cout << "���������I�I\n";
}

//--- �L���� ---//
void cat()
{
	cout << "�j���`�I�I�I\n";
}

//--- ������ ---//
void monkey()
{
	cout << "�L�b�L�b�I�I\n";
}

//--- ������I�΂��� ---//
Animal select()
{
	int tmp;

	do {
		cout << "(0)�c�� (1)�c�L (2)�c�� (3)�c�I���F";
		cin >> tmp;
	} while (tmp<Dog || tmp>Invalid);
	return static_cast<Animal>(tmp);
}

int main()
{
	Animal selected;
	void(*afp[])() = { dog,cat,monkey };

	do {
		selected = select();		// ������I��
		if (selected >= Dog&&selected < Invalid)
			afp[selected]();
	} while (selected != Invalid);
}