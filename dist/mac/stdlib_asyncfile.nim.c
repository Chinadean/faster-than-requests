/* Generated by Nim Compiler v1.4.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
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
typedef struct tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_FuturecolonObjectType___DytvWkqCHojL9aGfYktbFPw tyObject_FuturecolonObjectType___DytvWkqCHojL9aGfYktbFPw;
typedef struct tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA;
typedef struct RootObj RootObj;
typedef struct Exception Exception;
typedef struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_FutureBasecolonObjectType___NMMT5akQkfNlmjYrVF9a9bwA tyObject_FutureBasecolonObjectType___NMMT5akQkfNlmjYrVF9a9bwA;
typedef struct tyObject_CallbackList__tKSBWiaJMWD3JZxwqg7UFQ tyObject_CallbackList__tKSBWiaJMWD3JZxwqg7UFQ;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w {
int fd;
NI64 offset;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
struct RootObj {
TNimType* m_type;
};
struct tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA {
  RootObj Sup;
NI colonstate_;
NimStringDesc* readBuffer1;
NI size2;
tyObject_FuturecolonObjectType___DytvWkqCHojL9aGfYktbFPw* retFuture3;
tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w* f4;
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
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (int fd, void* ClE_0);
void* ClE_0;
} tyProc__kbFLS7lxxUPzrFcbZuGUzQ;
typedef N_CLOSURE_PTR(NIM_BOOL, TM__3Pfl7Yz4kHPpbtUoHRPC9aw_5) (int fd);
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;
struct tyObject_CallbackList__tKSBWiaJMWD3JZxwqg7UFQ {
tyProc__HzVCwACFYM9cx9aV62PdjtuA function;
tyObject_CallbackList__tKSBWiaJMWD3JZxwqg7UFQ* next;
};
struct tyObject_FutureBasecolonObjectType___NMMT5akQkfNlmjYrVF9a9bwA {
  RootObj Sup;
tyObject_CallbackList__tKSBWiaJMWD3JZxwqg7UFQ callbacks;
NIM_BOOL finished;
Exception* error;
NimStringDesc* errorStackTrace;
};
struct tyObject_FuturecolonObjectType___DytvWkqCHojL9aGfYktbFPw {
  tyObject_FutureBasecolonObjectType___NMMT5akQkfNlmjYrVF9a9bwA Sup;
NimStringDesc* value;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
static N_NIMCALL(void, Marker_tyRef__vnhJgWLKYp0PSzekvaMHEw)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(int, getPosixFlags__FSq1MzRWEW8zxQDQ7GeZbg)(tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__CWyPYlyH9a6rAuZckFyVxPA)(NI32 errorCode, NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__9bUWNxbcGnToMWA9b79aTXLIw)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w*, newAsyncFile__lnVLwRoFL9bRDTRoMuqVCaw)(int fd);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(void, register__LiJsPNTTSF22tfHWSDGxJQ)(int fd);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__sSFXSLqKZKDYE4YWvHjyWg)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(tyObject_FuturecolonObjectType___DytvWkqCHojL9aGfYktbFPw*, newFuture__0JOdLmTwOL3FpMJAn3k6Qg)(NimStringDesc* fromProc);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_CLOSURE(NIM_BOOL, cb__Yo0oJCJc9aO0I9aB607kSEvQ)(int fd, void* ClE_0);
N_LIB_PRIVATE N_NIMCALL(void, fail__sE9bB9bP7Et9ajfmLBG9cWkSSw)(tyObject_FuturecolonObjectType___DytvWkqCHojL9aGfYktbFPw* future, Exception* error);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, osErrorMsg__33xViSVWAmDrexoKkLfMhg)(NI32 errorCode);
N_LIB_PRIVATE N_NIMCALL(void, complete__emkcSSMulxV6plj59amRXdw)(tyObject_FuturecolonObjectType___DytvWkqCHojL9aGfYktbFPw* future, NimStringDesc* val);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, addRead__CQxK9bLAEEWCUluTXZIi9bnA_2)(int fd, tyProc__kbFLS7lxxUPzrFcbZuGUzQ cb);
N_LIB_PRIVATE N_NIMCALL(void, unregister__LiJsPNTTSF22tfHWSDGxJQ_2)(int fd);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__FOwUW0XSSxm8sZ1ubj9b52w_;
extern TNimType NTI__nlCscttRCss70IBTyuBqnA_;
extern TNimType NTI__Aav8dQoMlCFnZRxA0IhTHQ_;
N_LIB_PRIVATE TNimType NTI__vnhJgWLKYp0PSzekvaMHEw_;
extern TNimType NTI__ytyiCJqK439aF9cIibuRVpAg_;
N_LIB_PRIVATE TNimType NTI__ovVFCD1DtyiEVL86gOLWjA_;
extern TNimType NTI__xHTZrq9aYs6boc9bCba0JbpQ_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI__PGriAzqlEWabm3KuP9cPwnw_;
N_LIB_PRIVATE TNimType NTI__sSFXSLqKZKDYE4YWvHjyWg_;
STRING_LITERAL(TM__3Pfl7Yz4kHPpbtUoHRPC9aw_4, "asyncfile.read", 14);
extern TNimType NTI__9clYsYwyjCqe2PFTuCI3Ubg_;
extern TNimType NTI__BeJgrOdDsczOwEWOZbRfKA_;

/* section: NIM_merge_VARS */
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
static N_NIMCALL(void, Marker_tyRef__vnhJgWLKYp0PSzekvaMHEw)(void* p, NI op) {
	tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w* a;
	a = (tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w*)p;
}
N_LIB_PRIVATE N_NIMCALL(int, getPosixFlags__FSq1MzRWEW8zxQDQ7GeZbg)(tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode) {
	int result;
	result = (int)0;
	switch (mode) {
	case ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0):
	{
		result = O_RDONLY;
	}
	break;
	case ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 1):
	{
		result = (NI32)((NI32)(O_WRONLY | O_CREAT) | O_TRUNC);
	}
	break;
	case ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 4):
	{
		result = (NI32)((NI32)(O_WRONLY | O_CREAT) | O_APPEND);
	}
	break;
	case ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 2):
	{
		result = (NI32)((NI32)(O_RDWR | O_CREAT) | O_TRUNC);
	}
	break;
	case ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 3):
	{
		result = O_RDWR;
	}
	break;
	}
	result = (NI32)(result | O_NONBLOCK);
	return result;
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
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w*, newAsyncFile__lnVLwRoFL9bRDTRoMuqVCaw)(int fd) {
	tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w*)0;
	result = (tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w*) newObj((&NTI__vnhJgWLKYp0PSzekvaMHEw_), sizeof(tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w));
	(*result).fd = fd;
	register__LiJsPNTTSF22tfHWSDGxJQ(fd);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w*, openAsync__leDQjxVhreSWlV8zfXH9anA)(NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode) {
	tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w* result;
	int flags;
	NI32 perm;
	int fd;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w*)0;
	flags = getPosixFlags__FSq1MzRWEW8zxQDQ7GeZbg(mode);
	perm = (NI32)((NI32)((NI32)((NI32)(S_IRUSR | S_IWUSR) | S_IRGRP) | S_IWGRP) | S_IROTH);
	fd = open(nimToCStringConv(filename), flags, perm);
	{
		NI32 T5_;
		if (!(fd == ((NI32) -1))) goto LA3_;
		T5_ = (NI32)0;
		T5_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
		raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T5_, ((NimStringDesc*) NIM_NIL));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	result = newAsyncFile__lnVLwRoFL9bRDTRoMuqVCaw(fd);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_NIMCALL(void, Marker_tyRef__sSFXSLqKZKDYE4YWvHjyWg)(void* p, NI op) {
	tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA* a;
	a = (tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA*)p;
	nimGCvisit((void*)(*a).readBuffer1, op);
	nimGCvisit((void*)(*a).retFuture3, op);
	nimGCvisit((void*)(*a).f4, op);
}
N_LIB_PRIVATE N_CLOSURE(NIM_BOOL, cb__Yo0oJCJc9aO0I9aB607kSEvQ)(int fd, void* ClE_0) {
	NIM_BOOL result;
	tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA* colonenvP_;
	NI res;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	colonenvP_ = (tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA*) ClE_0;
	result = NIM_TRUE;
	res = read(fd, ((void*) ((&(*colonenvP_).readBuffer1->data[((NI) 0)]))), ((NI) (((int) ((*colonenvP_).size2)))));
	{
		NI32 lastError;
		if (!(res < ((NI) 0))) goto LA3_;
		lastError = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
		{
			tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* T9_;
			Exception* T10_;
			if (!!((lastError == EAGAIN))) goto LA7_;
			T9_ = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)0;
			T9_ = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*) newObj((&NTI__9clYsYwyjCqe2PFTuCI3Ubg_), sizeof(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA));
			(*T9_).Sup.Sup.Sup.m_type = (&NTI__BeJgrOdDsczOwEWOZbRfKA_);
			(*T9_).Sup.Sup.name = "OSError";
			(*T9_).Sup.Sup.message = osErrorMsg__33xViSVWAmDrexoKkLfMhg(lastError);
			(*T9_).Sup.Sup.parent = NIM_NIL;
			T10_ = (Exception*)0;
			T10_ = &T9_->Sup.Sup;
			fail__sE9bB9bP7Et9ajfmLBG9cWkSSw((*colonenvP_).retFuture3, T10_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		goto LA5_;
		LA7_: ;
		{
			result = NIM_FALSE;
		}
		LA5_: ;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(res == ((NI) 0))) goto LA13_;
		(*(*colonenvP_).f4).offset = lseek(fd, IL64(0), SEEK_CUR);
		complete__emkcSSMulxV6plj59amRXdw((*colonenvP_).retFuture3, ((NimStringDesc*) NIM_NIL));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA13_: ;
	{
		(*colonenvP_).readBuffer1 = setLengthStr((*colonenvP_).readBuffer1, ((NI) (res)));
		(*(*colonenvP_).f4).offset += res;
		complete__emkcSSMulxV6plj59amRXdw((*colonenvP_).retFuture3, (*colonenvP_).readBuffer1);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_FuturecolonObjectType___DytvWkqCHojL9aGfYktbFPw*, read__Pxh9c3co7yoSxJ9cj2BoeYBQ)(tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w* f, NI size) {
	tyObject_FuturecolonObjectType___DytvWkqCHojL9aGfYktbFPw* result;
	tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA* colonenv_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyObject_FuturecolonObjectType___DytvWkqCHojL9aGfYktbFPw*)0;
	colonenv_ = (tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA*)0;
	colonenv_ = (tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA*) newObj((&NTI__sSFXSLqKZKDYE4YWvHjyWg_), sizeof(tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA));
	(*colonenv_).Sup.m_type = (&NTI__ovVFCD1DtyiEVL86gOLWjA_);
	(*colonenv_).f4 = f;
	(*colonenv_).size2 = size;
	(*colonenv_).retFuture3 = newFuture__0JOdLmTwOL3FpMJAn3k6Qg(((NimStringDesc*) &TM__3Pfl7Yz4kHPpbtUoHRPC9aw_4));
	(*colonenv_).readBuffer1 = mnewString(((NI) ((*colonenv_).size2)));
	{
		tyProc__kbFLS7lxxUPzrFcbZuGUzQ T3_;
		NIM_BOOL T4_;
		tyProc__kbFLS7lxxUPzrFcbZuGUzQ T7_;
		nimZeroMem((void*)(&T3_), sizeof(tyProc__kbFLS7lxxUPzrFcbZuGUzQ));
		T3_.ClP_0 = cb__Yo0oJCJc9aO0I9aB607kSEvQ; T3_.ClE_0 = colonenv_;
		T4_ = (NIM_BOOL)0;
		T4_ = T3_.ClE_0? T3_.ClP_0((*(*colonenv_).f4).fd, T3_.ClE_0):((TM__3Pfl7Yz4kHPpbtUoHRPC9aw_5)(T3_.ClP_0))((*(*colonenv_).f4).fd);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T4_)) goto LA5_;
		nimZeroMem((void*)(&T7_), sizeof(tyProc__kbFLS7lxxUPzrFcbZuGUzQ));
		T7_.ClP_0 = cb__Yo0oJCJc9aO0I9aB607kSEvQ; T7_.ClE_0 = colonenv_;
		addRead__CQxK9bLAEEWCUluTXZIi9bnA_2((*(*colonenv_).f4).fd, T7_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA5_: ;
	result = (*colonenv_).retFuture3;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, close__OHqgTJqH9clr3JCrFesUlDQ)(tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w* f) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	unregister__LiJsPNTTSF22tfHWSDGxJQ_2((*f).fd);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		int T3_;
		NI32 T6_;
		T3_ = (int)0;
		T3_ = close((*f).fd);
		if (!(T3_ == ((NI32) -1))) goto LA4_;
		T6_ = (NI32)0;
		T6_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
		raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T6_, ((NimStringDesc*) NIM_NIL));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_asyncfileDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__3Pfl7Yz4kHPpbtUoHRPC9aw_2_2[2];
