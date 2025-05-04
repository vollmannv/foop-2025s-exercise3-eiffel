/*
 * Code for class EV_MODEL_DRAWER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1863_24068(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1863_24069(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1863_24070(EIF_REFERENCE);
extern void F1863_24071(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1863_24072(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1863_24073(EIF_REFERENCE);
extern void F1863_24074(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24075(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24076(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24077(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24078(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24079(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24080(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24081(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24082(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24083(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24084(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24085(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24086(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24087(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24088(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24089(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24090(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24091(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24092(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24093(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24094(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1863_24095(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1863_24096(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1863_24097(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1863_24098(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1863_24099(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1863_24100(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1863_24164(EIF_REFERENCE, int);
extern void EIF_Minit1863(void);

#ifdef __cplusplus
}
#endif

#include <math.h>
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

/* {EV_MODEL_DRAWER}.make_with_drawable */
void F1863_24068 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_with_drawable";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 1862, Current, 0, 1, 29456);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29456);
	RTCC(arg1, 1862, l_feature_name, 1, RTWCT(18855, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_drawable_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18857, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("assigned", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
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
#undef up1
#undef ur1
#undef arg1
}

/* {EV_MODEL_DRAWER}.offset_x */
EIF_TYPED_VALUE F1863_24069 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "offset_x";
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
	
	RTEAA(l_feature_name, 1862, Current, 0, 0, 29423);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29423);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_MODEL_DRAWER}.offset_y */
EIF_TYPED_VALUE F1863_24070 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "offset_y";
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
	
	RTEAA(l_feature_name, 1862, Current, 0, 0, 29424);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29424);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_MODEL_DRAWER}.draw_grid */
void F1863_24071 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_grid";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc9);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 1862, Current, 9, 1, 29425);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29425);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1833, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18640, "grid_x", arg1));
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18641, "grid_y", arg1));
	loc6 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(9, 0xF80005AB, 0, 0); /* loc9 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18856, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7696, "grey", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc9))(loc9, ur1x);
	RTHOOK(5);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14195, "height", loc9))(loc9)).it_i4);
	loc7 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14194, "width", loc9))(loc9)).it_i4);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 % loc5);
	RTHOOK(8);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 % loc6);
	RTHOOK(9);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) loc4;
	for (;;) {
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc2 > loc7)) break;
		RTHOOK(11);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) loc3;
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN) (loc1 > loc8)) break;
			RTHOOK(13);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			ui4_1 = loc1;
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14211, "draw_point", tr1))(tr1, ui4_1x, ui4_2x);
			RTHOOK(14);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 += loc5;
		}
		RTHOOK(15);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 += loc6;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_MODEL_DRAWER}.drawable */
EIF_TYPED_VALUE F1863_24072 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(18855,Dtype(Current)));
	return r;
}


/* {EV_MODEL_DRAWER}.default_colors */
RTOID (F1863_24073)
EIF_TYPED_VALUE F1863_24073 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_colors";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1863_24073);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1862, Current, 0, 0, 29427);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29427);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000410, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1040, 0x01).id);
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

/* {EV_MODEL_DRAWER}.set_drawable */
void F1863_24074 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_drawable";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 1862, Current, 0, 1, 29428);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29428);
	RTCC(arg1, 1862, l_feature_name, 1, RTWCT(18855, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_drawable_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 18855, 0xF80005AB, 0); /* drawable */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(18855, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("assigned", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
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
#undef up1
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_arc */
void F1863_24075 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_arc";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLR(4,loc7);
	RTLR(5,loc12);
	RTLR(6,Current);
	RTLR(7,ur1);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_REF, &loc12);
	
	RTEAA(l_feature_name, 1862, Current, 12, 1, 29429);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29429);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1843, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("arc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000108, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(6, 0xF80004EA, 0, 0); /* loc6 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(7, 0xF80004EA, 0, 0); /* loc7 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc6))(loc6)).it_i4);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc6))(loc6)).it_i4);
	loc9 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc7))(loc7)).it_i4);
	loc10 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc7))(loc7)).it_i4);
	loc11 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ui4_1 = loc10;
	ti4_1 = eif_min_int32 (loc8,ui4_1);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ui4_1 = loc10;
	ti4_1 = eif_max_int32 (loc8,ui4_1);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ui4_1 = loc11;
	ti4_1 = eif_min_int32 (loc9,ui4_1);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ui4_1 = loc11;
	ti4_1 = eif_max_int32 (loc9,ui4_1);
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(13);
	RTDBGAL(12, 0xF80005AB, 0, 0); /* loc12 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc12))(loc12);
	}
	RTHOOK(16);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc12))(loc12, ui4_1x);
	RTHOOK(17);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc12))(loc12, ur1x);
	RTHOOK(18);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (loc2 + ti4_1);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
	ui4_2 = (EIF_INTEGER_32) (loc3 + ti4_2);
	ui4_3 = (EIF_INTEGER_32) (loc4 - loc2);
	ui4_4 = (EIF_INTEGER_32) (loc5 - loc3);
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(18728, "start_angle", arg1));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(18729, "aperture", arg1));
	tr4_2 = (EIF_REAL_32) (tr8_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14223, "draw_arc", loc12))(loc12, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur4_1x, ur4_2x);
	RTHOOK(19);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(20);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc12))(loc12);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef ur1
#undef ur4_1
#undef ur4_2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_rotated_arc */
void F1863_24076 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_rotated_arc";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc11 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,loc1);
	RTLR(7,Current);
	RTLR(8,ur1);
	RTLR(9,loc6);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_REAL64, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	
	RTEAA(l_feature_name, 1862, Current, 13, 1, 29430);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29430);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1841, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("arc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(2, 0xF8000108, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(3, 0xF80004EA, 0, 0); /* loc3 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(4, 0xF80004EA, 0, 0); /* loc4 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(5, 0xF80004EA, 0, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18715, "radius1", arg1))(arg1)).it_i4);
	loc9 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18716, "radius2", arg1))(arg1)).it_i4);
	loc10 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAL(1, 0xF80005AB, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	loc12 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
	loc13 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc9 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
		RTHOOK(13);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc1))(loc1, ui4_1x);
		RTHOOK(14);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
		if (tb1) {
			RTHOOK(15);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc1))(loc1);
		}
		RTHOOK(16);
		if ((EIF_BOOLEAN)(loc9 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(17);
			RTDBGAL(6, 0xF80004EA, 0, 0); /* loc6 */
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(18);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc3))(loc3)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc12);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc3))(loc3)).it_i4);
			ui4_2 = (EIF_INTEGER_32) (ti4_2 + loc13);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc6))(loc6)).it_i4);
			ui4_3 = (EIF_INTEGER_32) (ti4_3 + loc12);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc6))(loc6)).it_i4);
			ui4_4 = (EIF_INTEGER_32) (ti4_4 + loc13);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		} else {
			RTHOOK(19);
			RTDBGAL(4, 0xF80004EA, 0, 0); /* loc4 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(20);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc3))(loc3)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc12);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc3))(loc3)).it_i4);
			ui4_2 = (EIF_INTEGER_32) (ti4_2 + loc13);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc4))(loc4)).it_i4);
			ui4_3 = (EIF_INTEGER_32) (ti4_3 + loc12);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc4))(loc4)).it_i4);
			ui4_4 = (EIF_INTEGER_32) (ti4_4 + loc13);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		}
		RTHOOK(21);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
		if (tb1) {
			RTHOOK(22);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc1))(loc1);
		}
	} else {
		RTHOOK(23);
		RTDBGAL(5, 0xF80004EA, 0, 0); /* loc5 */
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(24);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		tr8_1 = *(EIF_REAL_64 *)(loc3 + RTVA(11267, "x_precise", loc3));
		tr8_2 = *(EIF_REAL_64 *)(loc5 + RTVA(11267, "x_precise", loc5));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 + tr8_2)) /  (EIF_REAL_64) (tr8_3));
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(25);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		tr8_1 = *(EIF_REAL_64 *)(loc3 + RTVA(11268, "y_precise", loc3));
		tr8_2 = *(EIF_REAL_64 *)(loc5 + RTVA(11268, "y_precise", loc5));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 + tr8_2)) /  (EIF_REAL_64) (tr8_3));
		loc8 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(26);
		RTDBGAL(11, 0x20000000, 1, 0); /* loc11 */
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18528, "angle", arg1))(arg1)).it_r8);
		loc11 = (EIF_REAL_64) tr8_1;
		RTHOOK(27);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
		RTHOOK(28);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc1))(loc1, ui4_1x);
		RTHOOK(29);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
		if (tb1) {
			RTHOOK(30);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc1))(loc1);
		}
		RTHOOK(31);
		ui4_1 = (EIF_INTEGER_32) (loc7 + loc12);
		ui4_2 = (EIF_INTEGER_32) (loc8 + loc13);
		ui4_3 = loc9;
		ui4_4 = loc10;
		ur8_1 = (EIF_REAL_64) -loc11;
		tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(18719, "start_angle", arg1));
		ur8_2 = tr8_1;
		tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(18720, "aperture", arg1));
		ur8_3 = tr8_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18862, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x, ur8_2x, ur8_3x);
		RTHOOK(32);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
		if (tb1) {
			RTHOOK(33);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc1))(loc1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_dot */
void F1863_24077 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_dot";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc4);
	RTLR(6,tr2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1862, Current, 4, 1, 29431);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29431);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1837, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("dot_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(3, 0xF80005AB, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc3))(loc3);
	}
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc3))(loc3, ur1x);
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 / ((EIF_INTEGER_32) 2L));
	RTHOOK(8);
	RTDBGAL(4, 0xF80004EA, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(9);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc4))(loc4)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc2) + ti4_2);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc4))(loc4)).it_i4);
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
	ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - loc2) + ti4_4);
	ui4_3 = loc1;
	ui4_4 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14229, "fill_ellipse", loc3))(loc3, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(10);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc3))(loc3);
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
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_ellipse */
void F1863_24078 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_ellipse";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLR(4,loc7);
	RTLR(5,loc12);
	RTLR(6,Current);
	RTLR(7,loc13);
	RTLR(8,ur1);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	
	RTEAA(l_feature_name, 1862, Current, 15, 1, 29432);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29432);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1850, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ellipse_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000108, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(6, 0xF80004EA, 0, 0); /* loc6 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(7, 0xF80004EA, 0, 0); /* loc7 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc6))(loc6)).it_i4);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc6))(loc6)).it_i4);
	loc9 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc7))(loc7)).it_i4);
	loc10 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc7))(loc7)).it_i4);
	loc11 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ui4_1 = loc10;
	ti4_1 = eif_min_int32 (loc8,ui4_1);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ui4_1 = loc10;
	ti4_1 = eif_max_int32 (loc8,ui4_1);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ui4_1 = loc11;
	ti4_1 = eif_min_int32 (loc9,ui4_1);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ui4_1 = loc11;
	ti4_1 = eif_max_int32 (loc9,ui4_1);
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(13);
	RTDBGAL(12, 0xF80005AB, 0, 0); /* loc12 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc12))(loc12);
	}
	RTHOOK(16);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc12))(loc12, ui4_1x);
	RTHOOK(17);
	RTDBGAL(13, 0xF8000593, 0, 0); /* loc13 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18732, "background_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(18);
	RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	loc14 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(19);
	RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
	loc15 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(20);
	if ((EIF_BOOLEAN)(loc13 != NULL)) {
		RTHOOK(21);
		ur1 = RTCCL(loc13);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc12))(loc12, ur1x);
		RTHOOK(22);
		ui4_1 = (EIF_INTEGER_32) (loc2 + loc14);
		ui4_2 = (EIF_INTEGER_32) (loc3 + loc15);
		ui4_3 = (EIF_INTEGER_32) (loc4 - loc2);
		ui4_4 = (EIF_INTEGER_32) (loc5 - loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14229, "fill_ellipse", loc12))(loc12, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	}
	RTHOOK(23);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc12))(loc12, ur1x);
	RTHOOK(24);
	ui4_1 = (EIF_INTEGER_32) (loc2 + loc14);
	ui4_2 = (EIF_INTEGER_32) (loc3 + loc15);
	ui4_3 = (EIF_INTEGER_32) (loc4 - loc2);
	ui4_4 = (EIF_INTEGER_32) (loc5 - loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14225, "draw_ellipse", loc12))(loc12, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(25);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(26);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc12))(loc12);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_rotated_ellipse */
void F1863_24079 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_rotated_ellipse";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc12 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,loc2);
	RTLR(7,Current);
	RTLR(8,ur1);
	RTLR(9,loc7);
	RTLR(10,loc1);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_REAL64, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	
	RTEAA(l_feature_name, 1862, Current, 14, 1, 29433);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29433);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1849, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ellipse_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(3, 0xF8000108, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(4, 0xF80004EA, 0, 0); /* loc4 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(5, 0xF80004EA, 0, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(6, 0xF80004EA, 0, 0); /* loc6 */
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18715, "radius1", arg1))(arg1)).it_i4);
	loc10 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18716, "radius2", arg1))(arg1)).it_i4);
	loc11 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAL(2, 0xF80005AB, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	loc13 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
	loc14 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc11 == ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
		RTHOOK(13);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc2))(loc2, ui4_1x);
		RTHOOK(14);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
		if (tb1) {
			RTHOOK(15);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc2))(loc2);
		}
		RTHOOK(16);
		if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(17);
			RTDBGAL(7, 0xF80004EA, 0, 0); /* loc7 */
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(18);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc4))(loc4)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc13);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc4))(loc4)).it_i4);
			ui4_2 = (EIF_INTEGER_32) (ti4_2 + loc14);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc7))(loc7)).it_i4);
			ui4_3 = (EIF_INTEGER_32) (ti4_3 + loc13);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc7))(loc7)).it_i4);
			ui4_4 = (EIF_INTEGER_32) (ti4_4 + loc14);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc2))(loc2, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		} else {
			RTHOOK(19);
			RTDBGAL(5, 0xF80004EA, 0, 0); /* loc5 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(20);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc4))(loc4)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc13);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc4))(loc4)).it_i4);
			ui4_2 = (EIF_INTEGER_32) (ti4_2 + loc14);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc5))(loc5)).it_i4);
			ui4_3 = (EIF_INTEGER_32) (ti4_3 + loc13);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc5))(loc5)).it_i4);
			ui4_4 = (EIF_INTEGER_32) (ti4_4 + loc14);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc2))(loc2, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		}
		RTHOOK(21);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
		if (tb1) {
			RTHOOK(22);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc2))(loc2);
		}
	} else {
		RTHOOK(23);
		RTDBGAL(1, 0xF8000593, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18732, "background_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(24);
		RTDBGAL(6, 0xF80004EA, 0, 0); /* loc6 */
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(25);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		tr8_1 = *(EIF_REAL_64 *)(loc4 + RTVA(11267, "x_precise", loc4));
		tr8_2 = *(EIF_REAL_64 *)(loc6 + RTVA(11267, "x_precise", loc6));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 + tr8_2)) /  (EIF_REAL_64) (tr8_3));
		loc8 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(26);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		tr8_1 = *(EIF_REAL_64 *)(loc4 + RTVA(11268, "y_precise", loc4));
		tr8_2 = *(EIF_REAL_64 *)(loc6 + RTVA(11268, "y_precise", loc6));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 + tr8_2)) /  (EIF_REAL_64) (tr8_3));
		loc9 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(27);
		RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18528, "angle", arg1))(arg1)).it_r8);
		loc12 = (EIF_REAL_64) tr8_1;
		RTHOOK(28);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(29);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
			RTHOOK(30);
			ui4_1 = (EIF_INTEGER_32) (loc8 + loc13);
			ui4_2 = (EIF_INTEGER_32) (loc9 + loc14);
			ui4_3 = loc10;
			ui4_4 = loc11;
			ur8_1 = (EIF_REAL_64) -loc12;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18860, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x);
		}
		RTHOOK(31);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
		RTHOOK(32);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc2))(loc2, ui4_1x);
		RTHOOK(33);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
		if (tb1) {
			RTHOOK(34);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc2))(loc2);
		}
		RTHOOK(35);
		ui4_1 = (EIF_INTEGER_32) (loc8 + loc13);
		ui4_2 = (EIF_INTEGER_32) (loc9 + loc14);
		ui4_3 = loc10;
		ui4_4 = loc11;
		ur8_1 = (EIF_REAL_64) -loc12;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18861, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x);
		RTHOOK(36);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
		if (tb1) {
			RTHOOK(37);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc2))(loc2);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_equilateral */
