/*
 * Code for class EV_MODEL_ARROWED
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1858_23979(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1858_23980(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1858_23981(EIF_REFERENCE);
extern void F1858_23983(EIF_REFERENCE);
extern void F1858_23984(EIF_REFERENCE);
extern void F1858_23985(EIF_REFERENCE);
extern void F1858_23986(EIF_REFERENCE);
extern void F1858_23987(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1858_23988(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1858_23989(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1858_23992(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1858_23993(EIF_REFERENCE);
extern void F1858_23994(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1858_23995(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1858_23996(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1858_23997(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1858_23998(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1858_23999(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1858_24000(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1858_24001(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1858_24002(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1858_24003(EIF_REFERENCE);
extern void EIF_Minit1858(void);

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

/* {EV_MODEL_ARROWED}.is_start_arrow */
EIF_TYPED_VALUE F1858_23979 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(18790,Dtype(Current)));
	return r;
}


/* {EV_MODEL_ARROWED}.is_end_arrow */
EIF_TYPED_VALUE F1858_23980 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(18791,Dtype(Current)));
	return r;
}


/* {EV_MODEL_ARROWED}.arrow_size */
EIF_TYPED_VALUE F1858_23981 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(18792,Dtype(Current)));
	return r;
}


/* {EV_MODEL_ARROWED}.enable_end_arrow */
void F1858_23983 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_end_arrow";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1857, Current, 0, 0, 29368);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1857, Current, 29368);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 18791, 0x04000000, 1); /* is_end_arrow */
	*(EIF_BOOLEAN *)(Current + RTWA(18791, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_MODEL_ARROWED}.disable_end_arrow */
void F1858_23984 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_end_arrow";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1857, Current, 0, 0, 29369);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1857, Current, 29369);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 18791, 0x04000000, 1); /* is_end_arrow */
	*(EIF_BOOLEAN *)(Current + RTWA(18791, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_MODEL_ARROWED}.enable_start_arrow */
void F1858_23985 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_start_arrow";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1857, Current, 0, 0, 29370);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1857, Current, 29370);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 18790, 0x04000000, 1); /* is_start_arrow */
	*(EIF_BOOLEAN *)(Current + RTWA(18790, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_MODEL_ARROWED}.disable_start_arrow */
void F1858_23986 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_start_arrow";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1857, Current, 0, 0, 29371);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1857, Current, 29371);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 18790, 0x04000000, 1); /* is_start_arrow */
	*(EIF_BOOLEAN *)(Current + RTWA(18790, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_MODEL_ARROWED}.set_arrow_size */
void F1858_23987 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_arrow_size";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1857, Current, 0, 1, 29372);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1857, Current, 29372);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_arrow_size_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 18792, 0x10000000, 1); /* arrow_size */
	*(EIF_INTEGER_32 *)(Current + RTWA(18792, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18792, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef arg1
}

/* {EV_MODEL_ARROWED}.start_arrow */
EIF_TYPED_VALUE F1858_23988 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start_arrow";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1857, Current, 3, 0, 29373);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1857, Current, 29373);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(18790, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18803, dtype))(Current)).it_r8);
		loc1 = (EIF_REAL_64) tr8_1;
		RTHOOK(3);
		RTDBGAL(2, 0xF80004EA, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18801, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(3, 0xF8000735, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18806, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			RTHOOK(6);
			RTDBGAL(3, 0xF8000735, 0, 0); /* loc3 */
			tr1 = RTLNSMART(RTWCT(18806, dtype, Dftype(Current)).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(6,1);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(7);
			RTDBGAA(Current, dtype, 18806, 0xF8000735, 0); /* internal_start_arrow */
			tr1 = RTCCL(loc3);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(18806, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(8);
			ui4_1 = ((EIF_INTEGER_32) 3L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18667, "set_point_count", loc3))(loc3, ui4_1x);
			RTHOOK(9);
			ur1 = RTCCL(loc3);
			ur8_1 = loc1;
			ur2 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18805, dtype))(Current, ur1x, ur8_1x, ur2x);
			RTHOOK(10);
			RTDBGAA(Current, dtype, 18807, 0x20000000, 1); /* internal_start_angle */
			*(EIF_REAL_64 *)(Current + RTWA(18807, dtype)) = (EIF_REAL_64) loc1;
			RTHOOK(11);
			RTDBGAA(Current, dtype, 18808, 0x20000000, 1); /* internal_start_point_x */
			tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
			*(EIF_REAL_64 *)(Current + RTWA(18808, dtype)) = (EIF_REAL_64) tr8_1;
			RTHOOK(12);
			RTDBGAA(Current, dtype, 18809, 0x20000000, 1); /* internal_start_point_y */
			tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
			*(EIF_REAL_64 *)(Current + RTWA(18809, dtype)) = (EIF_REAL_64) tr8_1;
			RTHOOK(13);
			RTDBGAA(Current, dtype, 18814, 0x10000000, 1); /* internal_arrow_size */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18792, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(18814, dtype)) = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(14);
			tb1 = '\01';
			tb2 = '\01';
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18814, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(18792, dtype));
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18807, dtype));
			if (!(EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 != ti4_2) || (EIF_BOOLEAN) !eif_is_equal_real_64 (loc1, tr8_1))) {
				tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18808, dtype));
				tr8_2 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
				tb2 = (EIF_BOOLEAN) !eif_is_equal_real_64 (tr8_1, tr8_2);
			}
			if (!tb2) {
				tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18809, dtype));
				tr8_2 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
				tb1 = (EIF_BOOLEAN) !eif_is_equal_real_64 (tr8_1, tr8_2);
			}
			if (tb1) {
				RTHOOK(15);
				ur1 = RTCCL(loc3);
				ur8_1 = loc1;
				ur2 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18805, dtype))(Current, ur1x, ur8_1x, ur2x);
				RTHOOK(16);
				RTDBGAA(Current, dtype, 18807, 0x20000000, 1); /* internal_start_angle */
				*(EIF_REAL_64 *)(Current + RTWA(18807, dtype)) = (EIF_REAL_64) loc1;
				RTHOOK(17);
				RTDBGAA(Current, dtype, 18808, 0x20000000, 1); /* internal_start_point_x */
				tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
				*(EIF_REAL_64 *)(Current + RTWA(18808, dtype)) = (EIF_REAL_64) tr8_1;
				RTHOOK(18);
				RTDBGAA(Current, dtype, 18809, 0x20000000, 1); /* internal_start_point_y */
				tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
				*(EIF_REAL_64 *)(Current + RTWA(18809, dtype)) = (EIF_REAL_64) tr8_1;
				RTHOOK(19);
				RTDBGAA(Current, dtype, 18814, 0x10000000, 1); /* internal_arrow_size */
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18792, dtype));
				*(EIF_INTEGER_32 *)(Current + RTWA(18814, dtype)) = (EIF_INTEGER_32) ti4_1;
			}
		}
		RTHOOK(20);
		RTDBGAL(0, 0xF8000735, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc3);
	} else {
		RTHOOK(21);
		RTDBGAL(0, 0xF8000735, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1845, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(21,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ui4_1
}

/* {EV_MODEL_ARROWED}.end_arrow */
EIF_TYPED_VALUE F1858_23989 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "end_arrow";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1857, Current, 3, 0, 29374);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1857, Current, 29374);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(18791, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18804, dtype))(Current)).it_r8);
		loc1 = (EIF_REAL_64) tr8_1;
		RTHOOK(3);
		RTDBGAL(2, 0xF80004EA, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18802, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(3, 0xF8000735, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18810, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			RTHOOK(6);
			RTDBGAL(3, 0xF8000735, 0, 0); /* loc3 */
			tr1 = RTLNSMART(RTWCT(18810, dtype, Dftype(Current)).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(6,1);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(7);
			RTDBGAA(Current, dtype, 18810, 0xF8000735, 0); /* internal_end_arrow */
			tr1 = RTCCL(loc3);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(18810, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(8);
			ui4_1 = ((EIF_INTEGER_32) 3L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18667, "set_point_count", loc3))(loc3, ui4_1x);
			RTHOOK(9);
			ur1 = RTCCL(loc3);
			ur8_1 = loc1;
			ur2 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18805, dtype))(Current, ur1x, ur8_1x, ur2x);
			RTHOOK(10);
			RTDBGAA(Current, dtype, 18811, 0x20000000, 1); /* internal_end_angle */
			*(EIF_REAL_64 *)(Current + RTWA(18811, dtype)) = (EIF_REAL_64) loc1;
			RTHOOK(11);
			RTDBGAA(Current, dtype, 18812, 0x20000000, 1); /* internal_end_point_x */
			tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
			*(EIF_REAL_64 *)(Current + RTWA(18812, dtype)) = (EIF_REAL_64) tr8_1;
			RTHOOK(12);
			RTDBGAA(Current, dtype, 18813, 0x20000000, 1); /* internal_end_point_y */
			tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
			*(EIF_REAL_64 *)(Current + RTWA(18813, dtype)) = (EIF_REAL_64) tr8_1;
			RTHOOK(13);
			RTDBGAA(Current, dtype, 18814, 0x10000000, 1); /* internal_arrow_size */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18792, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(18814, dtype)) = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(14);
			tb1 = '\01';
			tb2 = '\01';
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18814, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(18792, dtype));
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18811, dtype));
			if (!(EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 != ti4_2) || (EIF_BOOLEAN) !eif_is_equal_real_64 (loc1, tr8_1))) {
				tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18812, dtype));
				tr8_2 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
				tb2 = (EIF_BOOLEAN) !eif_is_equal_real_64 (tr8_1, tr8_2);
			}
			if (!tb2) {
				tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18813, dtype));
				tr8_2 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
				tb1 = (EIF_BOOLEAN) !eif_is_equal_real_64 (tr8_1, tr8_2);
			}
			if (tb1) {
				RTHOOK(15);
				ur1 = RTCCL(loc3);
				ur8_1 = loc1;
				ur2 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18805, dtype))(Current, ur1x, ur8_1x, ur2x);
				RTHOOK(16);
				RTDBGAA(Current, dtype, 18811, 0x20000000, 1); /* internal_end_angle */
				*(EIF_REAL_64 *)(Current + RTWA(18811, dtype)) = (EIF_REAL_64) loc1;
				RTHOOK(17);
				RTDBGAA(Current, dtype, 18812, 0x20000000, 1); /* internal_end_point_x */
				tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
				*(EIF_REAL_64 *)(Current + RTWA(18812, dtype)) = (EIF_REAL_64) tr8_1;
				RTHOOK(18);
				RTDBGAA(Current, dtype, 18813, 0x20000000, 1); /* internal_end_point_y */
				tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
				*(EIF_REAL_64 *)(Current + RTWA(18813, dtype)) = (EIF_REAL_64) tr8_1;
				RTHOOK(19);
				RTDBGAA(Current, dtype, 18814, 0x10000000, 1); /* internal_arrow_size */
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18792, dtype));
				*(EIF_INTEGER_32 *)(Current + RTWA(18814, dtype)) = (EIF_INTEGER_32) ti4_1;
			}
		}
		RTHOOK(20);
		RTDBGAL(0, 0xF8000735, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc3);
	} else {
		RTHOOK(21);
		RTDBGAL(0, 0xF8000735, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1845, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(21,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur8_1
#undef ui4_1
}

/* {EV_MODEL_ARROWED}.start_angle */
EIF_TYPED_VALUE F1858_23992 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start_angle";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1857, Current, 2, 0, 29375);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1857, Current, 29375);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80004EA, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18801, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF80004EA, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18802, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc1))(loc1)).it_i4);
	tr8_1 = (EIF_REAL_64) (ti4_1);
	ur8_1 = tr8_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc1))(loc1)).it_i4);
	tr8_2 = (EIF_REAL_64) (ti4_1);
	ur8_2 = tr8_2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc2))(loc2)).it_i4);
	tr8_3 = (EIF_REAL_64) (ti4_1);
	ur8_3 = tr8_3;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc2))(loc2)).it_i4);
	tr8_4 = (EIF_REAL_64) (ti4_1);
	ur8_4 = tr8_4;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18481, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
}

