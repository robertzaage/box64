/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.17) *
 *******************************************************************/
#ifndef __wrappedxml2TYPES_H_
#define __wrappedxml2TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef int32_t (*iFp_t)(void*);
typedef void* (*pFv_t)(void);
typedef void (*vFpp_t)(void*, void*);
typedef void* (*pFpp_t)(void*, void*);
typedef void (*vFppp_t)(void*, void*, void*);
typedef int32_t (*iFppp_t)(void*, void*, void*);
typedef void* (*pFppp_t)(void*, void*, void*);
typedef void (*vFpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iFpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iFpppV_t)(void*, void*, void*, ...);
typedef int32_t (*iFpppA_t)(void*, void*, void*, va_list);
typedef void* (*pFpppi_t)(void*, void*, void*, int32_t);
typedef void* (*pFpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iFppppp_t)(void*, void*, void*, void*, void*);
typedef void* (*pFppppi_t)(void*, void*, void*, void*, int32_t);
typedef void (*vFpppppp_t)(void*, void*, void*, void*, void*, void*);
typedef int32_t (*iFpppppp_t)(void*, void*, void*, void*, void*, void*);
typedef void* (*pFpppppi_t)(void*, void*, void*, void*, void*, int32_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(xmlSetExternalEntityLoader, vFp_t) \
	GO(xmlParseDocument, iFp_t) \
	GO(__xmlGenericError, pFv_t) \
	GO(__xmlStructuredError, pFv_t) \
	GO(xmlGetExternalEntityLoader, pFv_t) \
	GO(xmlHashFree, vFpp_t) \
	GO(xmlSetGenericErrorFunc, vFpp_t) \
	GO(xmlSetStructuredErrorFunc, vFpp_t) \
	GO(xmlHashCopy, pFpp_t) \
	GO(xmlHashScan, vFppp_t) \
	GO(xmlHashScanFull, vFppp_t) \
	GO(xmlSchemaSetParserStructuredErrors, vFppp_t) \
	GO(xmlSchemaSetValidStructuredErrors, vFppp_t) \
	GO(xmlTextReaderSetErrorHandler, vFppp_t) \
	GO(xmlHashRemoveEntry, iFppp_t) \
	GO(xmlXPathRegisterFunc, iFppp_t) \
	GO(xmlNewCharEncodingHandler, pFppp_t) \
	GO(xmlSchemaSetParserErrors, vFpppp_t) \
	GO(xmlSchemaSetValidErrors, vFpppp_t) \
	GO(xmlHashRemoveEntry2, iFpppp_t) \
	GO(xmlHashUpdateEntry, iFpppp_t) \
	GO(xmlRegisterInputCallbacks, iFpppp_t) \
	GO(xmlRegisterOutputCallbacks, iFpppp_t) \
	GO(xmlTextWriterWriteFormatAttribute, iFpppV_t) \
	GO(xmlTextWriterWriteVFormatAttribute, iFpppA_t) \
	GO(xmlParserInputBufferCreateIO, pFpppi_t) \
	GO(xmlOutputBufferCreateIO, pFpppp_t) \
	GO(xmlHashRemoveEntry3, iFppppp_t) \
	GO(xmlHashUpdateEntry2, iFppppp_t) \
	GO(xmlSaveToIO, pFppppi_t) \
	GO(xmlHashScan3, vFpppppp_t) \
	GO(xmlHashScanFull3, vFpppppp_t) \
	GO(xmlHashUpdateEntry3, iFpppppp_t) \
	GO(xmlCreateIOParserCtxt, pFpppppi_t) \
	GO(xmlReaderForIO, pFpppppi_t)

#endif // __wrappedxml2TYPES_H_
