/*
 * Code for class EV_FONT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1661_19592(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19593(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19594(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19595(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19596(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19597(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19598(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19599(EIF_REFERENCE);
extern void F1661_19600(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19601(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19602(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19603(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19604(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19605(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1661_19606(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19607(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19608(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19609(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19610(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19611(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19612(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1661_19613(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1661_19614(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1661_19615(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19616(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19617(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19618(EIF_REFERENCE);
extern void F1661_19619(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1661_19620(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19621(EIF_REFERENCE);
extern void F1661_19622(EIF_REFERENCE);
extern void F1661_19623(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19624(EIF_REFERENCE);
extern void F1661_19625(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19626(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19627(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19628(EIF_REFERENCE);
extern void F1661_19629(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1661_19630(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1661_19631(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19632(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19633(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19634(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1661_19635(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1661_19636(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1661_19637(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1661_19638(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1661_19639(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19640(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19641(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19642(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19643(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19644(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19645(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19646(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_19647(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1661_23302(EIF_REFERENCE, int);
extern void EIF_Minit1661(void);
extern EIF_REFERENCE _A1661_192_2();

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_FONT_IMP}.old_make */
void F1661_19592 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "old_make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25299);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25299);
	RTCC(arg1, 1660, l_feature_name, 1, RTWCT(14729, dtype, Dftype(Current)), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_interface_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14722, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("interface_assigned", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14729, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("base_make_called", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14739, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.make */
void F1661_19593 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25300);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25300);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16355, 0xF800067D, 0); /* wel_font */
	tr1 = RTLNSMART(RTWCT(16355, dtype, dftype).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16358, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16386, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(16355, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 16361, 0xF80000F2, 0); /* internal_face_name */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16358, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12630, "face_name", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = RTCCL(tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(16361, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 14864, 0xF800070C, 0); /* preferred_families */
	tr1 = RTLNSMART(RTWCT(14864, dtype, dftype).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(14864, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11184, "internal_add_actions", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,190,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {336,222,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 1L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2557, Dtype(tr4)))(tr4).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,258,0xFF01,0xFFF9,1,190,0xFF01,242,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1661_192_2, (EIF_POINTER)(0),14884, tr3, 0, 1, -1, tr1, 1);
	}
	ur1 = RTCCL(tr5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2208, "extend", tr2))(tr2, ur1x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11185, "internal_remove_actions", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11184, "internal_add_actions", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2664, "first", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2208, "extend", tr2))(tr2, ur1x);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 16382, 0x10000000, 1); /* shape */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16358, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12620, "italic", tr1))(tr1)).it_b);
	ub1 = tb1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16370, dtype))(Current, ub1x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16382, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 16383, 0x10000000, 1); /* weight */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16358, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12619, "weight", tr1))(tr1)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16369, dtype))(Current, ui4_1x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16383, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 16384, 0x10000000, 1); /* family */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11055, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16384, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16358, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16363, dtype))(Current, ur1x);
	RTHOOK(10);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14742, dtype))(Current, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("is_initialized", EX_POST);
		ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14732, dtype))(Current)).it_i1);
		ui1_1 = ti1_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14738, dtype))(Current, ui1_1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui1_1
#undef ub1
}

/* {EV_FONT_IMP}.family */
EIF_TYPED_VALUE F1661_19594 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16384,Dtype(Current)));
	return r;
}


/* {EV_FONT_IMP}.char_set */
EIF_TYPED_VALUE F1661_19595 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "char_set";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25302);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25302);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16390, "log_font", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12623, "char_set", tr2))(tr2)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
}

/* {EV_FONT_IMP}.weight */
EIF_TYPED_VALUE F1661_19596 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16383,Dtype(Current)));
	return r;
}


/* {EV_FONT_IMP}.shape */
EIF_TYPED_VALUE F1661_19597 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16382,Dtype(Current)));
	return r;
}


/* {EV_FONT_IMP}.height */
EIF_TYPED_VALUE F1661_19598 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "height";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25248);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25248);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16392, "height", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {EV_FONT_IMP}.height_in_points */
EIF_TYPED_VALUE F1661_19599 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "height_in_points";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25249);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25249);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16393, "point", tr1))(tr1)).it_i4);
	ti4_2 = eif_abs_int32 (ti4_1);
	Result = (EIF_INTEGER_32) ti4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {EV_FONT_IMP}.set_family */
