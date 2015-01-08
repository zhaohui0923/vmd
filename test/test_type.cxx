#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/generic/get_type.hpp>
#include <boost/vmd/type/type_equal.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define BOOST_VMD_REGISTER_ggh (ggh)
  #define BOOST_VMD_DETECT_ggh_ggh
  #define BOOST_VMD_REGISTER_dvd (dvd)
  #define BOOST_VMD_DETECT_dvd_dvd
  
  #define ANIDENTIFIER ggh
  #define ANIDENTIFIER2 dvd
  #define ANUMBER 249
  #define ANUMBER2 17
  #define ASEQ (25)(26)(27)
  #define ATUPLE (0,1,2,3,((a,b))((c,d))((e))((f,g,h)))
  #define ALIST (0,(1,(2,(3,BOOST_PP_NIL))))
  #define ANARRAY (3,(a,b,38))
  #define ASEQUENCE ANUMBER ALIST ATUPLE ANIDENTIFIER ANARRAY ASEQ
  #define ASEQUENCE2 ANIDENTIFIER2 ASEQ ALIST ANUMBER ATUPLE
  #define ASEQUENCE3 ASEQ ANUMBER2 ATUPLE
  #define ASEQUENCE4
  
  BOOST_TEST(BOOST_VMD_TYPE_EQUAL(BOOST_VMD_GET_TYPE(ANIDENTIFIER),BOOST_VMD_TYPE_IDENTIFIER));
  BOOST_TEST(BOOST_VMD_TYPE_EQUAL(BOOST_VMD_GET_TYPE(ANUMBER),BOOST_VMD_TYPE_NUMBER));
  BOOST_TEST(BOOST_VMD_TYPE_EQUAL(BOOST_VMD_GET_TYPE(ASEQ),BOOST_VMD_TYPE_SEQ));
  BOOST_TEST(BOOST_VMD_TYPE_EQUAL(BOOST_VMD_GET_TYPE(ATUPLE),BOOST_VMD_TYPE_TUPLE));
  BOOST_TEST(BOOST_VMD_TYPE_EQUAL(BOOST_VMD_GET_TYPE(ALIST),BOOST_VMD_TYPE_LIST));
  BOOST_TEST(BOOST_VMD_TYPE_EQUAL(BOOST_VMD_GET_TYPE(ANARRAY),BOOST_VMD_TYPE_ARRAY));
  BOOST_TEST(BOOST_VMD_TYPE_EQUAL(BOOST_VMD_GET_TYPE(ASEQUENCE),BOOST_VMD_TYPE_VSEQUENCE));
  BOOST_TEST(BOOST_VMD_TYPE_EQUAL(BOOST_VMD_GET_TYPE(ASEQUENCE4),BOOST_VMD_TYPE_EMPTY));
  
#endif

  return boost::report_errors();
  
  }
