// ����ŁE�D�҉���N���X

#include <string>
#include <iostream>
#include "VipMember0.h"

using namespace std;

//--- �R���X�g���N�^ ---//
VipMember0::VipMember0(const string& name, int no, double w, const string& prv)
	:full_name(name), number(no)
{
	set_weight(w);			// �̏d��ݒ�
	set_privilege(prv);		// ���T��ݒ�
}