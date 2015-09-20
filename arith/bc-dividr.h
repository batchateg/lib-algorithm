#ifndef _BC25T_ARITHMETIC_DIVIDERS_
#define _BC25T_ARITHMETIC_DIVIDERS_

#include <cmath>

namespace bc25t
{
	template< class Container, class Int  >
	void get_dividers( Container & cont, Int a )
	{
		for( Int n = 1, c, d; n <= sqrt( (double) a ); n++ )
		{
			c = a % n;
			d = a / n;
			if( c == 0 )
			{
				cont.push_back( n );
				if( n != d ) cont.push_back( d );
			}
		}	
	}

	template< class Int >
	Int gcd( Int a, Int b )
	{
		while( b ) b ^= a ^= b ^= a % b;
		return a;
	}

}

#endif