void F1863_24080 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_equilateral";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1862, Current, 3, 1, 29434);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29434);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1848, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("eql_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(2, 0xF80005AB, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc2))(loc2);
	}
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc2))(loc2, ui4_1x);
	RTHOOK(6);
	RTDBGAL(1, 0xF8000593, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18732, "background_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(3, 0xF8000112, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18748, "polygon_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	tb1 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(9);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18858, dtype))(Current, ur1x);
	}
	RTHOOK(10);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(11);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
		RTHOOK(12);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc2))(loc2, ur1x);
	}
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
	RTHOOK(14);
	ur1 = RTCCL(loc3);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14226, "draw_polyline", loc2))(loc2, ur1x, ub1x);
	RTHOOK(15);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(16);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc2))(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_line */
void F1863_24081 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_line";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc1);
	RTLR(6,loc6);
	RTLR(7,tr2);
	RTLR(8,loc3);
	RTLR(9,loc4);
	RTLR(10,loc5);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	
	RTEAA(l_feature_name, 1862, Current, 8, 1, 29435);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29435);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1859, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("line_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(2, 0xF80005AB, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
	RTHOOK(4);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	loc7 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(arg1 + RTVA(18790, "is_start_arrow", arg1));
	if (!tb2) {
		tb2 = *(EIF_BOOLEAN *)(arg1 + RTVA(18791, "is_end_arrow", arg1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(7);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc2))(loc2, ui4_1x);
		RTHOOK(8);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18790, "is_start_arrow", arg1));
		if (tb1) {
			RTHOOK(9);
			RTDBGAL(1, 0xF8000735, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18799, "start_arrow", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(10);
			RTDBGAL(6, 0xF8000112, 0, 0); /* loc6 */
			tr1 = RTLN(eif_new_type(1830, 0x01).id);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(18525, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(10,1);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(11);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc7 != ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc8 != ((EIF_INTEGER_32) 0L)))) {
				RTHOOK(12);
				ur1 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18858, dtype))(Current, ur1x);
				RTHOOK(13);
				ur1 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc2))(loc2, ur1x);
				RTHOOK(14);
				ur1 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18859, dtype))(Current, ur1x);
			} else {
				RTHOOK(15);
				ur1 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc2))(loc2, ur1x);
			}
		}
		RTHOOK(16);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18791, "is_end_arrow", arg1));
		if (tb1) {
			RTHOOK(17);
			RTDBGAL(1, 0xF8000735, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18800, "end_arrow", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(18);
			RTDBGAL(6, 0xF8000112, 0, 0); /* loc6 */
			tr1 = RTLN(eif_new_type(1830, 0x01).id);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(18525, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(18,1);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(19);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc7 != ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc8 != ((EIF_INTEGER_32) 0L)))) {
				RTHOOK(20);
				ur1 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18858, dtype))(Current, ur1x);
				RTHOOK(21);
				ur1 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc2))(loc2, ur1x);
				RTHOOK(22);
				ur1 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18859, dtype))(Current, ur1x);
			} else {
				RTHOOK(23);
				ur1 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc2))(loc2, ur1x);
			}
		}
	}
	RTHOOK(24);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(25);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc2))(loc2);
	}
	RTHOOK(26);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc2))(loc2, ui4_1x);
	RTHOOK(27);
	RTDBGAL(3, 0xF8000108, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(28);
	RTDBGAL(4, 0xF80004EA, 0, 0); /* loc4 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(29);
	RTDBGAL(5, 0xF80004EA, 0, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(30);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc4))(loc4)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc7);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc4))(loc4)).it_i4);
	ui4_2 = (EIF_INTEGER_32) (ti4_2 + loc8);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc5))(loc5)).it_i4);
	ui4_3 = (EIF_INTEGER_32) (ti4_3 + loc7);
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc5))(loc5)).it_i4);
	ui4_4 = (EIF_INTEGER_32) (ti4_4 + loc8);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc2))(loc2, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(31);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(32);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc2))(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_picture */
void F1863_24082 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_picture";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLR(6,ur1);
	RTLR(7,loc3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1862, Current, 3, 1, 29436);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29436);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1839, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("picture_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF80004EA, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18710, "scaled_pixel_buffer", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc1))(loc1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc1))(loc1)).it_i4);
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
		ui4_2 = (EIF_INTEGER_32) (ti4_3 + ti4_4);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14220, "draw_pixel_buffer", tr1))(tr1, ui4_1x, ui4_2x, ur1x);
	} else {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18709, "scaled_pixmap", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc1))(loc1)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc1))(loc1)).it_i4);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
			ui4_2 = (EIF_INTEGER_32) (ti4_3 + ti4_4);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14219, "draw_pixmap", tr1))(tr1, ui4_1x, ui4_2x, ur1x);
		} else {
			if (RTAL & CK_CHECK) {
				RTHOOK(7);
				RTCT("has_pixmap_or_pixel_buffer", EX_CHECK);
					RTCF;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_pie_slice */
void F1863_24083 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_pie_slice";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLR(4,loc7);
	RTLR(5,loc12);
	RTLR(6,Current);
	RTLR(7,loc13);
	RTLR(8,ur1);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	
	RTEAA(l_feature_name, 1862, Current, 15, 1, 29437);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29437);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1847, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("slice_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000108, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(6, 0xF80004EA, 0, 0); /* loc6 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(7, 0xF80004EA, 0, 0); /* loc7 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc6))(loc6)).it_i4);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc6))(loc6)).it_i4);
	loc9 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc7))(loc7)).it_i4);
	loc10 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc7))(loc7)).it_i4);
	loc11 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ui4_1 = loc10;
	ti4_1 = eif_min_int32 (loc8,ui4_1);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ui4_1 = loc10;
	ti4_1 = eif_max_int32 (loc8,ui4_1);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ui4_1 = loc11;
	ti4_1 = eif_min_int32 (loc9,ui4_1);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ui4_1 = loc11;
	ti4_1 = eif_max_int32 (loc9,ui4_1);
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(13);
	RTDBGAL(12, 0xF80005AB, 0, 0); /* loc12 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc12))(loc12);
	}
	RTHOOK(16);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc12))(loc12, ui4_1x);
	RTHOOK(17);
	RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	loc14 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(18);
	RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
	loc15 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(19);
	RTDBGAL(13, 0xF8000593, 0, 0); /* loc13 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18732, "background_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(20);
	if ((EIF_BOOLEAN)(loc13 != NULL)) {
		RTHOOK(21);
		ur1 = RTCCL(loc13);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc12))(loc12, ur1x);
		RTHOOK(22);
		ui4_1 = (EIF_INTEGER_32) (loc2 + loc14);
		ui4_2 = (EIF_INTEGER_32) (loc3 + loc15);
		ui4_3 = (EIF_INTEGER_32) (loc4 - loc2);
		ui4_4 = (EIF_INTEGER_32) (loc5 - loc3);
		tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(18742, "start_angle", arg1));
		tr4_1 = (EIF_REAL_32) (tr8_1);
		ur4_1 = tr4_1;
		tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(18743, "aperture", arg1));
		tr4_2 = (EIF_REAL_32) (tr8_1);
		ur4_2 = tr4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14231, "fill_pie_slice", loc12))(loc12, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur4_1x, ur4_2x);
	}
	RTHOOK(23);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc12))(loc12, ur1x);
	RTHOOK(24);
	ui4_1 = (EIF_INTEGER_32) (loc2 + loc14);
	ui4_2 = (EIF_INTEGER_32) (loc3 + loc15);
	ui4_3 = (EIF_INTEGER_32) (loc4 - loc2);
	ui4_4 = (EIF_INTEGER_32) (loc5 - loc3);
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(18742, "start_angle", arg1));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(18743, "aperture", arg1));
	tr4_2 = (EIF_REAL_32) (tr8_1);
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14227, "draw_pie_slice", loc12))(loc12, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur4_1x, ur4_2x);
	RTHOOK(25);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(26);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc12))(loc12);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
#undef up1
#undef ur1
#undef ur4_1
#undef ur4_2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_rotated_pie_slice */
void F1863_24084 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_rotated_pie_slice";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc12 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,Current);
	RTLR(7,loc2);
	RTLR(8,ur1);
	RTLR(9,loc7);
	RTLR(10,loc1);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_REAL64, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	
	RTEAA(l_feature_name, 1862, Current, 14, 1, 29438);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29438);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1846, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("slice_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(3, 0xF8000108, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(4, 0xF80004EA, 0, 0); /* loc4 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(5, 0xF80004EA, 0, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(6, 0xF80004EA, 0, 0); /* loc6 */
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18715, "radius1", arg1))(arg1)).it_i4);
	loc10 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18716, "radius2", arg1))(arg1)).it_i4);
	loc11 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	loc13 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
	loc14 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAL(2, 0xF80005AB, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc11 == ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
		RTHOOK(13);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc2))(loc2, ui4_1x);
		RTHOOK(14);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
		if (tb1) {
			RTHOOK(15);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc2))(loc2);
		}
		RTHOOK(16);
		if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(17);
			RTDBGAL(7, 0xF80004EA, 0, 0); /* loc7 */
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(18);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc4))(loc4)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc13);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc4))(loc4)).it_i4);
			ui4_2 = (EIF_INTEGER_32) (ti4_2 + loc14);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc7))(loc7)).it_i4);
			ui4_3 = (EIF_INTEGER_32) (ti4_3 + loc13);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc7))(loc7)).it_i4);
			ui4_4 = (EIF_INTEGER_32) (ti4_4 + loc14);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc2))(loc2, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		} else {
			RTHOOK(19);
			RTDBGAL(5, 0xF80004EA, 0, 0); /* loc5 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(20);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc4))(loc4)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc13);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc4))(loc4)).it_i4);
			ui4_2 = (EIF_INTEGER_32) (ti4_2 + loc14);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc5))(loc5)).it_i4);
			ui4_3 = (EIF_INTEGER_32) (ti4_3 + loc13);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc5))(loc5)).it_i4);
			ui4_4 = (EIF_INTEGER_32) (ti4_4 + loc14);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc2))(loc2, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		}
		RTHOOK(21);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
		if (tb1) {
			RTHOOK(22);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc2))(loc2);
		}
	} else {
		RTHOOK(23);
		RTDBGAL(1, 0xF8000593, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18732, "background_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(24);
		RTDBGAL(6, 0xF80004EA, 0, 0); /* loc6 */
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(25);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		tr8_1 = *(EIF_REAL_64 *)(loc4 + RTVA(11267, "x_precise", loc4));
		tr8_2 = *(EIF_REAL_64 *)(loc6 + RTVA(11267, "x_precise", loc6));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 + tr8_2)) /  (EIF_REAL_64) (tr8_3));
		loc8 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(26);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		tr8_1 = *(EIF_REAL_64 *)(loc4 + RTVA(11268, "y_precise", loc4));
		tr8_2 = *(EIF_REAL_64 *)(loc6 + RTVA(11268, "y_precise", loc6));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 + tr8_2)) /  (EIF_REAL_64) (tr8_3));
		loc9 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(27);
		RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18528, "angle", arg1))(arg1)).it_r8);
		loc12 = (EIF_REAL_64) tr8_1;
		RTHOOK(28);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(29);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
			RTHOOK(30);
			ui4_1 = (EIF_INTEGER_32) (loc8 + loc13);
			ui4_2 = (EIF_INTEGER_32) (loc9 + loc14);
			ui4_3 = loc10;
			ui4_4 = loc11;
			ur8_1 = (EIF_REAL_64) -loc12;
			tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(18738, "start_angle", arg1));
			ur8_2 = tr8_1;
			tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(18739, "aperture", arg1));
			ur8_3 = tr8_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18864, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x, ur8_2x, ur8_3x);
		}
		RTHOOK(31);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
		RTHOOK(32);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc2))(loc2, ui4_1x);
		RTHOOK(33);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
		if (tb1) {
			RTHOOK(34);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc2))(loc2);
		}
		RTHOOK(35);
		ui4_1 = (EIF_INTEGER_32) (loc8 + loc13);
		ui4_2 = (EIF_INTEGER_32) (loc9 + loc14);
		ui4_3 = loc10;
		ui4_4 = loc11;
		ur8_1 = (EIF_REAL_64) -loc12;
		tr8_1 = *(EIF_REAL_64 *)(arg1 + RTVA(18738, "start_angle", arg1));
		ur8_2 = tr8_1;
		tr8_2 = *(EIF_REAL_64 *)(arg1 + RTVA(18739, "aperture", arg1));
		ur8_3 = tr8_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18863, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x, ur8_2x, ur8_3x);
		RTHOOK(36);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
		if (tb1) {
			RTHOOK(37);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc2))(loc2);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_polygon */
