// ��ʉ���N���X�Ǝ���ŁE�D�҉���N���X�̗��p��

#include <iostream>
#include "Member.h"
#include "VipMember0.h"

using namespace std;

//--- ��ʉ��m�̌���(�̏d��dw����) ---//
void slim_off(Member& m, double dw)
{
	double weight = m.get_weight();		// ���݂̑̏d���擾
	if (weight > dw)
		m.set_weight(weight - dw);		// �̏d���X�V
}

//--- �D�҉��m�̌���(�̏d��dw����) ---//
void slim_off(VipMember0& m, double dw)
{
	double weight = m.get_weight();
	if (weight > dw)
		m.set_weight(weight - dw);
}

int main()
{
	Member kaneko("���q����", 15, 75.2);						// ��ʉ��
	VipMember0 mineya("�􉮗���", 17, 89.2, "���S�z�Ə�");	// �D�҉��

	slim_off(kaneko, 3.7);				// ���q�N��3.7kg����
	cout << "No." << kaneko.no() << " : " << kaneko.name() << " (" << kaneko.get_weight() << "kg) \n";

	slim_off(mineya, 15.3);				// �􉮌N��15.3kg����
	cout << "No." << mineya.no() << " : " << mineya.name() << " (" << mineya.get_weight() << "kg) " << " ���T��" << mineya.get_privilege() << '\n';
}