#include"bits.h"
/*
 * bitXor - x^y using only ~ and &
 * 	 Example: bitXor(4, 5) = 1
 * 	 Legal ops: ~ &
 * 	 Max ops: 14
 * 	 Rating: 1
 */
int bitXor(int x, int y)
{
	return ~ (~x & ~y) & ~(x & y);
}

/*
 * tmin - return minimum two's complement integer
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void)
{
	return 0x1<<31;
}

int isTmax(int x)
{
	int i = x + 1;
	x += 1;
	x = ~ x;
	i = ! i;
	x += i;
	return !x;
}
