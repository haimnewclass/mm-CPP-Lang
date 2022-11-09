#include "ItemPrice.h"

int ItemPrice::Calc(int price)
{
	return price + Tax();
}
int ItemPrice::Tax() {
	return 10;
}

