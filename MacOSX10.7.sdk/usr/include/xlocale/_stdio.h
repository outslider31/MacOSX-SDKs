/*
 * Copyright (c) 2005, 2009, 2010 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

#ifndef _XLOCALE__STDIO_H_
#define _XLOCALE__STDIO_H_

__BEGIN_DECLS

int	 fprintf_l(FILE * __restrict, locale_t, const char * __restrict, ...)
        __DARWIN_LDBL_COMPAT2(fprintf_l) __printflike(3, 4);
int	 fscanf_l(FILE * __restrict, locale_t, const char * __restrict, ...)
        __DARWIN_LDBL_COMPAT2(fscanf_l) __scanflike(3, 4);
int	 printf_l(locale_t, const char * __restrict, ...)
        __DARWIN_LDBL_COMPAT2(printf_l) __printflike(2, 3);
int	 scanf_l(locale_t, const char * __restrict, ...)
        __DARWIN_LDBL_COMPAT2(scanf_l) __scanflike(2, 3);
int	 sprintf_l(char * __restrict, locale_t, const char * __restrict, ...)
        __DARWIN_LDBL_COMPAT2(sprintf_l) __printflike(3, 4);
int	 sscanf_l(const char * __restrict, locale_t, const char * __restrict, ...) 
        __DARWIN_LDBL_COMPAT2(sscanf_l) __scanflike(3, 4);
int	 vfprintf_l(FILE * __restrict, locale_t, const char * __restrict, va_list)
        __DARWIN_LDBL_COMPAT2(vfprintf_l) __printflike(3, 0);
int	 vprintf_l(locale_t, const char * __restrict, va_list)
        __DARWIN_LDBL_COMPAT2(vprintf_l) __printflike(2, 0);
int	 vsprintf_l(char * __restrict, locale_t, const char * __restrict, va_list)
        __DARWIN_LDBL_COMPAT2(vsprintf_l) __printflike(3, 0);

#if __DARWIN_C_LEVEL >= 200112L
int	 snprintf_l(char * __restrict, size_t, locale_t, const char * __restrict, ...)
        __DARWIN_LDBL_COMPAT2(snprintf_l) __printflike(4, 5);
int	 vfscanf_l(FILE * __restrict, locale_t, const char * __restrict, va_list)
        __DARWIN_LDBL_COMPAT2(vfscanf_l) __scanflike(3, 0);
int	 vscanf_l(locale_t, const char * __restrict, va_list)
        __DARWIN_LDBL_COMPAT2(vscanf_l) __scanflike(2, 0);
int	 vsnprintf_l(char * __restrict, size_t, locale_t, const char * __restrict, va_list)
        __DARWIN_LDBL_COMPAT2(vsnprintf_l) __printflike(4, 0);
int	 vsscanf_l(const char * __restrict, locale_t, const char * __restrict, va_list)
        __DARWIN_LDBL_COMPAT2(vsscanf_l) __scanflike(3, 0);
#endif

#if __DARWIN_C_LEVEL >= 200809L
int	 dprintf_l(int, locale_t, const char * __restrict, ...)
		__DARWIN_LDBL_COMPAT2(dprintf_l) __printflike(3, 4) __OSX_AVAILABLE_STARTING(__MAC_10_7, __IPHONE_4_3);
int	 vdprintf_l(int, locale_t, const char * __restrict, va_list)
        __DARWIN_LDBL_COMPAT2(vdprintf_l) __printflike(3, 0) __OSX_AVAILABLE_STARTING(__MAC_10_7, __IPHONE_4_3);
#endif


#if __DARWIN_C_LEVEL >= __DARWIN_C_FULL
int	 asprintf_l(char **, locale_t, const char *, ...)
        __DARWIN_LDBL_COMPAT2(asprintf_l) __printflike(3, 4);
int	 vasprintf_l(char **, locale_t, const char *, va_list)
        __DARWIN_LDBL_COMPAT2(vasprintf_l) __printflike(3, 0);
#endif

__END_DECLS


#endif /* _XLOCALE__STDIO_H_ */