void F1661_19600 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_family";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25250);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25250);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_family_valid", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11066, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12613, "update_by_font", tr1))(tr1, ur1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 16384, 0x10000000, 1); /* family */
	*(EIF_INTEGER_32 *)(Current + RTWA(16384, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(14883, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("family_assigned", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16384, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_FONT_IMP}.set_weight */
void F1661_19601 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_weight";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25251);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25251);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_weight_valid", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11067, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12613, "update_by_font", tr1))(tr1, ur1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 16383, 0x10000000, 1); /* weight */
	*(EIF_INTEGER_32 *)(Current + RTWA(16383, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16383, dtype));
	switch (ti4_1) {
		case 6L:
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			ui4_1 = ((EIF_INTEGER_32) 100L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12659, "set_weight", tr1))(tr1, ui4_1x);
			break;
		case 7L:
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			ui4_1 = ((EIF_INTEGER_32) 400L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12659, "set_weight", tr1))(tr1, ui4_1x);
			break;
		case 8L:
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			ui4_1 = ((EIF_INTEGER_32) 700L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12659, "set_weight", tr1))(tr1, ui4_1x);
			break;
		case 9L:
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ui4_1 = ((EIF_INTEGER_32) 900L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12659, "set_weight", tr1))(tr1, ui4_1x);
			break;
		default:
			if (RTAL & CK_CHECK) {
				RTHOOK(9);
				RTCT("impossible", EX_CHECK);
					RTCF;
			}
			break;
	}
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(10,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16389, "set_indirect", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("weight_assigned", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16383, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_FONT_IMP}.set_shape */
void F1661_19602 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_shape";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25252);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25252);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_shape_valid", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11068, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12613, "update_by_font", tr1))(tr1, ur1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 16382, 0x10000000, 1); /* shape */
	*(EIF_INTEGER_32 *)(Current + RTWA(16382, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16382, dtype));
	switch (ti4_1) {
		case 10L:
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12661, "set_not_italic", tr1))(tr1);
			break;
		case 11L:
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12660, "set_italic", tr1))(tr1);
			break;
		default:
			if (RTAL & CK_CHECK) {
				RTHOOK(7);
				RTCT("impossible", EX_CHECK);
					RTCF;
			}
			break;
	}
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(8,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16389, "set_indirect", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("shape_assigned", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16382, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_FONT_IMP}.set_height */
void F1661_19603 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_height";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25253);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25253);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_height_bigger_than_zero", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16387, "set_height", tr1))(tr1, ui4_1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12613, "update_by_font", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("height_assigned", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14861, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_FONT_IMP}.set_height_in_points */
void F1661_19604 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_height_in_points";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25254);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25254);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_height_bigger_than_zero", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16388, "set_height_in_points", tr1))(tr1, ui4_1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12613, "update_by_font", tr1))(tr1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("height_assigned", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14862, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_FONT_IMP}.copy_font */
void F1661_19605 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "copy_font";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,loc1);
	RTLR(6,tr2);
	RTLR(7,loc2);
	RTLR(8,loc3);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1660, Current, 4, 1, 25255);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25255);
	RTCC(arg1, 1660, l_feature_name, 1, RTWCT(14729, dtype, Dftype(Current)), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13889, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = RTCCL(tr1);
	loc4 = RTRV(eif_new_type(1660, 0x01),loc4);
	if (EIF_TEST(loc4)) {
		RTHOOK(4);
		RTDBGAL(1, 0xF8000543, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16355, "wel_font", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16390, "log_font", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(5);
		RTDBGAL(2, 0xF800067D, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(1661, 0x01).id);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16386, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(5,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16356, dtype))(Current, ur1x);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3107, "dispose", loc1))(loc1);
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(8);
			RTCT("other_is_font_imp", EX_CHECK);
				RTCF;
		}
	}
	RTHOOK(9);
	RTDBGAL(3, 0xF800070C, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14007, "preferred_families", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (!RTCEQ(tr1, loc3)) {
		RTHOOK(11);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14885, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.name */
EIF_TYPED_VALUE F1661_19606 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "name";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25256);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25256);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000F2, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16361, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {EV_FONT_IMP}.ascent */
EIF_TYPED_VALUE F1661_19607 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ascent";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25257);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25257);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16365, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12296, "ascent", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {EV_FONT_IMP}.descent */
EIF_TYPED_VALUE F1661_19608 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "descent";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25258);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25258);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16365, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12297, "descent", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {EV_FONT_IMP}.width */
EIF_TYPED_VALUE F1661_19609 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "width";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25259);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25259);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16391, "width", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {EV_FONT_IMP}.minimum_width */
EIF_TYPED_VALUE F1661_19610 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "minimum_width";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25260);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25260);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = RTMS_EX_H("l",1,108);
	ur1 = tr2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16394, "string_width", tr1))(tr1, ur1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
}

/* {EV_FONT_IMP}.maximum_width */
EIF_TYPED_VALUE F1661_19611 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "maximum_width";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25261);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25261);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = RTMS_EX_H("W",1,87);
	ur1 = tr2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16394, "string_width", tr1))(tr1, ur1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
}

/* {EV_FONT_IMP}.string_width */
EIF_TYPED_VALUE F1661_19612 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_width";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25262);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25262);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4684, "count", arg1))(arg1)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16394, "string_width", tr1))(tr1, ur1x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.string_size */
EIF_TYPED_VALUE F1661_19613 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_size";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25263);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25263);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80000BE, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16396, "string_size_extended", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(3);
	ti4_1 = eif_integer_32_item(RTCW(Result),4);
	
	eif_put_integer_32_item(RTCW(Result),4,(EIF_INTEGER_32) (((EIF_INTEGER_32) 0L) - ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.string_size_no_offset */
EIF_TYPED_VALUE F1661_19614 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_size_no_offset";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25264);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25264);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000BE, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16397, "string_size", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.horizontal_resolution */
EIF_TYPED_VALUE F1661_19615 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "horizontal_resolution";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25265);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25265);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16365, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12304, "digitized_aspect_x", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {EV_FONT_IMP}.vertical_resolution */
EIF_TYPED_VALUE F1661_19616 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "vertical_resolution";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25266);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25266);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16365, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12305, "digitized_aspect_y", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {EV_FONT_IMP}.is_proportional */
EIF_TYPED_VALUE F1661_19617 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_proportional";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25267);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25267);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(16362, dtype));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_FONT_IMP}.wel_font */
EIF_TYPED_VALUE F1661_19618 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16355,Dtype(Current)));
	return r;
}


/* {EV_FONT_IMP}.set_by_wel_font */
void F1661_19619 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_by_wel_font";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1660, Current, 1, 1, 25269);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25269);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(1661, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16355, 0xF800067D, 0); /* wel_font */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(16355, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000543, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12613, "update_by_font", loc1))(loc1, ur1x);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 16382, 0x10000000, 1); /* shape */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12620, "italic", loc1))(loc1)).it_b);
	ub1 = tb1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16370, dtype))(Current, ub1x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16382, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 16383, 0x10000000, 1); /* weight */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12619, "weight", loc1))(loc1)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16369, dtype))(Current, ui4_1x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16383, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 16384, 0x10000000, 1); /* family */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12628, "family", loc1))(loc1)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12627, "pitch", loc1))(loc1)).it_i4);
	ui4_2 = ti4_2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16368, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16384, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2212, "wipe_out", tr1))(tr1);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 16361, 0xF80000F2, 0); /* internal_face_name */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12630, "face_name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(16361, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(9,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16361, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2208, "extend", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ub1
