//// ���N���X�ƃ����o�̏��������m�F����N���X�Q
//
//#include <iostream>
//
//using namespace std;
//
////===== �N���XDerived�̊��N���X =====//
//class Base {
//	int x;
//
//public:
//	Base(int a = 0) :x(a) { cout << "Base::x��" << x << "�ŏ������B\n"; }
//};
//
////===== �N���XDerived�Ƀ����o�Ƃ��Ċ܂܂��N���X =====//
//class Memb {
//	int x;
//
//public:
//	Memb(int a = 0) :x(a) { cout << "Memb::x��" << x << "�ŏ������B\n"; }
//};
//
////===== �N���XDerived�̓N���XBase����public�h�� =====//
//class Derived :public Base {
//	int y;
//	Memb m1;
//	Memb m2;
//	void say() { y = 0; cout << "Derived::y��" << y << "�ŏ������B\n"; }
//
//public:
//	Derived() { say(); }
//	Derived(int a, int b, int c) :m2(a), m1(b), Base(c) { say(); }
//};
//
//int main()
//{
//	Derived d1;
//
//	cout << '\n';
//
//	Derived d2(1, 2, 3);
//}