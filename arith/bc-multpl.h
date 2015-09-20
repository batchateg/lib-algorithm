#ifndef _BC25T_ARITHMETIC_MULTIPLIERS_
#define _BC25T_ARITHMETIC_MULTIPLIERS_

#include "bc-dividr.h"

namespace bc25t
{
	template< class Int >
	Int lcm( Int a, Int b )
	{
		return ( a / gcf( a, b ) ) * b;
	}
}

#endif

