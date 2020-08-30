/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <dlfcn.h>
#include <string.h>
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg;
typedef struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
NI32 errorCode;
};
struct tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg {
  tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA Sup;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, newSeq__q7W9bxIQ7BrFLngLO9cYelsA)(NI len);
N_LIB_PRIVATE N_NIMCALL(void, libCandidates__TEY9aqiaMWVK2l0NzZy7BwQ)(NimStringDesc* s, tySequence__sM4lkSb7zS6F7OVMvW9cffQ** dest);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start, NI last);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__2yh9cer0ymNRHlOOg8P7IuA)(NimStringDesc* s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__iGg0RIKceRvsmvq8FUHOEw)(NimStringDesc* s, NI first);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void*, loadLib__Yq5XYz2ycX5V5B9bUM4Uyiw)(NimStringDesc* path, NIM_BOOL globalSymbols);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);

/* section: NIM_merge_DATA */
extern TNimType NTI__sM4lkSb7zS6F7OVMvW9cffQ_;
extern TNimType NTI__HV2B9a6TW6WPpQna2mQFeQQ_;
extern TNimType NTI__x1muge9crz9aAVqWWUrEL9aXg_;
STRING_LITERAL(TM__Vbi6rBBOqdMySprhH3iUcg_2, "could not find symbol: ", 23);

