//// public派生とメンバのアクセス性
//
//#include "Super.h"
//
//class Sub :public Super {
//	void f() {
//		//pri = 1;		// クラス内部でもアクセス不可
//		pro = 1;
//		pub = 1;
//	}
//};
//
//int main()
//{
//	Sub x;
//
//	//x.pri = 1;		// クラス外部からアクセスできない
//	//x.pro = 1;		// クラス外部からアクセスできない
//	x.pub = 1;			// 公開属性が維持される
//}