#pragma once

// ���N���X�Ɣh���N���X

#ifndef ___Member
#define ___Member

#include <iostream>

//--- ���N���X ---//
class Base {
	int a;
	int b;

public:
	Base(int aa, int bb) :a(aa), b(bb) {}

	void func() const {
		std::cout << "a = " << a << '\n';
		std::cout << "b = " << b << '\n';
	}
};

//--- �h���N���X ---//
class Derived :public Base {
	int x;

public:
	Derived(int aa, int bb, int xx) :Base(aa, bb), x(xx) {}

	void method() const {
		func();
		std::cout << "x = " << x << '\n';
	}
};

#endif // !___Member
