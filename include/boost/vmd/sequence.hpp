#if !defined(BOOST_VMD_SEQUENCE_HPP)
#define BOOST_VMD_SEQUENCE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/sequence.hpp>

// SEQUENCE

#define BOOST_VMD_SEQUENCE(elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_SPLIT(vseq,elem) \
/**/

#define BOOST_VMD_SEQUENCE_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_SPLIT_D(d,vseq,elem) \
/**/

// DATA

#define BOOST_VMD_DATA(elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_ELEM_SPLIT(vseq,elem) \
/**/

#define BOOST_VMD_DATA_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_ELEM_SPLIT_D(d,vseq,elem) \
/**/

// ELEM

#define BOOST_VMD_ELEM(elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM(vseq,elem) \
/**/

#define BOOST_VMD_ELEM_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_D(d,vseq,elem) \
/**/

// ELEM_DATA

#define BOOST_VMD_DATA_ELEM(elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_ELEM(vseq,elem) \
/**/

#define BOOST_VMD_DATA_ELEM_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_ELEM_D(d,vseq,elem) \
/**/

// AFTER

#define BOOST_VMD_AFTER(elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_AFTER(vseq,elem) \
/**/

#define BOOST_VMD_AFTER_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_AFTER_D(d,vseq,elem) \
/**/

// SIZE

#define BOOST_VMD_SIZE(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_SIZE(vseq) \
/**/

#define BOOST_VMD_SIZE_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_SIZE_D(d,vseq) \
/**/

// TO_ARRAY

#define BOOST_VMD_TO_ARRAY(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_ARRAY(vseq) \
/**/

#define BOOST_VMD_TO_ARRAY_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_ARRAY_D(d,vseq) \
/**/

// TO_ARRAY_DATA

#define BOOST_VMD_DATA_TO_ARRAY(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_ARRAY(vseq) \
/**/

#define BOOST_VMD_DATA_TO_ARRAY_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_ARRAY_D(d,vseq) \
/**/

// TO_LIST

#define BOOST_VMD_TO_LIST(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_LIST(vseq) \
/**/

#define BOOST_VMD_TO_LIST_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_LIST_D(d,vseq) \
/**/

// TO_LIST_DATA

#define BOOST_VMD_DATA_TO_LIST(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_LIST(vseq) \
/**/

#define BOOST_VMD_DATA_TO_LIST_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_LIST_D(d,vseq) \
/**/

// TO_SEQ

#define BOOST_VMD_TO_SEQ(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_SEQ(vseq) \
/**/

#define BOOST_VMD_TO_SEQ_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_SEQ_D(d,vseq) \
/**/

// TO_SEQ_DATA

#define BOOST_VMD_DATA_TO_SEQ(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_SEQ(vseq) \
/**/

#define BOOST_VMD_DATA_TO_SEQ_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_SEQ_D(d,vseq) \
/**/

// TO_TUPLE

#define BOOST_VMD_TO_TUPLE(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_TUPLE(vseq) \
/**/

#define BOOST_VMD_TO_TUPLE_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_TUPLE_D(d,vseq) \
/**/

// TO_TUPLE_DATA

#define BOOST_VMD_DATA_TO_TUPLE(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_TUPLE(vseq) \
/**/

#define BOOST_VMD_DATA_TO_TUPLE_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_TUPLE_D(d,vseq) \
/**/

// ENUM

#define BOOST_VMD_ENUM(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_ENUM(vseq) \
/**/

#define BOOST_VMD_ENUM_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_ENUM_D(d,vseq) \
/**/

// ENUM_DATA

#define BOOST_VMD_DATA_ENUM(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_ENUM(vseq) \
/**/

#define BOOST_VMD_DATA_ENUM_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_ENUM_D(d,vseq) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_SEQUENCE_HPP */
