//// ��������̐����̉ۂɂ���Ĕz��v�f�̒l�����ʕ\��(�֐��ւ̃|�C���^��)
//
//#include <ctime>
//#include <cstdlib>
//#include <iostream>
//
//using namespace std;
//
////--- ���т͗�[B�F70�`79�_]���H ---//
//bool isB(int x)
//{
//	return x >= 70 && x <= 79;
//}
//
////--- ���т͗D[A�F80�`100]�܂��͉�[C�F60�`69]���H ---//
//bool isAorC(int x)
//{
//	return (x >= 80 && x <= 100) || (x >= 60 && x <= 69);
//}
//
////--- �֐�fit(x)�̕ԋp�l���^�ł���z��a�̗v�f�����ʕ\�� ---//
//void put_list(const int a[], int n, bool(*fit)(int))
//{
//	for (int i = 0; i < n; i++) {
//		if ((*fit)(a[i]))
//			cout << "��";
//		else
//			cout << "  ";
//		cout << "a[" << i << "] = " << a[i] << '\n';
//	}
//}
//
//int main()
//{
//	int a[10];							// �_��
//	int n = sizeof(a) / sizeof(a[0]);	// �v�f��
//
//	srand(time(NULL));					// �����̎��������
//
//	for (int i = 0; i < n; i++)
//		a[i] = rand() % 101;			// 0�`100�̗�������
//
//	cout << "��----------\n";
//	put_list(a, n, isB);				// ��[B]�Ɂ���t���Ĉꗗ�\��
//
//	cout << "\n�D�܂��͉�--\n";
//	put_list(a, n, isAorC);				// �D[A]�܂��͉�[C]�Ɂ���t���Ĉꗗ�\��
//}