/* {EV_MODEL_ARROWED}.end_angle */
EIF_TYPED_VALUE F1858_23993 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "end_angle";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1857, Current, 2, 0, 29376);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1857, Current, 29376);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80004EA, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18801, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF80004EA, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18802, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc2))(loc2)).it_i4);
	tr8_1 = (EIF_REAL_64) (ti4_1);
	ur8_1 = tr8_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc2))(loc2)).it_i4);
	tr8_2 = (EIF_REAL_64) (ti4_1);
	ur8_2 = tr8_2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc1))(loc1)).it_i4);
	tr8_3 = (EIF_REAL_64) (ti4_1);
	ur8_3 = tr8_3;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc1))(loc1)).it_i4);
	tr8_4 = (EIF_REAL_64) (ti4_1);
	ur8_4 = tr8_4;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18481, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
}

/* {EV_MODEL_ARROWED}.set_arrow */
void F1858_23994 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "set_arrow";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc8 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc9 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REAL64, &loc8);
	RTLU(SK_REAL64, &loc9);
	
	RTEAA(l_feature_name, 1857, Current, 9, 3, 29355);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1857, Current, 29355);
	RTCC(arg1, 1857, l_feature_name, 1, eif_new_type(1845, 0x01), 0x01);
	RTCC(arg3, 1857, l_feature_name, 3, eif_new_type(1258, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18792, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18793, dtype))(Current)).it_i4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
	RTHOOK(2);
	RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
	ur8_1 = arg2;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1632, dtype))(Current, ur8_1x)).it_r8);
	loc3 = (EIF_REAL_64) tr8_1;
	RTHOOK(3);
	RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
	ur8_1 = arg2;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1634, dtype))(Current, ur8_1x)).it_r8);
	loc4 = (EIF_REAL_64) tr8_1;
	RTHOOK(4);
	RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
	tr8_1 = (EIF_REAL_64) (loc1);
	loc5 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 * loc3);
	RTHOOK(5);
	RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
	tr8_1 = (EIF_REAL_64) (loc1);
	loc7 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 * loc4);
	RTHOOK(6);
	RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
	loc2 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 2L)));
	RTHOOK(7);
	RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
	loc6 = (EIF_REAL_64) (EIF_REAL_64) (loc2 * loc4);
	RTHOOK(8);
	RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
	loc8 = (EIF_REAL_64) (EIF_REAL_64) (loc2 * loc3);
	RTHOOK(9);
	RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
	tr8_1 = *(EIF_REAL_64 *)(arg3 + RTVA(11267, "x_precise", arg3));
	loc9 = (EIF_REAL_64) tr8_1;
	RTHOOK(10);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ur8_1 = loc9;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18496, dtype))(Current, ur8_1x)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18663, "set_i_th_point_x", arg1))(arg1, ui4_1x, ui4_2x);
	RTHOOK(11);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (loc9 + loc5) - loc6);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18496, dtype))(Current, ur8_1x)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18663, "set_i_th_point_x", arg1))(arg1, ui4_1x, ui4_2x);
	RTHOOK(12);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (loc9 + loc5) + loc6);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18496, dtype))(Current, ur8_1x)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18663, "set_i_th_point_x", arg1))(arg1, ui4_1x, ui4_2x);
	RTHOOK(13);
	RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
	tr8_1 = *(EIF_REAL_64 *)(arg3 + RTVA(11268, "y_precise", arg3));
	loc9 = (EIF_REAL_64) tr8_1;
	RTHOOK(14);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ur8_1 = loc9;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18496, dtype))(Current, ur8_1x)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18664, "set_i_th_point_y", arg1))(arg1, ui4_1x, ui4_2x);
	RTHOOK(15);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (loc9 + loc7) + loc8);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18496, dtype))(Current, ur8_1x)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18664, "set_i_th_point_y", arg1))(arg1, ui4_1x, ui4_2x);
	RTHOOK(16);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (loc9 + loc7) - loc8);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18496, dtype))(Current, ur8_1x)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18664, "set_i_th_point_y", arg1))(arg1, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_MODEL_ARROWED}.internal_start_arrow */
