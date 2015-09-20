#ifndef _BC25T_COMMON_
#define _BC25T_COMMON_

namespace bc25t
{
	template <class Type>
	void swap( Type & a, Type & b )
	{
		Type tmp = a;
		a = b;
		b = tmp;
	}
}

#endif