void F1863_24085 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_polygon";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLR(6,tr2);
	RTLR(7,ur1);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1862, Current, 3, 1, 29439);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29439);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1845, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("polygon_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(2, 0xF80005AB, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc2))(loc2);
	}
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc2))(loc2, ui4_1x);
	RTHOOK(6);
	RTDBGAL(1, 0xF8000593, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18732, "background_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(3, 0xF8000112, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1830, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(18525, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(7,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	tb1 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(9);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18858, dtype))(Current, ur1x);
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(11);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
			RTHOOK(12);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc2))(loc2, ur1x);
		}
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
		RTHOOK(14);
		ur1 = RTCCL(loc3);
		ub1 = (EIF_BOOLEAN) 1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14226, "draw_polyline", loc2))(loc2, ur1x, ub1x);
		RTHOOK(15);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18859, dtype))(Current, ur1x);
	} else {
		RTHOOK(16);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(17);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
			RTHOOK(18);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc2))(loc2, ur1x);
		}
		RTHOOK(19);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
		RTHOOK(20);
		ur1 = RTCCL(loc3);
		ub1 = (EIF_BOOLEAN) 1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14226, "draw_polyline", loc2))(loc2, ur1x, ub1x);
	}
	RTHOOK(21);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(22);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc2))(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_polyline */
void F1863_24086 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_polyline";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc8 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc9 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc10 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc3);
	RTLR(6,tr2);
	RTLR(7,loc1);
	RTLR(8,loc4);
	RTLR(9,loc5);
	RTLR(10,loc6);
	RTLR(11,loc11);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REAL64, &loc8);
	RTLU(SK_REAL64, &loc9);
	RTLU(SK_REAL64, &loc10);
	RTLU(SK_REF, &loc11);
	
	RTEAA(l_feature_name, 1862, Current, 11, 1, 29440);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29440);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1858, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("line_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(2, 0xF80005AB, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
	RTHOOK(4);
	RTDBGAL(3, 0xF8000112, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1830, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(18525, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc2))(loc2, ui4_1x);
	RTHOOK(6);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2256, "count", loc3))(loc3)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(7);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18790, "is_start_arrow", arg1));
		if (tb1) {
			RTHOOK(8);
			RTDBGAL(1, 0xF8000735, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18799, "start_arrow", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			RTDBGAL(4, 0xF8000112, 0, 0); /* loc4 */
			tr1 = RTLN(eif_new_type(1830, 0x01).id);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(18525, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(9,1);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(10);
			tb1 = '\01';
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
			if (!(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
				tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
			}
			if (tb1) {
				RTHOOK(11);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18858, dtype))(Current, ur1x);
				RTHOOK(12);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc2))(loc2, ur1x);
				RTHOOK(13);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18859, dtype))(Current, ur1x);
			} else {
				RTHOOK(14);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc2))(loc2, ur1x);
			}
			RTHOOK(15);
			RTDBGAL(5, 0xF80004EA, 0, 0); /* loc5 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(16);
			RTDBGAL(6, 0xF80004EA, 0, 0); /* loc6 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(17);
			RTDBGAL(11, 0xF80004EA, 0, 0); /* loc11 */
			ui4_1 = ((EIF_INTEGER_32) 0L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2238, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc11 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(18);
			RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
			tr8_1 = *(EIF_REAL_64 *)(loc11 + RTVA(11267, "x_precise", loc11));
			loc7 = (EIF_REAL_64) tr8_1;
			RTHOOK(19);
			RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
			tr8_1 = *(EIF_REAL_64 *)(loc11 + RTVA(11268, "y_precise", loc11));
			loc8 = (EIF_REAL_64) tr8_1;
			RTHOOK(20);
			tr8_1 = *(EIF_REAL_64 *)(loc5 + RTVA(11267, "x_precise", loc5));
			tr8_2 = *(EIF_REAL_64 *)(loc6 + RTVA(11267, "x_precise", loc6));
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 + tr8_2)) /  (EIF_REAL_64) (tr8_3));
			tr8_4 = *(EIF_REAL_64 *)(loc5 + RTVA(11268, "y_precise", loc5));
			tr8_5 = *(EIF_REAL_64 *)(loc6 + RTVA(11268, "y_precise", loc6));
			tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			ur8_2 = (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_4 + tr8_5)) /  (EIF_REAL_64) (tr8_6));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc11))(loc11, ur8_1x, ur8_2x);
		}
		RTHOOK(21);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18791, "is_end_arrow", arg1));
		if (tb1) {
			RTHOOK(22);
			RTDBGAL(1, 0xF8000735, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18800, "end_arrow", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(23);
			RTDBGAL(4, 0xF8000112, 0, 0); /* loc4 */
			tr1 = RTLN(eif_new_type(1830, 0x01).id);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(18525, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(23,1);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(24);
			tb1 = '\01';
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
			if (!(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
				tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
			}
			if (tb1) {
				RTHOOK(25);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18858, dtype))(Current, ur1x);
				RTHOOK(26);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc2))(loc2, ur1x);
				RTHOOK(27);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18859, dtype))(Current, ur1x);
			} else {
				RTHOOK(28);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc2))(loc2, ur1x);
			}
			RTHOOK(29);
			RTDBGAL(5, 0xF80004EA, 0, 0); /* loc5 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(30);
			RTDBGAL(6, 0xF80004EA, 0, 0); /* loc6 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(31);
			RTDBGAL(11, 0xF80004EA, 0, 0); /* loc11 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2256, "count", loc3))(loc3)).it_i4);
			ui4_1 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2238, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc11 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(32);
			RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
			tr8_1 = *(EIF_REAL_64 *)(loc11 + RTVA(11267, "x_precise", loc11));
			loc9 = (EIF_REAL_64) tr8_1;
			RTHOOK(33);
			RTDBGAL(10, 0x20000000, 1, 0); /* loc10 */
			tr8_1 = *(EIF_REAL_64 *)(loc11 + RTVA(11268, "y_precise", loc11));
			loc10 = (EIF_REAL_64) tr8_1;
			RTHOOK(34);
			tr8_1 = *(EIF_REAL_64 *)(loc5 + RTVA(11267, "x_precise", loc5));
			tr8_2 = *(EIF_REAL_64 *)(loc6 + RTVA(11267, "x_precise", loc6));
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 + tr8_2)) /  (EIF_REAL_64) (tr8_3));
			tr8_4 = *(EIF_REAL_64 *)(loc5 + RTVA(11268, "y_precise", loc5));
			tr8_5 = *(EIF_REAL_64 *)(loc6 + RTVA(11268, "y_precise", loc6));
			tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			ur8_2 = (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_4 + tr8_5)) /  (EIF_REAL_64) (tr8_6));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc11))(loc11, ur8_1x, ur8_2x);
		}
	}
	RTHOOK(35);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(36);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc2))(loc2);
	}
	RTHOOK(37);
	tb1 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(38);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18858, dtype))(Current, ur1x);
		RTHOOK(39);
		ur1 = RTCCL(loc3);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18816, "is_closed", arg1));
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14226, "draw_polyline", loc2))(loc2, ur1x, ub1x);
		RTHOOK(40);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18859, dtype))(Current, ur1x);
	} else {
		RTHOOK(41);
		ur1 = RTCCL(loc3);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18816, "is_closed", arg1));
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14226, "draw_polyline", loc2))(loc2, ur1x, ub1x);
	}
	RTHOOK(42);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18790, "is_start_arrow", arg1));
	if (tb1) {
		RTHOOK(43);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2238, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur8_1 = loc7;
		ur8_2 = loc8;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", tr1))(tr1, ur8_1x, ur8_2x);
	}
	RTHOOK(44);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18791, "is_end_arrow", arg1));
	if (tb1) {
		RTHOOK(45);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2256, "count", loc3))(loc3)).it_i4);
		ui4_1 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2238, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur8_1 = loc9;
		ur8_2 = loc10;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", tr1))(tr1, ur8_1x, ur8_2x);
	}
	RTHOOK(46);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(47);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc2))(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(48);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_parallelogram */
void F1863_24087 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_parallelogram";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,ur1);
	RTLR(10,loc4);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_INT32, &loc17);
	
	RTEAA(l_feature_name, 1862, Current, 17, 1, 29441);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29441);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1853, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("parallelogram_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF80005AB, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc1))(loc1);
	}
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc1))(loc1, ui4_1x);
	RTHOOK(6);
	RTDBGAL(2, 0xF8000593, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18732, "background_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(3, 0xF8000108, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAL(5, 0xF80004EA, 0, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc5))(loc5)).it_i4);
	loc10 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc5))(loc5)).it_i4);
	loc11 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	RTDBGAL(6, 0xF80004EA, 0, 0); /* loc6 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	RTDBGAL(7, 0xF80004EA, 0, 0); /* loc7 */
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(13);
	tb1 = '\0';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc6))(loc6)).it_i4);
	if ((EIF_BOOLEAN)(loc11 == ti4_1)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc7))(loc7)).it_i4);
		tb1 = (EIF_BOOLEAN)(loc10 == ti4_1);
	}
	if (tb1) {
		RTHOOK(14);
		RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
		loc14 = (EIF_INTEGER_32) loc10;
		RTHOOK(15);
		RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
		loc15 = (EIF_INTEGER_32) loc14;
		RTHOOK(16);
		RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
		loc16 = (EIF_INTEGER_32) loc11;
		RTHOOK(17);
		RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
		loc17 = (EIF_INTEGER_32) loc16;
		RTHOOK(18);
		RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc6))(loc6)).it_i4);
		loc12 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(19);
		RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
		ui4_1 = loc12;
		ti4_1 = eif_min_int32 (loc14,ui4_1);
		loc14 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(20);
		RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
		ui4_1 = loc12;
		ti4_1 = eif_max_int32 (loc15,ui4_1);
		loc15 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(21);
		RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc7))(loc7)).it_i4);
		loc13 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(22);
		RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
		ui4_1 = loc13;
		ti4_1 = eif_min_int32 (loc16,ui4_1);
		loc16 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(23);
		RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
		ui4_1 = loc13;
		ti4_1 = eif_max_int32 (loc17,ui4_1);
		loc17 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(24);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc15 - loc14);
		RTHOOK(25);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc17 - loc16);
		RTHOOK(26);
		RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
		loc14 += ti4_1;
		RTHOOK(27);
		RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
		loc16 += ti4_1;
		RTHOOK(28);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(29);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
			RTHOOK(30);
			ui4_1 = loc14;
			ui4_2 = loc16;
			ui4_3 = (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
			ui4_4 = (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14228, "fill_rectangle", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		}
		RTHOOK(31);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
		RTHOOK(32);
		ui4_1 = loc14;
		ui4_2 = loc16;
		ui4_3 = (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
		ui4_4 = (EIF_INTEGER_32) (loc9 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14224, "draw_rectangle", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	} else {
		RTHOOK(33);
		RTDBGAL(4, 0xF8000112, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(1830, 0x01).id);
		ur1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(18525, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(33,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(34);
		tb1 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
		if (!(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTHOOK(35);
			ur1 = RTCCL(loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18858, dtype))(Current, ur1x);
			RTHOOK(36);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTHOOK(37);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
				RTHOOK(38);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc1))(loc1, ur1x);
			}
			RTHOOK(39);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
			RTHOOK(40);
			ur1 = RTCCL(loc4);
			ub1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14226, "draw_polyline", loc1))(loc1, ur1x, ub1x);
			RTHOOK(41);
			ur1 = RTCCL(loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18859, dtype))(Current, ur1x);
		} else {
			RTHOOK(42);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTHOOK(43);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
				RTHOOK(44);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc1))(loc1, ur1x);
			}
			RTHOOK(45);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
			RTHOOK(46);
			ur1 = RTCCL(loc4);
			ub1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14226, "draw_polyline", loc1))(loc1, ur1x, ub1x);
		}
	}
	RTHOOK(47);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(48);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc1))(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(49);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(20);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ub1
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_rectangle */
void F1863_24088 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_rectangle";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc9);
	RTLR(2,tr1);
	RTLR(3,loc10);
	RTLR(4,loc11);
	RTLR(5,Current);
	RTLR(6,loc12);
	RTLR(7,loc13);
	RTLR(8,ur1);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	
	RTEAA(l_feature_name, 1862, Current, 13, 1, 29442);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29442);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1851, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("rectangle_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(9, 0xF8000108, 0, 0); /* loc9 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc9 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(10, 0xF80004EA, 0, 0); /* loc10 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc9))(loc9, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(11, 0xF80004EA, 0, 0); /* loc11 */
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc9))(loc9, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc10))(loc10)).it_i4);
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc10))(loc10)).it_i4);
	loc6 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc11))(loc11)).it_i4);
	loc7 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc11))(loc11)).it_i4);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (loc5 - loc7));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (loc6 - loc8));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ui4_1 = loc7;
	ti4_1 = eif_min_int32 (loc5,ui4_1);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
	RTHOOK(12);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ui4_1 = loc8;
	ti4_1 = eif_min_int32 (loc6,ui4_1);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
	RTHOOK(13);
	RTDBGAL(12, 0xF80005AB, 0, 0); /* loc12 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc12))(loc12);
	}
	RTHOOK(16);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc12))(loc12, ui4_1x);
	RTHOOK(17);
	RTDBGAL(13, 0xF8000593, 0, 0); /* loc13 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18732, "background_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(18);
	if ((EIF_BOOLEAN)(loc13 != NULL)) {
		RTHOOK(19);
		ur1 = RTCCL(loc13);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc12))(loc12, ur1x);
		RTHOOK(20);
		ui4_1 = loc3;
		ui4_2 = loc4;
		ui4_3 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		ui4_4 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14228, "fill_rectangle", loc12))(loc12, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	}
	RTHOOK(21);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc12))(loc12, ur1x);
	RTHOOK(22);
	ui4_1 = loc3;
	ui4_2 = loc4;
	ui4_3 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	ui4_4 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14224, "draw_rectangle", loc12))(loc12, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(23);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(24);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc12))(loc12);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_rounded_parallelogram */
