/*
 * Code for class WEL_UDM_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1046_10063(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10064(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10065(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10066(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10067(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10068(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10069(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10070(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10071(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10072(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10073(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10074(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10075(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1046_10076(EIF_REFERENCE);
extern void EIF_Minit1046(void);

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

/* {WEL_UDM_CONSTANTS}.udm_getaccel */
EIF_TYPED_VALUE F1046_10063 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getaccel";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16005);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16005);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETACCEL;
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

/* {WEL_UDM_CONSTANTS}.udm_getbase */
EIF_TYPED_VALUE F1046_10064 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getbase";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16006);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16006);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETBASE;
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

/* {WEL_UDM_CONSTANTS}.udm_getbuddy */
EIF_TYPED_VALUE F1046_10065 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getbuddy";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16007);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16007);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETBUDDY;
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

/* {WEL_UDM_CONSTANTS}.udm_getpos */
EIF_TYPED_VALUE F1046_10066 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getpos";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16008);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16008);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETPOS;
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

/* {WEL_UDM_CONSTANTS}.udm_getrange */
EIF_TYPED_VALUE F1046_10067 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getrange";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16009);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16009);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETRANGE;
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

/* {WEL_UDM_CONSTANTS}.udm_getrange32 */
EIF_TYPED_VALUE F1046_10068 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_getrange32";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16010);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16010);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_GETRANGE32;
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

/* {WEL_UDM_CONSTANTS}.udm_setaccel */
EIF_TYPED_VALUE F1046_10069 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setaccel";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16011);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16011);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETACCEL;
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

/* {WEL_UDM_CONSTANTS}.udm_setbase */
EIF_TYPED_VALUE F1046_10070 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setbase";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16012);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16012);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETBASE;
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

/* {WEL_UDM_CONSTANTS}.udm_setbuddy */
EIF_TYPED_VALUE F1046_10071 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setbuddy";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16013);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16013);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETBUDDY;
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

/* {WEL_UDM_CONSTANTS}.udm_setpos */
EIF_TYPED_VALUE F1046_10072 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setpos";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16014);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16014);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETPOS;
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

/* {WEL_UDM_CONSTANTS}.udm_setrange */
EIF_TYPED_VALUE F1046_10073 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udm_setrange";
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
	
	RTEAA(l_feature_name, 1045, Current, 0, 0, 16015);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1045, Current, 16015);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDM_SETRANGE;
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

/* {WEL_UDM_CONSTANTS}.udm_setrange32 */
EIF_TYPED_VALUE F1046_10074 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1135L);
	return r;
}

/* {WEL_UDM_CONSTANTS}.udm_getpos32 */
EIF_TYPED_VALUE F1046_10075 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1138L);
	return r;
}

/* {WEL_UDM_CONSTANTS}.udm_setpos32 */
EIF_TYPED_VALUE F1046_10076 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1137L);
	return r;
}

void EIF_Minit1046 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
