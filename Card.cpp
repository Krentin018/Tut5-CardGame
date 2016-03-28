#include "Card.h"
#include <iostream>

using namespace std;

int num;
string colour;

Card::Card()
{
	num = 1;
}


Card::~Card()
{
	num = 0;
	colour = "null";
}
