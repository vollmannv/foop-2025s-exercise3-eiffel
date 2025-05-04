/*
 * Code for class WEL_GDIP_SMOOTHING_MODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F999_9119(EIF_REFERENCE);
extern EIF_TYPED_VALUE F999_9120(EIF_REFERENCE);
extern EIF_TYPED_VALUE F999_9121(EIF_REFERENCE);
extern EIF_TYPED_VALUE F999_9122(EIF_REFERENCE);
extern EIF_TYPED_VALUE F999_9123(EIF_REFERENCE);
extern EIF_TYPED_VALUE F999_9124(EIF_REFERENCE);
extern EIF_TYPED_VALUE F999_9125(EIF_REFERENCE);
extern EIF_TYPED_VALUE F999_9126(EIF_REFERENCE);
extern EIF_TYPED_VALUE F999_9127(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit999(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_SMOOTHING_MODE}.smoothing_mode_invalid */
EIF_TYPED_VALUE F999_9119 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	return r;
}

/* {WEL_GDIP_SMOOTHING_MODE}.smoothing_mode_default */
EIF_TYPED_VALUE F999_9120 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {WEL_GDIP_SMOOTHING_MODE}.smoothing_mode_high_speed */
EIF_TYPED_VALUE F999_9121 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {WEL_GDIP_SMOOTHING_MODE}.smoothing_mode_high_quality */
EIF_TYPED_VALUE F999_9122 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {WEL_GDIP_SMOOTHING_MODE}.smoothing_mode_none */
EIF_TYPED_VALUE F999_9123 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {WEL_GDIP_SMOOTHING_MODE}.smoothing_mode_anti_alias */
EIF_TYPED_VALUE F999_9124 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {WEL_GDIP_SMOOTHING_MODE}.smoothing_mode_anti_alias_8x4 */
EIF_TYPED_VALUE F999_9125 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {WEL_GDIP_SMOOTHING_MODE}.smoothing_mode_anti_alias_8x8 */
EIF_TYPED_VALUE F999_9126 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {WEL_GDIP_SMOOTHING_MODE}.is_valid */
EIF_TYPED_VALUE F999_9127 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 998, Current, 0, 1, 15065);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(998, Current, 15065);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case -1L:
		case 0L:
		case 1L:
		case 2L:
		case 3L:
		case 4L:
		case 5L:
			RTHOOK(2);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 7L);
		{
			static EIF_TYPE_INDEX typarr0[] = {336,222,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
			RT_SPECIAL_COUNT(tr2) = 7L;
			memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
		}
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6906, dtype))(Current)).it_i4);
		*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6907, dtype))(Current)).it_i4);
		*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6908, dtype))(Current)).it_i4);
		*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6909, dtype))(Current)).it_i4);
		*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6910, dtype))(Current)).it_i4);
		*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6911, dtype))(Current)).it_i4);
		*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6913, dtype))(Current)).it_i4);
		*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ti4_1;
		tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2557, Dtype(tr2)))(tr2).it_r;
		ui4_2 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2195, "has", tr1))(tr1, ui4_2x)).it_b);
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef arg1
}

void EIF_Minit999 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
