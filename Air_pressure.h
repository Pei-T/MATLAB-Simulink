/*
 * MATLAB Compiler: 7.0 (R2018b)
 * Date: Thu Mar 14 11:04:37 2019
 * Arguments:
 * "-B""macro_default""-W""lib:Air_pressure""-T""link:lib""-d""F:\MatLab\pressur
 * e\for_testing""-v""F:\MatLab\Air_pressure.m"
 */

#ifndef __Air_pressure_h
#define __Air_pressure_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#ifdef __cplusplus
extern "C" {
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_Air_pressure_C_API 
#define LIB_Air_pressure_C_API /* No special import/export declaration */
#endif

/* GENERAL LIBRARY FUNCTIONS -- START */

extern LIB_Air_pressure_C_API 
bool MW_CALL_CONV Air_pressureInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_Air_pressure_C_API 
bool MW_CALL_CONV Air_pressureInitialize(void);

extern LIB_Air_pressure_C_API 
void MW_CALL_CONV Air_pressureTerminate(void);

extern LIB_Air_pressure_C_API 
void MW_CALL_CONV Air_pressurePrintStackTrace(void);

/* GENERAL LIBRARY FUNCTIONS -- END */

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_Air_pressure_C_API 
bool MW_CALL_CONV mlxAir_pressure(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

/* C INTERFACE -- MLF WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_Air_pressure_C_API bool MW_CALL_CONV mlfAir_pressure(int nargout, mxArray** k, mxArray* x);

#ifdef __cplusplus
}
#endif
/* C INTERFACE -- MLF WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

#endif
