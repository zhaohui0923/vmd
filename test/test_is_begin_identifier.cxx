#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/identifier.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/list/at.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

	#define A_TUPLE (*,#,zzz ())
	#define JDATA somevalue
	#define A_SEQ (num (split) clear)($)(#)
	#define A_SEQ_2 (num 236 (split) clear)($)(#)
	#define A_LIST (eeb (5),(grist,(&,BOOST_PP_NIL)))
	#define A_LIST_2 (eeb (5),(grist 138,(&,BOOST_PP_NIL)))
	
    #define BOOST_VMD_REGISTER_zzz (zzz)
    #define BOOST_VMD_DETECT_zzz_zzz
    #define BOOST_VMD_REGISTER_somevalue (somevalue)
    #define BOOST_VMD_DETECT_somevalue_somevalue
    #define BOOST_VMD_REGISTER_num (num)
    #define BOOST_VMD_DETECT_num_num
    #define BOOST_VMD_REGISTER_eeb (eeb)
    #define BOOST_VMD_DETECT_eeb_eeb
    #define BOOST_VMD_REGISTER_grist (grist)
    #define BOOST_VMD_DETECT_grist_grist
  
	BOOST_TEST(BOOST_VMD_IS_BEGIN_IDENTIFIER(BOOST_PP_TUPLE_ELEM(2,A_TUPLE),zzz));
	BOOST_TEST(BOOST_VMD_IS_BEGIN_IDENTIFIER(JDATA,somevalue));
	BOOST_TEST(BOOST_VMD_IS_BEGIN_IDENTIFIER(BOOST_PP_SEQ_ELEM(0,A_SEQ),num));
	BOOST_TEST(BOOST_VMD_IS_BEGIN_IDENTIFIER(BOOST_PP_LIST_AT(A_LIST,0),eeb));
	BOOST_TEST(BOOST_VMD_IS_BEGIN_IDENTIFIER(BOOST_PP_LIST_AT(A_LIST,1),grist));
	BOOST_TEST(!BOOST_VMD_IS_BEGIN_IDENTIFIER(JDATA,een));
	BOOST_TEST(!BOOST_VMD_IS_BEGIN_IDENTIFIER(BOOST_PP_LIST_AT(A_LIST,1),eeb));
	BOOST_TEST(BOOST_VMD_IS_BEGIN_IDENTIFIER(BOOST_PP_SEQ_ELEM(0,A_SEQ),(babble,num,whatever)));
  
	BOOST_TEST(BOOST_VMD_IS_BEGIN_IDENTIFIER(BOOST_PP_SEQ_ELEM(0,A_SEQ_2),num));
	BOOST_TEST(BOOST_VMD_IS_BEGIN_IDENTIFIER(BOOST_PP_LIST_AT(A_LIST_2,1),grist));

#endif

  return boost::report_errors();
  
  }
