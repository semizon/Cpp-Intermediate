//// ‹ã‹ã‚Ì‰ÁZ‚ÆæZ
//
//#include <iomanip>
//#include <iostream>
//
//using namespace std;
//
////--- x1‚Æx2‚Ì˜a‚ğ‹‚ß‚é ---//
//int sum(int x1, int x2)
//{
//	return x1 + x2;
//}
//
////--- x1‚Æx2‚ÌÏ‚ğ‹‚ß‚é ---//
//int mul(int x1, int x2)
//{
//	return x1*x2;
//}
//
////--- ‹ã‹ã‚Ì•\‚ğo—Í ---//
//void kuku(int calc(int, int))
//{
//	cout << "  |";
//	for (int i = 1; i <= 9; i++)
//		cout << setw(3) << i;
//	cout << "\n--+";
//	for (int i = 1; i <= 27; i++)
//		cout << '-';
//	cout << '\n';
//
//	for (int i = 1; i <= 9; i++) {
//		cout << i << " |";
//		for (int j = 1; j <= 9; j++)
//			cout << setw(3) << calc(i, j);
//		cout << '\n';
//	}
//}
//
//int main()
//{
//	cout << "‹ã‹ã‚Ì‰ÁZ•\\n";
//	kuku(sum);					// ‰ÁZ•\
//	cout << '\n';
//
//	cout << "‹ã‹ã‚ÌæZ•\\n";
//	kuku(mul);					// æZ•\
//}