#undef arg1
}

/* {EV_FONT_IMP}.wel_log_font */
RTOID (F1661_19620)
EIF_TYPED_VALUE F1661_19620 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wel_log_font";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1661_19620);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25270);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25270);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000543, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1347, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11009, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12611, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef Result
}

/* {EV_FONT_IMP}.default_wel_log_font */
RTOID (F1661_19621)
EIF_TYPED_VALUE F1661_19621 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_wel_log_font";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1661_19621);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25271);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25271);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000543, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1347, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11009, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12611, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 16366, 0x10000000, 1); /* wel_screen_font_family */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12628, "family", Result))(Result)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16366, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 16367, 0x10000000, 1); /* wel_screen_font_pitch */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12627, "pitch", Result))(Result)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16367, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef Result
}

/* {EV_FONT_IMP}.destroy */
void F1661_19622 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "destroy";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25272);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25272);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11088, "delete", tr1))(tr1);
	RTHOOK(2);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(14743, dtype))(Current, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_in_destroy_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14741, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_destroyed_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14727, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ub1
}

/* {EV_FONT_IMP}.update_preferred_faces */
void F1661_19623 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_preferred_faces";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25273);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25273);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(242, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12613, "update_by_font", tr1))(tr1, ur1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(14883, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.update_font_face */
void F1661_19624 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "update_font_face";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1660, Current, 6, 0, 25274);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25274);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16384, dtype));
	switch (ti4_1) {
		case 1L:
			RTHOOK(2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(2,1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16366, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12689, "set_family", tr1))(tr1, ui4_1x);
			RTHOOK(3);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16367, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12685, "set_pitch", tr1))(tr1, ui4_1x);
			break;
		case 2L:
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12691, "set_roman_family", tr1))(tr1);
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12688, "set_variable_pitch", tr1))(tr1);
			break;
		case 3L:
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12692, "set_swiss_family", tr1))(tr1);
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12688, "set_variable_pitch", tr1))(tr1);
			break;
		case 4L:
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12694, "set_script_family", tr1))(tr1);
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12687, "set_fixed_pitch", tr1))(tr1);
			break;
		case 5L:
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12693, "set_modern_family", tr1))(tr1);
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12687, "set_fixed_pitch", tr1))(tr1);
			break;
		default:
			if (RTAL & CK_CHECK) {
				RTHOOK(12);
				RTCT("impossible", EX_CHECK);
					RTCF;
			}
			break;
	}
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(13,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2196, "is_empty", tr1))(tr1)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(14,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2279, "start", tr1))(tr1);
		for (;;) {
			RTHOOK(15);
			tb1 = '\01';
			if (!loc2) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(15,1);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2293, "after", tr1))(tr1)).it_b);
				tb1 = tb2;
			}
			if (tb1) break;
			RTHOOK(16);
			RTDBGAL(1, 0xF80000F2, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2245, "item", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(17);
			RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16372, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(17,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11362, "font_faces", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(loc1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2195, "has", tr2))(tr2, ur1x)).it_b);
			loc2 = (EIF_BOOLEAN) tb2;
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14864, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(18,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2295, "forth", tr1))(tr1);
		}
		RTHOOK(19);
		if ((EIF_BOOLEAN) (loc2 && (EIF_BOOLEAN)(loc1 != NULL))) {
			RTHOOK(20);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(20,1);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12697, "set_face_name", tr1))(tr1, ur1x);
			RTHOOK(21);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16372, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(21,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11363, "text_metrics", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc5 = RTCCL(tr2);
			if (EIF_TEST(loc5)) {
				RTHOOK(22);
				ur1 = RTCCL(loc1);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2937, "item", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc6 = RTCCL(tr1);
				if (EIF_TEST(loc6)) {
					RTHOOK(23);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(23,1);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12314, "character_set", loc6))(loc6)).it_i4);
					ui4_1 = ti4_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12666, "set_char_set", tr1))(tr1, ui4_1x);
				}
			}
		} else {
			RTHOOK(24);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(24,1);
			tr2 = RTMS_EX_H("",0,0);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12697, "set_face_name", tr1))(tr1, ur1x);
		}
	} else {
		RTHOOK(25);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,1);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12697, "set_face_name", tr1))(tr1, ur1x);
	}
	RTHOOK(26);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(26,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16389, "set_indirect", tr1))(tr1, ur1x);
	RTHOOK(27);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(27,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12613, "update_by_font", tr1))(tr1, ur1x);
	RTHOOK(28);
	if (loc2) {
		RTHOOK(29);
		RTDBGAL(3, 0xF8000569, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(1385, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(13708, Dtype(tr1)))(tr1);
		RTNHOOK(29,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(30);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13560, "select_font", loc3))(loc3, ur1x);
		RTHOOK(31);
		RTDBGAL(4, 0xF8000534, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(1332, 0x01).id);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12293, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(31,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(32);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(32,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12314, "character_set", loc4))(loc4)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12666, "set_char_set", tr1))(tr1, ui4_1x);
		RTHOOK(33);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(13568, "unselect_all", loc3))(loc3);
		RTHOOK(34);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(13502, "release", loc3))(loc3);
		RTHOOK(35);
		RTDBGAA(Current, dtype, 16355, 0xF800067D, 0); /* wel_font */
		tr1 = RTLNSMART(RTWCT(16355, dtype, dftype).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(16386, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(35,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(16355, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(36);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(36,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12613, "update_by_font", tr1))(tr1, ur1x);
	}
	RTHOOK(37);
	RTDBGAA(Current, dtype, 16361, 0xF80000F2, 0); /* internal_face_name */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(37,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12630, "face_name", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(16361, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(38);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16363, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(39);
		RTCT("name_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(14871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(40);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
}

/* {EV_FONT_IMP}.set_name */
void F1661_19625 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_name";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25275);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25275);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12613, "update_by_font", tr1))(tr1, ur1x);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12697, "set_face_name", tr1))(tr1, ur1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(14883, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.remove_name */
void F1661_19626 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "remove_name";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25276);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25276);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12613, "update_by_font", tr1))(tr1, ur1x);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = RTMS_EX_H("",0,0);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12697, "set_face_name", tr1))(tr1, ur1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(14883, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {EV_FONT_IMP}.internal_face_name */
EIF_TYPED_VALUE F1661_19627 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16361,Dtype(Current)));
	return r;
}


