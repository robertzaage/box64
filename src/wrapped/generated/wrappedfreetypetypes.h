/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.17) *
 *******************************************************************/
#ifndef __wrappedfreetypeTYPES_H_
#define __wrappedfreetypeTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFpp_t)(void*, void*);
typedef int32_t (*iFppp_t)(void*, void*, void*);
typedef int32_t (*iFpplp_t)(void*, void*, intptr_t, void*);
typedef int32_t (*iFpuuLppp_t)(void*, uint32_t, uint32_t, uintptr_t, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(FT_New_Library, iFpp_t) \
	GO(FT_Outline_Decompose, iFppp_t) \
	GO(FT_Open_Face, iFpplp_t) \
	GO(FTC_Manager_New, iFpuuLppp_t)

#endif // __wrappedfreetypeTYPES_H_
