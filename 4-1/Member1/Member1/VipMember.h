#pragma once

// �D�҉���N���X�i��1�Łj

#ifndef ___VipMember
#define ___VipMember

#include <string>
#include "Member.h"

//===== �D�҉���N���X�i��1�Łj =====//
class VipMember :public Member {
	std::string privilege;		// ���T

public:
	//--- �R���X�g���N�^ ---//
	VipMember(const std::string& name, int no, double w, const std::string& prv);

	//--- ���T�擾(privilege�̃Q�b�^) ---//
	std::string get_privilege() const { return privilege; }

	//--- ���T�ݒ�(privilege�̃Z�b�^) ---//
	void set_privilege(const std::string& prv) {
		privilege = (prv != "") ? prv : "���o�^";
	}
};

#endif