/* {EV_FONT_IMP}.internal_is_proportional */
EIF_TYPED_VALUE F1661_19628 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16362,Dtype(Current)));
	return r;
}


/* {EV_FONT_IMP}.update_internal_is_proportional */
void F1661_19629 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_internal_is_proportional";
	RTEX;
#define arg1 arg1x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25279);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25279);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(1347, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12627, "pitch", arg1))(arg1)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10286, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 16362, 0x04000000, 1); /* internal_is_proportional */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12628, "family", arg1))(arg1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10292, dtype))(Current)).it_i4);
		*(EIF_BOOLEAN *)(Current + RTWA(16362, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) !(EIF_BOOLEAN)(ti4_1 == ti4_2);
	} else {
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12627, "pitch", arg1))(arg1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10287, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 16362, 0x04000000, 1); /* internal_is_proportional */
			*(EIF_BOOLEAN *)(Current + RTWA(16362, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(5);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12627, "pitch", arg1))(arg1)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10288, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				RTHOOK(6);
				RTDBGAA(Current, dtype, 16362, 0x04000000, 1); /* internal_is_proportional */
				*(EIF_BOOLEAN *)(Current + RTWA(16362, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_FONT_IMP}.maximum_line_width */
EIF_TYPED_VALUE F1661_19630 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "maximum_line_width";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc5);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1660, Current, 5, 3, 25280);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25280);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(1384, 0x01), 0x01);
	RTCC(arg2, 1660, l_feature_name, 2, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("efficient", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
	tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\012';
	loc4 = (EIF_NATURAL_32) tu4_1;
	for (;;) {
		RTHOOK(5);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > arg3)) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4684, "count", arg2))(arg2)).it_i4);
			tb1 = (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) > ti4_1);
		}
		if (tb1) break;
		RTHOOK(6);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		uu4_1 = loc4;
		ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4651, "index_of_code", arg2))(arg2, uu4_1x, ui4_1x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			RTDBGAL(5, 0xF80000E9, 0, 0); /* loc5 */
			ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4684, "count", arg2))(arg2)).it_i4);
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4725, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ur1 = RTCCL(loc5);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13523, "string_width", arg1))(arg1, ur1x)).it_i4);
			ui4_1 = ti4_1;
			ti4_2 = eif_max_int32 (Result,ui4_1);
			Result = (EIF_INTEGER_32) ti4_2;
		} else {
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc3 != (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)))) {
				RTHOOK(11);
				RTDBGAL(5, 0xF80000E9, 0, 0); /* loc5 */
				ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				ui4_2 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4725, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc5 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(12);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				ur1 = RTCCL(loc5);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13523, "string_width", arg1))(arg1, ur1x)).it_i4);
				ui4_1 = ti4_1;
				ti4_2 = eif_max_int32 (Result,ui4_1);
				Result = (EIF_INTEGER_32) ti4_2;
				RTHOOK(13);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(14);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			}
		}
		RTHOOK(15);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_FONT_IMP}.text_metrics */
EIF_TYPED_VALUE F1661_19631 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "text_metrics";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1660, Current, 1, 0, 25281);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25281);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800056E, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1390, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(13501, "get", loc1))(loc1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13560, "select_font", loc1))(loc1, ur1x);
	RTHOOK(4);
	RTDBGAL(0, 0xF8000534, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1332, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12293, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(13566, "unselect_font", loc1))(loc1);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(13502, "release", loc1))(loc1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {EV_FONT_IMP}.wel_screen_font_family */
EIF_TYPED_VALUE F1661_19632 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16366,Dtype(Current)));
	return r;
}


/* {EV_FONT_IMP}.wel_screen_font_pitch */
EIF_TYPED_VALUE F1661_19633 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(16367,Dtype(Current)));
	return r;
}


