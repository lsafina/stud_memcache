/*
 * Class INET_ADDRESS_IMPL_V6
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_902 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_902 [] = {0xFF11,236,0xFF12,901,0xFFFF};
static EIF_TYPE_INDEX gen_type2_902 [] = {0xFF11,901,0xFFFF};
static EIF_TYPE_INDEX gen_type3_902 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_902 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_902 [] = {0xFF11,901,0xFFFF};
static EIF_TYPE_INDEX gen_type6_902 [] = {0xFF11,901,0xFFFF};
static EIF_TYPE_INDEX gen_type7_902 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_902 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_902 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_902 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_902 [] = {0xFF11,25,0xFFFF};
static EIF_TYPE_INDEX gen_type12_902 [] = {0xFF11,901,0xFFFF};
static EIF_TYPE_INDEX gen_type13_902 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_902 [] = {0xFF11,905,0xFFFF};
static EIF_TYPE_INDEX gen_type15_902 [] = {0xFF11,905,0xFFFF};


static struct desc_info desc_902[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_902},
	{1, (BODY_INDEX)-1, 236, gen_type1_902},
	{2, (BODY_INDEX)-1, 187, NULL},
	{3, (BODY_INDEX)-1, 187, NULL},
	{4, (BODY_INDEX)-1, 187, NULL},
	{5, (BODY_INDEX)-1, 187, NULL},
	{6, (BODY_INDEX)-1, 187, NULL},
	{7, (BODY_INDEX)-1, 187, NULL},
	{8, (BODY_INDEX)-1, 187, NULL},
	{9, (BODY_INDEX)-1, 187, NULL},
	{10, (BODY_INDEX)-1, 901, gen_type2_902},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_902},
	{14, (BODY_INDEX)-1, 0, gen_type4_902},
	{15, (BODY_INDEX)-1, 901, gen_type5_902},
	{16, (BODY_INDEX)-1, 901, gen_type6_902},
	{17, (BODY_INDEX)-1, 0, gen_type7_902},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, gen_type8_902},
	{21, (BODY_INDEX)-1, 219, gen_type9_902},
	{22, (BODY_INDEX)-1, 219, gen_type10_902},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 25, gen_type11_902},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 901, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 901, gen_type12_902},
	{13025, (BODY_INDEX)-1, 219, gen_type13_902},
	{13022, (BODY_INDEX)-1, 905, gen_type14_902},
	{13023, (BODY_INDEX)-1, 905, gen_type15_902},
	{13024, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init902(void);
void Init902(void)
{
	IDSC(desc_902, 0, 901);
	IDSC(desc_902 + 1, 1, 901);
	IDSC(desc_902 + 32, 365, 901);
	IDSC(desc_902 + 35, 376, 901);
}


#ifdef __cplusplus
}
#endif