//// êÊïõNXÆìÅEDÒïõNXÌpá
//
//#include <iostream>
//#include "Member.h"
//#include "VipMember0.h"
//
//using namespace std;
//
////--- êÊïõmÌ´¿(Ìdªdw¸é) ---//
//void slim_off(Member& m, double dw)
//{
//	double weight = m.get_weight();		// »ÝÌÌdðæ¾
//	if (weight > dw)
//		m.set_weight(weight - dw);		// ÌdðXV
//}
//
////--- DÒïõmÌ¸Ê(Ìdªdw¸é) ---//
//void slim_off(VipMember0& m, double dw)
//{
//	double weight = m.get_weight();
//	if (weight > dw)
//		m.set_weight(weight - dw);
//}
//
//int main()
//{
//	Member kaneko("àq¾", 15, 75.2);						// êÊïõ
//	VipMember0 mineya("ô®´", 17, 89.2, "ïïSzÆ");	// DÒïõ
//
//	slim_off(kaneko, 3.7);				// àqNª3.7kg¸Ê
//	cout << "No." << kaneko.no() << " : " << kaneko.name() << " (" << kaneko.get_weight() << "kg) \n";
//
//	slim_off(mineya, 15.3);				// ô®Nª15.3kg¸Ê
//	cout << "No." << mineya.no() << " : " << mineya.name() << " (" << mineya.get_weight() << "kg) " << " ÁT" << mineya.get_privilege() << '\n';
//}