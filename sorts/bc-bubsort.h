#ifndef _BC25T_BUBBLE_SORT_
#define _BC25T_BUBBLE_SORT_

#include "../common/bc-common.h"

namespace bc25t
{
	template< class RandIter >
	void bubble_sort( RandIter begin, RandIter end )
	{
		for( RandIter left = begin; left < end - 1; left++ )
			for( RandIter right = left + 1; right < end; right++ )
				if( *right < *left ) bc25t::swap( *right, *left );
	}

	template< class RandIter, class Compare >
	void bubble_sort( RandIter begin, RandIter end, Compare comp )
	{
		for( RandIter left = begin; left < end - 1; left++ )
			for( RandIter right = left + 1; right < end; right++ )
				if( comp( *right, *left ) ) bc25t::swap( *right, *left );
	}	
}

#endif

