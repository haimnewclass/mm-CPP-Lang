#include "Child.h"

void Child::kuku()
{
	int a;
	a = AddNum(12);
	a = IAmProtected(12);
}

int Child::Calc() {
	return 100;
}