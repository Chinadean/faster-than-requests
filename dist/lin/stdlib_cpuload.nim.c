/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <stdio.h>
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;

/* section: NIM_merge_TYPES */
typedef NU8 tyEnum_ThreadPoolAdvice__vD9cAMuSmfH29a9al5Q9cUZCig;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
struct tyObject_ThreadPoolState__jN9benzGjAA9bryIHC1FGnZA {
NI calls;
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__gq12VLhVO0NBzUTnGgz4nw)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(void, close__fU6ZlJAtQ9bre04EDZLdGsA)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NI, ncpicountProcessors)(void);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);

/* section: NIM_merge_DATA */
STRING_LITERAL(TM__CFWzmO8DEHxStvjr8GyqGg_2, "/proc/loadavg", 13);

/* section: NIM_merge_VARS */
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_ThreadPoolAdvice__vD9cAMuSmfH29a9al5Q9cUZCig, advice__C0O6faaUOyXrzDKc9bL5ErA)(tyObject_ThreadPoolState__jN9benzGjAA9bryIHC1FGnZA* s) {
	tyEnum_ThreadPoolAdvice__vD9cAMuSmfH29a9al5Q9cUZCig result;
	FILE* f;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyEnum_ThreadPoolAdvice__vD9cAMuSmfH29a9al5Q9cUZCig)0;
	f = (FILE*)0;
	{
		NIM_BOOL T3_;
		NF b;
		NI busy;
		NI total;
		NI cpus;
		T3_ = (NIM_BOOL)0;
		T3_ = open__gq12VLhVO0NBzUTnGgz4nw(&f, ((NimStringDesc*) &TM__CFWzmO8DEHxStvjr8GyqGg_2), ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		b = (NF)0;
		busy = (NI)0;
		total = (NI)0;
		fscanf(f, "%lf %lf %lf %ld/%ld", (&b), (&b), (&b), (&busy), (&total));
		close__fU6ZlJAtQ9bre04EDZLdGsA(f);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		cpus = ncpicountProcessors();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		{
			if (!((NI)(busy - ((NI) 1)) < cpus)) goto LA8_;
			result = ((tyEnum_ThreadPoolAdvice__vD9cAMuSmfH29a9al5Q9cUZCig) 1);
		}
		goto LA6_;
		LA8_: ;
		{
			if (!((NI)(cpus * ((NI) 2)) <= (NI)(busy - ((NI) 1)))) goto LA11_;
			result = ((tyEnum_ThreadPoolAdvice__vD9cAMuSmfH29a9al5Q9cUZCig) 2);
		}
		goto LA6_;
		LA11_: ;
		{
			result = ((tyEnum_ThreadPoolAdvice__vD9cAMuSmfH29a9al5Q9cUZCig) 0);
		}
		LA6_: ;
	}
	goto LA1_;
	LA4_: ;
	{
		result = ((tyEnum_ThreadPoolAdvice__vD9cAMuSmfH29a9al5Q9cUZCig) 0);
	}
	LA1_: ;
	(*s).calls += ((NI) 1);
	}BeforeRet_: ;
	return result;
}
