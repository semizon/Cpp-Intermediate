// ���N���X�Ɣh���N���X�̑�����Z�q�ƃf�X�g���N�^

#include <iostream>

using namespace std;

//===== �������z��N���X =====//
class Array {
	static const int num = 5;			// �v�f���i�Œ�j
	int *p;

public:
	//--- �f�t�H���g�R���X�g���N�^ ---//
	Array() :p(new int[num]) { cout << "�̈�m��\n"; }

	//--- �R�s�[�R���X�g���N�^�@---//
	Array(const Array& x) :p(new int[x.num]) {
		for (int i = 0; i < num; i++)p[i] = x.p[i];		// x�̑S�v�f���R�s�[
		cout << "�R�s�[������\n";
	}

	//--- �f�X�g���N�^ ---//
	~Array() { delete[] p; cout << "�̈���\n"; }

	//--- ������Z�q ---//
	Array& operator=(const Array& x) {
		for (int i = 0; i < num; i++)p[i] = x.p[i];
		return *this;
	}

	//--- �S�v�f�ɒlv���� ---//
	void set(int v) { for (int i = 0; i < num; i++)p[i] = v; }

	//--- �S�v�f�̒l��\�� ---//
	void print() const { for (int i = 0; i < num; i++)cout << p[i] << ' '; }
};

//===== ���ȈՔz��N���X�i�h���N���X�j =====//
class ArrayX :public Array {
	// �R���X�g���N�^���܂߉�����`���Ȃ�
};

int main()
{
	ArrayX a1;
	a1.set(15);				// a1�̑S�v�f��15����

	ArrayX a2(a1);			// a1�ŏ�����

	ArrayX a3;
	a3 = a1;				// a1�̑S�v�f��a3�ɃR�s�[

	cout << "�z��a1�F";		a1.print();		cout << '\n';
	cout << "�z��a2�F";		a2.print();		cout << '\n';
	cout << "�z��a3�F";		a3.print();		cout << '\n';
}