void F1863_24089 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_rounded_parallelogram";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1862, Current, 3, 1, 29443);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29443);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1854, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("parallelogram_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF80005AB, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc1))(loc1);
	}
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc1))(loc1, ui4_1x);
	RTHOOK(6);
	RTDBGAL(2, 0xF8000593, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18732, "background_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(3, 0xF8000112, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18767, "polygon_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	tb1 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(9);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18858, dtype))(Current, ur1x);
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(11);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
			RTHOOK(12);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc1))(loc1, ur1x);
		}
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
		RTHOOK(14);
		ur1 = RTCCL(loc3);
		ub1 = (EIF_BOOLEAN) 1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14226, "draw_polyline", loc1))(loc1, ur1x, ub1x);
		RTHOOK(15);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18859, dtype))(Current, ur1x);
	} else {
		RTHOOK(16);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(17);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
			RTHOOK(18);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14230, "fill_polygon", loc1))(loc1, ur1x);
		}
		RTHOOK(19);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
		RTHOOK(20);
		ur1 = RTCCL(loc3);
		ub1 = (EIF_BOOLEAN) 1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14226, "draw_polyline", loc1))(loc1, ur1x, ub1x);
	}
	RTHOOK(21);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(22);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc1))(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_rounded_rectangle */
void F1863_24090 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_rounded_rectangle";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc22 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc23 = (EIF_INTEGER_32) 0;
	EIF_REAL_32 loc24 = (EIF_REAL_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc16);
	RTLR(4,loc17);
	RTLR(5,loc18);
	RTLR(6,loc19);
	RTLR(7,loc20);
	RTLR(8,loc21);
	RTLR(9,Current);
	RTLR(10,loc1);
	RTLR(11,loc2);
	RTLR(12,ur1);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_INT32, &loc22);
	RTLU(SK_INT32, &loc23);
	RTLU(SK_REAL32, &loc24);
	
	RTEAA(l_feature_name, 1862, Current, 24, 1, 29444);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29444);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1852, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("f_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(3, 0xF8000108, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(16, 0xF80004EA, 0, 0); /* loc16 */
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc16 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(17, 0xF80004EA, 0, 0); /* loc17 */
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc17 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(18, 0xF80004EA, 0, 0); /* loc18 */
	ui4_1 = ((EIF_INTEGER_32) 4L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc18 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(19, 0xF80004EA, 0, 0); /* loc19 */
	ui4_1 = ((EIF_INTEGER_32) 5L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc19 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(20, 0xF80004EA, 0, 0); /* loc20 */
	ui4_1 = ((EIF_INTEGER_32) 6L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc20 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	RTDBGAL(21, 0xF80004EA, 0, 0); /* loc21 */
	ui4_1 = ((EIF_INTEGER_32) 7L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc21 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAL(22, 0x10000000, 1, 0); /* loc22 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	loc22 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAL(23, 0x10000000, 1, 0); /* loc23 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
	loc23 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc16))(loc16)).it_i4);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc22);
	RTHOOK(12);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc16))(loc16)).it_i4);
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc23);
	RTHOOK(13);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc17))(loc17)).it_i4);
	loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc22);
	RTHOOK(14);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc17))(loc17)).it_i4);
	loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc23);
	RTHOOK(15);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc18))(loc18)).it_i4);
	loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc22);
	RTHOOK(16);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc18))(loc18)).it_i4);
	loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc23);
	RTHOOK(17);
	RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc19))(loc19)).it_i4);
	loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc22);
	RTHOOK(18);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc19))(loc19)).it_i4);
	loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc23);
	RTHOOK(19);
	RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc20))(loc20)).it_i4);
	loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc22);
	RTHOOK(20);
	RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc20))(loc20)).it_i4);
	loc13 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc23);
	RTHOOK(21);
	RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc21))(loc21)).it_i4);
	loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc22);
	RTHOOK(22);
	RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc21))(loc21)).it_i4);
	loc15 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc23);
	RTHOOK(23);
	RTDBGAL(1, 0xF80005AB, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(24);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(25);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc1))(loc1);
	}
	RTHOOK(26);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc1))(loc1, ui4_1x);
	RTHOOK(27);
	RTDBGAL(2, 0xF8000593, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18732, "background_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(28);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(29);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
		RTHOOK(30);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc10 > loc8) && (EIF_BOOLEAN) (loc7 > loc5))) {
			RTHOOK(31);
			ui4_1 = loc8;
			ui4_2 = loc5;
			ui4_3 = (EIF_INTEGER_32) (loc10 - loc8);
			ui4_4 = (EIF_INTEGER_32) (loc7 - loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14228, "fill_rectangle", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		}
		RTHOOK(32);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc8 > loc4) && (EIF_BOOLEAN) (loc15 > loc9))) {
			RTHOOK(33);
			ui4_1 = loc4;
			ui4_2 = loc9;
			ui4_3 = (EIF_INTEGER_32) (loc8 - loc4);
			ui4_4 = (EIF_INTEGER_32) (loc15 - loc9);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14228, "fill_rectangle", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		}
		RTHOOK(34);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc6 > loc10) && (EIF_BOOLEAN) (loc13 > loc11))) {
			RTHOOK(35);
			ui4_1 = loc10;
			ui4_2 = loc11;
			ui4_3 = (EIF_INTEGER_32) (loc6 - loc10);
			ui4_4 = (EIF_INTEGER_32) (loc13 - loc11);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14228, "fill_rectangle", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		}
		RTHOOK(36);
		ui4_1 = loc4;
		ui4_2 = loc5;
		ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 - loc4) * ((EIF_INTEGER_32) 2L));
		ui4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 - loc5) * ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14229, "fill_ellipse", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTHOOK(37);
		ui4_1 = (EIF_INTEGER_32) (loc6 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - loc10) * ((EIF_INTEGER_32) 2L)));
		ui4_2 = loc5;
		ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - loc10) * ((EIF_INTEGER_32) 2L));
		ui4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc11 - loc5) * ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14229, "fill_ellipse", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTHOOK(38);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - loc12) * ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
		ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - loc13) * ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
		ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - loc12) * ((EIF_INTEGER_32) 2L));
		ui4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - loc13) * ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14229, "fill_ellipse", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTHOOK(39);
		ui4_1 = loc4;
		ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - loc15) * ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
		ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 - loc4) * ((EIF_INTEGER_32) 2L));
		ui4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - loc15) * ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14229, "fill_ellipse", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	}
	RTHOOK(40);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc1))(loc1, ur1x);
	RTHOOK(41);
	ui4_1 = loc8;
	ui4_2 = loc5;
	ui4_3 = loc10;
	ui4_4 = loc5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(42);
	ui4_1 = loc6;
	ui4_2 = loc11;
	ui4_3 = loc6;
	ui4_4 = loc13;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(43);
	ui4_1 = (EIF_INTEGER_32) (loc14 - ((EIF_INTEGER_32) 1L));
	ui4_2 = loc7;
	ui4_3 = loc12;
	ui4_4 = loc7;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(44);
	ui4_1 = loc4;
	ui4_2 = (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
	ui4_3 = loc4;
	ui4_4 = loc15;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(45);
	RTDBGAL(24, 0x18000000, 1, 0); /* loc24 */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr4_1 = (EIF_REAL_32) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2)));
	loc24 = (EIF_REAL_32) tr4_1;
	RTHOOK(46);
	ui4_1 = loc4;
	ui4_2 = loc5;
	ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 - loc4) * ((EIF_INTEGER_32) 2L));
	ui4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 - loc5) * ((EIF_INTEGER_32) 2L));
	ur4_1 = loc24;
	ur4_2 = loc24;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14223, "draw_arc", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur4_1x, ur4_2x);
	RTHOOK(47);
	ui4_1 = (EIF_INTEGER_32) (loc6 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - loc10) * ((EIF_INTEGER_32) 2L)));
	ui4_2 = loc5;
	ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - loc10) * ((EIF_INTEGER_32) 2L));
	ui4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc11 - loc5) * ((EIF_INTEGER_32) 2L));
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	ur4_1 = tr4_1;
	ur4_2 = loc24;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14223, "draw_arc", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur4_1x, ur4_2x);
	RTHOOK(48);
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - loc12) * ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
	ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - loc13) * ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
	ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - loc12) * ((EIF_INTEGER_32) 2L));
	ui4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - loc13) * ((EIF_INTEGER_32) 2L));
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 3L));
	ur4_1 = (EIF_REAL_32) (tr4_1 * loc24);
	ur4_2 = loc24;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14223, "draw_arc", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur4_1x, ur4_2x);
	RTHOOK(49);
	ui4_1 = loc4;
	ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - loc15) * ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
	ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 - loc4) * ((EIF_INTEGER_32) 2L));
	ui4_4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc7 - loc15) * ((EIF_INTEGER_32) 2L));
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
	tr4_1 = (EIF_REAL_32) (tr8_1);
	ur4_1 = tr4_1;
	ur4_2 = loc24;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14223, "draw_arc", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur4_1x, ur4_2x);
	RTHOOK(50);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(51);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc1))(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(52);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(27);
	RTEE;
#undef up1
#undef ur1
#undef ur4_1
#undef ur4_2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_star */
void F1863_24091 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_star";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc5);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	
	RTEAA(l_feature_name, 1862, Current, 9, 1, 29445);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29445);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1838, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("star_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(5, 0xF80005AB, 0, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14205, "enable_dashed_line_style", loc5))(loc5);
	}
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc5))(loc5, ur1x);
	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18670, "line_width", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc5))(loc5, ui4_1x);
	RTHOOK(7);
	RTDBGAL(3, 0xF8000108, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", tr1))(tr1)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", tr1))(tr1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
	loc8 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
	loc9 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(13);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2065, "count", loc3))(loc3)).it_i4);
	loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(14);
		if ((EIF_BOOLEAN) (loc6 > loc7)) break;
		RTHOOK(15);
		RTDBGAL(4, 0xF80004EA, 0, 0); /* loc4 */
		ui4_1 = loc6;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(16);
		ui4_1 = (EIF_INTEGER_32) (loc1 + loc8);
		ui4_2 = (EIF_INTEGER_32) (loc2 + loc9);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc4))(loc4)).it_i4);
		ui4_3 = (EIF_INTEGER_32) (ti4_1 + loc8);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc4))(loc4)).it_i4);
		ui4_4 = (EIF_INTEGER_32) (ti4_2 + loc9);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc5))(loc5, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTHOOK(17);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6++;
	}
	RTHOOK(18);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(18671, "dashed_line_style", arg1));
	if (tb1) {
		RTHOOK(19);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc5))(loc5);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_figure_text */
void F1863_24092 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_figure_text";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1862, Current, 2, 1, 29446);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29446);
	RTCC(arg1, 1862, l_feature_name, 1, eif_new_type(1836, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("text_figure_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18682, "height", arg1))(arg1)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 2L))) {
		RTHOOK(3);
		RTDBGAL(1, 0xF80004EA, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18574, "point_array", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2544, "item", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(4);
		RTDBGAL(2, 0xF80005AB, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18687, "scaled_font", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14188, "set_font", loc2))(loc2, ur1x);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18669, "foreground_color", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_foreground_color", loc2))(loc2, ur1x);
		RTHOOK(7);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11263, "x", loc1))(loc1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(18688, "left_offset", arg1));
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3);
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11265, "y", loc1))(loc1)).it_i4);
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
		ui4_2 = (EIF_INTEGER_32) (ti4_4 + ti4_5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18679, "text", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14214, "draw_text_top_left", loc2))(loc2, ui4_1x, ui4_2x, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_MODEL_DRAWER}.offset_coordinates */
void F1863_24093 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "offset_coordinates";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1862, Current, 3, 1, 29447);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29447);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,1258,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1862, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2652, "lower", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2651, "upper", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		RTDBGAL(3, 0xF80004EA, 0, 0); /* loc3 */
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2238, "item", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		tr8_1 = *(EIF_REAL_64 *)(loc3 + RTVA(11267, "x_precise", loc3));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
		RTNHOOK(5,1);
		tr8_2 = (EIF_REAL_64) (ti4_1);
		ur8_1 = (EIF_REAL_64) (tr8_1 + tr8_2);
		tr8_3 = *(EIF_REAL_64 *)(loc3 + RTVA(11268, "y_precise", loc3));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
		RTNHOOK(5,2);
		tr8_4 = (EIF_REAL_64) (ti4_1);
		ur8_2 = (EIF_REAL_64) (tr8_3 + tr8_4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc3))(loc3, ur8_1x, ur8_2x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur8_1
#undef ur8_2
#undef ui4_1
#undef arg1
}

/* {EV_MODEL_DRAWER}.deoffset_coordinates */
void F1863_24094 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "deoffset_coordinates";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1862, Current, 3, 1, 29448);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29448);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,1258,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1862, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2652, "lower", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2651, "upper", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		RTDBGAL(3, 0xF80004EA, 0, 0); /* loc3 */
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2238, "item", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		tr8_1 = *(EIF_REAL_64 *)(loc3 + RTVA(11267, "x_precise", loc3));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18852, dtype))(Current)).it_i4);
		RTNHOOK(5,1);
		tr8_2 = (EIF_REAL_64) (ti4_1);
		ur8_1 = (EIF_REAL_64) (tr8_1 - tr8_2);
		tr8_3 = *(EIF_REAL_64 *)(loc3 + RTVA(11268, "y_precise", loc3));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18853, dtype))(Current)).it_i4);
		RTNHOOK(5,2);
		tr8_4 = (EIF_REAL_64) (ti4_1);
		ur8_2 = (EIF_REAL_64) (tr8_3 - tr8_4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11262, "set_precise", loc3))(loc3, ur8_1x, ur8_2x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur8_1
#undef ur8_2
#undef ui4_1
#undef arg1
}

