// bsearch�֐��ɂ�鏸���\�[�g�ςݔz�񂩂�̒T��

#include <cstdlib>
#include <iostream>

using namespace std;

//--- int�^�����̔�r�֐� ---//
int int_cmp(const int* a, const int* b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

int main()
{
	int nx;							// x�̗v�f��
	cout << "�z��̗v�f���F";
	cin >> nx;
	int* x = new int[nx];			// �z��𐶐�

	cout << nx << "�̐����������ɓ��͂���B\n";
	cout << "x[0] : ";
	cin >> x[0];
	for (int i = 1; i < nx; i++) {
		do {
			cout << "x[" << i << "] : ";
			cin >> x[i];
		} while (x[i] < x[i - 1]);
	}

	int no;
	cout << "�T������l�F";
	cin >> no;

	int* p = reinterpret_cast<int*>(bsearch(&no, x, nx, sizeof(int), reinterpret_cast<int(*)(const void*, const void*)>(int_cmp)));

	if (p != NULL)
		cout << "x[" << (p - x) << "]����v���܂��B\n";
	else
		cout << "������܂���ł����B\n";
}