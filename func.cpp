#include <iostream>
#include <string>

#include "func.h"

bernd::Base::Base() {};
bernd::Base::~Base() {};

bernd::Hello::Hello() {}
bernd::Hello::~Hello() {}

void bernd::Hello::Say(const std::string& name)
{
	std::cout << "Hello " << name << "\n";
}

bernd::Moin::Moin() {}
bernd::Moin::~Moin() {}

void bernd::Moin::Say(const std::string& name)
{
	std::cout << "Moin " << name << "\n";
}