/* {EV_FONT_IMP}.convert_font_family */
EIF_TYPED_VALUE F1661_19634 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "convert_font_family";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 2, 25284);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25284);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16366, dtype));
	if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11055, dtype))(Current)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10290, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11056, dtype))(Current)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(5);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10291, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
				RTHOOK(6);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11057, dtype))(Current)).it_i4);
				Result = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(7);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10292, dtype))(Current)).it_i4);
				if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
					RTHOOK(8);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11059, dtype))(Current)).it_i4);
					Result = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(9);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10293, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
						RTHOOK(10);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11058, dtype))(Current)).it_i4);
						Result = (EIF_INTEGER_32) ti4_1;
					} else {
						RTHOOK(11);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11057, dtype))(Current)).it_i4);
						Result = (EIF_INTEGER_32) ti4_1;
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {EV_FONT_IMP}.convert_font_weight */
EIF_TYPED_VALUE F1661_19635 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "convert_font_weight";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25285);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25285);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
		case 2L:
		case 3L:
		case 4L:
		case 5L:
		case 6L:
		case 7L:
		case 8L:
		case 9L:
		case 10L:
		case 11L:
		case 12L:
		case 13L:
		case 14L:
		case 15L:
		case 16L:
		case 17L:
		case 18L:
		case 19L:
		case 20L:
		case 21L:
		case 22L:
		case 23L:
		case 24L:
		case 25L:
		case 26L:
		case 27L:
		case 28L:
		case 29L:
		case 30L:
		case 31L:
		case 32L:
		case 33L:
		case 34L:
		case 35L:
		case 36L:
		case 37L:
		case 38L:
		case 39L:
		case 40L:
		case 41L:
		case 42L:
		case 43L:
		case 44L:
		case 45L:
		case 46L:
		case 47L:
		case 48L:
		case 49L:
		case 50L:
		case 51L:
		case 52L:
		case 53L:
		case 54L:
		case 55L:
		case 56L:
		case 57L:
		case 58L:
		case 59L:
		case 60L:
		case 61L:
		case 62L:
		case 63L:
		case 64L:
		case 65L:
		case 66L:
		case 67L:
		case 68L:
		case 69L:
		case 70L:
		case 71L:
		case 72L:
		case 73L:
		case 74L:
		case 75L:
		case 76L:
		case 77L:
		case 78L:
		case 79L:
		case 80L:
		case 81L:
		case 82L:
		case 83L:
		case 84L:
		case 85L:
		case 86L:
		case 87L:
		case 88L:
		case 89L:
		case 90L:
		case 91L:
		case 92L:
		case 93L:
		case 94L:
		case 95L:
		case 96L:
		case 97L:
		case 98L:
		case 99L:
		case 100L:
		case 101L:
		case 102L:
		case 103L:
		case 104L:
		case 105L:
		case 106L:
		case 107L:
		case 108L:
		case 109L:
		case 110L:
		case 111L:
		case 112L:
		case 113L:
		case 114L:
		case 115L:
		case 116L:
		case 117L:
		case 118L:
		case 119L:
		case 120L:
		case 121L:
		case 122L:
		case 123L:
		case 124L:
		case 125L:
		case 126L:
		case 127L:
		case 128L:
		case 129L:
		case 130L:
		case 131L:
		case 132L:
		case 133L:
		case 134L:
		case 135L:
		case 136L:
		case 137L:
		case 138L:
		case 139L:
		case 140L:
		case 141L:
		case 142L:
		case 143L:
		case 144L:
		case 145L:
		case 146L:
		case 147L:
		case 148L:
		case 149L:
		case 150L:
		case 151L:
		case 152L:
		case 153L:
		case 154L:
		case 155L:
		case 156L:
		case 157L:
		case 158L:
		case 159L:
		case 160L:
		case 161L:
		case 162L:
		case 163L:
		case 164L:
		case 165L:
		case 166L:
		case 167L:
		case 168L:
		case 169L:
		case 170L:
		case 171L:
		case 172L:
		case 173L:
		case 174L:
		case 175L:
		case 176L:
		case 177L:
		case 178L:
		case 179L:
		case 180L:
		case 181L:
		case 182L:
		case 183L:
		case 184L:
		case 185L:
		case 186L:
		case 187L:
		case 188L:
		case 189L:
		case 190L:
		case 191L:
		case 192L:
		case 193L:
		case 194L:
		case 195L:
		case 196L:
		case 197L:
		case 198L:
		case 199L:
		case 200L:
		case 201L:
		case 202L:
		case 203L:
		case 204L:
		case 205L:
		case 206L:
		case 207L:
		case 208L:
		case 209L:
		case 210L:
		case 211L:
		case 212L:
		case 213L:
		case 214L:
		case 215L:
		case 216L:
		case 217L:
		case 218L:
		case 219L:
		case 220L:
		case 221L:
		case 222L:
		case 223L:
		case 224L:
		case 225L:
		case 226L:
		case 227L:
		case 228L:
		case 229L:
		case 230L:
		case 231L:
		case 232L:
		case 233L:
		case 234L:
		case 235L:
		case 236L:
		case 237L:
		case 238L:
		case 239L:
		case 240L:
		case 241L:
		case 242L:
		case 243L:
		case 244L:
		case 245L:
		case 246L:
		case 247L:
		case 248L:
		case 249L:
			RTHOOK(2);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11060, dtype))(Current)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
			break;
		case 250L:
		case 251L:
		case 252L:
		case 253L:
		case 254L:
		case 255L:
		case 256L:
		case 257L:
		case 258L:
		case 259L:
		case 260L:
		case 261L:
		case 262L:
		case 263L:
		case 264L:
		case 265L:
		case 266L:
		case 267L:
		case 268L:
		case 269L:
		case 270L:
		case 271L:
		case 272L:
		case 273L:
		case 274L:
		case 275L:
		case 276L:
		case 277L:
		case 278L:
		case 279L:
		case 280L:
		case 281L:
		case 282L:
		case 283L:
		case 284L:
		case 285L:
		case 286L:
		case 287L:
		case 288L:
		case 289L:
		case 290L:
		case 291L:
		case 292L:
		case 293L:
		case 294L:
		case 295L:
		case 296L:
		case 297L:
		case 298L:
		case 299L:
		case 300L:
		case 301L:
		case 302L:
		case 303L:
		case 304L:
		case 305L:
		case 306L:
		case 307L:
		case 308L:
		case 309L:
		case 310L:
		case 311L:
		case 312L:
		case 313L:
		case 314L:
		case 315L:
		case 316L:
		case 317L:
		case 318L:
		case 319L:
		case 320L:
		case 321L:
		case 322L:
		case 323L:
		case 324L:
		case 325L:
		case 326L:
		case 327L:
		case 328L:
		case 329L:
		case 330L:
		case 331L:
		case 332L:
		case 333L:
		case 334L:
		case 335L:
		case 336L:
		case 337L:
		case 338L:
		case 339L:
		case 340L:
		case 341L:
		case 342L:
		case 343L:
		case 344L:
		case 345L:
		case 346L:
		case 347L:
		case 348L:
		case 349L:
		case 350L:
		case 351L:
		case 352L:
		case 353L:
		case 354L:
		case 355L:
		case 356L:
		case 357L:
		case 358L:
		case 359L:
		case 360L:
		case 361L:
		case 362L:
		case 363L:
		case 364L:
		case 365L:
		case 366L:
		case 367L:
		case 368L:
		case 369L:
		case 370L:
		case 371L:
		case 372L:
		case 373L:
		case 374L:
		case 375L:
		case 376L:
		case 377L:
		case 378L:
		case 379L:
		case 380L:
		case 381L:
		case 382L:
		case 383L:
		case 384L:
		case 385L:
		case 386L:
		case 387L:
		case 388L:
		case 389L:
		case 390L:
		case 391L:
		case 392L:
		case 393L:
		case 394L:
		case 395L:
		case 396L:
		case 397L:
		case 398L:
		case 399L:
		case 400L:
		case 401L:
		case 402L:
		case 403L:
		case 404L:
		case 405L:
		case 406L:
		case 407L:
		case 408L:
		case 409L:
		case 410L:
		case 411L:
		case 412L:
		case 413L:
		case 414L:
		case 415L:
		case 416L:
		case 417L:
		case 418L:
		case 419L:
		case 420L:
		case 421L:
		case 422L:
		case 423L:
		case 424L:
		case 425L:
		case 426L:
		case 427L:
		case 428L:
		case 429L:
		case 430L:
		case 431L:
		case 432L:
		case 433L:
		case 434L:
		case 435L:
		case 436L:
		case 437L:
		case 438L:
		case 439L:
		case 440L:
		case 441L:
		case 442L:
		case 443L:
		case 444L:
		case 445L:
		case 446L:
		case 447L:
		case 448L:
		case 449L:
		case 450L:
		case 451L:
		case 452L:
		case 453L:
		case 454L:
		case 455L:
		case 456L:
		case 457L:
		case 458L:
		case 459L:
		case 460L:
		case 461L:
		case 462L:
		case 463L:
		case 464L:
		case 465L:
		case 466L:
		case 467L:
		case 468L:
		case 469L:
		case 470L:
		case 471L:
		case 472L:
		case 473L:
		case 474L:
		case 475L:
		case 476L:
		case 477L:
		case 478L:
		case 479L:
		case 480L:
		case 481L:
		case 482L:
		case 483L:
		case 484L:
		case 485L:
		case 486L:
		case 487L:
		case 488L:
		case 489L:
		case 490L:
		case 491L:
		case 492L:
		case 493L:
		case 494L:
		case 495L:
		case 496L:
		case 497L:
		case 498L:
		case 499L:
		case 500L:
		case 501L:
		case 502L:
		case 503L:
		case 504L:
		case 505L:
		case 506L:
		case 507L:
		case 508L:
		case 509L:
		case 510L:
		case 511L:
		case 512L:
		case 513L:
		case 514L:
		case 515L:
		case 516L:
		case 517L:
		case 518L:
		case 519L:
		case 520L:
		case 521L:
		case 522L:
		case 523L:
		case 524L:
		case 525L:
		case 526L:
		case 527L:
		case 528L:
		case 529L:
		case 530L:
		case 531L:
		case 532L:
		case 533L:
		case 534L:
		case 535L:
		case 536L:
		case 537L:
		case 538L:
		case 539L:
		case 540L:
		case 541L:
		case 542L:
		case 543L:
		case 544L:
		case 545L:
		case 546L:
		case 547L:
		case 548L:
		case 549L:
			RTHOOK(3);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11061, dtype))(Current)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
			break;
		case 550L:
		case 551L:
		case 552L:
		case 553L:
		case 554L:
		case 555L:
		case 556L:
		case 557L:
		case 558L:
		case 559L:
		case 560L:
		case 561L:
		case 562L:
		case 563L:
		case 564L:
		case 565L:
		case 566L:
		case 567L:
		case 568L:
		case 569L:
		case 570L:
		case 571L:
		case 572L:
		case 573L:
		case 574L:
		case 575L:
		case 576L:
		case 577L:
		case 578L:
		case 579L:
		case 580L:
		case 581L:
		case 582L:
		case 583L:
		case 584L:
		case 585L:
		case 586L:
		case 587L:
		case 588L:
		case 589L:
		case 590L:
		case 591L:
		case 592L:
		case 593L:
		case 594L:
		case 595L:
		case 596L:
		case 597L:
		case 598L:
		case 599L:
		case 600L:
		case 601L:
		case 602L:
		case 603L:
		case 604L:
		case 605L:
		case 606L:
		case 607L:
		case 608L:
		case 609L:
		case 610L:
		case 611L:
		case 612L:
		case 613L:
		case 614L:
		case 615L:
		case 616L:
		case 617L:
		case 618L:
		case 619L:
		case 620L:
		case 621L:
		case 622L:
		case 623L:
		case 624L:
		case 625L:
		case 626L:
		case 627L:
		case 628L:
		case 629L:
		case 630L:
		case 631L:
		case 632L:
		case 633L:
		case 634L:
		case 635L:
		case 636L:
		case 637L:
		case 638L:
		case 639L:
		case 640L:
		case 641L:
		case 642L:
		case 643L:
		case 644L:
		case 645L:
		case 646L:
		case 647L:
		case 648L:
		case 649L:
		case 650L:
		case 651L:
		case 652L:
		case 653L:
		case 654L:
		case 655L:
		case 656L:
		case 657L:
		case 658L:
		case 659L:
		case 660L:
		case 661L:
		case 662L:
		case 663L:
		case 664L:
		case 665L:
		case 666L:
		case 667L:
		case 668L:
		case 669L:
		case 670L:
		case 671L:
		case 672L:
		case 673L:
		case 674L:
		case 675L:
		case 676L:
		case 677L:
		case 678L:
		case 679L:
		case 680L:
		case 681L:
		case 682L:
		case 683L:
		case 684L:
		case 685L:
		case 686L:
		case 687L:
		case 688L:
		case 689L:
		case 690L:
		case 691L:
		case 692L:
		case 693L:
		case 694L:
		case 695L:
		case 696L:
		case 697L:
		case 698L:
		case 699L:
		case 700L:
		case 701L:
		case 702L:
		case 703L:
		case 704L:
		case 705L:
		case 706L:
		case 707L:
		case 708L:
		case 709L:
		case 710L:
		case 711L:
		case 712L:
		case 713L:
		case 714L:
		case 715L:
		case 716L:
		case 717L:
		case 718L:
		case 719L:
		case 720L:
		case 721L:
		case 722L:
		case 723L:
		case 724L:
		case 725L:
		case 726L:
		case 727L:
		case 728L:
		case 729L:
		case 730L:
		case 731L:
		case 732L:
		case 733L:
		case 734L:
		case 735L:
		case 736L:
		case 737L:
		case 738L:
		case 739L:
		case 740L:
		case 741L:
		case 742L:
		case 743L:
		case 744L:
		case 745L:
		case 746L:
		case 747L:
		case 748L:
		case 749L:
		case 750L:
		case 751L:
		case 752L:
		case 753L:
		case 754L:
		case 755L:
		case 756L:
		case 757L:
		case 758L:
		case 759L:
		case 760L:
		case 761L:
		case 762L:
		case 763L:
		case 764L:
		case 765L:
		case 766L:
		case 767L:
		case 768L:
		case 769L:
		case 770L:
		case 771L:
		case 772L:
		case 773L:
		case 774L:
		case 775L:
		case 776L:
		case 777L:
		case 778L:
		case 779L:
		case 780L:
		case 781L:
		case 782L:
		case 783L:
		case 784L:
		case 785L:
		case 786L:
		case 787L:
		case 788L:
		case 789L:
		case 790L:
		case 791L:
		case 792L:
		case 793L:
		case 794L:
		case 795L:
		case 796L:
		case 797L:
		case 798L:
		case 799L:
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11062, dtype))(Current)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
			break;
		case 800L:
		case 801L:
		case 802L:
		case 803L:
		case 804L:
		case 805L:
		case 806L:
		case 807L:
		case 808L:
		case 809L:
		case 810L:
		case 811L:
		case 812L:
		case 813L:
		case 814L:
		case 815L:
		case 816L:
		case 817L:
		case 818L:
		case 819L:
		case 820L:
		case 821L:
		case 822L:
		case 823L:
		case 824L:
		case 825L:
		case 826L:
		case 827L:
		case 828L:
		case 829L:
		case 830L:
		case 831L:
		case 832L:
		case 833L:
		case 834L:
		case 835L:
		case 836L:
		case 837L:
		case 838L:
		case 839L:
		case 840L:
		case 841L:
		case 842L:
		case 843L:
		case 844L:
		case 845L:
		case 846L:
		case 847L:
		case 848L:
		case 849L:
		case 850L:
		case 851L:
		case 852L:
		case 853L:
		case 854L:
		case 855L:
		case 856L:
		case 857L:
		case 858L:
		case 859L:
		case 860L:
		case 861L:
		case 862L:
		case 863L:
		case 864L:
		case 865L:
		case 866L:
		case 867L:
		case 868L:
		case 869L:
		case 870L:
		case 871L:
		case 872L:
		case 873L:
		case 874L:
		case 875L:
		case 876L:
		case 877L:
		case 878L:
		case 879L:
		case 880L:
		case 881L:
		case 882L:
		case 883L:
		case 884L:
		case 885L:
		case 886L:
		case 887L:
		case 888L:
		case 889L:
		case 890L:
		case 891L:
		case 892L:
		case 893L:
		case 894L:
		case 895L:
		case 896L:
		case 897L:
		case 898L:
		case 899L:
		case 900L:
		case 901L:
		case 902L:
		case 903L:
		case 904L:
		case 905L:
		case 906L:
		case 907L:
		case 908L:
		case 909L:
		case 910L:
		case 911L:
		case 912L:
		case 913L:
		case 914L:
		case 915L:
		case 916L:
		case 917L:
		case 918L:
		case 919L:
		case 920L:
		case 921L:
		case 922L:
		case 923L:
		case 924L:
		case 925L:
		case 926L:
		case 927L:
		case 928L:
		case 929L:
		case 930L:
		case 931L:
		case 932L:
		case 933L:
		case 934L:
		case 935L:
		case 936L:
		case 937L:
		case 938L:
		case 939L:
		case 940L:
		case 941L:
		case 942L:
		case 943L:
		case 944L:
		case 945L:
		case 946L:
		case 947L:
		case 948L:
		case 949L:
		case 950L:
		case 951L:
		case 952L:
		case 953L:
		case 954L:
		case 955L:
		case 956L:
		case 957L:
		case 958L:
		case 959L:
		case 960L:
		case 961L:
		case 962L:
		case 963L:
		case 964L:
		case 965L:
		case 966L:
		case 967L:
		case 968L:
		case 969L:
		case 970L:
		case 971L:
		case 972L:
		case 973L:
		case 974L:
		case 975L:
		case 976L:
		case 977L:
		case 978L:
		case 979L:
		case 980L:
		case 981L:
		case 982L:
		case 983L:
		case 984L:
		case 985L:
		case 986L:
		case 987L:
		case 988L:
		case 989L:
		case 990L:
		case 991L:
		case 992L:
		case 993L:
		case 994L:
		case 995L:
		case 996L:
		case 997L:
		case 998L:
		case 999L:
		case 1000L:
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11063, dtype))(Current)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			if (RTAL & CK_CHECK) {
				RTHOOK(6);
				RTCT("impossible", EX_CHECK);
					RTCF;
			}
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {EV_FONT_IMP}.convert_font_shape */
EIF_TYPED_VALUE F1661_19636 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "convert_font_shape";
	RTEX;
