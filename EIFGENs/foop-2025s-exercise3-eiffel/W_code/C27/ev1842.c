/*
 * Code for class EV_MODEL_ROTATED_ARC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1842_23809(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1842_23810(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1842_23811(EIF_REFERENCE);
extern void F1842_23812(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1842_23813(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1842_23814(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1842_23815(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1842_24155(EIF_REFERENCE, int);
extern void EIF_Minit1842(void);

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

/* {EV_MODEL_ROTATED_ARC}.default_create */
void F1842_23809 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1841, Current, 0, 0, 29177);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1841, Current, 29177);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(32, 1840))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 18719, 0x20000000, 1); /* start_angle */
	*(EIF_REAL_64 *)(Current + RTWA(18719, dtype)) = (EIF_REAL_64) (EIF_REAL_64) 0.2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 18720, 0x20000000, 1); /* aperture */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(18720, dtype)) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_MODEL_ROTATED_ARC}.start_angle */
EIF_TYPED_VALUE F1842_23810 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(18719,Dtype(Current)));
	return r;
}


/* {EV_MODEL_ROTATED_ARC}.aperture */
EIF_TYPED_VALUE F1842_23811 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(18720,Dtype(Current)));
	return r;
}


/* {EV_MODEL_ROTATED_ARC}.project */
void F1842_23812 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "project";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1841, Current, 0, 1, 29180);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1841, Current, 29180);
	RTCC(arg1, 1841, l_feature_name, 1, eif_new_type(1860, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18823, "draw_figure_rotated_arc", arg1))(arg1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {EV_MODEL_ROTATED_ARC}.set_start_angle */
void F1842_23813 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_start_angle";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1841, Current, 0, 1, 29181);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1841, Current, 29181);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_start_angle_within_bounds", EX_PRE);
		tb1 = '\0';
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg1, tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
			tb1 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (arg1, (EIF_REAL_64) (tr8_1 * tr8_2));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 18719, 0x20000000, 1); /* start_angle */
	*(EIF_REAL_64 *)(Current + RTWA(18719, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18575, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("start_angle_assigned", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18719, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg1)) {
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
#undef arg1
}

/* {EV_MODEL_ROTATED_ARC}.set_aperture */
void F1842_23814 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_aperture";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1841, Current, 0, 1, 29182);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1841, Current, 29182);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_aperture_within_bounds", EX_PRE);
		tb1 = '\0';
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg1, tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
			tb1 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (arg1, (EIF_REAL_64) (tr8_1 * tr8_2));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 18720, 0x20000000, 1); /* aperture */
	*(EIF_REAL_64 *)(Current + RTWA(18720, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18575, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("aperture_assigned", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18720, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg1)) {
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
#undef arg1
}

/* {EV_MODEL_ROTATED_ARC}.position_on_figure */
EIF_TYPED_VALUE F1842_23815 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "position_on_figure";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc10 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc11 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc12 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc13 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc15 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
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
	EIF_TYPED_VALUE ur8_5x = {{0}, SK_REAL64};
#define ur8_5 ur8_5x.it_r8
	EIF_TYPED_VALUE ur8_6x = {{0}, SK_REAL64};
#define ur8_6 ur8_6x.it_r8
	EIF_TYPED_VALUE ur8_7x = {{0}, SK_REAL64};
#define ur8_7 ur8_7x.it_r8
	EIF_TYPED_VALUE ur8_8x = {{0}, SK_REAL64};
#define ur8_8 ur8_8x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REAL_64 tr8_7;
	EIF_REAL_64 tr8_8;
	EIF_REAL_64 tr8_9;
	EIF_REAL_64 tr8_10;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc14);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLR(4,loc7);
	RTLR(5,loc8);
	RTLR(6,loc9);
	RTLIU(7);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REAL64, &loc10);
	RTLU(SK_REAL64, &loc11);
	RTLU(SK_REAL64, &loc12);
	RTLU(SK_REAL64, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REAL64, &loc15);
	
	RTEAA(l_feature_name, 1841, Current, 15, 2, 29183);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1841, Current, 29183);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18720, dtype));
	if ((EIF_BOOLEAN) !eif_is_equal_real_64 (tr8_1, (EIF_REAL_64) 0.0)) {
		RTHOOK(2);
		RTDBGAL(14, 0xF8000108, 0, 0); /* loc14 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc14 = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		RTDBGAL(6, 0xF80004EA, 0, 0); /* loc6 */
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(7, 0xF80004EA, 0, 0); /* loc7 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc7 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(8, 0xF80004EA, 0, 0); /* loc8 */
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc8 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(9, 0xF80004EA, 0, 0); /* loc9 */
		ui4_1 = ((EIF_INTEGER_32) 3L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc9 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
		tr8_1 = *(EIF_REAL_64 *)(loc6 + RTVA(11267, "x_precise", loc6));
		loc12 = (EIF_REAL_64) tr8_1;
		RTHOOK(8);
		RTDBGAL(13, 0x20000000, 1, 0); /* loc13 */
		tr8_1 = *(EIF_REAL_64 *)(loc6 + RTVA(11268, "y_precise", loc6));
		loc13 = (EIF_REAL_64) tr8_1;
		RTHOOK(9);
		RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
		tr8_1 = *(EIF_REAL_64 *)(loc8 + RTVA(11267, "x_precise", loc8));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc1 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc12 + tr8_1)) /  (EIF_REAL_64) (tr8_2));
		RTHOOK(10);
		RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
		tr8_1 = *(EIF_REAL_64 *)(loc8 + RTVA(11268, "y_precise", loc8));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc2 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc13 + tr8_1)) /  (EIF_REAL_64) (tr8_2));
		RTHOOK(11);
		RTDBGAL(10, 0x20000000, 1, 0); /* loc10 */
		ur8_1 = loc12;
		ur8_2 = loc13;
		tr8_1 = *(EIF_REAL_64 *)(loc7 + RTVA(11267, "x_precise", loc7));
		ur8_3 = tr8_1;
		tr8_2 = *(EIF_REAL_64 *)(loc7 + RTVA(11268, "y_precise", loc7));
		ur8_4 = tr8_2;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18479, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc10 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
		RTHOOK(12);
		RTDBGAL(11, 0x20000000, 1, 0); /* loc11 */
		ur8_1 = loc12;
		ur8_2 = loc13;
		tr8_1 = *(EIF_REAL_64 *)(loc9 + RTVA(11267, "x_precise", loc9));
		ur8_3 = tr8_1;
		tr8_2 = *(EIF_REAL_64 *)(loc9 + RTVA(11268, "y_precise", loc9));
		ur8_4 = tr8_2;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18479, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc11 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
		RTHOOK(13);
		RTDBGAL(15, 0x20000000, 1, 0); /* loc15 */
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18528, dtype))(Current)).it_r8);
		loc15 = (EIF_REAL_64) tr8_1;
		RTHOOK(14);
		RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
		ur8_1 = loc1;
		ur8_2 = loc2;
		tr8_3 = (EIF_REAL_64) (arg1);
		ur8_3 = loc15;
		tr8_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1632, dtype))(Current, ur8_3x)).it_r8);
		tr8_5 = (EIF_REAL_64) (arg2);
		ur8_3 = loc15;
		tr8_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1634, dtype))(Current, ur8_3x)).it_r8);
		ur8_3 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_3 * tr8_4) - (EIF_REAL_64) (tr8_5 * tr8_6));
		tr8_7 = (EIF_REAL_64) (arg1);
		ur8_4 = loc15;
		tr8_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1634, dtype))(Current, ur8_4x)).it_r8);
		tr8_9 = (EIF_REAL_64) (arg2);
		ur8_4 = loc15;
		tr8_10 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1632, dtype))(Current, ur8_4x)).it_r8);
		ur8_4 = (EIF_REAL_64) ((EIF_REAL_64) (tr8_7 * tr8_8) + (EIF_REAL_64) (tr8_9 * tr8_10));
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18481, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
		loc3 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) - tr8_3);
		RTHOOK(15);
		RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18719, dtype));
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(18720, dtype));
		ur8_1 = (EIF_REAL_64) (tr8_1 + tr8_2);
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
		ur8_2 = (EIF_REAL_64) (tr8_3 * tr8_4);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18492, dtype))(Current, ur8_1x, ur8_2x)).it_r8);
		loc4 = (EIF_REAL_64) tr8_1;
		RTHOOK(16);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18719, dtype));
		if ((EIF_BOOLEAN) eif_is_less_real_64 (tr8_1, loc4)) {
			RTHOOK(17);
			RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18719, dtype));
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (loc3, tr8_1) && (EIF_BOOLEAN) eif_is_less_equal_real_64 (loc3, loc4));
		} else {
			RTHOOK(18);
			RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18719, dtype));
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (loc3, tr8_1) || (EIF_BOOLEAN) eif_is_less_equal_real_64 (loc3, loc4));
		}
		RTHOOK(19);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tr8_1 = (EIF_REAL_64) (arg1);
		ur8_1 = tr8_1;
		tr8_2 = (EIF_REAL_64) (arg2);
		ur8_2 = tr8_2;
		ur8_3 = loc1;
		ur8_4 = loc2;
		ur8_5 = loc10;
		ur8_6 = loc11;
		ur8_7 = (EIF_REAL_64) -loc15;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(18670, dtype));
		tr8_3 = (EIF_REAL_64) (ti4_1);
		ur8_8 = tr8_3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18489, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x, ur8_5x, ur8_6x, ur8_7x, ur8_8x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(20);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(19);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ur8_5
#undef ur8_6
#undef ur8_7
#undef ur8_8
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_MODEL_ROTATED_ARC}._invariant */
void F1842_24155 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1841, Current, 0, 24154);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("start_angle_within_bounds", Current);
	tb1 = '\0';
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18719, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, tr8_2)) {
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18719, dtype));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
		tb1 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (tr8_1, (EIF_REAL_64) (tr8_2 * tr8_3));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("aperture_within_bounds", Current);
	tb1 = '\0';
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18720, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, tr8_2)) {
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18720, dtype));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
		tb1 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (tr8_1, (EIF_REAL_64) (tr8_2 * tr8_3));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit1842 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
