/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <sys/socket.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>
#include <netinet/in.h>
#include <sys/select.h>
#include <time.h>
#include <sys/types.h>
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
typedef struct tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__9apztJSmgERYU8fZOjI4pOg tySequence__9apztJSmgERYU8fZOjI4pOg;

/* section: NIM_merge_TYPES */
typedef NU8 tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw;
typedef NU8 tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg;
struct tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ {
tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg val;
NIM_BOOL has;
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
typedef NIM_CHAR tyArray__dTlC27m9c9aWd5dvuePYanug[256];

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__9apztJSmgERYU8fZOjI4pOg {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(int, toInt__na0alpTcWAzTnn2v04w1CQ)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain);
N_LIB_PRIVATE N_NIMCALL(int, toInt__AuveeRAdmuTXERHtCv4MPg)(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw typ);
N_LIB_PRIVATE N_NIMCALL(int, toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ)(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg p);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___RkX9btpg5sQIaP8yYXB6tbA)(NU64 x);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__CWyPYlyH9a6rAuZckFyVxPA)(NI32 errorCode, NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__9bUWNxbcGnToMWA9b79aTXLIw)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, some__gDZZCqU2e9asjnz7Ee0TNwwoptions)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg val);
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, none__lifxITt9cocI1piX9abkoJ6woptions)(void);
N_LIB_PRIVATE N_NIMCALL(int, createNativeSocket__XMhukDsWurFLge2YkET1SQ)(int domain, int sockType, int protocol, NIM_BOOL inheritable);
static N_INLINE(NIM_BOOL, setInheritable__dNsSmrKPL29c9c9acyIgu5J2wnativesockets)(int s, NIM_BOOL inheritable);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setInheritable__avyDiy1HdQrfaD3Ql9b63EQ)(int f, NIM_BOOL inheritable);
N_LIB_PRIVATE N_NIMCALL(void, close__8c1w8B7fpSuB4Dgr5LHVJA)(int socket);
N_LIB_PRIVATE N_NIMCALL(struct timeval, timeValFromMilliseconds__OtKozLj4h73UWNus5W4NYA)(NI timeout);
N_LIB_PRIVATE N_NIMCALL(void, createFdSet__qeAKZQwZIp32QbFZfozb3w)(fd_set* fd, tySequence__9apztJSmgERYU8fZOjI4pOg* s, NI* m);
N_LIB_PRIVATE N_NIMCALL(void, pruneSocketSet__DzCd1luyXumO9c9aKDjkCMAQ)(tySequence__9apztJSmgERYU8fZOjI4pOg** s, fd_set* fd);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, setLengthSeqV2)(TGenericSeq* s, TNimType* typ, NI newLen);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__Q79bEtFARvq0ekDNtvj3Vqg_;
N_LIB_PRIVATE TNimType NTI__NQT1bItGG2X9byGdrWX7ujw_;
N_LIB_PRIVATE TNimType NTI__dqJ1OqRGclxIMMdSLRzzXg_;
extern TNimType NTI__9apztJSmgERYU8fZOjI4pOg_;