#define arg1 arg1x.it_b
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25286);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25286);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11065, dtype))(Current)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11064, dtype))(Current)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {EV_FONT_IMP}.string_width_and_height_ignore_new_line */
EIF_TYPED_VALUE F1661_19637 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_width_and_height_ignore_new_line";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1660, Current, 2, 1, 25287);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25287);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF800056E, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1390, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(13501, "get", loc1))(loc1);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13560, "select_font", loc1))(loc1, ur1x);
	RTHOOK(5);
	RTDBGAL(2, 0xF800052F, 0, 0); /* loc2 */
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13521, "string_size", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(13566, "unselect_font", loc1))(loc1);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(13735, "quick_release", loc1))(loc1);
	RTHOOK(8);
	RTDBGAL(0, 0xF80000BE, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,190,222,222,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12185, "width", loc2))(loc2)).it_i4);
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12186, "height", loc2))(loc2)).it_i4);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.font_enumerator */
RTOID (F1661_19638)
EIF_TYPED_VALUE F1661_19638 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "font_enumerator";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1661_19638);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 0, 25288);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25288);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80004F0, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1264, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {EV_FONT_IMP}.string_width_and_height */
EIF_TYPED_VALUE F1661_19639 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_width_and_height";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25289);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25289);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000BE, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ur1 = RTCCL(arg1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16397, "string_size", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.set_charset */
void F1661_19640 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_charset";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25290);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25290);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("ansi",4,1634628457);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4690, "same_string", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12668, "set_ansi_character_set", tr1))(tr1);
	} else {
		RTHOOK(3);
		tr1 = RTMS_EX_H("oem",3,7300461);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4690, "same_string", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12669, "set_oem_character_set", tr1))(tr1);
		} else {
			RTHOOK(5);
			tr1 = RTMS_EX_H("symbol",6,2062196076);
			ur1 = tr1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4690, "same_string", arg1))(arg1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(6);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(6,1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12670, "set_symbol_character_set", tr1))(tr1);
			} else {
				RTHOOK(7);
				tr1 = RTMS_EX_H("unicode",7,643913317);
				ur1 = tr1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4690, "same_string", arg1))(arg1, ur1x)).it_b);
				if (tb1) {
					RTHOOK(8);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(8,1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12671, "set_unicode_character_set", tr1))(tr1);
				} else {
					RTHOOK(9);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(9,1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12667, "set_default_character_set", tr1))(tr1);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.set_clip_precision */
