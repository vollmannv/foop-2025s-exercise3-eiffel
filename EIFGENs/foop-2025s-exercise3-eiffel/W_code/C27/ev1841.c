/*
 * Code for class EV_MODEL_ROTATED_ELLIPTIC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1841_23793(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1841_23794(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1841_23795(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1841_23796(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1841_23797(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1841_23798(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1841_23799(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1841_23800(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1841_23801(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1841_23802(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1841_23803(EIF_REFERENCE);
extern void F1841_23804(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1841_23805(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1841_23806(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1841_23807(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1841_23808(EIF_REFERENCE);
extern void EIF_Minit1841(void);

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

/* {EV_MODEL_ROTATED_ELLIPTIC}.default_create */
void F1841_23793 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
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
	
	RTEAA(l_feature_name, 1840, Current, 0, 0, 29162);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1840, Current, 29162);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(32, 1835))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 18574, 0xF8000108, 0); /* point_array */
	ui4_1 = ((EIF_INTEGER_32) 4L);
	if (ui4_1< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(RTWCT(18574, dtype, Dftype(Current)).id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(18574, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = RTLN(eif_new_type(1258, 0x01).id);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11257, Dtype(tr2)))(tr2, ui4_2x, ui4_3x);
	RTNHOOK(3,2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2562, "extend", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr2 = RTLN(eif_new_type(1258, 0x01).id);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11257, Dtype(tr2)))(tr2, ui4_2x, ui4_3x);
	RTNHOOK(4,2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2562, "extend", tr1))(tr1, ur1x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	tr2 = RTLN(eif_new_type(1258, 0x01).id);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11257, Dtype(tr2)))(tr2, ui4_2x, ui4_3x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2562, "extend", tr1))(tr1, ur1x);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	tr2 = RTLN(eif_new_type(1258, 0x01).id);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11257, Dtype(tr2)))(tr2, ui4_2x, ui4_3x);
	RTNHOOK(6,2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2562, "extend", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.angle */
EIF_TYPED_VALUE F1841_23794 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "angle";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
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
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLIU(6);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	
	RTEAA(l_feature_name, 1840, Current, 6, 0, 29163);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1840, Current, 29163);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000108, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(2, 0xF80004EA, 0, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF80004EA, 0, 0); /* loc3 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(4, 0xF80004EA, 0, 0); /* loc4 */
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
	tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
	loc5 = (EIF_REAL_64) tr8_1;
	RTHOOK(6);
	RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
	tr8_1 = *(EIF_REAL_64 *)(loc3 + RTVA(11268, "y_precise", loc3));
	loc6 = (EIF_REAL_64) tr8_1;
	RTHOOK(7);
	if ((EIF_BOOLEAN) eif_is_equal_real_64 (loc5, loc6)) {
		RTHOOK(8);
		tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
		tr8_2 = *(EIF_REAL_64 *)(loc3 + RTVA(11267, "x_precise", loc3));
		if ((EIF_BOOLEAN) eif_is_less_equal_real_64 (tr8_1, tr8_2)) {
			RTHOOK(9);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			Result = (EIF_REAL_64) (EIF_REAL_64) 0.0;
		} else {
			RTHOOK(10);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
			Result = (EIF_REAL_64) tr8_1;
		}
	} else {
		RTHOOK(11);
		tr8_1 = *(EIF_REAL_64 *)(loc4 + RTVA(11268, "y_precise", loc4));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (loc5, tr8_1)) {
			RTHOOK(12);
			tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
			tr8_2 = *(EIF_REAL_64 *)(loc4 + RTVA(11267, "x_precise", loc4));
			if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, tr8_2)) {
				RTHOOK(13);
				RTDBGAL(0, 0x20000000, 1,0); /* Result */
				tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
				tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
				Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
			} else {
				RTHOOK(14);
				RTDBGAL(0, 0x20000000, 1,0); /* Result */
				tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 3L));
				tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
				tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
				Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2)) /  (EIF_REAL_64) (tr8_3));
			}
		} else {
			RTHOOK(15);
			RTDBGAL(0, 0x20000000, 1,0); /* Result */
			tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
			ur8_1 = tr8_1;
			ur8_2 = loc5;
			tr8_2 = *(EIF_REAL_64 *)(loc3 + RTVA(11267, "x_precise", loc3));
			ur8_3 = tr8_2;
			ur8_4 = loc6;
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18481, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
			Result = (EIF_REAL_64) tr8_1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ui4_1
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.radius1 */
EIF_TYPED_VALUE F1841_23795 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "radius1";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLIU(5);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1840, Current, 3, 0, 29164);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1840, Current, 29164);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000108, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(2, 0xF80004EA, 0, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF80004EA, 0, 0); /* loc3 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
	ur8_1 = tr8_1;
	tr8_2 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
	ur8_2 = tr8_2;
	tr8_3 = *(EIF_REAL_64 *)(loc3 + RTVA(11267, "x_precise", loc3));
	ur8_3 = tr8_3;
	tr8_4 = *(EIF_REAL_64 *)(loc3 + RTVA(11268, "y_precise", loc3));
	ur8_4 = tr8_4;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18479, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18496, dtype))(Current, ur8_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ui4_1
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.radius2 */
EIF_TYPED_VALUE F1841_23796 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "radius2";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLIU(5);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1840, Current, 3, 0, 29165);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1840, Current, 29165);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000108, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(2, 0xF80004EA, 0, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF80004EA, 0, 0); /* loc3 */
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
	ur8_1 = tr8_1;
	tr8_2 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
	ur8_2 = tr8_2;
	tr8_3 = *(EIF_REAL_64 *)(loc3 + RTVA(11267, "x_precise", loc3));
	ur8_3 = tr8_3;
	tr8_4 = *(EIF_REAL_64 *)(loc3 + RTVA(11268, "y_precise", loc3));
	ur8_4 = tr8_4;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18479, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18496, dtype))(Current, ur8_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ui4_1
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.point_a_x */
EIF_TYPED_VALUE F1841_23797 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "point_a_x";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTEAA(l_feature_name, 1840, Current, 0, 0, 29166);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1840, Current, 29166);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", tr2))(tr2)).it_i4);
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
#undef ui4_1
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.point_a_y */
EIF_TYPED_VALUE F1841_23798 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "point_a_y";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTEAA(l_feature_name, 1840, Current, 0, 0, 29167);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1840, Current, 29167);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", tr2))(tr2)).it_i4);
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
#undef ui4_1
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.point_b_x */
EIF_TYPED_VALUE F1841_23799 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "point_b_x";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTEAA(l_feature_name, 1840, Current, 0, 0, 29168);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1840, Current, 29168);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", tr2))(tr2)).it_i4);
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
#undef ui4_1
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.point_b_y */
EIF_TYPED_VALUE F1841_23800 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "point_b_y";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTEAA(l_feature_name, 1840, Current, 0, 0, 29169);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1840, Current, 29169);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", tr2))(tr2)).it_i4);
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
#undef ui4_1
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.is_rotatable */
EIF_TYPED_VALUE F1841_23801 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_TRUE;
	return r;
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.is_scalable */
EIF_TYPED_VALUE F1841_23802 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.is_transformable */
EIF_TYPED_VALUE F1841_23803 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.set_radius1 */
void F1841_23804 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_radius1";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,loc7);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc8);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,tr2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_INT32, &loc11);
	
	RTEAA(l_feature_name, 1840, Current, 11, 1, 29173);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1840, Current, 29173);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("radius_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg1);
	RTHOOK(3);
	RTDBGAL(7, 0xF8000108, 0, 0); /* loc7 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(8, 0xF80004EA, 0, 0); /* loc8 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc7))(loc7, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(9, 0xF80004EA, 0, 0); /* loc9 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc7))(loc7, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(10, 0xF80004EA, 0, 0); /* loc10 */
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc7))(loc7, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
	tr8_1 = *(EIF_REAL_64 *)(loc8 + RTVA(11267, "x_precise", loc8));
	ur8_1 = tr8_1;
	tr8_2 = *(EIF_REAL_64 *)(loc8 + RTVA(11268, "y_precise", loc8));
	ur8_2 = tr8_2;
	tr8_3 = *(EIF_REAL_64 *)(loc9 + RTVA(11267, "x_precise", loc9));
	ur8_3 = tr8_3;
	tr8_4 = *(EIF_REAL_64 *)(loc9 + RTVA(11268, "y_precise", loc9));
	ur8_4 = tr8_4;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18479, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
	loc1 = (EIF_REAL_64) tr8_1;
	RTHOOK(8);
	if ((EIF_BOOLEAN) eif_is_equal_real_64 (loc1, (EIF_REAL_64) 0.0)) {
		RTHOOK(9);
		tr8_1 = *(EIF_REAL_64 *)(loc8 + RTVA(11267, "x_precise", loc8));
		tr8_2 = (EIF_REAL_64) (loc11);
		ur8_1 = (EIF_REAL_64) (tr8_1 + tr8_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11271, "set_x_precise", loc9))(loc9, ur8_1x);
		RTHOOK(10);
		ui4_1 = ((EIF_INTEGER_32) 3L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc7))(loc7, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(11267, "x_precise", tr1));
		tr8_2 = (EIF_REAL_64) (loc11);
		ur8_1 = (EIF_REAL_64) (tr8_1 + tr8_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11271, "set_x_precise", loc10))(loc10, ur8_1x);
	} else {
		RTHOOK(11);
		RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
		tr8_1 = *(EIF_REAL_64 *)(loc9 + RTVA(11268, "y_precise", loc9));
		tr8_2 = *(EIF_REAL_64 *)(loc8 + RTVA(11268, "y_precise", loc8));
		loc2 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - tr8_2);
		RTHOOK(12);
		RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
		tr8_1 = *(EIF_REAL_64 *)(loc9 + RTVA(11267, "x_precise", loc9));
		tr8_2 = *(EIF_REAL_64 *)(loc8 + RTVA(11267, "x_precise", loc8));
		loc3 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - tr8_2);
		RTHOOK(13);
		RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
		tr8_1 = (EIF_REAL_64) (loc11);
		loc4 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc2 * tr8_1)) /  (EIF_REAL_64) (loc1));
		RTHOOK(14);
		RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
		loc6 = (EIF_REAL_64) (EIF_REAL_64) (loc4 - loc2);
		RTHOOK(15);
		tr8_1 = *(EIF_REAL_64 *)(loc8 + RTVA(11268, "y_precise", loc8));
		ur8_1 = (EIF_REAL_64) (tr8_1 + loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11272, "set_y_precise", loc9))(loc9, ur8_1x);
		RTHOOK(16);
		RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
		tr8_1 = (EIF_REAL_64) (loc11);
		loc4 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc3 * tr8_1)) /  (EIF_REAL_64) (loc1));
		RTHOOK(17);
		RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
		loc5 = (EIF_REAL_64) (EIF_REAL_64) (loc4 - loc3);
		RTHOOK(18);
		tr8_1 = *(EIF_REAL_64 *)(loc8 + RTVA(11267, "x_precise", loc8));
		ur8_1 = (EIF_REAL_64) (tr8_1 + loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11271, "set_x_precise", loc9))(loc9, ur8_1x);
		RTHOOK(19);
		tr8_1 = *(EIF_REAL_64 *)(loc10 + RTVA(11267, "x_precise", loc10));
		ur8_1 = (EIF_REAL_64) (tr8_1 + loc5);
		tr8_2 = *(EIF_REAL_64 *)(loc10 + RTVA(11268, "y_precise", loc10));
		ur8_2 = (EIF_REAL_64) (tr8_2 + loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc10))(loc10, ur8_1x, ur8_2x);
	}
	RTHOOK(20);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18575, dtype))(Current);
	RTHOOK(21);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18573, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,1);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr8_1 = *(EIF_REAL_64 *)(tr2 + RTVA(11267, "x_precise", tr2));
		ur8_1 = tr8_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,2);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr8_2 = *(EIF_REAL_64 *)(tr2 + RTVA(11268, "y_precise", tr2));
		ur8_2 = tr8_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,3);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr8_3 = *(EIF_REAL_64 *)(tr2 + RTVA(11267, "x_precise", tr2));
		ur8_3 = tr8_3;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,4);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr8_4 = *(EIF_REAL_64 *)(tr2 + RTVA(11268, "y_precise", tr2));
		ur8_4 = tr8_4;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18479, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr1 = RTLN(eif_new_type(210, 0x00).id);
		*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4241, "rounded", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef up1
