////////// aaa ////////// 

#include "MSDParaSet.h"

/////  メソッドの定義　///// 

// コンストラクタ //
MSDParaSET::MSDParaSET(float x0_, float dx0_) {
	x0 = x0_;
	dx0 = dx0_;
	std::cout << "初期変位 " <<  x0 << " [m] " << std::endl;
	std::cout << "初期速度 " << dx0 << " [m/s]" << std::endl;
}

// パラメータセット //
void MSDParaSET::Setparameter() {
	std::cout << "SET" << std::endl;
}

// 定義パラメータの定義 //
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