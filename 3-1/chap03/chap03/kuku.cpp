//// ���̉��Z�Ə�Z
//
//#include <iomanip>
//#include <iostream>
//
//using namespace std;
//
////--- x1��x2�̘a�����߂� ---//
//int sum(int x1, int x2)
//{
//	return x1 + x2;
//}
//
////--- x1��x2�̐ς����߂� ---//
//int mul(int x1, int x2)
//{
//	return x1*x2;
//}
//
////--- ���̕\���o�� ---//
//void kuku(int calc(int, int))
//{
//	cout << "  |";
//	for (int i = 1; i <= 9; i++)
//		cout << setw(3) << i;
//	cout << "\n--+";
//	for (int i = 1; i <= 27; i++)
//		cout << '-';
//	cout << '\n';
//
//	for (int i = 1; i <= 9; i++) {
//		cout << i << " |";
//		for (int j = 1; j <= 9; j++)
//			cout << setw(3) << calc(i, j);
//		cout << '\n';
//	}
//}
//
//int main()
//{
//	cout << "���̉��Z�\\n";
//	kuku(sum);					// ���Z�\
//	cout << '\n';
//
//	cout << "���̏�Z�\\n";
//	kuku(mul);					// ��Z�\
//}