#undef up2
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ui4_1
#undef arg1
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.set_radius2 */
void F1841_23805 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_radius2";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,loc7);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc8);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,tr2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_INT32, &loc11);
	
	RTEAA(l_feature_name, 1840, Current, 11, 1, 29174);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1840, Current, 29174);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("radius_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg1);
	RTHOOK(3);
	RTDBGAL(7, 0xF8000108, 0, 0); /* loc7 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(8, 0xF80004EA, 0, 0); /* loc8 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc7))(loc7, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(9, 0xF80004EA, 0, 0); /* loc9 */
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc7))(loc7, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(10, 0xF80004EA, 0, 0); /* loc10 */
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc7))(loc7, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
	tr8_1 = *(EIF_REAL_64 *)(loc8 + RTVA(11267, "x_precise", loc8));
	ur8_1 = tr8_1;
	tr8_2 = *(EIF_REAL_64 *)(loc8 + RTVA(11268, "y_precise", loc8));
	ur8_2 = tr8_2;
	tr8_3 = *(EIF_REAL_64 *)(loc9 + RTVA(11267, "x_precise", loc9));
	ur8_3 = tr8_3;
	tr8_4 = *(EIF_REAL_64 *)(loc9 + RTVA(11268, "y_precise", loc9));
	ur8_4 = tr8_4;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18479, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
	loc1 = (EIF_REAL_64) tr8_1;
	RTHOOK(8);
	if ((EIF_BOOLEAN) eif_is_equal_real_64 (loc1, (EIF_REAL_64) 0.0)) {
		RTHOOK(9);
		tr8_1 = *(EIF_REAL_64 *)(loc8 + RTVA(11268, "y_precise", loc8));
		tr8_2 = (EIF_REAL_64) (loc11);
		ur8_1 = (EIF_REAL_64) (tr8_1 + tr8_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11272, "set_y_precise", loc9))(loc9, ur8_1x);
		RTHOOK(10);
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc7))(loc7, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr8_1 = *(EIF_REAL_64 *)(tr1 + RTVA(11268, "y_precise", tr1));
		tr8_2 = (EIF_REAL_64) (loc11);
		ur8_1 = (EIF_REAL_64) (tr8_1 + tr8_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11272, "set_y_precise", loc10))(loc10, ur8_1x);
	} else {
		RTHOOK(11);
		RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
		tr8_1 = *(EIF_REAL_64 *)(loc9 + RTVA(11268, "y_precise", loc9));
		tr8_2 = *(EIF_REAL_64 *)(loc8 + RTVA(11268, "y_precise", loc8));
		loc2 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - tr8_2);
		RTHOOK(12);
		RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
		tr8_1 = *(EIF_REAL_64 *)(loc9 + RTVA(11267, "x_precise", loc9));
		tr8_2 = *(EIF_REAL_64 *)(loc8 + RTVA(11267, "x_precise", loc8));
		loc3 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - tr8_2);
		RTHOOK(13);
		RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
		tr8_1 = (EIF_REAL_64) (loc11);
		loc4 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc2 * tr8_1)) /  (EIF_REAL_64) (loc1));
		RTHOOK(14);
		RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
		loc6 = (EIF_REAL_64) (EIF_REAL_64) (loc4 - loc2);
		RTHOOK(15);
		tr8_1 = *(EIF_REAL_64 *)(loc8 + RTVA(11268, "y_precise", loc8));
		ur8_1 = (EIF_REAL_64) (tr8_1 + loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11272, "set_y_precise", loc9))(loc9, ur8_1x);
		RTHOOK(16);
		RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
		tr8_1 = (EIF_REAL_64) (loc11);
		loc4 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc3 * tr8_1)) /  (EIF_REAL_64) (loc1));
		RTHOOK(17);
		RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
		loc5 = (EIF_REAL_64) (EIF_REAL_64) (loc4 - loc3);
		RTHOOK(18);
		tr8_1 = *(EIF_REAL_64 *)(loc8 + RTVA(11267, "x_precise", loc8));
		ur8_1 = (EIF_REAL_64) (tr8_1 + loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11271, "set_x_precise", loc9))(loc9, ur8_1x);
		RTHOOK(19);
		tr8_1 = *(EIF_REAL_64 *)(loc10 + RTVA(11267, "x_precise", loc10));
		ur8_1 = (EIF_REAL_64) (tr8_1 + loc5);
		tr8_2 = *(EIF_REAL_64 *)(loc10 + RTVA(11268, "y_precise", loc10));
		ur8_2 = (EIF_REAL_64) (tr8_2 + loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc10))(loc10, ur8_1x, ur8_2x);
	}
	RTHOOK(20);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18575, dtype))(Current);
	RTHOOK(21);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18573, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,1);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr8_1 = *(EIF_REAL_64 *)(tr2 + RTVA(11267, "x_precise", tr2));
		ur8_1 = tr8_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,2);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr8_2 = *(EIF_REAL_64 *)(tr2 + RTVA(11268, "y_precise", tr2));
		ur8_2 = tr8_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,3);
		ui4_1 = ((EIF_INTEGER_32) 3L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr8_3 = *(EIF_REAL_64 *)(tr2 + RTVA(11267, "x_precise", tr2));
		ur8_3 = tr8_3;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,4);
		ui4_1 = ((EIF_INTEGER_32) 3L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr8_4 = *(EIF_REAL_64 *)(tr2 + RTVA(11268, "y_precise", tr2));
		ur8_4 = tr8_4;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18479, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr1 = RTLN(eif_new_type(210, 0x00).id);
		*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4241, "rounded", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef up1
#undef up2
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ui4_1
#undef arg1
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.set_point_a_position */
void F1841_23806 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_point_a_position";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc8 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc9 = (EIF_REAL_64) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_REAL_64 loc12 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc13 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REAL64, &loc8);
	RTLU(SK_REAL64, &loc9);
	RTLU(SK_BOOL, &loc10);
	RTLU(SK_BOOL, &loc11);
	RTLU(SK_REAL64, &loc12);
	RTLU(SK_REAL64, &loc13);
	
	RTEAA(l_feature_name, 1840, Current, 13, 2, 29175);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1840, Current, 29175);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000108, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(2, 0xF80004EA, 0, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF80004EA, 0, 0); /* loc3 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(4, 0xF80004EA, 0, 0); /* loc4 */
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(5, 0xF80004EA, 0, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
	tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
	tr8_2 = *(EIF_REAL_64 *)(loc3 + RTVA(11267, "x_precise", loc3));
	loc12 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - tr8_2);
	RTHOOK(7);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_less_real_64 (loc12, (EIF_REAL_64) 0.1) && (EIF_BOOLEAN) eif_is_greater_real_64 (loc12, (EIF_REAL_64) -0.1))) {
		RTHOOK(8);
		RTDBGAL(10, 0x04000000, 1, 0); /* loc10 */
		loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(9);
		RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
		tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
		tr8_2 = *(EIF_REAL_64 *)(loc3 + RTVA(11268, "y_precise", loc3));
		loc6 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 - tr8_2)) /  (EIF_REAL_64) (loc12));
	}
	RTHOOK(10);
	RTDBGAL(13, 0x20000000, 1, 0); /* loc13 */
	tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
	tr8_2 = *(EIF_REAL_64 *)(loc5 + RTVA(11267, "x_precise", loc5));
	loc13 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - tr8_2);
	RTHOOK(11);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_less_real_64 (loc13, (EIF_REAL_64) 0.1) && (EIF_BOOLEAN) eif_is_greater_real_64 (loc13, (EIF_REAL_64) -0.1))) {
		RTHOOK(12);
		RTDBGAL(11, 0x04000000, 1, 0); /* loc11 */
		loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(13);
		RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
		tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
		tr8_2 = *(EIF_REAL_64 *)(loc5 + RTVA(11268, "y_precise", loc5));
		loc7 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 - tr8_2)) /  (EIF_REAL_64) (loc13));
	}
	RTHOOK(14);
	if ((EIF_BOOLEAN) (loc10 && loc11)) {
		RTHOOK(15);
		tr8_1 = (EIF_REAL_64) (arg2);
		ur8_1 = tr8_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11272, "set_y_precise", loc3))(loc3, ur8_1x);
		RTHOOK(16);
		tr8_1 = (EIF_REAL_64) (arg1);
		ur8_1 = tr8_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11271, "set_x_precise", loc5))(loc5, ur8_1x);
	} else {
		RTHOOK(17);
		if (loc10) {
			RTHOOK(18);
			RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
			tr8_1 = (EIF_REAL_64) (arg1);
			loc8 = (EIF_REAL_64) tr8_1;
			RTHOOK(19);
			RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
			tr8_1 = *(EIF_REAL_64 *)(loc3 + RTVA(11267, "x_precise", loc3));
			tr8_2 = *(EIF_REAL_64 *)(loc3 + RTVA(11268, "y_precise", loc3));
			loc9 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc7 * (EIF_REAL_64) (loc8 - tr8_1)) + tr8_2);
			RTHOOK(20);
			ur8_1 = loc8;
			ur8_2 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc3))(loc3, ur8_1x, ur8_2x);
			RTHOOK(21);
			RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
			tr8_1 = *(EIF_REAL_64 *)(loc5 + RTVA(11267, "x_precise", loc5));
			loc8 = (EIF_REAL_64) tr8_1;
			RTHOOK(22);
			RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
			tr8_1 = (EIF_REAL_64) (arg1);
			tr8_2 = (EIF_REAL_64) (arg2);
			loc9 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc7 * (EIF_REAL_64) (loc8 - tr8_1)) + tr8_2);
			RTHOOK(23);
			ur8_1 = loc8;
			ur8_2 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc5))(loc5, ur8_1x, ur8_2x);
		} else {
			RTHOOK(24);
			if (loc11) {
				RTHOOK(25);
				RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
				tr8_1 = *(EIF_REAL_64 *)(loc3 + RTVA(11267, "x_precise", loc3));
				loc8 = (EIF_REAL_64) tr8_1;
				RTHOOK(26);
				RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
				tr8_1 = (EIF_REAL_64) (arg1);
				tr8_2 = (EIF_REAL_64) (arg2);
				loc9 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc6 * (EIF_REAL_64) (loc8 - tr8_1)) + tr8_2);
				RTHOOK(27);
				ur8_1 = loc8;
				ur8_2 = loc9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc3))(loc3, ur8_1x, ur8_2x);
				RTHOOK(28);
				RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
				tr8_1 = (EIF_REAL_64) (arg1);
				loc8 = (EIF_REAL_64) tr8_1;
				RTHOOK(29);
				RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
				tr8_1 = *(EIF_REAL_64 *)(loc5 + RTVA(11267, "x_precise", loc5));
				tr8_2 = *(EIF_REAL_64 *)(loc5 + RTVA(11268, "y_precise", loc5));
				loc9 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc6 * (EIF_REAL_64) (loc8 - tr8_1)) + tr8_2);
				RTHOOK(30);
				ur8_1 = loc8;
				ur8_2 = loc9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc5))(loc5, ur8_1x, ur8_2x);
			} else {
				RTHOOK(31);
				if ((EIF_BOOLEAN) eif_is_equal_real_64 (loc6, loc7)) {
					RTHOOK(32);
					tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
					ur8_1 = tr8_1;
					tr8_2 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
					ur8_2 = tr8_2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc3))(loc3, ur8_1x, ur8_2x);
					RTHOOK(33);
					tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
					ur8_1 = tr8_1;
					tr8_2 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
					ur8_2 = tr8_2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc5))(loc5, ur8_1x, ur8_2x);
				} else {
					RTHOOK(34);
					RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
					tr8_1 = (EIF_REAL_64) (arg2);
					tr8_2 = *(EIF_REAL_64 *)(loc4 + RTVA(11268, "y_precise", loc4));
					tr8_3 = *(EIF_REAL_64 *)(loc4 + RTVA(11267, "x_precise", loc4));
					tr8_4 = (EIF_REAL_64) (arg1);
					loc8 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 - tr8_2) + (EIF_REAL_64) (loc6 * tr8_3)) - (EIF_REAL_64) (loc7 * tr8_4))) /  (EIF_REAL_64) ((EIF_REAL_64) (loc6 - loc7)));
					RTHOOK(35);
					RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
					tr8_1 = (EIF_REAL_64) (arg1);
					tr8_2 = (EIF_REAL_64) (arg2);
					loc9 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc7 * (EIF_REAL_64) (loc8 - tr8_1)) + tr8_2);
					RTHOOK(36);
					ur8_1 = loc8;
					ur8_2 = loc9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc5))(loc5, ur8_1x, ur8_2x);
					RTHOOK(37);
					RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
					tr8_1 = (EIF_REAL_64) (arg2);
					tr8_2 = *(EIF_REAL_64 *)(loc4 + RTVA(11268, "y_precise", loc4));
					tr8_3 = *(EIF_REAL_64 *)(loc4 + RTVA(11267, "x_precise", loc4));
					tr8_4 = (EIF_REAL_64) (arg1);
					loc8 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 - tr8_2) + (EIF_REAL_64) (loc7 * tr8_3)) - (EIF_REAL_64) (loc6 * tr8_4))) /  (EIF_REAL_64) ((EIF_REAL_64) (loc7 - loc6)));
					RTHOOK(38);
					RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
					tr8_1 = (EIF_REAL_64) (arg1);
					tr8_2 = (EIF_REAL_64) (arg2);
					loc9 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc6 * (EIF_REAL_64) (loc8 - tr8_1)) + tr8_2);
					RTHOOK(39);
					ur8_1 = loc8;
					ur8_2 = loc9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc3))(loc3, ur8_1x, ur8_2x);
				}
			}
		}
	}
	RTHOOK(40);
	tr8_1 = (EIF_REAL_64) (arg1);
	ur8_1 = tr8_1;
	tr8_2 = (EIF_REAL_64) (arg2);
	ur8_2 = tr8_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc2))(loc2, ur8_1x, ur8_2x);
	RTHOOK(41);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18575, dtype))(Current);
	RTHOOK(42);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18573, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(43);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
