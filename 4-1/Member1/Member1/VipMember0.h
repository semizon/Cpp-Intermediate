#pragma once

// ����ŁE�D�҉���N���X

#ifndef ___VipMember0
#define ___VipMember0

#include <string>

//===== ����ŁE�D�҉���N���X =====//
class VipMember0 {
	std::string full_name;	// ����
	int number;				// ����ԍ�
	double weight;			// �̏d
	std::string privilege;	// ���T

public:
	//--- �R���X�g���N�^ ---//
	VipMember0(const std::string& name, int no, double w, const std::string& prv);

	//---�����擾(full_name�̃Q�b�^) ---//
	std::string name() const { return full_name; }

	//--- ����ԍ��擾(number�̃Q�b�^) ---//
	int no() const { return number; }

	//--- �̏d�擾(weight�̃Q�b�^) ---//
	double get_weight() const { return weight; }

	//--- �̏d�ݒ�(weight�̃Z�b�^) ---//
	void set_weight(double w) { weight = (w > 0) ? w : 0; }

	//--- ���T�擾(privilege�̃Q�b�^) ---//
	std::string get_privilege() const { return privilege; }

	//--- ���T�ݒ�(privilege�̃Z�b�^) ---//
	void set_privilege(const std::string& prv) {
		privilege = (prv != "") ? prv : "���o�^";
	}
};

#endif