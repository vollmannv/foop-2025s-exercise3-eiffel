#include "eif_eiffel.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ANY */
static EIF_TYPE_INDEX ptf0[] = {0xFFFF};
static struct eif_par_types par0 = {0, ptf0, (uint16) 0, (uint16) 0, (char) 0};

/* TEST_CASE */
static EIF_TYPE_INDEX ptf1[] = {0,0xFFFF};
static struct eif_par_types par1 = {1, ptf1, (uint16) 1, (uint16) 0, (char) 0};

/* SYSTEM_STRING_FACTORY */
static EIF_TYPE_INDEX ptf2[] = {0,0xFFFF};
static struct eif_par_types par2 = {2, ptf2, (uint16) 1, (uint16) 0, (char) 0};

/* SHARED_EXECUTION_ENVIRONMENT */
static EIF_TYPE_INDEX ptf3[] = {0,0xFFFF};
static struct eif_par_types par3 = {3, ptf3, (uint16) 1, (uint16) 0, (char) 0};

/* ISE_SCOOP_RUNTIME */
static EIF_TYPE_INDEX ptf4[] = {0,0xFFFF};
static struct eif_par_types par4 = {4, ptf4, (uint16) 1, (uint16) 0, (char) 0};

/* CODE_PAGE_CONSTANTS */
static EIF_TYPE_INDEX ptf5[] = {0,0xFFFF};
static struct eif_par_types par5 = {5, ptf5, (uint16) 1, (uint16) 0, (char) 0};

/* SED_META_MODEL */
static EIF_TYPE_INDEX ptf6[] = {0,0xFFFF};
static struct eif_par_types par6 = {6, ptf6, (uint16) 1, (uint16) 0, (char) 0};

/* RT_DBG_EXECUTION_PARAMETERS */
static EIF_TYPE_INDEX ptf7[] = {0,0xFFFF};
static struct eif_par_types par7 = {7, ptf7, (uint16) 1, (uint16) 0, (char) 0};

/* IDENTIFIED_CONTROLLER */
static EIF_TYPE_INDEX ptf8[] = {0,0xFFFF};
static struct eif_par_types par8 = {8, ptf8, (uint16) 1, (uint16) 0, (char) 0};

/* RT_DEBUGGER */
static EIF_TYPE_INDEX ptf9[] = {0,0xFFFF};
static struct eif_par_types par9 = {9, ptf9, (uint16) 1, (uint16) 0, (char) 0};

/* DECLARATOR */
static EIF_TYPE_INDEX ptf10[] = {0,0xFFFF};
static struct eif_par_types par10 = {10, ptf10, (uint16) 1, (uint16) 0, (char) 0};

/* SED_TYPE_MISMATCH */
static EIF_TYPE_INDEX ptf11[] = {0,0xFFFF};
static struct eif_par_types par11 = {11, ptf11, (uint16) 1, (uint16) 0, (char) 0};

/* FILE_UTILITIES */
static EIF_TYPE_INDEX ptf12[] = {13,0xFFFF};
static struct eif_par_types par12 = {12, ptf12, (uint16) 1, (uint16) 0, (char) 1};

/* reference FILE_UTILITIES */
static EIF_TYPE_INDEX ptf13[] = {0,0xFFFF};
static struct eif_par_types par13 = {13, ptf13, (uint16) 1, (uint16) 0, (char) 1};

/* SED_ERROR */
static EIF_TYPE_INDEX ptf14[] = {0,0xFFFF};
static struct eif_par_types par14 = {14, ptf14, (uint16) 1, (uint16) 0, (char) 0};

/* STD_FILES */
static EIF_TYPE_INDEX ptf15[] = {0,0xFFFF};
static struct eif_par_types par15 = {15, ptf15, (uint16) 1, (uint16) 0, (char) 0};

/* MEMORY_STREAM */
static EIF_TYPE_INDEX ptf16[] = {0,0xFFFF};
static struct eif_par_types par16 = {16, ptf16, (uint16) 1, (uint16) 0, (char) 0};

/* OPERATING_ENVIRONMENT */
static EIF_TYPE_INDEX ptf17[] = {0,0xFFFF};
static struct eif_par_types par17 = {17, ptf17, (uint16) 1, (uint16) 0, (char) 0};

/* VERSIONABLE */
static EIF_TYPE_INDEX ptf18[] = {0,0xFFFF};
static struct eif_par_types par18 = {18, ptf18, (uint16) 1, (uint16) 0, (char) 0};

/* SYSTEM_ENCODINGS */
static EIF_TYPE_INDEX ptf19[] = {0,0xFFFF};
static struct eif_par_types par19 = {19, ptf19, (uint16) 1, (uint16) 0, (char) 0};

/* SED_ERROR_FACTORY */
static EIF_TYPE_INDEX ptf20[] = {0,0xFFFF};
static struct eif_par_types par20 = {20, ptf20, (uint16) 1, (uint16) 0, (char) 0};

/* CHARACTER_PROPERTY */
static EIF_TYPE_INDEX ptf21[] = {0,0xFFFF};
static struct eif_par_types par21 = {21, ptf21, (uint16) 1, (uint16) 0, (char) 0};

/* SED_VERSIONS */
static EIF_TYPE_INDEX ptf22[] = {0,0xFFFF};
static struct eif_par_types par22 = {22, ptf22, (uint16) 1, (uint16) 0, (char) 0};

/* ASCII */
static EIF_TYPE_INDEX ptf23[] = {0,0xFFFF};
static struct eif_par_types par23 = {23, ptf23, (uint16) 1, (uint16) 0, (char) 0};

/* ISE_RUNTIME */
static EIF_TYPE_INDEX ptf24[] = {0,0xFFFF};
static struct eif_par_types par24 = {24, ptf24, (uint16) 1, (uint16) 0, (char) 0};

/* UTF_CONVERTER */
static EIF_TYPE_INDEX ptf25[] = {26,0xFFFF};
static struct eif_par_types par25 = {25, ptf25, (uint16) 1, (uint16) 0, (char) 1};

/* reference UTF_CONVERTER */
static EIF_TYPE_INDEX ptf26[] = {0,0xFFFF};
static struct eif_par_types par26 = {26, ptf26, (uint16) 1, (uint16) 0, (char) 1};

/* PROFILING_SETTING */
static EIF_TYPE_INDEX ptf27[] = {0,0xFFFF};
static struct eif_par_types par27 = {27, ptf27, (uint16) 1, (uint16) 0, (char) 0};

/* TRACING_SETTING */
static EIF_TYPE_INDEX ptf28[] = {0,0xFFFF};
static struct eif_par_types par28 = {28, ptf28, (uint16) 1, (uint16) 0, (char) 0};

/* UNIX_SIGNALS */
static EIF_TYPE_INDEX ptf29[] = {0,0xFFFF};
static struct eif_par_types par29 = {29, ptf29, (uint16) 1, (uint16) 0, (char) 0};

/* SYSTEM_STRING */
static EIF_TYPE_INDEX ptf30[] = {0,0xFFFF};
static struct eif_par_types par30 = {30, ptf30, (uint16) 1, (uint16) 0, (char) 0};

/* BASIC_ROUTINES */
static EIF_TYPE_INDEX ptf31[] = {0,0xFFFF};
static struct eif_par_types par31 = {31, ptf31, (uint16) 1, (uint16) 0, (char) 0};

/* ENCODING */
static EIF_TYPE_INDEX ptf32[] = {0,0xFFFF};
static struct eif_par_types par32 = {32, ptf32, (uint16) 1, (uint16) 0, (char) 0};

/* CODE_PAGES */
static EIF_TYPE_INDEX ptf33[] = {0,0xFFFF};
static struct eif_par_types par33 = {33, ptf33, (uint16) 1, (uint16) 0, (char) 0};

/* FORMAT_INTEGER */
static EIF_TYPE_INDEX ptf34[] = {0,0xFFFF};
static struct eif_par_types par34 = {34, ptf34, (uint16) 1, (uint16) 0, (char) 0};

/* SYSTEM_ENCODINGS_I */
static EIF_TYPE_INDEX ptf35[] = {0,0xFFFF};
static struct eif_par_types par35 = {35, ptf35, (uint16) 1, (uint16) 0, (char) 0};

/* SYSTEM_ENCODINGS_IMP */
static EIF_TYPE_INDEX ptf36[] = {35,0xFFFF};
static struct eif_par_types par36 = {36, ptf36, (uint16) 1, (uint16) 0, (char) 0};

/* EXCEP_CONST */
static EIF_TYPE_INDEX ptf37[] = {0,0xFFFF};
static struct eif_par_types par37 = {37, ptf37, (uint16) 1, (uint16) 0, (char) 0};

/* TRACING_HANDLER */
static EIF_TYPE_INDEX ptf38[] = {0,0xFFFF};
static struct eif_par_types par38 = {38, ptf38, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_TRACING_HANDLER */
static EIF_TYPE_INDEX ptf39[] = {38,0xFFFF};
static struct eif_par_types par39 = {39, ptf39, (uint16) 1, (uint16) 0, (char) 0};

/* AGENT_TRACING_HANDLER */
static EIF_TYPE_INDEX ptf40[] = {39,0xFFFF};
static struct eif_par_types par40 = {40, ptf40, (uint16) 1, (uint16) 0, (char) 0};

/* IDENTIFIED_ROUTINES */
static EIF_TYPE_INDEX ptf41[] = {0,0xFFFF};
static struct eif_par_types par41 = {41, ptf41, (uint16) 1, (uint16) 0, (char) 0};

/* SED_ABSTRACT_OBJECTS_TABLE */
static EIF_TYPE_INDEX ptf42[] = {0,0xFFFF};
static struct eif_par_types par42 = {42, ptf42, (uint16) 1, (uint16) 0, (char) 0};

/* SED_STORABLE_FACILITIES */
static EIF_TYPE_INDEX ptf43[] = {0,0xFFFF};
static struct eif_par_types par43 = {43, ptf43, (uint16) 1, (uint16) 0, (char) 0};

/* OBJECT_GRAPH_MARKER */
static EIF_TYPE_INDEX ptf44[] = {0,0xFFFF};
static struct eif_par_types par44 = {44, ptf44, (uint16) 1, (uint16) 0, (char) 0};

/* SED_READER_WRITER */
static EIF_TYPE_INDEX ptf45[] = {0,0xFFFF};
static struct eif_par_types par45 = {45, ptf45, (uint16) 1, (uint16) 0, (char) 0};

/* SED_BINARY_READER_WRITER */
static EIF_TYPE_INDEX ptf46[] = {45,0xFFFF};
static struct eif_par_types par46 = {46, ptf46, (uint16) 1, (uint16) 0, (char) 0};

/* SED_MEMORY_READER_WRITER */
static EIF_TYPE_INDEX ptf47[] = {46,0xFFFF};
static struct eif_par_types par47 = {47, ptf47, (uint16) 1, (uint16) 0, (char) 0};

/* ENCODING_HELPER */
static EIF_TYPE_INDEX ptf48[] = {0,0xFFFF};
static struct eif_par_types par48 = {48, ptf48, (uint16) 1, (uint16) 0, (char) 0};

/* REFACTORING_HELPER */
static EIF_TYPE_INDEX ptf49[] = {0,0xFFFF};
static struct eif_par_types par49 = {49, ptf49, (uint16) 1, (uint16) 0, (char) 0};

/* THREAD_ENVIRONMENT */
static EIF_TYPE_INDEX ptf50[] = {0,0xFFFF};
static struct eif_par_types par50 = {50, ptf50, (uint16) 1, (uint16) 0, (char) 0};

/* RT_EXTENSION_COMMON */
static EIF_TYPE_INDEX ptf51[] = {0,0xFFFF};
static struct eif_par_types par51 = {51, ptf51, (uint16) 1, (uint16) 0, (char) 0};

/* RT_EXTENSION_GENERAL */
static EIF_TYPE_INDEX ptf52[] = {51,0xFFFF};
static struct eif_par_types par52 = {52, ptf52, (uint16) 1, (uint16) 0, (char) 0};

/* RT_EXTENSION */
static EIF_TYPE_INDEX ptf53[] = {52,0xFFFF};
static struct eif_par_types par53 = {53, ptf53, (uint16) 1, (uint16) 0, (char) 0};

/* RT_DBG_COMMON */
static EIF_TYPE_INDEX ptf54[] = {51,0xFFFF};
static struct eif_par_types par54 = {54, ptf54, (uint16) 1, (uint16) 0, (char) 0};

/* MEMORY_STRUCTURE */
static EIF_TYPE_INDEX ptf55[] = {0,0xFFFF};
static struct eif_par_types par55 = {55, ptf55, (uint16) 1, (uint16) 0, (char) 0};

/* OBJECT_GRAPH_TRAVERSABLE */
static EIF_TYPE_INDEX ptf56[] = {0,0xFFFF};
static struct eif_par_types par56 = {56, ptf56, (uint16) 1, (uint16) 0, (char) 0};

/* OBJECT_GRAPH_DEPTH_FIRST_TRAVERSABLE */
static EIF_TYPE_INDEX ptf57[] = {56,0xFFFF};
static struct eif_par_types par57 = {57, ptf57, (uint16) 1, (uint16) 0, (char) 0};

/* OBJECT_GRAPH_BREADTH_FIRST_TRAVERSABLE */
static EIF_TYPE_INDEX ptf58[] = {56,0xFFFF};
static struct eif_par_types par58 = {58, ptf58, (uint16) 1, (uint16) 0, (char) 0};

/* EXCEPTION_MANAGER */
static EIF_TYPE_INDEX ptf59[] = {0,0xFFFF};
static struct eif_par_types par59 = {59, ptf59, (uint16) 1, (uint16) 0, (char) 0};

/* ISE_EXCEPTION_MANAGER */
static EIF_TYPE_INDEX ptf60[] = {59,0xFFFF};
static struct eif_par_types par60 = {60, ptf60, (uint16) 1, (uint16) 0, (char) 0};

/* REFLECTOR_HELPER */
static EIF_TYPE_INDEX ptf61[] = {0,0xFFFF};
static struct eif_par_types par61 = {61, ptf61, (uint16) 1, (uint16) 0, (char) 0};

/* INTERNAL_HELPER */
static EIF_TYPE_INDEX ptf62[] = {61,0xFFFF};
static struct eif_par_types par62 = {62, ptf62, (uint16) 1, (uint16) 0, (char) 0};

/* NUMERIC_INFORMATION */
static EIF_TYPE_INDEX ptf63[] = {0,0xFFFF};
static struct eif_par_types par63 = {63, ptf63, (uint16) 1, (uint16) 0, (char) 0};

/* INTEGER_OVERFLOW_CHECKER */
static EIF_TYPE_INDEX ptf64[] = {63,0xFFFF};
static struct eif_par_types par64 = {64, ptf64, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_TO_NUMERIC_CONVERTOR */
static EIF_TYPE_INDEX ptf65[] = {63,0xFFFF};
static struct eif_par_types par65 = {65, ptf65, (uint16) 1, (uint16) 0, (char) 0};

/* HEXADECIMAL_STRING_TO_INTEGER_CONVERTER */
static EIF_TYPE_INDEX ptf66[] = {65,0xFFFF};
static struct eif_par_types par66 = {66, ptf66, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_TO_REAL_CONVERTOR */
static EIF_TYPE_INDEX ptf67[] = {65,0xFFFF};
static struct eif_par_types par67 = {67, ptf67, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_TO_INTEGER_CONVERTOR */
static EIF_TYPE_INDEX ptf68[] = {65,0xFFFF};
static struct eif_par_types par68 = {68, ptf68, (uint16) 1, (uint16) 0, (char) 0};

/* EXCEPTION_MANAGER_FACTORY */
static EIF_TYPE_INDEX ptf69[] = {0,0xFFFF};
static struct eif_par_types par69 = {69, ptf69, (uint16) 1, (uint16) 0, (char) 0};

/* EXCEPTIONS */
static EIF_TYPE_INDEX ptf70[] = {37,0xFFF7,69,0xFFFF};
static struct eif_par_types par70 = {70, ptf70, (uint16) 2, (uint16) 0, (char) 0};

/* STORABLE */
static EIF_TYPE_INDEX ptf71[] = {70,0xFFFF};
static struct eif_par_types par71 = {71, ptf71, (uint16) 1, (uint16) 0, (char) 0};

/* EXCEPTION */
static EIF_TYPE_INDEX ptf72[] = {69,0xFFFF};
static struct eif_par_types par72 = {72, ptf72, (uint16) 1, (uint16) 0, (char) 0};

/* DEVELOPER_EXCEPTION */
static EIF_TYPE_INDEX ptf73[] = {72,0xFFFF};
static struct eif_par_types par73 = {73, ptf73, (uint16) 1, (uint16) 0, (char) 0};

/* CONVERSION_FAILURE */
static EIF_TYPE_INDEX ptf74[] = {73,0xFFFF};
static struct eif_par_types par74 = {74, ptf74, (uint16) 1, (uint16) 0, (char) 0};

/* MACHINE_EXCEPTION */
static EIF_TYPE_INDEX ptf75[] = {72,0xFFFF};
static struct eif_par_types par75 = {75, ptf75, (uint16) 1, (uint16) 0, (char) 0};

/* HARDWARE_EXCEPTION */
static EIF_TYPE_INDEX ptf76[] = {75,0xFFFF};
static struct eif_par_types par76 = {76, ptf76, (uint16) 1, (uint16) 0, (char) 0};

/* FLOATING_POINT_FAILURE */
static EIF_TYPE_INDEX ptf77[] = {76,0xFFFF};
static struct eif_par_types par77 = {77, ptf77, (uint16) 1, (uint16) 0, (char) 0};

/* OPERATING_SYSTEM_EXCEPTION */
static EIF_TYPE_INDEX ptf78[] = {75,0xFFFF};
static struct eif_par_types par78 = {78, ptf78, (uint16) 1, (uint16) 0, (char) 0};

/* COM_FAILURE */
static EIF_TYPE_INDEX ptf79[] = {78,0xFFFF};
static struct eif_par_types par79 = {79, ptf79, (uint16) 1, (uint16) 0, (char) 0};

/* OPERATING_SYSTEM_FAILURE */
static EIF_TYPE_INDEX ptf80[] = {78,0xFFFF};
static struct eif_par_types par80 = {80, ptf80, (uint16) 1, (uint16) 0, (char) 0};

/* OPERATING_SYSTEM_SIGNAL_FAILURE */
static EIF_TYPE_INDEX ptf81[] = {78,0xFFFF};
static struct eif_par_types par81 = {81, ptf81, (uint16) 1, (uint16) 0, (char) 0};

/* OBSOLETE_EXCEPTION */
static EIF_TYPE_INDEX ptf82[] = {72,0xFFFF};
static struct eif_par_types par82 = {82, ptf82, (uint16) 1, (uint16) 0, (char) 0};

/* RESUMPTION_FAILURE */
static EIF_TYPE_INDEX ptf83[] = {82,0xFFFF};
static struct eif_par_types par83 = {83, ptf83, (uint16) 1, (uint16) 0, (char) 0};

/* RESCUE_FAILURE */
static EIF_TYPE_INDEX ptf84[] = {82,0xFFFF};
static struct eif_par_types par84 = {84, ptf84, (uint16) 1, (uint16) 0, (char) 0};

/* EXCEPTION_IN_SIGNAL_HANDLER_FAILURE */
static EIF_TYPE_INDEX ptf85[] = {82,0xFFFF};
static struct eif_par_types par85 = {85, ptf85, (uint16) 1, (uint16) 0, (char) 0};

/* SYS_EXCEPTION */
static EIF_TYPE_INDEX ptf86[] = {72,0xFFFF};
static struct eif_par_types par86 = {86, ptf86, (uint16) 1, (uint16) 0, (char) 0};

/* EIFFEL_RUNTIME_PANIC */
static EIF_TYPE_INDEX ptf87[] = {86,0xFFFF};
static struct eif_par_types par87 = {87, ptf87, (uint16) 1, (uint16) 0, (char) 0};

/* OLD_VIOLATION */
static EIF_TYPE_INDEX ptf88[] = {86,0xFFFF};
static struct eif_par_types par88 = {88, ptf88, (uint16) 1, (uint16) 0, (char) 0};

/* EIF_EXCEPTION */
static EIF_TYPE_INDEX ptf89[] = {86,0xFFFF};
static struct eif_par_types par89 = {89, ptf89, (uint16) 1, (uint16) 0, (char) 0};

/* EIFFEL_RUNTIME_EXCEPTION */
static EIF_TYPE_INDEX ptf90[] = {89,0xFFFF};
static struct eif_par_types par90 = {90, ptf90, (uint16) 1, (uint16) 0, (char) 0};

/* EXTERNAL_FAILURE */
static EIF_TYPE_INDEX ptf91[] = {90,0xFFFF};
static struct eif_par_types par91 = {91, ptf91, (uint16) 1, (uint16) 0, (char) 0};

/* NO_MORE_MEMORY */
static EIF_TYPE_INDEX ptf92[] = {90,0xFFFF};
static struct eif_par_types par92 = {92, ptf92, (uint16) 1, (uint16) 0, (char) 0};

/* DATA_EXCEPTION */
static EIF_TYPE_INDEX ptf93[] = {90,0xFFFF};
static struct eif_par_types par93 = {93, ptf93, (uint16) 1, (uint16) 0, (char) 0};

/* SERIALIZATION_FAILURE */
static EIF_TYPE_INDEX ptf94[] = {93,0xFFFF};
static struct eif_par_types par94 = {94, ptf94, (uint16) 1, (uint16) 0, (char) 0};

/* MISMATCH_FAILURE */
static EIF_TYPE_INDEX ptf95[] = {93,0xFFFF};
static struct eif_par_types par95 = {95, ptf95, (uint16) 1, (uint16) 0, (char) 0};

/* IO_FAILURE */
static EIF_TYPE_INDEX ptf96[] = {93,0xFFFF};
static struct eif_par_types par96 = {96, ptf96, (uint16) 1, (uint16) 0, (char) 0};

/* LANGUAGE_EXCEPTION */
static EIF_TYPE_INDEX ptf97[] = {89,0xFFFF};
static struct eif_par_types par97 = {97, ptf97, (uint16) 1, (uint16) 0, (char) 0};

/* VOID_TARGET */
static EIF_TYPE_INDEX ptf98[] = {97,0xFFFF};
static struct eif_par_types par98 = {98, ptf98, (uint16) 1, (uint16) 0, (char) 0};

/* VOID_ASSIGNED_TO_EXPANDED */
static EIF_TYPE_INDEX ptf99[] = {97,0xFFFF};
static struct eif_par_types par99 = {99, ptf99, (uint16) 1, (uint16) 0, (char) 0};

/* ROUTINE_FAILURE */
static EIF_TYPE_INDEX ptf100[] = {97,0xFFFF};
static struct eif_par_types par100 = {100, ptf100, (uint16) 1, (uint16) 0, (char) 0};

/* BAD_INSPECT_VALUE */
static EIF_TYPE_INDEX ptf101[] = {97,0xFFFF};
static struct eif_par_types par101 = {101, ptf101, (uint16) 1, (uint16) 0, (char) 0};

/* EIFFELSTUDIO_SPECIFIC_LANGUAGE_EXCEPTION */
static EIF_TYPE_INDEX ptf102[] = {97,0xFFFF};
static struct eif_par_types par102 = {102, ptf102, (uint16) 1, (uint16) 0, (char) 0};

/* CREATE_ON_DEFERRED */
static EIF_TYPE_INDEX ptf103[] = {102,0xFFFF};
static struct eif_par_types par103 = {103, ptf103, (uint16) 1, (uint16) 0, (char) 0};

/* ADDRESS_APPLIED_TO_MELTED_FEATURE */
static EIF_TYPE_INDEX ptf104[] = {102,0xFFFF};
static struct eif_par_types par104 = {104, ptf104, (uint16) 1, (uint16) 0, (char) 0};

/* ASSERTION_VIOLATION */
static EIF_TYPE_INDEX ptf105[] = {72,0xFFFF};
static struct eif_par_types par105 = {105, ptf105, (uint16) 1, (uint16) 0, (char) 0};

/* LOOP_INVARIANT_VIOLATION */
static EIF_TYPE_INDEX ptf106[] = {105,0xFFFF};
static struct eif_par_types par106 = {106, ptf106, (uint16) 1, (uint16) 0, (char) 0};

/* PRECONDITION_VIOLATION */
static EIF_TYPE_INDEX ptf107[] = {105,0xFFFF};
static struct eif_par_types par107 = {107, ptf107, (uint16) 1, (uint16) 0, (char) 0};

/* POSTCONDITION_VIOLATION */
static EIF_TYPE_INDEX ptf108[] = {105,0xFFFF};
static struct eif_par_types par108 = {108, ptf108, (uint16) 1, (uint16) 0, (char) 0};

/* VARIANT_VIOLATION */
static EIF_TYPE_INDEX ptf109[] = {105,0xFFFF};
static struct eif_par_types par109 = {109, ptf109, (uint16) 1, (uint16) 0, (char) 0};

/* CHECK_VIOLATION */
static EIF_TYPE_INDEX ptf110[] = {105,0xFFFF};
static struct eif_par_types par110 = {110, ptf110, (uint16) 1, (uint16) 0, (char) 0};

/* INVARIANT_VIOLATION */
static EIF_TYPE_INDEX ptf111[] = {105,0xFFFF};
static struct eif_par_types par111 = {111, ptf111, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_SEARCHER */
static EIF_TYPE_INDEX ptf112[] = {0,0xFFFF};
static struct eif_par_types par112 = {112, ptf112, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_8_SEARCHER */
static EIF_TYPE_INDEX ptf113[] = {112,0xFFFF};
static struct eif_par_types par113 = {113, ptf113, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_32_SEARCHER */
static EIF_TYPE_INDEX ptf114[] = {112,0xFFFF};
static struct eif_par_types par114 = {114, ptf114, (uint16) 1, (uint16) 0, (char) 0};

/* PART_COMPARABLE */
static EIF_TYPE_INDEX ptf115[] = {0,0xFFFF};
static struct eif_par_types par115 = {115, ptf115, (uint16) 1, (uint16) 0, (char) 0};

/* COMPARABLE */
static EIF_TYPE_INDEX ptf116[] = {115,0xFFFF};
static struct eif_par_types par116 = {116, ptf116, (uint16) 1, (uint16) 0, (char) 0};

/* SED_UTILITIES */
static EIF_TYPE_INDEX ptf117[] = {0,0xFFFF};
static struct eif_par_types par117 = {117, ptf117, (uint16) 1, (uint16) 0, (char) 0};

/* SED_SESSION_SERIALIZER */
static EIF_TYPE_INDEX ptf118[] = {117,0xFFFF};
static struct eif_par_types par118 = {118, ptf118, (uint16) 1, (uint16) 0, (char) 0};

/* SED_BASIC_SERIALIZER */
static EIF_TYPE_INDEX ptf119[] = {118,0xFFFF};
static struct eif_par_types par119 = {119, ptf119, (uint16) 1, (uint16) 0, (char) 0};

/* SED_RECOVERABLE_SERIALIZER */
static EIF_TYPE_INDEX ptf120[] = {119,0xFFFF};
static struct eif_par_types par120 = {120, ptf120, (uint16) 1, (uint16) 0, (char) 0};

/* SED_INDEPENDENT_SERIALIZER */
static EIF_TYPE_INDEX ptf121[] = {119,0xFFFF};
static struct eif_par_types par121 = {121, ptf121, (uint16) 1, (uint16) 0, (char) 0};

/* SED_SESSION_DESERIALIZER */
static EIF_TYPE_INDEX ptf122[] = {117,0xFFF7,59,0xFFFF};
static struct eif_par_types par122 = {122, ptf122, (uint16) 2, (uint16) 0, (char) 0};

/* SED_BASIC_DESERIALIZER */
static EIF_TYPE_INDEX ptf123[] = {122,0xFFFF};
static struct eif_par_types par123 = {123, ptf123, (uint16) 1, (uint16) 0, (char) 0};

/* SED_INDEPENDENT_DESERIALIZER */
static EIF_TYPE_INDEX ptf124[] = {123,0xFFFF};
static struct eif_par_types par124 = {124, ptf124, (uint16) 1, (uint16) 0, (char) 0};

/* MATH_CONST */
static EIF_TYPE_INDEX ptf125[] = {0,0xFFFF};
static struct eif_par_types par125 = {125, ptf125, (uint16) 1, (uint16) 0, (char) 0};

/* SINGLE_MATH */
static EIF_TYPE_INDEX ptf126[] = {125,0xFFFF};
static struct eif_par_types par126 = {126, ptf126, (uint16) 1, (uint16) 0, (char) 0};

/* DOUBLE_MATH */
static EIF_TYPE_INDEX ptf127[] = {125,0xFFFF};
static struct eif_par_types par127 = {127, ptf127, (uint16) 1, (uint16) 0, (char) 0};

/* MEM_CONST */
static EIF_TYPE_INDEX ptf128[] = {0,0xFFFF};
static struct eif_par_types par128 = {128, ptf128, (uint16) 1, (uint16) 0, (char) 0};

/* PLATFORM */
static EIF_TYPE_INDEX ptf129[] = {0,0xFFFF};
static struct eif_par_types par129 = {129, ptf129, (uint16) 1, (uint16) 0, (char) 0};

/* SED_MEDIUM_READER_WRITER_1 */
static EIF_TYPE_INDEX ptf130[] = {46,0xFFF7,129,0xFFFF};
static struct eif_par_types par130 = {130, ptf130, (uint16) 2, (uint16) 0, (char) 0};

/* SED_MEDIUM_READER_WRITER */
static EIF_TYPE_INDEX ptf131[] = {46,0xFFFF};
static struct eif_par_types par131 = {131, ptf131, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_HANDLER */
static EIF_TYPE_INDEX ptf132[] = {0,0xFFFF};
static struct eif_par_types par132 = {132, ptf132, (uint16) 1, (uint16) 0, (char) 0};

/* C_STRING */
static EIF_TYPE_INDEX ptf133[] = {132,0xFFFF};
static struct eif_par_types par133 = {133, ptf133, (uint16) 1, (uint16) 0, (char) 0};

/* REFLECTOR_CONSTANTS */
static EIF_TYPE_INDEX ptf134[] = {0,0xFFFF};
static struct eif_par_types par134 = {134, ptf134, (uint16) 1, (uint16) 0, (char) 0};

/* REFLECTOR */
static EIF_TYPE_INDEX ptf135[] = {61,0xFFF7,134,0xFFFF};
static struct eif_par_types par135 = {135, ptf135, (uint16) 2, (uint16) 0, (char) 0};

/* INTERNAL */
static EIF_TYPE_INDEX ptf136[] = {135,0xFFF7,44,0xFFFF};
static struct eif_par_types par136 = {136, ptf136, (uint16) 2, (uint16) 0, (char) 0};

/* ECMA_INTERNAL */
static EIF_TYPE_INDEX ptf137[] = {136,0xFFFF};
static struct eif_par_types par137 = {137, ptf137, (uint16) 1, (uint16) 0, (char) 0};

/* REFLECTED_OBJECT */
static EIF_TYPE_INDEX ptf138[] = {134,0xFFFF};
static struct eif_par_types par138 = {138, ptf138, (uint16) 1, (uint16) 0, (char) 0};

/* RT_DBG_INTERNAL */
static EIF_TYPE_INDEX ptf139[] = {134,0xFFFF};
static struct eif_par_types par139 = {139, ptf139, (uint16) 1, (uint16) 0, (char) 0};

/* REFLECTED_COPY_SEMANTICS_OBJECT */
static EIF_TYPE_INDEX ptf140[] = {138,0xFFF7,134,0xFFFF};
static struct eif_par_types par140 = {140, ptf140, (uint16) 2, (uint16) 0, (char) 0};

/* REFLECTED_REFERENCE_OBJECT */
static EIF_TYPE_INDEX ptf141[] = {138,0xFFF7,134,0xFFFF};
static struct eif_par_types par141 = {141, ptf141, (uint16) 2, (uint16) 0, (char) 0};

/* DEBUG_OUTPUT */
static EIF_TYPE_INDEX ptf142[] = {0,0xFFFF};
static struct eif_par_types par142 = {142, ptf142, (uint16) 1, (uint16) 0, (char) 0};

/* RT_DBG_CALL_RECORD */
static EIF_TYPE_INDEX ptf143[] = {142,0xFFFF};
static struct eif_par_types par143 = {143, ptf143, (uint16) 1, (uint16) 0, (char) 0};

/* ABSTRACT_SPECIAL */
static EIF_TYPE_INDEX ptf144[] = {142,0xFFFF};
static struct eif_par_types par144 = {144, ptf144, (uint16) 1, (uint16) 0, (char) 0};

/* RT_DBG_VALUE_RECORD */
static EIF_TYPE_INDEX ptf145[] = {142,0xFFF7,54,0xFFF7,139,0xFFFF};
static struct eif_par_types par145 = {145, ptf145, (uint16) 3, (uint16) 0, (char) 0};

/* NUMERIC */
static EIF_TYPE_INDEX ptf146[] = {142,0xFFFF};
static struct eif_par_types par146 = {146, ptf146, (uint16) 1, (uint16) 0, (char) 0};

/* CURSOR */
static EIF_TYPE_INDEX ptf147[] = {0,0xFFFF};
static struct eif_par_types par147 = {147, ptf147, (uint16) 1, (uint16) 0, (char) 0};

/* CIRCULAR_CURSOR */
static EIF_TYPE_INDEX ptf148[] = {147,0xFFFF};
static struct eif_par_types par148 = {148, ptf148, (uint16) 1, (uint16) 0, (char) 0};

/* HASH_TABLE_CURSOR */
static EIF_TYPE_INDEX ptf149[] = {147,0xFFFF};
static struct eif_par_types par149 = {149, ptf149, (uint16) 1, (uint16) 0, (char) 0};

/* ARRAYED_LIST_CURSOR */
static EIF_TYPE_INDEX ptf150[] = {147,0xFFFF};
static struct eif_par_types par150 = {150, ptf150, (uint16) 1, (uint16) 0, (char) 0};

/* ARGUMENTS */
static EIF_TYPE_INDEX ptf151[] = {270,0xFF01,236,0xFFFF};
static struct eif_par_types par151 = {151, ptf151, (uint16) 1, (uint16) 0, (char) 0};

/* ARGUMENTS_32 */
static EIF_TYPE_INDEX ptf152[] = {270,0xFF01,244,0xFFFF};
static struct eif_par_types par152 = {152, ptf152, (uint16) 1, (uint16) 0, (char) 0};

/* INTEGER_INTERVAL */
static EIF_TYPE_INDEX ptf153[] = {360,222,0xFFF7,346,222,222,0xFFF7,966,222,0xFFFF};
static struct eif_par_types par153 = {153, ptf153, (uint16) 3, (uint16) 0, (char) 0};

/* ACTIVE_INTEGER_INTERVAL */
static EIF_TYPE_INDEX ptf154[] = {153,0xFFFF};
static struct eif_par_types par154 = {154, ptf154, (uint16) 1, (uint16) 0, (char) 0};

/* NATIVE_STRING_HANDLER */
static EIF_TYPE_INDEX ptf155[] = {0,0xFFFF};
static struct eif_par_types par155 = {155, ptf155, (uint16) 1, (uint16) 0, (char) 0};

/* NATIVE_STRING */
static EIF_TYPE_INDEX ptf156[] = {155,0xFFFF};
static struct eif_par_types par156 = {156, ptf156, (uint16) 1, (uint16) 0, (char) 0};

/* FILE_COMPARER */
static EIF_TYPE_INDEX ptf157[] = {155,0xFFFF};
static struct eif_par_types par157 = {157, ptf157, (uint16) 1, (uint16) 0, (char) 0};

/* EXECUTION_ENVIRONMENT */
static EIF_TYPE_INDEX ptf158[] = {155,0xFFFF};
static struct eif_par_types par158 = {158, ptf158, (uint16) 1, (uint16) 0, (char) 0};

/* FILE_INFO */
static EIF_TYPE_INDEX ptf159[] = {648,213,0xFFF7,155,0xFFFF};
static struct eif_par_types par159 = {159, ptf159, (uint16) 2, (uint16) 0, (char) 0};

/* UNIX_FILE_INFO */
static EIF_TYPE_INDEX ptf160[] = {159,0xFFFF};
static struct eif_par_types par160 = {160, ptf160, (uint16) 1, (uint16) 0, (char) 0};

/* MISMATCH_CORRECTOR */
static EIF_TYPE_INDEX ptf161[] = {0,0xFFFF};
static struct eif_par_types par161 = {161, ptf161, (uint16) 1, (uint16) 0, (char) 0};

/* SED_RECOVERABLE_DESERIALIZER */
static EIF_TYPE_INDEX ptf162[] = {123,0xFFF7,161,0xFFFF};
static struct eif_par_types par162 = {162, ptf162, (uint16) 2, (uint16) 0, (char) 0};

/* MISMATCH_INFORMATION */
static EIF_TYPE_INDEX ptf163[] = {302,0,0xFF01,236,0xFFFF};
static struct eif_par_types par163 = {163, ptf163, (uint16) 1, (uint16) 0, (char) 0};

/* CLASS_NAME_TRANSLATIONS */
static EIF_TYPE_INDEX ptf164[] = {302,0xFF01,236,0xFF01,236,0xFFFF};
static struct eif_par_types par164 = {164, ptf164, (uint16) 1, (uint16) 0, (char) 0};

/* SED_OBJECTS_TABLE */
static EIF_TYPE_INDEX ptf165[] = {42,0xFFF7,490,216,231,0xFFFF};
static struct eif_par_types par165 = {165, ptf165, (uint16) 2, (uint16) 0, (char) 0};

/* DISPOSABLE */
static EIF_TYPE_INDEX ptf166[] = {0,0xFFFF};
static struct eif_par_types par166 = {166, ptf166, (uint16) 1, (uint16) 0, (char) 0};

/* READ_WRITE_LOCK */
static EIF_TYPE_INDEX ptf167[] = {166,0xFFFF};
static struct eif_par_types par167 = {167, ptf167, (uint16) 1, (uint16) 0, (char) 0};

/* MANAGED_POINTER */
static EIF_TYPE_INDEX ptf168[] = {166,0xFFF7,129,0xFFFF};
static struct eif_par_types par168 = {168, ptf168, (uint16) 2, (uint16) 0, (char) 0};

/* MEMORY */
static EIF_TYPE_INDEX ptf169[] = {166,0xFFF7,128,0xFFFF};
static struct eif_par_types par169 = {169, ptf169, (uint16) 2, (uint16) 0, (char) 0};

/* CONDITION_VARIABLE */
static EIF_TYPE_INDEX ptf170[] = {166,0xFFFF};
static struct eif_par_types par170 = {170, ptf170, (uint16) 1, (uint16) 0, (char) 0};

/* DIRECTORY */
static EIF_TYPE_INDEX ptf171[] = {166,0xFFF7,155,0xFFFF};
static struct eif_par_types par171 = {171, ptf171, (uint16) 2, (uint16) 0, (char) 0};

/* SEMAPHORE */
static EIF_TYPE_INDEX ptf172[] = {166,0xFFFF};
static struct eif_par_types par172 = {172, ptf172, (uint16) 1, (uint16) 0, (char) 0};

/* MUTEX */
static EIF_TYPE_INDEX ptf173[] = {166,0xFFFF};
static struct eif_par_types par173 = {173, ptf173, (uint16) 1, (uint16) 0, (char) 0};

/* IDENTIFIED */
static EIF_TYPE_INDEX ptf174[] = {166,0xFFFF};
static struct eif_par_types par174 = {174, ptf174, (uint16) 1, (uint16) 0, (char) 0};

/* IO_MEDIUM */
static EIF_TYPE_INDEX ptf175[] = {166,0xFFF7,132,0xFFFF};
static struct eif_par_types par175 = {175, ptf175, (uint16) 2, (uint16) 0, (char) 0};

/* STREAM */
static EIF_TYPE_INDEX ptf176[] = {175,0xFFFF};
static struct eif_par_types par176 = {176, ptf176, (uint16) 1, (uint16) 0, (char) 0};

/* FILE */
static EIF_TYPE_INDEX ptf177[] = {879,201,0xFFF7,877,201,0xFFF7,175,0xFFF7,155,0xFFFF};
static struct eif_par_types par177 = {177, ptf177, (uint16) 4, (uint16) 0, (char) 0};

/* RAW_FILE */
static EIF_TYPE_INDEX ptf178[] = {177,0xFFFF};
static struct eif_par_types par178 = {178, ptf178, (uint16) 1, (uint16) 0, (char) 0};

/* PLAIN_TEXT_FILE */
static EIF_TYPE_INDEX ptf179[] = {177,0xFFFF};
static struct eif_par_types par179 = {179, ptf179, (uint16) 1, (uint16) 0, (char) 0};

/* FILE_ITERATION_CURSOR */
static EIF_TYPE_INDEX ptf180[] = {166,0xFFF7,602,201,0xFFFF};
static struct eif_par_types par180 = {180, ptf180, (uint16) 2, (uint16) 0, (char) 0};

/* RANDOM */
static EIF_TYPE_INDEX ptf181[] = {911,222,0xFFF7,341,222,0xFFFF};
static struct eif_par_types par181 = {181, ptf181, (uint16) 2, (uint16) 0, (char) 0};

/* STRING_ITERATION_CURSOR */
static EIF_TYPE_INDEX ptf182[] = {312,198,0xFFF7,313,198,0xFFFF};
static struct eif_par_types par182 = {182, ptf182, (uint16) 2, (uint16) 0, (char) 0};

/* PRIMES */
static EIF_TYPE_INDEX ptf183[] = {911,222,0xFFF7,341,222,0xFFFF};
static struct eif_par_types par183 = {183, ptf183, (uint16) 2, (uint16) 0, (char) 0};

/* FIBONACCI */
static EIF_TYPE_INDEX ptf184[] = {911,222,0xFFF7,341,222,0xFFFF};
static struct eif_par_types par184 = {184, ptf184, (uint16) 2, (uint16) 0, (char) 0};

/* REPEATABLE */
static EIF_TYPE_INDEX ptf185[] = {269,0xFF01,185,0xFFFF};
static struct eif_par_types par185 = {185, ptf185, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_32_ITERATION_CURSOR */
static EIF_TYPE_INDEX ptf186[] = {545,198,0xFF01,241,0xFFFF};
static struct eif_par_types par186 = {186, ptf186, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_8_ITERATION_CURSOR */
static EIF_TYPE_INDEX ptf187[] = {855,201,0xFF01,234,0xFFFF};
static struct eif_par_types par187 = {187, ptf187, (uint16) 1, (uint16) 0, (char) 0};

/* HASHABLE */
static EIF_TYPE_INDEX ptf188[] = {0,0xFFFF};
static struct eif_par_types par188 = {188, ptf188, (uint16) 1, (uint16) 0, (char) 0};

/* PATH */
static EIF_TYPE_INDEX ptf189[] = {188,0xFFF7,116,0xFFF7,155,0xFFF7,142,0xFFFF};
static struct eif_par_types par189 = {189, ptf189, (uint16) 4, (uint16) 0, (char) 0};

/* TUPLE */
static EIF_TYPE_INDEX ptf190[] = {188,0xFFF7,161,0xFFF7,267,0,0xFFFF};
static struct eif_par_types par190 = {190, ptf190, (uint16) 3, (uint16) 0, (char) 0};

/* INTEGER_8_REF */
static EIF_TYPE_INDEX ptf191[] = {146,0xFFF7,116,0xFFF7,188,0xFFFF};
static struct eif_par_types par191 = {191, ptf191, (uint16) 3, (uint16) 0, (char) 0};

/* INTEGER_8 */
static EIF_TYPE_INDEX ptf192[] = {193,0xFFFF};
static struct eif_par_types par192 = {192, ptf192, (uint16) 1, (uint16) 0, (char) 1};

/* reference INTEGER_8 */
static EIF_TYPE_INDEX ptf193[] = {191,0xFFFF};
static struct eif_par_types par193 = {193, ptf193, (uint16) 1, (uint16) 0, (char) 1};

/* REAL_32_REF */
static EIF_TYPE_INDEX ptf194[] = {146,0xFFF7,116,0xFFF7,188,0xFFFF};
static struct eif_par_types par194 = {194, ptf194, (uint16) 3, (uint16) 0, (char) 0};

/* REAL_32 */
static EIF_TYPE_INDEX ptf195[] = {196,0xFFFF};
static struct eif_par_types par195 = {195, ptf195, (uint16) 1, (uint16) 0, (char) 1};

/* reference REAL_32 */
static EIF_TYPE_INDEX ptf196[] = {194,0xFFFF};
static struct eif_par_types par196 = {196, ptf196, (uint16) 1, (uint16) 0, (char) 1};

/* CHARACTER_32_REF */
static EIF_TYPE_INDEX ptf197[] = {116,0xFFF7,188,0xFFFF};
static struct eif_par_types par197 = {197, ptf197, (uint16) 2, (uint16) 0, (char) 0};

/* CHARACTER_32 */
static EIF_TYPE_INDEX ptf198[] = {199,0xFFFF};
static struct eif_par_types par198 = {198, ptf198, (uint16) 1, (uint16) 0, (char) 1};

/* reference CHARACTER_32 */
static EIF_TYPE_INDEX ptf199[] = {197,0xFFFF};
static struct eif_par_types par199 = {199, ptf199, (uint16) 1, (uint16) 0, (char) 1};

/* CHARACTER_8_REF */
static EIF_TYPE_INDEX ptf200[] = {116,0xFFF7,188,0xFFFF};
static struct eif_par_types par200 = {200, ptf200, (uint16) 2, (uint16) 0, (char) 0};

/* CHARACTER_8 */
static EIF_TYPE_INDEX ptf201[] = {202,0xFFFF};
static struct eif_par_types par201 = {201, ptf201, (uint16) 1, (uint16) 0, (char) 1};

/* reference CHARACTER_8 */
static EIF_TYPE_INDEX ptf202[] = {200,0xFFFF};
static struct eif_par_types par202 = {202, ptf202, (uint16) 1, (uint16) 0, (char) 1};

/* INTEGER_64_REF */
static EIF_TYPE_INDEX ptf203[] = {146,0xFFF7,116,0xFFF7,188,0xFFFF};
static struct eif_par_types par203 = {203, ptf203, (uint16) 3, (uint16) 0, (char) 0};

/* INTEGER_64 */
static EIF_TYPE_INDEX ptf204[] = {205,0xFFFF};
static struct eif_par_types par204 = {204, ptf204, (uint16) 1, (uint16) 0, (char) 1};

/* reference INTEGER_64 */
static EIF_TYPE_INDEX ptf205[] = {203,0xFFFF};
static struct eif_par_types par205 = {205, ptf205, (uint16) 1, (uint16) 0, (char) 1};

/* BOOLEAN_REF */
static EIF_TYPE_INDEX ptf206[] = {188,0xFFFF};
static struct eif_par_types par206 = {206, ptf206, (uint16) 1, (uint16) 0, (char) 0};

/* BOOLEAN */
static EIF_TYPE_INDEX ptf207[] = {208,0xFFFF};
static struct eif_par_types par207 = {207, ptf207, (uint16) 1, (uint16) 0, (char) 1};

/* reference BOOLEAN */
static EIF_TYPE_INDEX ptf208[] = {206,0xFFFF};
static struct eif_par_types par208 = {208, ptf208, (uint16) 1, (uint16) 0, (char) 1};

/* REAL_64_REF */
static EIF_TYPE_INDEX ptf209[] = {146,0xFFF7,116,0xFFF7,188,0xFFFF};
static struct eif_par_types par209 = {209, ptf209, (uint16) 3, (uint16) 0, (char) 0};

/* REAL_64 */
static EIF_TYPE_INDEX ptf210[] = {211,0xFFFF};
static struct eif_par_types par210 = {210, ptf210, (uint16) 1, (uint16) 0, (char) 1};

/* reference REAL_64 */
static EIF_TYPE_INDEX ptf211[] = {209,0xFFFF};
static struct eif_par_types par211 = {211, ptf211, (uint16) 1, (uint16) 0, (char) 1};

/* NATURAL_8_REF */
static EIF_TYPE_INDEX ptf212[] = {146,0xFFF7,116,0xFFF7,188,0xFFFF};
static struct eif_par_types par212 = {212, ptf212, (uint16) 3, (uint16) 0, (char) 0};

/* NATURAL_8 */
static EIF_TYPE_INDEX ptf213[] = {214,0xFFFF};
static struct eif_par_types par213 = {213, ptf213, (uint16) 1, (uint16) 0, (char) 1};

/* reference NATURAL_8 */
static EIF_TYPE_INDEX ptf214[] = {212,0xFFFF};
static struct eif_par_types par214 = {214, ptf214, (uint16) 1, (uint16) 0, (char) 1};

/* NATURAL_32_REF */
static EIF_TYPE_INDEX ptf215[] = {146,0xFFF7,116,0xFFF7,188,0xFFFF};
static struct eif_par_types par215 = {215, ptf215, (uint16) 3, (uint16) 0, (char) 0};

/* NATURAL_32 */
static EIF_TYPE_INDEX ptf216[] = {217,0xFFFF};
static struct eif_par_types par216 = {216, ptf216, (uint16) 1, (uint16) 0, (char) 1};

/* reference NATURAL_32 */
static EIF_TYPE_INDEX ptf217[] = {215,0xFFFF};
static struct eif_par_types par217 = {217, ptf217, (uint16) 1, (uint16) 0, (char) 1};

/* NATURAL_16_REF */
static EIF_TYPE_INDEX ptf218[] = {146,0xFFF7,116,0xFFF7,188,0xFFFF};
static struct eif_par_types par218 = {218, ptf218, (uint16) 3, (uint16) 0, (char) 0};

/* NATURAL_16 */
static EIF_TYPE_INDEX ptf219[] = {220,0xFFFF};
static struct eif_par_types par219 = {219, ptf219, (uint16) 1, (uint16) 0, (char) 1};

/* reference NATURAL_16 */
static EIF_TYPE_INDEX ptf220[] = {218,0xFFFF};
static struct eif_par_types par220 = {220, ptf220, (uint16) 1, (uint16) 0, (char) 1};

/* INTEGER_32_REF */
static EIF_TYPE_INDEX ptf221[] = {146,0xFFF7,116,0xFFF7,188,0xFFFF};
static struct eif_par_types par221 = {221, ptf221, (uint16) 3, (uint16) 0, (char) 0};

/* INTEGER_32 */
static EIF_TYPE_INDEX ptf222[] = {223,0xFFFF};
static struct eif_par_types par222 = {222, ptf222, (uint16) 1, (uint16) 0, (char) 1};

/* reference INTEGER_32 */
static EIF_TYPE_INDEX ptf223[] = {221,0xFFFF};
static struct eif_par_types par223 = {223, ptf223, (uint16) 1, (uint16) 0, (char) 1};

/* INTEGER_16_REF */
static EIF_TYPE_INDEX ptf224[] = {146,0xFFF7,116,0xFFF7,188,0xFFFF};
static struct eif_par_types par224 = {224, ptf224, (uint16) 3, (uint16) 0, (char) 0};

/* INTEGER_16 */
static EIF_TYPE_INDEX ptf225[] = {226,0xFFFF};
static struct eif_par_types par225 = {225, ptf225, (uint16) 1, (uint16) 0, (char) 1};

/* reference INTEGER_16 */
static EIF_TYPE_INDEX ptf226[] = {224,0xFFFF};
static struct eif_par_types par226 = {226, ptf226, (uint16) 1, (uint16) 0, (char) 1};

/* NATURAL_64_REF */
static EIF_TYPE_INDEX ptf227[] = {146,0xFFF7,116,0xFFF7,188,0xFFFF};
static struct eif_par_types par227 = {227, ptf227, (uint16) 3, (uint16) 0, (char) 0};

/* NATURAL_64 */
static EIF_TYPE_INDEX ptf228[] = {229,0xFFFF};
static struct eif_par_types par228 = {228, ptf228, (uint16) 1, (uint16) 0, (char) 1};

/* reference NATURAL_64 */
static EIF_TYPE_INDEX ptf229[] = {227,0xFFFF};
static struct eif_par_types par229 = {229, ptf229, (uint16) 1, (uint16) 0, (char) 1};

/* POINTER_REF */
static EIF_TYPE_INDEX ptf230[] = {188,0xFFF7,49,0xFFFF};
static struct eif_par_types par230 = {230, ptf230, (uint16) 2, (uint16) 0, (char) 0};

/* POINTER */
static EIF_TYPE_INDEX ptf231[] = {232,0xFFFF};
static struct eif_par_types par231 = {231, ptf231, (uint16) 1, (uint16) 0, (char) 1};

/* reference POINTER */
static EIF_TYPE_INDEX ptf232[] = {230,0xFFFF};
static struct eif_par_types par232 = {232, ptf232, (uint16) 1, (uint16) 0, (char) 1};

/* READABLE_STRING_GENERAL */
static EIF_TYPE_INDEX ptf233[] = {116,0xFFF7,188,0xFFF7,132,0xFFFF};
static struct eif_par_types par233 = {233, ptf233, (uint16) 3, (uint16) 0, (char) 0};

/* READABLE_STRING_8 */
static EIF_TYPE_INDEX ptf234[] = {233,0xFFF7,600,201,0xFFFF};
static struct eif_par_types par234 = {234, ptf234, (uint16) 2, (uint16) 0, (char) 0};

/* STRING_GENERAL */
static EIF_TYPE_INDEX ptf235[] = {233,0xFFFF};
static struct eif_par_types par235 = {235, ptf235, (uint16) 1, (uint16) 0, (char) 0};

/* STRING_8 */
static EIF_TYPE_INDEX ptf236[] = {234,0xFFF7,235,0xFFF7,880,201,222,0xFFF7,857,201,222,0xFFF7,871,201,0xFFF7,870,201,0xFFF7,161,0xFFFF};
static struct eif_par_types par236 = {236, ptf236, (uint16) 7, (uint16) 0, (char) 0};

/* SEQ_STRING */
static EIF_TYPE_INDEX ptf237[] = {236,0xFFF7,877,201,0xFFFF};
static struct eif_par_types par237 = {237, ptf237, (uint16) 2, (uint16) 0, (char) 0};

/* PATH_NAME */
static EIF_TYPE_INDEX ptf238[] = {236,0xFFFF};
static struct eif_par_types par238 = {238, ptf238, (uint16) 1, (uint16) 0, (char) 0};

/* DIRECTORY_NAME */
static EIF_TYPE_INDEX ptf239[] = {238,0xFFFF};
static struct eif_par_types par239 = {239, ptf239, (uint16) 1, (uint16) 0, (char) 0};

/* FILE_NAME */
static EIF_TYPE_INDEX ptf240[] = {238,0xFFFF};
static struct eif_par_types par240 = {240, ptf240, (uint16) 1, (uint16) 0, (char) 0};

/* READABLE_STRING_32 */
static EIF_TYPE_INDEX ptf241[] = {233,0xFFF7,310,198,0xFFFF};
static struct eif_par_types par241 = {241, ptf241, (uint16) 2, (uint16) 0, (char) 0};

/* STRING_32 */
static EIF_TYPE_INDEX ptf242[] = {241,0xFFF7,235,0xFFF7,560,198,222,0xFFF7,547,198,222,0xFFF7,552,198,0xFFF7,551,198,0xFFF7,161,0xFFFF};
static struct eif_par_types par242 = {242, ptf242, (uint16) 7, (uint16) 0, (char) 0};

/* IMMUTABLE_STRING_GENERAL */
static EIF_TYPE_INDEX ptf243[] = {233,0xFFFF};
static struct eif_par_types par243 = {243, ptf243, (uint16) 1, (uint16) 0, (char) 0};

/* IMMUTABLE_STRING_32 */
static EIF_TYPE_INDEX ptf244[] = {241,0xFFF7,243,0xFFF7,161,0xFFFF};
static struct eif_par_types par244 = {244, ptf244, (uint16) 3, (uint16) 0, (char) 0};

/* IMMUTABLE_STRING_8 */
static EIF_TYPE_INDEX ptf245[] = {234,0xFFF7,243,0xFFFF};
static struct eif_par_types par245 = {245, ptf245, (uint16) 2, (uint16) 0, (char) 0};

/* CONSOLE */
static EIF_TYPE_INDEX ptf246[] = {179,0xFFF7,0,0xFFFF};
static struct eif_par_types par246 = {246, ptf246, (uint16) 2, (uint16) 0, (char) 0};

/* BOOL_STRING */
static EIF_TYPE_INDEX ptf247[] = {0,0xFFFF};
static struct eif_par_types par247 = {247, ptf247, (uint16) 1, (uint16) 0, (char) 0};

/* SED_MULTI_OBJECT_SERIALIZATION */
static EIF_TYPE_INDEX ptf248[] = {0,0xFFFF};
static struct eif_par_types par248 = {248, ptf248, (uint16) 1, (uint16) 0, (char) 0};

/* ENCODING_I */
static EIF_TYPE_INDEX ptf249[] = {0,0xFFFF};
static struct eif_par_types par249 = {249, ptf249, (uint16) 1, (uint16) 0, (char) 0};

/* ENCODING_IMP */
static EIF_TYPE_INDEX ptf250[] = {249,0xFFFF};
static struct eif_par_types par250 = {250, ptf250, (uint16) 1, (uint16) 0, (char) 0};

/* UNICODE_CONVERSION */
static EIF_TYPE_INDEX ptf251[] = {249,0xFFFF};
static struct eif_par_types par251 = {251, ptf251, (uint16) 1, (uint16) 0, (char) 0};

/* MEM_INFO */
static EIF_TYPE_INDEX ptf252[] = {0,0xFFFF};
static struct eif_par_types par252 = {252, ptf252, (uint16) 1, (uint16) 0, (char) 0};

/* GC_INFO */
static EIF_TYPE_INDEX ptf253[] = {0,0xFFFF};
static struct eif_par_types par253 = {253, ptf253, (uint16) 1, (uint16) 0, (char) 0};

/* RT_DBG_EXECUTION_RECORDER */
static EIF_TYPE_INDEX ptf254[] = {0,0xFFFF};
static struct eif_par_types par254 = {254, ptf254, (uint16) 1, (uint16) 0, (char) 0};

/* FORMAT_DOUBLE */
static EIF_TYPE_INDEX ptf255[] = {0,0xFFFF};
static struct eif_par_types par255 = {255, ptf255, (uint16) 1, (uint16) 0, (char) 0};

/* TYPE [G#1] */
static EIF_TYPE_INDEX ptf256[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par256 = {256, ptf256, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [POINTER] */
static EIF_TYPE_INDEX ptf257[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par257 = {257, ptf257, (uint16) 3, (uint16) 1, (char) 0};

/* PROCEDURE [G#1] */
static EIF_TYPE_INDEX ptf258[] = {262,0xFFF8,1,0xFFFF};
static struct eif_par_types par258 = {258, ptf258, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [G#1] */
static EIF_TYPE_INDEX ptf259[] = {260,0xFFF8,1,0xFFFF};
static struct eif_par_types par259 = {259, ptf259, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [G#1] */
static EIF_TYPE_INDEX ptf260[] = {230,0xFFFF};
static struct eif_par_types par260 = {260, ptf260, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [ANY]] */
static EIF_TYPE_INDEX ptf261[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par261 = {261, ptf261, (uint16) 3, (uint16) 1, (char) 0};

/* ROUTINE [G#1] */
static EIF_TYPE_INDEX ptf262[] = {188,0xFFF7,161,0xFFFF};
static struct eif_par_types par262 = {262, ptf262, (uint16) 2, (uint16) 1, (char) 0};

/* STRING_TABLE [G#1] */
static EIF_TYPE_INDEX ptf263[] = {302,0xFFF8,1,0xFF01,233,0xFFFF};
static struct eif_par_types par263 = {263, ptf263, (uint16) 1, (uint16) 1, (char) 0};

/* SPECIAL [G#1] */
static EIF_TYPE_INDEX ptf264[] = {144,0xFFF7,267,0xFFF8,1,0xFFFF};
static struct eif_par_types par264 = {264, ptf264, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf265[] = {266,0xFFF8,1,0xFF01,264,0xFFF8,1,0xFFFF};
static struct eif_par_types par265 = {265, ptf265, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [G#1, G#2] */
static EIF_TYPE_INDEX ptf266[] = {272,0xFFF8,1,0xFFF8,2,0xFFFF};
static struct eif_par_types par266 = {266, ptf266, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_INDEXABLE [G#1] */
static EIF_TYPE_INDEX ptf267[] = {270,0xFFF8,1,0xFFFF};
static struct eif_par_types par267 = {267, ptf267, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf268[] = {269,0xFFF8,1,0xFFF7,270,0xFFF8,1,0xFFFF};
static struct eif_par_types par268 = {268, ptf268, (uint16) 2, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf269[] = {0,0xFFFF};
static struct eif_par_types par269 = {269, ptf269, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [G#1] */
static EIF_TYPE_INDEX ptf270[] = {0,0xFFFF};
static struct eif_par_types par270 = {270, ptf270, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf271[] = {272,0xFFF8,1,0xFF01,267,0xFFF8,1,0xFFFF};
static struct eif_par_types par271 = {271, ptf271, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [G#1, G#2] */
static EIF_TYPE_INDEX ptf272[] = {268,0xFFF8,1,0xFFFF};
static struct eif_par_types par272 = {272, ptf272, (uint16) 1, (uint16) 2, (char) 0};

/* FUNCTION [G#1, BOOLEAN] */
static EIF_TYPE_INDEX ptf273[] = {262,0xFFF8,1,0xFFFF};
static struct eif_par_types par273 = {273, ptf273, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY [G#1] */
static EIF_TYPE_INDEX ptf274[] = {289,0xFFF8,1,0xFFF7,275,0xFFF8,1,222,0xFFF7,288,0xFFF8,1,0xFFFF};
static struct eif_par_types par274 = {274, ptf274, (uint16) 3, (uint16) 1, (char) 0};

/* INDEXABLE [G#1, INTEGER_32] */
static EIF_TYPE_INDEX ptf275[] = {285,0xFFF8,1,222,0xFFF7,267,0xFFF8,1,0xFFFF};
static struct eif_par_types par275 = {275, ptf275, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [G#1] */
static EIF_TYPE_INDEX ptf276[] = {270,0xFFF8,1,0xFFFF};
static struct eif_par_types par276 = {276, ptf276, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [G#1] */
static EIF_TYPE_INDEX ptf277[] = {284,0xFFF8,1,0xFFFF};
static struct eif_par_types par277 = {277, ptf277, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [G#1] */
static EIF_TYPE_INDEX ptf278[] = {283,0xFFF8,1,0xFFFF};
static struct eif_par_types par278 = {278, ptf278, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [G#1] */
static EIF_TYPE_INDEX ptf279[] = {280,0xFFF8,1,0xFFFF};
static struct eif_par_types par279 = {279, ptf279, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [G#1] */
static EIF_TYPE_INDEX ptf280[] = {281,0xFFF8,1,0xFFFF};
static struct eif_par_types par280 = {280, ptf280, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [G#1] */
static EIF_TYPE_INDEX ptf281[] = {282,0xFFF8,1,0xFFFF};
static struct eif_par_types par281 = {281, ptf281, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [G#1] */
static EIF_TYPE_INDEX ptf282[] = {276,0xFFF8,1,0xFFFF};
static struct eif_par_types par282 = {282, ptf282, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [G#1] */
static EIF_TYPE_INDEX ptf283[] = {276,0xFFF8,1,0xFFFF};
static struct eif_par_types par283 = {283, ptf283, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [G#1] */
static EIF_TYPE_INDEX ptf284[] = {276,0xFFF8,1,0xFFFF};
static struct eif_par_types par284 = {284, ptf284, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [G#1, INTEGER_32] */
static EIF_TYPE_INDEX ptf285[] = {281,0xFFF8,1,0xFFFF};
static struct eif_par_types par285 = {285, ptf285, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf286[] = {266,0xFFF8,1,0xFF01,274,0xFFF8,1,0xFFFF};
static struct eif_par_types par286 = {286, ptf286, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [G#1] */
static EIF_TYPE_INDEX ptf287[] = {0,0xFFFF};
static struct eif_par_types par287 = {287, ptf287, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [G#1] */
static EIF_TYPE_INDEX ptf288[] = {0,0xFFFF};
static struct eif_par_types par288 = {288, ptf288, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [G#1] */
static EIF_TYPE_INDEX ptf289[] = {290,0xFFF8,1,0xFFFF};
static struct eif_par_types par289 = {289, ptf289, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [G#1] */
static EIF_TYPE_INDEX ptf290[] = {277,0xFFF8,1,0xFFFF};
static struct eif_par_types par290 = {290, ptf290, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [G#1] */
static EIF_TYPE_INDEX ptf291[] = {288,0xFFF8,1,0xFFF7,289,0xFFF8,1,0xFFF7,292,0xFFF8,1,0xFFF7,161,0xFFFF};
static struct eif_par_types par291 = {291, ptf291, (uint16) 4, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [G#1] */
static EIF_TYPE_INDEX ptf292[] = {299,0xFFF8,1,0xFFF7,293,0xFFF8,1,0xFFFF};
static struct eif_par_types par292 = {292, ptf292, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [G#1] */
static EIF_TYPE_INDEX ptf293[] = {294,0xFFF8,1,0xFFF7,297,0xFFF8,1,0xFFF7,298,0xFFF8,1,222,0xFFFF};
static struct eif_par_types par293 = {293, ptf293, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [G#1] */
static EIF_TYPE_INDEX ptf294[] = {279,0xFFF8,1,0xFFF7,275,0xFFF8,1,222,0xFFF7,295,0xFFF8,1,0xFFFF};
static struct eif_par_types par294 = {294, ptf294, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [G#1] */
static EIF_TYPE_INDEX ptf295[] = {280,0xFFF8,1,0xFFF7,296,0xFFF8,1,0xFFF7,277,0xFFF8,1,0xFFFF};
static struct eif_par_types par295 = {295, ptf295, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [G#1] */
static EIF_TYPE_INDEX ptf296[] = {278,0xFFF8,1,0xFFFF};
static struct eif_par_types par296 = {296, ptf296, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [G#1] */
static EIF_TYPE_INDEX ptf297[] = {277,0xFFF8,1,0xFFFF};
static struct eif_par_types par297 = {297, ptf297, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [G#1, INTEGER_32] */
static EIF_TYPE_INDEX ptf298[] = {285,0xFFF8,1,222,0xFFFF};
static struct eif_par_types par298 = {298, ptf298, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [G#1] */
static EIF_TYPE_INDEX ptf299[] = {294,0xFFF8,1,0xFFFF};
static struct eif_par_types par299 = {299, ptf299, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf300[] = {266,0xFFF8,1,0xFF01,291,0xFFF8,1,0xFFFF};
static struct eif_par_types par300 = {300, ptf300, (uint16) 1, (uint16) 1, (char) 0};

/* HASH_TABLE_ITERATION_CURSOR [G#1, G#2] */
static EIF_TYPE_INDEX ptf301[] = {271,0xFFF8,1,0xFFF7,304,0xFFF8,1,0xFFF8,2,0xFFFF};
static struct eif_par_types par301 = {301, ptf301, (uint16) 2, (uint16) 2, (char) 0};

/* HASH_TABLE [G#1, G#2] */
static EIF_TYPE_INDEX ptf302[] = {297,0xFFF8,1,0xFFF7,305,0xFFF8,1,0xFFF8,2,0xFFF7,303,0xFFF8,1,0xFFF8,2,0xFFF7,267,0xFFF8,1,0xFFF7,161,0xFFFF};
static struct eif_par_types par302 = {302, ptf302, (uint16) 5, (uint16) 2, (char) 0};

/* TABLE_ITERABLE [G#1, G#2] */
static EIF_TYPE_INDEX ptf303[] = {270,0xFFF8,1,0xFFFF};
static struct eif_par_types par303 = {303, ptf303, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERATION_CURSOR [G#1, G#2] */
static EIF_TYPE_INDEX ptf304[] = {269,0xFFF8,1,0xFFFF};
static struct eif_par_types par304 = {304, ptf304, (uint16) 1, (uint16) 2, (char) 0};

/* DYNAMIC_TABLE [G#1, G#2] */
static EIF_TYPE_INDEX ptf305[] = {306,0xFFF8,1,0xFFF8,2,0xFFFF};
static struct eif_par_types par305 = {305, ptf305, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [G#1, G#2] */
static EIF_TYPE_INDEX ptf306[] = {281,0xFFF8,1,0xFFFF};
static struct eif_par_types par306 = {306, ptf306, (uint16) 1, (uint16) 2, (char) 0};

/* LINEAR [CHARACTER_32] */
static EIF_TYPE_INDEX ptf307[] = {321,198,0xFFFF};
static struct eif_par_types par307 = {307, ptf307, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf308[] = {318,198,0xFFFF};
static struct eif_par_types par308 = {308, ptf308, (uint16) 1, (uint16) 1, (char) 0};

/* CONTAINER [CHARACTER_32] */
static EIF_TYPE_INDEX ptf309[] = {313,198,0xFFFF};
static struct eif_par_types par309 = {309, ptf309, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf310[] = {313,198,0xFFFF};
static struct eif_par_types par310 = {310, ptf310, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [CHARACTER_32] */
static EIF_TYPE_INDEX ptf311[] = {312,198,0xFFF7,313,198,0xFFFF};
static struct eif_par_types par311 = {311, ptf311, (uint16) 2, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [CHARACTER_32] */
static EIF_TYPE_INDEX ptf312[] = {0,0xFFFF};
static struct eif_par_types par312 = {312, ptf312, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf313[] = {0,0xFFFF};
static struct eif_par_types par313 = {313, ptf313, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [CHARACTER_32] */
static EIF_TYPE_INDEX ptf314[] = {315,198,0xFF01,310,198,0xFFFF};
static struct eif_par_types par314 = {314, ptf314, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [CHARACTER_32, G#2] */
static EIF_TYPE_INDEX ptf315[] = {311,198,0xFFFF};
static struct eif_par_types par315 = {315, ptf315, (uint16) 1, (uint16) 2, (char) 0};

/* FINITE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf316[] = {317,198,0xFFFF};
static struct eif_par_types par316 = {316, ptf316, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [CHARACTER_32] */
static EIF_TYPE_INDEX ptf317[] = {309,198,0xFFFF};
static struct eif_par_types par317 = {317, ptf317, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf318[] = {319,198,0xFFFF};
static struct eif_par_types par318 = {318, ptf318, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [CHARACTER_32] */
static EIF_TYPE_INDEX ptf319[] = {320,198,0xFFFF};
static struct eif_par_types par319 = {319, ptf319, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [CHARACTER_32] */
static EIF_TYPE_INDEX ptf320[] = {309,198,0xFFFF};
static struct eif_par_types par320 = {320, ptf320, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf321[] = {309,198,0xFFFF};
static struct eif_par_types par321 = {321, ptf321, (uint16) 1, (uint16) 1, (char) 0};

/* TYPE [REAL_64] */
static EIF_TYPE_INDEX ptf322[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par322 = {322, ptf322, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [REAL_32] */
static EIF_TYPE_INDEX ptf323[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par323 = {323, ptf323, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [NATURAL_8] */
static EIF_TYPE_INDEX ptf324[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par324 = {324, ptf324, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [NATURAL_16] */
static EIF_TYPE_INDEX ptf325[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par325 = {325, ptf325, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [NATURAL_32] */
static EIF_TYPE_INDEX ptf326[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par326 = {326, ptf326, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [NATURAL_64] */
static EIF_TYPE_INDEX ptf327[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par327 = {327, ptf327, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [INTEGER_8] */
static EIF_TYPE_INDEX ptf328[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par328 = {328, ptf328, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [INTEGER_16] */
static EIF_TYPE_INDEX ptf329[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par329 = {329, ptf329, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [INTEGER_32] */
static EIF_TYPE_INDEX ptf330[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par330 = {330, ptf330, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [INTEGER_64] */
static EIF_TYPE_INDEX ptf331[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par331 = {331, ptf331, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf332[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par332 = {332, ptf332, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf333[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par333 = {333, ptf333, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [BOOLEAN] */
static EIF_TYPE_INDEX ptf334[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par334 = {334, ptf334, (uint16) 3, (uint16) 1, (char) 0};

/* HASH_TABLE [G#1, INTEGER_32] */
static EIF_TYPE_INDEX ptf335[] = {297,0xFFF8,1,0xFFF7,298,0xFFF8,1,222,0xFFF7,372,0xFFF8,1,222,0xFFF7,267,0xFFF8,1,0xFFF7,161,0xFFFF};
static struct eif_par_types par335 = {335, ptf335, (uint16) 5, (uint16) 2, (char) 0};

/* SPECIAL [INTEGER_32] */
static EIF_TYPE_INDEX ptf336[] = {144,0xFFF7,339,222,0xFFFF};
static struct eif_par_types par336 = {336, ptf336, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [INTEGER_32] */
static EIF_TYPE_INDEX ptf337[] = {338,222,0xFF01,336,222,0xFFFF};
static struct eif_par_types par337 = {337, ptf337, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [INTEGER_32, G#2] */
static EIF_TYPE_INDEX ptf338[] = {344,222,0xFFF8,2,0xFFFF};
static struct eif_par_types par338 = {338, ptf338, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_INDEXABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf339[] = {342,222,0xFFFF};
static struct eif_par_types par339 = {339, ptf339, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [INTEGER_32] */
static EIF_TYPE_INDEX ptf340[] = {341,222,0xFFF7,342,222,0xFFFF};
static struct eif_par_types par340 = {340, ptf340, (uint16) 2, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [INTEGER_32] */
static EIF_TYPE_INDEX ptf341[] = {0,0xFFFF};
static struct eif_par_types par341 = {341, ptf341, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf342[] = {0,0xFFFF};
static struct eif_par_types par342 = {342, ptf342, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [INTEGER_32] */
static EIF_TYPE_INDEX ptf343[] = {344,222,0xFF01,339,222,0xFFFF};
static struct eif_par_types par343 = {343, ptf343, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [INTEGER_32, G#2] */
static EIF_TYPE_INDEX ptf344[] = {340,222,0xFFFF};
static struct eif_par_types par344 = {344, ptf344, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY [INTEGER_32] */
static EIF_TYPE_INDEX ptf345[] = {360,222,0xFFF7,346,222,222,0xFFF7,359,222,0xFFFF};
static struct eif_par_types par345 = {345, ptf345, (uint16) 3, (uint16) 1, (char) 0};

/* INDEXABLE [INTEGER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf346[] = {356,222,222,0xFFF7,339,222,0xFFFF};
static struct eif_par_types par346 = {346, ptf346, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [INTEGER_32] */
static EIF_TYPE_INDEX ptf347[] = {342,222,0xFFFF};
static struct eif_par_types par347 = {347, ptf347, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [INTEGER_32] */
static EIF_TYPE_INDEX ptf348[] = {355,222,0xFFFF};
static struct eif_par_types par348 = {348, ptf348, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [INTEGER_32] */
static EIF_TYPE_INDEX ptf349[] = {354,222,0xFFFF};
static struct eif_par_types par349 = {349, ptf349, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [INTEGER_32] */
static EIF_TYPE_INDEX ptf350[] = {351,222,0xFFFF};
static struct eif_par_types par350 = {350, ptf350, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [INTEGER_32] */
static EIF_TYPE_INDEX ptf351[] = {352,222,0xFFFF};
static struct eif_par_types par351 = {351, ptf351, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [INTEGER_32] */
static EIF_TYPE_INDEX ptf352[] = {353,222,0xFFFF};
static struct eif_par_types par352 = {352, ptf352, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [INTEGER_32] */
static EIF_TYPE_INDEX ptf353[] = {347,222,0xFFFF};
static struct eif_par_types par353 = {353, ptf353, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf354[] = {347,222,0xFFFF};
static struct eif_par_types par354 = {354, ptf354, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [INTEGER_32] */
static EIF_TYPE_INDEX ptf355[] = {347,222,0xFFFF};
static struct eif_par_types par355 = {355, ptf355, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [INTEGER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf356[] = {352,222,0xFFFF};
static struct eif_par_types par356 = {356, ptf356, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [INTEGER_32] */
static EIF_TYPE_INDEX ptf357[] = {338,222,0xFF01,345,222,0xFFFF};
static struct eif_par_types par357 = {357, ptf357, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [INTEGER_32] */
static EIF_TYPE_INDEX ptf358[] = {0,0xFFFF};
static struct eif_par_types par358 = {358, ptf358, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [INTEGER_32] */
static EIF_TYPE_INDEX ptf359[] = {0,0xFFFF};
static struct eif_par_types par359 = {359, ptf359, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf360[] = {361,222,0xFFFF};
static struct eif_par_types par360 = {360, ptf360, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [INTEGER_32] */
static EIF_TYPE_INDEX ptf361[] = {348,222,0xFFFF};
static struct eif_par_types par361 = {361, ptf361, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [INTEGER_32] */
static EIF_TYPE_INDEX ptf362[] = {359,222,0xFFF7,360,222,0xFFF7,363,222,0xFFF7,161,0xFFFF};
static struct eif_par_types par362 = {362, ptf362, (uint16) 4, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [INTEGER_32] */
static EIF_TYPE_INDEX ptf363[] = {370,222,0xFFF7,364,222,0xFFFF};
static struct eif_par_types par363 = {363, ptf363, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [INTEGER_32] */
static EIF_TYPE_INDEX ptf364[] = {365,222,0xFFF7,368,222,0xFFF7,369,222,222,0xFFFF};
static struct eif_par_types par364 = {364, ptf364, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [INTEGER_32] */
static EIF_TYPE_INDEX ptf365[] = {350,222,0xFFF7,346,222,222,0xFFF7,366,222,0xFFFF};
static struct eif_par_types par365 = {365, ptf365, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [INTEGER_32] */
static EIF_TYPE_INDEX ptf366[] = {351,222,0xFFF7,367,222,0xFFF7,348,222,0xFFFF};
static struct eif_par_types par366 = {366, ptf366, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [INTEGER_32] */
static EIF_TYPE_INDEX ptf367[] = {349,222,0xFFFF};
static struct eif_par_types par367 = {367, ptf367, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [INTEGER_32] */
static EIF_TYPE_INDEX ptf368[] = {348,222,0xFFFF};
static struct eif_par_types par368 = {368, ptf368, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [INTEGER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf369[] = {356,222,222,0xFFFF};
static struct eif_par_types par369 = {369, ptf369, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [INTEGER_32] */
static EIF_TYPE_INDEX ptf370[] = {365,222,0xFFFF};
static struct eif_par_types par370 = {370, ptf370, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [INTEGER_32] */
static EIF_TYPE_INDEX ptf371[] = {338,222,0xFF01,362,222,0xFFFF};
static struct eif_par_types par371 = {371, ptf371, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE_ITERABLE [G#1, INTEGER_32] */
static EIF_TYPE_INDEX ptf372[] = {270,0xFFF8,1,0xFFFF};
static struct eif_par_types par372 = {372, ptf372, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERATION_CURSOR [G#1, INTEGER_32] */
static EIF_TYPE_INDEX ptf373[] = {269,0xFFF8,1,0xFFFF};
static struct eif_par_types par373 = {373, ptf373, (uint16) 1, (uint16) 2, (char) 0};

/* HASH_TABLE_ITERATION_CURSOR [G#1, INTEGER_32] */
static EIF_TYPE_INDEX ptf374[] = {271,0xFFF8,1,0xFFF7,373,0xFFF8,1,222,0xFFFF};
static struct eif_par_types par374 = {374, ptf374, (uint16) 2, (uint16) 2, (char) 0};

/* ARRAYED_STACK [G#1] */
static EIF_TYPE_INDEX ptf375[] = {376,0xFFF8,1,0xFFF7,291,0xFFF8,1,0xFFFF};
static struct eif_par_types par375 = {375, ptf375, (uint16) 2, (uint16) 1, (char) 0};

/* STACK [G#1] */
static EIF_TYPE_INDEX ptf376[] = {377,0xFFF8,1,0xFFFF};
static struct eif_par_types par376 = {376, ptf376, (uint16) 1, (uint16) 1, (char) 0};

/* DISPENSER [G#1] */
static EIF_TYPE_INDEX ptf377[] = {280,0xFFF8,1,0xFFF7,277,0xFFF8,1,0xFFFF};
static struct eif_par_types par377 = {377, ptf377, (uint16) 2, (uint16) 1, (char) 0};

/* HASH_TABLE [INTEGER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf378[] = {368,222,0xFFF7,369,222,222,0xFFF7,379,222,222,0xFFF7,339,222,0xFFF7,161,0xFFFF};
static struct eif_par_types par378 = {378, ptf378, (uint16) 5, (uint16) 2, (char) 0};

/* TABLE_ITERABLE [INTEGER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf379[] = {342,222,0xFFFF};
static struct eif_par_types par379 = {379, ptf379, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERATION_CURSOR [INTEGER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf380[] = {341,222,0xFFFF};
static struct eif_par_types par380 = {380, ptf380, (uint16) 1, (uint16) 2, (char) 0};

/* HASH_TABLE_ITERATION_CURSOR [INTEGER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf381[] = {343,222,0xFFF7,380,222,222,0xFFFF};
static struct eif_par_types par381 = {381, ptf381, (uint16) 2, (uint16) 2, (char) 0};

/* ARRAY [NATURAL_32] */
static EIF_TYPE_INDEX ptf382[] = {406,216,0xFFF7,393,216,222,0xFFF7,405,216,0xFFFF};
static struct eif_par_types par382 = {382, ptf382, (uint16) 3, (uint16) 1, (char) 0};

/* ITERABLE [NATURAL_32] */
static EIF_TYPE_INDEX ptf383[] = {0,0xFFFF};
static struct eif_par_types par383 = {383, ptf383, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [NATURAL_32] */
static EIF_TYPE_INDEX ptf384[] = {0,0xFFFF};
static struct eif_par_types par384 = {384, ptf384, (uint16) 1, (uint16) 1, (char) 0};

/* SPECIAL [NATURAL_32] */
static EIF_TYPE_INDEX ptf385[] = {144,0xFFF7,388,216,0xFFFF};
static struct eif_par_types par385 = {385, ptf385, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [NATURAL_32] */
static EIF_TYPE_INDEX ptf386[] = {387,216,0xFF01,385,216,0xFFFF};
static struct eif_par_types par386 = {386, ptf386, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [NATURAL_32, G#2] */
static EIF_TYPE_INDEX ptf387[] = {391,216,0xFFF8,2,0xFFFF};
static struct eif_par_types par387 = {387, ptf387, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_INDEXABLE [NATURAL_32] */
static EIF_TYPE_INDEX ptf388[] = {383,216,0xFFFF};
static struct eif_par_types par388 = {388, ptf388, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [NATURAL_32] */
static EIF_TYPE_INDEX ptf389[] = {384,216,0xFFF7,383,216,0xFFFF};
static struct eif_par_types par389 = {389, ptf389, (uint16) 2, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [NATURAL_32] */
static EIF_TYPE_INDEX ptf390[] = {391,216,0xFF01,388,216,0xFFFF};
static struct eif_par_types par390 = {390, ptf390, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [NATURAL_32, G#2] */
static EIF_TYPE_INDEX ptf391[] = {389,216,0xFFFF};
static struct eif_par_types par391 = {391, ptf391, (uint16) 1, (uint16) 2, (char) 0};

/* NATIVE_ARRAY [NATURAL_32] */
static EIF_TYPE_INDEX ptf392[] = {0,0xFFFF};
static struct eif_par_types par392 = {392, ptf392, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE [NATURAL_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf393[] = {403,216,222,0xFFF7,388,216,0xFFFF};
static struct eif_par_types par393 = {393, ptf393, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [NATURAL_32] */
static EIF_TYPE_INDEX ptf394[] = {383,216,0xFFFF};
static struct eif_par_types par394 = {394, ptf394, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [NATURAL_32] */
static EIF_TYPE_INDEX ptf395[] = {402,216,0xFFFF};
static struct eif_par_types par395 = {395, ptf395, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [NATURAL_32] */
static EIF_TYPE_INDEX ptf396[] = {401,216,0xFFFF};
static struct eif_par_types par396 = {396, ptf396, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [NATURAL_32] */
static EIF_TYPE_INDEX ptf397[] = {398,216,0xFFFF};
static struct eif_par_types par397 = {397, ptf397, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [NATURAL_32] */
static EIF_TYPE_INDEX ptf398[] = {399,216,0xFFFF};
static struct eif_par_types par398 = {398, ptf398, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [NATURAL_32] */
static EIF_TYPE_INDEX ptf399[] = {400,216,0xFFFF};
static struct eif_par_types par399 = {399, ptf399, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [NATURAL_32] */
static EIF_TYPE_INDEX ptf400[] = {394,216,0xFFFF};
static struct eif_par_types par400 = {400, ptf400, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [NATURAL_32] */
static EIF_TYPE_INDEX ptf401[] = {394,216,0xFFFF};
static struct eif_par_types par401 = {401, ptf401, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [NATURAL_32] */
static EIF_TYPE_INDEX ptf402[] = {394,216,0xFFFF};
static struct eif_par_types par402 = {402, ptf402, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [NATURAL_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf403[] = {399,216,0xFFFF};
static struct eif_par_types par403 = {403, ptf403, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [NATURAL_32] */
static EIF_TYPE_INDEX ptf404[] = {387,216,0xFF01,382,216,0xFFFF};
static struct eif_par_types par404 = {404, ptf404, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [NATURAL_32] */
static EIF_TYPE_INDEX ptf405[] = {0,0xFFFF};
static struct eif_par_types par405 = {405, ptf405, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [NATURAL_32] */
static EIF_TYPE_INDEX ptf406[] = {407,216,0xFFFF};
static struct eif_par_types par406 = {406, ptf406, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [NATURAL_32] */
static EIF_TYPE_INDEX ptf407[] = {395,216,0xFFFF};
static struct eif_par_types par407 = {407, ptf407, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [NATURAL_32] */
static EIF_TYPE_INDEX ptf408[] = {405,216,0xFFF7,406,216,0xFFF7,409,216,0xFFF7,161,0xFFFF};
static struct eif_par_types par408 = {408, ptf408, (uint16) 4, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [NATURAL_32] */
static EIF_TYPE_INDEX ptf409[] = {416,216,0xFFF7,410,216,0xFFFF};
static struct eif_par_types par409 = {409, ptf409, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [NATURAL_32] */
static EIF_TYPE_INDEX ptf410[] = {411,216,0xFFF7,414,216,0xFFF7,415,216,222,0xFFFF};
static struct eif_par_types par410 = {410, ptf410, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [NATURAL_32] */
static EIF_TYPE_INDEX ptf411[] = {397,216,0xFFF7,393,216,222,0xFFF7,412,216,0xFFFF};
static struct eif_par_types par411 = {411, ptf411, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [NATURAL_32] */
static EIF_TYPE_INDEX ptf412[] = {398,216,0xFFF7,413,216,0xFFF7,395,216,0xFFFF};
static struct eif_par_types par412 = {412, ptf412, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [NATURAL_32] */
static EIF_TYPE_INDEX ptf413[] = {396,216,0xFFFF};
static struct eif_par_types par413 = {413, ptf413, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [NATURAL_32] */
static EIF_TYPE_INDEX ptf414[] = {395,216,0xFFFF};
static struct eif_par_types par414 = {414, ptf414, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [NATURAL_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf415[] = {403,216,222,0xFFFF};
static struct eif_par_types par415 = {415, ptf415, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [NATURAL_32] */
static EIF_TYPE_INDEX ptf416[] = {411,216,0xFFFF};
static struct eif_par_types par416 = {416, ptf416, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [NATURAL_32] */
static EIF_TYPE_INDEX ptf417[] = {387,216,0xFF01,408,216,0xFFFF};
static struct eif_par_types par417 = {417, ptf417, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAY [REAL_64] */
static EIF_TYPE_INDEX ptf418[] = {442,210,0xFFF7,429,210,222,0xFFF7,441,210,0xFFFF};
static struct eif_par_types par418 = {418, ptf418, (uint16) 3, (uint16) 1, (char) 0};

/* ITERABLE [REAL_64] */
static EIF_TYPE_INDEX ptf419[] = {0,0xFFFF};
static struct eif_par_types par419 = {419, ptf419, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [REAL_64] */
static EIF_TYPE_INDEX ptf420[] = {0,0xFFFF};
static struct eif_par_types par420 = {420, ptf420, (uint16) 1, (uint16) 1, (char) 0};

/* SPECIAL [REAL_64] */
static EIF_TYPE_INDEX ptf421[] = {144,0xFFF7,424,210,0xFFFF};
static struct eif_par_types par421 = {421, ptf421, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [REAL_64] */
static EIF_TYPE_INDEX ptf422[] = {423,210,0xFF01,421,210,0xFFFF};
static struct eif_par_types par422 = {422, ptf422, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [REAL_64, G#2] */
static EIF_TYPE_INDEX ptf423[] = {427,210,0xFFF8,2,0xFFFF};
static struct eif_par_types par423 = {423, ptf423, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_INDEXABLE [REAL_64] */
static EIF_TYPE_INDEX ptf424[] = {419,210,0xFFFF};
static struct eif_par_types par424 = {424, ptf424, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [REAL_64] */
static EIF_TYPE_INDEX ptf425[] = {420,210,0xFFF7,419,210,0xFFFF};
static struct eif_par_types par425 = {425, ptf425, (uint16) 2, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [REAL_64] */
static EIF_TYPE_INDEX ptf426[] = {427,210,0xFF01,424,210,0xFFFF};
static struct eif_par_types par426 = {426, ptf426, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [REAL_64, G#2] */
static EIF_TYPE_INDEX ptf427[] = {425,210,0xFFFF};
static struct eif_par_types par427 = {427, ptf427, (uint16) 1, (uint16) 2, (char) 0};

/* NATIVE_ARRAY [REAL_64] */
static EIF_TYPE_INDEX ptf428[] = {0,0xFFFF};
static struct eif_par_types par428 = {428, ptf428, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE [REAL_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf429[] = {439,210,222,0xFFF7,424,210,0xFFFF};
static struct eif_par_types par429 = {429, ptf429, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [REAL_64] */
static EIF_TYPE_INDEX ptf430[] = {419,210,0xFFFF};
static struct eif_par_types par430 = {430, ptf430, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [REAL_64] */
static EIF_TYPE_INDEX ptf431[] = {438,210,0xFFFF};
static struct eif_par_types par431 = {431, ptf431, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [REAL_64] */
static EIF_TYPE_INDEX ptf432[] = {437,210,0xFFFF};
static struct eif_par_types par432 = {432, ptf432, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [REAL_64] */
static EIF_TYPE_INDEX ptf433[] = {434,210,0xFFFF};
static struct eif_par_types par433 = {433, ptf433, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [REAL_64] */
static EIF_TYPE_INDEX ptf434[] = {435,210,0xFFFF};
static struct eif_par_types par434 = {434, ptf434, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [REAL_64] */
static EIF_TYPE_INDEX ptf435[] = {436,210,0xFFFF};
static struct eif_par_types par435 = {435, ptf435, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [REAL_64] */
static EIF_TYPE_INDEX ptf436[] = {430,210,0xFFFF};
static struct eif_par_types par436 = {436, ptf436, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [REAL_64] */
static EIF_TYPE_INDEX ptf437[] = {430,210,0xFFFF};
static struct eif_par_types par437 = {437, ptf437, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [REAL_64] */
static EIF_TYPE_INDEX ptf438[] = {430,210,0xFFFF};
static struct eif_par_types par438 = {438, ptf438, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [REAL_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf439[] = {435,210,0xFFFF};
static struct eif_par_types par439 = {439, ptf439, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [REAL_64] */
static EIF_TYPE_INDEX ptf440[] = {423,210,0xFF01,418,210,0xFFFF};
static struct eif_par_types par440 = {440, ptf440, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [REAL_64] */
static EIF_TYPE_INDEX ptf441[] = {0,0xFFFF};
static struct eif_par_types par441 = {441, ptf441, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [REAL_64] */
static EIF_TYPE_INDEX ptf442[] = {443,210,0xFFFF};
static struct eif_par_types par442 = {442, ptf442, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [REAL_64] */
static EIF_TYPE_INDEX ptf443[] = {431,210,0xFFFF};
static struct eif_par_types par443 = {443, ptf443, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [REAL_64] */
static EIF_TYPE_INDEX ptf444[] = {441,210,0xFFF7,442,210,0xFFF7,445,210,0xFFF7,161,0xFFFF};
static struct eif_par_types par444 = {444, ptf444, (uint16) 4, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [REAL_64] */
static EIF_TYPE_INDEX ptf445[] = {452,210,0xFFF7,446,210,0xFFFF};
static struct eif_par_types par445 = {445, ptf445, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [REAL_64] */
static EIF_TYPE_INDEX ptf446[] = {447,210,0xFFF7,450,210,0xFFF7,451,210,222,0xFFFF};
static struct eif_par_types par446 = {446, ptf446, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [REAL_64] */
static EIF_TYPE_INDEX ptf447[] = {433,210,0xFFF7,429,210,222,0xFFF7,448,210,0xFFFF};
static struct eif_par_types par447 = {447, ptf447, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [REAL_64] */
static EIF_TYPE_INDEX ptf448[] = {434,210,0xFFF7,449,210,0xFFF7,431,210,0xFFFF};
static struct eif_par_types par448 = {448, ptf448, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [REAL_64] */
static EIF_TYPE_INDEX ptf449[] = {432,210,0xFFFF};
static struct eif_par_types par449 = {449, ptf449, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [REAL_64] */
static EIF_TYPE_INDEX ptf450[] = {431,210,0xFFFF};
static struct eif_par_types par450 = {450, ptf450, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [REAL_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf451[] = {439,210,222,0xFFFF};
static struct eif_par_types par451 = {451, ptf451, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [REAL_64] */
static EIF_TYPE_INDEX ptf452[] = {447,210,0xFFFF};
static struct eif_par_types par452 = {452, ptf452, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [REAL_64] */
static EIF_TYPE_INDEX ptf453[] = {423,210,0xFF01,444,210,0xFFFF};
static struct eif_par_types par453 = {453, ptf453, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [BOOLEAN] */
static EIF_TYPE_INDEX ptf454[] = {478,207,0xFFF7,479,207,0xFFF7,481,207,0xFFF7,161,0xFFFF};
static struct eif_par_types par454 = {454, ptf454, (uint16) 4, (uint16) 1, (char) 0};

/* ITERABLE [BOOLEAN] */
static EIF_TYPE_INDEX ptf455[] = {0,0xFFFF};
static struct eif_par_types par455 = {455, ptf455, (uint16) 1, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [BOOLEAN] */
static EIF_TYPE_INDEX ptf456[] = {0,0xFFFF};
static struct eif_par_types par456 = {456, ptf456, (uint16) 1, (uint16) 1, (char) 0};

/* SPECIAL [BOOLEAN] */
static EIF_TYPE_INDEX ptf457[] = {144,0xFFF7,460,207,0xFFFF};
static struct eif_par_types par457 = {457, ptf457, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [BOOLEAN] */
static EIF_TYPE_INDEX ptf458[] = {459,207,0xFF01,457,207,0xFFFF};
static struct eif_par_types par458 = {458, ptf458, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [BOOLEAN, G#2] */
static EIF_TYPE_INDEX ptf459[] = {463,207,0xFFF8,2,0xFFFF};
static struct eif_par_types par459 = {459, ptf459, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_INDEXABLE [BOOLEAN] */
static EIF_TYPE_INDEX ptf460[] = {455,207,0xFFFF};
static struct eif_par_types par460 = {460, ptf460, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [BOOLEAN] */
static EIF_TYPE_INDEX ptf461[] = {456,207,0xFFF7,455,207,0xFFFF};
static struct eif_par_types par461 = {461, ptf461, (uint16) 2, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [BOOLEAN] */
static EIF_TYPE_INDEX ptf462[] = {463,207,0xFF01,460,207,0xFFFF};
static struct eif_par_types par462 = {462, ptf462, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [BOOLEAN, G#2] */
static EIF_TYPE_INDEX ptf463[] = {461,207,0xFFFF};
static struct eif_par_types par463 = {463, ptf463, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY [BOOLEAN] */
static EIF_TYPE_INDEX ptf464[] = {479,207,0xFFF7,465,207,222,0xFFF7,478,207,0xFFFF};
static struct eif_par_types par464 = {464, ptf464, (uint16) 3, (uint16) 1, (char) 0};

/* INDEXABLE [BOOLEAN, INTEGER_32] */
static EIF_TYPE_INDEX ptf465[] = {475,207,222,0xFFF7,460,207,0xFFFF};
static struct eif_par_types par465 = {465, ptf465, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [BOOLEAN] */
static EIF_TYPE_INDEX ptf466[] = {455,207,0xFFFF};
static struct eif_par_types par466 = {466, ptf466, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [BOOLEAN] */
static EIF_TYPE_INDEX ptf467[] = {474,207,0xFFFF};
static struct eif_par_types par467 = {467, ptf467, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [BOOLEAN] */
static EIF_TYPE_INDEX ptf468[] = {473,207,0xFFFF};
static struct eif_par_types par468 = {468, ptf468, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [BOOLEAN] */
static EIF_TYPE_INDEX ptf469[] = {470,207,0xFFFF};
static struct eif_par_types par469 = {469, ptf469, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [BOOLEAN] */
static EIF_TYPE_INDEX ptf470[] = {471,207,0xFFFF};
static struct eif_par_types par470 = {470, ptf470, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [BOOLEAN] */
static EIF_TYPE_INDEX ptf471[] = {472,207,0xFFFF};
static struct eif_par_types par471 = {471, ptf471, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [BOOLEAN] */
static EIF_TYPE_INDEX ptf472[] = {466,207,0xFFFF};
static struct eif_par_types par472 = {472, ptf472, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [BOOLEAN] */
static EIF_TYPE_INDEX ptf473[] = {466,207,0xFFFF};
static struct eif_par_types par473 = {473, ptf473, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [BOOLEAN] */
static EIF_TYPE_INDEX ptf474[] = {466,207,0xFFFF};
static struct eif_par_types par474 = {474, ptf474, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [BOOLEAN, INTEGER_32] */
static EIF_TYPE_INDEX ptf475[] = {471,207,0xFFFF};
static struct eif_par_types par475 = {475, ptf475, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [BOOLEAN] */
static EIF_TYPE_INDEX ptf476[] = {459,207,0xFF01,464,207,0xFFFF};
static struct eif_par_types par476 = {476, ptf476, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [BOOLEAN] */
static EIF_TYPE_INDEX ptf477[] = {0,0xFFFF};
static struct eif_par_types par477 = {477, ptf477, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [BOOLEAN] */
static EIF_TYPE_INDEX ptf478[] = {0,0xFFFF};
static struct eif_par_types par478 = {478, ptf478, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [BOOLEAN] */
static EIF_TYPE_INDEX ptf479[] = {480,207,0xFFFF};
static struct eif_par_types par479 = {479, ptf479, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [BOOLEAN] */
static EIF_TYPE_INDEX ptf480[] = {467,207,0xFFFF};
static struct eif_par_types par480 = {480, ptf480, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [BOOLEAN] */
static EIF_TYPE_INDEX ptf481[] = {488,207,0xFFF7,482,207,0xFFFF};
static struct eif_par_types par481 = {481, ptf481, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [BOOLEAN] */
static EIF_TYPE_INDEX ptf482[] = {483,207,0xFFF7,486,207,0xFFF7,487,207,222,0xFFFF};
static struct eif_par_types par482 = {482, ptf482, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [BOOLEAN] */
static EIF_TYPE_INDEX ptf483[] = {469,207,0xFFF7,465,207,222,0xFFF7,484,207,0xFFFF};
static struct eif_par_types par483 = {483, ptf483, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [BOOLEAN] */
static EIF_TYPE_INDEX ptf484[] = {470,207,0xFFF7,485,207,0xFFF7,467,207,0xFFFF};
static struct eif_par_types par484 = {484, ptf484, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [BOOLEAN] */
static EIF_TYPE_INDEX ptf485[] = {468,207,0xFFFF};
static struct eif_par_types par485 = {485, ptf485, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [BOOLEAN] */
static EIF_TYPE_INDEX ptf486[] = {467,207,0xFFFF};
static struct eif_par_types par486 = {486, ptf486, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [BOOLEAN, INTEGER_32] */
static EIF_TYPE_INDEX ptf487[] = {475,207,222,0xFFFF};
static struct eif_par_types par487 = {487, ptf487, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [BOOLEAN] */
static EIF_TYPE_INDEX ptf488[] = {483,207,0xFFFF};
static struct eif_par_types par488 = {488, ptf488, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [BOOLEAN] */
static EIF_TYPE_INDEX ptf489[] = {459,207,0xFF01,454,207,0xFFFF};
static struct eif_par_types par489 = {489, ptf489, (uint16) 1, (uint16) 1, (char) 0};

/* HASH_TABLE [NATURAL_32, POINTER] */
static EIF_TYPE_INDEX ptf490[] = {414,216,0xFFF7,530,216,231,0xFFF7,527,216,231,0xFFF7,388,216,0xFFF7,161,0xFFFF};
static struct eif_par_types par490 = {490, ptf490, (uint16) 5, (uint16) 2, (char) 0};

/* SPECIAL [POINTER] */
static EIF_TYPE_INDEX ptf491[] = {144,0xFFF7,494,231,0xFFFF};
static struct eif_par_types par491 = {491, ptf491, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [POINTER] */
static EIF_TYPE_INDEX ptf492[] = {493,231,0xFF01,491,231,0xFFFF};
static struct eif_par_types par492 = {492, ptf492, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [POINTER, G#2] */
static EIF_TYPE_INDEX ptf493[] = {499,231,0xFFF8,2,0xFFFF};
static struct eif_par_types par493 = {493, ptf493, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_INDEXABLE [POINTER] */
static EIF_TYPE_INDEX ptf494[] = {497,231,0xFFFF};
static struct eif_par_types par494 = {494, ptf494, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [POINTER] */
static EIF_TYPE_INDEX ptf495[] = {496,231,0xFFF7,497,231,0xFFFF};
static struct eif_par_types par495 = {495, ptf495, (uint16) 2, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [POINTER] */
static EIF_TYPE_INDEX ptf496[] = {0,0xFFFF};
static struct eif_par_types par496 = {496, ptf496, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [POINTER] */
static EIF_TYPE_INDEX ptf497[] = {0,0xFFFF};
static struct eif_par_types par497 = {497, ptf497, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [POINTER] */
static EIF_TYPE_INDEX ptf498[] = {499,231,0xFF01,494,231,0xFFFF};
static struct eif_par_types par498 = {498, ptf498, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [POINTER, G#2] */
static EIF_TYPE_INDEX ptf499[] = {495,231,0xFFFF};
static struct eif_par_types par499 = {499, ptf499, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY [POINTER] */
static EIF_TYPE_INDEX ptf500[] = {515,231,0xFFF7,501,231,222,0xFFF7,514,231,0xFFFF};
static struct eif_par_types par500 = {500, ptf500, (uint16) 3, (uint16) 1, (char) 0};

/* INDEXABLE [POINTER, INTEGER_32] */
static EIF_TYPE_INDEX ptf501[] = {511,231,222,0xFFF7,494,231,0xFFFF};
static struct eif_par_types par501 = {501, ptf501, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [POINTER] */
static EIF_TYPE_INDEX ptf502[] = {497,231,0xFFFF};
static struct eif_par_types par502 = {502, ptf502, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [POINTER] */
static EIF_TYPE_INDEX ptf503[] = {510,231,0xFFFF};
static struct eif_par_types par503 = {503, ptf503, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [POINTER] */
static EIF_TYPE_INDEX ptf504[] = {509,231,0xFFFF};
static struct eif_par_types par504 = {504, ptf504, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [POINTER] */
static EIF_TYPE_INDEX ptf505[] = {506,231,0xFFFF};
static struct eif_par_types par505 = {505, ptf505, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [POINTER] */
static EIF_TYPE_INDEX ptf506[] = {507,231,0xFFFF};
static struct eif_par_types par506 = {506, ptf506, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [POINTER] */
static EIF_TYPE_INDEX ptf507[] = {508,231,0xFFFF};
static struct eif_par_types par507 = {507, ptf507, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [POINTER] */
static EIF_TYPE_INDEX ptf508[] = {502,231,0xFFFF};
static struct eif_par_types par508 = {508, ptf508, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [POINTER] */
static EIF_TYPE_INDEX ptf509[] = {502,231,0xFFFF};
static struct eif_par_types par509 = {509, ptf509, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [POINTER] */
static EIF_TYPE_INDEX ptf510[] = {502,231,0xFFFF};
static struct eif_par_types par510 = {510, ptf510, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [POINTER, INTEGER_32] */
static EIF_TYPE_INDEX ptf511[] = {507,231,0xFFFF};
static struct eif_par_types par511 = {511, ptf511, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [POINTER] */
static EIF_TYPE_INDEX ptf512[] = {493,231,0xFF01,500,231,0xFFFF};
static struct eif_par_types par512 = {512, ptf512, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [POINTER] */
static EIF_TYPE_INDEX ptf513[] = {0,0xFFFF};
static struct eif_par_types par513 = {513, ptf513, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [POINTER] */
static EIF_TYPE_INDEX ptf514[] = {0,0xFFFF};
static struct eif_par_types par514 = {514, ptf514, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [POINTER] */
static EIF_TYPE_INDEX ptf515[] = {516,231,0xFFFF};
static struct eif_par_types par515 = {515, ptf515, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [POINTER] */
static EIF_TYPE_INDEX ptf516[] = {503,231,0xFFFF};
static struct eif_par_types par516 = {516, ptf516, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [POINTER] */
static EIF_TYPE_INDEX ptf517[] = {514,231,0xFFF7,515,231,0xFFF7,518,231,0xFFF7,161,0xFFFF};
static struct eif_par_types par517 = {517, ptf517, (uint16) 4, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [POINTER] */
static EIF_TYPE_INDEX ptf518[] = {525,231,0xFFF7,519,231,0xFFFF};
static struct eif_par_types par518 = {518, ptf518, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [POINTER] */
static EIF_TYPE_INDEX ptf519[] = {520,231,0xFFF7,523,231,0xFFF7,524,231,222,0xFFFF};
static struct eif_par_types par519 = {519, ptf519, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [POINTER] */
static EIF_TYPE_INDEX ptf520[] = {505,231,0xFFF7,501,231,222,0xFFF7,521,231,0xFFFF};
static struct eif_par_types par520 = {520, ptf520, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [POINTER] */
static EIF_TYPE_INDEX ptf521[] = {506,231,0xFFF7,522,231,0xFFF7,503,231,0xFFFF};
static struct eif_par_types par521 = {521, ptf521, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [POINTER] */
static EIF_TYPE_INDEX ptf522[] = {504,231,0xFFFF};
static struct eif_par_types par522 = {522, ptf522, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [POINTER] */
static EIF_TYPE_INDEX ptf523[] = {503,231,0xFFFF};
static struct eif_par_types par523 = {523, ptf523, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [POINTER, INTEGER_32] */
static EIF_TYPE_INDEX ptf524[] = {511,231,222,0xFFFF};
static struct eif_par_types par524 = {524, ptf524, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [POINTER] */
static EIF_TYPE_INDEX ptf525[] = {520,231,0xFFFF};
static struct eif_par_types par525 = {525, ptf525, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [POINTER] */
static EIF_TYPE_INDEX ptf526[] = {493,231,0xFF01,517,231,0xFFFF};
static struct eif_par_types par526 = {526, ptf526, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE_ITERABLE [NATURAL_32, POINTER] */
static EIF_TYPE_INDEX ptf527[] = {383,216,0xFFFF};
static struct eif_par_types par527 = {527, ptf527, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERATION_CURSOR [NATURAL_32, POINTER] */
static EIF_TYPE_INDEX ptf528[] = {384,216,0xFFFF};
static struct eif_par_types par528 = {528, ptf528, (uint16) 1, (uint16) 2, (char) 0};

/* HASH_TABLE_ITERATION_CURSOR [NATURAL_32, POINTER] */
static EIF_TYPE_INDEX ptf529[] = {390,216,0xFFF7,528,216,231,0xFFFF};
static struct eif_par_types par529 = {529, ptf529, (uint16) 2, (uint16) 2, (char) 0};

/* DYNAMIC_TABLE [NATURAL_32, POINTER] */
static EIF_TYPE_INDEX ptf530[] = {531,216,231,0xFFFF};
static struct eif_par_types par530 = {530, ptf530, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [NATURAL_32, POINTER] */
static EIF_TYPE_INDEX ptf531[] = {399,216,0xFFFF};
static struct eif_par_types par531 = {531, ptf531, (uint16) 1, (uint16) 2, (char) 0};

/* TYPE [FILE_UTILITIES] */
static EIF_TYPE_INDEX ptf532[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par532 = {532, ptf532, (uint16) 3, (uint16) 1, (char) 0};

/* TYPE [UTF_CONVERTER] */
static EIF_TYPE_INDEX ptf533[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par533 = {533, ptf533, (uint16) 3, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [REAL_32] */
static EIF_TYPE_INDEX ptf534[] = {145,0xFFFF};
static struct eif_par_types par534 = {534, ptf534, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [REAL_32] */
static EIF_TYPE_INDEX ptf535[] = {536,195,0xFFFF};
static struct eif_par_types par535 = {535, ptf535, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [REAL_32] */
static EIF_TYPE_INDEX ptf536[] = {230,0xFFFF};
static struct eif_par_types par536 = {536, ptf536, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [REAL_32]] */
static EIF_TYPE_INDEX ptf537[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par537 = {537, ptf537, (uint16) 3, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [NATURAL_8] */
static EIF_TYPE_INDEX ptf538[] = {145,0xFFFF};
static struct eif_par_types par538 = {538, ptf538, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [NATURAL_8] */
static EIF_TYPE_INDEX ptf539[] = {540,213,0xFFFF};
static struct eif_par_types par539 = {539, ptf539, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [NATURAL_8] */
static EIF_TYPE_INDEX ptf540[] = {230,0xFFFF};
static struct eif_par_types par540 = {540, ptf540, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [NATURAL_8]] */
static EIF_TYPE_INDEX ptf541[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par541 = {541, ptf541, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAYED_LIST [CHARACTER_32] */
static EIF_TYPE_INDEX ptf542[] = {551,198,0xFFF7,552,198,0xFFF7,554,198,0xFFF7,161,0xFFFF};
static struct eif_par_types par542 = {542, ptf542, (uint16) 4, (uint16) 1, (char) 0};

/* SPECIAL [CHARACTER_32] */
static EIF_TYPE_INDEX ptf543[] = {144,0xFFF7,310,198,0xFFFF};
static struct eif_par_types par543 = {543, ptf543, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [CHARACTER_32] */
static EIF_TYPE_INDEX ptf544[] = {545,198,0xFF01,543,198,0xFFFF};
static struct eif_par_types par544 = {544, ptf544, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [CHARACTER_32, G#2] */
static EIF_TYPE_INDEX ptf545[] = {315,198,0xFFF8,2,0xFFFF};
static struct eif_par_types par545 = {545, ptf545, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY [CHARACTER_32] */
static EIF_TYPE_INDEX ptf546[] = {552,198,0xFFF7,547,198,222,0xFFF7,551,198,0xFFFF};
static struct eif_par_types par546 = {546, ptf546, (uint16) 3, (uint16) 1, (char) 0};

/* INDEXABLE [CHARACTER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf547[] = {548,198,222,0xFFF7,310,198,0xFFFF};
static struct eif_par_types par547 = {547, ptf547, (uint16) 2, (uint16) 2, (char) 0};

/* TABLE [CHARACTER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf548[] = {319,198,0xFFFF};
static struct eif_par_types par548 = {548, ptf548, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [CHARACTER_32] */
static EIF_TYPE_INDEX ptf549[] = {545,198,0xFF01,546,198,0xFFFF};
static struct eif_par_types par549 = {549, ptf549, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [CHARACTER_32] */
static EIF_TYPE_INDEX ptf550[] = {0,0xFFFF};
static struct eif_par_types par550 = {550, ptf550, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [CHARACTER_32] */
static EIF_TYPE_INDEX ptf551[] = {0,0xFFFF};
static struct eif_par_types par551 = {551, ptf551, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf552[] = {553,198,0xFFFF};
static struct eif_par_types par552 = {552, ptf552, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [CHARACTER_32] */
static EIF_TYPE_INDEX ptf553[] = {316,198,0xFFFF};
static struct eif_par_types par553 = {553, ptf553, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [CHARACTER_32] */
static EIF_TYPE_INDEX ptf554[] = {561,198,0xFFF7,555,198,0xFFFF};
static struct eif_par_types par554 = {554, ptf554, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [CHARACTER_32] */
static EIF_TYPE_INDEX ptf555[] = {556,198,0xFFF7,559,198,0xFFF7,560,198,222,0xFFFF};
static struct eif_par_types par555 = {555, ptf555, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [CHARACTER_32] */
static EIF_TYPE_INDEX ptf556[] = {308,198,0xFFF7,547,198,222,0xFFF7,557,198,0xFFFF};
static struct eif_par_types par556 = {556, ptf556, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [CHARACTER_32] */
static EIF_TYPE_INDEX ptf557[] = {318,198,0xFFF7,558,198,0xFFF7,316,198,0xFFFF};
static struct eif_par_types par557 = {557, ptf557, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [CHARACTER_32] */
static EIF_TYPE_INDEX ptf558[] = {307,198,0xFFFF};
static struct eif_par_types par558 = {558, ptf558, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [CHARACTER_32] */
static EIF_TYPE_INDEX ptf559[] = {316,198,0xFFFF};
static struct eif_par_types par559 = {559, ptf559, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [CHARACTER_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf560[] = {548,198,222,0xFFFF};
static struct eif_par_types par560 = {560, ptf560, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [CHARACTER_32] */
static EIF_TYPE_INDEX ptf561[] = {556,198,0xFFFF};
static struct eif_par_types par561 = {561, ptf561, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [CHARACTER_32] */
static EIF_TYPE_INDEX ptf562[] = {545,198,0xFF01,542,198,0xFFFF};
static struct eif_par_types par562 = {562, ptf562, (uint16) 1, (uint16) 1, (char) 0};

/* CELL [G#1] */
static EIF_TYPE_INDEX ptf563[] = {0,0xFFFF};
static struct eif_par_types par563 = {563, ptf563, (uint16) 1, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [NATURAL_16] */
static EIF_TYPE_INDEX ptf564[] = {565,219,0xFF01,572,219,0xFFFF};
static struct eif_par_types par564 = {564, ptf564, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [NATURAL_16, G#2] */
static EIF_TYPE_INDEX ptf565[] = {571,219,0xFFF8,2,0xFFFF};
static struct eif_par_types par565 = {565, ptf565, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_INDEXABLE [NATURAL_16] */
static EIF_TYPE_INDEX ptf566[] = {569,219,0xFFFF};
static struct eif_par_types par566 = {566, ptf566, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [NATURAL_16] */
static EIF_TYPE_INDEX ptf567[] = {568,219,0xFFF7,569,219,0xFFFF};
static struct eif_par_types par567 = {567, ptf567, (uint16) 2, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [NATURAL_16] */
static EIF_TYPE_INDEX ptf568[] = {0,0xFFFF};
static struct eif_par_types par568 = {568, ptf568, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [NATURAL_16] */
static EIF_TYPE_INDEX ptf569[] = {0,0xFFFF};
static struct eif_par_types par569 = {569, ptf569, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [NATURAL_16] */
static EIF_TYPE_INDEX ptf570[] = {571,219,0xFF01,566,219,0xFFFF};
static struct eif_par_types par570 = {570, ptf570, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [NATURAL_16, G#2] */
static EIF_TYPE_INDEX ptf571[] = {567,219,0xFFFF};
static struct eif_par_types par571 = {571, ptf571, (uint16) 1, (uint16) 2, (char) 0};

/* SPECIAL [NATURAL_16] */
static EIF_TYPE_INDEX ptf572[] = {144,0xFFF7,566,219,0xFFFF};
static struct eif_par_types par572 = {572, ptf572, (uint16) 2, (uint16) 1, (char) 0};

/* ARRAY [NATURAL_16] */
static EIF_TYPE_INDEX ptf573[] = {588,219,0xFFF7,574,219,222,0xFFF7,587,219,0xFFFF};
static struct eif_par_types par573 = {573, ptf573, (uint16) 3, (uint16) 1, (char) 0};

/* INDEXABLE [NATURAL_16, INTEGER_32] */
static EIF_TYPE_INDEX ptf574[] = {584,219,222,0xFFF7,566,219,0xFFFF};
static struct eif_par_types par574 = {574, ptf574, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [NATURAL_16] */
static EIF_TYPE_INDEX ptf575[] = {569,219,0xFFFF};
static struct eif_par_types par575 = {575, ptf575, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [NATURAL_16] */
static EIF_TYPE_INDEX ptf576[] = {583,219,0xFFFF};
static struct eif_par_types par576 = {576, ptf576, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [NATURAL_16] */
static EIF_TYPE_INDEX ptf577[] = {582,219,0xFFFF};
static struct eif_par_types par577 = {577, ptf577, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [NATURAL_16] */
static EIF_TYPE_INDEX ptf578[] = {579,219,0xFFFF};
static struct eif_par_types par578 = {578, ptf578, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [NATURAL_16] */
static EIF_TYPE_INDEX ptf579[] = {580,219,0xFFFF};
static struct eif_par_types par579 = {579, ptf579, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [NATURAL_16] */
static EIF_TYPE_INDEX ptf580[] = {581,219,0xFFFF};
static struct eif_par_types par580 = {580, ptf580, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [NATURAL_16] */
static EIF_TYPE_INDEX ptf581[] = {575,219,0xFFFF};
static struct eif_par_types par581 = {581, ptf581, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [NATURAL_16] */
static EIF_TYPE_INDEX ptf582[] = {575,219,0xFFFF};
static struct eif_par_types par582 = {582, ptf582, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [NATURAL_16] */
static EIF_TYPE_INDEX ptf583[] = {575,219,0xFFFF};
static struct eif_par_types par583 = {583, ptf583, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [NATURAL_16, INTEGER_32] */
static EIF_TYPE_INDEX ptf584[] = {580,219,0xFFFF};
static struct eif_par_types par584 = {584, ptf584, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [NATURAL_16] */
static EIF_TYPE_INDEX ptf585[] = {565,219,0xFF01,573,219,0xFFFF};
static struct eif_par_types par585 = {585, ptf585, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [NATURAL_16] */
static EIF_TYPE_INDEX ptf586[] = {0,0xFFFF};
static struct eif_par_types par586 = {586, ptf586, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [NATURAL_16] */
static EIF_TYPE_INDEX ptf587[] = {0,0xFFFF};
static struct eif_par_types par587 = {587, ptf587, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [NATURAL_16] */
static EIF_TYPE_INDEX ptf588[] = {589,219,0xFFFF};
static struct eif_par_types par588 = {588, ptf588, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [NATURAL_16] */
static EIF_TYPE_INDEX ptf589[] = {576,219,0xFFFF};
static struct eif_par_types par589 = {589, ptf589, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [NATURAL_16] */
static EIF_TYPE_INDEX ptf590[] = {587,219,0xFFF7,588,219,0xFFF7,591,219,0xFFF7,161,0xFFFF};
static struct eif_par_types par590 = {590, ptf590, (uint16) 4, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [NATURAL_16] */
static EIF_TYPE_INDEX ptf591[] = {598,219,0xFFF7,592,219,0xFFFF};
static struct eif_par_types par591 = {591, ptf591, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [NATURAL_16] */
static EIF_TYPE_INDEX ptf592[] = {593,219,0xFFF7,596,219,0xFFF7,597,219,222,0xFFFF};
static struct eif_par_types par592 = {592, ptf592, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [NATURAL_16] */
static EIF_TYPE_INDEX ptf593[] = {578,219,0xFFF7,574,219,222,0xFFF7,594,219,0xFFFF};
static struct eif_par_types par593 = {593, ptf593, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [NATURAL_16] */
static EIF_TYPE_INDEX ptf594[] = {579,219,0xFFF7,595,219,0xFFF7,576,219,0xFFFF};
static struct eif_par_types par594 = {594, ptf594, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [NATURAL_16] */
static EIF_TYPE_INDEX ptf595[] = {577,219,0xFFFF};
static struct eif_par_types par595 = {595, ptf595, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [NATURAL_16] */
static EIF_TYPE_INDEX ptf596[] = {576,219,0xFFFF};
static struct eif_par_types par596 = {596, ptf596, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [NATURAL_16, INTEGER_32] */
static EIF_TYPE_INDEX ptf597[] = {584,219,222,0xFFFF};
static struct eif_par_types par597 = {597, ptf597, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [NATURAL_16] */
static EIF_TYPE_INDEX ptf598[] = {593,219,0xFFFF};
static struct eif_par_types par598 = {598, ptf598, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [NATURAL_16] */
static EIF_TYPE_INDEX ptf599[] = {565,219,0xFF01,590,219,0xFFFF};
static struct eif_par_types par599 = {599, ptf599, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf600[] = {603,201,0xFFFF};
static struct eif_par_types par600 = {600, ptf600, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [CHARACTER_8] */
static EIF_TYPE_INDEX ptf601[] = {602,201,0xFFF7,603,201,0xFFFF};
static struct eif_par_types par601 = {601, ptf601, (uint16) 2, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [CHARACTER_8] */
static EIF_TYPE_INDEX ptf602[] = {0,0xFFFF};
static struct eif_par_types par602 = {602, ptf602, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf603[] = {0,0xFFFF};
static struct eif_par_types par603 = {603, ptf603, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [CHARACTER_8] */
static EIF_TYPE_INDEX ptf604[] = {605,201,0xFF01,600,201,0xFFFF};
static struct eif_par_types par604 = {604, ptf604, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [CHARACTER_8, G#2] */
static EIF_TYPE_INDEX ptf605[] = {601,201,0xFFFF};
static struct eif_par_types par605 = {605, ptf605, (uint16) 1, (uint16) 2, (char) 0};

/* RT_DBG_LOCAL_RECORD [NATURAL_32] */
static EIF_TYPE_INDEX ptf606[] = {145,0xFFFF};
static struct eif_par_types par606 = {606, ptf606, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [NATURAL_32] */
static EIF_TYPE_INDEX ptf607[] = {608,216,0xFFFF};
static struct eif_par_types par607 = {607, ptf607, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [NATURAL_32] */
static EIF_TYPE_INDEX ptf608[] = {230,0xFFFF};
static struct eif_par_types par608 = {608, ptf608, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [NATURAL_32]] */
static EIF_TYPE_INDEX ptf609[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par609 = {609, ptf609, (uint16) 3, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [NATURAL_64] */
static EIF_TYPE_INDEX ptf610[] = {145,0xFFFF};
static struct eif_par_types par610 = {610, ptf610, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [NATURAL_64] */
static EIF_TYPE_INDEX ptf611[] = {612,228,0xFFFF};
static struct eif_par_types par611 = {611, ptf611, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [NATURAL_64] */
static EIF_TYPE_INDEX ptf612[] = {230,0xFFFF};
static struct eif_par_types par612 = {612, ptf612, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [NATURAL_64]] */
static EIF_TYPE_INDEX ptf613[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par613 = {613, ptf613, (uint16) 3, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [G#1] */
static EIF_TYPE_INDEX ptf614[] = {145,0xFFFF};
static struct eif_par_types par614 = {614, ptf614, (uint16) 1, (uint16) 1, (char) 0};

/* ACTION_SEQUENCE [G#1] */
static EIF_TYPE_INDEX ptf615[] = {622,0xFF01,258,0xFFF8,1,0xFFFF};
static struct eif_par_types par615 = {615, ptf615, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_QUEUE [G#1] */
static EIF_TYPE_INDEX ptf616[] = {621,0xFFF8,1,0xFFF7,619,0xFFF8,1,0xFFFF};
static struct eif_par_types par616 = {616, ptf616, (uint16) 2, (uint16) 1, (char) 0};

/* LINKED_LIST_ITERATION_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf617[] = {271,0xFFF8,1,0xFFFF};
static struct eif_par_types par617 = {617, ptf617, (uint16) 1, (uint16) 1, (char) 0};

/* LINKABLE [G#1] */
static EIF_TYPE_INDEX ptf618[] = {563,0xFFF8,1,0xFFFF};
static struct eif_par_types par618 = {618, ptf618, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_LIST [G#1] */
static EIF_TYPE_INDEX ptf619[] = {292,0xFFF8,1,0xFFFF};
static struct eif_par_types par619 = {619, ptf619, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_LIST_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf620[] = {147,0xFFFF};
static struct eif_par_types par620 = {620, ptf620, (uint16) 1, (uint16) 1, (char) 0};

/* QUEUE [G#1] */
static EIF_TYPE_INDEX ptf621[] = {377,0xFFF8,1,0xFFFF};
static struct eif_par_types par621 = {621, ptf621, (uint16) 1, (uint16) 1, (char) 0};

/* INTERACTIVE_LIST [G#1] */
static EIF_TYPE_INDEX ptf622[] = {291,0xFFF8,1,0xFFFF};
static struct eif_par_types par622 = {622, ptf622, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_QUEUE [G#1] */
static EIF_TYPE_INDEX ptf623[] = {621,0xFFF8,1,0xFFF7,289,0xFFF8,1,0xFFF7,161,0xFFFF};
static struct eif_par_types par623 = {623, ptf623, (uint16) 3, (uint16) 1, (char) 0};

/* ARRAYED_QUEUE_ITERATION_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf624[] = {269,0xFFF8,1,0xFFFF};
static struct eif_par_types par624 = {624, ptf624, (uint16) 1, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [NATURAL_8] */
static EIF_TYPE_INDEX ptf625[] = {626,213,0xFF01,633,213,0xFFFF};
static struct eif_par_types par625 = {625, ptf625, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [NATURAL_8, G#2] */
static EIF_TYPE_INDEX ptf626[] = {632,213,0xFFF8,2,0xFFFF};
static struct eif_par_types par626 = {626, ptf626, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_INDEXABLE [NATURAL_8] */
static EIF_TYPE_INDEX ptf627[] = {630,213,0xFFFF};
static struct eif_par_types par627 = {627, ptf627, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [NATURAL_8] */
static EIF_TYPE_INDEX ptf628[] = {629,213,0xFFF7,630,213,0xFFFF};
static struct eif_par_types par628 = {628, ptf628, (uint16) 2, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [NATURAL_8] */
static EIF_TYPE_INDEX ptf629[] = {0,0xFFFF};
static struct eif_par_types par629 = {629, ptf629, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [NATURAL_8] */
static EIF_TYPE_INDEX ptf630[] = {0,0xFFFF};
static struct eif_par_types par630 = {630, ptf630, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [NATURAL_8] */
static EIF_TYPE_INDEX ptf631[] = {632,213,0xFF01,627,213,0xFFFF};
static struct eif_par_types par631 = {631, ptf631, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [NATURAL_8, G#2] */
static EIF_TYPE_INDEX ptf632[] = {628,213,0xFFFF};
static struct eif_par_types par632 = {632, ptf632, (uint16) 1, (uint16) 2, (char) 0};

/* SPECIAL [NATURAL_8] */
static EIF_TYPE_INDEX ptf633[] = {144,0xFFF7,627,213,0xFFFF};
static struct eif_par_types par633 = {633, ptf633, (uint16) 2, (uint16) 1, (char) 0};

/* ARRAY [NATURAL_8] */
static EIF_TYPE_INDEX ptf634[] = {649,213,0xFFF7,635,213,222,0xFFF7,648,213,0xFFFF};
static struct eif_par_types par634 = {634, ptf634, (uint16) 3, (uint16) 1, (char) 0};

/* INDEXABLE [NATURAL_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf635[] = {645,213,222,0xFFF7,627,213,0xFFFF};
static struct eif_par_types par635 = {635, ptf635, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [NATURAL_8] */
static EIF_TYPE_INDEX ptf636[] = {630,213,0xFFFF};
static struct eif_par_types par636 = {636, ptf636, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [NATURAL_8] */
static EIF_TYPE_INDEX ptf637[] = {644,213,0xFFFF};
static struct eif_par_types par637 = {637, ptf637, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [NATURAL_8] */
static EIF_TYPE_INDEX ptf638[] = {643,213,0xFFFF};
static struct eif_par_types par638 = {638, ptf638, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [NATURAL_8] */
static EIF_TYPE_INDEX ptf639[] = {640,213,0xFFFF};
static struct eif_par_types par639 = {639, ptf639, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [NATURAL_8] */
static EIF_TYPE_INDEX ptf640[] = {641,213,0xFFFF};
static struct eif_par_types par640 = {640, ptf640, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [NATURAL_8] */
static EIF_TYPE_INDEX ptf641[] = {642,213,0xFFFF};
static struct eif_par_types par641 = {641, ptf641, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [NATURAL_8] */
static EIF_TYPE_INDEX ptf642[] = {636,213,0xFFFF};
static struct eif_par_types par642 = {642, ptf642, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [NATURAL_8] */
static EIF_TYPE_INDEX ptf643[] = {636,213,0xFFFF};
static struct eif_par_types par643 = {643, ptf643, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [NATURAL_8] */
static EIF_TYPE_INDEX ptf644[] = {636,213,0xFFFF};
static struct eif_par_types par644 = {644, ptf644, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [NATURAL_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf645[] = {641,213,0xFFFF};
static struct eif_par_types par645 = {645, ptf645, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [NATURAL_8] */
static EIF_TYPE_INDEX ptf646[] = {626,213,0xFF01,634,213,0xFFFF};
static struct eif_par_types par646 = {646, ptf646, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [NATURAL_8] */
static EIF_TYPE_INDEX ptf647[] = {0,0xFFFF};
static struct eif_par_types par647 = {647, ptf647, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [NATURAL_8] */
static EIF_TYPE_INDEX ptf648[] = {0,0xFFFF};
static struct eif_par_types par648 = {648, ptf648, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [NATURAL_8] */
static EIF_TYPE_INDEX ptf649[] = {650,213,0xFFFF};
static struct eif_par_types par649 = {649, ptf649, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [NATURAL_8] */
static EIF_TYPE_INDEX ptf650[] = {637,213,0xFFFF};
static struct eif_par_types par650 = {650, ptf650, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [NATURAL_8] */
static EIF_TYPE_INDEX ptf651[] = {648,213,0xFFF7,649,213,0xFFF7,652,213,0xFFF7,161,0xFFFF};
static struct eif_par_types par651 = {651, ptf651, (uint16) 4, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [NATURAL_8] */
static EIF_TYPE_INDEX ptf652[] = {659,213,0xFFF7,653,213,0xFFFF};
static struct eif_par_types par652 = {652, ptf652, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [NATURAL_8] */
static EIF_TYPE_INDEX ptf653[] = {654,213,0xFFF7,657,213,0xFFF7,658,213,222,0xFFFF};
static struct eif_par_types par653 = {653, ptf653, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [NATURAL_8] */
static EIF_TYPE_INDEX ptf654[] = {639,213,0xFFF7,635,213,222,0xFFF7,655,213,0xFFFF};
static struct eif_par_types par654 = {654, ptf654, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [NATURAL_8] */
static EIF_TYPE_INDEX ptf655[] = {640,213,0xFFF7,656,213,0xFFF7,637,213,0xFFFF};
static struct eif_par_types par655 = {655, ptf655, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [NATURAL_8] */
static EIF_TYPE_INDEX ptf656[] = {638,213,0xFFFF};
static struct eif_par_types par656 = {656, ptf656, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [NATURAL_8] */
static EIF_TYPE_INDEX ptf657[] = {637,213,0xFFFF};
static struct eif_par_types par657 = {657, ptf657, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [NATURAL_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf658[] = {645,213,222,0xFFFF};
static struct eif_par_types par658 = {658, ptf658, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [NATURAL_8] */
static EIF_TYPE_INDEX ptf659[] = {654,213,0xFFFF};
static struct eif_par_types par659 = {659, ptf659, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [NATURAL_8] */
static EIF_TYPE_INDEX ptf660[] = {626,213,0xFF01,651,213,0xFFFF};
static struct eif_par_types par660 = {660, ptf660, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [INTEGER_32] */
static EIF_TYPE_INDEX ptf661[] = {145,0xFFFF};
static struct eif_par_types par661 = {661, ptf661, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [INTEGER_32] */
static EIF_TYPE_INDEX ptf662[] = {663,222,0xFFFF};
static struct eif_par_types par662 = {662, ptf662, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [INTEGER_32] */
static EIF_TYPE_INDEX ptf663[] = {230,0xFFFF};
static struct eif_par_types par663 = {663, ptf663, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [INTEGER_32]] */
static EIF_TYPE_INDEX ptf664[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par664 = {664, ptf664, (uint16) 3, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [NATURAL_16] */
static EIF_TYPE_INDEX ptf665[] = {145,0xFFFF};
static struct eif_par_types par665 = {665, ptf665, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [NATURAL_16] */
static EIF_TYPE_INDEX ptf666[] = {667,219,0xFFFF};
static struct eif_par_types par666 = {666, ptf666, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [NATURAL_16] */
static EIF_TYPE_INDEX ptf667[] = {230,0xFFFF};
static struct eif_par_types par667 = {667, ptf667, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [NATURAL_16]] */
static EIF_TYPE_INDEX ptf668[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par668 = {668, ptf668, (uint16) 3, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [CHARACTER_8] */
static EIF_TYPE_INDEX ptf669[] = {145,0xFFFF};
static struct eif_par_types par669 = {669, ptf669, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [CHARACTER_8] */
static EIF_TYPE_INDEX ptf670[] = {671,201,0xFFFF};
static struct eif_par_types par670 = {670, ptf670, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [CHARACTER_8] */
static EIF_TYPE_INDEX ptf671[] = {230,0xFFFF};
static struct eif_par_types par671 = {671, ptf671, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [CHARACTER_8]] */
static EIF_TYPE_INDEX ptf672[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par672 = {672, ptf672, (uint16) 3, (uint16) 1, (char) 0};

/* SPECIAL [REAL_32] */
static EIF_TYPE_INDEX ptf673[] = {144,0xFFF7,676,195,0xFFFF};
static struct eif_par_types par673 = {673, ptf673, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [REAL_32] */
static EIF_TYPE_INDEX ptf674[] = {675,195,0xFF01,673,195,0xFFFF};
static struct eif_par_types par674 = {674, ptf674, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [REAL_32, G#2] */
static EIF_TYPE_INDEX ptf675[] = {681,195,0xFFF8,2,0xFFFF};
static struct eif_par_types par675 = {675, ptf675, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_INDEXABLE [REAL_32] */
static EIF_TYPE_INDEX ptf676[] = {679,195,0xFFFF};
static struct eif_par_types par676 = {676, ptf676, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [REAL_32] */
static EIF_TYPE_INDEX ptf677[] = {678,195,0xFFF7,679,195,0xFFFF};
static struct eif_par_types par677 = {677, ptf677, (uint16) 2, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [REAL_32] */
static EIF_TYPE_INDEX ptf678[] = {0,0xFFFF};
static struct eif_par_types par678 = {678, ptf678, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [REAL_32] */
static EIF_TYPE_INDEX ptf679[] = {0,0xFFFF};
static struct eif_par_types par679 = {679, ptf679, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [REAL_32] */
static EIF_TYPE_INDEX ptf680[] = {681,195,0xFF01,676,195,0xFFFF};
static struct eif_par_types par680 = {680, ptf680, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [REAL_32, G#2] */
static EIF_TYPE_INDEX ptf681[] = {677,195,0xFFFF};
static struct eif_par_types par681 = {681, ptf681, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY [REAL_32] */
static EIF_TYPE_INDEX ptf682[] = {697,195,0xFFF7,683,195,222,0xFFF7,696,195,0xFFFF};
static struct eif_par_types par682 = {682, ptf682, (uint16) 3, (uint16) 1, (char) 0};

/* INDEXABLE [REAL_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf683[] = {693,195,222,0xFFF7,676,195,0xFFFF};
static struct eif_par_types par683 = {683, ptf683, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [REAL_32] */
static EIF_TYPE_INDEX ptf684[] = {679,195,0xFFFF};
static struct eif_par_types par684 = {684, ptf684, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [REAL_32] */
static EIF_TYPE_INDEX ptf685[] = {692,195,0xFFFF};
static struct eif_par_types par685 = {685, ptf685, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [REAL_32] */
static EIF_TYPE_INDEX ptf686[] = {691,195,0xFFFF};
static struct eif_par_types par686 = {686, ptf686, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [REAL_32] */
static EIF_TYPE_INDEX ptf687[] = {688,195,0xFFFF};
static struct eif_par_types par687 = {687, ptf687, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [REAL_32] */
static EIF_TYPE_INDEX ptf688[] = {689,195,0xFFFF};
static struct eif_par_types par688 = {688, ptf688, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [REAL_32] */
static EIF_TYPE_INDEX ptf689[] = {690,195,0xFFFF};
static struct eif_par_types par689 = {689, ptf689, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [REAL_32] */
static EIF_TYPE_INDEX ptf690[] = {684,195,0xFFFF};
static struct eif_par_types par690 = {690, ptf690, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [REAL_32] */
static EIF_TYPE_INDEX ptf691[] = {684,195,0xFFFF};
static struct eif_par_types par691 = {691, ptf691, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [REAL_32] */
static EIF_TYPE_INDEX ptf692[] = {684,195,0xFFFF};
static struct eif_par_types par692 = {692, ptf692, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [REAL_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf693[] = {689,195,0xFFFF};
static struct eif_par_types par693 = {693, ptf693, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [REAL_32] */
static EIF_TYPE_INDEX ptf694[] = {675,195,0xFF01,682,195,0xFFFF};
static struct eif_par_types par694 = {694, ptf694, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [REAL_32] */
static EIF_TYPE_INDEX ptf695[] = {0,0xFFFF};
static struct eif_par_types par695 = {695, ptf695, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [REAL_32] */
static EIF_TYPE_INDEX ptf696[] = {0,0xFFFF};
static struct eif_par_types par696 = {696, ptf696, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [REAL_32] */
static EIF_TYPE_INDEX ptf697[] = {698,195,0xFFFF};
static struct eif_par_types par697 = {697, ptf697, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [REAL_32] */
static EIF_TYPE_INDEX ptf698[] = {685,195,0xFFFF};
static struct eif_par_types par698 = {698, ptf698, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [REAL_32] */
static EIF_TYPE_INDEX ptf699[] = {696,195,0xFFF7,697,195,0xFFF7,700,195,0xFFF7,161,0xFFFF};
static struct eif_par_types par699 = {699, ptf699, (uint16) 4, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [REAL_32] */
static EIF_TYPE_INDEX ptf700[] = {707,195,0xFFF7,701,195,0xFFFF};
static struct eif_par_types par700 = {700, ptf700, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [REAL_32] */
static EIF_TYPE_INDEX ptf701[] = {702,195,0xFFF7,705,195,0xFFF7,706,195,222,0xFFFF};
static struct eif_par_types par701 = {701, ptf701, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [REAL_32] */
static EIF_TYPE_INDEX ptf702[] = {687,195,0xFFF7,683,195,222,0xFFF7,703,195,0xFFFF};
static struct eif_par_types par702 = {702, ptf702, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [REAL_32] */
static EIF_TYPE_INDEX ptf703[] = {688,195,0xFFF7,704,195,0xFFF7,685,195,0xFFFF};
static struct eif_par_types par703 = {703, ptf703, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [REAL_32] */
static EIF_TYPE_INDEX ptf704[] = {686,195,0xFFFF};
static struct eif_par_types par704 = {704, ptf704, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [REAL_32] */
static EIF_TYPE_INDEX ptf705[] = {685,195,0xFFFF};
static struct eif_par_types par705 = {705, ptf705, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [REAL_32, INTEGER_32] */
static EIF_TYPE_INDEX ptf706[] = {693,195,222,0xFFFF};
static struct eif_par_types par706 = {706, ptf706, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [REAL_32] */
static EIF_TYPE_INDEX ptf707[] = {702,195,0xFFFF};
static struct eif_par_types par707 = {707, ptf707, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [REAL_32] */
static EIF_TYPE_INDEX ptf708[] = {675,195,0xFF01,699,195,0xFFFF};
static struct eif_par_types par708 = {708, ptf708, (uint16) 1, (uint16) 1, (char) 0};

/* SPECIAL [NATURAL_64] */
static EIF_TYPE_INDEX ptf709[] = {144,0xFFF7,712,228,0xFFFF};
static struct eif_par_types par709 = {709, ptf709, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [NATURAL_64] */
static EIF_TYPE_INDEX ptf710[] = {711,228,0xFF01,709,228,0xFFFF};
static struct eif_par_types par710 = {710, ptf710, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [NATURAL_64, G#2] */
static EIF_TYPE_INDEX ptf711[] = {717,228,0xFFF8,2,0xFFFF};
static struct eif_par_types par711 = {711, ptf711, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_INDEXABLE [NATURAL_64] */
static EIF_TYPE_INDEX ptf712[] = {715,228,0xFFFF};
static struct eif_par_types par712 = {712, ptf712, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [NATURAL_64] */
static EIF_TYPE_INDEX ptf713[] = {714,228,0xFFF7,715,228,0xFFFF};
static struct eif_par_types par713 = {713, ptf713, (uint16) 2, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [NATURAL_64] */
static EIF_TYPE_INDEX ptf714[] = {0,0xFFFF};
static struct eif_par_types par714 = {714, ptf714, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [NATURAL_64] */
static EIF_TYPE_INDEX ptf715[] = {0,0xFFFF};
static struct eif_par_types par715 = {715, ptf715, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [NATURAL_64] */
static EIF_TYPE_INDEX ptf716[] = {717,228,0xFF01,712,228,0xFFFF};
static struct eif_par_types par716 = {716, ptf716, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [NATURAL_64, G#2] */
static EIF_TYPE_INDEX ptf717[] = {713,228,0xFFFF};
static struct eif_par_types par717 = {717, ptf717, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY [NATURAL_64] */
static EIF_TYPE_INDEX ptf718[] = {733,228,0xFFF7,719,228,222,0xFFF7,732,228,0xFFFF};
static struct eif_par_types par718 = {718, ptf718, (uint16) 3, (uint16) 1, (char) 0};

/* INDEXABLE [NATURAL_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf719[] = {729,228,222,0xFFF7,712,228,0xFFFF};
static struct eif_par_types par719 = {719, ptf719, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [NATURAL_64] */
static EIF_TYPE_INDEX ptf720[] = {715,228,0xFFFF};
static struct eif_par_types par720 = {720, ptf720, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [NATURAL_64] */
static EIF_TYPE_INDEX ptf721[] = {728,228,0xFFFF};
static struct eif_par_types par721 = {721, ptf721, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [NATURAL_64] */
static EIF_TYPE_INDEX ptf722[] = {727,228,0xFFFF};
static struct eif_par_types par722 = {722, ptf722, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [NATURAL_64] */
static EIF_TYPE_INDEX ptf723[] = {724,228,0xFFFF};
static struct eif_par_types par723 = {723, ptf723, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [NATURAL_64] */
static EIF_TYPE_INDEX ptf724[] = {725,228,0xFFFF};
static struct eif_par_types par724 = {724, ptf724, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [NATURAL_64] */
static EIF_TYPE_INDEX ptf725[] = {726,228,0xFFFF};
static struct eif_par_types par725 = {725, ptf725, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [NATURAL_64] */
static EIF_TYPE_INDEX ptf726[] = {720,228,0xFFFF};
static struct eif_par_types par726 = {726, ptf726, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [NATURAL_64] */
static EIF_TYPE_INDEX ptf727[] = {720,228,0xFFFF};
static struct eif_par_types par727 = {727, ptf727, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [NATURAL_64] */
static EIF_TYPE_INDEX ptf728[] = {720,228,0xFFFF};
static struct eif_par_types par728 = {728, ptf728, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [NATURAL_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf729[] = {725,228,0xFFFF};
static struct eif_par_types par729 = {729, ptf729, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [NATURAL_64] */
static EIF_TYPE_INDEX ptf730[] = {711,228,0xFF01,718,228,0xFFFF};
static struct eif_par_types par730 = {730, ptf730, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [NATURAL_64] */
static EIF_TYPE_INDEX ptf731[] = {0,0xFFFF};
static struct eif_par_types par731 = {731, ptf731, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [NATURAL_64] */
static EIF_TYPE_INDEX ptf732[] = {0,0xFFFF};
static struct eif_par_types par732 = {732, ptf732, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [NATURAL_64] */
static EIF_TYPE_INDEX ptf733[] = {734,228,0xFFFF};
static struct eif_par_types par733 = {733, ptf733, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [NATURAL_64] */
static EIF_TYPE_INDEX ptf734[] = {721,228,0xFFFF};
static struct eif_par_types par734 = {734, ptf734, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [NATURAL_64] */
static EIF_TYPE_INDEX ptf735[] = {732,228,0xFFF7,733,228,0xFFF7,736,228,0xFFF7,161,0xFFFF};
static struct eif_par_types par735 = {735, ptf735, (uint16) 4, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [NATURAL_64] */
static EIF_TYPE_INDEX ptf736[] = {743,228,0xFFF7,737,228,0xFFFF};
static struct eif_par_types par736 = {736, ptf736, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [NATURAL_64] */
static EIF_TYPE_INDEX ptf737[] = {738,228,0xFFF7,741,228,0xFFF7,742,228,222,0xFFFF};
static struct eif_par_types par737 = {737, ptf737, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [NATURAL_64] */
static EIF_TYPE_INDEX ptf738[] = {723,228,0xFFF7,719,228,222,0xFFF7,739,228,0xFFFF};
static struct eif_par_types par738 = {738, ptf738, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [NATURAL_64] */
static EIF_TYPE_INDEX ptf739[] = {724,228,0xFFF7,740,228,0xFFF7,721,228,0xFFFF};
static struct eif_par_types par739 = {739, ptf739, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [NATURAL_64] */
static EIF_TYPE_INDEX ptf740[] = {722,228,0xFFFF};
static struct eif_par_types par740 = {740, ptf740, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [NATURAL_64] */
static EIF_TYPE_INDEX ptf741[] = {721,228,0xFFFF};
static struct eif_par_types par741 = {741, ptf741, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [NATURAL_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf742[] = {729,228,222,0xFFFF};
static struct eif_par_types par742 = {742, ptf742, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [NATURAL_64] */
static EIF_TYPE_INDEX ptf743[] = {738,228,0xFFFF};
static struct eif_par_types par743 = {743, ptf743, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [NATURAL_64] */
static EIF_TYPE_INDEX ptf744[] = {711,228,0xFF01,735,228,0xFFFF};
static struct eif_par_types par744 = {744, ptf744, (uint16) 1, (uint16) 1, (char) 0};

/* SPECIAL [INTEGER_64] */
static EIF_TYPE_INDEX ptf745[] = {144,0xFFF7,748,204,0xFFFF};
static struct eif_par_types par745 = {745, ptf745, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [INTEGER_64] */
static EIF_TYPE_INDEX ptf746[] = {747,204,0xFF01,745,204,0xFFFF};
static struct eif_par_types par746 = {746, ptf746, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [INTEGER_64, G#2] */
static EIF_TYPE_INDEX ptf747[] = {753,204,0xFFF8,2,0xFFFF};
static struct eif_par_types par747 = {747, ptf747, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_INDEXABLE [INTEGER_64] */
static EIF_TYPE_INDEX ptf748[] = {751,204,0xFFFF};
static struct eif_par_types par748 = {748, ptf748, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [INTEGER_64] */
static EIF_TYPE_INDEX ptf749[] = {750,204,0xFFF7,751,204,0xFFFF};
static struct eif_par_types par749 = {749, ptf749, (uint16) 2, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [INTEGER_64] */
static EIF_TYPE_INDEX ptf750[] = {0,0xFFFF};
static struct eif_par_types par750 = {750, ptf750, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [INTEGER_64] */
static EIF_TYPE_INDEX ptf751[] = {0,0xFFFF};
static struct eif_par_types par751 = {751, ptf751, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [INTEGER_64] */
static EIF_TYPE_INDEX ptf752[] = {753,204,0xFF01,748,204,0xFFFF};
static struct eif_par_types par752 = {752, ptf752, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [INTEGER_64, G#2] */
static EIF_TYPE_INDEX ptf753[] = {749,204,0xFFFF};
static struct eif_par_types par753 = {753, ptf753, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY [INTEGER_64] */
static EIF_TYPE_INDEX ptf754[] = {769,204,0xFFF7,755,204,222,0xFFF7,768,204,0xFFFF};
static struct eif_par_types par754 = {754, ptf754, (uint16) 3, (uint16) 1, (char) 0};

/* INDEXABLE [INTEGER_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf755[] = {765,204,222,0xFFF7,748,204,0xFFFF};
static struct eif_par_types par755 = {755, ptf755, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [INTEGER_64] */
static EIF_TYPE_INDEX ptf756[] = {751,204,0xFFFF};
static struct eif_par_types par756 = {756, ptf756, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [INTEGER_64] */
static EIF_TYPE_INDEX ptf757[] = {764,204,0xFFFF};
static struct eif_par_types par757 = {757, ptf757, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [INTEGER_64] */
static EIF_TYPE_INDEX ptf758[] = {763,204,0xFFFF};
static struct eif_par_types par758 = {758, ptf758, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [INTEGER_64] */
static EIF_TYPE_INDEX ptf759[] = {760,204,0xFFFF};
static struct eif_par_types par759 = {759, ptf759, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [INTEGER_64] */
static EIF_TYPE_INDEX ptf760[] = {761,204,0xFFFF};
static struct eif_par_types par760 = {760, ptf760, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [INTEGER_64] */
static EIF_TYPE_INDEX ptf761[] = {762,204,0xFFFF};
static struct eif_par_types par761 = {761, ptf761, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [INTEGER_64] */
static EIF_TYPE_INDEX ptf762[] = {756,204,0xFFFF};
static struct eif_par_types par762 = {762, ptf762, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [INTEGER_64] */
static EIF_TYPE_INDEX ptf763[] = {756,204,0xFFFF};
static struct eif_par_types par763 = {763, ptf763, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [INTEGER_64] */
static EIF_TYPE_INDEX ptf764[] = {756,204,0xFFFF};
static struct eif_par_types par764 = {764, ptf764, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [INTEGER_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf765[] = {761,204,0xFFFF};
static struct eif_par_types par765 = {765, ptf765, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [INTEGER_64] */
static EIF_TYPE_INDEX ptf766[] = {747,204,0xFF01,754,204,0xFFFF};
static struct eif_par_types par766 = {766, ptf766, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [INTEGER_64] */
static EIF_TYPE_INDEX ptf767[] = {0,0xFFFF};
static struct eif_par_types par767 = {767, ptf767, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [INTEGER_64] */
static EIF_TYPE_INDEX ptf768[] = {0,0xFFFF};
static struct eif_par_types par768 = {768, ptf768, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [INTEGER_64] */
static EIF_TYPE_INDEX ptf769[] = {770,204,0xFFFF};
static struct eif_par_types par769 = {769, ptf769, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [INTEGER_64] */
static EIF_TYPE_INDEX ptf770[] = {757,204,0xFFFF};
static struct eif_par_types par770 = {770, ptf770, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [INTEGER_64] */
static EIF_TYPE_INDEX ptf771[] = {768,204,0xFFF7,769,204,0xFFF7,772,204,0xFFF7,161,0xFFFF};
static struct eif_par_types par771 = {771, ptf771, (uint16) 4, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [INTEGER_64] */
static EIF_TYPE_INDEX ptf772[] = {779,204,0xFFF7,773,204,0xFFFF};
static struct eif_par_types par772 = {772, ptf772, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [INTEGER_64] */
static EIF_TYPE_INDEX ptf773[] = {774,204,0xFFF7,777,204,0xFFF7,778,204,222,0xFFFF};
static struct eif_par_types par773 = {773, ptf773, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [INTEGER_64] */
static EIF_TYPE_INDEX ptf774[] = {759,204,0xFFF7,755,204,222,0xFFF7,775,204,0xFFFF};
static struct eif_par_types par774 = {774, ptf774, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [INTEGER_64] */
static EIF_TYPE_INDEX ptf775[] = {760,204,0xFFF7,776,204,0xFFF7,757,204,0xFFFF};
static struct eif_par_types par775 = {775, ptf775, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [INTEGER_64] */
static EIF_TYPE_INDEX ptf776[] = {758,204,0xFFFF};
static struct eif_par_types par776 = {776, ptf776, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [INTEGER_64] */
static EIF_TYPE_INDEX ptf777[] = {757,204,0xFFFF};
static struct eif_par_types par777 = {777, ptf777, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [INTEGER_64, INTEGER_32] */
static EIF_TYPE_INDEX ptf778[] = {765,204,222,0xFFFF};
static struct eif_par_types par778 = {778, ptf778, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [INTEGER_64] */
static EIF_TYPE_INDEX ptf779[] = {774,204,0xFFFF};
static struct eif_par_types par779 = {779, ptf779, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [INTEGER_64] */
static EIF_TYPE_INDEX ptf780[] = {747,204,0xFF01,771,204,0xFFFF};
static struct eif_par_types par780 = {780, ptf780, (uint16) 1, (uint16) 1, (char) 0};

/* SPECIAL [INTEGER_8] */
static EIF_TYPE_INDEX ptf781[] = {144,0xFFF7,784,192,0xFFFF};
static struct eif_par_types par781 = {781, ptf781, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [INTEGER_8] */
static EIF_TYPE_INDEX ptf782[] = {783,192,0xFF01,781,192,0xFFFF};
static struct eif_par_types par782 = {782, ptf782, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [INTEGER_8, G#2] */
static EIF_TYPE_INDEX ptf783[] = {789,192,0xFFF8,2,0xFFFF};
static struct eif_par_types par783 = {783, ptf783, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_INDEXABLE [INTEGER_8] */
static EIF_TYPE_INDEX ptf784[] = {787,192,0xFFFF};
static struct eif_par_types par784 = {784, ptf784, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [INTEGER_8] */
static EIF_TYPE_INDEX ptf785[] = {786,192,0xFFF7,787,192,0xFFFF};
static struct eif_par_types par785 = {785, ptf785, (uint16) 2, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [INTEGER_8] */
static EIF_TYPE_INDEX ptf786[] = {0,0xFFFF};
static struct eif_par_types par786 = {786, ptf786, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [INTEGER_8] */
static EIF_TYPE_INDEX ptf787[] = {0,0xFFFF};
static struct eif_par_types par787 = {787, ptf787, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [INTEGER_8] */
static EIF_TYPE_INDEX ptf788[] = {789,192,0xFF01,784,192,0xFFFF};
static struct eif_par_types par788 = {788, ptf788, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [INTEGER_8, G#2] */
static EIF_TYPE_INDEX ptf789[] = {785,192,0xFFFF};
static struct eif_par_types par789 = {789, ptf789, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY [INTEGER_8] */
static EIF_TYPE_INDEX ptf790[] = {805,192,0xFFF7,791,192,222,0xFFF7,804,192,0xFFFF};
static struct eif_par_types par790 = {790, ptf790, (uint16) 3, (uint16) 1, (char) 0};

/* INDEXABLE [INTEGER_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf791[] = {801,192,222,0xFFF7,784,192,0xFFFF};
static struct eif_par_types par791 = {791, ptf791, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [INTEGER_8] */
static EIF_TYPE_INDEX ptf792[] = {787,192,0xFFFF};
static struct eif_par_types par792 = {792, ptf792, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [INTEGER_8] */
static EIF_TYPE_INDEX ptf793[] = {800,192,0xFFFF};
static struct eif_par_types par793 = {793, ptf793, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [INTEGER_8] */
static EIF_TYPE_INDEX ptf794[] = {799,192,0xFFFF};
static struct eif_par_types par794 = {794, ptf794, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [INTEGER_8] */
static EIF_TYPE_INDEX ptf795[] = {796,192,0xFFFF};
static struct eif_par_types par795 = {795, ptf795, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [INTEGER_8] */
static EIF_TYPE_INDEX ptf796[] = {797,192,0xFFFF};
static struct eif_par_types par796 = {796, ptf796, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [INTEGER_8] */
static EIF_TYPE_INDEX ptf797[] = {798,192,0xFFFF};
static struct eif_par_types par797 = {797, ptf797, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [INTEGER_8] */
static EIF_TYPE_INDEX ptf798[] = {792,192,0xFFFF};
static struct eif_par_types par798 = {798, ptf798, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [INTEGER_8] */
static EIF_TYPE_INDEX ptf799[] = {792,192,0xFFFF};
static struct eif_par_types par799 = {799, ptf799, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [INTEGER_8] */
static EIF_TYPE_INDEX ptf800[] = {792,192,0xFFFF};
static struct eif_par_types par800 = {800, ptf800, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [INTEGER_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf801[] = {797,192,0xFFFF};
static struct eif_par_types par801 = {801, ptf801, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [INTEGER_8] */
static EIF_TYPE_INDEX ptf802[] = {783,192,0xFF01,790,192,0xFFFF};
static struct eif_par_types par802 = {802, ptf802, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [INTEGER_8] */
static EIF_TYPE_INDEX ptf803[] = {0,0xFFFF};
static struct eif_par_types par803 = {803, ptf803, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [INTEGER_8] */
static EIF_TYPE_INDEX ptf804[] = {0,0xFFFF};
static struct eif_par_types par804 = {804, ptf804, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [INTEGER_8] */
static EIF_TYPE_INDEX ptf805[] = {806,192,0xFFFF};
static struct eif_par_types par805 = {805, ptf805, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [INTEGER_8] */
static EIF_TYPE_INDEX ptf806[] = {793,192,0xFFFF};
static struct eif_par_types par806 = {806, ptf806, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [INTEGER_8] */
static EIF_TYPE_INDEX ptf807[] = {804,192,0xFFF7,805,192,0xFFF7,808,192,0xFFF7,161,0xFFFF};
static struct eif_par_types par807 = {807, ptf807, (uint16) 4, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [INTEGER_8] */
static EIF_TYPE_INDEX ptf808[] = {815,192,0xFFF7,809,192,0xFFFF};
static struct eif_par_types par808 = {808, ptf808, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [INTEGER_8] */
static EIF_TYPE_INDEX ptf809[] = {810,192,0xFFF7,813,192,0xFFF7,814,192,222,0xFFFF};
static struct eif_par_types par809 = {809, ptf809, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [INTEGER_8] */
static EIF_TYPE_INDEX ptf810[] = {795,192,0xFFF7,791,192,222,0xFFF7,811,192,0xFFFF};
static struct eif_par_types par810 = {810, ptf810, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [INTEGER_8] */
static EIF_TYPE_INDEX ptf811[] = {796,192,0xFFF7,812,192,0xFFF7,793,192,0xFFFF};
static struct eif_par_types par811 = {811, ptf811, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [INTEGER_8] */
static EIF_TYPE_INDEX ptf812[] = {794,192,0xFFFF};
static struct eif_par_types par812 = {812, ptf812, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [INTEGER_8] */
static EIF_TYPE_INDEX ptf813[] = {793,192,0xFFFF};
static struct eif_par_types par813 = {813, ptf813, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [INTEGER_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf814[] = {801,192,222,0xFFFF};
static struct eif_par_types par814 = {814, ptf814, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [INTEGER_8] */
static EIF_TYPE_INDEX ptf815[] = {810,192,0xFFFF};
static struct eif_par_types par815 = {815, ptf815, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [INTEGER_8] */
static EIF_TYPE_INDEX ptf816[] = {783,192,0xFF01,807,192,0xFFFF};
static struct eif_par_types par816 = {816, ptf816, (uint16) 1, (uint16) 1, (char) 0};

/* SPECIAL [INTEGER_16] */
static EIF_TYPE_INDEX ptf817[] = {144,0xFFF7,820,225,0xFFFF};
static struct eif_par_types par817 = {817, ptf817, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [INTEGER_16] */
static EIF_TYPE_INDEX ptf818[] = {819,225,0xFF01,817,225,0xFFFF};
static struct eif_par_types par818 = {818, ptf818, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [INTEGER_16, G#2] */
static EIF_TYPE_INDEX ptf819[] = {825,225,0xFFF8,2,0xFFFF};
static struct eif_par_types par819 = {819, ptf819, (uint16) 1, (uint16) 2, (char) 0};

/* READABLE_INDEXABLE [INTEGER_16] */
static EIF_TYPE_INDEX ptf820[] = {823,225,0xFFFF};
static struct eif_par_types par820 = {820, ptf820, (uint16) 1, (uint16) 1, (char) 0};

/* INDEXABLE_ITERATION_CURSOR [INTEGER_16] */
static EIF_TYPE_INDEX ptf821[] = {822,225,0xFFF7,823,225,0xFFFF};
static struct eif_par_types par821 = {821, ptf821, (uint16) 2, (uint16) 1, (char) 0};

/* ITERATION_CURSOR [INTEGER_16] */
static EIF_TYPE_INDEX ptf822[] = {0,0xFFFF};
static struct eif_par_types par822 = {822, ptf822, (uint16) 1, (uint16) 1, (char) 0};

/* ITERABLE [INTEGER_16] */
static EIF_TYPE_INDEX ptf823[] = {0,0xFFFF};
static struct eif_par_types par823 = {823, ptf823, (uint16) 1, (uint16) 1, (char) 0};

/* READABLE_INDEXABLE_ITERATION_CURSOR [INTEGER_16] */
static EIF_TYPE_INDEX ptf824[] = {825,225,0xFF01,820,225,0xFFFF};
static struct eif_par_types par824 = {824, ptf824, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_INDEXABLE_ITERATION_CURSOR [INTEGER_16, G#2] */
static EIF_TYPE_INDEX ptf825[] = {821,225,0xFFFF};
static struct eif_par_types par825 = {825, ptf825, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY [INTEGER_16] */
static EIF_TYPE_INDEX ptf826[] = {841,225,0xFFF7,827,225,222,0xFFF7,840,225,0xFFFF};
static struct eif_par_types par826 = {826, ptf826, (uint16) 3, (uint16) 1, (char) 0};

/* INDEXABLE [INTEGER_16, INTEGER_32] */
static EIF_TYPE_INDEX ptf827[] = {837,225,222,0xFFF7,820,225,0xFFFF};
static struct eif_par_types par827 = {827, ptf827, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [INTEGER_16] */
static EIF_TYPE_INDEX ptf828[] = {823,225,0xFFFF};
static struct eif_par_types par828 = {828, ptf828, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [INTEGER_16] */
static EIF_TYPE_INDEX ptf829[] = {836,225,0xFFFF};
static struct eif_par_types par829 = {829, ptf829, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [INTEGER_16] */
static EIF_TYPE_INDEX ptf830[] = {835,225,0xFFFF};
static struct eif_par_types par830 = {830, ptf830, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [INTEGER_16] */
static EIF_TYPE_INDEX ptf831[] = {832,225,0xFFFF};
static struct eif_par_types par831 = {831, ptf831, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [INTEGER_16] */
static EIF_TYPE_INDEX ptf832[] = {833,225,0xFFFF};
static struct eif_par_types par832 = {832, ptf832, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [INTEGER_16] */
static EIF_TYPE_INDEX ptf833[] = {834,225,0xFFFF};
static struct eif_par_types par833 = {833, ptf833, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [INTEGER_16] */
static EIF_TYPE_INDEX ptf834[] = {828,225,0xFFFF};
static struct eif_par_types par834 = {834, ptf834, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [INTEGER_16] */
static EIF_TYPE_INDEX ptf835[] = {828,225,0xFFFF};
static struct eif_par_types par835 = {835, ptf835, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [INTEGER_16] */
static EIF_TYPE_INDEX ptf836[] = {828,225,0xFFFF};
static struct eif_par_types par836 = {836, ptf836, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [INTEGER_16, INTEGER_32] */
static EIF_TYPE_INDEX ptf837[] = {833,225,0xFFFF};
static struct eif_par_types par837 = {837, ptf837, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [INTEGER_16] */
static EIF_TYPE_INDEX ptf838[] = {819,225,0xFF01,826,225,0xFFFF};
static struct eif_par_types par838 = {838, ptf838, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [INTEGER_16] */
static EIF_TYPE_INDEX ptf839[] = {0,0xFFFF};
static struct eif_par_types par839 = {839, ptf839, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [INTEGER_16] */
static EIF_TYPE_INDEX ptf840[] = {0,0xFFFF};
static struct eif_par_types par840 = {840, ptf840, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [INTEGER_16] */
static EIF_TYPE_INDEX ptf841[] = {842,225,0xFFFF};
static struct eif_par_types par841 = {841, ptf841, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [INTEGER_16] */
static EIF_TYPE_INDEX ptf842[] = {829,225,0xFFFF};
static struct eif_par_types par842 = {842, ptf842, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [INTEGER_16] */
static EIF_TYPE_INDEX ptf843[] = {840,225,0xFFF7,841,225,0xFFF7,844,225,0xFFF7,161,0xFFFF};
static struct eif_par_types par843 = {843, ptf843, (uint16) 4, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [INTEGER_16] */
static EIF_TYPE_INDEX ptf844[] = {851,225,0xFFF7,845,225,0xFFFF};
static struct eif_par_types par844 = {844, ptf844, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [INTEGER_16] */
static EIF_TYPE_INDEX ptf845[] = {846,225,0xFFF7,849,225,0xFFF7,850,225,222,0xFFFF};
static struct eif_par_types par845 = {845, ptf845, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [INTEGER_16] */
static EIF_TYPE_INDEX ptf846[] = {831,225,0xFFF7,827,225,222,0xFFF7,847,225,0xFFFF};
static struct eif_par_types par846 = {846, ptf846, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [INTEGER_16] */
static EIF_TYPE_INDEX ptf847[] = {832,225,0xFFF7,848,225,0xFFF7,829,225,0xFFFF};
static struct eif_par_types par847 = {847, ptf847, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [INTEGER_16] */
static EIF_TYPE_INDEX ptf848[] = {830,225,0xFFFF};
static struct eif_par_types par848 = {848, ptf848, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [INTEGER_16] */
static EIF_TYPE_INDEX ptf849[] = {829,225,0xFFFF};
static struct eif_par_types par849 = {849, ptf849, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [INTEGER_16, INTEGER_32] */
static EIF_TYPE_INDEX ptf850[] = {837,225,222,0xFFFF};
static struct eif_par_types par850 = {850, ptf850, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [INTEGER_16] */
static EIF_TYPE_INDEX ptf851[] = {846,225,0xFFFF};
static struct eif_par_types par851 = {851, ptf851, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [INTEGER_16] */
static EIF_TYPE_INDEX ptf852[] = {819,225,0xFF01,843,225,0xFFFF};
static struct eif_par_types par852 = {852, ptf852, (uint16) 1, (uint16) 1, (char) 0};

/* SPECIAL [CHARACTER_8] */
static EIF_TYPE_INDEX ptf853[] = {144,0xFFF7,600,201,0xFFFF};
static struct eif_par_types par853 = {853, ptf853, (uint16) 2, (uint16) 1, (char) 0};

/* SPECIAL_ITERATION_CURSOR [CHARACTER_8] */
static EIF_TYPE_INDEX ptf854[] = {855,201,0xFF01,853,201,0xFFFF};
static struct eif_par_types par854 = {854, ptf854, (uint16) 1, (uint16) 1, (char) 0};

/* GENERAL_SPECIAL_ITERATION_CURSOR [CHARACTER_8, G#2] */
static EIF_TYPE_INDEX ptf855[] = {605,201,0xFFF8,2,0xFFFF};
static struct eif_par_types par855 = {855, ptf855, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY [CHARACTER_8] */
static EIF_TYPE_INDEX ptf856[] = {871,201,0xFFF7,857,201,222,0xFFF7,870,201,0xFFFF};
static struct eif_par_types par856 = {856, ptf856, (uint16) 3, (uint16) 1, (char) 0};

/* INDEXABLE [CHARACTER_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf857[] = {867,201,222,0xFFF7,600,201,0xFFFF};
static struct eif_par_types par857 = {857, ptf857, (uint16) 2, (uint16) 2, (char) 0};

/* CONTAINER [CHARACTER_8] */
static EIF_TYPE_INDEX ptf858[] = {603,201,0xFFFF};
static struct eif_par_types par858 = {858, ptf858, (uint16) 1, (uint16) 1, (char) 0};

/* FINITE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf859[] = {866,201,0xFFFF};
static struct eif_par_types par859 = {859, ptf859, (uint16) 1, (uint16) 1, (char) 0};

/* LINEAR [CHARACTER_8] */
static EIF_TYPE_INDEX ptf860[] = {865,201,0xFFFF};
static struct eif_par_types par860 = {860, ptf860, (uint16) 1, (uint16) 1, (char) 0};

/* CURSOR_STRUCTURE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf861[] = {862,201,0xFFFF};
static struct eif_par_types par861 = {861, ptf861, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf862[] = {863,201,0xFFFF};
static struct eif_par_types par862 = {862, ptf862, (uint16) 1, (uint16) 1, (char) 0};

/* BAG [CHARACTER_8] */
static EIF_TYPE_INDEX ptf863[] = {864,201,0xFFFF};
static struct eif_par_types par863 = {863, ptf863, (uint16) 1, (uint16) 1, (char) 0};

/* COLLECTION [CHARACTER_8] */
static EIF_TYPE_INDEX ptf864[] = {858,201,0xFFFF};
static struct eif_par_types par864 = {864, ptf864, (uint16) 1, (uint16) 1, (char) 0};

/* TRAVERSABLE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf865[] = {858,201,0xFFFF};
static struct eif_par_types par865 = {865, ptf865, (uint16) 1, (uint16) 1, (char) 0};

/* BOX [CHARACTER_8] */
static EIF_TYPE_INDEX ptf866[] = {858,201,0xFFFF};
static struct eif_par_types par866 = {866, ptf866, (uint16) 1, (uint16) 1, (char) 0};

/* TABLE [CHARACTER_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf867[] = {863,201,0xFFFF};
static struct eif_par_types par867 = {867, ptf867, (uint16) 1, (uint16) 2, (char) 0};

/* ARRAY_ITERATION_CURSOR [CHARACTER_8] */
static EIF_TYPE_INDEX ptf868[] = {855,201,0xFF01,856,201,0xFFFF};
static struct eif_par_types par868 = {868, ptf868, (uint16) 1, (uint16) 1, (char) 0};

/* NATIVE_ARRAY [CHARACTER_8] */
static EIF_TYPE_INDEX ptf869[] = {0,0xFFFF};
static struct eif_par_types par869 = {869, ptf869, (uint16) 1, (uint16) 1, (char) 0};

/* TO_SPECIAL [CHARACTER_8] */
static EIF_TYPE_INDEX ptf870[] = {0,0xFFFF};
static struct eif_par_types par870 = {870, ptf870, (uint16) 1, (uint16) 1, (char) 0};

/* RESIZABLE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf871[] = {872,201,0xFFFF};
static struct eif_par_types par871 = {871, ptf871, (uint16) 1, (uint16) 1, (char) 0};

/* BOUNDED [CHARACTER_8] */
static EIF_TYPE_INDEX ptf872[] = {859,201,0xFFFF};
static struct eif_par_types par872 = {872, ptf872, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST [CHARACTER_8] */
static EIF_TYPE_INDEX ptf873[] = {870,201,0xFFF7,871,201,0xFFF7,874,201,0xFFF7,161,0xFFFF};
static struct eif_par_types par873 = {873, ptf873, (uint16) 4, (uint16) 1, (char) 0};

/* DYNAMIC_LIST [CHARACTER_8] */
static EIF_TYPE_INDEX ptf874[] = {881,201,0xFFF7,875,201,0xFFFF};
static struct eif_par_types par874 = {874, ptf874, (uint16) 2, (uint16) 1, (char) 0};

/* DYNAMIC_CHAIN [CHARACTER_8] */
static EIF_TYPE_INDEX ptf875[] = {876,201,0xFFF7,879,201,0xFFF7,880,201,222,0xFFFF};
static struct eif_par_types par875 = {875, ptf875, (uint16) 3, (uint16) 1, (char) 0};

/* CHAIN [CHARACTER_8] */
static EIF_TYPE_INDEX ptf876[] = {861,201,0xFFF7,857,201,222,0xFFF7,877,201,0xFFFF};
static struct eif_par_types par876 = {876, ptf876, (uint16) 3, (uint16) 1, (char) 0};

/* SEQUENCE [CHARACTER_8] */
static EIF_TYPE_INDEX ptf877[] = {862,201,0xFFF7,878,201,0xFFF7,859,201,0xFFFF};
static struct eif_par_types par877 = {877, ptf877, (uint16) 3, (uint16) 1, (char) 0};

/* BILINEAR [CHARACTER_8] */
static EIF_TYPE_INDEX ptf878[] = {860,201,0xFFFF};
static struct eif_par_types par878 = {878, ptf878, (uint16) 1, (uint16) 1, (char) 0};

/* UNBOUNDED [CHARACTER_8] */
static EIF_TYPE_INDEX ptf879[] = {859,201,0xFFFF};
static struct eif_par_types par879 = {879, ptf879, (uint16) 1, (uint16) 1, (char) 0};

/* DYNAMIC_TABLE [CHARACTER_8, INTEGER_32] */
static EIF_TYPE_INDEX ptf880[] = {867,201,222,0xFFFF};
static struct eif_par_types par880 = {880, ptf880, (uint16) 1, (uint16) 2, (char) 0};

/* LIST [CHARACTER_8] */
static EIF_TYPE_INDEX ptf881[] = {876,201,0xFFFF};
static struct eif_par_types par881 = {881, ptf881, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_LIST_ITERATION_CURSOR [CHARACTER_8] */
static EIF_TYPE_INDEX ptf882[] = {855,201,0xFF01,873,201,0xFFFF};
static struct eif_par_types par882 = {882, ptf882, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [G#1] */
static EIF_TYPE_INDEX ptf883[] = {145,0xFFFF};
static struct eif_par_types par883 = {883, ptf883, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [POINTER] */
static EIF_TYPE_INDEX ptf884[] = {145,0xFFFF};
static struct eif_par_types par884 = {884, ptf884, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [POINTER] */
static EIF_TYPE_INDEX ptf885[] = {886,231,0xFFFF};
static struct eif_par_types par885 = {885, ptf885, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [POINTER] */
static EIF_TYPE_INDEX ptf886[] = {230,0xFFFF};
static struct eif_par_types par886 = {886, ptf886, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [POINTER]] */
static EIF_TYPE_INDEX ptf887[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par887 = {887, ptf887, (uint16) 3, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [POINTER] */
static EIF_TYPE_INDEX ptf888[] = {145,0xFFFF};
static struct eif_par_types par888 = {888, ptf888, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [NATURAL_16] */
static EIF_TYPE_INDEX ptf889[] = {145,0xFFFF};
static struct eif_par_types par889 = {889, ptf889, (uint16) 1, (uint16) 1, (char) 0};

/* CELL [INTEGER_32] */
static EIF_TYPE_INDEX ptf890[] = {0,0xFFFF};
static struct eif_par_types par890 = {890, ptf890, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [CHARACTER_32] */
static EIF_TYPE_INDEX ptf891[] = {145,0xFFFF};
static struct eif_par_types par891 = {891, ptf891, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [CHARACTER_32] */
static EIF_TYPE_INDEX ptf892[] = {893,198,0xFFFF};
static struct eif_par_types par892 = {892, ptf892, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [CHARACTER_32] */
static EIF_TYPE_INDEX ptf893[] = {230,0xFFFF};
static struct eif_par_types par893 = {893, ptf893, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [CHARACTER_32]] */
static EIF_TYPE_INDEX ptf894[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par894 = {894, ptf894, (uint16) 3, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [INTEGER_32] */
static EIF_TYPE_INDEX ptf895[] = {145,0xFFFF};
static struct eif_par_types par895 = {895, ptf895, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [NATURAL_16] */
static EIF_TYPE_INDEX ptf896[] = {145,0xFFFF};
static struct eif_par_types par896 = {896, ptf896, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [REAL_64] */
static EIF_TYPE_INDEX ptf897[] = {145,0xFFFF};
static struct eif_par_types par897 = {897, ptf897, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [REAL_64] */
static EIF_TYPE_INDEX ptf898[] = {899,210,0xFFFF};
static struct eif_par_types par898 = {898, ptf898, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [REAL_64] */
static EIF_TYPE_INDEX ptf899[] = {230,0xFFFF};
static struct eif_par_types par899 = {899, ptf899, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [REAL_64]] */
static EIF_TYPE_INDEX ptf900[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par900 = {900, ptf900, (uint16) 3, (uint16) 1, (char) 0};

/* PREDICATE [G#1] */
static EIF_TYPE_INDEX ptf901[] = {273,0xFFF8,1,207,0xFFFF};
static struct eif_par_types par901 = {901, ptf901, (uint16) 1, (uint16) 1, (char) 0};

/* FUNCTION [G#1, G#2] */
static EIF_TYPE_INDEX ptf902[] = {262,0xFFF8,1,0xFFFF};
static struct eif_par_types par902 = {902, ptf902, (uint16) 1, (uint16) 2, (char) 0};

/* RT_DBG_LOCAL_RECORD [INTEGER_16] */
static EIF_TYPE_INDEX ptf903[] = {145,0xFFFF};
static struct eif_par_types par903 = {903, ptf903, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [INTEGER_16] */
static EIF_TYPE_INDEX ptf904[] = {905,225,0xFFFF};
static struct eif_par_types par904 = {904, ptf904, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [INTEGER_16] */
static EIF_TYPE_INDEX ptf905[] = {230,0xFFFF};
static struct eif_par_types par905 = {905, ptf905, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [INTEGER_16]] */
static EIF_TYPE_INDEX ptf906[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par906 = {906, ptf906, (uint16) 3, (uint16) 1, (char) 0};

/* LINKED_LIST [INTEGER_32] */
static EIF_TYPE_INDEX ptf907[] = {363,222,0xFFFF};
static struct eif_par_types par907 = {907, ptf907, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_LIST_ITERATION_CURSOR [INTEGER_32] */
static EIF_TYPE_INDEX ptf908[] = {343,222,0xFFFF};
static struct eif_par_types par908 = {908, ptf908, (uint16) 1, (uint16) 1, (char) 0};

/* LINKABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf909[] = {890,222,0xFFFF};
static struct eif_par_types par909 = {909, ptf909, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_LIST_CURSOR [INTEGER_32] */
static EIF_TYPE_INDEX ptf910[] = {147,0xFFFF};
static struct eif_par_types par910 = {910, ptf910, (uint16) 1, (uint16) 1, (char) 0};

/* COUNTABLE_SEQUENCE [INTEGER_32] */
static EIF_TYPE_INDEX ptf911[] = {912,222,0xFFF7,349,222,0xFFFF};
static struct eif_par_types par911 = {911, ptf911, (uint16) 2, (uint16) 1, (char) 0};

/* COUNTABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf912[] = {913,222,0xFFFF};
static struct eif_par_types par912 = {912, ptf912, (uint16) 1, (uint16) 1, (char) 0};

/* INFINITE [INTEGER_32] */
static EIF_TYPE_INDEX ptf913[] = {355,222,0xFFFF};
static struct eif_par_types par913 = {913, ptf913, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [INTEGER_8] */
static EIF_TYPE_INDEX ptf914[] = {915,192,0xFFFF};
static struct eif_par_types par914 = {914, ptf914, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [INTEGER_8] */
static EIF_TYPE_INDEX ptf915[] = {230,0xFFFF};
static struct eif_par_types par915 = {915, ptf915, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [INTEGER_8]] */
static EIF_TYPE_INDEX ptf916[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par916 = {916, ptf916, (uint16) 3, (uint16) 1, (char) 0};

/* LINKED_STACK [BOOLEAN] */
static EIF_TYPE_INDEX ptf917[] = {923,207,0xFFF7,921,207,0xFFFF};
static struct eif_par_types par917 = {917, ptf917, (uint16) 2, (uint16) 1, (char) 0};

/* LINKED_LIST_ITERATION_CURSOR [BOOLEAN] */
static EIF_TYPE_INDEX ptf918[] = {462,207,0xFFFF};
static struct eif_par_types par918 = {918, ptf918, (uint16) 1, (uint16) 1, (char) 0};

/* LINKABLE [BOOLEAN] */
static EIF_TYPE_INDEX ptf919[] = {920,207,0xFFFF};
static struct eif_par_types par919 = {919, ptf919, (uint16) 1, (uint16) 1, (char) 0};

/* CELL [BOOLEAN] */
static EIF_TYPE_INDEX ptf920[] = {0,0xFFFF};
static struct eif_par_types par920 = {920, ptf920, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_LIST [BOOLEAN] */
static EIF_TYPE_INDEX ptf921[] = {481,207,0xFFFF};
static struct eif_par_types par921 = {921, ptf921, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_LIST_CURSOR [BOOLEAN] */
static EIF_TYPE_INDEX ptf922[] = {147,0xFFFF};
static struct eif_par_types par922 = {922, ptf922, (uint16) 1, (uint16) 1, (char) 0};

/* STACK [BOOLEAN] */
static EIF_TYPE_INDEX ptf923[] = {925,207,0xFFFF};
static struct eif_par_types par923 = {923, ptf923, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_STACK [BOOLEAN] */
static EIF_TYPE_INDEX ptf924[] = {923,207,0xFFF7,454,207,0xFFFF};
static struct eif_par_types par924 = {924, ptf924, (uint16) 2, (uint16) 1, (char) 0};

/* DISPENSER [BOOLEAN] */
static EIF_TYPE_INDEX ptf925[] = {470,207,0xFFF7,467,207,0xFFFF};
static struct eif_par_types par925 = {925, ptf925, (uint16) 2, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [NATURAL_8] */
static EIF_TYPE_INDEX ptf926[] = {145,0xFFFF};
static struct eif_par_types par926 = {926, ptf926, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [INTEGER_16] */
static EIF_TYPE_INDEX ptf927[] = {145,0xFFFF};
static struct eif_par_types par927 = {927, ptf927, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [INTEGER_8] */
static EIF_TYPE_INDEX ptf928[] = {145,0xFFFF};
static struct eif_par_types par928 = {928, ptf928, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [CHARACTER_8] */
static EIF_TYPE_INDEX ptf929[] = {145,0xFFFF};
static struct eif_par_types par929 = {929, ptf929, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [BOOLEAN] */
static EIF_TYPE_INDEX ptf930[] = {145,0xFFFF};
static struct eif_par_types par930 = {930, ptf930, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [BOOLEAN] */
static EIF_TYPE_INDEX ptf931[] = {932,207,0xFFFF};
static struct eif_par_types par931 = {931, ptf931, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [BOOLEAN] */
static EIF_TYPE_INDEX ptf932[] = {230,0xFFFF};
static struct eif_par_types par932 = {932, ptf932, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [BOOLEAN]] */
static EIF_TYPE_INDEX ptf933[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par933 = {933, ptf933, (uint16) 3, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [NATURAL_32] */
static EIF_TYPE_INDEX ptf934[] = {145,0xFFFF};
static struct eif_par_types par934 = {934, ptf934, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [G#1] */
static EIF_TYPE_INDEX ptf935[] = {145,0xFFFF};
static struct eif_par_types par935 = {935, ptf935, (uint16) 1, (uint16) 1, (char) 0};

/* CELL [NATURAL_64] */
static EIF_TYPE_INDEX ptf936[] = {0,0xFFFF};
static struct eif_par_types par936 = {936, ptf936, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [CHARACTER_8] */
static EIF_TYPE_INDEX ptf937[] = {145,0xFFFF};
static struct eif_par_types par937 = {937, ptf937, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [INTEGER_8] */
static EIF_TYPE_INDEX ptf938[] = {145,0xFFFF};
static struct eif_par_types par938 = {938, ptf938, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [NATURAL_8] */
static EIF_TYPE_INDEX ptf939[] = {145,0xFFFF};
static struct eif_par_types par939 = {939, ptf939, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [INTEGER_8] */
static EIF_TYPE_INDEX ptf940[] = {145,0xFFFF};
static struct eif_par_types par940 = {940, ptf940, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [REAL_64] */
static EIF_TYPE_INDEX ptf941[] = {145,0xFFFF};
static struct eif_par_types par941 = {941, ptf941, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [CHARACTER_32] */
static EIF_TYPE_INDEX ptf942[] = {145,0xFFFF};
static struct eif_par_types par942 = {942, ptf942, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [POINTER] */
static EIF_TYPE_INDEX ptf943[] = {145,0xFFFF};
static struct eif_par_types par943 = {943, ptf943, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [BOOLEAN] */
static EIF_TYPE_INDEX ptf944[] = {145,0xFFFF};
static struct eif_par_types par944 = {944, ptf944, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [REAL_32] */
static EIF_TYPE_INDEX ptf945[] = {145,0xFFFF};
static struct eif_par_types par945 = {945, ptf945, (uint16) 1, (uint16) 1, (char) 0};

/* CELL [CHARACTER_32] */
static EIF_TYPE_INDEX ptf946[] = {0,0xFFFF};
static struct eif_par_types par946 = {946, ptf946, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [NATURAL_32] */
static EIF_TYPE_INDEX ptf947[] = {145,0xFFFF};
static struct eif_par_types par947 = {947, ptf947, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [INTEGER_64] */
static EIF_TYPE_INDEX ptf948[] = {145,0xFFFF};
static struct eif_par_types par948 = {948, ptf948, (uint16) 1, (uint16) 1, (char) 0};

/* TYPED_POINTER [INTEGER_64] */
static EIF_TYPE_INDEX ptf949[] = {950,204,0xFFFF};
static struct eif_par_types par949 = {949, ptf949, (uint16) 1, (uint16) 1, (char) 1};

/* reference TYPED_POINTER [INTEGER_64] */
static EIF_TYPE_INDEX ptf950[] = {230,0xFFFF};
static struct eif_par_types par950 = {950, ptf950, (uint16) 1, (uint16) 1, (char) 1};

/* TYPE [TYPED_POINTER [INTEGER_64]] */
static EIF_TYPE_INDEX ptf951[] = {188,0xFFF7,115,0xFFF7,142,0xFFFF};
static struct eif_par_types par951 = {951, ptf951, (uint16) 3, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [INTEGER_64] */
static EIF_TYPE_INDEX ptf952[] = {145,0xFFFF};
static struct eif_par_types par952 = {952, ptf952, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [BOOLEAN] */
static EIF_TYPE_INDEX ptf953[] = {145,0xFFFF};
static struct eif_par_types par953 = {953, ptf953, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [NATURAL_64] */
static EIF_TYPE_INDEX ptf954[] = {145,0xFFFF};
static struct eif_par_types par954 = {954, ptf954, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_FIELD_RECORD [INTEGER_16] */
static EIF_TYPE_INDEX ptf955[] = {145,0xFFFF};
static struct eif_par_types par955 = {955, ptf955, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [REAL_32] */
static EIF_TYPE_INDEX ptf956[] = {145,0xFFFF};
static struct eif_par_types par956 = {956, ptf956, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [REAL_64] */
static EIF_TYPE_INDEX ptf957[] = {145,0xFFFF};
static struct eif_par_types par957 = {957, ptf957, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_LOCAL_RECORD [NATURAL_64] */
static EIF_TYPE_INDEX ptf958[] = {145,0xFFFF};
static struct eif_par_types par958 = {958, ptf958, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [INTEGER_64] */
static EIF_TYPE_INDEX ptf959[] = {145,0xFFFF};
static struct eif_par_types par959 = {959, ptf959, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_STACK [INTEGER_32] */
static EIF_TYPE_INDEX ptf960[] = {961,222,0xFFF7,907,222,0xFFFF};
static struct eif_par_types par960 = {960, ptf960, (uint16) 2, (uint16) 1, (char) 0};

/* STACK [INTEGER_32] */
static EIF_TYPE_INDEX ptf961[] = {963,222,0xFFFF};
static struct eif_par_types par961 = {961, ptf961, (uint16) 1, (uint16) 1, (char) 0};

/* ARRAYED_STACK [INTEGER_32] */
static EIF_TYPE_INDEX ptf962[] = {961,222,0xFFF7,362,222,0xFFFF};
static struct eif_par_types par962 = {962, ptf962, (uint16) 2, (uint16) 1, (char) 0};

/* DISPENSER [INTEGER_32] */
static EIF_TYPE_INDEX ptf963[] = {351,222,0xFFF7,348,222,0xFFFF};
static struct eif_par_types par963 = {963, ptf963, (uint16) 2, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [INTEGER_32] */
static EIF_TYPE_INDEX ptf964[] = {145,0xFFFF};
static struct eif_par_types par964 = {964, ptf964, (uint16) 1, (uint16) 1, (char) 0};

/* RT_DBG_ATTRIBUTE_RECORD [CHARACTER_32] */
static EIF_TYPE_INDEX ptf965[] = {145,0xFFFF};
static struct eif_par_types par965 = {965, ptf965, (uint16) 1, (uint16) 1, (char) 0};

/* SET [INTEGER_32] */
static EIF_TYPE_INDEX ptf966[] = {353,222,0xFFFF};
static struct eif_par_types par966 = {966, ptf966, (uint16) 1, (uint16) 1, (char) 0};

/* STRING_TABLE [INTEGER_32] */
static EIF_TYPE_INDEX ptf967[] = {969,222,0xFF01,233,0xFFFF};
static struct eif_par_types par967 = {967, ptf967, (uint16) 1, (uint16) 1, (char) 0};

/* HASH_TABLE_ITERATION_CURSOR [INTEGER_32, G#2] */
static EIF_TYPE_INDEX ptf968[] = {343,222,0xFFF7,971,222,0xFFF8,2,0xFFFF};
static struct eif_par_types par968 = {968, ptf968, (uint16) 2, (uint16) 2, (char) 0};

/* HASH_TABLE [INTEGER_32, G#2] */
static EIF_TYPE_INDEX ptf969[] = {368,222,0xFFF7,972,222,0xFFF8,2,0xFFF7,970,222,0xFFF8,2,0xFFF7,339,222,0xFFF7,161,0xFFFF};
static struct eif_par_types par969 = {969, ptf969, (uint16) 5, (uint16) 2, (char) 0};

/* TABLE_ITERABLE [INTEGER_32, G#2] */
static EIF_TYPE_INDEX ptf970[] = {342,222,0xFFFF};
static struct eif_par_types par970 = {970, ptf970, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERATION_CURSOR [INTEGER_32, G#2] */
static EIF_TYPE_INDEX ptf971[] = {341,222,0xFFFF};
static struct eif_par_types par971 = {971, ptf971, (uint16) 1, (uint16) 2, (char) 0};

/* DYNAMIC_TABLE [INTEGER_32, G#2] */
static EIF_TYPE_INDEX ptf972[] = {973,222,0xFFF8,2,0xFFFF};
static struct eif_par_types par972 = {972, ptf972, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [INTEGER_32, G#2] */
static EIF_TYPE_INDEX ptf973[] = {352,222,0xFFFF};
static struct eif_par_types par973 = {973, ptf973, (uint16) 1, (uint16) 2, (char) 0};

/* WEL_WINDOWS_ERROR_MESSAGES */
static EIF_TYPE_INDEX ptf975[] = {0,0xFFFF};
static struct eif_par_types par975 = {975, ptf975, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_IMAGE_ENCODER_PARAMETER */
static EIF_TYPE_INDEX ptf976[] = {0,0xFFFF};
static struct eif_par_types par976 = {976, ptf976, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_STAT_STG */
static EIF_TYPE_INDEX ptf977[] = {0,0xFFFF};
static struct eif_par_types par977 = {977, ptf977, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_COM_HRESULT */
static EIF_TYPE_INDEX ptf978[] = {0,0xFFFF};
static struct eif_par_types par978 = {978, ptf978, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_PATH_POINT_TYPE */
static EIF_TYPE_INDEX ptf979[] = {0,0xFFFF};
static struct eif_par_types par979 = {979, ptf979, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_POINT */
static EIF_TYPE_INDEX ptf980[] = {0,0xFFFF};
static struct eif_par_types par980 = {980, ptf980, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_HDI_CONSTANTS */
static EIF_TYPE_INDEX ptf981[] = {0,0xFFFF};
static struct eif_par_types par981 = {981, ptf981, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_COLOR_MATRIX_FLAGS */
static EIF_TYPE_INDEX ptf982[] = {0,0xFFFF};
static struct eif_par_types par982 = {982, ptf982, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_COLOR_ADJUST_TYPE */
static EIF_TYPE_INDEX ptf983[] = {0,0xFFFF};
static struct eif_par_types par983 = {983, ptf983, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_FONT_STYLE */
static EIF_TYPE_INDEX ptf984[] = {0,0xFFFF};
static struct eif_par_types par984 = {984, ptf984, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_IMAGE_CODEC_INFO */
static EIF_TYPE_INDEX ptf985[] = {0,0xFFFF};
static struct eif_par_types par985 = {985, ptf985, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_IMAGE_ENCODER_CONSTANTS */
static EIF_TYPE_INDEX ptf986[] = {0,0xFFFF};
static struct eif_par_types par986 = {986, ptf986, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_IMAGE_ENCODER */
static EIF_TYPE_INDEX ptf987[] = {0,0xFFFF};
static struct eif_par_types par987 = {987, ptf987, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_IMAGE_ENCODER_PARAMETERS */
static EIF_TYPE_INDEX ptf988[] = {0,0xFFFF};
static struct eif_par_types par988 = {988, ptf988, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_IMAGE_FORMAT */
static EIF_TYPE_INDEX ptf989[] = {0,0xFFFF};
static struct eif_par_types par989 = {989, ptf989, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_FLUSH_INTENTION */
static EIF_TYPE_INDEX ptf990[] = {0,0xFFFF};
static struct eif_par_types par990 = {990, ptf990, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_COMBINE_MODE */
static EIF_TYPE_INDEX ptf991[] = {0,0xFFFF};
static struct eif_par_types par991 = {991, ptf991, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_MATRIX_ORDER */
static EIF_TYPE_INDEX ptf992[] = {0,0xFFFF};
static struct eif_par_types par992 = {992, ptf992, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_RECT_F */
static EIF_TYPE_INDEX ptf993[] = {0,0xFFFF};
static struct eif_par_types par993 = {993, ptf993, (uint16) 1, (uint16) 0, (char) 0};

/* EV_CHARACTER_FORMAT_EFFECTS */
static EIF_TYPE_INDEX ptf994[] = {0,0xFFFF};
static struct eif_par_types par994 = {994, ptf994, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CB_CONSTANTS */
static EIF_TYPE_INDEX ptf995[] = {0,0xFFFF};
static struct eif_par_types par995 = {995, ptf995, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_LINE_JOIN */
static EIF_TYPE_INDEX ptf996[] = {0,0xFFFF};
static struct eif_par_types par996 = {996, ptf996, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_DASH_STYLE */
static EIF_TYPE_INDEX ptf997[] = {0,0xFFFF};
static struct eif_par_types par997 = {997, ptf997, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_SMOOTHING_MODE */
static EIF_TYPE_INDEX ptf998[] = {0,0xFFFF};
static struct eif_par_types par998 = {998, ptf998, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_FILL_MODE */
static EIF_TYPE_INDEX ptf999[] = {0,0xFFFF};
static struct eif_par_types par999 = {999, ptf999, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CCS_CONSTANTS */
static EIF_TYPE_INDEX ptf1000[] = {0,0xFFFF};
static struct eif_par_types par1000 = {1000, ptf1000, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_UNIT */
static EIF_TYPE_INDEX ptf1001[] = {0,0xFFFF};
static struct eif_par_types par1001 = {1001, ptf1001, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_COLOR_MATRIX */
static EIF_TYPE_INDEX ptf1002[] = {0,0xFFFF};
static struct eif_par_types par1002 = {1002, ptf1002, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RDW_CONSTANTS */
static EIF_TYPE_INDEX ptf1003[] = {0,0xFFFF};
static struct eif_par_types par1003 = {1003, ptf1003, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_QS_CONSTANTS */
static EIF_TYPE_INDEX ptf1004[] = {0,0xFFFF};
static struct eif_par_types par1004 = {1004, ptf1004, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MNC_CONSTANTS */
static EIF_TYPE_INDEX ptf1005[] = {0,0xFFFF};
static struct eif_par_types par1005 = {1005, ptf1005, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_PIXEL_FORMAT */
static EIF_TYPE_INDEX ptf1006[] = {0,0xFFFF};
static struct eif_par_types par1006 = {1006, ptf1006, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_BITMAP_DATA */
static EIF_TYPE_INDEX ptf1007[] = {0,0xFFFF};
static struct eif_par_types par1007 = {1007, ptf1007, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GUID */
static EIF_TYPE_INDEX ptf1008[] = {0,0xFFFF};
static struct eif_par_types par1008 = {1008, ptf1008, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_IMAGE_LOCK_MODE */
static EIF_TYPE_INDEX ptf1009[] = {0,0xFFFF};
static struct eif_par_types par1009 = {1009, ptf1009, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_BITMAP_HELPER */
static EIF_TYPE_INDEX ptf1010[] = {0,0xFFFF};
static struct eif_par_types par1010 = {1010, ptf1010, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_RECT */
static EIF_TYPE_INDEX ptf1011[] = {0,0xFFFF};
static struct eif_par_types par1011 = {1011, ptf1011, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_COLOR */
static EIF_TYPE_INDEX ptf1012[] = {0,0xFFFF};
static struct eif_par_types par1012 = {1012, ptf1012, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_STATUS */
static EIF_TYPE_INDEX ptf1013[] = {0,0xFFFF};
static struct eif_par_types par1013 = {1013, ptf1013, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_EN_SELCHANGE_CONSTANTS */
static EIF_TYPE_INDEX ptf1014[] = {0,0xFFFF};
static struct eif_par_types par1014 = {1014, ptf1014, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_GRAYSCALE_IMAGE_DRAWER */
static EIF_TYPE_INDEX ptf1015[] = {0,0xFFFF};
static struct eif_par_types par1015 = {1015, ptf1015, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXT_ALIGNMENT */
static EIF_TYPE_INDEX ptf1016[] = {0,0xFFFF};
static struct eif_par_types par1016 = {1016, ptf1016, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_BI_COMPRESSION_CONSTANTS */
static EIF_TYPE_INDEX ptf1017[] = {0,0xFFFF};
static struct eif_par_types par1017 = {1017, ptf1017, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MA_CONSTANTS */
static EIF_TYPE_INDEX ptf1018[] = {0,0xFFFF};
static struct eif_par_types par1018 = {1018, ptf1018, (uint16) 1, (uint16) 0, (char) 0};

/* EV_POS_INFO */
static EIF_TYPE_INDEX ptf1019[] = {0,0xFFFF};
static struct eif_par_types par1019 = {1019, ptf1019, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CLIPBOARD_CONSTANTS */
static EIF_TYPE_INDEX ptf1020[] = {0,0xFFFF};
static struct eif_par_types par1020 = {1020, ptf1020, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SCALING_EXTERNALS */
static EIF_TYPE_INDEX ptf1021[] = {0,0xFFFF};
static struct eif_par_types par1021 = {1021, ptf1021, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_OBJID_CONSTANTS */
static EIF_TYPE_INDEX ptf1022[] = {0,0xFFFF};
static struct eif_par_types par1022 = {1022, ptf1022, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_COMMAND_EXEC */
static EIF_TYPE_INDEX ptf1023[] = {0,0xFFFF};
static struct eif_par_types par1023 = {1023, ptf1023, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_COMMAND */
static EIF_TYPE_INDEX ptf1024[] = {0,0xFFFF};
static struct eif_par_types par1024 = {1024, ptf1024, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GCL_CONSTANTS */
static EIF_TYPE_INDEX ptf1025[] = {0,0xFFFF};
static struct eif_par_types par1025 = {1025, ptf1025, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ERROR */
static EIF_TYPE_INDEX ptf1026[] = {0,0xFFFF};
static struct eif_par_types par1026 = {1026, ptf1026, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CDRF_CONSTANTS */
static EIF_TYPE_INDEX ptf1027[] = {0,0xFFFF};
static struct eif_par_types par1027 = {1027, ptf1027, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CDDS_CONSTANTS */
static EIF_TYPE_INDEX ptf1028[] = {0,0xFFFF};
static struct eif_par_types par1028 = {1028, ptf1028, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_STARTER */
static EIF_TYPE_INDEX ptf1029[] = {0,0xFFFF};
static struct eif_par_types par1029 = {1029, ptf1029, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_NM_CONSTANTS */
static EIF_TYPE_INDEX ptf1030[] = {0,0xFFFF};
static struct eif_par_types par1030 = {1030, ptf1030, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ODT_CONSTANTS */
static EIF_TYPE_INDEX ptf1031[] = {0,0xFFFF};
static struct eif_par_types par1031 = {1031, ptf1031, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SCROLL_CONSTANTS */
static EIF_TYPE_INDEX ptf1032[] = {0,0xFFFF};
static struct eif_par_types par1032 = {1032, ptf1032, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TME_CONSTANTS */
static EIF_TYPE_INDEX ptf1033[] = {0,0xFFFF};
static struct eif_par_types par1033 = {1033, ptf1033, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_DLGC_CONSTANTS */
static EIF_TYPE_INDEX ptf1034[] = {0,0xFFFF};
static struct eif_par_types par1034 = {1034, ptf1034, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_WINDOW_CONSTANTS */
static EIF_TYPE_INDEX ptf1035[] = {0,0xFFFF};
static struct eif_par_types par1035 = {1035, ptf1035, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXT_ALIGNMENT_CONSTANTS */
static EIF_TYPE_INDEX ptf1036[] = {0,0xFFFF};
static struct eif_par_types par1036 = {1036, ptf1036, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_HT_CONSTANTS */
static EIF_TYPE_INDEX ptf1037[] = {0,0xFFFF};
static struct eif_par_types par1037 = {1037, ptf1037, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PIXEL_BUFFER_PIXEL */
static EIF_TYPE_INDEX ptf1038[] = {0,0xFFFF};
static struct eif_par_types par1038 = {1038, ptf1038, (uint16) 1, (uint16) 0, (char) 0};

/* EV_POINTER_STYLE_CONSTANTS */
static EIF_TYPE_INDEX ptf1039[] = {0,0xFFFF};
static struct eif_par_types par1039 = {1039, ptf1039, (uint16) 1, (uint16) 0, (char) 0};

/* EV_STOCK_COLORS */
static EIF_TYPE_INDEX ptf1040[] = {0,0xFFFF};
static struct eif_par_types par1040 = {1040, ptf1040, (uint16) 1, (uint16) 0, (char) 0};

/* EV_STOCK_PIXMAPS */
static EIF_TYPE_INDEX ptf1041[] = {0,0xFFFF};
static struct eif_par_types par1041 = {1041, ptf1041, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PND_TARGET_DATA */
static EIF_TYPE_INDEX ptf1042[] = {0,0xFFFF};
static struct eif_par_types par1042 = {1042, ptf1042, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_API */
static EIF_TYPE_INDEX ptf1043[] = {0,0xFFFF};
static struct eif_par_types par1043 = {1043, ptf1043, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_IDB_CONSTANTS */
static EIF_TYPE_INDEX ptf1044[] = {0,0xFFFF};
static struct eif_par_types par1044 = {1044, ptf1044, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_UDM_CONSTANTS */
static EIF_TYPE_INDEX ptf1045[] = {0,0xFFFF};
static struct eif_par_types par1045 = {1045, ptf1045, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TBN_CONSTANTS */
static EIF_TYPE_INDEX ptf1046[] = {0,0xFFFF};
static struct eif_par_types par1046 = {1046, ptf1046, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_UDN_CONSTANTS */
static EIF_TYPE_INDEX ptf1047[] = {0,0xFFFF};
static struct eif_par_types par1047 = {1047, ptf1047, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MK_CONSTANTS */
static EIF_TYPE_INDEX ptf1048[] = {0,0xFFFF};
static struct eif_par_types par1048 = {1048, ptf1048, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SC_CONSTANTS */
static EIF_TYPE_INDEX ptf1049[] = {0,0xFFFF};
static struct eif_par_types par1049 = {1049, ptf1049, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SIZE_CONSTANTS */
static EIF_TYPE_INDEX ptf1050[] = {0,0xFFFF};
static struct eif_par_types par1050 = {1050, ptf1050, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TCN_CONSTANTS */
static EIF_TYPE_INDEX ptf1051[] = {0,0xFFFF};
static struct eif_par_types par1051 = {1051, ptf1051, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TCS_CONSTANTS */
static EIF_TYPE_INDEX ptf1052[] = {0,0xFFFF};
static struct eif_par_types par1052 = {1052, ptf1052, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TCM_CONSTANTS */
static EIF_TYPE_INDEX ptf1053[] = {0,0xFFFF};
static struct eif_par_types par1053 = {1053, ptf1053, (uint16) 1, (uint16) 0, (char) 0};

/* EV_NOTEBOOK_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1054[] = {0,0xFFFF};
static struct eif_par_types par1054 = {1054, ptf1054, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SBS_CONSTANTS */
static EIF_TYPE_INDEX ptf1055[] = {0,0xFFFF};
static struct eif_par_types par1055 = {1055, ptf1055, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_HDF_CONSTANTS */
static EIF_TYPE_INDEX ptf1056[] = {0,0xFFFF};
static struct eif_par_types par1056 = {1056, ptf1056, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LVFI_CONSTANTS */
static EIF_TYPE_INDEX ptf1057[] = {0,0xFFFF};
static struct eif_par_types par1057 = {1057, ptf1057, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TBS_CONSTANTS */
static EIF_TYPE_INDEX ptf1058[] = {0,0xFFFF};
static struct eif_par_types par1058 = {1058, ptf1058, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TBM_CONSTANTS */
static EIF_TYPE_INDEX ptf1059[] = {0,0xFFFF};
static struct eif_par_types par1059 = {1059, ptf1059, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SS_CONSTANTS */
static EIF_TYPE_INDEX ptf1060[] = {0,0xFFFF};
static struct eif_par_types par1060 = {1060, ptf1060, (uint16) 1, (uint16) 0, (char) 0};

/* EV_LIST_ITEM_LIST_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1061[] = {0,0xFFFF};
static struct eif_par_types par1061 = {1061, ptf1061, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXT_FIELD_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1062[] = {0,0xFFFF};
static struct eif_par_types par1062 = {1062, ptf1062, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TTN_CONSTANTS */
static EIF_TYPE_INDEX ptf1063[] = {0,0xFFFF};
static struct eif_par_types par1063 = {1063, ptf1063, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_FONT_TYPE_ENUM_CONSTANTS */
static EIF_TYPE_INDEX ptf1064[] = {0,0xFFFF};
static struct eif_par_types par1064 = {1064, ptf1064, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_PM_CONSTANTS */
static EIF_TYPE_INDEX ptf1065[] = {0,0xFFFF};
static struct eif_par_types par1065 = {1065, ptf1065, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LANGUAGE_CONSTANTS */
static EIF_TYPE_INDEX ptf1066[] = {0,0xFFFF};
static struct eif_par_types par1066 = {1066, ptf1066, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TREE_NODE_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1067[] = {0,0xFFFF};
static struct eif_par_types par1067 = {1067, ptf1067, (uint16) 1, (uint16) 0, (char) 0};

/* EV_GAUGE_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1068[] = {0,0xFFFF};
static struct eif_par_types par1068 = {1068, ptf1068, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TVSIL_CONSTANTS */
static EIF_TYPE_INDEX ptf1069[] = {0,0xFFFF};
static struct eif_par_types par1069 = {1069, ptf1069, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TVGN_CONSTANTS */
static EIF_TYPE_INDEX ptf1070[] = {0,0xFFFF};
static struct eif_par_types par1070 = {1070, ptf1070, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TVS_CONSTANTS */
static EIF_TYPE_INDEX ptf1071[] = {0,0xFFFF};
static struct eif_par_types par1071 = {1071, ptf1071, (uint16) 1, (uint16) 0, (char) 0};

/* EV_RICH_TEXT_CONSTANTS_I */
static EIF_TYPE_INDEX ptf1072[] = {0,0xFFFF};
static struct eif_par_types par1072 = {1072, ptf1072, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_FIND_FLAGS_CONSTANTS */
static EIF_TYPE_INDEX ptf1073[] = {0,0xFFFF};
static struct eif_par_types par1073 = {1073, ptf1073, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SCF_CONSTANTS */
static EIF_TYPE_INDEX ptf1074[] = {0,0xFFFF};
static struct eif_par_types par1074 = {1074, ptf1074, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SF_CONSTANTS */
static EIF_TYPE_INDEX ptf1075[] = {0,0xFFFF};
static struct eif_par_types par1075 = {1075, ptf1075, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ECO_CONSTANTS */
static EIF_TYPE_INDEX ptf1076[] = {0,0xFFFF};
static struct eif_par_types par1076 = {1076, ptf1076, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ENM_CONSTANTS */
static EIF_TYPE_INDEX ptf1077[] = {0,0xFFFF};
static struct eif_par_types par1077 = {1077, ptf1077, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RICH_EDIT_STYLE_CONSTANTS */
static EIF_TYPE_INDEX ptf1078[] = {0,0xFFFF};
static struct eif_par_types par1078 = {1078, ptf1078, (uint16) 1, (uint16) 0, (char) 0};

/* EV_RICH_TEXT_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1079[] = {0,0xFFFF};
static struct eif_par_types par1079 = {1079, ptf1079, (uint16) 1, (uint16) 0, (char) 0};

/* EV_LIST_ITEM_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1080[] = {0,0xFFFF};
static struct eif_par_types par1080 = {1080, ptf1080, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_DRAWING_ROUTINES_CONSTANTS */
static EIF_TYPE_INDEX ptf1081[] = {0,0xFFFF};
static struct eif_par_types par1081 = {1081, ptf1081, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_POLYGON_FILL_MODE_CONSTANTS */
static EIF_TYPE_INDEX ptf1082[] = {0,0xFFFF};
static struct eif_par_types par1082 = {1082, ptf1082, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MM_CONSTANTS */
static EIF_TYPE_INDEX ptf1083[] = {0,0xFFFF};
static struct eif_par_types par1083 = {1083, ptf1083, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_FLOOD_FILL_CONSTANTS */
static EIF_TYPE_INDEX ptf1084[] = {0,0xFFFF};
static struct eif_par_types par1084 = {1084, ptf1084, (uint16) 1, (uint16) 0, (char) 0};

/* EV_CHECKABLE_TREE_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1085[] = {0,0xFFFF};
static struct eif_par_types par1085 = {1085, ptf1085, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MULTI_COLUMN_LIST_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1086[] = {0,0xFFFF};
static struct eif_par_types par1086 = {1086, ptf1086, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CHARACTER_SET_CONSTANTS */
static EIF_TYPE_INDEX ptf1087[] = {0,0xFFFF};
static struct eif_par_types par1087 = {1087, ptf1087, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CLIP_PRECISION_CONSTANTS */
static EIF_TYPE_INDEX ptf1088[] = {0,0xFFFF};
static struct eif_par_types par1088 = {1088, ptf1088, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_OUT_PRECISION_CONSTANTS */
static EIF_TYPE_INDEX ptf1089[] = {0,0xFFFF};
static struct eif_par_types par1089 = {1089, ptf1089, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_FONT_QUALITY_CONSTANTS */
static EIF_TYPE_INDEX ptf1090[] = {0,0xFFFF};
static struct eif_par_types par1090 = {1090, ptf1090, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LVIS_CONSTANTS */
static EIF_TYPE_INDEX ptf1091[] = {0,0xFFFF};
static struct eif_par_types par1091 = {1091, ptf1091, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LVIF_CONSTANTS */
static EIF_TYPE_INDEX ptf1092[] = {0,0xFFFF};
static struct eif_par_types par1092 = {1092, ptf1092, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ES_CONSTANTS */
static EIF_TYPE_INDEX ptf1093[] = {0,0xFFFF};
static struct eif_par_types par1093 = {1093, ptf1093, (uint16) 1, (uint16) 0, (char) 0};

/* EV_COMBO_BOX_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1094[] = {0,0xFFFF};
static struct eif_par_types par1094 = {1094, ptf1094, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LVM_CONSTANTS */
static EIF_TYPE_INDEX ptf1095[] = {0,0xFFFF};
static struct eif_par_types par1095 = {1095, ptf1095, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_HS_CONSTANTS */
static EIF_TYPE_INDEX ptf1096[] = {0,0xFFFF};
static struct eif_par_types par1096 = {1096, ptf1096, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_BRUSH_STYLE_CONSTANTS */
static EIF_TYPE_INDEX ptf1097[] = {0,0xFFFF};
static struct eif_par_types par1097 = {1097, ptf1097, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ROP2_CONSTANTS */
static EIF_TYPE_INDEX ptf1098[] = {0,0xFFFF};
static struct eif_par_types par1098 = {1098, ptf1098, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TB_STATE_CONSTANTS */
static EIF_TYPE_INDEX ptf1099[] = {0,0xFFFF};
static struct eif_par_types par1099 = {1099, ptf1099, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXT_COMPONENT_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1100[] = {0,0xFFFF};
static struct eif_par_types par1100 = {1100, ptf1100, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SPI_CONSTANTS */
static EIF_TYPE_INDEX ptf1101[] = {0,0xFFFF};
static struct eif_par_types par1101 = {1101, ptf1101, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_THEME_GBS_CONSTANTS */
static EIF_TYPE_INDEX ptf1102[] = {0,0xFFFF};
static struct eif_par_types par1102 = {1102, ptf1102, (uint16) 1, (uint16) 0, (char) 0};

/* EV_BUTTON_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1103[] = {0,0xFFFF};
static struct eif_par_types par1103 = {1103, ptf1103, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LOCK */
static EIF_TYPE_INDEX ptf1104[] = {0,0xFFFF};
static struct eif_par_types par1104 = {1104, ptf1104, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MENU_ITEM_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1105[] = {0,0xFFFF};
static struct eif_par_types par1105 = {1105, ptf1105, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MENU_ITEM_LIST_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1106[] = {0,0xFFFF};
static struct eif_par_types par1106 = {1106, ptf1106, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TMPF_CONSTANTS */
static EIF_TYPE_INDEX ptf1107[] = {0,0xFFFF};
static struct eif_par_types par1107 = {1107, ptf1107, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GW_CONSTANTS */
static EIF_TYPE_INDEX ptf1108[] = {0,0xFFFF};
static struct eif_par_types par1108 = {1108, ptf1108, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_APPLICATION_MAIN_WINDOW */
static EIF_TYPE_INDEX ptf1109[] = {0,0xFFFF};
static struct eif_par_types par1109 = {1109, ptf1109, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SM_CONSTANTS */
static EIF_TYPE_INDEX ptf1110[] = {0,0xFFFF};
static struct eif_par_types par1110 = {1110, ptf1110, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TVHT_CONSTANTS */
static EIF_TYPE_INDEX ptf1111[] = {0,0xFFFF};
static struct eif_par_types par1111 = {1111, ptf1111, (uint16) 1, (uint16) 0, (char) 0};

/* EV_CHARACTER_FORMAT_CONSTANTS */
static EIF_TYPE_INDEX ptf1112[] = {0,0xFFFF};
static struct eif_par_types par1112 = {1112, ptf1112, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_THEME_PBS_CONSTANTS */
static EIF_TYPE_INDEX ptf1113[] = {0,0xFFFF};
static struct eif_par_types par1113 = {1113, ptf1113, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MULTI_COLUMN_LIST_ROW_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1114[] = {0,0xFFFF};
static struct eif_par_types par1114 = {1114, ptf1114, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_STRETCH_MODE_CONSTANTS */
static EIF_TYPE_INDEX ptf1115[] = {0,0xFFFF};
static struct eif_par_types par1115 = {1115, ptf1115, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ITEM_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1116[] = {0,0xFFFF};
static struct eif_par_types par1116 = {1116, ptf1116, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DOCKABLE_TARGET_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1117[] = {0,0xFFFF};
static struct eif_par_types par1117 = {1117, ptf1117, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DOCKABLE_SOURCE_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1118[] = {0,0xFFFF};
static struct eif_par_types par1118 = {1118, ptf1118, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TITLED_WINDOW_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1119[] = {0,0xFFFF};
static struct eif_par_types par1119 = {1119, ptf1119, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RASTER_OPERATIONS_CONSTANTS */
static EIF_TYPE_INDEX ptf1120[] = {0,0xFFFF};
static struct eif_par_types par1120 = {1120, ptf1120, (uint16) 1, (uint16) 0, (char) 0};

/* EV_CONTAINER_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1121[] = {0,0xFFFF};
static struct eif_par_types par1121 = {1121, ptf1121, (uint16) 1, (uint16) 0, (char) 0};

/* EV_STOCK_COLORS_IMP */
static EIF_TYPE_INDEX ptf1122[] = {0,0xFFFF};
static struct eif_par_types par1122 = {1122, ptf1122, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CLIPBOARD */
static EIF_TYPE_INDEX ptf1123[] = {0,0xFFFF};
static struct eif_par_types par1123 = {1123, ptf1123, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_DRAWING_CONSTANTS */
static EIF_TYPE_INDEX ptf1124[] = {0,0xFFFF};
static struct eif_par_types par1124 = {1124, ptf1124, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_IDC_CONSTANTS */
static EIF_TYPE_INDEX ptf1125[] = {0,0xFFFF};
static struct eif_par_types par1125 = {1125, ptf1125, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_IDI_CONSTANTS */
static EIF_TYPE_INDEX ptf1126[] = {0,0xFFFF};
static struct eif_par_types par1126 = {1126, ptf1126, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CS_CONSTANTS */
static EIF_TYPE_INDEX ptf1127[] = {0,0xFFFF};
static struct eif_par_types par1127 = {1127, ptf1127, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MONITOR_DPI_DETECTOR */
static EIF_TYPE_INDEX ptf1128[] = {0,0xFFFF};
static struct eif_par_types par1128 = {1128, ptf1128, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MONITOR_DPI_DETECTOR_IMP */
static EIF_TYPE_INDEX ptf1129[] = {1128,0xFFFF};
static struct eif_par_types par1129 = {1129, ptf1129, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TPM_CONSTANTS */
static EIF_TYPE_INDEX ptf1130[] = {0,0xFFFF};
static struct eif_par_types par1130 = {1130, ptf1130, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ICON_CONSTANTS */
static EIF_TYPE_INDEX ptf1131[] = {0,0xFFFF};
static struct eif_par_types par1131 = {1131, ptf1131, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RETURN_VALUE */
static EIF_TYPE_INDEX ptf1132[] = {0,0xFFFF};
static struct eif_par_types par1132 = {1132, ptf1132, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ESB_CONSTANTS */
static EIF_TYPE_INDEX ptf1133[] = {0,0xFFFF};
static struct eif_par_types par1133 = {1133, ptf1133, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_WA_CONSTANTS */
static EIF_TYPE_INDEX ptf1134[] = {0,0xFFFF};
static struct eif_par_types par1134 = {1134, ptf1134, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MAIN_ARGUMENTS */
static EIF_TYPE_INDEX ptf1135[] = {0,0xFFFF};
static struct eif_par_types par1135 = {1135, ptf1135, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RICH_EDIT_MESSAGE_CONSTANTS */
static EIF_TYPE_INDEX ptf1136[] = {0,0xFFFF};
static struct eif_par_types par1136 = {1136, ptf1136, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TVN_CONSTANTS */
static EIF_TYPE_INDEX ptf1137[] = {0,0xFFFF};
static struct eif_par_types par1137 = {1137, ptf1137, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_INPUT_CONSTANTS */
static EIF_TYPE_INDEX ptf1138[] = {0,0xFFFF};
static struct eif_par_types par1138 = {1138, ptf1138, (uint16) 1, (uint16) 0, (char) 0};

/* EV_APPLICATION_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1139[] = {0,0xFFFF};
static struct eif_par_types par1139 = {1139, ptf1139, (uint16) 1, (uint16) 0, (char) 0};

/* EV_HELP_CONTEXT */
static EIF_TYPE_INDEX ptf1140[] = {0,0xFFFF};
static struct eif_par_types par1140 = {1140, ptf1140, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SWP_CONSTANTS */
static EIF_TYPE_INDEX ptf1141[] = {0,0xFFFF};
static struct eif_par_types par1141 = {1141, ptf1141, (uint16) 1, (uint16) 0, (char) 0};

/* EV_WINDOW_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1142[] = {0,0xFFFF};
static struct eif_par_types par1142 = {1142, ptf1142, (uint16) 1, (uint16) 0, (char) 0};

/* EV_HELP_ENGINE */
static EIF_TYPE_INDEX ptf1143[] = {0,0xFFFF};
static struct eif_par_types par1143 = {1143, ptf1143, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_UDS_CONSTANTS */
static EIF_TYPE_INDEX ptf1144[] = {0,0xFFFF};
static struct eif_par_types par1144 = {1144, ptf1144, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TB_CONSTANTS */
static EIF_TYPE_INDEX ptf1145[] = {0,0xFFFF};
static struct eif_par_types par1145 = {1145, ptf1145, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_STANDARD_COLORS */
static EIF_TYPE_INDEX ptf1146[] = {0,0xFFFF};
static struct eif_par_types par1146 = {1146, ptf1146, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TCIF_CONSTANTS */
static EIF_TYPE_INDEX ptf1147[] = {0,0xFFFF};
static struct eif_par_types par1147 = {1147, ptf1147, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TVIF_CONSTANTS */
static EIF_TYPE_INDEX ptf1148[] = {0,0xFFFF};
static struct eif_par_types par1148 = {1148, ptf1148, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TREE_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1149[] = {0,0xFFFF};
static struct eif_par_types par1149 = {1149, ptf1149, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_EN_CONSTANTS */
static EIF_TYPE_INDEX ptf1150[] = {0,0xFFFF};
static struct eif_par_types par1150 = {1150, ptf1150, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TA_CONSTANTS */
static EIF_TYPE_INDEX ptf1151[] = {0,0xFFFF};
static struct eif_par_types par1151 = {1151, ptf1151, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TB_STYLE_CONSTANTS */
static EIF_TYPE_INDEX ptf1152[] = {0,0xFFFF};
static struct eif_par_types par1152 = {1152, ptf1152, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_BUTTON_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1153[] = {0,0xFFFF};
static struct eif_par_types par1153 = {1153, ptf1153, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ICC_CONSTANTS */
static EIF_TYPE_INDEX ptf1154[] = {0,0xFFFF};
static struct eif_par_types par1154 = {1154, ptf1154, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_DIALOG_MANAGER */
static EIF_TYPE_INDEX ptf1155[] = {0,0xFFFF};
static struct eif_par_types par1155 = {1155, ptf1155, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_BN_CONSTANTS */
static EIF_TYPE_INDEX ptf1156[] = {0,0xFFFF};
static struct eif_par_types par1156 = {1156, ptf1156, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_WM_CTLCOLOR_CONSTANTS */
static EIF_TYPE_INDEX ptf1157[] = {0,0xFFFF};
static struct eif_par_types par1157 = {1157, ptf1157, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DRAWABLE_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1158[] = {0,0xFFFF};
static struct eif_par_types par1158 = {1158, ptf1158, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TVIS_CONSTANTS */
static EIF_TYPE_INDEX ptf1159[] = {0,0xFFFF};
static struct eif_par_types par1159 = {1159, ptf1159, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TVM_CONSTANTS */
static EIF_TYPE_INDEX ptf1160[] = {0,0xFFFF};
static struct eif_par_types par1160 = {1160, ptf1160, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SCROLLABLE_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1161[] = {0,0xFFFF};
static struct eif_par_types par1161 = {1161, ptf1161, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TVAF_CONSTANTS */
static EIF_TYPE_INDEX ptf1162[] = {0,0xFFFF};
static struct eif_par_types par1162 = {1162, ptf1162, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CFE_CONSTANTS */
static EIF_TYPE_INDEX ptf1163[] = {0,0xFFFF};
static struct eif_par_types par1163 = {1163, ptf1163, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_PFA_CONSTANTS */
static EIF_TYPE_INDEX ptf1164[] = {0,0xFFFF};
static struct eif_par_types par1164 = {1164, ptf1164, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_PFM_CONSTANTS */
static EIF_TYPE_INDEX ptf1165[] = {0,0xFFFF};
static struct eif_par_types par1165 = {1165, ptf1165, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CFM_CONSTANTS */
static EIF_TYPE_INDEX ptf1166[] = {0,0xFFFF};
static struct eif_par_types par1166 = {1166, ptf1166, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PARAGRAPH_CONSTANTS */
static EIF_TYPE_INDEX ptf1167[] = {0,0xFFFF};
static struct eif_par_types par1167 = {1167, ptf1167, (uint16) 1, (uint16) 0, (char) 0};

/* RTF_FORMAT_I */
static EIF_TYPE_INDEX ptf1168[] = {1167,0xFFFF};
static struct eif_par_types par1168 = {1168, ptf1168, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GWL_CONSTANTS */
static EIF_TYPE_INDEX ptf1169[] = {0,0xFFFF};
static struct eif_par_types par1169 = {1169, ptf1169, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_COMBO_BOX_CONSTANTS */
static EIF_TYPE_INDEX ptf1170[] = {0,0xFFFF};
static struct eif_par_types par1170 = {1170, ptf1170, (uint16) 1, (uint16) 0, (char) 0};

/* EV_GRAPHICAL_FORMAT */
static EIF_TYPE_INDEX ptf1171[] = {0,0xFFFF};
static struct eif_par_types par1171 = {1171, ptf1171, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PNG_FORMAT */
static EIF_TYPE_INDEX ptf1172[] = {1171,0xFFFF};
static struct eif_par_types par1172 = {1172, ptf1172, (uint16) 1, (uint16) 0, (char) 0};

/* EV_BMP_FORMAT */
static EIF_TYPE_INDEX ptf1173[] = {1171,0xFFFF};
static struct eif_par_types par1173 = {1173, ptf1173, (uint16) 1, (uint16) 0, (char) 0};

/* EV_FRAME_CONSTANTS */
static EIF_TYPE_INDEX ptf1174[] = {0,0xFFFF};
static struct eif_par_types par1174 = {1174, ptf1174, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DIALOG_CONSTANTS */
static EIF_TYPE_INDEX ptf1175[] = {0,0xFFFF};
static struct eif_par_types par1175 = {1175, ptf1175, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SIMPLE_HELP_ENGINE */
static EIF_TYPE_INDEX ptf1176[] = {1143,0xFFF7,1175,0xFFFF};
static struct eif_par_types par1176 = {1176, ptf1176, (uint16) 2, (uint16) 0, (char) 0};

/* EV_PICK_AND_DROPABLE_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1177[] = {0,0xFFFF};
static struct eif_par_types par1177 = {1177, ptf1177, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SHARED_TRANSPORT_I */
static EIF_TYPE_INDEX ptf1178[] = {0,0xFFFF};
static struct eif_par_types par1178 = {1178, ptf1178, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ODS_CONSTANTS */
static EIF_TYPE_INDEX ptf1179[] = {0,0xFFFF};
static struct eif_par_types par1179 = {1179, ptf1179, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SHARED_TRANSPORT_IMP */
static EIF_TYPE_INDEX ptf1180[] = {0,0xFFFF};
static struct eif_par_types par1180 = {1180, ptf1180, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MF_CONSTANTS */
static EIF_TYPE_INDEX ptf1181[] = {0,0xFFFF};
static struct eif_par_types par1181 = {1181, ptf1181, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SW_CONSTANTS */
static EIF_TYPE_INDEX ptf1182[] = {0,0xFFFF};
static struct eif_par_types par1182 = {1182, ptf1182, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_WS_CONSTANTS */
static EIF_TYPE_INDEX ptf1183[] = {0,0xFFFF};
static struct eif_par_types par1183 = {1183, ptf1183, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RESIZING_SUPPORT */
static EIF_TYPE_INDEX ptf1184[] = {0,0xFFFF};
static struct eif_par_types par1184 = {1184, ptf1184, (uint16) 1, (uint16) 0, (char) 0};

/* EV_THEME_DRAWER_IMP */
static EIF_TYPE_INDEX ptf1185[] = {0,0xFFFF};
static struct eif_par_types par1185 = {1185, ptf1185, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LIST_VIEW_CONSTANTS */
static EIF_TYPE_INDEX ptf1186[] = {0,0xFFFF};
static struct eif_par_types par1186 = {1186, ptf1186, (uint16) 1, (uint16) 0, (char) 0};

/* EV_KEY_CONSTANTS */
static EIF_TYPE_INDEX ptf1187[] = {0,0xFFFF};
static struct eif_par_types par1187 = {1187, ptf1187, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_FONT_PITCH_CONSTANTS */
static EIF_TYPE_INDEX ptf1188[] = {0,0xFFFF};
static struct eif_par_types par1188 = {1188, ptf1188, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_FONT_FAMILY_CONSTANTS */
static EIF_TYPE_INDEX ptf1189[] = {0,0xFFFF};
static struct eif_par_types par1189 = {1189, ptf1189, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_IMAGE_CONSTANTS */
static EIF_TYPE_INDEX ptf1190[] = {0,0xFFFF};
static struct eif_par_types par1190 = {1190, ptf1190, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_THEME_PART_CONSTANTS */
static EIF_TYPE_INDEX ptf1191[] = {0,0xFFFF};
static struct eif_par_types par1191 = {1191, ptf1191, (uint16) 1, (uint16) 0, (char) 0};

/* EV_XP_THEME_DRAWER_IMP */
static EIF_TYPE_INDEX ptf1192[] = {1185,0xFFF7,1191,0xFFFF};
static struct eif_par_types par1192 = {1192, ptf1192, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_BM_CONSTANTS */
static EIF_TYPE_INDEX ptf1193[] = {0,0xFFFF};
static struct eif_par_types par1193 = {1193, ptf1193, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_BS_CONSTANTS */
static EIF_TYPE_INDEX ptf1194[] = {0,0xFFFF};
static struct eif_par_types par1194 = {1194, ptf1194, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RGN_CONSTANTS */
static EIF_TYPE_INDEX ptf1195[] = {0,0xFFFF};
static struct eif_par_types par1195 = {1195, ptf1195, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TOOLTIP_CONSTANTS */
static EIF_TYPE_INDEX ptf1196[] = {0,0xFFFF};
static struct eif_par_types par1196 = {1196, ptf1196, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DRAWABLE_CONSTANTS */
static EIF_TYPE_INDEX ptf1197[] = {0,0xFFFF};
static struct eif_par_types par1197 = {1197, ptf1197, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ID_IMP */
static EIF_TYPE_INDEX ptf1198[] = {0,0xFFFF};
static struct eif_par_types par1198 = {1198, ptf1198, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ID_CONSTANTS */
static EIF_TYPE_INDEX ptf1199[] = {0,0xFFFF};
static struct eif_par_types par1199 = {1199, ptf1199, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MB_CONSTANTS */
static EIF_TYPE_INDEX ptf1200[] = {0,0xFFFF};
static struct eif_par_types par1200 = {1200, ptf1200, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SHARED_GDI_OBJECTS */
static EIF_TYPE_INDEX ptf1201[] = {0,0xFFFF};
static struct eif_par_types par1201 = {1201, ptf1201, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_HWND_CONSTANTS */
static EIF_TYPE_INDEX ptf1202[] = {0,0xFFFF};
static struct eif_par_types par1202 = {1202, ptf1202, (uint16) 1, (uint16) 0, (char) 0};

/* EV_WIDGET_ACTION_SEQUENCES_I */
static EIF_TYPE_INDEX ptf1203[] = {0,0xFFFF};
static struct eif_par_types par1203 = {1203, ptf1203, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PIXMAP_IMP_STATE */
static EIF_TYPE_INDEX ptf1204[] = {1203,0xFFF7,1177,0xFFF7,1158,0xFFFF};
static struct eif_par_types par1204 = {1204, ptf1204, (uint16) 3, (uint16) 0, (char) 0};

/* EV_SHARED_APPLICATION */
static EIF_TYPE_INDEX ptf1205[] = {0,0xFFFF};
static struct eif_par_types par1205 = {1205, ptf1205, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SHARED_TEMPORARY_OBJECTS */
static EIF_TYPE_INDEX ptf1206[] = {0,0xFFFF};
static struct eif_par_types par1206 = {1206, ptf1206, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TVI_CONSTANTS */
static EIF_TYPE_INDEX ptf1207[] = {0,0xFFFF};
static struct eif_par_types par1207 = {1207, ptf1207, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SHARED_METRICS */
static EIF_TYPE_INDEX ptf1208[] = {0,0xFFFF};
static struct eif_par_types par1208 = {1208, ptf1208, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CAPABILITIES_CONSTANTS */
static EIF_TYPE_INDEX ptf1209[] = {0,0xFFFF};
static struct eif_par_types par1209 = {1209, ptf1209, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_EM_CONSTANTS */
static EIF_TYPE_INDEX ptf1210[] = {0,0xFFFF};
static struct eif_par_types par1210 = {1210, ptf1210, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_WM_CONSTANTS */
static EIF_TYPE_INDEX ptf1211[] = {0,0xFFFF};
static struct eif_par_types par1211 = {1211, ptf1211, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_DATA_TYPE */
static EIF_TYPE_INDEX ptf1212[] = {0,0xFFFF};
static struct eif_par_types par1212 = {1212, ptf1212, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_WORD_OPERATIONS */
static EIF_TYPE_INDEX ptf1213[] = {1212,0xFFFF};
static struct eif_par_types par1213 = {1213, ptf1213, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_VK_CONSTANTS */
static EIF_TYPE_INDEX ptf1214[] = {0,0xFFFF};
static struct eif_par_types par1214 = {1214, ptf1214, (uint16) 1, (uint16) 0, (char) 0};

/* EV_WEL_KEY_CONVERSION */
static EIF_TYPE_INDEX ptf1215[] = {1214,0xFFF7,1187,0xFFFF};
static struct eif_par_types par1215 = {1215, ptf1215, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_DT_CONSTANTS */
static EIF_TYPE_INDEX ptf1216[] = {0,0xFFFF};
static struct eif_par_types par1216 = {1216, ptf1216, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_DIB_COLORS_CONSTANTS */
static EIF_TYPE_INDEX ptf1217[] = {0,0xFFFF};
static struct eif_par_types par1217 = {1217, ptf1217, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_DRAWING_ROUTINES */
static EIF_TYPE_INDEX ptf1218[] = {1081,0xFFF7,1217,0xFFF7,1212,0xFFF7,1216,0xFFFF};
static struct eif_par_types par1218 = {1218, ptf1218, (uint16) 4, (uint16) 0, (char) 0};

/* WEL_WINDOWS_VERSION */
static EIF_TYPE_INDEX ptf1219[] = {0,0xFFFF};
static struct eif_par_types par1219 = {1219, ptf1219, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SHARED_FONTS */
static EIF_TYPE_INDEX ptf1220[] = {0,0xFFFF};
static struct eif_par_types par1220 = {1220, ptf1220, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SB_CONSTANTS */
static EIF_TYPE_INDEX ptf1221[] = {0,0xFFFF};
static struct eif_par_types par1221 = {1221, ptf1221, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SCROLL_BAR_CONSTANTS */
static EIF_TYPE_INDEX ptf1222[] = {1055,0xFFF7,1221,0xFFFF};
static struct eif_par_types par1222 = {1222, ptf1222, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_CONSTANTS */
static EIF_TYPE_INDEX ptf1223[] = {0,0xFFFF};
static struct eif_par_types par1223 = {1223, ptf1223, (uint16) 1, (uint16) 0, (char) 0};

/* EV_FONT_CONSTANTS */
static EIF_TYPE_INDEX ptf1224[] = {0,0xFFFF};
static struct eif_par_types par1224 = {1224, ptf1224, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ANY_HANDLER */
static EIF_TYPE_INDEX ptf1225[] = {0,0xFFFF};
static struct eif_par_types par1225 = {1225, ptf1225, (uint16) 1, (uint16) 0, (char) 0};

/* EV_APPLICATION_HANDLER */
static EIF_TYPE_INDEX ptf1226[] = {1225,0xFFFF};
static struct eif_par_types par1226 = {1226, ptf1226, (uint16) 1, (uint16) 0, (char) 0};

/* EV_WEL_TOOLTIPABLE */
static EIF_TYPE_INDEX ptf1227[] = {1225,0xFFF7,1196,0xFFFF};
static struct eif_par_types par1227 = {1227, ptf1227, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_REFERENCE_TRACKABLE */
static EIF_TYPE_INDEX ptf1228[] = {41,0xFFFF};
static struct eif_par_types par1228 = {1228, ptf1228, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_PS_CONSTANTS */
static EIF_TYPE_INDEX ptf1229[] = {0,0xFFFF};
static struct eif_par_types par1229 = {1229, ptf1229, (uint16) 1, (uint16) 0, (char) 0};

/* EV_GDI_ALLOCATED_BRUSHES */
static EIF_TYPE_INDEX ptf1230[] = {1790,0xFF01,1393,0xFF01,1282,0xFFF7,1229,0xFFFF};
static struct eif_par_types par1230 = {1230, ptf1230, (uint16) 2, (uint16) 0, (char) 0};

/* EV_GDI_ALLOCATED_PENS */
static EIF_TYPE_INDEX ptf1231[] = {1790,0xFF01,1394,0xFF01,1279,0xFFF7,1229,0xFFFF};
static struct eif_par_types par1231 = {1231, ptf1231, (uint16) 2, (uint16) 0, (char) 0};

/* EV_RAW_IMAGE_DATA */
static EIF_TYPE_INDEX ptf1232[] = {634,213,0xFFFF};
static struct eif_par_types par1232 = {1232, ptf1232, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ILC_CONSTANTS */
static EIF_TYPE_INDEX ptf1233[] = {0,0xFFFF};
static struct eif_par_types par1233 = {1233, ptf1233, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_STRING */
static EIF_TYPE_INDEX ptf1234[] = {156,0xFFF7,132,0xFFFF};
static struct eif_par_types par1234 = {1234, ptf1234, (uint16) 2, (uint16) 0, (char) 0};

/* EV_ACCELERATOR_LIST */
static EIF_TYPE_INDEX ptf1235[] = {1804,0xFF01,1432,0xFFFF};
static struct eif_par_types par1235 = {1235, ptf1235, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PND_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1236[] = {1784,0xFFF9,1,190,0xFF01,0,0xFFFF};
static struct eif_par_types par1236 = {1236, ptf1236, (uint16) 1, (uint16) 0, (char) 0};

/* EV_VALUE_CHANGE_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1237[] = {1783,0xFF01,0xFFF9,1,190,222,0xFFFF};
static struct eif_par_types par1237 = {1237, ptf1237, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TREE_ITEM_CHECK_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1238[] = {1783,0xFF01,0xFFF9,1,190,0xFF01,1509,0xFFFF};
static struct eif_par_types par1238 = {1238, ptf1238, (uint16) 1, (uint16) 0, (char) 0};

/* EV_COLUMN_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1239[] = {1783,0xFF01,0xFFF9,1,190,222,0xFFFF};
static struct eif_par_types par1239 = {1239, ptf1239, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MULTI_COLUMN_LIST_ROW_SELECT_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1240[] = {1783,0xFF01,0xFFF9,1,190,0xFF01,1493,0xFFFF};
static struct eif_par_types par1240 = {1240, ptf1240, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SCROLL_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1241[] = {1783,0xFF01,0xFFF9,2,190,222,222,0xFFFF};
static struct eif_par_types par1241 = {1241, ptf1241, (uint16) 1, (uint16) 0, (char) 0};

/* EV_NEW_ITEM_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1242[] = {1783,0xFF01,0xFFF9,1,190,0xFF01,1459,0xFFFF};
static struct eif_par_types par1242 = {1242, ptf1242, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MENU_ITEM_SELECT_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1243[] = {1783,0xFF01,0xFFF9,1,190,0xFF01,1500,0xFFFF};
static struct eif_par_types par1243 = {1243, ptf1243, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PND_FINISHED_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1244[] = {1783,0xFF01,0xFFF9,1,190,1265,0xFFFF};
static struct eif_par_types par1244 = {1244, ptf1244, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DOCKABLE_SOURCE_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1245[] = {1783,0xFF01,0xFFF9,1,190,0xFF01,1440,0xFFFF};
static struct eif_par_types par1245 = {1245, ptf1245, (uint16) 1, (uint16) 0, (char) 0};

/* EV_KEY_STRING_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1246[] = {1783,0xFF01,0xFFF9,1,190,0xFF01,242,0xFFFF};
static struct eif_par_types par1246 = {1246, ptf1246, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DPI_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1247[] = {1783,0xFF01,0xFFF9,5,190,216,222,222,222,222,0xFFFF};
static struct eif_par_types par1247 = {1247, ptf1247, (uint16) 1, (uint16) 0, (char) 0};

/* EV_KEY_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1248[] = {1783,0xFF01,0xFFF9,1,190,0xFF01,1630,0xFFFF};
static struct eif_par_types par1248 = {1248, ptf1248, (uint16) 1, (uint16) 0, (char) 0};

/* EV_INTEGER_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1249[] = {1783,0xFF01,0xFFF9,1,190,222,0xFFFF};
static struct eif_par_types par1249 = {1249, ptf1249, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PND_START_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1250[] = {1783,0xFF01,0xFFF9,2,190,222,222,0xFFFF};
static struct eif_par_types par1250 = {1250, ptf1250, (uint16) 1, (uint16) 0, (char) 0};

/* EV_POINTER_MOTION_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1251[] = {1783,0xFF01,0xFFF9,7,190,222,222,210,210,210,222,222,0xFFFF};
static struct eif_par_types par1251 = {1251, ptf1251, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PND_MOTION_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1252[] = {1783,0xFF01,0xFFF9,3,190,222,222,1265,0xFFFF};
static struct eif_par_types par1252 = {1252, ptf1252, (uint16) 1, (uint16) 0, (char) 0};

/* EV_POINTER_BUTTON_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1253[] = {1783,0xFF01,0xFFF9,8,190,222,222,222,210,210,210,222,222,0xFFFF};
static struct eif_par_types par1253 = {1253, ptf1253, (uint16) 1, (uint16) 0, (char) 0};

/* EV_GEOMETRY_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1254[] = {1783,0xFF01,0xFFF9,4,190,222,222,222,222,0xFFFF};
static struct eif_par_types par1254 = {1254, ptf1254, (uint16) 1, (uint16) 0, (char) 0};

/* EV_NOTIFY_ACTION_SEQUENCE */
static EIF_TYPE_INDEX ptf1255[] = {1783,0xFF01,0xFFF9,0,190,0xFFFF};
static struct eif_par_types par1255 = {1255, ptf1255, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_COMMAND_MANAGER */
static EIF_TYPE_INDEX ptf1256[] = {335,0xFF01,1023,222,0xFFFF};
static struct eif_par_types par1256 = {1256, ptf1256, (uint16) 1, (uint16) 0, (char) 0};

/* EV_RECTANGLE */
static EIF_TYPE_INDEX ptf1257[] = {142,0xFFFF};
static struct eif_par_types par1257 = {1257, ptf1257, (uint16) 1, (uint16) 0, (char) 0};

/* EV_COORDINATE */
static EIF_TYPE_INDEX ptf1258[] = {142,0xFFFF};
static struct eif_par_types par1258 = {1258, ptf1258, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_COLOR_CONSTANTS */
static EIF_TYPE_INDEX ptf1259[] = {0,0xFFFF};
static struct eif_par_types par1259 = {1259, ptf1259, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_COLOR_CONTROL */
static EIF_TYPE_INDEX ptf1260[] = {1259,0xFFFF};
static struct eif_par_types par1260 = {1260, ptf1260, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PIXEL_BUFFER_ITERATOR */
static EIF_TYPE_INDEX ptf1261[] = {296,0xFF01,1038,0xFFF7,269,0xFF01,1038,0xFFFF};
static struct eif_par_types par1261 = {1261, ptf1261, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_COM_ISTREAM */
static EIF_TYPE_INDEX ptf1262[] = {166,0xFFFF};
static struct eif_par_types par1262 = {1262, ptf1262, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_FONT_FAMILY_ENUMERATOR */
static EIF_TYPE_INDEX ptf1263[] = {1064,0xFFF7,166,0xFFFF};
static struct eif_par_types par1263 = {1263, ptf1263, (uint16) 2, (uint16) 0, (char) 0};

/* EV_WEL_FONT_ENUMERATOR_IMP */
static EIF_TYPE_INDEX ptf1264[] = {1263,0xFFFF};
static struct eif_par_types par1264 = {1264, ptf1264, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ABSTRACT_PICK_AND_DROPABLE */
static EIF_TYPE_INDEX ptf1265[] = {174,0xFFFF};
static struct eif_par_types par1265 = {1265, ptf1265, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ANY */
static EIF_TYPE_INDEX ptf1266[] = {166,0xFFFF};
static struct eif_par_types par1266 = {1266, ptf1266, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_PRINTER */
static EIF_TYPE_INDEX ptf1267[] = {1266,0xFFFF};
static struct eif_par_types par1267 = {1267, ptf1267, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_INSTANCE */
static EIF_TYPE_INDEX ptf1268[] = {1266,0xFFFF};
static struct eif_par_types par1268 = {1268, ptf1268, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SHARED_MEMORY */
static EIF_TYPE_INDEX ptf1269[] = {1266,0xFFFF};
static struct eif_par_types par1269 = {1269, ptf1269, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SHARED_MEMORY_STRING */
static EIF_TYPE_INDEX ptf1270[] = {1269,0xFFFF};
static struct eif_par_types par1270 = {1270, ptf1270, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_IMAGE_LIST */
static EIF_TYPE_INDEX ptf1271[] = {1266,0xFFF7,1233,0xFFFF};
static struct eif_par_types par1271 = {1271, ptf1271, (uint16) 2, (uint16) 0, (char) 0};

/* EV_IMAGE_LIST_IMP */
static EIF_TYPE_INDEX ptf1272[] = {1271,0xFFF7,1225,0xFFF7,1228,0xFFFF};
static struct eif_par_types par1272 = {1272, ptf1272, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_DLL */
static EIF_TYPE_INDEX ptf1273[] = {1266,0xFFFF};
static struct eif_par_types par1273 = {1273, ptf1273, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RICH_EDIT_DLL */
static EIF_TYPE_INDEX ptf1274[] = {1273,0xFFFF};
static struct eif_par_types par1274 = {1274, ptf1274, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_COMMON_CONTROLS_DLL */
static EIF_TYPE_INDEX ptf1275[] = {1273,0xFFFF};
static struct eif_par_types par1275 = {1275, ptf1275, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RESOURCE */
static EIF_TYPE_INDEX ptf1276[] = {1266,0xFFFF};
static struct eif_par_types par1276 = {1276, ptf1276, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ACCELERATORS */
static EIF_TYPE_INDEX ptf1277[] = {1276,0xFFFF};
static struct eif_par_types par1277 = {1277, ptf1277, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDI_ANY */
static EIF_TYPE_INDEX ptf1278[] = {1266,0xFFF7,1228,0xFFFF};
static struct eif_par_types par1278 = {1278, ptf1278, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_PEN */
static EIF_TYPE_INDEX ptf1279[] = {1278,0xFFF7,1229,0xFFFF};
static struct eif_par_types par1279 = {1279, ptf1279, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_PALETTE */
static EIF_TYPE_INDEX ptf1280[] = {1278,0xFFFF};
static struct eif_par_types par1280 = {1280, ptf1280, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_BITMAP */
static EIF_TYPE_INDEX ptf1281[] = {1278,0xFFF7,1276,0xFFF7,1217,0xFFF7,1190,0xFFFF};
static struct eif_par_types par1281 = {1281, ptf1281, (uint16) 4, (uint16) 0, (char) 0};

/* WEL_BRUSH */
static EIF_TYPE_INDEX ptf1282[] = {1278,0xFFFF};
static struct eif_par_types par1282 = {1282, ptf1282, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_REGION */
static EIF_TYPE_INDEX ptf1283[] = {1278,0xFFFF};
static struct eif_par_types par1283 = {1283, ptf1283, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GRAPHICAL_RESOURCE */
static EIF_TYPE_INDEX ptf1284[] = {1276,0xFFF7,1278,0xFFF7,1190,0xFFFF};
static struct eif_par_types par1284 = {1284, ptf1284, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_ICON */
static EIF_TYPE_INDEX ptf1285[] = {1284,0xFFFF};
static struct eif_par_types par1285 = {1285, ptf1285, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_ANY */
static EIF_TYPE_INDEX ptf1286[] = {1266,0xFFFF};
static struct eif_par_types par1286 = {1286, ptf1286, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_STRING_FORMAT */
static EIF_TYPE_INDEX ptf1287[] = {1286,0xFFFF};
static struct eif_par_types par1287 = {1287, ptf1287, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_GRAPHICS_PATH */
static EIF_TYPE_INDEX ptf1288[] = {1286,0xFFFF};
static struct eif_par_types par1288 = {1288, ptf1288, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_PEN */
static EIF_TYPE_INDEX ptf1289[] = {1286,0xFFFF};
static struct eif_par_types par1289 = {1289, ptf1289, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_IMAGE_ATTRIBUTES */
static EIF_TYPE_INDEX ptf1290[] = {1286,0xFFFF};
static struct eif_par_types par1290 = {1290, ptf1290, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_FONT_FAMILY */
static EIF_TYPE_INDEX ptf1291[] = {1286,0xFFFF};
static struct eif_par_types par1291 = {1291, ptf1291, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_FONT */
static EIF_TYPE_INDEX ptf1292[] = {1286,0xFFFF};
static struct eif_par_types par1292 = {1292, ptf1292, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_GRAPHICS */
static EIF_TYPE_INDEX ptf1293[] = {1286,0xFFFF};
static struct eif_par_types par1293 = {1293, ptf1293, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_IMAGE */
static EIF_TYPE_INDEX ptf1294[] = {1286,0xFFFF};
static struct eif_par_types par1294 = {1294, ptf1294, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_BITMAP */
static EIF_TYPE_INDEX ptf1295[] = {1294,0xFFFF};
static struct eif_par_types par1295 = {1295, ptf1295, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_BRUSH */
static EIF_TYPE_INDEX ptf1296[] = {1286,0xFFFF};
static struct eif_par_types par1296 = {1296, ptf1296, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_GDIP_TEXTURE_BRUSH */
static EIF_TYPE_INDEX ptf1297[] = {1296,0xFFFF};
static struct eif_par_types par1297 = {1297, ptf1297, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_STRUCTURE */
static EIF_TYPE_INDEX ptf1298[] = {1266,0xFFFF};
static struct eif_par_types par1298 = {1298, ptf1298, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TOOL_BAR_BITMAP */
static EIF_TYPE_INDEX ptf1299[] = {1298,0xFFF7,41,0xFFF7,1044,0xFFFF};
static struct eif_par_types par1299 = {1299, ptf1299, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_PRINTER_INFO_2 */
static EIF_TYPE_INDEX ptf1300[] = {1298,0xFFFF};
static struct eif_par_types par1300 = {1300, ptf1300, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ACCELERATOR */
static EIF_TYPE_INDEX ptf1301[] = {1298,0xFFFF};
static struct eif_par_types par1301 = {1301, ptf1301, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_NM_UP_DOWN_CONTROL */
static EIF_TYPE_INDEX ptf1302[] = {1298,0xFFFF};
static struct eif_par_types par1302 = {1302, ptf1302, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TC_KEYDOWN */
static EIF_TYPE_INDEX ptf1303[] = {1298,0xFFFF};
static struct eif_par_types par1303 = {1303, ptf1303, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_NM_COMBO_BOX_EX */
static EIF_TYPE_INDEX ptf1304[] = {1298,0xFFFF};
static struct eif_par_types par1304 = {1304, ptf1304, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_NM_COMBO_BOX_EX_ENDEDIT */
static EIF_TYPE_INDEX ptf1305[] = {1298,0xFFFF};
static struct eif_par_types par1305 = {1305, ptf1305, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_DOC_INFO */
static EIF_TYPE_INDEX ptf1306[] = {1298,0xFFFF};
static struct eif_par_types par1306 = {1306, ptf1306, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LOG_PEN */
static EIF_TYPE_INDEX ptf1307[] = {1298,0xFFF7,1229,0xFFFF};
static struct eif_par_types par1307 = {1307, ptf1307, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_MSGBOXPARAMS */
static EIF_TYPE_INDEX ptf1308[] = {1298,0xFFFF};
static struct eif_par_types par1308 = {1308, ptf1308, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TC_HITTESTINFO */
static EIF_TYPE_INDEX ptf1309[] = {1298,0xFFFF};
static struct eif_par_types par1309 = {1309, ptf1309, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TV_KEYDOWN */
static EIF_TYPE_INDEX ptf1310[] = {1298,0xFFFF};
static struct eif_par_types par1310 = {1310, ptf1310, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TV_DISPINFO */
static EIF_TYPE_INDEX ptf1311[] = {1298,0xFFFF};
static struct eif_par_types par1311 = {1311, ptf1311, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_FIND_ARGUMENT */
static EIF_TYPE_INDEX ptf1312[] = {1298,0xFFFF};
static struct eif_par_types par1312 = {1312, ptf1312, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MSG_FILTER */
static EIF_TYPE_INDEX ptf1313[] = {1298,0xFFFF};
static struct eif_par_types par1313 = {1313, ptf1313, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TEXT_RANGE */
static EIF_TYPE_INDEX ptf1314[] = {1298,0xFFFF};
static struct eif_par_types par1314 = {1314, ptf1314, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_FORMAT_RANGE */
static EIF_TYPE_INDEX ptf1315[] = {1298,0xFFFF};
static struct eif_par_types par1315 = {1315, ptf1315, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SCROLL_BAR_INFO */
static EIF_TYPE_INDEX ptf1316[] = {1298,0xFFF7,1222,0xFFFF};
static struct eif_par_types par1316 = {1316, ptf1316, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_BITMAP_FILE_HEADER */
static EIF_TYPE_INDEX ptf1317[] = {1298,0xFFFF};
static struct eif_par_types par1317 = {1317, ptf1317, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_PALETTE_ENTRY */
static EIF_TYPE_INDEX ptf1318[] = {1298,0xFFFF};
static struct eif_par_types par1318 = {1318, ptf1318, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LOG_PALETTE */
static EIF_TYPE_INDEX ptf1319[] = {1298,0xFFFF};
static struct eif_par_types par1319 = {1319, ptf1319, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LV_KEYDOWN */
static EIF_TYPE_INDEX ptf1320[] = {1298,0xFFFF};
static struct eif_par_types par1320 = {1320, ptf1320, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LV_DISPINFO */
static EIF_TYPE_INDEX ptf1321[] = {1298,0xFFFF};
static struct eif_par_types par1321 = {1321, ptf1321, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_OS_VERSION_INFO */
static EIF_TYPE_INDEX ptf1322[] = {1298,0xFFFF};
static struct eif_par_types par1322 = {1322, ptf1322, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_BLEND_FUNCTION */
static EIF_TYPE_INDEX ptf1323[] = {1298,0xFFFF};
static struct eif_par_types par1323 = {1323, ptf1323, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_NM_TOOL_BAR */
static EIF_TYPE_INDEX ptf1324[] = {1298,0xFFFF};
static struct eif_par_types par1324 = {1324, ptf1324, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TOOL_BAR_BUTTON */
static EIF_TYPE_INDEX ptf1325[] = {1298,0xFFF7,1152,0xFFF7,1099,0xFFFF};
static struct eif_par_types par1325 = {1325, ptf1325, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_ENUM_LOG_FONT */
static EIF_TYPE_INDEX ptf1326[] = {1298,0xFFFF};
static struct eif_par_types par1326 = {1326, ptf1326, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SIZE */
static EIF_TYPE_INDEX ptf1327[] = {1298,0xFFFF};
static struct eif_par_types par1327 = {1327, ptf1327, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MSG */
static EIF_TYPE_INDEX ptf1328[] = {1298,0xFFF7,1065,0xFFF7,1211,0xFFFF};
static struct eif_par_types par1328 = {1328, ptf1328, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_INIT_COMMCTRL_EX */
static EIF_TYPE_INDEX ptf1329[] = {1298,0xFFF7,1154,0xFFFF};
static struct eif_par_types par1329 = {1329, ptf1329, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_NON_CLIENT_METRICS */
static EIF_TYPE_INDEX ptf1330[] = {1298,0xFFFF};
static struct eif_par_types par1330 = {1330, ptf1330, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ABC_STRUCT */
static EIF_TYPE_INDEX ptf1331[] = {1298,0xFFFF};
static struct eif_par_types par1331 = {1331, ptf1331, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TEXT_METRIC */
static EIF_TYPE_INDEX ptf1332[] = {1298,0xFFFF};
static struct eif_par_types par1332 = {1332, ptf1332, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_DLG_TEMPLATE */
static EIF_TYPE_INDEX ptf1333[] = {1298,0xFFFF};
static struct eif_par_types par1333 = {1333, ptf1333, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_INTEGER_ARRAY */
static EIF_TYPE_INDEX ptf1334[] = {1298,0xFFFF};
static struct eif_par_types par1334 = {1334, ptf1334, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MEASURE_ITEM_STRUCT */
static EIF_TYPE_INDEX ptf1335[] = {1298,0xFFFF};
static struct eif_par_types par1335 = {1335, ptf1335, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_NM_TREE_VIEW */
static EIF_TYPE_INDEX ptf1336[] = {1298,0xFFFF};
static struct eif_par_types par1336 = {1336, ptf1336, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TREE_VIEW_INSERT_STRUCT */
static EIF_TYPE_INDEX ptf1337[] = {1298,0xFFF7,1207,0xFFFF};
static struct eif_par_types par1337 = {1337, ptf1337, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_LOG_BITMAP */
static EIF_TYPE_INDEX ptf1338[] = {1298,0xFFFF};
static struct eif_par_types par1338 = {1338, ptf1338, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LOG_BRUSH */
static EIF_TYPE_INDEX ptf1339[] = {1298,0xFFFF};
static struct eif_par_types par1339 = {1339, ptf1339, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TV_HITTESTINFO */
static EIF_TYPE_INDEX ptf1340[] = {1298,0xFFFF};
static struct eif_par_types par1340 = {1340, ptf1340, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_NM_HEADER */
static EIF_TYPE_INDEX ptf1341[] = {1298,0xFFFF};
static struct eif_par_types par1341 = {1341, ptf1341, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_DIB */
static EIF_TYPE_INDEX ptf1342[] = {1298,0xFFF7,41,0xFFFF};
static struct eif_par_types par1342 = {1342, ptf1342, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_RGB_QUAD */
static EIF_TYPE_INDEX ptf1343[] = {1298,0xFFFF};
static struct eif_par_types par1343 = {1343, ptf1343, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_BITMAP_INFO */
static EIF_TYPE_INDEX ptf1344[] = {1298,0xFFF7,1217,0xFFFF};
static struct eif_par_types par1344 = {1344, ptf1344, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_BITMAP_INFO_HEADER */
static EIF_TYPE_INDEX ptf1345[] = {1298,0xFFFF};
static struct eif_par_types par1345 = {1345, ptf1345, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LV_HITTESTINFO */
static EIF_TYPE_INDEX ptf1346[] = {1298,0xFFFF};
static struct eif_par_types par1346 = {1346, ptf1346, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LOG_FONT */
static EIF_TYPE_INDEX ptf1347[] = {1298,0xFFF7,1090,0xFFF7,1089,0xFFF7,1088,0xFFF7,1188,0xFFF7,1087,0xFFF7,1213,0xFFF7,1189,0xFFF7,1209,0xFFFF};
static struct eif_par_types par1347 = {1347, ptf1347, (uint16) 9, (uint16) 0, (char) 0};

/* WEL_NM_LIST_VIEW */
static EIF_TYPE_INDEX ptf1348[] = {1298,0xFFFF};
static struct eif_par_types par1348 = {1348, ptf1348, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_LIST_VIEW_ITEM */
static EIF_TYPE_INDEX ptf1349[] = {1298,0xFFF7,1092,0xFFF7,1091,0xFFFF};
static struct eif_par_types par1349 = {1349, ptf1349, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_LIST_VIEW_COLUMN */
static EIF_TYPE_INDEX ptf1350[] = {1298,0xFFF7,1186,0xFFFF};
static struct eif_par_types par1350 = {1350, ptf1350, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_CHARACTER_RANGE */
static EIF_TYPE_INDEX ptf1351[] = {1298,0xFFFF};
static struct eif_par_types par1351 = {1351, ptf1351, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CHARACTER_ARRAY */
static EIF_TYPE_INDEX ptf1352[] = {1298,0xFFFF};
static struct eif_par_types par1352 = {1352, ptf1352, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_PAINT_STRUCT */
static EIF_TYPE_INDEX ptf1353[] = {1298,0xFFFF};
static struct eif_par_types par1353 = {1353, ptf1353, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MONITOR_INFO */
static EIF_TYPE_INDEX ptf1354[] = {1298,0xFFFF};
static struct eif_par_types par1354 = {1354, ptf1354, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_ICON_INFO */
static EIF_TYPE_INDEX ptf1355[] = {1298,0xFFF7,41,0xFFFF};
static struct eif_par_types par1355 = {1355, ptf1355, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_WND_CLASS */
static EIF_TYPE_INDEX ptf1356[] = {1298,0xFFFF};
static struct eif_par_types par1356 = {1356, ptf1356, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MENU_BAR_INFO */
static EIF_TYPE_INDEX ptf1357[] = {1298,0xFFFF};
static struct eif_par_types par1357 = {1357, ptf1357, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_WINDOW_PLACEMENT */
static EIF_TYPE_INDEX ptf1358[] = {1298,0xFFFF};
static struct eif_par_types par1358 = {1358, ptf1358, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_NM_CUSTOM_DRAW */
static EIF_TYPE_INDEX ptf1359[] = {1298,0xFFFF};
static struct eif_par_types par1359 = {1359, ptf1359, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_NM_TREE_VIEW_GETINFOTIP */
static EIF_TYPE_INDEX ptf1360[] = {1298,0xFFFF};
static struct eif_par_types par1360 = {1360, ptf1360, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TOOLTIP_TEXT */
static EIF_TYPE_INDEX ptf1361[] = {1298,0xFFF7,1213,0xFFFF};
static struct eif_par_types par1361 = {1361, ptf1361, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_NM_LIST_VIEW_GETINFOTIP */
static EIF_TYPE_INDEX ptf1362[] = {1298,0xFFFF};
static struct eif_par_types par1362 = {1362, ptf1362, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RICH_EDIT_SELCHANGE */
static EIF_TYPE_INDEX ptf1363[] = {1298,0xFFF7,1213,0xFFFF};
static struct eif_par_types par1363 = {1363, ptf1363, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_TRACK_MOUSE_EVENT */
static EIF_TYPE_INDEX ptf1364[] = {1298,0xFFFF};
static struct eif_par_types par1364 = {1364, ptf1364, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MIN_MAX_INFO */
static EIF_TYPE_INDEX ptf1365[] = {1298,0xFFFF};
static struct eif_par_types par1365 = {1365, ptf1365, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RECT */
static EIF_TYPE_INDEX ptf1366[] = {1298,0xFFFF};
static struct eif_par_types par1366 = {1366, ptf1366, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RICH_EDIT_STREAM */
static EIF_TYPE_INDEX ptf1367[] = {1298,0xFFFF};
static struct eif_par_types par1367 = {1367, ptf1367, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RICH_EDIT_STREAM_OUT */
static EIF_TYPE_INDEX ptf1368[] = {1367,0xFFFF};
static struct eif_par_types par1368 = {1368, ptf1368, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RICH_EDIT_FILE_SAVER */
static EIF_TYPE_INDEX ptf1369[] = {1368,0xFFFF};
static struct eif_par_types par1369 = {1369, ptf1369, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RICH_EDIT_BUFFER_SAVER */
static EIF_TYPE_INDEX ptf1370[] = {1368,0xFFFF};
static struct eif_par_types par1370 = {1370, ptf1370, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RICH_EDIT_STREAM_IN */
static EIF_TYPE_INDEX ptf1371[] = {1367,0xFFFF};
static struct eif_par_types par1371 = {1371, ptf1371, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RICH_EDIT_FILE_LOADER */
static EIF_TYPE_INDEX ptf1372[] = {1371,0xFFFF};
static struct eif_par_types par1372 = {1372, ptf1372, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RICH_EDIT_BUFFER_LOADER */
static EIF_TYPE_INDEX ptf1373[] = {1371,0xFFFF};
static struct eif_par_types par1373 = {1373, ptf1373, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_BIT_OPERATIONS */
static EIF_TYPE_INDEX ptf1374[] = {0,0xFFFF};
static struct eif_par_types par1374 = {1374, ptf1374, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_HD_ITEM */
static EIF_TYPE_INDEX ptf1375[] = {1298,0xFFF7,1374,0xFFF7,1056,0xFFFF};
static struct eif_par_types par1375 = {1375, ptf1375, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_LIST_VIEW_SEARCH_INFO */
static EIF_TYPE_INDEX ptf1376[] = {1298,0xFFF7,1374,0xFFF7,1057,0xFFF7,1214,0xFFFF};
static struct eif_par_types par1376 = {1376, ptf1376, (uint16) 4, (uint16) 0, (char) 0};

/* EV_CLASSIC_THEME_DRAWER_IMP */
static EIF_TYPE_INDEX ptf1377[] = {1185,0xFFF7,1374,0xFFF7,1259,0xFFFF};
static struct eif_par_types par1377 = {1377, ptf1377, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_MSG_BOX */
static EIF_TYPE_INDEX ptf1378[] = {1200,0xFFF7,1066,0xFFF7,1374,0xFFFF};
static struct eif_par_types par1378 = {1378, ptf1378, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_COMBO_BOX_EX_ITEM */
static EIF_TYPE_INDEX ptf1379[] = {1298,0xFFF7,1170,0xFFF7,1374,0xFFFF};
static struct eif_par_types par1379 = {1379, ptf1379, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_PARAGRAPH_FORMAT */
static EIF_TYPE_INDEX ptf1380[] = {1298,0xFFF7,1165,0xFFF7,1164,0xFFF7,1374,0xFFFF};
static struct eif_par_types par1380 = {1380, ptf1380, (uint16) 4, (uint16) 0, (char) 0};

/* WEL_PARAGRAPH_FORMAT2 */
static EIF_TYPE_INDEX ptf1381[] = {1380,0xFFFF};
static struct eif_par_types par1381 = {1381, ptf1381, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_TREE_VIEW_ITEM */
static EIF_TYPE_INDEX ptf1382[] = {1298,0xFFF7,1148,0xFFF7,1374,0xFFFF};
static struct eif_par_types par1382 = {1382, ptf1382, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_MENU */
static EIF_TYPE_INDEX ptf1383[] = {1276,0xFFF7,1181,0xFFF7,1130,0xFFF7,1374,0xFFFF};
static struct eif_par_types par1383 = {1383, ptf1383, (uint16) 4, (uint16) 0, (char) 0};

/* WEL_DC */
static EIF_TYPE_INDEX ptf1384[] = {1266,0xFFF7,1374,0xFFF7,1228,0xFFF7,1217,0xFFF7,1115,0xFFF7,1084,0xFFF7,1151,0xFFF7,1083,0xFFF7,1082,0xFFF7,1209,0xFFF7,1213,0xFFF7,1124,0xFFF7,1206,0xFFFF};
static struct eif_par_types par1384 = {1384, ptf1384, (uint16) 13, (uint16) 0, (char) 0};

/* WEL_MEMORY_DC */
static EIF_TYPE_INDEX ptf1385[] = {1384,0xFFFF};
static struct eif_par_types par1385 = {1385, ptf1385, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_PRINTER_DC */
static EIF_TYPE_INDEX ptf1386[] = {1384,0xFFFF};
static struct eif_par_types par1386 = {1386, ptf1386, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_DEFAULT_PRINTER_DC */
static EIF_TYPE_INDEX ptf1387[] = {1386,0xFFFF};
static struct eif_par_types par1387 = {1387, ptf1387, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_DISPLAY_DC */
static EIF_TYPE_INDEX ptf1388[] = {1384,0xFFFF};
static struct eif_par_types par1388 = {1388, ptf1388, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CLIENT_DC */
static EIF_TYPE_INDEX ptf1389[] = {1388,0xFFFF};
static struct eif_par_types par1389 = {1389, ptf1389, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SCREEN_DC */
static EIF_TYPE_INDEX ptf1390[] = {1388,0xFFFF};
static struct eif_par_types par1390 = {1390, ptf1390, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_PAINT_DC */
static EIF_TYPE_INDEX ptf1391[] = {1388,0xFFFF};
static struct eif_par_types par1391 = {1391, ptf1391, (uint16) 1, (uint16) 0, (char) 0};

/* EV_GDI_OBJECT */
static EIF_TYPE_INDEX ptf1392[] = {188,0xFFFF};
static struct eif_par_types par1392 = {1392, ptf1392, (uint16) 1, (uint16) 0, (char) 0};

/* EV_GDI_BRUSH */
static EIF_TYPE_INDEX ptf1393[] = {1392,0xFFFF};
static struct eif_par_types par1393 = {1393, ptf1393, (uint16) 1, (uint16) 0, (char) 0};

/* EV_GDI_PEN */
static EIF_TYPE_INDEX ptf1394[] = {1392,0xFFFF};
static struct eif_par_types par1394 = {1394, ptf1394, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SIMPLE_HELP_CONTEXT */
static EIF_TYPE_INDEX ptf1395[] = {1140,0xFFF7,236,0xFFFF};
static struct eif_par_types par1395 = {1395, ptf1395, (uint16) 2, (uint16) 0, (char) 0};

/* EV_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1396[] = {0,0xFFFF};
static struct eif_par_types par1396 = {1396, ptf1396, (uint16) 1, (uint16) 0, (char) 0};

/* EV_NOTEBOOK_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1397[] = {1396,0xFFFF};
static struct eif_par_types par1397 = {1397, ptf1397, (uint16) 1, (uint16) 0, (char) 0};

/* EV_LIST_ITEM_LIST_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1398[] = {1396,0xFFFF};
static struct eif_par_types par1398 = {1398, ptf1398, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXT_FIELD_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1399[] = {1396,0xFFFF};
static struct eif_par_types par1399 = {1399, ptf1399, (uint16) 1, (uint16) 0, (char) 0};

/* EV_GAUGE_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1400[] = {1396,0xFFFF};
static struct eif_par_types par1400 = {1400, ptf1400, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TREE_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1401[] = {1396,0xFFFF};
static struct eif_par_types par1401 = {1401, ptf1401, (uint16) 1, (uint16) 0, (char) 0};

/* EV_RICH_TEXT_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1402[] = {1396,0xFFFF};
static struct eif_par_types par1402 = {1402, ptf1402, (uint16) 1, (uint16) 0, (char) 0};

/* EV_CHECKABLE_TREE_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1403[] = {1396,0xFFFF};
static struct eif_par_types par1403 = {1403, ptf1403, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TREE_NODE_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1404[] = {1396,0xFFFF};
static struct eif_par_types par1404 = {1404, ptf1404, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MULTI_COLUMN_LIST_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1405[] = {1396,0xFFFF};
static struct eif_par_types par1405 = {1405, ptf1405, (uint16) 1, (uint16) 0, (char) 0};

/* EV_COMBO_BOX_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1406[] = {1396,0xFFFF};
static struct eif_par_types par1406 = {1406, ptf1406, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TITLED_WINDOW_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1407[] = {1396,0xFFFF};
static struct eif_par_types par1407 = {1407, ptf1407, (uint16) 1, (uint16) 0, (char) 0};

/* EV_LIST_ITEM_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1408[] = {1396,0xFFFF};
static struct eif_par_types par1408 = {1408, ptf1408, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MULTI_COLUMN_LIST_ROW_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1409[] = {1396,0xFFFF};
static struct eif_par_types par1409 = {1409, ptf1409, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_BUTTON_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1410[] = {1396,0xFFFF};
static struct eif_par_types par1410 = {1410, ptf1410, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXT_COMPONENT_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1411[] = {1396,0xFFFF};
static struct eif_par_types par1411 = {1411, ptf1411, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DRAWABLE_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1412[] = {1396,0xFFFF};
static struct eif_par_types par1412 = {1412, ptf1412, (uint16) 1, (uint16) 0, (char) 0};

/* EV_BUTTON_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1413[] = {1396,0xFFFF};
static struct eif_par_types par1413 = {1413, ptf1413, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MENU_ITEM_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1414[] = {1396,0xFFFF};
static struct eif_par_types par1414 = {1414, ptf1414, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MENU_ITEM_LIST_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1415[] = {1396,0xFFFF};
static struct eif_par_types par1415 = {1415, ptf1415, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ITEM_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1416[] = {1396,0xFFFF};
static struct eif_par_types par1416 = {1416, ptf1416, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DOCKABLE_SOURCE_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1417[] = {1396,0xFFFF};
static struct eif_par_types par1417 = {1417, ptf1417, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PICK_AND_DROPABLE_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1418[] = {1396,0xFFFF};
static struct eif_par_types par1418 = {1418, ptf1418, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DOCKABLE_TARGET_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1419[] = {1396,0xFFFF};
static struct eif_par_types par1419 = {1419, ptf1419, (uint16) 1, (uint16) 0, (char) 0};

/* EV_WIDGET_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1420[] = {1396,0xFFFF};
static struct eif_par_types par1420 = {1420, ptf1420, (uint16) 1, (uint16) 0, (char) 0};

/* EV_APPLICATION_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1421[] = {1396,0xFFFF};
static struct eif_par_types par1421 = {1421, ptf1421, (uint16) 1, (uint16) 0, (char) 0};

/* EV_WINDOW_ACTION_SEQUENCES */
static EIF_TYPE_INDEX ptf1422[] = {1396,0xFFFF};
static struct eif_par_types par1422 = {1422, ptf1422, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ANY */
static EIF_TYPE_INDEX ptf1423[] = {0,0xFFFF};
static struct eif_par_types par1423 = {1423, ptf1423, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PARAGRAPH_FORMAT */
static EIF_TYPE_INDEX ptf1424[] = {1423,0xFFFF};
static struct eif_par_types par1424 = {1424, ptf1424, (uint16) 1, (uint16) 0, (char) 0};

/* EV_CHARACTER_FORMAT */
static EIF_TYPE_INDEX ptf1425[] = {1423,0xFFFF};
static struct eif_par_types par1425 = {1425, ptf1425, (uint16) 1, (uint16) 0, (char) 0};

/* EV_REGION */
static EIF_TYPE_INDEX ptf1426[] = {1423,0xFFFF};
static struct eif_par_types par1426 = {1426, ptf1426, (uint16) 1, (uint16) 0, (char) 0};

/* EV_COLOR */
static EIF_TYPE_INDEX ptf1427[] = {1423,0xFFF7,188,0xFFFF};
static struct eif_par_types par1427 = {1427, ptf1427, (uint16) 2, (uint16) 0, (char) 0};

/* EV_PIXEL_BUFFER */
static EIF_TYPE_INDEX ptf1428[] = {1423,0xFFFF};
static struct eif_par_types par1428 = {1428, ptf1428, (uint16) 1, (uint16) 0, (char) 0};

/* EV_FONT */
static EIF_TYPE_INDEX ptf1429[] = {1423,0xFFF7,1224,0xFFFF};
static struct eif_par_types par1429 = {1429, ptf1429, (uint16) 2, (uint16) 0, (char) 0};

/* EV_POINTER_STYLE */
static EIF_TYPE_INDEX ptf1430[] = {1423,0xFFFF};
static struct eif_par_types par1430 = {1430, ptf1430, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ENVIRONMENT */
static EIF_TYPE_INDEX ptf1431[] = {1423,0xFFFF};
static struct eif_par_types par1431 = {1431, ptf1431, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ACCELERATOR */
static EIF_TYPE_INDEX ptf1432[] = {1423,0xFFF7,142,0xFFFF};
static struct eif_par_types par1432 = {1432, ptf1432, (uint16) 2, (uint16) 0, (char) 0};

/* EV_CLIPBOARD */
static EIF_TYPE_INDEX ptf1433[] = {1423,0xFFFF};
static struct eif_par_types par1433 = {1433, ptf1433, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TAB_CONTROLABLE */
static EIF_TYPE_INDEX ptf1434[] = {1423,0xFFFF};
static struct eif_par_types par1434 = {1434, ptf1434, (uint16) 1, (uint16) 0, (char) 0};

/* EV_IDENTIFIABLE */
static EIF_TYPE_INDEX ptf1435[] = {1423,0xFFF7,142,0xFFFF};
static struct eif_par_types par1435 = {1435, ptf1435, (uint16) 2, (uint16) 0, (char) 0};

/* EV_HELP_CONTEXTABLE */
static EIF_TYPE_INDEX ptf1436[] = {1423,0xFFFF};
static struct eif_par_types par1436 = {1436, ptf1436, (uint16) 1, (uint16) 0, (char) 0};

/* EV_APPLICATION */
static EIF_TYPE_INDEX ptf1437[] = {1423,0xFFF7,1421,0xFFFF};
static struct eif_par_types par1437 = {1437, ptf1437, (uint16) 2, (uint16) 0, (char) 0};

/* GAME */
static EIF_TYPE_INDEX ptf1438[] = {1437,0xFFFF};
static struct eif_par_types par1438 = {1438, ptf1438, (uint16) 1, (uint16) 0, (char) 0};

/* EV_COLORIZABLE */
static EIF_TYPE_INDEX ptf1439[] = {1423,0xFFFF};
static struct eif_par_types par1439 = {1439, ptf1439, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DOCKABLE_SOURCE */
static EIF_TYPE_INDEX ptf1440[] = {1423,0xFFF7,1417,0xFFFF};
static struct eif_par_types par1440 = {1440, ptf1440, (uint16) 2, (uint16) 0, (char) 0};

/* EV_RADIO_PEER */
static EIF_TYPE_INDEX ptf1441[] = {1423,0xFFFF};
static struct eif_par_types par1441 = {1441, ptf1441, (uint16) 1, (uint16) 0, (char) 0};

/* EV_POSITIONED */
static EIF_TYPE_INDEX ptf1442[] = {1423,0xFFFF};
static struct eif_par_types par1442 = {1442, ptf1442, (uint16) 1, (uint16) 0, (char) 0};

/* EV_POSITIONABLE */
static EIF_TYPE_INDEX ptf1443[] = {1442,0xFFFF};
static struct eif_par_types par1443 = {1443, ptf1443, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DOCKABLE_TARGET */
static EIF_TYPE_INDEX ptf1444[] = {1423,0xFFF7,1419,0xFFF7,174,0xFFFF};
static struct eif_par_types par1444 = {1444, ptf1444, (uint16) 3, (uint16) 0, (char) 0};

/* EV_ITEM_PIXMAP_SCALER */
static EIF_TYPE_INDEX ptf1445[] = {1423,0xFFFF};
static struct eif_par_types par1445 = {1445, ptf1445, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TOOLTIPABLE */
static EIF_TYPE_INDEX ptf1446[] = {1423,0xFFFF};
static struct eif_par_types par1446 = {1446, ptf1446, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PIXMAPABLE */
static EIF_TYPE_INDEX ptf1447[] = {1423,0xFFFF};
static struct eif_par_types par1447 = {1447, ptf1447, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SELECTABLE */
static EIF_TYPE_INDEX ptf1448[] = {1423,0xFFFF};
static struct eif_par_types par1448 = {1448, ptf1448, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DESELECTABLE */
static EIF_TYPE_INDEX ptf1449[] = {1448,0xFFFF};
static struct eif_par_types par1449 = {1449, ptf1449, (uint16) 1, (uint16) 0, (char) 0};

/* EV_FONTABLE */
static EIF_TYPE_INDEX ptf1450[] = {1423,0xFFFF};
static struct eif_par_types par1450 = {1450, ptf1450, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DRAWABLE */
static EIF_TYPE_INDEX ptf1451[] = {1439,0xFFF7,1450,0xFFF7,1197,0xFFFF};
static struct eif_par_types par1451 = {1451, ptf1451, (uint16) 3, (uint16) 0, (char) 0};

/* EV_BITMAP */
static EIF_TYPE_INDEX ptf1452[] = {1451,0xFFFF};
static struct eif_par_types par1452 = {1452, ptf1452, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SCREEN */
static EIF_TYPE_INDEX ptf1453[] = {1451,0xFFFF};
static struct eif_par_types par1453 = {1453, ptf1453, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXTABLE */
static EIF_TYPE_INDEX ptf1454[] = {1423,0xFFFF};
static struct eif_par_types par1454 = {1454, ptf1454, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXT_ALIGNABLE */
static EIF_TYPE_INDEX ptf1455[] = {1454,0xFFFF};
static struct eif_par_types par1455 = {1455, ptf1455, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PICK_AND_DROPABLE */
static EIF_TYPE_INDEX ptf1456[] = {1423,0xFFF7,1265,0xFFF7,1442,0xFFF7,1418,0xFFFF};
static struct eif_par_types par1456 = {1456, ptf1456, (uint16) 4, (uint16) 0, (char) 0};

/* EV_CONTAINABLE */
static EIF_TYPE_INDEX ptf1457[] = {1423,0xFFF7,1435,0xFFFF};
static struct eif_par_types par1457 = {1457, ptf1457, (uint16) 2, (uint16) 0, (char) 0};

/* EV_SENSITIVE */
static EIF_TYPE_INDEX ptf1458[] = {1457,0xFFFF};
static struct eif_par_types par1458 = {1458, ptf1458, (uint16) 1, (uint16) 0, (char) 0};

/* EV_WIDGET */
static EIF_TYPE_INDEX ptf1459[] = {1456,0xFFF7,1440,0xFFF7,1458,0xFFF7,1439,0xFFF7,1420,0xFFF7,1436,0xFFFF};
static struct eif_par_types par1459 = {1459, ptf1459, (uint16) 6, (uint16) 0, (char) 0};

/* EV_CONTAINER */
static EIF_TYPE_INDEX ptf1460[] = {1459,0xFFF7,1447,0xFFF7,284,0xFF01,1459,0xFFF7,282,0xFF01,1459,0xFFFF};
static struct eif_par_types par1460 = {1460, ptf1460, (uint16) 4, (uint16) 0, (char) 0};

/* EV_WIDGET_LIST */
static EIF_TYPE_INDEX ptf1461[] = {1460,0xFFF7,1788,0xFF01,1459,0xFFFF};
static struct eif_par_types par1461 = {1461, ptf1461, (uint16) 2, (uint16) 0, (char) 0};

/* EV_NOTEBOOK */
static EIF_TYPE_INDEX ptf1462[] = {1461,0xFFF7,1397,0xFFF7,1450,0xFFF7,1445,0xFFFF};
static struct eif_par_types par1462 = {1462, ptf1462, (uint16) 4, (uint16) 0, (char) 0};

/* EV_BOX */
static EIF_TYPE_INDEX ptf1463[] = {1461,0xFFF7,1444,0xFFFF};
static struct eif_par_types par1463 = {1463, ptf1463, (uint16) 2, (uint16) 0, (char) 0};

/* EV_HORIZONTAL_BOX */
static EIF_TYPE_INDEX ptf1464[] = {1463,0xFFFF};
static struct eif_par_types par1464 = {1464, ptf1464, (uint16) 1, (uint16) 0, (char) 0};

/* EV_VERTICAL_BOX */
static EIF_TYPE_INDEX ptf1465[] = {1463,0xFFFF};
static struct eif_par_types par1465 = {1465, ptf1465, (uint16) 1, (uint16) 0, (char) 0};

/* EV_CELL */
static EIF_TYPE_INDEX ptf1466[] = {1460,0xFFF7,1444,0xFFFF};
static struct eif_par_types par1466 = {1466, ptf1466, (uint16) 2, (uint16) 0, (char) 0};

/* EV_FRAME */
static EIF_TYPE_INDEX ptf1467[] = {1466,0xFFF7,1455,0xFFF7,1450,0xFFF7,1174,0xFFFF};
static struct eif_par_types par1467 = {1467, ptf1467, (uint16) 4, (uint16) 0, (char) 0};

/* EV_VIEWPORT */
static EIF_TYPE_INDEX ptf1468[] = {1466,0xFFFF};
static struct eif_par_types par1468 = {1468, ptf1468, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SCROLLABLE_AREA */
static EIF_TYPE_INDEX ptf1469[] = {1468,0xFFFF};
static struct eif_par_types par1469 = {1469, ptf1469, (uint16) 1, (uint16) 0, (char) 0};

/* EV_WINDOW */
static EIF_TYPE_INDEX ptf1470[] = {1466,0xFFF7,1443,0xFFF7,1422,0xFFF7,1205,0xFFFF};
static struct eif_par_types par1470 = {1470, ptf1470, (uint16) 4, (uint16) 0, (char) 0};

/* EV_POPUP_WINDOW */
static EIF_TYPE_INDEX ptf1471[] = {1470,0xFFFF};
static struct eif_par_types par1471 = {1471, ptf1471, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TITLED_WINDOW */
static EIF_TYPE_INDEX ptf1472[] = {1470,0xFFF7,1407,0xFFFF};
static struct eif_par_types par1472 = {1472, ptf1472, (uint16) 2, (uint16) 0, (char) 0};

/* EV_DIALOG */
static EIF_TYPE_INDEX ptf1473[] = {1472,0xFFFF};
static struct eif_par_types par1473 = {1473, ptf1473, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DOCKABLE_DIALOG */
static EIF_TYPE_INDEX ptf1474[] = {1473,0xFFFF};
static struct eif_par_types par1474 = {1474, ptf1474, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MESSAGE_DIALOG */
static EIF_TYPE_INDEX ptf1475[] = {1473,0xFFF7,1175,0xFFFF};
static struct eif_par_types par1475 = {1475, ptf1475, (uint16) 2, (uint16) 0, (char) 0};

/* EV_INFORMATION_DIALOG */
static EIF_TYPE_INDEX ptf1476[] = {1475,0xFFFF};
static struct eif_par_types par1476 = {1476, ptf1476, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PRIMITIVE */
static EIF_TYPE_INDEX ptf1477[] = {1459,0xFFF7,1446,0xFFF7,1434,0xFFFF};
static struct eif_par_types par1477 = {1477, ptf1477, (uint16) 3, (uint16) 0, (char) 0};

/* EV_PIXMAP */
static EIF_TYPE_INDEX ptf1478[] = {1451,0xFFF7,1477,0xFFF7,1412,0xFFFF};
static struct eif_par_types par1478 = {1478, ptf1478, (uint16) 3, (uint16) 0, (char) 0};

/* EV_LABEL */
static EIF_TYPE_INDEX ptf1479[] = {1477,0xFFF7,1455,0xFFF7,1450,0xFFFF};
static struct eif_par_types par1479 = {1479, ptf1479, (uint16) 3, (uint16) 0, (char) 0};

/* EV_GAUGE */
static EIF_TYPE_INDEX ptf1480[] = {1477,0xFFF7,1400,0xFFFF};
static struct eif_par_types par1480 = {1480, ptf1480, (uint16) 2, (uint16) 0, (char) 0};

/* EV_RANGE */
static EIF_TYPE_INDEX ptf1481[] = {1480,0xFFFF};
static struct eif_par_types par1481 = {1481, ptf1481, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXT_COMPONENT */
static EIF_TYPE_INDEX ptf1482[] = {1477,0xFFF7,1454,0xFFF7,1411,0xFFFF};
static struct eif_par_types par1482 = {1482, ptf1482, (uint16) 3, (uint16) 0, (char) 0};

/* EV_TEXT */
static EIF_TYPE_INDEX ptf1483[] = {1482,0xFFF7,1450,0xFFFF};
static struct eif_par_types par1483 = {1483, ptf1483, (uint16) 2, (uint16) 0, (char) 0};

/* EV_RICH_TEXT */
static EIF_TYPE_INDEX ptf1484[] = {1483,0xFFF7,1402,0xFFFF};
static struct eif_par_types par1484 = {1484, ptf1484, (uint16) 2, (uint16) 0, (char) 0};

/* EV_TEXT_FIELD */
static EIF_TYPE_INDEX ptf1485[] = {1482,0xFFF7,1450,0xFFF7,1455,0xFFF7,1399,0xFFFF};
static struct eif_par_types par1485 = {1485, ptf1485, (uint16) 4, (uint16) 0, (char) 0};

/* EV_SPIN_BUTTON */
static EIF_TYPE_INDEX ptf1486[] = {1480,0xFFF7,1485,0xFFFF};
static struct eif_par_types par1486 = {1486, ptf1486, (uint16) 2, (uint16) 0, (char) 0};

/* EV_BUTTON */
static EIF_TYPE_INDEX ptf1487[] = {1477,0xFFF7,1455,0xFFF7,1447,0xFFF7,1450,0xFFF7,1413,0xFFFF};
static struct eif_par_types par1487 = {1487, ptf1487, (uint16) 5, (uint16) 0, (char) 0};

/* EV_RADIO_BUTTON */
static EIF_TYPE_INDEX ptf1488[] = {1487,0xFFF7,1441,0xFFF7,1448,0xFFFF};
static struct eif_par_types par1488 = {1488, ptf1488, (uint16) 3, (uint16) 0, (char) 0};

/* EV_TOGGLE_BUTTON */
static EIF_TYPE_INDEX ptf1489[] = {1487,0xFFF7,1449,0xFFFF};
static struct eif_par_types par1489 = {1489, ptf1489, (uint16) 2, (uint16) 0, (char) 0};

/* EV_CHECK_BUTTON */
static EIF_TYPE_INDEX ptf1490[] = {1489,0xFFFF};
static struct eif_par_types par1490 = {1490, ptf1490, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ITEM */
static EIF_TYPE_INDEX ptf1491[] = {1456,0xFFF7,1447,0xFFF7,1457,0xFFF7,1416,0xFFFF};
static struct eif_par_types par1491 = {1491, ptf1491, (uint16) 4, (uint16) 0, (char) 0};

/* EV_LIST_ITEM */
static EIF_TYPE_INDEX ptf1492[] = {1491,0xFFF7,1454,0xFFF7,1449,0xFFF7,1446,0xFFF7,1408,0xFFFF};
static struct eif_par_types par1492 = {1492, ptf1492, (uint16) 5, (uint16) 0, (char) 0};

/* EV_MULTI_COLUMN_LIST_ROW */
static EIF_TYPE_INDEX ptf1493[] = {1491,0xFFF7,622,0xFF01,242,0xFFF7,1449,0xFFF7,1409,0xFFFF};
static struct eif_par_types par1493 = {1493, ptf1493, (uint16) 4, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_ITEM */
static EIF_TYPE_INDEX ptf1494[] = {1491,0xFFFF};
static struct eif_par_types par1494 = {1494, ptf1494, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_SEPARATOR */
static EIF_TYPE_INDEX ptf1495[] = {1494,0xFFFF};
static struct eif_par_types par1495 = {1495, ptf1495, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_BUTTON */
static EIF_TYPE_INDEX ptf1496[] = {1494,0xFFF7,1454,0xFFF7,1446,0xFFF7,1410,0xFFF7,1440,0xFFF7,1458,0xFFFF};
static struct eif_par_types par1496 = {1496, ptf1496, (uint16) 6, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_DROP_DOWN_BUTTON */
static EIF_TYPE_INDEX ptf1497[] = {1496,0xFFFF};
static struct eif_par_types par1497 = {1497, ptf1497, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_TOGGLE_BUTTON */
static EIF_TYPE_INDEX ptf1498[] = {1496,0xFFF7,1449,0xFFFF};
static struct eif_par_types par1498 = {1498, ptf1498, (uint16) 2, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_RADIO_BUTTON */
static EIF_TYPE_INDEX ptf1499[] = {1496,0xFFF7,1441,0xFFF7,1448,0xFFFF};
static struct eif_par_types par1499 = {1499, ptf1499, (uint16) 3, (uint16) 0, (char) 0};

/* EV_MENU_ITEM */
static EIF_TYPE_INDEX ptf1500[] = {1491,0xFFF7,1454,0xFFF7,1458,0xFFF7,1414,0xFFFF};
static struct eif_par_types par1500 = {1500, ptf1500, (uint16) 4, (uint16) 0, (char) 0};

/* EV_CHECK_MENU_ITEM */
static EIF_TYPE_INDEX ptf1501[] = {1500,0xFFF7,1449,0xFFFF};
static struct eif_par_types par1501 = {1501, ptf1501, (uint16) 2, (uint16) 0, (char) 0};

/* EV_RADIO_MENU_ITEM */
static EIF_TYPE_INDEX ptf1502[] = {1500,0xFFF7,1441,0xFFF7,1448,0xFFFF};
static struct eif_par_types par1502 = {1502, ptf1502, (uint16) 3, (uint16) 0, (char) 0};

/* EV_MENU_SEPARATOR */
static EIF_TYPE_INDEX ptf1503[] = {1500,0xFFFF};
static struct eif_par_types par1503 = {1503, ptf1503, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MULTI_COLUMN_LIST */
static EIF_TYPE_INDEX ptf1504[] = {1477,0xFFF7,1785,0xFF01,1493,0xFFF7,1445,0xFFF7,1405,0xFFFF};
static struct eif_par_types par1504 = {1504, ptf1504, (uint16) 4, (uint16) 0, (char) 0};

/* EV_TOOL_BAR */
static EIF_TYPE_INDEX ptf1505[] = {1477,0xFFF7,1444,0xFFF7,1785,0xFF01,1494,0xFFFF};
static struct eif_par_types par1505 = {1505, ptf1505, (uint16) 3, (uint16) 0, (char) 0};

/* EV_TREE_NODE_LIST */
static EIF_TYPE_INDEX ptf1506[] = {1785,0xFF01,1509,0xFFFF};
static struct eif_par_types par1506 = {1506, ptf1506, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TREE */
static EIF_TYPE_INDEX ptf1507[] = {1477,0xFFF7,1506,0xFFF7,1445,0xFFF7,1401,0xFFFF};
static struct eif_par_types par1507 = {1507, ptf1507, (uint16) 4, (uint16) 0, (char) 0};

/* EV_CHECKABLE_TREE */
static EIF_TYPE_INDEX ptf1508[] = {1507,0xFFF7,1403,0xFFFF};
static struct eif_par_types par1508 = {1508, ptf1508, (uint16) 2, (uint16) 0, (char) 0};

/* EV_TREE_NODE */
static EIF_TYPE_INDEX ptf1509[] = {1491,0xFFF7,1506,0xFFF7,1454,0xFFF7,1449,0xFFF7,1446,0xFFF7,1404,0xFFFF};
static struct eif_par_types par1509 = {1509, ptf1509, (uint16) 6, (uint16) 0, (char) 0};

/* EV_TREE_ITEM */
static EIF_TYPE_INDEX ptf1510[] = {1509,0xFFFF};
static struct eif_par_types par1510 = {1510, ptf1510, (uint16) 1, (uint16) 0, (char) 0};

/* EV_LIST_ITEM_LIST */
static EIF_TYPE_INDEX ptf1511[] = {1477,0xFFF7,1785,0xFF01,1492,0xFFF7,1445,0xFFF7,1398,0xFFFF};
static struct eif_par_types par1511 = {1511, ptf1511, (uint16) 4, (uint16) 0, (char) 0};

/* EV_LIST */
static EIF_TYPE_INDEX ptf1512[] = {1511,0xFFFF};
static struct eif_par_types par1512 = {1512, ptf1512, (uint16) 1, (uint16) 0, (char) 0};

/* EV_COMBO_BOX */
static EIF_TYPE_INDEX ptf1513[] = {1485,0xFFF7,1511,0xFFF7,1406,0xFFFF};
static struct eif_par_types par1513 = {1513, ptf1513, (uint16) 3, (uint16) 0, (char) 0};

/* EV_MENU_ITEM_LIST */
static EIF_TYPE_INDEX ptf1514[] = {1785,0xFF01,1500,0xFFF7,1415,0xFFFF};
static struct eif_par_types par1514 = {1514, ptf1514, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MENU */
static EIF_TYPE_INDEX ptf1515[] = {1500,0xFFF7,1514,0xFFFF};
static struct eif_par_types par1515 = {1515, ptf1515, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MENU_BAR */
static EIF_TYPE_INDEX ptf1516[] = {1514,0xFFF7,1442,0xFFFF};
static struct eif_par_types par1516 = {1516, ptf1516, (uint16) 2, (uint16) 0, (char) 0};

/* EV_NOTEBOOK_TAB */
static EIF_TYPE_INDEX ptf1517[] = {1423,0xFFF7,1454,0xFFF7,1447,0xFFF7,1448,0xFFFF};
static struct eif_par_types par1517 = {1517, ptf1517, (uint16) 4, (uint16) 0, (char) 0};

/* EV_ANY_I */
static EIF_TYPE_INDEX ptf1518[] = {0,0xFFFF};
static struct eif_par_types par1518 = {1518, ptf1518, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TAB_CONTROLABLE_I */
static EIF_TYPE_INDEX ptf1519[] = {1518,0xFFFF};
static struct eif_par_types par1519 = {1519, ptf1519, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PARAGRAPH_FORMAT_I */
static EIF_TYPE_INDEX ptf1520[] = {1518,0xFFFF};
static struct eif_par_types par1520 = {1520, ptf1520, (uint16) 1, (uint16) 0, (char) 0};

/* EV_REGION_I */
static EIF_TYPE_INDEX ptf1521[] = {1518,0xFFFF};
static struct eif_par_types par1521 = {1521, ptf1521, (uint16) 1, (uint16) 0, (char) 0};

/* EV_REGION_IMP */
static EIF_TYPE_INDEX ptf1522[] = {1521,0xFFF7,1283,0xFFFF};
static struct eif_par_types par1522 = {1522, ptf1522, (uint16) 2, (uint16) 0, (char) 0};

/* EV_CHARACTER_FORMAT_I */
static EIF_TYPE_INDEX ptf1523[] = {1518,0xFFFF};
static struct eif_par_types par1523 = {1523, ptf1523, (uint16) 1, (uint16) 0, (char) 0};

/* EV_COLOR_I */
static EIF_TYPE_INDEX ptf1524[] = {1518,0xFFFF};
static struct eif_par_types par1524 = {1524, ptf1524, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PIXEL_BUFFER_I */
static EIF_TYPE_INDEX ptf1525[] = {1518,0xFFFF};
static struct eif_par_types par1525 = {1525, ptf1525, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PIXEL_BUFFER_IMP */
static EIF_TYPE_INDEX ptf1526[] = {1525,0xFFFF};
static struct eif_par_types par1526 = {1526, ptf1526, (uint16) 1, (uint16) 0, (char) 0};

/* EV_FONT_I */
static EIF_TYPE_INDEX ptf1527[] = {1518,0xFFF7,1224,0xFFFF};
static struct eif_par_types par1527 = {1527, ptf1527, (uint16) 2, (uint16) 0, (char) 0};

/* EV_HELP_CONTEXTABLE_I */
static EIF_TYPE_INDEX ptf1528[] = {1518,0xFFFF};
static struct eif_par_types par1528 = {1528, ptf1528, (uint16) 1, (uint16) 0, (char) 0};

/* EV_POINTER_STYLE_I */
static EIF_TYPE_INDEX ptf1529[] = {1518,0xFFFF};
static struct eif_par_types par1529 = {1529, ptf1529, (uint16) 1, (uint16) 0, (char) 0};

/* EV_POINTER_STYLE_IMP */
static EIF_TYPE_INDEX ptf1530[] = {1529,0xFFFF};
static struct eif_par_types par1530 = {1530, ptf1530, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ENVIRONMENT_I */
static EIF_TYPE_INDEX ptf1531[] = {1518,0xFFFF};
static struct eif_par_types par1531 = {1531, ptf1531, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ACCELERATOR_I */
static EIF_TYPE_INDEX ptf1532[] = {1518,0xFFFF};
static struct eif_par_types par1532 = {1532, ptf1532, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ACCELERATOR_IMP */
static EIF_TYPE_INDEX ptf1533[] = {1532,0xFFFF};
static struct eif_par_types par1533 = {1533, ptf1533, (uint16) 1, (uint16) 0, (char) 0};

/* EV_CLIPBOARD_I */
static EIF_TYPE_INDEX ptf1534[] = {1518,0xFFFF};
static struct eif_par_types par1534 = {1534, ptf1534, (uint16) 1, (uint16) 0, (char) 0};

/* EV_CLIPBOARD_IMP */
static EIF_TYPE_INDEX ptf1535[] = {1534,0xFFF7,1123,0xFFFF};
static struct eif_par_types par1535 = {1535, ptf1535, (uint16) 2, (uint16) 0, (char) 0};

/* EV_APPLICATION_I */
static EIF_TYPE_INDEX ptf1536[] = {1518,0xFFF7,1139,0xFFF7,70,0xFFF7,169,0xFFFF};
static struct eif_par_types par1536 = {1536, ptf1536, (uint16) 4, (uint16) 0, (char) 0};

/* EV_COLORIZABLE_I */
static EIF_TYPE_INDEX ptf1537[] = {1518,0xFFFF};
static struct eif_par_types par1537 = {1537, ptf1537, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TREE_NODE_LIST_I */
static EIF_TYPE_INDEX ptf1538[] = {1786,0xFF01,1509,0xFFFF};
static struct eif_par_types par1538 = {1538, ptf1538, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MENU_ITEM_LIST_I */
static EIF_TYPE_INDEX ptf1539[] = {1786,0xFF01,1500,0xFFF7,1106,0xFFFF};
static struct eif_par_types par1539 = {1539, ptf1539, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MENU_ITEM_LIST_IMP */
static EIF_TYPE_INDEX ptf1540[] = {1539,0xFFF7,1791,0xFF01,1500,0xFF01,1778,0xFFF7,1383,0xFFF7,1213,0xFFFF};
static struct eif_par_types par1540 = {1540, ptf1540, (uint16) 4, (uint16) 0, (char) 0};

/* EV_SIZEABLE_IMP */
static EIF_TYPE_INDEX ptf1541[] = {1518,0xFFFF};
static struct eif_par_types par1541 = {1541, ptf1541, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SIZEABLE_PRIMITIVE_IMP */
static EIF_TYPE_INDEX ptf1542[] = {1541,0xFFFF};
static struct eif_par_types par1542 = {1542, ptf1542, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SIZEABLE_CONTAINER_IMP */
static EIF_TYPE_INDEX ptf1543[] = {1541,0xFFFF};
static struct eif_par_types par1543 = {1543, ptf1543, (uint16) 1, (uint16) 0, (char) 0};

/* EV_POSITIONED_I */
static EIF_TYPE_INDEX ptf1544[] = {1518,0xFFFF};
static struct eif_par_types par1544 = {1544, ptf1544, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MENU_BAR_I */
static EIF_TYPE_INDEX ptf1545[] = {1539,0xFFF7,1544,0xFFFF};
static struct eif_par_types par1545 = {1545, ptf1545, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MENU_BAR_IMP */
static EIF_TYPE_INDEX ptf1546[] = {1545,0xFFF7,1540,0xFFFF};
static struct eif_par_types par1546 = {1546, ptf1546, (uint16) 2, (uint16) 0, (char) 0};

/* EV_POSITIONABLE_I */
static EIF_TYPE_INDEX ptf1547[] = {1544,0xFFFF};
static struct eif_par_types par1547 = {1547, ptf1547, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SENSITIVE_I */
static EIF_TYPE_INDEX ptf1548[] = {1518,0xFFFF};
static struct eif_par_types par1548 = {1548, ptf1548, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DOCKABLE_SOURCE_I */
static EIF_TYPE_INDEX ptf1549[] = {1518,0xFFF7,1118,0xFFF7,1178,0xFFFF};
static struct eif_par_types par1549 = {1549, ptf1549, (uint16) 3, (uint16) 0, (char) 0};

/* EV_DOCKABLE_SOURCE_IMP */
static EIF_TYPE_INDEX ptf1550[] = {1549,0xFFF7,1180,0xFFFF};
static struct eif_par_types par1550 = {1550, ptf1550, (uint16) 2, (uint16) 0, (char) 0};

/* EV_ITEM_PIXMAP_SCALER_I */
static EIF_TYPE_INDEX ptf1551[] = {1518,0xFFFF};
static struct eif_par_types par1551 = {1551, ptf1551, (uint16) 1, (uint16) 0, (char) 0};

/* EV_RADIO_PEER_I */
static EIF_TYPE_INDEX ptf1552[] = {1518,0xFFFF};
static struct eif_par_types par1552 = {1552, ptf1552, (uint16) 1, (uint16) 0, (char) 0};

/* EV_RADIO_PEER_IMP */
static EIF_TYPE_INDEX ptf1553[] = {1552,0xFFFF};
static struct eif_par_types par1553 = {1553, ptf1553, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DOCKABLE_TARGET_I */
static EIF_TYPE_INDEX ptf1554[] = {1518,0xFFF7,1117,0xFFFF};
static struct eif_par_types par1554 = {1554, ptf1554, (uint16) 2, (uint16) 0, (char) 0};

/* EV_DOCKABLE_TARGET_IMP */
static EIF_TYPE_INDEX ptf1555[] = {1554,0xFFFF};
static struct eif_par_types par1555 = {1555, ptf1555, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SELECTABLE_I */
static EIF_TYPE_INDEX ptf1556[] = {1518,0xFFFF};
static struct eif_par_types par1556 = {1556, ptf1556, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DESELECTABLE_I */
static EIF_TYPE_INDEX ptf1557[] = {1556,0xFFFF};
static struct eif_par_types par1557 = {1557, ptf1557, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TOOLTIPABLE_I */
static EIF_TYPE_INDEX ptf1558[] = {1518,0xFFFF};
static struct eif_par_types par1558 = {1558, ptf1558, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TOOLTIPABLE_IMP */
static EIF_TYPE_INDEX ptf1559[] = {1558,0xFFF7,1227,0xFFFF};
static struct eif_par_types par1559 = {1559, ptf1559, (uint16) 2, (uint16) 0, (char) 0};

/* EV_PIXMAPABLE_I */
static EIF_TYPE_INDEX ptf1560[] = {1518,0xFFFF};
static struct eif_par_types par1560 = {1560, ptf1560, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PIXMAPABLE_IMP */
static EIF_TYPE_INDEX ptf1561[] = {1560,0xFFFF};
static struct eif_par_types par1561 = {1561, ptf1561, (uint16) 1, (uint16) 0, (char) 0};

/* EV_FONTABLE_I */
static EIF_TYPE_INDEX ptf1562[] = {1518,0xFFFF};
static struct eif_par_types par1562 = {1562, ptf1562, (uint16) 1, (uint16) 0, (char) 0};

/* EV_FONTABLE_IMP */
static EIF_TYPE_INDEX ptf1563[] = {1562,0xFFFF};
static struct eif_par_types par1563 = {1563, ptf1563, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXTABLE_I */
static EIF_TYPE_INDEX ptf1564[] = {1518,0xFFFF};
static struct eif_par_types par1564 = {1564, ptf1564, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXT_ALIGNABLE_I */
static EIF_TYPE_INDEX ptf1565[] = {1564,0xFFFF};
static struct eif_par_types par1565 = {1565, ptf1565, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXTABLE_IMP */
static EIF_TYPE_INDEX ptf1566[] = {1564,0xFFFF};
static struct eif_par_types par1566 = {1566, ptf1566, (uint16) 1, (uint16) 0, (char) 0};

/* EV_INTERNALLY_PROCESSED_TEXTABLE_IMP */
static EIF_TYPE_INDEX ptf1567[] = {1566,0xFFFF};
static struct eif_par_types par1567 = {1567, ptf1567, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXT_ALIGNABLE_IMP */
static EIF_TYPE_INDEX ptf1568[] = {1567,0xFFFF};
static struct eif_par_types par1568 = {1568, ptf1568, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PICK_AND_DROPABLE_I */
static EIF_TYPE_INDEX ptf1569[] = {1518,0xFFF7,1544,0xFFF7,1178,0xFFF7,1177,0xFFFF};
static struct eif_par_types par1569 = {1569, ptf1569, (uint16) 4, (uint16) 0, (char) 0};

/* EV_WIDGET_I */
static EIF_TYPE_INDEX ptf1570[] = {1569,0xFFF7,1549,0xFFF7,1548,0xFFF7,1537,0xFFF7,1203,0xFFF7,1528,0xFFFF};
static struct eif_par_types par1570 = {1570, ptf1570, (uint16) 6, (uint16) 0, (char) 0};

/* EV_CONTAINER_I */
static EIF_TYPE_INDEX ptf1571[] = {1570,0xFFF7,1560,0xFFF7,1121,0xFFFF};
static struct eif_par_types par1571 = {1571, ptf1571, (uint16) 3, (uint16) 0, (char) 0};

/* EV_WIDGET_LIST_I */
static EIF_TYPE_INDEX ptf1572[] = {1571,0xFFF7,1787,0xFF01,1459,0xFFFF};
static struct eif_par_types par1572 = {1572, ptf1572, (uint16) 2, (uint16) 0, (char) 0};

/* EV_NOTEBOOK_I */
static EIF_TYPE_INDEX ptf1573[] = {1572,0xFFF7,1562,0xFFF7,1054,0xFFF7,1551,0xFFFF};
static struct eif_par_types par1573 = {1573, ptf1573, (uint16) 4, (uint16) 0, (char) 0};

/* EV_BOX_I */
static EIF_TYPE_INDEX ptf1574[] = {1572,0xFFF7,1554,0xFFFF};
static struct eif_par_types par1574 = {1574, ptf1574, (uint16) 2, (uint16) 0, (char) 0};

/* EV_HORIZONTAL_BOX_I */
static EIF_TYPE_INDEX ptf1575[] = {1574,0xFFFF};
static struct eif_par_types par1575 = {1575, ptf1575, (uint16) 1, (uint16) 0, (char) 0};

/* EV_VERTICAL_BOX_I */
static EIF_TYPE_INDEX ptf1576[] = {1574,0xFFFF};
static struct eif_par_types par1576 = {1576, ptf1576, (uint16) 1, (uint16) 0, (char) 0};

/* EV_CELL_I */
static EIF_TYPE_INDEX ptf1577[] = {1571,0xFFF7,1554,0xFFFF};
static struct eif_par_types par1577 = {1577, ptf1577, (uint16) 2, (uint16) 0, (char) 0};

/* EV_FRAME_I */
static EIF_TYPE_INDEX ptf1578[] = {1577,0xFFF7,1565,0xFFF7,1562,0xFFF7,1174,0xFFFF};
static struct eif_par_types par1578 = {1578, ptf1578, (uint16) 4, (uint16) 0, (char) 0};

/* EV_VIEWPORT_I */
static EIF_TYPE_INDEX ptf1579[] = {1577,0xFFFF};
static struct eif_par_types par1579 = {1579, ptf1579, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SCROLLABLE_AREA_I */
static EIF_TYPE_INDEX ptf1580[] = {1579,0xFFFF};
static struct eif_par_types par1580 = {1580, ptf1580, (uint16) 1, (uint16) 0, (char) 0};

/* EV_WINDOW_I */
static EIF_TYPE_INDEX ptf1581[] = {1577,0xFFF7,1547,0xFFF7,1142,0xFFFF};
static struct eif_par_types par1581 = {1581, ptf1581, (uint16) 3, (uint16) 0, (char) 0};

/* EV_POPUP_WINDOW_I */
static EIF_TYPE_INDEX ptf1582[] = {1581,0xFFFF};
static struct eif_par_types par1582 = {1582, ptf1582, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TITLED_WINDOW_I */
static EIF_TYPE_INDEX ptf1583[] = {1581,0xFFF7,1119,0xFFFF};
static struct eif_par_types par1583 = {1583, ptf1583, (uint16) 2, (uint16) 0, (char) 0};

/* EV_DIALOG_I */
static EIF_TYPE_INDEX ptf1584[] = {1583,0xFFF7,1205,0xFFFF};
static struct eif_par_types par1584 = {1584, ptf1584, (uint16) 2, (uint16) 0, (char) 0};

/* EV_PRIMITIVE_I */
static EIF_TYPE_INDEX ptf1585[] = {1570,0xFFF7,1558,0xFFF7,1519,0xFFFF};
static struct eif_par_types par1585 = {1585, ptf1585, (uint16) 3, (uint16) 0, (char) 0};

/* EV_MULTI_COLUMN_LIST_I */
static EIF_TYPE_INDEX ptf1586[] = {1585,0xFFF7,1786,0xFF01,1493,0xFFF7,1551,0xFFF7,1086,0xFFFF};
static struct eif_par_types par1586 = {1586, ptf1586, (uint16) 4, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_I */
static EIF_TYPE_INDEX ptf1587[] = {1585,0xFFF7,1554,0xFFF7,1786,0xFF01,1494,0xFFFF};
static struct eif_par_types par1587 = {1587, ptf1587, (uint16) 3, (uint16) 0, (char) 0};

/* EV_LABEL_I */
static EIF_TYPE_INDEX ptf1588[] = {1585,0xFFF7,1565,0xFFF7,1562,0xFFFF};
static struct eif_par_types par1588 = {1588, ptf1588, (uint16) 3, (uint16) 0, (char) 0};

/* EV_TREE_I */
static EIF_TYPE_INDEX ptf1589[] = {1585,0xFFF7,1538,0xFFF7,1551,0xFFF7,1149,0xFFFF};
static struct eif_par_types par1589 = {1589, ptf1589, (uint16) 4, (uint16) 0, (char) 0};

/* EV_CHECKABLE_TREE_I */
static EIF_TYPE_INDEX ptf1590[] = {1589,0xFFF7,1149,0xFFF7,1085,0xFFFF};
static struct eif_par_types par1590 = {1590, ptf1590, (uint16) 3, (uint16) 0, (char) 0};

/* EV_LIST_ITEM_LIST_I */
static EIF_TYPE_INDEX ptf1591[] = {1585,0xFFF7,1786,0xFF01,1492,0xFFF7,1551,0xFFF7,1061,0xFFFF};
static struct eif_par_types par1591 = {1591, ptf1591, (uint16) 4, (uint16) 0, (char) 0};

/* EV_LIST_I */
static EIF_TYPE_INDEX ptf1592[] = {1591,0xFFFF};
static struct eif_par_types par1592 = {1592, ptf1592, (uint16) 1, (uint16) 0, (char) 0};

/* EV_LIST_ITEM_LIST_IMP */
static EIF_TYPE_INDEX ptf1593[] = {1591,0xFFF7,1791,0xFF01,1492,0xFF01,1729,0xFFFF};
static struct eif_par_types par1593 = {1593, ptf1593, (uint16) 2, (uint16) 0, (char) 0};

/* EV_GAUGE_I */
static EIF_TYPE_INDEX ptf1594[] = {1585,0xFFF7,1068,0xFFFF};
static struct eif_par_types par1594 = {1594, ptf1594, (uint16) 2, (uint16) 0, (char) 0};

/* EV_RANGE_I */
static EIF_TYPE_INDEX ptf1595[] = {1594,0xFFFF};
static struct eif_par_types par1595 = {1595, ptf1595, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TEXT_COMPONENT_I */
static EIF_TYPE_INDEX ptf1596[] = {1585,0xFFF7,1564,0xFFF7,1100,0xFFFF};
static struct eif_par_types par1596 = {1596, ptf1596, (uint16) 3, (uint16) 0, (char) 0};

/* EV_TEXT_I */
static EIF_TYPE_INDEX ptf1597[] = {1596,0xFFF7,1562,0xFFFF};
static struct eif_par_types par1597 = {1597, ptf1597, (uint16) 2, (uint16) 0, (char) 0};

/* EV_RICH_TEXT_I */
static EIF_TYPE_INDEX ptf1598[] = {1597,0xFFF7,1079,0xFFFF};
static struct eif_par_types par1598 = {1598, ptf1598, (uint16) 2, (uint16) 0, (char) 0};

/* EV_TEXT_FIELD_I */
static EIF_TYPE_INDEX ptf1599[] = {1596,0xFFF7,1562,0xFFF7,1565,0xFFF7,1062,0xFFFF};
static struct eif_par_types par1599 = {1599, ptf1599, (uint16) 4, (uint16) 0, (char) 0};

/* EV_SPIN_BUTTON_I */
static EIF_TYPE_INDEX ptf1600[] = {1594,0xFFF7,1599,0xFFFF};
static struct eif_par_types par1600 = {1600, ptf1600, (uint16) 2, (uint16) 0, (char) 0};

/* EV_COMBO_BOX_I */
static EIF_TYPE_INDEX ptf1601[] = {1599,0xFFF7,1591,0xFFF7,1094,0xFFFF};
static struct eif_par_types par1601 = {1601, ptf1601, (uint16) 3, (uint16) 0, (char) 0};

/* EV_BUTTON_I */
static EIF_TYPE_INDEX ptf1602[] = {1585,0xFFF7,1565,0xFFF7,1560,0xFFF7,1562,0xFFF7,1103,0xFFFF};
static struct eif_par_types par1602 = {1602, ptf1602, (uint16) 5, (uint16) 0, (char) 0};

/* EV_RADIO_BUTTON_I */
static EIF_TYPE_INDEX ptf1603[] = {1602,0xFFF7,1552,0xFFF7,1556,0xFFFF};
static struct eif_par_types par1603 = {1603, ptf1603, (uint16) 3, (uint16) 0, (char) 0};

/* EV_TOGGLE_BUTTON_I */
static EIF_TYPE_INDEX ptf1604[] = {1602,0xFFF7,1557,0xFFFF};
static struct eif_par_types par1604 = {1604, ptf1604, (uint16) 2, (uint16) 0, (char) 0};

/* EV_CHECK_BUTTON_I */
static EIF_TYPE_INDEX ptf1605[] = {1604,0xFFFF};
static struct eif_par_types par1605 = {1605, ptf1605, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ITEM_I */
static EIF_TYPE_INDEX ptf1606[] = {1569,0xFFF7,1560,0xFFF7,1116,0xFFFF};
static struct eif_par_types par1606 = {1606, ptf1606, (uint16) 3, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_SEPARATOR_I */
static EIF_TYPE_INDEX ptf1607[] = {1606,0xFFFF};
static struct eif_par_types par1607 = {1607, ptf1607, (uint16) 1, (uint16) 0, (char) 0};

/* EV_LIST_ITEM_I */
static EIF_TYPE_INDEX ptf1608[] = {1606,0xFFF7,1564,0xFFF7,1557,0xFFF7,1558,0xFFF7,1080,0xFFFF};
static struct eif_par_types par1608 = {1608, ptf1608, (uint16) 5, (uint16) 0, (char) 0};

/* EV_TREE_NODE_I */
static EIF_TYPE_INDEX ptf1609[] = {1606,0xFFF7,1564,0xFFF7,1538,0xFFF7,1557,0xFFF7,1558,0xFFF7,1067,0xFFFF};
static struct eif_par_types par1609 = {1609, ptf1609, (uint16) 6, (uint16) 0, (char) 0};

/* EV_TREE_ITEM_I */
static EIF_TYPE_INDEX ptf1610[] = {1609,0xFFF7,1538,0xFFFF};
static struct eif_par_types par1610 = {1610, ptf1610, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MENU_ITEM_I */
static EIF_TYPE_INDEX ptf1611[] = {1606,0xFFF7,1564,0xFFF7,1548,0xFFF7,1105,0xFFFF};
static struct eif_par_types par1611 = {1611, ptf1611, (uint16) 4, (uint16) 0, (char) 0};

/* EV_MENU_SEPARATOR_I */
static EIF_TYPE_INDEX ptf1612[] = {1611,0xFFFF};
static struct eif_par_types par1612 = {1612, ptf1612, (uint16) 1, (uint16) 0, (char) 0};

/* EV_RADIO_MENU_ITEM_I */
static EIF_TYPE_INDEX ptf1613[] = {1611,0xFFF7,1552,0xFFF7,1556,0xFFFF};
static struct eif_par_types par1613 = {1613, ptf1613, (uint16) 3, (uint16) 0, (char) 0};

/* EV_CHECK_MENU_ITEM_I */
static EIF_TYPE_INDEX ptf1614[] = {1611,0xFFF7,1557,0xFFFF};
static struct eif_par_types par1614 = {1614, ptf1614, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MENU_I */
static EIF_TYPE_INDEX ptf1615[] = {1611,0xFFF7,1539,0xFFFF};
static struct eif_par_types par1615 = {1615, ptf1615, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MULTI_COLUMN_LIST_ROW_I */
static EIF_TYPE_INDEX ptf1616[] = {1606,0xFFF7,1569,0xFFF7,1560,0xFFF7,1557,0xFFF7,1114,0xFFFF};
static struct eif_par_types par1616 = {1616, ptf1616, (uint16) 5, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_BUTTON_I */
static EIF_TYPE_INDEX ptf1617[] = {1606,0xFFF7,1569,0xFFF7,1564,0xFFF7,1558,0xFFF7,1548,0xFFF7,1549,0xFFF7,1153,0xFFFF};
static struct eif_par_types par1617 = {1617, ptf1617, (uint16) 7, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_DROP_DOWN_BUTTON_I */
static EIF_TYPE_INDEX ptf1618[] = {1617,0xFFFF};
static struct eif_par_types par1618 = {1618, ptf1618, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_TOGGLE_BUTTON_I */
static EIF_TYPE_INDEX ptf1619[] = {1617,0xFFF7,1557,0xFFFF};
static struct eif_par_types par1619 = {1619, ptf1619, (uint16) 2, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_RADIO_BUTTON_I */
static EIF_TYPE_INDEX ptf1620[] = {1617,0xFFF7,1552,0xFFF7,1556,0xFFFF};
static struct eif_par_types par1620 = {1620, ptf1620, (uint16) 3, (uint16) 0, (char) 0};

/* EV_DRAWABLE_I */
static EIF_TYPE_INDEX ptf1621[] = {1518,0xFFF7,126,0xFFF7,1197,0xFFF7,1537,0xFFF7,1562,0xFFFF};
static struct eif_par_types par1621 = {1621, ptf1621, (uint16) 5, (uint16) 0, (char) 0};

/* EV_BITMAP_I */
static EIF_TYPE_INDEX ptf1622[] = {1621,0xFFFF};
static struct eif_par_types par1622 = {1622, ptf1622, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SCREEN_I */
static EIF_TYPE_INDEX ptf1623[] = {1621,0xFFFF};
static struct eif_par_types par1623 = {1623, ptf1623, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PIXMAP_I */
static EIF_TYPE_INDEX ptf1624[] = {1621,0xFFF7,1585,0xFFF7,1158,0xFFFF};
static struct eif_par_types par1624 = {1624, ptf1624, (uint16) 3, (uint16) 0, (char) 0};

/* EV_NOTEBOOK_TAB_I */
static EIF_TYPE_INDEX ptf1625[] = {1518,0xFFF7,1564,0xFFF7,1560,0xFFF7,1556,0xFFFF};
static struct eif_par_types par1625 = {1625, ptf1625, (uint16) 4, (uint16) 0, (char) 0};

/* EV_NOTEBOOK_TAB_IMP */
static EIF_TYPE_INDEX ptf1626[] = {1625,0xFFF7,1566,0xFFF7,1561,0xFFFF};
static struct eif_par_types par1626 = {1626, ptf1626, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_MESSAGE_INFORMATION_CREATOR */
static EIF_TYPE_INDEX ptf1627[] = {0,0xFFF7,1211,0xFFFF};
static struct eif_par_types par1627 = {1627, ptf1627, (uint16) 2, (uint16) 0, (char) 0};

/* EV_PARAGRAPH_FORMAT_RANGE_INFORMATION */
static EIF_TYPE_INDEX ptf1628[] = {0,0xFFF7,1167,0xFFFF};
static struct eif_par_types par1628 = {1628, ptf1628, (uint16) 2, (uint16) 0, (char) 0};

/* EV_CHARACTER_FORMAT_RANGE_INFORMATION */
static EIF_TYPE_INDEX ptf1629[] = {0,0xFFF7,1112,0xFFFF};
static struct eif_par_types par1629 = {1629, ptf1629, (uint16) 2, (uint16) 0, (char) 0};

/* EV_KEY */
static EIF_TYPE_INDEX ptf1630[] = {1187,0xFFF7,0,0xFFFF};
static struct eif_par_types par1630 = {1630, ptf1630, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_IDENTIFIED */
static EIF_TYPE_INDEX ptf1631[] = {0,0xFFF7,41,0xFFFF};
static struct eif_par_types par1631 = {1631, ptf1631, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_INPUT_EVENT */
static EIF_TYPE_INDEX ptf1632[] = {0,0xFFF7,1138,0xFFFF};
static struct eif_par_types par1632 = {1632, ptf1632, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_COLOR_REF */
static EIF_TYPE_INDEX ptf1633[] = {0,0xFFF7,1259,0xFFFF};
static struct eif_par_types par1633 = {1633, ptf1633, (uint16) 2, (uint16) 0, (char) 0};

/* EV_COLOR_IMP */
static EIF_TYPE_INDEX ptf1634[] = {1524,0xFFF7,1633,0xFFFF};
static struct eif_par_types par1634 = {1634, ptf1634, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_SYSTEM_COLORS */
static EIF_TYPE_INDEX ptf1635[] = {0,0xFFF7,1223,0xFFFF};
static struct eif_par_types par1635 = {1635, ptf1635, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_SYSTEM_METRICS */
static EIF_TYPE_INDEX ptf1636[] = {0,0xFFF7,1110,0xFFFF};
static struct eif_par_types par1636 = {1636, ptf1636, (uint16) 2, (uint16) 0, (char) 0};

/* EV_STOCK_PIXMAPS_IMP */
static EIF_TYPE_INDEX ptf1637[] = {1225,0xFFF7,1636,0xFFFF};
static struct eif_par_types par1637 = {1637, ptf1637, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_CURSOR */
static EIF_TYPE_INDEX ptf1638[] = {1284,0xFFF7,1636,0xFFFF};
static struct eif_par_types par1638 = {1638, ptf1638, (uint16) 2, (uint16) 0, (char) 0};

/* EV_SHARED_IMAGE_LIST_IMP */
static EIF_TYPE_INDEX ptf1639[] = {0,0xFFF7,1233,0xFFFF};
static struct eif_par_types par1639 = {1639, ptf1639, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_MESSAGE_INFORMATION */
static EIF_TYPE_INDEX ptf1640[] = {0,0xFFF7,1213,0xFFFF};
static struct eif_par_types par1640 = {1640, ptf1640, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_MOUSE_MESSAGE */
static EIF_TYPE_INDEX ptf1641[] = {1640,0xFFF7,1048,0xFFF7,1374,0xFFFF};
static struct eif_par_types par1641 = {1641, ptf1641, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_KEY_MESSAGE */
static EIF_TYPE_INDEX ptf1642[] = {1640,0xFFFF};
static struct eif_par_types par1642 = {1642, ptf1642, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_NOTIFY_MESSAGE */
static EIF_TYPE_INDEX ptf1643[] = {1640,0xFFFF};
static struct eif_par_types par1643 = {1643, ptf1643, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_WINDOW_POSITION_MESSAGE */
static EIF_TYPE_INDEX ptf1644[] = {1640,0xFFFF};
static struct eif_par_types par1644 = {1644, ptf1644, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MENU_SELECT_MESSAGE */
static EIF_TYPE_INDEX ptf1645[] = {1640,0xFFF7,1181,0xFFF7,1374,0xFFFF};
static struct eif_par_types par1645 = {1645, ptf1645, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_SHOW_WINDOW_MESSAGE */
static EIF_TYPE_INDEX ptf1646[] = {1640,0xFFF7,1182,0xFFFF};
static struct eif_par_types par1646 = {1646, ptf1646, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_TIMER_MESSAGE */
static EIF_TYPE_INDEX ptf1647[] = {1640,0xFFFF};
static struct eif_par_types par1647 = {1647, ptf1647, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SYSTEM_COMMAND_MESSAGE */
static EIF_TYPE_INDEX ptf1648[] = {1640,0xFFF7,1049,0xFFFF};
static struct eif_par_types par1648 = {1648, ptf1648, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_MOVE_MESSAGE */
static EIF_TYPE_INDEX ptf1649[] = {1640,0xFFFF};
static struct eif_par_types par1649 = {1649, ptf1649, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_SIZE_MESSAGE */
static EIF_TYPE_INDEX ptf1650[] = {1640,0xFFF7,1050,0xFFFF};
static struct eif_par_types par1650 = {1650, ptf1650, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_SCROLLER */
static EIF_TYPE_INDEX ptf1651[] = {0,0xFFF7,1221,0xFFF7,1222,0xFFFF};
static struct eif_par_types par1651 = {1651, ptf1651, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_STANDARD_PENS */
static EIF_TYPE_INDEX ptf1652[] = {0,0xFFF7,1146,0xFFF7,1229,0xFFFF};
static struct eif_par_types par1652 = {1652, ptf1652, (uint16) 3, (uint16) 0, (char) 0};

/* EV_RICH_TEXT_BUFFERING_STRUCTURES_I */
static EIF_TYPE_INDEX ptf1653[] = {0,0xFFF7,1072,0xFFF7,1224,0xFFFF};
static struct eif_par_types par1653 = {1653, ptf1653, (uint16) 3, (uint16) 0, (char) 0};

/* EV_PIXMAP_IMP_LOADER */
static EIF_TYPE_INDEX ptf1654[] = {0,0xFFF7,70,0xFFF7,155,0xFFFF};
static struct eif_par_types par1654 = {1654, ptf1654, (uint16) 3, (uint16) 0, (char) 0};

/* EV_PIXMAP_IMP */
static EIF_TYPE_INDEX ptf1655[] = {1624,0xFFF7,1204,0xFFF7,1654,0xFFFF};
static struct eif_par_types par1655 = {1655, ptf1655, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_SYSTEM_PARAMETERS_INFO */
static EIF_TYPE_INDEX ptf1656[] = {0,0xFFF7,1101,0xFFF7,1219,0xFFFF};
static struct eif_par_types par1656 = {1656, ptf1656, (uint16) 3, (uint16) 0, (char) 0};

/* EV_ENVIRONMENT_IMP */
static EIF_TYPE_INDEX ptf1657[] = {1531,0xFFF7,1656,0xFFFF};
static struct eif_par_types par1657 = {1657, ptf1657, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_UNIT_CONVERSION */
static EIF_TYPE_INDEX ptf1658[] = {0,0xFFF7,1209,0xFFF7,1216,0xFFFF};
static struct eif_par_types par1658 = {1658, ptf1658, (uint16) 3, (uint16) 0, (char) 0};

/* EV_PARAGRAPH_FORMAT_IMP */
static EIF_TYPE_INDEX ptf1659[] = {1520,0xFFF7,1381,0xFFF7,1658,0xFFFF};
static struct eif_par_types par1659 = {1659, ptf1659, (uint16) 3, (uint16) 0, (char) 0};

/* EV_FONT_IMP */
static EIF_TYPE_INDEX ptf1660[] = {1527,0xFFF7,1224,0xFFF7,1220,0xFFF7,1189,0xFFF7,1188,0xFFF7,1658,0xFFFF};
static struct eif_par_types par1660 = {1660, ptf1660, (uint16) 6, (uint16) 0, (char) 0};

/* WEL_FONT */
static EIF_TYPE_INDEX ptf1661[] = {1278,0xFFF7,1658,0xFFF7,1216,0xFFF7,1374,0xFFF7,1107,0xFFF7,1206,0xFFFF};
static struct eif_par_types par1661 = {1661, ptf1661, (uint16) 6, (uint16) 0, (char) 0};

/* WEL_CHARACTER_FORMAT */
static EIF_TYPE_INDEX ptf1662[] = {1298,0xFFF7,1166,0xFFF7,1163,0xFFF7,1374,0xFFF7,1658,0xFFFF};
static struct eif_par_types par1662 = {1662, ptf1662, (uint16) 5, (uint16) 0, (char) 0};

/* WEL_CHARACTER_FORMAT2 */
static EIF_TYPE_INDEX ptf1663[] = {1662,0xFFFF};
static struct eif_par_types par1663 = {1663, ptf1663, (uint16) 1, (uint16) 0, (char) 0};

/* EV_CHARACTER_FORMAT_IMP */
static EIF_TYPE_INDEX ptf1664[] = {1523,0xFFF7,1663,0xFFF7,1374,0xFFF7,1224,0xFFF7,1189,0xFFF7,1188,0xFFF7,1220,0xFFFF};
static struct eif_par_types par1664 = {1664, ptf1664, (uint16) 7, (uint16) 0, (char) 0};

/* EV_SYSTEM_PEN_IMP */
static EIF_TYPE_INDEX ptf1665[] = {0,0xFFF7,1229,0xFFF7,1259,0xFFF7,1652,0xFFFF};
static struct eif_par_types par1665 = {1665, ptf1665, (uint16) 4, (uint16) 0, (char) 0};

/* EV_CHECKABLE_MENU_ITEM_IMP */
static EIF_TYPE_INDEX ptf1666[] = {0,0xFFF7,1223,0xFFF7,1220,0xFFF7,1635,0xFFF7,1146,0xFFFF};
static struct eif_par_types par1666 = {1666, ptf1666, (uint16) 5, (uint16) 0, (char) 0};

/* WEL_WINDOWS_ROUTINES */
static EIF_TYPE_INDEX ptf1667[] = {0,0xFFF7,1631,0xFFF7,1200,0xFFF7,1169,0xFFF7,1213,0xFFFF};
static struct eif_par_types par1667 = {1667, ptf1667, (uint16) 5, (uint16) 0, (char) 0};

/* WEL_COMMAND_MESSAGE */
static EIF_TYPE_INDEX ptf1668[] = {1640,0xFFF7,1667,0xFFFF};
static struct eif_par_types par1668 = {1668, ptf1668, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_TAB_CONTROL_ITEM */
static EIF_TYPE_INDEX ptf1669[] = {1298,0xFFF7,1667,0xFFF7,1147,0xFFFF};
static struct eif_par_types par1669 = {1669, ptf1669, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_WINDOW_ENUMERATOR */
static EIF_TYPE_INDEX ptf1670[] = {0,0xFFF7,1667,0xFFFF};
static struct eif_par_types par1670 = {1670, ptf1670, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_TOOL_INFO */
static EIF_TYPE_INDEX ptf1671[] = {1298,0xFFF7,1213,0xFFF7,1667,0xFFFF};
static struct eif_par_types par1671 = {1671, ptf1671, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_DRAW_ITEM_STRUCT */
static EIF_TYPE_INDEX ptf1672[] = {1298,0xFFF7,1667,0xFFFF};
static struct eif_par_types par1672 = {1672, ptf1672, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_NMHDR */
static EIF_TYPE_INDEX ptf1673[] = {1298,0xFFF7,1667,0xFFFF};
static struct eif_par_types par1673 = {1673, ptf1673, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_POINT */
static EIF_TYPE_INDEX ptf1674[] = {1298,0xFFF7,1667,0xFFFF};
static struct eif_par_types par1674 = {1674, ptf1674, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_WINDOW_POS */
static EIF_TYPE_INDEX ptf1675[] = {1298,0xFFF7,1667,0xFFF7,1202,0xFFFF};
static struct eif_par_types par1675 = {1675, ptf1675, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_ABSTRACT_DISPATCHER */
static EIF_TYPE_INDEX ptf1676[] = {1667,0xFFF7,1155,0xFFF7,1212,0xFFF7,1211,0xFFF7,1150,0xFFF7,69,0xFFF7,1184,0xFFFF};
static struct eif_par_types par1676 = {1676, ptf1676, (uint16) 7, (uint16) 0, (char) 0};

/* WEL_DISPATCHER */
static EIF_TYPE_INDEX ptf1677[] = {1676,0xFFF7,166,0xFFFF};
static struct eif_par_types par1677 = {1677, ptf1677, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_APPLICATION */
static EIF_TYPE_INDEX ptf1678[] = {1109,0xFFF7,1667,0xFFF7,1169,0xFFFF};
static struct eif_par_types par1678 = {1678, ptf1678, (uint16) 3, (uint16) 0, (char) 0};

/* EV_APPLICATION_IMP */
static EIF_TYPE_INDEX ptf1679[] = {1536,0xFFF7,1678,0xFFF7,1223,0xFFF7,1154,0xFFF7,1196,0xFFF7,1213,0xFFF7,1214,0xFFF7,1219,0xFFF7,1208,0xFFFF};
static struct eif_par_types par1679 = {1679, ptf1679, (uint16) 9, (uint16) 0, (char) 0};

/* EV_MENU_CONTAINER_IMP */
static EIF_TYPE_INDEX ptf1680[] = {0,0xFFF7,1667,0xFFFF};
static struct eif_par_types par1680 = {1680, ptf1680, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_WINDOW */
static EIF_TYPE_INDEX ptf1681[] = {1266,0xFFF7,49,0xFFF7,1667,0xFFF7,1212,0xFFF7,1636,0xFFF7,1213,0xFFF7,1374,0xFFF7,1221,0xFFF7,1211,0xFFF7,1183,0xFFF7,1134,0xFFF7,1141,0xFFF7,1182,0xFFF7,1200,0xFFF7,1199,0xFFF7,1133,0xFFF7,
1202,0xFFF7,1184,0xFFF7,1132,0xFFFF};
static struct eif_par_types par1681 = {1681, ptf1681, (uint16) 19, (uint16) 0, (char) 0};

/* WEL_COMPOSITE_WINDOW */
static EIF_TYPE_INDEX ptf1682[] = {1681,0xFFF7,1108,0xFFF7,1157,0xFFF7,1131,0xFFF7,1220,0xFFF7,1635,0xFFFF};
static struct eif_par_types par1682 = {1682, ptf1682, (uint16) 6, (uint16) 0, (char) 0};

/* WEL_DIALOG */
static EIF_TYPE_INDEX ptf1683[] = {1682,0xFFF7,1155,0xFFF7,1199,0xFFFF};
static struct eif_par_types par1683 = {1683, ptf1683, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_MODELESS_DIALOG */
static EIF_TYPE_INDEX ptf1684[] = {1683,0xFFFF};
static struct eif_par_types par1684 = {1684, ptf1684, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_MAIN_DIALOG */
static EIF_TYPE_INDEX ptf1685[] = {1684,0xFFFF};
static struct eif_par_types par1685 = {1685, ptf1685, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_FRAME_WINDOW */
static EIF_TYPE_INDEX ptf1686[] = {1682,0xFFF7,1127,0xFFF7,1126,0xFFF7,1125,0xFFF7,1259,0xFFFF};
static struct eif_par_types par1686 = {1686, ptf1686, (uint16) 5, (uint16) 0, (char) 0};

/* EV_THEME_WINDOW */
static EIF_TYPE_INDEX ptf1687[] = {1686,0xFFF7,1225,0xFFFF};
static struct eif_par_types par1687 = {1687, ptf1687, (uint16) 2, (uint16) 0, (char) 0};

/* EV_POPUP_MENU_HANDLER */
static EIF_TYPE_INDEX ptf1688[] = {1686,0xFFF7,1680,0xFFFF};
static struct eif_par_types par1688 = {1688, ptf1688, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_SILLY_WINDOW */
static EIF_TYPE_INDEX ptf1689[] = {1686,0xFFFF};
static struct eif_par_types par1689 = {1689, ptf1689, (uint16) 1, (uint16) 0, (char) 0};

/* EV_INTERNAL_SILLY_WINDOW_IMP */
static EIF_TYPE_INDEX ptf1690[] = {1686,0xFFF7,1221,0xFFFF};
static struct eif_par_types par1690 = {1690, ptf1690, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_CONTROL_WINDOW */
static EIF_TYPE_INDEX ptf1691[] = {1686,0xFFFF};
static struct eif_par_types par1691 = {1691, ptf1691, (uint16) 1, (uint16) 0, (char) 0};

/* EV_INTERNAL_TOOL_BAR_IMP */
static EIF_TYPE_INDEX ptf1692[] = {1691,0xFFF7,1063,0xFFF7,1145,0xFFFF};
static struct eif_par_types par1692 = {1692, ptf1692, (uint16) 3, (uint16) 0, (char) 0};

/* EV_WEL_CONTROL_WINDOW */
static EIF_TYPE_INDEX ptf1693[] = {1691,0xFFFF};
static struct eif_par_types par1693 = {1693, ptf1693, (uint16) 1, (uint16) 0, (char) 0};

/* EV_WEL_CONTROL_CONTAINER_IMP */
static EIF_TYPE_INDEX ptf1694[] = {1691,0xFFFF};
static struct eif_par_types par1694 = {1694, ptf1694, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_CONTROL */
static EIF_TYPE_INDEX ptf1695[] = {1681,0xFFF7,1183,0xFFFF};
static struct eif_par_types par1695 = {1695, ptf1695, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_TOOLTIP */
static EIF_TYPE_INDEX ptf1696[] = {1695,0xFFF7,1196,0xFFFF};
static struct eif_par_types par1696 = {1696, ptf1696, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_TOOL_BAR */
static EIF_TYPE_INDEX ptf1697[] = {1695,0xFFF7,1145,0xFFF7,1152,0xFFF7,1046,0xFFF7,1135,0xFFFF};
static struct eif_par_types par1697 = {1697, ptf1697, (uint16) 5, (uint16) 0, (char) 0};

/* WEL_IMAGELIST_TOOL_BAR */
static EIF_TYPE_INDEX ptf1698[] = {1697,0xFFF7,1219,0xFFFF};
static struct eif_par_types par1698 = {1698, ptf1698, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_TAB_CONTROL */
static EIF_TYPE_INDEX ptf1699[] = {1695,0xFFF7,1682,0xFFF7,1053,0xFFF7,1052,0xFFF7,1051,0xFFF7,1195,0xFFFF};
static struct eif_par_types par1699 = {1699, ptf1699, (uint16) 6, (uint16) 0, (char) 0};

/* WEL_TREE_VIEW */
static EIF_TYPE_INDEX ptf1700[] = {1695,0xFFF7,1071,0xFFF7,1160,0xFFF7,1137,0xFFF7,1070,0xFFF7,1162,0xFFF7,1148,0xFFF7,1159,0xFFF7,1069,0xFFF7,1233,0xFFF7,1207,0xFFF7,1259,0xFFFF};
static struct eif_par_types par1700 = {1700, ptf1700, (uint16) 12, (uint16) 0, (char) 0};

/* WEL_BUTTON */
static EIF_TYPE_INDEX ptf1701[] = {1695,0xFFF7,1260,0xFFF7,1156,0xFFFF};
static struct eif_par_types par1701 = {1701, ptf1701, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_CHECK_BOX */
static EIF_TYPE_INDEX ptf1702[] = {1701,0xFFF7,1193,0xFFF7,1194,0xFFFF};
static struct eif_par_types par1702 = {1702, ptf1702, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_RADIO_BUTTON */
static EIF_TYPE_INDEX ptf1703[] = {1702,0xFFFF};
static struct eif_par_types par1703 = {1703, ptf1703, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_BITMAP_BUTTON */
static EIF_TYPE_INDEX ptf1704[] = {1701,0xFFF7,1193,0xFFF7,1194,0xFFF7,1374,0xFFF7,1190,0xFFFF};
static struct eif_par_types par1704 = {1704, ptf1704, (uint16) 5, (uint16) 0, (char) 0};

/* WEL_STATIC */
static EIF_TYPE_INDEX ptf1705[] = {1695,0xFFF7,1060,0xFFF7,1260,0xFFFF};
static struct eif_par_types par1705 = {1705, ptf1705, (uint16) 3, (uint16) 0, (char) 0};

/* EV_WEL_STATIC_OWNERDRAW */
static EIF_TYPE_INDEX ptf1706[] = {1705,0xFFFF};
static struct eif_par_types par1706 = {1706, ptf1706, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_EDIT */
static EIF_TYPE_INDEX ptf1707[] = {1705,0xFFF7,1093,0xFFF7,1210,0xFFF7,1150,0xFFFF};
static struct eif_par_types par1707 = {1707, ptf1707, (uint16) 4, (uint16) 0, (char) 0};

/* WEL_MULTIPLE_LINE_EDIT */
static EIF_TYPE_INDEX ptf1708[] = {1707,0xFFFF};
static struct eif_par_types par1708 = {1708, ptf1708, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_RICH_EDIT */
static EIF_TYPE_INDEX ptf1709[] = {1708,0xFFF7,1136,0xFFF7,1078,0xFFF7,1077,0xFFF7,1076,0xFFF7,1075,0xFFF7,1074,0xFFF7,1209,0xFFF7,1073,0xFFFF};
static struct eif_par_types par1709 = {1709, ptf1709, (uint16) 9, (uint16) 0, (char) 0};

/* WEL_SINGLE_LINE_EDIT */
static EIF_TYPE_INDEX ptf1710[] = {1707,0xFFFF};
static struct eif_par_types par1710 = {1710, ptf1710, (uint16) 1, (uint16) 0, (char) 0};

/* EV_INTERNAL_COMBO_FIELD_IMP */
static EIF_TYPE_INDEX ptf1711[] = {1710,0xFFF7,1227,0xFFFF};
static struct eif_par_types par1711 = {1711, ptf1711, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_COMBO_BOX */
static EIF_TYPE_INDEX ptf1712[] = {1695,0xFFF7,1170,0xFFFF};
static struct eif_par_types par1712 = {1712, ptf1712, (uint16) 2, (uint16) 0, (char) 0};

/* EV_INTERNAL_COMBO_BOX_IMP */
static EIF_TYPE_INDEX ptf1713[] = {1712,0xFFF7,1227,0xFFF7,1157,0xFFF7,1201,0xFFF7,1122,0xFFFF};
static struct eif_par_types par1713 = {1713, ptf1713, (uint16) 5, (uint16) 0, (char) 0};

/* WEL_COMBO_BOX_EX */
static EIF_TYPE_INDEX ptf1714[] = {1712,0xFFFF};
static struct eif_par_types par1714 = {1714, ptf1714, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_DROP_DOWN_COMBO_BOX_EX */
static EIF_TYPE_INDEX ptf1715[] = {1714,0xFFF7,1210,0xFFFF};
static struct eif_par_types par1715 = {1715, ptf1715, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_BAR */
static EIF_TYPE_INDEX ptf1716[] = {1695,0xFFFF};
static struct eif_par_types par1716 = {1716, ptf1716, (uint16) 1, (uint16) 0, (char) 0};

/* WEL_UP_DOWN_CONTROL */
static EIF_TYPE_INDEX ptf1717[] = {1716,0xFFF7,1045,0xFFF7,1144,0xFFFF};
static struct eif_par_types par1717 = {1717, ptf1717, (uint16) 3, (uint16) 0, (char) 0};

/* EV_INTERNAL_UP_DOWN_CONTROL */
static EIF_TYPE_INDEX ptf1718[] = {1717,0xFFF7,1227,0xFFFF};
static struct eif_par_types par1718 = {1718, ptf1718, (uint16) 2, (uint16) 0, (char) 0};

/* WEL_TRACK_BAR */
static EIF_TYPE_INDEX ptf1719[] = {1716,0xFFF7,1059,0xFFF7,1058,0xFFFF};
static struct eif_par_types par1719 = {1719, ptf1719, (uint16) 3, (uint16) 0, (char) 0};

/* WEL_LIST_VIEW */
static EIF_TYPE_INDEX ptf1720[] = {1695,0xFFF7,1219,0xFFF7,1186,0xFFF7,1233,0xFFFF};
static struct eif_par_types par1720 = {1720, ptf1720, (uint16) 4, (uint16) 0, (char) 0};

/* EV_DRAWABLE_IMP */
static EIF_TYPE_INDEX ptf1721[] = {1621,0xFFF7,1563,0xFFF7,1197,0xFFF7,70,0xFFF7,1201,0xFFF7,1217,0xFFF7,1098,0xFFF7,1151,0xFFF7,1667,0xFFF7,1259,0xFFF7,1229,0xFFF7,1097,0xFFF7,1120,0xFFF7,1096,0xFFF7,1216,0xFFF7,1206,
0xFFFF};
static struct eif_par_types par1721 = {1721, ptf1721, (uint16) 16, (uint16) 0, (char) 0};

/* EV_BITMAP_IMP */
static EIF_TYPE_INDEX ptf1722[] = {1622,0xFFF7,1721,0xFFFF};
static struct eif_par_types par1722 = {1722, ptf1722, (uint16) 2, (uint16) 0, (char) 0};

/* EV_SCREEN_IMP */
static EIF_TYPE_INDEX ptf1723[] = {1623,0xFFF7,1721,0xFFF7,1632,0xFFF7,1658,0xFFFF};
static struct eif_par_types par1723 = {1723, ptf1723, (uint16) 4, (uint16) 0, (char) 0};

/* EV_PIXMAP_IMP_DRAWABLE */
static EIF_TYPE_INDEX ptf1724[] = {1624,0xFFF7,1204,0xFFF7,1721,0xFFFF};
static struct eif_par_types par1724 = {1724, ptf1724, (uint16) 3, (uint16) 0, (char) 0};

/* EV_PICK_AND_DROPABLE_IMP */
static EIF_TYPE_INDEX ptf1725[] = {1569,0xFFF7,1180,0xFFF7,1667,0xFFFF};
static struct eif_par_types par1725 = {1725, ptf1725, (uint16) 3, (uint16) 0, (char) 0};

/* EV_PICK_AND_DROPABLE_ITEM_IMP */
static EIF_TYPE_INDEX ptf1726[] = {1725,0xFFFF};
static struct eif_par_types par1726 = {1726, ptf1726, (uint16) 1, (uint16) 0, (char) 0};

/* EV_ITEM_IMP */
static EIF_TYPE_INDEX ptf1727[] = {1606,0xFFF7,1561,0xFFF7,1726,0xFFFF};
static struct eif_par_types par1727 = {1727, ptf1727, (uint16) 3, (uint16) 0, (char) 0};

/* EV_MULTI_COLUMN_LIST_ROW_IMP */
static EIF_TYPE_INDEX ptf1728[] = {1616,0xFFF7,1727,0xFFFF};
static struct eif_par_types par1728 = {1728, ptf1728, (uint16) 2, (uint16) 0, (char) 0};

/* EV_LIST_ITEM_IMP */
static EIF_TYPE_INDEX ptf1729[] = {1608,0xFFF7,1727,0xFFF7,1566,0xFFF7,1559,0xFFF7,1095,0xFFF7,1233,0xFFFF};
static struct eif_par_types par1729 = {1729, ptf1729, (uint16) 6, (uint16) 0, (char) 0};

/* EV_TREE_NODE_IMP */
static EIF_TYPE_INDEX ptf1730[] = {1609,0xFFF7,1727,0xFFF7,1566,0xFFF7,1559,0xFFF7,1791,0xFF01,1509,0xFF01,1730,0xFFF7,1382,0xFFF7,1159,0xFFF7,1207,0xFFF7,1160,0xFFF7,1233,0xFFFF};
static struct eif_par_types par1730 = {1730, ptf1730, (uint16) 10, (uint16) 0, (char) 0};

/* EV_TREE_ITEM_IMP */
static EIF_TYPE_INDEX ptf1731[] = {1610,0xFFF7,1730,0xFFFF};
static struct eif_par_types par1731 = {1731, ptf1731, (uint16) 2, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_ITEM_IMP */
static EIF_TYPE_INDEX ptf1732[] = {1727,0xFFF7,1198,0xFFFF};
static struct eif_par_types par1732 = {1732, ptf1732, (uint16) 2, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_SEPARATOR_IMP */
static EIF_TYPE_INDEX ptf1733[] = {1607,0xFFF7,1732,0xFFFF};
static struct eif_par_types par1733 = {1733, ptf1733, (uint16) 2, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_BUTTON_IMP */
static EIF_TYPE_INDEX ptf1734[] = {1617,0xFFF7,1732,0xFFF7,1567,0xFFF7,1550,0xFFF7,1559,0xFFF7,1233,0xFFF7,1153,0xFFFF};
static struct eif_par_types par1734 = {1734, ptf1734, (uint16) 7, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_DROP_DOWN_BUTTON_IMP */
static EIF_TYPE_INDEX ptf1735[] = {1618,0xFFF7,1734,0xFFFF};
static struct eif_par_types par1735 = {1735, ptf1735, (uint16) 2, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_TOGGLE_BUTTON_IMP */
static EIF_TYPE_INDEX ptf1736[] = {1619,0xFFF7,1734,0xFFFF};
static struct eif_par_types par1736 = {1736, ptf1736, (uint16) 2, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_RADIO_BUTTON_IMP */
static EIF_TYPE_INDEX ptf1737[] = {1620,0xFFF7,1734,0xFFF7,1553,0xFFFF};
static struct eif_par_types par1737 = {1737, ptf1737, (uint16) 3, (uint16) 0, (char) 0};

/* EV_PICK_AND_DROPABLE_ITEM_HOLDER_IMP */
static EIF_TYPE_INDEX ptf1738[] = {1725,0xFFFF};
static struct eif_par_types par1738 = {1738, ptf1738, (uint16) 1, (uint16) 0, (char) 0};

/* EV_WIDGET_IMP */
static EIF_TYPE_INDEX ptf1739[] = {1570,0xFFF7,1541,0xFFF7,1725,0xFFF7,1550,0xFFF7,1203,0xFFF7,1215,0xFFF7,1667,0xFFF7,1213,0xFFF7,1374,0xFFFF};
static struct eif_par_types par1739 = {1739, ptf1739, (uint16) 9, (uint16) 0, (char) 0};

/* EV_CONTAINER_IMP */
static EIF_TYPE_INDEX ptf1740[] = {1571,0xFFF7,1543,0xFFF7,1739,0xFFF7,1201,0xFFF7,1202,0xFFF7,1680,0xFFFF};
static struct eif_par_types par1740 = {1740, ptf1740, (uint16) 6, (uint16) 0, (char) 0};

/* EV_WIDGET_LIST_IMP */
static EIF_TYPE_INDEX ptf1741[] = {1572,0xFFF7,1740,0xFFF7,1792,0xFF01,1459,0xFF01,1739,0xFFFF};
static struct eif_par_types par1741 = {1741, ptf1741, (uint16) 3, (uint16) 0, (char) 0};

/* EV_NOTEBOOK_IMP */
static EIF_TYPE_INDEX ptf1742[] = {1573,0xFFF7,1741,0xFFF7,1563,0xFFF7,1699,0xFFF7,1147,0xFFF7,1214,0xFFF7,1233,0xFFF7,1639,0xFFFF};
static struct eif_par_types par1742 = {1742, ptf1742, (uint16) 8, (uint16) 0, (char) 0};

/* EV_BOX_IMP */
static EIF_TYPE_INDEX ptf1743[] = {1574,0xFFF7,1741,0xFFF7,1555,0xFFF7,1694,0xFFFF};
static struct eif_par_types par1743 = {1743, ptf1743, (uint16) 4, (uint16) 0, (char) 0};

/* EV_HORIZONTAL_BOX_IMP */
static EIF_TYPE_INDEX ptf1744[] = {1575,0xFFF7,1743,0xFFFF};
static struct eif_par_types par1744 = {1744, ptf1744, (uint16) 2, (uint16) 0, (char) 0};

/* EV_VERTICAL_BOX_IMP */
static EIF_TYPE_INDEX ptf1745[] = {1576,0xFFF7,1743,0xFFFF};
static struct eif_par_types par1745 = {1745, ptf1745, (uint16) 2, (uint16) 0, (char) 0};

/* EV_SINGLE_CHILD_CONTAINER_IMP */
static EIF_TYPE_INDEX ptf1746[] = {1740,0xFFFF};
static struct eif_par_types par1746 = {1746, ptf1746, (uint16) 1, (uint16) 0, (char) 0};

/* EV_FRAME_IMP */
static EIF_TYPE_INDEX ptf1747[] = {1578,0xFFF7,1746,0xFFF7,1563,0xFFF7,1568,0xFFF7,1665,0xFFF7,1694,0xFFF7,1218,0xFFF7,1191,0xFFF7,1102,0xFFF7,1208,0xFFFF};
static struct eif_par_types par1747 = {1747, ptf1747, (uint16) 10, (uint16) 0, (char) 0};

/* EV_CELL_IMP */
static EIF_TYPE_INDEX ptf1748[] = {1577,0xFFF7,1555,0xFFF7,1746,0xFFF7,1694,0xFFFF};
static struct eif_par_types par1748 = {1748, ptf1748, (uint16) 4, (uint16) 0, (char) 0};

/* EV_VIEWPORT_IMP */
static EIF_TYPE_INDEX ptf1749[] = {1579,0xFFF7,1748,0xFFFF};
static struct eif_par_types par1749 = {1749, ptf1749, (uint16) 2, (uint16) 0, (char) 0};

/* EV_SCROLLABLE_AREA_IMP */
static EIF_TYPE_INDEX ptf1750[] = {1580,0xFFF7,1749,0xFFF7,1195,0xFFF7,1161,0xFFFF};
static struct eif_par_types par1750 = {1750, ptf1750, (uint16) 4, (uint16) 0, (char) 0};

/* EV_WINDOW_IMP */
static EIF_TYPE_INDEX ptf1751[] = {1581,0xFFF7,1746,0xFFF7,1686,0xFFF7,1223,0xFFFF};
static struct eif_par_types par1751 = {1751, ptf1751, (uint16) 4, (uint16) 0, (char) 0};

/* EV_POPUP_WINDOW_IMP */
static EIF_TYPE_INDEX ptf1752[] = {1751,0xFFF7,1582,0xFFFF};
static struct eif_par_types par1752 = {1752, ptf1752, (uint16) 2, (uint16) 0, (char) 0};

/* EV_TITLED_WINDOW_IMP */
static EIF_TYPE_INDEX ptf1753[] = {1583,0xFFF7,1751,0xFFF7,1198,0xFFFF};
static struct eif_par_types par1753 = {1753, ptf1753, (uint16) 3, (uint16) 0, (char) 0};

/* EV_DIALOG_IMP */
static EIF_TYPE_INDEX ptf1754[] = {1584,0xFFF7,1753,0xFFFF};
static struct eif_par_types par1754 = {1754, ptf1754, (uint16) 2, (uint16) 0, (char) 0};

/* EV_DIALOG_IMP_COMMON */
static EIF_TYPE_INDEX ptf1755[] = {1584,0xFFF7,1753,0xFFF7,1683,0xFFF7,1199,0xFFF7,1156,0xFFFF};
static struct eif_par_types par1755 = {1755, ptf1755, (uint16) 5, (uint16) 0, (char) 0};

/* EV_DIALOG_IMP_MODAL */
static EIF_TYPE_INDEX ptf1756[] = {1755,0xFFFF};
static struct eif_par_types par1756 = {1756, ptf1756, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DIALOG_IMP_MODELESS */
static EIF_TYPE_INDEX ptf1757[] = {1755,0xFFFF};
static struct eif_par_types par1757 = {1757, ptf1757, (uint16) 1, (uint16) 0, (char) 0};

/* EV_PRIMITIVE_IMP */
static EIF_TYPE_INDEX ptf1758[] = {1585,0xFFF7,1739,0xFFF7,1542,0xFFF7,1559,0xFFFF};
static struct eif_par_types par1758 = {1758, ptf1758, (uint16) 4, (uint16) 0, (char) 0};

/* EV_PIXMAP_IMP_WIDGET */
static EIF_TYPE_INDEX ptf1759[] = {1724,0xFFF7,1758,0xFFF7,1693,0xFFFF};
static struct eif_par_types par1759 = {1759, ptf1759, (uint16) 3, (uint16) 0, (char) 0};

/* EV_TOOL_BAR_IMP */
static EIF_TYPE_INDEX ptf1760[] = {1587,0xFFF7,1758,0xFFF7,1543,0xFFF7,1555,0xFFF7,1791,0xFF01,1494,0xFF01,1732,0xFFF7,1738,0xFFF7,1698,0xFFF7,1259,0xFFF7,1639,0xFFFF};
static struct eif_par_types par1760 = {1760, ptf1760, (uint16) 9, (uint16) 0, (char) 0};

/* EV_LABEL_IMP */
static EIF_TYPE_INDEX ptf1761[] = {1588,0xFFF7,1758,0xFFF7,1568,0xFFF7,1563,0xFFF7,1706,0xFFF7,1179,0xFFF7,1216,0xFFF7,1208,0xFFF7,126,0xFFFF};
static struct eif_par_types par1761 = {1761, ptf1761, (uint16) 9, (uint16) 0, (char) 0};

/* EV_MULTI_COLUMN_LIST_IMP */
static EIF_TYPE_INDEX ptf1762[] = {1586,0xFFF7,1758,0xFFF7,1791,0xFF01,1493,0xFF01,1728,0xFFF7,1738,0xFFF7,1720,0xFFF7,1259,0xFFFF};
static struct eif_par_types par1762 = {1762, ptf1762, (uint16) 6, (uint16) 0, (char) 0};

/* EV_LIST_IMP */
static EIF_TYPE_INDEX ptf1763[] = {1592,0xFFF7,1593,0xFFF7,1738,0xFFF7,1758,0xFFF7,1720,0xFFF7,1195,0xFFF7,1259,0xFFF7,1639,0xFFFF};
static struct eif_par_types par1763 = {1763, ptf1763, (uint16) 8, (uint16) 0, (char) 0};

/* EV_TREE_IMP */
static EIF_TYPE_INDEX ptf1764[] = {1589,0xFFF7,1758,0xFFF7,1791,0xFF01,1509,0xFF01,1730,0xFFF7,1738,0xFFF7,1700,0xFFF7,1111,0xFFF7,1207,0xFFF7,1162,0xFFF7,1639,0xFFF7,1161,0xFFFF};
static struct eif_par_types par1764 = {1764, ptf1764, (uint16) 10, (uint16) 0, (char) 0};

/* EV_CHECKABLE_TREE_IMP */
static EIF_TYPE_INDEX ptf1765[] = {1590,0xFFF7,1764,0xFFFF};
static struct eif_par_types par1765 = {1765, ptf1765, (uint16) 2, (uint16) 0, (char) 0};

/* EV_GAUGE_IMP */
static EIF_TYPE_INDEX ptf1766[] = {1594,0xFFF7,1758,0xFFFF};
static struct eif_par_types par1766 = {1766, ptf1766, (uint16) 2, (uint16) 0, (char) 0};

/* EV_SPIN_BUTTON_IMP */
static EIF_TYPE_INDEX ptf1767[] = {1600,0xFFF7,1563,0xFFF7,1766,0xFFF7,1691,0xFFF7,1144,0xFFF7,1221,0xFFF7,1047,0xFFFF};
static struct eif_par_types par1767 = {1767, ptf1767, (uint16) 7, (uint16) 0, (char) 0};

/* EV_RANGE_IMP */
static EIF_TYPE_INDEX ptf1768[] = {1595,0xFFF7,1766,0xFFF7,1719,0xFFFF};
static struct eif_par_types par1768 = {1768, ptf1768, (uint16) 3, (uint16) 0, (char) 0};

/* EV_BUTTON_IMP */
static EIF_TYPE_INDEX ptf1769[] = {1602,0xFFF7,1758,0xFFF7,1568,0xFFF7,1561,0xFFF7,1563,0xFFF7,1194,0xFFF7,1193,0xFFF7,1218,0xFFF7,1704,0xFFF7,1113,0xFFF7,1191,0xFFF7,1179,0xFFF7,1208,0xFFFF};
static struct eif_par_types par1769 = {1769, ptf1769, (uint16) 13, (uint16) 0, (char) 0};

/* EV_RADIO_BUTTON_IMP */
static EIF_TYPE_INDEX ptf1770[] = {1603,0xFFF7,1769,0xFFF7,1553,0xFFF7,1703,0xFFFF};
static struct eif_par_types par1770 = {1770, ptf1770, (uint16) 4, (uint16) 0, (char) 0};

/* EV_TOGGLE_BUTTON_IMP */
static EIF_TYPE_INDEX ptf1771[] = {1604,0xFFF7,1769,0xFFFF};
static struct eif_par_types par1771 = {1771, ptf1771, (uint16) 2, (uint16) 0, (char) 0};

/* EV_CHECK_BUTTON_IMP */
static EIF_TYPE_INDEX ptf1772[] = {1605,0xFFF7,1771,0xFFFF};
static struct eif_par_types par1772 = {1772, ptf1772, (uint16) 2, (uint16) 0, (char) 0};

/* EV_TEXT_COMPONENT_IMP */
static EIF_TYPE_INDEX ptf1773[] = {1596,0xFFF7,1758,0xFFF7,1206,0xFFFF};
static struct eif_par_types par1773 = {1773, ptf1773, (uint16) 3, (uint16) 0, (char) 0};

/* EV_TEXT_FIELD_IMP */
static EIF_TYPE_INDEX ptf1774[] = {1599,0xFFF7,1773,0xFFF7,1563,0xFFF7,1710,0xFFFF};
static struct eif_par_types par1774 = {1774, ptf1774, (uint16) 4, (uint16) 0, (char) 0};

/* EV_COMBO_BOX_IMP */
static EIF_TYPE_INDEX ptf1775[] = {1601,0xFFF7,1593,0xFFF7,1738,0xFFF7,1563,0xFFF7,1773,0xFFF7,1715,0xFFF7,1210,0xFFFF};
static struct eif_par_types par1775 = {1775, ptf1775, (uint16) 7, (uint16) 0, (char) 0};

/* EV_TEXT_IMP */
static EIF_TYPE_INDEX ptf1776[] = {1597,0xFFF7,1563,0xFFF7,1773,0xFFF7,1708,0xFFF7,1210,0xFFF7,1259,0xFFF7,1104,0xFFFF};
static struct eif_par_types par1776 = {1776, ptf1776, (uint16) 7, (uint16) 0, (char) 0};

/* EV_RICH_TEXT_IMP */
static EIF_TYPE_INDEX ptf1777[] = {1598,0xFFF7,1776,0xFFF7,1709,0xFFF7,1166,0xFFF7,1224,0xFFF7,1658,0xFFF7,1165,0xFFF7,1164,0xFFF7,1163,0xFFF7,1653,0xFFFF};
static struct eif_par_types par1777 = {1777, ptf1777, (uint16) 10, (uint16) 0, (char) 0};

/* EV_MENU_ITEM_IMP */
static EIF_TYPE_INDEX ptf1778[] = {1611,0xFFF7,1727,0xFFF7,1566,0xFFF7,1198,0xFFF7,1667,0xFFF7,1223,0xFFF7,1220,0xFFF7,1635,0xFFF7,1219,0xFFF7,1656,0xFFF7,166,0xFFFF};
static struct eif_par_types par1778 = {1778, ptf1778, (uint16) 11, (uint16) 0, (char) 0};

/* EV_MENU_SEPARATOR_IMP */
static EIF_TYPE_INDEX ptf1779[] = {1612,0xFFF7,1778,0xFFF7,1665,0xFFFF};
static struct eif_par_types par1779 = {1779, ptf1779, (uint16) 3, (uint16) 0, (char) 0};

/* EV_RADIO_MENU_ITEM_IMP */
static EIF_TYPE_INDEX ptf1780[] = {1613,0xFFF7,1778,0xFFF7,1553,0xFFF7,1666,0xFFFF};
static struct eif_par_types par1780 = {1780, ptf1780, (uint16) 4, (uint16) 0, (char) 0};

/* EV_CHECK_MENU_ITEM_IMP */
static EIF_TYPE_INDEX ptf1781[] = {1614,0xFFF7,1778,0xFFF7,1666,0xFFFF};
static struct eif_par_types par1781 = {1781, ptf1781, (uint16) 3, (uint16) 0, (char) 0};

/* EV_MENU_IMP */
static EIF_TYPE_INDEX ptf1782[] = {1615,0xFFF7,1778,0xFFF7,1540,0xFFFF};
static struct eif_par_types par1782 = {1782, ptf1782, (uint16) 3, (uint16) 0, (char) 0};

/* EV_ACTION_SEQUENCE [G#1] */
static EIF_TYPE_INDEX ptf1783[] = {1784,0xFFF8,1,0xFFFF};
static struct eif_par_types par1783 = {1783, ptf1783, (uint16) 1, (uint16) 1, (char) 0};

/* EV_LITE_ACTION_SEQUENCE [G#1] */
static EIF_TYPE_INDEX ptf1784[] = {615,0xFFF8,1,0xFFF7,1205,0xFFF7,1225,0xFFFF};
static struct eif_par_types par1784 = {1784, ptf1784, (uint16) 3, (uint16) 1, (char) 0};

/* EV_ITEM_LIST [G#1] */
static EIF_TYPE_INDEX ptf1785[] = {1423,0xFFF7,1788,0xFFF8,1,0xFFFF};
static struct eif_par_types par1785 = {1785, ptf1785, (uint16) 2, (uint16) 1, (char) 0};

/* EV_ITEM_LIST_I [G#1] */
static EIF_TYPE_INDEX ptf1786[] = {1787,0xFFF8,1,0xFFFF};
static struct eif_par_types par1786 = {1786, ptf1786, (uint16) 1, (uint16) 1, (char) 0};

/* EV_DYNAMIC_LIST_I [G#1] */
static EIF_TYPE_INDEX ptf1787[] = {1518,0xFFFF};
static struct eif_par_types par1787 = {1787, ptf1787, (uint16) 1, (uint16) 1, (char) 0};

/* EV_DYNAMIC_LIST [G#1] */
static EIF_TYPE_INDEX ptf1788[] = {1457,0xFFF7,292,0xFFF8,1,0xFFFF};
static struct eif_par_types par1788 = {1788, ptf1788, (uint16) 2, (uint16) 1, (char) 0};

/* EV_DYNAMIC_LIST_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf1789[] = {147,0xFFFF};
static struct eif_par_types par1789 = {1789, ptf1789, (uint16) 1, (uint16) 1, (char) 0};

/* EV_GDI_ALLOCATED_OBJECTS [G#1, G#2] */
static EIF_TYPE_INDEX ptf1790[] = {0,0xFFFF};
static struct eif_par_types par1790 = {1790, ptf1790, (uint16) 1, (uint16) 2, (char) 0};

/* EV_ITEM_LIST_IMP [G#1, G#2] */
static EIF_TYPE_INDEX ptf1791[] = {1786,0xFFF8,1,0xFFF7,1792,0xFFF8,1,0xFFF8,2,0xFFFF};
static struct eif_par_types par1791 = {1791, ptf1791, (uint16) 2, (uint16) 2, (char) 0};

/* EV_DYNAMIC_LIST_IMP [G#1, G#2] */
static EIF_TYPE_INDEX ptf1792[] = {1787,0xFFF8,1,0xFFFF};
static struct eif_par_types par1792 = {1792, ptf1792, (uint16) 1, (uint16) 2, (char) 0};

/* BINARY_SEARCH_TREE [G#1] */
static EIF_TYPE_INDEX ptf1793[] = {1796,0xFFF8,1,0xFFFF};
static struct eif_par_types par1793 = {1793, ptf1793, (uint16) 1, (uint16) 1, (char) 0};

/* TREE [G#1] */
static EIF_TYPE_INDEX ptf1794[] = {276,0xFFF8,1,0xFFFF};
static struct eif_par_types par1794 = {1794, ptf1794, (uint16) 1, (uint16) 1, (char) 0};

/* LINKED_STACK [G#1] */
static EIF_TYPE_INDEX ptf1795[] = {376,0xFFF8,1,0xFFF7,619,0xFFF8,1,0xFFFF};
static struct eif_par_types par1795 = {1795, ptf1795, (uint16) 2, (uint16) 1, (char) 0};

/* BINARY_TREE [G#1] */
static EIF_TYPE_INDEX ptf1796[] = {563,0xFFF8,1,0xFFF7,1794,0xFFF8,1,0xFFFF};
static struct eif_par_types par1796 = {1796, ptf1796, (uint16) 2, (uint16) 1, (char) 0};

/* TREE_ITERATION_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf1797[] = {269,0xFFF8,1,0xFFFF};
static struct eif_par_types par1797 = {1797, ptf1797, (uint16) 1, (uint16) 1, (char) 0};

/* HEAP_PRIORITY_QUEUE [G#1] */
static EIF_TYPE_INDEX ptf1798[] = {1799,0xFFF8,1,0xFFF7,289,0xFFF8,1,0xFFFF};
static struct eif_par_types par1798 = {1798, ptf1798, (uint16) 2, (uint16) 1, (char) 0};

/* PRIORITY_QUEUE [G#1] */
static EIF_TYPE_INDEX ptf1799[] = {377,0xFFF8,1,0xFFFF};
static struct eif_par_types par1799 = {1799, ptf1799, (uint16) 1, (uint16) 1, (char) 0};

/* HEAP_PRIORITY_QUEUE_ITERATION_CURSOR [G#1] */
static EIF_TYPE_INDEX ptf1800[] = {269,0xFFF8,1,0xFFFF};
static struct eif_par_types par1800 = {1800, ptf1800, (uint16) 1, (uint16) 1, (char) 0};

/* EV_ACTIVE_LIST [INTEGER_32] */
static EIF_TYPE_INDEX ptf1801[] = {1802,222,0xFFFF};
static struct eif_par_types par1801 = {1801, ptf1801, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE_LIST [INTEGER_32] */
static EIF_TYPE_INDEX ptf1802[] = {1803,222,0xFFFF};
static struct eif_par_types par1802 = {1802, ptf1802, (uint16) 1, (uint16) 1, (char) 0};

/* INTERACTIVE_LIST [INTEGER_32] */
static EIF_TYPE_INDEX ptf1803[] = {362,222,0xFFFF};
static struct eif_par_types par1803 = {1803, ptf1803, (uint16) 1, (uint16) 1, (char) 0};

/* EV_ACTIVE_LIST [G#1] */
static EIF_TYPE_INDEX ptf1804[] = {1805,0xFFF8,1,0xFFFF};
static struct eif_par_types par1804 = {1804, ptf1804, (uint16) 1, (uint16) 1, (char) 0};

/* ACTIVE_LIST [G#1] */
static EIF_TYPE_INDEX ptf1805[] = {622,0xFFF8,1,0xFFFF};
static struct eif_par_types par1805 = {1805, ptf1805, (uint16) 1, (uint16) 1, (char) 0};

/* WEL_ARRAY [G#1] */
static EIF_TYPE_INDEX ptf1806[] = {1298,0xFFFF};
static struct eif_par_types par1806 = {1806, ptf1806, (uint16) 1, (uint16) 1, (char) 0};

/* HASH_TABLE [G#1, POINTER] */
static EIF_TYPE_INDEX ptf1807[] = {297,0xFFF8,1,0xFFF7,1811,0xFFF8,1,231,0xFFF7,1808,0xFFF8,1,231,0xFFF7,267,0xFFF8,1,0xFFF7,161,0xFFFF};
static struct eif_par_types par1807 = {1807, ptf1807, (uint16) 5, (uint16) 2, (char) 0};

/* TABLE_ITERABLE [G#1, POINTER] */
static EIF_TYPE_INDEX ptf1808[] = {270,0xFFF8,1,0xFFFF};
static struct eif_par_types par1808 = {1808, ptf1808, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE_ITERATION_CURSOR [G#1, POINTER] */
static EIF_TYPE_INDEX ptf1809[] = {269,0xFFF8,1,0xFFFF};
static struct eif_par_types par1809 = {1809, ptf1809, (uint16) 1, (uint16) 2, (char) 0};

/* HASH_TABLE_ITERATION_CURSOR [G#1, POINTER] */
static EIF_TYPE_INDEX ptf1810[] = {271,0xFFF8,1,0xFFF7,1809,0xFFF8,1,231,0xFFFF};
static struct eif_par_types par1810 = {1810, ptf1810, (uint16) 2, (uint16) 2, (char) 0};

/* DYNAMIC_TABLE [G#1, POINTER] */
static EIF_TYPE_INDEX ptf1811[] = {1812,0xFFF8,1,231,0xFFFF};
static struct eif_par_types par1811 = {1811, ptf1811, (uint16) 1, (uint16) 2, (char) 0};

/* TABLE [G#1, POINTER] */
static EIF_TYPE_INDEX ptf1812[] = {281,0xFFF8,1,0xFFFF};
static struct eif_par_types par1812 = {1812, ptf1812, (uint16) 1, (uint16) 2, (char) 0};

/* PROXY_COMPARABLE [G#1] */
static EIF_TYPE_INDEX ptf1813[] = {116,0xFFFF};
static struct eif_par_types par1813 = {1813, ptf1813, (uint16) 1, (uint16) 1, (char) 0};

/* PLAYER */
static EIF_TYPE_INDEX ptf1814[] = {1873,0xFFFF};
static struct eif_par_types par1814 = {1814, ptf1814, (uint16) 1, (uint16) 0, (char) 0};

/* EV_DRAWING_AREA */
static EIF_TYPE_INDEX ptf1815[] = {1451,0xFFF7,1477,0xFFF7,1412,0xFFFF};
static struct eif_par_types par1815 = {1815, ptf1815, (uint16) 3, (uint16) 0, (char) 0};

/* EV_DRAWING_AREA_I */
static EIF_TYPE_INDEX ptf1816[] = {1621,0xFFF7,1585,0xFFF7,1519,0xFFF7,1158,0xFFFF};
static struct eif_par_types par1816 = {1816, ptf1816, (uint16) 4, (uint16) 0, (char) 0};

/* EV_DRAWING_AREA_IMP */
static EIF_TYPE_INDEX ptf1817[] = {1816,0xFFF7,1721,0xFFF7,1758,0xFFF7,1693,0xFFF7,1127,0xFFFF};
static struct eif_par_types par1817 = {1817, ptf1817, (uint16) 5, (uint16) 0, (char) 0};

/* EV_IDENTIFIED_FONT */
static EIF_TYPE_INDEX ptf1818[] = {0,0xFFFF};
static struct eif_par_types par1818 = {1818, ptf1818, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SCALED_PIXMAP_FACTORY */
static EIF_TYPE_INDEX ptf1819[] = {0,0xFFFF};
static struct eif_par_types par1819 = {1819, ptf1819, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SCALED_FONT_FACTORY */
static EIF_TYPE_INDEX ptf1820[] = {0,0xFFFF};
static struct eif_par_types par1820 = {1820, ptf1820, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SCALED_PIXEL_BUFFER_FACTORY */
static EIF_TYPE_INDEX ptf1821[] = {0,0xFFFF};
static struct eif_par_types par1821 = {1821, ptf1821, (uint16) 1, (uint16) 0, (char) 0};

/* EV_IDENTIFIED_PIXMAP */
static EIF_TYPE_INDEX ptf1822[] = {0,0xFFFF};
static struct eif_par_types par1822 = {1822, ptf1822, (uint16) 1, (uint16) 0, (char) 0};

/* EV_IDENTIFIED_PIXEL_BUFFER */
static EIF_TYPE_INDEX ptf1823[] = {0,0xFFFF};
static struct eif_par_types par1823 = {1823, ptf1823, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_PROJECTOR */
static EIF_TYPE_INDEX ptf1824[] = {0,0xFFFF};
static struct eif_par_types par1824 = {1824, ptf1824, (uint16) 1, (uint16) 0, (char) 0};

/* EV_SHARED_SCALE_FACTORY */
static EIF_TYPE_INDEX ptf1825[] = {0,0xFFFF};
static struct eif_par_types par1825 = {1825, ptf1825, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_MATH */
static EIF_TYPE_INDEX ptf1826[] = {127,0xFFFF};
static struct eif_par_types par1826 = {1826, ptf1826, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_DOUBLE_MATH */
static EIF_TYPE_INDEX ptf1827[] = {127,0xFFFF};
static struct eif_par_types par1827 = {1827, ptf1827, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_SINGLE_POINTED */
static EIF_TYPE_INDEX ptf1828[] = {0,0xFFFF};
static struct eif_par_types par1828 = {1828, ptf1828, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_DOUBLE_POINTED */
static EIF_TYPE_INDEX ptf1829[] = {1828,0xFFFF};
static struct eif_par_types par1829 = {1829, ptf1829, (uint16) 1, (uint16) 0, (char) 0};

/* EV_COORDINATE_ARRAY */
static EIF_TYPE_INDEX ptf1830[] = {274,0xFF01,1258,0xFFFF};
static struct eif_par_types par1830 = {1830, ptf1830, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL */
static EIF_TYPE_INDEX ptf1831[] = {1827,0xFFF7,188,0xFFF7,1265,0xFFFF};
static struct eif_par_types par1831 = {1831, ptf1831, (uint16) 3, (uint16) 0, (char) 0};

/* EV_MODEL_GROUP */
static EIF_TYPE_INDEX ptf1832[] = {1831,0xFFF7,291,0xFF01,1831,0xFFF7,1828,0xFFFF};
static struct eif_par_types par1832 = {1832, ptf1832, (uint16) 3, (uint16) 0, (char) 0};

/* EV_MODEL_WORLD */
static EIF_TYPE_INDEX ptf1833[] = {1832,0xFFFF};
static struct eif_par_types par1833 = {1833, ptf1833, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_MULTI_POINTED */
static EIF_TYPE_INDEX ptf1834[] = {1831,0xFFFF};
static struct eif_par_types par1834 = {1834, ptf1834, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_ATOMIC */
static EIF_TYPE_INDEX ptf1835[] = {1831,0xFFFF};
static struct eif_par_types par1835 = {1835, ptf1835, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_TEXT */
static EIF_TYPE_INDEX ptf1836[] = {1835,0xFFF7,1224,0xFFF7,1828,0xFFF7,116,0xFFF7,1825,0xFFFF};
static struct eif_par_types par1836 = {1836, ptf1836, (uint16) 5, (uint16) 0, (char) 0};

/* EV_MODEL_DOT */
static EIF_TYPE_INDEX ptf1837[] = {1835,0xFFF7,1828,0xFFFF};
static struct eif_par_types par1837 = {1837, ptf1837, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_STAR */
static EIF_TYPE_INDEX ptf1838[] = {1835,0xFFF7,1829,0xFFFF};
static struct eif_par_types par1838 = {1838, ptf1838, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_PICTURE */
static EIF_TYPE_INDEX ptf1839[] = {1835,0xFFF7,1828,0xFFF7,1825,0xFFFF};
static struct eif_par_types par1839 = {1839, ptf1839, (uint16) 3, (uint16) 0, (char) 0};

/* EV_MODEL_ROTATED_ELLIPTIC */
static EIF_TYPE_INDEX ptf1840[] = {1835,0xFFF7,1829,0xFFFF};
static struct eif_par_types par1840 = {1840, ptf1840, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_ROTATED_ARC */
static EIF_TYPE_INDEX ptf1841[] = {1840,0xFFFF};
static struct eif_par_types par1841 = {1841, ptf1841, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_ELLIPTIC */
static EIF_TYPE_INDEX ptf1842[] = {1835,0xFFF7,1829,0xFFFF};
static struct eif_par_types par1842 = {1842, ptf1842, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_ARC */
static EIF_TYPE_INDEX ptf1843[] = {1842,0xFFFF};
static struct eif_par_types par1843 = {1843, ptf1843, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_CLOSED */
static EIF_TYPE_INDEX ptf1844[] = {1835,0xFFFF};
static struct eif_par_types par1844 = {1844, ptf1844, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_POLYGON */
static EIF_TYPE_INDEX ptf1845[] = {1844,0xFFF7,1834,0xFFFF};
static struct eif_par_types par1845 = {1845, ptf1845, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_ROTATED_PIE_SLICE */
static EIF_TYPE_INDEX ptf1846[] = {1840,0xFFF7,1844,0xFFFF};
static struct eif_par_types par1846 = {1846, ptf1846, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_PIE_SLICE */
static EIF_TYPE_INDEX ptf1847[] = {1842,0xFFF7,1844,0xFFFF};
static struct eif_par_types par1847 = {1847, ptf1847, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_EQUILATERAL */
static EIF_TYPE_INDEX ptf1848[] = {1844,0xFFF7,1829,0xFFFF};
static struct eif_par_types par1848 = {1848, ptf1848, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_ROTATED_ELLIPSE */
static EIF_TYPE_INDEX ptf1849[] = {1840,0xFFF7,1844,0xFFFF};
static struct eif_par_types par1849 = {1849, ptf1849, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_ELLIPSE */
static EIF_TYPE_INDEX ptf1850[] = {1844,0xFFF7,1842,0xFFFF};
static struct eif_par_types par1850 = {1850, ptf1850, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_RECTANGLE */
static EIF_TYPE_INDEX ptf1851[] = {1844,0xFFF7,1829,0xFFFF};
static struct eif_par_types par1851 = {1851, ptf1851, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_ROUNDED_RECTANGLE */
static EIF_TYPE_INDEX ptf1852[] = {1851,0xFFFF};
static struct eif_par_types par1852 = {1852, ptf1852, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_PARALLELOGRAM */
static EIF_TYPE_INDEX ptf1853[] = {1844,0xFFF7,1829,0xFFFF};
static struct eif_par_types par1853 = {1853, ptf1853, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_ROUNDED_PARALLELOGRAM */
static EIF_TYPE_INDEX ptf1854[] = {1853,0xFFFF};
static struct eif_par_types par1854 = {1854, ptf1854, (uint16) 1, (uint16) 0, (char) 0};

/* MAIN_WINDOW */
static EIF_TYPE_INDEX ptf1855[] = {1472,0xFFFF};
static struct eif_par_types par1855 = {1855, ptf1855, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_TRANSFORMATION */
static EIF_TYPE_INDEX ptf1856[] = {0,0xFFF7,127,0xFFFF};
static struct eif_par_types par1856 = {1856, ptf1856, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_ARROWED */
static EIF_TYPE_INDEX ptf1857[] = {0,0xFFF7,1827,0xFFFF};
static struct eif_par_types par1857 = {1857, ptf1857, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_POLYLINE */
static EIF_TYPE_INDEX ptf1858[] = {1835,0xFFF7,1834,0xFFF7,1857,0xFFFF};
static struct eif_par_types par1858 = {1858, ptf1858, (uint16) 3, (uint16) 0, (char) 0};

/* EV_MODEL_LINE */
static EIF_TYPE_INDEX ptf1859[] = {1835,0xFFF7,1857,0xFFF7,142,0xFFF7,1829,0xFFFF};
static struct eif_par_types par1859 = {1859, ptf1859, (uint16) 4, (uint16) 0, (char) 0};

/* EV_MODEL_DRAWING_ROUTINES */
static EIF_TYPE_INDEX ptf1860[] = {0,0xFFF7,1826,0xFFFF};
static struct eif_par_types par1860 = {1860, ptf1860, (uint16) 2, (uint16) 0, (char) 0};

/* EV_MODEL_PROJECTION_ROUTINES */
static EIF_TYPE_INDEX ptf1861[] = {1860,0xFFFF};
static struct eif_par_types par1861 = {1861, ptf1861, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_DRAWER */
static EIF_TYPE_INDEX ptf1862[] = {1860,0xFFFF};
static struct eif_par_types par1862 = {1862, ptf1862, (uint16) 1, (uint16) 0, (char) 0};

/* EV_MODEL_WIDGET_PROJECTOR */
static EIF_TYPE_INDEX ptf1863[] = {1824,0xFFF7,1862,0xFFF7,1861,0xFFF7,1205,0xFFFF};
static struct eif_par_types par1863 = {1863, ptf1863, (uint16) 4, (uint16) 0, (char) 0};

/* EV_MODEL_DRAWING_AREA_PROJECTOR */
static EIF_TYPE_INDEX ptf1864[] = {1863,0xFFFF};
static struct eif_par_types par1864 = {1864, ptf1864, (uint16) 1, (uint16) 0, (char) 0};

/* KEYBOARD_HANDLER */
static EIF_TYPE_INDEX ptf1865[] = {0,0xFFFF};
static struct eif_par_types par1865 = {1865, ptf1865, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TIMEOUT */
static EIF_TYPE_INDEX ptf1866[] = {1423,0xFFFF};
static struct eif_par_types par1866 = {1866, ptf1866, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TIMEOUT_I */
static EIF_TYPE_INDEX ptf1867[] = {1518,0xFFFF};
static struct eif_par_types par1867 = {1867, ptf1867, (uint16) 1, (uint16) 0, (char) 0};

/* EV_TIMEOUT_IMP */
static EIF_TYPE_INDEX ptf1868[] = {1867,0xFFF7,174,0xFFFF};
static struct eif_par_types par1868 = {1868, ptf1868, (uint16) 2, (uint16) 0, (char) 0};

/* EV_INTERNAL_TIMEOUT_IMP */
static EIF_TYPE_INDEX ptf1869[] = {1686,0xFFFF};
static struct eif_par_types par1869 = {1869, ptf1869, (uint16) 1, (uint16) 0, (char) 0};

/* PLAYER_VIEWPORT */
static EIF_TYPE_INDEX ptf1870[] = {1845,0xFFFF};
static struct eif_par_types par1870 = {1870, ptf1870, (uint16) 1, (uint16) 0, (char) 0};

/* SPRITE_DIRECTION */
static EIF_TYPE_INDEX ptf1872[] = {0,0xFFFF};
static struct eif_par_types par1872 = {1872, ptf1872, (uint16) 1, (uint16) 0, (char) 0};

/* GAME_SPRITE */
static EIF_TYPE_INDEX ptf1873[] = {0,0xFFFF};
static struct eif_par_types par1873 = {1873, ptf1873, (uint16) 1, (uint16) 0, (char) 0};

/* DEER */
static EIF_TYPE_INDEX ptf1874[] = {1873,0xFFFF};
static struct eif_par_types par1874 = {1874, ptf1874, (uint16) 1, (uint16) 0, (char) 0};

/* C_DATE */
static EIF_TYPE_INDEX ptf1875[] = {0,0xFFFF};
static struct eif_par_types par1875 = {1875, ptf1875, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_TIME_LANGUAGE_CONSTANTS */
static EIF_TYPE_INDEX ptf1876[] = {0,0xFFFF};
static struct eif_par_types par1876 = {1876, ptf1876, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_TIME_TOOLS */
static EIF_TYPE_INDEX ptf1877[] = {1876,0xFFFF};
static struct eif_par_types par1877 = {1877, ptf1877, (uint16) 1, (uint16) 0, (char) 0};

/* GROUP_ELEMENT */
static EIF_TYPE_INDEX ptf1878[] = {0,0xFFFF};
static struct eif_par_types par1878 = {1878, ptf1878, (uint16) 1, (uint16) 0, (char) 0};

/* CODE_VALIDITY_CHECKER */
static EIF_TYPE_INDEX ptf1879[] = {0,0xFFFF};
static struct eif_par_types par1879 = {1879, ptf1879, (uint16) 1, (uint16) 0, (char) 0};

/* TIME_UTILITY */
static EIF_TYPE_INDEX ptf1880[] = {0,0xFFFF};
static struct eif_par_types par1880 = {1880, ptf1880, (uint16) 1, (uint16) 0, (char) 0};

/* TIME_CONSTANTS */
static EIF_TYPE_INDEX ptf1881[] = {1880,0xFFFF};
static struct eif_par_types par1881 = {1881, ptf1881, (uint16) 1, (uint16) 0, (char) 0};

/* TIME_MEASUREMENT */
static EIF_TYPE_INDEX ptf1882[] = {1881,0xFFFF};
static struct eif_par_types par1882 = {1882, ptf1882, (uint16) 1, (uint16) 0, (char) 0};

/* TIME_VALUE */
static EIF_TYPE_INDEX ptf1883[] = {1882,0xFFFF};
static struct eif_par_types par1883 = {1883, ptf1883, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_CONSTANTS */
static EIF_TYPE_INDEX ptf1884[] = {1880,0xFFFF};
static struct eif_par_types par1884 = {1884, ptf1884, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_TIME_MEASUREMENT */
static EIF_TYPE_INDEX ptf1885[] = {1884,0xFFF7,1881,0xFFFF};
static struct eif_par_types par1885 = {1885, ptf1885, (uint16) 2, (uint16) 0, (char) 0};

/* DATE_TIME_VALUE */
static EIF_TYPE_INDEX ptf1886[] = {1885,0xFFFF};
static struct eif_par_types par1886 = {1886, ptf1886, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_MEASUREMENT */
static EIF_TYPE_INDEX ptf1887[] = {1884,0xFFFF};
static struct eif_par_types par1887 = {1887, ptf1887, (uint16) 1, (uint16) 0, (char) 0};

/* DURATION */
static EIF_TYPE_INDEX ptf1888[] = {115,0xFFF7,1878,0xFFFF};
static struct eif_par_types par1888 = {1888, ptf1888, (uint16) 2, (uint16) 0, (char) 0};

/* DATE_TIME_DURATION */
static EIF_TYPE_INDEX ptf1889[] = {1888,0xFFF7,1885,0xFFFF};
static struct eif_par_types par1889 = {1889, ptf1889, (uint16) 2, (uint16) 0, (char) 0};

/* DATE_DURATION */
static EIF_TYPE_INDEX ptf1890[] = {1888,0xFFF7,1884,0xFFF7,1887,0xFFFF};
static struct eif_par_types par1890 = {1890, ptf1890, (uint16) 3, (uint16) 0, (char) 0};

/* TIME_DURATION */
static EIF_TYPE_INDEX ptf1891[] = {1888,0xFFF7,1882,0xFFF7,127,0xFFFF};
static struct eif_par_types par1891 = {1891, ptf1891, (uint16) 3, (uint16) 0, (char) 0};

/* ABSOLUTE */
static EIF_TYPE_INDEX ptf1892[] = {116,0xFFFF};
static struct eif_par_types par1892 = {1892, ptf1892, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_VALUE */
static EIF_TYPE_INDEX ptf1893[] = {1887,0xFFF7,161,0xFFFF};
static struct eif_par_types par1893 = {1893, ptf1893, (uint16) 2, (uint16) 0, (char) 0};

/* DATE_TIME_CODE */
static EIF_TYPE_INDEX ptf1894[] = {1879,0xFFF7,142,0xFFFF};
static struct eif_par_types par1894 = {1894, ptf1894, (uint16) 2, (uint16) 0, (char) 0};

/* FIND_SEPARATOR_FACILITY */
static EIF_TYPE_INDEX ptf1895[] = {0,0xFFFF};
static struct eif_par_types par1895 = {1895, ptf1895, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_TIME_CODE_STRING */
static EIF_TYPE_INDEX ptf1896[] = {1895,0xFFFF};
static struct eif_par_types par1896 = {1896, ptf1896, (uint16) 1, (uint16) 0, (char) 0};

/* DATE_VALIDITY_CHECKER */
static EIF_TYPE_INDEX ptf1897[] = {1884,0xFFF7,1893,0xFFF7,0,0xFFFF};
static struct eif_par_types par1897 = {1897, ptf1897, (uint16) 3, (uint16) 0, (char) 0};

/* DATE */
static EIF_TYPE_INDEX ptf1898[] = {1892,0xFFF7,1893,0xFFF7,1897,0xFFF7,142,0xFFFF};
static struct eif_par_types par1898 = {1898, ptf1898, (uint16) 4, (uint16) 0, (char) 0};

/* TIME_VALIDITY_CHECKER */
static EIF_TYPE_INDEX ptf1899[] = {1881,0xFFF7,1883,0xFFF7,0,0xFFFF};
static struct eif_par_types par1899 = {1899, ptf1899, (uint16) 3, (uint16) 0, (char) 0};

/* TIME */
static EIF_TYPE_INDEX ptf1900[] = {1892,0xFFF7,1883,0xFFF7,1899,0xFFF7,142,0xFFFF};
static struct eif_par_types par1900 = {1900, ptf1900, (uint16) 4, (uint16) 0, (char) 0};

/* DATE_TIME_VALIDITY_CHECKER */
static EIF_TYPE_INDEX ptf1901[] = {1897,0xFFF7,1899,0xFFF7,0,0xFFFF};
static struct eif_par_types par1901 = {1901, ptf1901, (uint16) 3, (uint16) 0, (char) 0};

/* DATE_TIME */
static EIF_TYPE_INDEX ptf1902[] = {1892,0xFFF7,1886,0xFFF7,1901,0xFFF7,142,0xFFFF};
static struct eif_par_types par1902 = {1902, ptf1902, (uint16) 4, (uint16) 0, (char) 0};

/* DATE_TIME_PARSER */
static EIF_TYPE_INDEX ptf1903[] = {1901,0xFFF7,1895,0xFFFF};
static struct eif_par_types par1903 = {1903, ptf1903, (uint16) 2, (uint16) 0, (char) 0};

/* INTERVAL [G#1] */
static EIF_TYPE_INDEX ptf1904[] = {115,0xFFFF};
static struct eif_par_types par1904 = {1904, ptf1904, (uint16) 1, (uint16) 1, (char) 0};

int egc_partab_size_init = 1904				;
				struct eif_par_types *egc_partab_init[] = {
&par0,
&par1,
&par2,
&par3,
&par4,
&par5,
&par6,
&par7,
&par8,
&par9,
&par10,
&par11,
&par12,
&par13,
&par14,
&par15,
&par16,
&par17,
&par18,
&par19,
&par20,
&par21,
&par22,
&par23,
&par24,
&par25,
&par26,
&par27,
&par28,
&par29,
&par30,
&par31,
&par32,
&par33,
&par34,
&par35,
&par36,
&par37,
&par38,
&par39,
&par40,
&par41,
&par42,
&par43,
&par44,
&par45,
&par46,
&par47,
&par48,
&par49,
&par50,
&par51,
&par52,
&par53,
&par54,
&par55,
&par56,
&par57,
&par58,
&par59,
&par60,
&par61,
&par62,
&par63,
&par64,
&par65,
&par66,
&par67,
&par68,
&par69,
&par70,
&par71,
&par72,
&par73,
&par74,
&par75,
&par76,
&par77,
&par78,
&par79,
&par80,
&par81,
&par82,
&par83,
&par84,
&par85,
&par86,
&par87,
&par88,
&par89,
&par90,
&par91,
&par92,
&par93,
&par94,
&par95,
&par96,
&par97,
&par98,
&par99,
&par100,
&par101,
&par102,
&par103,
&par104,
&par105,
&par106,
&par107,
&par108,
&par109,
&par110,
&par111,
&par112,
&par113,
&par114,
&par115,
&par116,
&par117,
&par118,
&par119,
&par120,
&par121,
&par122,
&par123,
&par124,
&par125,
&par126,
&par127,
&par128,
&par129,
&par130,
&par131,
&par132,
&par133,
&par134,
&par135,
&par136,
&par137,
&par138,
&par139,
&par140,
&par141,
&par142,
&par143,
&par144,
&par145,
&par146,
&par147,
&par148,
&par149,
&par150,
&par151,
&par152,
&par153,
&par154,
&par155,
&par156,
&par157,
&par158,
&par159,
&par160,
&par161,
&par162,
&par163,
&par164,
&par165,
&par166,
&par167,
&par168,
&par169,
&par170,
&par171,
&par172,
&par173,
&par174,
&par175,
&par176,
&par177,
&par178,
&par179,
&par180,
&par181,
&par182,
&par183,
&par184,
&par185,
&par186,
&par187,
&par188,
&par189,
&par190,
&par191,
&par192,
&par193,
&par194,
&par195,
&par196,
&par197,
&par198,
&par199,
&par200,
&par201,
&par202,
&par203,
&par204,
&par205,
&par206,
&par207,
&par208,
&par209,
&par210,
&par211,
&par212,
&par213,
&par214,
&par215,
&par216,
&par217,
&par218,
&par219,
&par220,
&par221,
&par222,
&par223,
&par224,
&par225,
&par226,
&par227,
&par228,
&par229,
&par230,
&par231,
&par232,
&par233,
&par234,
&par235,
&par236,
&par237,
&par238,
&par239,
&par240,
&par241,
&par242,
&par243,
&par244,
&par245,
&par246,
&par247,
&par248,
&par249,
&par250,
&par251,
&par252,
&par253,
&par254,
&par255,
&par256,
&par257,
&par258,
&par259,
&par260,
&par261,
&par262,
&par263,
&par264,
&par265,
&par266,
&par267,
&par268,
&par269,
&par270,
&par271,
&par272,
&par273,
&par274,
&par275,
&par276,
&par277,
&par278,
&par279,
&par280,
&par281,
&par282,
&par283,
&par284,
&par285,
&par286,
&par287,
&par288,
&par289,
&par290,
&par291,
&par292,
&par293,
&par294,
&par295,
&par296,
&par297,
&par298,
&par299,
&par300,
&par301,
&par302,
&par303,
&par304,
&par305,
&par306,
&par307,
&par308,
&par309,
&par310,
&par311,
&par312,
&par313,
&par314,
&par315,
&par316,
&par317,
&par318,
&par319,
&par320,
&par321,
&par322,
&par323,
&par324,
&par325,
&par326,
&par327,
&par328,
&par329,
&par330,
&par331,
&par332,
&par333,
&par334,
&par335,
&par336,
&par337,
&par338,
&par339,
&par340,
&par341,
&par342,
&par343,
&par344,
&par345,
&par346,
&par347,
&par348,
&par349,
&par350,
&par351,
&par352,
&par353,
&par354,
&par355,
&par356,
&par357,
&par358,
&par359,
&par360,
&par361,
&par362,
&par363,
&par364,
&par365,
&par366,
&par367,
&par368,
&par369,
&par370,
&par371,
&par372,
&par373,
&par374,
&par375,
&par376,
&par377,
&par378,
&par379,
&par380,
&par381,
&par382,
&par383,
&par384,
&par385,
&par386,
&par387,
&par388,
&par389,
&par390,
&par391,
&par392,
&par393,
&par394,
&par395,
&par396,
&par397,
&par398,
&par399,
&par400,
&par401,
&par402,
&par403,
&par404,
&par405,
&par406,
&par407,
&par408,
&par409,
&par410,
&par411,
&par412,
&par413,
&par414,
&par415,
&par416,
&par417,
&par418,
&par419,
&par420,
&par421,
&par422,
&par423,
&par424,
&par425,
&par426,
&par427,
&par428,
&par429,
&par430,
&par431,
&par432,
&par433,
&par434,
&par435,
&par436,
&par437,
&par438,
&par439,
&par440,
&par441,
&par442,
&par443,
&par444,
&par445,
&par446,
&par447,
&par448,
&par449,
&par450,
&par451,
&par452,
&par453,
&par454,
&par455,
&par456,
&par457,
&par458,
&par459,
&par460,
&par461,
&par462,
&par463,
&par464,
&par465,
&par466,
&par467,
&par468,
&par469,
&par470,
&par471,
&par472,
&par473,
&par474,
&par475,
&par476,
&par477,
&par478,
&par479,
&par480,
&par481,
&par482,
&par483,
&par484,
&par485,
&par486,
&par487,
&par488,
&par489,
&par490,
&par491,
&par492,
&par493,
&par494,
&par495,
&par496,
&par497,
&par498,
&par499,
&par500,
&par501,
&par502,
&par503,
&par504,
&par505,
&par506,
&par507,
&par508,
&par509,
&par510,
&par511,
&par512,
&par513,
&par514,
&par515,
&par516,
&par517,
&par518,
&par519,
&par520,
&par521,
&par522,
&par523,
&par524,
&par525,
&par526,
&par527,
&par528,
&par529,
&par530,
&par531,
&par532,
&par533,
&par534,
&par535,
&par536,
&par537,
&par538,
&par539,
&par540,
&par541,
&par542,
&par543,
&par544,
&par545,
&par546,
&par547,
&par548,
&par549,
&par550,
&par551,
&par552,
&par553,
&par554,
&par555,
&par556,
&par557,
&par558,
&par559,
&par560,
&par561,
&par562,
&par563,
&par564,
&par565,
&par566,
&par567,
&par568,
&par569,
&par570,
&par571,
&par572,
&par573,
&par574,
&par575,
&par576,
&par577,
&par578,
&par579,
&par580,
&par581,
&par582,
&par583,
&par584,
&par585,
&par586,
&par587,
&par588,
&par589,
&par590,
&par591,
&par592,
&par593,
&par594,
&par595,
&par596,
&par597,
&par598,
&par599,
&par600,
&par601,
&par602,
&par603,
&par604,
&par605,
&par606,
&par607,
&par608,
&par609,
&par610,
&par611,
&par612,
&par613,
&par614,
&par615,
&par616,
&par617,
&par618,
&par619,
&par620,
&par621,
&par622,
&par623,
&par624,
&par625,
&par626,
&par627,
&par628,
&par629,
&par630,
&par631,
&par632,
&par633,
&par634,
&par635,
&par636,
&par637,
&par638,
&par639,
&par640,
&par641,
&par642,
&par643,
&par644,
&par645,
&par646,
&par647,
&par648,
&par649,
&par650,
&par651,
&par652,
&par653,
&par654,
&par655,
&par656,
&par657,
&par658,
&par659,
&par660,
&par661,
&par662,
&par663,
&par664,
&par665,
&par666,
&par667,
&par668,
&par669,
&par670,
&par671,
&par672,
&par673,
&par674,
&par675,
&par676,
&par677,
&par678,
&par679,
&par680,
&par681,
&par682,
&par683,
&par684,
&par685,
&par686,
&par687,
&par688,
&par689,
&par690,
&par691,
&par692,
&par693,
&par694,
&par695,
&par696,
&par697,
&par698,
&par699,
&par700,
&par701,
&par702,
&par703,
&par704,
&par705,
&par706,
&par707,
&par708,
&par709,
&par710,
&par711,
&par712,
&par713,
&par714,
&par715,
&par716,
&par717,
&par718,
&par719,
&par720,
&par721,
&par722,
&par723,
&par724,
&par725,
&par726,
&par727,
&par728,
&par729,
&par730,
&par731,
&par732,
&par733,
&par734,
&par735,
&par736,
&par737,
&par738,
&par739,
&par740,
&par741,
&par742,
&par743,
&par744,
&par745,
&par746,
&par747,
&par748,
&par749,
&par750,
&par751,
&par752,
&par753,
&par754,
&par755,
&par756,
&par757,
&par758,
&par759,
&par760,
&par761,
&par762,
&par763,
&par764,
&par765,
&par766,
&par767,
&par768,
&par769,
&par770,
&par771,
&par772,
&par773,
&par774,
&par775,
&par776,
&par777,
&par778,
&par779,
&par780,
&par781,
&par782,
&par783,
&par784,
&par785,
&par786,
&par787,
&par788,
&par789,
&par790,
&par791,
&par792,
&par793,
&par794,
&par795,
&par796,
&par797,
&par798,
&par799,
&par800,
&par801,
&par802,
&par803,
&par804,
&par805,
&par806,
&par807,
&par808,
&par809,
&par810,
&par811,
&par812,
&par813,
&par814,
&par815,
&par816,
&par817,
&par818,
&par819,
&par820,
&par821,
&par822,
&par823,
&par824,
&par825,
&par826,
&par827,
&par828,
&par829,
&par830,
&par831,
&par832,
&par833,
&par834,
&par835,
&par836,
&par837,
&par838,
&par839,
&par840,
&par841,
&par842,
&par843,
&par844,
&par845,
&par846,
&par847,
&par848,
&par849,
&par850,
&par851,
&par852,
&par853,
&par854,
&par855,
&par856,
&par857,
&par858,
&par859,
&par860,
&par861,
&par862,
&par863,
&par864,
&par865,
&par866,
&par867,
&par868,
&par869,
&par870,
&par871,
&par872,
&par873,
&par874,
&par875,
&par876,
&par877,
&par878,
&par879,
&par880,
&par881,
&par882,
&par883,
&par884,
&par885,
&par886,
&par887,
&par888,
&par889,
&par890,
&par891,
&par892,
&par893,
&par894,
&par895,
&par896,
&par897,
&par898,
&par899,
&par900,
&par901,
&par902,
&par903,
&par904,
&par905,
&par906,
&par907,
&par908,
&par909,
&par910,
&par911,
&par912,
&par913,
&par914,
&par915,
&par916,
&par917,
&par918,
&par919,
&par920,
&par921,
&par922,
&par923,
&par924,
&par925,
&par926,
&par927,
&par928,
&par929,
&par930,
&par931,
&par932,
&par933,
&par934,
&par935,
&par936,
&par937,
&par938,
&par939,
&par940,
&par941,
&par942,
&par943,
&par944,
&par945,
&par946,
&par947,
&par948,
&par949,
&par950,
&par951,
&par952,
&par953,
&par954,
&par955,
&par956,
&par957,
&par958,
&par959,
&par960,
&par961,
&par962,
&par963,
&par964,
&par965,
&par966,
&par967,
&par968,
&par969,
&par970,
&par971,
&par972,
&par973,
NULL,
&par975,
&par976,
&par977,
&par978,
&par979,
&par980,
&par981,
&par982,
&par983,
&par984,
&par985,
&par986,
&par987,
&par988,
&par989,
&par990,
&par991,
&par992,
&par993,
&par994,
&par995,
&par996,
&par997,
&par998,
&par999,
&par1000,
&par1001,
&par1002,
&par1003,
&par1004,
&par1005,
&par1006,
&par1007,
&par1008,
&par1009,
&par1010,
&par1011,
&par1012,
&par1013,
&par1014,
&par1015,
&par1016,
&par1017,
&par1018,
&par1019,
&par1020,
&par1021,
&par1022,
&par1023,
&par1024,
&par1025,
&par1026,
&par1027,
&par1028,
&par1029,
&par1030,
&par1031,
&par1032,
&par1033,
&par1034,
&par1035,
&par1036,
&par1037,
&par1038,
&par1039,
&par1040,
&par1041,
&par1042,
&par1043,
&par1044,
&par1045,
&par1046,
&par1047,
&par1048,
&par1049,
&par1050,
&par1051,
&par1052,
&par1053,
&par1054,
&par1055,
&par1056,
&par1057,
&par1058,
&par1059,
&par1060,
&par1061,
&par1062,
&par1063,
&par1064,
&par1065,
&par1066,
&par1067,
&par1068,
&par1069,
&par1070,
&par1071,
&par1072,
&par1073,
&par1074,
&par1075,
&par1076,
&par1077,
&par1078,
&par1079,
&par1080,
&par1081,
&par1082,
&par1083,
&par1084,
&par1085,
&par1086,
&par1087,
&par1088,
&par1089,
&par1090,
&par1091,
&par1092,
&par1093,
&par1094,
&par1095,
&par1096,
&par1097,
&par1098,
&par1099,
&par1100,
&par1101,
&par1102,
&par1103,
&par1104,
&par1105,
&par1106,
&par1107,
&par1108,
&par1109,
&par1110,
&par1111,
&par1112,
&par1113,
&par1114,
&par1115,
&par1116,
&par1117,
&par1118,
&par1119,
&par1120,
&par1121,
&par1122,
&par1123,
&par1124,
&par1125,
&par1126,
&par1127,
&par1128,
&par1129,
&par1130,
&par1131,
&par1132,
&par1133,
&par1134,
&par1135,
&par1136,
&par1137,
&par1138,
&par1139,
&par1140,
&par1141,
&par1142,
&par1143,
&par1144,
&par1145,
&par1146,
&par1147,
&par1148,
&par1149,
&par1150,
&par1151,
&par1152,
&par1153,
&par1154,
&par1155,
&par1156,
&par1157,
&par1158,
&par1159,
&par1160,
&par1161,
&par1162,
&par1163,
&par1164,
&par1165,
&par1166,
&par1167,
&par1168,
&par1169,
&par1170,
&par1171,
&par1172,
&par1173,
&par1174,
&par1175,
&par1176,
&par1177,
&par1178,
&par1179,
&par1180,
&par1181,
&par1182,
&par1183,
&par1184,
&par1185,
&par1186,
&par1187,
&par1188,
&par1189,
&par1190,
&par1191,
&par1192,
&par1193,
&par1194,
&par1195,
&par1196,
&par1197,
&par1198,
&par1199,
&par1200,
&par1201,
&par1202,
&par1203,
&par1204,
&par1205,
&par1206,
&par1207,
&par1208,
&par1209,
&par1210,
&par1211,
&par1212,
&par1213,
&par1214,
&par1215,
&par1216,
&par1217,
&par1218,
&par1219,
&par1220,
&par1221,
&par1222,
&par1223,
&par1224,
&par1225,
&par1226,
&par1227,
&par1228,
&par1229,
&par1230,
&par1231,
&par1232,
&par1233,
&par1234,
&par1235,
&par1236,
&par1237,
&par1238,
&par1239,
&par1240,
&par1241,
&par1242,
&par1243,
&par1244,
&par1245,
&par1246,
&par1247,
&par1248,
&par1249,
&par1250,
&par1251,
&par1252,
&par1253,
&par1254,
&par1255,
&par1256,
&par1257,
&par1258,
&par1259,
&par1260,
&par1261,
&par1262,
&par1263,
&par1264,
&par1265,
&par1266,
&par1267,
&par1268,
&par1269,
&par1270,
&par1271,
&par1272,
&par1273,
&par1274,
&par1275,
&par1276,
&par1277,
&par1278,
&par1279,
&par1280,
&par1281,
&par1282,
&par1283,
&par1284,
&par1285,
&par1286,
&par1287,
&par1288,
&par1289,
&par1290,
&par1291,
&par1292,
&par1293,
&par1294,
&par1295,
&par1296,
&par1297,
&par1298,
&par1299,
&par1300,
&par1301,
&par1302,
&par1303,
&par1304,
&par1305,
&par1306,
&par1307,
&par1308,
&par1309,
&par1310,
&par1311,
&par1312,
&par1313,
&par1314,
&par1315,
&par1316,
&par1317,
&par1318,
&par1319,
&par1320,
&par1321,
&par1322,
&par1323,
&par1324,
&par1325,
&par1326,
&par1327,
&par1328,
&par1329,
&par1330,
&par1331,
&par1332,
&par1333,
&par1334,
&par1335,
&par1336,
&par1337,
&par1338,
&par1339,
&par1340,
&par1341,
&par1342,
&par1343,
&par1344,
&par1345,
&par1346,
&par1347,
&par1348,
&par1349,
&par1350,
&par1351,
&par1352,
&par1353,
&par1354,
&par1355,
&par1356,
&par1357,
&par1358,
&par1359,
&par1360,
&par1361,
&par1362,
&par1363,
&par1364,
&par1365,
&par1366,
&par1367,
&par1368,
&par1369,
&par1370,
&par1371,
&par1372,
&par1373,
&par1374,
&par1375,
&par1376,
&par1377,
&par1378,
&par1379,
&par1380,
&par1381,
&par1382,
&par1383,
&par1384,
&par1385,
&par1386,
&par1387,
&par1388,
&par1389,
&par1390,
&par1391,
&par1392,
&par1393,
&par1394,
&par1395,
&par1396,
&par1397,
&par1398,
&par1399,
&par1400,
&par1401,
&par1402,
&par1403,
&par1404,
&par1405,
&par1406,
&par1407,
&par1408,
&par1409,
&par1410,
&par1411,
&par1412,
&par1413,
&par1414,
&par1415,
&par1416,
&par1417,
&par1418,
&par1419,
&par1420,
&par1421,
&par1422,
&par1423,
&par1424,
&par1425,
&par1426,
&par1427,
&par1428,
&par1429,
&par1430,
&par1431,
&par1432,
&par1433,
&par1434,
&par1435,
&par1436,
&par1437,
&par1438,
&par1439,
&par1440,
&par1441,
&par1442,
&par1443,
&par1444,
&par1445,
&par1446,
&par1447,
&par1448,
&par1449,
&par1450,
&par1451,
&par1452,
&par1453,
&par1454,
&par1455,
&par1456,
&par1457,
&par1458,
&par1459,
&par1460,
&par1461,
&par1462,
&par1463,
&par1464,
&par1465,
&par1466,
&par1467,
&par1468,
&par1469,
&par1470,
&par1471,
&par1472,
&par1473,
&par1474,
&par1475,
&par1476,
&par1477,
&par1478,
&par1479,
&par1480,
&par1481,
&par1482,
&par1483,
&par1484,
&par1485,
&par1486,
&par1487,
&par1488,
&par1489,
&par1490,
&par1491,
&par1492,
&par1493,
&par1494,
&par1495,
&par1496,
&par1497,
&par1498,
&par1499,
&par1500,
&par1501,
&par1502,
&par1503,
&par1504,
&par1505,
&par1506,
&par1507,
&par1508,
&par1509,
&par1510,
&par1511,
&par1512,
&par1513,
&par1514,
&par1515,
&par1516,
&par1517,
&par1518,
&par1519,
&par1520,
&par1521,
&par1522,
&par1523,
&par1524,
&par1525,
&par1526,
&par1527,
&par1528,
&par1529,
&par1530,
&par1531,
&par1532,
&par1533,
&par1534,
&par1535,
&par1536,
&par1537,
&par1538,
&par1539,
&par1540,
&par1541,
&par1542,
&par1543,
&par1544,
&par1545,
&par1546,
&par1547,
&par1548,
&par1549,
&par1550,
&par1551,
&par1552,
&par1553,
&par1554,
&par1555,
&par1556,
&par1557,
&par1558,
&par1559,
&par1560,
&par1561,
&par1562,
&par1563,
&par1564,
&par1565,
&par1566,
&par1567,
&par1568,
&par1569,
&par1570,
&par1571,
&par1572,
&par1573,
&par1574,
&par1575,
&par1576,
&par1577,
&par1578,
&par1579,
&par1580,
&par1581,
&par1582,
&par1583,
&par1584,
&par1585,
&par1586,
&par1587,
&par1588,
&par1589,
&par1590,
&par1591,
&par1592,
&par1593,
&par1594,
&par1595,
&par1596,
&par1597,
&par1598,
&par1599,
&par1600,
&par1601,
&par1602,
&par1603,
&par1604,
&par1605,
&par1606,
&par1607,
&par1608,
&par1609,
&par1610,
&par1611,
&par1612,
&par1613,
&par1614,
&par1615,
&par1616,
&par1617,
&par1618,
&par1619,
&par1620,
&par1621,
&par1622,
&par1623,
&par1624,
&par1625,
&par1626,
&par1627,
&par1628,
&par1629,
&par1630,
&par1631,
&par1632,
&par1633,
&par1634,
&par1635,
&par1636,
&par1637,
&par1638,
&par1639,
&par1640,
&par1641,
&par1642,
&par1643,
&par1644,
&par1645,
&par1646,
&par1647,
&par1648,
&par1649,
&par1650,
&par1651,
&par1652,
&par1653,
&par1654,
&par1655,
&par1656,
&par1657,
&par1658,
&par1659,
&par1660,
&par1661,
&par1662,
&par1663,
&par1664,
&par1665,
&par1666,
&par1667,
&par1668,
&par1669,
&par1670,
&par1671,
&par1672,
&par1673,
&par1674,
&par1675,
&par1676,
&par1677,
&par1678,
&par1679,
&par1680,
&par1681,
&par1682,
&par1683,
&par1684,
&par1685,
&par1686,
&par1687,
&par1688,
&par1689,
&par1690,
&par1691,
&par1692,
&par1693,
&par1694,
&par1695,
&par1696,
&par1697,
&par1698,
&par1699,
&par1700,
&par1701,
&par1702,
&par1703,
&par1704,
&par1705,
&par1706,
&par1707,
&par1708,
&par1709,
&par1710,
&par1711,
&par1712,
&par1713,
&par1714,
&par1715,
&par1716,
&par1717,
&par1718,
&par1719,
&par1720,
&par1721,
&par1722,
&par1723,
&par1724,
&par1725,
&par1726,
&par1727,
&par1728,
&par1729,
&par1730,
&par1731,
&par1732,
&par1733,
&par1734,
&par1735,
&par1736,
&par1737,
&par1738,
&par1739,
&par1740,
&par1741,
&par1742,
&par1743,
&par1744,
&par1745,
&par1746,
&par1747,
&par1748,
&par1749,
&par1750,
&par1751,
&par1752,
&par1753,
&par1754,
&par1755,
&par1756,
&par1757,
&par1758,
&par1759,
&par1760,
&par1761,
&par1762,
&par1763,
&par1764,
&par1765,
&par1766,
&par1767,
&par1768,
&par1769,
&par1770,
&par1771,
&par1772,
&par1773,
&par1774,
&par1775,
&par1776,
&par1777,
&par1778,
&par1779,
&par1780,
&par1781,
&par1782,
&par1783,
&par1784,
&par1785,
&par1786,
&par1787,
&par1788,
&par1789,
&par1790,
&par1791,
&par1792,
&par1793,
&par1794,
&par1795,
&par1796,
&par1797,
&par1798,
&par1799,
&par1800,
&par1801,
&par1802,
&par1803,
&par1804,
&par1805,
&par1806,
&par1807,
&par1808,
&par1809,
&par1810,
&par1811,
&par1812,
&par1813,
&par1814,
&par1815,
&par1816,
&par1817,
&par1818,
&par1819,
&par1820,
&par1821,
&par1822,
&par1823,
&par1824,
&par1825,
&par1826,
&par1827,
&par1828,
&par1829,
&par1830,
&par1831,
&par1832,
&par1833,
&par1834,
&par1835,
&par1836,
&par1837,
&par1838,
&par1839,
&par1840,
&par1841,
&par1842,
&par1843,
&par1844,
&par1845,
&par1846,
&par1847,
&par1848,
&par1849,
&par1850,
&par1851,
&par1852,
&par1853,
&par1854,
&par1855,
&par1856,
&par1857,
&par1858,
&par1859,
&par1860,
&par1861,
&par1862,
&par1863,
&par1864,
&par1865,
&par1866,
&par1867,
&par1868,
&par1869,
&par1870,
NULL,
&par1872,
&par1873,
&par1874,
&par1875,
&par1876,
&par1877,
&par1878,
&par1879,
&par1880,
&par1881,
&par1882,
&par1883,
&par1884,
&par1885,
&par1886,
&par1887,
&par1888,
&par1889,
&par1890,
&par1891,
&par1892,
&par1893,
&par1894,
&par1895,
&par1896,
&par1897,
&par1898,
&par1899,
&par1900,
&par1901,
&par1902,
&par1903,
&par1904,
NULL};

#ifdef __cplusplus
}
#endif
