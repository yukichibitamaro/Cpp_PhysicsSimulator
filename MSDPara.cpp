////////// aabbbbbbbba ////////// 

#include "MSDParaSet.h"

/////  ���\�b�h�̒�`�@///// 

// �R���X�g���N�^ //
MSDParaSET::MSDParaSET(float x0_, float dx0_) {
	x0 = x0_;
	dx0 = dx0_;
	std::cout << "�����ψ� " <<  x0 << " [m] " << std::endl;
	std::cout << "�������x " << dx0 << " [m/s]" << std::endl;
}

// �p�����[�^�Z�b�g //
void MSDParaSET::Setparameter() {
	std::cout << "SET" << std::endl;
}

// ��`�p�����[�^�̒�` //
void MSDParaSET::Printparameter() {
	std::cout << x0 << std::endl;
}

/*
{
	MSDParaSET MSDSystem(10.0, 5.0);
	MSDSystem.Printparameter();
	MSDSystem.Setparameter();
}
*/