// �D�҉���N���X�i��1�Łj�̗��p��

#include <iostream>
#include "VipMember.h"

using namespace std;

int main()
{
	VipMember mineya("�􉮗���", 17, 89.2, "���S�z�Ə�");

	double weight = mineya.get_weight();		// �􉮌N�̑̏d
	mineya.set_weight(weight - 15.3);			// �􉮌N�̑̏d���X�V

	cout << "No." << mineya.no() << " : " << mineya.name() << " (" << mineya.get_weight() << "kg) " << " ���T��" << mineya.get_privilege() << '\n';
}