/* {EV_MODEL_DRAWER}.fill_rotated_ellipse */
void F1863_24095 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "fill_rotated_ellipse";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc8 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc9 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc10 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc11 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc12 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc13 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc19);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REAL64, &loc8);
	RTLU(SK_REAL64, &loc9);
	RTLU(SK_REAL64, &loc10);
	RTLU(SK_REAL64, &loc11);
	RTLU(SK_REAL64, &loc12);
	RTLU(SK_REAL64, &loc13);
	RTLU(SK_REAL64, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_INT32, &loc18);
	RTLU(SK_REF, &loc19);
	
	RTEAA(l_feature_name, 1862, Current, 19, 5, 29449);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29449);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_larger_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("b_larger_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
	ur8_1 = arg5;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1632, dtype))(Current, ur8_1x)).it_r8);
	loc8 = (EIF_REAL_64) tr8_1;
	RTHOOK(4);
	RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
	ur8_1 = arg5;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1634, dtype))(Current, ur8_1x)).it_r8);
	loc9 = (EIF_REAL_64) tr8_1;
	RTHOOK(5);
	RTDBGAL(10, 0x20000000, 1, 0); /* loc10 */
	loc10 = (EIF_REAL_64) (EIF_REAL_64) (loc8 * loc8);
	RTHOOK(6);
	RTDBGAL(11, 0x20000000, 1, 0); /* loc11 */
	loc11 = (EIF_REAL_64) (EIF_REAL_64) (loc9 * loc9);
	RTHOOK(7);
	RTDBGAL(13, 0x20000000, 1, 0); /* loc13 */
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (arg3 * arg3));
	loc13 = (EIF_REAL_64) tr8_1;
	RTHOOK(8);
	RTDBGAL(14, 0x20000000, 1, 0); /* loc14 */
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (arg4 * arg4));
	loc14 = (EIF_REAL_64) tr8_1;
	RTHOOK(9);
	RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
	loc1 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc10) /  (EIF_REAL_64) (loc13)) + (EIF_REAL_64) ((EIF_REAL_64) (loc11) /  (EIF_REAL_64) (loc14)));
	RTHOOK(10);
	RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
	loc2 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc8 * loc9)) /  (EIF_REAL_64) (loc13)) - (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc8 * loc9)) /  (EIF_REAL_64) (loc14)))) /  (EIF_REAL_64) (loc1));
	RTHOOK(11);
	RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
	loc3 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc14 * loc10) + (EIF_REAL_64) (loc13 * loc11));
	RTHOOK(12);
	RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (arg3 * arg4));
	loc4 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (loc3));
	RTHOOK(13);
	RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	loc5 = (EIF_REAL_64) tr8_1;
	RTHOOK(14);
	RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
	loc7 = (EIF_REAL_64) (EIF_REAL_64) (loc4 * loc4);
	RTHOOK(15);
	RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	loc6 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 * loc7);
	RTHOOK(16);
	RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
	loc3 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc3 * loc7) - loc7);
	RTHOOK(17);
	RTDBGAL(19, 0xF80005AB, 0, 0); /* loc19 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc19 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(18);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc19))(loc19, ui4_1x);
	RTHOOK(19);
	RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
	loc17 = (EIF_INTEGER_32) arg2;
	RTHOOK(20);
	RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
	loc18 = (EIF_INTEGER_32) arg2;
	for (;;) {
		RTHOOK(21);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_less_real_64 (loc3, tr8_1)) break;
		RTHOOK(22);
		RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
		ur8_1 = loc3;
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1638, dtype))(Current, ur8_1x)).it_r8);
		loc12 = (EIF_REAL_64) tr8_2;
		RTHOOK(23);
		RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (loc5 - loc12);
		loc15 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(24);
		RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (loc5 + loc12);
		loc16 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(25);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + loc15) + ((EIF_INTEGER_32) 1L));
		ui4_2 = loc17;
		ui4_3 = (EIF_INTEGER_32) (arg1 + loc16);
		ui4_4 = loc17;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc19))(loc19, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTHOOK(26);
		ui4_1 = (EIF_INTEGER_32) (arg1 - loc15);
		ui4_2 = (EIF_INTEGER_32) (loc18 + ((EIF_INTEGER_32) 1L));
		ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 - loc16) + ((EIF_INTEGER_32) 1L));
		ui4_4 = (EIF_INTEGER_32) (loc18 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc19))(loc19, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTHOOK(27);
		RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
		loc5 += loc2;
		RTHOOK(28);
		RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
		loc7 += loc6;
		RTHOOK(29);
		RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
		loc3 -= loc7;
		RTHOOK(30);
		RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
		loc17++;
		RTHOOK(31);
		RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
		loc18--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(26);
	RTEE;
#undef up1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_rotated_ellipse */
void F1863_24096 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "draw_rotated_ellipse";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc8 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc9 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc10 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc11 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc12 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc13 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc20 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc21 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc22 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc23 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc24 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc25 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc26 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc27 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc25);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REAL64, &loc8);
	RTLU(SK_REAL64, &loc9);
	RTLU(SK_REAL64, &loc10);
	RTLU(SK_REAL64, &loc11);
	RTLU(SK_REAL64, &loc12);
	RTLU(SK_REAL64, &loc13);
	RTLU(SK_REAL64, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_INT32, &loc18);
	RTLU(SK_INT32, &loc19);
	RTLU(SK_INT32, &loc20);
	RTLU(SK_INT32, &loc21);
	RTLU(SK_INT32, &loc22);
	RTLU(SK_INT32, &loc23);
	RTLU(SK_INT32, &loc24);
	RTLU(SK_REF, &loc25);
	RTLU(SK_BOOL, &loc26);
	RTLU(SK_INT32, &loc27);
	
	RTEAA(l_feature_name, 1862, Current, 27, 5, 29450);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29450);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_larger_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("b_larger_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
	ur8_1 = arg5;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1632, dtype))(Current, ur8_1x)).it_r8);
	loc8 = (EIF_REAL_64) tr8_1;
	RTHOOK(4);
	RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
	ur8_1 = arg5;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1634, dtype))(Current, ur8_1x)).it_r8);
	loc9 = (EIF_REAL_64) tr8_1;
	RTHOOK(5);
	RTDBGAL(10, 0x20000000, 1, 0); /* loc10 */
	loc10 = (EIF_REAL_64) (EIF_REAL_64) (loc8 * loc8);
	RTHOOK(6);
	RTDBGAL(11, 0x20000000, 1, 0); /* loc11 */
	loc11 = (EIF_REAL_64) (EIF_REAL_64) (loc9 * loc9);
	RTHOOK(7);
	RTDBGAL(13, 0x20000000, 1, 0); /* loc13 */
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (arg3 * arg3));
	loc13 = (EIF_REAL_64) tr8_1;
	RTHOOK(8);
	RTDBGAL(14, 0x20000000, 1, 0); /* loc14 */
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (arg4 * arg4));
	loc14 = (EIF_REAL_64) tr8_1;
	RTHOOK(9);
	RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
	loc1 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc10) /  (EIF_REAL_64) (loc13)) + (EIF_REAL_64) ((EIF_REAL_64) (loc11) /  (EIF_REAL_64) (loc14)));
	RTHOOK(10);
	RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
	loc2 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc8 * loc9)) /  (EIF_REAL_64) (loc13)) - (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc8 * loc9)) /  (EIF_REAL_64) (loc14)))) /  (EIF_REAL_64) (loc1));
	RTHOOK(11);
	RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
	loc3 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc14 * loc10) + (EIF_REAL_64) (loc13 * loc11));
	RTHOOK(12);
	RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (arg3 * arg4));
	loc4 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (loc3));
	RTHOOK(13);
	RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	loc5 = (EIF_REAL_64) tr8_1;
	RTHOOK(14);
	RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
	loc7 = (EIF_REAL_64) (EIF_REAL_64) (loc4 * loc4);
	RTHOOK(15);
	RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	loc6 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 * loc7);
	RTHOOK(16);
	RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
	loc3 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc3 * loc7) - loc7);
	RTHOOK(17);
	RTDBGAL(25, 0xF80005AB, 0, 0); /* loc25 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc25 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(18);
	RTDBGAL(27, 0x10000000, 1, 0); /* loc27 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14189, "line_width", loc25))(loc25)).it_i4);
	loc27 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(19);
	RTDBGAL(26, 0x04000000, 1, 0); /* loc26 */
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14193, "dashed_line_style", loc25))(loc25)).it_b);
	if (tb2) {
		tb1 = (EIF_BOOLEAN)(loc27 == ((EIF_INTEGER_32) 1L));
	}
	loc26 = (EIF_BOOLEAN) tb1;
	RTHOOK(20);
	RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
	ur8_1 = loc3;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1638, dtype))(Current, ur8_1x)).it_r8);
	loc12 = (EIF_REAL_64) tr8_1;
	RTHOOK(21);
	RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
	ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (loc5 - loc12);
	loc17 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(22);
	RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
	ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (loc5 + loc12);
	loc18 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(23);
	RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
	loc5 += loc2;
	RTHOOK(24);
	RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
	loc7 += loc6;
	RTHOOK(25);
	RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
	loc3 -= loc7;
	RTHOOK(26);
	RTDBGAL(19, 0x10000000, 1, 0); /* loc19 */
	loc19 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	RTHOOK(27);
	RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
	loc20 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(28);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_less_real_64 (loc3, tr8_1)) break;
		RTHOOK(29);
		RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
		ur8_1 = loc3;
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1638, dtype))(Current, ur8_1x)).it_r8);
		loc12 = (EIF_REAL_64) tr8_2;
		RTHOOK(30);
		RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (loc5 - loc12);
		loc15 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(31);
		RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (loc5 + loc12);
		loc16 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(32);
		if ((EIF_BOOLEAN) (loc27 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(33);
			if (loc26) {
				RTHOOK(34);
				RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
				ui4_1 = loc15;
				ti4_1 = eif_min_int32 (loc17,ui4_1);
				loc21 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(35);
				RTDBGAL(22, 0x10000000, 1, 0); /* loc22 */
				ui4_1 = loc15;
				ti4_1 = eif_max_int32 (loc17,ui4_1);
				loc22 = (EIF_INTEGER_32) ti4_1;
				for (;;) {
					RTHOOK(36);
					if ((EIF_BOOLEAN) (loc21 > loc22)) break;
					RTHOOK(37);
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc23 % ((EIF_INTEGER_32) 8L)) < ((EIF_INTEGER_32) 4L))) {
						RTHOOK(38);
						ui4_1 = (EIF_INTEGER_32) (arg1 + loc21);
						ui4_2 = (EIF_INTEGER_32) (loc19 - ((EIF_INTEGER_32) 1L));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14211, "draw_point", loc25))(loc25, ui4_1x, ui4_2x);
						RTHOOK(39);
						ui4_1 = (EIF_INTEGER_32) (arg1 - loc21);
						ui4_2 = loc20;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14211, "draw_point", loc25))(loc25, ui4_1x, ui4_2x);
					}
					RTHOOK(40);
					RTDBGAL(23, 0x10000000, 1, 0); /* loc23 */
					loc23++;
					RTHOOK(41);
					RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
					loc21++;
				}
				RTHOOK(42);
				RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
				ui4_1 = loc16;
				ti4_1 = eif_min_int32 (loc18,ui4_1);
				loc21 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(43);
				RTDBGAL(22, 0x10000000, 1, 0); /* loc22 */
				ui4_1 = loc16;
				ti4_1 = eif_max_int32 (loc18,ui4_1);
				loc22 = (EIF_INTEGER_32) ti4_1;
				for (;;) {
					RTHOOK(44);
					if ((EIF_BOOLEAN) (loc21 > loc22)) break;
					RTHOOK(45);
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc24 % ((EIF_INTEGER_32) 8L)) < ((EIF_INTEGER_32) 4L))) {
						RTHOOK(46);
						ui4_1 = (EIF_INTEGER_32) (arg1 + loc21);
						ui4_2 = (EIF_INTEGER_32) (loc19 - ((EIF_INTEGER_32) 1L));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14211, "draw_point", loc25))(loc25, ui4_1x, ui4_2x);
						RTHOOK(47);
						ui4_1 = (EIF_INTEGER_32) (arg1 - loc21);
						ui4_2 = loc20;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14211, "draw_point", loc25))(loc25, ui4_1x, ui4_2x);
					}
					RTHOOK(48);
					RTDBGAL(24, 0x10000000, 1, 0); /* loc24 */
					loc24++;
					RTHOOK(49);
					RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
					loc21++;
				}
			} else {
				RTHOOK(50);
				ui4_1 = (EIF_INTEGER_32) (arg1 + loc17);
				ui4_2 = (EIF_INTEGER_32) (loc19 - ((EIF_INTEGER_32) 1L));
				ui4_3 = (EIF_INTEGER_32) (arg1 + loc15);
				ui4_4 = loc19;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc25))(loc25, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
				RTHOOK(51);
				ui4_1 = (EIF_INTEGER_32) (arg1 + loc18);
				ui4_2 = (EIF_INTEGER_32) (loc19 - ((EIF_INTEGER_32) 1L));
				ui4_3 = (EIF_INTEGER_32) (arg1 + loc16);
				ui4_4 = loc19;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc25))(loc25, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
				RTHOOK(52);
				ui4_1 = (EIF_INTEGER_32) (arg1 - loc17);
				ui4_2 = (EIF_INTEGER_32) (loc20 + ((EIF_INTEGER_32) 1L));
				ui4_3 = (EIF_INTEGER_32) (arg1 - loc15);
				ui4_4 = loc20;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc25))(loc25, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
				RTHOOK(53);
				ui4_1 = (EIF_INTEGER_32) (arg1 - loc18);
				ui4_2 = (EIF_INTEGER_32) (loc20 + ((EIF_INTEGER_32) 1L));
				ui4_3 = (EIF_INTEGER_32) (arg1 - loc16);
				ui4_4 = loc20;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc25))(loc25, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
			}
		}
		RTHOOK(54);
		RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
		loc5 += loc2;
		RTHOOK(55);
		RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
		loc7 += loc6;
		RTHOOK(56);
		RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
		loc3 -= loc7;
		RTHOOK(57);
		RTDBGAL(19, 0x10000000, 1, 0); /* loc19 */
		loc19++;
		RTHOOK(58);
		RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
		loc20--;
		RTHOOK(59);
		RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
		loc17 = (EIF_INTEGER_32) loc15;
		RTHOOK(60);
		RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
		loc18 = (EIF_INTEGER_32) loc16;
	}
	RTHOOK(61);
	if ((EIF_BOOLEAN) (loc27 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(62);
		ui4_1 = (EIF_INTEGER_32) (arg1 + loc15);
		ui4_2 = loc19;
		ui4_3 = (EIF_INTEGER_32) (arg1 + loc16);
		ui4_4 = loc19;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc25))(loc25, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTHOOK(63);
		ui4_1 = (EIF_INTEGER_32) (arg1 - loc15);
		ui4_2 = (EIF_INTEGER_32) (loc20 + ((EIF_INTEGER_32) 1L));
		ui4_3 = (EIF_INTEGER_32) (arg1 - loc16);
		ui4_4 = (EIF_INTEGER_32) (loc20 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc25))(loc25, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(64);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(34);
	RTEE;
#undef up1
#undef ur8_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_rotated_arc */
void F1863_24097 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "draw_rotated_arc";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc8 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc9 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc10 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc11 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc12 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc13 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc20 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc21 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc22 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc23 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc24 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc25 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc26 = (EIF_BOOLEAN) 0;
	EIF_REAL_64 loc27 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc28 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc29 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc30 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r8
#define arg6 arg6x.it_r8
#define arg7 arg7x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_r8 = * (EIF_REAL_64 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r8 = * (EIF_REAL_64 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc25);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_REAL64,&arg6);
	RTLU(SK_REAL64,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REAL64, &loc8);
	RTLU(SK_REAL64, &loc9);
	RTLU(SK_REAL64, &loc10);
	RTLU(SK_REAL64, &loc11);
	RTLU(SK_REAL64, &loc12);
	RTLU(SK_REAL64, &loc13);
	RTLU(SK_REAL64, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_INT32, &loc18);
	RTLU(SK_INT32, &loc19);
	RTLU(SK_INT32, &loc20);
	RTLU(SK_INT32, &loc21);
	RTLU(SK_INT32, &loc22);
	RTLU(SK_INT32, &loc23);
	RTLU(SK_INT32, &loc24);
	RTLU(SK_REF, &loc25);
	RTLU(SK_BOOL, &loc26);
	RTLU(SK_REAL64, &loc27);
	RTLU(SK_REAL64, &loc28);
	RTLU(SK_INT32, &loc29);
	RTLU(SK_INT32, &loc30);
	
	RTEAA(l_feature_name, 1862, Current, 30, 7, 29451);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29451);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_larger_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("b_larger_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14189, "line_width", tr1))(tr1)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
		ur8_1 = arg5;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1632, dtype))(Current, ur8_1x)).it_r8);
		loc8 = (EIF_REAL_64) tr8_1;
		RTHOOK(5);
		RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
		ur8_1 = arg5;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1634, dtype))(Current, ur8_1x)).it_r8);
		loc9 = (EIF_REAL_64) tr8_1;
		RTHOOK(6);
		RTDBGAL(10, 0x20000000, 1, 0); /* loc10 */
		loc10 = (EIF_REAL_64) (EIF_REAL_64) (loc8 * loc8);
		RTHOOK(7);
		RTDBGAL(11, 0x20000000, 1, 0); /* loc11 */
		loc11 = (EIF_REAL_64) (EIF_REAL_64) (loc9 * loc9);
		RTHOOK(8);
		RTDBGAL(13, 0x20000000, 1, 0); /* loc13 */
		tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (arg3 * arg3));
		loc13 = (EIF_REAL_64) tr8_1;
		RTHOOK(9);
		RTDBGAL(14, 0x20000000, 1, 0); /* loc14 */
		tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (arg4 * arg4));
		loc14 = (EIF_REAL_64) tr8_1;
		RTHOOK(10);
		RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
		loc1 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc10) /  (EIF_REAL_64) (loc13)) + (EIF_REAL_64) ((EIF_REAL_64) (loc11) /  (EIF_REAL_64) (loc14)));
		RTHOOK(11);
		RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
		loc2 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc8 * loc9)) /  (EIF_REAL_64) (loc13)) - (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc8 * loc9)) /  (EIF_REAL_64) (loc14)))) /  (EIF_REAL_64) (loc1));
		RTHOOK(12);
		RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
		loc3 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc14 * loc10) + (EIF_REAL_64) (loc13 * loc11));
		RTHOOK(13);
		RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
		tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (arg3 * arg4));
		loc4 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (loc3));
		RTHOOK(14);
		RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		loc5 = (EIF_REAL_64) tr8_1;
		RTHOOK(15);
		RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
		loc7 = (EIF_REAL_64) (EIF_REAL_64) (loc4 * loc4);
		RTHOOK(16);
		RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc6 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 * loc7);
		RTHOOK(17);
		RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
		loc3 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc3 * loc7) - loc7);
		RTHOOK(18);
		RTDBGAL(27, 0x20000000, 1, 0); /* loc27 */
		loc27 = (EIF_REAL_64) (EIF_REAL_64) (arg5 + arg6);
		RTHOOK(19);
		RTDBGAL(27, 0x20000000, 1, 0); /* loc27 */
		ur8_1 = loc27;
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
		ur8_2 = (EIF_REAL_64) (tr8_1 * tr8_2);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18473, dtype))(Current, ur8_1x, ur8_2x)).it_r8);
		loc27 = (EIF_REAL_64) tr8_1;
		RTHOOK(20);
		RTDBGAL(28, 0x20000000, 1, 0); /* loc28 */
		loc28 = (EIF_REAL_64) (EIF_REAL_64) (loc27 + arg7);
		RTHOOK(21);
		RTDBGAL(28, 0x20000000, 1, 0); /* loc28 */
		ur8_1 = loc28;
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
		ur8_2 = (EIF_REAL_64) (tr8_1 * tr8_2);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18473, dtype))(Current, ur8_1x, ur8_2x)).it_r8);
		loc28 = (EIF_REAL_64) tr8_1;
		RTHOOK(22);
		RTDBGAL(25, 0xF80005AB, 0, 0); /* loc25 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc25 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(23);
		RTDBGAL(29, 0x10000000, 1, 0); /* loc29 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14189, "line_width", loc25))(loc25)).it_i4);
		loc29 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(24);
		if ((EIF_BOOLEAN) (loc29 > ((EIF_INTEGER_32) 1L))) {
			RTHOOK(25);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14122, "foreground_color", loc25))(loc25)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14125, "set_background_color", loc25))(loc25, ur1x);
			RTHOOK(26);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14206, "disable_dashed_line_style", loc25))(loc25);
			RTHOOK(27);
			if ((EIF_BOOLEAN) (loc29 <= ((EIF_INTEGER_32) 2L))) {
				RTHOOK(28);
				RTDBGAL(29, 0x10000000, 1, 0); /* loc29 */
				loc29++;
			}
		}
		RTHOOK(29);
		RTDBGAL(30, 0x10000000, 1, 0); /* loc30 */
		loc30 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc29 / ((EIF_INTEGER_32) 2L));
		RTHOOK(30);
		RTDBGAL(26, 0x04000000, 1, 0); /* loc26 */
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14193, "dashed_line_style", loc25))(loc25)).it_b);
		loc26 = (EIF_BOOLEAN) tb1;
		RTHOOK(31);
		RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
		ur8_1 = loc3;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1638, dtype))(Current, ur8_1x)).it_r8);
		loc12 = (EIF_REAL_64) tr8_1;
		RTHOOK(32);
		RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (loc5 - loc12);
		loc17 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(33);
		RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (loc5 + loc12);
		loc18 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(34);
		RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
		loc5 += loc2;
		RTHOOK(35);
		RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
		loc7 += loc6;
		RTHOOK(36);
		RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
		loc3 -= loc7;
		RTHOOK(37);
		RTDBGAL(19, 0x10000000, 1, 0); /* loc19 */
		loc19 = (EIF_INTEGER_32) arg2;
		RTHOOK(38);
		RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
		loc20 = (EIF_INTEGER_32) arg2;
		for (;;) {
			RTHOOK(39);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN) eif_is_less_real_64 (loc3, tr8_1)) break;
			RTHOOK(40);
			RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
			ur8_1 = loc3;
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1638, dtype))(Current, ur8_1x)).it_r8);
			loc12 = (EIF_REAL_64) tr8_2;
			RTHOOK(41);
			RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
			ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (loc5 - loc12);
			loc15 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(42);
			RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
			ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (loc5 + loc12);
			loc16 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(43);
			RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
			ui4_1 = loc15;
			ti4_1 = eif_min_int32 (loc17,ui4_1);
			loc21 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(44);
			RTDBGAL(22, 0x10000000, 1, 0); /* loc22 */
			ui4_1 = loc15;
			ti4_1 = eif_max_int32 (loc17,ui4_1);
			loc22 = (EIF_INTEGER_32) ti4_1;
			for (;;) {
				RTHOOK(45);
				if ((EIF_BOOLEAN) (loc21 > loc22)) break;
				RTHOOK(46);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc26 || (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc23 % ((EIF_INTEGER_32) 8L)) < ((EIF_INTEGER_32) 4L)))) {
					RTHOOK(47);
					ui4_1 = loc21;
					ui4_2 = (EIF_INTEGER_32) (loc19 - arg2);
					ur8_1 = loc27;
					ur8_2 = loc28;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18865, dtype))(Current, ui4_1x, ui4_2x, ur8_1x, ur8_2x)).it_b);
					if (tb1) {
						RTHOOK(48);
						if ((EIF_BOOLEAN)(loc29 == ((EIF_INTEGER_32) 1L))) {
							RTHOOK(49);
							ui4_1 = (EIF_INTEGER_32) (arg1 + loc21);
							ui4_2 = loc19;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14211, "draw_point", loc25))(loc25, ui4_1x, ui4_2x);
						} else {
							RTHOOK(50);
							ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + loc21) - loc30);
							ui4_2 = (EIF_INTEGER_32) (loc19 - loc30);
							ui4_3 = loc29;
							ui4_4 = loc29;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14229, "fill_ellipse", loc25))(loc25, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
						}
					}
					RTHOOK(51);
					ui4_1 = (EIF_INTEGER_32) -loc21;
					ui4_2 = (EIF_INTEGER_32) (loc20 - arg2);
					ur8_1 = loc27;
					ur8_2 = loc28;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18865, dtype))(Current, ui4_1x, ui4_2x, ur8_1x, ur8_2x)).it_b);
					if (tb1) {
						RTHOOK(52);
						if ((EIF_BOOLEAN)(loc29 == ((EIF_INTEGER_32) 1L))) {
							RTHOOK(53);
							ui4_1 = (EIF_INTEGER_32) (arg1 - loc21);
							ui4_2 = (EIF_INTEGER_32) (loc20 - ((EIF_INTEGER_32) 1L));
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14211, "draw_point", loc25))(loc25, ui4_1x, ui4_2x);
						} else {
							RTHOOK(54);
							ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 - loc21) - loc30);
							ui4_2 = (EIF_INTEGER_32) (loc20 - loc30);
							ui4_3 = loc29;
							ui4_4 = loc29;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14229, "fill_ellipse", loc25))(loc25, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
						}
					}
				}
				RTHOOK(55);
				RTDBGAL(23, 0x10000000, 1, 0); /* loc23 */
				loc23++;
				RTHOOK(56);
				RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
				loc21++;
			}
			RTHOOK(57);
			RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
			ui4_1 = loc16;
			ti4_1 = eif_min_int32 (loc18,ui4_1);
			loc21 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(58);
			RTDBGAL(22, 0x10000000, 1, 0); /* loc22 */
			ui4_1 = loc16;
			ti4_1 = eif_max_int32 (loc18,ui4_1);
			loc22 = (EIF_INTEGER_32) ti4_1;
			for (;;) {
				RTHOOK(59);
				if ((EIF_BOOLEAN) (loc21 > loc22)) break;
				RTHOOK(60);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc26 || (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc24 % ((EIF_INTEGER_32) 8L)) < ((EIF_INTEGER_32) 4L)))) {
					RTHOOK(61);
					ui4_1 = loc21;
					ui4_2 = (EIF_INTEGER_32) (loc19 - arg2);
					ur8_1 = loc27;
					ur8_2 = loc28;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18865, dtype))(Current, ui4_1x, ui4_2x, ur8_1x, ur8_2x)).it_b);
					if (tb1) {
						RTHOOK(62);
						if ((EIF_BOOLEAN)(loc29 == ((EIF_INTEGER_32) 1L))) {
							RTHOOK(63);
							ui4_1 = (EIF_INTEGER_32) (arg1 + loc21);
							ui4_2 = loc19;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14211, "draw_point", loc25))(loc25, ui4_1x, ui4_2x);
						} else {
							RTHOOK(64);
							ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + loc21) - loc30);
							ui4_2 = (EIF_INTEGER_32) (loc19 - loc30);
							ui4_3 = loc29;
							ui4_4 = loc29;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14229, "fill_ellipse", loc25))(loc25, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
						}
					}
					RTHOOK(65);
					ui4_1 = (EIF_INTEGER_32) -loc21;
					ui4_2 = (EIF_INTEGER_32) (loc20 - arg2);
					ur8_1 = loc27;
					ur8_2 = loc28;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18865, dtype))(Current, ui4_1x, ui4_2x, ur8_1x, ur8_2x)).it_b);
					if (tb1) {
						RTHOOK(66);
						if ((EIF_BOOLEAN)(loc29 == ((EIF_INTEGER_32) 1L))) {
							RTHOOK(67);
							ui4_1 = (EIF_INTEGER_32) (arg1 - loc21);
							ui4_2 = (EIF_INTEGER_32) (loc20 - ((EIF_INTEGER_32) 1L));
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14211, "draw_point", loc25))(loc25, ui4_1x, ui4_2x);
						} else {
							RTHOOK(68);
							ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 - loc21) - loc30);
							ui4_2 = (EIF_INTEGER_32) (loc20 - loc30);
							ui4_3 = loc29;
							ui4_4 = loc29;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14229, "fill_ellipse", loc25))(loc25, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
						}
					}
				}
				RTHOOK(69);
				RTDBGAL(24, 0x10000000, 1, 0); /* loc24 */
				loc24++;
				RTHOOK(70);
				RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
				loc21++;
			}
			RTHOOK(71);
			RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
			loc5 += loc2;
			RTHOOK(72);
			RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
			loc7 += loc6;
			RTHOOK(73);
			RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
			loc3 -= loc7;
			RTHOOK(74);
			RTDBGAL(19, 0x10000000, 1, 0); /* loc19 */
			loc19++;
			RTHOOK(75);
			RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
			loc20--;
			RTHOOK(76);
			RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
			loc17 = (EIF_INTEGER_32) loc15;
			RTHOOK(77);
			RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
			loc18 = (EIF_INTEGER_32) loc16;
		}
		RTHOOK(78);
		RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
		ui4_1 = loc15;
		ti4_1 = eif_min_int32 (loc16,ui4_1);
		loc21 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(79);
		RTDBGAL(22, 0x10000000, 1, 0); /* loc22 */
		ui4_1 = loc15;
		ti4_1 = eif_max_int32 (loc16,ui4_1);
		loc22 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(80);
			if ((EIF_BOOLEAN) (loc21 > loc22)) break;
			RTHOOK(81);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc26 || (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc24 % ((EIF_INTEGER_32) 8L)) < ((EIF_INTEGER_32) 4L)))) {
				RTHOOK(82);
				ui4_1 = loc21;
				ui4_2 = (EIF_INTEGER_32) (loc19 - arg2);
				ur8_1 = loc27;
				ur8_2 = loc28;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18865, dtype))(Current, ui4_1x, ui4_2x, ur8_1x, ur8_2x)).it_b);
				if (tb1) {
					RTHOOK(83);
					if ((EIF_BOOLEAN)(loc29 == ((EIF_INTEGER_32) 1L))) {
						RTHOOK(84);
						ui4_1 = (EIF_INTEGER_32) (arg1 + loc21);
						ui4_2 = loc19;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14211, "draw_point", loc25))(loc25, ui4_1x, ui4_2x);
					} else {
						RTHOOK(85);
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + loc21) - loc30);
						ui4_2 = (EIF_INTEGER_32) (loc19 - loc30);
						ui4_3 = loc29;
						ui4_4 = loc29;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14229, "fill_ellipse", loc25))(loc25, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
					}
				}
				RTHOOK(86);
				ui4_1 = (EIF_INTEGER_32) -loc21;
				ui4_2 = (EIF_INTEGER_32) (loc20 - arg2);
				ur8_1 = loc27;
				ur8_2 = loc28;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18865, dtype))(Current, ui4_1x, ui4_2x, ur8_1x, ur8_2x)).it_b);
				if (tb1) {
					RTHOOK(87);
					if ((EIF_BOOLEAN)(loc29 == ((EIF_INTEGER_32) 1L))) {
						RTHOOK(88);
						ui4_1 = (EIF_INTEGER_32) (arg1 - loc21);
						ui4_2 = (EIF_INTEGER_32) (loc20 - ((EIF_INTEGER_32) 1L));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14211, "draw_point", loc25))(loc25, ui4_1x, ui4_2x);
					} else {
						RTHOOK(89);
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 - loc21) - loc30);
						ui4_2 = (EIF_INTEGER_32) (loc20 - loc30);
						ui4_3 = loc29;
						ui4_4 = loc29;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14229, "fill_ellipse", loc25))(loc25, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
					}
				}
			}
			RTHOOK(90);
			RTDBGAL(24, 0x10000000, 1, 0); /* loc24 */
			loc24++;
			RTHOOK(91);
			RTDBGAL(21, 0x10000000, 1, 0); /* loc21 */
			loc21++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(92);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(39);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_MODEL_DRAWER}.draw_rotated_pie_slice */
