#if !defined(BOOST_VMD_DETAIL_MODIFIERS_HPP)
#define BOOST_VMD_DETAIL_MODIFIERS_HPP

#include <boost/vmd/detail/match_single_identifier.hpp>

#define BOOST_VMD_REGISTER_BOOST_VMD_PARSE_ONLY_TUPLE (BOOST_VMD_PARSE_ONLY_TUPLE)
#define BOOST_VMD_REGISTER_BOOST_VMD_PARSE_ARRAY (BOOST_VMD_PARSE_ARRAY)
#define BOOST_VMD_REGISTER_BOOST_VMD_PARSE_LIST  (BOOST_VMD_PARSE_LIST)

#define BOOST_VMD_DETECT_BOOST_VMD_PARSE_ONLY_TUPLE_BOOST_VMD_PARSE_ONLY_TUPLE
#define BOOST_VMD_DETECT_BOOST_VMD_PARSE_ARRAY_BOOST_VMD_PARSE_ARRAY
#define BOOST_VMD_DETECT_BOOST_VMD_PARSE_LIST_BOOST_VMD_PARSE_LIST

#define BOOST_VMD_REGISTER_BOOST_VMD_RETURN_TYPE (BOOST_VMD_RETURN_TYPE)
#define BOOST_VMD_REGISTER_BOOST_VMD_RETURN_NO_TYPE (BOOST_VMD_RETURN_NO_TYPE)
#define BOOST_VMD_REGISTER_BOOST_VMD_RETURN_AFTER (BOOST_VMD_RETURN_AFTER)
#define BOOST_VMD_REGISTER_BOOST_VMD_RETURN_NO_AFTER (BOOST_VMD_RETURN_NO_AFTER)
#define BOOST_VMD_REGISTER_BOOST_VMD_RETURN_ONLY_AFTER (BOOST_VMD_RETURN_ONLY_AFTER)
#define BOOST_VMD_REGISTER_BOOST_VMD_RETURN_INDEX (BOOST_VMD_RETURN_INDEX)
#define BOOST_VMD_REGISTER_BOOST_VMD_RETURN_NO_INDEX (BOOST_VMD_RETURN_NO_INDEX)

#define BOOST_VMD_DETECT_BOOST_VMD_RETURN_TYPE_BOOST_VMD_RETURN_TYPE
#define BOOST_VMD_DETECT_BOOST_VMD_RETURN_NO_TYPE_BOOST_VMD_RETURN_NO_TYPE
#define BOOST_VMD_DETECT_BOOST_VMD_RETURN_AFTER_BOOST_VMD_RETURN_AFTER
#define BOOST_VMD_DETECT_BOOST_VMD_RETURN_NO_AFTER_BOOST_VMD_RETURN_NO_AFTER
#define BOOST_VMD_DETECT_BOOST_VMD_RETURN_ONLY_AFTER_BOOST_VMD_RETURN_ONLY_AFTER
#define BOOST_VMD_DETECT_BOOST_VMD_RETURN_INDEX_BOOST_VMD_RETURN_INDEX
#define BOOST_VMD_DETECT_BOOST_VMD_RETURN_NO_INDEX_BOOST_VMD_RETURN_NO_INDEX

#define BOOST_VMD_REGISTER_BOOST_VMD_ALLOW_ALL  (BOOST_VMD_ALLOW_ALL)
#define BOOST_VMD_REGISTER_BOOST_VMD_ALLOW_RETURN  (BOOST_VMD_ALLOW_RETURN)
#define BOOST_VMD_REGISTER_BOOST_VMD_ALLOW_AFTER  (BOOST_VMD_ALLOW_AFTER)
#define BOOST_VMD_REGISTER_BOOST_VMD_ALLOW_INDEX  (BOOST_VMD_ALLOW_INDEX)

#define BOOST_VMD_DETECT_BOOST_VMD_ALLOW_ALL_BOOST_VMD_ALLOW_ALL
#define BOOST_VMD_DETECT_BOOST_VMD_ALLOW_RETURN_BOOST_VMD_ALLOW_RETURN
#define BOOST_VMD_DETECT_BOOST_VMD_ALLOW_AFTER_BOOST_VMD_ALLOW_AFTER
#define BOOST_VMD_DETECT_BOOST_VMD_ALLOW_INDEX_BOOST_VMD_ALLOW_INDEX

#define BOOST_VMD_DETAIL_IS_PARSE_ONLY_TUPLE(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_PARSE_ONLY_TUPLE) \
/**/

#define BOOST_VMD_DETAIL_IS_PARSE_ARRAY(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_PARSE_ARRAY) \
/**/

#define BOOST_VMD_DETAIL_IS_PARSE_LIST(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_PARSE_LIST) \
/**/

#define BOOST_VMD_DETAIL_IS_RETURN_TYPE(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_RETURN_TYPE) \
/**/

#define BOOST_VMD_DETAIL_IS_RETURN_NO_TYPE(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_RETURN_NO_TYPE) \
/**/

#define BOOST_VMD_DETAIL_IS_RETURN_AFTER(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_RETURN_AFTER) \
/**/

#define BOOST_VMD_DETAIL_IS_RETURN_ONLY_AFTER(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_RETURN_ONLY_AFTER) \
/**/

#define BOOST_VMD_DETAIL_IS_RETURN_NO_AFTER(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_RETURN_NO_AFTER) \
/**/

#define BOOST_VMD_DETAIL_IS_RETURN_INDEX(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_RETURN_INDEX) \
/**/

#define BOOST_VMD_DETAIL_IS_RETURN_NO_INDEX(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_RETURN_NO_INDEX) \
/**/

#define BOOST_VMD_DETAIL_IS_ALLOW_ALL(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_ALLOW_ALL) \
/**/

#define BOOST_VMD_DETAIL_IS_ALLOW_RETURN(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_ALLOW_RETURN) \
/**/

#define BOOST_VMD_DETAIL_IS_ALLOW_AFTER(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_ALLOW_AFTER) \
/**/

#define BOOST_VMD_DETAIL_IS_ALLOW_INDEX(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_ALLOW_INDEX) \
/**/

#endif /* BOOST_VMD_DETAIL_MODIFIERS_HPP */
