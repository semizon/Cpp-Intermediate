// �s���Ȃ������̘_���ρE�_���a�E�r���I�_���a�E1�̕�����\��
//
//#include <iostream>
//
//using namespace std;
//
////--- ����x����"1"�ł���r�b�g�������߂� ---//
//int count_bits(unsigned x)
//{
//	int bits = 0;
//	while (x) {
//		if (x & 1U)bits++;
//		x >>= 1;
//	}
//	return bits;
//}
//
////--- int�^/unsigned�^�̃r�b�g�������߂� ---//
//int int_bits()
//{
//	return count_bits(~0U);
//}
//
////--- unsigned�^�̃r�b�g�\����\�� ---//
//void print_bits(unsigned x)
//{
//	for (int i = int_bits() - 1; i >= 0; i--)
//		cout << ((x >> i) & 1U ? '1': '0');
//}
//
//int main()
//{
//	unsigned a, b;
//
//	cout << "�񕉂̐��������͂���B\n";
//	cout << "a : ";		cin >> a;
//	cout << "b : ";		cin >> b;
//
//	cout << "a     = ";	print_bits(a);		cout << '\n';
//	cout << "b     = ";	print_bits(b);		cout << '\n';
//	cout << "a & b = ";	print_bits(a&b);	cout << '\n';		// �_����
//	cout << "a | b = ";	print_bits(a | b);	cout << '\n';		// �_���a
//	cout << "a ^ b = ";	print_bits(a^b);	cout << '\n';		// �_����
//	cout << "~a    = ";	print_bits(~a);		cout << '\n';		// 1�̕␔
//	cout << "~b    = ";	print_bits(~b);		cout << '\n';		// 1�̕␔
//}