//// ���N���X�Ɣh���N���X�̃R���X�g���N�^
//
//#include <iostream>
//
//using namespace std;
//
////===== ���N���X =====//
//class Base {
//	int x;
//
//public:
//	//--- �R���X�g���N�^ ---//
//	Base() :x(99) { cout << "Base::x��99�ŏ������B\n"; }
//
//	//--- x�̃Q�b�^ ---//
//	int get_x() const { return x; }
//};
//
////===== �h���N���X =====//
//class Derived :public Base {
//	// �R���X�g���N�^���܂߉�����`���Ȃ�
//};
//
//int main()
//{
//	Derived d;
//
//	cout << "d.get_x() = " << d.get_x() << '\n';
//}