
/*  co.h was generated by yup.py (yupp) 1.0b2
    out of co.yu-h 
 *//**
 *  \file  co.h (co.yu-h)
 *  \brief  Coroutines declarations.
 *  \author  Vitaly Kravtsov (in4lio@gmail.com)
 *  \copyright  See the LICENSE file.
 */

#ifndef CO_H
#define CO_H

#ifdef  CO_IMPLEMENT
#define CO_EXT
#define CO_EXT_INIT( dec, init ) \
	dec = init
#define CO_EXT_C
#define CO_EXT_C_INIT( dec, init ) \
	dec = init
#define CO_INL
#else
#define CO_EXT extern
#define CO_EXT_INIT( dec, init ) \
	extern dec
#ifdef __cplusplus
#define CO_C "C"
#else
#define CO_C
#endif
#define CO_EXT_C extern CO_C
#define CO_EXT_C_INIT( dec, init ) \
	extern CO_C dec
#if __GNUC__ && !__GNUC_STDC_INLINE__
#define CO_INL extern inline
#else
#define CO_INL inline
#endif
#endif

#ifndef COMMA
#define COMMA   ,
#endif

#include "coroutine.h"

/** "A" coroutine local context. */
CO_EXT_INIT( CORO_CONTEXT( A ), NULL );
/** "A" coroutine alive flag. */
CO_EXT_INIT( int A_alive, CO_SKIP );
/** "A" coroutine. */
CO_EXT CORO_DEFINE( A );
/** Initialize "A" coroutine. */
CO_EXT int A_init( void );
/** Uninitialize "A" coroutine. */
CO_EXT void A_uninit( void );
/** "B" coroutine local context. */
CO_EXT_INIT( CORO_CONTEXT( B ), NULL );
/** "B" coroutine alive flag. */
CO_EXT_INIT( int B_alive, CO_SKIP );
/** "B" coroutine. */
CO_EXT CORO_DEFINE( B );
/** Initialize "B" coroutine. */
CO_EXT int B_init( void );
/** Uninitialize "B" coroutine. */
CO_EXT void B_uninit( void );
/** "C" coroutine local context. */
CO_EXT_INIT( CORO_CONTEXT( C ), NULL );
/** "C" coroutine alive flag. */
CO_EXT_INIT( int C_alive, CO_SKIP );
/** "C" coroutine. */
CO_EXT CORO_DEFINE( C );
/** Initialize "C" coroutine. */
CO_EXT int C_init( void );
/** Uninitialize "C" coroutine. */
CO_EXT void C_uninit( void );

#undef CO_EXT
#undef CO_EXT_INIT
#undef CO_EXT_C
#undef CO_EXT_C_INIT
#undef CO_INL
#undef CO_C
#endif