void F1863_24098 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "draw_rotated_pie_slice";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc11 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc12 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc13 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r8
#define arg6 arg6x.it_r8
#define arg7 arg7x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_r8 = * (EIF_REAL_64 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r8 = * (EIF_REAL_64 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_REAL64,&arg6);
	RTLU(SK_REAL64,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_REAL64, &loc11);
	RTLU(SK_REAL64, &loc12);
	RTLU(SK_REAL64, &loc13);
	
	RTEAA(l_feature_name, 1862, Current, 13, 7, 29452);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29452);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_larger_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("b_larger_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14189, "line_width", tr1))(tr1)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		ui4_1 = arg1;
		ui4_2 = arg2;
		ui4_3 = arg3;
		ui4_4 = arg4;
		ur8_1 = arg5;
		ur8_2 = arg6;
		ur8_3 = arg7;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18862, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x, ur8_2x, ur8_3x);
		RTHOOK(5);
		RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
		loc1 = (EIF_REAL_64) (EIF_REAL_64) (arg5 + arg6);
		RTHOOK(6);
		RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
		ur8_1 = loc1;
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
		ur8_2 = (EIF_REAL_64) (tr8_1 * tr8_2);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18473, dtype))(Current, ur8_1x, ur8_2x)).it_r8);
		loc1 = (EIF_REAL_64) tr8_1;
		RTHOOK(7);
		RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
		ur8_1 = arg6;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1632, dtype))(Current, ur8_1x)).it_r8);
		loc5 = (EIF_REAL_64) tr8_1;
		RTHOOK(8);
		RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
		ur8_1 = arg6;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1634, dtype))(Current, ur8_1x)).it_r8);
		loc6 = (EIF_REAL_64) tr8_1;
		RTHOOK(9);
		RTDBGAL(13, 0x20000000, 1, 0); /* loc13 */
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_5 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (arg4), (EIF_REAL_64) (tr8_1)) * (EIF_REAL_64) pow ((EIF_REAL_64) (arg3), (EIF_REAL_64) (tr8_2)))) /  (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (arg4), (EIF_REAL_64) (tr8_3)) * (EIF_REAL_64) pow ((EIF_REAL_64) (loc5), (EIF_REAL_64) (tr8_4))) + (EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (arg3), (EIF_REAL_64) (tr8_5)) * (EIF_REAL_64) pow ((EIF_REAL_64) (loc6), (EIF_REAL_64) (tr8_6))))));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1638, dtype))(Current, ur8_1x)).it_r8);
		loc13 = (EIF_REAL_64) tr8_1;
		RTHOOK(10);
		RTDBGAL(11, 0x20000000, 1, 0); /* loc11 */
		loc11 = (EIF_REAL_64) (EIF_REAL_64) (loc13 * loc5);
		RTHOOK(11);
		RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
		loc12 = (EIF_REAL_64) (EIF_REAL_64) (loc13 * loc6);
		RTHOOK(12);
		RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
		ur8_1 = arg5;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1632, dtype))(Current, ur8_1x)).it_r8);
		loc3 = (EIF_REAL_64) tr8_1;
		RTHOOK(13);
		RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
		ur8_1 = arg5;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1634, dtype))(Current, ur8_1x)).it_r8);
		loc4 = (EIF_REAL_64) tr8_1;
		RTHOOK(14);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) (loc11 * loc3) - (EIF_REAL_64) (loc12 * loc4));
		loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ti4_1);
		RTHOOK(15);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) (loc11 * loc4) + (EIF_REAL_64) (loc12 * loc3));
		loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ti4_1);
		RTHOOK(16);
		RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
		loc2 = (EIF_REAL_64) (EIF_REAL_64) (loc1 + arg7);
		RTHOOK(17);
		RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
		ur8_1 = loc2;
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
		ur8_2 = (EIF_REAL_64) (tr8_1 * tr8_2);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18473, dtype))(Current, ur8_1x, ur8_2x)).it_r8);
		loc2 = (EIF_REAL_64) tr8_1;
		RTHOOK(18);
		RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
		ur8_1 = (EIF_REAL_64) (arg6 + arg7);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1632, dtype))(Current, ur8_1x)).it_r8);
		loc5 = (EIF_REAL_64) tr8_1;
		RTHOOK(19);
		RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
		ur8_1 = (EIF_REAL_64) (arg6 + arg7);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1634, dtype))(Current, ur8_1x)).it_r8);
		loc6 = (EIF_REAL_64) tr8_1;
		RTHOOK(20);
		RTDBGAL(13, 0x20000000, 1, 0); /* loc13 */
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_5 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (arg4), (EIF_REAL_64) (tr8_1)) * (EIF_REAL_64) pow ((EIF_REAL_64) (arg3), (EIF_REAL_64) (tr8_2)))) /  (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (arg4), (EIF_REAL_64) (tr8_3)) * (EIF_REAL_64) pow ((EIF_REAL_64) (loc5), (EIF_REAL_64) (tr8_4))) + (EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (arg3), (EIF_REAL_64) (tr8_5)) * (EIF_REAL_64) pow ((EIF_REAL_64) (loc6), (EIF_REAL_64) (tr8_6))))));
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1638, dtype))(Current, ur8_1x)).it_r8);
		loc13 = (EIF_REAL_64) tr8_1;
		RTHOOK(21);
		RTDBGAL(11, 0x20000000, 1, 0); /* loc11 */
		loc11 = (EIF_REAL_64) (EIF_REAL_64) (loc13 * loc5);
		RTHOOK(22);
		RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
		loc12 = (EIF_REAL_64) (EIF_REAL_64) (loc13 * loc6);
		RTHOOK(23);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) (loc11 * loc3) - (EIF_REAL_64) (loc12 * loc4));
		loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ti4_1);
		RTHOOK(24);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) (loc11 * loc4) + (EIF_REAL_64) (loc12 * loc3));
		loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ti4_1);
		RTHOOK(25);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,1);
		ui4_1 = arg1;
		ui4_2 = arg2;
		ui4_3 = loc7;
		ui4_4 = loc8;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTHOOK(26);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(26,1);
		ui4_1 = arg1;
		ui4_2 = arg2;
		ui4_3 = loc9;
		ui4_4 = loc10;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(22);
	RTEE;
