/*
 * Code for class EV_COLOR_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1525_17644(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1525_17645(EIF_REFERENCE);
static EIF_TYPED_VALUE F1525_17646_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1525_17646(EIF_REFERENCE);
extern void EIF_Minit1525(void);

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

/* {EV_COLOR_I}.set_with_other */
void F1525_17644 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_with_other";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1524, Current, 0, 1, 23801);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1524, Current, 23801);
	RTCC(arg1, 1524, l_feature_name, 1, eif_new_type(1427, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13944, "red", arg1))(arg1)).it_r4);
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14799, dtype))(Current, ur4_1x);
	RTHOOK(2);
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13945, "green", arg1))(arg1)).it_r4);
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14800, dtype))(Current, ur4_1x);
	RTHOOK(3);
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13946, "blue", arg1))(arg1)).it_r4);
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14801, dtype))(Current, ur4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur4_1
#undef arg1
}

/* {EV_COLOR_I}.default_name */
RTOID (F1525_17645)


EIF_TYPED_VALUE F1525_17645 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1525_17645,23803,RTMS32_EX_H("n\000\000\000o\000\000\000n\000\000\000a\000\000\000m\000\000\000e\000\000\000",6,2069000037));
}

/* {EV_COLOR_I}.interface */
static EIF_TYPED_VALUE F1525_17646_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1524, Current, 0, 0, 23803);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1524, Current, 23803);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1525_17646 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(14729,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(14729, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1525_17646_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(14729,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1525 (void)
{
	GTCX
	RTOTS (17645,F1525_17645)
}


#ifdef __cplusplus
}
#endif
