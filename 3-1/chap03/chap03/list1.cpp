// ��������̐����̉ۂɂ���Ĕz��v�f�̒l�����ʕ\��
//
//#include <ctime>
//#include <cstdlib>
//#include <iostream>
//
//using namespace std;
//
////--- ���т͗�[B�F70�`79�_]���H ---//
//bool fit(int x)
//{
//	return x >= 70 && x <= 79;
//}
//
////--- �֐�fit(x)�̕ԋp�l���^�ł���z��a�̗v�f�����ʕ\�� ---//
//void put_list(const int a[], int n)
//{
//	for (int i = 0; i < n; i++) {
//		if (fit(a[i]))
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
//	put_list(a, n);						// �ꗗ�\��
//}