void F1661_19641 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_clip_precision";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25291);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25291);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("character",9,743893362);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4690, "same_string", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12677, "set_character_clipping_precision", tr1))(tr1);
	} else {
		RTHOOK(3);
		tr1 = RTMS_EX_H("stroke",6,2146894693);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4690, "same_string", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12680, "set_stroke_clipping_precision", tr1))(tr1);
		} else {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12679, "set_default_clipping_precision", tr1))(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.set_escapement */
void F1661_19642 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_escapement";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1660, Current, 1, 1, 25292);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25292);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80000F2, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "as_string_32", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4676, "is_integer", loc1))(loc1)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4710, "to_integer", loc1))(loc1)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12657, "set_escapement", tr1))(tr1, ui4_1x);
	} else {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12657, "set_escapement", tr1))(tr1, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {EV_FONT_IMP}.set_orientation */
void F1661_19643 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_orientation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1660, Current, 1, 1, 25293);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25293);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80000F2, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "as_string_32", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4676, "is_integer", loc1))(loc1)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4710, "to_integer", loc1))(loc1)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12658, "set_orientation", tr1))(tr1, ui4_1x);
	} else {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12658, "set_orientation", tr1))(tr1, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {EV_FONT_IMP}.set_out_precision */
void F1661_19644 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_out_precision";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25294);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25294);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("character",9,743893362);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4690, "same_string", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12673, "set_character_output_precision", tr1))(tr1);
	} else {
		RTHOOK(3);
		tr1 = RTMS_EX_H("string",6,2146502247);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4690, "same_string", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12675, "set_string_output_precision", tr1))(tr1);
		} else {
			RTHOOK(5);
			tr1 = RTMS_EX_H("stroke",6,2146894693);
			ur1 = tr1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4690, "same_string", arg1))(arg1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(6);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(6,1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12676, "set_stroke_output_precision", tr1))(tr1);
			} else {
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(7,1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12674, "set_default_output_precision", tr1))(tr1);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.set_pitch */
void F1661_19645 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_pitch";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25295);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25295);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("fixed",5,1770281316);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4690, "same_string", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12687, "set_fixed_pitch", tr1))(tr1);
	} else {
		RTHOOK(3);
		tr1 = RTMS_EX_H("variable",8,1315629925);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4690, "same_string", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12688, "set_variable_pitch", tr1))(tr1);
		} else {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12686, "set_default_pitch", tr1))(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.set_quality */
void F1661_19646 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_quality";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25296);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25296);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("draft",5,1919753844);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4690, "same_string", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12683, "set_draft_quality", tr1))(tr1);
	} else {
		RTHOOK(3);
		tr1 = RTMS_EX_H("proof",5,1920765798);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4690, "same_string", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12684, "set_proof_quality", tr1))(tr1);
		} else {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12682, "set_default_quality", tr1))(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_FONT_IMP}.set_styles */
