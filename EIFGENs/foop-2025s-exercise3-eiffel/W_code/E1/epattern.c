#include "eif_macros.h"
#include "eif_struct.h"
#include "eif_interp.h"

#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPED_VALUE toi235(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi235 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg1.it_r: arg1.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc235(fnptr);
static void toc235 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi239(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi239 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg1.it_r: arg1.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc239(fnptr);
static void toc239 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi329(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi329 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc329(fnptr);
static void toc329 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi321(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi321 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc321(fnptr);
static void toc321 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi355(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi355 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg1.it_r: arg1.it_n2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc355(fnptr);
static void toc355 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi703(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi703 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	*iget() = arg5;
	*iget() = arg6;
	*iget() = arg7;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg8.it_r: arg8.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 9);
}

static void toc703(fnptr);
static void toc703 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	Current = opop()->it_ref;
	
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8);
}

static void toi716(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi716 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc716(fnptr);
static void toc716 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi362(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi362 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg1.it_r: arg1.it_c1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc362(fnptr);
static void toc362 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi208(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi208 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc208(fnptr);
static void toc208 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi545(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi545 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc545(fnptr);
static void toc545 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi51(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi51 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg1.it_r: arg1.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc51(fnptr);
static void toc51 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi694(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi694 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc694(fnptr);
static void toc694 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi378(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi378 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc378(fnptr);
static void toc378 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi229(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi229 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc229(fnptr);
static void toc229 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi211(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi211 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc211(fnptr);
static void toc211 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi427(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi427 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc427(fnptr);
static void toc427 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi109(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi109 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg1.it_r: arg1.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc109(fnptr);
static void toc109 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi550(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi550 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc550(fnptr);
static void toc550 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static void toi613(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi613 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10, EIF_TYPED_VALUE arg11, EIF_TYPED_VALUE arg12, EIF_TYPED_VALUE arg13, EIF_TYPED_VALUE arg14, EIF_TYPED_VALUE arg15, EIF_TYPED_VALUE arg16)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg10.it_r: arg10.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg11.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg11.it_r: arg11.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg12.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg12.it_r: arg12.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg13.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg13.it_r: arg13.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg14.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg14.it_r: arg14.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg15.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg15.it_r: arg15.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg16.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg16.it_r: arg16.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 17);
}

static void toc613(fnptr);
static void toc613 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	EIF_TYPED_VALUE *arg11;
	EIF_TYPED_VALUE *arg12;
	EIF_TYPED_VALUE *arg13;
	EIF_TYPED_VALUE *arg14;
	EIF_TYPED_VALUE *arg15;
	EIF_TYPED_VALUE *arg16;
	Current = opop()->it_ref;
	
	arg16 = opop();
	arg15 = opop();
	arg14 = opop();
	arg13 = opop();
	arg12 = opop();
	arg11 = opop();
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10,*arg11,*arg12,*arg13,*arg14,*arg15,*arg16);
}

static EIF_TYPED_VALUE toi315(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi315 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg1.it_r: arg1.it_r4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc315(fnptr);
static void toc315 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi219(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi219 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc219(fnptr);
static void toc219 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi481(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi481 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg6.it_r: arg6.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg10.it_r: arg10.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 11);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc481(fnptr);
static void toc481 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	Current = opop()->it_ref;
	
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi27(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi27 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc27(fnptr);
static void toc27 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static void toi647(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi647 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc647(fnptr);
static void toc647 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi12(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi12 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc12(fnptr);
static void toc12 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi372(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi372 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc372(fnptr);
static void toc372 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi233(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi233 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc233(fnptr);
static void toc233 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi5(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi5 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc5(fnptr);
static void toc5 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi335(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi335 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg1.it_r: arg1.it_c1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc335(fnptr);
static void toc335 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi667(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi667 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	*iget() = arg5;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	*iget() = arg10;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 11);
	return * opop();
}

static void toc667(fnptr);
static void toc667 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	Current = opop()->it_ref;
	
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi448(EIF_REFERENCE);
static EIF_TYPED_VALUE toi448 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc448(fnptr);
static void toc448 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi78(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi78 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc78(fnptr);
static void toc78 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi574(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi574 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc574(fnptr);
static void toc574 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi110(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi110 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc110(fnptr);
static void toc110 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi307(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi307 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc307(fnptr);
static void toc307 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi145(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi145 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc145(fnptr);
static void toc145 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi405(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi405 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc405(fnptr);
static void toc405 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi438(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi438 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc438(fnptr);
static void toc438 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi136(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi136 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc136(fnptr);
static void toc136 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi760(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi760 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg6.it_r: arg6.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg7.it_r: arg7.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg8.it_r: arg8.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 9);
	return * opop();
}

static void toc760(fnptr);
static void toc760 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	Current = opop()->it_ref;
	
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi34(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi34 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc34(fnptr);
static void toc34 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi295(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi295 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg1.it_r: arg1.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc295(fnptr);
static void toc295 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi488(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi488 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc488(fnptr);
static void toc488 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi769(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi769 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg6.it_r: arg6.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg7.it_r: arg7.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc769(fnptr);
static void toc769 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static EIF_TYPED_VALUE toi312(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi312 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc312(fnptr);
static void toc312 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi215(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi215 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc215(fnptr);
static void toc215 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi195(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi195 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc195(fnptr);
static void toc195 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi721(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi721 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10, EIF_TYPED_VALUE arg11, EIF_TYPED_VALUE arg12, EIF_TYPED_VALUE arg13, EIF_TYPED_VALUE arg14)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg10.it_r: arg10.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg11.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg11.it_r: arg11.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg12.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg12.it_r: arg12.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg13.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg13.it_r: arg13.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg14.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg14.it_r: arg14.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 15);
	return * opop();
}

static void toc721(fnptr);
static void toc721 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	EIF_TYPED_VALUE *arg11;
	EIF_TYPED_VALUE *arg12;
	EIF_TYPED_VALUE *arg13;
	EIF_TYPED_VALUE *arg14;
	Current = opop()->it_ref;
	
	arg14 = opop();
	arg13 = opop();
	arg12 = opop();
	arg11 = opop();
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10,*arg11,*arg12,*arg13,*arg14);
	it = iget();
	*it = result;
}

static void toi714(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi714 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc714(fnptr);
static void toc714 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi300(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi300 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc300(fnptr);
static void toc300 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi30(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi30 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	*iget() = arg3;
	*iget() = arg4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc30(fnptr);
static void toc30 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi311(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi311 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc311(fnptr);
static void toc311 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi260(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi260 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc260(fnptr);
static void toc260 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi451(EIF_REFERENCE);
static EIF_TYPED_VALUE toi451 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc451(fnptr);
static void toc451 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi428(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi428 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc428(fnptr);
static void toc428 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi745(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi745 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc745(fnptr);
static void toc745 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi244(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi244 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg1.it_r: arg1.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc244(fnptr);
static void toc244 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi323(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi323 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc323(fnptr);
static void toc323 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi643(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi643 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc643(fnptr);
static void toc643 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi258(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi258 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg4.it_r: arg4.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc258(fnptr);
static void toc258 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi706(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi706 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc706(fnptr);
static void toc706 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi328(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi328 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg1.it_r: arg1.it_n2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc328(fnptr);
static void toc328 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi297(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi297 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg1.it_r: arg1.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc297(fnptr);
static void toc297 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi253(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi253 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg4.it_r: arg4.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc253(fnptr);
static void toc253 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi214(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi214 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	*iget() = arg3;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc214(fnptr);
static void toc214 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi113(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi113 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc113(fnptr);
static void toc113 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi414(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi414 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc414(fnptr);
static void toc414 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi384(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi384 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc384(fnptr);
static void toc384 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi734(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi734 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc734(fnptr);
static void toc734 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi58(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi58 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc58(fnptr);
static void toc58 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi583(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi583 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc583(fnptr);
static void toc583 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi382(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi382 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc382(fnptr);
static void toc382 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi16(EIF_REFERENCE);
static EIF_TYPED_VALUE toi16 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc16(fnptr);
static void toc16 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi61(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi61 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc61(fnptr);
static void toc61 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi700(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi700 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc700(fnptr);
static void toc700 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi71(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi71 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc71(fnptr);
static void toc71 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi627(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi627 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc627(fnptr);
static void toc627 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi532(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi532 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc532(fnptr);
static void toc532 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi265(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi265 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg5.it_r: arg5.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc265(fnptr);
static void toc265 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi141(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi141 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc141(fnptr);
static void toc141 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi32(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi32 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc32(fnptr);
static void toc32 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi689(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi689 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
	return * opop();
}

static void toc689(fnptr);
static void toc689 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
	it = iget();
	*it = result;
}

static void toi501(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi501 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	*iget() = arg5;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc501(fnptr);
static void toc501 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi331(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi331 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg1.it_r: arg1.it_n8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc331(fnptr);
static void toc331 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi354(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi354 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg1.it_r: arg1.it_c4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc354(fnptr);
static void toc354 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi662(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi662 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc662(fnptr);
static void toc662 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi47(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi47 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc47(fnptr);
static void toc47 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi298(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi298 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg1.it_r: arg1.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc298(fnptr);
static void toc298 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi728(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi728 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc728(fnptr);
static void toc728 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi751(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi751 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc751(fnptr);
static void toc751 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi304(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi304 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg1.it_r: arg1.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc304(fnptr);
static void toc304 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi561(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi561 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	*iget() = arg8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 9);
}

static void toc561(fnptr);
static void toc561 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	Current = opop()->it_ref;
	
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8);
}

static EIF_TYPED_VALUE toi365(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi365 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc365(fnptr);
static void toc365 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi470(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi470 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg1.it_r: arg1.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc470(fnptr);
static void toc470 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi317(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi317 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg1.it_r: arg1.it_i8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc317(fnptr);
static void toc317 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi1(EIF_REFERENCE);
static EIF_TYPED_VALUE toi1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc1(fnptr);
static void toc1 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi118(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi118 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc118(fnptr);
static void toc118 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi91(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi91 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg4.it_r: arg4.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc91(fnptr);
static void toc91 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi356(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi356 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc356(fnptr);
static void toc356 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi238(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi238 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg1.it_r: arg1.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc238(fnptr);
static void toc238 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi333(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi333 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg1.it_r: arg1.it_i1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc333(fnptr);
static void toc333 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi361(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi361 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg1.it_r: arg1.it_i2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc361(fnptr);
static void toc361 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi717(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi717 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc717(fnptr);
static void toc717 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi90(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi90 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg4.it_r: arg4.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc90(fnptr);
static void toc90 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi607(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi607 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg3.it_r: arg3.it_r4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg4.it_r: arg4.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc607(fnptr);
static void toc607 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi653(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi653 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	*iget() = arg3;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc653(fnptr);
static void toc653 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi261(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi261 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg5.it_r: arg5.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc261(fnptr);
static void toc261 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi346(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi346 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg1.it_r: arg1.it_n8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc346(fnptr);
static void toc346 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi81(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi81 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc81(fnptr);
static void toc81 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi213(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi213 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc213(fnptr);
static void toc213 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi259(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi259 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg5.it_r: arg5.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc259(fnptr);
static void toc259 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi15(EIF_REFERENCE);
static EIF_TYPED_VALUE toi15 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc15(fnptr);
static void toc15 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi366(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi366 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc366(fnptr);
static void toc366 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi76(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi76 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc76(fnptr);
static void toc76 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi503(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi503 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg2.it_r: arg2.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc503(fnptr);
static void toc503 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi369(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi369 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc369(fnptr);
static void toc369 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi139(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi139 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc139(fnptr);
static void toc139 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi209(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi209 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg4.it_r: arg4.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc209(fnptr);
static void toc209 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi452(EIF_REFERENCE);
static EIF_TYPED_VALUE toi452 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc452(fnptr);
static void toc452 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static void toi744(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi744 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg6.it_r: arg6.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg7.it_r: arg7.it_r8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 10);
}

static void toc744(fnptr);
static void toc744 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	Current = opop()->it_ref;
	
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9);
}

static EIF_TYPED_VALUE toi111(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi111 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc111(fnptr);
static void toc111 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi467(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi467 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc467(fnptr);
static void toc467 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi39(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi39 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg1.it_r: arg1.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc39(fnptr);
static void toc39 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static void toi279(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi279 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg1.it_r: arg1.it_c4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc279(fnptr);
static void toc279 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi663(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi663 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	*iget() = arg7;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 9);
}

static void toc663(fnptr);
static void toc663 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	Current = opop()->it_ref;
	
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8);
}

static EIF_TYPED_VALUE toi50(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi50 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc50(fnptr);
static void toc50 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi227(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi227 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg4.it_r: arg4.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc227(fnptr);
static void toc227 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi212(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi212 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc212(fnptr);
static void toc212 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi685(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi685 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc685(fnptr);
static void toc685 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi192(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi192 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	*iget() = arg3;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc192(fnptr);
static void toc192 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi305(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi305 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg1.it_r: arg1.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc305(fnptr);
static void toc305 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi517(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi517 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc517(fnptr);
static void toc517 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi240(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi240 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg1.it_r: arg1.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc240(fnptr);
static void toc240 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi334(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi334 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg1.it_r: arg1.it_i2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc334(fnptr);
static void toc334 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi762(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi762 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc762(fnptr);
static void toc762 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi231(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi231 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg4.it_r: arg4.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc231(fnptr);
static void toc231 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi360(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi360 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg1.it_r: arg1.it_i1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc360(fnptr);
static void toc360 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi318(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi318 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg1.it_r: arg1.it_i1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc318(fnptr);
static void toc318 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi727(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi727 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc727(fnptr);
static void toc727 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi754(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi754 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc754(fnptr);
static void toc754 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi296(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi296 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg1.it_r: arg1.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc296(fnptr);
static void toc296 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi447(EIF_REFERENCE);
static EIF_TYPED_VALUE toi447 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc447(fnptr);
static void toc447 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static void toi725(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi725 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc725(fnptr);
static void toc725 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static EIF_TYPED_VALUE toi429(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi429 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc429(fnptr);
static void toc429 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi476(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi476 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg1.it_r: arg1.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc476(fnptr);
static void toc476 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi606(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi606 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	*iget() = arg3;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	*iget() = arg5;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc606(fnptr);
static void toc606 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi413(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi413 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc413(fnptr);
static void toc413 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi560(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi560 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	*iget() = arg6;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc560(fnptr);
static void toc560 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi62(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi62 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc62(fnptr);
static void toc62 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi132(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi132 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc132(fnptr);
static void toc132 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static void toi636(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi636 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg5.it_r: arg5.it_n4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg7.it_r: arg7.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_POINTER* *)arg8.it_r: arg8.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg9.it_r: arg9.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 10);
}

static void toc636(fnptr);
static void toc636 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	Current = opop()->it_ref;
	
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9);
}

static void toi674(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi674 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg7.it_r: arg7.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 9);
}

static void toc674(fnptr);
static void toc674 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	Current = opop()->it_ref;
	
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8);
}

static EIF_TYPED_VALUE toi327(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi327 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg1.it_r: arg1.it_c4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc327(fnptr);
static void toc327 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi648(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi648 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc648(fnptr);
static void toc648 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi243(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi243 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg1.it_r: arg1.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc243(fnptr);
static void toc243 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi621(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi621 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc621(fnptr);
static void toc621 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi326(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi326 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc326(fnptr);
static void toc326 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi528(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi528 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg6.it_r: arg6.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
	return * opop();
}

static void toc528(fnptr);
static void toc528 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi22(EIF_REFERENCE);
static EIF_TYPED_VALUE toi22 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc22(fnptr);
static void toc22 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi359(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi359 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg1.it_r: arg1.it_i8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc359(fnptr);
static void toc359 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi679(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi679 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 10);
}

static void toc679(fnptr);
static void toc679 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	Current = opop()->it_ref;
	
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9);
}

static EIF_TYPED_VALUE toi483(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi483 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc483(fnptr);
static void toc483 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi55(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi55 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc55(fnptr);
static void toc55 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi453(EIF_REFERENCE);
static EIF_TYPED_VALUE toi453 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc453(fnptr);
static void toc453 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi25(EIF_REFERENCE);
static EIF_TYPED_VALUE toi25 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc25(fnptr);
static void toc25 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi567(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi567 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER* *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc567(fnptr);
static void toc567 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi752(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi752 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc752(fnptr);
static void toc752 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi431(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi431 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc431(fnptr);
static void toc431 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi395(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi395 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc395(fnptr);
static void toc395 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi124(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi124 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc124(fnptr);
static void toc124 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi531(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi531 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc531(fnptr);
static void toc531 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi495(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi495 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg4.it_r: arg4.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc495(fnptr);
static void toc495 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi629(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi629 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc629(fnptr);
static void toc629 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi151(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi151 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc151(fnptr);
static void toc151 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi363(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi363 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc363(fnptr);
static void toc363 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi580(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi580 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc580(fnptr);
static void toc580 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi251(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi251 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc251(fnptr);
static void toc251 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi708(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi708 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc708(fnptr);
static void toc708 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static void toi116(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi116 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	*iget() = arg3;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg5.it_r: arg5.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc116(fnptr);
static void toc116 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi672(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi672 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	*iget() = arg4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc672(fnptr);
static void toc672 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi681(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi681 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 10);
}

static void toc681(fnptr);
static void toc681 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	Current = opop()->it_ref;
	
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9);
}

static void toi262(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi262 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg5.it_r: arg5.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc262(fnptr);
static void toc262 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi376(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi376 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc376(fnptr);
static void toc376 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi236(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi236 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc236(fnptr);
static void toc236 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi374(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi374 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc374(fnptr);
static void toc374 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi332(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi332 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg1.it_r: arg1.it_i8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc332(fnptr);
static void toc332 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi416(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi416 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc416(fnptr);
static void toc416 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi669(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi669 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	*iget() = arg5;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg10.it_r: arg10.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 11);
}

static void toc669(fnptr);
static void toc669 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	Current = opop()->it_ref;
	
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10);
}

static EIF_TYPED_VALUE toi49(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi49 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc49(fnptr);
static void toc49 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi748(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi748 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc748(fnptr);
static void toc748 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi747(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi747 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc747(fnptr);
static void toc747 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi48(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi48 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc48(fnptr);
static void toc48 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi592(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi592 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc592(fnptr);
static void toc592 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi172(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi172 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc172(fnptr);
static void toc172 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi465(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi465 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc465(fnptr);
static void toc465 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi466(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi466 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc466(fnptr);
static void toc466 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi611(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi611 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc611(fnptr);
static void toc611 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi358(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi358 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg1.it_r: arg1.it_n8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc358(fnptr);
static void toc358 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi135(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi135 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc135(fnptr);
static void toc135 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi736(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi736 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc736(fnptr);
static void toc736 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi23(EIF_REFERENCE);
static EIF_TYPED_VALUE toi23 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc23(fnptr);
static void toc23 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi420(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi420 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc420(fnptr);
static void toc420 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi761(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi761 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	*iget() = arg3;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc761(fnptr);
static void toc761 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi280(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi280 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg1.it_r: arg1.it_n2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc280(fnptr);
static void toc280 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi388(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi388 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc388(fnptr);
static void toc388 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi338(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi338 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc338(fnptr);
static void toc338 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi729(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi729 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg1.it_r: arg1.it_c1;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc729(fnptr);
static void toc729 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi493(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi493 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg1.it_r: arg1.it_r4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg2.it_r: arg2.it_r4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg3.it_r: arg3.it_r4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg4.it_r: arg4.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc493(fnptr);
static void toc493 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi458(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi458 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg1.it_r: arg1.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc458(fnptr);
static void toc458 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi626(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi626 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg7.it_r: arg7.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
	return * opop();
}

static void toc626(fnptr);
static void toc626 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
	it = iget();
	*it = result;
}

static void toi92(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi92 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg4.it_r: arg4.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc92(fnptr);
static void toc92 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi37(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi37 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc37(fnptr);
static void toc37 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static void toi641(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi641 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	*iget() = arg3;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc641(fnptr);
static void toc641 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static EIF_TYPED_VALUE toi512(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi512 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc512(fnptr);
static void toc512 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi533(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi533 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc533(fnptr);
static void toc533 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi277(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi277 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc277(fnptr);
static void toc277 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi95(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi95 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg4.it_r: arg4.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc95(fnptr);
static void toc95 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi538(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi538 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	*iget() = arg3;
	*iget() = arg4;
	*iget() = arg5;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc538(fnptr);
static void toc538 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi688(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi688 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc688(fnptr);
static void toc688 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi200(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi200 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg4.it_r: arg4.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc200(fnptr);
static void toc200 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi178(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi178 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc178(fnptr);
static void toc178 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi518(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi518 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc518(fnptr);
static void toc518 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi112(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi112 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc112(fnptr);
static void toc112 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi749(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi749 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc749(fnptr);
static void toc749 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi6(EIF_REFERENCE);
static void toi6 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
}

static void toc6(fnptr);
static void toc6 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	Current = opop()->it_ref;
	
	(FUNCTION_CAST(void, (EIF_REFERENCE)) ptr)(Current);
}

static void toi4(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi4 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc4(fnptr);
static void toc4 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static void toi564(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi564 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	*iget() = arg5;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc564(fnptr);
static void toc564 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi67(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi67 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc67(fnptr);
static void toc67 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi319(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi319 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg1.it_r: arg1.it_i2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc319(fnptr);
static void toc319 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi129(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi129 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc129(fnptr);
static void toc129 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi105(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi105 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg2.it_r: arg2.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc105(fnptr);
static void toc105 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi202(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi202 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg4.it_r: arg4.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc202(fnptr);
static void toc202 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi490(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi490 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg2.it_r: arg2.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc490(fnptr);
static void toc490 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi153(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi153 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc153(fnptr);
static void toc153 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi598(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi598 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg2.it_r: arg2.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc598(fnptr);
static void toc598 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi526(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi526 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32* *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc526(fnptr);
static void toc526 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static void toi370(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi370 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc370(fnptr);
static void toc370 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi364(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi364 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc364(fnptr);
static void toc364 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi8(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi8 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc8(fnptr);
static void toc8 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi13(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi13 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg1.it_r: arg1.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc13(fnptr);
static void toc13 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static void toi225(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi225 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg4.it_r: arg4.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc225(fnptr);
static void toc225 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi459(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi459 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc459(fnptr);
static void toc459 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi460(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi460 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg2.it_r: arg2.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc460(fnptr);
static void toc460 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi375(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi375 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc375(fnptr);
static void toc375 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi691(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi691 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10, EIF_TYPED_VALUE arg11, EIF_TYPED_VALUE arg12)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg9.it_r: arg9.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg10.it_r: arg10.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg11.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg11.it_r: arg11.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg12.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg12.it_r: arg12.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 13);
}

static void toc691(fnptr);
static void toc691 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	EIF_TYPED_VALUE *arg11;
	EIF_TYPED_VALUE *arg12;
	Current = opop()->it_ref;
	
	arg12 = opop();
	arg11 = opop();
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10,*arg11,*arg12);
}

static void toi652(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi652 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	*iget() = arg3;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc652(fnptr);
static void toc652 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi117(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi117 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc117(fnptr);
static void toc117 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi516(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi516 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg7.it_r: arg7.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
	return * opop();
}

static void toc516(fnptr);
static void toc516 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
	it = iget();
	*it = result;
}

static void toi612(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi612 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg8.it_r: arg8.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 9);
}

static void toc612(fnptr);
static void toc612 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	Current = opop()->it_ref;
	
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8);
}

static void toi217(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi217 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg4.it_r: arg4.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc217(fnptr);
static void toc217 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi559(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi559 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc559(fnptr);
static void toc559 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi423(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi423 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc423(fnptr);
static void toc423 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi350(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi350 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg1.it_r: arg1.it_c1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc350(fnptr);
static void toc350 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi511(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi511 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 9);
	return * opop();
}

static void toc511(fnptr);
static void toc511 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	Current = opop()->it_ref;
	
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8);
	it = iget();
	*it = result;
}

static void toi275(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi275 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc275(fnptr);
static void toc275 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi325(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi325 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc325(fnptr);
static void toc325 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi718(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi718 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc718(fnptr);
static void toc718 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi461(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi461 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg1.it_r: arg1.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc461(fnptr);
static void toc461 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi119(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi119 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg1.it_r: arg1.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc119(fnptr);
static void toc119 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static void toi43(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi43 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg1.it_r: arg1.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc43(fnptr);
static void toc43 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static void toi684(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi684 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10, EIF_TYPED_VALUE arg11)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg10.it_r: arg10.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg11.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg11.it_r: arg11.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 12);
}

static void toc684(fnptr);
static void toc684 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	EIF_TYPED_VALUE *arg11;
	Current = opop()->it_ref;
	
	arg11 = opop();
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10,*arg11);
}

static void toi249(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi249 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg4.it_r: arg4.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc249(fnptr);
static void toc249 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi707(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi707 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg5.it_r: arg5.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc707(fnptr);
static void toc707 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi278(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi278 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc278(fnptr);
static void toc278 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi294(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi294 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg1.it_r: arg1.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc294(fnptr);
static void toc294 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi738(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi738 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc738(fnptr);
static void toc738 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static void toi726(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi726 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc726(fnptr);
static void toc726 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static EIF_TYPED_VALUE toi456(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi456 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg1.it_r: arg1.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc456(fnptr);
static void toc456 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi757(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi757 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg6.it_r: arg6.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc757(fnptr);
static void toc757 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi404(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi404 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc404(fnptr);
static void toc404 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi173(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi173 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc173(fnptr);
static void toc173 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi274(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi274 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc274(fnptr);
static void toc274 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi122(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi122 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	*iget() = arg5;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc122(fnptr);
static void toc122 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi400(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi400 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg1.it_r: arg1.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc400(fnptr);
static void toc400 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi196(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi196 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc196(fnptr);
static void toc196 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi344(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi344 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc344(fnptr);
static void toc344 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi137(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi137 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc137(fnptr);
static void toc137 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi80(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi80 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc80(fnptr);
static void toc80 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi570(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi570 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg2.it_r: arg2.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc570(fnptr);
static void toc570 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi571(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi571 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc571(fnptr);
static void toc571 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi765(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi765 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc765(fnptr);
static void toc765 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi146(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi146 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc146(fnptr);
static void toc146 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi588(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi588 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc588(fnptr);
static void toc588 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi492(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi492 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc492(fnptr);
static void toc492 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi255(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi255 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg4.it_r: arg4.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc255(fnptr);
static void toc255 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi437(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi437 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc437(fnptr);
static void toc437 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi455(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi455 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg2.it_r: arg2.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc455(fnptr);
static void toc455 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi264(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi264 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg5.it_r: arg5.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc264(fnptr);
static void toc264 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi276(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi276 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc276(fnptr);
static void toc276 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi123(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi123 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc123(fnptr);
static void toc123 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static void toi507(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi507 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc507(fnptr);
static void toc507 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi525(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi525 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc525(fnptr);
static void toc525 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static void toi308(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi308 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc308(fnptr);
static void toc308 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi252(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi252 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc252(fnptr);
static void toc252 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi100(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi100 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc100(fnptr);
static void toc100 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi635(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi635 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg7.it_r: arg7.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc635(fnptr);
static void toc635 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static EIF_TYPED_VALUE toi234(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi234 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc234(fnptr);
static void toc234 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi631(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi631 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc631(fnptr);
static void toc631 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi586(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi586 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc586(fnptr);
static void toc586 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi351(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi351 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc351(fnptr);
static void toc351 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi443(EIF_REFERENCE);
static EIF_TYPED_VALUE toi443 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc443(fnptr);
static void toc443 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi553(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi553 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	*iget() = arg3;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc553(fnptr);
static void toc553 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi46(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi46 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg1.it_r: arg1.it_i1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc46(fnptr);
static void toc46 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi433(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi433 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc433(fnptr);
static void toc433 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi340(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi340 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc340(fnptr);
static void toc340 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi655(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi655 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	*iget() = arg3;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	*iget() = arg5;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc655(fnptr);
static void toc655 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi535(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi535 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc535(fnptr);
static void toc535 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static void toi664(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi664 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 9);
}

static void toc664(fnptr);
static void toc664 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	Current = opop()->it_ref;
	
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8);
}

static void toi713(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi713 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 10);
}

static void toc713(fnptr);
static void toc713 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	Current = opop()->it_ref;
	
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9);
}

static void toi766(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi766 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc766(fnptr);
static void toc766 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi349(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi349 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg1.it_r: arg1.it_i2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc349(fnptr);
static void toc349 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi397(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi397 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg1.it_r: arg1.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc397(fnptr);
static void toc397 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi547(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi547 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg8.it_r: arg8.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 9);
}

static void toc547(fnptr);
static void toc547 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	Current = opop()->it_ref;
	
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8);
}

static void toi731(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi731 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg9.it_r: arg9.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 10);
}

static void toc731(fnptr);
static void toc731 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	Current = opop()->it_ref;
	
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9);
}

static void toi285(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi285 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg1.it_r: arg1.it_i2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc285(fnptr);
static void toc285 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi673(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi673 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc673(fnptr);
static void toc673 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi743(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi743 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	*iget() = arg4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc743(fnptr);
static void toc743 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi38(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi38 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg1.it_r: arg1.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc38(fnptr);
static void toc38 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static void toi565(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi565 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc565(fnptr);
static void toc565 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi523(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi523 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc523(fnptr);
static void toc523 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi273(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi273 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg5.it_r: arg5.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc273(fnptr);
static void toc273 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi176(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi176 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc176(fnptr);
static void toc176 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi549(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi549 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc549(fnptr);
static void toc549 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi444(EIF_REFERENCE);
static EIF_TYPED_VALUE toi444 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc444(fnptr);
static void toc444 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi435(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi435 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc435(fnptr);
static void toc435 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi486(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi486 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN* *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc486(fnptr);
static void toc486 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi72(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi72 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc72(fnptr);
static void toc72 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi732(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi732 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg5.it_r: arg5.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc732(fnptr);
static void toc732 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi412(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi412 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc412(fnptr);
static void toc412 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi150(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi150 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc150(fnptr);
static void toc150 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi57(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi57 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc57(fnptr);
static void toc57 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi499(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi499 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc499(fnptr);
static void toc499 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi342(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi342 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg1.it_r: arg1.it_c4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc342(fnptr);
static void toc342 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi551(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi551 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc551(fnptr);
static void toc551 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi770(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi770 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc770(fnptr);
static void toc770 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi64(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi64 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc64(fnptr);
static void toc64 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi640(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi640 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	*iget() = arg3;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc640(fnptr);
static void toc640 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static void toi36(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi36 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg1.it_r: arg1.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc36(fnptr);
static void toc36 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static void toi83(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi83 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc83(fnptr);
static void toc83 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi701(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi701 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg1.it_r: arg1.it_i1;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc701(fnptr);
static void toc701 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi515(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi515 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc515(fnptr);
static void toc515 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi282(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi282 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg1.it_r: arg1.it_r4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc282(fnptr);
static void toc282 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi609(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi609 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg1.it_r: arg1.it_r4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg2.it_r: arg2.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc609(fnptr);
static void toc609 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi201(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi201 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg4.it_r: arg4.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc201(fnptr);
static void toc201 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi98(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi98 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc98(fnptr);
static void toc98 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi399(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi399 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg1.it_r: arg1.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc399(fnptr);
static void toc399 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi768(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi768 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc768(fnptr);
static void toc768 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi666(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi666 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	*iget() = arg5;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 9);
}

static void toc666(fnptr);
static void toc666 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	Current = opop()->it_ref;
	
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8);
}

static EIF_TYPED_VALUE toi353(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi353 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc353(fnptr);
static void toc353 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi505(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi505 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc505(fnptr);
static void toc505 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi133(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi133 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	*iget() = arg3;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc133(fnptr);
static void toc133 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi622(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi622 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc622(fnptr);
static void toc622 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi203(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi203 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg4.it_r: arg4.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc203(fnptr);
static void toc203 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi767(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi767 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	*iget() = arg3;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc767(fnptr);
static void toc767 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi371(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi371 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc371(fnptr);
static void toc371 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi330(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi330 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg1.it_r: arg1.it_r4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc330(fnptr);
static void toc330 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi484(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi484 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	*iget() = arg3;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc484(fnptr);
static void toc484 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi705(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi705 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg1.it_r: arg1.it_c1;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc705(fnptr);
static void toc705 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi687(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi687 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc687(fnptr);
static void toc687 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi339(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi339 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc339(fnptr);
static void toc339 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi269(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi269 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg5.it_r: arg5.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc269(fnptr);
static void toc269 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi755(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi755 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	*iget() = arg3;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc755(fnptr);
static void toc755 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi403(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi403 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc403(fnptr);
static void toc403 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi291(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi291 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc291(fnptr);
static void toc291 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi628(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi628 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc628(fnptr);
static void toc628 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi573(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi573 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg2.it_r: arg2.it_i8;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc573(fnptr);
static void toc573 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi224(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi224 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc224(fnptr);
static void toc224 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi45(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi45 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc45(fnptr);
static void toc45 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi572(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi572 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc572(fnptr);
static void toc572 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi21(EIF_REFERENCE);
static EIF_TYPED_VALUE toi21 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc21(fnptr);
static void toc21 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi169(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi169 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc169(fnptr);
static void toc169 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi52(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi52 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg1.it_r: arg1.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc52(fnptr);
static void toc52 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi77(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi77 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc77(fnptr);
static void toc77 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi742(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi742 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg3.it_r: arg3.it_r4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg5.it_r: arg5.it_b;
	*iget() = arg6;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc742(fnptr);
static void toc742 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi198(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi198 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	*iget() = arg5;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc198(fnptr);
static void toc198 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi148(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi148 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc148(fnptr);
static void toc148 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi577(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi577 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg5.it_r: arg5.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc577(fnptr);
static void toc577 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi690(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi690 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc690(fnptr);
static void toc690 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi114(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi114 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg5.it_r: arg5.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc114(fnptr);
static void toc114 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi670(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi670 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10, EIF_TYPED_VALUE arg11, EIF_TYPED_VALUE arg12)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	*iget() = arg9;
	*iget() = arg10;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg11.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg11.it_r: arg11.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg12.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg12.it_r: arg12.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 13);
}

static void toc670(fnptr);
static void toc670 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	EIF_TYPED_VALUE *arg11;
	EIF_TYPED_VALUE *arg12;
	Current = opop()->it_ref;
	
	arg12 = opop();
	arg11 = opop();
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10,*arg11,*arg12);
}

static EIF_TYPED_VALUE toi623(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi623 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc623(fnptr);
static void toc623 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi348(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi348 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg1.it_r: arg1.it_i1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc348(fnptr);
static void toc348 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi585(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi585 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	*iget() = arg4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc585(fnptr);
static void toc585 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi579(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi579 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc579(fnptr);
static void toc579 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi464(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi464 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc464(fnptr);
static void toc464 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi597(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi597 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc597(fnptr);
static void toc597 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi417(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi417 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc417(fnptr);
static void toc417 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi379(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi379 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc379(fnptr);
static void toc379 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi156(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi156 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg3.it_r: arg3.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc156(fnptr);
static void toc156 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi381(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi381 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg2.it_r: arg2.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc381(fnptr);
static void toc381 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi181(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi181 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg2.it_r: arg2.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc181(fnptr);
static void toc181 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi182(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi182 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc182(fnptr);
static void toc182 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi187(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi187 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg2.it_r: arg2.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc187(fnptr);
static void toc187 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi246(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi246 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg4.it_r: arg4.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc246(fnptr);
static void toc246 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi44(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi44 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc44(fnptr);
static void toc44 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi189(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi189 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg2.it_r: arg2.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc189(fnptr);
static void toc189 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi183(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi183 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg2.it_r: arg2.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc183(fnptr);
static void toc183 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi184(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi184 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg2.it_r: arg2.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc184(fnptr);
static void toc184 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi497(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi497 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc497(fnptr);
static void toc497 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi491(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi491 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg2.it_r: arg2.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc491(fnptr);
static void toc491 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi386(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi386 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg2.it_r: arg2.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc386(fnptr);
static void toc386 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi387(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi387 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc387(fnptr);
static void toc387 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi115(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi115 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc115(fnptr);
static void toc115 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi120(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi120 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc120(fnptr);
static void toc120 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi352(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi352 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc352(fnptr);
static void toc352 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi587(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi587 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc587(fnptr);
static void toc587 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static void toi698(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi698 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	*iget() = arg3;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc698(fnptr);
static void toc698 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi59(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi59 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc59(fnptr);
static void toc59 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi566(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi566 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	*iget() = arg3;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc566(fnptr);
static void toc566 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi31(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi31 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	*iget() = arg3;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc31(fnptr);
static void toc31 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi158(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi158 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc158(fnptr);
static void toc158 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi345(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi345 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg1.it_r: arg1.it_r4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc345(fnptr);
static void toc345 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi377(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi377 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc377(fnptr);
static void toc377 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi347(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi347 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg1.it_r: arg1.it_i8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc347(fnptr);
static void toc347 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi478(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi478 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	*iget() = arg4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg5.it_r: arg5.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc478(fnptr);
static void toc478 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi19(EIF_REFERENCE);
static EIF_TYPED_VALUE toi19 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc19(fnptr);
static void toc19 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi419(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi419 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc419(fnptr);
static void toc419 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi157(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi157 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg3.it_r: arg3.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc157(fnptr);
static void toc157 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi719(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi719 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10, EIF_TYPED_VALUE arg11, EIF_TYPED_VALUE arg12, EIF_TYPED_VALUE arg13, EIF_TYPED_VALUE arg14)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg10.it_r: arg10.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg11.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg11.it_r: arg11.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg12.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg12.it_r: arg12.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg13.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg13.it_r: arg13.it_i4;
	*iget() = arg14;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 15);
}

static void toc719(fnptr);
static void toc719 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	EIF_TYPED_VALUE *arg11;
	EIF_TYPED_VALUE *arg12;
	EIF_TYPED_VALUE *arg13;
	EIF_TYPED_VALUE *arg14;
	Current = opop()->it_ref;
	
	arg14 = opop();
	arg13 = opop();
	arg12 = opop();
	arg11 = opop();
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10,*arg11,*arg12,*arg13,*arg14);
}

static EIF_TYPED_VALUE toi410(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi410 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc410(fnptr);
static void toc410 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi74(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi74 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc74(fnptr);
static void toc74 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi506(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi506 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg2.it_r: arg2.it_n1;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg3.it_r: arg3.it_n1;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg4.it_r: arg4.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc506(fnptr);
static void toc506 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi40(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi40 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg1.it_r: arg1.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc40(fnptr);
static void toc40 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static EIF_TYPED_VALUE toi445(EIF_REFERENCE);
static EIF_TYPED_VALUE toi445 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc445(fnptr);
static void toc445 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi306(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi306 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg1.it_r: arg1.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc306(fnptr);
static void toc306 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi103(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi103 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc103(fnptr);
static void toc103 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi390(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi390 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg5.it_r: arg5.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc390(fnptr);
static void toc390 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi591(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi591 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc591(fnptr);
static void toc591 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi686(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi686 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc686(fnptr);
static void toc686 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi657(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi657 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc657(fnptr);
static void toc657 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi164(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi164 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg3.it_r: arg3.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc164(fnptr);
static void toc164 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi284(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi284 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg1.it_r: arg1.it_i8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc284(fnptr);
static void toc284 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi33(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi33 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc33(fnptr);
static void toc33 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi42(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi42 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc42(fnptr);
static void toc42 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static void toi764(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi764 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc764(fnptr);
static void toc764 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi682(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi682 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10, EIF_TYPED_VALUE arg11, EIF_TYPED_VALUE arg12)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg10.it_r: arg10.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg11.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg11.it_r: arg11.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg12.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg12.it_r: arg12.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 13);
}

static void toc682(fnptr);
static void toc682 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	EIF_TYPED_VALUE *arg11;
	EIF_TYPED_VALUE *arg12;
	Current = opop()->it_ref;
	
	arg12 = opop();
	arg11 = opop();
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10,*arg11,*arg12);
}

static EIF_TYPED_VALUE toi509(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi509 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg6.it_r: arg6.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc509(fnptr);
static void toc509 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static void toi163(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi163 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg3.it_r: arg3.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc163(fnptr);
static void toc163 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi695(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi695 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg1.it_r: arg1.it_r4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg2.it_r: arg2.it_r4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg3.it_r: arg3.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc695(fnptr);
static void toc695 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi645(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi645 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc645(fnptr);
static void toc645 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi166(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi166 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg3.it_r: arg3.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc166(fnptr);
static void toc166 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi639(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi639 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg2.it_r: arg2.it_c1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc639(fnptr);
static void toc639 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi454(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi454 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc454(fnptr);
static void toc454 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi702(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi702 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc702(fnptr);
static void toc702 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi341(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi341 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc341(fnptr);
static void toc341 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi449(EIF_REFERENCE);
static EIF_TYPED_VALUE toi449 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc449(fnptr);
static void toc449 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static void toi671(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi671 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc671(fnptr);
static void toc671 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi425(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi425 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc425(fnptr);
static void toc425 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi380(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi380 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc380(fnptr);
static void toc380 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi473(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi473 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg1.it_r: arg1.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc473(fnptr);
static void toc473 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi165(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi165 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc165(fnptr);
static void toc165 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi513(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi513 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc513(fnptr);
static void toc513 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi396(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi396 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg1.it_r: arg1.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc396(fnptr);
static void toc396 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi220(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi220 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc220(fnptr);
static void toc220 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi94(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi94 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg4.it_r: arg4.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc94(fnptr);
static void toc94 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi393(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi393 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc393(fnptr);
static void toc393 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi160(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi160 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg3.it_r: arg3.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc160(fnptr);
static void toc160 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi474(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi474 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc474(fnptr);
static void toc474 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi646(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi646 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc646(fnptr);
static void toc646 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static void toi676(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi676 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc676(fnptr);
static void toc676 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi556(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi556 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg3.it_r: arg3.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc556(fnptr);
static void toc556 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi101(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi101 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	*iget() = arg4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	*iget() = arg6;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc101(fnptr);
static void toc101 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi324(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi324 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc324(fnptr);
static void toc324 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi600(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi600 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc600(fnptr);
static void toc600 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi272(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi272 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc272(fnptr);
static void toc272 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi159(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi159 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg3.it_r: arg3.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc159(fnptr);
static void toc159 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi24(EIF_REFERENCE);
static EIF_TYPED_VALUE toi24 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc24(fnptr);
static void toc24 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi421(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi421 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc421(fnptr);
static void toc421 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi28(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi28 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc28(fnptr);
static void toc28 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi199(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi199 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc199(fnptr);
static void toc199 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi93(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi93 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc93(fnptr);
static void toc93 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi527(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi527 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg5.it_r: arg5.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg7.it_r: arg7.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg8.it_r: arg8.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg9.it_r: arg9.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg10.it_r: arg10.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 11);
	return * opop();
}

static void toc527(fnptr);
static void toc527 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	Current = opop()->it_ref;
	
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi457(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi457 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc457(fnptr);
static void toc457 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi162(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi162 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg3.it_r: arg3.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc162(fnptr);
static void toc162 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi758(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi758 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg6.it_r: arg6.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg7.it_r: arg7.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
	return * opop();
}

static void toc758(fnptr);
static void toc758 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi56(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi56 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc56(fnptr);
static void toc56 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi53(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi53 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg1.it_r: arg1.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc53(fnptr);
static void toc53 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi759(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi759 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg6.it_r: arg6.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc759(fnptr);
static void toc759 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi204(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi204 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc204(fnptr);
static void toc204 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi161(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi161 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc161(fnptr);
static void toc161 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi63(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi63 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc63(fnptr);
static void toc63 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi230(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi230 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg4.it_r: arg4.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc230(fnptr);
static void toc230 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi659(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi659 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	*iget() = arg4;
	*iget() = arg5;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc659(fnptr);
static void toc659 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi504(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi504 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc504(fnptr);
static void toc504 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi155(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi155 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc155(fnptr);
static void toc155 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi223(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi223 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc223(fnptr);
static void toc223 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi500(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi500 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	*iget() = arg3;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	*iget() = arg6;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg7.it_r: arg7.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc500(fnptr);
static void toc500 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static EIF_TYPED_VALUE toi107(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi107 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc107(fnptr);
static void toc107 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi737(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi737 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc737(fnptr);
static void toc737 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi66(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi66 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc66(fnptr);
static void toc66 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi167(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi167 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg3.it_r: arg3.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc167(fnptr);
static void toc167 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi242(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi242 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc242(fnptr);
static void toc242 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi594(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi594 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc594(fnptr);
static void toc594 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi152(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi152 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc152(fnptr);
static void toc152 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi65(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi65 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc65(fnptr);
static void toc65 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi232(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi232 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg1.it_r: arg1.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc232(fnptr);
static void toc232 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi422(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi422 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc422(fnptr);
static void toc422 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi462(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi462 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc462(fnptr);
static void toc462 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi582(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi582 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc582(fnptr);
static void toc582 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi463(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi463 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg2.it_r: arg2.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc463(fnptr);
static void toc463 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi633(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi633 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32* *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc633(fnptr);
static void toc633 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi357(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi357 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg1.it_r: arg1.it_r4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc357(fnptr);
static void toc357 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi482(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi482 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc482(fnptr);
static void toc482 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi168(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi168 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc168(fnptr);
static void toc168 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi709(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi709 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg6.it_r: arg6.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg7.it_r: arg7.it_r8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg10.it_r: arg10.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 11);
}

static void toc709(fnptr);
static void toc709 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	Current = opop()->it_ref;
	
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10);
}

static void toi680(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi680 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc680(fnptr);
static void toc680 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static EIF_TYPED_VALUE toi392(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi392 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REFERENCE* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc392(fnptr);
static void toc392 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi18(EIF_REFERENCE);
static EIF_TYPED_VALUE toi18 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc18(fnptr);
static void toc18 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi424(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi424 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc424(fnptr);
static void toc424 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi394(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi394 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg1.it_r: arg1.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc394(fnptr);
static void toc394 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi546(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi546 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg9.it_r: arg9.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 10);
}

static void toc546(fnptr);
static void toc546 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	Current = opop()->it_ref;
	
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9);
}

static EIF_TYPED_VALUE toi715(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi715 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc715(fnptr);
static void toc715 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi590(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi590 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg6.it_r: arg6.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc590(fnptr);
static void toc590 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static void toi699(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi699 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg5.it_r: arg5.it_r4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg6.it_r: arg6.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc699(fnptr);
static void toc699 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi630(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi630 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc630(fnptr);
static void toc630 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi519(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi519 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc519(fnptr);
static void toc519 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi248(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi248 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg4.it_r: arg4.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc248(fnptr);
static void toc248 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi541(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi541 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	*iget() = arg3;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc541(fnptr);
static void toc541 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi593(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi593 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc593(fnptr);
static void toc593 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static void toi601(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi601 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc601(fnptr);
static void toc601 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static void toi575(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi575 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc575(fnptr);
static void toc575 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi154(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi154 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	*iget() = arg3;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc154(fnptr);
static void toc154 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi97(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi97 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc97(fnptr);
static void toc97 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static void toi180(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi180 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg2.it_r: arg2.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc180(fnptr);
static void toc180 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi247(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi247 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg4.it_r: arg4.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc247(fnptr);
static void toc247 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi650(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi650 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc650(fnptr);
static void toc650 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi188(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi188 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg2.it_r: arg2.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc188(fnptr);
static void toc188 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi29(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi29 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc29(fnptr);
static void toc29 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi245(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi245 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	*iget() = arg4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc245(fnptr);
static void toc245 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi185(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi185 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc185(fnptr);
static void toc185 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi186(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi186 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg2.it_r: arg2.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc186(fnptr);
static void toc186 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi723(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi723 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg5.it_r: arg5.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc723(fnptr);
static void toc723 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi190(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi190 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg2.it_r: arg2.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc190(fnptr);
static void toc190 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi179(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi179 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc179(fnptr);
static void toc179 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi174(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi174 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc174(fnptr);
static void toc174 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi102(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi102 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	*iget() = arg4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc102(fnptr);
static void toc102 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi578(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi578 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc578(fnptr);
static void toc578 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi104(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi104 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	*iget() = arg5;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc104(fnptr);
static void toc104 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi730(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi730 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc730(fnptr);
static void toc730 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi660(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi660 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	*iget() = arg3;
	*iget() = arg4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc660(fnptr);
static void toc660 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi79(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi79 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc79(fnptr);
static void toc79 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi774(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi774 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc774(fnptr);
static void toc774 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi450(EIF_REFERENCE);
static EIF_TYPED_VALUE toi450 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc450(fnptr);
static void toc450 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi147(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi147 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc147(fnptr);
static void toc147 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi268(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi268 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	*iget() = arg5;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc268(fnptr);
static void toc268 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi302(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi302 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc302(fnptr);
static void toc302 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi510(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi510 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
	return * opop();
}

static void toc510(fnptr);
static void toc510 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi472(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi472 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg2.it_r: arg2.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc472(fnptr);
static void toc472 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi471(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi471 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc471(fnptr);
static void toc471 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi426(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi426 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc426(fnptr);
static void toc426 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi314(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi314 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc314(fnptr);
static void toc314 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi480(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi480 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg6.it_r: arg6.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg10.it_r: arg10.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 11);
	return * opop();
}

static void toc480(fnptr);
static void toc480 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	Current = opop()->it_ref;
	
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi632(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi632 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc632(fnptr);
static void toc632 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi638(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi638 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc638(fnptr);
static void toc638 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi710(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi710 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc710(fnptr);
static void toc710 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi746(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi746 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg6.it_r: arg6.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc746(fnptr);
static void toc746 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static void toi126(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi126 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10, EIF_TYPED_VALUE arg11, EIF_TYPED_VALUE arg12)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	*iget() = arg5;
	*iget() = arg6;
	*iget() = arg7;
	*iget() = arg8;
	*iget() = arg9;
	*iget() = arg10;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg11.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg11.it_r: arg11.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg12.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg12.it_r: arg12.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 13);
}

static void toc126(fnptr);
static void toc126 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	EIF_TYPED_VALUE *arg11;
	EIF_TYPED_VALUE *arg12;
	Current = opop()->it_ref;
	
	arg12 = opop();
	arg11 = opop();
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10,*arg11,*arg12);
}

static EIF_TYPED_VALUE toi108(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi108 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc108(fnptr);
static void toc108 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi322(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi322 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc322(fnptr);
static void toc322 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi704(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi704 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg6.it_r: arg6.it_r8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 9);
}

static void toc704(fnptr);
static void toc704 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	Current = opop()->it_ref;
	
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8);
}

static void toi563(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi563 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg6.it_r: arg6.it_r8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	*iget() = arg9;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 10);
}

static void toc563(fnptr);
static void toc563 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	Current = opop()->it_ref;
	
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9);
}

static EIF_TYPED_VALUE toi440(EIF_REFERENCE);
static EIF_TYPED_VALUE toi440 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc440(fnptr);
static void toc440 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static void toi537(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi537 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	*iget() = arg5;
	*iget() = arg6;
	*iget() = arg7;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc537(fnptr);
static void toc537 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static EIF_TYPED_VALUE toi496(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi496 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc496(fnptr);
static void toc496 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi84(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi84 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg4.it_r: arg4.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc84(fnptr);
static void toc84 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi432(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi432 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc432(fnptr);
static void toc432 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi557(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi557 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg4.it_r: arg4.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc557(fnptr);
static void toc557 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi568(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi568 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc568(fnptr);
static void toc568 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi142(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi142 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc142(fnptr);
static void toc142 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi87(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi87 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg4.it_r: arg4.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc87(fnptr);
static void toc87 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi608(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi608 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	*iget() = arg3;
	*iget() = arg4;
	*iget() = arg5;
	*iget() = arg6;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc608(fnptr);
static void toc608 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi581(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi581 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg6.it_r: arg6.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc581(fnptr);
static void toc581 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi407(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi407 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc407(fnptr);
static void toc407 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi642(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi642 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg7.it_r: arg7.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 9);
}

static void toc642(fnptr);
static void toc642 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	Current = opop()->it_ref;
	
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8);
}

static EIF_TYPED_VALUE toi171(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi171 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc171(fnptr);
static void toc171 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi678(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi678 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc678(fnptr);
static void toc678 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi524(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi524 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg5.it_r: arg5.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg6.it_r: arg6.it_n4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg7.it_r: arg7.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
	return * opop();
}

static void toc524(fnptr);
static void toc524 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi554(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi554 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc554(fnptr);
static void toc554 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi441(EIF_REFERENCE);
static EIF_TYPED_VALUE toi441 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc441(fnptr);
static void toc441 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi206(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi206 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg4.it_r: arg4.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc206(fnptr);
static void toc206 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi73(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi73 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc73(fnptr);
static void toc73 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi434(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi434 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc434(fnptr);
static void toc434 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi144(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi144 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc144(fnptr);
static void toc144 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi17(EIF_REFERENCE);
static EIF_TYPED_VALUE toi17 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc17(fnptr);
static void toc17 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static void toi226(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi226 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg4.it_r: arg4.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc226(fnptr);
static void toc226 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi205(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi205 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg4.it_r: arg4.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc205(fnptr);
static void toc205 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi193(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi193 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc193(fnptr);
static void toc193 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi775(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi775 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg6.it_r: arg6.it_r8;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg7.it_r: arg7.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
	return * opop();
}

static void toc775(fnptr);
static void toc775 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi595(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi595 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc595(fnptr);
static void toc595 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi637(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi637 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg2.it_r: arg2.it_i8;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc637(fnptr);
static void toc637 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi544(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi544 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	*iget() = arg2;
	*iget() = arg3;
	*iget() = arg4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg6.it_r: arg6.it_b;
	*iget() = arg7;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc544(fnptr);
static void toc544 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static EIF_TYPED_VALUE toi605(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi605 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg3.it_r: arg3.it_r4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc605(fnptr);
static void toc605 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static void toi218(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi218 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg4.it_r: arg4.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc218(fnptr);
static void toc218 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi610(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi610 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc610(fnptr);
static void toc610 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi398(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi398 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg1.it_r: arg1.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc398(fnptr);
static void toc398 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi283(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi283 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg1.it_r: arg1.it_n8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc283(fnptr);
static void toc283 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi617(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi617 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg3.it_r: arg3.it_r4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc617(fnptr);
static void toc617 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi722(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi722 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc722(fnptr);
static void toc722 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi373(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi373 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc373(fnptr);
static void toc373 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi763(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi763 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc763(fnptr);
static void toc763 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi498(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi498 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg2.it_r: arg2.it_n2;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg3.it_r: arg3.it_n2;
	*iget() = arg4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc498(fnptr);
static void toc498 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi521(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi521 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc521(fnptr);
static void toc521 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi539(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi539 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	*iget() = arg3;
	*iget() = arg4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc539(fnptr);
static void toc539 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi675(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi675 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg10.it_r: arg10.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 11);
	return * opop();
}

static void toc675(fnptr);
static void toc675 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	Current = opop()->it_ref;
	
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10);
	it = iget();
	*it = result;
}

static void toi696(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi696 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc696(fnptr);
static void toc696 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi596(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi596 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
	return * opop();
}

static void toc596(fnptr);
static void toc596 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi602(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi602 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc602(fnptr);
static void toc602 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi270(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi270 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg5.it_r: arg5.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc270(fnptr);
static void toc270 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi604(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi604 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg2.it_r: arg2.it_r4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc604(fnptr);
static void toc604 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi337(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi337 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc337(fnptr);
static void toc337 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi724(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi724 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc724(fnptr);
static void toc724 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi106(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi106 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc106(fnptr);
static void toc106 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi383(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi383 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc383(fnptr);
static void toc383 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi385(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi385 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc385(fnptr);
static void toc385 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi266(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi266 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg5.it_r: arg5.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc266(fnptr);
static void toc266 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi479(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi479 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg6.it_r: arg6.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg10.it_r: arg10.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 11);
}

static void toc479(fnptr);
static void toc479 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	Current = opop()->it_ref;
	
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10);
}

static void toi634(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi634 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg5.it_r: arg5.it_n4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc634(fnptr);
static void toc634 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi175(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi175 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc175(fnptr);
static void toc175 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi558(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi558 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc558(fnptr);
static void toc558 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi20(EIF_REFERENCE);
static EIF_TYPED_VALUE toi20 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc20(fnptr);
static void toc20 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi418(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi418 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc418(fnptr);
static void toc418 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi668(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi668 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10, EIF_TYPED_VALUE arg11)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	*iget() = arg5;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	*iget() = arg8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg10.it_r: arg10.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg11.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg11.it_r: arg11.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 12);
}

static void toc668(fnptr);
static void toc668 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	EIF_TYPED_VALUE *arg11;
	Current = opop()->it_ref;
	
	arg11 = opop();
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10,*arg11);
}

static EIF_TYPED_VALUE toi70(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi70 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc70(fnptr);
static void toc70 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi408(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi408 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc408(fnptr);
static void toc408 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi543(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi543 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	*iget() = arg3;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg6.it_r: arg6.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc543(fnptr);
static void toc543 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi149(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi149 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc149(fnptr);
static void toc149 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi256(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi256 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc256(fnptr);
static void toc256 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi99(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi99 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc99(fnptr);
static void toc99 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi286(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi286 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg1.it_r: arg1.it_c1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc286(fnptr);
static void toc286 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi254(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi254 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc254(fnptr);
static void toc254 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi542(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi542 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	*iget() = arg5;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg7.it_r: arg7.it_b;
	*iget() = arg8;
	*iget() = arg9;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 10);
}

static void toc542(fnptr);
static void toc542 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	Current = opop()->it_ref;
	
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9);
}

static void toi614(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi614 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc614(fnptr);
static void toc614 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static void toi711(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi711 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc711(fnptr);
static void toc711 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi301(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi301 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg1.it_r: arg1.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc301(fnptr);
static void toc301 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi589(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi589 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc589(fnptr);
static void toc589 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static void toi26(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi26 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc26(fnptr);
static void toc26 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static EIF_TYPED_VALUE toi313(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi313 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg1.it_r: arg1.it_n2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc313(fnptr);
static void toc313 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi96(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi96 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc96(fnptr);
static void toc96 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi750(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi750 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg2.it_r: arg2.it_c4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc750(fnptr);
static void toc750 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi548(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi548 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc548(fnptr);
static void toc548 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi68(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi68 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc68(fnptr);
static void toc68 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi442(EIF_REFERENCE);
static EIF_TYPED_VALUE toi442 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc442(fnptr);
static void toc442 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi130(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi130 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc130(fnptr);
static void toc130 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi529(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi529 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc529(fnptr);
static void toc529 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static void toi619(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi619 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg3.it_r: arg3.it_i8;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc619(fnptr);
static void toc619 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi401(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi401 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc401(fnptr);
static void toc401 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi740(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi740 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc740(fnptr);
static void toc740 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static void toi489(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi489 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc489(fnptr);
static void toc489 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi35(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi35 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg1.it_r: arg1.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc35(fnptr);
static void toc35 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static EIF_TYPED_VALUE toi712(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi712 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg7.it_r: arg7.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
	return * opop();
}

static void toc712(fnptr);
static void toc712 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi170(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi170 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc170(fnptr);
static void toc170 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi10(EIF_REFERENCE);
static EIF_TYPED_VALUE toi10 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc10(fnptr);
static void toc10 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi11(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi11 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc11(fnptr);
static void toc11 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi683(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi683 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10, EIF_TYPED_VALUE arg11, EIF_TYPED_VALUE arg12, EIF_TYPED_VALUE arg13)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg10.it_r: arg10.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg11.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg11.it_r: arg11.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg12.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg12.it_r: arg12.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg13.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg13.it_r: arg13.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 14);
}

static void toc683(fnptr);
static void toc683 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	EIF_TYPED_VALUE *arg11;
	EIF_TYPED_VALUE *arg12;
	EIF_TYPED_VALUE *arg13;
	Current = opop()->it_ref;
	
	arg13 = opop();
	arg12 = opop();
	arg11 = opop();
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10,*arg11,*arg12,*arg13);
}

static EIF_TYPED_VALUE toi75(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi75 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc75(fnptr);
static void toc75 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi656(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi656 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc656(fnptr);
static void toc656 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi293(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi293 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc293(fnptr);
static void toc293 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi143(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi143 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc143(fnptr);
static void toc143 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi446(EIF_REFERENCE);
static EIF_TYPED_VALUE toi446 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc446(fnptr);
static void toc446 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi514(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi514 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc514(fnptr);
static void toc514 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi290(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi290 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg2.it_r: arg2.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc290(fnptr);
static void toc290 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi502(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi502 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc502(fnptr);
static void toc502 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi267(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi267 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg5.it_r: arg5.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc267(fnptr);
static void toc267 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi85(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi85 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg4.it_r: arg4.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc85(fnptr);
static void toc85 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi665(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi665 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc665(fnptr);
static void toc665 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi530(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi530 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc530(fnptr);
static void toc530 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi534(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi534 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER* *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc534(fnptr);
static void toc534 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi436(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi436 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc436(fnptr);
static void toc436 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi88(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi88 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg4.it_r: arg4.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc88(fnptr);
static void toc88 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi599(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi599 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg2.it_r: arg2.it_i8;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg3.it_r: arg3.it_r4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc599(fnptr);
static void toc599 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static void toi649(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi649 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	*iget() = arg4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc649(fnptr);
static void toc649 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi552(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi552 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg10.it_r: arg10.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 11);
}

static void toc552(fnptr);
static void toc552 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	Current = opop()->it_ref;
	
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10);
}

static EIF_TYPED_VALUE toi237(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi237 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc237(fnptr);
static void toc237 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi677(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi677 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg8.it_r: arg8.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg9.it_r: arg9.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 10);
}

static void toc677(fnptr);
static void toc677 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	Current = opop()->it_ref;
	
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9);
}

static void toi82(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi82 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	*iget() = arg4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc82(fnptr);
static void toc82 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi54(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi54 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc54(fnptr);
static void toc54 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi477(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi477 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	*iget() = arg5;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg6.it_r: arg6.it_b;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg7.it_r: arg7.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	*iget() = arg9;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg10.it_r: arg10.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 11);
}

static void toc477(fnptr);
static void toc477 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	Current = opop()->it_ref;
	
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10);
}

static EIF_TYPED_VALUE toi207(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi207 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg4.it_r: arg4.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc207(fnptr);
static void toc207 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi336(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi336 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc336(fnptr);
static void toc336 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi584(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi584 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc584(fnptr);
static void toc584 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi430(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi430 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc430(fnptr);
static void toc430 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi693(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi693 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc693(fnptr);
static void toc693 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi485(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi485 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN* *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN* *)arg7.it_r: arg7.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc485(fnptr);
static void toc485 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static void toi228(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi228 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg4.it_r: arg4.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc228(fnptr);
static void toc228 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi210(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi210 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg4.it_r: arg4.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc210(fnptr);
static void toc210 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi625(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi625 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc625(fnptr);
static void toc625 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi221(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi221 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg4.it_r: arg4.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc221(fnptr);
static void toc221 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi735(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi735 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg6.it_r: arg6.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc735(fnptr);
static void toc735 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi468(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi468 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc468(fnptr);
static void toc468 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi772(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi772 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc772(fnptr);
static void toc772 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi14(EIF_REFERENCE);
static EIF_TYPED_VALUE toi14 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc14(fnptr);
static void toc14 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi9(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi9 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc9(fnptr);
static void toc9 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi406(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi406 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc406(fnptr);
static void toc406 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi222(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi222 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg3.it_r: arg3.it_n4;
	*iget() = arg4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc222(fnptr);
static void toc222 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi69(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi69 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc69(fnptr);
static void toc69 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi7(EIF_REFERENCE);
static EIF_TYPED_VALUE toi7 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc7(fnptr);
static void toc7 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi140(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi140 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc140(fnptr);
static void toc140 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi415(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi415 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc415(fnptr);
static void toc415 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi720(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi720 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc720(fnptr);
static void toc720 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi343(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi343 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg1.it_r: arg1.it_n2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc343(fnptr);
static void toc343 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi522(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi522 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg7.it_r: arg7.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc522(fnptr);
static void toc522 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static EIF_TYPED_VALUE toi644(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi644 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc644(fnptr);
static void toc644 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi756(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi756 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg1.it_r: arg1.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg2.it_r: arg2.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg3.it_r: arg3.it_r8;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg4.it_r: arg4.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc756(fnptr);
static void toc756 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static void toi616(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi616 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg7.it_r: arg7.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
}

static void toc616(fnptr);
static void toc616 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
}

static void toi41(EIF_REFERENCE, EIF_TYPED_VALUE);
static void toi41 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
}

static void toc41(fnptr);
static void toc41 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
}

static void toi389(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi389 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg3.it_r: arg3.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc389(fnptr);
static void toc389 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static void toi125(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi125 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc125(fnptr);
static void toc125 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi697(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi697 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg3.it_r: arg3.it_r4;
	*iget() = arg4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc697(fnptr);
static void toc697 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi134(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi134 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg1.it_r: arg1.it_r4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc134(fnptr);
static void toc134 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi620(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi620 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg8.it_r: arg8.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 9);
}

static void toc620(fnptr);
static void toc620 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	Current = opop()->it_ref;
	
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8);
}

static EIF_TYPED_VALUE toi658(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi658 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc658(fnptr);
static void toc658 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static void toi281(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi281 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc281(fnptr);
static void toc281 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static EIF_TYPED_VALUE toi241(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi241 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg1.it_r: arg1.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc241(fnptr);
static void toc241 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static void toi127(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi127 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc127(fnptr);
static void toc127 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi733(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi733 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9, EIF_TYPED_VALUE arg10, EIF_TYPED_VALUE arg11, EIF_TYPED_VALUE arg12)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg8.it_r: arg8.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg9.it_r: arg9.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg10.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg10.it_r: arg10.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg11.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg11.it_r: arg11.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg12.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg12.it_r: arg12.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 13);
	return * opop();
}

static void toc733(fnptr);
static void toc733 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	EIF_TYPED_VALUE *arg10;
	EIF_TYPED_VALUE *arg11;
	EIF_TYPED_VALUE *arg12;
	Current = opop()->it_ref;
	
	arg12 = opop();
	arg11 = opop();
	arg10 = opop();
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9,*arg10,*arg11,*arg12);
	it = iget();
	*it = result;
}

static void toi508(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi508 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg1.it_r: arg1.it_n1;
	it = iget();
	it->type = SK_UINT8;it->it_n1 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8 *)arg2.it_r: arg2.it_n1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc508(fnptr);
static void toc508 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi651(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi651 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	*iget() = arg6;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc651(fnptr);
static void toc651 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi194(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi194 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc194(fnptr);
static void toc194 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi615(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi615 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7, EIF_TYPED_VALUE arg8, EIF_TYPED_VALUE arg9)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg7.it_r: arg7.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg8.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg8.it_r: arg8.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg9.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg9.it_r: arg9.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 10);
}

static void toc615(fnptr);
static void toc615 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	EIF_TYPED_VALUE *arg8;
	EIF_TYPED_VALUE *arg9;
	Current = opop()->it_ref;
	
	arg9 = opop();
	arg8 = opop();
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7,*arg8,*arg9);
}

static EIF_TYPED_VALUE toi287(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi287 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg1.it_r: arg1.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc287(fnptr);
static void toc287 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi367(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi367 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc367(fnptr);
static void toc367 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi753(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi753 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6, EIF_TYPED_VALUE arg7)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg6.it_r: arg6.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg7.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg7.it_r: arg7.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 8);
	return * opop();
}

static void toc753(fnptr);
static void toc753 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	EIF_TYPED_VALUE *arg7;
	Current = opop()->it_ref;
	
	arg7 = opop();
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6,*arg7);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi320(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi320 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg1.it_r: arg1.it_c1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc320(fnptr);
static void toc320 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi309(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi309 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg1.it_r: arg1.it_c4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc309(fnptr);
static void toc309 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi271(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi271 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_INT64;it->it_i8 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_64 *)arg5.it_r: arg5.it_i8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc271(fnptr);
static void toc271 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static void toi250(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi250 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT8;it->it_i1 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_8 *)arg4.it_r: arg4.it_i1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc250(fnptr);
static void toc250 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi409(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi409 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc409(fnptr);
static void toc409 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi257(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi257 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg4.it_r: arg4.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc257(fnptr);
static void toc257 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi771(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi771 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REAL64;it->it_r8 = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_REAL_64 *)arg6.it_r: arg6.it_r8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc771(fnptr);
static void toc771 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static EIF_TYPED_VALUE toi469(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi469 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg2.it_r: arg2.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc469(fnptr);
static void toc469 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi618(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi618 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5, EIF_TYPED_VALUE arg6)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg3.it_r: arg3.it_r4;
	it = iget();
	it->type = SK_REAL32;it->it_r4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_REAL_32 *)arg4.it_r: arg4.it_r4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg6.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg6.it_r: arg6.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 7);
}

static void toc618(fnptr);
static void toc618 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	EIF_TYPED_VALUE *arg6;
	Current = opop()->it_ref;
	
	arg6 = opop();
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5,*arg6);
}

static void toi520(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi520 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc520(fnptr);
static void toc520 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi555(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi555 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	*iget() = arg3;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc555(fnptr);
static void toc555 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi299(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi299 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg1.it_r: arg1.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc299(fnptr);
static void toc299 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi741(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi741 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc741(fnptr);
static void toc741 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi562(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi562 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	*iget() = arg3;
	*iget() = arg4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc562(fnptr);
static void toc562 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi288(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi288 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg2.it_r: arg2.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc288(fnptr);
static void toc288 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi2(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi2 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc2(fnptr);
static void toc2 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi368(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi368 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc368(fnptr);
static void toc368 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi197(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi197 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg2.it_r: arg2.it_n4;
	*iget() = arg3;
	*iget() = arg4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc197(fnptr);
static void toc197 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static void toi624(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi624 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32* *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32* *)arg3.it_r: arg3.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc624(fnptr);
static void toc624 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi138(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi138 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc138(fnptr);
static void toc138 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi540(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi540 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	*iget() = arg2;
	*iget() = arg3;
	*iget() = arg4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc540(fnptr);
static void toc540 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi661(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi661 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc661(fnptr);
static void toc661 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi121(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi121 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg2.it_r: arg2.it_b;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc121(fnptr);
static void toc121 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi739(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi739 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc739(fnptr);
static void toc739 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi3(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi3 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc3(fnptr);
static void toc3 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi289(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi289 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_CHAR32;it->it_c4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_32 *)arg1.it_r: arg1.it_c4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc289(fnptr);
static void toc289 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi391(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi391 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_CHAR8;it->it_c1 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_CHARACTER_8 *)arg3.it_r: arg3.it_c1;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc391(fnptr);
static void toc391 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi310(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi310 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg1.it_r: arg1.it_n4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc310(fnptr);
static void toc310 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi263(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi263 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_INT16;it->it_i2 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16 *)arg5.it_r: arg5.it_i2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
}

static void toc263(fnptr);
static void toc263 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
}

static EIF_TYPED_VALUE toi131(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi131 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	it = opop();
	it->type = SK_REF;
	return *it;
}

static void toc131(fnptr);
static void toc131 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	if ((result.type & SK_HEAD) == SK_REF) {
		*it = result;
	} else {
		it->type = SK_REF;
		it->it_ref = RTBU(result);
	}
}

static EIF_TYPED_VALUE toi773(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi773 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	*iget() = arg2;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc773(fnptr);
static void toc773 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static void toi654(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi654 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	*iget() = arg1;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg3.it_r: arg3.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
}

static void toc654(fnptr);
static void toc654 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
}

static EIF_TYPED_VALUE toi128(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi128 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg1.it_r: arg1.it_n8;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg2.it_r: arg2.it_n8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg4.it_r: arg4.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc128(fnptr);
static void toc128 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi411(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi411 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_16* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc411(fnptr);
static void toc411 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi177(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi177 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc177(fnptr);
static void toc177 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi603(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi603 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
	return * opop();
}

static void toc603(fnptr);
static void toc603 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi292(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi292 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT16;it->it_n2 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_16 *)arg1.it_r: arg1.it_n2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc292(fnptr);
static void toc292 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi494(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi494 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc494(fnptr);
static void toc494 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi60(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi60 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc60(fnptr);
static void toc60 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi576(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi576 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc576(fnptr);
static void toc576 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi487(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi487 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	*iget() = arg2;
	*iget() = arg3;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 4);
	return * opop();
}

static void toc487(fnptr);
static void toc487 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	Current = opop()->it_ref;
	
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi439(EIF_REFERENCE);
static EIF_TYPED_VALUE toi439 (EIF_REFERENCE Current)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 1);
	return * opop();
}

static void toc439(fnptr);
static void toc439 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	Current = opop()->it_ref;
	
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) ptr)(Current);
	it = iget();
	*it = result;
}

static void toi191(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi191 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
}

static void toc191(fnptr);
static void toc191 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
}

static void toi86(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi86 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg4.it_r: arg4.it_b;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc86(fnptr);
static void toc86 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi303(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi303 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg1.it_r: arg1.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc303(fnptr);
static void toc303 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static void toi216(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi216 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc216(fnptr);
static void toc216 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi316(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi316 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg1.it_r: arg1.it_n8;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg2.it_r: arg2.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc316(fnptr);
static void toc316 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi536(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi536 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	*iget() = arg2;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc536(fnptr);
static void toc536 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static void toi89(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static void toi89 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg1.it_r: arg1.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_UINT32;it->it_n4 = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_32 *)arg4.it_r: arg4.it_n4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 5);
}

static void toc89(fnptr);
static void toc89 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	Current = opop()->it_ref;
	
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4);
}

static EIF_TYPED_VALUE toi475(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi475 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_BOOL;it->it_b = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_BOOLEAN *)arg1.it_r: arg1.it_b;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg2.it_r: arg2.it_n8;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 3);
	return * opop();
}

static void toc475(fnptr);
static void toc475 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	Current = opop()->it_ref;
	
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi692(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi692 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg3.it_r: arg3.it_i4;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_INT32;it->it_i4 = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_INTEGER_32 *)arg5.it_r: arg5.it_i4;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc692(fnptr);
static void toc692 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi402(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi402 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_8* *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 2);
	return * opop();
}

static void toc402(fnptr);
static void toc402 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	Current = opop()->it_ref;
	
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) ptr)(Current,*arg1);
	it = iget();
	*it = result;
}

static EIF_TYPED_VALUE toi569(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE toi569 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1, EIF_TYPED_VALUE arg2, EIF_TYPED_VALUE arg3, EIF_TYPED_VALUE arg4, EIF_TYPED_VALUE arg5)
{
	GTCX
	EIF_TYPED_VALUE *it;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg1.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg1.it_r: arg1.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg2.type & SK_HEAD) == SK_REF)? * (EIF_POINTER *)arg2.it_r: arg2.it_p;
	it = iget();
	it->type = SK_UINT64;it->it_n8 = ((arg3.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64 *)arg3.it_r: arg3.it_n8;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg4.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64* *)arg4.it_r: arg4.it_p;
	it = iget();
	it->type = SK_POINTER;it->it_p = ((arg5.type & SK_HEAD) == SK_REF)? * (EIF_NATURAL_64* *)arg5.it_r: arg5.it_p;
	it = iget();
	it->type = SK_REF;
	it->it_ref = Current;

	xinterp(IC, 6);
	return * opop();
}

static void toc569(fnptr);
static void toc569 (fnptr ptr)
{
	GTCX
	EIF_REFERENCE Current;
	EIF_TYPED_VALUE result;
	EIF_TYPED_VALUE *it;
	EIF_TYPED_VALUE *arg1;
	EIF_TYPED_VALUE *arg2;
	EIF_TYPED_VALUE *arg3;
	EIF_TYPED_VALUE *arg4;
	EIF_TYPED_VALUE *arg5;
	Current = opop()->it_ref;
	
	arg5 = opop();
	arg4 = opop();
	arg3 = opop();
	arg2 = opop();
	arg1 = opop();
	result = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) ptr)(Current,*arg1,*arg2,*arg3,*arg4,*arg5);
	it = iget();
	*it = result;
}

struct p_interface egc_fpattern_init[] = {
{(void (*)(fnptr)) toc1, (fnptr) toi1},
{(void (*)(fnptr)) toc2, (fnptr) toi2},
{(void (*)(fnptr)) toc3, (fnptr) toi3},
{(void (*)(fnptr)) toc4, (fnptr) toi4},
{(void (*)(fnptr)) toc5, (fnptr) toi5},
{(void (*)(fnptr)) toc6, (fnptr) toi6},
{(void (*)(fnptr)) toc7, (fnptr) toi7},
{(void (*)(fnptr)) toc8, (fnptr) toi8},
{(void (*)(fnptr)) toc9, (fnptr) toi9},
{(void (*)(fnptr)) toc10, (fnptr) toi10},
{(void (*)(fnptr)) toc11, (fnptr) toi11},
{(void (*)(fnptr)) toc12, (fnptr) toi12},
{(void (*)(fnptr)) toc13, (fnptr) toi13},
{(void (*)(fnptr)) toc14, (fnptr) toi14},
{(void (*)(fnptr)) toc15, (fnptr) toi15},
{(void (*)(fnptr)) toc16, (fnptr) toi16},
{(void (*)(fnptr)) toc17, (fnptr) toi17},
{(void (*)(fnptr)) toc18, (fnptr) toi18},
{(void (*)(fnptr)) toc19, (fnptr) toi19},
{(void (*)(fnptr)) toc20, (fnptr) toi20},
{(void (*)(fnptr)) toc21, (fnptr) toi21},
{(void (*)(fnptr)) toc22, (fnptr) toi22},
{(void (*)(fnptr)) toc23, (fnptr) toi23},
{(void (*)(fnptr)) toc24, (fnptr) toi24},
{(void (*)(fnptr)) toc25, (fnptr) toi25},
{(void (*)(fnptr)) toc26, (fnptr) toi26},
{(void (*)(fnptr)) toc27, (fnptr) toi27},
{(void (*)(fnptr)) toc28, (fnptr) toi28},
{(void (*)(fnptr)) toc29, (fnptr) toi29},
{(void (*)(fnptr)) toc30, (fnptr) toi30},
{(void (*)(fnptr)) toc31, (fnptr) toi31},
{(void (*)(fnptr)) toc32, (fnptr) toi32},
{(void (*)(fnptr)) toc33, (fnptr) toi33},
{(void (*)(fnptr)) toc34, (fnptr) toi34},
{(void (*)(fnptr)) toc35, (fnptr) toi35},
{(void (*)(fnptr)) toc36, (fnptr) toi36},
{(void (*)(fnptr)) toc37, (fnptr) toi37},
{(void (*)(fnptr)) toc38, (fnptr) toi38},
{(void (*)(fnptr)) toc39, (fnptr) toi39},
{(void (*)(fnptr)) toc40, (fnptr) toi40},
{(void (*)(fnptr)) toc41, (fnptr) toi41},
{(void (*)(fnptr)) toc42, (fnptr) toi42},
{(void (*)(fnptr)) toc43, (fnptr) toi43},
{(void (*)(fnptr)) toc44, (fnptr) toi44},
{(void (*)(fnptr)) toc45, (fnptr) toi45},
{(void (*)(fnptr)) toc46, (fnptr) toi46},
{(void (*)(fnptr)) toc47, (fnptr) toi47},
{(void (*)(fnptr)) toc48, (fnptr) toi48},
{(void (*)(fnptr)) toc49, (fnptr) toi49},
{(void (*)(fnptr)) toc50, (fnptr) toi50},
{(void (*)(fnptr)) toc51, (fnptr) toi51},
{(void (*)(fnptr)) toc52, (fnptr) toi52},
{(void (*)(fnptr)) toc53, (fnptr) toi53},
{(void (*)(fnptr)) toc54, (fnptr) toi54},
{(void (*)(fnptr)) toc55, (fnptr) toi55},
{(void (*)(fnptr)) toc56, (fnptr) toi56},
{(void (*)(fnptr)) toc57, (fnptr) toi57},
{(void (*)(fnptr)) toc58, (fnptr) toi58},
{(void (*)(fnptr)) toc59, (fnptr) toi59},
{(void (*)(fnptr)) toc60, (fnptr) toi60},
{(void (*)(fnptr)) toc61, (fnptr) toi61},
{(void (*)(fnptr)) toc62, (fnptr) toi62},
{(void (*)(fnptr)) toc63, (fnptr) toi63},
{(void (*)(fnptr)) toc64, (fnptr) toi64},
{(void (*)(fnptr)) toc65, (fnptr) toi65},
{(void (*)(fnptr)) toc66, (fnptr) toi66},
{(void (*)(fnptr)) toc67, (fnptr) toi67},
{(void (*)(fnptr)) toc68, (fnptr) toi68},
{(void (*)(fnptr)) toc69, (fnptr) toi69},
{(void (*)(fnptr)) toc70, (fnptr) toi70},
{(void (*)(fnptr)) toc71, (fnptr) toi71},
{(void (*)(fnptr)) toc72, (fnptr) toi72},
{(void (*)(fnptr)) toc73, (fnptr) toi73},
{(void (*)(fnptr)) toc74, (fnptr) toi74},
{(void (*)(fnptr)) toc75, (fnptr) toi75},
{(void (*)(fnptr)) toc76, (fnptr) toi76},
{(void (*)(fnptr)) toc77, (fnptr) toi77},
{(void (*)(fnptr)) toc78, (fnptr) toi78},
{(void (*)(fnptr)) toc79, (fnptr) toi79},
{(void (*)(fnptr)) toc80, (fnptr) toi80},
{(void (*)(fnptr)) toc81, (fnptr) toi81},
{(void (*)(fnptr)) toc82, (fnptr) toi82},
{(void (*)(fnptr)) toc83, (fnptr) toi83},
{(void (*)(fnptr)) toc84, (fnptr) toi84},
{(void (*)(fnptr)) toc85, (fnptr) toi85},
{(void (*)(fnptr)) toc86, (fnptr) toi86},
{(void (*)(fnptr)) toc87, (fnptr) toi87},
{(void (*)(fnptr)) toc88, (fnptr) toi88},
{(void (*)(fnptr)) toc89, (fnptr) toi89},
{(void (*)(fnptr)) toc90, (fnptr) toi90},
{(void (*)(fnptr)) toc91, (fnptr) toi91},
{(void (*)(fnptr)) toc92, (fnptr) toi92},
{(void (*)(fnptr)) toc93, (fnptr) toi93},
{(void (*)(fnptr)) toc94, (fnptr) toi94},
{(void (*)(fnptr)) toc95, (fnptr) toi95},
{(void (*)(fnptr)) toc96, (fnptr) toi96},
{(void (*)(fnptr)) toc97, (fnptr) toi97},
{(void (*)(fnptr)) toc98, (fnptr) toi98},
{(void (*)(fnptr)) toc99, (fnptr) toi99},
{(void (*)(fnptr)) toc100, (fnptr) toi100},
{(void (*)(fnptr)) toc101, (fnptr) toi101},
{(void (*)(fnptr)) toc102, (fnptr) toi102},
{(void (*)(fnptr)) toc103, (fnptr) toi103},
{(void (*)(fnptr)) toc104, (fnptr) toi104},
{(void (*)(fnptr)) toc105, (fnptr) toi105},
{(void (*)(fnptr)) toc106, (fnptr) toi106},
{(void (*)(fnptr)) toc107, (fnptr) toi107},
{(void (*)(fnptr)) toc108, (fnptr) toi108},
{(void (*)(fnptr)) toc109, (fnptr) toi109},
{(void (*)(fnptr)) toc110, (fnptr) toi110},
{(void (*)(fnptr)) toc111, (fnptr) toi111},
{(void (*)(fnptr)) toc112, (fnptr) toi112},
{(void (*)(fnptr)) toc113, (fnptr) toi113},
{(void (*)(fnptr)) toc114, (fnptr) toi114},
{(void (*)(fnptr)) toc115, (fnptr) toi115},
{(void (*)(fnptr)) toc116, (fnptr) toi116},
{(void (*)(fnptr)) toc117, (fnptr) toi117},
{(void (*)(fnptr)) toc118, (fnptr) toi118},
{(void (*)(fnptr)) toc119, (fnptr) toi119},
{(void (*)(fnptr)) toc120, (fnptr) toi120},
{(void (*)(fnptr)) toc121, (fnptr) toi121},
{(void (*)(fnptr)) toc122, (fnptr) toi122},
{(void (*)(fnptr)) toc123, (fnptr) toi123},
{(void (*)(fnptr)) toc124, (fnptr) toi124},
{(void (*)(fnptr)) toc125, (fnptr) toi125},
{(void (*)(fnptr)) toc126, (fnptr) toi126},
{(void (*)(fnptr)) toc127, (fnptr) toi127},
{(void (*)(fnptr)) toc128, (fnptr) toi128},
{(void (*)(fnptr)) toc129, (fnptr) toi129},
{(void (*)(fnptr)) toc130, (fnptr) toi130},
{(void (*)(fnptr)) toc131, (fnptr) toi131},
{(void (*)(fnptr)) toc132, (fnptr) toi132},
{(void (*)(fnptr)) toc133, (fnptr) toi133},
{(void (*)(fnptr)) toc134, (fnptr) toi134},
{(void (*)(fnptr)) toc135, (fnptr) toi135},
{(void (*)(fnptr)) toc136, (fnptr) toi136},
{(void (*)(fnptr)) toc137, (fnptr) toi137},
{(void (*)(fnptr)) toc138, (fnptr) toi138},
{(void (*)(fnptr)) toc139, (fnptr) toi139},
{(void (*)(fnptr)) toc140, (fnptr) toi140},
{(void (*)(fnptr)) toc141, (fnptr) toi141},
{(void (*)(fnptr)) toc142, (fnptr) toi142},
{(void (*)(fnptr)) toc143, (fnptr) toi143},
{(void (*)(fnptr)) toc144, (fnptr) toi144},
{(void (*)(fnptr)) toc145, (fnptr) toi145},
{(void (*)(fnptr)) toc146, (fnptr) toi146},
{(void (*)(fnptr)) toc147, (fnptr) toi147},
{(void (*)(fnptr)) toc148, (fnptr) toi148},
{(void (*)(fnptr)) toc149, (fnptr) toi149},
{(void (*)(fnptr)) toc150, (fnptr) toi150},
{(void (*)(fnptr)) toc151, (fnptr) toi151},
{(void (*)(fnptr)) toc152, (fnptr) toi152},
{(void (*)(fnptr)) toc153, (fnptr) toi153},
{(void (*)(fnptr)) toc154, (fnptr) toi154},
{(void (*)(fnptr)) toc155, (fnptr) toi155},
{(void (*)(fnptr)) toc156, (fnptr) toi156},
{(void (*)(fnptr)) toc157, (fnptr) toi157},
{(void (*)(fnptr)) toc158, (fnptr) toi158},
{(void (*)(fnptr)) toc159, (fnptr) toi159},
{(void (*)(fnptr)) toc160, (fnptr) toi160},
{(void (*)(fnptr)) toc161, (fnptr) toi161},
{(void (*)(fnptr)) toc162, (fnptr) toi162},
{(void (*)(fnptr)) toc163, (fnptr) toi163},
{(void (*)(fnptr)) toc164, (fnptr) toi164},
{(void (*)(fnptr)) toc165, (fnptr) toi165},
{(void (*)(fnptr)) toc166, (fnptr) toi166},
{(void (*)(fnptr)) toc167, (fnptr) toi167},
{(void (*)(fnptr)) toc168, (fnptr) toi168},
{(void (*)(fnptr)) toc169, (fnptr) toi169},
{(void (*)(fnptr)) toc170, (fnptr) toi170},
{(void (*)(fnptr)) toc171, (fnptr) toi171},
{(void (*)(fnptr)) toc172, (fnptr) toi172},
{(void (*)(fnptr)) toc173, (fnptr) toi173},
{(void (*)(fnptr)) toc174, (fnptr) toi174},
{(void (*)(fnptr)) toc175, (fnptr) toi175},
{(void (*)(fnptr)) toc176, (fnptr) toi176},
{(void (*)(fnptr)) toc177, (fnptr) toi177},
{(void (*)(fnptr)) toc178, (fnptr) toi178},
{(void (*)(fnptr)) toc179, (fnptr) toi179},
{(void (*)(fnptr)) toc180, (fnptr) toi180},
{(void (*)(fnptr)) toc181, (fnptr) toi181},
{(void (*)(fnptr)) toc182, (fnptr) toi182},
{(void (*)(fnptr)) toc183, (fnptr) toi183},
{(void (*)(fnptr)) toc184, (fnptr) toi184},
{(void (*)(fnptr)) toc185, (fnptr) toi185},
{(void (*)(fnptr)) toc186, (fnptr) toi186},
{(void (*)(fnptr)) toc187, (fnptr) toi187},
{(void (*)(fnptr)) toc188, (fnptr) toi188},
{(void (*)(fnptr)) toc189, (fnptr) toi189},
{(void (*)(fnptr)) toc190, (fnptr) toi190},
{(void (*)(fnptr)) toc191, (fnptr) toi191},
{(void (*)(fnptr)) toc192, (fnptr) toi192},
{(void (*)(fnptr)) toc193, (fnptr) toi193},
{(void (*)(fnptr)) toc194, (fnptr) toi194},
{(void (*)(fnptr)) toc195, (fnptr) toi195},
{(void (*)(fnptr)) toc196, (fnptr) toi196},
{(void (*)(fnptr)) toc197, (fnptr) toi197},
{(void (*)(fnptr)) toc198, (fnptr) toi198},
{(void (*)(fnptr)) toc199, (fnptr) toi199},
{(void (*)(fnptr)) toc200, (fnptr) toi200},
{(void (*)(fnptr)) toc201, (fnptr) toi201},
{(void (*)(fnptr)) toc202, (fnptr) toi202},
{(void (*)(fnptr)) toc203, (fnptr) toi203},
{(void (*)(fnptr)) toc204, (fnptr) toi204},
{(void (*)(fnptr)) toc205, (fnptr) toi205},
{(void (*)(fnptr)) toc206, (fnptr) toi206},
{(void (*)(fnptr)) toc207, (fnptr) toi207},
{(void (*)(fnptr)) toc208, (fnptr) toi208},
{(void (*)(fnptr)) toc209, (fnptr) toi209},
{(void (*)(fnptr)) toc210, (fnptr) toi210},
{(void (*)(fnptr)) toc211, (fnptr) toi211},
{(void (*)(fnptr)) toc212, (fnptr) toi212},
{(void (*)(fnptr)) toc213, (fnptr) toi213},
{(void (*)(fnptr)) toc214, (fnptr) toi214},
{(void (*)(fnptr)) toc215, (fnptr) toi215},
{(void (*)(fnptr)) toc216, (fnptr) toi216},
{(void (*)(fnptr)) toc217, (fnptr) toi217},
{(void (*)(fnptr)) toc218, (fnptr) toi218},
{(void (*)(fnptr)) toc219, (fnptr) toi219},
{(void (*)(fnptr)) toc220, (fnptr) toi220},
{(void (*)(fnptr)) toc221, (fnptr) toi221},
{(void (*)(fnptr)) toc222, (fnptr) toi222},
{(void (*)(fnptr)) toc223, (fnptr) toi223},
{(void (*)(fnptr)) toc224, (fnptr) toi224},
{(void (*)(fnptr)) toc225, (fnptr) toi225},
{(void (*)(fnptr)) toc226, (fnptr) toi226},
{(void (*)(fnptr)) toc227, (fnptr) toi227},
{(void (*)(fnptr)) toc228, (fnptr) toi228},
{(void (*)(fnptr)) toc229, (fnptr) toi229},
{(void (*)(fnptr)) toc230, (fnptr) toi230},
{(void (*)(fnptr)) toc231, (fnptr) toi231},
{(void (*)(fnptr)) toc232, (fnptr) toi232},
{(void (*)(fnptr)) toc233, (fnptr) toi233},
{(void (*)(fnptr)) toc234, (fnptr) toi234},
{(void (*)(fnptr)) toc235, (fnptr) toi235},
{(void (*)(fnptr)) toc236, (fnptr) toi236},
{(void (*)(fnptr)) toc237, (fnptr) toi237},
{(void (*)(fnptr)) toc238, (fnptr) toi238},
{(void (*)(fnptr)) toc239, (fnptr) toi239},
{(void (*)(fnptr)) toc240, (fnptr) toi240},
{(void (*)(fnptr)) toc241, (fnptr) toi241},
{(void (*)(fnptr)) toc242, (fnptr) toi242},
{(void (*)(fnptr)) toc243, (fnptr) toi243},
{(void (*)(fnptr)) toc244, (fnptr) toi244},
{(void (*)(fnptr)) toc245, (fnptr) toi245},
{(void (*)(fnptr)) toc246, (fnptr) toi246},
{(void (*)(fnptr)) toc247, (fnptr) toi247},
{(void (*)(fnptr)) toc248, (fnptr) toi248},
{(void (*)(fnptr)) toc249, (fnptr) toi249},
{(void (*)(fnptr)) toc250, (fnptr) toi250},
{(void (*)(fnptr)) toc251, (fnptr) toi251},
{(void (*)(fnptr)) toc252, (fnptr) toi252},
{(void (*)(fnptr)) toc253, (fnptr) toi253},
{(void (*)(fnptr)) toc254, (fnptr) toi254},
{(void (*)(fnptr)) toc255, (fnptr) toi255},
{(void (*)(fnptr)) toc256, (fnptr) toi256},
{(void (*)(fnptr)) toc257, (fnptr) toi257},
{(void (*)(fnptr)) toc258, (fnptr) toi258},
{(void (*)(fnptr)) toc259, (fnptr) toi259},
{(void (*)(fnptr)) toc260, (fnptr) toi260},
{(void (*)(fnptr)) toc261, (fnptr) toi261},
{(void (*)(fnptr)) toc262, (fnptr) toi262},
{(void (*)(fnptr)) toc263, (fnptr) toi263},
{(void (*)(fnptr)) toc264, (fnptr) toi264},
{(void (*)(fnptr)) toc265, (fnptr) toi265},
{(void (*)(fnptr)) toc266, (fnptr) toi266},
{(void (*)(fnptr)) toc267, (fnptr) toi267},
{(void (*)(fnptr)) toc268, (fnptr) toi268},
{(void (*)(fnptr)) toc269, (fnptr) toi269},
{(void (*)(fnptr)) toc270, (fnptr) toi270},
{(void (*)(fnptr)) toc271, (fnptr) toi271},
{(void (*)(fnptr)) toc272, (fnptr) toi272},
{(void (*)(fnptr)) toc273, (fnptr) toi273},
{(void (*)(fnptr)) toc274, (fnptr) toi274},
{(void (*)(fnptr)) toc275, (fnptr) toi275},
{(void (*)(fnptr)) toc276, (fnptr) toi276},
{(void (*)(fnptr)) toc277, (fnptr) toi277},
{(void (*)(fnptr)) toc278, (fnptr) toi278},
{(void (*)(fnptr)) toc279, (fnptr) toi279},
{(void (*)(fnptr)) toc280, (fnptr) toi280},
{(void (*)(fnptr)) toc281, (fnptr) toi281},
{(void (*)(fnptr)) toc282, (fnptr) toi282},
{(void (*)(fnptr)) toc283, (fnptr) toi283},
{(void (*)(fnptr)) toc284, (fnptr) toi284},
{(void (*)(fnptr)) toc285, (fnptr) toi285},
{(void (*)(fnptr)) toc286, (fnptr) toi286},
{(void (*)(fnptr)) toc287, (fnptr) toi287},
{(void (*)(fnptr)) toc288, (fnptr) toi288},
{(void (*)(fnptr)) toc289, (fnptr) toi289},
{(void (*)(fnptr)) toc290, (fnptr) toi290},
{(void (*)(fnptr)) toc291, (fnptr) toi291},
{(void (*)(fnptr)) toc292, (fnptr) toi292},
{(void (*)(fnptr)) toc293, (fnptr) toi293},
{(void (*)(fnptr)) toc294, (fnptr) toi294},
{(void (*)(fnptr)) toc295, (fnptr) toi295},
{(void (*)(fnptr)) toc296, (fnptr) toi296},
{(void (*)(fnptr)) toc297, (fnptr) toi297},
{(void (*)(fnptr)) toc298, (fnptr) toi298},
{(void (*)(fnptr)) toc299, (fnptr) toi299},
{(void (*)(fnptr)) toc300, (fnptr) toi300},
{(void (*)(fnptr)) toc301, (fnptr) toi301},
{(void (*)(fnptr)) toc302, (fnptr) toi302},
{(void (*)(fnptr)) toc303, (fnptr) toi303},
{(void (*)(fnptr)) toc304, (fnptr) toi304},
{(void (*)(fnptr)) toc305, (fnptr) toi305},
{(void (*)(fnptr)) toc306, (fnptr) toi306},
{(void (*)(fnptr)) toc307, (fnptr) toi307},
{(void (*)(fnptr)) toc308, (fnptr) toi308},
{(void (*)(fnptr)) toc309, (fnptr) toi309},
{(void (*)(fnptr)) toc310, (fnptr) toi310},
{(void (*)(fnptr)) toc311, (fnptr) toi311},
{(void (*)(fnptr)) toc312, (fnptr) toi312},
{(void (*)(fnptr)) toc313, (fnptr) toi313},
{(void (*)(fnptr)) toc314, (fnptr) toi314},
{(void (*)(fnptr)) toc315, (fnptr) toi315},
{(void (*)(fnptr)) toc316, (fnptr) toi316},
{(void (*)(fnptr)) toc317, (fnptr) toi317},
{(void (*)(fnptr)) toc318, (fnptr) toi318},
{(void (*)(fnptr)) toc319, (fnptr) toi319},
{(void (*)(fnptr)) toc320, (fnptr) toi320},
{(void (*)(fnptr)) toc321, (fnptr) toi321},
{(void (*)(fnptr)) toc322, (fnptr) toi322},
{(void (*)(fnptr)) toc323, (fnptr) toi323},
{(void (*)(fnptr)) toc324, (fnptr) toi324},
{(void (*)(fnptr)) toc325, (fnptr) toi325},
{(void (*)(fnptr)) toc326, (fnptr) toi326},
{(void (*)(fnptr)) toc327, (fnptr) toi327},
{(void (*)(fnptr)) toc328, (fnptr) toi328},
{(void (*)(fnptr)) toc329, (fnptr) toi329},
{(void (*)(fnptr)) toc330, (fnptr) toi330},
{(void (*)(fnptr)) toc331, (fnptr) toi331},
{(void (*)(fnptr)) toc332, (fnptr) toi332},
{(void (*)(fnptr)) toc333, (fnptr) toi333},
{(void (*)(fnptr)) toc334, (fnptr) toi334},
{(void (*)(fnptr)) toc335, (fnptr) toi335},
{(void (*)(fnptr)) toc336, (fnptr) toi336},
{(void (*)(fnptr)) toc337, (fnptr) toi337},
{(void (*)(fnptr)) toc338, (fnptr) toi338},
{(void (*)(fnptr)) toc339, (fnptr) toi339},
{(void (*)(fnptr)) toc340, (fnptr) toi340},
{(void (*)(fnptr)) toc341, (fnptr) toi341},
{(void (*)(fnptr)) toc342, (fnptr) toi342},
{(void (*)(fnptr)) toc343, (fnptr) toi343},
{(void (*)(fnptr)) toc344, (fnptr) toi344},
{(void (*)(fnptr)) toc345, (fnptr) toi345},
{(void (*)(fnptr)) toc346, (fnptr) toi346},
{(void (*)(fnptr)) toc347, (fnptr) toi347},
{(void (*)(fnptr)) toc348, (fnptr) toi348},
{(void (*)(fnptr)) toc349, (fnptr) toi349},
{(void (*)(fnptr)) toc350, (fnptr) toi350},
{(void (*)(fnptr)) toc351, (fnptr) toi351},
{(void (*)(fnptr)) toc352, (fnptr) toi352},
{(void (*)(fnptr)) toc353, (fnptr) toi353},
{(void (*)(fnptr)) toc354, (fnptr) toi354},
{(void (*)(fnptr)) toc355, (fnptr) toi355},
{(void (*)(fnptr)) toc356, (fnptr) toi356},
{(void (*)(fnptr)) toc357, (fnptr) toi357},
{(void (*)(fnptr)) toc358, (fnptr) toi358},
{(void (*)(fnptr)) toc359, (fnptr) toi359},
{(void (*)(fnptr)) toc360, (fnptr) toi360},
{(void (*)(fnptr)) toc361, (fnptr) toi361},
{(void (*)(fnptr)) toc362, (fnptr) toi362},
{(void (*)(fnptr)) toc363, (fnptr) toi363},
{(void (*)(fnptr)) toc364, (fnptr) toi364},
{(void (*)(fnptr)) toc365, (fnptr) toi365},
{(void (*)(fnptr)) toc366, (fnptr) toi366},
{(void (*)(fnptr)) toc367, (fnptr) toi367},
{(void (*)(fnptr)) toc368, (fnptr) toi368},
{(void (*)(fnptr)) toc369, (fnptr) toi369},
{(void (*)(fnptr)) toc370, (fnptr) toi370},
{(void (*)(fnptr)) toc371, (fnptr) toi371},
{(void (*)(fnptr)) toc372, (fnptr) toi372},
{(void (*)(fnptr)) toc373, (fnptr) toi373},
{(void (*)(fnptr)) toc374, (fnptr) toi374},
{(void (*)(fnptr)) toc375, (fnptr) toi375},
{(void (*)(fnptr)) toc376, (fnptr) toi376},
{(void (*)(fnptr)) toc377, (fnptr) toi377},
{(void (*)(fnptr)) toc378, (fnptr) toi378},
{(void (*)(fnptr)) toc379, (fnptr) toi379},
{(void (*)(fnptr)) toc380, (fnptr) toi380},
{(void (*)(fnptr)) toc381, (fnptr) toi381},
{(void (*)(fnptr)) toc382, (fnptr) toi382},
{(void (*)(fnptr)) toc383, (fnptr) toi383},
{(void (*)(fnptr)) toc384, (fnptr) toi384},
{(void (*)(fnptr)) toc385, (fnptr) toi385},
{(void (*)(fnptr)) toc386, (fnptr) toi386},
{(void (*)(fnptr)) toc387, (fnptr) toi387},
{(void (*)(fnptr)) toc388, (fnptr) toi388},
{(void (*)(fnptr)) toc389, (fnptr) toi389},
{(void (*)(fnptr)) toc390, (fnptr) toi390},
{(void (*)(fnptr)) toc391, (fnptr) toi391},
{(void (*)(fnptr)) toc392, (fnptr) toi392},
{(void (*)(fnptr)) toc393, (fnptr) toi393},
{(void (*)(fnptr)) toc394, (fnptr) toi394},
{(void (*)(fnptr)) toc395, (fnptr) toi395},
{(void (*)(fnptr)) toc396, (fnptr) toi396},
{(void (*)(fnptr)) toc397, (fnptr) toi397},
{(void (*)(fnptr)) toc398, (fnptr) toi398},
{(void (*)(fnptr)) toc399, (fnptr) toi399},
{(void (*)(fnptr)) toc400, (fnptr) toi400},
{(void (*)(fnptr)) toc401, (fnptr) toi401},
{(void (*)(fnptr)) toc402, (fnptr) toi402},
{(void (*)(fnptr)) toc403, (fnptr) toi403},
{(void (*)(fnptr)) toc404, (fnptr) toi404},
{(void (*)(fnptr)) toc405, (fnptr) toi405},
{(void (*)(fnptr)) toc406, (fnptr) toi406},
{(void (*)(fnptr)) toc407, (fnptr) toi407},
{(void (*)(fnptr)) toc408, (fnptr) toi408},
{(void (*)(fnptr)) toc409, (fnptr) toi409},
{(void (*)(fnptr)) toc410, (fnptr) toi410},
{(void (*)(fnptr)) toc411, (fnptr) toi411},
{(void (*)(fnptr)) toc412, (fnptr) toi412},
{(void (*)(fnptr)) toc413, (fnptr) toi413},
{(void (*)(fnptr)) toc414, (fnptr) toi414},
{(void (*)(fnptr)) toc415, (fnptr) toi415},
{(void (*)(fnptr)) toc416, (fnptr) toi416},
{(void (*)(fnptr)) toc417, (fnptr) toi417},
{(void (*)(fnptr)) toc418, (fnptr) toi418},
{(void (*)(fnptr)) toc419, (fnptr) toi419},
{(void (*)(fnptr)) toc420, (fnptr) toi420},
{(void (*)(fnptr)) toc421, (fnptr) toi421},
{(void (*)(fnptr)) toc422, (fnptr) toi422},
{(void (*)(fnptr)) toc423, (fnptr) toi423},
{(void (*)(fnptr)) toc424, (fnptr) toi424},
{(void (*)(fnptr)) toc425, (fnptr) toi425},
{(void (*)(fnptr)) toc426, (fnptr) toi426},
{(void (*)(fnptr)) toc427, (fnptr) toi427},
{(void (*)(fnptr)) toc428, (fnptr) toi428},
{(void (*)(fnptr)) toc429, (fnptr) toi429},
{(void (*)(fnptr)) toc430, (fnptr) toi430},
{(void (*)(fnptr)) toc431, (fnptr) toi431},
{(void (*)(fnptr)) toc432, (fnptr) toi432},
{(void (*)(fnptr)) toc433, (fnptr) toi433},
{(void (*)(fnptr)) toc434, (fnptr) toi434},
{(void (*)(fnptr)) toc435, (fnptr) toi435},
{(void (*)(fnptr)) toc436, (fnptr) toi436},
{(void (*)(fnptr)) toc437, (fnptr) toi437},
{(void (*)(fnptr)) toc438, (fnptr) toi438},
{(void (*)(fnptr)) toc439, (fnptr) toi439},
{(void (*)(fnptr)) toc440, (fnptr) toi440},
{(void (*)(fnptr)) toc441, (fnptr) toi441},
{(void (*)(fnptr)) toc442, (fnptr) toi442},
{(void (*)(fnptr)) toc443, (fnptr) toi443},
{(void (*)(fnptr)) toc444, (fnptr) toi444},
{(void (*)(fnptr)) toc445, (fnptr) toi445},
{(void (*)(fnptr)) toc446, (fnptr) toi446},
{(void (*)(fnptr)) toc447, (fnptr) toi447},
{(void (*)(fnptr)) toc448, (fnptr) toi448},
{(void (*)(fnptr)) toc449, (fnptr) toi449},
{(void (*)(fnptr)) toc450, (fnptr) toi450},
{(void (*)(fnptr)) toc451, (fnptr) toi451},
{(void (*)(fnptr)) toc452, (fnptr) toi452},
{(void (*)(fnptr)) toc453, (fnptr) toi453},
{(void (*)(fnptr)) toc454, (fnptr) toi454},
{(void (*)(fnptr)) toc455, (fnptr) toi455},
{(void (*)(fnptr)) toc456, (fnptr) toi456},
{(void (*)(fnptr)) toc457, (fnptr) toi457},
{(void (*)(fnptr)) toc458, (fnptr) toi458},
{(void (*)(fnptr)) toc459, (fnptr) toi459},
{(void (*)(fnptr)) toc460, (fnptr) toi460},
{(void (*)(fnptr)) toc461, (fnptr) toi461},
{(void (*)(fnptr)) toc462, (fnptr) toi462},
{(void (*)(fnptr)) toc463, (fnptr) toi463},
{(void (*)(fnptr)) toc464, (fnptr) toi464},
{(void (*)(fnptr)) toc465, (fnptr) toi465},
{(void (*)(fnptr)) toc466, (fnptr) toi466},
{(void (*)(fnptr)) toc467, (fnptr) toi467},
{(void (*)(fnptr)) toc468, (fnptr) toi468},
{(void (*)(fnptr)) toc469, (fnptr) toi469},
{(void (*)(fnptr)) toc470, (fnptr) toi470},
{(void (*)(fnptr)) toc471, (fnptr) toi471},
{(void (*)(fnptr)) toc472, (fnptr) toi472},
{(void (*)(fnptr)) toc473, (fnptr) toi473},
{(void (*)(fnptr)) toc474, (fnptr) toi474},
{(void (*)(fnptr)) toc475, (fnptr) toi475},
{(void (*)(fnptr)) toc476, (fnptr) toi476},
{(void (*)(fnptr)) toc477, (fnptr) toi477},
{(void (*)(fnptr)) toc478, (fnptr) toi478},
{(void (*)(fnptr)) toc479, (fnptr) toi479},
{(void (*)(fnptr)) toc480, (fnptr) toi480},
{(void (*)(fnptr)) toc481, (fnptr) toi481},
{(void (*)(fnptr)) toc482, (fnptr) toi482},
{(void (*)(fnptr)) toc483, (fnptr) toi483},
{(void (*)(fnptr)) toc484, (fnptr) toi484},
{(void (*)(fnptr)) toc485, (fnptr) toi485},
{(void (*)(fnptr)) toc486, (fnptr) toi486},
{(void (*)(fnptr)) toc487, (fnptr) toi487},
{(void (*)(fnptr)) toc488, (fnptr) toi488},
{(void (*)(fnptr)) toc489, (fnptr) toi489},
{(void (*)(fnptr)) toc490, (fnptr) toi490},
{(void (*)(fnptr)) toc491, (fnptr) toi491},
{(void (*)(fnptr)) toc492, (fnptr) toi492},
{(void (*)(fnptr)) toc493, (fnptr) toi493},
{(void (*)(fnptr)) toc494, (fnptr) toi494},
{(void (*)(fnptr)) toc495, (fnptr) toi495},
{(void (*)(fnptr)) toc496, (fnptr) toi496},
{(void (*)(fnptr)) toc497, (fnptr) toi497},
{(void (*)(fnptr)) toc498, (fnptr) toi498},
{(void (*)(fnptr)) toc499, (fnptr) toi499},
{(void (*)(fnptr)) toc500, (fnptr) toi500},
{(void (*)(fnptr)) toc501, (fnptr) toi501},
{(void (*)(fnptr)) toc502, (fnptr) toi502},
{(void (*)(fnptr)) toc503, (fnptr) toi503},
{(void (*)(fnptr)) toc504, (fnptr) toi504},
{(void (*)(fnptr)) toc505, (fnptr) toi505},
{(void (*)(fnptr)) toc506, (fnptr) toi506},
{(void (*)(fnptr)) toc507, (fnptr) toi507},
{(void (*)(fnptr)) toc508, (fnptr) toi508},
{(void (*)(fnptr)) toc509, (fnptr) toi509},
{(void (*)(fnptr)) toc510, (fnptr) toi510},
{(void (*)(fnptr)) toc511, (fnptr) toi511},
{(void (*)(fnptr)) toc512, (fnptr) toi512},
{(void (*)(fnptr)) toc513, (fnptr) toi513},
{(void (*)(fnptr)) toc514, (fnptr) toi514},
{(void (*)(fnptr)) toc515, (fnptr) toi515},
{(void (*)(fnptr)) toc516, (fnptr) toi516},
{(void (*)(fnptr)) toc517, (fnptr) toi517},
{(void (*)(fnptr)) toc518, (fnptr) toi518},
{(void (*)(fnptr)) toc519, (fnptr) toi519},
{(void (*)(fnptr)) toc520, (fnptr) toi520},
{(void (*)(fnptr)) toc521, (fnptr) toi521},
{(void (*)(fnptr)) toc522, (fnptr) toi522},
{(void (*)(fnptr)) toc523, (fnptr) toi523},
{(void (*)(fnptr)) toc524, (fnptr) toi524},
{(void (*)(fnptr)) toc525, (fnptr) toi525},
{(void (*)(fnptr)) toc526, (fnptr) toi526},
{(void (*)(fnptr)) toc527, (fnptr) toi527},
{(void (*)(fnptr)) toc528, (fnptr) toi528},
{(void (*)(fnptr)) toc529, (fnptr) toi529},
{(void (*)(fnptr)) toc530, (fnptr) toi530},
{(void (*)(fnptr)) toc531, (fnptr) toi531},
{(void (*)(fnptr)) toc532, (fnptr) toi532},
{(void (*)(fnptr)) toc533, (fnptr) toi533},
{(void (*)(fnptr)) toc534, (fnptr) toi534},
{(void (*)(fnptr)) toc535, (fnptr) toi535},
{(void (*)(fnptr)) toc536, (fnptr) toi536},
{(void (*)(fnptr)) toc537, (fnptr) toi537},
{(void (*)(fnptr)) toc538, (fnptr) toi538},
{(void (*)(fnptr)) toc539, (fnptr) toi539},
{(void (*)(fnptr)) toc540, (fnptr) toi540},
{(void (*)(fnptr)) toc541, (fnptr) toi541},
{(void (*)(fnptr)) toc542, (fnptr) toi542},
{(void (*)(fnptr)) toc543, (fnptr) toi543},
{(void (*)(fnptr)) toc544, (fnptr) toi544},
{(void (*)(fnptr)) toc545, (fnptr) toi545},
{(void (*)(fnptr)) toc546, (fnptr) toi546},
{(void (*)(fnptr)) toc547, (fnptr) toi547},
{(void (*)(fnptr)) toc548, (fnptr) toi548},
{(void (*)(fnptr)) toc549, (fnptr) toi549},
{(void (*)(fnptr)) toc550, (fnptr) toi550},
{(void (*)(fnptr)) toc551, (fnptr) toi551},
{(void (*)(fnptr)) toc552, (fnptr) toi552},
{(void (*)(fnptr)) toc553, (fnptr) toi553},
{(void (*)(fnptr)) toc554, (fnptr) toi554},
{(void (*)(fnptr)) toc555, (fnptr) toi555},
{(void (*)(fnptr)) toc556, (fnptr) toi556},
{(void (*)(fnptr)) toc557, (fnptr) toi557},
{(void (*)(fnptr)) toc558, (fnptr) toi558},
{(void (*)(fnptr)) toc559, (fnptr) toi559},
{(void (*)(fnptr)) toc560, (fnptr) toi560},
{(void (*)(fnptr)) toc561, (fnptr) toi561},
{(void (*)(fnptr)) toc562, (fnptr) toi562},
{(void (*)(fnptr)) toc563, (fnptr) toi563},
{(void (*)(fnptr)) toc564, (fnptr) toi564},
{(void (*)(fnptr)) toc565, (fnptr) toi565},
{(void (*)(fnptr)) toc566, (fnptr) toi566},
{(void (*)(fnptr)) toc567, (fnptr) toi567},
{(void (*)(fnptr)) toc568, (fnptr) toi568},
{(void (*)(fnptr)) toc569, (fnptr) toi569},
{(void (*)(fnptr)) toc570, (fnptr) toi570},
{(void (*)(fnptr)) toc571, (fnptr) toi571},
{(void (*)(fnptr)) toc572, (fnptr) toi572},
{(void (*)(fnptr)) toc573, (fnptr) toi573},
{(void (*)(fnptr)) toc574, (fnptr) toi574},
{(void (*)(fnptr)) toc575, (fnptr) toi575},
{(void (*)(fnptr)) toc576, (fnptr) toi576},
{(void (*)(fnptr)) toc577, (fnptr) toi577},
{(void (*)(fnptr)) toc578, (fnptr) toi578},
{(void (*)(fnptr)) toc579, (fnptr) toi579},
{(void (*)(fnptr)) toc580, (fnptr) toi580},
{(void (*)(fnptr)) toc581, (fnptr) toi581},
{(void (*)(fnptr)) toc582, (fnptr) toi582},
{(void (*)(fnptr)) toc583, (fnptr) toi583},
{(void (*)(fnptr)) toc584, (fnptr) toi584},
{(void (*)(fnptr)) toc585, (fnptr) toi585},
{(void (*)(fnptr)) toc586, (fnptr) toi586},
{(void (*)(fnptr)) toc587, (fnptr) toi587},
{(void (*)(fnptr)) toc588, (fnptr) toi588},
{(void (*)(fnptr)) toc589, (fnptr) toi589},
{(void (*)(fnptr)) toc590, (fnptr) toi590},
{(void (*)(fnptr)) toc591, (fnptr) toi591},
{(void (*)(fnptr)) toc592, (fnptr) toi592},
{(void (*)(fnptr)) toc593, (fnptr) toi593},
{(void (*)(fnptr)) toc594, (fnptr) toi594},
{(void (*)(fnptr)) toc595, (fnptr) toi595},
{(void (*)(fnptr)) toc596, (fnptr) toi596},
{(void (*)(fnptr)) toc597, (fnptr) toi597},
{(void (*)(fnptr)) toc598, (fnptr) toi598},
{(void (*)(fnptr)) toc599, (fnptr) toi599},
{(void (*)(fnptr)) toc600, (fnptr) toi600},
{(void (*)(fnptr)) toc601, (fnptr) toi601},
{(void (*)(fnptr)) toc602, (fnptr) toi602},
{(void (*)(fnptr)) toc603, (fnptr) toi603},
{(void (*)(fnptr)) toc604, (fnptr) toi604},
{(void (*)(fnptr)) toc605, (fnptr) toi605},
{(void (*)(fnptr)) toc606, (fnptr) toi606},
{(void (*)(fnptr)) toc607, (fnptr) toi607},
{(void (*)(fnptr)) toc608, (fnptr) toi608},
{(void (*)(fnptr)) toc609, (fnptr) toi609},
{(void (*)(fnptr)) toc610, (fnptr) toi610},
{(void (*)(fnptr)) toc611, (fnptr) toi611},
{(void (*)(fnptr)) toc612, (fnptr) toi612},
{(void (*)(fnptr)) toc613, (fnptr) toi613},
{(void (*)(fnptr)) toc614, (fnptr) toi614},
{(void (*)(fnptr)) toc615, (fnptr) toi615},
{(void (*)(fnptr)) toc616, (fnptr) toi616},
{(void (*)(fnptr)) toc617, (fnptr) toi617},
{(void (*)(fnptr)) toc618, (fnptr) toi618},
{(void (*)(fnptr)) toc619, (fnptr) toi619},
{(void (*)(fnptr)) toc620, (fnptr) toi620},
{(void (*)(fnptr)) toc621, (fnptr) toi621},
{(void (*)(fnptr)) toc622, (fnptr) toi622},
{(void (*)(fnptr)) toc623, (fnptr) toi623},
{(void (*)(fnptr)) toc624, (fnptr) toi624},
{(void (*)(fnptr)) toc625, (fnptr) toi625},
{(void (*)(fnptr)) toc626, (fnptr) toi626},
{(void (*)(fnptr)) toc627, (fnptr) toi627},
{(void (*)(fnptr)) toc628, (fnptr) toi628},
{(void (*)(fnptr)) toc629, (fnptr) toi629},
{(void (*)(fnptr)) toc630, (fnptr) toi630},
{(void (*)(fnptr)) toc631, (fnptr) toi631},
{(void (*)(fnptr)) toc632, (fnptr) toi632},
{(void (*)(fnptr)) toc633, (fnptr) toi633},
{(void (*)(fnptr)) toc634, (fnptr) toi634},
{(void (*)(fnptr)) toc635, (fnptr) toi635},
{(void (*)(fnptr)) toc636, (fnptr) toi636},
{(void (*)(fnptr)) toc637, (fnptr) toi637},
{(void (*)(fnptr)) toc638, (fnptr) toi638},
{(void (*)(fnptr)) toc639, (fnptr) toi639},
{(void (*)(fnptr)) toc640, (fnptr) toi640},
{(void (*)(fnptr)) toc641, (fnptr) toi641},
{(void (*)(fnptr)) toc642, (fnptr) toi642},
{(void (*)(fnptr)) toc643, (fnptr) toi643},
{(void (*)(fnptr)) toc644, (fnptr) toi644},
{(void (*)(fnptr)) toc645, (fnptr) toi645},
{(void (*)(fnptr)) toc646, (fnptr) toi646},
{(void (*)(fnptr)) toc647, (fnptr) toi647},
{(void (*)(fnptr)) toc648, (fnptr) toi648},
{(void (*)(fnptr)) toc649, (fnptr) toi649},
{(void (*)(fnptr)) toc650, (fnptr) toi650},
{(void (*)(fnptr)) toc651, (fnptr) toi651},
{(void (*)(fnptr)) toc652, (fnptr) toi652},
{(void (*)(fnptr)) toc653, (fnptr) toi653},
{(void (*)(fnptr)) toc654, (fnptr) toi654},
{(void (*)(fnptr)) toc655, (fnptr) toi655},
{(void (*)(fnptr)) toc656, (fnptr) toi656},
{(void (*)(fnptr)) toc657, (fnptr) toi657},
{(void (*)(fnptr)) toc658, (fnptr) toi658},
{(void (*)(fnptr)) toc659, (fnptr) toi659},
{(void (*)(fnptr)) toc660, (fnptr) toi660},
{(void (*)(fnptr)) toc661, (fnptr) toi661},
{(void (*)(fnptr)) toc662, (fnptr) toi662},
{(void (*)(fnptr)) toc663, (fnptr) toi663},
{(void (*)(fnptr)) toc664, (fnptr) toi664},
{(void (*)(fnptr)) toc665, (fnptr) toi665},
{(void (*)(fnptr)) toc666, (fnptr) toi666},
{(void (*)(fnptr)) toc667, (fnptr) toi667},
{(void (*)(fnptr)) toc668, (fnptr) toi668},
{(void (*)(fnptr)) toc669, (fnptr) toi669},
{(void (*)(fnptr)) toc670, (fnptr) toi670},
{(void (*)(fnptr)) toc671, (fnptr) toi671},
{(void (*)(fnptr)) toc672, (fnptr) toi672},
{(void (*)(fnptr)) toc673, (fnptr) toi673},
{(void (*)(fnptr)) toc674, (fnptr) toi674},
{(void (*)(fnptr)) toc675, (fnptr) toi675},
{(void (*)(fnptr)) toc676, (fnptr) toi676},
{(void (*)(fnptr)) toc677, (fnptr) toi677},
{(void (*)(fnptr)) toc678, (fnptr) toi678},
{(void (*)(fnptr)) toc679, (fnptr) toi679},
{(void (*)(fnptr)) toc680, (fnptr) toi680},
{(void (*)(fnptr)) toc681, (fnptr) toi681},
{(void (*)(fnptr)) toc682, (fnptr) toi682},
{(void (*)(fnptr)) toc683, (fnptr) toi683},
{(void (*)(fnptr)) toc684, (fnptr) toi684},
{(void (*)(fnptr)) toc685, (fnptr) toi685},
{(void (*)(fnptr)) toc686, (fnptr) toi686},
{(void (*)(fnptr)) toc687, (fnptr) toi687},
{(void (*)(fnptr)) toc688, (fnptr) toi688},
{(void (*)(fnptr)) toc689, (fnptr) toi689},
{(void (*)(fnptr)) toc690, (fnptr) toi690},
{(void (*)(fnptr)) toc691, (fnptr) toi691},
{(void (*)(fnptr)) toc692, (fnptr) toi692},
{(void (*)(fnptr)) toc693, (fnptr) toi693},
{(void (*)(fnptr)) toc694, (fnptr) toi694},
{(void (*)(fnptr)) toc695, (fnptr) toi695},
{(void (*)(fnptr)) toc696, (fnptr) toi696},
{(void (*)(fnptr)) toc697, (fnptr) toi697},
{(void (*)(fnptr)) toc698, (fnptr) toi698},
{(void (*)(fnptr)) toc699, (fnptr) toi699},
{(void (*)(fnptr)) toc700, (fnptr) toi700},
{(void (*)(fnptr)) toc701, (fnptr) toi701},
{(void (*)(fnptr)) toc702, (fnptr) toi702},
{(void (*)(fnptr)) toc703, (fnptr) toi703},
{(void (*)(fnptr)) toc704, (fnptr) toi704},
{(void (*)(fnptr)) toc705, (fnptr) toi705},
{(void (*)(fnptr)) toc706, (fnptr) toi706},
{(void (*)(fnptr)) toc707, (fnptr) toi707},
{(void (*)(fnptr)) toc708, (fnptr) toi708},
{(void (*)(fnptr)) toc709, (fnptr) toi709},
{(void (*)(fnptr)) toc710, (fnptr) toi710},
{(void (*)(fnptr)) toc711, (fnptr) toi711},
{(void (*)(fnptr)) toc712, (fnptr) toi712},
{(void (*)(fnptr)) toc713, (fnptr) toi713},
{(void (*)(fnptr)) toc714, (fnptr) toi714},
{(void (*)(fnptr)) toc715, (fnptr) toi715},
{(void (*)(fnptr)) toc716, (fnptr) toi716},
{(void (*)(fnptr)) toc717, (fnptr) toi717},
{(void (*)(fnptr)) toc718, (fnptr) toi718},
{(void (*)(fnptr)) toc719, (fnptr) toi719},
{(void (*)(fnptr)) toc720, (fnptr) toi720},
{(void (*)(fnptr)) toc721, (fnptr) toi721},
{(void (*)(fnptr)) toc722, (fnptr) toi722},
{(void (*)(fnptr)) toc723, (fnptr) toi723},
{(void (*)(fnptr)) toc724, (fnptr) toi724},
{(void (*)(fnptr)) toc725, (fnptr) toi725},
{(void (*)(fnptr)) toc726, (fnptr) toi726},
{(void (*)(fnptr)) toc727, (fnptr) toi727},
{(void (*)(fnptr)) toc728, (fnptr) toi728},
{(void (*)(fnptr)) toc729, (fnptr) toi729},
{(void (*)(fnptr)) toc730, (fnptr) toi730},
{(void (*)(fnptr)) toc731, (fnptr) toi731},
{(void (*)(fnptr)) toc732, (fnptr) toi732},
{(void (*)(fnptr)) toc733, (fnptr) toi733},
{(void (*)(fnptr)) toc734, (fnptr) toi734},
{(void (*)(fnptr)) toc735, (fnptr) toi735},
{(void (*)(fnptr)) toc736, (fnptr) toi736},
{(void (*)(fnptr)) toc737, (fnptr) toi737},
{(void (*)(fnptr)) toc738, (fnptr) toi738},
{(void (*)(fnptr)) toc739, (fnptr) toi739},
{(void (*)(fnptr)) toc740, (fnptr) toi740},
{(void (*)(fnptr)) toc741, (fnptr) toi741},
{(void (*)(fnptr)) toc742, (fnptr) toi742},
{(void (*)(fnptr)) toc743, (fnptr) toi743},
{(void (*)(fnptr)) toc744, (fnptr) toi744},
{(void (*)(fnptr)) toc745, (fnptr) toi745},
{(void (*)(fnptr)) toc746, (fnptr) toi746},
{(void (*)(fnptr)) toc747, (fnptr) toi747},
{(void (*)(fnptr)) toc748, (fnptr) toi748},
{(void (*)(fnptr)) toc749, (fnptr) toi749},
{(void (*)(fnptr)) toc750, (fnptr) toi750},
{(void (*)(fnptr)) toc751, (fnptr) toi751},
{(void (*)(fnptr)) toc752, (fnptr) toi752},
{(void (*)(fnptr)) toc753, (fnptr) toi753},
{(void (*)(fnptr)) toc754, (fnptr) toi754},
{(void (*)(fnptr)) toc755, (fnptr) toi755},
{(void (*)(fnptr)) toc756, (fnptr) toi756},
{(void (*)(fnptr)) toc757, (fnptr) toi757},
{(void (*)(fnptr)) toc758, (fnptr) toi758},
{(void (*)(fnptr)) toc759, (fnptr) toi759},
{(void (*)(fnptr)) toc760, (fnptr) toi760},
{(void (*)(fnptr)) toc761, (fnptr) toi761},
{(void (*)(fnptr)) toc762, (fnptr) toi762},
{(void (*)(fnptr)) toc763, (fnptr) toi763},
{(void (*)(fnptr)) toc764, (fnptr) toi764},
{(void (*)(fnptr)) toc765, (fnptr) toi765},
{(void (*)(fnptr)) toc766, (fnptr) toi766},
{(void (*)(fnptr)) toc767, (fnptr) toi767},
{(void (*)(fnptr)) toc768, (fnptr) toi768},
{(void (*)(fnptr)) toc769, (fnptr) toi769},
{(void (*)(fnptr)) toc770, (fnptr) toi770},
{(void (*)(fnptr)) toc771, (fnptr) toi771},
{(void (*)(fnptr)) toc772, (fnptr) toi772},
{(void (*)(fnptr)) toc773, (fnptr) toi773},
{(void (*)(fnptr)) toc774, (fnptr) toi774},
{(void (*)(fnptr)) toc775, (fnptr) toi775},
};

#ifdef __cplusplus
}
#endif