/* section: NIM_merge_VARS */
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(void*, symAddr__ALH9bdNwXEzg7MPq4PA9csvw)(void* lib, NCSTRING name) {
	void* result;
	result = (void*)0;
	result = dlsym(lib, name);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void*, loadLib__3W0xEugBG13TxVu4hk9b9b5g)(void) {
	void* result;
	result = (void*)0;
	result = dlopen(NIM_NIL, RTLD_NOW);
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		void* T5_;
		void* T6_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*dest).data[(*dest).Sup.len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((*src).data));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, libCandidates__TEY9aqiaMWVK2l0NzZy7BwQ)(NimStringDesc* s, tySequence__sM4lkSb7zS6F7OVMvW9cffQ** dest) {
	NI le;
	NI ri;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	le = nsuFindChar(s, 40, ((NI) 0), ((NI) 0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	ri = nsuFindChar(s, 41, ((NI) ((NI)(le + ((NI) 1)))), ((NI) 0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NIM_BOOL T3_;
		NimStringDesc* prefix;
		NimStringDesc* suffix;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= le);
		if (!(T3_)) goto LA4_;
		T3_ = (le < ri);
		LA4_: ;
		if (!T3_) goto LA5_;
		prefix = substr__2yh9cer0ymNRHlOOg8P7IuA(s, ((NI) 0), (NI)(le - ((NI) 1)));
		suffix = substr__iGg0RIKceRvsmvq8FUHOEw(s, (NI)(ri + ((NI) 1)));
		{
			NimStringDesc* middle;
			NimStringDesc* colontmp_;
			NI lastX60gensym26_;
			NI splitsX60gensym26_;
			middle = (NimStringDesc*)0;
			colontmp_ = (NimStringDesc*)0;
			colontmp_ = substr__2yh9cer0ymNRHlOOg8P7IuA(s, (NI)(le + ((NI) 1)), (NI)(ri - ((NI) 1)));
			lastX60gensym26_ = ((NI) 0);
			splitsX60gensym26_ = ((NI) -1);
			{
				while (1) {
					NI firstX60gensym26_;
					NimStringDesc* T18_;
					if (!(lastX60gensym26_ <= (colontmp_ ? colontmp_->Sup.len : 0))) goto LA9;
					firstX60gensym26_ = lastX60gensym26_;
					{
						while (1) {
							NIM_BOOL T12_;
							T12_ = (NIM_BOOL)0;
							T12_ = (lastX60gensym26_ < (colontmp_ ? colontmp_->Sup.len : 0));
							if (!(T12_)) goto LA13_;
							T12_ = !(((NU8)(colontmp_->data[lastX60gensym26_]) == (NU8)(124)));
							LA13_: ;
							if (!T12_) goto LA11;
							lastX60gensym26_ += ((NI) 1);
						} LA11: ;
					}
					{
						if (!(splitsX60gensym26_ == ((NI) 0))) goto LA16_;
						lastX60gensym26_ = (colontmp_ ? colontmp_->Sup.len : 0);
					}
					LA16_: ;
					middle = substr__2yh9cer0ymNRHlOOg8P7IuA(colontmp_, firstX60gensym26_, (NI)(lastX60gensym26_ - ((NI) 1)));
					T18_ = (NimStringDesc*)0;
					T18_ = rawNewString((prefix ? prefix->Sup.len : 0) + (middle ? middle->Sup.len : 0) + (suffix ? suffix->Sup.len : 0) + 0);
appendString(T18_, prefix);
appendString(T18_, middle);
appendString(T18_, suffix);
					libCandidates__TEY9aqiaMWVK2l0NzZy7BwQ(T18_, dest);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					{
						if (!(splitsX60gensym26_ == ((NI) 0))) goto LA21_;
						goto LA8;
					}
					LA21_: ;
					splitsX60gensym26_ -= ((NI) 1);
					lastX60gensym26_ += ((NI) 1);
				} LA9: ;
			} LA8: ;
		}
	}
	goto LA1_;
	LA5_: ;
	{
		NI T24_;
		(*dest) = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV3((TGenericSeq*)((*dest)), (&NTI__sM4lkSb7zS6F7OVMvW9cffQ_));
		T24_ = (*dest)->Sup.len++;
		(*dest)->data[T24_] = copyString(s);
	}
	LA1_: ;
	}BeforeRet_: ;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void*, loadLib__Yq5XYz2ycX5V5B9bUM4Uyiw)(NimStringDesc* path, NIM_BOOL globalSymbols) {
	void* result;
	NI32 flags;
	result = (void*)0;
	{
		if (!globalSymbols) goto LA3_;
		flags = (NI32)(RTLD_NOW | RTLD_GLOBAL);
	}
	goto LA1_;
	LA3_: ;
	{
		flags = RTLD_NOW;
	}
	LA1_: ;
	result = dlopen(nimToCStringConv(path), flags);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void*, loadLibPattern__b9aH5C9aWbfFKSp3nIx1lqTA)(NimStringDesc* pattern, NIM_BOOL globalSymbols) {
	void* result;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* candidates;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (void*)0;
	candidates = newSeq__q7W9bxIQ7BrFLngLO9cYelsA(((NI) 0));
	libCandidates__TEY9aqiaMWVK2l0NzZy7BwQ(pattern, (&candidates));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NimStringDesc** c;
		NI i;
		NI L;
		NI T2_;
		c = (NimStringDesc**)0;
		i = ((NI) 0);
		T2_ = (candidates ? candidates->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i < L)) goto LA4;
				c = (&candidates->data[i]);
				result = loadLib__Yq5XYz2ycX5V5B9bUM4Uyiw((*c), globalSymbols);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				{
					if (!!((result == 0))) goto LA7_;
					goto LA1;
				}
				LA7_: ;
				i += ((NI) 1);
			} LA4: ;
		}
	} LA1: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NOINLINE(void, raiseInvalidLibrary__TnaNIb4lz2PqhpvzfjxuWw)(NCSTRING name) {
	tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg* T1_;
	NimStringDesc* T2_;
	NimStringDesc* T3_;
{	T1_ = (tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg*)0;
	T1_ = (tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg*) newObj((&NTI__HV2B9a6TW6WPpQna2mQFeQQ_), sizeof(tyObject_LibraryError__x1muge9crz9aAVqWWUrEL9aXg));
	(*T1_).Sup.Sup.Sup.Sup.m_type = (&NTI__x1muge9crz9aAVqWWUrEL9aXg_);
	(*T1_).Sup.Sup.Sup.name = "LibraryError";
	T2_ = (NimStringDesc*)0;
	T3_ = (NimStringDesc*)0;
	T3_ = cstrToNimstr(name);
	T2_ = rawNewString((T3_ ? T3_->Sup.len : 0) + 23);
appendString(T2_, ((NimStringDesc*) &TM__Vbi6rBBOqdMySprhH3iUcg_2));
appendString(T2_, T3_);
	(*T1_).Sup.Sup.Sup.message = T2_;
	(*T1_).Sup.Sup.Sup.parent = NIM_NIL;
	raiseExceptionEx((Exception*)T1_, "LibraryError", "raiseInvalidLibrary", "dynlib.nim", 75);
	goto BeforeRet_;
	}BeforeRet_: ;
}