#undef up1
#undef ur8_1
#undef ur8_2
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.set_point_b_position */
void F1841_23807 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_point_b_position";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc8 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc9 = (EIF_REAL_64) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_REAL_64 loc12 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc13 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REAL64, &loc8);
	RTLU(SK_REAL64, &loc9);
	RTLU(SK_BOOL, &loc10);
	RTLU(SK_BOOL, &loc11);
	RTLU(SK_REAL64, &loc12);
	RTLU(SK_REAL64, &loc13);
	
	RTEAA(l_feature_name, 1840, Current, 13, 2, 29176);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1840, Current, 29176);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000108, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(2, 0xF80004EA, 0, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF80004EA, 0, 0); /* loc3 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(4, 0xF80004EA, 0, 0); /* loc4 */
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(5, 0xF80004EA, 0, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
	tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
	tr8_2 = *(EIF_REAL_64 *)(loc3 + RTVA(11267, "x_precise", loc3));
	loc12 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - tr8_2);
	RTHOOK(7);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_less_real_64 (loc12, (EIF_REAL_64) 0.1) && (EIF_BOOLEAN) eif_is_greater_real_64 (loc12, (EIF_REAL_64) -0.1))) {
		RTHOOK(8);
		RTDBGAL(10, 0x04000000, 1, 0); /* loc10 */
		loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(9);
		RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
		tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
		tr8_2 = *(EIF_REAL_64 *)(loc3 + RTVA(11268, "y_precise", loc3));
		loc6 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 - tr8_2)) /  (EIF_REAL_64) (loc12));
	}
	RTHOOK(10);
	RTDBGAL(13, 0x20000000, 1, 0); /* loc13 */
	tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
	tr8_2 = *(EIF_REAL_64 *)(loc5 + RTVA(11267, "x_precise", loc5));
	loc13 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - tr8_2);
	RTHOOK(11);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_less_real_64 (loc13, (EIF_REAL_64) 0.1) && (EIF_BOOLEAN) eif_is_greater_real_64 (loc13, (EIF_REAL_64) -0.1))) {
		RTHOOK(12);
		RTDBGAL(11, 0x04000000, 1, 0); /* loc11 */
		loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(13);
		RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
		tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
		tr8_2 = *(EIF_REAL_64 *)(loc5 + RTVA(11268, "y_precise", loc5));
		loc7 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 - tr8_2)) /  (EIF_REAL_64) (loc13));
	}
	RTHOOK(14);
	if ((EIF_BOOLEAN) (loc10 && loc11)) {
		RTHOOK(15);
		tr8_1 = (EIF_REAL_64) (arg1);
		ur8_1 = tr8_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11271, "set_x_precise", loc3))(loc3, ur8_1x);
		RTHOOK(16);
		tr8_1 = (EIF_REAL_64) (arg2);
		ur8_1 = tr8_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11272, "set_y_precise", loc5))(loc5, ur8_1x);
	} else {
		RTHOOK(17);
		if (loc10) {
			RTHOOK(18);
			RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
			tr8_1 = *(EIF_REAL_64 *)(loc3 + RTVA(11267, "x_precise", loc3));
			loc8 = (EIF_REAL_64) tr8_1;
			RTHOOK(19);
			RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
			tr8_1 = (EIF_REAL_64) (arg1);
			tr8_2 = (EIF_REAL_64) (arg2);
			loc9 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc7 * (EIF_REAL_64) (loc8 - tr8_1)) + tr8_2);
			RTHOOK(20);
			ur8_1 = loc8;
			ur8_2 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc3))(loc3, ur8_1x, ur8_2x);
			RTHOOK(21);
			RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
			tr8_1 = (EIF_REAL_64) (arg1);
			loc8 = (EIF_REAL_64) tr8_1;
			RTHOOK(22);
			RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
			tr8_1 = *(EIF_REAL_64 *)(loc5 + RTVA(11267, "x_precise", loc5));
			tr8_2 = *(EIF_REAL_64 *)(loc5 + RTVA(11268, "y_precise", loc5));
			loc9 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc7 * (EIF_REAL_64) (loc8 - tr8_1)) + tr8_2);
			RTHOOK(23);
			ur8_1 = loc8;
			ur8_2 = loc9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc5))(loc5, ur8_1x, ur8_2x);
		} else {
			RTHOOK(24);
			if (loc11) {
				RTHOOK(25);
				RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
				tr8_1 = (EIF_REAL_64) (arg1);
				loc8 = (EIF_REAL_64) tr8_1;
				RTHOOK(26);
				RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
				tr8_1 = *(EIF_REAL_64 *)(loc3 + RTVA(11267, "x_precise", loc3));
				tr8_2 = *(EIF_REAL_64 *)(loc3 + RTVA(11268, "y_precise", loc3));
				loc9 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc6 * (EIF_REAL_64) (loc8 - tr8_1)) + tr8_2);
				RTHOOK(27);
				ur8_1 = loc8;
				ur8_2 = loc9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc3))(loc3, ur8_1x, ur8_2x);
				RTHOOK(28);
				RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
				tr8_1 = *(EIF_REAL_64 *)(loc5 + RTVA(11267, "x_precise", loc5));
				loc8 = (EIF_REAL_64) tr8_1;
				RTHOOK(29);
				RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
				tr8_1 = (EIF_REAL_64) (arg1);
				tr8_2 = (EIF_REAL_64) (arg2);
				loc9 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc6 * (EIF_REAL_64) (loc8 - tr8_1)) + tr8_2);
				RTHOOK(30);
				ur8_1 = loc8;
				ur8_2 = loc9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc5))(loc5, ur8_1x, ur8_2x);
			} else {
				RTHOOK(31);
				if ((EIF_BOOLEAN) eif_is_equal_real_64 (loc6, loc7)) {
					RTHOOK(32);
					tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
					ur8_1 = tr8_1;
					tr8_2 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
					ur8_2 = tr8_2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc3))(loc3, ur8_1x, ur8_2x);
					RTHOOK(33);
					tr8_1 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
					ur8_1 = tr8_1;
					tr8_2 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
					ur8_2 = tr8_2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc5))(loc5, ur8_1x, ur8_2x);
				} else {
					RTHOOK(34);
					RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
					tr8_1 = (EIF_REAL_64) (arg2);
					tr8_2 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
					tr8_3 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
					tr8_4 = (EIF_REAL_64) (arg1);
					loc8 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 - tr8_2) + (EIF_REAL_64) (loc6 * tr8_3)) - (EIF_REAL_64) (loc7 * tr8_4))) /  (EIF_REAL_64) ((EIF_REAL_64) (loc6 - loc7)));
					RTHOOK(35);
					RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
					tr8_1 = (EIF_REAL_64) (arg1);
					tr8_2 = (EIF_REAL_64) (arg2);
					loc9 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc7 * (EIF_REAL_64) (loc8 - tr8_1)) + tr8_2);
					RTHOOK(36);
					ur8_1 = loc8;
					ur8_2 = loc9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc3))(loc3, ur8_1x, ur8_2x);
					RTHOOK(37);
					RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
					tr8_1 = (EIF_REAL_64) (arg2);
					tr8_2 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
					tr8_3 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
					tr8_4 = (EIF_REAL_64) (arg1);
					loc8 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 - tr8_2) + (EIF_REAL_64) (loc7 * tr8_3)) - (EIF_REAL_64) (loc6 * tr8_4))) /  (EIF_REAL_64) ((EIF_REAL_64) (loc7 - loc6)));
					RTHOOK(38);
					RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
					tr8_1 = (EIF_REAL_64) (arg1);
					tr8_2 = (EIF_REAL_64) (arg2);
					loc9 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc6 * (EIF_REAL_64) (loc8 - tr8_1)) + tr8_2);
					RTHOOK(39);
					ur8_1 = loc8;
					ur8_2 = loc9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc5))(loc5, ur8_1x, ur8_2x);
				}
			}
		}
	}
	RTHOOK(40);
	tr8_1 = (EIF_REAL_64) (arg1);
	ur8_1 = tr8_1;
	tr8_2 = (EIF_REAL_64) (arg2);
	ur8_2 = tr8_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc4))(loc4, ur8_1x, ur8_2x);
	RTHOOK(41);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18575, dtype))(Current);
	RTHOOK(42);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18573, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(43);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
