#ifndef _BC25T_INSERTION_SORT_
#define _BC25T_INSERTION_SORT_

#include "../common/bc-common.h"

namespace bc25t
{
	template< class RandIter >
	void insertion_sort( RandIter begin, RandIter end )
	{
		for( RandIter right = begin + 1; right < end; right++ )
		{
			for( RandIter left = right - 1; left >= 0; left-- )
			{
				if( *left <= *(left + 1) ) break;
				bc25t::swap( *left, *(left + 1) ); 
			}
		} 
	}

	template< class RandIter, class Compare >
	void insertion_sort( RandIter begin, RandIter end, Compare comp )
	{
		for( RandIter right = begin + 1; right < end; right++ )
		{
			for( RandIter left = right - 1; left >= 0; left-- )
			{
				if( !comp( *left, *(left + 1) ) ) break;
				bc25t::swap( *left, *(left + 1) ); 
			}
		}
	}	
}

#endif