static TNimNode* TM__3Pfl7Yz4kHPpbtUoHRPC9aw_3_5[5];
static TNimNode TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[9];

/* section: NIM_merge_TYPE_INIT3 */
NTI__FOwUW0XSSxm8sZ1ubj9b52w_.size = sizeof(tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w);
NTI__FOwUW0XSSxm8sZ1ubj9b52w_.align = NIM_ALIGNOF(tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w);
NTI__FOwUW0XSSxm8sZ1ubj9b52w_.kind = 18;
NTI__FOwUW0XSSxm8sZ1ubj9b52w_.base = 0;
NTI__FOwUW0XSSxm8sZ1ubj9b52w_.flags = 3;
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_2_2[0] = &TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[1];
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[1].kind = 1;
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[1].offset = offsetof(tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w, fd);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[1].typ = (&NTI__nlCscttRCss70IBTyuBqnA_);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[1].name = "fd";
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_2_2[1] = &TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[2];
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[2].kind = 1;
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[2].offset = offsetof(tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w, offset);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[2].typ = (&NTI__Aav8dQoMlCFnZRxA0IhTHQ_);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[2].name = "offset";
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[0].len = 2; TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[0].kind = 2; TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[0].sons = &TM__3Pfl7Yz4kHPpbtUoHRPC9aw_2_2[0];
NTI__FOwUW0XSSxm8sZ1ubj9b52w_.node = &TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[0];
NTI__vnhJgWLKYp0PSzekvaMHEw_.size = sizeof(tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w*);
NTI__vnhJgWLKYp0PSzekvaMHEw_.align = NIM_ALIGNOF(tyObject_AsyncFilecolonObjectType___FOwUW0XSSxm8sZ1ubj9b52w*);
NTI__vnhJgWLKYp0PSzekvaMHEw_.kind = 22;
NTI__vnhJgWLKYp0PSzekvaMHEw_.base = (&NTI__FOwUW0XSSxm8sZ1ubj9b52w_);
NTI__vnhJgWLKYp0PSzekvaMHEw_.flags = 2;
NTI__vnhJgWLKYp0PSzekvaMHEw_.marker = Marker_tyRef__vnhJgWLKYp0PSzekvaMHEw;
NTI__ovVFCD1DtyiEVL86gOLWjA_.size = sizeof(tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA);
NTI__ovVFCD1DtyiEVL86gOLWjA_.align = NIM_ALIGNOF(tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA);
NTI__ovVFCD1DtyiEVL86gOLWjA_.kind = 17;
NTI__ovVFCD1DtyiEVL86gOLWjA_.base = (&NTI__ytyiCJqK439aF9cIibuRVpAg_);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_3_5[0] = &TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[4];
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[4].kind = 1;
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[4].offset = offsetof(tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA, colonstate_);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[4].typ = (&NTI__xHTZrq9aYs6boc9bCba0JbpQ_);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[4].name = ":state";
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_3_5[1] = &TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[5];
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[5].kind = 1;
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[5].offset = offsetof(tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA, readBuffer1);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[5].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[5].name = "readBuffer1";
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_3_5[2] = &TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[6];
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[6].kind = 1;
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[6].offset = offsetof(tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA, size2);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[6].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[6].name = "size2";
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_3_5[3] = &TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[7];
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[7].kind = 1;
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[7].offset = offsetof(tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA, retFuture3);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[7].typ = (&NTI__PGriAzqlEWabm3KuP9cPwnw_);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[7].name = "retFuture3";
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_3_5[4] = &TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[8];
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[8].kind = 1;
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[8].offset = offsetof(tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA, f4);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[8].typ = (&NTI__vnhJgWLKYp0PSzekvaMHEw_);
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[8].name = "f4";
TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[3].len = 5; TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[3].kind = 2; TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[3].sons = &TM__3Pfl7Yz4kHPpbtUoHRPC9aw_3_5[0];
NTI__ovVFCD1DtyiEVL86gOLWjA_.node = &TM__3Pfl7Yz4kHPpbtUoHRPC9aw_0[3];
NTI__sSFXSLqKZKDYE4YWvHjyWg_.size = sizeof(tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA*);
NTI__sSFXSLqKZKDYE4YWvHjyWg_.align = NIM_ALIGNOF(tyObject_Env_asyncfiledotnim_read___ovVFCD1DtyiEVL86gOLWjA*);
NTI__sSFXSLqKZKDYE4YWvHjyWg_.kind = 22;
NTI__sSFXSLqKZKDYE4YWvHjyWg_.base = (&NTI__ovVFCD1DtyiEVL86gOLWjA_);
NTI__sSFXSLqKZKDYE4YWvHjyWg_.marker = Marker_tyRef__sSFXSLqKZKDYE4YWvHjyWg;
}

