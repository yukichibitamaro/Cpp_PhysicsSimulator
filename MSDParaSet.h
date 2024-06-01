#pragma once
#include <iostream>

///// クラスの宣言 /////

// マス・ばね・ダンパシステムのパラメータ設定//
class MSDParaSET{
 private:
     float m; // 質量
     float c; // 粘性係数
     float k; // ばね定数
     float x0; // 初期位置
     float dx0; // 初期速度
 public:
     MSDParaSET(float,float); // コンストラクタ
     void Setparameter();
     void Printparameter();
};