#undef up1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_MODEL_DRAWER}.fill_rotated_pie_slice */
void F1863_24099 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "fill_rotated_pie_slice";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc3 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 loc9 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc10 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc11 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc12 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc13 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc15 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc16 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc17 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc18 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc19 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc20 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc21 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc22 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc23 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc24 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc25 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc26 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc27 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc28 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc29 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc30 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc31 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc32 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc33 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc34 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc35 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc36 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc37 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc38 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc39 = (EIF_BOOLEAN) 0;
	EIF_REAL_64 loc40 = (EIF_REAL_64) 0;
	EIF_BOOLEAN loc41 = (EIF_BOOLEAN) 0;
	EIF_REAL_64 loc42 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc43 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc44 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc45 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc46 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r8
#define arg6 arg6x.it_r8
#define arg7 arg7x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_r8 = * (EIF_REAL_64 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r8 = * (EIF_REAL_64 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc30);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_REAL64,&arg6);
	RTLU(SK_REAL64,&arg7);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	RTLU(SK_REAL64, &loc2);
	RTLU(SK_REAL64, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REAL64, &loc9);
	RTLU(SK_REAL64, &loc10);
	RTLU(SK_REAL64, &loc11);
	RTLU(SK_REAL64, &loc12);
	RTLU(SK_REAL64, &loc13);
	RTLU(SK_REAL64, &loc14);
	RTLU(SK_REAL64, &loc15);
	RTLU(SK_REAL64, &loc16);
	RTLU(SK_REAL64, &loc17);
	RTLU(SK_REAL64, &loc18);
	RTLU(SK_REAL64, &loc19);
	RTLU(SK_REAL64, &loc20);
	RTLU(SK_REAL64, &loc21);
	RTLU(SK_REAL64, &loc22);
	RTLU(SK_REAL64, &loc23);
	RTLU(SK_REAL64, &loc24);
	RTLU(SK_REAL64, &loc25);
	RTLU(SK_INT32, &loc26);
	RTLU(SK_INT32, &loc27);
	RTLU(SK_INT32, &loc28);
	RTLU(SK_INT32, &loc29);
	RTLU(SK_REF, &loc30);
	RTLU(SK_REAL64, &loc31);
	RTLU(SK_REAL64, &loc32);
	RTLU(SK_INT32, &loc33);
	RTLU(SK_INT32, &loc34);
	RTLU(SK_INT32, &loc35);
	RTLU(SK_INT32, &loc36);
	RTLU(SK_INT32, &loc37);
	RTLU(SK_INT32, &loc38);
	RTLU(SK_BOOL, &loc39);
	RTLU(SK_REAL64, &loc40);
	RTLU(SK_BOOL, &loc41);
	RTLU(SK_REAL64, &loc42);
	RTLU(SK_INT32, &loc43);
	RTLU(SK_INT32, &loc44);
	RTLU(SK_INT32, &loc45);
	RTLU(SK_INT32, &loc46);
	
	RTEAA(l_feature_name, 1862, Current, 46, 7, 29453);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29453);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_larger_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("b_larger_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
	loc1 = (EIF_REAL_64) (EIF_REAL_64) (arg5 + arg6);
	RTHOOK(4);
	RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
	ur8_1 = loc1;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
	ur8_2 = (EIF_REAL_64) (tr8_1 * tr8_2);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18473, dtype))(Current, ur8_1x, ur8_2x)).it_r8);
	loc1 = (EIF_REAL_64) tr8_1;
	RTHOOK(5);
	RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
	ur8_1 = arg6;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1632, dtype))(Current, ur8_1x)).it_r8);
	loc3 = (EIF_REAL_64) tr8_1;
	RTHOOK(6);
	RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
	ur8_1 = arg6;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1634, dtype))(Current, ur8_1x)).it_r8);
	loc4 = (EIF_REAL_64) tr8_1;
	RTHOOK(7);
	RTDBGAL(11, 0x20000000, 1, 0); /* loc11 */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_5 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (arg4), (EIF_REAL_64) (tr8_1)) * (EIF_REAL_64) pow ((EIF_REAL_64) (arg3), (EIF_REAL_64) (tr8_2)))) /  (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (arg4), (EIF_REAL_64) (tr8_3)) * (EIF_REAL_64) pow ((EIF_REAL_64) (loc3), (EIF_REAL_64) (tr8_4))) + (EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (arg3), (EIF_REAL_64) (tr8_5)) * (EIF_REAL_64) pow ((EIF_REAL_64) (loc4), (EIF_REAL_64) (tr8_6))))));
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1638, dtype))(Current, ur8_1x)).it_r8);
	loc11 = (EIF_REAL_64) tr8_1;
	RTHOOK(8);
	RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
	loc9 = (EIF_REAL_64) (EIF_REAL_64) (loc11 * loc3);
	RTHOOK(9);
	RTDBGAL(10, 0x20000000, 1, 0); /* loc10 */
	loc10 = (EIF_REAL_64) (EIF_REAL_64) (loc11 * loc4);
	RTHOOK(10);
	RTDBGAL(19, 0x20000000, 1, 0); /* loc19 */
	ur8_1 = arg5;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1632, dtype))(Current, ur8_1x)).it_r8);
	loc19 = (EIF_REAL_64) tr8_1;
	RTHOOK(11);
	RTDBGAL(20, 0x20000000, 1, 0); /* loc20 */
	ur8_1 = arg5;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1634, dtype))(Current, ur8_1x)).it_r8);
	loc20 = (EIF_REAL_64) tr8_1;
	RTHOOK(12);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) (loc9 * loc19) - (EIF_REAL_64) (loc10 * loc20));
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ti4_1);
	RTHOOK(13);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) (loc9 * loc20) + (EIF_REAL_64) (loc10 * loc19));
	loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ti4_1);
	RTHOOK(14);
	RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
	loc2 = (EIF_REAL_64) (EIF_REAL_64) (loc1 + arg7);
	RTHOOK(15);
	RTDBGAL(2, 0x20000000, 1, 0); /* loc2 */
	ur8_1 = loc2;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1612, dtype))(Current)).it_r8);
	ur8_2 = (EIF_REAL_64) (tr8_1 * tr8_2);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18473, dtype))(Current, ur8_1x, ur8_2x)).it_r8);
	loc2 = (EIF_REAL_64) tr8_1;
	RTHOOK(16);
	RTDBGAL(3, 0x20000000, 1, 0); /* loc3 */
	ur8_1 = (EIF_REAL_64) (arg6 + arg7);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1632, dtype))(Current, ur8_1x)).it_r8);
	loc3 = (EIF_REAL_64) tr8_1;
	RTHOOK(17);
	RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
	ur8_1 = (EIF_REAL_64) (arg6 + arg7);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1634, dtype))(Current, ur8_1x)).it_r8);
	loc4 = (EIF_REAL_64) tr8_1;
	RTHOOK(18);
	RTDBGAL(11, 0x20000000, 1, 0); /* loc11 */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_5 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	tr8_6 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	ur8_1 = (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (arg4), (EIF_REAL_64) (tr8_1)) * (EIF_REAL_64) pow ((EIF_REAL_64) (arg3), (EIF_REAL_64) (tr8_2)))) /  (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (arg4), (EIF_REAL_64) (tr8_3)) * (EIF_REAL_64) pow ((EIF_REAL_64) (loc3), (EIF_REAL_64) (tr8_4))) + (EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (arg3), (EIF_REAL_64) (tr8_5)) * (EIF_REAL_64) pow ((EIF_REAL_64) (loc4), (EIF_REAL_64) (tr8_6))))));
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1638, dtype))(Current, ur8_1x)).it_r8);
	loc11 = (EIF_REAL_64) tr8_1;
	RTHOOK(19);
	RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
	loc9 = (EIF_REAL_64) (EIF_REAL_64) (loc11 * loc3);
	RTHOOK(20);
	RTDBGAL(10, 0x20000000, 1, 0); /* loc10 */
	loc10 = (EIF_REAL_64) (EIF_REAL_64) (loc11 * loc4);
	RTHOOK(21);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) (loc9 * loc19) - (EIF_REAL_64) (loc10 * loc20));
	loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ti4_1);
	RTHOOK(22);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) ((EIF_REAL_64) (loc9 * loc20) + (EIF_REAL_64) (loc10 * loc19));
	loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ti4_1);
	RTHOOK(23);
	RTDBGAL(21, 0x20000000, 1, 0); /* loc21 */
	loc21 = (EIF_REAL_64) (EIF_REAL_64) (loc19 * loc19);
	RTHOOK(24);
	RTDBGAL(22, 0x20000000, 1, 0); /* loc22 */
	loc22 = (EIF_REAL_64) (EIF_REAL_64) (loc20 * loc20);
	RTHOOK(25);
	RTDBGAL(24, 0x20000000, 1, 0); /* loc24 */
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (arg3 * arg3));
	loc24 = (EIF_REAL_64) tr8_1;
	RTHOOK(26);
	RTDBGAL(25, 0x20000000, 1, 0); /* loc25 */
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (arg4 * arg4));
	loc25 = (EIF_REAL_64) tr8_1;
	RTHOOK(27);
	RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
	loc12 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc21) /  (EIF_REAL_64) (loc24)) + (EIF_REAL_64) ((EIF_REAL_64) (loc22) /  (EIF_REAL_64) (loc25)));
	RTHOOK(28);
	RTDBGAL(13, 0x20000000, 1, 0); /* loc13 */
	loc13 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc19 * loc20)) /  (EIF_REAL_64) (loc24)) - (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc19 * loc20)) /  (EIF_REAL_64) (loc25)))) /  (EIF_REAL_64) (loc12));
	RTHOOK(29);
	RTDBGAL(14, 0x20000000, 1, 0); /* loc14 */
	loc14 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc25 * loc21) + (EIF_REAL_64) (loc24 * loc22));
	RTHOOK(30);
	RTDBGAL(15, 0x20000000, 1, 0); /* loc15 */
	tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (arg3 * arg4));
	loc15 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (loc14));
	RTHOOK(31);
	RTDBGAL(16, 0x20000000, 1, 0); /* loc16 */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	loc16 = (EIF_REAL_64) tr8_1;
	RTHOOK(32);
	RTDBGAL(18, 0x20000000, 1, 0); /* loc18 */
	loc18 = (EIF_REAL_64) (EIF_REAL_64) (loc15 * loc15);
	RTHOOK(33);
	RTDBGAL(17, 0x20000000, 1, 0); /* loc17 */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
	loc17 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 * loc18);
	RTHOOK(34);
	RTDBGAL(14, 0x20000000, 1, 0); /* loc14 */
	loc14 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc14 * loc18) - loc18);
	RTHOOK(35);
	RTDBGAL(37, 0x10000000, 1, 0); /* loc37 */
	loc37 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - arg1);
	RTHOOK(36);
	RTDBGAL(38, 0x10000000, 1, 0); /* loc38 */
	loc38 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - arg2);
	RTHOOK(37);
	if ((EIF_BOOLEAN) (loc38 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(38);
		RTDBGAL(36, 0x10000000, 1, 0); /* loc36 */
		loc36 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	} else {
		RTHOOK(39);
		RTDBGAL(36, 0x10000000, 1, 0); /* loc36 */
		loc36 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTHOOK(40);
	if ((EIF_BOOLEAN)(loc38 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(41);
		RTDBGAL(39, 0x04000000, 1, 0); /* loc39 */
		loc39 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(42);
		RTDBGAL(40, 0x20000000, 1, 0); /* loc40 */
		tr8_1 = (EIF_REAL_64) (loc36);
		loc40 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc37) /  (EIF_REAL_64) (loc38)) * tr8_1);
		RTHOOK(43);
		RTDBGAL(39, 0x04000000, 1, 0); /* loc39 */
		loc39 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTHOOK(44);
	RTDBGAL(37, 0x10000000, 1, 0); /* loc37 */
	loc37 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 - arg1);
	RTHOOK(45);
	RTDBGAL(38, 0x10000000, 1, 0); /* loc38 */
	loc38 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 - arg2);
	RTHOOK(46);
	if ((EIF_BOOLEAN) (loc38 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(47);
		RTDBGAL(35, 0x10000000, 1, 0); /* loc35 */
		loc35 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	} else {
		RTHOOK(48);
		RTDBGAL(35, 0x10000000, 1, 0); /* loc35 */
		loc35 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTHOOK(49);
	if ((EIF_BOOLEAN)(loc38 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(50);
		RTDBGAL(41, 0x04000000, 1, 0); /* loc41 */
		loc41 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(51);
		RTDBGAL(42, 0x20000000, 1, 0); /* loc42 */
		tr8_1 = (EIF_REAL_64) (loc35);
		loc42 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc37) /  (EIF_REAL_64) (loc38)) * tr8_1);
		RTHOOK(52);
		RTDBGAL(41, 0x04000000, 1, 0); /* loc41 */
		loc41 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTHOOK(53);
	RTDBGAL(30, 0xF80005AB, 0, 0); /* loc30 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc30 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(54);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14197, "set_line_width", loc30))(loc30, ui4_1x);
	RTHOOK(55);
	RTDBGAL(28, 0x10000000, 1, 0); /* loc28 */
	loc28 = (EIF_INTEGER_32) arg2;
	RTHOOK(56);
	RTDBGAL(29, 0x10000000, 1, 0); /* loc29 */
	loc29 = (EIF_INTEGER_32) arg2;
	RTHOOK(57);
	RTDBGAL(31, 0x20000000, 1, 0); /* loc31 */
	tr8_1 = (EIF_REAL_64) (arg1);
	loc31 = (EIF_REAL_64) tr8_1;
	RTHOOK(58);
	RTDBGAL(33, 0x10000000, 1, 0); /* loc33 */
	loc33 = (EIF_INTEGER_32) arg2;
	RTHOOK(59);
	RTDBGAL(32, 0x20000000, 1, 0); /* loc32 */
	tr8_1 = (EIF_REAL_64) (arg1);
	loc32 = (EIF_REAL_64) tr8_1;
	RTHOOK(60);
	RTDBGAL(34, 0x10000000, 1, 0); /* loc34 */
	loc34 = (EIF_INTEGER_32) arg2;
	for (;;) {
		RTHOOK(61);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_less_real_64 (loc14, tr8_1)) break;
		RTHOOK(62);
		RTDBGAL(23, 0x20000000, 1, 0); /* loc23 */
		ur8_1 = loc14;
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1638, dtype))(Current, ur8_1x)).it_r8);
		loc23 = (EIF_REAL_64) tr8_2;
		RTHOOK(63);
		RTDBGAL(26, 0x10000000, 1, 0); /* loc26 */
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (loc16 - loc23);
		loc26 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(64);
		RTDBGAL(27, 0x10000000, 1, 0); /* loc27 */
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (loc16 + loc23);
		loc27 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(65);
		RTDBGAL(43, 0x10000000, 1, 0); /* loc43 */
		loc43 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + loc27);
		RTHOOK(66);
		RTDBGAL(44, 0x10000000, 1, 0); /* loc44 */
		loc44 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + loc26);
		RTHOOK(67);
		RTDBGAL(45, 0x10000000, 1, 0); /* loc45 */
		tr1 = RTLN(eif_new_type(210, 0x00).id);
		*(EIF_REAL_64 *)tr1 = loc31;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4241, "rounded", tr1))(tr1)).it_i4);
		loc45 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(68);
		RTDBGAL(46, 0x10000000, 1, 0); /* loc46 */
		tr1 = RTLN(eif_new_type(210, 0x00).id);
		*(EIF_REAL_64 *)tr1 = loc32;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4241, "rounded", tr1))(tr1)).it_i4);
		loc46 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(69);
		if ((EIF_BOOLEAN) (loc41 && (EIF_BOOLEAN) (loc6 < arg2))) {
			RTHOOK(70);
			if ((EIF_BOOLEAN) (loc7 > arg1)) {
				RTHOOK(71);
				ui4_1 = loc43;
				ui4_2 = loc28;
				ui4_3 = loc44;
				ui4_4 = loc28;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
			}
		} else {
			RTHOOK(72);
			if ((EIF_BOOLEAN) (loc39 && (EIF_BOOLEAN) (loc8 < arg2))) {
				RTHOOK(73);
				if ((EIF_BOOLEAN) (loc5 < arg1)) {
					RTHOOK(74);
					ui4_1 = loc43;
					ui4_2 = loc28;
					ui4_3 = loc44;
					ui4_4 = loc28;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
				}
			} else {
				RTHOOK(75);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc34 == loc28) && (EIF_BOOLEAN)(loc33 == loc28)) && (EIF_BOOLEAN) (loc45 < loc46))) {
					RTHOOK(76);
					if ((EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc45 >= loc43) && (EIF_BOOLEAN) (loc46 >= loc43)) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (loc45 <= loc44) && (EIF_BOOLEAN) (loc46 <= loc44)))) {
						RTHOOK(77);
						if ((EIF_BOOLEAN) (loc46 <= loc43)) {
							RTHOOK(78);
							RTDBGAL(43, 0x10000000, 1, 0); /* loc43 */
							loc43 = (EIF_INTEGER_32) loc46;
						}
						RTHOOK(79);
						if ((EIF_BOOLEAN) (loc45 >= loc44)) {
							RTHOOK(80);
							RTDBGAL(44, 0x10000000, 1, 0); /* loc44 */
							loc44 = (EIF_INTEGER_32) loc45;
						}
						RTHOOK(81);
						ui4_1 = loc43;
						ui4_2 = loc28;
						ui4_3 = loc44;
						ui4_4 = loc28;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
					}
				} else {
					RTHOOK(82);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc34 == loc28) && (EIF_BOOLEAN)(loc33 == loc28)) && (EIF_BOOLEAN)(loc45 == loc46))) {
						RTHOOK(83);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc5 >= loc7) && (EIF_BOOLEAN) (loc8 > arg2)) && (EIF_BOOLEAN) (loc6 > arg2))) {
							RTHOOK(84);
							ui4_1 = loc44;
							ui4_2 = loc28;
							ui4_3 = loc43;
							ui4_4 = loc28;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
						}
					} else {
						RTHOOK(85);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc34 == loc28) || (EIF_BOOLEAN)(loc33 == loc28))) {
							RTHOOK(86);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc33 == loc28) && (EIF_BOOLEAN) (loc45 < loc43))) {
								RTHOOK(87);
								if ((EIF_BOOLEAN) (loc45 >= loc44)) {
									RTHOOK(88);
									ui4_1 = loc45;
									ui4_2 = loc28;
									ui4_3 = loc43;
									ui4_4 = loc28;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
								} else {
									RTHOOK(89);
									ui4_1 = loc44;
									ui4_2 = loc28;
									ui4_3 = loc43;
									ui4_4 = loc28;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
								}
							}
							RTHOOK(90);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc34 == loc28) && (EIF_BOOLEAN) (loc46 > loc44))) {
								RTHOOK(91);
								if ((EIF_BOOLEAN) (loc46 <= loc43)) {
									RTHOOK(92);
									ui4_1 = loc46;
									ui4_2 = loc28;
									ui4_3 = loc44;
									ui4_4 = loc28;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
								} else {
									RTHOOK(93);
									ui4_1 = loc43;
									ui4_2 = loc28;
									ui4_3 = loc44;
									ui4_4 = loc28;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
								}
							}
						} else {
							RTHOOK(94);
							if ((EIF_BOOLEAN) eif_is_less_equal_real_64 (loc31, loc32)) {
								RTHOOK(95);
								ui4_1 = loc43;
								ui4_2 = loc28;
								ui4_3 = loc44;
								ui4_4 = loc28;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
							}
						}
					}
				}
			}
		}
		RTHOOK(96);
		RTDBGAL(43, 0x10000000, 1, 0); /* loc43 */
		loc43 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 - loc27) + ((EIF_INTEGER_32) 1L));
		RTHOOK(97);
		RTDBGAL(44, 0x10000000, 1, 0); /* loc44 */
		loc44 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - loc26);
		RTHOOK(98);
		RTDBGAL(45, 0x10000000, 1, 0); /* loc45 */
		tr1 = RTLN(eif_new_type(210, 0x00).id);
		*(EIF_REAL_64 *)tr1 = loc31;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4241, "rounded", tr1))(tr1)).it_i4);
		loc45 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(99);
		RTDBGAL(46, 0x10000000, 1, 0); /* loc46 */
		tr1 = RTLN(eif_new_type(210, 0x00).id);
		*(EIF_REAL_64 *)tr1 = loc32;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4241, "rounded", tr1))(tr1)).it_i4);
		loc46 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(100);
		if ((EIF_BOOLEAN) (loc41 && (EIF_BOOLEAN) (loc6 >= arg2))) {
			RTHOOK(101);
			if ((EIF_BOOLEAN) (loc7 < arg1)) {
				RTHOOK(102);
				ui4_1 = loc43;
				ui4_2 = loc29;
				ui4_3 = loc44;
				ui4_4 = loc29;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
			}
		} else {
			RTHOOK(103);
			if ((EIF_BOOLEAN) (loc39 && (EIF_BOOLEAN) (loc8 >= arg2))) {
				RTHOOK(104);
				if ((EIF_BOOLEAN) (loc5 > arg1)) {
					RTHOOK(105);
					ui4_1 = loc43;
					ui4_2 = loc29;
					ui4_3 = loc44;
					ui4_4 = loc29;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
				}
			} else {
				RTHOOK(106);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc34 == loc29) && (EIF_BOOLEAN)(loc33 == loc29)) && (EIF_BOOLEAN) (loc45 > loc46))) {
					RTHOOK(107);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc46 < loc44) && (EIF_BOOLEAN) (loc45 > loc43))) {
						RTHOOK(108);
						if ((EIF_BOOLEAN) (loc46 >= loc43)) {
							RTHOOK(109);
							RTDBGAL(43, 0x10000000, 1, 0); /* loc43 */
							loc43 = (EIF_INTEGER_32) loc46;
						}
						RTHOOK(110);
						if ((EIF_BOOLEAN) (loc45 <= loc44)) {
							RTHOOK(111);
							RTDBGAL(44, 0x10000000, 1, 0); /* loc44 */
							loc44 = (EIF_INTEGER_32) loc45;
						}
						RTHOOK(112);
						ui4_1 = loc43;
						ui4_2 = loc29;
						ui4_3 = loc44;
						ui4_4 = loc29;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
					}
				} else {
					RTHOOK(113);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc34 == loc29) && (EIF_BOOLEAN)(loc33 == loc29)) && (EIF_BOOLEAN)(loc45 == loc46))) {
						RTHOOK(114);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc5 <= loc7) && (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L)) < arg2)) && (EIF_BOOLEAN) (loc6 < arg2))) {
							RTHOOK(115);
							ui4_1 = loc44;
							ui4_2 = loc29;
							ui4_3 = loc43;
							ui4_4 = loc29;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
						}
					} else {
						RTHOOK(116);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc34 == loc29) || (EIF_BOOLEAN)(loc33 == loc29))) {
							RTHOOK(117);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc33 == loc29) && (EIF_BOOLEAN) (loc45 > loc43))) {
								RTHOOK(118);
								if ((EIF_BOOLEAN) (loc45 <= loc44)) {
									RTHOOK(119);
									ui4_1 = loc45;
									ui4_2 = loc29;
									ui4_3 = loc43;
									ui4_4 = loc29;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
								} else {
									RTHOOK(120);
									ui4_1 = loc44;
									ui4_2 = loc29;
									ui4_3 = loc43;
									ui4_4 = loc29;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
								}
							}
							RTHOOK(121);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc34 == loc29) && (EIF_BOOLEAN) (loc46 < loc44))) {
								RTHOOK(122);
								if ((EIF_BOOLEAN) (loc46 >= loc43)) {
									RTHOOK(123);
									ui4_1 = loc46;
									ui4_2 = loc29;
									ui4_3 = loc44;
									ui4_4 = loc29;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
								} else {
									RTHOOK(124);
									ui4_1 = loc43;
									ui4_2 = loc29;
									ui4_3 = loc44;
									ui4_4 = loc29;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
								}
							}
						} else {
							RTHOOK(125);
							if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (loc31, loc32)) {
								RTHOOK(126);
								ui4_1 = loc43;
								ui4_2 = loc29;
								ui4_3 = loc44;
								ui4_4 = loc29;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14217, "draw_segment", loc30))(loc30, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
							}
						}
					}
				}
			}
		}
		RTHOOK(127);
		RTDBGAL(16, 0x20000000, 1, 0); /* loc16 */
		loc16 += loc13;
		RTHOOK(128);
		RTDBGAL(18, 0x20000000, 1, 0); /* loc18 */
		loc18 += loc17;
		RTHOOK(129);
		RTDBGAL(14, 0x20000000, 1, 0); /* loc14 */
		loc14 -= loc18;
		RTHOOK(130);
		RTDBGAL(28, 0x10000000, 1, 0); /* loc28 */
		loc28++;
		RTHOOK(131);
		RTDBGAL(29, 0x10000000, 1, 0); /* loc29 */
		loc29--;
		RTHOOK(132);
		if ((EIF_BOOLEAN) !loc39) {
			RTHOOK(133);
			RTDBGAL(33, 0x10000000, 1, 0); /* loc33 */
			loc33 += loc36;
			RTHOOK(134);
			RTDBGAL(31, 0x20000000, 1, 0); /* loc31 */
			loc31 += loc40;
		}
		RTHOOK(135);
		if ((EIF_BOOLEAN) !loc41) {
			RTHOOK(136);
			RTDBGAL(34, 0x10000000, 1, 0); /* loc34 */
			loc34 += loc35;
			RTHOOK(137);
			RTDBGAL(32, 0x20000000, 1, 0); /* loc32 */
			loc32 += loc42;
		}
		if (RTAL & CK_CHECK) {
			RTHOOK(138);
			RTCT("not m_start_inv implies (y_top = start_line_y or y_bottom = start_line_y)", EX_CHECK);
			if ((!((EIF_BOOLEAN) !loc39) || ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc28 == loc33) || (EIF_BOOLEAN)(loc29 == loc33))))) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(139);
			RTCT("not m_end_inv implies (y_top = end_line_y or y_bottom = end_line_y)", EX_CHECK);
			if ((!((EIF_BOOLEAN) !loc41) || ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc28 == loc34) || (EIF_BOOLEAN)(loc29 == loc34))))) {
				RTCK;
			} else {
				RTCF;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(140);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(55);
	RTEE;
#undef up1
#undef ur8_1
#undef ur8_2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_MODEL_DRAWER}.inside */
EIF_TYPED_VALUE F1863_24100 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "inside";
	RTEX;
	EIF_REAL_64 loc1 = (EIF_REAL_64) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL64, &loc1);
	
	RTEAA(l_feature_name, 1862, Current, 1, 4, 29454);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1862, Current, 29454);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x20000000, 1, 0); /* loc1 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = arg1;
	ui4_4 = (EIF_INTEGER_32) -arg2;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18464, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)).it_r8);
	loc1 = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) eif_is_less_real_64 (arg3, arg4)) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (loc1, arg3) && (EIF_BOOLEAN) eif_is_less_equal_real_64 (loc1, arg4));
	} else {
		RTHOOK(4);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (loc1, arg3) || (EIF_BOOLEAN) eif_is_less_equal_real_64 (loc1, arg4));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_MODEL_DRAWER}._invariant */
void F1863_24164 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 1862, Current, 0, 24163);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("drawable_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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

void EIF_Minit1863 (void)
{
	GTCX
	RTOTS (24073,F1863_24073)
}


#ifdef __cplusplus
}
#endif
