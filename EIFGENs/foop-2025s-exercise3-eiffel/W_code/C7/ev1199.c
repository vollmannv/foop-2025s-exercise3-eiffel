/*
 * Code for class EV_ID_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1199_12649(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1199_12650(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1199_12651(EIF_REFERENCE);
extern void F1199_23223(EIF_REFERENCE, int);
extern void EIF_Minit1199(void);

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

/* {EV_ID_IMP}.make_id */
void F1199_12649 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_id";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1198, Current, 0, 0, 18576);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1198, Current, 18576);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10413, 0x10000000, 1); /* id */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10414, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1754, "item", tr1))(tr1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(10413, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10414, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10413, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1755, "put", tr1))(tr1, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
}

/* {EV_ID_IMP}.id */
EIF_TYPED_VALUE F1199_12650 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(10413,Dtype(Current)));
	return r;
}


/* {EV_ID_IMP}.counter */
RTOID (F1199_12651)
EIF_TYPED_VALUE F1199_12651 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "counter";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1199_12651);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1198, Current, 0, 0, 18578);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1198, Current, 18578);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800037A, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,890,222,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1755, Dtype(tr1)))(tr1, ui4_1x);
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
#undef ui4_1
#undef Result
}

/* {EV_ID_IMP}._invariant */
void F1199_23223 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1198, Current, 0, 23222);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("make_called", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10413, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit1199 (void)
{
	GTCX
	RTOTS (12651,F1199_12651)
}


#ifdef __cplusplus
}
#endif
