//--- ��ʉ���N���X ---//

#include <iostream>
#include "Member.h"

using namespace std;

//--- �R���X�g���N�^ ---//
Member::Member(const string& name,int no,double w)
	:full_name(name), number(no)
{
	set_weight(w);			// �̏d��ݒ�
}