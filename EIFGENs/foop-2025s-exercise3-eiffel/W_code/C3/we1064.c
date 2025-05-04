/*
 * Code for class WEL_TTN_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1064_10249(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1064_10250(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1064_10251(EIF_REFERENCE);
extern void EIF_Minit1064(void);

#ifdef __cplusplus
}
#endif

#include "cctrl.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TTN_CONSTANTS}.ttn_needtext */
EIF_TYPED_VALUE F1064_10249 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ttn_needtext";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1063, Current, 0, 0, 16189);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1063, Current, 16189);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TTN_NEEDTEXT;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TTN_CONSTANTS}.ttn_pop */
EIF_TYPED_VALUE F1064_10250 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ttn_pop";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1063, Current, 0, 0, 16190);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1063, Current, 16190);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TTN_POP;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TTN_CONSTANTS}.ttn_show */
EIF_TYPED_VALUE F1064_10251 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ttn_show";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1063, Current, 0, 0, 16191);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1063, Current, 16191);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TTN_SHOW;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit1064 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
