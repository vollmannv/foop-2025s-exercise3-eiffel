/*
 * Class EV_GDI_BRUSH
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1394 [] = {0xFF01,236,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1394 [] = {0xFF01,256,1393,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1394 [] = {0xFF01,1393,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1394 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1394 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1394 [] = {0xFF01,1393,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1394 [] = {0xFF01,1393,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1394 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1394 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1394 [] = {0xFF01,236,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1394 [] = {0xFF01,236,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1394 [] = {0xFF01,17,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1394 [] = {0xFF01,1393,0xFFFF};


static const struct desc_info desc_1394[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1394), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1394), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019F /*207*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019F /*207*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019F /*207*/), 22465, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019F /*207*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019F /*207*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019F /*207*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019F /*207*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019F /*207*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1394), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1394), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1394), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1394), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1394), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1394), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1394), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1394), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1394), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1394), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0AE3 /*1393*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01CF /*231*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1394), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 22459, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019F /*207*/), 10037, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 22449, 16},
	{EIF_NON_GENERIC(0x01BD /*222*/), 22450, 20},
	{EIF_NON_GENERIC(0x01BD /*222*/), 22451, 24},
	{EIF_NON_GENERIC(0x0A05 /*1282*/), 22464, 0},
	{EIF_NON_GENERIC(0x01BD /*222*/), 22453, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 22454, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 22455, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 22456, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 22457, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 22458, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0A03 /*1281*/), 22460, 8},
	{EIF_NON_GENERIC(0x01BD /*222*/), 22461, 28},
	{EIF_NON_GENERIC(0x01BD /*222*/), 22462, 32},
	{EIF_NON_GENERIC(0x01BD /*222*/), 22463, 36},
	{EIF_GENERIC(NULL), 22466, 0xFFFFFFFF},
};
void Init1394(void)
{
	IDSC(desc_1394, 0, 1393);
	IDSC(desc_1394 + 1, 1, 1393);
	IDSC(desc_1394 + 32, 269, 1393);
	IDSC(desc_1394 + 34, 1171, 1393);
	IDSC(desc_1394 + 43, 1101, 1393);
}


#ifdef __cplusplus
}
#endif