/* section: NIM_merge_VARS */
N_LIB_PRIVATE NIM_CONST int osInvalidSocket__voz9aUXu8jtRbvGZZJHNE8w = ((int) -1);
N_LIB_PRIVATE int nativeAfInet__rQwsjQjVqXvdaL9aZofzWwg;
N_LIB_PRIVATE int nativeAfInet6__Da6PongZL9aJxBrf7qeBmfA;
N_LIB_PRIVATE int nativeAfUnix__F0RRmJ8JjfNr6yLSNEn9abA;
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(void, close__8c1w8B7fpSuB4Dgr5LHVJA)(int socket) {
	int T1_;
	T1_ = (int)0;
	T1_ = close(socket);
	(void)(T1_);
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw, toSockType__6alUTTXG6jHTyH82e9a1JDw)(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol) {
	tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw result;
	result = (tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw)0;
	switch (protocol) {
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 6):
	{
		result = ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 1);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 17):
	{
		result = ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 2);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 18):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 19):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 20):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 21):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 22):
	{
		result = ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 3);
	}
	break;
	}
	return result;
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(int, toInt__na0alpTcWAzTnn2v04w1CQ)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain) {
	int result;
	result = (int)0;
	switch (domain) {
	case ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 0):
	{
		result = AF_UNSPEC;
	}
	break;
	case ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 1):
	{
		result = AF_UNIX;
	}
	break;
	case ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 2):
	{
		result = AF_INET;
	}
	break;
	case ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 30):
	{
		result = AF_INET6;
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, toInt__AuveeRAdmuTXERHtCv4MPg)(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw typ) {
	int result;
	result = (int)0;
	switch (typ) {
	case ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 1):
	{
		result = SOCK_STREAM;
	}
	break;
	case ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 2):
	{
		result = SOCK_DGRAM;
	}
	break;
	case ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 5):
	{
		result = SOCK_SEQPACKET;
	}
	break;
	case ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 3):
	{
		result = SOCK_RAW;
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ)(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg p) {
	int result;
	result = (int)0;
	switch (p) {
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 6):
	{
		result = IPPROTO_TCP;
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 17):
	{
		result = IPPROTO_UDP;
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 18):
	{
		result = IPPROTO_IP;
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 19):
	{
		result = IPPROTO_IPV6;
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 20):
	{
		result = IPPROTO_RAW;
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 21):
	{
		result = IPPROTO_ICMP;
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 22):
	{
		result = IPPROTO_ICMPV6;
	}
	break;
	}
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
N_LIB_PRIVATE N_NIMCALL(struct addrinfo*, getAddrInfo__ANf7QnbfE8nyIlFuWroDcQ)(NimStringDesc* address, NU16 port, tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol) {
	struct addrinfo* result;
	struct addrinfo hints;
	int T1_;
	int T2_;
	int T3_;
	NimStringDesc* socketPort;
	int gaiResult;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (struct addrinfo*)0;
	nimZeroMem((void*)(&hints), sizeof(struct addrinfo));
	result = NIM_NIL;
	T1_ = (int)0;
	T1_ = toInt__na0alpTcWAzTnn2v04w1CQ(domain);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	hints.ai_family = T1_;
	T2_ = (int)0;
	T2_ = toInt__AuveeRAdmuTXERHtCv4MPg(sockType);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	hints.ai_socktype = T2_;
	T3_ = (int)0;
	T3_ = toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ(protocol);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	hints.ai_protocol = T3_;
	{
		if (!(domain == ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 30))) goto LA6_;
		hints.ai_flags = AI_V4MAPPED;
	}
	LA6_: ;
	{
		if (!(sockType == ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 3))) goto LA10_;
		socketPort = ((NimStringDesc*) NIM_NIL);
	}
	goto LA8_;
	LA10_: ;
	{
		socketPort = dollar___RkX9btpg5sQIaP8yYXB6tbA(port);
	}
	LA8_: ;
	gaiResult = getaddrinfo(nimToCStringConv(address), nimToCStringConv(socketPort), (&hints), &result);
	{
		NI32 T17_;
		NCSTRING T18_;
		NimStringDesc* T19_;
		if (!!((gaiResult == ((NI32) 0)))) goto LA15_;
		T17_ = (NI32)0;
		T17_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T18_ = (NCSTRING)0;
		T18_ = (char *)gai_strerror(gaiResult);
		T19_ = (NimStringDesc*)0;
		T19_ = cstrToNimstr(T18_);
		raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T17_, T19_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA15_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, some__gDZZCqU2e9asjnz7Ee0TNwwoptions)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg val) {
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	result.has = NIM_TRUE;
	result.val = val;
	return result;
}
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, none__lifxITt9cocI1piX9abkoJ6woptions)(void) {
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, toKnownDomain__RQ9bFvLg4dpjf7aRPA8ID9bg)(int family) {
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	{
		if (!(family == AF_UNSPEC)) goto LA3_;
		result = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 0));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(family == AF_UNIX)) goto LA6_;
		result = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA6_: ;
	{
		if (!(family == AF_INET)) goto LA9_;
		result = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 2));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA9_: ;
	{
		if (!(family == AF_INET6)) goto LA12_;
		result = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 30));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA12_: ;
	{
		result = none__lifxITt9cocI1piX9abkoJ6woptions();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL, setInheritable__dNsSmrKPL29c9c9acyIgu5J2wnativesockets)(int s, NIM_BOOL inheritable) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	result = setInheritable__avyDiy1HdQrfaD3Ql9b63EQ(s, inheritable);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, createNativeSocket__XMhukDsWurFLge2YkET1SQ)(int domain, int sockType, int protocol, NIM_BOOL inheritable) {
	int result;
	int sockType_2;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (int)0;
	sockType_2 = sockType;
	result = socket(domain, sockType_2, protocol);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = setInheritable__dNsSmrKPL29c9c9acyIgu5J2wnativesockets(result, inheritable);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T3_)) goto LA4_;
		close__8c1w8B7fpSuB4Dgr5LHVJA(result);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result = osInvalidSocket__voz9aUXu8jtRbvGZZJHNE8w;
		goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, createNativeSocket__F1LPwUDx07eMGH1vFNDzcw)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol, NIM_BOOL inheritable) {
	int result;
	int T1_;
	int T2_;
	int T3_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (int)0;
	T1_ = (int)0;
	T1_ = toInt__na0alpTcWAzTnn2v04w1CQ(domain);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (int)0;
	T2_ = toInt__AuveeRAdmuTXERHtCv4MPg(sockType);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T3_ = (int)0;
	T3_ = toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ(protocol);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = createNativeSocket__XMhukDsWurFLge2YkET1SQ(T1_, T2_, T3_, inheritable);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, setSockOptInt__EjxaD4yB3b9a9anuNz5h25Og)(int socket, NI level, NI optname, NI optval) {
	int value;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	value = ((int) (optval));
	{
		int T3_;
		NI32 T6_;
		T3_ = (int)0;
		T3_ = setsockopt(socket, ((int) (level)), ((int) (optname)), ((void*) ((&value))), ((socklen_t) 4));
		if (!(T3_ < ((NI32) 0))) goto LA4_;
		T6_ = (NI32)0;
		T6_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T6_, ((NimStringDesc*) NIM_NIL));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(struct timeval, timeValFromMilliseconds__OtKozLj4h73UWNus5W4NYA)(NI timeout) {
	struct timeval result;
	nimZeroMem((void*)(&result), sizeof(struct timeval));
	{
		NI seconds;
		if (!!((timeout == ((NI) -1)))) goto LA3_;
		seconds = (NI)(timeout / ((NI) 1000));
		result.tv_sec = seconds;
		result.tv_usec = ((suseconds_t) ((NI)((NI)(timeout - (NI)(seconds * ((NI) 1000))) * ((NI) 1000))));
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, createFdSet__qeAKZQwZIp32QbFZfozb3w)(fd_set* fd, tySequence__9apztJSmgERYU8fZOjI4pOg* s, NI* m) {
	FD_ZERO(fd);
	{
		int* i;
		NI i_2;
		NI L;
		NI T2_;
		i = (int*)0;
		i_2 = ((NI) 0);
		T2_ = (s ? s->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i_2 < L)) goto LA4;
				i = (&s->data[i_2]);
				(*m) = (((*m) >= ((NI) ((*i)))) ? (*m) : ((NI) ((*i))));
				FD_SET((*i), fd);
				i_2 += ((NI) 1);
			} LA4: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, pruneSocketSet__DzCd1luyXumO9c9aKDjkCMAQ)(tySequence__9apztJSmgERYU8fZOjI4pOg** s, fd_set* fd) {
	NI i;
	NI L;
	NI T1_;
	i = ((NI) 0);
	T1_ = ((*s) ? (*s)->Sup.len : 0);
	L = T1_;
	{
		while (1) {
			if (!(i < L)) goto LA3;
			{
				int T6_;
				T6_ = (int)0;
				T6_ = FD_ISSET((*s)->data[i], fd);
				if (!(T6_ == ((NI32) 0))) goto LA7_;
				(*s)->data[i] = (*s)->data[(NI)(L - ((NI) 1))];
				L -= ((NI) 1);
			}
			goto LA4_;
			LA7_: ;
			{
				i += ((NI) 1);
			}
			LA4_: ;
		} LA3: ;
	}
	(*s) = (tySequence__9apztJSmgERYU8fZOjI4pOg*) setLengthSeqV2(&((*s))->Sup, (&NTI__9apztJSmgERYU8fZOjI4pOg_), ((NI) (L)));
}
N_LIB_PRIVATE N_NIMCALL(NI, selectRead__hYdMbc9crqOqsDFcxhERoLA)(tySequence__9apztJSmgERYU8fZOjI4pOg** readfds, NI timeout) {
	NI result;
	struct timeval tv;
	fd_set rd;
	NI m;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	tv = timeValFromMilliseconds__OtKozLj4h73UWNus5W4NYA(timeout);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimZeroMem((void*)(&rd), sizeof(fd_set));
	m = ((NI) 0);
	createFdSet__qeAKZQwZIp32QbFZfozb3w((&rd), (*readfds), (&m));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		int T5_;
		if (!!((timeout == ((NI) -1)))) goto LA3_;
		T5_ = (int)0;
		T5_ = select(((int) ((NI)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, (&tv));
		result = ((NI) (T5_));
	}
	goto LA1_;
	LA3_: ;
	{
		int T7_;
		T7_ = (int)0;
		T7_ = select(((int) ((NI)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, NIM_NIL);
		result = ((NI) (T7_));
	}
	LA1_: ;
	pruneSocketSet__DzCd1luyXumO9c9aKDjkCMAQ(readfds, (&rd));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_nativesocketsInit000)(void) {
{
	nativeAfInet__rQwsjQjVqXvdaL9aZofzWwg = AF_INET;
	nativeAfInet6__Da6PongZL9aJxBrf7qeBmfA = AF_INET6;
	nativeAfUnix__F0RRmJ8JjfNr6yLSNEn9abA = AF_UNIX;
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_nativesocketsDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__f9bP3LqjpgpB9cXL8Nnak7tQ_2_4[4];
NI TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4;
static char* NIM_CONST TM__f9bP3LqjpgpB9cXL8Nnak7tQ_3[4] = {
"AF_UNSPEC", 
"AF_UNIX", 
"AF_INET", 
"AF_INET6"};
static TNimNode* TM__f9bP3LqjpgpB9cXL8Nnak7tQ_5_4[4];
NI TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7;
static char* NIM_CONST TM__f9bP3LqjpgpB9cXL8Nnak7tQ_6[4] = {
"SOCK_STREAM", 
"SOCK_DGRAM", 
"SOCK_RAW", 
"SOCK_SEQPACKET"};
static TNimNode* TM__f9bP3LqjpgpB9cXL8Nnak7tQ_8_7[7];
NI TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10;
static char* NIM_CONST TM__f9bP3LqjpgpB9cXL8Nnak7tQ_9[7] = {
"IPPROTO_TCP", 
"IPPROTO_UDP", 
"IPPROTO_IP", 
"IPPROTO_IPV6", 
"IPPROTO_RAW", 
"IPPROTO_ICMP", 
"IPPROTO_ICMPV6"};
static TNimNode TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[18];

/* section: NIM_merge_TYPE_INIT3 */
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.size = sizeof(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg);
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.align = NIM_ALIGNOF(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg);
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.kind = 14;
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.base = 0;
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.flags = 3;
for (TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4 = 0; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4 < 4; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4++) {
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4+0].kind = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4+0].offset = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4+0].name = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_3[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4];
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_2_4[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4] = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4+0];
}
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[0].offset = 0;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[1].offset = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[2].offset = 2;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[3].offset = 30;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[4].len = 4; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[4].kind = 2; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[4].sons = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_2_4[0];
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.node = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[4];
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.flags = 1<<2;
NTI__NQT1bItGG2X9byGdrWX7ujw_.size = sizeof(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw);
NTI__NQT1bItGG2X9byGdrWX7ujw_.align = NIM_ALIGNOF(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw);
NTI__NQT1bItGG2X9byGdrWX7ujw_.kind = 14;
NTI__NQT1bItGG2X9byGdrWX7ujw_.base = 0;
NTI__NQT1bItGG2X9byGdrWX7ujw_.flags = 3;
for (TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7 = 0; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7 < 4; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7++) {
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7+5].kind = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7+5].offset = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7+5].name = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_6[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7];
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_5_4[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7] = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7+5];
}
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[5].offset = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[6].offset = 2;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[7].offset = 3;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[8].offset = 5;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[9].len = 4; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[9].kind = 2; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[9].sons = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_5_4[0];
NTI__NQT1bItGG2X9byGdrWX7ujw_.node = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[9];
NTI__NQT1bItGG2X9byGdrWX7ujw_.flags = 1<<2;
NTI__dqJ1OqRGclxIMMdSLRzzXg_.size = sizeof(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg);
NTI__dqJ1OqRGclxIMMdSLRzzXg_.align = NIM_ALIGNOF(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg);
NTI__dqJ1OqRGclxIMMdSLRzzXg_.kind = 14;
NTI__dqJ1OqRGclxIMMdSLRzzXg_.base = 0;
NTI__dqJ1OqRGclxIMMdSLRzzXg_.flags = 3;
for (TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10 = 0; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10 < 7; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10++) {
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10+10].kind = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10+10].offset = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10+10].name = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_9[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10];
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_8_7[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10] = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10+10];
}
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[10].offset = 6;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[11].offset = 17;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[12].offset = 18;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[13].offset = 19;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[14].offset = 20;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[15].offset = 21;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[16].offset = 22;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[17].len = 7; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[17].kind = 2; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[17].sons = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_8_7[0];
NTI__dqJ1OqRGclxIMMdSLRzzXg_.node = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[17];
NTI__dqJ1OqRGclxIMMdSLRzzXg_.flags = 1<<2;
}