void F1661_19647 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_styles";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1660, Current, 0, 1, 25297);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1660, Current, 25297);
	RTCC(arg1, 1660, l_feature_name, 1, eif_new_type(233, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12661, "set_not_italic", tr1))(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12663, "set_not_underlined", tr1))(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12665, "set_not_strike_out", tr1))(tr1);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(5);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) 'i';
		uu4_1 = tu4_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4666, "has_code", arg1))(arg1, uu4_1x)).it_b);
		if (tb1) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12660, "set_italic", tr1))(tr1);
		}
		RTHOOK(7);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) 'u';
		uu4_1 = tu4_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4666, "has_code", arg1))(arg1, uu4_1x)).it_b);
		if (tb1) {
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12662, "set_underlined", tr1))(tr1);
		}
		RTHOOK(9);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) 's';
		uu4_1 = tu4_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4666, "has_code", arg1))(arg1, uu4_1x)).it_b);
		if (tb1) {
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12664, "set_strike_out", tr1))(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef uu4_1
#undef arg1
}

/* {EV_FONT_IMP}._invariant */
void F1661_23302 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1660, Current, 0, 23301);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("wel_log_font_exists", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("wel_font_exists", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16355, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit1661 (void)
{
	GTCX
	RTOTS (19620,F1661_19620)
	RTOTS (19621,F1661_19621)
	RTOTS (19638,F1661_19638)
}


#ifdef __cplusplus
}
#endif
