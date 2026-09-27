typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef unsigned short    word;
typedef struct GameClient GameClient, *PGameClient;

struct GameClient { // PlaceHolder Class Structure
};

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef RTTIBaseClassDescriptor *RTTIBaseClassDescriptor *32 __((image-base-relative));

typedef RTTIBaseClassDescriptor *32 __((image-base-relative)) *RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative));

typedef struct PMD PMD, *PPMD;

struct PMD {
    int mdisp;
    int pdisp;
    int vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    ImageBaseOffset32 pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct ENetClient ENetClient, *PENetClient;

struct ENetClient { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative)) pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef ulonglong __uint64;

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    ImageBaseOffset32 pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct Singleton<GameClient> Singleton<GameClient>, *PSingleton<GameClient>;

struct Singleton<GameClient> { // PlaceHolder Class Structure
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

typedef ushort WORD;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _RTL_CONDITION_VARIABLE _RTL_CONDITION_VARIABLE, *P_RTL_CONDITION_VARIABLE;

typedef struct _RTL_CONDITION_VARIABLE RTL_CONDITION_VARIABLE;

typedef RTL_CONDITION_VARIABLE *PCONDITION_VARIABLE;

typedef void *PVOID;

struct _RTL_CONDITION_VARIABLE {
    PVOID Ptr;
};

typedef struct _RTL_SRWLOCK _RTL_SRWLOCK, *P_RTL_SRWLOCK;

typedef struct _RTL_SRWLOCK RTL_SRWLOCK;

typedef RTL_SRWLOCK *PSRWLOCK;

struct _RTL_SRWLOCK {
    PVOID Ptr;
};

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef ulong DWORD;

typedef ulonglong ULONG_PTR;

typedef ulonglong DWORD64;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

typedef uchar BYTE;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[100];
};

typedef int PMFN;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

typedef struct _s_ThrowInfo ThrowInfo;

struct _s_ThrowInfo {
    uint attributes;
    PMFN pmfnUnwind;
    int pForwardCompat;
    int pCatchableTypeArray;
};

typedef ulonglong uintptr_t;

typedef ulonglong size_t;

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _RUNTIME_FUNCTION *PRUNTIME_FUNCTION;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef struct _M128A *PM128A;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

typedef union _union_63 _union_63, *P_union_63;

typedef ulonglong *PDWORD64;

typedef struct _struct_64 _struct_64, *P_struct_64;

struct _struct_64 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_61 u;
    union _union_63 u2;
};

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _UNWIND_HISTORY_TABLE *PUNWIND_HISTORY_TABLE;

typedef void *HANDLE;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS *PKNONVOLATILE_CONTEXT_POINTERS;

typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef ulonglong UINT_PTR;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef ulong ULONG;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef struct HINSTANCE__ *HINSTANCE;

typedef void *LPVOID;

typedef HINSTANCE HMODULE;

typedef int BOOL;

typedef uint UINT;

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    dword EndAddress; // Apply ImageBaseOffset32 to see reference
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    qword DeCommitFreeBlockThreshold;
    qword DeCommitTotalFreeThreshold;
    pointer64 LockPrefixTable;
    qword MaximumAllocationSize;
    qword VirtualMemoryThreshold;
    qword ProcessAffinityMask;
    dword ProcessHeapFlags;
    word CsdVersion;
    word DependentLoadFlags;
    pointer64 EditList;
    pointer64 SecurityCookie;
    pointer64 SEHandlerTable;
    qword SEHandlerCount;
    pointer64 GuardCFCCheckFunctionPointer;
    pointer64 GuardCFDispatchFunctionPointer;
    pointer64 GuardCFFunctionTable;
    qword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer64 GuardAddressTakenIatEntryTable;
    qword GuardAddressTakenIatEntryCount;
    pointer64 GuardLongJumpTargetTable;
    qword GuardLongJumpTargetCount;
    pointer64 DynamicValueRelocTable;
    pointer64 CHPEMetadataPointer;
    pointer64 GuardRFFailureRoutine;
    pointer64 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer64 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    qword Reserved3;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA64, *PIMAGE_THUNK_DATA64;

struct IMAGE_THUNK_DATA64 {
    qword StartAddressOfRawData;
    qword EndAddressOfRawData;
    qword AddressOfIndex;
    qword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef UINT MMRESULT;

typedef struct WSAData WSAData, *PWSAData;

typedef struct WSAData WSADATA;

typedef WSADATA *LPWSADATA;

struct WSAData {
    WORD wVersion;
    WORD wHighVersion;
    ushort iMaxSockets;
    ushort iMaxUdpDg;
    char *lpVendorInfo;
    char szDescription[257];
    char szSystemStatus[129];
};

typedef struct sockaddr sockaddr, *Psockaddr;

typedef ushort u_short;

struct sockaddr {
    u_short sa_family;
    char sa_data[14];
};

typedef UINT_PTR SOCKET;

typedef ulong u_long;

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    long tv_sec;
    long tv_usec;
};

typedef struct fd_set fd_set, *Pfd_set;

typedef uint u_int;

struct fd_set {
    u_int fd_count;
    SOCKET fd_array[64];
};

typedef struct TextChat TextChat, *PTextChat;

struct TextChat { // PlaceHolder Structure
};

typedef struct MainMenuClient MainMenuClient, *PMainMenuClient;

struct MainMenuClient { // PlaceHolder Structure
};

typedef struct StreamBuffer StreamBuffer, *PStreamBuffer;

struct StreamBuffer { // PlaceHolder Structure
};

typedef enum e_ActorModel {
} e_ActorModel;

typedef struct CEFManager CEFManager, *PCEFManager;

struct CEFManager { // PlaceHolder Structure
};

typedef struct ServerData ServerData, *PServerData;

struct ServerData { // PlaceHolder Structure
};

typedef struct scoped_refptr<CefListValue> scoped_refptr<CefListValue>, *Pscoped_refptr<CefListValue>;

struct scoped_refptr<CefListValue> { // PlaceHolder Structure
};

typedef enum DeliveryType {
} DeliveryType;

typedef struct PlayerManager PlayerManager, *PPlayerManager;

struct PlayerManager { // PlaceHolder Structure
};

typedef struct Vector3 Vector3, *PVector3;

struct Vector3 { // PlaceHolder Structure
};

typedef enum LogType {
} LogType;

typedef struct scoped_refptr<CefProcessMessage> scoped_refptr<CefProcessMessage>, *Pscoped_refptr<CefProcessMessage>;

struct scoped_refptr<CefProcessMessage> { // PlaceHolder Structure
};

typedef enum cef_process_id_t {
} cef_process_id_t;

typedef struct vector<std::shared_ptr<Message>,std::allocator<std::shared_ptr<Message>_>_> vector<std::shared_ptr<Message>,std::allocator<std::shared_ptr<Message>_>_>, *Pvector<std::shared_ptr<Message>,std::allocator<std::shared_ptr<Message>_>_>;

struct vector<std::shared_ptr<Message>,std::allocator<std::shared_ptr<Message>_>_> { // PlaceHolder Structure
};

typedef struct basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>, *Pbasic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>;

struct basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> { // PlaceHolder Structure
};

typedef struct shared_ptr<Message> shared_ptr<Message>, *Pshared_ptr<Message>;

struct shared_ptr<Message> { // PlaceHolder Structure
};

typedef struct optional<Player> optional<Player>, *Poptional<Player>;

struct optional<Player> { // PlaceHolder Structure
};

typedef struct basic_streambuf<char,std::char_traits<char>_> basic_streambuf<char,std::char_traits<char>_>, *Pbasic_streambuf<char,std::char_traits<char>_>;

struct basic_streambuf<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct shared_ptr<GameClient> shared_ptr<GameClient>, *Pshared_ptr<GameClient>;

struct shared_ptr<GameClient> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct ios_base ios_base, *Pios_base;

struct ios_base { // PlaceHolder Structure
};

typedef struct basic_ios<char,std::char_traits<char>_> basic_ios<char,std::char_traits<char>_>, *Pbasic_ios<char,std::char_traits<char>_>;

struct basic_ios<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct shared_ptr<TextChat> shared_ptr<TextChat>, *Pshared_ptr<TextChat>;

struct shared_ptr<TextChat> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(StreamBuffer_const&___ptr64)> function<void___cdecl(StreamBuffer_const&___ptr64)>, *Pfunction<void___cdecl(StreamBuffer_const&___ptr64)>;

struct function<void___cdecl(StreamBuffer_const&___ptr64)> { // PlaceHolder Structure
};

typedef struct locale locale, *Plocale;

struct locale { // PlaceHolder Structure
};

typedef struct shared_ptr<CEFManager> shared_ptr<CEFManager>, *Pshared_ptr<CEFManager>;

struct shared_ptr<CEFManager> { // PlaceHolder Structure
};

typedef struct basic_ostream<char,std::char_traits<char>_> basic_ostream<char,std::char_traits<char>_>, *Pbasic_ostream<char,std::char_traits<char>_>;

struct basic_ostream<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct shared_ptr<PlayerManager> shared_ptr<PlayerManager>, *Pshared_ptr<PlayerManager>;

struct shared_ptr<PlayerManager> { // PlaceHolder Structure
};

typedef struct shared_ptr<Scripting::ClientEventsHandler> shared_ptr<Scripting::ClientEventsHandler>, *Pshared_ptr<Scripting::ClientEventsHandler>;

struct shared_ptr<Scripting::ClientEventsHandler> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(__int64)> function<void___cdecl(__int64)>, *Pfunction<void___cdecl(__int64)>;

struct function<void___cdecl(__int64)> { // PlaceHolder Structure
};

typedef struct basic_streambuf<char,struct_std::char_traits<char>_> basic_streambuf<char,struct_std::char_traits<char>_>, *Pbasic_streambuf<char,struct_std::char_traits<char>_>;

struct basic_streambuf<char,struct_std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct shared_ptr<class_GameClient> shared_ptr<class_GameClient>, *Pshared_ptr<class_GameClient>;

struct shared_ptr<class_GameClient> { // PlaceHolder Structure
};

typedef struct basic_ostream<char,struct_std::char_traits<char>_> basic_ostream<char,struct_std::char_traits<char>_>, *Pbasic_ostream<char,struct_std::char_traits<char>_>;

struct basic_ostream<char,struct_std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct gohBase gohBase, *PgohBase;

struct gohBase { // PlaceHolder Structure
};

typedef struct sagActor sagActor, *PsagActor;

struct sagActor { // PlaceHolder Structure
};

typedef struct sagPlayer sagPlayer, *PsagPlayer;

struct sagPlayer { // PlaceHolder Structure
};

typedef struct InfoBase InfoBase, *PInfoBase;

struct InfoBase { // PlaceHolder Structure
};

typedef struct DataSerializer DataSerializer, *PDataSerializer;

struct DataSerializer { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);



undefined DAT_180028148;
longlong *DAT_180028158;
undefined DAT_180028160;
undefined DAT_180028170;
undefined DAT_180028178;
undefined DAT_180028140;
longlong *DAT_180028168;
undefined FUN_18001e6c0;
ulonglong DAT_1800280c0;
void *FiberData;
pointer[2] vftable;
undefined DAT_180024bc8;
undefined8 DAT_1800280c0;
undefined4 DAT_180029698;
_func_void_InfoBase_ptr *DAT_1800296b0;
void *ThreadLocalStoragePointer;
undefined4 _tls_index;
undefined4 DAT_1800296c0;
_func_void_InfoBase_ptr *DAT_180029690;
undefined4 DAT_1800297c8;
_func_void_InfoBase_ptr *DAT_180029730;
pointer[6] vftable;
undefined4 DAT_1800297d0;
_func_void_InfoBase_ptr *DAT_1800296a8;
undefined4 DAT_180029740;
_func_void_InfoBase_ptr *DAT_180029798;
undefined4 DAT_180029794;
_func_void_InfoBase_ptr *DAT_180029700;
undefined DAT_180020298;
undefined4 DAT_18002969c;
_func_void_InfoBase_ptr *DAT_180029770;
undefined4 DAT_1800296d0;
_func_void_InfoBase_ptr *DAT_180029778;
undefined4 DAT_180029720;
_func_void_InfoBase_ptr *DAT_1800297c0;
undefined4 DAT_1800296a0;
_func_void_InfoBase_ptr *DAT_180029710;
undefined4 DAT_180029764;
_func_void_InfoBase_ptr *DAT_1800296e0;
undefined4 DAT_180029688;
_func_void_InfoBase_ptr *DAT_1800296b8;
undefined4 DAT_180029708;
_func_void_InfoBase_ptr *DAT_180029758;
undefined4 DAT_180029790;
_func_void_InfoBase_ptr *DAT_1800296e8;
undefined4 DAT_180029760;
_func_void_InfoBase_ptr *DAT_180029768;
undefined4 DAT_180029738;
_func_void_InfoBase_ptr *DAT_180029728;
undefined4 DAT_1800296f4;
_func_void_InfoBase_ptr *DAT_180029748;
undefined4 DAT_180029750;
_func_void_InfoBase_ptr *DAT_180029780;
undefined4 DAT_1800297cc;
_func_void_InfoBase_ptr *DAT_180029718;
undefined4 DAT_1800296c4;
_func_void_InfoBase_ptr *DAT_1800296f8;
undefined4 DAT_18002973c;
_func_void_InfoBase_ptr *DAT_180029788;
undefined4 DAT_1800296c8;
_func_void_InfoBase_ptr *DAT_1800297b8;
undefined8 *DAT_1800297b0;
int `thread_safe_static_guard{0}';
pointer[4] vftable;
shared_ptr<class_GameClient> singleton;
undefined FUN_18001e740;
undefined4 DAT_1800297a0;
_func_void_InfoBase_ptr *DAT_1800296d8;
undefined4 DAT_1800296f0;
_func_void_InfoBase_ptr *DAT_180029680;
TypeDescriptor RTTI_Type_Descriptor;
undefined FUN_18000fef0;
undefined4 DAT_1800297d4;
_func_void_InfoBase_ptr *DAT_1800297d8;
undefined FUN_1800012b0;
undefined4 DAT_180029810;
_func_void_InfoBase_ptr *DAT_1800297e8;
undefined4 DAT_1800297f0;
_func_void_InfoBase_ptr *DAT_180029818;
undefined4 DAT_1800297e0;
_func_void_InfoBase_ptr *DAT_180029808;
undefined4 DAT_180029800;
_func_void_InfoBase_ptr *DAT_180029820;
undefined4 DAT_180029814;
_func_void_InfoBase_ptr *DAT_1800297f8;
undefined4 DAT_180029844;
_func_void_InfoBase_ptr *DAT_180029830;
undefined4 DAT_180029848;
_func_void_InfoBase_ptr *DAT_180029858;
undefined4 DAT_180029840;
_func_void_InfoBase_ptr *DAT_180029850;
undefined4 DAT_180029828;
_func_void_InfoBase_ptr *DAT_180029838;
undefined DAT_180020938;
undefined DAT_180020940;
undefined DAT_1800209d4;
pointer PTR_180020ab0;
pointer[1] vftable;
pointer[15] vftable;
undefined DAT_180020b48;
undefined *PTR_malloc_180028000;
undefined *PTR_abort_180028010;
undefined *PTR_free_180028008;
undefined *PTR_FUN_180028020;
undefined *PTR_FUN_180028018;
undefined DAT_180029000;
undefined DAT_180028030;
int DAT_180028bf4;
int DAT_180028bf8;
undefined DAT_180029068;
undefined DAT_180029060;
longlong DAT_180029070;
undefined *PTR__purecall_18001f618;
undefined *PTR_FUN_18001f770;
undefined *PTR_FUN_18001f850;
undefined4 DAT_180028098;
undefined4 DAT_18002809c;
undefined4 DAT_1800280a0;
int DAT_180028098;
undefined4 DAT_1800280a4;
undefined *PTR__purecall_18001f640;
undefined *PTR__purecall_18001f668;
undefined *PTR_FUN_18001f748;
undefined DAT_18001f878;
undefined *PTR__purecall_18001fa68;
undefined *PTR_FUN_18001faa8;
undefined *PTR_FUN_18001fad0;
undefined *PTR_FUN_18001fb10;
undefined DAT_18001fb38;
undefined *PTR__purecall_18001fbc0;
undefined *PTR_FUN_18001fca8;
undefined *PTR_FUN_18001fcd0;
undefined *PTR_FUN_18001fdb8;
undefined DAT_18001fde0;
undefined *PTR__purecall_18001fe78;
undefined *PTR_FUN_18001ff28;
undefined *PTR_FUN_18001ff50;
undefined *PTR_FUN_180020000;
undefined DAT_180020028;
uintptr_t DAT_1800280c0;
void *DAT_180029080;
void *StackBase;
undefined8 DAT_180029090;
undefined1 DAT_180029088;
char DAT_180029089;
undefined DAT_1800290a0;
undefined DAT_1800290a8;
undefined DAT_1800290b8;
undefined8 UNK_180029098;
undefined8 UNK_1800290b0;
IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER_180000238;
undefined DAT_180000328;
undefined8 DAT_180029080;
char DAT_180029088;
undefined DAT_1800290c0;
undefined DAT_1800290c8;
int DAT_1800280b4;
undefined4 DAT_1800280b4;
int DAT_180029078;
undefined _guard_dispatch_icall;
int DAT_1800290d0;
undefined DAT_18001f558;
undefined DAT_18001f570;
undefined DAT_18001f578;
undefined DAT_18001f580;
undefined8 DAT_180029278;
undefined DAT_180029218;
undefined DAT_1800290f0;
undefined DAT_180029200;
undefined DAT_1800290e0;
undefined DAT_1800290e4;
undefined DAT_1800290f8;
undefined8 DAT_180028100;
undefined8 DAT_180029100;
undefined *PTR_DAT_1800200d8;
undefined DAT_180029180;
undefined DAT_180028128;
undefined DAT_180028120;
uint DAT_180029654;
ulonglong DAT_180028110;
undefined DAT_180028118;
uint DAT_18002811c;
undefined DAT_180029650;
int DAT_180028130;
undefined DAT_180029658;
undefined DAT_180024b18;
ulonglong DAT_180028100;
undefined DAT_180029660;
undefined DAT_180029670;
undefined DAT_180029678;
undefined DAT_1800298a0;
undefined8 DAT_180022110;
undefined8 DAT_180022120;
undefined FUN_18001cb48;
longlong *DAT_180029898;
undefined DAT_180029860;
void *DAT_180028158;
longlong DAT_180028168;
longlong *DAT_1800297b0;

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180001010(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = FUN_18001cae0(0x70);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  DAT_180028158 = (longlong *)0x0;
  _DAT_180028160 = (longlong *)0x0;
  DAT_180028168 = (longlong *)0x0;
  _DAT_180028170 = 7;
  _DAT_180028178 = 8;
  _DAT_180028140 = 0x3f800000;
  _DAT_180028148 = lVar1;
  plVar2 = (longlong *)FUN_18001cae0(0x80);
  lVar4 = (longlong)DAT_180028168 - (longlong)DAT_180028158 >> 3;
  if (lVar4 != 0) {
    plVar3 = DAT_180028158;
    if ((0xfff < (ulonglong)(lVar4 * 8)) &&
       (plVar3 = (longlong *)DAT_180028158[-1],
       0x1f < (ulonglong)((longlong)DAT_180028158 + (-8 - (longlong)plVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(plVar3);
  }
  plVar3 = plVar2 + 0x10;
  _DAT_180028160 = plVar3;
  DAT_180028168 = plVar3;
  DAT_180028158 = plVar2;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    *plVar2 = lVar1;
  }
  atexit(FUN_18001e6c0);
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180001110(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  void *pvVar3;
  void *pvVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1800280c0 ^ (ulonglong)auStack_68;
  local_40[0] = 4;
  puVar2 = *(undefined1 **)(param_1 + 0x18);
  local_48 = param_2;
  if (puVar2 == *(undefined1 **)(param_1 + 0x20)) {
    FUN_18000fc70((longlong *)(param_1 + 0x10),puVar2,local_40);
  }
  else {
    *puVar2 = 4;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  uVar1 = *(ushort *)(param_2 + 2);
  uVar5 = (ulonglong)uVar1;
  if (uVar1 < 0x1000) {
    FUN_18000e940(param_1,uVar1);
    plVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar6 = (longlong *)*param_2;
    }
    if (uVar1 != 0) {
      do {
        local_40[0] = (undefined1)*plVar6;
        puVar2 = *(undefined1 **)(param_1 + 0x18);
        if (puVar2 == *(undefined1 **)(param_1 + 0x20)) {
          FUN_18000fc70((longlong *)(param_1 + 0x10),puVar2,local_40);
        }
        else {
          *puVar2 = local_40[0];
          *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
        }
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
        plVar6 = (longlong *)((longlong)plVar6 + 1);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    FUN_18000e940(param_1,0);
  }
  if (0xf < (ulonglong)param_2[3]) {
    pvVar3 = (void *)*param_2;
    pvVar4 = pvVar3;
    if ((0xfff < param_2[3] + 1U) &&
       (pvVar4 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar4);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  return;
}



void FUN_180001250(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x20) - (longlong)pvVar1)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800012b0(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  longlong lVar12;
  longlong lVar13;
  code *pcVar14;
  double dVar15;
  longlong lVar16;
  int iVar17;
  BOOL BVar18;
  longlong *plVar19;
  float *pfVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  LPVOID pvVar23;
  ULONGLONG UVar24;
  byte *pbVar25;
  undefined8 ****ppppuVar26;
  ulonglong uVar27;
  byte *pbVar28;
  longlong *plVar29;
  ulonglong uVar30;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  longlong *local_d0;
  longlong local_c8 [4];
  byte local_a8 [8];
  undefined8 local_a0;
  longlong lStack_98;
  byte *local_90;
  byte *pbStack_88;
  byte *local_80;
  ulonglong local_78;
  longlong *local_70;
  undefined8 ***local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1800280c0 ^ (ulonglong)auStack_f8;
  FUN_18000ec60(param_1,(longlong *)local_68);
  plVar19 = (longlong *)Singleton<>::Get();
  ppppuVar26 = local_68;
  if (0xf < local_50) {
    ppppuVar26 = (undefined8 ****)local_68[0];
  }
  uVar30 = 0xcbf29ce484222325;
  uVar27 = 0;
  if (local_58 != 0) {
    do {
      uVar30 = (uVar30 ^ *(byte *)((longlong)ppppuVar26 + uVar27)) * 0x100000001b3;
      uVar27 = uVar27 + 1;
    } while (uVar27 < local_58);
  }
  plVar19 = FUN_180001b60(*plVar19,(longlong *)&local_78,local_68,uVar30);
  lVar12 = plVar19[1];
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_d0 + 1;
    lVar16 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar17 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0);
      }
    }
  }
  if (lVar12 != 0) {
    lVar12 = *param_1;
    *param_1 = lVar12 + 1;
    bVar2 = *(byte *)(lVar12 + param_1[2]);
    uVar27 = (ulonglong)bVar2;
    local_d8 = &local_a0;
    local_90 = (byte *)0x0;
    pbStack_88 = (byte *)0x0;
    local_80 = (byte *)0x0;
    local_a0 = 0;
    lStack_98 = 0;
    local_78 = 0x400;
    FUN_18000f5f0((longlong *)&local_90,&local_78);
    local_a8[0] = bVar2;
    if (pbStack_88 == local_80) {
      FUN_18000fc70((longlong *)&local_90,pbStack_88,local_a8);
    }
    else {
      *pbStack_88 = bVar2;
      pbStack_88 = pbStack_88 + 1;
    }
    lStack_98 = lStack_98 + 1;
    pbVar28 = pbStack_88;
    if (bVar2 != 0) {
      do {
        lVar16 = *param_1;
        lVar12 = lVar16 + 1;
        *param_1 = lVar12;
        lVar13 = param_1[2];
        cVar3 = *(char *)(lVar13 + lVar16);
        if (cVar3 == '\x01') {
          uVar4 = *(undefined1 *)(lVar13 + lVar12);
          uVar5 = *(undefined1 *)(lVar13 + 1 + lVar12);
          uVar6 = *(undefined1 *)(lVar13 + 2 + lVar12);
          uVar7 = *(undefined1 *)(lVar13 + 3 + lVar12);
          uVar8 = *(undefined1 *)(lVar13 + 4 + lVar12);
          uVar9 = *(undefined1 *)(lVar13 + 5 + lVar12);
          uVar10 = *(undefined1 *)(lVar13 + 6 + lVar12);
          uVar11 = *(undefined1 *)(lVar13 + 7 + lVar12);
          *param_1 = lVar16 + 9;
          uVar30 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar6
                                                                        ),uVar7),uVar8),uVar9),
                                     uVar10),uVar11);
          local_a8[0] = 1;
          if (pbVar28 == local_80) {
            FUN_18000fc70((longlong *)&local_90,pbVar28,local_a8);
          }
          else {
            *pbVar28 = 1;
            pbStack_88 = pbStack_88 + 1;
          }
          lStack_98 = lStack_98 + 1;
LAB_1800016ee:
          FUN_18000eb20((longlong)&local_a0,uVar30);
          pbVar28 = pbStack_88;
        }
        else {
          if (cVar3 == '\x02') {
            uVar4 = *(undefined1 *)(lVar13 + 1 + lVar12);
            uVar5 = *(undefined1 *)(lVar13 + lVar12);
            uVar6 = *(undefined1 *)(lVar13 + 2 + lVar12);
            uVar7 = *(undefined1 *)(lVar13 + 3 + lVar12);
            uVar8 = *(undefined1 *)(lVar13 + 4 + lVar12);
            uVar9 = *(undefined1 *)(lVar13 + 5 + lVar12);
            uVar10 = *(undefined1 *)(lVar13 + 6 + lVar12);
            uVar11 = *(undefined1 *)(lVar13 + 7 + lVar12);
            *param_1 = lVar16 + 9;
            dVar15 = FUN_180010bf0(CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(
                                                  uVar5,uVar4),uVar6),uVar7),uVar8),uVar9),uVar10),
                                            uVar11),'@',0xb);
            local_a8[0] = 2;
            if (pbVar28 == local_80) {
              FUN_18000fc70((longlong *)&local_90,pbVar28,local_a8);
            }
            else {
              *pbVar28 = 2;
              pbStack_88 = pbStack_88 + 1;
            }
            lStack_98 = lStack_98 + 1;
            uVar30 = FUN_180010b00(dVar15,'@','\v');
            goto LAB_1800016ee;
          }
          if (cVar3 == '\x03') {
            *param_1 = lVar16 + 2;
            cVar3 = *(char *)(lVar13 + lVar12);
            local_a8[0] = 3;
            if (pbVar28 == local_80) {
              FUN_18000fc70((longlong *)&local_90,pbVar28,local_a8);
            }
            else {
              *pbVar28 = 3;
              pbStack_88 = pbStack_88 + 1;
            }
            local_a8[0] = cVar3 != '\0';
            if (pbStack_88 == local_80) {
              lStack_98 = lStack_98 + 1;
              FUN_18000fc70((longlong *)&local_90,pbStack_88,local_a8);
              lStack_98 = lStack_98 + 1;
              pbVar28 = pbStack_88;
            }
            else {
              *pbStack_88 = local_a8[0];
              pbStack_88 = pbStack_88 + 1;
              lStack_98 = lStack_98 + 2;
              pbVar28 = pbStack_88;
            }
          }
          else if (cVar3 == '\x04') {
            plVar19 = FUN_18000ec60(param_1,local_c8);
            FUN_180001110((longlong)&local_a0,plVar19);
            pbVar28 = pbStack_88;
          }
          else if (cVar3 == '\x05') {
            pfVar20 = FUN_18000ef40(param_1,(float *)&local_78);
            local_a8[0] = 5;
            if (pbVar28 == local_80) {
              FUN_18000fc70((longlong *)&local_90,pbVar28,local_a8);
            }
            else {
              *pbVar28 = 5;
              pbStack_88 = pbStack_88 + 1;
            }
            lStack_98 = lStack_98 + 1;
            uVar30 = FUN_180010b00((double)*pfVar20,' ','\b');
            FUN_18000ea20((longlong)&local_a0,uVar30);
            uVar30 = FUN_180010b00((double)pfVar20[1],' ','\b');
            FUN_18000ea20((longlong)&local_a0,uVar30);
            uVar30 = FUN_180010b00((double)pfVar20[2],' ','\b');
            FUN_18000ea20((longlong)&local_a0,uVar30);
            pbVar28 = pbStack_88;
          }
        }
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    pbVar28 = (byte *)0x0;
    plVar19 = (longlong *)Singleton<>::Get();
    lVar16 = *plVar19;
    lVar12 = lVar16 + 0x40;
    local_d8 = (undefined8 *)lVar12;
    iVar17 = _Mtx_lock(lVar12);
    if (iVar17 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if (*(int *)(lVar16 + 0x8c) == 0x7fffffff) {
      *(undefined4 *)(lVar16 + 0x8c) = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    uVar21 = FUN_180001a70(lVar16,local_68);
    if ((char)uVar21 != '\0') {
      puVar22 = (undefined8 *)FUN_18000db80(lVar16,local_68);
      plVar19 = (longlong *)puVar22[1];
      for (plVar29 = (longlong *)*puVar22; plVar29 != plVar19; plVar29 = plVar29 + 2) {
        puVar22 = (undefined8 *)*plVar29;
        BVar18 = IsThreadAFiber();
        pvVar23 = FiberData;
        if (BVar18 == 0) {
          pvVar23 = ConvertThreadToFiber((LPVOID)0x0);
        }
        puVar22[1] = pvVar23;
        UVar24 = GetTickCount64();
        if ((ulonglong)puVar22[2] <= UVar24) {
          puVar22[5] = local_a0;
          puVar22[6] = lStack_98;
          if ((byte **)(puVar22 + 7) != &local_90) {
            FUN_18000e340(puVar22 + 7,local_90,(longlong)pbStack_88 - (longlong)local_90);
          }
          SwitchToFiber((LPVOID)*puVar22);
        }
      }
    }
    _Mtx_unlock(lVar12);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_70 + 1;
      lVar12 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*local_70 + 8))(local_70);
        }
      }
    }
    if (local_90 != (byte *)0x0) {
      pbVar25 = local_90;
      if ((0xfff < (ulonglong)((longlong)local_80 - (longlong)local_90)) &&
         (pbVar25 = *(byte **)(local_90 + -8), (byte *)0x1f < local_90 + (-8 - (longlong)pbVar25)))
      {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pbVar25);
      local_90 = pbVar28;
      pbStack_88 = pbVar28;
      local_80 = pbVar28;
    }
  }
  if (0xf < local_50) {
    ppppuVar26 = (undefined8 ****)local_68[0];
    if ((0xfff < local_50 + 1) &&
       (ppppuVar26 = (undefined8 ****)local_68[0][-1],
       0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)ppppuVar26)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(ppppuVar26);
  }
  return;
}



void FUN_1800018f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}



void FUN_180001940(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar1)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void FUN_1800019a0(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (7 < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}



void FUN_180001a10(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



undefined8 FUN_180001a70(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong _Size;
  int iVar2;
  undefined4 extraout_var;
  ulonglong uVar4;
  undefined8 *_Buf1;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar3;
  
  uVar1 = param_2[3];
  _Size = param_2[2];
  puVar6 = param_2;
  if (0xf < uVar1) {
    puVar6 = (undefined8 *)*param_2;
  }
  uVar7 = 0;
  uVar5 = 0xcbf29ce484222325;
  uVar3 = uVar7;
  if (_Size != 0) {
    do {
      uVar4 = uVar3 + 1;
      uVar5 = (uVar5 ^ *(byte *)((longlong)puVar6 + uVar3)) * 0x100000001b3;
      uVar3 = uVar4;
    } while (uVar4 < _Size);
  }
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  uVar5 = *(ulonglong *)(param_1 + 0x30) & uVar5;
  uVar4 = *(ulonglong *)(uVar3 + 8 + uVar5 * 0x10);
  uVar8 = uVar7;
  if (uVar4 == *(ulonglong *)(param_1 + 8)) {
LAB_180001b47:
    return CONCAT71((int7)(uVar3 >> 8),uVar8 != 0);
  }
  uVar5 = *(ulonglong *)(uVar3 + uVar5 * 0x10);
  do {
    puVar6 = (undefined8 *)(uVar4 + 0x10);
    uVar3 = *(ulonglong *)(uVar4 + 0x20);
    if (0xf < *(ulonglong *)(uVar4 + 0x28)) {
      puVar6 = (undefined8 *)*puVar6;
    }
    _Buf1 = param_2;
    if (0xf < uVar1) {
      _Buf1 = (undefined8 *)*param_2;
    }
    if (_Size == uVar3) {
      uVar8 = uVar4;
      if (_Size == 0) goto LAB_180001b47;
      iVar2 = memcmp(_Buf1,puVar6,_Size);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) goto LAB_180001b47;
    }
    uVar8 = uVar7;
    if (uVar4 == uVar5) goto LAB_180001b47;
    uVar4 = *(ulonglong *)(uVar4 + 8);
  } while( true );
}



longlong * FUN_180001b60(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  size_t _Size;
  ulonglong uVar1;
  int iVar2;
  undefined8 *_Buf1;
  longlong *_Buf2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)
           ((*(ulonglong *)(param_1 + 0x30) & param_4) * 0x10 + *(longlong *)(param_1 + 0x18));
  plVar3 = (longlong *)plVar4[1];
  if (plVar3 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  plVar4 = (longlong *)*plVar4;
  _Size = param_3[2];
  uVar1 = param_3[3];
  while( true ) {
    _Buf2 = plVar3 + 2;
    if (0xf < (ulonglong)plVar3[5]) {
      _Buf2 = (longlong *)*_Buf2;
    }
    _Buf1 = param_3;
    if (0xf < uVar1) {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == plVar3[4]) && ((_Size == 0 || (iVar2 = memcmp(_Buf1,_Buf2,_Size), iVar2 == 0))))
    break;
    if (plVar3 == plVar4) {
      *param_2 = (longlong)plVar3;
      param_2[1] = 0;
      return param_2;
    }
    plVar3 = (longlong *)plVar3[1];
  }
  *param_2 = *plVar3;
  param_2[1] = (longlong)plVar3;
  return param_2;
}



undefined8 * FUN_180001c40(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}



char * FUN_180001c80(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



undefined8 * FUN_180001ca0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1);
  }
  return param_1;
}



undefined8 * FUN_180001d10(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



void FUN_180001d40(void)

{
  undefined8 local_28 [5];
  
  FUN_180001d10(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180024bc8);
}



undefined8 * FUN_180001d60(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



undefined8 * FUN_180001da0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



void FUN_180001de0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

float * FUN_180001e00(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                     float param_6)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_58 [22];
  
  iVar1 = 0;
  fVar3 = *param_3 - *param_2;
  fVar5 = param_3[1] - param_2[1];
  fVar7 = param_3[2] - param_2[2];
  fVar8 = 2.0 / param_5;
  local_58[0] = fVar3;
  local_58[1] = fVar5;
  local_58[2] = fVar7;
  do {
    fVar4 = fVar3;
    if ((iVar1 != 0) && (fVar4 = fVar7, iVar1 == 1)) {
      fVar4 = fVar5;
    }
    if (180.0 < fVar4) {
      pfVar2 = local_58;
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          pfVar2 = local_58 + 1;
          fVar3 = fVar5;
        }
        else {
          pfVar2 = local_58 + 2;
          fVar3 = fVar7;
        }
      }
      *pfVar2 = fVar3 - 360.0;
      fVar3 = local_58[0];
      fVar5 = local_58[1];
      fVar7 = local_58[2];
    }
    fVar4 = fVar3;
    if ((iVar1 != 0) && (fVar4 = fVar7, iVar1 == 1)) {
      fVar4 = fVar5;
    }
    if (fVar4 < -180.0) {
      pfVar2 = local_58;
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          pfVar2 = local_58 + 1;
          fVar3 = fVar5;
        }
        else {
          pfVar2 = local_58 + 2;
          fVar3 = fVar7;
        }
      }
      *pfVar2 = fVar3 + 360.0;
      fVar3 = local_58[0];
      fVar5 = local_58[1];
      fVar7 = local_58[2];
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  fVar4 = (fVar3 * fVar8 + *param_4) * param_6;
  fVar6 = (fVar5 * fVar8 + param_4[1]) * param_6;
  fVar7 = (fVar7 * fVar8 + param_4[2]) * param_6;
  fVar3 = 1.0 - param_6 / param_5;
  *param_4 = (*param_4 - fVar4 * fVar8) * fVar3;
  param_4[1] = (param_4[1] - fVar6 * fVar8) * fVar3;
  param_4[2] = (param_4[2] - fVar7 * fVar8) * fVar3;
  fVar3 = param_2[2];
  fVar5 = *param_2;
  param_1[1] = param_2[1] + fVar6;
  *param_1 = fVar4 + fVar5;
  param_1[2] = fVar3 + fVar7;
  return param_1;
}



undefined8 FUN_180002020(void)

{
  return 0;
}



void FUN_180002030(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_180006050(param_1);
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_180006120((longlong *)(param_1 + 8));
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined1 FUN_1800020a0(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  uint local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  uint local_1e0;
  undefined1 local_1dc [4];
  longlong alStack_1d8 [4];
  undefined4 auStack_1b4 [39];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1800280c0 ^ (ulonglong)auStack_218;
  local_1ec = 0;
  memset(local_1dc,0,0x1c4);
  local_1f0 = 0;
  local_1e0 = 0;
  local_1f8 = (undefined8 *)local_118;
  local_1e8 = (undefined8 *)local_118;
  memset(local_118,0,0x100);
  *(undefined8 *)((longlong)local_118 + (ulonglong)local_1f0 * 8) = 0;
  *(undefined4 *)((longlong)local_118 + (ulonglong)local_1f0 * 8) = param_1;
  local_1f0 = local_1f0 + 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_180029698) && (FUN_18001ca68(&DAT_180029698), DAT_180029698 == -1)) {
    DAT_1800296b0 = rage::scrThread::GetCommand(0xba6c3e92);
    _Init_thread_footer(&DAT_180029698);
  }
  uVar1 = local_1e0;
  if (DAT_1800296b0 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_1800296b0)((InfoBase *)&local_1f8);
    uVar1 = local_1e0;
  }
  while (uVar1 != 0) {
    local_1e0 = uVar1 - 1;
    *(undefined4 *)alStack_1d8[local_1e0] =
         *(undefined4 *)((longlong)&local_1f8 + (ulonglong)((uVar1 + 3) * 0x10));
    *(undefined4 *)(alStack_1d8[local_1e0] + 4) = auStack_1b4[(ulonglong)local_1e0 * 4];
    *(undefined4 *)(alStack_1d8[local_1e0] + 8) = auStack_1b4[(ulonglong)local_1e0 * 4 + 1];
    uVar1 = local_1e0;
  }
  return local_118[0];
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180002210(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  uint local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  uint local_1e0;
  undefined1 local_1dc [4];
  longlong alStack_1d8 [4];
  undefined4 auStack_1b4 [39];
  undefined8 local_118 [32];
  ulonglong local_18;
  
  local_18 = DAT_1800280c0 ^ (ulonglong)auStack_218;
  local_1ec = 0;
  memset(local_1dc,0,0x1c4);
  local_1f0 = 0;
  local_1e0 = 0;
  local_1f8 = local_118;
  local_1e8 = local_118;
  memset(local_118,0,0x100);
  local_118[local_1f0] = 0;
  *(undefined4 *)(local_118 + local_1f0) = param_1;
  local_118[local_1f0 + 1] = 0;
  *(undefined1 *)(local_118 + (local_1f0 + 1)) = 1;
  local_118[local_1f0 + 2] = 0;
  *(undefined1 *)(local_118 + (local_1f0 + 2)) = 0;
  local_1f0 = local_1f0 + 3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_1800296c0) && (FUN_18001ca68(&DAT_1800296c0), DAT_1800296c0 == -1)) {
    DAT_180029690 = rage::scrThread::GetCommand(0xb0a79fee);
    _Init_thread_footer(&DAT_1800296c0);
  }
  uVar1 = local_1e0;
  if (DAT_180029690 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_180029690)((InfoBase *)&local_1f8);
    uVar1 = local_1e0;
  }
  while (uVar1 != 0) {
    local_1e0 = uVar1 - 1;
    *(undefined4 *)alStack_1d8[local_1e0] =
         *(undefined4 *)((longlong)&local_1f8 + (ulonglong)((uVar1 + 3) * 0x10));
    *(undefined4 *)(alStack_1d8[local_1e0] + 4) = auStack_1b4[(ulonglong)local_1e0 * 4];
    *(undefined4 *)(alStack_1d8[local_1e0] + 8) = auStack_1b4[(ulonglong)local_1e0 * 4 + 1];
    uVar1 = local_1e0;
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined1 FUN_1800023b0(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  uint local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  uint local_1e0;
  undefined1 local_1dc [4];
  longlong alStack_1d8 [4];
  undefined4 auStack_1b4 [39];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1800280c0 ^ (ulonglong)auStack_218;
  local_1ec = 0;
  memset(local_1dc,0,0x1c4);
  local_1f0 = 0;
  local_1e0 = 0;
  local_1f8 = (undefined8 *)local_118;
  local_1e8 = (undefined8 *)local_118;
  memset(local_118,0,0x100);
  *(undefined8 *)((longlong)local_118 + (ulonglong)local_1f0 * 8) = 0;
  *(undefined4 *)((longlong)local_118 + (ulonglong)local_1f0 * 8) = param_1;
  *(undefined8 *)((longlong)local_118 + (ulonglong)(local_1f0 + 1) * 8) = 0;
  *(undefined4 *)((longlong)local_118 + (ulonglong)(local_1f0 + 1) * 8) = 0xffffffff;
  local_1f0 = local_1f0 + 2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_1800297c8) && (FUN_18001ca68(&DAT_1800297c8), DAT_1800297c8 == -1)) {
    DAT_180029730 = rage::scrThread::GetCommand(0x7df72579);
    _Init_thread_footer(&DAT_1800297c8);
  }
  uVar1 = local_1e0;
  if (DAT_180029730 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_180029730)((InfoBase *)&local_1f8);
    uVar1 = local_1e0;
  }
  while (uVar1 != 0) {
    local_1e0 = uVar1 - 1;
    *(undefined4 *)alStack_1d8[local_1e0] =
         *(undefined4 *)((longlong)&local_1f8 + (ulonglong)((uVar1 + 3) * 0x10));
    *(undefined4 *)(alStack_1d8[local_1e0] + 4) = auStack_1b4[(ulonglong)local_1e0 * 4];
    *(undefined4 *)(alStack_1d8[local_1e0] + 8) = auStack_1b4[(ulonglong)local_1e0 * 4 + 1];
    uVar1 = local_1e0;
  }
  return local_118[0];
}



// public: __cdecl Singleton<class GameClient>::~Singleton<class GameClient>(void) __ptr64

void __thiscall Singleton<GameClient>::~Singleton<GameClient>(Singleton<GameClient> *this)

{
                    // 0x2540  6  ??1?$Singleton@VGameClient@@@@QEAA@XZ
                    // 0x2540  9  ??1TextChat@@QEAA@XZ
                    // 0x2540  31  ?OnConnectionFailed@ENetClient@@UEAAXXZ
                    // 0x2540  33  ?OnConnectionSucceeded@ENetClient@@UEAAXXZ
                    // 0x2540  35  ?OnDisconnect@ENetClient@@UEAAXXZ
                    // 0x2540  37  ?OnStart@ENetClient@@UEAAXXZ
                    // 0x2540  39  ?OnTick@ENetClient@@UEAAXXZ
                    // 0x2540  41  ?OnUpdate@ENetClient@@UEAAXXZ
  return;
}



// public: void __cdecl ENetClient::__autoclassinit2(unsigned __int64) __ptr64

void __thiscall ENetClient::__autoclassinit2(ENetClient *this,__uint64 param_1)

{
                    // 0x2550  56  ?__autoclassinit2@ENetClient@@QEAAX_K@Z
                    // 0x2550  57  ?__autoclassinit2@GameClient@@QEAAX_K@Z
  memset(this,0,param_1);
  return;
}



// public: __cdecl Singleton<class GameClient>::Singleton<class GameClient>(void) __ptr64

Singleton<GameClient> * __thiscall
Singleton<GameClient>::Singleton<GameClient>(Singleton<GameClient> *this)

{
                    // 0x2560  2  ??0?$Singleton@VGameClient@@@@QEAA@XZ
                    // 0x2560  10  ??4?$Singleton@VGameClient@@@@QEAAAEAV0@AEBV0@@Z
                    // 0x2560  11  ??4ClientSend@@QEAAAEAV0@$$QEAV0@@Z
                    // 0x2560  12  ??4ClientSend@@QEAAAEAV0@AEBV0@@Z
                    // 0x2560  13  ??4TextChat@@QEAAAEAV0@AEBV0@@Z
  return this;
}



// public: class std::shared_ptr<class TextChat> const __cdecl GameClient::GetTextChat(void)const
// __ptr64

void __thiscall GameClient::GetTextChat(GameClient *this)

{
  int *piVar1;
  undefined8 *in_RDX;
  
                    // 0x2570  28  ?GetTextChat@GameClient@@QEBA?BV?$shared_ptr@VTextChat@@@std@@XZ
  *in_RDX = 0;
  in_RDX[1] = 0;
  if (*(longlong *)(this + 0x160) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(this + 0x160) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *in_RDX = *(undefined8 *)(this + 0x158);
  in_RDX[1] = *(undefined8 *)(this + 0x160);
  return;
}



// public: class std::shared_ptr<class PlayerManager> const __cdecl
// GameClient::GetPlayerManager(void)const __ptr64

void __thiscall GameClient::GetPlayerManager(GameClient *this)

{
  int *piVar1;
  undefined8 *in_RDX;
  
                    // 0x25b0  26
                    // ?GetPlayerManager@GameClient@@QEBA?BV?$shared_ptr@VPlayerManager@@@std@@XZ
  *in_RDX = 0;
  in_RDX[1] = 0;
  if (*(longlong *)(this + 0x180) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(this + 0x180) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *in_RDX = *(undefined8 *)(this + 0x178);
  in_RDX[1] = *(undefined8 *)(this + 0x180);
  return;
}



// public: __cdecl GameClient::GameClient(void) __ptr64

GameClient * __thiscall GameClient::GameClient(GameClient *this)

{
  longlong lVar1;
  
                    // 0x25f0  4  ??0GameClient@@QEAA@XZ
  ENetClient::ENetClient((ENetClient *)this);
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  lVar1 = FUN_18001cae0(0x70);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(this + 0xd8) = lVar1;
  *(ulonglong *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 7;
  *(undefined8 *)(this + 0x108) = 8;
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  FUN_180006870((ulonglong *)(this + 0xe8),0x10,*(undefined8 *)(this + 0xd8));
  *(undefined ***)this = vftable;
  *(undefined2 *)(this + 0x110) = 0xffff;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0xf;
  this[0x118] = (GameClient)0x0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0xf;
  this[0x138] = (GameClient)0x0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  return this;
}



// public: __cdecl GameClient::~GameClient(void) __ptr64

void __thiscall GameClient::~GameClient(GameClient *this)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
                    // 0x2710  8  ??1GameClient@@QEAA@XZ
  plVar4 = *(longlong **)(this + 0x180);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = *(longlong **)(this + 0x170);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = *(longlong **)(this + 0x160);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  FUN_180002800((longlong *)(this + 0x118));
  FUN_180002030((longlong)(this + 0xd0));
  ENetClient::~ENetClient((ENetClient *)this);
  return;
}



void FUN_180002800(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (ulonglong)param_1[7]) {
    pvVar1 = (void *)param_1[4];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[7] + 1U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1800028a3;
    FUN_18001c9b8(pvVar2);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_1800028a3:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined4 FUN_1800028b0(void)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_3f8 [32];
  char *local_3d8;
  uint local_3d0;
  undefined4 local_3cc;
  char *local_3c8;
  uint local_3c0;
  undefined1 local_3bc [4];
  longlong alStack_3b8 [4];
  undefined4 auStack_394 [39];
  char local_2f8 [256];
  undefined8 *local_1f8;
  uint local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  uint local_1e0;
  undefined1 local_1dc [4];
  longlong alStack_1d8 [4];
  undefined4 auStack_1b4 [39];
  undefined8 local_118 [32];
  ulonglong local_18;
  
  local_18 = DAT_1800280c0 ^ (ulonglong)auStack_3f8;
  uVar3 = FUN_1800069b0();
  local_3cc = 0;
  memset(local_3bc,0,0x1c4);
  local_3d0 = 0;
  local_3c0 = 0;
  local_3d8 = local_2f8;
  local_3c8 = local_2f8;
  memset(local_2f8,0,0x100);
  pcVar1 = local_2f8 + (ulonglong)local_3d0 * 8;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  *(undefined4 *)(local_2f8 + (ulonglong)local_3d0 * 8) = uVar3;
  local_3d0 = local_3d0 + 1;
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if ((*piVar4 < DAT_1800297d0) && (FUN_18001ca68(&DAT_1800297d0), DAT_1800297d0 == -1)) {
    DAT_1800296a8 = rage::scrThread::GetCommand(0xfc8e55ed);
    _Init_thread_footer(&DAT_1800297d0);
  }
  uVar2 = local_3c0;
  if (DAT_1800296a8 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_1800296a8)((InfoBase *)&local_3d8);
    uVar2 = local_3c0;
  }
  while (uVar2 != 0) {
    local_3c0 = uVar2 - 1;
    *(undefined4 *)alStack_3b8[local_3c0] =
         *(undefined4 *)((longlong)&local_3d8 + (ulonglong)((uVar2 + 3) * 0x10));
    *(undefined4 *)(alStack_3b8[local_3c0] + 4) = auStack_394[(ulonglong)local_3c0 * 4];
    *(undefined4 *)(alStack_3b8[local_3c0] + 8) = auStack_394[(ulonglong)local_3c0 * 4 + 1];
    uVar2 = local_3c0;
  }
  if (local_2f8[0] == '\0') {
    local_1ec = 0;
    local_3c0 = uVar2;
    memset(local_1dc,0,0x1c4);
    local_1e8 = local_118;
    local_1f8 = local_118;
    local_1f0 = 0;
    local_1e0 = 0;
    memset(local_118,0,0x100);
    local_118[local_1f0] = "PlayerLayout";
    local_1f0 = local_1f0 + 1;
    if ((*piVar4 < DAT_180029740) && (FUN_18001ca68(&DAT_180029740), DAT_180029740 == -1)) {
      DAT_180029798 = rage::scrThread::GetCommand(0x6ca53214);
      _Init_thread_footer(&DAT_180029740);
    }
    uVar2 = local_1e0;
    if (DAT_180029798 != (_func_void_InfoBase_ptr *)0x0) {
      (*DAT_180029798)((InfoBase *)&local_1f8);
      uVar2 = local_1e0;
    }
    while (uVar3 = (undefined4)local_118[0], uVar2 != 0) {
      local_1e0 = uVar2 - 1;
      *(undefined4 *)alStack_1d8[local_1e0] =
           *(undefined4 *)((longlong)&local_1f8 + (ulonglong)((uVar2 + 3) * 0x10));
      *(undefined4 *)(alStack_1d8[local_1e0] + 4) = auStack_1b4[(ulonglong)local_1e0 * 4];
      *(undefined4 *)(alStack_1d8[local_1e0] + 8) = auStack_1b4[(ulonglong)local_1e0 * 4 + 1];
      uVar2 = local_1e0;
    }
  }
  return uVar3;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined4
FUN_180002b90(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  uint local_270;
  undefined4 local_26c;
  undefined8 *local_268;
  uint local_260;
  undefined1 local_25c [4];
  longlong alStack_258 [4];
  undefined4 auStack_234 [39];
  undefined4 local_198;
  undefined4 auStack_194 [63];
  ulonglong local_98;
  
  local_98 = DAT_1800280c0 ^ (ulonglong)auStack_298;
  FUN_180002210(param_2);
  lVar9 = _Xtime_get_ticks();
  cVar8 = FUN_1800023b0(param_2);
  while (cVar8 == '\0') {
    ThisFiber::Wait(0);
    cVar8 = FUN_1800023b0(param_2);
  }
  lVar10 = _Xtime_get_ticks();
  if (20000 < lVar10 / 10 - lVar9 / 10) {
    Log::Print(2,(char *)0x0,"Player model request took: %llu microsecond(s)");
  }
  uVar1 = param_4[2];
  uVar2 = param_4[1];
  uVar3 = *param_4;
  uVar4 = param_3[2];
  uVar5 = param_3[1];
  uVar6 = *param_3;
  local_26c = 0;
  memset(local_25c,0,0x1c4);
  local_270 = 0;
  local_260 = 0;
  local_278 = (undefined8 *)&local_198;
  local_268 = (undefined8 *)&local_198;
  memset(&local_198,0,0x100);
  *(undefined8 *)((longlong)&local_198 + (ulonglong)local_270 * 8) = 0;
  *(undefined4 *)((longlong)&local_198 + (ulonglong)local_270 * 8) = param_1;
  *(undefined **)((longlong)&local_198 + (ulonglong)(local_270 + 1) * 8) = &DAT_180020298;
  *(undefined8 *)((longlong)&local_198 + (ulonglong)(local_270 + 2) * 8) = 0;
  *(undefined4 *)((longlong)&local_198 + (ulonglong)(local_270 + 2) * 8) = param_2;
  *(undefined4 *)((longlong)&local_198 + (ulonglong)(local_270 + 3) * 8) = uVar6;
  auStack_194[(ulonglong)(local_270 + 3) * 2] = uVar5;
  *(undefined8 *)((longlong)&local_198 + (ulonglong)(local_270 + 4) * 8) = 0;
  *(undefined4 *)((longlong)&local_198 + (ulonglong)(local_270 + 4) * 8) = uVar4;
  *(undefined4 *)((longlong)&local_198 + (ulonglong)(local_270 + 5) * 8) = uVar3;
  auStack_194[(ulonglong)(local_270 + 5) * 2] = uVar2;
  *(undefined8 *)((longlong)&local_198 + (ulonglong)(local_270 + 6) * 8) = 0;
  *(undefined4 *)((longlong)&local_198 + (ulonglong)(local_270 + 6) * 8) = uVar1;
  local_270 = local_270 + 7;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_180029794) && (FUN_18001ca68(&DAT_180029794), DAT_180029794 == -1)) {
    DAT_180029700 = rage::scrThread::GetCommand(0x8d67f397);
    _Init_thread_footer(&DAT_180029794);
  }
  uVar7 = local_260;
  if (DAT_180029700 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_180029700)((InfoBase *)&local_278);
    uVar7 = local_260;
  }
  while (uVar7 != 0) {
    local_260 = uVar7 - 1;
    *(undefined4 *)alStack_258[local_260] =
         *(undefined4 *)((longlong)&local_278 + (ulonglong)((uVar7 + 3) * 0x10));
    *(undefined4 *)(alStack_258[local_260] + 4) = auStack_234[(ulonglong)local_260 * 4];
    *(undefined4 *)(alStack_258[local_260] + 8) = auStack_234[(ulonglong)local_260 * 4 + 1];
    uVar7 = local_260;
  }
  return local_198;
}



undefined4 * FUN_180002ea0(float *param_1)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  code *pcVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined *****pppppuVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *local_98;
  undefined ****local_90;
  float *pfStack_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined ****local_58;
  longlong *local_48;
  longlong local_40 [2];
  float *local_30;
  
  uVar12 = 0;
  *param_1 = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  local_98 = param_1;
  local_30 = param_1;
  lVar7 = FUN_18001cae0(0x80);
  *(longlong *)lVar7 = lVar7;
  *(longlong *)(lVar7 + 8) = lVar7;
  *(longlong *)(param_1 + 2) = lVar7;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 9.80909e-45;
  param_1[0xd] = 0.0;
  param_1[0xe] = 1.12104e-44;
  param_1[0xf] = 0.0;
  *param_1 = 1.0;
  FUN_180006870((ulonglong *)(param_1 + 6),0x10,*(undefined8 *)(param_1 + 2));
  uVar11 = *(ulonglong *)(param_1 + 4);
  if (uVar11 != 0) {
    plVar10 = *(longlong **)(param_1 + 2);
    if (uVar11 < *(ulonglong *)(param_1 + 0xe) >> 3) {
      FUN_1800062b0((longlong)param_1,(longlong *)*plVar10,plVar10);
    }
    else {
      FUN_180007210(uVar11,plVar10);
      *(undefined8 *)*(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 2);
      *(longlong *)(*(longlong *)(param_1 + 2) + 8) = *(longlong *)(param_1 + 2);
      param_1[4] = 0.0;
      param_1[5] = 0.0;
      local_98 = *(float **)(param_1 + 2);
      FUN_180007080(*(undefined8 **)(param_1 + 6),*(undefined8 **)(param_1 + 8),&local_98);
    }
  }
  puVar8 = (undefined8 *)Singleton<GameClient>::Get();
  local_90 = (undefined ****)std::_Func_impl_no_alloc<>::vftable;
  local_58 = (undefined ****)&local_90;
  pfStack_88 = param_1;
  ENetClient::RegisterPacket((ENetClient *)*puVar8,6,&local_90);
  plVar10 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  puVar8 = (undefined8 *)Singleton<GameClient>::Get();
  local_90 = (undefined ****)std::_Func_impl_no_alloc<>::vftable;
  local_58 = (undefined ****)&local_90;
  pfStack_88 = param_1;
  ENetClient::RegisterPacket((ENetClient *)*puVar8,8,&local_90);
  plVar10 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  puVar8 = (undefined8 *)Singleton<GameClient>::Get();
  local_90 = (undefined ****)std::_Func_impl_no_alloc<>::vftable;
  local_58 = (undefined ****)&local_90;
  pfStack_88 = param_1;
  ENetClient::RegisterPacket((ENetClient *)*puVar8,9,&local_90);
  plVar10 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  puVar8 = (undefined8 *)Singleton<GameClient>::Get();
  local_90 = (undefined ****)std::_Func_impl_no_alloc<>::vftable;
  local_58 = (undefined ****)&local_90;
  pfStack_88 = param_1;
  ENetClient::RegisterPacket((ENetClient *)*puVar8,7,&local_90);
  plVar10 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  puVar8 = (undefined8 *)Singleton<>::Get();
  pfVar4 = (float *)*puVar8;
  local_90 = (undefined ****)0x0;
  pfStack_88 = (float *)0x0;
  local_80 = 0;
  local_78 = 0;
  FUN_180007110(&local_90,"core:on_player_joined",0x15);
  pfVar3 = pfVar4 + 0x10;
  local_98 = pfVar3;
  iVar6 = _Mtx_lock(pfVar3);
  if (iVar6 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar5 = (code *)swi(3);
    puVar9 = (undefined4 *)(*pcVar5)();
    return puVar9;
  }
  if (pfVar4[0x23] == NAN) {
    pfVar4[0x23] = NAN;
    std::_Throw_Cpp_error(6);
  }
  pppppuVar13 = &local_90;
  if (0xf < local_78) {
    pppppuVar13 = (undefined *****)local_90;
  }
  uVar14 = 0xcbf29ce484222325;
  uVar15 = 0xcbf29ce484222325;
  uVar11 = uVar12;
  if (local_80 != 0) {
    do {
      uVar15 = (uVar15 ^ *(byte *)(uVar11 + (longlong)pppppuVar13)) * 0x100000001b3;
      uVar11 = uVar11 + 1;
    } while (uVar11 < local_80);
  }
  plVar10 = FUN_180001b60((longlong)pfVar4,local_40,&local_90,uVar15);
  if (plVar10[1] == 0) {
    plVar10 = FUN_18000dfe0(pfVar4,local_40,(longlong *)&local_90);
    FUN_18000dc90((longlong *)(*plVar10 + 0x30),(longlong *)0x0,0);
  }
  _Mtx_unlock(pfVar3);
  if (0xf < local_78) {
    pppppuVar13 = (undefined *****)local_90;
    if ((0xfff < local_78 + 1) &&
       (pppppuVar13 = (undefined *****)local_90[-1],
       0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pppppuVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pppppuVar13);
  }
  plVar10 = local_48;
  local_80 = 0;
  local_78 = 0xf;
  local_90 = (undefined ****)((ulonglong)local_90 & 0xffffffffffffff00);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  puVar8 = (undefined8 *)Singleton<>::Get();
  pfVar4 = (float *)*puVar8;
  local_90 = (undefined ****)0x0;
  pfStack_88 = (float *)0x0;
  local_80 = 0;
  local_78 = 0;
  FUN_180007110(&local_90,"core:on_player_left",0x13);
  pfVar3 = pfVar4 + 0x10;
  local_98 = pfVar3;
  iVar6 = _Mtx_lock(pfVar3);
  if (iVar6 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar5 = (code *)swi(3);
    puVar9 = (undefined4 *)(*pcVar5)();
    return puVar9;
  }
  if (pfVar4[0x23] == NAN) {
    pfVar4[0x23] = NAN;
    std::_Throw_Cpp_error(6);
  }
  pppppuVar13 = &local_90;
  if (0xf < local_78) {
    pppppuVar13 = (undefined *****)local_90;
  }
  if (local_80 != 0) {
    do {
      uVar14 = (uVar14 ^ *(byte *)(uVar12 + (longlong)pppppuVar13)) * 0x100000001b3;
      uVar12 = uVar12 + 1;
    } while (uVar12 < local_80);
  }
  plVar10 = FUN_180001b60((longlong)pfVar4,local_40,&local_90,uVar14);
  if (plVar10[1] == 0) {
    plVar10 = FUN_18000dfe0(pfVar4,local_40,(longlong *)&local_90);
    FUN_18000dc90((longlong *)(*plVar10 + 0x30),(longlong *)0x0,0);
  }
  _Mtx_unlock(pfVar3);
  if (0xf < local_78) {
    pppppuVar13 = (undefined *****)local_90;
    if ((0xfff < local_78 + 1) &&
       (pppppuVar13 = (undefined *****)local_90[-1],
       0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pppppuVar13)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pppppuVar13);
  }
  local_80 = 0;
  local_78 = 0xf;
  local_90 = (undefined ****)((ulonglong)local_90 & 0xffffffffffffff00);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_48 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_48 + 8))(local_48);
      }
    }
  }
  return param_1;
}



void FUN_180003430(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  pvVar2 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_180007210(pvVar2,*(undefined8 **)(param_1 + 8));
  FUN_18001c9b8(*(void **)(param_1 + 8));
  return;
}



void FUN_1800034b0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800034e0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  uint uVar5;
  void *pvVar6;
  char cVar7;
  gohBase *pgVar8;
  longlong *plVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStackY_348 [32];
  float local_310;
  undefined4 local_30c;
  undefined4 local_308;
  float local_300 [4];
  float local_2f0;
  float local_2ec;
  float local_2e8;
  undefined8 local_2e0;
  float local_2d8;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float *local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  float *local_2a8;
  uint local_2a0;
  undefined1 local_29c [4];
  longlong alStack_298 [4];
  undefined4 auStack_274 [39];
  float local_1d8 [64];
  ulonglong local_d8;
  
  pvVar6 = ThreadLocalStoragePointer;
  local_d8 = DAT_1800280c0 ^ (ulonglong)auStackY_348;
  plVar4 = *(longlong **)(param_1 + 8);
  plVar9 = (longlong *)*plVar4;
  if (plVar9 != plVar4) {
    uVar10 = (ulonglong)_tls_index;
    do {
      if ((((*(char *)((longlong)plVar9 + 0x7c) == '\0') && ((int)plVar9[3] != -1)) &&
          (cVar7 = FUN_1800020a0((int)plVar9[3]), cVar7 != '\0')) &&
         (pgVar8 = rage::gohObjectManager::GetObjectFromGuid(*(uint *)(plVar9 + 3)),
         pgVar8 != (gohBase *)0x0)) {
        local_2e0 = 0;
        local_2d8 = 0.0;
        (**(code **)(*(longlong *)pgVar8 + 0x98))(pgVar8,&local_2e0);
        local_300[0] = 0.0;
        local_300[1] = 0.0;
        local_300[2] = 0.0;
        (**(code **)(*(longlong *)pgVar8 + 0xa0))(pgVar8);
        local_300[1] = local_300[1] * 57.295776;
        local_300[0] = local_300[0] * 57.295776;
        local_300[2] = local_300[2] * 57.295776;
        fVar1 = *(float *)(plVar9 + 8);
        fVar2 = *(float *)((longlong)plVar9 + 0x44);
        fVar3 = *(float *)(plVar9 + 9);
        local_310 = *(float *)((longlong)plVar9 + 0x4c);
        local_30c = (undefined4)plVar9[10];
        local_308 = *(undefined4 *)((longlong)plVar9 + 0x54);
        local_2ac = 0;
        memset(local_29c,0,0x1c4);
        local_2a8 = local_1d8;
        local_2b8 = local_1d8;
        local_2b0 = 0;
        local_2a0 = 0;
        memset(local_1d8,0,0x100);
        if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar10 * 8) + 4) < DAT_18002969c) &&
           (FUN_18001ca68(&DAT_18002969c), DAT_18002969c == -1)) {
          DAT_180029770 = rage::scrThread::GetCommand(0x50597ee2);
          _Init_thread_footer(&DAT_18002969c);
        }
        uVar5 = local_2a0;
        if (DAT_180029770 != (_func_void_InfoBase_ptr *)0x0) {
          (*DAT_180029770)((InfoBase *)&local_2b8);
          uVar5 = local_2a0;
        }
        while (uVar5 != 0) {
          local_2a0 = uVar5 - 1;
          *(undefined4 *)alStack_298[local_2a0] =
               *(undefined4 *)((longlong)&local_2b8 + (ulonglong)((uVar5 + 3) * 0x10));
          *(undefined4 *)(alStack_298[local_2a0] + 4) = auStack_274[(ulonglong)local_2a0 * 4];
          *(undefined4 *)(alStack_298[local_2a0] + 8) = auStack_274[(ulonglong)local_2a0 * 4 + 1];
          uVar5 = local_2a0;
        }
        fVar11 = *(float *)(plVar9 + 0xb) * *(float *)(plVar9 + 0xb) +
                 *(float *)((longlong)plVar9 + 0x5c) * *(float *)((longlong)plVar9 + 0x5c) +
                 *(float *)(plVar9 + 0xc) * *(float *)(plVar9 + 0xc);
        local_2a0 = uVar5;
        if (fVar11 < 0.0) {
          fVar11 = sqrtf(fVar11);
        }
        else {
          fVar11 = SQRT(fVar11);
        }
        fVar15 = 2.0 / ((1.0 / (fVar11 + 1.0)) * 0.0999 + 0.0001);
        fVar11 = local_1d8[0] * fVar15;
        fVar18 = 1.0 / (fVar11 * 0.48 * fVar11 + fVar11 + 1.0 + fVar11 * 0.235 * fVar11 * fVar11);
        fVar12 = (float)local_2e0 - fVar1;
        fVar14 = local_2e0._4_4_ - fVar2;
        fVar16 = local_2d8 - fVar3;
        fVar17 = (fVar15 * fVar12 + *(float *)((longlong)plVar9 + 100)) * local_1d8[0];
        fVar13 = (fVar15 * fVar14 + *(float *)(plVar9 + 0xd)) * local_1d8[0];
        fVar11 = (fVar15 * fVar16 + *(float *)((longlong)plVar9 + 0x6c)) * local_1d8[0];
        *(ulonglong *)((longlong)plVar9 + 100) =
             CONCAT44((*(float *)(plVar9 + 0xd) - fVar13 * fVar15) * fVar18,
                      (*(float *)((longlong)plVar9 + 100) - fVar17 * fVar15) * fVar18);
        *(float *)((longlong)plVar9 + 0x6c) =
             (*(float *)((longlong)plVar9 + 0x6c) - fVar11 * fVar15) * fVar18;
        local_2d0 = (fVar17 + fVar12) * fVar18 + fVar1;
        local_2cc = (fVar13 + fVar14) * fVar18 + fVar2;
        local_2c8 = (fVar11 + fVar16) * fVar18 + fVar3;
        FUN_180001e00(&local_2f0,local_300,&local_310,(float *)(plVar9 + 0xe),0.1,local_1d8[0]);
        local_2f0 = local_2f0 * 0.017453292;
        local_2ec = local_2ec * 0.017453292;
        local_2e8 = local_2e8 * 0.017453292;
        (**(code **)(*(longlong *)pgVar8 + 0xa8))(pgVar8,&local_2d0,0);
        (**(code **)(*(longlong *)pgVar8 + 0xb0))(pgVar8,&local_2f0);
      }
      plVar9 = (longlong *)*plVar9;
    } while (plVar9 != plVar4);
  }
  return;
}



// public: class std::optional<struct Player> const __cdecl PlayerManager::Get(unsigned short)const
// __ptr64

undefined4 * __thiscall PlayerManager::Get(PlayerManager *this,ushort param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined6 in_register_00000012;
  ulonglong uVar6;
  ushort in_R8W;
  longlong lVar7;
  ulonglong uVar8;
  byte bStackX_19;
  
                    // 0x3a10  22  ?Get@PlayerManager@@QEBA?BV?$optional@UPlayer@@@std@@G@Z
  puVar5 = (undefined4 *)CONCAT62(in_register_00000012,param_1);
  lVar2 = *(longlong *)(this + 0x18);
  uVar8 = ((ulonglong)(byte)in_R8W ^ 0xcbf29ce484222325) * 0x100000001b3;
  uVar6 = (in_R8W >> 8 ^ uVar8) * 0x100000001b3 & *(ulonglong *)(this + 0x30);
  lVar3 = *(longlong *)(lVar2 + 8 + uVar6 * 0x10);
  lVar7 = 0;
  if (lVar3 != *(longlong *)(this + 8)) {
    uVar1 = *(ushort *)(lVar3 + 0x10);
    while ((lVar7 = lVar3, in_R8W != uVar1 &&
           (lVar7 = 0, lVar3 != *(longlong *)(lVar2 + uVar6 * 0x10)))) {
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar1 = *(ushort *)(lVar3 + 0x10);
    }
  }
  if (lVar7 == 0) {
    *(undefined1 *)(puVar5 + 0x1a) = 0;
  }
  else {
    bStackX_19 = (byte)(in_R8W >> 8);
    uVar6 = *(ulonglong *)(this + 0x30) & (bStackX_19 ^ uVar8) * 0x100000001b3;
    lVar3 = *(longlong *)(lVar2 + 8 + uVar6 * 0x10);
    if (lVar3 == *(longlong *)(this + 8)) {
LAB_180003ae6:
      std::_Xout_of_range("invalid unordered_map<K, T> key");
      pcVar4 = (code *)swi(3);
      puVar5 = (undefined4 *)(*pcVar4)();
      return puVar5;
    }
    uVar1 = *(ushort *)(lVar3 + 0x10);
    while (in_R8W != uVar1) {
      if (lVar3 == *(longlong *)(lVar2 + uVar6 * 0x10)) goto LAB_180003ae6;
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar1 = *(ushort *)(lVar3 + 0x10);
    }
    FUN_180007af0(puVar5,(undefined4 *)(lVar3 + 0x18));
    *(undefined1 *)(puVar5 + 0x1a) = 1;
  }
  return puVar5;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180003b10(float *param_1,ushort param_2,undefined4 param_3,undefined8 *******param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *******pppppppuVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 uVar4;
  ushort uVar5;
  code *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  BOOL BVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  LPVOID pvVar18;
  ULONGLONG UVar19;
  ulonglong uVar20;
  void *pvVar21;
  undefined8 ************ppppppppppppuVar22;
  longlong *plVar23;
  undefined1 auStackY_978 [32];
  undefined4 local_938;
  undefined4 local_934;
  undefined4 local_930;
  undefined4 uStack_92c;
  undefined8 *local_928;
  undefined4 local_920;
  undefined4 local_91c;
  undefined4 local_918;
  void *local_910;
  undefined8 uStack_908;
  undefined8 local_900;
  ulonglong uStack_8f8;
  undefined1 local_8f0 [8];
  ushort local_8e8 [4];
  undefined8 local_8e0;
  longlong lStack_8d8;
  void *local_8d0;
  undefined1 *puStack_8c8;
  undefined1 *local_8c0;
  float *local_8b8 [2];
  undefined4 local_8a8 [2];
  undefined8 ***********local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  ulonglong local_888;
  undefined8 local_880;
  undefined4 local_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined4 local_848;
  char local_844;
  undefined8 *local_838;
  uint local_830;
  undefined4 local_82c;
  undefined8 *local_828;
  uint local_820;
  undefined1 local_81c [4];
  longlong alStack_818 [4];
  undefined4 auStack_7f4 [39];
  undefined8 local_758 [32];
  undefined8 *local_658;
  uint local_650;
  undefined4 local_64c;
  undefined8 *local_648;
  uint local_640;
  undefined1 local_63c [4];
  longlong alStack_638 [4];
  undefined4 auStack_614 [39];
  undefined8 local_578 [32];
  undefined8 *local_478;
  uint local_470;
  undefined4 local_46c;
  undefined8 *local_468;
  uint local_460;
  undefined1 local_45c [4];
  longlong alStack_458 [4];
  undefined4 auStack_434 [39];
  undefined8 local_398 [32];
  undefined8 *local_298;
  uint local_290;
  undefined4 local_28c;
  undefined8 *local_288;
  uint local_280;
  undefined1 local_27c [4];
  longlong alStack_278 [4];
  undefined4 auStack_254 [39];
  undefined8 local_1b8 [32];
  ulonglong local_b8;
  
  local_b8 = DAT_1800280c0 ^ (ulonglong)auStackY_978;
  uVar20 = *(ulonglong *)(param_1 + 0xc) &
           (((ulonglong)param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
           (ulonglong)(param_2 >> 8)) * 0x100000001b3;
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 6) + 8 + uVar20 * 0x10);
  if (lVar14 == *(longlong *)(param_1 + 2)) {
LAB_180003be9:
    lVar14 = 0;
  }
  else {
    uVar5 = *(ushort *)(lVar14 + 0x10);
    while (param_2 != uVar5) {
      if (lVar14 == *(longlong *)(*(longlong *)(param_1 + 6) + uVar20 * 0x10)) goto LAB_180003be9;
      lVar14 = *(longlong *)(lVar14 + 8);
      uVar5 = *(ushort *)(lVar14 + 0x10);
    }
  }
  local_8e8[0] = param_2;
  local_8b8[0] = param_1;
  if (lVar14 == 0) {
    uVar10 = FUN_1800028b0();
    local_928 = (undefined8 *)CONCAT44(local_928._4_4_,uVar10);
    local_8a8[0] = 0xffffffff;
    uStack_898 = 0;
    local_890 = 0;
    local_888 = 0xf;
    local_8a0 = (undefined8 ************)0x0;
    local_880 = 0;
    local_878 = 0;
    uStack_874 = 0;
    uStack_870 = 0;
    uStack_86c = 0;
    local_868 = 0;
    uStack_860 = 0;
    local_858 = 0;
    uStack_850 = 0;
    local_848 = 0;
    local_844 = 0;
    if (&local_8a0 != (undefined8 ************)param_4) {
      pppppppuVar1 = param_4 + 2;
      if ((undefined8 ******)0xf < param_4[3]) {
        param_4 = (undefined8 *******)*param_4;
      }
      FUN_180006710((longlong *)&local_8a0,param_4,(size_t)*pppppppuVar1);
    }
    local_880 = *param_5;
    local_878 = *(undefined4 *)(param_5 + 1);
    uStack_874 = (undefined4)*param_6;
    uStack_870 = (undefined4)((ulonglong)*param_6 >> 0x20);
    uStack_86c = *(undefined4 *)(param_6 + 1);
    plVar13 = (longlong *)Singleton<GameClient>::Get();
    uVar5 = *(ushort *)(*plVar13 + 0x110);
    plVar13 = (longlong *)CONCAT44(uStack_92c,local_930);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar23 = plVar13 + 1;
      lVar14 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13);
        }
      }
    }
    uVar16 = *param_6;
    uVar10 = *(undefined4 *)(param_6 + 1);
    uVar7 = *param_5;
    uVar4 = *(undefined4 *)(param_5 + 1);
    if (uVar5 == param_2) {
      FUN_180002210(param_3);
      lVar14 = _Xtime_get_ticks();
      cVar9 = FUN_1800023b0(param_3);
      while (cVar9 == '\0') {
        ThisFiber::Wait(0);
        cVar9 = FUN_1800023b0(param_3);
      }
      lVar15 = _Xtime_get_ticks();
      lVar15 = lVar15 / 10 - lVar14 / 10;
      lVar14 = lVar15;
      if (20000 < lVar15) {
        lVar14 = 0;
        Log::Print(2,(char *)0x0,"Player model request took: %llu microsecond(s)",lVar15);
      }
      uVar10 = FUN_180006b10(local_928._0_4_,lVar14,param_3,uVar7,uVar4,uVar16,uVar10);
      local_844 = '\x01';
      local_64c = 0;
      local_8a8[0] = uVar10;
      memset(local_63c,0,0x1c4);
      local_648 = local_578;
      local_658 = local_578;
      local_650 = 0;
      local_640 = 0;
      memset(local_578,0,0x100);
      local_578[local_650] = 0;
      *(undefined4 *)(local_578 + local_650) = uVar10;
      local_650 = local_650 + 1;
      uVar20 = (ulonglong)_tls_index;
      lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8);
      if ((*(int *)(lVar14 + 4) < DAT_1800296d0) &&
         (FUN_18001ca68(&DAT_1800296d0), DAT_1800296d0 == -1)) {
        DAT_180029778 = rage::scrThread::GetCommand(0x8efdfe89);
        _Init_thread_footer(&DAT_1800296d0);
      }
      uVar8 = local_640;
      if (DAT_180029778 != (_func_void_InfoBase_ptr *)0x0) {
        (*DAT_180029778)((InfoBase *)&local_658);
        uVar8 = local_640;
      }
      while (uVar8 != 0) {
        local_640 = uVar8 - 1;
        *(undefined4 *)alStack_638[local_640] =
             *(undefined4 *)((longlong)&local_658 + (ulonglong)((uVar8 + 3) * 0x10));
        *(undefined4 *)(alStack_638[local_640] + 4) = auStack_614[(ulonglong)local_640 * 4];
        *(undefined4 *)(alStack_638[local_640] + 8) = auStack_614[(ulonglong)local_640 * 4 + 1];
        uVar8 = local_640;
      }
      local_82c = 0;
      local_640 = uVar8;
      memset(local_81c,0,0x1c4);
      local_828 = local_758;
      local_838 = local_758;
      local_830 = 0;
      local_820 = 0;
      memset(local_758,0,0x100);
      local_758[local_830] = 0;
      *(undefined4 *)(local_758 + local_830) = 0;
      local_758[local_830 + 1] = 0;
      *(undefined1 *)(local_758 + (local_830 + 1)) = 1;
      local_758[local_830 + 2] = 0;
      *(undefined4 *)(local_758 + (local_830 + 2)) = 0;
      local_758[local_830 + 3] = 0;
      *(undefined4 *)(local_758 + (local_830 + 3)) = 0;
      local_830 = local_830 + 4;
      if ((*(int *)(lVar14 + 4) < DAT_180029720) &&
         (FUN_18001ca68(&DAT_180029720), DAT_180029720 == -1)) {
        DAT_1800297c0 = rage::scrThread::GetCommand(0xd17afcd8);
        _Init_thread_footer(&DAT_180029720);
      }
      uVar8 = local_820;
      if (DAT_1800297c0 != (_func_void_InfoBase_ptr *)0x0) {
        (*DAT_1800297c0)((InfoBase *)&local_838);
        uVar8 = local_820;
      }
      while (local_820 = uVar8, uVar8 != 0) {
        local_820 = uVar8 - 1;
        *(undefined4 *)alStack_818[local_820] =
             *(undefined4 *)((longlong)&local_838 + (ulonglong)((uVar8 + 3) * 0x10));
        *(undefined4 *)(alStack_818[local_820] + 4) = auStack_7f4[(ulonglong)local_820 * 4];
        *(undefined4 *)(alStack_818[local_820] + 8) = auStack_7f4[(ulonglong)local_820 * 4 + 1];
        uVar8 = local_820;
      }
    }
    else {
      local_938 = *(undefined4 *)param_5;
      local_934 = *(undefined4 *)((longlong)param_5 + 4);
      local_930 = uVar4;
      local_920 = *(undefined4 *)param_6;
      local_91c = *(undefined4 *)((longlong)param_6 + 4);
      local_918 = uVar10;
      uVar10 = FUN_180002b90(local_928._0_4_,param_3,&local_938,&local_920);
      local_844 = '\0';
      local_82c = 0;
      local_8a8[0] = uVar10;
      memset(local_81c,0,0x1c4);
      local_828 = local_758;
      local_838 = local_758;
      local_830 = 0;
      local_820 = 0;
      memset(local_758,0,0x100);
      local_758[local_830] = 0;
      *(undefined4 *)(local_758 + local_830) = uVar10;
      local_758[local_830 + 1] = 0;
      *(undefined1 *)(local_758 + (local_830 + 1)) = 1;
      local_830 = local_830 + 2;
      uVar20 = (ulonglong)_tls_index;
      lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8);
      if ((*(int *)(lVar14 + 4) < DAT_180029790) &&
         (FUN_18001ca68(&DAT_180029790), DAT_180029790 == -1)) {
        DAT_1800296e8 = rage::scrThread::GetCommand(0xe38ef526);
        _Init_thread_footer(&DAT_180029790);
      }
      uVar8 = local_820;
      if (DAT_1800296e8 != (_func_void_InfoBase_ptr *)0x0) {
        (*DAT_1800296e8)((InfoBase *)&local_838);
        uVar8 = local_820;
      }
      while (uVar8 != 0) {
        local_820 = uVar8 - 1;
        *(undefined4 *)alStack_818[local_820] =
             *(undefined4 *)((longlong)&local_838 + (ulonglong)((uVar8 + 3) * 0x10));
        *(undefined4 *)(alStack_818[local_820] + 4) = auStack_7f4[(ulonglong)local_820 * 4];
        *(undefined4 *)(alStack_818[local_820] + 8) = auStack_7f4[(ulonglong)local_820 * 4 + 1];
        uVar8 = local_820;
      }
      local_64c = 0;
      local_820 = uVar8;
      memset(local_63c,0,0x1c4);
      local_648 = local_578;
      local_658 = local_578;
      local_650 = 0;
      local_640 = 0;
      memset(local_578,0,0x100);
      local_578[local_650] = 0;
      *(undefined4 *)(local_578 + local_650) = local_8a8[0];
      local_650 = local_650 + 1;
      if ((*(int *)(lVar14 + 4) < DAT_180029760) &&
         (FUN_18001ca68(&DAT_180029760), DAT_180029760 == -1)) {
        DAT_180029768 = rage::scrThread::GetCommand(0x17d270e);
        _Init_thread_footer(&DAT_180029760);
      }
      uVar8 = local_640;
      if (DAT_180029768 != (_func_void_InfoBase_ptr *)0x0) {
        (*DAT_180029768)((InfoBase *)&local_658);
        uVar8 = local_640;
      }
      while (local_640 = uVar8, uVar8 != 0) {
        local_640 = uVar8 - 1;
        *(undefined4 *)alStack_638[local_640] =
             *(undefined4 *)((longlong)&local_658 + (ulonglong)((uVar8 + 3) * 0x10));
        *(undefined4 *)(alStack_638[local_640] + 4) = auStack_614[(ulonglong)local_640 * 4];
        *(undefined4 *)(alStack_638[local_640] + 8) = auStack_614[(ulonglong)local_640 * 4 + 1];
        uVar8 = local_640;
      }
    }
    cVar9 = FUN_1800020a0(local_8a8[0]);
    if (cVar9 == '\0') {
      ppppppppppppuVar22 = &local_8a0;
      if (0xf < local_888) {
        ppppppppppppuVar22 = (undefined8 ************)local_8a0;
      }
      Log::Print(3,(char *)0x0,"Failed to create player %s (%u)",ppppppppppppuVar22);
    }
    else {
      local_46c = 0;
      memset(local_45c,0,0x1c4);
      local_468 = local_398;
      local_478 = local_398;
      local_470 = 0;
      local_460 = 0;
      memset(local_398,0,0x100);
      local_398[local_470] = 0;
      *(undefined4 *)(local_398 + local_470) = local_8a8[0];
      local_470 = local_470 + 1;
      lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8);
      if ((*(int *)(lVar14 + 4) < DAT_1800296a0) &&
         (FUN_18001ca68(&DAT_1800296a0), DAT_1800296a0 == -1)) {
        DAT_180029710 = rage::scrThread::GetCommand(0x1f7f405c);
        _Init_thread_footer(&DAT_1800296a0);
      }
      uVar8 = local_460;
      if (DAT_180029710 != (_func_void_InfoBase_ptr *)0x0) {
        (*DAT_180029710)((InfoBase *)&local_478);
        uVar8 = local_460;
      }
      while (uVar8 != 0) {
        local_460 = uVar8 - 1;
        *(undefined4 *)alStack_458[local_460] =
             *(undefined4 *)((longlong)&local_478 + (ulonglong)((uVar8 + 3) * 0x10));
        *(undefined4 *)(alStack_458[local_460] + 4) = auStack_434[(ulonglong)local_460 * 4];
        *(undefined4 *)(alStack_458[local_460] + 8) = auStack_434[(ulonglong)local_460 * 4 + 1];
        uVar8 = local_460;
      }
      local_28c = 0;
      local_460 = uVar8;
      memset(local_27c,0,0x1c4);
      local_288 = local_1b8;
      local_298 = local_1b8;
      local_290 = 0;
      local_280 = 0;
      memset(local_1b8,0,0x100);
      local_1b8[local_290] = 0;
      *(undefined4 *)(local_1b8 + local_290) = local_8a8[0];
      local_290 = local_290 + 1;
      if ((*(int *)(lVar14 + 4) < DAT_180029764) &&
         (FUN_18001ca68(&DAT_180029764), DAT_180029764 == -1)) {
        DAT_1800296e0 = rage::scrThread::GetCommand(0xe4d418d1);
        _Init_thread_footer(&DAT_180029764);
      }
      uVar8 = local_280;
      if (DAT_1800296e0 != (_func_void_InfoBase_ptr *)0x0) {
        (*DAT_1800296e0)((InfoBase *)&local_298);
        uVar8 = local_280;
      }
      while (uVar8 != 0) {
        local_280 = uVar8 - 1;
        *(undefined4 *)alStack_278[local_280] =
             *(undefined4 *)((longlong)&local_298 + (ulonglong)((uVar8 + 3) * 0x10));
        *(undefined4 *)(alStack_278[local_280] + 4) = auStack_254[(ulonglong)local_280 * 4];
        *(undefined4 *)(alStack_278[local_280] + 8) = auStack_254[(ulonglong)local_280 * 4 + 1];
        uVar8 = local_280;
      }
      local_82c = 0;
      local_280 = uVar8;
      memset(local_81c,0,0x1c4);
      local_828 = local_758;
      local_838 = local_758;
      local_830 = 0;
      local_820 = 0;
      memset(local_758,0,0x100);
      local_758[local_830] = 0;
      *(undefined4 *)(local_758 + local_830) = local_8a8[0];
      local_758[local_830 + 1] = 0;
      *(undefined4 *)(local_758 + (local_830 + 1)) = 0x42c80000;
      local_830 = local_830 + 2;
      if ((*(int *)(lVar14 + 4) < DAT_180029688) &&
         (FUN_18001ca68(&DAT_180029688), DAT_180029688 == -1)) {
        DAT_1800296b8 = rage::scrThread::GetCommand(0x165bd4c5);
        _Init_thread_footer(&DAT_180029688);
      }
      uVar8 = local_820;
      if (DAT_1800296b8 != (_func_void_InfoBase_ptr *)0x0) {
        (*DAT_1800296b8)((InfoBase *)&local_838);
        uVar8 = local_820;
      }
      while (uVar8 != 0) {
        local_820 = uVar8 - 1;
        *(undefined4 *)alStack_818[local_820] =
             *(undefined4 *)((longlong)&local_838 + (ulonglong)((uVar8 + 3) * 0x10));
        *(undefined4 *)(alStack_818[local_820] + 4) = auStack_7f4[(ulonglong)local_820 * 4];
        *(undefined4 *)(alStack_818[local_820] + 8) = auStack_7f4[(ulonglong)local_820 * 4 + 1];
        uVar8 = local_820;
      }
      local_64c = 0;
      local_820 = uVar8;
      memset(local_63c,0,0x1c4);
      local_648 = local_578;
      local_658 = local_578;
      local_650 = 0;
      local_640 = 0;
      memset(local_578,0,0x100);
      local_578[local_650] = 0;
      *(undefined4 *)(local_578 + local_650) = local_8a8[0];
      local_578[local_650 + 1] = 0;
      *(undefined4 *)(local_578 + (local_650 + 1)) = 0x42c80000;
      local_650 = local_650 + 2;
      if ((*(int *)(lVar14 + 4) < DAT_180029708) &&
         (FUN_18001ca68(&DAT_180029708), DAT_180029708 == -1)) {
        DAT_180029758 = rage::scrThread::GetCommand(0xfa090024);
        _Init_thread_footer(&DAT_180029708);
      }
      uVar8 = local_640;
      if (DAT_180029758 != (_func_void_InfoBase_ptr *)0x0) {
        (*DAT_180029758)((InfoBase *)&local_658);
        uVar8 = local_640;
      }
      while (uVar8 != 0) {
        local_640 = uVar8 - 1;
        *(undefined4 *)alStack_638[local_640] =
             *(undefined4 *)((longlong)&local_658 + (ulonglong)((uVar8 + 3) * 0x10));
        *(undefined4 *)(alStack_638[local_640] + 4) = auStack_614[(ulonglong)local_640 * 4];
        *(undefined4 *)(alStack_638[local_640] + 8) = auStack_614[(ulonglong)local_640 * 4 + 1];
        uVar8 = local_640;
      }
      local_640 = uVar8;
      FUN_180006d50(local_8b8[0],(undefined8 *)&local_938,(byte *)local_8e8,local_8a8);
      local_928 = &local_8e0;
      local_8d0 = (void *)0x0;
      puStack_8c8 = (undefined1 *)0x0;
      local_8c0 = (undefined1 *)0x0;
      local_8e0 = 0;
      lStack_8d8 = 0;
      local_8b8[0] = (float *)0x400;
      FUN_18000f5f0((longlong *)&local_8d0,(ulonglong *)local_8b8);
      local_8f0[0] = 3;
      if (puStack_8c8 == local_8c0) {
        FUN_18000fc70((longlong *)&local_8d0,puStack_8c8,local_8f0);
      }
      else {
        *puStack_8c8 = 3;
        puStack_8c8 = puStack_8c8 + 1;
      }
      lStack_8d8 = lStack_8d8 + 1;
      uVar20 = (ulonglong)local_8e8[0];
      local_8f0[0] = 1;
      if (puStack_8c8 == local_8c0) {
        FUN_18000fc70((longlong *)&local_8d0,puStack_8c8,local_8f0);
      }
      else {
        *puStack_8c8 = 1;
        puStack_8c8 = puStack_8c8 + 1;
      }
      lStack_8d8 = lStack_8d8 + 1;
      FUN_18000eb20((longlong)&local_8e0,uVar20);
      plVar13 = FUN_180006190(&local_910,&local_8a0);
      FUN_180001110((longlong)&local_8e0,plVar13);
      cVar9 = local_844;
      local_8f0[0] = 3;
      if (puStack_8c8 == local_8c0) {
        FUN_18000fc70((longlong *)&local_8d0,puStack_8c8,local_8f0);
      }
      else {
        *puStack_8c8 = 3;
        puStack_8c8 = puStack_8c8 + 1;
      }
      lStack_8d8 = lStack_8d8 + 1;
      local_8f0[0] = cVar9 != '\0';
      if (puStack_8c8 == local_8c0) {
        FUN_18000fc70((longlong *)&local_8d0,puStack_8c8,local_8f0);
      }
      else {
        *puStack_8c8 = local_8f0[0];
        puStack_8c8 = puStack_8c8 + 1;
      }
      lStack_8d8 = lStack_8d8 + 1;
      plVar13 = (longlong *)Singleton<>::Get();
      lVar14 = *plVar13;
      local_910 = (void *)0x0;
      uStack_908 = 0;
      local_900 = 0;
      uStack_8f8 = 0;
      FUN_180007110(&local_910,"core:on_player_joined",0x15);
      pfVar3 = (float *)(lVar14 + 0x40);
      local_8b8[0] = pfVar3;
      iVar11 = _Mtx_lock(pfVar3);
      if (iVar11 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)(lVar14 + 0x8c) == 0x7fffffff) {
        *(undefined4 *)(lVar14 + 0x8c) = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      uVar16 = FUN_180001a70(lVar14,&local_910);
      if ((char)uVar16 != '\0') {
        puVar17 = (undefined8 *)FUN_18000db80(lVar14,&local_910);
        plVar13 = (longlong *)puVar17[1];
        for (plVar23 = (longlong *)*puVar17; plVar23 != plVar13; plVar23 = plVar23 + 2) {
          puVar17 = (undefined8 *)*plVar23;
          BVar12 = IsThreadAFiber();
          pvVar18 = FiberData;
          if (BVar12 == 0) {
            pvVar18 = ConvertThreadToFiber((LPVOID)0x0);
          }
          puVar17[1] = pvVar18;
          UVar19 = GetTickCount64();
          if ((ulonglong)puVar17[2] <= UVar19) {
            puVar17[5] = local_8e0;
            puVar17[6] = lStack_8d8;
            if ((void **)(puVar17 + 7) != &local_8d0) {
              FUN_18000e340(puVar17 + 7,local_8d0,(longlong)puStack_8c8 - (longlong)local_8d0);
            }
            SwitchToFiber((LPVOID)*puVar17);
          }
        }
      }
      _Mtx_unlock(pfVar3);
      if (0xf < uStack_8f8) {
        pvVar21 = local_910;
        if ((0xfff < uStack_8f8 + 1) &&
           (pvVar21 = *(void **)((longlong)local_910 + -8),
           0x1f < (ulonglong)((longlong)local_910 + (-8 - (longlong)pvVar21)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18001c9b8(pvVar21);
      }
      plVar13 = (longlong *)CONCAT44(uStack_92c,local_930);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar23 = plVar13 + 1;
        lVar14 = *plVar23;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13);
          }
        }
      }
      if (local_8d0 != (void *)0x0) {
        pvVar21 = local_8d0;
        if ((0xfff < (ulonglong)((longlong)local_8c0 - (longlong)local_8d0)) &&
           (pvVar21 = *(void **)((longlong)local_8d0 + -8),
           0x1f < (ulonglong)((longlong)local_8d0 + (-8 - (longlong)pvVar21)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18001c9b8(pvVar21);
      }
    }
    if (0xf < local_888) {
      ppppppppppppuVar22 = (undefined8 ************)local_8a0;
      if ((0xfff < local_888 + 1) &&
         (ppppppppppppuVar22 = (undefined8 ************)local_8a0[-1],
         0x1f < (ulonglong)((longlong)local_8a0 + (-8 - (longlong)ppppppppppppuVar22)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(ppppppppppppuVar22);
    }
  }
  else {
    Log::Print(3,(char *)0x0,
               "Failed to create player with id %u, a player with this id already exist !",
               (ulonglong)param_2);
  }
  return;
}



void FUN_180004c50(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    pvVar1 = *(void **)(param_1 + 8);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x20) + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180004cc0(longlong param_1,ulonglong param_2,int param_3)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  longlong lVar7;
  gohBase *pgVar8;
  sagActor *psVar9;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_408 [32];
  int *local_3e8;
  uint local_3e0;
  undefined4 local_3dc;
  int *local_3d8;
  uint local_3d0;
  undefined1 local_3cc [4];
  longlong alStack_3c8 [4];
  undefined4 auStack_3a4 [39];
  int local_308 [64];
  int *local_208;
  uint local_200;
  undefined4 local_1fc;
  int *local_1f8;
  uint local_1f0;
  undefined1 local_1ec [4];
  longlong alStack_1e8 [4];
  undefined4 auStack_1c4 [39];
  int local_128 [64];
  ulonglong local_28;
  
  local_28 = DAT_1800280c0 ^ (ulonglong)auStack_408;
  uVar12 = (param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3;
  uVar11 = ((param_2 & 0xffff) >> 8 ^ uVar12) * 0x100000001b3 & *(ulonglong *)(param_1 + 0x30);
  lVar4 = *(longlong *)(param_1 + 0x18);
  lVar7 = *(longlong *)(lVar4 + 8 + uVar11 * 0x10);
  if (lVar7 == *(longlong *)(param_1 + 8)) {
LAB_180004d61:
    lVar7 = 0;
  }
  else {
    sVar2 = *(short *)(lVar7 + 0x10);
    while ((short)param_2 != sVar2) {
      if (lVar7 == *(longlong *)(lVar4 + uVar11 * 0x10)) goto LAB_180004d61;
      lVar7 = *(longlong *)(lVar7 + 8);
      sVar2 = *(short *)(lVar7 + 0x10);
    }
  }
  if (lVar7 != 0) {
    uVar11 = *(ulonglong *)(param_1 + 0x30) & (param_2 >> 8 & 0xff ^ uVar12) * 0x100000001b3;
    lVar7 = *(longlong *)(lVar4 + 8 + uVar11 * 0x10);
    if (lVar7 == *(longlong *)(param_1 + 8)) {
LAB_1800051bf:
      std::_Xout_of_range("invalid unordered_map<K, T> key");
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    sVar2 = *(short *)(lVar7 + 0x10);
    while ((short)param_2 != sVar2) {
      if (lVar7 == *(longlong *)(lVar4 + uVar11 * 0x10)) goto LAB_1800051bf;
      lVar7 = *(longlong *)(lVar7 + 8);
      sVar2 = *(short *)(lVar7 + 0x10);
    }
    FUN_1800028b0();
    local_1fc = 0;
    memset(local_1ec,0,0x1c4);
    local_1f8 = local_128;
    local_208 = local_128;
    local_200 = 0;
    local_1f0 = 0;
    memset(local_128,0,0x100);
    (local_128 + (ulonglong)local_200 * 2)[0] = 0;
    (local_128 + (ulonglong)local_200 * 2)[1] = 0;
    local_128[(ulonglong)local_200 * 2] = param_3;
    local_200 = local_200 + 1;
    piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 4);
    if ((*piVar10 < DAT_180029738) && (FUN_18001ca68(&DAT_180029738), DAT_180029738 == -1)) {
      DAT_180029728 = rage::scrThread::GetCommand(0x6ac01fcb);
      _Init_thread_footer(&DAT_180029738);
    }
    uVar6 = local_1f0;
    if (DAT_180029728 != (_func_void_InfoBase_ptr *)0x0) {
      (*DAT_180029728)((InfoBase *)&local_208);
      uVar6 = local_1f0;
    }
    while (uVar6 != 0) {
      local_1f0 = uVar6 - 1;
      *(undefined4 *)alStack_1e8[local_1f0] =
           *(undefined4 *)((longlong)&local_208 + (ulonglong)((uVar6 + 3) * 0x10));
      *(undefined4 *)(alStack_1e8[local_1f0] + 4) = auStack_1c4[(ulonglong)local_1f0 * 4];
      *(undefined4 *)(alStack_1e8[local_1f0] + 8) = auStack_1c4[(ulonglong)local_1f0 * 4 + 1];
      uVar6 = local_1f0;
    }
    if (local_128[0] == 0) {
      local_3e8 = local_308;
      local_3d8 = local_308;
      local_1f0 = uVar6;
      if (*(char *)(lVar7 + 0x7c) == '\0') {
        pgVar8 = rage::gohObjectManager::GetObjectFromGuid(*(uint *)(lVar7 + 0x18));
        if ((pgVar8 != (gohBase *)0x0) &&
           (psVar9 = rage::sagActorManager::GetActor(*(uint *)(pgVar8 + 0xb0)),
           psVar9 != (sagActor *)0x0)) {
          *(int *)(psVar9 + 0x108) = param_3;
          iVar3 = *(int *)(lVar7 + 0x18);
          local_3dc = 0;
          memset(local_3cc,0,0x1c4);
          local_3e0 = 0;
          local_3d0 = 0;
          memset(local_308,0,0x100);
          piVar1 = local_308 + (ulonglong)local_3e0 * 2;
          piVar1[0] = 0;
          piVar1[1] = 0;
          local_308[(ulonglong)local_3e0 * 2] = iVar3;
          piVar1 = local_308 + (ulonglong)(local_3e0 + 1) * 2;
          piVar1[0] = 0;
          piVar1[1] = 0;
          local_308[(ulonglong)(local_3e0 + 1) * 2] = 0;
          local_3e0 = local_3e0 + 2;
          if ((*piVar10 < DAT_180029750) && (FUN_18001ca68(&DAT_180029750), DAT_180029750 == -1)) {
            DAT_180029780 = rage::scrThread::GetCommand(0x7ab17813);
            _Init_thread_footer(&DAT_180029750);
          }
          uVar6 = local_3d0;
          if (DAT_180029780 != (_func_void_InfoBase_ptr *)0x0) {
            (*DAT_180029780)((InfoBase *)&local_3e8);
            uVar6 = local_3d0;
          }
          while (uVar6 != 0) {
            local_3d0 = uVar6 - 1;
            *(undefined4 *)alStack_3c8[local_3d0] =
                 *(undefined4 *)((longlong)&local_3e8 + (ulonglong)((uVar6 + 3) * 0x10));
            *(undefined4 *)(alStack_3c8[local_3d0] + 4) = auStack_3a4[(ulonglong)local_3d0 * 4];
            *(undefined4 *)(alStack_3c8[local_3d0] + 8) = auStack_3a4[(ulonglong)local_3d0 * 4 + 1];
            uVar6 = local_3d0;
          }
        }
      }
      else {
        local_3dc = 0;
        memset(local_3cc,0,0x1c4);
        local_3e0 = 0;
        local_3d0 = 0;
        memset(local_308,0,0x100);
        piVar1 = local_308 + (ulonglong)local_3e0 * 2;
        piVar1[0] = 0;
        piVar1[1] = 0;
        local_308[(ulonglong)local_3e0 * 2] = param_3;
        piVar1 = local_308 + (ulonglong)(local_3e0 + 1) * 2;
        piVar1[0] = 0;
        piVar1[1] = 0;
        local_308[(ulonglong)(local_3e0 + 1) * 2] = 0;
        local_3e0 = local_3e0 + 2;
        if ((*piVar10 < DAT_1800296f4) && (FUN_18001ca68(&DAT_1800296f4), DAT_1800296f4 == -1)) {
          DAT_180029748 = rage::scrThread::GetCommand(0x95fba0b0);
          _Init_thread_footer(&DAT_1800296f4);
        }
        uVar6 = local_3d0;
        if (DAT_180029748 != (_func_void_InfoBase_ptr *)0x0) {
          (*DAT_180029748)((InfoBase *)&local_3e8);
          uVar6 = local_3d0;
        }
        while (uVar6 != 0) {
          local_3d0 = uVar6 - 1;
          *(undefined4 *)alStack_3c8[local_3d0] =
               *(undefined4 *)((longlong)&local_3e8 + (ulonglong)((uVar6 + 3) * 0x10));
          *(undefined4 *)(alStack_3c8[local_3d0] + 4) = auStack_3a4[(ulonglong)local_3d0 * 4];
          *(undefined4 *)(alStack_3c8[local_3d0] + 8) = auStack_3a4[(ulonglong)local_3d0 * 4 + 1];
          uVar6 = local_3d0;
        }
      }
    }
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800051d0(longlong param_1,ushort param_2)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  BOOL BVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  LPVOID pvVar14;
  ULONGLONG UVar15;
  ulonglong uVar16;
  void *pvVar17;
  longlong *plVar18;
  int *piVar19;
  undefined1 auStack_848 [32];
  undefined2 local_828;
  undefined8 *local_820;
  void *local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  ulonglong uStack_800;
  undefined1 local_7f8 [8];
  undefined8 local_7f0;
  longlong lStack_7e8;
  void *local_7e0;
  undefined1 *puStack_7d8;
  undefined1 *local_7d0;
  ulonglong local_7c8;
  longlong *local_7c0;
  undefined8 *local_7b8;
  uint local_7b0;
  undefined4 local_7ac;
  undefined8 *local_7a8;
  uint local_7a0;
  undefined1 local_79c [4];
  longlong alStack_798 [4];
  undefined4 auStack_774 [39];
  undefined8 local_6d8 [32];
  char *local_5d8;
  uint local_5d0;
  undefined4 local_5cc;
  char *local_5c8;
  uint local_5c0;
  undefined1 local_5bc [4];
  longlong alStack_5b8 [4];
  undefined4 auStack_594 [39];
  char local_4f8 [256];
  undefined8 *local_3f8;
  uint local_3f0;
  undefined4 local_3ec;
  undefined8 *local_3e8;
  uint local_3e0;
  undefined1 local_3dc [4];
  longlong alStack_3d8 [4];
  undefined4 auStack_3b4 [39];
  undefined8 local_318 [32];
  undefined8 *local_218;
  uint local_210;
  undefined4 local_20c;
  undefined8 *local_208;
  uint local_200;
  undefined1 local_1fc [4];
  longlong alStack_1f8 [4];
  undefined4 auStack_1d4 [39];
  undefined8 local_138 [32];
  ulonglong local_38;
  
  local_38 = DAT_1800280c0 ^ (ulonglong)auStack_848;
  uVar16 = *(ulonglong *)(param_1 + 0x30) &
           (((ulonglong)(byte)param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
           (ulonglong)(param_2 >> 8)) * 0x100000001b3;
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar10 = *(longlong *)(lVar5 + 8 + uVar16 * 0x10);
  if (lVar10 == *(longlong *)(param_1 + 8)) {
LAB_180005281:
    lVar10 = 0;
  }
  else {
    uVar3 = *(ushort *)(lVar10 + 0x10);
    while (param_2 != uVar3) {
      if (lVar10 == *(longlong *)(lVar5 + uVar16 * 0x10)) goto LAB_180005281;
      lVar10 = *(longlong *)(lVar10 + 8);
      uVar3 = *(ushort *)(lVar10 + 0x10);
    }
  }
  local_828 = param_2;
  if (lVar10 == 0) {
    Log::Print(3,(char *)0x0,"Failed to delete player with id %u, no player with this id exist !",
               (ulonglong)param_2);
  }
  else {
    local_828._1_1_ = (byte)(param_2 >> 8);
    uVar16 = *(ulonglong *)(param_1 + 0x30) &
             (((ulonglong)(byte)param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)local_828._1_1_) * 0x100000001b3;
    lVar10 = *(longlong *)(lVar5 + 8 + uVar16 * 0x10);
    if (lVar10 == *(longlong *)(param_1 + 8)) {
LAB_180005b1a:
      std::_Xout_of_range("invalid unordered_map<K, T> key");
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar3 = *(ushort *)(lVar10 + 0x10);
    while (param_2 != uVar3) {
      if (lVar10 == *(longlong *)(lVar5 + uVar16 * 0x10)) goto LAB_180005b1a;
      lVar10 = *(longlong *)(lVar10 + 8);
      uVar3 = *(ushort *)(lVar10 + 0x10);
    }
    uVar4 = *(undefined4 *)(lVar10 + 0x18);
    local_7ac = 0;
    memset(local_79c,0,0x1c4);
    local_7a8 = local_6d8;
    local_7b8 = local_6d8;
    local_7b0 = 0;
    local_7a0 = 0;
    memset(local_6d8,0,0x100);
    local_6d8[local_7b0] = 0;
    *(undefined4 *)(local_6d8 + local_7b0) = uVar4;
    local_7b0 = local_7b0 + 1;
    piVar19 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 4);
    if ((*piVar19 < DAT_1800297cc) && (FUN_18001ca68(&DAT_1800297cc), DAT_1800297cc == -1)) {
      DAT_180029718 = rage::scrThread::GetCommand(0x1449ee9e);
      _Init_thread_footer(&DAT_1800297cc);
    }
    uVar7 = local_7a0;
    if (DAT_180029718 != (_func_void_InfoBase_ptr *)0x0) {
      (*DAT_180029718)((InfoBase *)&local_7b8);
      uVar7 = local_7a0;
    }
    while (uVar7 != 0) {
      local_7a0 = uVar7 - 1;
      *(undefined4 *)alStack_798[local_7a0] =
           *(undefined4 *)((longlong)&local_7b8 + (ulonglong)((uVar7 + 3) * 0x10));
      *(undefined4 *)(alStack_798[local_7a0] + 4) = auStack_774[(ulonglong)local_7a0 * 4];
      *(undefined4 *)(alStack_798[local_7a0] + 8) = auStack_774[(ulonglong)local_7a0 * 4 + 1];
      uVar7 = local_7a0;
    }
    local_5cc = 0;
    local_7a0 = uVar7;
    memset(local_5bc,0,0x1c4);
    local_5c8 = local_4f8;
    local_5d8 = local_4f8;
    local_5d0 = 0;
    local_5c0 = 0;
    memset(local_4f8,0,0x100);
    pcVar1 = local_4f8 + (ulonglong)local_5d0 * 8;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    *(undefined4 *)(local_4f8 + (ulonglong)local_5d0 * 8) = (undefined4)local_6d8[0];
    local_5d0 = local_5d0 + 1;
    if ((*piVar19 < DAT_1800296c4) && (FUN_18001ca68(&DAT_1800296c4), DAT_1800296c4 == -1)) {
      DAT_1800296f8 = rage::scrThread::GetCommand(0xdcc10ba9);
      _Init_thread_footer(&DAT_1800296c4);
    }
    uVar7 = local_5c0;
    if (DAT_1800296f8 != (_func_void_InfoBase_ptr *)0x0) {
      (*DAT_1800296f8)((InfoBase *)&local_5d8);
      uVar7 = local_5c0;
    }
    while (uVar7 != 0) {
      local_5c0 = uVar7 - 1;
      *(undefined4 *)alStack_5b8[local_5c0] =
           *(undefined4 *)((longlong)&local_5d8 + (ulonglong)((uVar7 + 3) * 0x10));
      *(undefined4 *)(alStack_5b8[local_5c0] + 4) = auStack_594[(ulonglong)local_5c0 * 4];
      *(undefined4 *)(alStack_5b8[local_5c0] + 8) = auStack_594[(ulonglong)local_5c0 * 4 + 1];
      uVar7 = local_5c0;
    }
    local_5c0 = uVar7;
    if (local_4f8[0] != '\0') {
      local_3ec = 0;
      memset(local_3dc,0,0x1c4);
      local_3e8 = local_318;
      local_3f8 = local_318;
      local_3f0 = 0;
      local_3e0 = 0;
      memset(local_318,0,0x100);
      local_318[local_3f0] = 0;
      *(undefined4 *)(local_318 + local_3f0) = (undefined4)local_6d8[0];
      local_3f0 = local_3f0 + 1;
      if ((*piVar19 < DAT_18002973c) && (FUN_18001ca68(&DAT_18002973c), DAT_18002973c == -1)) {
        DAT_180029788 = rage::scrThread::GetCommand(0xd8c3c1cd);
        _Init_thread_footer(&DAT_18002973c);
      }
      uVar7 = local_3e0;
      if (DAT_180029788 != (_func_void_InfoBase_ptr *)0x0) {
        (*DAT_180029788)((InfoBase *)&local_3f8);
        uVar7 = local_3e0;
      }
      while (local_3e0 = uVar7, uVar7 != 0) {
        local_3e0 = uVar7 - 1;
        *(undefined4 *)alStack_3d8[local_3e0] =
             *(undefined4 *)((longlong)&local_3f8 + (ulonglong)((uVar7 + 3) * 0x10));
        *(undefined4 *)(alStack_3d8[local_3e0] + 4) = auStack_3b4[(ulonglong)local_3e0 * 4];
        *(undefined4 *)(alStack_3d8[local_3e0] + 8) = auStack_3b4[(ulonglong)local_3e0 * 4 + 1];
        uVar7 = local_3e0;
      }
    }
    uVar4 = *(undefined4 *)(lVar10 + 0x18);
    local_20c = 0;
    memset(local_1fc,0,0x1c4);
    local_208 = local_138;
    local_218 = local_138;
    local_210 = 0;
    local_200 = 0;
    memset(local_138,0,0x100);
    local_138[local_210] = 0;
    *(undefined4 *)(local_138 + local_210) = uVar4;
    local_210 = local_210 + 1;
    if ((*piVar19 < DAT_1800296c8) && (FUN_18001ca68(&DAT_1800296c8), DAT_1800296c8 == -1)) {
      DAT_1800297b8 = rage::scrThread::GetCommand(0x8bd21869);
      _Init_thread_footer(&DAT_1800296c8);
    }
    uVar7 = local_200;
    if (DAT_1800297b8 != (_func_void_InfoBase_ptr *)0x0) {
      (*DAT_1800297b8)((InfoBase *)&local_218);
      uVar7 = local_200;
    }
    while (uVar7 != 0) {
      local_200 = uVar7 - 1;
      *(undefined4 *)alStack_1f8[local_200] =
           *(undefined4 *)((longlong)&local_218 + (ulonglong)((uVar7 + 3) * 0x10));
      *(undefined4 *)(alStack_1f8[local_200] + 4) = auStack_1d4[(ulonglong)local_200 * 4];
      *(undefined4 *)(alStack_1f8[local_200] + 8) = auStack_1d4[(ulonglong)local_200 * 4 + 1];
      uVar7 = local_200;
    }
    local_820 = &local_7f0;
    local_7e0 = (void *)0x0;
    puStack_7d8 = (undefined1 *)0x0;
    local_7d0 = (undefined1 *)0x0;
    local_7f0 = 0;
    lStack_7e8 = 0;
    local_7c8 = 0x400;
    local_200 = uVar7;
    FUN_18000f5f0((longlong *)&local_7e0,&local_7c8);
    local_7f8[0] = 3;
    if (puStack_7d8 == local_7d0) {
      FUN_18000fc70((longlong *)&local_7e0,puStack_7d8,local_7f8);
    }
    else {
      *puStack_7d8 = 3;
      puStack_7d8 = puStack_7d8 + 1;
    }
    lStack_7e8 = lStack_7e8 + 1;
    local_7f8[0] = 1;
    if (puStack_7d8 == local_7d0) {
      FUN_18000fc70((longlong *)&local_7e0,puStack_7d8,local_7f8);
    }
    else {
      *puStack_7d8 = 1;
      puStack_7d8 = puStack_7d8 + 1;
    }
    lStack_7e8 = lStack_7e8 + 1;
    FUN_18000eb20((longlong)&local_7f0,(ulonglong)param_2);
    plVar11 = FUN_180006190(&local_818,(undefined8 *)(lVar10 + 0x20));
    FUN_180001110((longlong)&local_7f0,plVar11);
    cVar2 = *(char *)(lVar10 + 0x7c);
    local_7f8[0] = 3;
    if (puStack_7d8 == local_7d0) {
      FUN_18000fc70((longlong *)&local_7e0,puStack_7d8,local_7f8);
    }
    else {
      *puStack_7d8 = 3;
      puStack_7d8 = puStack_7d8 + 1;
    }
    lStack_7e8 = lStack_7e8 + 1;
    local_7f8[0] = cVar2 != '\0';
    if (puStack_7d8 == local_7d0) {
      FUN_18000fc70((longlong *)&local_7e0,puStack_7d8,local_7f8);
    }
    else {
      *puStack_7d8 = local_7f8[0];
      puStack_7d8 = puStack_7d8 + 1;
    }
    lStack_7e8 = lStack_7e8 + 1;
    plVar11 = (longlong *)Singleton<>::Get();
    lVar10 = *plVar11;
    local_818 = (void *)0x0;
    uStack_810 = 0;
    local_808 = 0;
    uStack_800 = 0;
    FUN_180007110(&local_818,"core:on_player_left",0x13);
    lVar5 = lVar10 + 0x40;
    local_820 = (undefined8 *)lVar5;
    iVar8 = _Mtx_lock(lVar5);
    if (iVar8 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(int *)(lVar10 + 0x8c) == 0x7fffffff) {
      *(undefined4 *)(lVar10 + 0x8c) = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    uVar12 = FUN_180001a70(lVar10,&local_818);
    if ((char)uVar12 != '\0') {
      puVar13 = (undefined8 *)FUN_18000db80(lVar10,&local_818);
      plVar11 = (longlong *)puVar13[1];
      for (plVar18 = (longlong *)*puVar13; plVar18 != plVar11; plVar18 = plVar18 + 2) {
        puVar13 = (undefined8 *)*plVar18;
        BVar9 = IsThreadAFiber();
        pvVar14 = FiberData;
        if (BVar9 == 0) {
          pvVar14 = ConvertThreadToFiber((LPVOID)0x0);
        }
        puVar13[1] = pvVar14;
        UVar15 = GetTickCount64();
        if ((ulonglong)puVar13[2] <= UVar15) {
          puVar13[5] = local_7f0;
          puVar13[6] = lStack_7e8;
          if ((void **)(puVar13 + 7) != &local_7e0) {
            FUN_18000e340(puVar13 + 7,local_7e0,(longlong)puStack_7d8 - (longlong)local_7e0);
          }
          SwitchToFiber((LPVOID)*puVar13);
        }
      }
    }
    _Mtx_unlock(lVar5);
    if (0xf < uStack_800) {
      pvVar17 = local_818;
      if ((0xfff < uStack_800 + 1) &&
         (pvVar17 = *(void **)((longlong)local_818 + -8),
         0x1f < (ulonglong)((longlong)local_818 + (-8 - (longlong)pvVar17)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar17);
    }
    if (local_7c0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_7c0 + 1;
      lVar5 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_7c0)(local_7c0);
        LOCK();
        piVar19 = (int *)((longlong)local_7c0 + 0xc);
        iVar8 = *piVar19;
        *piVar19 = *piVar19 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_7c0 + 8))(local_7c0);
        }
      }
    }
    FUN_180006f40(param_1,(byte *)&local_828);
    if (local_7e0 != (void *)0x0) {
      pvVar17 = local_7e0;
      if ((0xfff < (ulonglong)((longlong)local_7d0 - (longlong)local_7e0)) &&
         (pvVar17 = *(void **)((longlong)local_7e0 + -8),
         0x1f < (ulonglong)((longlong)local_7e0 + (-8 - (longlong)pvVar17)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar17);
    }
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180005b30(undefined8 param_1,sagPlayer *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  sagActor *this;
  gohBase *pgVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1800280c0 ^ (ulonglong)auStack_88;
  this = rage::sagPlayer::GetPlayerActor(param_2);
  if (this != (sagActor *)0x0) {
    pgVar6 = rage::sagActor::GetGohObject(this);
    if (pgVar6 != (gohBase *)0x0) {
      local_58 = 0;
      local_50 = 0.0;
      cVar5 = (**(code **)(*(longlong *)pgVar6 + 0x98))(pgVar6,&local_58);
      if (cVar5 != '\0') {
        local_68 = 0;
        local_60 = 0.0;
        (**(code **)(*(longlong *)pgVar6 + 0xa0))(pgVar6,&local_68);
        local_68._4_4_ = local_68._4_4_ * 57.295776;
        local_60 = local_60 * 57.295776;
        local_38 = (void *)0x0;
        uStack_30 = 0;
        local_28 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_20 = 0x400;
        local_68._0_4_ = (float)local_68 * 57.295776;
        FUN_18000f5f0((longlong *)&local_38,&local_20);
        uVar7 = FUN_180010b00((double)(float)local_58,' ','\b');
        FUN_18000ea20((longlong)&local_48,uVar7);
        uVar7 = FUN_180010b00((double)local_58._4_4_,' ','\b');
        FUN_18000ea20((longlong)&local_48,uVar7);
        uVar7 = FUN_180010b00((double)local_50,' ','\b');
        FUN_18000ea20((longlong)&local_48,uVar7);
        uVar7 = FUN_180010b00((double)(float)local_68,' ','\b');
        FUN_18000ea20((longlong)&local_48,uVar7);
        uVar7 = FUN_180010b00((double)local_68._4_4_,' ','\b');
        FUN_18000ea20((longlong)&local_48,uVar7);
        uVar7 = FUN_180010b00((double)local_60,' ','\b');
        FUN_18000ea20((longlong)&local_48,uVar7);
        puVar8 = (undefined8 *)Singleton<GameClient>::Get();
        ENetClient::Send((ENetClient *)*puVar8,1,2,(StreamBuffer *)&local_48);
        if (local_18 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_18 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_18)(local_18);
            LOCK();
            piVar2 = (int *)((longlong)local_18 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_18 + 8))(local_18);
            }
          }
        }
        if (local_38 != (void *)0x0) {
          pvVar9 = local_38;
          if ((0xfff < (ulonglong)(local_28 - (longlong)local_38)) &&
             (pvVar9 = *(void **)((longlong)local_38 + -8),
             0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar9)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18001c9b8(pvVar9);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: static class std::shared_ptr<class GameClient> const __cdecl Singleton<class
// GameClient>::Get(void)

void __cdecl Singleton<GameClient>::Get(void)

{
  GameClient *this;
  undefined8 *puVar1;
  undefined8 *in_RCX;
  
                    // 0x5dc0  21
                    // ?Get@?$Singleton@VGameClient@@@@SA?BV?$shared_ptr@VGameClient@@@std@@XZ
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      `public:_static_class_std::shared_ptr<GameClient>_const___cdecl_Singleton<GameClient>::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    FUN_18001ca68(&`public:_static_class_std::shared_ptr<GameClient>_const___cdecl_Singleton<GameClient>::Get(void)'
                   ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_std::shared_ptr<GameClient>_const___cdecl_Singleton<GameClient>::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _singleton = (GameClient *)0x0;
      DAT_1800297b0 = (undefined8 *)0x0;
      puVar1 = (undefined8 *)FUN_18001cae0(0x198);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 1) = 1;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
      *puVar1 = std::_Ref_count_obj2<GameClient>::vftable;
      this = (GameClient *)(puVar1 + 2);
      memset(this,0,0x188);
      GameClient::GameClient(this);
      _singleton = this;
      DAT_1800297b0 = puVar1;
      atexit(FUN_18001e740);
      _Init_thread_footer(&`public:_static_class_std::shared_ptr<GameClient>_const___cdecl_Singleton<GameClient>::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *in_RCX = 0;
  in_RCX[1] = 0;
  if (DAT_1800297b0 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(DAT_1800297b0 + 1) = *(int *)(DAT_1800297b0 + 1) + 1;
    UNLOCK();
  }
  *in_RCX = _singleton;
  in_RCX[1] = DAT_1800297b0;
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
// std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
// >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
// std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
//  public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
// >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
//  public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
// __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
// __ptr64
//  public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
// >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
//   7 names - too many to list
// 
// Library: Visual Studio 2019 Release

void FID_conflict__vector<>(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void FUN_180005f40(undefined8 *param_1)

{
  FUN_180007210(param_1,(undefined8 *)*param_1);
  FUN_18001c9b8((void *)*param_1);
  return;
}



void FUN_180005f70(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  do {
    if (puVar1 == (undefined8 *)0x0) {
      FUN_18001c9b8((void *)*param_1);
      return;
    }
    plVar2 = (longlong *)puVar1[0xd];
    puVar3 = (undefined8 *)*puVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != puVar1 + 6);
      puVar1[0xd] = 0;
    }
    if (0xf < (ulonglong)puVar1[5]) {
      pvVar4 = (void *)puVar1[2];
      pvVar5 = pvVar4;
      if ((0xfff < puVar1[5] + 1) &&
         (pvVar5 = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar5)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar5);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)(puVar1 + 2) = 0;
    FUN_18001c9b8(puVar1);
    puVar1 = puVar3;
  } while( true );
}



void FUN_180006050(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_18 [2];
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_180006510(param_1,(longlong *)**(longlong **)(param_1 + 8),*(longlong **)(param_1 + 8));
      return;
    }
    puVar1 = *(undefined8 **)(param_1 + 8);
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_180007a60(puVar1 + 2);
      FUN_18001c9b8(puVar1);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_18[0] = *(undefined8 *)(param_1 + 8);
    FUN_180007080(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_1 + 0x20),local_18);
  }
  return;
}



void FUN_180006120(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_180007a60(puVar1 + 2);
    FUN_18001c9b8(puVar1);
    puVar1 = puVar2;
  }
  FUN_18001c9b8((void *)*param_1);
  return;
}



undefined8 * FUN_180006190(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong uVar6;
  
  _Dst = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7fffffffffffffff < uVar2) {
                    // WARNING: Subroutine does not return
    FUN_180001de0();
  }
  if (uVar2 < 0x10) {
    param_1[2] = uVar2;
    param_1[3] = 0xf;
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    return param_1;
  }
  uVar6 = uVar2 | 0xf;
  if (uVar6 < 0x8000000000000000) {
    if (uVar6 < 0x16) {
      uVar6 = 0x16;
    }
    uVar1 = uVar6 + 1;
    if (uVar1 == 0) goto LAB_18000626e;
    if (uVar1 < 0x1000) {
      _Dst = (void *)FUN_18001cae0(uVar1);
      goto LAB_18000626e;
    }
    uVar4 = uVar6 + 0x28;
    if (uVar4 <= uVar1) {
                    // WARNING: Subroutine does not return
      FUN_180001d40();
    }
  }
  else {
    uVar4 = 0x8000000000000027;
    uVar6 = 0x7fffffffffffffff;
  }
  lVar5 = FUN_18001cae0(uVar4);
  if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar5;
LAB_18000626e:
  *param_1 = _Dst;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  memcpy(_Dst,param_2,uVar2 + 1);
  return param_1;
}



longlong * FUN_1800062b0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)param_2[1];
  plVar11 = (longlong *)
            ((*(ulonglong *)(param_1 + 0x30) &
             (((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3) * 0x10 + lVar1);
  plVar4 = (longlong *)*plVar11;
  plVar10 = (longlong *)plVar11[1];
  plVar8 = param_2;
  do {
    plVar9 = (longlong *)*plVar8;
    if (0xf < (ulonglong)plVar8[7]) {
      pvVar5 = (void *)plVar8[4];
      pvVar7 = pvVar5;
      if ((0xfff < plVar8[7] + 1U) &&
         (pvVar7 = *(void **)((longlong)pvVar5 + -8),
         0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar7)))) {
LAB_1800064fb:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar7);
    }
    plVar8[6] = 0;
    plVar8[7] = 0xf;
    *(undefined1 *)(plVar8 + 4) = 0;
    FUN_18001c9b8(plVar8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar8 == plVar10) {
      puVar6 = puVar3;
      if (plVar4 == param_2) {
        *plVar11 = (longlong)puVar2;
        puVar6 = puVar2;
      }
      plVar11[1] = (longlong)puVar6;
      while (plVar9 != param_3) {
        plVar11 = (longlong *)
                  ((*(ulonglong *)(param_1 + 0x30) &
                   (((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3) * 0x10 + lVar1);
        plVar4 = (longlong *)plVar11[1];
        plVar10 = plVar9;
        while( true ) {
          plVar9 = (longlong *)*plVar10;
          if (0xf < (ulonglong)plVar10[7]) {
            pvVar5 = (void *)plVar10[4];
            pvVar7 = pvVar5;
            if ((0xfff < plVar10[7] + 1U) &&
               (pvVar7 = *(void **)((longlong)pvVar5 + -8),
               0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar7)))) goto LAB_1800064fb;
            FUN_18001c9b8(pvVar7);
          }
          plVar10[6] = 0;
          plVar10[7] = 0xf;
          *(undefined1 *)(plVar10 + 4) = 0;
          FUN_18001c9b8(plVar10);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar9;
          if (plVar9 == param_3) goto LAB_1800063ca;
        }
        *plVar11 = (longlong)puVar2;
        plVar11[1] = (longlong)puVar2;
      }
      goto LAB_1800063ce;
    }
    plVar8 = plVar9;
    if (plVar9 == param_3) {
      if (plVar4 == param_2) {
LAB_1800063ca:
        *plVar11 = (longlong)plVar9;
      }
LAB_1800063ce:
      *puVar3 = plVar9;
      plVar9[1] = (longlong)puVar3;
      return param_3;
    }
  } while( true );
}



longlong * FUN_180006510(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  plVar10 = param_2 + 2;
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar4 = (undefined8 *)param_2[1];
  if (0xf < (ulonglong)param_2[5]) {
    plVar10 = (longlong *)*plVar10;
  }
  uVar6 = 0;
  uVar7 = 0xcbf29ce484222325;
  if (param_2[4] != 0) {
    do {
      pbVar1 = (byte *)((longlong)plVar10 + uVar6);
      uVar6 = uVar6 + 1;
      uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
    } while (uVar6 < (ulonglong)param_2[4]);
  }
  plVar11 = (longlong *)((*(ulonglong *)(param_1 + 0x30) & uVar7) * 0x10 + lVar2);
  plVar10 = (longlong *)plVar11[1];
  plVar8 = (longlong *)*plVar11;
  plVar12 = param_2;
  do {
    plVar9 = (longlong *)*plVar12;
    FUN_180007a60(plVar12 + 2);
    FUN_18001c9b8(plVar12);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar12 == plVar10) {
      puVar5 = puVar4;
      if (plVar8 == param_2) {
        *plVar11 = (longlong)puVar3;
        puVar5 = puVar3;
      }
      plVar11[1] = (longlong)puVar5;
      while (plVar9 != param_3) {
        plVar10 = plVar9 + 2;
        if (0xf < (ulonglong)plVar9[5]) {
          plVar10 = (longlong *)*plVar10;
        }
        uVar7 = 0;
        uVar6 = 0xcbf29ce484222325;
        if (plVar9[4] != 0) {
          do {
            pbVar1 = (byte *)(uVar7 + (longlong)plVar10);
            uVar7 = uVar7 + 1;
            uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
          } while (uVar7 < (ulonglong)plVar9[4]);
        }
        plVar12 = (longlong *)((*(ulonglong *)(param_1 + 0x30) & uVar6) * 0x10 + lVar2);
        plVar10 = (longlong *)plVar12[1];
        plVar8 = plVar9;
        while( true ) {
          plVar9 = (longlong *)*plVar8;
          FUN_180007a60(plVar8 + 2);
          FUN_18001c9b8(plVar8);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar8 == plVar10) break;
          plVar8 = plVar9;
          if (plVar9 == param_3) {
            *plVar12 = (longlong)plVar9;
            goto LAB_1800066c0;
          }
        }
        *plVar12 = (longlong)puVar3;
        plVar12[1] = (longlong)puVar3;
      }
      goto LAB_1800066c0;
    }
    plVar12 = plVar9;
  } while (plVar9 != param_3);
  if (plVar8 == param_2) {
    *plVar11 = (longlong)plVar9;
  }
LAB_1800066c0:
  *puVar4 = plVar9;
  plVar9[1] = (longlong)puVar4;
  return param_3;
}



longlong * FUN_180006710(longlong *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong *_Dst;
  ulonglong uVar7;
  void *_Dst_00;
  
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    _Dst = param_1;
    if (0xf < uVar2) {
      _Dst = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(_Dst,param_2,param_3);
    *(undefined1 *)(param_3 + (longlong)_Dst) = 0;
    return param_1;
  }
  uVar7 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_3) {
                    // WARNING: Subroutine does not return
    FUN_180001de0();
  }
  uVar5 = param_3 | 0xf;
  if ((uVar5 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar5;
    if (uVar5 < uVar1) {
      uVar7 = uVar1;
    }
    uVar1 = uVar7 + 1;
    if (uVar1 == 0) {
      _Dst_00 = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar5 = uVar7 + 0x28;
        if (uVar5 <= uVar1) {
                    // WARNING: Subroutine does not return
          FUN_180001d40();
        }
        goto LAB_1800067ce;
      }
      _Dst_00 = (void *)FUN_18001cae0(uVar1);
    }
  }
  else {
    uVar5 = 0x8000000000000027;
LAB_1800067ce:
    lVar4 = FUN_18001cae0(uVar5);
    if (lVar4 == 0) goto LAB_180006855;
    _Dst_00 = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst_00 - 8) = lVar4;
  }
  param_1[2] = param_3;
  param_1[3] = uVar7;
  memcpy(_Dst_00,param_2,param_3);
  *(undefined1 *)((longlong)_Dst_00 + param_3) = 0;
  if (0xf < uVar2) {
    pvVar3 = (void *)*param_1;
    pvVar6 = pvVar3;
    if ((0xfff < uVar2 + 1) &&
       (pvVar6 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6)))) {
LAB_180006855:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar6);
  }
  *param_1 = (longlong)_Dst_00;
  return param_1;
}



void FUN_180006870(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)*param_1;
  lVar3 = (longlong)param_1[1] - (longlong)puVar6;
  if ((ulonglong)(lVar3 >> 3) < param_2) {
    if (0x1fffffffffffffff < param_2) {
LAB_1800069a9:
                    // WARNING: Subroutine does not return
      FUN_180001d40();
    }
    uVar5 = param_2 * 8;
    if (uVar5 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else if (uVar5 < 0x1000) {
      puVar6 = (undefined8 *)FUN_18001cae0(uVar5);
    }
    else {
      if (uVar5 + 0x27 <= uVar5) goto LAB_1800069a9;
      lVar3 = FUN_18001cae0(uVar5 + 0x27);
      if (lVar3 == 0) goto LAB_18000697a;
      puVar6 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      puVar6[-1] = lVar3;
    }
    pvVar2 = (void *)*param_1;
    lVar3 = (longlong)(param_1[2] - (longlong)pvVar2) >> 3;
    if (lVar3 != 0) {
      pvVar4 = pvVar2;
      if ((0xfff < (ulonglong)(lVar3 * 8)) &&
         (pvVar4 = *(void **)((longlong)pvVar2 - 8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
LAB_18000697a:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar4);
    }
    puVar1 = puVar6 + param_2;
    *param_1 = (ulonglong)puVar6;
    param_1[1] = (ulonglong)puVar1;
    param_1[2] = (ulonglong)puVar1;
    for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      *puVar6 = param_3;
    }
  }
  else {
    uVar5 = lVar3 + 7U >> 3;
    if ((undefined8 *)param_1[1] < puVar6) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = param_3;
        puVar6 = puVar6 + 1;
      }
      return;
    }
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined4 FUN_1800069b0(void)

{
  uint uVar1;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  uint local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  uint local_1e0;
  undefined1 local_1dc [4];
  longlong alStack_1d8 [4];
  undefined4 auStack_1b4 [39];
  undefined4 local_118 [64];
  ulonglong local_18;
  
  local_18 = DAT_1800280c0 ^ (ulonglong)auStack_218;
  local_1ec = 0;
  memset(local_1dc,0,0x1c4);
  local_1f0 = 0;
  local_1e0 = 0;
  local_1f8 = (undefined8 *)local_118;
  local_1e8 = (undefined8 *)local_118;
  memset(local_118,0,0x100);
  *(char **)((longlong)local_118 + (ulonglong)local_1f0 * 8) = "PlayerLayout";
  local_1f0 = local_1f0 + 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_1800297a0) && (FUN_18001ca68(&DAT_1800297a0), DAT_1800297a0 == -1)) {
    DAT_1800296d8 = rage::scrThread::GetCommand(0x5699de7e);
    _Init_thread_footer(&DAT_1800297a0);
  }
  uVar1 = local_1e0;
  if (DAT_1800296d8 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_1800296d8)((InfoBase *)&local_1f8);
    uVar1 = local_1e0;
  }
  while (uVar1 != 0) {
    local_1e0 = uVar1 - 1;
    *(undefined4 *)alStack_1d8[local_1e0] =
         *(undefined4 *)((longlong)&local_1f8 + (ulonglong)((uVar1 + 3) * 0x10));
    *(undefined4 *)(alStack_1d8[local_1e0] + 4) = auStack_1b4[(ulonglong)local_1e0 * 4];
    *(undefined4 *)(alStack_1d8[local_1e0] + 8) = auStack_1b4[(ulonglong)local_1e0 * 4 + 1];
    uVar1 = local_1e0;
  }
  return local_118[0];
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined4
FUN_180006b10(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  uint local_200;
  undefined4 local_1fc;
  undefined8 *local_1f8;
  uint local_1f0;
  undefined1 local_1ec [4];
  longlong alStack_1e8 [4];
  undefined4 auStack_1c4 [39];
  undefined4 local_128 [64];
  ulonglong local_28;
  
  local_28 = DAT_1800280c0 ^ (ulonglong)auStack_228;
  local_1fc = 0;
  memset(local_1ec,0,0x1c4);
  local_200 = 0;
  local_1f0 = 0;
  local_208 = (undefined8 *)local_128;
  local_1f8 = (undefined8 *)local_128;
  memset(local_128,0,0x100);
  *(undefined8 *)((longlong)local_128 + (ulonglong)local_200 * 8) = 0;
  *(undefined4 *)((longlong)local_128 + (ulonglong)local_200 * 8) = param_1;
  *(char **)((longlong)local_128 + (ulonglong)(local_200 + 1) * 8) = "player";
  *(undefined8 *)((longlong)local_128 + (ulonglong)(local_200 + 2) * 8) = 0;
  *(undefined4 *)((longlong)local_128 + (ulonglong)(local_200 + 2) * 8) = param_3;
  *(undefined8 *)((longlong)local_128 + (ulonglong)(local_200 + 3) * 8) = param_4;
  *(undefined8 *)((longlong)local_128 + (ulonglong)(local_200 + 4) * 8) = 0;
  *(undefined4 *)((longlong)local_128 + (ulonglong)(local_200 + 4) * 8) = param_5;
  *(undefined8 *)((longlong)local_128 + (ulonglong)(local_200 + 5) * 8) = param_6;
  *(undefined8 *)((longlong)local_128 + (ulonglong)(local_200 + 6) * 8) = 0;
  *(undefined4 *)((longlong)local_128 + (ulonglong)(local_200 + 6) * 8) = param_7;
  *(undefined8 *)((longlong)local_128 + (ulonglong)(local_200 + 7) * 8) = 0;
  *(undefined4 *)((longlong)local_128 + (ulonglong)(local_200 + 7) * 8) = 0;
  local_200 = local_200 + 8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_1800296f0) && (FUN_18001ca68(&DAT_1800296f0), DAT_1800296f0 == -1)) {
    DAT_180029680 = rage::scrThread::GetCommand(0x6a307d5f);
    _Init_thread_footer(&DAT_1800296f0);
  }
  uVar1 = local_1f0;
  if (DAT_180029680 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_180029680)((InfoBase *)&local_208);
    uVar1 = local_1f0;
  }
  while (uVar1 != 0) {
    local_1f0 = uVar1 - 1;
    *(undefined4 *)alStack_1e8[local_1f0] =
         *(undefined4 *)((longlong)&local_208 + (ulonglong)((uVar1 + 3) * 0x10));
    *(undefined4 *)(alStack_1e8[local_1f0] + 4) = auStack_1c4[(ulonglong)local_1f0 * 4];
    *(undefined4 *)(alStack_1e8[local_1f0] + 8) = auStack_1c4[(ulonglong)local_1f0 * 4 + 1];
    uVar1 = local_1f0;
  }
  return local_128[0];
}



undefined8 * FUN_180006d50(float *param_1,undefined8 *param_2,byte *param_3,undefined4 *param_4)

{
  float *pfVar1;
  short sVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar9 = (((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
          0x100000001b3;
  puVar7 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  pfVar1 = param_1 + 2;
  puVar8 = *(undefined8 **)pfVar1;
  if (puVar7 != puVar8) {
    sVar2 = *(short *)(puVar7 + 2);
    puVar8 = puVar7;
    while( true ) {
      if (*(short *)param_3 == sVar2) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar8 = (undefined8 *)puVar8[1];
      sVar2 = *(short *)(puVar8 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x1ffffffffffffff) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar6 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar6)();
    return puVar7;
  }
  puVar7 = (undefined8 *)FUN_18001cae0(0x80);
  *(undefined2 *)(puVar7 + 2) = *(undefined2 *)param_3;
  FUN_180007af0((undefined4 *)(puVar7 + 3),param_4);
  fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar10 && fVar10 != *param_1) {
    FUN_180007370(param_1);
    puVar3 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar8 = *(undefined8 **)pfVar1;
    if (puVar3 != puVar8) {
      sVar2 = *(short *)(puVar3 + 2);
      puVar8 = puVar3;
      while (*(short *)(puVar7 + 2) != sVar2) {
        if (puVar8 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_180006ee6;
        puVar8 = (undefined8 *)puVar8[1];
        sVar2 = *(short *)(puVar8 + 2);
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180006ee6:
  puVar3 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = puVar8;
  puVar7[1] = puVar3;
  *puVar3 = puVar7;
  puVar8[1] = puVar7;
  lVar4 = *(longlong *)(param_1 + 6);
  uVar9 = uVar9 & *(ulonglong *)(param_1 + 0xc);
  puVar5 = *(undefined8 **)(lVar4 + uVar9 * 0x10);
  if (puVar5 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar4 + uVar9 * 0x10) = puVar7;
  }
  else {
    if (puVar5 == puVar8) {
      *(undefined8 **)(lVar4 + uVar9 * 0x10) = puVar7;
      goto LAB_180006f33;
    }
    if (*(undefined8 **)(lVar4 + 8 + uVar9 * 0x10) != puVar3) goto LAB_180006f33;
  }
  *(undefined8 **)(lVar4 + 8 + uVar9 * 0x10) = puVar7;
LAB_180006f33:
  *param_2 = puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



undefined8 FUN_180006f40(longlong param_1,byte *param_2)

{
  short sVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar2 = *(longlong **)(param_1 + 8);
  plVar7 = (longlong *)
           ((*(ulonglong *)(param_1 + 0x30) &
            (((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1]) *
            0x100000001b3) * 0x10 + *(longlong *)(param_1 + 0x18));
  plVar3 = (longlong *)plVar7[1];
  if (plVar3 == plVar2) {
LAB_180006fb4:
    plVar8 = (longlong *)0x0;
  }
  else {
    sVar1 = (short)plVar3[2];
    plVar8 = plVar3;
    while (*(short *)param_2 != sVar1) {
      if (plVar8 == (longlong *)*plVar7) goto LAB_180006fb4;
      plVar8 = (longlong *)plVar8[1];
      sVar1 = (short)plVar8[2];
    }
  }
  if (plVar8 == (longlong *)0x0) {
    return 0;
  }
  if (plVar3 == plVar8) {
    if ((longlong *)*plVar7 == plVar8) {
      *plVar7 = (longlong)plVar2;
      plVar7[1] = (longlong)plVar2;
    }
    else {
      plVar7[1] = plVar8[1];
    }
  }
  else if ((longlong *)*plVar7 == plVar8) {
    *plVar7 = *plVar8;
  }
  lVar4 = *plVar8;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  *(longlong *)plVar8[1] = lVar4;
  *(longlong *)(lVar4 + 8) = plVar8[1];
  if (0xf < (ulonglong)plVar8[7]) {
    pvVar5 = (void *)plVar8[4];
    pvVar6 = pvVar5;
    if ((0xfff < plVar8[7] + 1U) &&
       (pvVar6 = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar6);
  }
  plVar8[6] = 0;
  plVar8[7] = 0xf;
  *(undefined1 *)(plVar8 + 4) = 0;
  FUN_18001c9b8(plVar8);
  return 1;
}



void FUN_180007080(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if ((uVar3 != 0) && (1 < uVar3)) {
    uVar1 = *param_3;
    if ((param_3 < param_1) || (param_1 + (uVar3 - 1) < param_3)) {
      puVar4 = param_1;
      for (uVar2 = uVar3 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      param_1 = param_1 + (uVar3 & 0xfffffffffffffffe);
    }
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}



void FUN_180007110(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *_Dst;
  
  if (0x7fffffffffffffff < param_3) {
                    // WARNING: Subroutine does not return
    FUN_180001de0();
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    memcpy(param_1,param_2,param_3);
    *(undefined1 *)(param_3 + (longlong)param_1) = 0;
    return;
  }
  uVar2 = param_3 | 0xf;
  if (uVar2 < 0x8000000000000000) {
    if (uVar2 < 0x16) {
      uVar2 = 0x16;
    }
    uVar1 = uVar2 + 1;
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
      goto LAB_1800071d5;
    }
    if (uVar1 < 0x1000) {
      _Dst = (void *)FUN_18001cae0(uVar1);
      goto LAB_1800071d5;
    }
    uVar3 = uVar2 + 0x28;
    if (uVar3 <= uVar1) {
                    // WARNING: Subroutine does not return
      FUN_180001d40();
    }
  }
  else {
    uVar3 = 0x8000000000000027;
    uVar2 = 0x7fffffffffffffff;
  }
  lVar4 = FUN_18001cae0(uVar3);
  if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar4;
LAB_1800071d5:
  *param_1 = _Dst;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  memcpy(_Dst,param_2,param_3);
  *(undefined1 *)(param_3 + (longlong)_Dst) = 0;
  return;
}



void FUN_180007210(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  *(undefined8 *)param_2[1] = 0;
  puVar3 = (undefined8 *)*param_2;
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    puVar1 = (undefined8 *)*puVar3;
    if (0xf < (ulonglong)puVar3[7]) {
      pvVar2 = (void *)puVar3[4];
      pvVar4 = pvVar2;
      if ((0xfff < puVar3[7] + 1) &&
         (pvVar4 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar4);
    }
    puVar3[6] = 0;
    puVar3[7] = 0xf;
    *(undefined1 *)(puVar3 + 4) = 0;
    FUN_18001c9b8(puVar3);
    puVar3 = puVar1;
  } while( true );
}



void FUN_1800072b0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001800072bd. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



void FUN_1800072d0(longlong param_1)

{
  GameClient::~GameClient((GameClient *)(param_1 + 0x10));
  return;
}



void FUN_1800072e0(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  void *pvVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (0xf < *(ulonglong *)(lVar1 + 0x38)) {
      pvVar2 = *(void **)(lVar1 + 0x20);
      pvVar3 = pvVar2;
      if ((0xfff < *(ulonglong *)(lVar1 + 0x38) + 1) &&
         (pvVar3 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar3);
    }
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0xf;
    *(undefined1 *)(lVar1 + 0x20) = 0;
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_18001c9b8(*(void **)(param_1 + 8));
  }
  return;
}



void FUN_180007370(float *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  fVar5 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
  lVar2 = 0;
  if ((9.223372e+18 <= fVar5) && (fVar5 = fVar5 - 9.223372e+18, fVar5 < 9.223372e+18)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar5 + lVar2)) {
    uVar3 = (longlong)fVar5 + lVar2;
  }
  uVar4 = uVar1;
  if ((uVar1 < uVar3) && ((0x1ff < uVar1 || (uVar4 = uVar1 * 8, uVar1 * 8 < uVar3)))) {
    uVar4 = uVar3;
  }
  FUN_180007470((longlong)param_1,uVar4);
  return;
}



undefined8 * FUN_180007420(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_obj2<GameClient>::vftable;
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1);
  }
  return param_1;
}



void FUN_180007470(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  for (lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar10 & 0x3f)) < param_2) {
    std::_Xlength_error("invalid hash bucket count");
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  uVar9 = param_2 - 1 | 1;
  lVar10 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  lVar10 = 1L << ((char)lVar10 + 1U & 0x3f);
  FUN_180006870((ulonglong *)(param_1 + 0x18),lVar10 * 2,plVar1);
  *(longlong *)(param_1 + 0x38) = lVar10;
  *(longlong *)(param_1 + 0x30) = lVar10 + -1;
  plVar8 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001800074ec:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar8;
        puVar11 = (undefined8 *)
                  ((*(ulonglong *)(param_1 + 0x30) &
                   (((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3) * 0x10 +
                  *(longlong *)(param_1 + 0x18));
        if ((longlong *)*puVar11 != plVar1) break;
        *puVar11 = plVar8;
        puVar11[1] = plVar8;
        plVar8 = plVar2;
      }
      plVar3 = (longlong *)puVar11[1];
      if ((short)plVar8[2] != (short)plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar8) {
        plVar4 = (longlong *)plVar8[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar8;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar8[1] = (longlong)puVar6;
      }
      puVar11[1] = plVar8;
      plVar8 = plVar2;
    }
    do {
      if ((longlong *)*puVar11 == plVar3) {
        plVar4 = (longlong *)plVar8[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar8;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar8[1] = (longlong)puVar6;
        *puVar11 = plVar8;
        plVar8 = plVar2;
        goto joined_r0x0001800074ec;
      }
      plVar3 = (longlong *)plVar3[1];
    } while ((short)plVar8[2] != (short)plVar3[2]);
    lVar10 = *plVar3;
    plVar3 = (longlong *)plVar8[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar10;
    puVar11 = *(undefined8 **)(lVar10 + 8);
    *puVar11 = plVar8;
    *(longlong **)(lVar10 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar8[1] = (longlong)puVar11;
    plVar8 = plVar2;
  } while( true );
}



void FUN_180007610(void *param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_18001c9b8(param_1);
    return;
  }
  return;
}



longlong FUN_180007620(longlong param_1)

{
  return param_1 + 8;
}



TypeDescriptor * FUN_180007630(void)

{
  return &`public:___cdecl_PlayerManager::PlayerManager(void)___ptr64'::__l2::<lambda_4>::
          RTTI_Type_Descriptor;
}



void FUN_180007640(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_2;
  lVar4 = *(longlong *)(param_1 + 8);
  uVar1 = *(undefined1 *)(param_2[2] + lVar3);
  uVar2 = *(undefined1 *)(param_2[2] + 1 + lVar3);
  *param_2 = lVar3 + 2;
  FUN_1800051d0(lVar4,CONCAT11(uVar1,uVar2));
  return;
}



undefined8 * FUN_180007670(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



TypeDescriptor * FUN_180007690(void)

{
  return &`public:___cdecl_PlayerManager::PlayerManager(void)___ptr64'::__l2::<lambda_3>::
          RTTI_Type_Descriptor;
}



void FUN_1800076a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar8 = param_2[2];
  lVar9 = *(longlong *)(param_1 + 8);
  lVar10 = *param_2;
  uVar2 = *(undefined1 *)(lVar10 + lVar8);
  uVar3 = *(undefined1 *)(lVar10 + 1 + lVar8);
  lVar1 = lVar10 + 2;
  *param_2 = lVar1;
  uVar4 = *(undefined1 *)(lVar8 + lVar1);
  uVar5 = *(undefined1 *)(lVar8 + 1 + lVar1);
  uVar6 = *(undefined1 *)(lVar8 + 2 + lVar1);
  uVar7 = *(undefined1 *)(lVar8 + 3 + lVar1);
  *param_2 = lVar10 + 6;
  FUN_180004cc0(lVar9,(ulonglong)CONCAT11(uVar2,uVar3),
                CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar6),uVar7));
  return;
}



undefined8 * FUN_180007720(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



TypeDescriptor * FUN_180007740(void)

{
  return &`public:___cdecl_PlayerManager::PlayerManager(void)___ptr64'::__l2::<lambda_2>::
          RTTI_Type_Descriptor;
}



void FUN_180007750(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  short sVar9;
  ulonglong uVar10;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar4 = *(longlong *)(param_1 + 8);
  lVar5 = *param_2;
  bVar1 = *(byte *)(param_2[2] + lVar5);
  bVar2 = *(byte *)(param_2[2] + 1 + lVar5);
  sVar9 = CONCAT11(bVar1,bVar2);
  *param_2 = lVar5 + 2;
  uVar10 = ((ulonglong)bVar2 ^ 0xcbf29ce484222325) * 0x100000001b3;
  lVar5 = *(longlong *)(lVar4 + 0x18);
  uVar8 = *(ulonglong *)(lVar4 + 0x30) & (bVar1 ^ uVar10) * 0x100000001b3;
  lVar7 = *(longlong *)(lVar5 + 8 + uVar8 * 0x10);
  if (lVar7 == *(longlong *)(lVar4 + 8)) {
LAB_1800077f2:
    lVar7 = 0;
  }
  else {
    sVar3 = *(short *)(lVar7 + 0x10);
    while (sVar9 != sVar3) {
      if (lVar7 == *(longlong *)(lVar5 + uVar8 * 0x10)) goto LAB_1800077f2;
      lVar7 = *(longlong *)(lVar7 + 8);
      sVar3 = *(short *)(lVar7 + 0x10);
    }
  }
  if (lVar7 == 0) {
    return;
  }
  uVar8 = *(ulonglong *)(lVar4 + 0x30) & (bVar1 ^ uVar10) * 0x100000001b3;
  lVar7 = *(longlong *)(lVar5 + 8 + uVar8 * 0x10);
  if (lVar7 != *(longlong *)(lVar4 + 8)) {
    sVar3 = *(short *)(lVar7 + 0x10);
    while (sVar9 != sVar3) {
      if (lVar7 == *(longlong *)(lVar5 + uVar8 * 0x10)) goto LAB_1800078cd;
      lVar7 = *(longlong *)(lVar7 + 8);
      sVar3 = *(short *)(lVar7 + 0x10);
    }
    if (lVar7 != 0) {
      FUN_18000ef40(param_2,&local_28);
      FUN_18000ef40(param_2,(float *)&local_18);
      *(float *)(lVar7 + 0x58) = local_28 - *(float *)(lVar7 + 0x40);
      *(float *)(lVar7 + 0x5c) = local_24 - *(float *)(lVar7 + 0x44);
      *(float *)(lVar7 + 0x60) = local_20 - *(float *)(lVar7 + 0x48);
      *(ulonglong *)(lVar7 + 0x40) = CONCAT44(local_24,local_28);
      *(undefined8 *)(lVar7 + 0x4c) = local_18;
      *(undefined4 *)(lVar7 + 0x54) = local_10;
      *(float *)(lVar7 + 0x48) = local_20;
      return;
    }
  }
LAB_1800078cd:
  std::_Xout_of_range("invalid unordered_map<K, T> key");
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}



undefined8 * FUN_1800078e0(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



TypeDescriptor * FUN_180007900(void)

{
  return &`public:___cdecl_PlayerManager::PlayerManager(void)___ptr64'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180007910(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 ******ppppppuVar11;
  undefined1 auStackY_98 [32];
  float local_68 [4];
  float local_58 [4];
  undefined8 ******local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1800280c0 ^ (ulonglong)auStackY_98;
  pfVar8 = *(float **)(param_1 + 8);
  lVar9 = *param_2;
  lVar10 = param_2[2];
  uVar2 = *(undefined1 *)(lVar10 + 1 + lVar9);
  uVar3 = *(undefined1 *)(lVar10 + lVar9);
  lVar1 = lVar9 + 2;
  *param_2 = lVar1;
  uVar4 = *(undefined1 *)(lVar10 + lVar1);
  uVar5 = *(undefined1 *)(lVar10 + 1 + lVar1);
  uVar6 = *(undefined1 *)(lVar10 + 2 + lVar1);
  uVar7 = *(undefined1 *)(lVar10 + 3 + lVar1);
  *param_2 = lVar9 + 6;
  FUN_18000ec60(param_2,(longlong *)local_48);
  FUN_18000ef40(param_2,local_58);
  FUN_18000ef40(param_2,local_68);
  FUN_180003b10(pfVar8,CONCAT11(uVar3,uVar2),CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar6),uVar7),
                local_48,(undefined8 *)local_58,(undefined8 *)local_68);
  if (0xf < local_30) {
    ppppppuVar11 = local_48[0];
    if ((0xfff < local_30 + 1) &&
       (ppppppuVar11 = (undefined8 ******)local_48[0][-1],
       0x1f < (ulonglong)((longlong)local_48[0] + (-8 - (longlong)ppppppuVar11)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(ppppppuVar11);
  }
  return;
}



undefined8 * FUN_180007a40(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



void FUN_180007a60(longlong *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  void *pvVar3;
  
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 4);
    param_1[0xb] = 0;
  }
  if (0xf < (ulonglong)param_1[3]) {
    pvVar2 = (void *)*param_1;
    pvVar3 = pvVar2;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar3 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar3);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



undefined4 * FUN_180007af0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_180006190((undefined8 *)(param_1 + 2),(undefined8 *)(param_2 + 2));
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  return param_1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: static void __cdecl ClientSend::ClientWelcome(enum e_ActorModel,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
// __ptr64,struct Vector3 const & __ptr64,struct Vector3 const & __ptr64)

void __cdecl
ClientSend::ClientWelcome
          (e_ActorModel param_1,basic_string<> *param_2,Vector3 *param_3,Vector3 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  basic_string<> local_68 [8];
  undefined8 local_60;
  longlong lStack_58;
  void *local_50;
  basic_string<> *pbStack_48;
  basic_string<> *local_40;
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
                    // 0x7b80  16
                    // ?ClientWelcome@ClientSend@@SAXW4e_ActorModel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVector3@@2@Z
  local_28 = DAT_1800280c0 ^ (ulonglong)auStack_88;
  local_50 = (void *)0x0;
  pbStack_48 = (basic_string<> *)0x0;
  local_40 = (basic_string<> *)0x0;
  local_60 = 0;
  lStack_58 = 0;
  local_38 = 0x400;
  FUN_18000f5f0((longlong *)&local_50,&local_38);
  FUN_18000ea20((longlong)&local_60,(ulonglong)param_1);
  uVar4 = *(ushort *)(param_2 + 0x10);
  uVar8 = (ulonglong)uVar4;
  if (uVar4 < 0x1000) {
    FUN_18000e940((longlong)&local_60,uVar4);
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(basic_string<> **)param_2;
    }
    if (uVar4 != 0) {
      do {
        local_68[0] = *param_2;
        if (pbStack_48 == local_40) {
          FUN_18000fc70((longlong *)&local_50,pbStack_48,local_68);
        }
        else {
          *pbStack_48 = local_68[0];
          pbStack_48 = pbStack_48 + 1;
        }
        lStack_58 = lStack_58 + 1;
        param_2 = param_2 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    FUN_18000e940((longlong)&local_60,0);
  }
  uVar8 = FUN_180010b00((double)*(float *)param_3,' ','\b');
  FUN_18000ea20((longlong)&local_60,uVar8);
  uVar8 = FUN_180010b00((double)*(float *)(param_3 + 4),' ','\b');
  FUN_18000ea20((longlong)&local_60,uVar8);
  uVar8 = FUN_180010b00((double)*(float *)(param_3 + 8),' ','\b');
  FUN_18000ea20((longlong)&local_60,uVar8);
  uVar8 = FUN_180010b00((double)*(float *)param_4,' ','\b');
  FUN_18000ea20((longlong)&local_60,uVar8);
  uVar8 = FUN_180010b00((double)*(float *)(param_4 + 4),' ','\b');
  FUN_18000ea20((longlong)&local_60,uVar8);
  uVar8 = FUN_180010b00((double)*(float *)(param_4 + 8),' ','\b');
  FUN_18000ea20((longlong)&local_60,uVar8);
  puVar6 = (undefined8 *)Singleton<GameClient>::Get();
  ENetClient::Send((ENetClient *)*puVar6,0,0,(StreamBuffer *)&local_60);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    pvVar7 = local_50;
    if ((0xfff < (ulonglong)((longlong)local_40 - (longlong)local_50)) &&
       (pvVar7 = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar7);
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: static void __cdecl ClientSend::ServerEvent(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const & __ptr64,class
// Scripting::DataSerializer const & __ptr64)

void __cdecl ClientSend::ServerEvent(basic_string<> *param_1,DataSerializer *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  basic_string<> local_90 [8];
  undefined8 local_88;
  longlong lStack_80;
  void *local_78;
  basic_string<> *pbStack_70;
  basic_string<> *local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  void *local_40;
  undefined8 uStack_38;
  longlong local_30;
  ulonglong local_28;
  
                    // 0x7e00  51
                    // ?ServerEvent@ClientSend@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVDataSerializer@Scripting@@@Z
  local_28 = DAT_1800280c0 ^ (ulonglong)auStack_d8;
  local_78 = (void *)0x0;
  pbStack_70 = (basic_string<> *)0x0;
  local_68 = (basic_string<> *)0x0;
  local_88 = 0;
  lStack_80 = 0;
  local_60 = 0x400;
  FUN_18000f5f0((longlong *)&local_78,&local_60);
  uVar4 = *(ushort *)(param_1 + 0x10);
  uVar8 = (ulonglong)uVar4;
  if (uVar4 < 0x1000) {
    FUN_18000e940((longlong)&local_88,uVar4);
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(basic_string<> **)param_1;
    }
    if (uVar4 != 0) {
      do {
        local_90[0] = *param_1;
        if (pbStack_70 == local_68) {
          FUN_18000fc70((longlong *)&local_78,pbStack_70,local_90);
        }
        else {
          *pbStack_70 = local_90[0];
          pbStack_70 = pbStack_70 + 1;
        }
        lStack_80 = lStack_80 + 1;
        param_1 = param_1 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    FUN_18000e940((longlong)&local_88,0);
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (void *)0x0;
  uStack_38 = 0;
  local_30 = 0;
  local_b8 = *(undefined8 *)param_2;
  local_b0 = *(undefined8 *)(param_2 + 8);
  FUN_180008070((ulonglong *)&local_a8,(longlong *)(param_2 + 0x10));
  FUN_18000f070(&local_50,(longlong)&local_88,(longlong)&local_b8);
  if (local_a8 != (void *)0x0) {
    pvVar7 = local_a8;
    if ((0xfff < (ulonglong)(lStack_98 - (longlong)local_a8)) &&
       (pvVar7 = *(void **)((longlong)local_a8 + -8),
       0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar7);
    local_a8 = (void *)0x0;
    local_a0 = 0;
    lStack_98 = 0;
  }
  puVar6 = (undefined8 *)Singleton<GameClient>::Get();
  ENetClient::Send((ENetClient *)*puVar6,0,1,(StreamBuffer *)&local_50);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58);
      }
    }
  }
  if (local_40 != (void *)0x0) {
    pvVar7 = local_40;
    if ((0xfff < (ulonglong)(local_30 - (longlong)local_40)) &&
       (pvVar7 = *(void **)((longlong)local_40 + -8),
       0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar7);
    local_40 = (void *)0x0;
    uStack_38 = 0;
    local_30 = 0;
  }
  if (local_78 != (void *)0x0) {
    pvVar7 = local_78;
    if ((0xfff < (ulonglong)((longlong)local_68 - (longlong)local_78)) &&
       (pvVar7 = *(void **)((longlong)local_78 + -8),
       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar7);
  }
  return;
}



ulonglong * FUN_180008070(ulonglong *param_1,longlong *param_2)

{
  void *_Dst;
  ulonglong uVar1;
  size_t _Size;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[1] - *param_2;
  if (uVar1 != 0) {
    if (0x7fffffffffffffff < uVar1) {
                    // WARNING: Subroutine does not return
      FUN_1800080f0();
    }
    FUN_180008110(param_1,uVar1);
    _Dst = (void *)*param_1;
    _Size = param_2[1] - *param_2;
    memmove(_Dst,(void *)*param_2,_Size);
    param_1[1] = _Size + (longlong)_Dst;
  }
  return param_1;
}



void FUN_1800080f0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_180008110(ulonglong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else if (param_2 < 0x1000) {
    uVar2 = FUN_18001cae0(param_2);
  }
  else {
    if (param_2 + 0x27 <= param_2) {
                    // WARNING: Subroutine does not return
      FUN_180001d40();
    }
    lVar1 = FUN_18001cae0(param_2 + 0x27);
    if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar2;
  param_1[2] = uVar2 + param_2;
  return;
}



// public: __cdecl ENetClient::ENetClient(void) __ptr64

ENetClient * __thiscall ENetClient::ENetClient(ENetClient *this)

{
  ENetClient *pEVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  ENetClient *local_res8;
  ENetClient *local_res10;
  undefined **local_58;
  code *local_50;
  undefined ***local_20;
  
                    // 0x8190  3  ??0ENetClient@@QEAA@XZ
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0xf;
  this[0x10] = (ENetClient)0x0;
  pEVar1 = this + 0x48;
  *(undefined4 *)pEVar1 = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  local_res8 = this;
  local_res10 = pEVar1;
  lVar4 = FUN_18001cae0(0x58);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(this + 0x50) = lVar4;
  *(ulonglong *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 7;
  *(undefined8 *)(this + 0x80) = 8;
  *(undefined4 *)pEVar1 = 0x3f800000;
  FUN_180006870((ulonglong *)(this + 0x60),0x10,*(undefined8 *)(this + 0x50));
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 8) = 0;
  FUN_180006710((longlong *)(this + 0x10),"0.0.0.0",7);
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x40] = (ENetClient)0x0;
  uVar2 = *(ulonglong *)(this + 0x58);
  if (uVar2 != 0) {
    plVar3 = *(longlong **)(this + 0x50);
    if (uVar2 < *(ulonglong *)(this + 0x80) >> 3) {
      FUN_1800097f0((longlong)pEVar1,(longlong *)*plVar3,plVar3);
    }
    else {
      FUN_180009c90(uVar2,plVar3);
      *(undefined8 *)*(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x50);
      *(longlong *)(*(longlong *)(this + 0x50) + 8) = *(longlong *)(this + 0x50);
      *(undefined8 *)(this + 0x58) = 0;
      local_res8 = *(ENetClient **)(this + 0x50);
      FUN_180007080(*(undefined8 **)(this + 0x60),*(undefined8 **)(this + 0x68),&local_res8);
    }
  }
  local_58 = std::_Func_impl_no_alloc<>::vftable;
  local_50 = FUN_18000fef0;
  local_20 = &local_58;
  FUN_1800096b0((longlong *)&local_58,(longlong *)(this + 0x90));
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])
              (local_20,CONCAT71((int7)((ulonglong)&local_58 >> 8),local_20 != &local_58));
  }
  return this;
}



void FUN_180008340(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  pvVar2 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_180009c90(pvVar2,*(undefined8 **)(param_1 + 8));
  FUN_18001c9b8(*(void **)(param_1 + 8));
  return;
}



// public: __cdecl ENetClient::~ENetClient(void) __ptr64

void __thiscall ENetClient::~ENetClient(ENetClient *this)

{
  ENetClient *pEVar1;
  void *pvVar2;
  void *pvVar3;
  
                    // 0x83c0  7  ??1ENetClient@@QEAA@XZ
  *(undefined ***)this = vftable;
  pEVar1 = *(ENetClient **)(this + 200);
  if (pEVar1 != (ENetClient *)0x0) {
    (**(code **)(*(longlong *)pEVar1 + 0x20))(pEVar1,pEVar1 != this + 0x90);
    *(undefined8 *)(this + 200) = 0;
  }
  FUN_180008340((longlong)(this + 0x48));
  if (0xf < *(ulonglong *)(this + 0x28)) {
    pvVar2 = *(void **)(this + 0x10);
    pvVar3 = pvVar2;
    if ((0xfff < *(ulonglong *)(this + 0x28) + 1) &&
       (pvVar3 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0xf;
  this[0x10] = (ENetClient)0x0;
  return;
}



// public: void __cdecl ENetClient::Start(void) __ptr64

void __thiscall ENetClient::Start(ENetClient *this)

{
  undefined8 uVar1;
  SOCKET *pSVar2;
  
                    // 0x8470  53  ?Start@ENetClient@@QEAAXXZ
  uVar1 = FUN_1800120e0();
  if ((int)uVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x000180008495. Too many branches
                    // WARNING: Treating indirect jump as call
    Log::Print(3,(char *)0x0,"Failed to initialize Enet");
    return;
  }
  pSVar2 = FUN_1800114d0((undefined4 *)0x0,1,2,0,0);
  *(SOCKET **)(this + 8) = pSVar2;
  if (pSVar2 == (SOCKET *)0x0) {
    Log::Print(3,(char *)0x0,"Failed to create Enet client host");
  }
  Log::Print(1,(char *)0x0,"Enet initialized");
                    // WARNING: Could not recover jumptable at 0x0001800084f5. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)**(undefined8 **)this)(this);
  return;
}



// public: void __cdecl ENetClient::Stop(bool) __ptr64

void __thiscall ENetClient::Stop(ENetClient *this,bool param_1)

{
  undefined **local_48;
  code *local_40;
  undefined ***local_10;
  
                    // 0x8500  54  ?Stop@ENetClient@@QEAAX_N@Z
  local_48 = std::_Func_impl_no_alloc<>::vftable;
  local_40 = FUN_18000fef0;
  local_10 = &local_48;
  FUN_1800096b0((longlong *)&local_48,(longlong *)(this + 0x90));
  if (local_10 != (undefined ***)0x0) {
    (*(code *)(*local_10)[4])
              (local_10,CONCAT71((int7)((ulonglong)&local_48 >> 8),local_10 != &local_48));
  }
  Disconnect(this);
  FUN_1800119b0(*(SOCKET **)(this + 8));
  *(undefined8 *)(this + 8) = 0;
  if (param_1) {
    FUN_180010e60();
    Log::Print(1,(char *)0x0,"Enet deinitialized");
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: bool __cdecl ENetClient::Connect(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > const & __ptr64,unsigned short) __ptr64

bool __thiscall ENetClient::Connect(ENetClient *this,basic_string<> *param_1,ushort param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  LogType LVar4;
  basic_string<> *pbVar5;
  char *pcVar6;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined4 local_58 [4];
  ushort local_48;
  int local_40 [8];
  ulonglong local_20;
  
                    // 0x85a0  17
                    // ?Connect@ENetClient@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
  local_20 = DAT_1800280c0 ^ (ulonglong)auStack_88;
  uVar1 = (uint)param_2;
  if (this[0x40] != (ENetClient)0x0) {
    Log::Print(2,(char *)0x0,"You are already trying to connect to a server");
    return false;
  }
  if ((*(longlong *)(this + 8) != 0) && (*(longlong *)(*(longlong *)(this + 8) + 0x2b08) != 0)) {
    Log::Print(3,(char *)0x0,"You are already connected to a server");
    return false;
  }
  this[0x40] = (ENetClient)0x1;
  if (this + 0x10 != (ENetClient *)param_1) {
    pbVar5 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pbVar5 = *(basic_string<> **)param_1;
    }
    FUN_180006710((longlong *)(this + 0x10),pbVar5,*(size_t *)(param_1 + 0x10));
  }
  *(ushort *)(this + 0x30) = param_2;
  local_68 = uVar1;
  Log::Print(1,(char *)0x0,"Connecting to %s:%u...");
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(basic_string<> **)param_1;
  }
  FUN_180010e50(local_58,param_1);
  local_48 = param_2;
  uVar2 = FUN_180011240(*(longlong *)(this + 8),local_58,2,0);
  *(ulonglong *)(this + 0x38) = uVar2;
  if (uVar2 == 0) {
    Log::Print(3,(char *)0x0,"No available peers for initiating ENet connection");
    return false;
  }
  FUN_180013220(uVar2,8,2000,10000);
  uVar3 = FUN_180011c00(*(SOCKET **)(this + 8),local_40,5000);
  if (local_40[0] == 1) {
    if (0 < (int)uVar3) {
      local_68 = uVar1;
      Log::Print(1,(char *)0x0,"Successfully connected to %s:%u");
      (**(code **)(*(longlong *)this + 8))(this);
      this[0x40] = (ENetClient)0x0;
      return true;
    }
    if ((int)uVar3 < 0) {
      pcVar6 = "Failed to connect to %s:%u, unknown error !";
      LVar4 = 3;
      goto LAB_180008748;
    }
  }
  pcVar6 = "Failed to connect to %s:%u, server closed or full !";
  LVar4 = 2;
LAB_180008748:
  local_68 = uVar1;
  Log::Print(LVar4,(char *)0x0,pcVar6);
  FUN_180012a90(*(longlong **)(this + 0x38));
  *(undefined8 *)(this + 0x38) = 0;
  (**(code **)(*(longlong *)this + 0x10))(this);
  this[0x40] = (ENetClient)0x0;
  return false;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: void __cdecl ENetClient::DoTick(void) __ptr64

void __thiscall ENetClient::DoTick(ENetClient *this)

{
  longlong *plVar1;
  shared_ptr<Message> *psVar2;
  longlong lVar3;
  longlong lVar4;
  shared_ptr<Message> *psVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  shared_ptr<Message> *local_40;
  shared_ptr<Message> *local_38;
  longlong local_30;
  ulonglong local_28;
  
                    // 0x8790  20  ?DoTick@ENetClient@@QEAAXXZ
  local_28 = DAT_1800280c0 ^ (ulonglong)auStack_68;
  do {
    if ((*(longlong *)(this + 8) == 0) || (*(longlong *)(*(longlong *)(this + 8) + 0x2b08) == 0)) {
      return;
    }
    lVar3 = _Xtime_get_ticks();
    (**(code **)(*(longlong *)this + 0x18))(this);
    Poll(this);
    psVar2 = local_38;
    for (psVar5 = local_40; psVar5 != psVar2; psVar5 = psVar5 + 0x10) {
      SafeReadData(this,psVar5);
    }
    if (local_40 != (shared_ptr<Message> *)0x0) {
      FUN_180009c10((longlong)local_40,(longlong)local_38);
      psVar5 = local_40;
      if ((0xfff < (local_30 - (longlong)local_40 & 0xfffffffffffffff0U)) &&
         (psVar5 = *(shared_ptr<Message> **)(local_40 + -8),
         (shared_ptr<Message> *)0x1f < local_40 + (-8 - (longlong)psVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(psVar5);
    }
    lVar4 = _Xtime_get_ticks();
    local_48 = lVar4 / 10000 - lVar3 / 10000;
    plVar1 = *(longlong **)(this + 200);
    if (local_48 < 0x14) {
      local_48 = 0x14 - local_48;
      if (plVar1 == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        std::_Xbad_function_call();
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_48);
    }
    else {
      local_48 = 0;
      if (plVar1 == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        std::_Xbad_function_call();
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_48);
    }
  } while( true );
}



// public: void __cdecl ENetClient::DoFrame(void) __ptr64

void __thiscall ENetClient::DoFrame(ENetClient *this)

{
                    // 0x8940  19  ?DoFrame@ENetClient@@QEAAXXZ
  if ((*(longlong *)(this + 8) != 0) && (*(longlong *)(*(longlong *)(this + 8) + 0x2b08) != 0)) {
                    // WARNING: Could not recover jumptable at 0x000180008956. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)this + 0x20))();
    return;
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: bool __cdecl ENetClient::Disconnect(void) __ptr64

bool __thiscall ENetClient::Disconnect(ENetClient *this)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  int local_48 [6];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
                    // 0x8960  18  ?Disconnect@ENetClient@@QEAA_NXZ
  local_20 = DAT_1800280c0 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(this + 8) == 0) || (*(longlong *)(*(longlong *)(this + 8) + 0x2b08) == 0)) {
    return false;
  }
  Log::Print(1,(char *)0x0,"Disconnecting from server...");
  FUN_180012170(*(longlong **)(this + 0x38),0);
  lVar2 = _Xtime_get_ticks();
  bVar5 = false;
  while( true ) {
    uVar3 = FUN_180011c00(*(SOCKET **)(this + 8),local_48,0);
    if ((int)uVar3 < 1) break;
    if (local_48[0] == 3) {
      FUN_180010e20(local_30);
    }
    else {
      if (local_48[0] == 2) {
        Log::Print(1,(char *)0x0,"Disconnected from the server");
        (**(code **)(*(longlong *)this + 0x28))(this);
        bVar5 = true;
        goto LAB_180008af2;
      }
      if (local_48[0] == 4) {
        Log::Print(1,(char *)0x0,"Disconnected from the server (Timeout)");
        (**(code **)(*(longlong *)this + 0x28))(this);
        bVar5 = true;
        goto LAB_180008af2;
      }
    }
LAB_180008a4e:
    lVar4 = _Xtime_get_ticks();
    if (5000000 < lVar4 / 10 - lVar2 / 10) goto LAB_180008ad5;
    plVar1 = *(longlong **)(this + 200);
    local_28 = 0;
    if (plVar1 == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_28);
  }
  if (-1 < (int)uVar3) goto LAB_180008a4e;
  Log::Print(3,(char *)0x0,"Encountered error while polling");
LAB_180008ad5:
  Log::Print(3,(char *)0x0,"Disconnection was not acknowledged by server, shutdown forced");
  FUN_180012a90(*(longlong **)(this + 0x38));
LAB_180008af2:
  *(undefined8 *)(this + 0x38) = 0;
  return bVar5;
}



// public: bool __cdecl ENetClient::IsConnected(void)const __ptr64

bool __thiscall ENetClient::IsConnected(ENetClient *this)

{
                    // 0x8b40  30  ?IsConnected@ENetClient@@QEBA_NXZ
  if (*(longlong *)(this + 8) == 0) {
    return false;
  }
  return *(longlong *)(*(longlong *)(this + 8) + 0x2b08) != 0;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: void __cdecl ENetClient::RegisterPacket(unsigned short,class std::function<void
// __cdecl(class StreamBuffer const & __ptr64)>) __ptr64

void __thiscall ENetClient::RegisterPacket(ENetClient *this,undefined2 param_1,longlong *param_3)

{
  ENetClient *SRWLock;
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58 [2];
  longlong *local_48;
  undefined2 local_40 [4];
  ENetClient *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
                    // 0x8b60  45
                    // ?RegisterPacket@ENetClient@@QEAAXGV?$function@$$A6AXAEBVStreamBuffer@@@Z@std@@@Z
  local_28 = DAT_1800280c0 ^ (ulonglong)auStack_78;
  uStack_30 = 0;
  SRWLock = this + 0x88;
  local_48 = param_3;
  local_40[0] = param_1;
  local_38 = SRWLock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  uStack_30 = CONCAT71(uStack_30._1_7_,1);
  plVar1 = FUN_1800099f0((float *)(this + 0x48),local_58,(byte *)local_40);
  FUN_180009480((longlong *)(*plVar1 + 0x18),(longlong)param_3);
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  plVar1 = (longlong *)param_3[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
    param_3[7] = 0;
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// private: void __cdecl ENetClient::SendPeerMessage(enum DeliveryType,class std::shared_ptr<class
// Message> const & __ptr64)const __ptr64

void __thiscall
ENetClient::SendPeerMessage(ENetClient *this,DeliveryType param_1,shared_ptr<Message> *param_2)

{
  longlong ******pppppplVar1;
  void *pvVar2;
  undefined1 auStack_48 [32];
  void *local_28;
  longlong lStack_20;
  longlong local_18;
  ulonglong local_10;
  
                    // 0x8c10  50
                    // ?SendPeerMessage@ENetClient@@AEBAXW4DeliveryType@@AEBV?$shared_ptr@VMessage@@@std@@@Z
  local_10 = DAT_1800280c0 ^ (ulonglong)auStack_48;
  local_28 = (void *)0x0;
  lStack_20 = 0;
  local_18 = 0;
  FUN_180010960(*(longlong *)param_2,(ulonglong *)&local_28);
  pppppplVar1 = (longlong ******)
                FUN_180010d80(local_28,lStack_20 - (longlong)local_28,(param_1 != 0) + 1);
  FUN_180012dd0(*(longlong *)(this + 0x38),param_1 != 0,pppppplVar1);
  FUN_180011bd0(*(undefined8 **)(this + 8));
  if (local_28 != (void *)0x0) {
    pvVar2 = local_28;
    if ((0xfff < (ulonglong)(local_18 - (longlong)local_28)) &&
       (pvVar2 = *(void **)((longlong)local_28 + -8),
       0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: void __cdecl ENetClient::Send(enum DeliveryType,unsigned short,class StreamBuffer const &
// __ptr64)const __ptr64

void __thiscall
ENetClient::Send(ENetClient *this,DeliveryType param_1,ushort param_2,StreamBuffer *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
                    // 0x8ce0  47  ?Send@ENetClient@@QEBAXW4DeliveryType@@GAEBVStreamBuffer@@@Z
  local_38 = DAT_1800280c0 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(this + 8) == 0) || (*(longlong *)(*(longlong *)(this + 8) + 0x2b08) == 0)) {
    Log::Print(3,(char *)0x0,"You are not connected to a server");
  }
  else {
    plVar5 = (longlong *)FUN_18001cae0(0x40);
    *plVar5 = 0;
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)std::_Ref_count_obj2<Message>::vftable;
    local_48 = plVar5;
    FUN_1800107f0((undefined2 *)(plVar5 + 2),param_2,(undefined8 *)param_3);
    local_48 = plVar5 + 2;
    plStack_40 = plVar5;
    SendPeerMessage(this,param_1,(shared_ptr<Message> *)&local_48);
    plVar5 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// private: class std::vector<class std::shared_ptr<class Message>,class std::allocator<class
// std::shared_ptr<class Message> > > const __cdecl ENetClient::Poll(void) __ptr64

void __thiscall ENetClient::Poll(ENetClient *this)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  void *pvVar9;
  longlong *in_RDX;
  char *pcVar10;
  uint uVar11;
  undefined1 auStack_108 [32];
  uint local_e8;
  longlong local_e0;
  longlong local_d8;
  void *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b0;
  int local_a8 [6];
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong lStack_78;
  void *local_70;
  undefined8 uStack_68;
  longlong local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
                    // 0x8e00  44
                    // ?Poll@ENetClient@@AEAA?BV?$vector@V?$shared_ptr@VMessage@@@std@@V?$allocator@V?$shared_ptr@VMessage@@@std@@@2@@std@@XZ
  local_48 = DAT_1800280c0 ^ (ulonglong)auStack_108;
  *in_RDX = 0;
  in_RDX[1] = 0;
  *in_RDX = 0;
  in_RDX[1] = 0;
  in_RDX[2] = 0;
  uVar11 = 1;
  local_e8 = 1;
  uVar7 = FUN_180011c00(*(SOCKET **)(this + 8),local_a8,0);
  iVar6 = (int)uVar7;
  do {
    if (iVar6 < 1) {
      if (iVar6 < 0) {
        Log::Print(3,(char *)0x0,"Encountered error while polling");
      }
      return;
    }
    if (local_a8[0] == 3) {
      plVar3 = *(longlong **)(local_90 + 0x18);
      pvVar9 = *(void **)(local_90 + 0x10);
      local_70 = (void *)0x0;
      uStack_68 = 0;
      local_60 = 0;
      local_80 = 0;
      lStack_78 = 0;
      local_88 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        if ((longlong *)0x7fffffffffffffff < plVar3) {
                    // WARNING: Subroutine does not return
          FUN_1800080f0();
        }
        FUN_18000f5f0((longlong *)&local_70,(ulonglong *)&local_88);
      }
      FUN_18000e340((ulonglong *)&local_70,pvVar9,(size_t)plVar3);
      plVar8 = (longlong *)FUN_18001cae0(0x40);
      *plVar8 = 0;
      plVar8[1] = 0;
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)std::_Ref_count_obj2<Message>::vftable;
      plVar3 = plVar8 + 2;
      local_b0 = plVar8;
      FUN_1800108c0((undefined2 *)plVar3,0);
      uVar11 = uVar11 | 2;
      local_e0 = local_80;
      local_d8 = lStack_78;
      local_e8 = uVar11;
      local_58 = plVar3;
      plStack_50 = plVar8;
      FUN_180008070((ulonglong *)&local_d0,(longlong *)&local_70);
      local_88 = &local_e0;
      lVar5 = local_e0 + 1;
      puVar2 = (undefined1 *)((longlong)local_d0 + local_e0);
      local_e0 = local_e0 + 2;
      *(ushort *)((longlong)plVar8 + 0x12) =
           CONCAT11(*puVar2,*(undefined1 *)((longlong)local_d0 + lVar5));
      plVar8[3] = local_e0;
      plVar8[4] = local_d8;
      if ((void **)(plVar8 + 5) != &local_d0) {
        FUN_18000e340((ulonglong *)(plVar8 + 5),local_d0,local_c8 - (longlong)local_d0);
      }
      if (local_d0 != (void *)0x0) {
        pvVar9 = local_d0;
        if ((0xfff < (ulonglong)(local_c0 - (longlong)local_d0)) &&
           (pvVar9 = *(void **)((longlong)local_d0 + -8),
           0x1f < (ulonglong)((longlong)local_d0 + (-8 - (longlong)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18001c9b8(pvVar9);
      }
      puVar4 = (undefined8 *)in_RDX[1];
      if (puVar4 == (undefined8 *)in_RDX[2]) {
        FUN_180009e20(in_RDX,puVar4,&local_58);
        plVar8 = plStack_50;
      }
      else {
        *puVar4 = 0;
        puVar4[1] = 0;
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        *puVar4 = plVar3;
        puVar4[1] = plVar8;
        in_RDX[1] = in_RDX[1] + 0x10;
      }
      FUN_180010e20(local_90);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar8 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
        }
      }
      if (local_70 != (void *)0x0) {
        pvVar9 = local_70;
        if ((0xfff < (ulonglong)(local_60 - (longlong)local_70)) &&
           (pvVar9 = *(void **)((longlong)local_70 + -8),
           0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pvVar9)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18001c9b8(pvVar9);
      }
    }
    else {
      if (local_a8[0] == 2) {
        (**(code **)(*(longlong *)this + 0x28))(this);
        pcVar10 = "Connection to the server has been lost";
      }
      else {
        if (local_a8[0] != 4) goto LAB_1800090e3;
        (**(code **)(*(longlong *)this + 0x28))(this);
        pcVar10 = "Connection to the server has been lost (Timeout)";
      }
      *(undefined8 *)(this + 0x38) = 0;
      Log::Print(2,(char *)0x0,pcVar10);
    }
LAB_1800090e3:
    local_88 = (longlong *)0x0;
    plVar3 = *(longlong **)(this + 200);
    if (plVar3 == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_88);
    uVar7 = FUN_180011c00(*(SOCKET **)(this + 8),local_a8,0);
    iVar6 = (int)uVar7;
  } while( true );
}



// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// const __cdecl ENetClient::GetHostAddress(void)const __ptr64

void __thiscall ENetClient::GetHostAddress(ENetClient *this)

{
  undefined8 *in_RDX;
  
                    // 0x9180  23
                    // ?GetHostAddress@ENetClient@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
  FUN_180006190(in_RDX,(undefined8 *)(this + 0x10));
  return;
}



// public: unsigned short __cdecl ENetClient::GetHostPort(void)const __ptr64

ushort __thiscall ENetClient::GetHostPort(ENetClient *this)

{
                    // 0x91a0  24  ?GetHostPort@ENetClient@@QEBAGXZ
  return *(ushort *)(this + 0x30);
}



// public: int __cdecl ENetClient::GetLatency(void)const __ptr64

int __thiscall ENetClient::GetLatency(ENetClient *this)

{
  int iVar1;
  
                    // 0x91b0  25  ?GetLatency@ENetClient@@QEBAHXZ
  if (*(longlong *)(this + 0x38) != 0) {
    iVar1 = *(int *)(*(longlong *)(this + 0x38) + 0xf4) + -0x14;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}



// public: void __cdecl ENetClient::OverrideSleepFunction(class std::function<void __cdecl(__int64)>
// const & __ptr64) __ptr64

void __thiscall ENetClient::OverrideSleepFunction(ENetClient *this,function<> *param_1)

{
  undefined8 *puVar1;
  longlong local_48 [7];
  longlong *local_10;
  
                    // 0x91d0  43
                    // ?OverrideSleepFunction@ENetClient@@QEAAXAEBV?$function@$$A6AX_J@Z@std@@@Z
  local_10 = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    local_10 = (longlong *)(**(code **)*puVar1)(puVar1,local_48);
  }
  FUN_1800096b0(local_48,(longlong *)(this + 0x90));
  if (local_10 != (longlong *)0x0) {
    (**(code **)(*local_10 + 0x20))
              (local_10,CONCAT71((int7)((ulonglong)local_48 >> 8),local_10 != local_48));
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// private: void __cdecl ENetClient::SafeReadData(class std::shared_ptr<class Message> const &
// __ptr64) __ptr64

void __thiscall ENetClient::SafeReadData(ENetClient *this,shared_ptr<Message> *param_1)

{
  ENetClient *SRWLock;
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  void *pvVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined8 uStack_88;
  longlong local_80;
  ENetClient *local_78;
  undefined8 uStack_70;
  longlong local_68 [7];
  longlong *local_30;
  ulonglong local_28;
  
                    // 0x9230  46
                    // ?SafeReadData@ENetClient@@AEAAXAEBV?$shared_ptr@VMessage@@@std@@@Z
  local_28 = DAT_1800280c0 ^ (ulonglong)auStack_c8;
  local_30 = (longlong *)0x0;
  SRWLock = this + 0x88;
  uStack_70 = 1;
  local_78 = SRWLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = *(ushort *)(*(longlong *)param_1 + 2);
  uVar5 = (((ulonglong)uVar1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)(uVar1 >> 8))
          * 0x100000001b3 & *(ulonglong *)(this + 0x78);
  lVar3 = *(longlong *)(this + 0x60);
  lVar4 = *(longlong *)(lVar3 + 8 + uVar5 * 0x10);
  lVar8 = 0;
  if (lVar4 != *(longlong *)(this + 0x50)) {
    uVar2 = *(ushort *)(lVar4 + 0x10);
    while ((lVar8 = lVar4, uVar1 != uVar2 &&
           (lVar8 = 0, lVar4 != *(longlong *)(lVar3 + uVar5 * 0x10)))) {
      lVar4 = *(longlong *)(lVar4 + 8);
      uVar2 = *(ushort *)(lVar4 + 0x10);
    }
  }
  local_a8 = uVar1;
  if (lVar8 == 0) {
LAB_180009354:
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    if (local_30 == (longlong *)0x0) goto LAB_18000941a;
    local_90 = (void *)0x0;
    uStack_88 = 0;
    local_80 = 0;
    lVar3 = *(longlong *)param_1;
    local_a0 = *(undefined8 *)(lVar3 + 8);
    uStack_98 = *(undefined8 *)(lVar3 + 0x10);
    FUN_180008070((ulonglong *)&local_90,(longlong *)(lVar3 + 0x18));
    pcVar6 = (char *)local_30;
    if (local_30 == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
  }
  else {
    local_a8._1_1_ = (byte)(uVar1 >> 8);
    uVar5 = ((ulonglong)local_a8._1_1_ ^
            ((ulonglong)(byte)uVar1 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 &
            *(ulonglong *)(this + 0x78);
    lVar4 = *(longlong *)(lVar3 + 8 + uVar5 * 0x10);
    if (lVar4 != *(longlong *)(this + 0x50)) {
      uVar2 = *(ushort *)(lVar4 + 0x10);
      while (uVar1 != uVar2) {
        if (lVar4 == *(longlong *)(lVar3 + uVar5 * 0x10)) goto LAB_1800093b9;
        lVar4 = *(longlong *)(lVar4 + 8);
        uVar2 = *(ushort *)(lVar4 + 0x10);
      }
      FUN_180009480(local_68,lVar4 + 0x18);
      goto LAB_180009354;
    }
LAB_1800093b9:
    pcVar6 = "invalid unordered_map<K, T> key";
    std::_Xout_of_range("invalid unordered_map<K, T> key");
  }
  (**(code **)(*(longlong *)pcVar6 + 0x10))();
  if (local_90 != (void *)0x0) {
    pvVar7 = local_90;
    if ((0xfff < (ulonglong)(local_80 - (longlong)local_90)) &&
       (pvVar7 = *(void **)((longlong)local_90 + -8),
       0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar7);
  }
LAB_18000941a:
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))
              (local_30,CONCAT71((int7)((ulonglong)local_68 >> 8),local_30 != local_68));
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

longlong * FUN_180009480(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  longlong local_98 [7];
  longlong *local_60;
  longlong local_58 [7];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_1800280c0 ^ (ulonglong)auStack_b8;
  local_60 = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    local_60 = (longlong *)(**(code **)*puVar1)(puVar1,local_98);
  }
  if ((local_60 != local_98) && (plVar2 = (longlong *)param_1[7], plVar2 != param_1)) {
    param_1[7] = (longlong)local_60;
    local_60 = plVar2;
    goto LAB_1800095d9;
  }
  local_20 = (longlong *)0x0;
  if (local_60 != (longlong *)0x0) {
    plVar2 = local_60;
    if (local_60 == local_98) {
      local_20 = (longlong *)(**(code **)(*local_60 + 8))(local_60,local_58);
      if (local_60 == (longlong *)0x0) goto LAB_180009542;
      (**(code **)(*local_60 + 0x20))
                (local_60,CONCAT71((int7)((ulonglong)local_98 >> 8),local_60 != local_98));
      plVar2 = local_20;
    }
    local_20 = plVar2;
    local_60 = (longlong *)0x0;
  }
LAB_180009542:
  plVar2 = (longlong *)param_1[7];
  if (plVar2 != (longlong *)0x0) {
    if (plVar2 == param_1) {
      local_60 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,local_98);
      plVar2 = (longlong *)param_1[7];
      if (plVar2 == (longlong *)0x0) goto LAB_180009598;
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_1);
      plVar2 = local_60;
    }
    local_60 = plVar2;
    param_1[7] = 0;
  }
LAB_180009598:
  if (local_20 != (longlong *)0x0) {
    if (local_20 == local_58) {
      lVar3 = (**(code **)(*local_20 + 8))(local_20,param_1);
      param_1[7] = lVar3;
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + 0x20))
                  (local_20,CONCAT71((int7)((ulonglong)local_58 >> 8),local_20 != local_58));
      }
    }
    else {
      param_1[7] = (longlong)local_20;
    }
  }
LAB_1800095d9:
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x20))(local_60,local_60 != local_98);
  }
  return param_1;
}



void FUN_180009610(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*param_1 != 0) {
    FUN_180009c10(*param_1,param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff0U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void FUN_180009680(undefined8 *param_1)

{
  FUN_180009c90(param_1,(undefined8 *)*param_1);
  FUN_18001c9b8((void *)*param_1);
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800096b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [7];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1800280c0 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)param_1[7];
  if ((plVar1 != param_1) && ((longlong *)param_2[7] != param_2)) {
    param_1[7] = param_2[7];
    param_2[7] = (longlong)plVar1;
    return;
  }
  local_30 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_1) {
      local_30 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_68);
      plVar1 = (longlong *)param_1[7];
      if (plVar1 == (longlong *)0x0) goto LAB_180009743;
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
      plVar1 = local_30;
    }
    local_30 = plVar1;
    param_1[7] = 0;
  }
LAB_180009743:
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      lVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      param_1[7] = lVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 == (longlong *)0x0) goto LAB_180009789;
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    }
    else {
      param_1[7] = (longlong)plVar1;
    }
    param_2[7] = 0;
  }
LAB_180009789:
  if (local_30 != (longlong *)0x0) {
    if (local_30 == local_68) {
      lVar2 = (**(code **)(*local_30 + 8))(local_30,param_2);
      param_2[7] = lVar2;
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x20))
                  (local_30,CONCAT71((int7)((ulonglong)local_68 >> 8),local_30 != local_68));
      }
    }
    else {
      param_2[7] = (longlong)local_30;
    }
  }
  return;
}



longlong * FUN_1800097f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)param_2[1];
  plVar9 = (longlong *)
           ((*(ulonglong *)(param_1 + 0x30) &
            (((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3) * 0x10 + lVar1);
  plVar4 = (longlong *)*plVar9;
  plVar7 = (longlong *)plVar9[1];
  plVar10 = param_2;
  while( true ) {
    plVar5 = (longlong *)plVar10[10];
    plVar8 = (longlong *)*plVar10;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,plVar5 != plVar10 + 3);
      plVar10[10] = 0;
    }
    FUN_18001c9b8(plVar10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar10 == plVar7) break;
    plVar10 = plVar8;
    if (plVar8 == param_3) {
      if (plVar4 == param_2) {
        *plVar9 = (longlong)plVar8;
      }
LAB_180009999:
      *puVar3 = plVar8;
      plVar8[1] = (longlong)puVar3;
      return param_3;
    }
  }
  puVar6 = puVar3;
  if (plVar4 == param_2) {
    *plVar9 = (longlong)puVar2;
    puVar6 = puVar2;
  }
  plVar9[1] = (longlong)puVar6;
  while (plVar8 != param_3) {
    plVar10 = (longlong *)
              ((*(ulonglong *)(param_1 + 0x30) &
               (((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3) * 0x10 + lVar1);
    plVar4 = (longlong *)plVar10[1];
    plVar7 = plVar8;
    while( true ) {
      plVar9 = (longlong *)plVar7[10];
      plVar8 = (longlong *)*plVar7;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9,plVar9 != plVar7 + 3);
        plVar7[10] = 0;
      }
      FUN_18001c9b8(plVar7);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar7 == plVar4) break;
      plVar7 = plVar8;
      if (plVar8 == param_3) {
        *plVar10 = (longlong)plVar8;
        goto LAB_180009999;
      }
    }
    *plVar10 = (longlong)puVar2;
    plVar10[1] = (longlong)puVar2;
  }
  goto LAB_180009999;
}



undefined8 * FUN_1800099f0(float *param_1,undefined8 *param_2,byte *param_3)

{
  short sVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float fVar9;
  
  uVar8 = (((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
          0x100000001b3;
  puVar6 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  puVar7 = *(undefined8 **)(param_1 + 2);
  if (puVar6 != puVar7) {
    sVar1 = *(short *)(puVar6 + 2);
    puVar7 = puVar6;
    while( true ) {
      if (*(short *)param_3 == sVar1) {
        *param_2 = puVar7;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar7 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar7 = (undefined8 *)puVar7[1];
      sVar1 = *(short *)(puVar7 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x2e8ba2e8ba2e8ba) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar5 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar5)();
    return puVar6;
  }
  puVar6 = (undefined8 *)FUN_18001cae0(0x58);
  *(undefined2 *)(puVar6 + 2) = *(undefined2 *)param_3;
  puVar6[10] = 0;
  fVar9 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar9 && fVar9 != *param_1) {
    FUN_180007370(param_1);
    puVar2 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
    puVar7 = *(undefined8 **)(param_1 + 2);
    if (puVar2 != puVar7) {
      sVar1 = *(short *)(puVar2 + 2);
      puVar7 = puVar2;
      while (*(short *)(puVar6 + 2) != sVar1) {
        if (puVar7 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10)
           ) goto LAB_180009ba4;
        puVar7 = (undefined8 *)puVar7[1];
        sVar1 = *(short *)(puVar7 + 2);
      }
      puVar7 = (undefined8 *)*puVar7;
    }
  }
LAB_180009ba4:
  puVar2 = (undefined8 *)puVar7[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar7;
  puVar6[1] = puVar2;
  *puVar2 = puVar6;
  puVar7[1] = puVar6;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
  puVar4 = *(undefined8 **)(lVar3 + uVar8 * 0x10);
  if (puVar4 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar3 + uVar8 * 0x10) = puVar6;
  }
  else {
    if (puVar4 == puVar7) {
      *(undefined8 **)(lVar3 + uVar8 * 0x10) = puVar6;
      goto LAB_180009bf6;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar8 * 0x10) != puVar2) goto LAB_180009bf6;
  }
  *(undefined8 **)(lVar3 + 8 + uVar8 * 0x10) = puVar6;
LAB_180009bf6:
  *param_2 = puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



void FUN_180009c10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    plVar4 = *(longlong **)(param_1 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
  }
  return;
}



void FUN_180009c90(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)param_2[1] = 0;
  puVar3 = (undefined8 *)*param_2;
  while (puVar3 != (undefined8 *)0x0) {
    plVar1 = (longlong *)puVar3[10];
    puVar2 = (undefined8 *)*puVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != puVar3 + 3);
      puVar3[10] = 0;
    }
    FUN_18001c9b8(puVar3);
    puVar3 = puVar2;
  }
  return;
}



void FUN_180009d10(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x50);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(lVar1 + 0x18));
      *(undefined8 *)(lVar1 + 0x50) = 0;
    }
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_18001c9b8(*(void **)(param_1 + 8));
  }
  return;
}



void FUN_180009d70(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x38) - (longlong)pvVar1)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



undefined8 * FUN_180009dd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_obj2<Message>::vftable;
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1);
  }
  return param_1;
}



undefined8 * FUN_180009e20(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  
  lVar3 = *param_1;
  lVar6 = param_1[1] - lVar3 >> 4;
  if (lVar6 == 0xfffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_1800080f0();
  }
  uVar7 = param_1[2] - lVar3 >> 4;
  uVar1 = lVar6 + 1;
  if (0xfffffffffffffff - (uVar7 >> 1) < uVar7) {
LAB_18000a06b:
                    // WARNING: Subroutine does not return
    FUN_180001d40();
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar12 = uVar1;
  if (uVar1 <= uVar7) {
    uVar12 = uVar7;
  }
  if (0xfffffffffffffff < uVar12) goto LAB_18000a06b;
  uVar7 = uVar12 * 0x10;
  puVar11 = (undefined8 *)0x0;
  if (uVar7 != 0) {
    if (uVar7 < 0x1000) {
      puVar11 = (undefined8 *)FUN_18001cae0(uVar7);
    }
    else {
      if (uVar7 + 0x27 <= uVar7) goto LAB_18000a06b;
      lVar6 = FUN_18001cae0(uVar7 + 0x27);
      if (lVar6 == 0) goto LAB_18000a05e;
      puVar11 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      puVar11[-1] = lVar6;
    }
  }
  puVar13 = (undefined8 *)(((longlong)param_2 - lVar3 & 0xfffffffffffffff0U) + (longlong)puVar11);
  *puVar13 = 0;
  puVar13[1] = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar2 = (int *)(param_3[1] + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *puVar13 = *param_3;
  puVar13[1] = param_3[1];
  puVar4 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  puVar8 = puVar11;
  if (param_2 == puVar4) {
    for (; puVar10 != puVar4; puVar10 = puVar10 + 2) {
      *puVar8 = 0;
      puVar8[1] = 0;
      *puVar8 = *puVar10;
      puVar8[1] = puVar10[1];
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar8 = puVar8 + 2;
    }
  }
  else {
    for (; puVar10 != param_2; puVar10 = puVar10 + 2) {
      *puVar8 = 0;
      puVar8[1] = 0;
      *puVar8 = *puVar10;
      puVar8[1] = puVar10[1];
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar8 = puVar8 + 2;
    }
    FUN_180009c10((longlong)puVar8,(longlong)puVar8);
    puVar4 = (undefined8 *)param_1[1];
    puVar10 = puVar13;
    for (; puVar8 = puVar10 + 2, param_2 != puVar4; param_2 = param_2 + 2) {
      *puVar8 = 0;
      puVar10[3] = 0;
      *puVar8 = *param_2;
      puVar10[3] = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      puVar10 = puVar8;
    }
  }
  FUN_180009c10((longlong)puVar8,(longlong)puVar8);
  if (*param_1 != 0) {
    FUN_180009c10(*param_1,param_1[1]);
    pvVar5 = (void *)*param_1;
    pvVar9 = pvVar5;
    if ((0xfff < (param_1[2] - (longlong)pvVar5 & 0xfffffffffffffff0U)) &&
       (pvVar9 = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar9)))) {
LAB_18000a05e:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar9);
  }
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + uVar1 * 2);
  param_1[2] = (longlong)(puVar11 + uVar12 * 2);
  return puVar13;
}



TypeDescriptor * FUN_18000a080(void)

{
  return &.P6AX_J@Z::RTTI_Type_Descriptor;
}



void FUN_18000a090(longlong param_1,undefined8 *param_2)

{
                    // WARNING: Could not recover jumptable at 0x00018000a096. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 8))(*param_2);
  return;
}



undefined8 * FUN_18000a0a0(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18000a0c0(float *param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_1800280c0 ^ (ulonglong)auStack_58;
  plVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    plVar2 = (longlong *)*param_2;
  }
  uVar3 = 0;
  uVar4 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)plVar2 + uVar3);
      uVar3 = uVar3 + 1;
      uVar4 = (uVar4 ^ *pbVar1) * 0x100000001b3;
    } while (uVar3 < (ulonglong)param_2[2]);
  }
  plVar2 = FUN_180001b60((longlong)param_1,local_28,param_2,uVar4);
  if (plVar2[1] != 0) {
    plVar2 = FUN_18000b210(param_1,local_38,param_2);
    local_28[0] = 0;
    plVar2 = *(longlong **)(*plVar2 + 0x68);
    if (plVar2 == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,local_28);
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18000a190(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  uint local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  uint local_1e0;
  undefined1 local_1dc [4];
  longlong alStack_1d8 [4];
  undefined4 auStack_1b4 [39];
  undefined8 local_118 [32];
  ulonglong local_18;
  
  local_18 = DAT_1800280c0 ^ (ulonglong)auStack_218;
  local_1ec = 0;
  memset(local_1dc,0,0x1c4);
  local_1f0 = 0;
  local_1e0 = 0;
  local_1f8 = local_118;
  local_1e8 = local_118;
  memset(local_118,0,0x100);
  local_118[local_1f0] = 0;
  *(undefined4 *)(local_118 + local_1f0) = param_1;
  local_1f0 = local_1f0 + 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_1800297d4) && (FUN_18001ca68(&DAT_1800297d4), DAT_1800297d4 == -1)) {
    DAT_1800297d8 = rage::scrThread::GetCommand(0x28a2a4cc);
    _Init_thread_footer(&DAT_1800297d4);
  }
  uVar1 = local_1e0;
  if (DAT_1800297d8 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_1800297d8)((InfoBase *)&local_1f8);
    uVar1 = local_1e0;
  }
  while (uVar1 != 0) {
    local_1e0 = uVar1 - 1;
    *(undefined4 *)alStack_1d8[local_1e0] =
         *(undefined4 *)((longlong)&local_1f8 + (ulonglong)((uVar1 + 3) * 0x10));
    *(undefined4 *)(alStack_1d8[local_1e0] + 4) = auStack_1b4[(ulonglong)local_1e0 * 4];
    *(undefined4 *)(alStack_1d8[local_1e0] + 8) = auStack_1b4[(ulonglong)local_1e0 * 4 + 1];
    uVar1 = local_1e0;
  }
  return;
}



// public: virtual void __cdecl GameClient::OnStart(void) __ptr64

void __thiscall GameClient::OnStart(GameClient *this)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 in_R9;
  undefined **local_50;
  code *local_48;
  undefined ***local_18;
  
                    // 0xa300  38  ?OnStart@GameClient@@UEAAXXZ
  puVar6 = (undefined8 *)FUN_18001cae0(0x18);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)(puVar6 + 1) = 1;
  *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
  *puVar6 = std::_Ref_count_obj2<TextChat>::vftable;
  TextChat::TextChat((TextChat *)(puVar6 + 2));
  *(TextChat **)(this + 0x158) = (TextChat *)(puVar6 + 2);
  plVar4 = *(longlong **)(this + 0x160);
  *(undefined8 **)(this + 0x160) = puVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  puVar6 = (undefined8 *)FUN_18001cae0(0x18);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)(puVar6 + 1) = 1;
  *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
  *puVar6 = std::_Ref_count_obj2<>::vftable;
  FUN_18000b9b0(puVar6 + 2);
  *(undefined8 **)(this + 0x168) = puVar6 + 2;
  plVar4 = *(longlong **)(this + 0x170);
  *(undefined8 **)(this + 0x170) = puVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  puVar7 = (undefined8 *)FUN_18001cae0(0x50);
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 1) = 1;
  *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
  *puVar7 = std::_Ref_count_obj2<>::vftable;
  puVar6 = puVar7;
  FUN_180002ea0((float *)(puVar7 + 2));
  *(undefined8 **)(this + 0x178) = puVar7 + 2;
  plVar4 = *(longlong **)(this + 0x180);
  *(undefined8 **)(this + 0x180) = puVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  local_50 = std::_Func_impl_no_alloc<>::vftable;
  local_48 = FUN_1800012b0;
  local_18 = &local_50;
  ENetClient::RegisterPacket((ENetClient *)this,3,&local_50,in_R9,puVar6);
  return;
}



// public: virtual void __cdecl GameClient::OnConnectionSucceeded(void) __ptr64

void __thiscall GameClient::OnConnectionSucceeded(GameClient *this)

{
  void *pvVar1;
  void *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong uStack_10;
  
                    // 0xa4f0  34  ?OnConnectionSucceeded@GameClient@@UEAAXXZ
  local_28 = (void *)0x0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FUN_180007110(&local_28,"on_connection_succeeded",0x17);
  FUN_18000a0c0((float *)(this + 0xd0),(longlong *)&local_28);
  if (0xf < uStack_10) {
    pvVar1 = local_28;
    if ((0xfff < uStack_10 + 1) &&
       (pvVar1 = *(void **)((longlong)local_28 + -8),
       0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar1);
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: virtual void __cdecl GameClient::OnConnectionFailed(void) __ptr64

void __thiscall GameClient::OnConnectionFailed(GameClient *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  longlong *local_20;
  MainMenuClient *local_18;
  ulonglong local_10;
  
                    // 0xa580  32  ?OnConnectionFailed@GameClient@@UEAAXXZ
  local_10 = DAT_1800280c0 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)Singleton<CEFManager>::Get();
  lVar3 = *plVar4;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_180007110(&local_48,"mainmenu",8);
  FUN_18000af90(lVar3,(longlong *)&local_18,&local_48);
  if (0xf < uStack_30) {
    pvVar5 = local_48;
    if ((0xfff < uStack_30 + 1) &&
       (pvVar5 = *(void **)((longlong)local_48 + -8),
       0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar5);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20);
      }
    }
  }
  if (local_18 != (MainMenuClient *)0x0) {
    MainMenuClient::OnConnectionFailed(local_18);
    (**(code **)(*(longlong *)(local_18 + (longlong)*(int *)(*(longlong *)(local_18 + 8) + 4) + 8) +
                8))();
  }
  return;
}



// public: virtual void __cdecl GameClient::OnTick(void) __ptr64

void __thiscall GameClient::OnTick(GameClient *this)

{
  sagPlayer *psVar1;
  
                    // 0xa6b0  40  ?OnTick@GameClient@@UEAAXXZ
  psVar1 = rage::sagPlayerMgr::GetLocalPlayer();
  if (psVar1 != (sagPlayer *)0x0) {
    FUN_180005b30(this,psVar1);
    return;
  }
  return;
}



// public: virtual void __cdecl GameClient::OnUpdate(void) __ptr64

void __thiscall GameClient::OnUpdate(GameClient *this)

{
                    // 0xa6d0  42  ?OnUpdate@GameClient@@UEAAXXZ
  FUN_1800034e0(*(longlong *)(this + 0x178));
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: virtual void __cdecl GameClient::OnDisconnect(void) __ptr64

void __thiscall GameClient::OnDisconnect(GameClient *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  undefined1 auStack_7e8 [32];
  void *local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  ulonglong uStack_7b0;
  undefined8 *local_7a8;
  uint local_7a0;
  undefined4 local_79c;
  undefined8 *local_798;
  uint local_790;
  undefined1 local_78c [4];
  longlong alStack_788 [4];
  undefined4 auStack_764 [39];
  undefined8 local_6c8 [32];
  undefined4 *local_5c8;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 *local_5b8;
  uint local_5b0;
  undefined1 local_5ac [4];
  longlong alStack_5a8 [4];
  undefined4 auStack_584 [39];
  undefined4 local_4e8 [64];
  undefined4 *local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 *local_3d8;
  uint local_3d0;
  undefined1 local_3cc [4];
  longlong alStack_3c8 [4];
  undefined4 auStack_3a4 [39];
  undefined4 local_308 [64];
  undefined1 *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined1 *local_1f8;
  uint local_1f0;
  undefined1 local_1ec [4];
  longlong alStack_1e8 [4];
  undefined4 auStack_1c4 [39];
  undefined1 local_128 [256];
  ulonglong local_28;
  
                    // 0xa6e0  36  ?OnDisconnect@GameClient@@UEAAXXZ
  local_28 = DAT_1800280c0 ^ (ulonglong)auStack_7e8;
  lVar1 = *(longlong *)(this + 0x178);
  puVar2 = *(undefined8 **)(lVar1 + 8);
  for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
    FUN_1800051d0(lVar1,*(ushort *)(puVar3 + 2));
  }
  local_79c = 0;
  memset(local_78c,0,0x1c4);
  local_798 = local_6c8;
  local_7a8 = local_6c8;
  local_7a0 = 0;
  local_790 = 0;
  memset(local_6c8,0,0x100);
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if ((*piVar7 < DAT_180029810) && (FUN_18001ca68(&DAT_180029810), DAT_180029810 == -1)) {
    DAT_1800297e8 = rage::scrThread::GetCommand(0xb52a3d48);
    _Init_thread_footer(&DAT_180029810);
  }
  uVar4 = local_790;
  if (DAT_1800297e8 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_1800297e8)((InfoBase *)&local_7a8);
    uVar4 = local_790;
  }
  while (uVar4 != 0) {
    local_790 = uVar4 - 1;
    *(undefined4 *)alStack_788[local_790] =
         *(undefined4 *)((longlong)&local_7a8 + (ulonglong)((uVar4 + 3) * 0x10));
    *(undefined4 *)(alStack_788[local_790] + 4) = auStack_764[(ulonglong)local_790 * 4];
    *(undefined4 *)(alStack_788[local_790] + 8) = auStack_764[(ulonglong)local_790 * 4 + 1];
    uVar4 = local_790;
  }
  local_5bc = 0;
  local_790 = uVar4;
  memset(local_5ac,0,0x1c4);
  local_5b8 = local_4e8;
  local_5c8 = local_4e8;
  local_5c0 = 0;
  local_5b0 = 0;
  memset(local_4e8,0,0x100);
  if ((*piVar7 < DAT_1800297f0) && (FUN_18001ca68(&DAT_1800297f0), DAT_1800297f0 == -1)) {
    DAT_180029818 = rage::scrThread::GetCommand(0xade13224);
    _Init_thread_footer(&DAT_1800297f0);
  }
  uVar4 = local_5b0;
  if (DAT_180029818 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_180029818)((InfoBase *)&local_5c8);
    uVar4 = local_5b0;
  }
  while (uVar4 != 0) {
    local_5b0 = uVar4 - 1;
    *(undefined4 *)alStack_5a8[local_5b0] =
         *(undefined4 *)((longlong)&local_5c8 + (ulonglong)((uVar4 + 3) * 0x10));
    *(undefined4 *)(alStack_5a8[local_5b0] + 4) = auStack_584[(ulonglong)local_5b0 * 4];
    *(undefined4 *)(alStack_5a8[local_5b0] + 8) = auStack_584[(ulonglong)local_5b0 * 4 + 1];
    uVar4 = local_5b0;
  }
  local_3dc = 0;
  local_5b0 = uVar4;
  memset(local_3cc,0,0x1c4);
  local_3d8 = local_308;
  local_3e8 = local_308;
  local_3e0 = 0;
  local_3d0 = 0;
  memset(local_308,0,0x100);
  if ((*piVar7 < DAT_1800297e0) && (FUN_18001ca68(&DAT_1800297e0), DAT_1800297e0 == -1)) {
    DAT_180029808 = rage::scrThread::GetCommand(0x76fbf412);
    _Init_thread_footer(&DAT_1800297e0);
  }
  uVar4 = local_3d0;
  if (DAT_180029808 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_180029808)((InfoBase *)&local_3e8);
    uVar4 = local_3d0;
  }
  while (uVar4 != 0) {
    local_3d0 = uVar4 - 1;
    *(undefined4 *)alStack_3c8[local_3d0] =
         *(undefined4 *)((longlong)&local_3e8 + (ulonglong)((uVar4 + 3) * 0x10));
    *(undefined4 *)(alStack_3c8[local_3d0] + 4) = auStack_3a4[(ulonglong)local_3d0 * 4];
    *(undefined4 *)(alStack_3c8[local_3d0] + 8) = auStack_3a4[(ulonglong)local_3d0 * 4 + 1];
    uVar4 = local_3d0;
  }
  local_3d0 = uVar4;
  uVar5 = FUN_1800069b0();
  local_1fc = 0;
  memset(local_1ec,0,0x1c4);
  local_1f8 = local_128;
  local_208 = local_128;
  local_200 = 0;
  local_1f0 = 0;
  memset(local_128,0,0x100);
  if ((*piVar7 < DAT_180029800) && (FUN_18001ca68(&DAT_180029800), DAT_180029800 == -1)) {
    DAT_180029820 = rage::scrThread::GetCommand(0x9028b082);
    _Init_thread_footer(&DAT_180029800);
  }
  uVar4 = local_1f0;
  if (DAT_180029820 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_180029820)((InfoBase *)&local_208);
    uVar4 = local_1f0;
  }
  while (uVar4 != 0) {
    local_1f0 = uVar4 - 1;
    *(undefined4 *)alStack_1e8[local_1f0] =
         *(undefined4 *)((longlong)&local_208 + (ulonglong)((uVar4 + 3) * 0x10));
    *(undefined4 *)(alStack_1e8[local_1f0] + 4) = auStack_1c4[(ulonglong)local_1f0 * 4];
    *(undefined4 *)(alStack_1e8[local_1f0] + 8) = auStack_1c4[(ulonglong)local_1f0 * 4 + 1];
    uVar4 = local_1f0;
  }
  local_1f0 = uVar4;
  FUN_18000a190((undefined4)local_6c8[0]);
  FUN_18000a190(local_4e8[0]);
  FUN_18000a190(local_308[0]);
  FUN_18000a190(uVar5);
  local_79c = 0;
  memset(local_78c,0,0x1c4);
  local_798 = local_6c8;
  local_7a8 = local_6c8;
  local_7a0 = 0;
  local_790 = 0;
  memset(local_6c8,0,0x100);
  local_6c8[local_7a0] = 0;
  *(undefined4 *)(local_6c8 + local_7a0) = uVar5;
  local_7a0 = local_7a0 + 1;
  if ((*piVar7 < DAT_180029814) && (FUN_18001ca68(&DAT_180029814), DAT_180029814 == -1)) {
    DAT_1800297f8 = rage::scrThread::GetCommand(0xc1756f39);
    _Init_thread_footer(&DAT_180029814);
  }
  uVar4 = local_790;
  if (DAT_1800297f8 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_1800297f8)((InfoBase *)&local_7a8);
    uVar4 = local_790;
  }
  while (uVar4 != 0) {
    local_790 = uVar4 - 1;
    *(undefined4 *)alStack_788[local_790] =
         *(undefined4 *)((longlong)&local_7a8 + (ulonglong)((uVar4 + 3) * 0x10));
    *(undefined4 *)(alStack_788[local_790] + 4) = auStack_764[(ulonglong)local_790 * 4];
    *(undefined4 *)(alStack_788[local_790] + 8) = auStack_764[(ulonglong)local_790 * 4 + 1];
    uVar4 = local_790;
  }
  local_7c8 = (void *)0x0;
  uStack_7c0 = 0;
  local_7b8 = 0;
  uStack_7b0 = 0;
  local_790 = uVar4;
  FUN_180007110(&local_7c8,"on_disconnect",0xd);
  FUN_18000a0c0((float *)(this + 0xd0),(longlong *)&local_7c8);
  if (0xf < uStack_7b0) {
    pvVar6 = local_7c8;
    if ((0xfff < uStack_7b0 + 1) &&
       (pvVar6 = *(void **)((longlong)local_7c8 + -8),
       0x1f < (ulonglong)((longlong)local_7c8 + (-8 - (longlong)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar6);
  }
  return;
}



// public: struct ServerData & __ptr64 __cdecl GameClient::GetServerData(void) __ptr64

ServerData * __thiscall GameClient::GetServerData(GameClient *this)

{
                    // 0xad60  27  ?GetServerData@GameClient@@QEAAAEAUServerData@@XZ
  return (ServerData *)(this + 0x118);
}



void FUN_18000ad70(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return;
}



basic_ostream<> * FUN_18000adb0(basic_ostream<> *param_1,char *param_2)

{
  basic_ostream<> *this;
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  __int64 _Var5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = 0;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (param_2[lVar7] != '\0');
  lVar6 = *(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if ((lVar6 < 1) || (lVar6 <= lVar7)) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar6 - lVar7;
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  bVar2 = false;
  if (bVar1) {
    this = *(basic_ostream<> **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x50);
    if ((this == (basic_ostream<> *)0x0) || (this == param_1)) {
      bVar2 = true;
    }
    else {
      std::basic_ostream<>::flush(this);
      bVar2 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  if (bVar2 == false) {
    iVar4 = 4;
  }
  else {
    if ((*(uint *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x18) & 0x1c0) != 0x40)
    {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar3 = std::basic_streambuf<>::sputc
                          (*(basic_streambuf<> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) goto LAB_18000af09;
      }
    }
    _Var5 = std::basic_streambuf<>::sputn
                      (*(basic_streambuf<> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),param_2,
                       lVar7);
    if (_Var5 == lVar7) {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar3 = std::basic_streambuf<>::sputc
                          (*(basic_streambuf<> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) goto LAB_18000af09;
      }
    }
    else {
LAB_18000af09:
      iVar4 = 4;
    }
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  std::basic_ios<>::setstate
            ((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar4,false);
  iVar4 = std::uncaught_exceptions();
  if (iVar4 == 0) {
    std::basic_ostream<>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}



longlong * FUN_18000af90(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong _Size;
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  
  iVar4 = _Mtx_lock();
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar3 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar3)();
    return plVar5;
  }
  if (*(int *)(param_1 + 0x5c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x5c) = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  _Size = param_3[2];
  uVar1 = param_3[3];
  puVar10 = param_3;
  if (0xf < uVar1) {
    puVar10 = (undefined8 *)*param_3;
  }
  uVar11 = 0xcbf29ce484222325;
  uVar9 = 0xcbf29ce484222325;
  uVar7 = 0;
  if (_Size != 0) {
    do {
      uVar9 = (uVar9 ^ *(byte *)((longlong)puVar10 + uVar7)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < _Size);
  }
  uVar9 = *(ulonglong *)(param_1 + 0x90) & uVar9;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 8 + uVar9 * 0x10);
  if (lVar6 != *(longlong *)(param_1 + 0x68)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + uVar9 * 0x10);
    while( true ) {
      puVar10 = (undefined8 *)(lVar6 + 0x10);
      if (0xf < *(ulonglong *)(lVar6 + 0x28)) {
        puVar10 = (undefined8 *)*puVar10;
      }
      puVar8 = param_3;
      if (0xf < uVar1) {
        puVar8 = (undefined8 *)*param_3;
      }
      if ((_Size == *(ulonglong *)(lVar6 + 0x20)) &&
         ((_Size == 0 || (iVar4 = memcmp(puVar8,puVar10,_Size), iVar4 == 0)))) goto LAB_18000b0c3;
      if (lVar6 == lVar2) break;
      lVar6 = *(longlong *)(lVar6 + 8);
    }
  }
  lVar6 = 0;
LAB_18000b0c3:
  if (lVar6 == 0) {
    *param_2 = 0;
    _Mtx_unlock(param_1 + 0x10);
    return param_2;
  }
  puVar10 = param_3;
  if (0xf < uVar1) {
    puVar10 = (undefined8 *)*param_3;
  }
  uVar7 = 0;
  if (_Size != 0) {
    do {
      uVar11 = (uVar11 ^ *(byte *)((longlong)puVar10 + uVar7)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < _Size);
  }
  uVar11 = *(ulonglong *)(param_1 + 0x90) & uVar11;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 8 + uVar11 * 0x10);
  if (lVar6 != *(longlong *)(param_1 + 0x68)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + uVar11 * 0x10);
    while( true ) {
      puVar10 = (undefined8 *)(lVar6 + 0x10);
      if (0xf < *(ulonglong *)(lVar6 + 0x28)) {
        puVar10 = (undefined8 *)*puVar10;
      }
      puVar8 = param_3;
      if (0xf < uVar1) {
        puVar8 = (undefined8 *)*param_3;
      }
      if ((_Size == *(ulonglong *)(lVar6 + 0x20)) &&
         ((_Size == 0 || (iVar4 = memcmp(puVar8,puVar10,_Size), iVar4 == 0)))) break;
      if (lVar6 == lVar2) goto LAB_18000b1c8;
      lVar6 = *(longlong *)(lVar6 + 8);
    }
    if (lVar6 != 0) {
      lVar6 = __RTDynamicCast(*(undefined8 *)(lVar6 + 0x30),0,&ClientHandler::RTTI_Type_Descriptor,
                              &MainMenuClient::RTTI_Type_Descriptor,0);
      *param_2 = lVar6;
      if (lVar6 != 0) {
        (*(code *)**(undefined8 **)((longlong)*(int *)(*(longlong *)(lVar6 + 8) + 4) + lVar6 + 8))()
        ;
      }
      _Mtx_unlock(param_1 + 0x10);
      return param_2;
    }
  }
LAB_18000b1c8:
  std::_Xout_of_range("invalid unordered_map<K, T> key");
  pcVar3 = (code *)swi(3);
  plVar5 = (longlong *)(*pcVar3)();
  return plVar5;
}



longlong * FUN_18000b210(float *param_1,longlong *param_2,longlong *param_3)

{
  size_t _Size;
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  undefined8 *local_58;
  longlong lStack_50;
  float *local_48;
  undefined8 *local_40;
  
  plVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    plVar4 = (longlong *)*param_3;
  }
  uVar11 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_3[2] != 0) {
    do {
      uVar11 = (uVar11 ^ *(byte *)((longlong)plVar4 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_3[2]);
  }
  FUN_180001b60((longlong)param_1,(longlong *)&local_58,param_3,uVar11);
  if (lStack_50 != 0) {
    *param_2 = lStack_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x249249249249249) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  local_40 = (undefined8 *)0x0;
  local_48 = param_1 + 2;
  puVar5 = (undefined8 *)FUN_18001cae0(0x70);
  local_40 = puVar5;
  FUN_180006190(puVar5 + 2,param_3);
  puVar5[0xd] = 0;
  uVar6 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar6) {
    fVar12 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar7 = 0;
    if ((9.223372e+18 <= fVar12) && (fVar12 = fVar12 - 9.223372e+18, fVar12 < 9.223372e+18)) {
      lVar7 = -0x8000000000000000;
    }
    uVar8 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar7)) {
      uVar8 = (longlong)fVar12 + lVar7;
    }
    uVar9 = uVar6;
    if ((uVar6 < uVar8) && ((0x1ff < uVar6 || (uVar9 = uVar6 * 8, uVar6 * 8 < uVar8)))) {
      uVar9 = uVar8;
    }
    FUN_18000b6c0((longlong)param_1,uVar9);
    puVar10 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    if (puVar10 != local_58) {
      puVar1 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
      _Size = puVar5[4];
      while( true ) {
        _Buf2 = puVar10 + 2;
        if (0xf < (ulonglong)puVar10[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        _Buf1 = puVar5 + 2;
        if (0xf < (ulonglong)puVar5[5]) {
          _Buf1 = (undefined8 *)puVar5[2];
        }
        if ((_Size == puVar10[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0)))) break;
        local_58 = puVar10;
        if (puVar10 == puVar1) goto LAB_18000b45e;
        puVar10 = (undefined8 *)puVar10[1];
      }
      local_58 = (undefined8 *)*puVar10;
    }
  }
LAB_18000b45e:
  puVar10 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = local_58;
  puVar5[1] = puVar10;
  *puVar10 = puVar5;
  local_58[1] = puVar5;
  lVar7 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar1 = *(undefined8 **)(lVar7 + uVar11 * 0x10);
  if (puVar1 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar7 + uVar11 * 0x10) = puVar5;
  }
  else {
    if (puVar1 == local_58) {
      *(undefined8 **)(lVar7 + uVar11 * 0x10) = puVar5;
      goto LAB_18000b4ad;
    }
    if (*(undefined8 **)(lVar7 + 8 + uVar11 * 0x10) != puVar10) goto LAB_18000b4ad;
  }
  *(undefined8 **)(lVar7 + 8 + uVar11 * 0x10) = puVar5;
LAB_18000b4ad:
  *param_2 = (longlong)puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



void FUN_18000b4d0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 local_res8 [4];
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  if (uVar2 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x18);
    if (uVar2 < *(ulonglong *)(param_1 + 0x48) >> 3) {
      FUN_1800062b0(lVar1,(longlong *)*plVar3,plVar3);
      FUN_180003430(lVar1);
      return;
    }
    FUN_180007210(uVar2,plVar3);
    *(undefined8 *)*(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(longlong *)(*(longlong *)(param_1 + 0x18) + 8) = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = 0;
    local_res8[0] = *(undefined8 *)(param_1 + 0x18);
    FUN_180007080(*(undefined8 **)(param_1 + 0x28),*(undefined8 **)(param_1 + 0x30),local_res8);
  }
  FUN_180003430(lVar1);
  return;
}



void FUN_18000b560(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_180007a60((longlong *)(*(longlong *)(param_1 + 8) + 0x10));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_18001c9b8(*(void **)(param_1 + 8));
    return;
  }
  return;
}



void FUN_18000b5a0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = std::uncaught_exceptions();
  if (iVar2 == 0) {
    std::basic_ostream<>::_Osfx((basic_ostream<> *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



undefined8 * FUN_18000b5e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1);
  }
  return param_1;
}



undefined8 * FUN_18000b610(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1);
  }
  return param_1;
}



undefined8 * FUN_18000b640(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_obj2<TextChat>::vftable;
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1);
  }
  return param_1;
}



void FUN_18000b690(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



void FUN_18000b6c0(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong _Size;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *_Buf1;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  
  for (lVar15 = 0x3f; 0xfffffffffffffffU >> lVar15 == 0; lVar15 = lVar15 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar15 & 0x3f)) < param_2) {
    std::_Xlength_error("invalid hash bucket count");
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  uVar10 = param_2 - 1 | 1;
  lVar15 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  lVar15 = 1L << ((char)lVar15 + 1U & 0x3f);
  FUN_180006870((ulonglong *)(param_1 + 0x18),lVar15 * 2,plVar2);
  *(longlong *)(param_1 + 0x38) = lVar15;
  *(longlong *)(param_1 + 0x30) = lVar15 + -1;
  plVar8 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x00018000b74a:
  do {
    if (plVar8 == plVar2) {
      return;
    }
    uVar10 = plVar8[5];
    plVar14 = plVar8 + 2;
    plVar3 = (longlong *)*plVar8;
    _Size = plVar8[4];
    if (0xf < uVar10) {
      plVar14 = (longlong *)plVar8[2];
    }
    uVar13 = 0;
    uVar11 = 0xcbf29ce484222325;
    if (_Size != 0) {
      do {
        pbVar1 = (byte *)((longlong)plVar14 + uVar13);
        uVar13 = uVar13 + 1;
        uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
      } while (uVar13 < _Size);
    }
    puVar16 = (undefined8 *)
              (*(longlong *)(param_1 + 0x18) + (uVar11 & *(ulonglong *)(param_1 + 0x30)) * 0x10);
    if ((longlong *)*puVar16 == plVar2) {
      *puVar16 = plVar8;
LAB_18000b918:
      puVar16[1] = plVar8;
      plVar8 = plVar3;
      goto joined_r0x00018000b74a;
    }
    plVar4 = (longlong *)puVar16[1];
    plVar14 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      plVar14 = (longlong *)*plVar14;
    }
    plVar12 = plVar8 + 2;
    if (0xf < uVar10) {
      plVar12 = (longlong *)plVar8[2];
    }
    if ((_Size == plVar4[4]) &&
       ((_Size == 0 || (iVar9 = memcmp(plVar12,plVar14,_Size), iVar9 == 0)))) {
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != plVar8) {
        plVar14 = (longlong *)plVar8[1];
        *plVar14 = (longlong)plVar3;
        puVar5 = (undefined8 *)plVar3[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar8;
        plVar4[1] = (longlong)puVar5;
        plVar3[1] = (longlong)plVar14;
        plVar8[1] = (longlong)puVar6;
      }
      goto LAB_18000b918;
    }
    plVar14 = (longlong *)*puVar16;
    do {
      if (plVar14 == plVar4) {
        plVar14 = (longlong *)plVar8[1];
        *plVar14 = (longlong)plVar3;
        puVar5 = (undefined8 *)plVar3[1];
        *puVar5 = plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar8;
        plVar4[1] = (longlong)puVar5;
        plVar3[1] = (longlong)plVar14;
        plVar8[1] = (longlong)puVar6;
        *puVar16 = plVar8;
        plVar8 = plVar3;
        goto joined_r0x00018000b74a;
      }
      plVar4 = (longlong *)plVar4[1];
      plVar12 = plVar4 + 2;
      if (0xf < (ulonglong)plVar4[5]) {
        plVar12 = (longlong *)*plVar12;
      }
      _Buf1 = plVar8 + 2;
      if (0xf < uVar10) {
        _Buf1 = (longlong *)plVar8[2];
      }
    } while ((_Size != plVar4[4]) ||
            ((_Size != 0 && (iVar9 = memcmp(_Buf1,plVar12,_Size), iVar9 != 0))));
    lVar15 = *plVar4;
    plVar14 = (longlong *)plVar8[1];
    *plVar14 = (longlong)plVar3;
    plVar4 = (longlong *)plVar3[1];
    *plVar4 = lVar15;
    puVar16 = *(undefined8 **)(lVar15 + 8);
    *puVar16 = plVar8;
    *(longlong **)(lVar15 + 8) = plVar4;
    plVar3[1] = (longlong)plVar14;
    plVar8[1] = (longlong)puVar16;
    plVar8 = plVar3;
  } while( true );
}



TypeDescriptor * FUN_18000b970(void)

{
  return &.P6AXAEBVStreamBuffer@@@Z::RTTI_Type_Descriptor;
}



void FUN_18000b980(longlong param_1,undefined8 param_2)

{
                    // WARNING: Could not recover jumptable at 0x00018000b986. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 8))(param_2);
  return;
}



undefined8 * FUN_18000b990(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



undefined8 FUN_18000b9b0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined ***local_10;
  
  puVar5 = (undefined8 *)Singleton<GameClient>::Get();
  local_48 = std::_Func_impl_no_alloc<>::vftable;
  local_10 = &local_48;
  local_40 = param_1;
  ENetClient::RegisterPacket((ENetClient *)*puVar5,5,&local_48);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50);
      }
    }
  }
  return param_1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18000ba50(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  undefined1 auStack_7d8 [32];
  int *local_7b8;
  uint local_7b0;
  undefined4 local_7ac;
  int *local_7a8;
  uint local_7a0;
  undefined1 local_79c [4];
  longlong alStack_798 [4];
  undefined4 auStack_774 [39];
  int local_6d8 [64];
  float *local_5d8;
  uint local_5d0;
  undefined4 local_5cc;
  float *local_5c8;
  uint local_5c0;
  undefined1 local_5bc [4];
  longlong alStack_5b8 [4];
  undefined4 auStack_594 [39];
  float local_4f8 [64];
  int *local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  int *local_3e8;
  uint local_3e0;
  undefined1 local_3dc [4];
  longlong alStack_3d8 [4];
  undefined4 auStack_3b4 [39];
  int local_318 [64];
  float *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  float *local_208;
  uint local_200;
  undefined1 local_1fc [4];
  longlong alStack_1f8 [4];
  undefined4 auStack_1d4 [39];
  float local_138 [64];
  ulonglong local_38;
  
  local_38 = DAT_1800280c0 ^ (ulonglong)auStack_7d8;
  lVar6 = *param_2;
  lVar7 = param_2[2];
  iVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar6 + lVar7),
                                     *(undefined1 *)(lVar6 + 1 + lVar7)),
                            *(undefined1 *)(lVar6 + 2 + lVar7)),*(undefined1 *)(lVar6 + 3 + lVar7));
  *param_2 = lVar6 + 4;
  uVar2 = *(undefined1 *)(lVar6 + 4 + lVar7);
  uVar3 = *(undefined1 *)(lVar6 + 5 + lVar7);
  uVar4 = *(undefined1 *)(lVar6 + 6 + lVar7);
  uVar5 = *(undefined1 *)(lVar6 + 7 + lVar7);
  *param_2 = lVar6 + 8;
  dVar10 = FUN_180010bf0((ulonglong)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),' ',8);
  local_3ec = 0;
  memset(local_3dc,0,0x1c4);
  local_3e8 = local_318;
  local_3f8 = local_318;
  local_3f0 = 0;
  local_3e0 = 0;
  memset(local_318,0,0x100);
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar6 + 4) < DAT_180029844) && (FUN_18001ca68(&DAT_180029844), DAT_180029844 == -1))
  {
    DAT_180029830 = rage::scrThread::GetCommand(0x4e1de7a5);
    _Init_thread_footer(&DAT_180029844);
  }
  uVar8 = local_3e0;
  if (DAT_180029830 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_180029830)((InfoBase *)&local_3f8);
    uVar8 = local_3e0;
  }
  while (uVar8 != 0) {
    local_3e0 = uVar8 - 1;
    *(undefined4 *)alStack_3d8[local_3e0] =
         *(undefined4 *)((longlong)&local_3f8 + (ulonglong)((uVar8 + 3) * 0x10));
    *(undefined4 *)(alStack_3d8[local_3e0] + 4) = auStack_3b4[(ulonglong)local_3e0 * 4];
    *(undefined4 *)(alStack_3d8[local_3e0] + 8) = auStack_3b4[(ulonglong)local_3e0 * 4 + 1];
    uVar8 = local_3e0;
  }
  local_3e0 = uVar8;
  if (local_318[0] != iVar9) {
    local_7ac = 0;
    memset(local_79c,0,0x1c4);
    local_7b0 = 0;
    local_7a0 = 0;
    local_7b8 = local_6d8;
    local_7a8 = local_6d8;
    memset(local_6d8,0,0x100);
    piVar1 = local_6d8 + (ulonglong)local_7b0 * 2;
    piVar1[0] = 0;
    piVar1[1] = 0;
    local_6d8[(ulonglong)local_7b0 * 2] = iVar9;
    local_7b0 = local_7b0 + 1;
    if ((*(int *)(lVar6 + 4) < DAT_180029848) &&
       (FUN_18001ca68(&DAT_180029848), DAT_180029848 == -1)) {
      DAT_180029858 = rage::scrThread::GetCommand(0xad03186c);
      _Init_thread_footer(&DAT_180029848);
    }
    uVar8 = local_7a0;
    if (DAT_180029858 != (_func_void_InfoBase_ptr *)0x0) {
      (*DAT_180029858)((InfoBase *)&local_7b8);
      uVar8 = local_7a0;
    }
    while (local_7a0 = uVar8, uVar8 != 0) {
      local_7a0 = uVar8 - 1;
      *(undefined4 *)alStack_798[local_7a0] =
           *(undefined4 *)((longlong)&local_7b8 + (ulonglong)((uVar8 + 3) * 0x10));
      *(undefined4 *)(alStack_798[local_7a0] + 4) = auStack_774[(ulonglong)local_7a0 * 4];
      *(undefined4 *)(alStack_798[local_7a0] + 8) = auStack_774[(ulonglong)local_7a0 * 4 + 1];
      uVar8 = local_7a0;
    }
  }
  local_20c = 0;
  memset(local_1fc,0,0x1c4);
  local_208 = local_138;
  local_218 = local_138;
  local_210 = 0;
  local_200 = 0;
  memset(local_138,0,0x100);
  if ((*(int *)(lVar6 + 4) < DAT_180029840) && (FUN_18001ca68(&DAT_180029840), DAT_180029840 == -1))
  {
    DAT_180029850 = rage::scrThread::GetCommand(0xc87f16a8);
    _Init_thread_footer(&DAT_180029840);
  }
  uVar8 = local_200;
  if (DAT_180029850 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_180029850)((InfoBase *)&local_218);
    uVar8 = local_200;
  }
  while (uVar8 != 0) {
    local_200 = uVar8 - 1;
    *(undefined4 *)alStack_1f8[local_200] =
         *(undefined4 *)((longlong)&local_218 + (ulonglong)((uVar8 + 3) * 0x10));
    *(undefined4 *)(alStack_1f8[local_200] + 4) = auStack_1d4[(ulonglong)local_200 * 4];
    *(undefined4 *)(alStack_1f8[local_200] + 8) = auStack_1d4[(ulonglong)local_200 * 4 + 1];
    uVar8 = local_200;
  }
  if (local_138[0] != (float)dVar10) {
    local_5cc = 0;
    local_200 = uVar8;
    memset(local_5bc,0,0x1c4);
    local_5c8 = local_4f8;
    local_5d8 = local_4f8;
    local_5d0 = 0;
    local_5c0 = 0;
    memset(local_4f8,0,0x100);
    (local_4f8 + (ulonglong)local_5d0 * 2)[0] = 0.0;
    (local_4f8 + (ulonglong)local_5d0 * 2)[1] = 0.0;
    local_4f8[(ulonglong)local_5d0 * 2] = (float)dVar10;
    local_5d0 = local_5d0 + 1;
    if ((*(int *)(lVar6 + 4) < DAT_180029828) &&
       (FUN_18001ca68(&DAT_180029828), DAT_180029828 == -1)) {
      DAT_180029838 = rage::scrThread::GetCommand(0xb98c7aa5);
      _Init_thread_footer(&DAT_180029828);
    }
    uVar8 = local_5c0;
    if (DAT_180029838 != (_func_void_InfoBase_ptr *)0x0) {
      (*DAT_180029838)((InfoBase *)&local_5d8);
      uVar8 = local_5c0;
    }
    while (uVar8 != 0) {
      local_5c0 = uVar8 - 1;
      *(undefined4 *)alStack_5b8[local_5c0] =
           *(undefined4 *)((longlong)&local_5d8 + (ulonglong)((uVar8 + 3) * 0x10));
      *(undefined4 *)(alStack_5b8[local_5c0] + 4) = auStack_594[(ulonglong)local_5c0 * 4];
      *(undefined4 *)(alStack_5b8[local_5c0] + 8) = auStack_594[(ulonglong)local_5c0 * 4 + 1];
      uVar8 = local_5c0;
    }
  }
  return;
}



TypeDescriptor * FUN_18000bff0(void)

{
  return &`public:___cdecl_TimeOfDayManager::TimeOfDayManager(void)___ptr64'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void thunk_FUN_18000ba50(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  undefined1 auStack_7d8 [32];
  int *piStack_7b8;
  uint uStack_7b0;
  undefined4 uStack_7ac;
  int *piStack_7a8;
  uint uStack_7a0;
  undefined1 auStack_79c [4];
  longlong alStack_798 [4];
  undefined4 auStack_774 [39];
  int aiStack_6d8 [64];
  float *pfStack_5d8;
  uint uStack_5d0;
  undefined4 uStack_5cc;
  float *pfStack_5c8;
  uint uStack_5c0;
  undefined1 auStack_5bc [4];
  longlong alStack_5b8 [4];
  undefined4 auStack_594 [39];
  float afStack_4f8 [64];
  int *piStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  int *piStack_3e8;
  uint uStack_3e0;
  undefined1 auStack_3dc [4];
  longlong alStack_3d8 [4];
  undefined4 auStack_3b4 [39];
  int aiStack_318 [64];
  float *pfStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  float *pfStack_208;
  uint uStack_200;
  undefined1 auStack_1fc [4];
  longlong alStack_1f8 [4];
  undefined4 auStack_1d4 [39];
  float afStack_138 [64];
  ulonglong uStack_38;
  
  uStack_38 = DAT_1800280c0 ^ (ulonglong)auStack_7d8;
  lVar6 = *param_2;
  lVar7 = param_2[2];
  iVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar6 + lVar7),
                                     *(undefined1 *)(lVar6 + 1 + lVar7)),
                            *(undefined1 *)(lVar6 + 2 + lVar7)),*(undefined1 *)(lVar6 + 3 + lVar7));
  *param_2 = lVar6 + 4;
  uVar2 = *(undefined1 *)(lVar6 + 4 + lVar7);
  uVar3 = *(undefined1 *)(lVar6 + 5 + lVar7);
  uVar4 = *(undefined1 *)(lVar6 + 6 + lVar7);
  uVar5 = *(undefined1 *)(lVar6 + 7 + lVar7);
  *param_2 = lVar6 + 8;
  dVar10 = FUN_180010bf0((ulonglong)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),' ',8);
  uStack_3ec = 0;
  memset(auStack_3dc,0,0x1c4);
  piStack_3e8 = aiStack_318;
  piStack_3f8 = aiStack_318;
  uStack_3f0 = 0;
  uStack_3e0 = 0;
  memset(aiStack_318,0,0x100);
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar6 + 4) < DAT_180029844) && (FUN_18001ca68(&DAT_180029844), DAT_180029844 == -1))
  {
    DAT_180029830 = rage::scrThread::GetCommand(0x4e1de7a5);
    _Init_thread_footer(&DAT_180029844);
  }
  uVar8 = uStack_3e0;
  if (DAT_180029830 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_180029830)((InfoBase *)&piStack_3f8);
    uVar8 = uStack_3e0;
  }
  while (uVar8 != 0) {
    uStack_3e0 = uVar8 - 1;
    *(undefined4 *)alStack_3d8[uStack_3e0] =
         *(undefined4 *)((longlong)&piStack_3f8 + (ulonglong)((uVar8 + 3) * 0x10));
    *(undefined4 *)(alStack_3d8[uStack_3e0] + 4) = auStack_3b4[(ulonglong)uStack_3e0 * 4];
    *(undefined4 *)(alStack_3d8[uStack_3e0] + 8) = auStack_3b4[(ulonglong)uStack_3e0 * 4 + 1];
    uVar8 = uStack_3e0;
  }
  uStack_3e0 = uVar8;
  if (aiStack_318[0] != iVar9) {
    uStack_7ac = 0;
    memset(auStack_79c,0,0x1c4);
    uStack_7b0 = 0;
    uStack_7a0 = 0;
    piStack_7b8 = aiStack_6d8;
    piStack_7a8 = aiStack_6d8;
    memset(aiStack_6d8,0,0x100);
    piVar1 = aiStack_6d8 + (ulonglong)uStack_7b0 * 2;
    piVar1[0] = 0;
    piVar1[1] = 0;
    aiStack_6d8[(ulonglong)uStack_7b0 * 2] = iVar9;
    uStack_7b0 = uStack_7b0 + 1;
    if ((*(int *)(lVar6 + 4) < DAT_180029848) &&
       (FUN_18001ca68(&DAT_180029848), DAT_180029848 == -1)) {
      DAT_180029858 = rage::scrThread::GetCommand(0xad03186c);
      _Init_thread_footer(&DAT_180029848);
    }
    uVar8 = uStack_7a0;
    if (DAT_180029858 != (_func_void_InfoBase_ptr *)0x0) {
      (*DAT_180029858)((InfoBase *)&piStack_7b8);
      uVar8 = uStack_7a0;
    }
    while (uStack_7a0 = uVar8, uVar8 != 0) {
      uStack_7a0 = uVar8 - 1;
      *(undefined4 *)alStack_798[uStack_7a0] =
           *(undefined4 *)((longlong)&piStack_7b8 + (ulonglong)((uVar8 + 3) * 0x10));
      *(undefined4 *)(alStack_798[uStack_7a0] + 4) = auStack_774[(ulonglong)uStack_7a0 * 4];
      *(undefined4 *)(alStack_798[uStack_7a0] + 8) = auStack_774[(ulonglong)uStack_7a0 * 4 + 1];
      uVar8 = uStack_7a0;
    }
  }
  uStack_20c = 0;
  memset(auStack_1fc,0,0x1c4);
  pfStack_208 = afStack_138;
  pfStack_218 = afStack_138;
  uStack_210 = 0;
  uStack_200 = 0;
  memset(afStack_138,0,0x100);
  if ((*(int *)(lVar6 + 4) < DAT_180029840) && (FUN_18001ca68(&DAT_180029840), DAT_180029840 == -1))
  {
    DAT_180029850 = rage::scrThread::GetCommand(0xc87f16a8);
    _Init_thread_footer(&DAT_180029840);
  }
  uVar8 = uStack_200;
  if (DAT_180029850 != (_func_void_InfoBase_ptr *)0x0) {
    (*DAT_180029850)((InfoBase *)&pfStack_218);
    uVar8 = uStack_200;
  }
  while (uVar8 != 0) {
    uStack_200 = uVar8 - 1;
    *(undefined4 *)alStack_1f8[uStack_200] =
         *(undefined4 *)((longlong)&pfStack_218 + (ulonglong)((uVar8 + 3) * 0x10));
    *(undefined4 *)(alStack_1f8[uStack_200] + 4) = auStack_1d4[(ulonglong)uStack_200 * 4];
    *(undefined4 *)(alStack_1f8[uStack_200] + 8) = auStack_1d4[(ulonglong)uStack_200 * 4 + 1];
    uVar8 = uStack_200;
  }
  if (afStack_138[0] != (float)dVar10) {
    uStack_5cc = 0;
    uStack_200 = uVar8;
    memset(auStack_5bc,0,0x1c4);
    pfStack_5c8 = afStack_4f8;
    pfStack_5d8 = afStack_4f8;
    uStack_5d0 = 0;
    uStack_5c0 = 0;
    memset(afStack_4f8,0,0x100);
    (afStack_4f8 + (ulonglong)uStack_5d0 * 2)[0] = 0.0;
    (afStack_4f8 + (ulonglong)uStack_5d0 * 2)[1] = 0.0;
    afStack_4f8[(ulonglong)uStack_5d0 * 2] = (float)dVar10;
    uStack_5d0 = uStack_5d0 + 1;
    if ((*(int *)(lVar6 + 4) < DAT_180029828) &&
       (FUN_18001ca68(&DAT_180029828), DAT_180029828 == -1)) {
      DAT_180029838 = rage::scrThread::GetCommand(0xb98c7aa5);
      _Init_thread_footer(&DAT_180029828);
    }
    uVar8 = uStack_5c0;
    if (DAT_180029838 != (_func_void_InfoBase_ptr *)0x0) {
      (*DAT_180029838)((InfoBase *)&pfStack_5d8);
      uVar8 = uStack_5c0;
    }
    while (uVar8 != 0) {
      uStack_5c0 = uVar8 - 1;
      *(undefined4 *)alStack_5b8[uStack_5c0] =
           *(undefined4 *)((longlong)&pfStack_5d8 + (ulonglong)((uVar8 + 3) * 0x10));
      *(undefined4 *)(alStack_5b8[uStack_5c0] + 4) = auStack_594[(ulonglong)uStack_5c0 * 4];
      *(undefined4 *)(alStack_5b8[uStack_5c0] + 8) = auStack_594[(ulonglong)uStack_5c0 * 4 + 1];
      uVar8 = uStack_5c0;
    }
  }
  return;
}



undefined8 * FUN_18000c010(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



void FUN_18000c030(void **param_1,void *param_2)

{
  void *pvVar1;
  void **ppvVar2;
  void *pvVar3;
  void *local_38;
  void *pvStack_30;
  void *local_28;
  void *pvStack_20;
  
  if (param_2 < param_1[2]) {
    local_38 = (void *)0x0;
    pvStack_30 = (void *)0x0;
    local_28 = (void *)0x0;
    pvStack_20 = (void *)0x0;
    ppvVar2 = param_1;
    if ((void *)0x7 < param_1[3]) {
      ppvVar2 = *param_1;
    }
    FUN_18000da10(&local_38,ppvVar2,(ulonglong)param_2);
    pvVar3 = pvStack_20;
    if (param_1 != &local_38) {
      if ((void *)0x7 < param_1[3]) {
        pvVar3 = *param_1;
        pvVar1 = pvVar3;
        if ((0xfff < (longlong)param_1[3] * 2 + 2U) &&
           (pvVar1 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar1)))) goto LAB_18000c10f;
        FUN_18001c9b8(pvVar1);
      }
      pvVar3 = local_38;
      local_38 = (void *)((ulonglong)local_38 & 0xffffffffffff0000);
      *param_1 = pvVar3;
      param_1[1] = pvStack_30;
      param_1[2] = local_28;
      param_1[3] = pvStack_20;
      pvVar3 = (void *)0x7;
    }
    if ((void *)0x7 < pvVar3) {
      pvVar1 = local_38;
      if ((0xfff < (longlong)pvVar3 * 2 + 2U) &&
         (pvVar1 = *(void **)((longlong)local_38 + -8),
         0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar1)))) {
LAB_18000c10f:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar1);
    }
    FUN_18000d640(param_1,&DAT_180020938,3);
  }
  return;
}



// public: __cdecl TextChat::TextChat(void) __ptr64

TextChat * __thiscall TextChat::TextChat(TextChat *this)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *local_50;
  undefined **local_48;
  TextChat *local_40;
  undefined ***local_10;
  
                    // 0xc140  5  ??0TextChat@@QEAA@XZ
  puVar5 = (undefined8 *)Singleton<GameClient>::Get();
  local_48 = std::_Func_impl_no_alloc<>::vftable;
  local_10 = &local_48;
  local_40 = this;
  ENetClient::RegisterPacket((ENetClient *)*puVar5,10,&local_48);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50);
      }
    }
  }
  return this;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: void __cdecl TextChat::SetChatTitle(void) __ptr64

void __thiscall TextChat::SetChatTitle(TextChat *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  CEFManager *this_00;
  longlong *plVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined1 auStackY_98 [32];
  undefined8 *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  void *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  longlong *local_20;
  longlong *local_18;
  ulonglong local_10;
  
                    // 0xc1e0  52  ?SetChatTitle@TextChat@@QEAAXXZ
  local_10 = DAT_1800280c0 ^ (ulonglong)auStackY_98;
  local_18 = (longlong *)0x0;
  FUN_1800168a0((Singleton<GameClient> *)&local_18);
  plVar2 = local_18;
  pcVar4 = *(code **)(*local_18 + 0xc0);
  plVar6 = (longlong *)Singleton<GameClient>::Get();
  lVar5 = *plVar6;
  puVar8 = (undefined8 *)(lVar5 + 0x118);
  local_68 = (undefined8 *)0x0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  if (*(longlong *)(lVar5 + 0x128) != 0) {
    local_68 = (undefined8 *)FUN_18001cae0(0x18);
    *local_68 = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    uStack_60 = CONCAT71(uStack_60._1_7_,1);
    if (0xf < *(ulonglong *)(lVar5 + 0x130)) {
      puVar8 = (undefined8 *)*puVar8;
    }
    cef_string_utf8_to_utf16(puVar8,*(undefined8 *)(lVar5 + 0x128),local_68);
  }
  (*pcVar4)(plVar2,0,&local_68);
  if (local_68 != (undefined8 *)0x0) {
    if ((char)uStack_60 != '\0') {
      cef_string_utf16_clear();
      FUN_18001c9b8(local_68);
    }
    local_68 = (undefined8 *)0x0;
    uStack_60 = uStack_60 & 0xffffffffffffff00;
  }
  plVar2 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_20 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
  }
  puVar8 = (undefined8 *)Singleton<CEFManager>::Get();
  this_00 = (CEFManager *)*puVar8;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_180007110(&local_48,"set_chatbox_servertitle",0x17);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_180007110(&local_68,&DAT_180020940,4);
  CEFManager::SendProcessMessage
            (this_00,(basic_string<> *)&local_68,(basic_string<> *)&local_48,
             (scoped_refptr<> *)&local_18,0);
  if (0xf < local_50) {
    puVar8 = local_68;
    if ((0xfff < local_50 + 1) &&
       (puVar8 = (undefined8 *)local_68[-1],
       0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)puVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(puVar8);
  }
  local_58 = 0;
  local_50 = 0xf;
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffffffffff00);
  if (0xf < local_30) {
    pvVar7 = local_48;
    if ((0xfff < local_30 + 1) &&
       (pvVar7 = *(void **)((longlong)local_48 + -8),
       0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar7);
  }
  local_38 = 0;
  local_30 = 0xf;
  local_48 = (void *)((ulonglong)local_48 & 0xffffffffffffff00);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20);
      }
    }
  }
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_18 + (longlong)*(int *)(local_18[1] + 4) + 8) + 8))()
    ;
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: void __cdecl TextChat::UpdateChatPing(void) __ptr64

void __thiscall TextChat::UpdateChatPing(TextChat *this)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  CEFManager *this_00;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  int iVar8;
  undefined1 auStackY_98 [32];
  longlong *local_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  longlong *local_18;
  ulonglong local_10;
  
                    // 0xc490  55  ?UpdateChatPing@TextChat@@QEAAXXZ
  local_10 = DAT_1800280c0 ^ (ulonglong)auStackY_98;
  iVar8 = 0;
  local_18 = (longlong *)0x0;
  FUN_1800168a0((Singleton<GameClient> *)&local_18);
  plVar1 = local_18;
  pcVar3 = *(code **)(*local_18 + 0xb0);
  plVar5 = (longlong *)Singleton<GameClient>::Get();
  if ((*(longlong *)(*plVar5 + 0x38) != 0) &&
     (iVar8 = *(int *)(*(longlong *)(*plVar5 + 0x38) + 0xf4) + -0x14, iVar8 < 0)) {
    iVar8 = 0;
  }
  (*pcVar3)(plVar1,0,iVar8);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60);
      }
    }
  }
  puVar6 = (undefined8 *)Singleton<CEFManager>::Get();
  this_00 = (CEFManager *)*puVar6;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_180007110(&local_38,"set_chatbox_ping",0x10);
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_180007110(&local_58,&DAT_180020940,4);
  CEFManager::SendProcessMessage
            (this_00,(basic_string<> *)&local_58,(basic_string<> *)&local_38,
             (scoped_refptr<> *)&local_18,0);
  if (0xf < uStack_40) {
    pvVar7 = local_58;
    if ((0xfff < uStack_40 + 1) &&
       (pvVar7 = *(void **)((longlong)local_58 + -8),
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar7);
  }
  local_48 = 0;
  uStack_40 = 0xf;
  local_58 = (void *)((ulonglong)local_58 & 0xffffffffffffff00);
  if (0xf < uStack_20) {
    pvVar7 = local_38;
    if ((0xfff < uStack_20 + 1) &&
       (pvVar7 = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar7);
  }
  local_28 = 0;
  uStack_20 = 0xf;
  local_38 = (void *)((ulonglong)local_38 & 0xffffffffffffff00);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60);
      }
    }
  }
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_18 + (longlong)*(int *)(local_18[1] + 4) + 8) + 8))()
    ;
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: void __cdecl TextChat::SendChatMessage(class scoped_refptr<class CefProcessMessage> const
// & __ptr64) __ptr64

void __thiscall TextChat::SendChatMessage(TextChat *this,scoped_refptr<> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  void *pvVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  void *local_68;
  char local_60;
  undefined7 uStack_5f;
  longlong *local_58;
  void *local_50;
  undefined8 uStack_48;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
                    // 0xc6d0  49
                    // ?SendChatMessage@TextChat@@QEAAXAEBV?$scoped_refptr@VCefProcessMessage@@@@@Z
  local_30 = DAT_1800280c0 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)Singleton<GameClient>::Get();
  if (*(longlong *)(*plVar6 + 8) == 0) {
    bVar5 = true;
  }
  else {
    bVar5 = *(longlong *)(*(longlong *)(*plVar6 + 8) + 0x2b08) == 0;
  }
  plVar6 = (longlong *)CONCAT71(uStack_5f,local_60);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (!bVar5) {
    local_58 = (longlong *)0x0;
    (**(code **)(**(longlong **)param_1 + 0x20))(*(longlong **)param_1,&local_58);
    lVar7 = (**(code **)(*local_58 + 0x38))();
    if (lVar7 == 1) {
      plVar6 = (longlong *)(**(code **)(*local_58 + 0x78))(local_58,&local_68,0);
      puVar4 = (undefined8 *)*plVar6;
      if ((puVar4 == (undefined8 *)0x0) || (puVar4[1] == 0)) {
        uStack_48 = 0;
        local_40 = 0;
        local_38 = 7;
        local_50 = (void *)0x0;
      }
      else {
        local_50 = (void *)0x0;
        uStack_48 = 0;
        local_40 = 0;
        local_38 = 0;
        FUN_18000da10(&local_50,(void *)*puVar4,puVar4[1]);
      }
      uVar9 = local_38;
      lVar7 = local_40;
      if (local_68 != (void *)0x0) {
        if (local_60 != '\0') {
          cef_string_utf16_clear();
          FUN_18001c9b8(local_68);
        }
        local_68 = (void *)0x0;
        local_60 = '\0';
      }
      if (lVar7 != 0) {
        SendChatMessage(this,(basic_string<> *)&local_50);
        uVar9 = local_38;
      }
      if (7 < uVar9) {
        pvVar8 = local_50;
        if ((0xfff < uVar9 * 2 + 2) &&
           (pvVar8 = *(void **)((longlong)local_50 + -8),
           0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)pvVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18001c9b8(pvVar8);
      }
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_58 + (longlong)*(int *)(local_58[1] + 4) + 8) + 8))
                ();
    }
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// private: void __cdecl TextChat::SendChatMessage(class std::basic_string<wchar_t,struct
// std::char_traits<wchar_t>,class std::allocator<wchar_t> > const & __ptr64) __ptr64

void __thiscall TextChat::SendChatMessage(TextChat *this,basic_string<> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  void *pvVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  longlong *plStack_50;
  longlong *local_48;
  undefined8 local_40;
  longlong lStack_38;
  void *local_30;
  void *pvStack_28;
  longlong local_20;
  ulonglong local_18;
  
                    // 0xc8c0  48
                    // ?SendChatMessage@TextChat@@AEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z
  local_18 = DAT_1800280c0 ^ (ulonglong)auStack_78;
  local_30 = (void *)0x0;
  pvStack_28 = (void *)0x0;
  local_20 = 0;
  local_40 = 0;
  lStack_38 = 0;
  local_58 = (undefined2 *)0x400;
  FUN_18000f5f0((longlong *)&local_30,(ulonglong *)&local_58);
  uVar4 = *(ushort *)(param_1 + 0x10);
  uVar10 = (ulonglong)uVar4;
  if (uVar4 < 0x1000) {
    FUN_18000e940((longlong)&local_40,uVar4);
    if (7 < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(basic_string<> **)param_1;
    }
    if (uVar4 != 0) {
      do {
        FUN_18000e940((longlong)&local_40,*(undefined2 *)param_1);
        param_1 = param_1 + 2;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  else {
    local_58 = (undefined2 *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    local_58 = (undefined2 *)FUN_18001cae0(2);
    plStack_50 = (longlong *)(local_58 + 1);
    *local_58 = 0;
    *(undefined1 *)local_58 = 0;
    *(undefined1 *)((longlong)local_58 + 1) = 0;
    local_48 = plStack_50;
    FUN_18000fa70((longlong *)&local_30,pvStack_28,local_58,
                  (longlong)plStack_50 - (longlong)local_58);
    lStack_38 = lStack_38 + 2;
    if (local_58 != (undefined2 *)0x0) {
      puVar8 = local_58;
      if ((0xfff < (ulonglong)((longlong)local_48 - (longlong)local_58)) &&
         (puVar8 = *(undefined2 **)(local_58 + -4),
         (undefined1 *)0x1f < (undefined1 *)((longlong)local_58 + (-8 - (longlong)puVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(puVar8);
    }
  }
  puVar7 = (undefined8 *)Singleton<GameClient>::Get();
  ENetClient::Send((ENetClient *)*puVar7,0,3,(StreamBuffer *)&local_40);
  plVar6 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (local_30 != (void *)0x0) {
    pvVar9 = local_30;
    if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
       (pvVar9 = *(void **)((longlong)local_30 + -8),
       0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)pvVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar9);
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Removing unreachable block (ram,0x00018000d28e)
// private: void __cdecl TextChat::HandleChatMessage(class StreamBuffer const & __ptr64)const
// __ptr64

void __thiscall TextChat::HandleChatMessage(TextChat *this,StreamBuffer *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  code *pcVar6;
  CEFManager *this_00;
  longlong *plVar7;
  void *pvVar8;
  undefined8 *puVar9;
  void *pvVar10;
  void **ppvVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStackY_238 [32];
  void *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ulonglong uStack_1f0;
  void *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  void *local_1a8 [3];
  ulonglong local_190;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  void *local_60 [2];
  ulonglong local_50;
  ulonglong local_48;
  void *local_40 [3];
  ulonglong local_28;
  ulonglong local_20;
  
                    // 0xcab0  29  ?HandleChatMessage@TextChat@@AEBAXAEBVStreamBuffer@@@Z
  local_20 = DAT_1800280c0 ^ (ulonglong)auStackY_238;
  local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
  lVar5 = *(longlong *)param_1;
  *(longlong *)param_1 = lVar5 + 1;
  cVar4 = *(char *)(lVar5 + *(longlong *)(param_1 + 0x10));
  FUN_18000edb0((longlong *)param_1,(longlong *)local_40);
  FUN_18000c030(local_40,(void *)0x20);
  FUN_18000edb0((longlong *)param_1,(longlong *)local_60);
  FUN_18000c030(local_60,(void *)0x200);
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 7;
  local_88 = (undefined8 *)0x0;
  if (cVar4 == '\0') {
    puVar9 = FUN_18000d6c0(local_1a8,L"<p><font color=\'#ff0050\'>",local_40);
    puVar9 = FUN_18000d640(puVar9,L"</font> ",8);
    local_208 = (void *)*puVar9;
    uStack_200 = puVar9[1];
    local_1f8 = puVar9[2];
    uStack_1f0 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    ppvVar11 = local_60;
    if (7 < local_48) {
      ppvVar11 = (void **)CONCAT62(local_60[0]._2_6_,local_60[0]._0_2_);
    }
    puVar9 = FUN_18000d640(&local_208,ppvVar11,local_50);
    local_1e8 = (void *)*puVar9;
    uStack_1e0 = puVar9[1];
    local_1d8 = puVar9[2];
    uStack_1d0 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    puVar9 = FUN_18000d640(&local_1e8,L"</p>",4);
    local_1b8 = *(undefined4 *)puVar9;
    uStack_1b4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_1b0 = *(undefined4 *)(puVar9 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar9 + 0xc);
    uVar12 = *(undefined4 *)(puVar9 + 2);
    local_1c8 = (undefined8 *)puVar9[2];
    uStack_1c0 = *(uint *)(puVar9 + 3);
    uStack_1bc = *(undefined4 *)((longlong)puVar9 + 0x1c);
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    uVar13 = *(undefined4 *)((longlong)puVar9 + 0x14);
    if (7 < uStack_70) {
      puVar9 = local_88;
      if ((0xfff < uStack_70 * 2 + 2) &&
         (puVar9 = (undefined8 *)local_88[-1],
         0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)puVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(puVar9);
      uVar12 = (undefined4)local_1c8;
      uVar13 = local_1c8._4_4_;
    }
    local_88 = (undefined8 *)CONCAT44(uStack_1b4,local_1b8);
    uStack_80 = CONCAT44(uStack_1ac,uStack_1b0);
    local_78 = CONCAT44(uVar13,uVar12);
    uStack_70 = CONCAT44(uStack_1bc,uStack_1c0);
    if (7 < uStack_1d0) {
      pvVar10 = local_1e8;
      if ((0xfff < uStack_1d0 * 2 + 2) &&
         (pvVar10 = *(void **)((longlong)local_1e8 + -8),
         0x1f < (ulonglong)((longlong)local_1e8 + (-8 - (longlong)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar10);
    }
    local_1d8 = 0;
    uStack_1d0 = 7;
    local_1e8 = (void *)((ulonglong)local_1e8 & 0xffffffffffff0000);
    if (7 < uStack_1f0) {
      pvVar10 = local_208;
      if ((0xfff < uStack_1f0 * 2 + 2) &&
         (pvVar10 = *(void **)((longlong)local_208 + -8),
         0x1f < (ulonglong)((longlong)local_208 + (-8 - (longlong)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar10);
    }
    local_1f8 = 0;
    uStack_1f0 = 7;
    local_208 = (void *)((ulonglong)local_208 & 0xffffffffffff0000);
    if (local_190 < 8) goto LAB_18000d274;
    pvVar10 = local_1a8[0];
    if ((0xfff < local_190 * 2 + 2) &&
       (pvVar10 = *(void **)((longlong)local_1a8[0] + -8),
       0x1f < (ulonglong)((longlong)local_1a8[0] + (-8 - (longlong)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else if (cVar4 == '\x01') {
    puVar9 = FUN_18000d6c0(local_1a8,L"<p><font color=\'#ff5000\'>",local_40);
    puVar9 = FUN_18000d640(puVar9,&DAT_1800209d4,1);
    local_208 = (void *)*puVar9;
    uStack_200 = puVar9[1];
    local_1f8 = puVar9[2];
    uStack_1f0 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    ppvVar11 = local_60;
    if (7 < local_48) {
      ppvVar11 = (void **)CONCAT62(local_60[0]._2_6_,local_60[0]._0_2_);
    }
    puVar9 = FUN_18000d640(&local_208,ppvVar11,local_50);
    local_1e8 = (void *)*puVar9;
    uStack_1e0 = puVar9[1];
    local_1d8 = puVar9[2];
    uStack_1d0 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    puVar9 = FUN_18000d640(&local_1e8,L"</font></p>",0xb);
    local_1b8 = *(undefined4 *)puVar9;
    uStack_1b4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_1b0 = *(undefined4 *)(puVar9 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar9 + 0xc);
    uVar12 = *(undefined4 *)(puVar9 + 2);
    local_1c8 = (undefined8 *)puVar9[2];
    uStack_1c0 = *(uint *)(puVar9 + 3);
    uStack_1bc = *(undefined4 *)((longlong)puVar9 + 0x1c);
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    uVar13 = *(undefined4 *)((longlong)puVar9 + 0x14);
    if (7 < uStack_70) {
      puVar9 = local_88;
      if ((0xfff < uStack_70 * 2 + 2) &&
         (puVar9 = (undefined8 *)local_88[-1],
         0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)puVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(puVar9);
      uVar12 = (undefined4)local_1c8;
      uVar13 = local_1c8._4_4_;
    }
    local_88 = (undefined8 *)CONCAT44(uStack_1b4,local_1b8);
    uStack_80 = CONCAT44(uStack_1ac,uStack_1b0);
    local_78 = CONCAT44(uVar13,uVar12);
    uStack_70 = CONCAT44(uStack_1bc,uStack_1c0);
    if (7 < uStack_1d0) {
      pvVar10 = local_1e8;
      if ((0xfff < uStack_1d0 * 2 + 2) &&
         (pvVar10 = *(void **)((longlong)local_1e8 + -8),
         0x1f < (ulonglong)((longlong)local_1e8 + (-8 - (longlong)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar10);
    }
    local_1d8 = 0;
    uStack_1d0 = 7;
    local_1e8 = (void *)((ulonglong)local_1e8 & 0xffffffffffff0000);
    if (7 < uStack_1f0) {
      pvVar10 = local_208;
      if ((0xfff < uStack_1f0 * 2 + 2) &&
         (pvVar10 = *(void **)((longlong)local_208 + -8),
         0x1f < (ulonglong)((longlong)local_208 + (-8 - (longlong)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar10);
    }
    local_1f8 = 0;
    uStack_1f0 = 7;
    local_208 = (void *)((ulonglong)local_208 & 0xffffffffffff0000);
    if (local_190 < 8) goto LAB_18000d274;
    pvVar10 = local_1a8[0];
    if ((0xfff < local_190 * 2 + 2) &&
       (pvVar10 = *(void **)((longlong)local_1a8[0] + -8),
       0x1f < (ulonglong)
              ((longlong)local_1a8[0] + (-8 - (longlong)*(void **)((longlong)local_1a8[0] + -8)))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    if (cVar4 != '\x02') goto LAB_18000d274;
    puVar9 = FUN_18000d6c0(local_1a8,L"<p><font color=\'#ff0000\'>",local_40);
    puVar9 = FUN_18000d640(puVar9,&DAT_1800209d4,1);
    local_1e8 = (void *)*puVar9;
    uStack_1e0 = puVar9[1];
    local_1d8 = puVar9[2];
    uStack_1d0 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    ppvVar11 = local_60;
    if (7 < local_48) {
      ppvVar11 = (void **)CONCAT62(local_60[0]._2_6_,local_60[0]._0_2_);
    }
    puVar9 = FUN_18000d640(&local_1e8,ppvVar11,local_50);
    local_208 = (void *)*puVar9;
    uStack_200 = puVar9[1];
    local_1f8 = puVar9[2];
    uStack_1f0 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    puVar9 = FUN_18000d640(&local_208,L"</font></p>",0xb);
    uVar12 = *(undefined4 *)puVar9;
    local_1c8 = (undefined8 *)*puVar9;
    uStack_1c0 = *(uint *)(puVar9 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar9 + 0xc);
    local_1b8 = *(undefined4 *)(puVar9 + 2);
    uStack_1b4 = *(undefined4 *)((longlong)puVar9 + 0x14);
    uStack_1b0 = *(undefined4 *)(puVar9 + 3);
    uStack_1ac = *(undefined4 *)((longlong)puVar9 + 0x1c);
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    uVar13 = *(undefined4 *)((longlong)puVar9 + 4);
    if (7 < uStack_70) {
      puVar9 = local_88;
      if ((0xfff < uStack_70 * 2 + 2) &&
         (puVar9 = (undefined8 *)local_88[-1],
         0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)puVar9)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(puVar9);
      uVar12 = (undefined4)local_1c8;
      uVar13 = local_1c8._4_4_;
    }
    local_88 = (undefined8 *)CONCAT44(uVar13,uVar12);
    uStack_80 = CONCAT44(uStack_1bc,uStack_1c0);
    local_78 = CONCAT44(uStack_1b4,local_1b8);
    uStack_70 = CONCAT44(uStack_1ac,uStack_1b0);
    if (7 < uStack_1f0) {
      pvVar10 = local_208;
      if ((0xfff < uStack_1f0 * 2 + 2) &&
         (pvVar10 = *(void **)((longlong)local_208 + -8),
         0x1f < (ulonglong)((longlong)local_208 + (-8 - (longlong)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar10);
    }
    local_1f8 = 0;
    uStack_1f0 = 7;
    local_208 = (void *)((ulonglong)local_208 & 0xffffffffffff0000);
    if (7 < uStack_1d0) {
      pvVar10 = local_1e8;
      if ((0xfff < uStack_1d0 * 2 + 2) &&
         (pvVar10 = *(void **)((longlong)local_1e8 + -8),
         0x1f < (ulonglong)((longlong)local_1e8 + (-8 - (longlong)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar10);
    }
    local_1d8 = 0;
    uStack_1d0 = 7;
    local_1e8 = (void *)((ulonglong)local_1e8 & 0xffffffffffff0000);
    if (local_190 < 8) goto LAB_18000d274;
    pvVar10 = local_1a8[0];
    if ((0xfff < local_190 * 2 + 2) &&
       (pvVar10 = *(void **)((longlong)local_1a8[0] + -8),
       0x1f < (ulonglong)
              ((longlong)local_1a8[0] + (-8 - (longlong)*(void **)((longlong)local_1a8[0] + -8)))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FUN_18001c9b8(pvVar10);
LAB_18000d274:
  local_68 = (longlong *)0x0;
  FUN_1800168a0((Singleton<GameClient> *)&local_68);
  plVar7 = local_68;
  pcVar6 = *(code **)(*local_68 + 0xc0);
  local_1c8 = (undefined8 *)0x0;
  uStack_1c0 = uStack_1c0 & 0xffffff00;
  if (local_78 != 0) {
    local_1c8 = (undefined8 *)FUN_18001cae0(0x18);
    *local_1c8 = 0;
    local_1c8[1] = 0;
    local_1c8[2] = 0;
    uStack_1c0 = CONCAT31(uStack_1c0._1_3_,1);
    puVar9 = &local_88;
    if (7 < uStack_70) {
      puVar9 = local_88;
    }
    cef_string_utf16_set(puVar9,local_78,local_1c8,1);
  }
  (*pcVar6)(plVar7,0,&local_1c8);
  if ((local_1c8 != (undefined8 *)0x0) && ((char)uStack_1c0 != '\0')) {
    cef_string_utf16_clear();
    FUN_18001c9b8(local_1c8);
  }
  puVar9 = (undefined8 *)Singleton<CEFManager>::Get();
  this_00 = (CEFManager *)*puVar9;
  local_208 = (void *)0x0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  FUN_180007110(&local_208,"send_chat_message",0x11);
  local_1e8 = (void *)0x0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  FUN_180007110(&local_1e8,&DAT_180020940,4);
  CEFManager::SendProcessMessage
            (this_00,(basic_string<> *)&local_1e8,(basic_string<> *)&local_208,
             (scoped_refptr<> *)&local_68,0);
  if (0xf < uStack_1d0) {
    pvVar10 = local_1e8;
    if ((0xfff < uStack_1d0 + 1) &&
       (pvVar10 = *(void **)((longlong)local_1e8 + -8),
       0x1f < (ulonglong)((longlong)local_1e8 + (-8 - (longlong)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar10);
  }
  local_1d8 = 0;
  uStack_1d0 = 0xf;
  local_1e8 = (void *)((ulonglong)local_1e8 & 0xffffffffffffff00);
  if (0xf < uStack_1f0) {
    pvVar10 = local_208;
    if ((0xfff < uStack_1f0 + 1) &&
       (pvVar10 = *(void **)((longlong)local_208 + -8),
       0x1f < (ulonglong)((longlong)local_208 + (-8 - (longlong)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar10);
  }
  local_1f8 = 0;
  uStack_1f0 = 0xf;
  local_208 = (void *)((ulonglong)local_208 & 0xffffffffffffff00);
  plVar7 = (longlong *)CONCAT44(uStack_1ac,uStack_1b0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_68 + (longlong)*(int *)(local_68[1] + 4) + 8) + 8))()
    ;
  }
  if (7 < uStack_70) {
    puVar9 = local_88;
    if ((0xfff < uStack_70 * 2 + 2) &&
       (puVar9 = (undefined8 *)local_88[-1],
       0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)puVar9)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(puVar9);
  }
  local_78 = 0;
  uStack_70 = 7;
  local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffffffff0000);
  if (7 < local_48) {
    pvVar8 = (void *)CONCAT62(local_60[0]._2_6_,local_60[0]._0_2_);
    pvVar10 = pvVar8;
    if ((0xfff < local_48 * 2 + 2) &&
       (pvVar10 = *(void **)((longlong)pvVar8 + -8),
       0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar10);
  }
  local_50 = 0;
  local_48 = 7;
  local_60[0]._0_2_ = 0;
  if (7 < local_28) {
    pvVar10 = local_40[0];
    if ((0xfff < local_28 * 2 + 2) &&
       (pvVar10 = *(void **)((longlong)local_40[0] + -8),
       0x1f < (ulonglong)((longlong)local_40[0] + (-8 - (longlong)pvVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar10);
  }
  return;
}



void FUN_18000d600(longlong *param_1)

{
  if (*param_1 != 0) {
    if ((char)param_1[1] != '\0') {
      cef_string_utf16_clear();
      FUN_18001c9b8((void *)*param_1);
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



undefined8 * FUN_18000d640(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[2];
  if (param_3 <= (ulonglong)(param_1[3] - lVar1)) {
    param_1[2] = lVar1 + param_3;
    puVar2 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    memmove((void *)((longlong)puVar2 + lVar1 * 2),param_2,param_3 * 2);
    *(undefined2 *)((longlong)puVar2 + (lVar1 + param_3) * 2) = 0;
    return param_1;
  }
  puVar2 = FUN_18000d840(param_1,param_3,param_3,param_2,param_3);
  return puVar2;
}



undefined8 * FUN_18000d6c0(undefined8 *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  size_t sVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *_Dst;
  
  puVar7 = (undefined8 *)0x0;
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (*(short *)((longlong)param_2 + uVar5 * 2) != 0);
  lVar2 = param_3[2];
  if (0x7ffffffffffffffeU - lVar2 < uVar5) {
                    // WARNING: Subroutine does not return
    FUN_180001de0();
  }
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  uVar1 = lVar2 + uVar5;
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = 7;
  param_1[2] = 0;
  param_1[3] = 0;
  _Dst = param_1;
  if (uVar1 < 8) goto LAB_18000d7d4;
  uVar6 = uVar1 | 7;
  if (uVar6 < 0x7fffffffffffffff) {
    if (uVar6 < 10) {
      uVar6 = 10;
    }
    if (0x7fffffffffffffff < uVar6 + 1) goto LAB_18000d82c;
    sVar4 = (uVar6 + 1) * 2;
    if (sVar4 != 0) goto LAB_18000d768;
  }
  else {
    uVar6 = 0x7ffffffffffffffe;
    sVar4 = 0xfffffffffffffffe;
LAB_18000d768:
    if (sVar4 < 0x1000) {
      puVar7 = (undefined8 *)FUN_18001cae0(sVar4);
    }
    else {
      if (sVar4 + 0x27 <= sVar4) {
LAB_18000d82c:
                    // WARNING: Subroutine does not return
        FUN_180001d40();
      }
      lVar3 = FUN_18001cae0(sVar4 + 0x27);
      if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      puVar7 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      puVar7[-1] = lVar3;
    }
  }
  *param_1 = puVar7;
  _Dst = puVar7;
LAB_18000d7d4:
  param_1[2] = uVar1;
  param_1[3] = uVar6;
  memcpy(_Dst,param_2,uVar5 * 2);
  memcpy((void *)(uVar5 * 2 + (longlong)_Dst),param_3,lVar2 * 2);
  *(undefined2 *)((longlong)_Dst + uVar1 * 2) = 0;
  return param_1;
}



undefined8 *
FUN_18000d840(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,
             longlong param_5)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Src;
  longlong lVar5;
  size_t sVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *pvVar9;
  void *_Dst;
  
  lVar3 = param_1[2];
  uVar8 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar3 < param_2) {
                    // WARNING: Subroutine does not return
    FUN_180001de0();
  }
  _Dst = (void *)0x0;
  uVar4 = param_1[3];
  uVar7 = param_2 + lVar3 | 7;
  if ((uVar7 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
    uVar1 = (uVar4 >> 1) + uVar4;
    uVar8 = uVar7;
    if (uVar7 < uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffff < uVar8 + 1) goto LAB_18000d9fc;
    sVar6 = (uVar8 + 1) * 2;
    if (sVar6 != 0) goto LAB_18000d8ef;
  }
  else {
    sVar6 = 0xfffffffffffffffe;
LAB_18000d8ef:
    if (sVar6 < 0x1000) {
      _Dst = (void *)FUN_18001cae0(sVar6);
    }
    else {
      if (sVar6 + 0x27 <= sVar6) {
LAB_18000d9fc:
                    // WARNING: Subroutine does not return
        FUN_180001d40();
      }
      lVar5 = FUN_18001cae0(sVar6 + 0x27);
      if (lVar5 == 0) goto LAB_18000d9a9;
      _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar5;
    }
  }
  param_1[2] = param_2 + lVar3;
  sVar6 = lVar3 * 2;
  param_1[3] = uVar8;
  puVar2 = (undefined2 *)((longlong)_Dst + (lVar3 + param_5) * 2);
  if (uVar4 < 8) {
    memcpy(_Dst,param_1,sVar6);
    memcpy((void *)((longlong)_Dst + sVar6),param_4,param_5 * 2);
    *puVar2 = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,sVar6);
    memcpy((void *)((longlong)_Dst + sVar6),param_4,param_5 * 2);
    *puVar2 = 0;
    pvVar9 = _Src;
    if ((0xfff < uVar4 * 2 + 2) &&
       (pvVar9 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar9)))) {
LAB_18000d9a9:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar9);
  }
  *param_1 = _Dst;
  return param_1;
}



void FUN_18000da10(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  size_t sVar3;
  void *_Dst;
  
  if (0x7ffffffffffffffe < param_3) {
                    // WARNING: Subroutine does not return
    FUN_180001de0();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    memcpy(param_1,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
    return;
  }
  uVar1 = param_3 | 7;
  _Dst = (void *)0x0;
  if (uVar1 < 0x7fffffffffffffff) {
    if (uVar1 < 10) {
      uVar1 = 10;
    }
    if (0x7fffffffffffffff < uVar1 + 1) goto LAB_18000db38;
    sVar3 = (uVar1 + 1) * 2;
    if (sVar3 == 0) goto LAB_18000dafd;
  }
  else {
    sVar3 = 0xfffffffffffffffe;
    uVar1 = 0x7ffffffffffffffe;
  }
  if (sVar3 < 0x1000) {
    _Dst = (void *)FUN_18001cae0(sVar3);
  }
  else {
    if (sVar3 + 0x27 <= sVar3) {
LAB_18000db38:
                    // WARNING: Subroutine does not return
      FUN_180001d40();
    }
    lVar2 = FUN_18001cae0(sVar3 + 0x27);
    if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar2;
  }
LAB_18000dafd:
  param_1[2] = param_3;
  *param_1 = _Dst;
  param_1[3] = uVar1;
  memcpy(_Dst,param_2,param_3 * 2);
  *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
  return;
}



TypeDescriptor * FUN_18000db40(void)

{
  return &`public:___cdecl_TextChat::TextChat(void)___ptr64'::__l2::<lambda_1>::RTTI_Type_Descriptor
  ;
}



void FUN_18000db50(longlong param_1,StreamBuffer *param_2)

{
  TextChat::HandleChatMessage(*(TextChat **)(param_1 + 8),param_2);
  return;
}



undefined8 * FUN_18000db60(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



longlong FUN_18000db80(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong _Size;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *_Buf1;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  uVar2 = param_2[3];
  _Size = param_2[2];
  puVar8 = param_2;
  if (0xf < uVar2) {
    puVar8 = (undefined8 *)*param_2;
  }
  uVar7 = 0;
  uVar9 = 0xcbf29ce484222325;
  if (_Size != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar8 + uVar7);
      uVar7 = uVar7 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < _Size);
  }
  uVar9 = *(ulonglong *)(param_1 + 0x30) & uVar9;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar9 * 0x10);
  if (lVar6 != *(longlong *)(param_1 + 8)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x10);
    while( true ) {
      puVar8 = (undefined8 *)(lVar6 + 0x10);
      if (0xf < *(ulonglong *)(lVar6 + 0x28)) {
        puVar8 = (undefined8 *)*puVar8;
      }
      _Buf1 = param_2;
      if (0xf < uVar2) {
        _Buf1 = (undefined8 *)*param_2;
      }
      if ((_Size == *(ulonglong *)(lVar6 + 0x20)) &&
         ((_Size == 0 || (iVar5 = memcmp(_Buf1,puVar8,_Size), iVar5 == 0)))) break;
      if (lVar6 == lVar3) goto LAB_18000dc73;
      lVar6 = *(longlong *)(lVar6 + 8);
    }
    if (lVar6 != 0) {
      return lVar6 + 0x30;
    }
  }
LAB_18000dc73:
  std::_Xout_of_range("invalid unordered_map<K, T> key");
  pcVar4 = (code *)swi(3);
  lVar6 = (*pcVar4)();
  return lVar6;
}



void FUN_18000dc90(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *pvVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  
  plVar9 = (longlong *)*param_1;
  uVar7 = param_1[2] - (longlong)plVar9 >> 4;
  if (param_3 <= uVar7) {
    plVar11 = (longlong *)param_1[1];
    uVar7 = (longlong)plVar11 - (longlong)plVar9 >> 4;
    if (uVar7 < param_3) {
      if (plVar9 != plVar11) {
        do {
          if (param_2[1] != 0) {
            LOCK();
            piVar1 = (int *)(param_2[1] + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          plVar11 = (longlong *)plVar9[1];
          lVar6 = param_2[1];
          *plVar9 = *param_2;
          plVar9[1] = lVar6;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar11 + 1;
            lVar6 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11);
              }
            }
          }
          plVar11 = (longlong *)param_1[1];
          plVar9 = plVar9 + 2;
          param_2 = param_2 + 2;
        } while (plVar9 != plVar11);
      }
      lVar6 = param_3 - uVar7;
      if (lVar6 != 0) {
        plVar9 = param_2 + 1;
        lVar10 = (longlong)plVar11 - (longlong)param_2;
        do {
          *plVar11 = 0;
          *(undefined8 *)((longlong)plVar9 + lVar10) = 0;
          if (*plVar9 != 0) {
            LOCK();
            piVar1 = (int *)(*plVar9 + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          *plVar11 = plVar9[-1];
          plVar11 = plVar11 + 2;
          *(longlong *)((longlong)plVar9 + lVar10) = *plVar9;
          plVar9 = plVar9 + 2;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      FUN_180009c10((longlong)plVar11,(longlong)plVar11);
      param_1[1] = (longlong)plVar11;
      return;
    }
    plVar11 = plVar9 + param_3 * 2;
    if (param_3 != 0) {
      plVar13 = param_2 + 1;
      do {
        if (*plVar13 != 0) {
          LOCK();
          piVar1 = (int *)(*plVar13 + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        plVar5 = (longlong *)plVar9[1];
        lVar6 = *plVar13;
        *plVar9 = plVar13[-1];
        plVar9[1] = lVar6;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
        plVar9 = plVar9 + 2;
        plVar13 = plVar13 + 2;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    plVar9 = (longlong *)param_1[1];
    for (plVar13 = plVar11; plVar13 != plVar9; plVar13 = plVar13 + 2) {
      plVar5 = (longlong *)plVar13[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
    }
    param_1[1] = (longlong)plVar11;
    return;
  }
  if (0xfffffffffffffff < param_3) {
                    // WARNING: Subroutine does not return
    FUN_1800080f0();
  }
  if (0xfffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar7 = 0xfffffffffffffff;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    if (uVar7 < param_3) {
      uVar7 = param_3;
    }
  }
  plVar11 = (longlong *)0x0;
  if (plVar9 != (longlong *)0x0) {
    FUN_180009c10((longlong)plVar9,param_1[1]);
    pvVar4 = (void *)*param_1;
    pvVar8 = pvVar4;
    if ((0xfff < (param_1[2] - (longlong)pvVar4 & 0xfffffffffffffff0U)) &&
       (pvVar8 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar8)))) goto LAB_18000dd8d;
    FUN_18001c9b8(pvVar8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (uVar7 < 0x1000000000000000) {
    uVar12 = uVar7 * 0x10;
    if (uVar12 != 0) {
      if (uVar12 < 0x1000) {
        plVar11 = (longlong *)FUN_18001cae0(uVar12);
      }
      else {
        if (uVar12 + 0x27 <= uVar12) goto LAB_18000dfd2;
        lVar6 = FUN_18001cae0(uVar12 + 0x27);
        if (lVar6 == 0) {
LAB_18000dd8d:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        plVar11 = (longlong *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        plVar11[-1] = lVar6;
      }
    }
    *param_1 = (longlong)plVar11;
    param_1[1] = (longlong)plVar11;
    param_1[2] = (longlong)(plVar11 + uVar7 * 2);
    if (param_3 != 0) {
      plVar9 = param_2 + 1;
      do {
        *plVar11 = 0;
        plVar11[1] = 0;
        if (*plVar9 != 0) {
          LOCK();
          piVar1 = (int *)(*plVar9 + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        *plVar11 = plVar9[-1];
        lVar6 = *plVar9;
        plVar9 = plVar9 + 2;
        plVar11[1] = lVar6;
        plVar11 = plVar11 + 2;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    FUN_180009c10((longlong)plVar11,(longlong)plVar11);
    param_1[1] = (longlong)plVar11;
    return;
  }
LAB_18000dfd2:
                    // WARNING: Subroutine does not return
  FUN_180001d40();
}



undefined8 * FUN_18000dfe0(float *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  size_t _Size;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *_Buf1;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  float fVar13;
  
  uVar1 = param_3[2];
  uVar9 = param_3[3];
  plVar7 = param_3;
  if (0xf < uVar9) {
    plVar7 = (longlong *)*param_3;
  }
  uVar6 = 0;
  uVar12 = 0xcbf29ce484222325;
  if (uVar1 != 0) {
    do {
      uVar12 = (uVar12 ^ *(byte *)((longlong)plVar7 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  puVar5 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
  puVar10 = *(undefined8 **)(param_1 + 2);
  if (puVar5 != puVar10) {
    puVar11 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
    while( true ) {
      puVar10 = puVar5 + 2;
      if (0xf < (ulonglong)puVar5[5]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      plVar7 = param_3;
      if (0xf < uVar9) {
        plVar7 = (longlong *)*param_3;
      }
      if ((uVar1 == puVar5[4]) &&
         ((uVar1 == 0 || (iVar4 = memcmp(plVar7,puVar10,uVar1), iVar4 == 0)))) {
        *param_2 = puVar5;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      puVar10 = puVar5;
      if (puVar5 == puVar11) break;
      puVar5 = (undefined8 *)puVar5[1];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x38e38e38e38e38e) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  puVar5 = (undefined8 *)FUN_18001cae0(0x48);
  FUN_180006190(puVar5 + 2,param_3);
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar1) {
    fVar13 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar8 = 0;
    if ((9.223372e+18 <= fVar13) && (fVar13 = fVar13 - 9.223372e+18, fVar13 < 9.223372e+18)) {
      lVar8 = -0x8000000000000000;
    }
    uVar9 = 8;
    if (8 < (ulonglong)((longlong)fVar13 + lVar8)) {
      uVar9 = (longlong)fVar13 + lVar8;
    }
    uVar6 = uVar1;
    if ((uVar1 < uVar9) && ((0x1ff < uVar1 || (uVar6 = uVar1 * 8, uVar1 * 8 < uVar9)))) {
      uVar6 = uVar9;
    }
    FUN_18000e4d0((longlong)param_1,uVar6);
    puVar11 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
    puVar10 = *(undefined8 **)(param_1 + 2);
    if (puVar11 != puVar10) {
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
      uVar1 = puVar5[5];
      _Size = puVar5[4];
      while( true ) {
        puVar10 = puVar11 + 2;
        if (0xf < (ulonglong)puVar11[5]) {
          puVar10 = (undefined8 *)*puVar10;
        }
        _Buf1 = puVar5 + 2;
        if (0xf < uVar1) {
          _Buf1 = (undefined8 *)puVar5[2];
        }
        if ((_Size == puVar11[4]) &&
           ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar10,_Size), iVar4 == 0)))) break;
        puVar10 = puVar11;
        if (puVar11 == puVar2) goto LAB_18000e2c0;
        puVar11 = (undefined8 *)puVar11[1];
      }
      puVar10 = (undefined8 *)*puVar11;
    }
  }
LAB_18000e2c0:
  puVar11 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar10;
  puVar5[1] = puVar11;
  *puVar11 = puVar5;
  puVar10[1] = puVar5;
  lVar8 = *(longlong *)(param_1 + 6);
  uVar12 = *(ulonglong *)(param_1 + 0xc) & uVar12;
  puVar2 = *(undefined8 **)(lVar8 + uVar12 * 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar8 + uVar12 * 0x10) = puVar5;
  }
  else {
    if (puVar2 == puVar10) {
      *(undefined8 **)(lVar8 + uVar12 * 0x10) = puVar5;
      goto LAB_18000e30d;
    }
    if (*(undefined8 **)(lVar8 + 8 + uVar12 * 0x10) != puVar11) goto LAB_18000e30d;
  }
  *(undefined8 **)(lVar8 + 8 + uVar12 * 0x10) = puVar5;
LAB_18000e30d:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



void FUN_18000e340(ulonglong *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  pvVar1 = (void *)*param_1;
  uVar3 = param_1[2] - (longlong)pvVar1;
  if (param_3 <= uVar3) {
    uVar3 = param_1[1] - (longlong)pvVar1;
    if (param_3 <= uVar3) {
      memmove(pvVar1,param_2,param_3);
      param_1[1] = (longlong)pvVar1 + param_3;
      return;
    }
    memmove(pvVar1,param_2,uVar3);
    pvVar1 = (void *)param_1[1];
    memmove(pvVar1,(void *)((longlong)param_2 + uVar3),param_3 - uVar3);
    param_1[1] = (param_3 - uVar3) + (longlong)pvVar1;
    return;
  }
  if (0x7fffffffffffffff < param_3) {
                    // WARNING: Subroutine does not return
    FUN_1800080f0();
  }
  uVar4 = 0x7fffffffffffffff;
  if ((uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) &&
     (uVar4 = (uVar3 >> 1) + uVar3, uVar4 < param_3)) {
    uVar4 = param_3;
  }
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < uVar3) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  FUN_180008110(param_1,uVar4);
  pvVar1 = (void *)*param_1;
  memmove(pvVar1,param_2,param_3);
  param_1[1] = param_3 + (longlong)pvVar1;
  return;
}



void FUN_18000e470(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_18000e880((longlong *)(*(longlong *)(param_1 + 8) + 0x10));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_18001c9b8(*(void **)(param_1 + 8));
    return;
  }
  return;
}



void FUN_18000e4d0(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  void *pvVar3;
  ulonglong _Size;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  void *pvVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *_Buf1;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  
  for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar11 & 0x3f)) < param_2) {
    std::_Xlength_error("invalid hash bucket count");
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  plVar2 = *(longlong **)(param_1 + 8);
  lVar17 = 1L << ((char)lVar11 + 1U & 0x3f);
  plVar18 = *(longlong **)(param_1 + 0x18);
  lVar11 = (longlong)*(longlong **)(param_1 + 0x20) - (longlong)plVar18;
  if ((ulonglong)(lVar11 >> 3) < (ulonglong)(lVar17 * 2)) {
    if (0x1fffffffffffffff < (ulonglong)(lVar17 * 2)) {
LAB_18000e873:
                    // WARNING: Subroutine does not return
      FUN_180001d40();
    }
    uVar10 = lVar17 * 0x10;
    plVar18 = (longlong *)0x0;
    if (uVar10 != 0) {
      if (uVar10 < 0x1000) {
        plVar18 = (longlong *)FUN_18001cae0(uVar10);
      }
      else {
        if (uVar10 + 0x27 <= uVar10) goto LAB_18000e873;
        lVar11 = FUN_18001cae0(uVar10 + 0x27);
        if (lVar11 == 0) goto LAB_18000e61e;
        plVar18 = (longlong *)(lVar11 + 0x27U & 0xffffffffffffffe0);
        plVar18[-1] = lVar11;
      }
    }
    pvVar3 = *(void **)(param_1 + 0x18);
    lVar11 = *(longlong *)(param_1 + 0x28) - (longlong)pvVar3 >> 3;
    if (lVar11 != 0) {
      pvVar12 = pvVar3;
      if ((0xfff < (ulonglong)(lVar11 * 8)) &&
         (pvVar12 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar12)))) {
LAB_18000e61e:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(pvVar12);
    }
    plVar16 = plVar18 + lVar17 * 2;
    *(longlong **)(param_1 + 0x18) = plVar18;
    *(longlong **)(param_1 + 0x20) = plVar16;
    *(longlong **)(param_1 + 0x28) = plVar16;
    for (; plVar18 != plVar16; plVar18 = plVar18 + 1) {
      *plVar18 = (longlong)plVar2;
    }
  }
  else {
    uVar10 = lVar11 + 7U >> 3;
    if (*(longlong **)(param_1 + 0x20) < plVar18) {
      uVar10 = 0;
    }
    if (uVar10 != 0) {
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        *plVar18 = (longlong)plVar2;
        plVar18 = plVar18 + 1;
      }
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar17;
  *(longlong *)(param_1 + 0x30) = lVar17 + -1;
  plVar18 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x00018000e65b:
  do {
    if (plVar18 == plVar2) {
      return;
    }
    uVar13 = 0;
    uVar10 = plVar18[5];
    plVar16 = plVar18 + 2;
    _Size = plVar18[4];
    plVar4 = (longlong *)*plVar18;
    if (0xf < uVar10) {
      plVar16 = (longlong *)plVar18[2];
    }
    uVar15 = 0xcbf29ce484222325;
    if (_Size != 0) {
      do {
        pbVar1 = (byte *)((longlong)plVar16 + uVar13);
        uVar13 = uVar13 + 1;
        uVar15 = (uVar15 ^ *pbVar1) * 0x100000001b3;
      } while (uVar13 < _Size);
    }
    puVar19 = (undefined8 *)
              ((*(ulonglong *)(param_1 + 0x30) & uVar15) * 0x10 + *(longlong *)(param_1 + 0x18));
    if ((longlong *)*puVar19 == plVar2) {
      *puVar19 = plVar18;
LAB_18000e826:
      puVar19[1] = plVar18;
      plVar18 = plVar4;
      goto joined_r0x00018000e65b;
    }
    plVar5 = (longlong *)puVar19[1];
    plVar16 = plVar5 + 2;
    if (0xf < (ulonglong)plVar5[5]) {
      plVar16 = (longlong *)*plVar16;
    }
    plVar14 = plVar18 + 2;
    if (0xf < uVar10) {
      plVar14 = (longlong *)plVar18[2];
    }
    if ((_Size == plVar5[4]) &&
       ((_Size == 0 || (iVar9 = memcmp(plVar14,plVar16,_Size), iVar9 == 0)))) {
      plVar5 = (longlong *)*plVar5;
      if (plVar5 != plVar18) {
        plVar16 = (longlong *)plVar18[1];
        *plVar16 = (longlong)plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar5;
        puVar7 = (undefined8 *)plVar5[1];
        *puVar7 = plVar18;
        plVar5[1] = (longlong)puVar6;
        plVar4[1] = (longlong)plVar16;
        plVar18[1] = (longlong)puVar7;
      }
      goto LAB_18000e826;
    }
    plVar16 = (longlong *)*puVar19;
    do {
      if (plVar16 == plVar5) {
        plVar16 = (longlong *)plVar18[1];
        *plVar16 = (longlong)plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar5;
        puVar7 = (undefined8 *)plVar5[1];
        *puVar7 = plVar18;
        plVar5[1] = (longlong)puVar6;
        plVar4[1] = (longlong)plVar16;
        plVar18[1] = (longlong)puVar7;
        *puVar19 = plVar18;
        plVar18 = plVar4;
        goto joined_r0x00018000e65b;
      }
      plVar5 = (longlong *)plVar5[1];
      plVar14 = plVar5 + 2;
      if (0xf < (ulonglong)plVar5[5]) {
        plVar14 = (longlong *)*plVar14;
      }
      _Buf1 = plVar18 + 2;
      if (0xf < uVar10) {
        _Buf1 = (longlong *)plVar18[2];
      }
    } while ((_Size != plVar5[4]) ||
            ((_Size != 0 && (iVar9 = memcmp(_Buf1,plVar14,_Size), iVar9 != 0))));
    lVar11 = *plVar5;
    plVar16 = (longlong *)plVar18[1];
    *plVar16 = (longlong)plVar4;
    plVar5 = (longlong *)plVar4[1];
    *plVar5 = lVar11;
    puVar19 = *(undefined8 **)(lVar11 + 8);
    *puVar19 = plVar18;
    *(longlong **)(lVar11 + 8) = plVar5;
    plVar4[1] = (longlong)plVar16;
    plVar18[1] = (longlong)puVar19;
    plVar18 = plVar4;
  } while( true );
}



void FUN_18000e880(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1[4] != 0) {
    FUN_180009c10(param_1[4],param_1[5]);
    pvVar1 = (void *)param_1[4];
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[6] - (longlong)pvVar1 & 0xfffffffffffffff0U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_18000e932;
    FUN_18001c9b8(pvVar2);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_18000e932:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18000e940(longlong param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined2 *puStack_20;
  undefined2 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1800280c0 ^ (ulonglong)auStack_48;
  local_28 = (undefined2 *)0x0;
  puStack_20 = (undefined2 *)0x0;
  local_18 = (undefined2 *)0x0;
  local_28 = (undefined2 *)FUN_18001cae0(2);
  puStack_20 = local_28 + 1;
  *local_28 = 0;
  *(char *)local_28 = (char)((ushort)param_2 >> 8);
  *(char *)((longlong)local_28 + 1) = (char)param_2;
  local_18 = puStack_20;
  FUN_18000fa70((longlong *)(param_1 + 0x10),*(void **)(param_1 + 0x18),local_28,
                (longlong)puStack_20 - (longlong)local_28);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 2;
  if (local_28 != (undefined2 *)0x0) {
    puVar1 = local_28;
    if ((0xfff < (ulonglong)((longlong)local_18 - (longlong)local_28)) &&
       (puVar1 = *(undefined2 **)(local_28 + -4),
       0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)puVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(puVar1);
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18000ea20(longlong param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined4 *puStack_20;
  undefined4 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1800280c0 ^ (ulonglong)auStack_48;
  uVar2 = param_2 & 0xffffffff;
  local_28 = (undefined4 *)0x0;
  puStack_20 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_28 = (undefined4 *)FUN_18001cae0(4);
  puStack_20 = local_28 + 1;
  *local_28 = 0;
  *(char *)local_28 = (char)(uVar2 >> 0x18);
  *(char *)((longlong)local_28 + 1) = (char)(param_2 >> 0x10);
  *(char *)((longlong)local_28 + 2) = (char)(uVar2 >> 8);
  *(char *)((longlong)local_28 + 3) = (char)uVar2;
  local_18 = puStack_20;
  FUN_18000fa70((longlong *)(param_1 + 0x10),*(void **)(param_1 + 0x18),local_28,
                (longlong)puStack_20 - (longlong)local_28);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 4;
  if (local_28 != (undefined4 *)0x0) {
    puVar1 = local_28;
    if ((0xfff < (ulonglong)((longlong)local_18 - (longlong)local_28)) &&
       (puVar1 = *(undefined4 **)(local_28 + -2),
       0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)puVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(puVar1);
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18000eb20(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 *puStack_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1800280c0 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  puStack_20 = (undefined8 *)0x0;
  local_18 = (undefined8 *)0x0;
  local_28 = (undefined8 *)FUN_18001cae0(8);
  puStack_20 = local_28 + 1;
  *local_28 = 0;
  *(char *)local_28 = (char)((ulonglong)param_2 >> 0x38);
  *(char *)((longlong)local_28 + 1) = (char)((ulonglong)param_2 >> 0x30);
  *(char *)((longlong)local_28 + 2) = (char)((ulonglong)param_2 >> 0x28);
  *(char *)((longlong)local_28 + 3) = (char)((ulonglong)param_2 >> 0x20);
  *(char *)((longlong)local_28 + 4) = (char)((ulonglong)param_2 >> 0x18);
  *(char *)((longlong)local_28 + 5) = (char)((ulonglong)param_2 >> 0x10);
  *(char *)((longlong)local_28 + 6) = (char)((ulonglong)param_2 >> 8);
  *(char *)((longlong)local_28 + 7) = (char)param_2;
  local_18 = puStack_20;
  FUN_18000fa70((longlong *)(param_1 + 0x10),*(void **)(param_1 + 0x18),local_28,
                (longlong)puStack_20 - (longlong)local_28);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  if (local_28 != (undefined8 *)0x0) {
    puVar1 = local_28;
    if ((0xfff < (ulonglong)((longlong)local_18 - (longlong)local_28)) &&
       (puVar1 = (undefined8 *)local_28[-1],
       0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)puVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(puVar1);
  }
  return;
}



longlong * FUN_18000ec60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 ****ppppuVar3;
  undefined1 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 ***local_50;
  undefined8 uStack_48;
  size_t local_40;
  ulonglong local_38;
  longlong *local_30;
  
  lVar1 = *param_1;
  uVar5 = CONCAT11(*(undefined1 *)(param_1[2] + lVar1),*(undefined1 *)(param_1[2] + 1 + lVar1));
  *param_1 = lVar1 + 2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  local_30 = param_2;
  FUN_180007110(param_2,&DAT_180020298,0);
  if (uVar5 < 0x1000) {
    uVar6 = (ulonglong)uVar5;
    puVar2 = (undefined1 *)thunk_FUN_18001cae0(uVar6);
    if (uVar5 != 0) {
      uVar7 = (ulonglong)uVar5;
      puVar4 = puVar2;
      do {
        lVar1 = *param_1;
        *param_1 = lVar1 + 1;
        *puVar4 = *(undefined1 *)(lVar1 + param_1[2]);
        puVar4 = puVar4 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    local_50 = (undefined8 ****)0x0;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 0;
    FUN_180007110(&local_50,puVar2,uVar6);
    ppppuVar3 = &local_50;
    if (0xf < local_38) {
      ppppuVar3 = (undefined8 ****)local_50;
    }
    FUN_18000f480(param_2,puVar2,uVar6,ppppuVar3,local_40);
    if (0xf < local_38) {
      ppppuVar3 = (undefined8 ****)local_50;
      if ((0xfff < local_38 + 1) &&
         (ppppuVar3 = (undefined8 ****)local_50[-1],
         0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)ppppuVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(ppppuVar3);
    }
  }
  return param_2;
}



longlong * FUN_18000edb0(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  size_t sVar5;
  undefined2 *puVar6;
  undefined8 ****ppppuVar7;
  ushort uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  undefined8 ***local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong local_38;
  longlong *local_30;
  
  lVar3 = *param_1;
  uVar8 = CONCAT11(*(undefined1 *)(lVar3 + param_1[2]),*(undefined1 *)(lVar3 + 1 + param_1[2]));
  *param_1 = lVar3 + 2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  local_30 = param_2;
  FUN_18000da10(param_2,&PTR_180020ab0,0);
  if (uVar8 < 0x1000) {
    uVar9 = CONCAT62(0,uVar8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar9;
    sVar5 = SUB168(ZEXT816(2) * auVar4,0);
    if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
      sVar5 = 0xffffffffffffffff;
    }
    puVar6 = (undefined2 *)thunk_FUN_18001cae0(sVar5);
    if (uVar8 != 0) {
      uVar11 = (ulonglong)uVar8;
      puVar10 = puVar6;
      do {
        lVar3 = *param_1;
        uVar1 = *(undefined1 *)(param_1[2] + lVar3);
        uVar2 = *(undefined1 *)(param_1[2] + 1 + lVar3);
        *param_1 = lVar3 + 2;
        *puVar10 = CONCAT11(uVar1,uVar2);
        puVar10 = puVar10 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    local_50 = (undefined8 ****)0x0;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 0;
    FUN_18000da10(&local_50,puVar6,uVar9);
    ppppuVar7 = &local_50;
    if (7 < local_38) {
      ppppuVar7 = (undefined8 ****)local_50;
    }
    FUN_18000f2e0(param_2,puVar6,uVar9,ppppuVar7,local_40);
    if (7 < local_38) {
      ppppuVar7 = (undefined8 ****)local_50;
      if ((0xfff < local_38 * 2 + 2) &&
         (ppppuVar7 = (undefined8 ****)local_50[-1],
         0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001c9b8(ppppuVar7);
    }
  }
  return param_2;
}



float * FUN_18000ef40(longlong *param_1,float *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  
  lVar6 = *param_1;
  lVar7 = param_1[2];
  lVar1 = lVar6 + 4;
  uVar2 = *(undefined1 *)(lVar6 + lVar7);
  uVar3 = *(undefined1 *)(lVar6 + 1 + lVar7);
  uVar4 = *(undefined1 *)(lVar6 + 2 + lVar7);
  uVar5 = *(undefined1 *)(lVar6 + 3 + lVar7);
  *param_1 = lVar1;
  dVar8 = FUN_180010bf0((ulonglong)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),' ',8);
  uVar2 = *(undefined1 *)(lVar7 + 2 + lVar1);
  uVar3 = *(undefined1 *)(lVar7 + 3 + lVar1);
  uVar4 = *(undefined1 *)(lVar7 + lVar1);
  uVar5 = *(undefined1 *)(lVar7 + 1 + lVar1);
  *param_1 = lVar6 + 8;
  *param_2 = (float)dVar8;
  dVar8 = FUN_180010bf0((ulonglong)CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar2),uVar3),' ',8);
  uVar2 = *(undefined1 *)(lVar6 + 9 + lVar7);
  uVar3 = *(undefined1 *)(lVar6 + 10 + lVar7);
  uVar4 = *(undefined1 *)(lVar6 + 0xb + lVar7);
  uVar5 = *(undefined1 *)(lVar6 + 8 + lVar7);
  *param_1 = lVar6 + 0xc;
  param_2[1] = (float)dVar8;
  dVar8 = FUN_180010bf0((ulonglong)CONCAT31(CONCAT21(CONCAT11(uVar5,uVar2),uVar3),uVar4),' ',8);
  param_2[2] = (float)dVar8;
  return param_2;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 * FUN_18000f070(undefined8 *param_1,longlong param_2,longlong param_3)

{
  void **ppvVar1;
  void *pvVar2;
  ulonglong uVar3;
  void **ppvVar4;
  size_t sVar5;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  void *local_98;
  void *pvStack_90;
  longlong local_88;
  void *local_80;
  longlong lStack_78;
  longlong local_70;
  ulonglong local_68;
  void *local_60;
  longlong lStack_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1800280c0 ^ (ulonglong)auStack_c8;
  uVar3 = 0;
  local_60 = (void *)0x0;
  lStack_58 = 0;
  local_50 = 0;
  local_80 = (void *)0x0;
  lStack_78 = 0;
  local_70 = 0;
  ppvVar1 = (void **)(param_2 + 0x10);
  sVar5 = *(longlong *)(param_2 + 0x18) - (longlong)*ppvVar1;
  local_a0 = param_1;
  if (sVar5 != 0) {
    if (&local_60 != ppvVar1) {
      FUN_18000e340((ulonglong *)&local_60,*ppvVar1,sVar5);
    }
    uVar3 = lStack_58 - (longlong)local_60;
  }
  ppvVar4 = (void **)(param_3 + 0x10);
  sVar5 = *(longlong *)(param_3 + 0x18) - (longlong)*ppvVar4;
  if (sVar5 != 0) {
    if (&local_80 != ppvVar4) {
      FUN_18000e340((ulonglong *)&local_80,*ppvVar4,sVar5);
    }
    uVar3 = uVar3 + (lStack_78 - (longlong)local_80);
  }
  local_98 = (void *)0x0;
  pvStack_90 = (void *)0x0;
  local_88 = 0;
  local_68 = uVar3;
  if (uVar3 != 0) {
    if (0x7fffffffffffffff < uVar3) {
                    // WARNING: Subroutine does not return
      FUN_1800080f0();
    }
    FUN_18000f5f0((longlong *)&local_98,&local_68);
  }
  if (*(void **)(param_2 + 0x18) != *ppvVar1) {
    FUN_18000fa70((longlong *)&local_98,pvStack_90,local_60,lStack_58 - (longlong)local_60);
  }
  if (*(void **)(param_3 + 0x18) != *ppvVar4) {
    FUN_18000fa70((longlong *)&local_98,pvStack_90,local_80,lStack_78 - (longlong)local_80);
  }
  pvVar2 = local_98;
  uVar3 = (longlong)pvStack_90 - (longlong)local_98;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_68 = uVar3;
  if ((ulonglong)param_1[4] < uVar3) {
    if (0x7fffffffffffffff < uVar3) {
                    // WARNING: Subroutine does not return
      FUN_1800080f0();
    }
    FUN_18000f5f0(param_1 + 2,&local_68);
  }
  FUN_18000e340(param_1 + 2,pvVar2,uVar3);
  if (local_98 != (void *)0x0) {
    pvVar2 = local_98;
    if ((0xfff < (ulonglong)(local_88 - (longlong)local_98)) &&
       (pvVar2 = *(void **)((longlong)local_98 + -8),
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
    local_98 = (void *)0x0;
    pvStack_90 = (void *)0x0;
    local_88 = 0;
  }
  if (local_80 != (void *)0x0) {
    pvVar2 = local_80;
    if ((0xfff < (ulonglong)(local_70 - (longlong)local_80)) &&
       (pvVar2 = *(void **)((longlong)local_80 + -8),
       0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
    local_80 = (void *)0x0;
    lStack_78 = 0;
    local_70 = 0;
  }
  if (local_60 != (void *)0x0) {
    pvVar2 = local_60;
    if ((0xfff < (ulonglong)(local_50 - (longlong)local_60)) &&
       (pvVar2 = *(void **)((longlong)local_60 + -8),
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
  }
  return param_1;
}



longlong *
FUN_18000f2e0(longlong *param_1,undefined8 param_2,ulonglong param_3,void *param_4,ulonglong param_5
             )

{
  ulonglong uVar1;
  longlong *plVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = param_1[2];
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if (param_3 != param_5) {
    lVar3 = uVar1 - param_3;
    if (param_5 < param_3) {
      plVar2 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        plVar2 = (longlong *)*param_1;
      }
      memmove(plVar2,param_4,param_5 * 2);
      memmove((void *)(param_5 * 2 + (longlong)plVar2),(void *)((longlong)plVar2 + param_3 * 2),
              lVar3 * 2 + 2);
      param_1[2] = (param_5 - param_3) + uVar1;
    }
    else {
      uVar4 = param_5 - param_3;
      if (param_1[3] - uVar1 < uVar4) {
        param_1 = FUN_18000f690(param_1,uVar4,lVar3,param_4,param_3,param_4,param_5);
      }
      else {
        param_1[2] = uVar4 + uVar1;
        plVar2 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          plVar2 = (longlong *)*param_1;
        }
        _Src = (void *)(param_3 * 2 + (longlong)plVar2);
        uVar5 = param_5;
        if ((plVar2 < (longlong *)((longlong)param_4 + param_5 * 2)) &&
           (param_4 <= (void *)(uVar1 * 2 + (longlong)plVar2))) {
          if (param_4 < _Src) {
            uVar5 = (longlong)_Src - (longlong)param_4 >> 1;
          }
          else {
            uVar5 = 0;
          }
        }
        memmove((void *)((longlong)_Src + uVar4 * 2),_Src,lVar3 * 2 + 2);
        memmove(plVar2,param_4,uVar5 * 2);
        memcpy((void *)(uVar5 * 2 + (longlong)plVar2),
               (void *)((longlong)param_4 + (uVar5 + uVar4) * 2),(param_5 - uVar5) * 2);
      }
    }
    return param_1;
  }
  plVar2 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    plVar2 = (longlong *)*param_1;
  }
  memmove(plVar2,param_4,param_5 * 2);
  return param_1;
}



longlong *
FUN_18000f480(longlong *param_1,undefined8 param_2,ulonglong param_3,void *param_4,size_t param_5)

{
  void *_Src;
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  size_t _Size;
  ulonglong uVar4;
  
  uVar1 = param_1[2];
  uVar3 = param_3;
  if (uVar1 < param_3) {
    uVar3 = uVar1;
  }
  if (uVar3 != param_5) {
    if (param_5 < uVar3) {
      plVar2 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar2 = (longlong *)*param_1;
      }
      memmove(plVar2,param_4,param_5);
      memmove((void *)(param_5 + (longlong)plVar2),(void *)(uVar3 + (longlong)plVar2),
              (uVar1 - uVar3) + 1);
      param_1[2] = (param_5 - uVar3) + uVar1;
    }
    else {
      uVar4 = param_5 - uVar3;
      if (param_1[3] - uVar1 < uVar4) {
        param_1 = FUN_18000f840(param_1,uVar4,param_3,param_4,uVar3,param_4,param_5);
      }
      else {
        param_1[2] = uVar4 + uVar1;
        plVar2 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          plVar2 = (longlong *)*param_1;
        }
        _Src = (void *)(uVar3 + (longlong)plVar2);
        _Size = param_5;
        if ((plVar2 < (longlong *)(param_5 + (longlong)param_4)) &&
           (param_4 <= (void *)((longlong)plVar2 + uVar1))) {
          if (param_4 < _Src) {
            _Size = (longlong)_Src - (longlong)param_4;
          }
          else {
            _Size = 0;
          }
        }
        memmove((void *)((longlong)_Src + uVar4),_Src,(uVar1 - uVar3) + 1);
        memmove(plVar2,param_4,_Size);
        memcpy((void *)((longlong)plVar2 + _Size),(void *)((longlong)param_4 + uVar4 + _Size),
               param_5 - _Size);
      }
    }
    return param_1;
  }
  plVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    plVar2 = (longlong *)*param_1;
  }
  memmove(plVar2,param_4,param_5);
  return param_1;
}



void FUN_18000f5f0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *_Dst;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  uVar3 = *param_2;
  if (uVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else if (uVar3 < 0x1000) {
    _Dst = (void *)FUN_18001cae0(uVar3);
  }
  else {
    if (uVar3 + 0x27 <= uVar3) {
                    // WARNING: Subroutine does not return
      FUN_180001d40();
    }
    lVar4 = FUN_18001cae0(uVar3 + 0x27);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar4;
  }
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  FUN_18000f9e0(param_1,(longlong)_Dst,lVar1 - lVar2,*param_2);
  return;
}



longlong *
FUN_18000f690(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,void *param_6,longlong param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *pvVar4;
  longlong lVar5;
  size_t sVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *pvVar9;
  void *_Dst;
  
  lVar2 = param_1[2];
  uVar8 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    // WARNING: Subroutine does not return
    FUN_180001de0();
  }
  uVar3 = param_1[3];
  uVar7 = param_2 + lVar2 | 7;
  if ((uVar7 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar8 = uVar7;
    if (uVar7 < uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffff < uVar8 + 1) goto LAB_18000f831;
    sVar6 = (uVar8 + 1) * 2;
    if (sVar6 != 0) goto LAB_18000f73c;
    _Dst = (void *)0x0;
  }
  else {
    sVar6 = 0xfffffffffffffffe;
LAB_18000f73c:
    if (sVar6 < 0x1000) {
      _Dst = (void *)FUN_18001cae0(sVar6);
    }
    else {
      if (sVar6 + 0x27 <= sVar6) {
LAB_18000f831:
                    // WARNING: Subroutine does not return
        FUN_180001d40();
      }
      lVar5 = FUN_18001cae0(sVar6 + 0x27);
      if (lVar5 == 0) goto LAB_18000f7ee;
      _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar5;
    }
  }
  lVar5 = (lVar2 - param_5) * 2;
  param_1[2] = param_2 + lVar2;
  param_1[3] = uVar8;
  sVar6 = param_7 * 2;
  if (uVar3 < 8) {
    memcpy(_Dst,param_6,sVar6);
    memcpy((void *)(sVar6 + (longlong)_Dst),(void *)((longlong)param_1 + param_5 * 2),lVar5 + 2);
  }
  else {
    pvVar4 = (void *)*param_1;
    memcpy(_Dst,param_6,sVar6);
    memcpy((void *)(sVar6 + (longlong)_Dst),(void *)((longlong)pvVar4 + param_5 * 2),lVar5 + 2);
    pvVar9 = pvVar4;
    if ((0xfff < uVar3 * 2 + 2) &&
       (pvVar9 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar9)))) {
LAB_18000f7ee:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar9);
  }
  *param_1 = (longlong)_Dst;
  return param_1;
}



longlong *
FUN_18000f840(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,void *param_6,size_t param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvVar8;
  void *_Dst;
  
  lVar2 = param_1[2];
  uVar7 = 0x7fffffffffffffff;
  if (0x7fffffffffffffffU - lVar2 < param_2) {
                    // WARNING: Subroutine does not return
    FUN_180001de0();
  }
  uVar3 = param_1[3];
  uVar6 = param_2 + lVar2 | 0xf;
  if ((uVar6 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    uVar1 = uVar7 + 1;
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar6 = uVar7 + 0x28;
        if (uVar6 <= uVar1) {
                    // WARNING: Subroutine does not return
          FUN_180001d40();
        }
        goto LAB_18000f901;
      }
      _Dst = (void *)FUN_18001cae0(uVar1);
    }
  }
  else {
    uVar6 = 0x8000000000000027;
LAB_18000f901:
    lVar5 = FUN_18001cae0(uVar6);
    if (lVar5 == 0) goto LAB_18000f992;
    _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar5;
  }
  param_1[2] = param_2 + lVar2;
  param_1[3] = uVar7;
  if (uVar3 < 0x10) {
    memcpy(_Dst,param_6,param_7);
    memcpy((void *)(param_7 + (longlong)_Dst),(void *)((longlong)param_1 + param_5),
           (lVar2 - param_5) + 1);
  }
  else {
    pvVar4 = (void *)*param_1;
    memcpy(_Dst,param_6,param_7);
    memcpy((void *)(param_7 + (longlong)_Dst),(void *)((longlong)pvVar4 + param_5),
           (lVar2 - param_5) + 1);
    pvVar8 = pvVar4;
    if ((0xfff < uVar3 + 1) &&
       (pvVar8 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar8)))) {
LAB_18000f992:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar8);
  }
  *param_1 = (longlong)_Dst;
  return param_1;
}



void FUN_18000f9e0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar1)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3;
  param_1[2] = param_2 + param_4;
  return;
}



void FUN_18000fa70(longlong *param_1,void *param_2,void *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  void *_Dst_00;
  void *_Src;
  ulonglong uVar4;
  void *_Dst_01;
  size_t sVar5;
  size_t _Size;
  
  _Src = (void *)*param_1;
  _Dst = (void *)param_1[1];
  if (param_4 == 0) {
    return;
  }
  if (param_4 <= (ulonglong)(param_1[2] - (longlong)_Dst)) {
    uVar4 = (longlong)_Dst - (longlong)param_2;
    if (param_4 < uVar4) {
      memmove(_Dst,(void *)((longlong)_Dst - param_4),param_4);
      sVar5 = (longlong)((longlong)_Dst - param_4) - (longlong)param_2;
      param_1[1] = param_4 + (longlong)_Dst;
      memmove((void *)((longlong)_Dst - sVar5),param_2,sVar5);
      memmove(param_2,param_3,param_4);
      return;
    }
    memmove((void *)(param_4 + (longlong)param_2),param_2,uVar4);
    param_1[1] = uVar4 + (longlong)(param_4 + (longlong)param_2);
    memmove(param_2,param_3,param_4);
    return;
  }
  uVar4 = 0x7fffffffffffffff;
  sVar5 = (longlong)_Dst - (longlong)_Src;
  if (0x7fffffffffffffff - sVar5 < param_4) {
                    // WARNING: Subroutine does not return
    FUN_1800080f0();
  }
  uVar3 = param_1[2] - (longlong)_Src;
  uVar1 = param_4 + sVar5;
  if (0x7fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar3 = 0x8000000000000026;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar4 = uVar1;
    if (uVar1 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0) {
      _Dst_01 = (void *)0x0;
      goto LAB_18000fb63;
    }
    if (uVar4 < 0x1000) {
      _Dst_01 = (void *)FUN_18001cae0(uVar4);
      goto LAB_18000fb63;
    }
    uVar3 = uVar4 + 0x27;
    if (uVar3 <= uVar4) {
                    // WARNING: Subroutine does not return
      FUN_180001d40();
    }
  }
  lVar2 = FUN_18001cae0(uVar3);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst_01 = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst_01 - 8) = lVar2;
LAB_18000fb63:
  _Size = (longlong)param_2 - (longlong)_Src;
  memmove((void *)((longlong)_Dst_01 + _Size),param_3,param_4);
  if ((param_4 != 1) || (_Dst_00 = _Dst_01, param_2 != _Dst)) {
    memmove(_Dst_01,_Src,_Size);
    sVar5 = (longlong)_Dst - (longlong)param_2;
    _Dst_00 = (void *)((longlong)_Dst_01 + _Size + param_4);
    _Src = param_2;
  }
  memmove(_Dst_00,_Src,sVar5);
  FUN_18000f9e0(param_1,(longlong)_Dst_01,uVar1,uVar4);
  return;
}



undefined1 * FUN_18000fc70(longlong *param_1,void *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *_Dst;
  undefined1 *_Dst_00;
  ulonglong uVar6;
  size_t _Size;
  
  lVar3 = *param_1;
  uVar6 = 0x7fffffffffffffff;
  if (param_1[1] - lVar3 == 0x7fffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_1800080f0();
  }
  uVar5 = param_1[2] - lVar3;
  uVar1 = (param_1[1] - lVar3) + 1;
  if (0x7fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar5 = 0x8000000000000026;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (uVar6 == 0) {
      _Dst_00 = (undefined1 *)0x0;
      goto LAB_18000fd37;
    }
    if (uVar6 < 0x1000) {
      _Dst_00 = (undefined1 *)FUN_18001cae0(uVar6);
      goto LAB_18000fd37;
    }
    uVar5 = uVar6 + 0x27;
    if (uVar5 <= uVar6) {
                    // WARNING: Subroutine does not return
      FUN_180001d40();
    }
  }
  lVar4 = FUN_18001cae0(uVar5);
  if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst_00 = (undefined1 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)(_Dst_00 + -8) = lVar4;
LAB_18000fd37:
  puVar2 = _Dst_00 + ((longlong)param_2 - lVar3);
  *puVar2 = *param_3;
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst = _Dst_00;
    param_2 = _Src;
  }
  else {
    memmove(_Dst_00,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst = puVar2 + 1;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  FUN_18000f9e0(param_1,(longlong)_Dst_00,uVar1,uVar6);
  return puVar2;
}



longlong * FUN_18000fdb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = _Query_perf_frequency();
  lVar2 = _Query_perf_counter();
  if (lVar1 == 10000000) {
    *param_1 = lVar2 * 100;
    return param_1;
  }
  if (lVar1 == 24000000) {
    lVar1 = lVar2 + SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar2),8);
    lVar3 = (lVar1 >> 0x18) - (lVar1 >> 0x3f);
    lVar1 = (lVar2 + lVar3 * -24000000) * 1000000000;
    lVar1 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar1),8) + lVar1;
    *param_1 = ((lVar1 >> 0x18) - (lVar1 >> 0x3f)) + lVar3 * 1000000000;
    return param_1;
  }
  *param_1 = ((lVar2 % lVar1) * 1000000000) / lVar1 + (lVar2 / lVar1) * 1000000000;
  return param_1;
}



void FUN_18000fe90(longlong *param_1)

{
  basic_ios<> *this;
  
  this = (basic_ios<> *)(param_1 + 0x11);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0x88) =
       std::basic_ostringstream<>::vftable;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x8c) = *(int *)(*param_1 + 4) + -0x88;
  FUN_1800105a0((basic_streambuf<> *)(param_1 + 1));
  std::basic_ostream<>::~basic_ostream<>((basic_ostream<> *)(param_1 + 2));
                    // WARNING: Could not recover jumptable at 0x00018000fee4. Too many branches
                    // WARNING: Treating indirect jump as call
  std::basic_ios<>::~basic_ios<>(this);
  return;
}



void FUN_18000fef0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_res8;
  
  FUN_18000fdb0(&local_res8);
  lVar4 = local_res8;
  if ((param_1 != 0) && (-1 < param_1)) {
    if (local_res8 < param_1 * -1000 + 0x7fffffffffffffff) {
      lVar4 = local_res8 + param_1 * 1000;
    }
    else {
      lVar4 = 0x7fffffffffffffff;
    }
  }
  while( true ) {
    FUN_18000fdb0(&local_res8);
    if (lVar4 == local_res8) {
      return;
    }
    cVar1 = -1;
    if (local_res8 <= lVar4) {
      cVar1 = '\x01';
    }
    if (cVar1 < '\x01') break;
    lVar2 = lVar4 - local_res8;
    if (lVar2 == 86400000000000) {
      Sleep(86400000);
    }
    else if (lVar2 < 86400000000000) {
      uVar3 = lVar2 / 1000000;
      if ((longlong)(uVar3 * 1000000) < lVar2) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
      }
      Sleep((DWORD)uVar3);
    }
    else {
      Sleep(86400000);
    }
  }
  return;
}



ulonglong * FUN_180010000(longlong param_1,ulonglong *param_2,longlong *param_3,byte param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (((param_4 & 1) == 0) || ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (((param_4 & 2) == 0) || ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((!bVar7) && (!bVar8)) {
    uVar10 = param_3[1] + *param_3;
    lVar3 = **(longlong **)(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x70) & 2) == 0) {
      uVar9 = **(ulonglong **)(param_1 + 0x40);
      if ((uVar9 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar9)) {
        *(ulonglong *)(param_1 + 0x68) = uVar9;
      }
    }
    else {
      uVar9 = 0;
    }
    lVar4 = *(longlong *)(param_1 + 0x68);
    lVar5 = **(longlong **)(param_1 + 0x18);
    if ((uVar10 <= (ulonglong)(lVar4 - lVar5)) &&
       ((uVar10 == 0 ||
        ((((param_4 & 1) == 0 || (lVar3 != 0)) && (((param_4 & 2) == 0 || (uVar9 != 0)))))))) {
      lVar1 = lVar5 + uVar10;
      if (((param_4 & 1) != 0) && (lVar3 != 0)) {
        **(longlong **)(param_1 + 0x18) = lVar5;
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)lVar4 - (int)lVar1;
      }
      if (((param_4 & 2) != 0) && (uVar9 != 0)) {
        iVar2 = **(int **)(param_1 + 0x58);
        uVar6 = **(undefined8 **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = lVar5;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar6) - (int)lVar1;
      }
      *param_2 = uVar10;
      goto LAB_18001010a;
    }
  }
  *param_2 = 0xffffffffffffffff;
LAB_18001010a:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



ulonglong *
FUN_180010130(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,byte param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (((param_5 & 1) == 0) || ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((param_5 & 2) == 0) || ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((bVar6) || (bVar7)) goto LAB_180010294;
  lVar3 = **(longlong **)(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x70) & 2) == 0) {
    uVar10 = **(ulonglong **)(param_1 + 0x40);
    if ((uVar10 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar10)) {
      *(ulonglong *)(param_1 + 0x68) = uVar10;
    }
  }
  else {
    uVar10 = 0;
  }
  lVar4 = **(longlong **)(param_1 + 0x18);
  uVar9 = *(longlong *)(param_1 + 0x68) - lVar4;
  if (param_4 == 0) {
    uVar8 = 0;
LAB_180010217:
    uVar8 = uVar8 + param_3;
    if ((uVar8 <= uVar9) &&
       ((uVar8 == 0 ||
        ((((param_5 & 1) == 0 || (lVar3 != 0)) && (((param_5 & 2) == 0 || (uVar10 != 0)))))))) {
      lVar1 = lVar4 + uVar8;
      if (((param_5 & 1) != 0) && (lVar3 != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x68);
        **(longlong **)(param_1 + 0x18) = lVar4;
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)uVar5 - (int)lVar1;
      }
      if (((param_5 & 2) != 0) && (uVar10 != 0)) {
        iVar2 = **(int **)(param_1 + 0x58);
        uVar5 = **(undefined8 **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = lVar4;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar5) - (int)lVar1;
      }
      *param_2 = uVar8;
      goto LAB_18001029b;
    }
  }
  else if (param_4 == 1) {
    if ((param_5 & 3) != 3) {
      if ((param_5 & 1) == 0) {
        if (((param_5 & 2) != 0) && ((uVar10 != 0 || (lVar4 == 0)))) {
          uVar8 = uVar10 - lVar4;
          goto LAB_180010217;
        }
      }
      else if ((lVar3 != 0) || (lVar4 == 0)) {
        uVar8 = lVar3 - lVar4;
        goto LAB_180010217;
      }
    }
  }
  else {
    uVar8 = uVar9;
    if (param_4 == 2) goto LAB_180010217;
  }
LAB_180010294:
  *param_2 = 0xffffffffffffffff;
LAB_18001029b:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



ulonglong FUN_1800102c0(longlong param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *pbVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  pbVar2 = (byte *)*puVar1;
  if (pbVar2 != (byte *)0x0) {
    if (pbVar2 < pbVar2 + **(int **)(param_1 + 0x50)) {
      return (ulonglong)*pbVar2;
    }
    pbVar3 = (byte *)**(undefined8 **)(param_1 + 0x40);
    if ((pbVar3 != (byte *)0x0) && ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
      pbVar5 = *(byte **)(param_1 + 0x68);
      if (*(byte **)(param_1 + 0x68) < pbVar3) {
        pbVar5 = pbVar3;
      }
      if (pbVar2 < pbVar5) {
        *(byte **)(param_1 + 0x68) = pbVar5;
        uVar4 = *puVar1;
        *puVar1 = uVar4;
        **(int **)(param_1 + 0x50) = (int)pbVar5 - (int)uVar4;
        return (ulonglong)*(byte *)**(undefined8 **)(param_1 + 0x38);
      }
    }
  }
  return 0xffffffff;
}



int FUN_180010340(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar1 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar1)) &&
     ((param_2 == -1 ||
      (((char)param_2 == *(char *)(uVar1 - 1) || ((*(byte *)(param_1 + 0x70) & 2) == 0)))))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    if (param_2 == -1) {
      param_2 = 0;
    }
    else {
      *(char *)**(undefined8 **)(param_1 + 0x38) = (char)param_2;
    }
    return param_2;
  }
  return -1;
}



int FUN_1800103a0(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Src;
  void *pvVar8;
  
  if ((*(byte *)(param_1 + 0x70) & 2) != 0) {
    return -1;
  }
  if (param_2 == -1) {
    return 0;
  }
  uVar7 = **(ulonglong **)(param_1 + 0x40);
  iVar1 = **(int **)(param_1 + 0x58);
  uVar6 = uVar7 + (longlong)iVar1;
  if (uVar7 == 0) {
    uVar6 = 0;
    _Src = (void *)**(longlong **)(param_1 + 0x18);
LAB_180010490:
    uVar7 = 0x20;
LAB_180010495:
    pvVar8 = (void *)FUN_18001cae0(uVar7);
  }
  else {
    if (uVar7 < uVar6) {
      **(int **)(param_1 + 0x58) = iVar1 + -1;
      puVar2 = (undefined1 *)**(longlong **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x40) = (longlong)(puVar2 + 1);
      *puVar2 = (char)param_2;
      *(ulonglong *)(param_1 + 0x68) = uVar7 + 1;
      return param_2;
    }
    _Src = (void *)**(longlong **)(param_1 + 0x18);
    uVar6 = uVar6 - (longlong)_Src;
    if (uVar6 < 0x20) goto LAB_180010490;
    if (uVar6 < 0x3fffffff) {
      uVar7 = uVar6 * 2;
      if (uVar7 == 0) {
        pvVar8 = (void *)0x0;
        goto LAB_1800104a0;
      }
      if (0xfff < uVar7) {
        uVar4 = uVar7 + 0x27;
        if (uVar4 <= uVar7) {
                    // WARNING: Subroutine does not return
          FUN_180001d40();
        }
        goto LAB_18001046b;
      }
      goto LAB_180010495;
    }
    uVar7 = 0x7fffffff;
    if (0x7ffffffe < uVar6) {
      return -1;
    }
    uVar4 = 0x80000026;
LAB_18001046b:
    lVar5 = FUN_18001cae0(uVar4);
    if (lVar5 == 0) goto LAB_18001056e;
    pvVar8 = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)pvVar8 - 8) = lVar5;
  }
LAB_1800104a0:
  memcpy(pvVar8,_Src,uVar6);
  lVar5 = (longlong)pvVar8 + uVar6;
  *(longlong *)(param_1 + 0x68) = lVar5 + 1;
  **(undefined8 **)(param_1 + 0x20) = pvVar8;
  **(longlong **)(param_1 + 0x40) = lVar5;
  **(int **)(param_1 + 0x58) = ((int)pvVar8 - (int)lVar5) + (int)uVar7;
  if ((*(byte *)(param_1 + 0x70) & 4) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    lVar5 = (**(longlong **)(param_1 + 0x38) - (longlong)_Src) + (longlong)pvVar8;
    **(undefined8 **)(param_1 + 0x18) = pvVar8;
    **(longlong **)(param_1 + 0x38) = lVar5;
    **(int **)(param_1 + 0x50) = (int)uVar3 - (int)lVar5;
  }
  else {
    **(undefined8 **)(param_1 + 0x18) = pvVar8;
    **(undefined8 **)(param_1 + 0x38) = pvVar8;
    **(undefined4 **)(param_1 + 0x50) = 0;
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    pvVar8 = _Src;
    if ((0xfff < uVar6) &&
       (pvVar8 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar8)))) {
LAB_18001056e:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar8);
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
  **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) + -1;
  puVar2 = (undefined1 *)**(longlong **)(param_1 + 0x40);
  **(longlong **)(param_1 + 0x40) = (longlong)(puVar2 + 1);
  *puVar2 = (char)param_2;
  return param_2;
}



void FUN_1800105a0(basic_streambuf<> *param_1)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  
  *(undefined ***)param_1 = std::basic_stringbuf<>::vftable;
  if (((byte)param_1[0x70] & 1) != 0) {
    if (**(longlong **)(param_1 + 0x40) == 0) {
      lVar3 = (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
    }
    else {
      lVar3 = (longlong)**(int **)(param_1 + 0x58) + **(longlong **)(param_1 + 0x40);
    }
    pvVar1 = (void *)**(longlong **)(param_1 + 0x18);
    pvVar2 = pvVar1;
    if ((0xfff < (ulonglong)(lVar3 - (longlong)pvVar1)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
  }
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  **(undefined8 **)(param_1 + 0x20) = 0;
  **(undefined8 **)(param_1 + 0x40) = 0;
  **(undefined4 **)(param_1 + 0x58) = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
  *(undefined8 *)(param_1 + 0x68) = 0;
                    // WARNING: Could not recover jumptable at 0x000180010649. Too many branches
                    // WARNING: Treating indirect jump as call
  std::basic_streambuf<>::~basic_streambuf<>(param_1);
  return;
}



basic_ostream<> * FUN_180010660(basic_ostream<> *param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined **)param_1 = &DAT_180020b48;
    std::basic_ios<>::basic_ios<>((basic_ios<> *)(param_1 + 0x88));
  }
  std::basic_ostream<>::basic_ostream<>(param_1,(basic_streambuf<> *)(param_1 + 8),false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_ostringstream<>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0x88;
  std::basic_streambuf<>::basic_streambuf<>((basic_streambuf<> *)(param_1 + 8));
  *(undefined ***)(param_1 + 8) = std::basic_stringbuf<>::vftable;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 4;
  return param_1;
}



basic_streambuf<> * FUN_180010710(basic_streambuf<> *param_1,uint param_2)

{
  FUN_1800105a0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1);
  }
  return param_1;
}



basic_ios<> * FUN_180010750(basic_ios<> *param_1,uint param_2)

{
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x88) =
       std::basic_ostringstream<>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x8c) =
       *(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x88;
  FUN_1800105a0((basic_streambuf<> *)(param_1 + -0x80));
  std::basic_ostream<>::~basic_ostream<>((basic_ostream<> *)(param_1 + -0x78));
  std::basic_ios<>::~basic_ios<>(param_1);
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1 + -0x88);
  }
  return param_1 + -0x88;
}



void FUN_1800107e4(longlong param_1,uint param_2)

{
  FUN_180010750((basic_ios<> *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined2 * FUN_1800107f0(undefined2 *param_1,undefined2 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  void *pvVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1800280c0 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)(param_1 + 4);
  puVar2 = (ulonglong *)(param_1 + 0xc);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  local_38 = 0x400;
  local_48 = param_1;
  local_40 = puVar1;
  if (*(ulonglong *)(param_1 + 0x14) < 0x400) {
    FUN_18000f5f0((longlong *)puVar2,&local_38);
  }
  *param_1 = 0;
  param_1[1] = param_2;
  *puVar1 = *param_3;
  *(undefined8 *)(param_1 + 8) = param_3[1];
  if (puVar2 != param_3 + 2) {
    pvVar3 = (void *)param_3[2];
    FUN_18000e340(puVar2,pvVar3,param_3[3] - (longlong)pvVar3);
  }
  return param_1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined2 * FUN_1800108c0(undefined2 *param_1,undefined2 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1800280c0 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)(param_1 + 4);
  plVar1 = (longlong *)(param_1 + 0xc);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *local_28 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  local_20 = 0x400;
  if ((ulonglong)(*(longlong *)(param_1 + 0x14) - *plVar1) < 0x400) {
    FUN_18000f5f0(plVar1,&local_20);
  }
  *param_1 = param_2;
  param_1[1] = 0;
  return param_1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Type propagation algorithm not settling

ulonglong * FUN_180010960(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  size_t _Size;
  undefined1 auStack_a8 [40];
  undefined8 local_80 [2];
  void *local_70;
  undefined8 local_68;
  longlong lStack_60;
  ulonglong local_58 [3];
  void *local_40;
  undefined8 uStack_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1800280c0 ^ (ulonglong)auStack_a8;
  local_40 = (void *)0x0;
  uStack_38 = 0;
  local_30 = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[0] = 0x400;
  FUN_18000f5f0((longlong *)&local_40,local_58);
  FUN_18000e940((longlong)(local_58 + 1),*(undefined2 *)(param_1 + 2));
  puVar1 = FUN_18000f070(local_80,(longlong)(local_58 + 1),param_1 + 8);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar3 = puVar1[3] - puVar1[2];
  if (uVar3 != 0) {
    if (0x7fffffffffffffff < uVar3) {
                    // WARNING: Subroutine does not return
      FUN_1800080f0();
    }
    FUN_180008110(param_2,uVar3);
    pvVar2 = (void *)*param_2;
    _Size = puVar1[3] - (longlong)puVar1[2];
    memmove(pvVar2,(void *)puVar1[2],_Size);
    param_2[1] = _Size + (longlong)pvVar2;
  }
  if (local_70 != (void *)0x0) {
    pvVar2 = local_70;
    if ((0xfff < (ulonglong)(lStack_60 - (longlong)local_70)) &&
       (pvVar2 = *(void **)((longlong)local_70 + -8),
       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
    local_70 = (void *)0x0;
    local_68 = 0;
    lStack_60 = 0;
  }
  if (local_40 != (void *)0x0) {
    pvVar2 = local_40;
    if ((0xfff < (ulonglong)(local_30 - (longlong)local_40)) &&
       (pvVar2 = *(void **)((longlong)local_40 + -8),
       0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar2);
  }
  return param_2;
}



ulonglong FUN_180010b00(double param_1,char param_2,char param_3)

{
  int iVar1;
  double dVar2;
  
  if (param_1 == 0.0) {
    return 0;
  }
  dVar2 = param_1;
  if (param_1 < 0.0) {
    dVar2 = -param_1;
  }
  iVar1 = 0;
  for (; 2.0 <= dVar2; dVar2 = dVar2 * 0.5) {
    iVar1 = iVar1 + 1;
  }
  for (; dVar2 < 1.0; dVar2 = dVar2 + dVar2) {
    iVar1 = iVar1 + -1;
  }
  return (longlong)
         ((double)((float)(1L << ((param_2 - param_3) - 1U & 0x3f)) + 0.5) * (dVar2 - 1.0)) |
         (longlong)((1 << (param_3 - 1U & 0x1f)) + -1 + iVar1) << ((param_2 - param_3) - 1U & 0x3f)
         | (ulonglong)(param_1 < 0.0) << (param_2 - 1U & 0x3f);
}



double FUN_180010bf0(ulonglong param_1,char param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  
  if (param_1 == 0) {
    return 0.0;
  }
  lVar1 = 1L << ((param_2 - param_3) - 1 & 0x3f);
  lVar2 = (param_1 >> ((param_2 - param_3) - 1 & 0x3f) & (1L << (param_3 & 0x3f)) - 1U) -
          (ulonglong)((1 << (param_3 - 1 & 0x1f)) - 1);
  dVar3 = (double)(lVar1 - 1U & param_1) / (double)lVar1 + 1.0;
  if (7 < lVar2) {
    lVar1 = (lVar2 - 8U >> 3) + 1;
    lVar2 = lVar2 + lVar1 * -8;
    do {
      dVar3 = dVar3 + dVar3 + dVar3 + dVar3;
      dVar3 = dVar3 + dVar3;
      dVar3 = dVar3 + dVar3;
      dVar3 = dVar3 + dVar3;
      dVar3 = dVar3 + dVar3;
      dVar3 = dVar3 + dVar3;
      dVar3 = dVar3 + dVar3;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  for (; 0 < lVar2; lVar2 = lVar2 + -1) {
    dVar3 = dVar3 + dVar3;
  }
  if (7 < -lVar2) {
    lVar1 = (-lVar2 - 8U >> 3) + 1;
    lVar2 = lVar2 + lVar1 * 8;
    do {
      dVar3 = dVar3 * 0.5 * 0.5 * 0.5 * 0.5 * 0.5 * 0.5 * 0.5 * 0.5;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (lVar2 < 0) {
    lVar2 = -lVar2;
    do {
      dVar3 = dVar3 * 0.5;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if ((param_1 >> (param_2 - 1U & 0x3f) & 1) == 0) {
    return dVar3 * 1.0;
  }
  return dVar3 * -1.0;
}



undefined8 * FUN_180010d80(void *param_1,size_t param_2,uint param_3)

{
  undefined8 *puVar1;
  
  if ((param_3 & 4) == 0) {
    puVar1 = (undefined8 *)(*(code *)PTR_malloc_180028000)(param_2 + 0x30);
    if (puVar1 == (undefined8 *)0x0) goto LAB_180010dce;
    puVar1[2] = puVar1 + 6;
    if (param_1 != (void *)0x0) {
      memcpy(puVar1 + 6,param_1,param_2);
    }
  }
  else {
    puVar1 = (undefined8 *)(*(code *)PTR_malloc_180028000)(0x30);
    if (puVar1 == (undefined8 *)0x0) {
LAB_180010dce:
      puVar1 = (undefined8 *)(*(code *)PTR_abort_180028010)();
      return puVar1;
    }
    puVar1[2] = param_1;
  }
  *(uint *)(puVar1 + 1) = param_3;
  *puVar1 = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = param_2;
  return puVar1;
}



void FUN_180010e20(longlong param_1)

{
  if (param_1 != 0) {
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))();
    }
    (*(code *)PTR_free_180028008)(param_1);
  }
  return;
}



void FUN_180010e50(undefined4 *param_1,undefined8 param_2)

{
  FUN_180011f70(param_2,'\0',param_1);
  return;
}



void FUN_180010e60(void)

{
  timeEndPeriod(1);
                    // WARNING: Could not recover jumptable at 0x000180010e73. Too many branches
                    // WARNING: Treating indirect jump as call
  WSACleanup();
  return;
}



void FUN_180010e80(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  u_long uVar4;
  u_long uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined2 uStack_56;
  undefined4 uStack_4c;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  
  uVar6 = FUN_180015d90();
  iVar10 = *(int *)(param_1 + 0x2b08);
  uVar11 = 0;
  iVar1 = (int)uVar6;
  uVar15 = iVar1 - *(int *)(param_1 + 0x24);
  uVar6 = 0xffffffff;
  bVar16 = *(longlong *)(param_1 + 0x2b10) != 0;
  uVar14 = 0xffffffff;
  if ((999 < uVar15) &&
     (((iVar2 = *(int *)(param_1 + 0x20), iVar2 != 0 || (*(int *)(param_1 + 0x1c) != 0)) &&
      (*(int *)(param_1 + 0x24) = iVar1, iVar10 != 0)))) {
    if (iVar2 != 0) {
      uVar8 = *(ulonglong *)(param_1 + 0x38);
      uVar14 = (iVar2 * uVar15) / 1000;
      uVar9 = *(longlong *)(param_1 + 0x40) * 0x208 + uVar8;
      uVar6 = uVar11;
      for (; uVar8 < uVar9; uVar8 = uVar8 + 0x208) {
        if (*(int *)(uVar8 + 0x40) - 5U < 2) {
          uVar6 = (ulonglong)(uint)((int)uVar6 + *(int *)(uVar8 + 0x78));
        }
      }
    }
    uVar13 = 0x20;
    do {
      if (!bVar16) {
        if (uVar14 < (uint)uVar6) {
          uVar13 = (uint)((uVar14 << 5) / uVar6);
        }
        uVar6 = *(ulonglong *)(param_1 + 0x38);
        if (uVar6 < *(longlong *)(param_1 + 0x40) * 0x208 + uVar6) {
          do {
            if ((*(int *)(uVar6 + 0x40) - 5U < 2) && (*(int *)(uVar6 + 100) != iVar1)) {
              *(uint *)(uVar6 + 0xbc) = uVar13;
              if (uVar13 < *(uint *)(uVar6 + 0xb8)) {
                *(uint *)(uVar6 + 0xb8) = uVar13;
              }
              *(undefined4 *)(uVar6 + 0x68) = 0;
              *(undefined4 *)(uVar6 + 0x78) = 0;
            }
            uVar6 = uVar6 + 0x208;
          } while (uVar6 < (ulonglong)
                           (*(longlong *)(param_1 + 0x40) * 0x208 + *(longlong *)(param_1 + 0x38)));
        }
        break;
      }
      if (uVar14 < (uint)uVar6) {
        iVar2 = (int)((uVar14 << 5) / uVar6);
      }
      else {
        iVar2 = 0x20;
      }
      uVar8 = *(ulonglong *)(param_1 + 0x38);
      bVar16 = false;
      if (uVar8 < *(longlong *)(param_1 + 0x40) * 0x208 + uVar8) {
        do {
          if (((*(int *)(uVar8 + 0x40) - 5U < 2) && (*(int *)(uVar8 + 0x58) != 0)) &&
             (*(int *)(uVar8 + 100) != iVar1)) {
            uVar12 = (*(int *)(uVar8 + 0x58) * uVar15) / 1000;
            if (uVar12 < *(uint *)(uVar8 + 0x78) * iVar2 >> 5) {
              uVar3 = (uVar12 << 5) / *(uint *)(uVar8 + 0x78);
              *(uint *)(uVar8 + 0xbc) = uVar3;
              if (uVar3 == 0) {
                *(undefined4 *)(uVar8 + 0xbc) = 1;
                uVar3 = 1;
              }
              if (uVar3 < *(uint *)(uVar8 + 0xb8)) {
                *(uint *)(uVar8 + 0xb8) = uVar3;
              }
              *(int *)(uVar8 + 100) = iVar1;
              iVar10 = iVar10 + -1;
              *(undefined4 *)(uVar8 + 0x68) = 0;
              uVar14 = uVar14 - uVar12;
              *(undefined4 *)(uVar8 + 0x78) = 0;
              uVar6 = (ulonglong)((int)uVar6 - uVar12);
              bVar16 = true;
            }
          }
          uVar8 = uVar8 + 0x208;
        } while (uVar8 < (ulonglong)
                         (*(longlong *)(param_1 + 0x40) * 0x208 + *(longlong *)(param_1 + 0x38)));
      }
    } while (iVar10 != 0);
    uVar14 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar15 = *(uint *)(param_1 + 0x1c);
      uVar13 = *(uint *)(param_1 + 0x2b08);
      *(undefined4 *)(param_1 + 0x30) = 0;
      bVar16 = true;
      uVar12 = 0;
      if (uVar15 != 0) {
        while ((uVar14 = uVar12, uVar13 != 0 && (uVar14 = (uint)uVar11, bVar16))) {
          uVar11 = (ulonglong)uVar15 / (ulonglong)uVar13;
          uVar12 = (uint)uVar11;
          uVar6 = *(ulonglong *)(param_1 + 0x38);
          bVar16 = false;
          if (uVar6 < *(longlong *)(param_1 + 0x40) * 0x208 + uVar6) {
            do {
              if (((*(int *)(uVar6 + 0x40) - 5U < 2) && (*(int *)(uVar6 + 0x60) != iVar1)) &&
                 ((uVar14 = *(uint *)(uVar6 + 0x5c), uVar14 == 0 || (uVar14 < uVar12)))) {
                uVar13 = uVar13 - 1;
                *(int *)(uVar6 + 0x60) = iVar1;
                uVar15 = uVar15 - uVar14;
                bVar16 = true;
              }
              uVar6 = uVar6 + 0x208;
            } while (uVar6 < (ulonglong)
                             (*(longlong *)(param_1 + 0x40) * 0x208 + *(longlong *)(param_1 + 0x38))
                    );
          }
        }
      }
      uVar11 = *(ulonglong *)(param_1 + 0x38);
      if (uVar11 < *(longlong *)(param_1 + 0x40) * 0x208 + uVar11) {
        do {
          if (*(int *)(uVar11 + 0x40) - 5U < 2) {
            uVar4 = htonl(*(u_long *)(param_1 + 0x20));
            uVar5 = uVar14;
            if (*(int *)(uVar11 + 0x60) == iVar1) {
              uVar5 = *(u_long *)(uVar11 + 0x5c);
            }
            uVar5 = htonl(uVar5);
            plVar7 = (longlong *)(*(code *)PTR_malloc_180028000)(0x60);
            if (plVar7 == (longlong *)0x0) {
              (*(code *)PTR_abort_180028010)();
              return;
            }
            *(undefined4 *)(plVar7 + 4) = 0;
            *(undefined2 *)((longlong)plVar7 + 0x24) = 0;
            plVar7[5] = CONCAT44(uVar5,CONCAT22(uStack_56,0xff8a));
            plVar7[6] = CONCAT44(uStack_4c,uVar4);
            plVar7[0xb] = 0;
            plVar7[7] = local_48;
            plVar7[8] = lStack_40;
            plVar7[9] = local_38;
            plVar7[10] = lStack_30;
            FUN_1800130e0(uVar11,plVar7);
          }
          uVar11 = uVar11 + 0x208;
        } while (uVar11 < (ulonglong)
                          (*(longlong *)(param_1 + 0x40) * 0x208 + *(longlong *)(param_1 + 0x38)));
      }
    }
  }
  return;
}



ulonglong FUN_180011240(longlong param_1,undefined4 *param_2,ulonglong param_3,u_long param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  u_short uVar6;
  uint uVar7;
  u_long uVar8;
  u_long uVar9;
  u_long uVar10;
  u_long uVar11;
  u_long uVar12;
  u_long uVar13;
  u_long uVar14;
  u_long uVar15;
  u_long uVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  undefined2 *puVar22;
  undefined2 *puVar23;
  undefined2 *puVar24;
  undefined2 uStack_46;
  
  if (param_3 == 0) {
    param_3 = 1;
  }
  else if (0xff < param_3) {
    param_3 = 0xff;
  }
  uVar21 = *(ulonglong *)(param_1 + 0x38);
  uVar19 = *(longlong *)(param_1 + 0x40) * 0x208 + uVar21;
  for (; (uVar21 < uVar19 && (*(int *)(uVar21 + 0x40) != 0)); uVar21 = uVar21 + 0x208) {
  }
  if (uVar19 <= uVar21) {
    return 0;
  }
  lVar17 = (*(code *)PTR_malloc_180028000)(param_3 * 0x50);
  if (lVar17 == 0) {
    uVar21 = (*(code *)PTR_abort_180028010)();
    return uVar21;
  }
  *(longlong *)(uVar21 + 0x48) = lVar17;
  *(ulonglong *)(uVar21 + 0x50) = param_3;
  *(undefined4 *)(uVar21 + 0x40) = 1;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(uVar21 + 0x22) = *param_2;
  *(undefined4 *)(uVar21 + 0x26) = uVar3;
  *(undefined4 *)(uVar21 + 0x2a) = uVar4;
  *(undefined4 *)(uVar21 + 0x2e) = uVar5;
  *(undefined4 *)(uVar21 + 0x32) = param_2[4];
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  *(undefined4 *)(uVar21 + 0x1c) = *(undefined4 *)(param_1 + 0x2c);
  if (*(uint *)(param_1 + 0x20) != 0) {
    uVar7 = (*(uint *)(param_1 + 0x20) >> 0x10) << 0xc;
    *(uint *)(uVar21 + 0x100) = uVar7;
    if (uVar7 < 0x1000) {
      *(undefined4 *)(uVar21 + 0x100) = 0x1000;
      goto LAB_180011354;
    }
    if (uVar7 < 0x10001) goto LAB_180011354;
  }
  *(undefined4 *)(uVar21 + 0x100) = 0x10000;
LAB_180011354:
  puVar22 = *(undefined2 **)(uVar21 + 0x48);
  if (puVar22 < puVar22 + param_3 * 0x28) {
    puVar23 = puVar22 + 0x18;
    puVar24 = puVar22 + 0x20;
    puVar20 = (undefined8 *)(puVar22 + 0x24);
    do {
      *puVar22 = 0;
      puVar20[-2] = puVar20 + -3;
      *(undefined4 *)((longlong)puVar20 + -0x46) = 0;
      *puVar20 = puVar20 + -1;
      puVar22 = puVar22 + 0x28;
      *(undefined4 *)((longlong)puVar20 + -0x22) = 0;
      *(undefined2 **)puVar23 = puVar23;
      puVar23 = puVar23 + 0x28;
      *(undefined2 **)puVar24 = puVar24;
      puVar24 = puVar24 + 0x28;
      *(undefined8 *)((longlong)puVar20 + -0x42) = 0;
      *(undefined8 *)((longlong)puVar20 + -0x3a) = 0;
      *(undefined8 *)((longlong)puVar20 + -0x32) = 0;
      *(undefined8 *)((longlong)puVar20 + -0x2a) = 0;
      puVar20 = puVar20 + 10;
    } while (puVar22 < (undefined2 *)(*(longlong *)(uVar21 + 0x48) + param_3 * 0x50));
  }
  uVar6 = htons(*(u_short *)(uVar21 + 0x1a));
  uVar1 = *(undefined1 *)(uVar21 + 0x21);
  uVar2 = *(undefined1 *)(uVar21 + 0x20);
  uVar8 = htonl(*(u_long *)(uVar21 + 0xfc));
  uVar9 = htonl(*(u_long *)(uVar21 + 0x100));
  uVar10 = htonl((u_long)param_3);
  uVar11 = htonl(*(u_long *)(param_1 + 0x1c));
  uVar12 = htonl(*(u_long *)(param_1 + 0x20));
  uVar13 = htonl(*(u_long *)(uVar21 + 0xd0));
  uVar14 = htonl(*(u_long *)(uVar21 + 200));
  uVar15 = htonl(*(u_long *)(uVar21 + 0xcc));
  uVar3 = *(undefined4 *)(uVar21 + 0x1c);
  uVar16 = htonl(param_4);
  plVar18 = (longlong *)(*(code *)PTR_malloc_180028000)(0x60);
  if (plVar18 != (longlong *)0x0) {
    *(undefined4 *)(plVar18 + 4) = 0;
    plVar18[5] = CONCAT17(uVar2,CONCAT16(uVar1,CONCAT24(uVar6,CONCAT22(uStack_46,0xff82))));
    plVar18[6] = CONCAT44(uVar9,uVar8);
    *(undefined2 *)((longlong)plVar18 + 0x24) = 0;
    plVar18[0xb] = 0;
    plVar18[7] = CONCAT44(uVar11,uVar10);
    plVar18[8] = CONCAT44(uVar13,uVar12);
    plVar18[9] = CONCAT44(uVar15,uVar14);
    plVar18[10] = CONCAT44(uVar16,uVar3);
    FUN_1800130e0(uVar21,plVar18);
    return uVar21;
  }
  uVar21 = (*(code *)PTR_abort_180028010)();
  return uVar21;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

SOCKET * FUN_1800114d0(undefined4 *param_1,ulonglong param_2,SOCKET param_3,undefined4 param_4,
                      undefined4 param_5)

{
  SOCKET *pSVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  u_short uVar6;
  int iVar7;
  DWORD DVar8;
  SOCKET *pSVar9;
  void *_Dst;
  SOCKET SVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStackY_a8 [32];
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68 [12];
  undefined8 uStack_5c;
  undefined4 local_54;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_1800280c0 ^ (ulonglong)auStackY_a8;
  if (0xffff < param_2) {
    return (SOCKET *)0x0;
  }
  pSVar9 = (SOCKET *)(*(code *)PTR_malloc_180028000)(0x2b30);
  if (pSVar9 == (SOCKET *)0x0) {
    pSVar9 = (SOCKET *)(*(code *)PTR_abort_180028010)();
    return pSVar9;
  }
  memset(pSVar9,0,0x2b30);
  _Dst = (void *)(*(code *)PTR_malloc_180028000)(param_2 * 0x208);
  if (_Dst == (void *)0x0) {
    pSVar9 = (SOCKET *)(*(code *)PTR_abort_180028010)();
    return pSVar9;
  }
  pSVar9[7] = (SOCKET)_Dst;
  memset(_Dst,0,param_2 * 0x208);
  SVar10 = socket(0x17,2,0);
  *pSVar9 = SVar10;
  if (SVar10 != 0xffffffffffffffff) {
    local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
    setsockopt(SVar10,0x29,0x1b,(char *)&local_78,4);
  }
  SVar10 = *pSVar9;
  if (SVar10 == 0xffffffffffffffff) {
LAB_180011984:
    if (*pSVar9 != 0xffffffffffffffff) {
      closesocket(*pSVar9);
    }
    (*(code *)PTR_free_180028008)(pSVar9[7]);
    (*(code *)PTR_free_180028008)(pSVar9);
    pSVar9 = (SOCKET *)0x0;
  }
  else {
    if (param_1 != (undefined4 *)0x0) {
      local_54 = 0;
      local_68[4] = '\0';
      local_68[5] = '\0';
      local_68[6] = '\0';
      local_68[7] = '\0';
      local_68[8] = '\0';
      local_68[9] = '\0';
      local_68[10] = '\0';
      local_68[0xb] = '\0';
      uStack_5c = 0;
      local_68._0_2_ = 0x17;
      local_68._2_2_ = htons(*(u_short *)(param_1 + 4));
      uStack_5c = *(undefined8 *)(param_1 + 1);
      local_54 = param_1[3];
      local_50 = (uint)*(ushort *)((longlong)param_1 + 0x12);
      local_68._8_4_ = *param_1;
      iVar7 = bind(SVar10,(sockaddr *)local_68,0x1c);
      if (iVar7 == -1) goto LAB_180011984;
    }
    local_78._0_4_ = 1;
    ioctlsocket(*pSVar9,-0x7ffb9982,(u_long *)&local_78);
    local_78._0_4_ = 1;
    setsockopt(*pSVar9,0xffff,0x20,(char *)&local_78,4);
    local_78._0_4_ = 0x40000;
    setsockopt(*pSVar9,0xffff,0x1002,(char *)&local_78,4);
    local_78._0_4_ = 0x40000;
    setsockopt(*pSVar9,0xffff,0x1001,(char *)&local_78,4);
    local_78._0_4_ = 0;
    setsockopt(*pSVar9,0x29,0x1b,(char *)&local_78,4);
    if (param_1 != (undefined4 *)0x0) {
      local_78._0_4_ = 0x1c;
      iVar7 = getsockname(*pSVar9,(sockaddr *)local_68,(int *)&local_78);
      if (iVar7 == -1) {
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        uVar5 = param_1[3];
        *(undefined4 *)(pSVar9 + 1) = *param_1;
        *(undefined4 *)((longlong)pSVar9 + 0xc) = uVar3;
        *(undefined4 *)(pSVar9 + 2) = uVar4;
        *(undefined4 *)((longlong)pSVar9 + 0x14) = uVar5;
        *(undefined4 *)(pSVar9 + 3) = param_1[4];
      }
      else {
        *(undefined4 *)(pSVar9 + 1) = local_68._8_4_;
        *(undefined4 *)((longlong)pSVar9 + 0xc) = (undefined4)uStack_5c;
        *(undefined4 *)(pSVar9 + 2) = uStack_5c._4_4_;
        *(undefined4 *)((longlong)pSVar9 + 0x14) = local_54;
        uVar6 = ntohs(local_68._2_2_);
        *(u_short *)(pSVar9 + 3) = uVar6;
        *(undefined2 *)((longlong)pSVar9 + 0x1a) = (undefined2)local_50;
      }
    }
    if (0xfe < param_3 - 1) {
      param_3 = 0xff;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = pSVar9;
    *(int *)((longlong)pSVar9 + 0x2c) = SUB164(auVar2 / ZEXT816(0xffffffff),0) + (int)pSVar9;
    DVar8 = timeGetTime();
    *(int *)((longlong)pSVar9 + 0x2c) = *(int *)((longlong)pSVar9 + 0x2c) + DVar8;
    *(uint *)((longlong)pSVar9 + 0x2c) =
         *(uint *)((longlong)pSVar9 + 0x2c) >> 0x10 | *(uint *)((longlong)pSVar9 + 0x2c) << 0x10;
    *(undefined4 *)(pSVar9 + 4) = param_5;
    pSVar1 = pSVar9 + 0xb;
    pSVar9[8] = param_2;
    pSVar9[9] = param_3;
    *(undefined4 *)((longlong)pSVar9 + 0x1c) = param_4;
    *(undefined4 *)((longlong)pSVar9 + 0x24) = 0;
    *(undefined4 *)(pSVar9 + 6) = 0;
    *(undefined4 *)(pSVar9 + 5) = 0x570;
    pSVar9[0xd0] = 0;
    pSVar9[0x153] = 0;
    pSVar9[0x154] = 0;
    *(undefined2 *)(pSVar9 + 0x55b) = 0;
    pSVar9[0x55c] = 0;
    pSVar9[0x559] = (SOCKET)(undefined *)0x0;
    pSVar9[0x55a] = 0;
    *pSVar1 = (SOCKET)pSVar1;
    pSVar9[0xc] = (SOCKET)pSVar1;
    plVar12 = (longlong *)pSVar9[7];
    pSVar9[0x55d] = 0;
    pSVar9[0x55e] = 0;
    pSVar9[0x55f] = 0;
    pSVar9[0x561] = 0;
    pSVar9[0x562] = 0;
    pSVar9[0x563] = 0xffff;
    pSVar9[0x564] = 0x2000000;
    pSVar9[0x565] = 0x2000000;
    pSVar9[0x155] = 0;
    pSVar9[0x156] = 0;
    pSVar9[0x157] = 0;
    pSVar9[0x158] = 0;
    pSVar9[0x560] = 0;
    if (plVar12 < plVar12 + pSVar9[8] * 0x41) {
      plVar11 = plVar12 + 0x25;
      local_78 = plVar12 + 0x2a;
      local_70 = plVar12 + 0x2c;
      plVar15 = plVar12 + 0x22;
      plVar16 = plVar12 + 0x24;
      plVar13 = plVar12 + 0x26;
      plVar14 = plVar12 + 0x28;
      do {
        plVar11[-0x23] = (longlong)pSVar9;
        SVar10 = pSVar9[7];
        *(undefined2 *)(plVar11 + -0x21) = 0xffff;
        plVar11[-0x1e] = 0;
        *plVar15 = (longlong)plVar15;
        *(short *)((longlong)plVar11 + -0x10e) =
             (short)((longlong)((longlong)plVar12 - SVar10) / 0x208);
        plVar11[-2] = (longlong)(plVar11 + -3);
        *plVar11 = (longlong)(plVar11 + -1);
        plVar11[2] = (longlong)(plVar11 + 1);
        plVar11[4] = (longlong)(plVar11 + 3);
        plVar11[6] = (longlong)(plVar11 + 5);
        plVar11[8] = (longlong)(plVar11 + 7);
        *plVar16 = (longlong)plVar16;
        *plVar13 = (longlong)plVar13;
        *plVar14 = (longlong)plVar14;
        *local_78 = (longlong)local_78;
        *local_70 = (longlong)local_70;
        FUN_180012a90(plVar12);
        plVar11 = plVar11 + 0x41;
        local_78 = local_78 + 0x41;
        local_70 = local_70 + 0x41;
        plVar12 = plVar12 + 0x41;
        plVar15 = plVar15 + 0x41;
        plVar16 = plVar16 + 0x41;
        plVar13 = plVar13 + 0x41;
        plVar14 = plVar14 + 0x41;
      } while (plVar12 < (longlong *)(pSVar9[8] * 0x208 + pSVar9[7]));
    }
  }
  return pSVar9;
}



void FUN_1800119b0(SOCKET *param_1)

{
  longlong *plVar1;
  
  if (param_1 != (SOCKET *)0x0) {
    if (*param_1 != 0xffffffffffffffff) {
      closesocket(*param_1);
    }
    plVar1 = (longlong *)param_1[7];
    if (plVar1 < plVar1 + param_1[8] * 0x41) {
      do {
        if ((int)plVar1[8] - 5U < 2) {
          if ((int)plVar1[0xb] != 0) {
            *(longlong *)(plVar1[2] + 0x2b10) = *(longlong *)(plVar1[2] + 0x2b10) + -1;
          }
          *(longlong *)(plVar1[2] + 0x2b08) = *(longlong *)(plVar1[2] + 0x2b08) + -1;
        }
        *(undefined2 *)(plVar1 + 3) = 0xffff;
        *(undefined4 *)(plVar1 + 8) = 0;
        plVar1[0xb] = 0;
        plVar1[0xc] = 0;
        *(undefined4 *)(plVar1 + 0xd) = 0;
        plVar1[0xe] = 0;
        *(undefined4 *)(plVar1 + 0xf) = 0;
        plVar1[0x10] = 0;
        plVar1[0x11] = 0;
        plVar1[0x12] = 0;
        plVar1[0x13] = 0;
        plVar1[0x14] = 0;
        plVar1[0x15] = 0;
        plVar1[0x16] = 0;
        *(undefined4 *)(plVar1 + 0x17) = 0x20;
        *(undefined8 *)((longlong)plVar1 + 0xbc) = 0x20;
        *(undefined4 *)((longlong)plVar1 + 0xc4) = 0;
        *(undefined4 *)(plVar1 + 0x19) = 2;
        *(undefined4 *)((longlong)plVar1 + 0xcc) = 2;
        *(undefined4 *)(plVar1 + 0x1a) = 5000;
        *(undefined4 *)((longlong)plVar1 + 0xd4) = 500;
        *(undefined4 *)(plVar1 + 0x1b) = 0x20;
        *(undefined4 *)((longlong)plVar1 + 0xdc) = 5000;
        *(undefined4 *)(plVar1 + 0x1c) = 30000;
        *(undefined4 *)((longlong)plVar1 + 0xe4) = 500;
        plVar1[0x1d] = 500;
        *(undefined4 *)(plVar1 + 0x1e) = 0;
        *(undefined8 *)((longlong)plVar1 + 0xf4) = 500;
        *(undefined4 *)((longlong)plVar1 + 0xfc) = *(undefined4 *)(plVar1[2] + 0x28);
        plVar1[0x20] = 0x10000;
        *(undefined2 *)(plVar1 + 0x21) = 0;
        *(undefined4 *)((longlong)plVar1 + 0x174) = 0;
        *(undefined4 *)(plVar1 + 0x3f) = 0;
        plVar1[0x40] = 0;
        plVar1[0x2f] = 0;
        plVar1[0x30] = 0;
        plVar1[0x31] = 0;
        plVar1[0x32] = 0;
        plVar1[0x33] = 0;
        plVar1[0x34] = 0;
        plVar1[0x35] = 0;
        plVar1[0x36] = 0;
        plVar1[0x37] = 0;
        plVar1[0x38] = 0;
        plVar1[0x39] = 0;
        plVar1[0x3a] = 0;
        plVar1[0x3b] = 0;
        plVar1[0x3c] = 0;
        plVar1[0x3d] = 0;
        plVar1[0x3e] = 0;
        FUN_180012c80(plVar1);
        plVar1 = plVar1 + 0x41;
      } while (plVar1 < (longlong *)(param_1[8] * 0x208 + param_1[7]));
    }
    if ((param_1[0x155] != 0) && ((code *)param_1[0x158] != (code *)0x0)) {
      (*(code *)param_1[0x158])();
    }
    (*(code *)PTR_free_180028008)(param_1[7]);
    (*(code *)PTR_free_180028008)(param_1);
  }
  return;
}



void FUN_180011bd0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180015d90();
  *(int *)(param_1 + 10) = (int)uVar1;
  FUN_180014f40(param_1,(int *)0x0,0);
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_180011c00(SOCKET *param_1,int *param_2,int param_3)

{
  SOCKET *pSVar1;
  SOCKET SVar2;
  undefined1 auVar3 [16];
  u_short uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStackY_508 [32];
  int local_4b0;
  int local_4ac;
  timeval local_4a8;
  ulonglong local_4a0;
  SOCKET *local_498;
  u_short local_48e;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined2 local_478;
  fd_set local_468;
  fd_set local_258;
  ulonglong local_48;
  
  local_48 = DAT_1800280c0 ^ (ulonglong)auStackY_508;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    uVar7 = FUN_1800134b0((longlong)param_1,param_2);
    if ((int)uVar7 == -1) {
      return 0xffffffff;
    }
    if ((int)uVar7 == 1) {
      return 1;
    }
  }
  uVar8 = FUN_180015d90();
  local_4ac = param_3 + (int)uVar8;
  do {
    iVar11 = (int)uVar8;
    *(int *)(param_1 + 10) = iVar11;
    uVar5 = iVar11 - *(int *)((longlong)param_1 + 0x24);
    uVar9 = *(int *)((longlong)param_1 + 0x24) - iVar11;
    if (uVar5 < 86400000) {
      uVar9 = uVar5;
    }
    if (999 < uVar9) {
      FUN_180010e80((longlong)param_1);
    }
    uVar7 = FUN_180014f40(param_1,param_2,1);
    if ((int)uVar7 == -1) {
      return 0xffffffff;
    }
    if ((int)uVar7 == 1) {
      return 1;
    }
    pSVar1 = param_1 + 0x559;
    iVar11 = 0;
    if (pSVar1 == (SOCKET *)0x0) {
      iVar11 = 0;
    }
    while( true ) {
      local_4a0 = (ulonglong)(uint)param_1[5];
      local_498 = param_1 + 0x159;
      iVar6 = WSARecvFrom(*param_1,&local_4a0,1,&local_4b0);
      if (iVar6 == -1) break;
      if (pSVar1 != (SOCKET *)0x0) {
        *(undefined4 *)pSVar1 = local_488;
        *(undefined4 *)((longlong)param_1 + 0x2acc) = uStack_484;
        *(undefined4 *)(param_1 + 0x55a) = uStack_480;
        *(undefined4 *)((longlong)param_1 + 0x2ad4) = uStack_47c;
        uVar4 = ntohs(local_48e);
        *(u_short *)(param_1 + 0x55b) = uVar4;
        *(undefined2 *)((longlong)param_1 + 0x2ada) = local_478;
      }
      if (local_4b0 != -2) {
        if (local_4b0 < 0) {
          return 0xffffffff;
        }
        if (local_4b0 == 0) goto LAB_180011e1b;
        *(int *)(param_1 + 0x55f) = (int)param_1[0x55f] + local_4b0;
        *(int *)((longlong)param_1 + 0x2afc) = *(int *)((longlong)param_1 + 0x2afc) + 1;
        param_1[0x55c] = (SOCKET)(param_1 + 0x159);
        param_1[0x55d] = (longlong)local_4b0;
        if ((code *)param_1[0x560] != (code *)0x0) {
          iVar6 = (*(code *)param_1[0x560])(param_1,param_2);
          if (iVar6 == -1) {
            return 0xffffffff;
          }
          if (iVar6 == 1) {
            if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
              return 1;
            }
            goto LAB_180011deb;
          }
        }
        uVar7 = FUN_180013dd0((longlong)param_1,param_2);
        if ((int)uVar7 == -1) {
          return 0xffffffff;
        }
        if ((int)uVar7 == 1) {
          return 1;
        }
      }
LAB_180011deb:
      iVar11 = iVar11 + 1;
      if (0xff < iVar11) {
        return 0xffffffff;
      }
    }
    iVar11 = WSAGetLastError();
    if ((iVar11 != 0x2733) && (iVar11 != 0x2746)) {
      return 0xffffffff;
    }
LAB_180011e1b:
    uVar7 = FUN_180014f40(param_1,param_2,1);
    if ((int)uVar7 == -1) {
      return 0xffffffff;
    }
    if ((int)uVar7 == 1) {
      return 1;
    }
    if (param_2 != (int *)0x0) {
      uVar7 = FUN_1800134b0((longlong)param_1,param_2);
      if ((int)uVar7 == -1) {
        return 0xffffffff;
      }
      if ((int)uVar7 == 1) {
        return 1;
      }
    }
    iVar11 = local_4ac;
    if ((uint)((int)param_1[10] - local_4ac) < 86400000) {
      return 0;
    }
    uVar8 = FUN_180015d90();
    iVar6 = (int)uVar8;
    *(int *)(param_1 + 10) = iVar6;
    uVar9 = iVar6 - iVar11;
    if (uVar9 < 86400000) {
      return 0;
    }
    SVar2 = *param_1;
    uVar5 = iVar11 - iVar6;
    local_468.fd_count = 1;
    if (uVar5 < 86400000) {
      uVar9 = uVar5;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT44(0,uVar9);
    lVar10 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar3,8);
    local_4a8.tv_sec = (long)((CONCAT44(0,uVar9) - lVar10 >> 1) + lVar10 >> 9);
    local_4a8.tv_usec = (uVar9 + local_4a8.tv_sec * -1000) * 1000;
    local_258.fd_count = 0;
    local_468.fd_array[0] = SVar2;
    iVar11 = select((int)SVar2 + 1,&local_468,&local_258,(fd_set *)0x0,&local_4a8);
    if (iVar11 < 0) {
      return 0xffffffff;
    }
    if (iVar11 == 0) {
LAB_180011f32:
      uVar8 = FUN_180015d90();
      *(int *)(param_1 + 10) = (int)uVar8;
      return 0;
    }
    __WSAFDIsSet(SVar2,&local_258);
    iVar11 = __WSAFDIsSet(SVar2,&local_468);
    if (iVar11 == 0) goto LAB_180011f32;
    uVar8 = FUN_180015d90();
  } while( true );
}



undefined8 FUN_180011f70(undefined8 param_1,char param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  longlong local_res20;
  ulonglong local_38 [6];
  
  local_res20 = 0;
  local_38[1] = 0;
  uVar6 = 0;
  if (param_2 != '\0') {
    uVar6 = 4;
  }
  local_38[0] = (ulonglong)uVar6;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  iVar7 = getaddrinfo(0,0,local_38,&local_res20);
  lVar5 = local_res20;
  if (iVar7 == 0) {
    for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
      lVar1 = *(longlong *)(lVar5 + 0x20);
      if (lVar1 != 0) {
        iVar7 = *(int *)(lVar5 + 4);
        if (iVar7 == 2) {
LAB_180012047:
          iVar7 = *(int *)(lVar1 + 4);
          if (iVar7 == 0) {
            *param_3 = 0;
            param_3[1] = 0;
            param_3[2] = 0;
            param_3[3] = 0;
            *(undefined2 *)((longlong)param_3 + 0x12) = 0;
            freeaddrinfo(local_res20);
            return 0;
          }
          if (iVar7 == -1) {
            *param_3 = 0xffffffff;
            param_3[1] = 0xffffffff;
            param_3[2] = 0xffffffff;
            param_3[3] = 0xffffffff;
            *(undefined2 *)((longlong)param_3 + 0x12) = 0;
            freeaddrinfo(local_res20);
            return 0;
          }
          *param_3 = 0;
          param_3[1] = 0;
          param_3[2] = 0xffff0000;
          param_3[3] = 0;
          *(char *)((longlong)param_3 + 0xd) = (char)((uint)iVar7 >> 8);
          *(char *)(param_3 + 3) = (char)iVar7;
          *(char *)((longlong)param_3 + 0xe) = (char)((uint)iVar7 >> 0x10);
          *(undefined2 *)((longlong)param_3 + 10) = 0xffff;
          *(char *)((longlong)param_3 + 0xf) = (char)((uint)iVar7 >> 0x18);
          *(undefined2 *)((longlong)param_3 + 0x12) = 0;
          freeaddrinfo(local_res20);
          return 0;
        }
        if (iVar7 == 0) {
          if (*(longlong *)(lVar5 + 0x10) == 0x10) goto LAB_180012047;
          bVar8 = *(longlong *)(lVar5 + 0x10) == 0x1c;
        }
        else {
          bVar8 = iVar7 == 0x17;
        }
        if (bVar8) {
          uVar2 = *(undefined4 *)(lVar1 + 0xc);
          uVar3 = *(undefined4 *)(lVar1 + 0x10);
          uVar4 = *(undefined4 *)(lVar1 + 0x14);
          *param_3 = *(undefined4 *)(lVar1 + 8);
          param_3[1] = uVar2;
          param_3[2] = uVar3;
          param_3[3] = uVar4;
          *(undefined2 *)((longlong)param_3 + 0x12) =
               *(undefined2 *)(*(longlong *)(lVar5 + 0x20) + 0x18);
          freeaddrinfo(local_res20);
          return 0;
        }
      }
    }
  }
  freeaddrinfo(local_res20);
  return 0xffffffff;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_1800120e0(void)

{
  int iVar1;
  undefined1 auStack_1d8 [32];
  WSADATA local_1b8;
  ulonglong local_18;
  
  local_18 = DAT_1800280c0 ^ (ulonglong)auStack_1d8;
  iVar1 = WSAStartup(0x101,&local_1b8);
  if (iVar1 == 0) {
    if (((char)local_1b8.wVersion == '\x01') && ((char)(local_1b8.wVersion >> 8) == '\x01')) {
      timeBeginPeriod(1);
      return 0;
    }
    WSACleanup();
  }
  return 0xffffffff;
}



void FUN_180012170(longlong *param_1,u_long param_2)

{
  undefined8 *puVar1;
  u_long uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  undefined2 uStack_36;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  if ((2 < (int)param_1[8] - 7U) && ((int)param_1[8] != 0)) {
    FUN_180012c80(param_1);
    uVar2 = htonl(param_2);
    uVar5 = 0x84;
    if (1 < (int)param_1[8] - 5U) {
      uVar5 = 0x44;
    }
    plVar3 = (longlong *)(*(code *)PTR_malloc_180028000)();
    if (plVar3 == (longlong *)0x0) {
      (*(code *)PTR_abort_180028010)();
      return;
    }
    *(undefined4 *)(plVar3 + 4) = 0;
    plVar3[5] = CONCAT44(uVar2,CONCAT22(uStack_36,CONCAT11(0xff,uVar5)));
    plVar3[6] = lStack_30;
    *(undefined2 *)((longlong)plVar3 + 0x24) = 0;
    plVar3[0xb] = 0;
    plVar3[7] = local_28;
    plVar3[8] = lStack_20;
    plVar3[9] = local_18;
    plVar3[10] = lStack_10;
    FUN_1800130e0((longlong)param_1,plVar3);
    if (1 < (int)param_1[8] - 5U) {
      puVar1 = (undefined8 *)param_1[2];
      uVar4 = FUN_180015d90();
      *(int *)(puVar1 + 10) = (int)uVar4;
      FUN_180014f40(puVar1,(int *)0x0,0);
      FUN_180012a90(param_1);
      return;
    }
    FUN_1800125e0((longlong)param_1);
    *(undefined4 *)(param_1 + 8) = 7;
  }
  return;
}



void FUN_180012270(longlong *param_1,longlong param_2)

{
  short sVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  plVar2 = *(longlong **)(param_2 + 0x30);
  plVar5 = plVar2;
  if (plVar2 != (longlong *)(param_2 + 0x30)) {
    do {
      if (((int)plVar5[9] != 0) ||
         (sVar1 = (short)plVar5[2], sVar1 != (short)(*(short *)(param_2 + 0x26) + 1))) break;
      *(short *)(param_2 + 0x26) = sVar1;
      if (*(int *)((longlong)plVar5 + 0x44) != 0) {
        *(short *)(param_2 + 0x26) = sVar1 + -1 + (short)*(int *)((longlong)plVar5 + 0x44);
      }
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != (longlong *)(param_2 + 0x30));
    if (plVar5 != plVar2) {
      *(undefined2 *)(param_2 + 0x28) = 0;
      plVar5 = (longlong *)plVar5[1];
      *(longlong *)plVar2[1] = *plVar5;
      *(longlong *)(*plVar5 + 8) = plVar2[1];
      plVar2[1] = param_1[0x2d];
      *plVar5 = (longlong)(param_1 + 0x2c);
      *(longlong **)plVar2[1] = plVar2;
      param_1[0x2d] = (longlong)plVar5;
      if ((int)param_1[0x2e] == 0) {
        lVar3 = param_1[2];
        puVar4 = *(undefined8 **)(lVar3 + 0x60);
        param_1[1] = (longlong)puVar4;
        *param_1 = lVar3 + 0x58;
        *puVar4 = param_1;
        *(longlong **)(lVar3 + 0x60) = param_1;
        *(undefined4 *)(param_1 + 0x2e) = 1;
      }
      if (*(longlong **)(param_2 + 0x40) != (longlong *)(param_2 + 0x40)) {
        FUN_180012350(param_1,param_2);
        return;
      }
    }
  }
  return;
}



void FUN_180012350(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ushort uVar9;
  longlong *plVar10;
  
  plVar7 = *(longlong **)(param_2 + 0x40);
  plVar1 = (longlong *)(param_2 + 0x40);
  plVar8 = plVar7;
  plVar10 = plVar7;
  if (plVar7 != plVar1) {
    do {
      if ((*(byte *)((longlong)plVar7 + 0x14) & 0xf) != 9) {
        uVar2 = *(ushort *)(plVar7 + 2);
        uVar3 = *(ushort *)(param_2 + 0x26);
        if (uVar2 == uVar3) {
          if ((int)plVar7[9] == 0) {
            *(undefined2 *)(param_2 + 0x28) = *(undefined2 *)((longlong)plVar7 + 0x12);
            goto LAB_1800124ea;
          }
          if (plVar10 == plVar7) {
            if (plVar8 != plVar7) {
              plVar8 = (longlong *)plVar7[1];
            }
          }
          else {
            plVar8 = (longlong *)plVar7[1];
            *(longlong *)plVar10[1] = *plVar8;
            *(longlong *)(*plVar8 + 8) = plVar10[1];
            plVar10[1] = param_1[0x2d];
            *plVar8 = (longlong)(param_1 + 0x2c);
            *(longlong **)plVar10[1] = plVar10;
            param_1[0x2d] = (longlong)plVar8;
            plVar8 = plVar7;
            if ((int)param_1[0x2e] == 0) {
              lVar5 = param_1[2];
              puVar6 = *(undefined8 **)(lVar5 + 0x60);
              param_1[1] = (longlong)puVar6;
              *param_1 = lVar5 + 0x58;
              *puVar6 = param_1;
              *(longlong **)(lVar5 + 0x60) = param_1;
              *(undefined4 *)(param_1 + 0x2e) = 1;
            }
          }
        }
        else {
          uVar9 = (uVar2 >> 0xc) + 0x10;
          if (uVar3 <= uVar2) {
            uVar9 = uVar2 >> 0xc;
          }
          if ((uVar3 >> 0xc <= uVar9) && (uVar9 < (ushort)((uVar3 >> 0xc) + 7))) break;
          plVar8 = (longlong *)*plVar7;
          if (plVar10 != plVar7) {
            plVar4 = (longlong *)plVar7[1];
            *(longlong *)plVar10[1] = *plVar4;
            *(longlong *)(*plVar4 + 8) = plVar10[1];
            plVar10[1] = param_1[0x2d];
            *plVar4 = (longlong)(param_1 + 0x2c);
            *(longlong **)plVar10[1] = plVar10;
            param_1[0x2d] = (longlong)plVar4;
            if ((int)param_1[0x2e] == 0) {
              lVar5 = param_1[2];
              puVar6 = *(undefined8 **)(lVar5 + 0x60);
              param_1[1] = (longlong)puVar6;
              *param_1 = lVar5 + 0x58;
              *puVar6 = param_1;
              *(longlong **)(lVar5 + 0x60) = param_1;
              *(undefined4 *)(param_1 + 0x2e) = 1;
            }
          }
        }
        plVar10 = (longlong *)*plVar7;
      }
LAB_1800124ea:
      plVar7 = (longlong *)*plVar7;
    } while (plVar7 != plVar1);
    if (plVar10 != plVar7) {
      plVar8 = (longlong *)plVar7[1];
      *(longlong *)plVar10[1] = *plVar8;
      *(longlong *)(*plVar8 + 8) = plVar10[1];
      plVar10[1] = param_1[0x2d];
      *plVar8 = (longlong)(param_1 + 0x2c);
      *(longlong **)plVar10[1] = plVar10;
      param_1[0x2d] = (longlong)plVar8;
      plVar8 = plVar7;
      if ((int)param_1[0x2e] == 0) {
        lVar5 = param_1[2];
        puVar6 = *(undefined8 **)(lVar5 + 0x60);
        param_1[1] = (longlong)puVar6;
        *param_1 = lVar5 + 0x58;
        *puVar6 = param_1;
        *(longlong **)(lVar5 + 0x60) = param_1;
        *(undefined4 *)(param_1 + 0x2e) = 1;
      }
    }
  }
  plVar1 = (longlong *)*plVar1;
  while (plVar1 != plVar8) {
    plVar10 = (longlong *)*plVar1;
    *(longlong **)plVar1[1] = plVar10;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    plVar7 = (longlong *)plVar1[0xb];
    if ((plVar7 != (longlong *)0x0) && (*plVar7 = *plVar7 + -1, *(longlong *)plVar1[0xb] == 0)) {
      (*(code *)PTR_FUN_180028020)();
    }
    if (plVar1[10] != 0) {
      (*(code *)PTR_free_180028008)();
    }
    (*(code *)PTR_free_180028008)(plVar1);
    plVar1 = plVar10;
  }
  return;
}



void FUN_1800125e0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x40) - 5U < 2) {
    if (*(int *)(param_1 + 0x58) != 0) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x2b10);
      *plVar1 = *plVar1 + -1;
    }
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x2b08);
    *plVar1 = *plVar1 + -1;
  }
  return;
}



longlong * FUN_180012610(longlong param_1,undefined8 *param_2,uint param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  ushort uVar5;
  longlong *plVar6;
  ushort uVar7;
  
  if ((ulonglong)*(byte *)((longlong)param_2 + 1) < *(ulonglong *)(param_1 + 0x50)) {
    uVar7 = *(ushort *)((longlong)param_2 + 2) >> 0xc;
    uVar1 = *(ushort *)
             (*(longlong *)(param_1 + 0x48) + 0x26 +
             (ulonglong)*(byte *)((longlong)param_2 + 1) * 0x50);
    uVar3 = uVar1 >> 0xc;
    uVar5 = uVar7 + 0x10;
    if (uVar1 <= *(ushort *)((longlong)param_2 + 2)) {
      uVar5 = uVar7;
    }
    if (((ushort)(uVar3 + 7) <= uVar5) && (uVar5 <= (ushort)(uVar3 + 8))) {
      return (longlong *)0x0;
    }
  }
  plVar6 = (longlong *)(*(code *)PTR_malloc_180028000)(0x48);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)(*(code *)PTR_abort_180028010)();
    return plVar6;
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 8;
  *(uint *)(plVar6 + 2) = param_3 & 0xffff;
  uVar4 = param_2[1];
  *(undefined8 *)((longlong)plVar6 + 0x14) = *param_2;
  *(undefined8 *)((longlong)plVar6 + 0x1c) = uVar4;
  uVar4 = param_2[3];
  *(undefined8 *)((longlong)plVar6 + 0x24) = param_2[2];
  *(undefined8 *)((longlong)plVar6 + 0x2c) = uVar4;
  uVar4 = param_2[5];
  *(undefined8 *)((longlong)plVar6 + 0x34) = param_2[4];
  *(undefined8 *)((longlong)plVar6 + 0x3c) = uVar4;
  puVar2 = *(undefined8 **)(param_1 + 0x118);
  plVar6[1] = (longlong)puVar2;
  *plVar6 = param_1 + 0x110;
  *puVar2 = plVar6;
  *(longlong **)(param_1 + 0x118) = plVar6;
  return plVar6;
}



longlong *
FUN_1800126f0(longlong *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,uint param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  u_short uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  void *_Dst;
  byte bVar13;
  ushort uVar14;
  ushort uVar15;
  longlong lVar16;
  
  uVar14 = 0;
  uVar9 = 0;
  lVar16 = (ulonglong)param_2[1] * 0x50 + param_1[9];
  if ((int)param_1[8] == 6) goto LAB_1800127a5;
  if ((*param_2 & 0xf) != 9) {
    uVar14 = *(ushort *)(param_2 + 2);
    uVar15 = *(ushort *)(lVar16 + 0x26) >> 0xc;
    uVar1 = (uVar14 >> 0xc) + 0x10;
    if (*(ushort *)(lVar16 + 0x26) <= uVar14) {
      uVar1 = uVar14 >> 0xc;
    }
    if ((uVar1 < uVar15) || ((ushort)(uVar15 + 7) <= uVar1)) goto LAB_1800127a5;
  }
  bVar13 = *param_2 & 0xf;
  if (bVar13 == 6) {
LAB_1800128a3:
    uVar1 = *(ushort *)(lVar16 + 0x26);
    if (uVar14 == uVar1) {
LAB_1800127a5:
      if (param_6 != 0) {
        return (longlong *)0x0;
      }
      return (longlong *)&DAT_180029000;
    }
    for (plVar12 = *(longlong **)(lVar16 + 0x38); plVar12 != (longlong *)(lVar16 + 0x30);
        plVar12 = (longlong *)plVar12[1]) {
      uVar15 = *(ushort *)(plVar12 + 2);
      if (uVar14 < uVar1) {
        if (uVar1 <= uVar15) break;
LAB_1800128d8:
        if (uVar15 <= uVar14) {
          if (uVar14 <= uVar15) goto LAB_1800127a5;
          break;
        }
      }
      else if (uVar1 <= uVar15) goto LAB_1800128d8;
    }
  }
  else if (bVar13 == 7) {
LAB_1800127db:
    uVar9 = ntohs(*(u_short *)(param_2 + 4));
    uVar1 = *(ushort *)(lVar16 + 0x26);
    if ((uVar14 == uVar1) && (uVar9 <= *(ushort *)(lVar16 + 0x28))) goto LAB_1800127a5;
    plVar12 = *(longlong **)(lVar16 + 0x48);
    if (plVar12 != (longlong *)(lVar16 + 0x40)) {
      do {
        if ((*param_2 & 0xf) != 9) {
          uVar15 = *(ushort *)(plVar12 + 2);
          if (uVar14 < uVar1) {
            if (uVar1 <= uVar15) break;
          }
          else if (uVar15 < uVar1) goto LAB_18001283a;
          if (uVar15 < uVar14) break;
          if ((uVar15 <= uVar14) && (*(ushort *)((longlong)plVar12 + 0x12) <= uVar9)) {
            if (uVar9 <= *(ushort *)((longlong)plVar12 + 0x12)) goto LAB_1800127a5;
            break;
          }
        }
LAB_18001283a:
        plVar12 = (longlong *)plVar12[1];
      } while (plVar12 != (longlong *)(lVar16 + 0x40));
    }
  }
  else {
    if (bVar13 == 8) goto LAB_1800128a3;
    if (bVar13 != 9) {
      if (bVar13 != 0xc) goto LAB_1800127a5;
      goto LAB_1800127db;
    }
    plVar12 = (longlong *)(lVar16 + 0x40);
  }
  if (((ulonglong)param_1[0x40] < *(ulonglong *)(param_1[2] + 0x2b28)) &&
     (plVar10 = (longlong *)(*(code *)PTR_FUN_180028018)(param_3,param_4,param_5),
     plVar10 != (longlong *)0x0)) {
    plVar11 = (longlong *)(*(code *)PTR_malloc_180028000)(0x60);
    if (plVar11 == (longlong *)0x0) {
      plVar12 = (longlong *)(*(code *)PTR_abort_180028010)();
      return plVar12;
    }
    *(undefined2 *)(plVar11 + 2) = *(undefined2 *)(param_2 + 2);
    *(u_short *)((longlong)plVar11 + 0x12) = uVar9;
    uVar8 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)((longlong)plVar11 + 0x14) = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)plVar11 + 0x1c) = uVar8;
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    uVar5 = *(undefined4 *)(param_2 + 0x18);
    uVar6 = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)((longlong)plVar11 + 0x24) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(plVar11 + 5) = uVar4;
    *(undefined4 *)((longlong)plVar11 + 0x2c) = uVar5;
    *(undefined4 *)(plVar11 + 6) = uVar6;
    uVar4 = *(undefined4 *)(param_2 + 0x20);
    uVar5 = *(undefined4 *)(param_2 + 0x24);
    uVar6 = *(undefined4 *)(param_2 + 0x28);
    uVar7 = *(undefined4 *)(param_2 + 0x2c);
    *(uint *)((longlong)plVar11 + 0x44) = param_6;
    *(uint *)(plVar11 + 9) = param_6;
    plVar11[0xb] = (longlong)plVar10;
    plVar11[10] = 0;
    *(undefined4 *)((longlong)plVar11 + 0x34) = uVar4;
    *(undefined4 *)(plVar11 + 7) = uVar5;
    *(undefined4 *)((longlong)plVar11 + 0x3c) = uVar6;
    *(undefined4 *)(plVar11 + 8) = uVar7;
    if (param_6 == 0) {
LAB_180012984:
      *plVar10 = *plVar10 + 1;
      param_1[0x40] = param_1[0x40] + plVar10[3];
      lVar2 = *plVar12;
      puVar3 = *(undefined8 **)(lVar2 + 8);
      plVar11[1] = (longlong)puVar3;
      *plVar11 = lVar2;
      *puVar3 = plVar11;
      *(longlong **)(lVar2 + 8) = plVar11;
      if (((*param_2 & 0xf) - 6 & 0xfffffffd) != 0) {
        FUN_180012350(param_1,lVar16);
        return plVar11;
      }
      FUN_180012270(param_1,lVar16);
      return plVar11;
    }
    if (param_6 < 0x100001) {
      _Dst = (void *)(*(code *)PTR_malloc_180028000)((ulonglong)(param_6 + 0x1f >> 5) << 2);
      if (_Dst == (void *)0x0) {
        plVar12 = (longlong *)(*(code *)PTR_abort_180028010)();
        return plVar12;
      }
      plVar11[10] = (longlong)_Dst;
      if (_Dst != (void *)0x0) {
        memset(_Dst,0,(ulonglong)(param_6 + 0x1f >> 5) << 2);
        goto LAB_180012984;
      }
    }
    (*(code *)PTR_free_180028008)(plVar11);
    if (*plVar10 == 0) {
      (*(code *)PTR_FUN_180028020)(plVar10);
    }
  }
  return (longlong *)0x0;
}



void FUN_180012a00(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  while (param_2 != param_3) {
    plVar1 = (longlong *)*param_2;
    *(longlong **)param_2[1] = plVar1;
    *(longlong *)(*param_2 + 8) = param_2[1];
    plVar2 = (longlong *)param_2[0xb];
    if ((plVar2 != (longlong *)0x0) && (*plVar2 = *plVar2 + -1, *(longlong *)param_2[0xb] == 0)) {
      (*(code *)PTR_FUN_180028020)();
    }
    if (param_2[10] != 0) {
      (*(code *)PTR_free_180028008)();
    }
    (*(code *)PTR_free_180028008)(param_2);
    param_2 = plVar1;
  }
  return;
}



void FUN_180012a90(longlong *param_1)

{
  if ((int)param_1[8] - 5U < 2) {
    if ((int)param_1[0xb] != 0) {
      *(longlong *)(param_1[2] + 0x2b10) = *(longlong *)(param_1[2] + 0x2b10) + -1;
    }
    *(longlong *)(param_1[2] + 0x2b08) = *(longlong *)(param_1[2] + 0x2b08) + -1;
  }
  *(undefined2 *)(param_1 + 3) = 0xffff;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x20;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 2;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 2;
  *(undefined4 *)(param_1 + 0x1a) = 5000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 500;
  *(undefined4 *)(param_1 + 0x1b) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 5000;
  *(undefined4 *)(param_1 + 0x1c) = 30000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 500;
  param_1[0x1d] = 500;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 500;
  *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)(param_1[2] + 0x28);
  param_1[0x20] = 0x10000;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  FUN_180012c80(param_1);
  return;
}



void FUN_180012c10(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  while (plVar1 != param_1) {
    *(longlong *)plVar1[1] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    plVar2 = (longlong *)plVar1[0xb];
    if ((plVar2 != (longlong *)0x0) && (*plVar2 = *plVar2 + -1, *(longlong *)plVar1[0xb] == 0)) {
      (*(code *)PTR_FUN_180028020)();
    }
    (*(code *)PTR_free_180028008)(plVar1);
    plVar1 = (longlong *)*param_1;
  }
  return;
}



void FUN_180012c80(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((int)param_1[0x2e] != 0) {
    *(longlong *)param_1[1] = *param_1;
    *(longlong *)(*param_1 + 8) = param_1[1];
    *(undefined4 *)(param_1 + 0x2e) = 0;
  }
  plVar1 = param_1 + 0x22;
  plVar2 = (longlong *)*plVar1;
  while (plVar2 != plVar1) {
    *(longlong *)plVar2[1] = *plVar2;
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    (*(code *)PTR_free_180028008)();
    plVar2 = (longlong *)*plVar1;
  }
  FUN_180012c10(param_1 + 0x24);
  FUN_180012c10(param_1 + 0x26);
  FUN_180012c10(param_1 + 0x28);
  FUN_180012c10(param_1 + 0x2a);
  plVar1 = param_1 + 0x2c;
  FUN_180012a00(plVar1,(longlong *)*plVar1,plVar1);
  uVar5 = param_1[9];
  if ((uVar5 != 0) && (param_1[10] != 0)) {
    if (uVar5 < param_1[10] * 0x50 + uVar5) {
      puVar3 = (undefined8 *)(uVar5 + 0x40);
      uVar4 = uVar5;
      do {
        FUN_180012a00(puVar3 + -2,(longlong *)puVar3[-2],puVar3 + -2);
        FUN_180012a00(puVar3,(longlong *)*puVar3,puVar3);
        uVar4 = uVar4 + 0x50;
        uVar5 = param_1[9];
        puVar3 = puVar3 + 10;
      } while (uVar4 < param_1[10] * 0x50 + uVar5);
    }
    (*(code *)PTR_free_180028008)(uVar5);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}



undefined8 FUN_180012dd0(longlong param_1,byte param_2,longlong ******param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  u_short uVar3;
  u_short uVar4;
  uint hostlong;
  u_long uVar5;
  longlong *****ppppplVar6;
  longlong *****ppppplVar7;
  longlong *******ppppppplVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *****ppppplVar11;
  longlong lVar12;
  longlong *****ppppplVar13;
  ushort *puVar14;
  u_long netlong;
  u_long hostlong_00;
  undefined1 local_res10;
  longlong ******local_78;
  longlong ******local_70;
  undefined1 local_68;
  byte bStack_67;
  undefined2 uStack_66;
  u_short uStack_64;
  u_short uStack_62;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  
  puVar14 = (ushort *)((ulonglong)param_2 * 0x50 + *(longlong *)(param_1 + 0x48));
  if ((*(int *)(param_1 + 0x40) == 5) && ((ulonglong)param_2 < *(ulonglong *)(param_1 + 0x50))) {
    ppppplVar6 = param_3[3];
    if (ppppplVar6 <= *(longlong ******)(*(longlong *)(param_1 + 0x10) + 0x2b20)) {
      lVar12 = -0x20;
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xaa0) == 0) {
        lVar12 = -0x1c;
      }
      ppppplVar13 = (longlong *****)(lVar12 + (ulonglong)*(uint *)(param_1 + 0xfc));
      if (ppppplVar6 <= ppppplVar13) {
        uVar3 = (u_short)ppppplVar6;
        bStack_67 = param_2;
        if (((byte)*(uint *)(param_3 + 1) & 3) == 2) {
          local_68 = 0x49;
          uStack_62 = htons(uVar3);
        }
        else if (((*(uint *)(param_3 + 1) & 1) == 0) && (puVar14[1] < 0xffff)) {
          local_68 = 7;
          uStack_62 = htons(uVar3);
        }
        else {
          local_68 = 0x86;
          uStack_64 = htons(uVar3);
        }
        uVar2 = *(undefined2 *)(param_3 + 3);
        plVar10 = (longlong *)(*(code *)PTR_malloc_180028000)(0x60);
        if (plVar10 != (longlong *)0x0) {
          *(undefined2 *)((longlong)plVar10 + 0x24) = uVar2;
          *(undefined4 *)(plVar10 + 4) = 0;
          plVar10[5] = CONCAT26(uStack_62,
                                CONCAT24(uStack_64,CONCAT22(uStack_66,CONCAT11(bStack_67,local_68)))
                               );
          plVar10[6] = lStack_60;
          plVar10[0xb] = (longlong)param_3;
          plVar10[7] = local_58;
          plVar10[8] = lStack_50;
          plVar10[9] = local_48;
          plVar10[10] = lStack_40;
          *param_3 = (longlong *****)((longlong)*param_3 + 1);
          FUN_1800130e0(param_1,plVar10);
          return 0;
        }
        uVar9 = (*(code *)PTR_abort_180028010)();
        return uVar9;
      }
      hostlong = (uint)((((longlong)ppppplVar6 - 1U) + (longlong)ppppplVar13) /
                       (ulonglong)ppppplVar13);
      if (hostlong < 0x100001) {
        if ((((byte)*(undefined4 *)(param_3 + 1) & 9) == 8) && (uVar1 = puVar14[1], uVar1 < 0xffff))
        {
          local_res10 = 0xc;
        }
        else {
          uVar1 = *puVar14;
          local_res10 = 0x88;
        }
        uVar3 = htons(uVar1 + 1);
        hostlong_00 = 0;
        netlong = 0;
        local_78 = (longlong ******)&local_78;
        local_70 = (longlong ******)&local_78;
        ppppplVar6 = param_3[3];
        if (ppppplVar6 != (longlong *****)0x0) {
          ppppplVar11 = (longlong *****)0x0;
          do {
            ppppplVar7 = (longlong *****)((longlong)ppppplVar6 - (longlong)ppppplVar11);
            if (ppppplVar13 <= (longlong *****)((longlong)ppppplVar6 - (longlong)ppppplVar11)) {
              ppppplVar7 = ppppplVar13;
            }
            ppppppplVar8 = (longlong *******)(*(code *)PTR_malloc_180028000)(0x60);
            if (ppppppplVar8 == (longlong *******)0x0) {
              uVar9 = (*(code *)PTR_abort_180028010)();
              return uVar9;
            }
            *(u_long *)(ppppppplVar8 + 4) = netlong;
            *(u_short *)((longlong)ppppppplVar8 + 0x24) = (u_short)ppppplVar7;
            ppppppplVar8[0xb] = param_3;
            *(undefined1 *)(ppppppplVar8 + 5) = local_res10;
            *(u_short *)((longlong)ppppppplVar8 + 0x2c) = uVar3;
            *(byte *)((longlong)ppppppplVar8 + 0x29) = param_2;
            uVar4 = htons((u_short)ppppplVar7);
            *(u_short *)((longlong)ppppppplVar8 + 0x2e) = uVar4;
            uVar5 = htonl(hostlong);
            *(u_long *)(ppppppplVar8 + 6) = uVar5;
            uVar5 = htonl(hostlong_00);
            *(u_long *)((longlong)ppppppplVar8 + 0x34) = uVar5;
            uVar5 = htonl(*(u_long *)(param_3 + 3));
            *(u_long *)(ppppppplVar8 + 7) = uVar5;
            uVar5 = ntohl(netlong);
            *(u_long *)((longlong)ppppppplVar8 + 0x3c) = uVar5;
            netlong = netlong + (int)ppppplVar7;
            ppppppplVar8[1] = local_70;
            hostlong_00 = hostlong_00 + 1;
            *ppppppplVar8 = (longlong ******)&local_78;
            ppppplVar11 = (longlong *****)(ulonglong)netlong;
            *local_70 = (longlong *****)ppppppplVar8;
            ppppplVar6 = param_3[3];
            local_70 = (longlong ******)ppppppplVar8;
            ppppplVar13 = ppppplVar7;
          } while (ppppplVar11 < ppppplVar6);
        }
        *param_3 = (longlong *****)((longlong)*param_3 + (ulonglong)hostlong_00);
        if ((longlong *******)local_78 != &local_78) {
          do {
            *local_78[1] = (longlong ****)*local_78;
            (*local_78)[1] = (longlong ****)local_78[1];
            FUN_1800130e0(param_1,(longlong *)local_78);
          } while ((longlong *******)local_78 != &local_78);
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}



void FUN_1800130e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  u_short hostshort;
  u_short uVar3;
  longlong lVar4;
  u_short *puVar5;
  
  puVar5 = (u_short *)
           ((ulonglong)*(byte *)((longlong)param_2 + 0x29) * 0x50 + *(longlong *)(param_1 + 0x48));
  *(int *)(param_1 + 0x78) =
       *(int *)(param_1 + 0x78) +
       *(int *)(&DAT_180028030 + (ulonglong)(*(byte *)(param_2 + 5) & 0xf) * 8) +
       (uint)*(ushort *)((longlong)param_2 + 0x24);
  uVar3 = 0;
  if (*(char *)((longlong)param_2 + 0x29) == -1) {
    hostshort = *(short *)(param_1 + 0x108) + 1;
    *(u_short *)(param_1 + 0x108) = hostshort;
    *(u_short *)(param_2 + 2) = hostshort;
  }
  else {
    bVar2 = *(byte *)(param_2 + 5);
    uVar3 = 0;
    if ((char)bVar2 < '\0') {
      hostshort = *puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = hostshort;
      *(u_short *)(param_2 + 2) = hostshort;
    }
    else if ((bVar2 & 0x40) == 0) {
      if ((int)param_2[4] == 0) {
        puVar5[1] = puVar5[1] + 1;
      }
      hostshort = *puVar5;
      *(u_short *)(param_2 + 2) = hostshort;
      uVar3 = puVar5[1];
    }
    else {
      *(short *)(param_1 + 0x176) = *(short *)(param_1 + 0x176) + 1;
      *(undefined2 *)(param_2 + 2) = 0;
      hostshort = uVar3;
    }
  }
  *(u_short *)((longlong)param_2 + 0x12) = uVar3;
  *(undefined2 *)((longlong)param_2 + 0x26) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  uVar3 = htons(hostshort);
  *(u_short *)((longlong)param_2 + 0x2a) = uVar3;
  bVar2 = *(byte *)(param_2 + 5) & 0xf;
  if (bVar2 == 7) {
    uVar3 = *(u_short *)((longlong)param_2 + 0x12);
  }
  else {
    if (bVar2 != 9) goto LAB_1800131dc;
    uVar3 = *(u_short *)(param_1 + 0x176);
  }
  uVar3 = htons(uVar3);
  *(u_short *)((longlong)param_2 + 0x2c) = uVar3;
LAB_1800131dc:
  lVar4 = param_1 + 0x140;
  if (-1 < (char)*(byte *)(param_2 + 5)) {
    lVar4 = param_1 + 0x150;
  }
  puVar1 = *(undefined8 **)(lVar4 + 8);
  param_2[1] = (longlong)puVar1;
  *param_2 = lVar4;
  *puVar1 = param_2;
  *(longlong **)(lVar4 + 8) = param_2;
  return;
}



void FUN_180013220(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0x20;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0xd8) = iVar1;
  iVar1 = 5000;
  if (param_3 != 0) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0xdc) = iVar1;
  iVar1 = 30000;
  if (param_4 != 0) {
    iVar1 = param_4;
  }
  *(int *)(param_1 + 0xe0) = iVar1;
  return;
}



void FUN_180013260(undefined8 param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x40);
  if (param_3 - 5U < 2) {
    if ((iVar2 != 5) && (iVar2 != 6)) {
      if (*(int *)(param_2 + 0x58) != 0) {
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x2b10);
        *plVar1 = *plVar1 + 1;
      }
      plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x2b08);
      *plVar1 = *plVar1 + 1;
    }
  }
  else if ((iVar2 == 5) || (iVar2 == 6)) {
    if (*(int *)(param_2 + 0x58) != 0) {
      plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x2b10);
      *plVar1 = *plVar1 + -1;
    }
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x2b08);
    *plVar1 = *plVar1 + -1;
    *(int *)(param_2 + 0x40) = param_3;
    return;
  }
  *(int *)(param_2 + 0x40) = param_3;
  return;
}



undefined8 FUN_1800132d0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  lVar3 = param_2[0x28];
  plVar1 = param_2 + 0x24;
  plVar4 = (longlong *)*plVar1;
  do {
    do {
      plVar6 = plVar4;
      if (plVar6 == plVar1) {
        return 0;
      }
      iVar11 = *(int *)(param_1 + 0x50);
      plVar4 = (longlong *)*plVar6;
      iVar2 = *(int *)((longlong)plVar6 + 0x14);
      uVar9 = *(uint *)(plVar6 + 3);
      uVar7 = iVar2 - iVar11;
      if ((uint)(iVar11 - iVar2) < 86400000) {
        uVar7 = iVar11 - iVar2;
      }
    } while (uVar7 < uVar9);
    iVar8 = *(int *)((longlong)param_2 + 0x94);
    if ((iVar8 == 0) || (86399999 < (uint)(iVar2 - iVar8))) {
      *(int *)((longlong)param_2 + 0x94) = iVar2;
      iVar11 = *(int *)(param_1 + 0x50);
      uVar9 = *(uint *)(plVar6 + 3);
      iVar8 = iVar2;
    }
    if (iVar8 != 0) {
      uVar10 = iVar11 - iVar8;
      uVar7 = iVar8 - iVar11;
      if (uVar10 < 86400000) {
        uVar7 = uVar10;
      }
      if (*(uint *)(param_2 + 0x1c) <= uVar7) {
LAB_180013450:
        if (2 < (int)param_2[8]) {
          *(undefined4 *)(param_1 + 0x30) = 1;
        }
        if (((int)param_2[8] == 1) || (3 < (int)param_2[8])) {
          if (param_3 == (undefined4 *)0x0) {
            *(undefined4 *)(param_2 + 0x3f) = 0;
            FUN_180013650(param_1,param_2,9);
            return 1;
          }
          *param_3 = 4;
          *(longlong **)(param_3 + 2) = param_2;
          param_3[5] = 0;
        }
        FUN_180012a90(param_2);
        return 1;
      }
      if (*(uint *)((longlong)plVar6 + 0x1c) <= uVar9) {
        uVar9 = iVar8 - iVar11;
        if (uVar10 < 86400000) {
          uVar9 = uVar10;
        }
        if (*(uint *)((longlong)param_2 + 0xdc) <= uVar9) goto LAB_180013450;
      }
    }
    if (plVar6[0xb] != 0) {
      *(int *)((longlong)param_2 + 0x104) =
           *(int *)((longlong)param_2 + 0x104) - (uint)*(ushort *)((longlong)plVar6 + 0x24);
    }
    *(int *)(param_2 + 0x15) = (int)param_2[0x15] + 1;
    *(int *)((longlong)param_2 + 0xac) = *(int *)((longlong)param_2 + 0xac) + 1;
    iVar11 = *(int *)((longlong)param_2 + 0xf4) + (int)param_2[0x1f] * 4;
    *(int *)(plVar6 + 3) = iVar11;
    *(int *)((longlong)plVar6 + 0x1c) = iVar11 * (int)param_2[0x1b];
    *(longlong *)plVar6[1] = *plVar6;
    *(longlong *)(*plVar6 + 8) = plVar6[1];
    puVar5 = *(undefined8 **)(lVar3 + 8);
    plVar6[1] = (longlong)puVar5;
    *plVar6 = lVar3;
    *puVar5 = plVar6;
    *(longlong **)(lVar3 + 8) = plVar6;
    if ((plVar4 == (longlong *)*plVar1) && ((longlong *)*plVar1 != plVar1)) {
      *(int *)(param_2 + 0x12) = (int)plVar4[3] + *(int *)((longlong)plVar4 + 0x14);
    }
  } while( true );
}



undefined8 FUN_1800134b0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  plVar1 = (longlong *)(param_1 + 0x58);
  while( true ) {
    plVar4 = (longlong *)*plVar1;
    if (plVar4 == plVar1) {
      return 0;
    }
    *(longlong *)plVar4[1] = *plVar4;
    *(longlong *)(*plVar4 + 8) = plVar4[1];
    iVar3 = (int)plVar4[8];
    *(undefined4 *)(plVar4 + 0x2e) = 0;
    if ((iVar3 == 3) || (iVar3 == 4)) break;
    if (iVar3 == 5) {
      plVar2 = plVar4 + 0x2c;
      plVar5 = (longlong *)*plVar2;
      if (plVar5 != plVar2) {
        *(longlong *)plVar5[1] = *plVar5;
        *(longlong *)(*plVar5 + 8) = plVar5[1];
        if (param_2 + 4 != (undefined4 *)0x0) {
          *(undefined1 *)(param_2 + 4) = *(undefined1 *)((longlong)plVar5 + 0x15);
        }
        plVar6 = (longlong *)plVar5[0xb];
        *plVar6 = *plVar6 + -1;
        if (plVar5[10] != 0) {
          (*(code *)PTR_free_180028008)();
        }
        (*(code *)PTR_free_180028008)(plVar5);
        plVar4[0x40] = plVar4[0x40] - plVar6[3];
        *(longlong **)(param_2 + 6) = plVar6;
        *param_2 = 3;
        *(longlong **)(param_2 + 2) = plVar4;
        if ((longlong *)*plVar2 != plVar2) {
          *(undefined4 *)(plVar4 + 0x2e) = 1;
          puVar7 = *(undefined8 **)(param_1 + 0x60);
          plVar4[1] = (longlong)puVar7;
          *plVar4 = (longlong)plVar1;
          *puVar7 = plVar4;
          *(longlong **)(param_1 + 0x60) = plVar4;
        }
        return 1;
      }
    }
    else if (iVar3 == 9) {
      *(undefined4 *)(param_1 + 0x30) = 1;
      *param_2 = 2;
      *(longlong **)(param_2 + 2) = plVar4;
      param_2[5] = (int)plVar4[0x3f];
      FUN_180012a90(plVar4);
      return 1;
    }
  }
  if (1 < iVar3 - 5U) {
    if ((int)plVar4[0xb] != 0) {
      *(longlong *)(plVar4[2] + 0x2b10) = *(longlong *)(plVar4[2] + 0x2b10) + 1;
    }
    *(longlong *)(plVar4[2] + 0x2b08) = *(longlong *)(plVar4[2] + 0x2b08) + 1;
  }
  *(undefined4 *)(plVar4 + 8) = 5;
  *param_2 = 1;
  *(longlong **)(param_2 + 2) = plVar4;
  param_2[5] = (int)plVar4[0x3f];
  return 1;
}



void FUN_180013650(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 - 5U < 2) {
    if (((int)param_2[8] != 5) && ((int)param_2[8] != 6)) {
      if ((int)param_2[0xb] != 0) {
        *(longlong *)(param_2[2] + 0x2b10) = *(longlong *)(param_2[2] + 0x2b10) + 1;
      }
      *(longlong *)(param_2[2] + 0x2b08) = *(longlong *)(param_2[2] + 0x2b08) + 1;
    }
  }
  else if (((int)param_2[8] == 5) || ((int)param_2[8] == 6)) {
    if ((int)param_2[0xb] != 0) {
      *(longlong *)(param_2[2] + 0x2b10) = *(longlong *)(param_2[2] + 0x2b10) + -1;
    }
    *(longlong *)(param_2[2] + 0x2b08) = *(longlong *)(param_2[2] + 0x2b08) + -1;
  }
  *(int *)(param_2 + 8) = param_3;
  if ((int)param_2[0x2e] == 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    param_2[1] = (longlong)puVar1;
    *param_2 = param_1 + 0x58;
    *puVar1 = param_2;
    *(longlong **)(param_1 + 0x60) = param_2;
    *(undefined4 *)(param_2 + 0x2e) = 1;
  }
  return;
}



undefined8 FUN_1800136f0(longlong param_1,undefined4 *param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  u_short uVar4;
  int iVar5;
  undefined7 extraout_var;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((int)param_3[8] == 0) {
    return 0;
  }
  if ((int)param_3[8] == 9) {
    return 0;
  }
  uVar4 = ntohs(*(u_short *)(param_4 + 6));
  uVar9 = *(uint *)(param_1 + 0x50);
  uVar10 = (uint)uVar4 | uVar9 & 0xffff0000;
  uVar8 = uVar10 - 0x10000;
  if ((uVar4 & 0x8000) <= (uVar9 & 0x8000)) {
    uVar8 = uVar10;
  }
  if (86399999 < uVar9 - uVar8) {
    return 0;
  }
  uVar10 = *(uint *)((longlong)param_3 + 0xe4);
  *(undefined4 *)((longlong)param_3 + 0x94) = 0;
  *(uint *)((longlong)param_3 + 0x8c) = uVar9;
  uVar6 = *(int *)(param_1 + 0x50) - uVar8;
  uVar9 = uVar8 - *(int *)(param_1 + 0x50);
  if (uVar6 < 86400000) {
    uVar9 = uVar6;
  }
  if (*(uint *)((longlong)param_3 + 0xec) < uVar10) {
    if (uVar9 < uVar10) {
      uVar8 = (int)param_3[0x19] + (int)param_3[0x17];
      *(uint *)(param_3 + 0x17) = uVar8;
      if (*(uint *)((longlong)param_3 + 0xbc) < uVar8) {
        *(uint *)(param_3 + 0x17) = *(uint *)((longlong)param_3 + 0xbc);
      }
    }
    else if (uVar10 + *(uint *)((longlong)param_3 + 0xec) * 2 < uVar9) {
      if (*(uint *)((longlong)param_3 + 0xcc) < *(uint *)(param_3 + 0x17)) {
        *(uint *)(param_3 + 0x17) = *(uint *)(param_3 + 0x17) - *(uint *)((longlong)param_3 + 0xcc);
      }
      else {
        *(undefined4 *)(param_3 + 0x17) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x17) = *(undefined4 *)((longlong)param_3 + 0xbc);
  }
  uVar8 = *(uint *)((longlong)param_3 + 0xf4);
  if (uVar9 < uVar8) {
    uVar8 = uVar8 - (uVar8 - uVar9 >> 3);
    uVar9 = uVar8 - uVar9;
  }
  else {
    uVar8 = (uVar9 - uVar8 >> 3) + uVar8;
    uVar9 = uVar9 - uVar8;
  }
  uVar10 = (uVar9 >> 2) + (*(uint *)(param_3 + 0x1f) - (*(uint *)(param_3 + 0x1f) >> 2));
  *(uint *)((longlong)param_3 + 0xf4) = uVar8;
  *(uint *)(param_3 + 0x1f) = uVar10;
  uVar9 = *(uint *)(param_3 + 0x1d);
  if (uVar8 < *(uint *)(param_3 + 0x1d)) {
    *(uint *)(param_3 + 0x1d) = uVar8;
    uVar9 = uVar8;
  }
  uVar6 = *(uint *)(param_3 + 0x1e);
  if (*(uint *)(param_3 + 0x1e) < uVar10) {
    *(uint *)(param_3 + 0x1e) = uVar10;
    uVar6 = uVar10;
  }
  iVar1 = *(int *)((longlong)param_3 + 0xc4);
  if (iVar1 != 0) {
    uVar7 = *(int *)(param_1 + 0x50) - iVar1;
    uVar2 = iVar1 - *(int *)(param_1 + 0x50);
    if (uVar7 < 86400000) {
      uVar2 = uVar7;
    }
    if (uVar2 < *(uint *)(param_3 + 0x1a)) goto LAB_1800138d4;
  }
  *(uint *)((longlong)param_3 + 0xe4) = uVar9;
  *(uint *)((longlong)param_3 + 0xec) = uVar6;
  *(uint *)(param_3 + 0x1d) = uVar8;
  *(uint *)(param_3 + 0x1e) = uVar10;
  *(undefined4 *)((longlong)param_3 + 0xc4) = *(undefined4 *)(param_1 + 0x50);
LAB_1800138d4:
  uVar4 = ntohs(*(u_short *)(param_4 + 4));
  bVar3 = FUN_180014db0((longlong)param_3,uVar4,*(byte *)(param_4 + 1));
  iVar1 = (int)param_3[8];
  iVar5 = (int)CONCAT71(extraout_var,bVar3);
  if (iVar1 == 2) {
    if (iVar5 != 3) {
      return 0xffffffff;
    }
    FUN_180014cc0(param_1,param_3,param_2);
  }
  else if (iVar1 == 6) {
    if ((((longlong *)param_3[0x28] == param_3 + 0x28) &&
        ((longlong *)param_3[0x2a] == param_3 + 0x2a)) &&
       ((longlong *)param_3[0x24] == param_3 + 0x24)) {
      FUN_180012170(param_3,*(u_long *)(param_3 + 0x3f));
    }
  }
  else if (iVar1 == 7) {
    if (iVar5 != 4) {
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
    if (((int)param_3[8] == 1) || (3 < (int)param_3[8])) {
      if (param_2 == (undefined4 *)0x0) {
        *(undefined4 *)(param_3 + 0x3f) = 0;
        FUN_180013650(param_1,param_3,9);
        return 0;
      }
      *param_2 = 2;
      *(longlong **)(param_2 + 2) = param_3;
      param_2[5] = 0;
    }
    FUN_180012a90(param_3);
  }
  return 0;
}



ulonglong FUN_1800139c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  u_short uVar5;
  u_long uVar6;
  u_long uVar7;
  uint uVar8;
  uint uVar9;
  u_long uVar10;
  u_long uVar11;
  u_long uVar12;
  u_long uVar13;
  u_long uVar14;
  u_long uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  byte bVar22;
  ulonglong uVar23;
  undefined2 *puVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  ulonglong uVar27;
  char cVar28;
  byte bVar29;
  undefined2 uStack_56;
  undefined4 uStack_2c;
  
  uVar18 = 0;
  uVar6 = ntohl(*(u_long *)(param_3 + 0x10));
  uVar27 = (ulonglong)uVar6;
  if (0xfe < uVar27 - 1) {
    return 0;
  }
  uVar16 = *(ulonglong *)(param_1 + 0x38);
  uVar23 = *(longlong *)(param_1 + 0x40) * 0x208 + uVar16;
  uVar4 = 0;
  for (; uVar16 < uVar23; uVar16 = uVar16 + 0x208) {
    uVar21 = uVar4;
    if (*(int *)(uVar16 + 0x40) == 0) {
      uVar21 = uVar16;
      if (uVar4 != 0) {
        uVar21 = uVar4;
      }
    }
    else if (((*(int *)(uVar16 + 0x40) != 1) &&
             (*(longlong *)(uVar16 + 0x22) == *(longlong *)(param_1 + 0x2ac8))) &&
            (*(longlong *)(uVar16 + 0x2a) == *(longlong *)(param_1 + 0x2ad0))) {
      if ((*(short *)(uVar16 + 0x32) == *(short *)(param_1 + 0x2ad8)) &&
         (*(int *)(uVar16 + 0x1c) == *(int *)(param_3 + 0x28))) {
        return 0;
      }
      uVar18 = uVar18 + 1;
    }
    uVar4 = uVar21;
  }
  if (uVar4 == 0) {
    return 0;
  }
  if (*(ulonglong *)(param_1 + 0x2b18) <= uVar18) {
    return 0;
  }
  if (*(ulonglong *)(param_1 + 0x48) < uVar27) {
    uVar27 = *(ulonglong *)(param_1 + 0x48);
  }
  lVar17 = (*(code *)PTR_malloc_180028000)(uVar27 * 0x50);
  if (lVar17 == 0) {
    uVar18 = (*(code *)PTR_abort_180028010)();
    return uVar18;
  }
  *(longlong *)(uVar4 + 0x48) = lVar17;
  *(ulonglong *)(uVar4 + 0x50) = uVar27;
  *(undefined4 *)(uVar4 + 0x40) = 2;
  *(undefined4 *)(uVar4 + 0x1c) = *(undefined4 *)(param_3 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x2acc);
  uVar2 = *(undefined4 *)(param_1 + 0x2ad0);
  uVar3 = *(undefined4 *)(param_1 + 0x2ad4);
  *(undefined4 *)(uVar4 + 0x22) = *(undefined4 *)(param_1 + 0x2ac8);
  *(undefined4 *)(uVar4 + 0x26) = uVar1;
  *(undefined4 *)(uVar4 + 0x2a) = uVar2;
  *(undefined4 *)(uVar4 + 0x2e) = uVar3;
  *(undefined4 *)(uVar4 + 0x32) = *(undefined4 *)(param_1 + 0x2ad8);
  uVar5 = ntohs(*(u_short *)(param_3 + 4));
  *(u_short *)(uVar4 + 0x18) = uVar5;
  uVar6 = ntohl(*(u_long *)(param_3 + 0x14));
  *(u_long *)(uVar4 + 0x58) = uVar6;
  uVar6 = ntohl(*(u_long *)(param_3 + 0x18));
  *(u_long *)(uVar4 + 0x5c) = uVar6;
  uVar6 = ntohl(*(u_long *)(param_3 + 0x1c));
  *(u_long *)(uVar4 + 0xd0) = uVar6;
  uVar6 = ntohl(*(u_long *)(param_3 + 0x20));
  *(u_long *)(uVar4 + 200) = uVar6;
  uVar6 = ntohl(*(u_long *)(param_3 + 0x24));
  *(u_long *)(uVar4 + 0xcc) = uVar6;
  uVar6 = ntohl(*(u_long *)(param_3 + 0x2c));
  *(u_long *)(uVar4 + 0x1f8) = uVar6;
  cVar28 = *(char *)(param_3 + 6);
  if (cVar28 == -1) {
    cVar28 = *(char *)(uVar4 + 0x20);
  }
  bVar29 = cVar28 + 1U & 3;
  if (bVar29 == *(byte *)(uVar4 + 0x20)) {
    bVar29 = bVar29 + 1 & 3;
  }
  *(byte *)(uVar4 + 0x20) = bVar29;
  cVar28 = *(char *)(param_3 + 7);
  if (cVar28 == -1) {
    cVar28 = *(char *)(uVar4 + 0x21);
  }
  bVar22 = cVar28 + 1U & 3;
  if (bVar22 == *(byte *)(uVar4 + 0x21)) {
    bVar22 = bVar22 + 1 & 3;
  }
  puVar24 = *(undefined2 **)(uVar4 + 0x48);
  *(byte *)(uVar4 + 0x21) = bVar22;
  if (puVar24 < puVar24 + uVar27 * 0x28) {
    puVar25 = puVar24 + 0x18;
    puVar26 = puVar24 + 0x20;
    puVar20 = (undefined8 *)(puVar24 + 0x24);
    do {
      *puVar24 = 0;
      puVar20[-2] = puVar20 + -3;
      *(undefined4 *)((longlong)puVar20 + -0x46) = 0;
      *puVar20 = puVar20 + -1;
      puVar24 = puVar24 + 0x28;
      *(undefined4 *)((longlong)puVar20 + -0x22) = 0;
      *(undefined2 **)puVar25 = puVar25;
      puVar25 = puVar25 + 0x28;
      *(undefined2 **)puVar26 = puVar26;
      puVar26 = puVar26 + 0x28;
      *(undefined8 *)((longlong)puVar20 + -0x42) = 0;
      *(undefined8 *)((longlong)puVar20 + -0x3a) = 0;
      *(undefined8 *)((longlong)puVar20 + -0x32) = 0;
      *(undefined8 *)((longlong)puVar20 + -0x2a) = 0;
      puVar20 = puVar20 + 10;
    } while (puVar24 < (undefined2 *)(*(longlong *)(uVar4 + 0x48) + uVar27 * 0x50));
  }
  uVar7 = ntohl(*(u_long *)(param_3 + 8));
  uVar6 = 0x240;
  if ((0x23f < uVar7) && (uVar6 = uVar7, 0x1000 < uVar7)) {
    uVar6 = 0x1000;
  }
  *(u_long *)(uVar4 + 0xfc) = uVar6;
  uVar9 = *(uint *)(param_1 + 0x20);
  uVar8 = *(uint *)(uVar4 + 0x58);
  if (uVar9 == 0) {
    if (uVar8 != 0) {
LAB_180013c5c:
      if (uVar8 < uVar9) {
        uVar8 = uVar9;
      }
      goto LAB_180013c63;
    }
  }
  else {
    if (uVar8 == 0) goto LAB_180013c5c;
    if (uVar9 < uVar8) {
      uVar8 = uVar9;
    }
LAB_180013c63:
    uVar9 = (uVar8 >> 0x10) << 0xc;
    *(uint *)(uVar4 + 0x100) = uVar9;
    if (uVar9 < 0x1000) {
      *(undefined4 *)(uVar4 + 0x100) = 0x1000;
      goto LAB_180013c94;
    }
    if (uVar9 < 0x10001) goto LAB_180013c94;
  }
  *(undefined4 *)(uVar4 + 0x100) = 0x10000;
LAB_180013c94:
  if (*(uint *)(param_1 + 0x1c) == 0) {
    uVar6 = 0x10000;
  }
  else {
    uVar6 = (*(uint *)(param_1 + 0x1c) >> 0x10) << 0xc;
  }
  uVar7 = ntohl(*(u_long *)(param_3 + 0xc));
  if (uVar7 < uVar6) {
    uVar6 = ntohl(*(u_long *)(param_3 + 0xc));
  }
  uVar7 = 0x1000;
  if ((0xfff < uVar6) && (uVar7 = uVar6, 0x10000 < uVar6)) {
    uVar7 = 0x10000;
  }
  uVar5 = htons(*(u_short *)(uVar4 + 0x1a));
  uVar6 = htonl(*(u_long *)(uVar4 + 0xfc));
  uVar7 = htonl(uVar7);
  uVar10 = htonl((u_long)uVar27);
  uVar11 = htonl(*(u_long *)(param_1 + 0x1c));
  uVar12 = htonl(*(u_long *)(param_1 + 0x20));
  uVar13 = htonl(*(u_long *)(uVar4 + 0xd0));
  uVar14 = htonl(*(u_long *)(uVar4 + 200));
  uVar15 = htonl(*(u_long *)(uVar4 + 0xcc));
  uVar1 = *(undefined4 *)(uVar4 + 0x1c);
  plVar19 = (longlong *)(*(code *)PTR_malloc_180028000)();
  if (plVar19 == (longlong *)0x0) {
    uVar18 = (*(code *)PTR_abort_180028010)();
    return uVar18;
  }
  *(undefined4 *)(plVar19 + 4) = 0;
  plVar19[5] = CONCAT17(bVar22,CONCAT16(bVar29,CONCAT24(uVar5,CONCAT22(uStack_56,0xff83))));
  plVar19[6] = CONCAT44(uVar7,uVar6);
  *(undefined2 *)((longlong)plVar19 + 0x24) = 0;
  plVar19[0xb] = 0;
  plVar19[7] = CONCAT44(uVar11,uVar10);
  plVar19[8] = CONCAT44(uVar13,uVar12);
  plVar19[9] = CONCAT44(uVar15,uVar14);
  plVar19[10] = CONCAT44(uStack_2c,uVar1);
  FUN_1800130e0(uVar4,plVar19);
  return uVar4;
}



undefined8 FUN_180013dd0(longlong param_1,int *param_2)

{
  uint *puVar1;
  u_short *_Src;
  u_short uVar2;
  u_short uVar3;
  undefined4 uVar4;
  int iVar5;
  u_long uVar6;
  uint uVar7;
  uint uVar8;
  u_long uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  byte *pbVar14;
  ushort uVar16;
  longlong lVar17;
  byte bVar18;
  uint uVar19;
  longlong *plVar20;
  size_t _Size;
  byte *pbVar21;
  byte *pbVar22;
  byte *local_res18 [2];
  undefined8 local_48;
  undefined8 local_40;
  longlong lVar15;
  
  if (1 < *(ulonglong *)(param_1 + 0x2ae8)) {
    _Src = *(u_short **)(param_1 + 0x2ae0);
    uVar2 = ntohs(*_Src);
    _Size = 2;
    uVar16 = uVar2 & 0x7ff;
    if ((uVar2 >> 0xd & 1) != 0) {
      _Size = 3;
      if (*(ulonglong *)(param_1 + 0x2ae8) < 3) {
        return 0;
      }
      uVar16 = uVar16 | (ushort)*(byte *)(*(longlong *)(param_1 + 0x2ae0) + 2) << 0xb;
    }
    if ((*(longlong *)(param_1 + 0xaa0) == 0) ||
       (_Size = _Size + 4, _Size <= *(ulonglong *)(param_1 + 0x2ae8))) {
      if (uVar16 == 0xffff) {
        plVar20 = (longlong *)0x0;
      }
      else {
        if (*(ulonglong *)(param_1 + 0x40) <= (ulonglong)uVar16) {
          return 0;
        }
        plVar20 = (longlong *)((ulonglong)uVar16 * 0x208 + *(longlong *)(param_1 + 0x38));
        if ((int)plVar20[8] == 0) {
          return 0;
        }
        if ((int)plVar20[8] == 9) {
          return 0;
        }
        if (*(longlong *)(param_1 + 0x2ac8) != *(longlong *)((longlong)plVar20 + 0x22)) {
          return 0;
        }
        if (*(longlong *)(param_1 + 0x2ad0) != *(longlong *)((longlong)plVar20 + 0x2a)) {
          return 0;
        }
        if (*(short *)(param_1 + 0x2ad8) != *(short *)((longlong)plVar20 + 0x32)) {
          return 0;
        }
        if (((short)plVar20[3] != -1) &&
           (((byte)(uVar2 >> 0xb) & 3) != *(byte *)((longlong)plVar20 + 0x21))) {
          return 0;
        }
      }
      if ((uVar2 >> 0xe & 1) != 0) {
        if (*(longlong *)(param_1 + 0xaa8) == 0) {
          return 0;
        }
        if (*(code **)(param_1 + 0xab8) == (code *)0x0) {
          return 0;
        }
        uVar11 = (**(code **)(param_1 + 0xab8))
                           (*(longlong *)(param_1 + 0xaa8),*(longlong *)(param_1 + 0x2ae0) + _Size,
                            *(longlong *)(param_1 + 0x2ae8) - _Size,param_1 + 0x1ac8 + _Size,
                            0x1000 - _Size);
        if (uVar11 == 0) {
          return 0;
        }
        if (0x1000 - _Size < uVar11) {
          return 0;
        }
        memcpy((void *)(param_1 + 0x1ac8),_Src,_Size);
        *(void **)(param_1 + 0x2ae0) = (void *)(param_1 + 0x1ac8);
        *(ulonglong *)(param_1 + 0x2ae8) = uVar11 + _Size;
      }
      if (*(longlong *)(param_1 + 0xaa0) != 0) {
        iVar10 = *(int *)(*(longlong *)(param_1 + 0x2ae0) + -4 + _Size);
        if (plVar20 == (longlong *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)((longlong)plVar20 + 0x1c);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x2ae0) + -4 + _Size) = uVar4;
        local_40 = *(undefined8 *)(param_1 + 0x2ae0);
        local_48 = *(undefined8 *)(param_1 + 0x2ae8);
        iVar5 = (**(code **)(param_1 + 0xaa0))(&local_48,1);
        if (iVar5 != iVar10) {
          return 0;
        }
      }
      if (plVar20 != (longlong *)0x0) {
        uVar13 = *(undefined8 *)(param_1 + 0x2ad0);
        *(undefined8 *)((longlong)plVar20 + 0x22) = *(undefined8 *)(param_1 + 0x2ac8);
        *(undefined8 *)((longlong)plVar20 + 0x2a) = uVar13;
        *(undefined2 *)((longlong)plVar20 + 0x32) = *(undefined2 *)(param_1 + 0x2ad8);
        *(int *)(plVar20 + 0xd) = (int)plVar20[0xd] + *(int *)(param_1 + 0x2ae8);
        plVar20[0xe] = plVar20[0xe] + *(longlong *)(param_1 + 0x2ae8);
      }
      lVar15 = *(longlong *)(param_1 + 0x2ae0);
      lVar17 = *(longlong *)(param_1 + 0x2ae8);
      pbVar21 = (byte *)(_Size + lVar15);
      if (pbVar21 < (byte *)(lVar15 + lVar17)) {
        do {
          pbVar14 = (byte *)(lVar15 + lVar17);
          if (((((pbVar14 < pbVar21 + 4) || (bVar18 = *pbVar21 & 0xf, 0xc < bVar18)) ||
               (*(longlong *)(&DAT_180028030 + (ulonglong)bVar18 * 8) == 0)) ||
              (pbVar22 = pbVar21 + *(longlong *)(&DAT_180028030 + (ulonglong)bVar18 * 8),
              pbVar14 < pbVar22)) ||
             ((plVar20 == (longlong *)0x0 && ((bVar18 != 2 || (pbVar22 < pbVar14)))))) break;
          local_res18[0] = pbVar22;
          uVar3 = ntohs(*(u_short *)(pbVar21 + 2));
          *(u_short *)(pbVar21 + 2) = uVar3;
          switch(bVar18) {
          case 1:
            uVar13 = FUN_1800136f0(param_1,param_2,plVar20,(longlong)pbVar21);
            iVar10 = (int)uVar13;
            goto joined_r0x0001800146d7;
          case 2:
            if (plVar20 == (longlong *)0x0) {
              plVar20 = (longlong *)FUN_1800139c0(param_1,_Src,(longlong)pbVar21);
              plVar12 = plVar20;
              goto joined_r0x0001800143fc;
            }
            goto switchD_1800140e0_default;
          case 3:
            if ((int)plVar20[8] == 1) {
              uVar9 = ntohl(*(u_long *)(pbVar21 + 0x10));
              uVar11 = (ulonglong)uVar9;
              if ((((0xfe < uVar11 - 1) ||
                   (uVar9 = ntohl(*(u_long *)(pbVar21 + 0x1c)), uVar9 != *(u_long *)(plVar20 + 0x1a)
                   )) || (uVar9 = ntohl(*(u_long *)(pbVar21 + 0x20)),
                         uVar9 != *(u_long *)(plVar20 + 0x19))) ||
                 ((uVar9 = ntohl(*(u_long *)(pbVar21 + 0x24)),
                  uVar9 != *(u_long *)((longlong)plVar20 + 0xcc) ||
                  (*(int *)(pbVar21 + 0x28) != *(int *)((longlong)plVar20 + 0x1c))))) {
                *(undefined4 *)(plVar20 + 0x3f) = 0;
                FUN_180013650(param_1,plVar20,9);
                goto switchD_1800140e0_default;
              }
              FUN_180014db0((longlong)plVar20,1,0xff);
              if (uVar11 < (ulonglong)plVar20[10]) {
                plVar20[10] = uVar11;
              }
              uVar3 = ntohs(*(u_short *)(pbVar21 + 4));
              *(u_short *)(plVar20 + 3) = uVar3;
              *(byte *)((longlong)plVar20 + 0x21) = pbVar21[6];
              *(byte *)(plVar20 + 4) = pbVar21[7];
              uVar8 = ntohl(*(u_long *)(pbVar21 + 8));
              if (uVar8 < 0x240) {
                uVar8 = 0x240;
              }
              else if (0x1000 < uVar8) {
                uVar8 = 0x1000;
              }
              if (uVar8 < *(uint *)((longlong)plVar20 + 0xfc)) {
                *(uint *)((longlong)plVar20 + 0xfc) = uVar8;
              }
              uVar6 = ntohl(*(u_long *)(pbVar21 + 0xc));
              uVar9 = 0x1000;
              if ((0xfff < uVar6) && (uVar9 = uVar6, 0x10000 < uVar6)) {
                uVar9 = 0x10000;
              }
              if (uVar9 < *(uint *)(plVar20 + 0x20)) {
                *(u_long *)(plVar20 + 0x20) = uVar9;
              }
              uVar9 = ntohl(*(u_long *)(pbVar21 + 0x14));
              *(u_long *)(plVar20 + 0xb) = uVar9;
              uVar9 = ntohl(*(u_long *)(pbVar21 + 0x18));
              *(u_long *)((longlong)plVar20 + 0x5c) = uVar9;
              FUN_180014cc0(param_1,plVar20,param_2);
            }
            break;
          case 4:
            if (((*(uint *)(plVar20 + 8) & 0xfffffff6) != 0) || (*(uint *)(plVar20 + 8) == 1)) {
              FUN_180012c80(plVar20);
              uVar8 = *(uint *)(plVar20 + 8);
              if ((uVar8 < 8) && ((0x92U >> (uVar8 & 0x1f) & 1) != 0)) {
LAB_1800142b4:
                FUN_180013650(param_1,plVar20,9);
              }
              else if (uVar8 - 5 < 2) {
                if (-1 < (char)*pbVar21) goto LAB_1800142b4;
                FUN_180013260(param_1,(longlong)plVar20,8);
              }
              else {
                if (uVar8 == 3) {
                  *(undefined4 *)(param_1 + 0x30) = 1;
                }
                FUN_180012a90(plVar20);
              }
              if ((int)plVar20[8] != 0) {
                uVar9 = ntohl(*(u_long *)(pbVar21 + 4));
                *(u_long *)(plVar20 + 0x3f) = uVar9;
              }
            }
            break;
          case 5:
            if (1 < (int)plVar20[8] - 5U) goto switchD_1800140e0_default;
            break;
          case 6:
            if (((ulonglong)pbVar21[1] < (ulonglong)plVar20[10]) && ((int)plVar20[8] - 5U < 2)) {
              uVar3 = ntohs(*(u_short *)(pbVar21 + 4));
              uVar11 = (ulonglong)uVar3;
              pbVar22 = pbVar22 + uVar11;
              if ((uVar11 <= *(ulonglong *)(param_1 + 0x2b20)) &&
                 ((*(byte **)(param_1 + 0x2ae0) <= pbVar22 &&
                  (pbVar22 <= *(byte **)(param_1 + 0x2ae0) + *(longlong *)(param_1 + 0x2ae8))))) {
                plVar12 = FUN_1800126f0(plVar20,pbVar21,pbVar21 + 6,uVar11,1,0);
                goto joined_r0x0001800143fc;
              }
            }
            goto switchD_1800140e0_default;
          case 7:
            if (((ulonglong)plVar20[10] <= (ulonglong)pbVar21[1]) || (1 < (int)plVar20[8] - 5U))
            goto switchD_1800140e0_default;
            uVar3 = ntohs(*(u_short *)(pbVar21 + 6));
            uVar11 = (ulonglong)uVar3;
            pbVar22 = pbVar22 + uVar11;
            if ((*(ulonglong *)(param_1 + 0x2b20) < uVar11) ||
               ((pbVar22 < *(byte **)(param_1 + 0x2ae0) ||
                (*(byte **)(param_1 + 0x2ae0) + *(longlong *)(param_1 + 0x2ae8) < pbVar22))))
            goto switchD_1800140e0_default;
            plVar12 = FUN_1800126f0(plVar20,pbVar21,pbVar21 + 8,uVar11,0,0);
joined_r0x0001800143fc:
            if (plVar12 == (longlong *)0x0) goto switchD_1800140e0_default;
            break;
          case 8:
            uVar13 = FUN_180014790(param_1,plVar20,(undefined8 *)pbVar21,(ulonglong *)local_res18);
            iVar10 = (int)uVar13;
            pbVar22 = local_res18[0];
            goto joined_r0x0001800146d7;
          case 9:
            if (((ulonglong)plVar20[10] <= (ulonglong)pbVar21[1]) || (1 < (int)plVar20[8] - 5U))
            goto switchD_1800140e0_default;
            uVar3 = ntohs(*(u_short *)(pbVar21 + 6));
            uVar11 = (ulonglong)uVar3;
            pbVar22 = pbVar22 + uVar11;
            if ((*(ulonglong *)(param_1 + 0x2b20) < uVar11) ||
               ((pbVar22 < *(byte **)(param_1 + 0x2ae0) ||
                (*(byte **)(param_1 + 0x2ae0) + *(longlong *)(param_1 + 0x2ae8) < pbVar22))))
            goto switchD_1800140e0_default;
            uVar3 = ntohs(*(u_short *)(pbVar21 + 4));
            uVar16 = *(ushort *)((longlong)plVar20 + 0x174);
            uVar7 = (uint)uVar3;
            uVar19 = uVar7 & 0x3ff;
            uVar8 = uVar3 + 0x10000;
            if (uVar16 <= uVar7) {
              uVar8 = (uint)uVar3;
            }
            if (uVar8 < uVar16 + 0x8000) {
              if ((uVar8 & 0xffff) - uVar19 == (uint)uVar16) {
                if ((*(uint *)((longlong)plVar20 + (ulonglong)(uVar19 >> 5) * 4 + 0x178) >>
                     (uVar7 & 0x1f) & 1) != 0) break;
              }
              else {
                *(short *)((longlong)plVar20 + 0x174) = (short)uVar8 - (short)uVar19;
                plVar20[0x2f] = 0;
                plVar20[0x30] = 0;
                plVar20[0x31] = 0;
                plVar20[0x32] = 0;
                plVar20[0x33] = 0;
                plVar20[0x34] = 0;
                plVar20[0x35] = 0;
                plVar20[0x36] = 0;
                plVar20[0x37] = 0;
                plVar20[0x38] = 0;
                plVar20[0x39] = 0;
                plVar20[0x3a] = 0;
                plVar20[0x3b] = 0;
                plVar20[0x3c] = 0;
                plVar20[0x3d] = 0;
                plVar20[0x3e] = 0;
              }
              plVar12 = FUN_1800126f0(plVar20,pbVar21,pbVar21 + 8,uVar11,2,0);
              if (plVar12 == (longlong *)0x0) goto switchD_1800140e0_default;
              puVar1 = (uint *)((longlong)plVar20 + (ulonglong)(uVar19 >> 5) * 4 + 0x178);
              *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0x1f);
            }
            break;
          case 10:
            if (1 < (int)plVar20[8] - 5U) goto switchD_1800140e0_default;
            if ((int)plVar20[0xb] != 0) {
              *(longlong *)(param_1 + 0x2b10) = *(longlong *)(param_1 + 0x2b10) + -1;
            }
            uVar9 = ntohl(*(u_long *)(pbVar21 + 4));
            *(u_long *)(plVar20 + 0xb) = uVar9;
            if (uVar9 != 0) {
              *(longlong *)(param_1 + 0x2b10) = *(longlong *)(param_1 + 0x2b10) + 1;
            }
            uVar9 = ntohl(*(u_long *)(pbVar21 + 8));
            uVar8 = *(uint *)(plVar20 + 0xb);
            *(u_long *)((longlong)plVar20 + 0x5c) = uVar9;
            uVar7 = *(uint *)(param_1 + 0x20);
            if (uVar8 == 0) {
              if (uVar7 == 0) {
                *(undefined4 *)(plVar20 + 0x20) = 0x10000;
                break;
              }
LAB_18001463f:
              if (uVar7 < uVar8) {
                uVar7 = uVar8;
              }
            }
            else {
              if (uVar7 == 0) goto LAB_18001463f;
              if (uVar8 < uVar7) {
                uVar7 = uVar8;
              }
            }
            uVar8 = (uVar7 >> 0x10) << 0xc;
            *(uint *)(plVar20 + 0x20) = uVar8;
            if (uVar8 < 0x1000) {
              *(undefined4 *)(plVar20 + 0x20) = 0x1000;
            }
            else if (0x10000 < uVar8) {
              *(undefined4 *)(plVar20 + 0x20) = 0x10000;
            }
            break;
          case 0xb:
            if (1 < (int)plVar20[8] - 5U) goto switchD_1800140e0_default;
            uVar9 = ntohl(*(u_long *)(pbVar21 + 4));
            *(u_long *)(plVar20 + 0x1a) = uVar9;
            uVar9 = ntohl(*(u_long *)(pbVar21 + 8));
            *(u_long *)(plVar20 + 0x19) = uVar9;
            uVar9 = ntohl(*(u_long *)(pbVar21 + 0xc));
            *(u_long *)((longlong)plVar20 + 0xcc) = uVar9;
            break;
          case 0xc:
            uVar13 = FUN_180014a30(param_1,plVar20,pbVar21,(ulonglong *)local_res18);
            iVar10 = (int)uVar13;
            pbVar22 = local_res18[0];
joined_r0x0001800146d7:
            if (iVar10 != 0) goto switchD_1800140e0_default;
            break;
          default:
            goto switchD_1800140e0_default;
          }
          if ((char)*pbVar21 < '\0') {
            if (-1 < (short)uVar2) break;
            uVar3 = ntohs(_Src[1]);
            iVar10 = (int)plVar20[8];
            if (((iVar10 != 0) && (iVar10 != 2)) && (iVar10 != 7)) {
              if (iVar10 == 8) {
                if ((*pbVar21 & 0xf) == 4) goto LAB_1800146ef;
              }
              else if (iVar10 != 9) {
LAB_1800146ef:
                FUN_180012610((longlong)plVar20,(undefined8 *)pbVar21,(uint)uVar3);
              }
            }
          }
          lVar17 = *(longlong *)(param_1 + 0x2ae8);
          lVar15 = *(longlong *)(param_1 + 0x2ae0);
          pbVar21 = pbVar22;
        } while (pbVar22 < (byte *)(lVar15 + lVar17));
      }
switchD_1800140e0_default:
      if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}



undefined8 FUN_180014790(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong *param_4)

{
  uint *puVar1;
  ushort uVar2;
  u_short uVar3;
  u_short uVar4;
  u_long uVar5;
  u_long uVar6;
  u_long uVar7;
  u_long uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ushort uVar11;
  longlong lVar12;
  uint uVar13;
  undefined2 local_68;
  u_short uStack_66;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (((ulonglong)*(byte *)((longlong)param_3 + 1) < (ulonglong)param_2[10]) &&
     ((int)param_2[8] - 5U < 2)) {
    uVar3 = ntohs(*(u_short *)((longlong)param_3 + 6));
    uVar10 = *param_4 + (ulonglong)uVar3;
    *param_4 = uVar10;
    if (((ulonglong)uVar3 <= *(ulonglong *)(param_1 + 0x2b20)) &&
       ((*(ulonglong *)(param_1 + 0x2ae0) <= uVar10 &&
        (uVar10 <= *(ulonglong *)(param_1 + 0x2ae0) + *(longlong *)(param_1 + 0x2ae8))))) {
      lVar12 = (ulonglong)*(byte *)((longlong)param_3 + 1) * 0x50 + param_2[9];
      uVar4 = ntohs(*(u_short *)((longlong)param_3 + 4));
      uVar11 = *(ushort *)(lVar12 + 0x26) >> 0xc;
      uVar2 = (uVar4 >> 0xc) + 0x10;
      if (*(ushort *)(lVar12 + 0x26) <= uVar4) {
        uVar2 = uVar4 >> 0xc;
      }
      if ((uVar2 < uVar11) || ((ushort)(uVar11 + 7) <= uVar2)) {
        return 0;
      }
      uVar5 = ntohl(*(u_long *)((longlong)param_3 + 0xc));
      uVar6 = ntohl(*(u_long *)(param_3 + 1));
      uVar7 = ntohl(*(u_long *)((longlong)param_3 + 0x14));
      uVar8 = ntohl(*(u_long *)(param_3 + 2));
      if ((((uVar6 < 0x100001) && (uVar5 < uVar6)) &&
          (uVar10 = (ulonglong)uVar8, uVar10 <= *(ulonglong *)(param_1 + 0x2b20))) &&
         ((uVar7 < uVar8 && ((uint)uVar3 <= uVar8 - uVar7)))) {
        plVar9 = *(longlong **)(lVar12 + 0x38);
        if (plVar9 != (longlong *)(lVar12 + 0x30)) {
          uVar2 = *(ushort *)(lVar12 + 0x26);
          do {
            uVar11 = *(ushort *)(plVar9 + 2);
            if (uVar4 < uVar2) {
              if (uVar2 <= uVar11) break;
LAB_180014914:
              if (uVar11 <= uVar4) {
                if (uVar4 <= uVar11) {
                  if ((*(byte *)((longlong)plVar9 + 0x14) & 0xf) != 8) {
                    return 0xffffffff;
                  }
                  if (uVar10 != *(ulonglong *)(plVar9[0xb] + 0x18)) {
                    return 0xffffffff;
                  }
                  if (uVar6 != *(u_long *)((longlong)plVar9 + 0x44)) {
                    return 0xffffffff;
                  }
                  goto LAB_180014975;
                }
                break;
              }
            }
            else if (uVar2 <= uVar11) goto LAB_180014914;
            plVar9 = (longlong *)plVar9[1];
          } while (plVar9 != (longlong *)(lVar12 + 0x30));
        }
        uStack_60 = param_3[1];
        local_58 = param_3[2];
        uStack_50 = param_3[3];
        uStack_64 = (undefined4)((ulonglong)*param_3 >> 0x20);
        _local_68 = CONCAT22(uVar4,(short)*param_3);
        local_48 = param_3[4];
        uStack_40 = param_3[5];
        plVar9 = FUN_1800126f0(param_2,(byte *)&local_68,0,uVar10,1,uVar6);
        if (plVar9 != (longlong *)0x0) {
LAB_180014975:
          puVar1 = (uint *)(plVar9[10] + (ulonglong)(uVar5 >> 5) * 4);
          uVar13 = 1 << ((byte)uVar5 & 0x1f);
          if ((*puVar1 & uVar13) != 0) {
            return 0;
          }
          *(int *)(plVar9 + 9) = (int)plVar9[9] + -1;
          *puVar1 = *puVar1 | uVar13;
          uVar10 = *(ulonglong *)(plVar9[0xb] + 0x18);
          uVar13 = (int)uVar10 - uVar7;
          if (uVar7 + uVar3 <= uVar10) {
            uVar13 = (uint)uVar3;
          }
          memcpy((void *)((ulonglong)uVar7 + *(longlong *)(plVar9[0xb] + 0x10)),param_3 + 3,
                 (ulonglong)uVar13);
          if ((int)plVar9[9] != 0) {
            return 0;
          }
          FUN_180012270(param_2,lVar12);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}



undefined8 FUN_180014a30(longlong param_1,longlong *param_2,byte *param_3,ulonglong *param_4)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  u_short uVar5;
  u_short uVar6;
  u_long uVar7;
  u_long uVar8;
  u_long uVar9;
  u_long uVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint local_res18;
  
  if (((ulonglong)param_3[1] < (ulonglong)param_2[10]) && ((int)param_2[8] - 5U < 2)) {
    uVar5 = ntohs(*(u_short *)(param_3 + 6));
    uVar13 = *param_4 + (ulonglong)uVar5;
    *param_4 = uVar13;
    if (((ulonglong)uVar5 <= *(ulonglong *)(param_1 + 0x2b20)) &&
       ((*(ulonglong *)(param_1 + 0x2ae0) <= uVar13 &&
        (uVar13 <= *(ulonglong *)(param_1 + 0x2ae0) + *(longlong *)(param_1 + 0x2ae8))))) {
      uVar2 = *(ushort *)(param_3 + 2);
      lVar14 = (ulonglong)param_3[1] * 0x50 + param_2[9];
      uVar6 = ntohs(*(u_short *)(param_3 + 4));
      uVar3 = *(ushort *)(lVar14 + 0x26);
      uVar4 = (uVar2 >> 0xc) + 0x10;
      if (uVar3 <= uVar2) {
        uVar4 = uVar2 >> 0xc;
      }
      if (((uVar4 < uVar3 >> 0xc) || ((ushort)((uVar3 >> 0xc) + 7) <= uVar4)) ||
         ((uVar2 == uVar3 && (uVar6 <= *(ushort *)(lVar14 + 0x28))))) {
        return 0;
      }
      uVar7 = ntohl(*(u_long *)(param_3 + 0xc));
      uVar8 = ntohl(*(u_long *)(param_3 + 8));
      uVar9 = ntohl(*(u_long *)(param_3 + 0x14));
      uVar10 = ntohl(*(u_long *)(param_3 + 0x10));
      if ((((uVar8 < 0x100001) && (uVar7 < uVar8)) &&
          (uVar13 = (ulonglong)uVar10, uVar13 <= *(ulonglong *)(param_1 + 0x2b20))) &&
         ((uVar9 < uVar10 && (local_res18 = (uint)uVar5, local_res18 <= uVar10 - uVar9)))) {
        plVar11 = *(longlong **)(lVar14 + 0x48);
        if (plVar11 != (longlong *)(lVar14 + 0x40)) {
          uVar3 = *(ushort *)(lVar14 + 0x26);
          do {
            uVar4 = *(ushort *)(plVar11 + 2);
            if (uVar2 < uVar3) {
              if (uVar3 <= uVar4) break;
LAB_180014bbc:
              if (uVar4 < uVar2) break;
              if ((uVar4 <= uVar2) && (*(ushort *)((longlong)plVar11 + 0x12) <= uVar6)) {
                if (uVar6 <= *(ushort *)((longlong)plVar11 + 0x12)) {
                  if ((*(byte *)((longlong)plVar11 + 0x14) & 0xf) != 0xc) {
                    return 0xffffffff;
                  }
                  if (uVar13 != *(ulonglong *)(plVar11[0xb] + 0x18)) {
                    return 0xffffffff;
                  }
                  if (uVar8 != *(u_long *)((longlong)plVar11 + 0x44)) {
                    return 0xffffffff;
                  }
                  goto LAB_180014c04;
                }
                break;
              }
            }
            else if (uVar3 <= uVar4) goto LAB_180014bbc;
            plVar11 = (longlong *)plVar11[1];
          } while (plVar11 != (longlong *)(lVar14 + 0x40));
        }
        plVar11 = FUN_1800126f0(param_2,param_3,0,uVar13,8,uVar8);
        if (plVar11 != (longlong *)0x0) {
LAB_180014c04:
          puVar1 = (uint *)(plVar11[10] + (ulonglong)(uVar7 >> 5) * 4);
          uVar12 = 1 << ((byte)uVar7 & 0x1f);
          if ((*puVar1 & uVar12) != 0) {
            return 0;
          }
          *(int *)(plVar11 + 9) = (int)plVar11[9] + -1;
          *puVar1 = *puVar1 | uVar12;
          uVar13 = *(ulonglong *)(plVar11[0xb] + 0x18);
          uVar12 = (int)uVar13 - uVar9;
          if (uVar9 + uVar5 <= uVar13) {
            uVar12 = (uint)uVar5;
          }
          memcpy((void *)((ulonglong)uVar9 + *(longlong *)(plVar11[0xb] + 0x10)),param_3 + 0x18,
                 (ulonglong)uVar12);
          if ((int)plVar11[9] != 0) {
            return 0;
          }
          FUN_180012350(param_2,lVar14);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}



void FUN_180014cc0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 0x30) = 1;
  iVar1 = (int)param_2[8];
  if (param_3 == (undefined4 *)0x0) {
    if ((iVar1 == 5) || (iVar1 == 6)) {
      if ((int)param_2[0xb] != 0) {
        *(longlong *)(param_2[2] + 0x2b10) = *(longlong *)(param_2[2] + 0x2b10) + -1;
      }
      *(longlong *)(param_2[2] + 0x2b08) = *(longlong *)(param_2[2] + 0x2b08) + -1;
    }
    *(uint *)(param_2 + 8) = (iVar1 == 1) + 3;
    if ((int)param_2[0x2e] == 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x60);
      param_2[1] = (longlong)puVar2;
      *param_2 = param_1 + 0x58;
      *puVar2 = param_2;
      *(longlong **)(param_1 + 0x60) = param_2;
      *(undefined4 *)(param_2 + 0x2e) = 1;
    }
    return;
  }
  if ((iVar1 != 5) && (iVar1 != 6)) {
    if ((int)param_2[0xb] != 0) {
      *(longlong *)(param_2[2] + 0x2b10) = *(longlong *)(param_2[2] + 0x2b10) + 1;
    }
    *(longlong *)(param_2[2] + 0x2b08) = *(longlong *)(param_2[2] + 0x2b08) + 1;
  }
  *(undefined4 *)(param_2 + 8) = 5;
  param_2[0x10] = 0;
  param_2[0xe] = 0;
  param_2[0x14] = 0;
  *(undefined4 *)((longlong)param_2 + 0xac) = 0;
  *param_3 = 1;
  *(longlong **)(param_3 + 2) = param_2;
  param_3[5] = (int)param_2[0x3f];
  return;
}



byte FUN_180014db0(longlong param_1,ushort param_2,byte param_3)

{
  uint *puVar1;
  longlong *plVar2;
  byte bVar3;
  short sVar4;
  longlong *plVar5;
  longlong *plVar6;
  ushort uVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar2 = (longlong *)(param_1 + 0x120);
  bVar9 = true;
  plVar6 = (longlong *)*plVar2;
  if ((longlong *)*plVar2 != plVar2) {
    do {
      plVar5 = plVar6;
      if ((*(ushort *)(plVar5 + 2) == param_2) &&
         (plVar6 = plVar5, *(byte *)((longlong)plVar5 + 0x29) == param_3)) break;
      plVar6 = (longlong *)*plVar5;
    } while (plVar6 != plVar2);
    if (plVar6 != plVar2) {
LAB_180014e48:
      if (plVar5 == (longlong *)0x0) {
        return 0;
      }
      if ((ulonglong)param_3 < *(ulonglong *)(param_1 + 0x50)) {
        uVar7 = param_2 >> 0xc;
        lVar8 = (ulonglong)param_3 * 0x50 + *(longlong *)(param_1 + 0x48);
        sVar4 = *(short *)(lVar8 + 6 + (ulonglong)uVar7 * 2);
        if ((sVar4 != 0) &&
           (sVar4 = sVar4 + -1, *(short *)(lVar8 + (ulonglong)uVar7 * 2 + 6) = sVar4, sVar4 == 0)) {
          *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) & ~(ushort)(1 << uVar7);
        }
      }
      bVar3 = *(byte *)(plVar5 + 5);
      *(longlong *)plVar5[1] = *plVar5;
      *(longlong *)(*plVar5 + 8) = plVar5[1];
      if (plVar5[0xb] != 0) {
        if (bVar9) {
          *(int *)(param_1 + 0x104) =
               *(int *)(param_1 + 0x104) - (uint)*(ushort *)((longlong)plVar5 + 0x24);
        }
        *(longlong *)plVar5[0xb] = *(longlong *)plVar5[0xb] + -1;
        if (*(longlong *)plVar5[0xb] == 0) {
          puVar1 = (uint *)((longlong *)plVar5[0xb] + 1);
          *puVar1 = *puVar1 | 0x100;
          (*(code *)PTR_FUN_180028020)(plVar5[0xb]);
        }
      }
      (*(code *)PTR_free_180028008)(plVar5);
      plVar6 = (longlong *)*plVar2;
      if (plVar6 != plVar2) {
        *(int *)(param_1 + 0x90) = (int)plVar6[3] + *(int *)((longlong)plVar6 + 0x14);
      }
      return bVar3 & 0xf;
    }
  }
  plVar6 = (longlong *)(param_1 + 0x140);
  plVar5 = (longlong *)*plVar6;
  if (plVar5 != plVar6) {
    while (*(short *)((longlong)plVar5 + 0x26) != 0) {
      if ((*(ushort *)(plVar5 + 2) == param_2) && (*(byte *)((longlong)plVar5 + 0x29) == param_3)) {
        if (plVar5 == plVar6) {
          return 0;
        }
        bVar9 = false;
        goto LAB_180014e48;
      }
      plVar5 = (longlong *)*plVar5;
      if (plVar5 == plVar6) {
        return 0;
      }
    }
  }
  return 0;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_180014f40(undefined8 *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  u_short uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ushort hostshort;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  ulonglong local_a0;
  int local_98;
  longlong *local_90;
  int *local_88;
  undefined2 local_80;
  undefined6 uStack_7e;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  u_short local_50;
  u_short local_4e;
  ulonglong local_40;
  
  local_40 = DAT_1800280c0 ^ (ulonglong)auStack_c8;
  local_98 = param_3;
  local_88 = param_2;
  do {
    plVar20 = (longlong *)param_1[7];
    *(undefined4 *)(param_1 + 0xd) = 0;
    if (plVar20 < plVar20 + param_1[8] * 0x41) {
      plVar16 = plVar20 + 0x22;
      do {
        if (((int)plVar16[-0x1a] != 0) && ((int)plVar16[-0x1a] != 9)) {
          plVar9 = param_1 + 0x153;
          *(undefined2 *)(param_1 + 0xf) = 0;
          *plVar9 = 1;
          param_1[0xd0] = 0;
          param_1[0xe] = 4;
          local_90 = plVar20;
          if ((longlong *)*plVar16 != plVar16) {
            puVar19 = (undefined1 *)((longlong)param_1 + 0x7a);
            plVar20 = param_1 + 0xd3;
            plVar13 = (longlong *)*plVar16;
            do {
              if ((((undefined1 *)((longlong)param_1 + 0x67a) <= puVar19) || (plVar9 <= plVar20)) ||
                 ((ulonglong)*(uint *)((longlong)plVar16 + -0x14) - param_1[0xe] < 8)) {
                *(undefined4 *)(param_1 + 0xd) = 1;
                break;
              }
              plVar2 = (longlong *)*plVar13;
              plVar20[1] = (longlong)puVar19;
              *plVar20 = 8;
              param_1[0xe] = param_1[0xe] + 8;
              uVar5 = htons(*(u_short *)((longlong)plVar13 + 0x16));
              *puVar19 = 1;
              puVar19[1] = *(undefined1 *)((longlong)plVar13 + 0x15);
              *(u_short *)(puVar19 + 2) = uVar5;
              *(u_short *)(puVar19 + 4) = uVar5;
              uVar5 = htons(*(u_short *)(plVar13 + 2));
              *(u_short *)(puVar19 + 6) = uVar5;
              if ((*(byte *)((longlong)plVar13 + 0x14) & 0xf) == 4) {
                FUN_180013650((longlong)param_1,local_90,9);
              }
              *(longlong *)plVar13[1] = *plVar13;
              *(longlong *)(*plVar13 + 8) = plVar13[1];
              (*(code *)PTR_free_180028008)(plVar13);
              puVar19 = puVar19 + 0x30;
              plVar20 = plVar20 + 2;
              plVar13 = plVar2;
            } while (plVar2 != plVar16);
            *plVar9 = (longlong)plVar20 + (-0x688 - (longlong)param_1) >> 4;
            param_1[0xd0] = (longlong)(puVar19 + (-0x7a - (longlong)param_1)) / 0x30;
            param_2 = local_88;
            param_3 = local_98;
          }
          plVar20 = local_90;
          if (((param_3 == 0) || ((longlong *)plVar16[2] == plVar16 + 2)) ||
             ((86399999 < (uint)(*(int *)(param_1 + 10) - (int)plVar16[-0x10]) ||
              (uVar8 = FUN_1800132d0((longlong)param_1,local_90,param_2), (int)uVar8 != 1)))) {
            uVar7 = 0;
            if ((((longlong *)plVar16[6] == plVar16 + 6) ||
                (iVar6 = FUN_1800155a0((longlong)param_1,(longlong)plVar20), iVar6 != 0)) &&
               ((longlong *)plVar16[2] == plVar16 + 2)) {
              uVar10 = *(int *)(param_1 + 10) - *(int *)((longlong)plVar16 + -0x84);
              uVar11 = *(int *)((longlong)plVar16 + -0x84) - *(int *)(param_1 + 10);
              if (uVar10 < 86400000) {
                uVar11 = uVar10;
              }
              if ((*(uint *)((longlong)plVar16 + -0x3c) <= uVar11) &&
                 (3 < (ulonglong)*(uint *)((longlong)plVar16 + -0x14) - param_1[0xe])) {
                if ((int)plVar16[-0x1a] == 5) {
                  local_80 = 0xff85;
                  plVar9 = (longlong *)(*(code *)PTR_malloc_180028000)(0x60);
                  if (plVar9 == (longlong *)0x0) {
                    uVar8 = (*(code *)PTR_abort_180028010)();
                    return uVar8;
                  }
                  *(undefined4 *)(plVar9 + 4) = 0;
                  plVar9[5] = CONCAT62(uStack_7e,local_80);
                  plVar9[6] = lStack_78;
                  *(undefined2 *)((longlong)plVar9 + 0x24) = 0;
                  plVar9[0xb] = 0;
                  plVar9[7] = local_70;
                  plVar9[8] = lStack_68;
                  plVar9[9] = local_60;
                  plVar9[10] = lStack_58;
                  FUN_1800130e0((longlong)plVar20,plVar9);
                }
                FUN_1800155a0((longlong)param_1,(longlong)plVar20);
              }
            }
            if ((longlong *)plVar16[8] != plVar16 + 8) {
              FUN_180015960((longlong)param_1,plVar20);
            }
            param_3 = local_98;
            if (param_1[0xd0] != 0) {
              iVar6 = (int)plVar16[-0xf];
              iVar12 = *(int *)(param_1 + 10);
              if (iVar6 == 0) {
                *(int *)(plVar16 + -0xf) = iVar12;
              }
              else {
                uVar11 = iVar6 - iVar12;
                if ((uint)(iVar12 - iVar6) < 86400000) {
                  uVar11 = iVar12 - iVar6;
                }
                if ((9999 < uVar11) && (*(uint *)((longlong)plVar16 + -0x74) != 0)) {
                  uVar10 = (uint)((int)plVar16[-0xd] << 0x10) / *(uint *)((longlong)plVar16 + -0x74)
                  ;
                  uVar11 = *(uint *)(plVar16 + -0xc);
                  iVar6 = *(uint *)((longlong)plVar16 + -0x5c) -
                          (*(uint *)((longlong)plVar16 + -0x5c) >> 2);
                  *(int *)((longlong)plVar16 + -0x5c) = iVar6;
                  if (uVar10 < uVar11) {
                    iVar12 = uVar11 - (uVar11 - uVar10 >> 3);
                    uVar10 = iVar12 - uVar10;
                  }
                  else {
                    iVar12 = uVar11 + (uVar10 - uVar11 >> 3);
                    uVar10 = uVar10 - iVar12;
                  }
                  *(int *)(plVar16 + -0xc) = iVar12;
                  *(uint *)((longlong)plVar16 + -0x5c) = (uVar10 >> 2) + iVar6;
                  *(undefined4 *)(plVar16 + -0xf) = *(undefined4 *)(param_1 + 10);
                  *(undefined4 *)((longlong)plVar16 + -0x74) = 0;
                  *(undefined4 *)(plVar16 + -0xd) = 0;
                }
              }
              param_1[0xd2] = &local_50;
              if (*(short *)(param_1 + 0xf) < 0) {
                local_4e = htons(*(u_short *)(param_1 + 10));
                uVar8 = 4;
              }
              else {
                uVar8 = 2;
              }
              param_1[0xd1] = uVar8;
              uVar14 = 0;
              uVar15 = 0;
              if ((param_1[0x155] != 0) && (uVar15 = uVar14, (code *)param_1[0x156] != (code *)0x0))
              {
                local_a8 = param_1 + 0x359;
                uVar17 = param_1[0xe] - 4;
                local_a0 = uVar17;
                uVar14 = (*(code *)param_1[0x156])
                                   (param_1[0x155],param_1 + 0xd3,param_1[0x153] + -1,uVar17);
                if ((uVar14 != 0) && (uVar14 < uVar17)) {
                  *(ushort *)(param_1 + 0xf) = *(ushort *)(param_1 + 0xf) | 0x4000;
                  uVar15 = uVar14;
                }
              }
              if ((short)plVar16[-0x1f] != -1) {
                *(ushort *)(param_1 + 0xf) =
                     *(ushort *)(param_1 + 0xf) | (ushort)*(byte *)(plVar16 + -0x1e) << 0xb;
              }
              hostshort = (*(ushort *)(plVar16 + -0x1f) ^ *(ushort *)(param_1 + 0xf)) & 0x7ff ^
                          *(ushort *)(param_1 + 0xf);
              if (*(ushort *)(plVar16 + -0x1f) < 0x800) {
                local_50 = htons(hostshort);
              }
              else {
                local_50 = htons(hostshort | 0x2000);
                lVar3 = param_1[0xd1];
                *(byte *)((longlong)&local_50 + lVar3) =
                     (byte)((ushort)(short)plVar16[-0x1f] >> 0xb);
                param_1[0xd1] = lVar3 + 1;
              }
              pcVar4 = (code *)param_1[0x154];
              if (pcVar4 != (code *)0x0) {
                lVar3 = param_1[0xd1];
                puVar18 = (undefined4 *)((longlong)&local_50 + lVar3);
                if ((short)plVar16[-0x1f] != -1) {
                  uVar7 = *(undefined4 *)((longlong)plVar16 + -0xf4);
                }
                *puVar18 = uVar7;
                param_1[0xd1] = lVar3 + 4;
                uVar7 = (*pcVar4)(param_1 + 0xd1,param_1[0x153]);
                *puVar18 = uVar7;
              }
              if (uVar15 != 0) {
                param_1[0xd3] = uVar15;
                param_1[0xd4] = param_1 + 0x359;
                param_1[0x153] = 2;
              }
              *(undefined4 *)(plVar16 + -0x11) = *(undefined4 *)(param_1 + 10);
              iVar6 = FUN_180015ca0(*param_1,(undefined4 *)((longlong)plVar16 + -0xee),
                                    param_1 + 0xd1,(int)param_1[0x153]);
              plVar9 = (longlong *)plVar16[4];
              param_3 = local_98;
              while (local_98 = param_3, plVar9 != plVar16 + 4) {
                *(longlong *)plVar9[1] = *plVar9;
                *(longlong *)(*plVar9 + 8) = plVar9[1];
                plVar13 = (longlong *)plVar9[0xb];
                if (plVar13 != (longlong *)0x0) {
                  *plVar13 = *plVar13 + -1;
                  if (*(longlong *)plVar9[0xb] == 0) {
                    puVar1 = (uint *)((longlong *)plVar9[0xb] + 1);
                    *puVar1 = *puVar1 | 0x100;
                    (*(code *)PTR_FUN_180028020)(plVar9[0xb]);
                  }
                }
                (*(code *)PTR_free_180028008)(plVar9);
                param_3 = local_98;
                plVar9 = (longlong *)plVar16[4];
              }
              if (iVar6 < 0) {
                uVar8 = 0xffffffff;
                goto LAB_18001555c;
              }
              *(int *)(param_1 + 0x55e) = *(int *)(param_1 + 0x55e) + iVar6;
              plVar16[-0x12] = plVar16[-0x12] + (longlong)iVar6;
              *(int *)((longlong)param_1 + 0x2af4) = *(int *)((longlong)param_1 + 0x2af4) + 1;
            }
          }
          else {
            param_3 = local_98;
            if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
              return uVar8;
            }
          }
        }
        plVar20 = plVar20 + 0x41;
        plVar16 = plVar16 + 0x41;
        param_2 = local_88;
      } while (plVar20 < (longlong *)(param_1[8] * 0x208 + param_1[7]));
    }
    if (*(int *)(param_1 + 0xd) == 0) {
      uVar8 = 0;
LAB_18001555c:
      param_1[0xd2] = 0;
      return uVar8;
    }
  } while( true );
}



undefined4 FUN_1800155a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  short *psVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ushort uVar14;
  uint uVar15;
  longlong *plVar16;
  undefined4 uVar17;
  longlong lVar18;
  ulonglong *puVar19;
  longlong *plVar20;
  undefined4 local_res10;
  
  bVar8 = false;
  local_res10 = 1;
  puVar12 = (ulonglong *)(param_1 + 0x688 + *(longlong *)(param_1 + 0xa98) * 0x10);
  plVar9 = *(longlong **)(param_2 + 0x140);
  plVar20 = (longlong *)(param_1 + 0x7a + *(longlong *)(param_1 + 0x680) * 0x30);
  bVar7 = false;
  uVar17 = 1;
  if (plVar9 != (longlong *)(param_2 + 0x140)) {
    puVar19 = puVar12 + 2;
    do {
      if ((ulonglong)*(byte *)((longlong)plVar9 + 0x29) < *(ulonglong *)(param_2 + 0x50)) {
        uVar3 = *(ushort *)(plVar9 + 2);
        lVar18 = (ulonglong)*(byte *)((longlong)plVar9 + 0x29) * 0x50 +
                 *(longlong *)(param_2 + 0x48);
        uVar14 = uVar3 >> 0xc;
        if (lVar18 == 0) goto LAB_1800156e0;
        if (!bVar7) {
          if (((*(short *)((longlong)plVar9 + 0x26) != 0) || ((uVar3 & 0xfff) != 0)) ||
             ((*(ushort *)(lVar18 + 6 + (ulonglong)(uVar14 - 1 & 0xf) * 2) < 0x1000 &&
              (bVar6 = (byte)(uVar3 >> 8),
              ((uint)*(ushort *)(lVar18 + 4) &
              (0xff >> (0x10 - (bVar6 >> 4) & 0x1f) | 0xff << (bVar6 >> 4))) == 0))))
          goto LAB_1800156e0;
          bVar7 = true;
        }
        plVar10 = (longlong *)*plVar9;
      }
      else {
        lVar18 = 0;
        uVar14 = *(ushort *)(plVar9 + 2) >> 0xc;
LAB_1800156e0:
        if (plVar9[0xb] == 0) {
LAB_18001572e:
          local_res10 = 0;
          uVar4 = *(ulonglong *)(&DAT_180028030 + (ulonglong)(*(byte *)(plVar9 + 5) & 0xf) * 8);
          if ((plVar20 < (longlong *)(param_1 + 0x67aU)) &&
             (puVar19 < (ulonglong *)(param_1 + 0xa98U))) {
            if ((uVar4 <= (ulonglong)*(uint *)(param_2 + 0xfc) - *(longlong *)(param_1 + 0x70)) &&
               ((plVar9[0xb] == 0 ||
                ((ushort)((short)uVar4 + *(short *)((longlong)plVar9 + 0x24)) <=
                 (ushort)((short)*(uint *)(param_2 + 0xfc) - (short)*(longlong *)(param_1 + 0x70))))
               )) {
              plVar10 = (longlong *)*plVar9;
              if ((lVar18 != 0) && (*(short *)((longlong)plVar9 + 0x26) == 0)) {
                *(ushort *)(lVar18 + 4) = *(ushort *)(lVar18 + 4) | (ushort)(1 << uVar14);
                psVar2 = (short *)(lVar18 + 6 + (ulonglong)uVar14 * 2);
                *psVar2 = *psVar2 + 1;
              }
              *(short *)((longlong)plVar9 + 0x26) = *(short *)((longlong)plVar9 + 0x26) + 1;
              iVar11 = (int)plVar9[3];
              if (iVar11 == 0) {
                iVar11 = *(int *)(param_2 + 0xf4) + *(int *)(param_2 + 0xf8) * 4;
                *(int *)(plVar9 + 3) = iVar11;
                *(int *)((longlong)plVar9 + 0x1c) = iVar11 * *(int *)(param_2 + 0xd8);
              }
              plVar16 = (longlong *)(param_1 + 0x70);
              plVar1 = (longlong *)(param_2 + 0x120);
              if ((longlong *)*plVar1 == plVar1) {
                *(int *)(param_2 + 0x90) = iVar11 + *(int *)(param_1 + 0x50);
              }
              *(longlong *)plVar9[1] = *plVar9;
              *(longlong *)(*plVar9 + 8) = plVar9[1];
              puVar5 = *(undefined8 **)(param_2 + 0x128);
              plVar9[1] = (longlong)puVar5;
              *plVar9 = (longlong)plVar1;
              *puVar5 = plVar9;
              *(longlong **)(param_2 + 0x128) = plVar9;
              *(undefined4 *)((longlong)plVar9 + 0x14) = *(undefined4 *)(param_1 + 0x50);
              puVar12[1] = (ulonglong)plVar20;
              *puVar12 = uVar4;
              *(ushort *)(param_1 + 0x78) = *(ushort *)(param_1 + 0x78) | 0x8000;
              *plVar16 = *plVar16 + uVar4;
              lVar18 = plVar9[6];
              *plVar20 = plVar9[5];
              plVar20[1] = lVar18;
              lVar18 = plVar9[8];
              plVar20[2] = plVar9[7];
              plVar20[3] = lVar18;
              lVar18 = plVar9[10];
              plVar20[4] = plVar9[9];
              plVar20[5] = lVar18;
              puVar13 = puVar12;
              if (plVar9[0xb] != 0) {
                puVar13 = puVar12 + 2;
                puVar19 = puVar19 + 2;
                puVar12[3] = (ulonglong)*(uint *)(plVar9 + 4) + *(longlong *)(plVar9[0xb] + 0x10);
                *puVar13 = (ulonglong)*(ushort *)((longlong)plVar9 + 0x24);
                *plVar16 = *plVar16 + (ulonglong)*(ushort *)((longlong)plVar9 + 0x24);
                *(int *)(param_2 + 0x104) =
                     *(int *)(param_2 + 0x104) + (uint)*(ushort *)((longlong)plVar9 + 0x24);
              }
              *(int *)(param_2 + 0x9c) = *(int *)(param_2 + 0x9c) + 1;
              plVar20 = plVar20 + 6;
              *(longlong *)(param_2 + 0xa0) = *(longlong *)(param_2 + 0xa0) + 1;
              puVar12 = puVar13 + 2;
              puVar19 = puVar19 + 2;
              goto LAB_1800158c8;
            }
          }
          *(undefined4 *)(param_1 + 0x68) = 1;
          uVar17 = local_res10;
          break;
        }
        if (!bVar8) {
          uVar15 = (uint)(*(int *)(param_2 + 0x100) * *(int *)(param_2 + 0xb8)) >> 5;
          if (uVar15 <= *(uint *)(param_2 + 0xfc)) {
            uVar15 = *(uint *)(param_2 + 0xfc);
          }
          if ((uint)*(ushort *)((longlong)plVar9 + 0x24) + *(int *)(param_2 + 0x104) <= uVar15)
          goto LAB_18001572e;
          bVar8 = true;
        }
        plVar10 = (longlong *)*plVar9;
      }
LAB_1800158c8:
      plVar9 = plVar10;
      uVar17 = local_res10;
    } while (plVar10 != (longlong *)(param_2 + 0x140));
  }
  *(longlong *)(param_1 + 0xa98) = (longlong)puVar12 + (-0x688 - param_1) >> 4;
  *(longlong *)(param_1 + 0x680) = ((longlong)plVar20 + (-0x7a - param_1)) / 0x30;
  return uVar17;
}



void FUN_180015960(longlong param_1,longlong *param_2)

{
  short sVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  
  plVar12 = (longlong *)param_2[0x2a];
  plVar14 = (longlong *)(param_1 + 0x7a + *(longlong *)(param_1 + 0x680) * 0x30);
  puVar11 = (ulonglong *)(param_1 + 0x688 + *(longlong *)(param_1 + 0xa98) * 0x10);
  if (plVar12 != param_2 + 0x2a) {
    puVar15 = puVar11 + 2;
LAB_180015a00:
    do {
      uVar3 = *(ulonglong *)(&DAT_180028030 + (ulonglong)(*(byte *)(plVar12 + 5) & 0xf) * 8);
      if ((((longlong *)(param_1 + 0x67a) <= plVar14) || ((ulonglong *)(param_1 + 0xa98) <= puVar15)
          ) || (uVar9 = (ulonglong)*(uint *)((longlong)param_2 + 0xfc) -
                        *(longlong *)(param_1 + 0x70), uVar9 < uVar3)) {
LAB_180015be5:
        *(undefined4 *)(param_1 + 0x68) = 1;
        break;
      }
      if (plVar12[0xb] == 0) {
        plVar13 = (longlong *)*plVar12;
      }
      else {
        if (uVar9 < *(ushort *)((longlong)plVar12 + 0x24) + uVar3) goto LAB_180015be5;
        plVar13 = (longlong *)*plVar12;
        if (((int)plVar12[4] == 0) &&
           (uVar8 = (int)param_2[0x18] + 7U & 0x1f, *(uint *)(param_2 + 0x18) = uVar8,
           *(uint *)(param_2 + 0x17) < uVar8)) {
          lVar7 = plVar12[2];
          sVar1 = *(short *)((longlong)plVar12 + 0x12);
          plVar10 = plVar12;
          plVar12 = plVar13;
          while( true ) {
            *(longlong *)plVar10[0xb] = *(longlong *)plVar10[0xb] + -1;
            if (*(longlong *)plVar10[0xb] == 0) {
              (*(code *)PTR_FUN_180028020)();
            }
            *(longlong *)plVar10[1] = *plVar10;
            *(longlong *)(*plVar10 + 8) = plVar10[1];
            (*(code *)PTR_free_180028008)(plVar10);
            if (plVar12 == param_2 + 0x2a) goto LAB_180015bc5;
            if (((short)plVar12[2] != (short)lVar7) ||
               (*(short *)((longlong)plVar12 + 0x12) != sVar1)) break;
            plVar10 = plVar12;
            plVar12 = (longlong *)*plVar12;
          }
          goto LAB_180015a00;
        }
      }
      plVar10 = (longlong *)(param_1 + 0x70);
      puVar11[1] = (ulonglong)plVar14;
      *puVar11 = uVar3;
      *plVar10 = *plVar10 + uVar3;
      lVar7 = plVar12[6];
      *plVar14 = plVar12[5];
      plVar14[1] = lVar7;
      uVar5 = *(undefined4 *)((longlong)plVar12 + 0x3c);
      lVar7 = plVar12[8];
      uVar6 = *(undefined4 *)((longlong)plVar12 + 0x44);
      *(int *)(plVar14 + 2) = (int)plVar12[7];
      *(undefined4 *)((longlong)plVar14 + 0x14) = uVar5;
      *(int *)(plVar14 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)plVar14 + 0x1c) = uVar6;
      uVar5 = *(undefined4 *)((longlong)plVar12 + 0x4c);
      lVar7 = plVar12[10];
      uVar6 = *(undefined4 *)((longlong)plVar12 + 0x54);
      *(int *)(plVar14 + 4) = (int)plVar12[9];
      *(undefined4 *)((longlong)plVar14 + 0x24) = uVar5;
      *(int *)(plVar14 + 5) = (int)lVar7;
      *(undefined4 *)((longlong)plVar14 + 0x2c) = uVar6;
      *(longlong *)plVar12[1] = *plVar12;
      *(longlong *)(*plVar12 + 8) = plVar12[1];
      if (plVar12[0xb] == 0) {
        (*(code *)PTR_free_180028008)(plVar12);
        plVar14 = plVar14 + 6;
        puVar11 = puVar11 + 2;
        puVar15 = puVar15 + 2;
        plVar12 = plVar13;
      }
      else {
        plVar14 = plVar14 + 6;
        puVar11[3] = (ulonglong)*(uint *)(plVar12 + 4) + *(longlong *)(plVar12[0xb] + 0x10);
        uVar2 = *(ushort *)((longlong)plVar12 + 0x24);
        puVar11[2] = (ulonglong)uVar2;
        puVar11 = puVar11 + 4;
        *plVar10 = *plVar10 + (ulonglong)uVar2;
        puVar4 = (undefined8 *)param_2[0x27];
        puVar15 = puVar15 + 4;
        plVar12[1] = (longlong)puVar4;
        *plVar12 = (longlong)(param_2 + 0x26);
        *puVar4 = plVar12;
        param_2[0x27] = (longlong)plVar12;
        plVar12 = plVar13;
      }
LAB_180015bc5:
    } while (plVar12 != param_2 + 0x2a);
  }
  *(longlong *)(param_1 + 0xa98) = (longlong)puVar11 + (-0x688 - param_1) >> 4;
  *(longlong *)(param_1 + 0x680) = ((longlong)plVar14 + (-0x7a - param_1)) / 0x30;
  if (((((int)param_2[8] == 6) && ((longlong *)param_2[0x28] == param_2 + 0x28)) &&
      ((longlong *)param_2[0x2a] == param_2 + 0x2a)) &&
     ((longlong *)param_2[0x24] == param_2 + 0x24)) {
    FUN_180012170(param_2,*(u_long *)(param_2 + 0x3f));
    return;
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

int FUN_180015ca0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined2 *local_80;
  uint local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_58 [2];
  undefined2 local_50;
  u_short local_4e;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_1800280c0 ^ (ulonglong)auStack_a8;
  if (param_2 != (undefined4 *)0x0) {
    local_3c = 0;
    local_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    local_50 = 0x17;
    local_4e = htons(*(u_short *)(param_2 + 4));
    uStack_48 = (undefined4)*(undefined8 *)param_2;
    uStack_44 = (undefined4)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    uStack_40 = (undefined4)*(undefined8 *)(param_2 + 2);
    local_3c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
    local_38 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  }
  local_68 = 0;
  local_70 = 0;
  local_78 = -(uint)(param_2 != (undefined4 *)0x0) & 0x1c;
  local_80 = &local_50;
  if (param_2 == (undefined4 *)0x0) {
    local_80 = (undefined2 *)0x0;
  }
  local_88 = 0;
  iVar1 = WSASendTo(param_1,param_3,param_4,local_58);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    local_58[0] = -(uint)(iVar1 != 0x2733);
  }
  return local_58[0];
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Removing unreachable block (ram,0x000180015eee)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180015d90(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  _FILETIME local_48;
  LARGE_INTEGER local_40;
  LARGE_INTEGER local_38;
  LARGE_INTEGER local_30;
  SYSTEMTIME local_28;
  ulonglong local_18;
  
  local_18 = DAT_1800280c0 ^ (ulonglong)auStack_68;
  if (DAT_180028bf4 == 0) {
    DAT_180028bf4 = 1;
    DAT_180028bf8 = QueryPerformanceFrequency(&local_30);
    if (DAT_180028bf8 == 0) {
      local_28.wYear = 0x7b2;
      local_28.wMonth = 1;
      local_28.wDay = 1;
      local_28.wHour = 0;
      local_28.wMinute = 0;
      local_28.wSecond = 0;
      local_28.wMilliseconds = 0;
      SystemTimeToFileTime(&local_28,&local_48);
      _DAT_180029068 = 10.0;
      _DAT_180029060 = local_48;
    }
    else {
      QueryPerformanceCounter((LARGE_INTEGER *)&DAT_180029060);
      _DAT_180029068 = (double)local_30.QuadPart / 1000000.0;
    }
  }
  if (DAT_180028bf8 == 0) {
    GetSystemTimeAsFileTime((LPFILETIME)&local_40.s);
    local_38 = local_40;
  }
  else {
    QueryPerformanceCounter(&local_38);
  }
  lVar2 = (longlong)((double)(local_38.QuadPart - (longlong)_DAT_180029060) / _DAT_180029068);
  iVar1 = (int)(lVar2 / 1000000);
  lVar2 = (longlong)(((int)lVar2 + iVar1 * -1000000) * 1000) + (longlong)iVar1 * 1000000000;
  LOCK();
  UNLOCK();
  if (DAT_180029070 == 0) {
    DAT_180029070 = lVar2 + -1000000;
    LOCK();
    UNLOCK();
  }
  return (ulonglong)(lVar2 - DAT_180029070) / 1000000 & 0xffffffff;
}



void cef_string_utf16_set(void)

{
                    // WARNING: Could not recover jumptable at 0x000180015f20. Too many branches
                    // WARNING: Treating indirect jump as call
  cef_string_utf16_set();
  return;
}



void cef_string_utf16_clear(void)

{
                    // WARNING: Could not recover jumptable at 0x000180015f26. Too many branches
                    // WARNING: Treating indirect jump as call
  cef_string_utf16_clear();
  return;
}



basic_ostream<> * FUN_180015f30(basic_ostream<> *param_1,char *param_2,ulonglong param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  __int64 _Var6;
  ulonglong uVar7;
  basic_streambuf<> *pbVar8;
  basic_ostream<> *this;
  int iVar9;
  longlong lVar10;
  
  lVar10 = 0;
  iVar9 = 0;
  _Var6 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if ((0 < _Var6) &&
     (uVar7 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4))),
     param_3 < uVar7)) {
    _Var6 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    lVar10 = _Var6 - param_3;
  }
  pbVar8 = std::basic_ios<>::rdbuf((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar8 != (basic_streambuf<> *)0x0) {
    (**(code **)(*(longlong *)pbVar8 + 8))(pbVar8);
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  bVar2 = false;
  if (bVar1) {
    this = std::basic_ios<>::tie((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((this == (basic_ostream<> *)0x0) || (this == param_1)) {
      bVar2 = true;
    }
    else {
      std::basic_ostream<>::flush(this);
      bVar2 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  if (bVar2 == false) {
    iVar9 = 4;
  }
  else {
    uVar4 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((uVar4 & 0x1c0) != 0x40) {
      for (; lVar10 != 0; lVar10 = lVar10 + -1) {
        pbVar8 = std::basic_ios<>::rdbuf
                           ((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
        cVar3 = std::basic_ios<>::fill
                          ((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
        iVar5 = std::basic_streambuf<>::sputc(pbVar8,cVar3);
        if (iVar5 == -1) {
          iVar9 = 4;
          goto joined_r0x0001800160a1;
        }
      }
    }
    pbVar8 = std::basic_ios<>::rdbuf((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    uVar7 = std::basic_streambuf<>::sputn(pbVar8,param_2,param_3);
    if (uVar7 == param_3) {
joined_r0x0001800160a1:
      do {
        if (lVar10 == 0) goto LAB_1800160f6;
        pbVar8 = std::basic_ios<>::rdbuf
                           ((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
        cVar3 = std::basic_ios<>::fill
                          ((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
        iVar5 = std::basic_streambuf<>::sputc(pbVar8,cVar3);
        if (iVar5 == -1) break;
        lVar10 = lVar10 + -1;
      } while( true );
    }
    iVar9 = 4;
LAB_1800160f6:
    std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),0);
  }
  std::basic_ios<>::setstate
            ((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar9,false);
  std::basic_ostream<>::_Osfx(param_1);
  pbVar8 = std::basic_ios<>::rdbuf((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar8 != (basic_streambuf<> *)0x0) {
    (**(code **)(*(longlong *)pbVar8 + 0x10))(pbVar8);
  }
  return param_1;
}



undefined4 *
FUN_180016170(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  DWORD DVar1;
  
  *param_1 = param_4;
  FUN_180010660((basic_ostream<> *)(param_1 + 2),1);
  *(undefined8 *)(param_1 + 0x3c) = param_2;
  param_1[0x3e] = param_3;
  DVar1 = GetLastError();
  param_1[0x3f] = DVar1;
  return param_1;
}



undefined4 *
FUN_1800161d0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  DWORD DVar3;
  basic_ostream<> *pbVar4;
  void *pvVar5;
  longlong *plVar6;
  
  *param_1 = 3;
  FUN_180010660((basic_ostream<> *)(param_1 + 2),1);
  *(undefined8 *)(param_1 + 0x3c) = param_2;
  param_1[0x3e] = param_3;
  DVar3 = GetLastError();
  param_1[0x3f] = DVar3;
  pbVar4 = FUN_18000adb0((basic_ostream<> *)(param_1 + 2),"Check failed: ");
  plVar6 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    plVar6 = (longlong *)*param_4;
  }
  FUN_180015f30(pbVar4,(char *)plVar6,param_4[2]);
  uVar1 = param_4[3];
  if (0xf < uVar1) {
    pvVar2 = (void *)*param_4;
    pvVar5 = pvVar2;
    if ((0xfff < uVar1 + 1) &&
       (pvVar5 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar5);
  }
  param_4[2] = 0;
  param_4[3] = 0xf;
  *(undefined1 *)param_4 = 0;
  FUN_18001c9b8(param_4);
  return param_1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_1800162d0(undefined4 *param_1)

{
  undefined8 ****ppppuVar1;
  basic_ios<> *this;
  undefined1 auStack_58 [32];
  undefined8 ***local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1800280c0 ^ (ulonglong)auStack_58;
  FUN_1800163f0((basic_streambuf<> *)(param_1 + 4),(longlong *)local_38);
  ppppuVar1 = local_38;
  if (0xf < local_20) {
    ppppuVar1 = (undefined8 ****)local_38[0];
  }
  cef_log(*(undefined8 *)(param_1 + 0x3c),param_1[0x3e],*param_1,ppppuVar1);
  if (0xf < local_20) {
    ppppuVar1 = (undefined8 ****)local_38[0];
    if ((0xfff < local_20 + 1) &&
       (ppppuVar1 = (undefined8 ****)local_38[0][-1],
       0x1f < (ulonglong)((longlong)local_38[0] + (-8 - (longlong)ppppuVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(ppppuVar1);
  }
  SetLastError(param_1[0x3f]);
  this = (basic_ios<> *)(param_1 + 0x24);
  *(undefined ***)(this + (longlong)*(int *)(*(longlong *)(param_1 + 2) + 4) + -0x88) =
       std::basic_ostringstream<>::vftable;
  *(int *)(this + (longlong)*(int *)(*(longlong *)(param_1 + 2) + 4) + -0x8c) =
       *(int *)(*(longlong *)(param_1 + 2) + 4) + -0x88;
  FUN_1800105a0((basic_streambuf<> *)(param_1 + 4));
  std::basic_ostream<>::~basic_ostream<>((basic_ostream<> *)(param_1 + 6));
  std::basic_ios<>::~basic_ios<>(this);
  return;
}



longlong * FUN_1800163f0(basic_streambuf<> *param_1,longlong *param_2)

{
  char *pcVar1;
  char *pcVar2;
  size_t sStack_18;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  sStack_18 = 0;
  if (((byte)*(undefined4 *)(param_1 + 0x70) & 0x22) != 2) {
    pcVar1 = std::basic_streambuf<>::pptr(param_1);
    if (pcVar1 != (char *)0x0) {
      pcVar1 = std::basic_streambuf<>::pbase(param_1);
      pcVar2 = std::basic_streambuf<>::pptr(param_1);
      if (pcVar2 < *(char **)(param_1 + 0x68)) {
        pcVar2 = *(char **)(param_1 + 0x68);
      }
      sStack_18 = (longlong)pcVar2 - (longlong)pcVar1;
      std::basic_streambuf<>::epptr(param_1);
      goto LAB_1800164b4;
    }
  }
  if (((byte)param_1[0x70] & 4) == 0) {
    pcVar1 = std::basic_streambuf<>::gptr(param_1);
    if (pcVar1 != (char *)0x0) {
      pcVar1 = std::basic_streambuf<>::eback(param_1);
      pcVar2 = std::basic_streambuf<>::egptr(param_1);
      sStack_18 = (longlong)pcVar2 - (longlong)pcVar1;
      goto LAB_1800164b4;
    }
  }
  pcVar1 = (char *)0x0;
LAB_1800164b4:
  if (pcVar1 != (char *)0x0) {
    FUN_180006710(param_2,pcVar1,sStack_18);
  }
  return param_2;
}



longlong * FUN_1800164e0(int *param_1,int *param_2,char *param_3)

{
  basic_ostream<> *pbVar1;
  basic_ostream<> *pbVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iStack_10c;
  undefined *local_108;
  undefined **local_100;
  basic_ostream<> local_f8 [96];
  undefined8 local_98;
  undefined4 local_90;
  basic_ios<> local_80 [104];
  
  plVar4 = (longlong *)0x0;
  if (*param_1 == *param_2) {
    plVar4 = (longlong *)0x0;
  }
  else {
    local_108 = &DAT_180020b48;
    std::basic_ios<>::basic_ios<>(local_80);
    std::basic_ostream<>::basic_ostream<>
              ((basic_ostream<> *)&local_108,(basic_streambuf<> *)&local_100,false);
    *(undefined ***)((longlong)&local_108 + (longlong)*(int *)(local_108 + 4)) =
         std::basic_ostringstream<>::vftable;
    *(int *)((longlong)&iStack_10c + (longlong)*(int *)(local_108 + 4)) =
         *(int *)(local_108 + 4) + -0x88;
    std::basic_streambuf<>::basic_streambuf<>((basic_streambuf<> *)&local_100);
    local_100 = std::basic_stringbuf<>::vftable;
    local_98 = 0;
    local_90 = 4;
    pbVar1 = FUN_18000adb0((basic_ostream<> *)&local_108,param_3);
    pbVar1 = FUN_18000adb0(pbVar1," (");
    pbVar2 = std::basic_ostream<>::operator<<(pbVar1,*param_1);
    pbVar1 = FUN_18000adb0((basic_ostream<> *)pbVar2," vs. ");
    pbVar2 = std::basic_ostream<>::operator<<(pbVar1,*param_2);
    FUN_18000adb0((basic_ostream<> *)pbVar2,")");
    plVar3 = (longlong *)FUN_18001cae0(0x20);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = FUN_1800189b0((longlong)&local_108,plVar3);
    }
    *(undefined ***)((longlong)&local_108 + (longlong)*(int *)(local_108 + 4)) =
         std::basic_ostringstream<>::vftable;
    *(int *)((longlong)&iStack_10c + (longlong)*(int *)(local_108 + 4)) =
         *(int *)(local_108 + 4) + -0x88;
    FUN_1800105a0((basic_streambuf<> *)&local_100);
    std::basic_ostream<>::~basic_ostream<>(local_f8);
    std::basic_ios<>::~basic_ios<>(local_80);
  }
  return plVar4;
}



void * FUN_180016670(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8((void *)(param_1 + -0x18));
  }
  return (void *)(param_1 + -0x18);
}



undefined8 * FUN_1800166a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_18001f618;
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1);
  }
  return param_1;
}



void * FUN_1800166d0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8((void *)(param_1 + -0x10));
  }
  return (void *)(param_1 + -0x10);
}



Singleton<GameClient> * FUN_180016700(Singleton<GameClient> *param_1,uint param_2)

{
  *(undefined ***)(param_1 + -0x18) = &PTR_FUN_18001f770;
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x10) + 4) + -0x10) =
       &PTR_FUN_18001f850;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  *(undefined ***)param_1 = &PTR__purecall_18001f618;
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1 + -0x18);
  }
  return param_1 + -0x18;
}



void FUN_180016770(longlong param_1)

{
  FUN_180017e20(param_1 + -0x18);
  LOCK();
  *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
  UNLOCK();
  return;
}



bool FUN_180016790(Singleton<GameClient> *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x68) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x68))();
  return iVar1 != 0;
}



undefined8 * FUN_180016810(Singleton<GameClient> *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  __uint64 *p_Var2;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_110);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x50) == (code *)0x0) {
    *param_2 = 0;
  }
  else {
    p_Var2 = (__uint64 *)(**(code **)(*(longlong *)(param_1 + -8) + 0x50))();
    FUN_180018650(param_2,p_Var2);
  }
  return param_2;
}



Singleton<GameClient> * FUN_1800168a0(Singleton<GameClient> *param_1)

{
  __uint64 *p_Var1;
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  p_Var1 = (__uint64 *)cef_list_value_create();
  FUN_180018650((undefined8 *)param_1,p_Var1);
  return param_1;
}



longlong * FUN_1800168d0(Singleton<GameClient> *param_1,longlong *param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  __uint64 *p_Var3;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_110);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xa8);
  if (pcVar1 == (code *)0x0) {
    *param_2 = 0;
  }
  else {
    p_Var3 = (__uint64 *)(*pcVar1)(*(longlong *)(param_1 + -8),param_3);
    FUN_180018300(param_2,p_Var3);
  }
  return param_2;
}



bool FUN_180016970(Singleton<GameClient> *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0x88);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)(*(longlong *)(param_1 + -8),param_2);
  return iVar2 != 0;
}



longlong * FUN_180016a10(Singleton<GameClient> *param_1,longlong *param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  __uint64 *p_Var3;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_110);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xb0);
  if (pcVar1 == (code *)0x0) {
    *param_2 = 0;
  }
  else {
    p_Var3 = (__uint64 *)(*pcVar1)(*(longlong *)(param_1 + -8),param_3);
    FUN_1800184a0(param_2,p_Var3);
  }
  return param_2;
}



undefined8 FUN_180016ab0(Singleton<GameClient> *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + -8) + 0x98);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 0;
  }
                    // WARNING: Could not recover jumptable at 0x000180016b3f. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*UNRECOVERED_JUMPTABLE)(*(longlong *)(param_1 + -8),param_2);
  return uVar1;
}



void FUN_180016b50(Singleton<GameClient> *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar1;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_108);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + -8) + 0x90);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x000180016bdc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(*(longlong *)(param_1 + -8),param_2);
  return;
}



undefined8 * FUN_180016be0(Singleton<GameClient> *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  __uint64 *p_Var3;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_110);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xb8);
  if (pcVar1 == (code *)0x0) {
    *param_2 = 0;
  }
  else {
    p_Var3 = (__uint64 *)(*pcVar1)(*(longlong *)(param_1 + -8),param_3);
    FUN_180018650(param_2,p_Var3);
  }
  return param_2;
}



void FUN_180016c80(Singleton<GameClient> *param_1)

{
  longlong *plVar1;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x60) == (code *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x000180016cef. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(longlong *)(param_1 + -8) + 0x60))();
  return;
}



undefined8 * FUN_180016d00(Singleton<GameClient> *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 local_110 [66];
  
  plVar5 = (longlong *)0x0;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    FUN_1800162d0(local_110);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xa0);
  if (pcVar1 == (code *)0x0) {
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    plVar4 = (longlong *)(*pcVar1)(*(longlong *)(param_1 + -8),param_3);
    if (plVar4 != (longlong *)0x0) {
      plVar5 = (longlong *)FUN_18001cae0(0x18);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      lVar2 = plVar4[1];
      *plVar5 = *plVar4;
      plVar5[1] = lVar2;
      plVar5[2] = plVar4[2];
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 0;
      cef_string_userfree_utf16_free(plVar4);
    }
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    if (plVar5 != (longlong *)0x0) {
      lVar2 = plVar5[1];
      lVar3 = *plVar5;
      if ((lVar3 != 0) && (lVar2 != 0)) {
        puVar6 = (undefined8 *)FUN_18001cae0(0x18);
        *param_2 = puVar6;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cef_string_utf16_set(lVar3,lVar2,puVar6,1);
      }
    }
    if ((plVar5 != (longlong *)0x0) && (plVar4 != (longlong *)0x0)) {
      cef_string_utf16_clear(plVar5);
      FUN_18001c9b8(plVar5);
    }
  }
  return param_2;
}



void FUN_180016e80(Singleton<GameClient> *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar1;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_108);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + -8) + 0x78);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x000180016f09. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(*(longlong *)(param_1 + -8),param_2);
  return;
}



longlong * FUN_180016f10(Singleton<GameClient> *param_1,longlong *param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  __uint64 *p_Var3;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_110);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0x80);
  if (pcVar1 == (code *)0x0) {
    *param_2 = 0;
  }
  else {
    p_Var3 = (__uint64 *)(*pcVar1)(*(longlong *)(param_1 + -8),param_3);
    FUN_180018800(param_2,p_Var3);
  }
  return param_2;
}



int * FUN_180016fb0(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined4 local_108 [64];
  
  if (param_2 != '\0') {
    plVar1 = FUN_1800164e0(&DAT_18002809c,(int *)(param_1 + -0x10),
                           "kWrapperType == wrapperStruct->type_");
    if (plVar1 != (longlong *)0x0) {
      FUN_1800161d0(local_108,
                    "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                    ,0xc3,plVar1);
      FUN_1800162d0(local_108);
    }
  }
  return (int *)(param_1 + -0x10);
}



bool FUN_180017010(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  plVar3 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x28),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x20) + 0x20);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



bool FUN_180017090(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  plVar3 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x28),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x20) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



ulonglong FUN_180017110(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  longlong *local_res10;
  undefined4 local_108 [64];
  
  local_res10 = param_2;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_108);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0x48);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_2;
    if (local_res8 == 0) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_1800180f0(&local_res8);
      iVar3 = (*pcVar2)(lVar1,uVar6);
      lVar1 = *param_2;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      uVar5 = (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5;
}



bool FUN_180017220(Singleton<GameClient> *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x30) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x30))();
  return iVar1 != 0;
}



bool FUN_1800172a0(Singleton<GameClient> *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x38) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x38))();
  return iVar1 != 0;
}



ulonglong FUN_180017320(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  longlong *local_res10;
  undefined4 local_108 [64];
  
  local_res10 = param_2;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_108);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0x40);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_2;
    if (local_res8 == 0) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_1800180f0(&local_res8);
      iVar3 = (*pcVar2)(lVar1,uVar6);
      lVar1 = *param_2;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      uVar5 = (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5;
}



bool FUN_180017430(Singleton<GameClient> *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x28) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x28))();
  return iVar1 != 0;
}



longlong FUN_1800174b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  Singleton<GameClient> *this;
  Singleton<GameClient> local_108 [256];
  
  FUN_180017e90((longlong)(param_1 + -3));
  LOCK();
  piVar1 = (int *)(param_1 + -1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    piVar1 = (int *)(param_1 + -5);
    this = (Singleton<GameClient> *)&DAT_180028098;
    plVar3 = FUN_1800164e0(&DAT_180028098,piVar1,"kWrapperType == wrapperStruct->type_");
    uVar4 = 0;
    if (plVar3 != (longlong *)0x0) {
      FUN_1800161d0((undefined4 *)local_108,
                    "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                    ,0xc3,plVar3);
      this = local_108;
      uVar4 = FUN_1800162d0((undefined4 *)this);
    }
    if (piVar1 != (int *)0x0) {
      param_1[-3] = &PTR_FUN_18001f770;
      *(undefined ***)((longlong)*(int *)(param_1[-2] + 4) + -0x10 + (longlong)param_1) =
           &PTR_FUN_18001f850;
      Singleton<GameClient>::~Singleton<GameClient>(this);
      *param_1 = &PTR__purecall_18001f618;
      uVar4 = FUN_18001c9b8(piVar1);
    }
    lVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  else {
    lVar5 = (ulonglong)(uint3)((uint)iVar2 >> 8) << 8;
  }
  return lVar5;
}



bool FUN_180017580(Singleton<GameClient> *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0x70);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)(*(longlong *)(param_1 + -8),param_2);
  return iVar2 != 0;
}



ulonglong FUN_180017620(Singleton<GameClient> *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined4 local_118 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_118,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_118);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0xf0);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_3;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_3;
    if (local_res8 == 0) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_180017f10(&local_res8);
      iVar3 = (*pcVar2)(lVar1,param_2,uVar6);
      lVar1 = *param_3;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      uVar5 = (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5;
}



bool FUN_180017730(Singleton<GameClient> *param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xd0);
  bVar4 = false;
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(*(longlong *)(param_1 + -8),param_2,param_3);
    bVar4 = iVar2 != 0;
  }
  return bVar4;
}



ulonglong FUN_1800177d0(Singleton<GameClient> *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined4 local_118 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_118,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_118);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0xf8);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_3;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_3;
    if (local_res8 == 0) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_180018000(&local_res8);
      iVar3 = (*pcVar2)(lVar1,param_2,uVar6);
      lVar1 = *param_3;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      uVar5 = (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5;
}



bool FUN_1800178e0(Singleton<GameClient> *param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined4 local_118 [68];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_118,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_118);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xe0);
  bVar4 = false;
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(*(longlong *)(param_1 + -8),param_2,param_3);
    bVar4 = iVar2 != 0;
  }
  return bVar4;
}



bool FUN_180017980(Singleton<GameClient> *param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xd8);
  bVar4 = false;
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(*(longlong *)(param_1 + -8),param_2,param_3);
    bVar4 = iVar2 != 0;
  }
  return bVar4;
}



ulonglong FUN_180017a20(Singleton<GameClient> *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined4 local_118 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_118,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_118);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0x100);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_3;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_3;
    if (local_res8 == 0) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_1800180f0(&local_res8);
      iVar3 = (*pcVar2)(lVar1,param_2,uVar6);
      lVar1 = *param_3;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      uVar5 = (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5;
}



bool FUN_180017b30(Singleton<GameClient> *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 200);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)(*(longlong *)(param_1 + -8),param_2);
  return iVar2 != 0;
}



bool FUN_180017bd0(Singleton<GameClient> *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0x58);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)(*(longlong *)(param_1 + -8),param_2);
  return iVar2 != 0;
}



bool FUN_180017c70(Singleton<GameClient> *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xe8);
  bVar4 = false;
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(*(longlong *)(param_1 + -8),param_2,*param_3);
    bVar4 = iVar2 != 0;
  }
  return bVar4;
}



ulonglong FUN_180017d10(Singleton<GameClient> *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined4 local_118 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_118,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_118);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0xc0);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_3;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_3;
    if (local_res8 == 0) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_180018210(&local_res8);
      iVar3 = (*pcVar2)(lVar1,param_2,uVar6);
      lVar1 = *param_3;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      uVar5 = (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5;
}



void FUN_180017e20(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  plVar2 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



bool FUN_180017e90(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  plVar3 = FUN_1800164e0(&DAT_180028098,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0x10);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



undefined8 FUN_180017f10(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 local_108 [64];
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + -0x10);
    if (iVar1 == DAT_18002809c) {
      plVar5 = FUN_1800164e0(&DAT_18002809c,(int *)(lVar2 + -0x10),
                             "kWrapperType == wrapperStruct->type_");
      if (plVar5 != (longlong *)0x0) {
        FUN_1800161d0(local_108,
                      "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                      ,0xc3,plVar5);
        FUN_1800162d0(local_108);
      }
      pcVar3 = *(code **)(*(longlong *)(lVar2 + -8) + 8);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      uVar4 = *(undefined8 *)(lVar2 + -8);
      lVar2 = *param_1;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    else {
      uVar4 = FUN_180019090(iVar1);
      lVar2 = *param_1;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    return uVar4;
  }
  return 0;
}



undefined8 FUN_180018000(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 local_108 [64];
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + -0x10);
    if (iVar1 == DAT_1800280a0) {
      plVar5 = FUN_1800164e0(&DAT_1800280a0,(int *)(lVar2 + -0x10),
                             "kWrapperType == wrapperStruct->type_");
      if (plVar5 != (longlong *)0x0) {
        FUN_1800161d0(local_108,
                      "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                      ,0xc3,plVar5);
        FUN_1800162d0(local_108);
      }
      pcVar3 = *(code **)(*(longlong *)(lVar2 + -8) + 8);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      uVar4 = *(undefined8 *)(lVar2 + -8);
      lVar2 = *param_1;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    else {
      uVar4 = FUN_18001abb0(iVar1);
      lVar2 = *param_1;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    return uVar4;
  }
  return 0;
}



undefined8 FUN_1800180f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  basic_ostream<> *pbVar5;
  undefined4 local_108 [64];
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + -0x10);
    if (iVar1 == DAT_180028098) {
      FUN_180017e20(lVar2);
      uVar3 = *(undefined8 *)(lVar2 + -8);
      lVar2 = *param_1;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    else {
      puVar4 = FUN_180016170(local_108,
                             "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll\\ctocpp\\list_value_ctocpp.cc"
                             ,0x24d,3);
      pbVar5 = FUN_18000adb0((basic_ostream<> *)(puVar4 + 2),"Check failed: false. ");
      pbVar5 = FUN_18000adb0(pbVar5,"UnwrapDerived");
      pbVar5 = FUN_18000adb0(pbVar5," called with unexpected class type ");
      std::basic_ostream<>::operator<<(pbVar5,iVar1);
      FUN_1800162d0(local_108);
      lVar2 = *param_1;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



undefined8 FUN_180018210(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 local_108 [64];
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + -0x10);
    if (iVar1 == DAT_1800280a4) {
      plVar5 = FUN_1800164e0(&DAT_1800280a4,(int *)(lVar2 + -0x10),
                             "kWrapperType == wrapperStruct->type_");
      if (plVar5 != (longlong *)0x0) {
        FUN_1800161d0(local_108,
                      "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                      ,0xc3,plVar5);
        FUN_1800162d0(local_108);
      }
      pcVar3 = *(code **)(*(longlong *)(lVar2 + -8) + 8);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      uVar4 = *(undefined8 *)(lVar2 + -8);
      lVar2 = *param_1;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    else {
      uVar4 = FUN_18001bfb0(iVar1);
      lVar2 = *param_1;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8
                    ))();
      }
    }
    return uVar4;
  }
  return 0;
}



longlong * FUN_180018300(longlong *param_1,__uint64 *param_2)

{
  int *piVar1;
  __uint64 _Var2;
  int iVar3;
  undefined4 *puVar4;
  basic_ostream<> *pbVar5;
  basic_ostream<> *pbVar6;
  int *piVar7;
  longlong *plVar8;
  undefined4 local_110 [66];
  
  if (param_2 == (__uint64 *)0x0) {
    *param_1 = 0;
  }
  else {
    _Var2 = *param_2;
    if ((_Var2 != 0x68) && (iVar3 = cef_get_min_log_level(), iVar3 < 4)) {
      puVar4 = FUN_180016170(local_110,
                             "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                             ,0x7c,3);
      pbVar5 = FUN_18000adb0((basic_ostream<> *)(puVar4 + 2),
                             "Cannot wrap struct with invalid base.size value (got ");
      pbVar6 = std::basic_ostream<>::operator<<(pbVar5,_Var2);
      pbVar5 = FUN_18000adb0((basic_ostream<> *)pbVar6,", expected ");
      pbVar6 = std::basic_ostream<>::operator<<(pbVar5,0x68);
      pbVar5 = FUN_18000adb0((basic_ostream<> *)pbVar6,") at API version ");
      std::basic_ostream<>::operator<<(pbVar5,999999);
      FUN_1800162d0(local_110);
    }
    piVar7 = (int *)FUN_18001cae0(0x30);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      FUN_180018aa0((undefined8 *)(piVar7 + 4),1);
    }
    *piVar7 = DAT_18002809c;
    *(__uint64 **)(piVar7 + 2) = param_2;
    piVar1 = piVar7 + 4;
    if (piVar1 != (int *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(piVar7 + 6) + 4) + 8 + (longlong)piVar1))();
    }
    plVar8 = FUN_1800164e0(&DAT_18002809c,piVar7,"kWrapperType == wrapperStruct->type_");
    if (plVar8 != (longlong *)0x0) {
      FUN_1800161d0(local_110,
                    "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                    ,0xc3,plVar8);
      FUN_1800162d0(local_110);
    }
    if (*(code **)(*(longlong *)(piVar7 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(piVar7 + 2) + 0x10))();
    }
    *param_1 = (longlong)piVar1;
  }
  return param_1;
}



longlong * FUN_1800184a0(longlong *param_1,__uint64 *param_2)

{
  int *piVar1;
  __uint64 _Var2;
  int iVar3;
  undefined4 *puVar4;
  basic_ostream<> *pbVar5;
  basic_ostream<> *pbVar6;
  int *piVar7;
  longlong *plVar8;
  undefined4 local_110 [66];
  
  if (param_2 == (__uint64 *)0x0) {
    *param_1 = 0;
  }
  else {
    _Var2 = *param_2;
    if ((_Var2 != 0x110) && (iVar3 = cef_get_min_log_level(), iVar3 < 4)) {
      puVar4 = FUN_180016170(local_110,
                             "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                             ,0x7c,3);
      pbVar5 = FUN_18000adb0((basic_ostream<> *)(puVar4 + 2),
                             "Cannot wrap struct with invalid base.size value (got ");
      pbVar6 = std::basic_ostream<>::operator<<(pbVar5,_Var2);
      pbVar5 = FUN_18000adb0((basic_ostream<> *)pbVar6,", expected ");
      pbVar6 = std::basic_ostream<>::operator<<(pbVar5,0x110);
      pbVar5 = FUN_18000adb0((basic_ostream<> *)pbVar6,") at API version ");
      std::basic_ostream<>::operator<<(pbVar5,999999);
      FUN_1800162d0(local_110);
    }
    piVar7 = (int *)FUN_18001cae0(0x30);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      FUN_180019120((undefined8 *)(piVar7 + 4),1);
    }
    *piVar7 = DAT_1800280a0;
    *(__uint64 **)(piVar7 + 2) = param_2;
    piVar1 = piVar7 + 4;
    if (piVar1 != (int *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(piVar7 + 6) + 4) + 8 + (longlong)piVar1))();
    }
    plVar8 = FUN_1800164e0(&DAT_1800280a0,piVar7,"kWrapperType == wrapperStruct->type_");
    if (plVar8 != (longlong *)0x0) {
      FUN_1800161d0(local_110,
                    "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                    ,0xc3,plVar8);
      FUN_1800162d0(local_110);
    }
    if (*(code **)(*(longlong *)(piVar7 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(piVar7 + 2) + 0x10))();
    }
    *param_1 = (longlong)piVar1;
  }
  return param_1;
}



undefined8 * FUN_180018650(undefined8 *param_1,__uint64 *param_2)

{
  __uint64 _Var1;
  int iVar2;
  undefined4 *puVar3;
  basic_ostream<> *pbVar4;
  basic_ostream<> *pbVar5;
  undefined4 *puVar6;
  undefined4 local_110 [66];
  
  if (param_2 == (__uint64 *)0x0) {
    *param_1 = 0;
  }
  else {
    _Var1 = *param_2;
    if ((_Var1 != 0x108) && (iVar2 = cef_get_min_log_level(), iVar2 < 4)) {
      puVar3 = FUN_180016170(local_110,
                             "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                             ,0x7c,3);
      pbVar4 = FUN_18000adb0((basic_ostream<> *)(puVar3 + 2),
                             "Cannot wrap struct with invalid base.size value (got ");
      pbVar5 = std::basic_ostream<>::operator<<(pbVar4,_Var1);
      pbVar4 = FUN_18000adb0((basic_ostream<> *)pbVar5,", expected ");
      pbVar5 = std::basic_ostream<>::operator<<(pbVar4,0x108);
      pbVar4 = FUN_18000adb0((basic_ostream<> *)pbVar5,") at API version ");
      std::basic_ostream<>::operator<<(pbVar4,999999);
      FUN_1800162d0(local_110);
    }
    puVar3 = (undefined4 *)FUN_18001cae0(0x30);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *(undefined **)(puVar3 + 6) = &DAT_18001f878;
      *(undefined ***)(puVar3 + 10) = &PTR__purecall_18001f640;
      *(undefined ***)(puVar3 + 4) = &PTR__purecall_18001f668;
      *(undefined ***)((longlong)*(int *)(*(longlong *)(puVar3 + 6) + 4) + 0x18 + (longlong)puVar3)
           = &PTR_FUN_18001f748;
      puVar3[8] = 0;
      *(undefined ***)(puVar3 + 4) = &PTR_FUN_18001f770;
      *(undefined ***)((longlong)*(int *)(*(longlong *)(puVar3 + 6) + 4) + 0x18 + (longlong)puVar3)
           = &PTR_FUN_18001f850;
    }
    *puVar3 = DAT_180028098;
    *(__uint64 **)(puVar3 + 2) = param_2;
    puVar6 = puVar3 + 4;
    if (puVar6 != (undefined4 *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(puVar3 + 6) + 4) + 8 + (longlong)puVar6))();
    }
    FUN_180017e90((longlong)puVar6);
    *param_1 = puVar6;
  }
  return param_1;
}



longlong * FUN_180018800(longlong *param_1,__uint64 *param_2)

{
  int *piVar1;
  __uint64 _Var2;
  int iVar3;
  undefined4 *puVar4;
  basic_ostream<> *pbVar5;
  basic_ostream<> *pbVar6;
  int *piVar7;
  longlong *plVar8;
  undefined4 local_110 [66];
  
  if (param_2 == (__uint64 *)0x0) {
    *param_1 = 0;
  }
  else {
    _Var2 = *param_2;
    if ((_Var2 != 0xd8) && (iVar3 = cef_get_min_log_level(), iVar3 < 4)) {
      puVar4 = FUN_180016170(local_110,
                             "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                             ,0x7c,3);
      pbVar5 = FUN_18000adb0((basic_ostream<> *)(puVar4 + 2),
                             "Cannot wrap struct with invalid base.size value (got ");
      pbVar6 = std::basic_ostream<>::operator<<(pbVar5,_Var2);
      pbVar5 = FUN_18000adb0((basic_ostream<> *)pbVar6,", expected ");
      pbVar6 = std::basic_ostream<>::operator<<(pbVar5,0xd8);
      pbVar5 = FUN_18000adb0((basic_ostream<> *)pbVar6,") at API version ");
      std::basic_ostream<>::operator<<(pbVar5,999999);
      FUN_1800162d0(local_110);
    }
    piVar7 = (int *)FUN_18001cae0(0x30);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      FUN_18001ac40((undefined8 *)(piVar7 + 4),1);
    }
    *piVar7 = DAT_1800280a4;
    *(__uint64 **)(piVar7 + 2) = param_2;
    piVar1 = piVar7 + 4;
    if (piVar1 != (int *)0x0) {
      (*(code *)**(undefined8 **)
                  ((longlong)*(int *)(*(longlong *)(piVar7 + 6) + 4) + 8 + (longlong)piVar1))();
    }
    plVar8 = FUN_1800164e0(&DAT_1800280a4,piVar7,"kWrapperType == wrapperStruct->type_");
    if (plVar8 != (longlong *)0x0) {
      FUN_1800161d0(local_110,
                    "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                    ,0xc3,plVar8);
      FUN_1800162d0(local_110);
    }
    if (*(code **)(*(longlong *)(piVar7 + 2) + 0x10) != (code *)0x0) {
      (**(code **)(*(longlong *)(piVar7 + 2) + 0x10))();
    }
    *param_1 = (longlong)piVar1;
  }
  return param_1;
}



longlong * FUN_1800189b0(longlong param_1,longlong *param_2)

{
  basic_streambuf<> *this;
  char *pcVar1;
  char *pcVar2;
  size_t sStack_38;
  
  this = (basic_streambuf<> *)(param_1 + 8);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  sStack_38 = 0;
  if (((byte)*(undefined4 *)(param_1 + 0x78) & 0x22) != 2) {
    pcVar1 = std::basic_streambuf<>::pptr(this);
    if (pcVar1 != (char *)0x0) {
      pcVar1 = std::basic_streambuf<>::pbase(this);
      pcVar2 = std::basic_streambuf<>::pptr(this);
      if (pcVar2 < *(char **)(param_1 + 0x70)) {
        pcVar2 = *(char **)(param_1 + 0x70);
      }
      sStack_38 = (longlong)pcVar2 - (longlong)pcVar1;
      std::basic_streambuf<>::epptr(this);
      goto LAB_180018a71;
    }
  }
  if ((*(byte *)(param_1 + 0x78) & 4) == 0) {
    pcVar1 = std::basic_streambuf<>::gptr(this);
    if (pcVar1 != (char *)0x0) {
      pcVar1 = std::basic_streambuf<>::eback(this);
      pcVar2 = std::basic_streambuf<>::egptr(this);
      sStack_38 = (longlong)pcVar2 - (longlong)pcVar1;
      goto LAB_180018a71;
    }
  }
  pcVar1 = (char *)0x0;
LAB_180018a71:
  if (pcVar1 != (char *)0x0) {
    FUN_180006710(param_2,pcVar1,sStack_38);
  }
  return param_2;
}



undefined8 * FUN_180018aa0(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_18001fb38;
    param_1[3] = &PTR__purecall_18001f618;
  }
  *param_1 = &PTR__purecall_18001fa68;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_18001f640;
  *param_1 = &PTR__purecall_18001fa68;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_FUN_18001faa8;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_18001fad0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_FUN_18001fb10;
  return param_1;
}



Singleton<GameClient> * FUN_180018b30(Singleton<GameClient> *param_1,uint param_2)

{
  *(undefined ***)(param_1 + -0x18) = &PTR_FUN_18001fad0;
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x10) + 4) + -0x10) =
       &PTR_FUN_18001fb10;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  *(undefined ***)param_1 = &PTR__purecall_18001f618;
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1 + -0x18);
  }
  return param_1 + -0x18;
}



void FUN_180018ba0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = FUN_180016fb0(param_1 + -0x18,'\x01');
  if (*(code **)(*(longlong *)(piVar1 + 2) + 8) != (code *)0x0) {
    (**(code **)(*(longlong *)(piVar1 + 2) + 8))();
  }
  LOCK();
  *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
  UNLOCK();
  return;
}



longlong * FUN_180018bd0(Singleton<GameClient> *param_1,longlong *param_2)

{
  int *piVar1;
  __uint64 *p_Var2;
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  piVar1 = FUN_180016fb0((longlong)param_1,'\x01');
  if (*(code **)(*(longlong *)(piVar1 + 2) + 0x48) == (code *)0x0) {
    *param_2 = 0;
    return param_2;
  }
  p_Var2 = (__uint64 *)(**(code **)(*(longlong *)(piVar1 + 2) + 0x48))();
  FUN_180018300(param_2,p_Var2);
  return param_2;
}



undefined8
FUN_180018c30(Singleton<GameClient> *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  piVar2 = FUN_180016fb0((longlong)param_1,'\x01');
  pcVar1 = *(code **)(*(longlong *)(piVar2 + 2) + 0x60);
  if ((pcVar1 == (code *)0x0) || (param_2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*pcVar1)(*(longlong *)(piVar2 + 2),param_2,param_3,param_4);
  }
  return uVar3;
}



void FUN_180018ca0(Singleton<GameClient> *param_1)

{
  int *piVar1;
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  piVar1 = FUN_180016fb0((longlong)param_1,'\x01');
  if (*(code **)(*(longlong *)(piVar1 + 2) + 0x50) == (code *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x000180018cd0. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(longlong *)(piVar1 + 2) + 0x50))();
  return;
}



void FUN_180018ce0(Singleton<GameClient> *param_1)

{
  int *piVar1;
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  piVar1 = FUN_180016fb0((longlong)param_1,'\x01');
  if (*(code **)(*(longlong *)(piVar1 + 2) + 0x58) == (code *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x000180018d10. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(longlong *)(piVar1 + 2) + 0x58))();
  return;
}



bool FUN_180018d20(longlong param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = FUN_180016fb0(param_1 + -0x18,'\x01');
  if (*(code **)(*(longlong *)(piVar2 + 2) + 0x20) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(piVar2 + 2) + 0x20))();
  return iVar1 != 0;
}



bool FUN_180018d50(longlong param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = FUN_180016fb0(param_1 + -0x18,'\x01');
  if (*(code **)(*(longlong *)(piVar2 + 2) + 0x18) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(piVar2 + 2) + 0x18))();
  return iVar1 != 0;
}



ulonglong FUN_180018d80(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong local_res18;
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  piVar4 = FUN_180016fb0((longlong)param_1,'\x01');
  lVar1 = *(longlong *)(piVar4 + 2);
  pcVar2 = *(code **)(lVar1 + 0x40);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      piVar4 = (int *)(**(code **)(*(longlong *)
                                    ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                                  8))();
    }
    return (ulonglong)piVar4 & 0xffffffffffffff00;
  }
  local_res18 = *param_2;
  if (local_res18 == 0) {
    return (ulonglong)piVar4 & 0xffffffffffffff00;
  }
  (*(code *)**(undefined8 **)
              (local_res18 + 8 + (longlong)*(int *)(*(longlong *)(local_res18 + 8) + 4)))();
  uVar5 = FUN_180017f10(&local_res18);
  iVar3 = (*pcVar2)(lVar1,uVar5);
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return (ulonglong)(iVar3 != 0);
}



bool FUN_180018e70(Singleton<GameClient> *param_1)

{
  int iVar1;
  int *piVar2;
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  piVar2 = FUN_180016fb0((longlong)param_1,'\x01');
  if (*(code **)(*(longlong *)(piVar2 + 2) + 0x30) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(piVar2 + 2) + 0x30))();
  return iVar1 != 0;
}



ulonglong FUN_180018eb0(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong local_res18;
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  piVar4 = FUN_180016fb0((longlong)param_1,'\x01');
  lVar1 = *(longlong *)(piVar4 + 2);
  pcVar2 = *(code **)(lVar1 + 0x38);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      piVar4 = (int *)(**(code **)(*(longlong *)
                                    ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) +
                                  8))();
    }
    return (ulonglong)piVar4 & 0xffffffffffffff00;
  }
  local_res18 = *param_2;
  if (local_res18 == 0) {
    return (ulonglong)piVar4 & 0xffffffffffffff00;
  }
  (*(code *)**(undefined8 **)
              (local_res18 + 8 + (longlong)*(int *)(*(longlong *)(local_res18 + 8) + 4)))();
  uVar5 = FUN_180017f10(&local_res18);
  iVar3 = (*pcVar2)(lVar1,uVar5);
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))()
    ;
  }
  return (ulonglong)(iVar3 != 0);
}



bool FUN_180018fa0(Singleton<GameClient> *param_1)

{
  int iVar1;
  int *piVar2;
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  piVar2 = FUN_180016fb0((longlong)param_1,'\x01');
  if (*(code **)(*(longlong *)(piVar2 + 2) + 0x28) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(piVar2 + 2) + 0x28))();
  return iVar1 != 0;
}



undefined8 FUN_180018fe0(longlong param_1)

{
  int iVar1;
  Singleton<GameClient> *this;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = FUN_180016fb0(param_1 + -0x18,'\x01');
  if (*(code **)(*(longlong *)(piVar2 + 2) + 0x10) != (code *)0x0) {
    (**(code **)(*(longlong *)(piVar2 + 2) + 0x10))();
  }
  LOCK();
  piVar2 = (int *)(param_1 + -8);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 == 1) {
    piVar2 = FUN_180016fb0(param_1 + -0x18,'\x01');
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      *(undefined ***)(piVar2 + 4) = &PTR_FUN_18001fad0;
      this = *(Singleton<GameClient> **)(piVar2 + 6);
      *(undefined ***)((longlong)*(int *)(this + 4) + 0x18 + (longlong)piVar2) = &PTR_FUN_18001fb10;
      Singleton<GameClient>::~Singleton<GameClient>(this);
      *(undefined ***)(piVar2 + 10) = &PTR__purecall_18001f618;
      uVar3 = FUN_18001c9b8(piVar2);
    }
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
}



undefined8 FUN_180019090(int param_1)

{
  undefined4 *puVar1;
  basic_ostream<> *pbVar2;
  undefined4 local_108 [64];
  
  puVar1 = FUN_180016170(local_108,
                         "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll\\ctocpp\\binary_value_ctocpp.cc"
                         ,0xd9,3);
  pbVar2 = FUN_18000adb0((basic_ostream<> *)(puVar1 + 2),"Check failed: false. ");
  pbVar2 = FUN_18000adb0(pbVar2,"UnwrapDerived");
  pbVar2 = FUN_18000adb0(pbVar2," called with unexpected class type ");
  std::basic_ostream<>::operator<<(pbVar2,param_1);
  FUN_1800162d0(local_108);
  return 0;
}



undefined8 * FUN_180019120(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_18001fde0;
    param_1[3] = &PTR__purecall_18001f618;
  }
  *param_1 = &PTR__purecall_18001fbc0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_18001f640;
  *param_1 = &PTR__purecall_18001fbc0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_FUN_18001fca8;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_18001fcd0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_FUN_18001fdb8;
  return param_1;
}



Singleton<GameClient> * FUN_1800191b0(Singleton<GameClient> *param_1,uint param_2)

{
  *(undefined ***)(param_1 + -0x18) = &PTR_FUN_18001fcd0;
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x10) + 4) + -0x10) =
       &PTR_FUN_18001fdb8;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  *(undefined ***)param_1 = &PTR__purecall_18001f618;
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1 + -0x18);
  }
  return param_1 + -0x18;
}



void FUN_180019220(longlong param_1)

{
  FUN_18001aac0(param_1 + -0x18);
  LOCK();
  *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
  UNLOCK();
  return;
}



bool FUN_180019240(Singleton<GameClient> *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x60) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x60))();
  return iVar1 != 0;
}



longlong * FUN_1800192c0(Singleton<GameClient> *param_1,longlong *param_2,undefined1 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  __uint64 *p_Var3;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_110);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0x50);
  if (pcVar1 == (code *)0x0) {
    *param_2 = 0;
  }
  else {
    p_Var3 = (__uint64 *)(*pcVar1)(*(longlong *)(param_1 + -8),param_3);
    FUN_1800184a0(param_2,p_Var3);
  }
  return param_2;
}



longlong * FUN_180019360(Singleton<GameClient> *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  __uint64 *p_Var2;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_110);
  }
  if (((*(code **)(*(longlong *)(param_1 + -8) + 0xb0) == (code *)0x0) || (*param_3 == 0)) ||
     (*(longlong *)(*param_3 + 8) == 0)) {
    *param_2 = 0;
  }
  else {
    p_Var2 = (__uint64 *)(**(code **)(*(longlong *)(param_1 + -8) + 0xb0))();
    FUN_180018300(param_2,p_Var2);
  }
  return param_2;
}



bool FUN_180019410(Singleton<GameClient> *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (((*(code **)(*(longlong *)(param_1 + -8) + 0x90) != (code *)0x0) && (*param_2 != 0)) &&
     (*(longlong *)(*param_2 + 8) != 0)) {
    iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x90))();
    return iVar1 != 0;
  }
  return false;
}



longlong * FUN_1800194c0(Singleton<GameClient> *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  __uint64 *p_Var2;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_110);
  }
  if (((*(code **)(*(longlong *)(param_1 + -8) + 0xb8) == (code *)0x0) || (*param_3 == 0)) ||
     (*(longlong *)(*param_3 + 8) == 0)) {
    *param_2 = 0;
  }
  else {
    p_Var2 = (__uint64 *)(**(code **)(*(longlong *)(param_1 + -8) + 0xb8))();
    FUN_1800184a0(param_2,p_Var2);
  }
  return param_2;
}



undefined8 FUN_180019570(Singleton<GameClient> *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (((*(code **)(*(longlong *)(param_1 + -8) + 0xa0) != (code *)0x0) && (*param_2 != 0)) &&
     (*(longlong *)(*param_2 + 8) != 0)) {
                    // WARNING: Could not recover jumptable at 0x0001800195f7. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0xa0))();
    return uVar1;
  }
  return 0;
}



undefined8 FUN_180019610(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_108);
  }
  if (((*(code **)(*(longlong *)(param_1 + -8) + 0x98) != (code *)0x0) && (*param_2 != 0)) &&
     (*(longlong *)(*param_2 + 8) != 0)) {
                    // WARNING: Could not recover jumptable at 0x000180019697. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x98))();
    return uVar2;
  }
  return 0;
}



bool FUN_1800196b0(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 local_118 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_118,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    FUN_1800162d0(local_118);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  if (*(longlong *)(lVar1 + 0x70) == 0) {
    return false;
  }
  lVar5 = cef_string_list_alloc();
  if (lVar5 == 0) {
    iVar3 = (**(code **)(lVar1 + 0x70))(lVar1);
  }
  else {
    FUN_18001c400(param_2,lVar5);
    iVar3 = (**(code **)(lVar1 + 0x70))(lVar1,lVar5);
    plVar4 = (longlong *)*param_2;
    plVar2 = (longlong *)param_2[1];
    if (plVar4 != plVar2) {
      do {
        if (*plVar4 != 0) {
          if ((char)plVar4[1] != '\0') {
            cef_string_utf16_clear();
            FUN_18001c9b8((void *)*plVar4);
          }
          *plVar4 = 0;
          *(undefined1 *)(plVar4 + 1) = 0;
        }
        plVar4 = plVar4 + 2;
      } while (plVar4 != plVar2);
      param_2[1] = *param_2;
    }
    FUN_18001c460(lVar5,param_2);
    cef_string_list_free(lVar5);
  }
  return iVar3 != 0;
}



undefined8 * FUN_180019800(Singleton<GameClient> *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  __uint64 *p_Var2;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_110);
  }
  if (((*(code **)(*(longlong *)(param_1 + -8) + 0xc0) == (code *)0x0) || (*param_3 == 0)) ||
     (*(longlong *)(*param_3 + 8) == 0)) {
    *param_2 = 0;
  }
  else {
    p_Var2 = (__uint64 *)(**(code **)(*(longlong *)(param_1 + -8) + 0xc0))();
    FUN_180018650(param_2,p_Var2);
  }
  return param_2;
}



void FUN_1800198b0(Singleton<GameClient> *param_1)

{
  longlong *plVar1;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x58) == (code *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00018001991f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(longlong *)(param_1 + -8) + 0x58))();
  return;
}



undefined8 * FUN_180019930(Singleton<GameClient> *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 local_110 [66];
  
  plVar4 = (longlong *)0x0;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_110);
  }
  if (((*(code **)(*(longlong *)(param_1 + -8) + 0xa8) == (code *)0x0) || (*param_3 == 0)) ||
     (*(longlong *)(*param_3 + 8) == 0)) {
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + -8) + 0xa8))();
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)FUN_18001cae0(0x18);
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 0;
      lVar1 = plVar3[1];
      *plVar4 = *plVar3;
      plVar4[1] = lVar1;
      plVar4[2] = plVar3[2];
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
      cef_string_userfree_utf16_free(plVar3);
    }
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    if (plVar4 != (longlong *)0x0) {
      lVar1 = plVar4[1];
      lVar2 = *plVar4;
      if ((lVar2 != 0) && (lVar1 != 0)) {
        puVar5 = (undefined8 *)FUN_18001cae0(0x18);
        *param_2 = puVar5;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cef_string_utf16_set(lVar2,lVar1,puVar5,1);
      }
    }
    if ((plVar4 != (longlong *)0x0) && (plVar3 != (longlong *)0x0)) {
      cef_string_utf16_clear(plVar4);
      FUN_18001c9b8(plVar4);
    }
  }
  return param_2;
}



undefined8 FUN_180019ad0(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_108);
  }
  if (((*(code **)(*(longlong *)(param_1 + -8) + 0x80) != (code *)0x0) && (*param_2 != 0)) &&
     (*(longlong *)(*param_2 + 8) != 0)) {
                    // WARNING: Could not recover jumptable at 0x000180019b57. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x80))();
    return uVar2;
  }
  return 0;
}



longlong * FUN_180019b70(Singleton<GameClient> *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  __uint64 *p_Var2;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_110);
  }
  if (((*(code **)(*(longlong *)(param_1 + -8) + 0x88) == (code *)0x0) || (*param_3 == 0)) ||
     (*(longlong *)(*param_3 + 8) == 0)) {
    *param_2 = 0;
  }
  else {
    p_Var2 = (__uint64 *)(**(code **)(*(longlong *)(param_1 + -8) + 0x88))();
    FUN_180018800(param_2,p_Var2);
  }
  return param_2;
}



bool FUN_180019c20(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  plVar3 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x28),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x20) + 0x20);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



bool FUN_180019ca0(Singleton<GameClient> *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (((*(code **)(*(longlong *)(param_1 + -8) + 0x68) != (code *)0x0) && (*param_2 != 0)) &&
     (*(longlong *)(*param_2 + 8) != 0)) {
    iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x68))();
    return iVar1 != 0;
  }
  return false;
}



bool FUN_180019d40(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  plVar3 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x28),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x20) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



ulonglong FUN_180019dc0(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  longlong *local_res10;
  undefined4 local_108 [64];
  
  local_res10 = param_2;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_108);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0x48);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_2;
    if (local_res8 == 0) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_180018000(&local_res8);
      iVar3 = (*pcVar2)(lVar1,uVar6);
      lVar1 = *param_2;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      uVar5 = (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5;
}



bool FUN_180019ed0(Singleton<GameClient> *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x30) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x30))();
  return iVar1 != 0;
}



bool FUN_180019f50(Singleton<GameClient> *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x38) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x38))();
  return iVar1 != 0;
}



ulonglong FUN_180019fd0(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  longlong *local_res10;
  undefined4 local_108 [64];
  
  local_res10 = param_2;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_108);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0x40);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_2;
    if (local_res8 == 0) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_180018000(&local_res8);
      iVar3 = (*pcVar2)(lVar1,uVar6);
      lVar1 = *param_2;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      uVar5 = (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5;
}



bool FUN_18001a0e0(Singleton<GameClient> *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x28) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x28))();
  return iVar1 != 0;
}



longlong FUN_18001a160(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  Singleton<GameClient> *this;
  Singleton<GameClient> local_108 [256];
  
  FUN_18001ab30((longlong)(param_1 + -3));
  LOCK();
  piVar1 = (int *)(param_1 + -1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    piVar1 = (int *)(param_1 + -5);
    this = (Singleton<GameClient> *)&DAT_1800280a0;
    plVar3 = FUN_1800164e0(&DAT_1800280a0,piVar1,"kWrapperType == wrapperStruct->type_");
    uVar4 = 0;
    if (plVar3 != (longlong *)0x0) {
      FUN_1800161d0((undefined4 *)local_108,
                    "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                    ,0xc3,plVar3);
      this = local_108;
      uVar4 = FUN_1800162d0((undefined4 *)this);
    }
    if (piVar1 != (int *)0x0) {
      param_1[-3] = &PTR_FUN_18001fcd0;
      *(undefined ***)((longlong)*(int *)(param_1[-2] + 4) + -0x10 + (longlong)param_1) =
           &PTR_FUN_18001fdb8;
      Singleton<GameClient>::~Singleton<GameClient>(this);
      *param_1 = &PTR__purecall_18001f618;
      uVar4 = FUN_18001c9b8(piVar1);
    }
    lVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  else {
    lVar5 = (ulonglong)(uint3)((uint)iVar2 >> 8) << 8;
  }
  return lVar5;
}



bool FUN_18001a230(Singleton<GameClient> *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (((*(code **)(*(longlong *)(param_1 + -8) + 0x78) != (code *)0x0) && (*param_2 != 0)) &&
     (*(longlong *)(*param_2 + 8) != 0)) {
    iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x78))();
    return iVar1 != 0;
  }
  return false;
}



ulonglong FUN_18001a2d0(Singleton<GameClient> *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined4 local_118 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_118,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_118);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0xf8);
  if (((pcVar2 == (code *)0x0) || (uVar5 = *param_2, uVar5 == 0)) || (*(longlong *)(uVar5 + 8) == 0)
     ) {
    lVar1 = *param_3;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_3;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_180017f10(&local_res8);
      iVar3 = (*pcVar2)(lVar1,*param_2,uVar6);
      lVar1 = *param_3;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



bool FUN_18001a3f0(Singleton<GameClient> *param_1,longlong *param_2,undefined1 param_3)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xd8);
  if (((pcVar1 == (code *)0x0) || (lVar2 = *param_2, lVar2 == 0)) || (*(longlong *)(lVar2 + 8) == 0)
     ) {
    bVar5 = false;
  }
  else {
    iVar3 = (*pcVar1)(*(longlong *)(param_1 + -8),lVar2,param_3);
    bVar5 = iVar3 != 0;
  }
  return bVar5;
}



ulonglong FUN_18001a4a0(Singleton<GameClient> *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined4 local_118 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_118,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_118);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0x100);
  if (((pcVar2 == (code *)0x0) || (uVar5 = *param_2, uVar5 == 0)) || (*(longlong *)(uVar5 + 8) == 0)
     ) {
    lVar1 = *param_3;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_3;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_180018000(&local_res8);
      iVar3 = (*pcVar2)(lVar1,*param_2,uVar6);
      lVar1 = *param_3;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



bool FUN_18001a5c0(Singleton<GameClient> *param_1,longlong *param_2,undefined4 param_3)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 local_118 [68];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_118,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    FUN_1800162d0(local_118);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xe8);
  if (((pcVar1 == (code *)0x0) || (lVar2 = *param_2, lVar2 == 0)) || (*(longlong *)(lVar2 + 8) == 0)
     ) {
    bVar5 = false;
  }
  else {
    iVar3 = (*pcVar1)(*(longlong *)(param_1 + -8),lVar2,param_3);
    bVar5 = iVar3 != 0;
  }
  return bVar5;
}



bool FUN_18001a670(Singleton<GameClient> *param_1,longlong *param_2,undefined4 param_3)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xe0);
  if (((pcVar1 == (code *)0x0) || (lVar2 = *param_2, lVar2 == 0)) || (*(longlong *)(lVar2 + 8) == 0)
     ) {
    bVar5 = false;
  }
  else {
    iVar3 = (*pcVar1)(*(longlong *)(param_1 + -8),lVar2,param_3);
    bVar5 = iVar3 != 0;
  }
  return bVar5;
}



ulonglong FUN_18001a720(Singleton<GameClient> *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined4 local_118 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_118,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_118);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0x108);
  if (((pcVar2 == (code *)0x0) || (uVar5 = *param_2, uVar5 == 0)) || (*(longlong *)(uVar5 + 8) == 0)
     ) {
    lVar1 = *param_3;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_3;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_1800180f0(&local_res8);
      iVar3 = (*pcVar2)(lVar1,*param_2,uVar6);
      lVar1 = *param_3;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



bool FUN_18001a840(Singleton<GameClient> *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (((*(code **)(*(longlong *)(param_1 + -8) + 0xd0) != (code *)0x0) && (*param_2 != 0)) &&
     (*(longlong *)(*param_2 + 8) != 0)) {
    iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0xd0))();
    return iVar1 != 0;
  }
  return false;
}



bool FUN_18001a8f0(Singleton<GameClient> *param_1,longlong *param_2,undefined8 *param_3)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xf0);
  if (((pcVar1 == (code *)0x0) || (lVar2 = *param_2, lVar2 == 0)) || (*(longlong *)(lVar2 + 8) == 0)
     ) {
    bVar5 = false;
  }
  else {
    iVar3 = (*pcVar1)(*(longlong *)(param_1 + -8),lVar2,*param_3);
    bVar5 = iVar3 != 0;
  }
  return bVar5;
}



ulonglong FUN_18001a9a0(Singleton<GameClient> *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined4 local_118 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_118,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_118);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 200);
  if (((pcVar2 == (code *)0x0) || (uVar5 = *param_2, uVar5 == 0)) || (*(longlong *)(uVar5 + 8) == 0)
     ) {
    lVar1 = *param_3;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
  }
  else {
    local_res8 = *param_3;
    if (local_res8 != 0) {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_180018210(&local_res8);
      iVar3 = (*pcVar2)(lVar1,*param_2,uVar6);
      lVar1 = *param_3;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      return (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



void FUN_18001aac0(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  plVar2 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



bool FUN_18001ab30(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  plVar3 = FUN_1800164e0(&DAT_1800280a0,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0x10);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



undefined8 FUN_18001abb0(int param_1)

{
  undefined4 *puVar1;
  basic_ostream<> *pbVar2;
  undefined4 local_108 [64];
  
  puVar1 = FUN_180016170(local_108,
                         "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll\\ctocpp\\dictionary_value_ctocpp.cc"
                         ,0x2f6,3);
  pbVar2 = FUN_18000adb0((basic_ostream<> *)(puVar1 + 2),"Check failed: false. ");
  pbVar2 = FUN_18000adb0(pbVar2,"UnwrapDerived");
  pbVar2 = FUN_18000adb0(pbVar2," called with unexpected class type ");
  std::basic_ostream<>::operator<<(pbVar2,param_1);
  FUN_1800162d0(local_108);
  return 0;
}



undefined8 * FUN_18001ac40(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_180020028;
    param_1[3] = &PTR__purecall_18001f618;
  }
  *param_1 = &PTR__purecall_18001fe78;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_18001f640;
  *param_1 = &PTR__purecall_18001fe78;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_FUN_18001ff28;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_18001ff50;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_FUN_180020000;
  return param_1;
}



Singleton<GameClient> * FUN_18001acd0(Singleton<GameClient> *param_1,uint param_2)

{
  *(undefined ***)(param_1 + -0x18) = &PTR_FUN_18001ff50;
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x10) + 4) + -0x10) =
       &PTR_FUN_180020000;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  *(undefined ***)param_1 = &PTR__purecall_18001f618;
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1 + -0x18);
  }
  return param_1 + -0x18;
}



void FUN_18001ad40(longlong param_1)

{
  FUN_18001bec0(param_1 + -0x18);
  LOCK();
  *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
  UNLOCK();
  return;
}



longlong * FUN_18001ad60(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong *plVar1;
  __uint64 *p_Var2;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_110);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x50) == (code *)0x0) {
    *param_2 = 0;
  }
  else {
    p_Var2 = (__uint64 *)(**(code **)(*(longlong *)(param_1 + -8) + 0x50))();
    FUN_180018800(param_2,p_Var2);
  }
  return param_2;
}



longlong * FUN_18001adf0(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong *plVar1;
  __uint64 *p_Var2;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_110);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x80) == (code *)0x0) {
    *param_2 = 0;
  }
  else {
    p_Var2 = (__uint64 *)(**(code **)(*(longlong *)(param_1 + -8) + 0x80))();
    FUN_180018300(param_2,p_Var2);
  }
  return param_2;
}



bool FUN_18001ae80(Singleton<GameClient> *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x60) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x60))();
  return iVar1 != 0;
}



longlong * FUN_18001af00(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong *plVar1;
  __uint64 *p_Var2;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_110);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x88) == (code *)0x0) {
    *param_2 = 0;
  }
  else {
    p_Var2 = (__uint64 *)(**(code **)(*(longlong *)(param_1 + -8) + 0x88))();
    FUN_1800184a0(param_2,p_Var2);
  }
  return param_2;
}



undefined8 FUN_18001af90(Singleton<GameClient> *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x70) == (code *)0x0) {
    return 0;
  }
                    // WARNING: Could not recover jumptable at 0x00018001b002. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x70))();
  return uVar1;
}



void FUN_18001b010(Singleton<GameClient> *param_1)

{
  longlong *plVar1;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x68) == (code *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00018001b07f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(longlong *)(param_1 + -8) + 0x68))();
  return;
}



undefined8 * FUN_18001b090(Singleton<GameClient> *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  __uint64 *p_Var2;
  undefined4 local_110 [66];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_110);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x90) == (code *)0x0) {
    *param_2 = 0;
  }
  else {
    p_Var2 = (__uint64 *)(**(code **)(*(longlong *)(param_1 + -8) + 0x90))();
    FUN_180018650(param_2,p_Var2);
  }
  return param_2;
}



undefined8 * FUN_18001b120(Singleton<GameClient> *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 local_110 [66];
  
  plVar4 = (longlong *)0x0;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_110,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_110);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x78) == (code *)0x0) {
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + -8) + 0x78))();
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)FUN_18001cae0(0x18);
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 0;
      lVar1 = plVar3[1];
      *plVar4 = *plVar3;
      plVar4[1] = lVar1;
      plVar4[2] = plVar3[2];
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
      cef_string_userfree_utf16_free(plVar3);
    }
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    if (plVar4 != (longlong *)0x0) {
      lVar1 = plVar4[1];
      lVar2 = *plVar4;
      if ((lVar2 != 0) && (lVar1 != 0)) {
        puVar5 = (undefined8 *)FUN_18001cae0(0x18);
        *param_2 = puVar5;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cef_string_utf16_set(lVar2,lVar1,puVar5,1);
      }
    }
    if ((plVar4 != (longlong *)0x0) && (plVar3 != (longlong *)0x0)) {
      cef_string_utf16_clear(plVar4);
      FUN_18001c9b8(plVar4);
    }
  }
  return param_2;
}



void FUN_18001b2a0(Singleton<GameClient> *param_1)

{
  longlong *plVar1;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar1 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar1 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar1);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x58) == (code *)0x0) {
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00018001b30f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(longlong *)(param_1 + -8) + 0x58))();
  return;
}



bool FUN_18001b320(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  plVar3 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x28),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x20) + 0x20);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



bool FUN_18001b3a0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  plVar3 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x28),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x20) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



ulonglong FUN_18001b420(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  longlong *local_res10;
  undefined4 local_108 [64];
  
  local_res10 = param_2;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_108);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0x48);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_2;
    if (local_res8 == 0) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_180018210(&local_res8);
      iVar3 = (*pcVar2)(lVar1,uVar6);
      lVar1 = *param_2;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      uVar5 = (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5;
}



bool FUN_18001b530(Singleton<GameClient> *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x30) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x30))();
  return iVar1 != 0;
}



bool FUN_18001b5b0(Singleton<GameClient> *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x38) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x38))();
  return iVar1 != 0;
}



ulonglong FUN_18001b630(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  longlong *local_res10;
  undefined4 local_108 [64];
  
  local_res10 = param_2;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_108);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0x40);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_2;
    if (local_res8 == 0) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_180018210(&local_res8);
      iVar3 = (*pcVar2)(lVar1,uVar6);
      lVar1 = *param_2;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      uVar5 = (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5;
}



bool FUN_18001b740(Singleton<GameClient> *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x28) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x28))();
  return iVar1 != 0;
}



longlong FUN_18001b7c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  Singleton<GameClient> *this;
  Singleton<GameClient> local_108 [256];
  
  FUN_18001bf30((longlong)(param_1 + -3));
  LOCK();
  piVar1 = (int *)(param_1 + -1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    piVar1 = (int *)(param_1 + -5);
    this = (Singleton<GameClient> *)&DAT_1800280a4;
    plVar3 = FUN_1800164e0(&DAT_1800280a4,piVar1,"kWrapperType == wrapperStruct->type_");
    uVar4 = 0;
    if (plVar3 != (longlong *)0x0) {
      FUN_1800161d0((undefined4 *)local_108,
                    "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                    ,0xc3,plVar3);
      this = local_108;
      uVar4 = FUN_1800162d0((undefined4 *)this);
    }
    if (piVar1 != (int *)0x0) {
      param_1[-3] = &PTR_FUN_18001ff50;
      *(undefined ***)((longlong)*(int *)(param_1[-2] + 4) + -0x10 + (longlong)param_1) =
           &PTR_FUN_180020000;
      Singleton<GameClient>::~Singleton<GameClient>(this);
      *param_1 = &PTR__purecall_18001f618;
      uVar4 = FUN_18001c9b8(piVar1);
    }
    lVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  else {
    lVar5 = (ulonglong)(uint3)((uint)iVar2 >> 8) << 8;
  }
  return lVar5;
}



ulonglong FUN_18001b890(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  longlong *local_res10;
  undefined4 local_108 [64];
  
  local_res10 = param_2;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_108);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0xc0);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_2;
    if (local_res8 == 0) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_180017f10(&local_res8);
      iVar3 = (*pcVar2)(lVar1,uVar6);
      lVar1 = *param_2;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      uVar5 = (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5;
}



bool FUN_18001b9a0(Singleton<GameClient> *param_1,undefined1 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xa0);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)(*(longlong *)(param_1 + -8),param_2);
  return iVar2 != 0;
}



ulonglong FUN_18001ba40(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  longlong *local_res10;
  undefined4 local_108 [64];
  
  local_res10 = param_2;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_108);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 200);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_2;
    if (local_res8 == 0) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_180018000(&local_res8);
      iVar3 = (*pcVar2)(lVar1,uVar6);
      lVar1 = *param_2;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      uVar5 = (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5;
}



bool FUN_18001bb50(Singleton<GameClient> *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_118 [68];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_118,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_118);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xb0);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)(*(longlong *)(param_1 + -8),param_2);
  return iVar2 != 0;
}



bool FUN_18001bbf0(Singleton<GameClient> *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xa8);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)(*(longlong *)(param_1 + -8),param_2);
  return iVar2 != 0;
}



ulonglong FUN_18001bc90(Singleton<GameClient> *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_res8;
  longlong *local_res10;
  undefined4 local_108 [64];
  
  local_res10 = param_2;
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar4 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  uVar5 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar4);
    uVar5 = FUN_1800162d0(local_108);
  }
  lVar1 = *(longlong *)(param_1 + -8);
  pcVar2 = *(code **)(lVar1 + 0xd0);
  if (pcVar2 == (code *)0x0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      uVar5 = (**(code **)(*(longlong *)
                            ((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_res8 = *param_2;
    if (local_res8 == 0) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      (*(code *)**(undefined8 **)
                  (local_res8 + 8 + (longlong)*(int *)(*(longlong *)(local_res8 + 8) + 4)))();
      uVar6 = FUN_1800180f0(&local_res8);
      iVar3 = (*pcVar2)(lVar1,uVar6);
      lVar1 = *param_2;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)((longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8
                    ))();
      }
      uVar5 = (ulonglong)(iVar3 != 0);
    }
  }
  return uVar5;
}



bool FUN_18001bda0(Singleton<GameClient> *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar2 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  if (*(code **)(*(longlong *)(param_1 + -8) + 0x98) == (code *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x98))();
  return iVar1 != 0;
}



bool FUN_18001be20(Singleton<GameClient> *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  Singleton<GameClient>::~Singleton<GameClient>(param_1);
  plVar3 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0xb8);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)(*(longlong *)(param_1 + -8),*param_2);
  return iVar2 != 0;
}



void FUN_18001bec0(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 local_108 [64];
  
  plVar2 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar2 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar2);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return;
}



bool FUN_18001bf30(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_108 [64];
  
  plVar3 = FUN_1800164e0(&DAT_1800280a4,(int *)(param_1 + -0x10),
                         "kWrapperType == wrapperStruct->type_");
  if (plVar3 != (longlong *)0x0) {
    FUN_1800161d0(local_108,
                  "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll/ctocpp/ctocpp_ref_counted.h"
                  ,0xc3,plVar3);
    FUN_1800162d0(local_108);
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + -8) + 0x10);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



undefined8 FUN_18001bfb0(int param_1)

{
  undefined4 *puVar1;
  basic_ostream<> *pbVar2;
  undefined4 local_108 [64];
  
  puVar1 = FUN_180016170(local_108,
                         "C:\\Users\\K3rhos\\Desktop\\cef_binary_135.0.20+ge7de5c3+chromium-135.0.7049.85_windows64\\libcef_dll\\ctocpp\\value_ctocpp.cc"
                         ,0x1d5,3);
  pbVar2 = FUN_18000adb0((basic_ostream<> *)(puVar1 + 2),"Check failed: false. ");
  pbVar2 = FUN_18000adb0(pbVar2,"UnwrapDerived");
  pbVar2 = FUN_18000adb0(pbVar2," called with unexpected class type ");
  std::basic_ostream<>::operator<<(pbVar2,param_1);
  FUN_1800162d0(local_108);
  return 0;
}



void FUN_18001c040(longlong *param_1,longlong *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (*param_1 != 0) {
      if ((char)param_1[1] != '\0') {
        cef_string_utf16_clear();
        FUN_18001c9b8((void *)*param_1);
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  return;
}



undefined8 * FUN_18001c0a0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  void *pvVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  lVar2 = *param_1;
  lVar11 = param_1[1] - lVar2 >> 4;
  if (lVar11 == 0xfffffffffffffff) {
    FUN_18001c3e0();
    pcVar5 = (code *)swi(3);
    puVar10 = (undefined8 *)(*pcVar5)();
    return puVar10;
  }
  uVar12 = lVar11 + 1;
  uVar7 = param_1[2] - lVar2 >> 4;
  if (0xfffffffffffffff - (uVar7 >> 1) < uVar7) {
LAB_18001c281:
                    // WARNING: Subroutine does not return
    FUN_180001d40();
  }
  uVar7 = (uVar7 >> 1) + uVar7;
  uVar13 = uVar12;
  if (uVar12 <= uVar7) {
    uVar13 = uVar7;
  }
  if (0xfffffffffffffff < uVar13) goto LAB_18001c281;
  uVar7 = uVar13 * 0x10;
  if (uVar7 == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  else if (uVar7 < 0x1000) {
    puVar10 = (undefined8 *)FUN_18001cae0(uVar7);
  }
  else {
    if (uVar7 + 0x27 <= uVar7) goto LAB_18001c281;
    lVar11 = FUN_18001cae0(uVar7 + 0x27);
    if (lVar11 == 0) goto LAB_18001c274;
    puVar10 = (undefined8 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
    puVar10[-1] = lVar11;
  }
  puVar1 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xfffffffffffffff0U) + (longlong)puVar10);
  FUN_18001c2f0(puVar1,param_3);
  plVar3 = (longlong *)param_1[1];
  plVar9 = (longlong *)*param_1;
  puVar6 = puVar10;
  if (param_2 == plVar3) {
    for (; plVar9 != plVar3; plVar9 = plVar9 + 2) {
      FUN_18001c2f0(puVar6,plVar9);
      puVar6 = puVar6 + 2;
    }
  }
  else {
    FUN_18001c290(plVar9,param_2,puVar10);
    FUN_18001c290(param_2,(longlong *)param_1[1],puVar1 + 2);
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    FUN_18001c040((longlong *)*param_1,(longlong *)param_1[1]);
    pvVar4 = (void *)*param_1;
    pvVar8 = pvVar4;
    if ((0xfff < (param_1[2] - (longlong)pvVar4 & 0xfffffffffffffff0U)) &&
       (pvVar8 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar8)))) {
LAB_18001c274:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar8);
  }
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar12 * 2);
  param_1[2] = (longlong)(puVar10 + uVar13 * 2);
  return puVar1;
}



undefined8 * FUN_18001c290(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    FUN_18001c2f0(param_3,param_1);
    param_3 = param_3 + 2;
  }
  return param_3;
}



undefined8 * FUN_18001c2f0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    lVar3 = plVar1[1];
    if ((lVar2 != 0) && (lVar3 != 0)) {
      puVar4 = (undefined8 *)FUN_18001cae0(0x18);
      *param_1 = puVar4;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      cef_string_utf16_set(lVar2,lVar3,*param_1,1);
    }
    return param_1;
  }
  return param_1;
}



void FUN_18001c380(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if (*plVar2 != 0) {
      if ((char)plVar2[1] != '\0') {
        cef_string_utf16_clear();
        FUN_18001c9b8((void *)*plVar2);
      }
      *plVar2 = 0;
      *(undefined1 *)(plVar2 + 1) = 0;
    }
  }
  return;
}



void FUN_18001c3e0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_18001c400(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1[1] - *param_1 >> 4;
  if (lVar2 != 0) {
    lVar1 = 0;
    do {
      cef_string_list_append(param_2,*(undefined8 *)(*param_1 + lVar1));
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



void FUN_18001c460(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *local_38;
  char local_30;
  
  uVar4 = cef_string_list_size();
  plVar5 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = '\0';
  uVar7 = 0;
  if (uVar4 != 0) {
    do {
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_18001cae0(0x18);
        *plVar5 = 0;
        plVar5[1] = 0;
        plVar5[2] = 0;
        local_30 = '\x01';
        local_38 = plVar5;
      }
      cef_string_list_value(param_1,uVar7,plVar5);
      plVar1 = (longlong *)param_2[1];
      if (plVar1 == (longlong *)param_2[2]) {
        FUN_18001c0a0(param_2,plVar1,(longlong *)&local_38);
        plVar5 = local_38;
      }
      else {
        *plVar1 = 0;
        *(undefined1 *)(plVar1 + 1) = 0;
        if (plVar5 != (longlong *)0x0) {
          lVar2 = plVar5[1];
          lVar3 = *plVar5;
          if ((lVar3 != 0) && (lVar2 != 0)) {
            puVar6 = (undefined8 *)FUN_18001cae0(0x18);
            *plVar1 = (longlong)puVar6;
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            *(undefined1 *)(plVar1 + 1) = 1;
            cef_string_utf16_set(lVar3,lVar2,*plVar1,1);
          }
        }
        param_2[1] = param_2[1] + 0x10;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  if ((plVar5 != (longlong *)0x0) && (local_30 != '\0')) {
    cef_string_utf16_clear(plVar5);
    FUN_18001c9b8(plVar5);
  }
  return;
}



void __cdecl std::_Xlength_error(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00018001c5a3. Too many branches
                    // WARNING: Treating indirect jump as call
  _Xlength_error(param_1);
  return;
}



void __stdcall AcquireSRWLockExclusive(PSRWLOCK SRWLock)

{
                    // WARNING: Could not recover jumptable at 0x00018001c5ac. Too many branches
                    // WARNING: Treating indirect jump as call
  AcquireSRWLockExclusive(SRWLock);
  return;
}



void __stdcall AcquireSRWLockShared(PSRWLOCK SRWLock)

{
                    // WARNING: Could not recover jumptable at 0x00018001c5b4. Too many branches
                    // WARNING: Treating indirect jump as call
  AcquireSRWLockShared(SRWLock);
  return;
}



void __stdcall ReleaseSRWLockExclusive(PSRWLOCK SRWLock)

{
                    // WARNING: Could not recover jumptable at 0x00018001c5bc. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



void __stdcall ReleaseSRWLockShared(PSRWLOCK SRWLock)

{
                    // WARNING: Could not recover jumptable at 0x00018001c5c4. Too many branches
                    // WARNING: Treating indirect jump as call
  ReleaseSRWLockShared(SRWLock);
  return;
}



void __stdcall Sleep(DWORD dwMilliseconds)

{
                    // WARNING: Could not recover jumptable at 0x00018001c5cc. Too many branches
                    // WARNING: Treating indirect jump as call
  Sleep(dwMilliseconds);
  return;
}



void __thiscall std::basic_streambuf<>::_Lock(basic_streambuf<> *this)

{
                    // WARNING: Could not recover jumptable at 0x00018001c5d3. Too many branches
                    // WARNING: Treating indirect jump as call
  _Lock(this);
  return;
}



void __thiscall std::basic_streambuf<>::_Unlock(basic_streambuf<> *this)

{
                    // WARNING: Could not recover jumptable at 0x00018001c5d9. Too many branches
                    // WARNING: Treating indirect jump as call
  _Unlock(this);
  return;
}



__int64 __thiscall std::basic_streambuf<>::showmanyc(basic_streambuf<> *this)

{
  __int64 _Var1;
  
                    // WARNING: Could not recover jumptable at 0x00018001c5df. Too many branches
                    // WARNING: Treating indirect jump as call
  _Var1 = showmanyc(this);
  return _Var1;
}



int __thiscall std::basic_streambuf<>::uflow(basic_streambuf<> *this)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001c5e5. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = uflow(this);
  return iVar1;
}



__int64 __thiscall
std::basic_streambuf<>::xsgetn(basic_streambuf<> *this,char *param_1,__int64 param_2)

{
  __int64 _Var1;
  
                    // WARNING: Could not recover jumptable at 0x00018001c5eb. Too many branches
                    // WARNING: Treating indirect jump as call
  _Var1 = xsgetn(this,param_1,param_2);
  return _Var1;
}



__int64 __thiscall
std::basic_streambuf<>::xsputn(basic_streambuf<> *this,char *param_1,__int64 param_2)

{
  __int64 _Var1;
  
                    // WARNING: Could not recover jumptable at 0x00018001c5f1. Too many branches
                    // WARNING: Treating indirect jump as call
  _Var1 = xsputn(this,param_1,param_2);
  return _Var1;
}



basic_streambuf<> * __thiscall
std::basic_streambuf<>::setbuf(basic_streambuf<> *this,char *param_1,__int64 param_2)

{
  basic_streambuf<> *pbVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001c5f7. Too many branches
                    // WARNING: Treating indirect jump as call
  pbVar1 = setbuf(this,param_1,param_2);
  return pbVar1;
}



int __thiscall std::basic_streambuf<>::sync(basic_streambuf<> *this)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001c5fd. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = sync(this);
  return iVar1;
}



void __thiscall std::basic_streambuf<>::imbue(basic_streambuf<> *this,locale *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00018001c603. Too many branches
                    // WARNING: Treating indirect jump as call
  imbue(this,param_1);
  return;
}



// WARNING: This is an inlined function

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_1800280c0) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_18001cfd0();
  return;
}



// Library Function - Single Match
//  __scrt_acquire_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar4;
  void *pvVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  pvVar3 = (void *)CONCAT71(extraout_var,bVar2);
  if ((int)pvVar3 == 0) {
LAB_18001c66e:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180029080 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180029080;
        pvVar1 = DAT_180029080;
      }
      DAT_180029080 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_18001c66e;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}



// Library Function - Single Match
//  __scrt_dllmain_after_initialize_c
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8 __scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar3 = FUN_18001d3e4();
    uVar3 = _configure_narrow_argv(uVar3 & 0xffffffff);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = _initialize_narrow_environment();
  }
  else {
    uVar2 = FUN_18001d118();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



bool FUN_18001c6b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18001c7e8(0);
  return (char)uVar1 != '\0';
}



undefined1 FUN_18001c6c8(void)

{
  char cVar1;
  
  cVar1 = FUN_18001d7e8();
  if (cVar1 != '\0') {
    cVar1 = FUN_18001d7e8();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_18001d7e8();
  }
  return 0;
}



undefined1 FUN_18001c6f0(void)

{
  FUN_18001d7e8();
  FUN_18001d7e8();
  return 1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// Library Function - Single Match
//  __scrt_dllmain_exception_filter
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __scrt_dllmain_exception_filter
               (undefined8 param_1,int param_2,undefined8 param_3,undefined *param_4,
               undefined4 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined7 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    (*(code *)param_4)(param_1,0,param_3);
  }
  _seh_filter_dll(param_5,param_6);
  return;
}



// Library Function - Single Match
//  __scrt_dllmain_uninitialize_c
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_180029090);
    return;
  }
  uVar2 = FUN_180002020();
  if ((int)uVar2 == 0) {
    _cexit();
  }
  return;
}



void FUN_18001c798(void)

{
  FUN_18001d7e8();
  FUN_18001d7e8();
  return;
}



longlong FUN_18001c7ac(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_180029088 = 1;
  }
  FUN_18001d118();
  cVar1 = FUN_18001d7e8();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_18001d7e8();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_18001d7e8();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18001c7e8(uint param_1)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (DAT_180029089 == '\0') {
    if (1 < param_1) {
                    // WARNING: Subroutine does not return
      FUN_18001d400(5);
    }
    bVar1 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar1) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_180029090 = 0xffffffffffffffff;
      uRam0000000180029098 = 0xffffffffffffffff;
      _DAT_1800290a0 = 0xffffffffffffffff;
      _DAT_1800290a8 = 0xffffffffffffffff;
      uRam00000001800290b0 = 0xffffffffffffffff;
      _DAT_1800290b8 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180029090);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_1800290a8), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180029089 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



// WARNING: Removing unreachable block (ram,0x00018001c901)
// WARNING: Enum "SectionFlags": Some values do not have unique names

ulonglong FUN_18001c874(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000238; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000328;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_18001c8ea;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18001c8ea:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}



// Library Function - Single Match
//  __scrt_release_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_180029080 = 0;
    UNLOCK();
  }
  return;
}



// Library Function - Single Match
//  __scrt_uninitialize_crt
// 
// Library: Visual Studio 2019 Release

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180029088 == '\0') || (param_2 == '\0')) {
    FUN_18001d7e8();
    FUN_18001d7e8();
  }
  return 1;
}



// Library Function - Single Match
//  _onexit
// 
// Library: Visual Studio 2019 Release

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_180029090 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180029090);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}



// Library Function - Single Match
//  atexit
// 
// Library: Visual Studio 2019 Release

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



void FUN_18001c9b8(void *param_1)

{
  free(param_1);
  return;
}



void FUN_18001c9c0(undefined4 *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1800290c8);
  *param_1 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1800290c8);
                    // WARNING: Could not recover jumptable at 0x00018001c9f2. Too many branches
                    // WARNING: Treating indirect jump as call
  WakeAllConditionVariable(&DAT_1800290c0);
  return;
}



// Library Function - Single Match
//  _Init_thread_footer
// 
// Library: Visual Studio 2019 Release

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1800290c8);
  uVar1 = (ulonglong)_tls_index;
  DAT_1800280b4 = DAT_1800280b4 + 1;
  *param_1 = DAT_1800280b4;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_1800280b4;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1800290c8);
                    // WARNING: Could not recover jumptable at 0x00018001ca5e. Too many branches
                    // WARNING: Treating indirect jump as call
  WakeAllConditionVariable(&DAT_1800290c0);
  return;
}



void FUN_18001ca68(int *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1800290c8);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_18001cacd:
                    // WARNING: Could not recover jumptable at 0x00018001cad9. Too many branches
                    // WARNING: Treating indirect jump as call
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1800290c8);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_1800280b4;
      goto LAB_18001cacd;
    }
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_1800290c0,(PSRWLOCK)&DAT_1800290c8,0xffffffff,0);
  } while( true );
}



void FUN_18001cae0(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 == 0xffffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_180001d40();
  }
                    // WARNING: Subroutine does not return
  FUN_18001d568();
}



undefined8 * FUN_18001cb1c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    FUN_18001c9b8(param_1);
  }
  return param_1;
}



ulonglong FUN_18001cb48(undefined8 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined7 extraout_var;
  
  if (param_2 == 0) {
    uVar2 = FUN_18001ccb0(CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != 0));
    return CONCAT71(extraout_var,uVar2);
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar1 = FUN_18001c6c8();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar1 = FUN_18001c6f0();
    }
    return (ulonglong)bVar1;
  }
  uVar3 = FUN_18001cb98(param_1,param_3);
  return uVar3;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_18001cb98(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar4 = FUN_18001c7ac(0);
  if ((char)uVar4 != '\0') {
    uVar4 = __scrt_acquire_startup_lock();
    bVar1 = true;
    if (DAT_180029078 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18001d400(7);
    }
    DAT_180029078 = 1;
    bVar2 = FUN_18001c6b0();
    if (bVar2) {
      FUN_18001d6a8();
      FUN_18001d658();
      FUN_18001d684();
      iVar3 = _initterm_e(&DAT_18001f578,&DAT_18001f580);
      if ((iVar3 == 0) && (uVar5 = __scrt_dllmain_after_initialize_c(), (char)uVar5 != '\0')) {
        _initterm(&DAT_18001f558,&DAT_18001f570);
        DAT_180029078 = 2;
        bVar1 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar4);
    if (!bVar1) {
      plVar6 = (longlong *)FUN_18001d6a0();
      if ((*plVar6 != 0) && (uVar7 = FUN_18001c874((longlong)plVar6), (char)uVar7 != '\0')) {
        (*(code *)*plVar6)(param_1,2,param_2,_guard_dispatch_icall);
      }
      DAT_1800290d0 = DAT_1800290d0 + 1;
      return 1;
    }
  }
  return 0;
}



undefined1 FUN_18001ccb0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  
  uVar1 = (undefined1)param_1;
  if (DAT_1800290d0 < 1) {
    uVar1 = 0;
  }
  else {
    DAT_1800290d0 = DAT_1800290d0 + -1;
    uVar2 = __scrt_acquire_startup_lock();
    if (DAT_180029078 != 2) {
                    // WARNING: Subroutine does not return
      FUN_18001d400(7);
    }
    __scrt_dllmain_uninitialize_c();
    FUN_18001d668();
    FUN_18001d6e4();
    DAT_180029078 = 0;
    uVar3 = (undefined7)((ulonglong)param_1 >> 8);
    __scrt_release_startup_lock((char)uVar2);
    uVar1 = __scrt_uninitialize_crt(CONCAT71(uVar3,uVar1),'\0');
    FUN_18001c798();
  }
  return uVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x00018001cded)
// WARNING: Removing unreachable block (ram,0x00018001cd7e)
// WARNING: Removing unreachable block (ram,0x00018001ce2c)

int FUN_18001cd30(HMODULE param_1,int param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  HMODULE pHVar4;
  
  if ((param_2 == 0) && (DAT_1800290d0 < 1)) {
    iVar1 = 0;
  }
  else {
    if ((param_2 - 1U < 2) && (uVar2 = FUN_18001cb48(param_1,param_2,param_3), (int)uVar2 == 0)) {
      return 0;
    }
    uVar3 = FUN_18001d634(param_1,param_2);
    iVar1 = (int)uVar3;
    if ((param_2 == 1) && (iVar1 == 0)) {
      pHVar4 = param_1;
      FUN_18001d634(param_1,0);
      FUN_18001ccb0(CONCAT71((int7)((ulonglong)pHVar4 >> 8),param_3 != 0));
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar2 = FUN_18001cb48(param_1,param_2,param_3);
      iVar1 = 0;
      if ((int)uVar2 != 0) {
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}



void entry(HMODULE param_1,int param_2,longlong param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  FUN_18001cd30(param_1,param_2,param_3);
  return;
}



// Library Function - Single Match
//  __GSHandlerCheck
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8
__GSHandlerCheck(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4);
  return 1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// Library Function - Single Match
//  __GSHandlerCheckCommon
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong __GSHandlerCheckCommon(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  uVar1 = *(ulonglong *)(param_2 + 8);
  if ((*(byte *)(uVar2 + 3 + uVar1) & 0xf) != 0) {
    uVar1 = (ulonglong)(*(byte *)(uVar2 + 3 + uVar1) & 0xfffffff0);
  }
  return uVar1;
}



void thunk_FUN_18001cae0(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 == 0xffffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_180001d40();
  }
                    // WARNING: Subroutine does not return
  FUN_18001d568();
}



// Library Function - Multiple Matches With Different Base Names
//  __GSHandlerCheck_EH
//  __GSHandlerCheck_EH4
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void FID_conflict___GSHandlerCheck_EH
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,param_4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    __CxxFrameHandler4(param_1,param_2,param_3,param_4);
  }
  return;
}



// Library Function - Single Match
//  __raise_securityfailure
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    // WARNING: Could not recover jumptable at 0x00018001cfc9. Too many branches
                    // WARNING: Treating indirect jump as call
  TerminateProcess(pvVar1,0xc0000409);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_18001cfd0(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x18001cffb;
  capture_previous_context((PCONTEXT)&DAT_180029180);
  _DAT_1800290f0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180029218 = puVar3 + 0x40;
  _DAT_180029200 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_1800290e0 = 0xc0000409;
  _DAT_1800290e4 = 1;
  _DAT_1800290f8 = 1;
  DAT_180029100 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_1800280c0;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180028100;
  *(undefined8 *)(puVar3 + -8) = 0x18001d09d;
  DAT_180029278 = _DAT_1800290f0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800200d8);
  return;
}



// Library Function - Single Match
//  capture_previous_context
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



// WARNING: Removing unreachable block (ram,0x00018001d23b)
// WARNING: Removing unreachable block (ram,0x00018001d21e)
// WARNING: Removing unreachable block (ram,0x00018001d1ed)
// WARNING: Removing unreachable block (ram,0x00018001d154)
// WARNING: Removing unreachable block (ram,0x00018001d131)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18001d118(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    _DAT_180028128 = 0xffffffffffffffff;
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_180028120 = 0x8000;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180029654 = DAT_180029654 | 1;
    }
  }
  uVar11 = 0;
  uVar8 = uVar11;
  uVar10 = uVar11;
  uVar12 = uVar11;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar10 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_180029654 = DAT_180029654 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar12 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar11 = *(uint *)(lVar4 + 4);
    }
  }
  _DAT_180028118 = 1;
  DAT_18002811c = 2;
  uVar9 = DAT_180028110 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    _DAT_180028118 = 2;
    DAT_18002811c = 6;
    uVar9 = DAT_180028110 & 0xffffffffffffffee;
  }
  DAT_180028110 = uVar9;
  if ((uVar5 >> 0x1b & 1) != 0) {
    uVar9 = xinuse(0);
    uVar9 = in_XCR0 & uVar9 & 0xffffffff;
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar7 = (byte)uVar9, (bVar7 & 6) == 6)) {
      _DAT_180028118 = 3;
      uVar6 = DAT_180028110;
      uVar5 = DAT_18002811c | 8;
      if ((uVar8 & 0x20) != 0) {
        _DAT_180028118 = 5;
        uVar6 = DAT_180028110 & 0xfffffffffffffffd;
        uVar5 = DAT_18002811c | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar7 & 0xe0) == 0xe0)) {
          DAT_18002811c = DAT_18002811c | 0x68;
          _DAT_180028118 = 6;
          uVar6 = DAT_180028110 & 0xffffffffffffffd9;
          uVar5 = DAT_18002811c;
        }
      }
      DAT_18002811c = uVar5;
      DAT_180028110 = uVar6;
      if ((uVar10 >> 0x17 & 1) != 0) {
        DAT_180028110 = DAT_180028110 & 0xfffffffffeffffff;
      }
      if (((uVar12 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
        _DAT_180029650 = uVar11 & 0x400ff;
        DAT_180028110 = ~((ulonglong)(uVar11 >> 0x10 & 7) | 0x1000028) & DAT_180028110;
        if (1 < _DAT_180029650) {
          DAT_180028110 = DAT_180028110 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar12 >> 0x15 & 1) != 0) && ((uVar9 >> 0x13 & 1) != 0)) {
      DAT_180028110 = DAT_180028110 & 0xffffffffffffff7f;
    }
  }
  return 0;
}



undefined8 FUN_18001d3e4(void)

{
  return 1;
}



// Library Function - Single Match
//  __scrt_is_ucrt_dll_in_use
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180028130 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_18001d3f8(void)

{
  _DAT_180029658 = 0;
  return;
}



void FUN_18001d400(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x18001d434;
  FUN_18001d3f8();
  *(undefined8 *)(puVar4 + -8) = 0x18001d445;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18001d44f;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x18001d469;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x18001d4aa;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18001d4dc;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x18001d4fe;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x18001d51b;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x18001d526;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x18001d537;
    FUN_18001d3f8();
  }
  return;
}



undefined8 * FUN_18001d548(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



void FUN_18001d568(void)

{
  undefined8 local_28 [5];
  
  FUN_18001d548(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180024b18);
}



// Library Function - Single Match
//  __security_init_cookie
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_1800280c0 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_1800280c0 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_1800280c0 == 0x2b992ddfa232) {
      DAT_1800280c0 = 0x2b992ddfa233;
    }
  }
  DAT_180028100 = ~DAT_1800280c0;
  return;
}



undefined8 FUN_18001d634(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
}



void FUN_18001d658(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d65f. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeSListHead(&DAT_180029660);
  return;
}



void FUN_18001d668(void)

{
  __std_type_info_destroy_list(&DAT_180029660);
  return;
}



undefined * FUN_18001d674(void)

{
  return &DAT_180029670;
}



undefined * FUN_18001d67c(void)

{
  return &DAT_180029678;
}



void FUN_18001d684(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_18001d674();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_18001d67c();
  *puVar1 = *puVar1 | 2;
  return;
}



undefined * FUN_18001d6a0(void)

{
  return &DAT_1800298a0;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_18001d6a8(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180022110; puVar1 < &DAT_180022110; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_18001d6e4(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180022120; puVar1 < &DAT_180022120; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



int __stdcall __WSAFDIsSet(SOCKET param_1,fd_set *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001d720. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = __WSAFDIsSet(param_1,param_2);
  return iVar1;
}



void __CxxFrameHandler4(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d726. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler4();
  return;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001d732. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001d738. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001d73e. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



void _purecall(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d744. Too many branches
                    // WARNING: Treating indirect jump as call
  _purecall();
  return;
}



void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    // WARNING: Could not recover jumptable at 0x00018001d750. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



void __std_type_info_destroy_list(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d756. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_type_info_destroy_list();
  return;
}



void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001d75c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = malloc(_Size);
  return pvVar1;
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x00018001d762. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



void __cdecl abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d768. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  abort();
  return;
}



void _seh_filter_dll(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d76e. Too many branches
                    // WARNING: Treating indirect jump as call
  _seh_filter_dll();
  return;
}



void _configure_narrow_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d774. Too many branches
                    // WARNING: Treating indirect jump as call
  _configure_narrow_argv();
  return;
}



void _initialize_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d77a. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_narrow_environment();
  return;
}



void _initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d780. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_onexit_table();
  return;
}



void _register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d786. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_onexit_function();
  return;
}



void _execute_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d78c. Too many branches
                    // WARNING: Treating indirect jump as call
  _execute_onexit_table();
  return;
}



void _crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d792. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_atexit();
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d798. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001d79e. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _callnewh(_Size);
  return iVar1;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d7a4. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d7aa. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void cef_log(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d7b0. Too many branches
                    // WARNING: Treating indirect jump as call
  cef_log();
  return;
}



void cef_string_userfree_utf16_free(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d7b6. Too many branches
                    // WARNING: Treating indirect jump as call
  cef_string_userfree_utf16_free();
  return;
}



void cef_list_value_create(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d7bc. Too many branches
                    // WARNING: Treating indirect jump as call
  cef_list_value_create();
  return;
}



void cef_get_min_log_level(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d7c2. Too many branches
                    // WARNING: Treating indirect jump as call
  cef_get_min_log_level();
  return;
}



void cef_string_list_alloc(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d7c8. Too many branches
                    // WARNING: Treating indirect jump as call
  cef_string_list_alloc();
  return;
}



void cef_string_list_free(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d7ce. Too many branches
                    // WARNING: Treating indirect jump as call
  cef_string_list_free();
  return;
}



void cef_string_list_size(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d7d4. Too many branches
                    // WARNING: Treating indirect jump as call
  cef_string_list_size();
  return;
}



void cef_string_list_value(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d7da. Too many branches
                    // WARNING: Treating indirect jump as call
  cef_string_list_value();
  return;
}



void cef_string_list_append(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d7e0. Too many branches
                    // WARNING: Treating indirect jump as call
  cef_string_list_append();
  return;
}



undefined1 FUN_18001d7e8(void)

{
  return 1;
}



void __RTDynamicCast(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001d7eb. Too many branches
                    // WARNING: Treating indirect jump as call
  __RTDynamicCast();
  return;
}



int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001d7f1. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



float __cdecl ceilf(float _X)

{
  float fVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001d7f7. Too many branches
                    // WARNING: Treating indirect jump as call
  fVar1 = ceilf(_X);
  return fVar1;
}



float __cdecl sqrtf(float _X)

{
  float fVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001d7fd. Too many branches
                    // WARNING: Treating indirect jump as call
  fVar1 = sqrtf(_X);
  return fVar1;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x00018001d820. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x00018001d820. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_18001dbcc(undefined8 param_1,longlong param_2)

{
  FUN_18001c9b8(*(void **)(param_2 + 0x28));
  return;
}



void FUN_18001dd40(undefined8 param_1,longlong param_2)

{
  FUN_18001c9b8(*(void **)(param_2 + 0x20));
  return;
}



void FUN_18001dd70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180009610(*(longlong **)(param_2 + 0x50));
  }
  return;
}



void FUN_18001ddb2(undefined8 param_1,longlong param_2)

{
  FUN_18001c9b8(*(void **)(param_2 + 0x58));
  return;
}



void FUN_18001de60(undefined8 param_1,longlong param_2)

{
  FUN_18001c9b8(*(void **)(param_2 + 0x20));
  return;
}



void FUN_18001de7d(undefined8 param_1,longlong param_2)

{
  FUN_18001c9b8(*(void **)(param_2 + 0x20));
  return;
}



void FUN_18001de9a(undefined8 param_1,longlong param_2)

{
  FUN_18001c9b8(*(void **)(param_2 + 0x20));
  return;
}



undefined8 FUN_18001df68(undefined8 param_1,longlong param_2)

{
  std::basic_ios<>::setstate
            ((basic_ios<> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x60) + 4) +
             (longlong)*(longlong **)(param_2 + 0x60)),4,true);
  return 0;
}



void FUN_18001e220(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_180001a10(*(longlong **)(param_2 + 0x58));
  }
  return;
}



void FUN_18001e260(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800019a0(*(longlong **)(param_2 + 0x58));
  }
  return;
}



void FUN_18001e2e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    std::basic_ios<>::~basic_ios<>((basic_ios<> *)(*(longlong *)(param_2 + 0x30) + 0x88));
  }
  return;
}



void FUN_18001e3d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001a10(*(longlong **)(param_2 + 0x58));
  }
  return;
}



void FUN_18001e410(undefined8 param_1,longlong param_2)

{
  FUN_18001c9b8(*(void **)(param_2 + 0x130));
  return;
}



void FUN_18001e430(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x130) & 1) != 0) {
    *(uint *)(param_2 + 0x130) = *(uint *)(param_2 + 0x130) & 0xfffffffe;
    std::basic_ios<>::~basic_ios<>((basic_ios<> *)(param_2 + 0xa8));
  }
  return;
}



// Library Function - Single Match
//  int `protected: void __cdecl CWinApp::UpdatePrinterSelection(int) __ptr64'::`1'::dtor$1
// 
// Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release

void `protected:_void___cdecl_CWinApp::UpdatePrinterSelection(int)___ptr64'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x138) & 1) != 0) {
    *(uint *)(param_2 + 0x138) = *(uint *)(param_2 + 0x138) & 0xfffffffe;
    FUN_1800162d0((undefined4 *)(param_2 + 0x20));
  }
  return;
}



void FUN_18001e500(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_1800162d0((undefined4 *)(param_2 + 0x28));
  }
  return;
}



void FUN_18001e530(undefined8 param_1,longlong param_2)

{
  FUN_18001c9b8(*(void **)(param_2 + 0x148));
  return;
}



void FUN_18001e560(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_180001a10(*(longlong **)(param_2 + 0x40));
  }
  return;
}



// Library Function - Single Match
//  int `protected: void __cdecl CWinApp::UpdatePrinterSelection(int) __ptr64'::`1'::dtor$1
// 
// Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release

void `protected:_void___cdecl_CWinApp::UpdatePrinterSelection(int)___ptr64'::__l1::dtor_1
               (undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x140) & 1) != 0) {
    *(uint *)(param_2 + 0x140) = *(uint *)(param_2 + 0x140) & 0xfffffffe;
    FUN_1800162d0((undefined4 *)(param_2 + 0x20));
  }
  return;
}



bool FUN_18001e5ec(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



void FUN_18001e604(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}



void FUN_18001e61b(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x20));
  return;
}



void FUN_18001e634(void)

{
  FUN_18001c798();
  return;
}



void FUN_18001e648(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),FUN_18001cb48,*(undefined4 *)*param_1,param_1);
  return;
}



void FUN_18001e680(void)

{
  if (DAT_180029898 != (longlong *)0x0) {
    (**(code **)(*DAT_180029898 + 0x20))
              (DAT_180029898,CONCAT71(0x1800298,DAT_180029898 != (longlong *)&DAT_180029860));
    DAT_180029898 = (longlong *)0x0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_18001e6c0(void)

{
  void *pvVar1;
  
  if (DAT_180028158 != (void *)0x0) {
    pvVar1 = DAT_180028158;
    if ((0xfff < (DAT_180028168 - (longlong)DAT_180028158 & 0xfffffffffffffff8U)) &&
       (pvVar1 = *(void **)((longlong)DAT_180028158 + -8),
       0x1f < (ulonglong)((longlong)DAT_180028158 + (-8 - (longlong)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001c9b8(pvVar1);
    DAT_180028158 = (void *)0x0;
    _DAT_180028160 = 0;
    DAT_180028168 = 0;
  }
  FUN_180005f70((longlong *)&DAT_180028148);
  return;
}



void FUN_18001e740(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1800297b0;
  if (DAT_1800297b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1800297b0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}


