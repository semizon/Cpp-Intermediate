// 優待会員クラス（第1版）

#include <iostream>
#include "VipMember.h"

using namespace std;

//--- コンストラクタ ---//
VipMember::VipMember(const string& name, int no, double w, const string& prv)
	:Member(name, no, w)
{
	set_privilege(prv);				// 特典を設定
}