#pragma once

// ��ʉ���N���X

#ifndef ___Member
#define ___Member

#include <string>

//===== ��ʉ���N���X =====//
class Member {
	std::string full_name;	// ����
	int number;				// ����ԍ�
	double weight;			// �̏d

public:
	//--- �R���X�g���N�^ ---//
	Member(const std::string&name, int no, double w);

	//--- �����擾(full_name�̃Q�b�^) ---//
	std::string name() const { return full_name; }

	//--- ����ԍ��擾(number�̃Q�b�^) ---//
	int no() const { return number; }

	//--- �̏d�擾(weight�̃Q�b�^) ---//
	double get_weight() const { return weight; }

	//--- �̏d�ݒ�(weight�̃Z�b�^) ---//
	void set_weight(double w) { weight = (w > 0) ? w : 0; }
};

#endif