EIF_TYPED_VALUE F1858_23995 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(18806,Dtype(Current)));
	return r;
}


/* {EV_MODEL_ARROWED}.internal_start_angle */
EIF_TYPED_VALUE F1858_23996 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(18807,Dtype(Current)));
	return r;
}


/* {EV_MODEL_ARROWED}.internal_start_point_x */
EIF_TYPED_VALUE F1858_23997 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(18808,Dtype(Current)));
	return r;
}


/* {EV_MODEL_ARROWED}.internal_start_point_y */
EIF_TYPED_VALUE F1858_23998 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(18809,Dtype(Current)));
	return r;
}


/* {EV_MODEL_ARROWED}.internal_end_arrow */
EIF_TYPED_VALUE F1858_23999 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(18810,Dtype(Current)));
	return r;
}


/* {EV_MODEL_ARROWED}.internal_end_angle */
EIF_TYPED_VALUE F1858_24000 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(18811,Dtype(Current)));
	return r;
}


/* {EV_MODEL_ARROWED}.internal_end_point_x */
EIF_TYPED_VALUE F1858_24001 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(18812,Dtype(Current)));
	return r;
}


/* {EV_MODEL_ARROWED}.internal_end_point_y */
EIF_TYPED_VALUE F1858_24002 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(18813,Dtype(Current)));
	return r;
}


/* {EV_MODEL_ARROWED}.internal_arrow_size */
EIF_TYPED_VALUE F1858_24003 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(18814,Dtype(Current)));
	return r;
}


void EIF_Minit1858 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
