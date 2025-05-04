/*
 * Code for class EV_MODEL_PIE_SLICE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1848_23861(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1848_23862(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1848_23863(EIF_REFERENCE);
extern void F1848_23864(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1848_23865(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1848_23866(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1848_23867(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1848_24158(EIF_REFERENCE, int);
extern void EIF_Minit1848(void);

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

/* {EV_MODEL_PIE_SLICE}.default_create */
void F1848_23861 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1847, Current, 0, 0, 29233);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1847, Current, 29233);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(32, 1842))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 18742, 0x20000000, 1); /* start_angle */
	*(EIF_REAL_64 *)(Current + RTWA(18742, dtype)) = (EIF_REAL_64) (EIF_REAL_64) 0.2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 18743, 0x20000000, 1); /* aperture */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	*(EIF_REAL_64 *)(Current + RTWA(18743, dtype)) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_MODEL_PIE_SLICE}.start_angle */
EIF_TYPED_VALUE F1848_23862 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(18742,Dtype(Current)));
	return r;
}


/* {EV_MODEL_PIE_SLICE}.aperture */
EIF_TYPED_VALUE F1848_23863 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(18743,Dtype(Current)));
	return r;
}


/* {EV_MODEL_PIE_SLICE}.project */
void F1848_23864 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 1847, Current, 0, 1, 29236);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1847, Current, 29236);
	RTCC(arg1, 1847, l_feature_name, 1, eif_new_type(1860, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18830, "draw_figure_pie_slice", arg1))(arg1, ur1x);
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

/* {EV_MODEL_PIE_SLICE}.set_start_angle */
void F1848_23865 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 1847, Current, 0, 1, 29237);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1847, Current, 29237);
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
	RTDBGAA(Current, dtype, 18742, 0x20000000, 1); /* start_angle */
	*(EIF_REAL_64 *)(Current + RTWA(18742, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18575, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("start_angle_assigned", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18742, dtype));
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

/* {EV_MODEL_PIE_SLICE}.set_aperture */
void F1848_23866 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 1847, Current, 0, 1, 29238);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1847, Current, 29238);
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
	RTDBGAA(Current, dtype, 18743, 0x20000000, 1); /* aperture */
	*(EIF_REAL_64 *)(Current + RTWA(18743, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18575, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("aperture_assigned", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18743, dtype));
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

/* {EV_MODEL_PIE_SLICE}.position_on_figure */
EIF_TYPED_VALUE F1848_23867 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "position_on_figure";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc8 = (EIF_REAL_64) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc12);
	RTLR(2,tr1);
	RTLR(3,loc10);
	RTLR(4,loc11);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REAL64, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	
	RTEAA(l_feature_name, 1847, Current, 12, 2, 29239);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1847, Current, 29239);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18743, dtype));
	if ((EIF_BOOLEAN) !eif_is_equal_real_64 (tr8_1, (EIF_REAL_64) 0.0)) {
		RTHOOK(2);
		RTDBGAL(12, 0xF8000108, 0, 0); /* loc12 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18574, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc12 = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		RTDBGAL(10, 0xF80004EA, 0, 0); /* loc10 */
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc12))(loc12, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc10 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(11, 0xF80004EA, 0, 0); /* loc11 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc12))(loc12, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc11 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
		tr8_1 = *(EIF_REAL_64 *)(loc10 + RTVA(11267, "x_precise", loc10));
		loc3 = (EIF_REAL_64) tr8_1;
		RTHOOK(6);
		RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
		tr8_1 = *(EIF_REAL_64 *)(loc10 + RTVA(11268, "y_precise", loc10));
		loc4 = (EIF_REAL_64) tr8_1;
		RTHOOK(7);
		RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
		tr8_1 = *(EIF_REAL_64 *)(loc11 + RTVA(11267, "x_precise", loc11));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc1 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc3 + tr8_1)) /  (EIF_REAL_64) (tr8_2));
		RTHOOK(8);
		RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
		tr8_1 = *(EIF_REAL_64 *)(loc11 + RTVA(11268, "y_precise", loc11));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc2 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc4 + tr8_1)) /  (EIF_REAL_64) (tr8_2));
		RTHOOK(9);
		RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
		tr8_1 = eif_abs_real64 ((EIF_REAL_64) (loc1 - loc3));
		loc7 = (EIF_REAL_64) tr8_1;
		RTHOOK(10);
		RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
		tr8_1 = eif_abs_real64 ((EIF_REAL_64) (loc2 - loc4));
		loc8 = (EIF_REAL_64) tr8_1;
		RTHOOK(11);
		RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18498, dtype))(Current)).it_r8);
		ur8_1 = loc1;
		ur8_2 = loc2;
		tr8_2 = (EIF_REAL_64) (arg1);
		ur8_3 = tr8_2;
		tr8_3 = (EIF_REAL_64) (arg2);
		ur8_4 = tr8_3;
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18481, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x)).it_r8);
		loc5 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - tr8_2);
		RTHOOK(12);
		RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18742, dtype));
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(18743, dtype));
		ur8_1 = (EIF_REAL_64) (tr8_1 + tr8_2);
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18498, dtype))(Current)).it_r8);
		ur8_2 = tr8_3;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18492, dtype))(Current, ur8_1x, ur8_2x)).it_r8);
		loc6 = (EIF_REAL_64) tr8_1;
		RTHOOK(13);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18742, dtype));
		if ((EIF_BOOLEAN) eif_is_less_real_64 (tr8_1, loc6)) {
			RTHOOK(14);
			RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18742, dtype));
			loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (loc5, tr8_1) && (EIF_BOOLEAN) eif_is_less_equal_real_64 (loc5, loc6));
		} else {
			RTHOOK(15);
			RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18742, dtype));
			loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (loc5, tr8_1) || (EIF_BOOLEAN) eif_is_less_equal_real_64 (loc5, loc6));
		}
		RTHOOK(16);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = '\0';
		if (loc9) {
			tr8_1 = (EIF_REAL_64) (arg1);
			ur8_1 = tr8_1;
			tr8_2 = (EIF_REAL_64) (arg2);
			ur8_2 = tr8_2;
			ur8_3 = loc1;
			ur8_4 = loc2;
			ur8_5 = loc7;
			ur8_6 = loc8;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18486, dtype))(Current, ur8_1x, ur8_2x, ur8_3x, ur8_4x, ur8_5x, ur8_6x)).it_b);
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(17);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ur8_5
#undef ur8_6
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_MODEL_PIE_SLICE}._invariant */
void F1848_24158 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 1847, Current, 0, 24157);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("start_angle_within_bounds", Current);
	tb1 = '\0';
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18742, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, tr8_2)) {
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18742, dtype));
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
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18743, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, tr8_2)) {
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(18743, dtype));
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

void EIF_Minit1848 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
