#pragma once
#include <iostream>

///// �N���X�̐錾 /////

// �}�X�E�΂ˁE�_���p�V�X�e���̃p�����[�^�ݒ�//
class MSDParaSET{
 private:
     float m; // ����
     float c; // �S���W��
     float k; // �΂˒萔
     float x0; // �����ʒu
     float dx0; // �������x
 public:
     MSDParaSET(float,float); // �R���X�g���N�^
     void Setparameter();
     void Printparameter();
};