#undef up1
#undef ur8_1
#undef ur8_2
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_MODEL_ROTATED_ELLIPTIC}.set_center */
void F1841_23808 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_center";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1840, Current, 3, 0, 29161);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1840, Current, 29161);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0xF8000108, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(1, 0xF80004EA, 0, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0xF80004EA, 0, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18609, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr8_1 = *(EIF_REAL_64 *)(loc1 + RTVA(11267, "x_precise", loc1));
	tr8_2 = *(EIF_REAL_64 *)(loc2 + RTVA(11267, "x_precise", loc2));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 + tr8_2)) /  (EIF_REAL_64) (tr8_3));
	tr8_4 = *(EIF_REAL_64 *)(loc1 + RTVA(11268, "y_precise", loc1));
	tr8_5 = *(EIF_REAL_64 *)(loc2 + RTVA(11268, "y_precise", loc2));
	tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_2 = (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_4 + tr8_5)) /  (EIF_REAL_64) (tr8_6));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", tr1))(tr1, ur8_1x, ur8_2x);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 18555, 0x04000000, 1); /* is_center_valid */
	*(EIF_BOOLEAN *)(Current + RTWA(18555, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("center_valid", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(18555, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur8_1
#undef ur8_2
#undef ui4_1
}

void EIF_Minit1841 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
