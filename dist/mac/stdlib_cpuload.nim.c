/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct tyObject_ThreadPoolState__jN9benzGjAA9bryIHC1FGnZA tyObject_ThreadPoolState__jN9benzGjAA9bryIHC1FGnZA;

/* section: NIM_merge_TYPES */
typedef NU8 tyEnum_ThreadPoolAdvice__vD9cAMuSmfH29a9al5Q9cUZCig;
struct tyObject_ThreadPoolState__jN9benzGjAA9bryIHC1FGnZA {
NI calls;
};

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(tyEnum_ThreadPoolAdvice__vD9cAMuSmfH29a9al5Q9cUZCig, advice__C0O6faaUOyXrzDKc9bL5ErA)(tyObject_ThreadPoolState__jN9benzGjAA9bryIHC1FGnZA* s) {
	tyEnum_ThreadPoolAdvice__vD9cAMuSmfH29a9al5Q9cUZCig result;
	result = (tyEnum_ThreadPoolAdvice__vD9cAMuSmfH29a9al5Q9cUZCig)0;
	result = ((tyEnum_ThreadPoolAdvice__vD9cAMuSmfH29a9al5Q9cUZCig) 0);
	(*s).calls += ((NI) 1);
	return result;
}
