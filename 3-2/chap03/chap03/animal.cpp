//// �I�΂ꂽ�����̖�����\��
//
//#include <iostream>
//
//using namespace std;
//
//enum Animal { Dog, Cat, Monkey, Invalid };
//
////--- ������ ---//
//void dog()
//{
//	cout << "���������I�I\n";
//}
//
////--- �L���� ---//
//void cat()
//{
//	cout << "�j���`�I�I�I\n";
//}
//
////--- ������ ---//
//void monkey()
//{
//	cout << "�L�b�L�b�I�I\n";
//}
//
////--- ������I�΂��� ---//
//Animal select()
//{
//	int tmp;
//
//	do {
//		cout << "(0)�c�� (1)�c�L (2)�c�� (3)�c�I���F";
//		cin >> tmp;
//	} while (tmp<Dog || tmp>Invalid);
//	return static_cast<Animal>(tmp);
//}
//
//int main()
//{
//	Animal selected;
//
//	do {
//		selected = select();		// ������I��
//		switch (selected) {
//		case Dog: dog();		break;		// ��
//		case Cat: cat();		break;		// �L
//		case Monkey: monkey();	break;		// ��
//		}
//	} while (selected != Invalid);
//}