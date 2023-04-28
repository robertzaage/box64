/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.17) *
 *******************************************************************/
#ifndef __wrappedlibusb1TYPES_H_
#define __wrappedlibusb1TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFp_t)(void*);
typedef void* (*pFi_t)(int32_t);
typedef int32_t (*iFpiiiiippp_t)(void*, int32_t, int32_t, int32_t, int32_t, int32_t, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(libusb_cancel_transfer, iFp_t) \
	GO(libusb_submit_transfer, iFp_t) \
	GO(libusb_alloc_transfer, pFi_t) \
	GO(libusb_hotplug_register_callback, iFpiiiiippp_t)

#endif // __wrappedlibusb1TYPES_H_
