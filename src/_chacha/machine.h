/* machine.h */

/*
 * This file is included by 'portable.h'. It allows to override
 * the default macros for specific platforms. Please carefully check
 * the machine code generated by your compiler (with optimisations
 * turned on) before deciding to edit this file.
 */

/* ------------------------------------------------------------------------- */

#if (defined(CHACHA_DEFAULT_ROT) && !defined(CHACHA_MACHINE_ROT))

#define CHACHA_MACHINE_ROT

#if (defined(WIN32) && defined(_MSC_VER))

#undef ROTL32
#undef ROTR32
#undef ROTL64
#undef ROTR64

#include <stdlib.h>

#define ROTL32(v, n) _lrotl(v, n)
#define ROTR32(v, n) _lrotr(v, n)
#define ROTL64(v, n) _rotl64(v, n)
#define ROTR64(v, n) _rotr64(v, n)

#endif

#endif

/* ------------------------------------------------------------------------- */

#if (defined(CHACHA_DEFAULT_SWAP) && !defined(CHACHA_MACHINE_SWAP))

#define CHACHA_MACHINE_SWAP

/*
 * If you want to overwrite the default swap macros, put it here. And so on.
 */

#endif

/* ------------------------------------------------------------------------- */
