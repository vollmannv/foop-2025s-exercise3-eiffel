/*
 * Code for class EV_SHARED_TRANSPORT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1181_12076(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1181_12077(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1181_12078(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1181_12079(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1181_12080(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1181_12081(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1181_12082(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1181_12083(EIF_REFERENCE);
extern void F1181_12084(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1181_12085(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1181_12087(EIF_REFERENCE);
extern void EIF_Minit1181(void);

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

/* {EV_SHARED_TRANSPORT_IMP}.widget_imp_at_pointer_position */
EIF_TYPED_VALUE F1181_12076 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "widget_imp_at_pointer_position";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Result);
	RTLR(4,loc3);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1180, Current, 3, 0, 18013);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1180, Current, 18013);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800068A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1674, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(16664, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16671, "set_cursor_position", loc1))(loc1);
	RTHOOK(3);
	RTDBGAL(2, 0xF8000691, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16672, "window_at", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(5);
		RTDBGAL(0, 0xF80006CB, 0,0); /* Result */
		Result = RTCCL(loc2);
		Result = RTRV(eif_new_type(1739, 0x00), Result);
		RTHOOK(6);
		if ((EIF_BOOLEAN)(Result == NULL)) {
			RTHOOK(7);
			RTDBGAL(3, 0xF80006AF, 0, 0); /* loc3 */
			loc3 = RTCCL(loc2);
			loc3 = RTRV(eif_new_type(1711, 0x00), loc3);
			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTHOOK(9);
				RTDBGAL(0, 0xF80006CB, 0,0); /* Result */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17501, "parent", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
}

/* {EV_SHARED_TRANSPORT_IMP}.awaiting_movement */
EIF_TYPED_VALUE F1181_12077 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(9853,Dtype(Current)));
	return r;
}


/* {EV_SHARED_TRANSPORT_IMP}.drag_and_drop_starting_movement */
EIF_TYPED_VALUE F1181_12078 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {EV_SHARED_TRANSPORT_IMP}.original_x */
EIF_TYPED_VALUE F1181_12079 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9855,Dtype(Current)));
	return r;
}


/* {EV_SHARED_TRANSPORT_IMP}.original_y */
EIF_TYPED_VALUE F1181_12080 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9856,Dtype(Current)));
	return r;
}


/* {EV_SHARED_TRANSPORT_IMP}.original_x_tilt */
EIF_TYPED_VALUE F1181_12081 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(9857,Dtype(Current)));
	return r;
}


/* {EV_SHARED_TRANSPORT_IMP}.original_y_tilt */
EIF_TYPED_VALUE F1181_12082 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(9858,Dtype(Current)));
	return r;
}


/* {EV_SHARED_TRANSPORT_IMP}.original_pressure */
EIF_TYPED_VALUE F1181_12083 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(9859,Dtype(Current)));
	return r;
}


/* {EV_SHARED_TRANSPORT_IMP}.internal_set_pointer_style */
void F1181_12084 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "internal_set_pointer_style";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLR(5,loc4);
	RTLR(6,loc3);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1180, Current, 4, 1, 18021);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1180, Current, 18021);
	RTCC(arg1, 1180, l_feature_name, 1, eif_new_type(1430, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9863, 0xF8000596, 0); /* cursor_pixmap */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(9863, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(2, 0xF80005FA, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13889, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	loc2 = RTRV(eif_new_type(1530, 0x00), loc2);
	RTHOOK(3);
	RTCT0("not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	RTDBGAL(1, 0xF8000666, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14903, "wel_cursor", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11086, "increment_reference", loc1))(loc1);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9861, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = RTCCL(tr1);
	if (EIF_TEST(loc4)) {
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11085, "decrement_reference", loc4))(loc4);
		RTHOOK(8);
		RTDBGAA(Current, dtype, 9861, 0xF8000666, 0); /* current_wel_cursor */
		*(EIF_REFERENCE *)(Current + RTWA(9861, dtype)) = (EIF_REFERENCE) NULL;
	}
	RTHOOK(9);
	RTDBGAA(Current, dtype, 9861, 0xF8000666, 0); /* current_wel_cursor */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(9861, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	RTDBGAL(3, 0xF80006CB, 0, 0); /* loc3 */
	loc3 = RTCCL(Current);
	loc3 = RTRV(eif_new_type(1739, 0x00), loc3);
	RTHOOK(11);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17910, "exists", loc3))(loc3)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(12);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15406, "is_displayed", loc3))(loc3)).it_b);
		if (tb1) {
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16065, "set", loc1))(loc1);
		}
	} else {
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16065, "set", loc1))(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef arg1
}

/* {EV_SHARED_TRANSPORT_IMP}.current_wel_cursor */
EIF_TYPED_VALUE F1181_12085 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9861,Dtype(Current)));
	return r;
}


/* {EV_SHARED_TRANSPORT_IMP}.cursor_pixmap */
EIF_TYPED_VALUE F1181_12087 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9863,Dtype(Current)));
	return r;
}


void EIF_Minit1181 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
