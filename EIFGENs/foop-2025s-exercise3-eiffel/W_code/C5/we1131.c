/*
 * Code for class WEL_TPM_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1131_11245(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1131_11246(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1131_11247(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1131_11248(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1131_11249(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1131_11250(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1131_11251(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1131_11252(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1131_11253(EIF_REFERENCE);
extern void EIF_Minit1131(void);

#ifdef __cplusplus
}
#endif

#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TPM_CONSTANTS}.tpm_leftbutton */
EIF_TYPED_VALUE F1131_11245 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_leftbutton";
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
	
	RTEAA(l_feature_name, 1130, Current, 0, 0, 17185);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1130, Current, 17185);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_LEFTBUTTON;
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

/* {WEL_TPM_CONSTANTS}.tpm_rightbutton */
EIF_TYPED_VALUE F1131_11246 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_rightbutton";
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
	
	RTEAA(l_feature_name, 1130, Current, 0, 0, 17186);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1130, Current, 17186);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_RIGHTBUTTON;
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

/* {WEL_TPM_CONSTANTS}.tpm_leftalign */
EIF_TYPED_VALUE F1131_11247 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_leftalign";
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
	
	RTEAA(l_feature_name, 1130, Current, 0, 0, 17187);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1130, Current, 17187);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_LEFTALIGN;
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

/* {WEL_TPM_CONSTANTS}.tpm_centeralign */
EIF_TYPED_VALUE F1131_11248 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_centeralign";
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
	
	RTEAA(l_feature_name, 1130, Current, 0, 0, 17188);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1130, Current, 17188);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_CENTERALIGN;
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

/* {WEL_TPM_CONSTANTS}.tpm_rightalign */
EIF_TYPED_VALUE F1131_11249 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_rightalign";
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
	
	RTEAA(l_feature_name, 1130, Current, 0, 0, 17189);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1130, Current, 17189);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_RIGHTALIGN;
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

/* {WEL_TPM_CONSTANTS}.tpm_bottomalign */
EIF_TYPED_VALUE F1131_11250 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_bottomalign";
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
	
	RTEAA(l_feature_name, 1130, Current, 0, 0, 17190);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1130, Current, 17190);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_BOTTOMALIGN;
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

/* {WEL_TPM_CONSTANTS}.tpm_topalign */
EIF_TYPED_VALUE F1131_11251 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_topalign";
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
	
	RTEAA(l_feature_name, 1130, Current, 0, 0, 17191);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1130, Current, 17191);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_TOPALIGN;
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

/* {WEL_TPM_CONSTANTS}.tpm_vcenteralign */
EIF_TYPED_VALUE F1131_11252 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_vcenteralign";
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
	
	RTEAA(l_feature_name, 1130, Current, 0, 0, 17192);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1130, Current, 17192);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_VCENTERALIGN;
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

/* {WEL_TPM_CONSTANTS}.tpm_returncmd */
EIF_TYPED_VALUE F1131_11253 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_returncmd";
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
	
	RTEAA(l_feature_name, 1130, Current, 0, 0, 17184);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1130, Current, 17184);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_RETURNCMD;
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

void EIF_Minit1131 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
