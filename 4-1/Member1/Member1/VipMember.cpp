// �D�҉���N���X�i��1�Łj

#include <iostream>
#include "VipMember.h"

using namespace std;

//--- �R���X�g���N�^ ---//
VipMember::VipMember(const string& name, int no, double w, const string& prv)
	:Member(name, no, w)
{
	set_privilege(prv);				// ���T��ݒ�
}