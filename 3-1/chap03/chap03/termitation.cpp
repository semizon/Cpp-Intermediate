// �v���O�����I�����Ƀ��b�Z�[�W�Ǝ�����\��

#define _CRT_SECURE_NO_WARNINGS

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

//--- �I�����b�Z�[�W�\�� ---//
void good_bye()
{
	cout << "�v���O��������I���I\n";
}

//--- ���݂̎�����\�� ---//
void put_time()
{
	time_t current = time(NULL);			// ���݂̎������擾
	struct tm* lct = localtime(&current);	// �n�����̍\���̂ɕϊ�

	cout << lct->tm_hour << ":" << lct->tm_min << ":" << lct->tm_sec << '\n';
}

int main()
{
	int x;

	atexit(good_bye);		// �֐�good_bye��o�^
	atexit(put_time);		// �֐�put_time��o�^
	
	cout << "(0)�c����I�� (1)�c�ُ�I���F";
	cin >> x;

	if (x) abort();			// �ُ�I��(�o�^�֐��͌Ăяo����Ȃ�)

	return 0;				// ����I��(�o�^�֐��������I�ɌĂяo�����)
}