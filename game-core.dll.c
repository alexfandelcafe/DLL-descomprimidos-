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
typedef short    wchar_t;
typedef unsigned short    word;
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

typedef struct StaticCallbacksHandler<rage::scrThread> StaticCallbacksHandler<rage::scrThread>, *PStaticCallbacksHandler<rage::scrThread>;

struct StaticCallbacksHandler<rage::scrThread> { // PlaceHolder Class Structure
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

typedef ulong DWORD;

typedef DWORD LCTYPE;

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef struct _SYSTEM_INFO *LPSYSTEM_INFO;

typedef union _union_552 _union_552, *P_union_552;

typedef void *LPVOID;

typedef ulonglong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef ushort WORD;

typedef struct _struct_553 _struct_553, *P_struct_553;

struct _struct_553 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_552 {
    DWORD dwOemId;
    struct _struct_553 s;
};

struct _SYSTEM_INFO {
    union _union_552 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

typedef wchar_t WCHAR;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
};

typedef enum _FILE_INFO_BY_HANDLE_CLASS {
    FileBasicInfo=0,
    FileStandardInfo=1,
    FileNameInfo=2,
    FileRenameInfo=3,
    FileDispositionInfo=4,
    FileAllocationInfo=5,
    FileEndOfFileInfo=6,
    FileStreamInfo=7,
    FileCompressionInfo=8,
    FileAttributeTagInfo=9,
    FileIdBothDirectoryInfo=10,
    FileIdBothDirectoryRestartInfo=11,
    FileIoPriorityHintInfo=12,
    FileRemoteProtocolInfo=13,
    MaximumFileInfoByHandleClass=14
} _FILE_INFO_BY_HANDLE_CLASS;

typedef enum _FILE_INFO_BY_HANDLE_CLASS FILE_INFO_BY_HANDLE_CLASS;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef enum _GET_FILEEX_INFO_LEVELS {
    GetFileExInfoStandard=0,
    GetFileExMaxInfoLevel=1
} _GET_FILEEX_INFO_LEVELS;

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

typedef enum _GET_FILEEX_INFO_LEVELS GET_FILEEX_INFO_LEVELS;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef PCONTEXT LPCONTEXT;

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

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

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
    char pdbpath[92];
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

typedef char *va_list;

typedef ulonglong uintptr_t;

typedef ulonglong size_t;

typedef struct _CONTEXT CONTEXT;

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

typedef char CHAR;

typedef CHAR *LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef struct _MEMORY_BASIC_INFORMATION *PMEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef CHAR *LPSTR;

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

typedef WCHAR *LPWSTR;

typedef WCHAR *LPCWSTR;

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

typedef struct _FILETIME *LPFILETIME;

typedef ulong ULONG;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef DWORD *PDWORD;

typedef BOOL *LPBOOL;

typedef struct HINSTANCE__ *HINSTANCE;

typedef void *LPCVOID;

typedef HINSTANCE HMODULE;

typedef HANDLE HLOCAL;

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

typedef struct sagPlayerMgr sagPlayerMgr, *PsagPlayerMgr;

struct sagPlayerMgr { // PlaceHolder Class Structure
};

typedef struct gohObjectManager gohObjectManager, *PgohObjectManager;

struct gohObjectManager { // PlaceHolder Class Structure
};

typedef struct sagActor sagActor, *PsagActor;

struct sagActor { // PlaceHolder Class Structure
};

typedef struct sagActorManager sagActorManager, *PsagActorManager;

struct sagActorManager { // PlaceHolder Class Structure
};

typedef struct scrThread scrThread, *PscrThread;

struct scrThread { // PlaceHolder Class Structure
};

typedef struct StaticCallbacksHandler<class_rage::scrThread> StaticCallbacksHandler<class_rage::scrThread>, *PStaticCallbacksHandler<class_rage::scrThread>;

struct StaticCallbacksHandler<class_rage::scrThread> { // PlaceHolder Structure
};

typedef enum LogType {
} LogType;

typedef struct Vector3 Vector3, *PVector3;

struct Vector3 { // PlaceHolder Structure
};

typedef struct Patches Patches, *PPatches;

struct Patches { // PlaceHolder Structure
};

typedef struct basic_istream<char,struct_std::char_traits<char>_> basic_istream<char,struct_std::char_traits<char>_>, *Pbasic_istream<char,struct_std::char_traits<char>_>;

struct basic_istream<char,struct_std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct locale locale, *Plocale;

struct locale { // PlaceHolder Structure
};

typedef struct basic_istream<char,std::char_traits<char>_> basic_istream<char,std::char_traits<char>_>, *Pbasic_istream<char,std::char_traits<char>_>;

struct basic_istream<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct basic_streambuf<char,std::char_traits<char>_> basic_streambuf<char,std::char_traits<char>_>, *Pbasic_streambuf<char,std::char_traits<char>_>;

struct basic_streambuf<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct basic_streambuf<char,struct_std::char_traits<char>_> basic_streambuf<char,struct_std::char_traits<char>_>, *Pbasic_streambuf<char,struct_std::char_traits<char>_>;

struct basic_streambuf<char,struct_std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct ios_base ios_base, *Pios_base;

struct ios_base { // PlaceHolder Structure
};

typedef struct basic_ios<char,std::char_traits<char>_> basic_ios<char,std::char_traits<char>_>, *Pbasic_ios<char,std::char_traits<char>_>;

struct basic_ios<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct function<void___cdecl(void)> function<void___cdecl(void)>, *Pfunction<void___cdecl(void)>;

struct function<void___cdecl(void)> { // PlaceHolder Structure
};

typedef struct _Lockit _Lockit, *P_Lockit;

struct _Lockit { // PlaceHolder Structure
};

typedef struct _Locimp _Locimp, *P_Locimp;

struct _Locimp { // PlaceHolder Structure
};

typedef struct facet facet, *Pfacet;

struct facet { // PlaceHolder Structure
};

typedef struct id id, *Pid;

struct id { // PlaceHolder Structure
};

typedef struct game game, *Pgame;

struct game { // PlaceHolder Structure
};

typedef struct ioKeyboard ioKeyboard, *PioKeyboard;

struct ioKeyboard { // PlaceHolder Structure
};

typedef struct unkStruct4 unkStruct4, *PunkStruct4;

struct unkStruct4 { // PlaceHolder Structure
};

typedef struct sagPlayer sagPlayer, *PsagPlayer;

struct sagPlayer { // PlaceHolder Structure
};

typedef struct mvrMoverComponent mvrMoverComponent, *PmvrMoverComponent;

struct mvrMoverComponent { // PlaceHolder Structure
};

typedef struct globalBase globalBase, *PglobalBase;

struct globalBase { // PlaceHolder Structure
};

typedef struct gohBase gohBase, *PgohBase;

struct gohBase { // PlaceHolder Structure
};

typedef struct ioMouse ioMouse, *PioMouse;

struct ioMouse { // PlaceHolder Structure
};

typedef struct animAnimatorComponent animAnimatorComponent, *PanimAnimatorComponent;

struct animAnimatorComponent { // PlaceHolder Structure
};

typedef struct UIStringTable UIStringTable, *PUIStringTable;

struct UIStringTable { // PlaceHolder Structure
};

typedef struct grcDevice grcDevice, *PgrcDevice;

struct grcDevice { // PlaceHolder Structure
};

typedef struct hlthHealthComponent hlthHealthComponent, *PhlthHealthComponent;

struct hlthHealthComponent { // PlaceHolder Structure
};

typedef struct UIInput UIInput, *PUIInput;

struct UIInput { // PlaceHolder Structure
};

typedef struct InfoBase InfoBase, *PInfoBase;

struct InfoBase { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);



longlong DAT_1800192e8;
undefined8 DAT_1800192f8;
undefined DAT_180019300;
undefined8 DAT_180019310;
undefined8 DAT_180019318;
undefined DAT_1800192e0;
undefined8 DAT_180019308;
undefined FUN_1800108d0;
ulonglong DAT_180019240;
undefined8 DAT_18001b270;
longlong *DAT_18001b280;
longlong *DAT_18001b278;
undefined FUN_180002710;
undefined FUN_180010950;
undefined4 DAT_18001b230;
undefined FUN_1800070c0;
longlong DAT_18001b238;
undefined8 DAT_18001b240;
undefined8 DAT_18001b248;
undefined DAT_18001b250;
undefined8 DAT_18001b260;
undefined8 DAT_18001b268;
undefined8 DAT_18001b258;
undefined FUN_1800109d0;
longlong DAT_180019328;
undefined8 DAT_180019338;
undefined DAT_180019340;
undefined8 DAT_180019350;
undefined8 DAT_180019358;
undefined DAT_180019320;
undefined LAB_180010a50;
undefined8 UNK_180019348;
pointer[2] vftable;
undefined DAT_180015d28;
undefined DAT_180015c68;
pointer[1] vftable;
pointer[15] vftable;
undefined DAT_1800118a8;
undefined FUN_180001730;
pointer[6] vftable;
__uint64 *DAT_18001b1a0;
facet *DAT_18001b000;
undefined *PTR_id_180011288;
TypeDescriptor RTTI_Type_Descriptor;
longlong DAT_18001b1a0;
pointer[3] vftable;
__uint64 *s_GohBaseManagerSlots;
longlong DAT_18001b1f0;
undefined DAT_18001b1f8;
uint *DAT_18001b200;
longlong DAT_18001b200;
uint *DAT_18001b208;
longlong DAT_18001b208;
undefined FUN_180004260;
undefined FUN_1800042a0;
undefined FUN_1800042e0;
_func_bool_void_ptr_uint__func_void_InfoBase_ptr_ptr *s_RegisterCommand;
undefined *DAT_18001b218;
undefined *DAT_18001b210;
undefined *DAT_18001b220;
longlong DAT_1800192f0;
ulonglong DAT_180019318;
ulonglong DAT_180019310;
longlong DAT_1800192f8;
undefined8 DAT_1800192e8;
undefined8 *DAT_1800192e8;
longlong DAT_180019318;
longlong DAT_18001b220;
longlong DAT_18001b210;
longlong DAT_18001b218;
pointer PTR_vftable_1800192b8;
undefined DAT_180012090;
undefined DAT_180015d48;
pointer PTR_vftable_1800192c8;
undefined DAT_1800120a8;
undefined DAT_1800120ac;
undefined DAT_180015db8;
undefined DAT_1800120bc;
IMAGE_DOS_HEADER IMAGE_DOS_HEADER_180000000;
undefined1 DAT_18001b060;
undefined1 DAT_18001b061;
int *DAT_18001b208;
int DAT_18001b180;
int DAT_18001b164;
_func_void_InfoBase_ptr *o_Wait;
_func_uint_uint_uint_ptr_uint_int *o_StartNewThreadOverride;
undefined DAT_18001b178;
undefined *DAT_18001b288;
undefined8 *DAT_18001b238;
_func_void *o_QuitGame;
void *s_FullReadPath;
undefined n_Wait;
undefined n_QuitGame;
undefined FUN_180007910;
undefined FUN_180007ef0;
undefined FUN_180007fa0;
undefined8 DAT_18001b288;
undefined DAT_18001b290;
__uint64 *s_CommandsRegistration;
_func_void *s_QuitGame;
void *s_Wait;
undefined4 DAT_18001b168;
undefined *DAT_18001b188;
void *ThreadLocalStoragePointer;
undefined4 _tls_index;
undefined4 DAT_18001b16c;
undefined *DAT_18001b170;
longlong DAT_18001b240;
ulonglong DAT_18001b268;
float DAT_18001b230;
ulonglong DAT_18001b260;
longlong DAT_18001b248;
undefined8 DAT_18001b238;
void *s_StartNewThreadOverride;
void *s_StartNewScript;
longlong DAT_18001b268;
__uint64 *s_GeneralManagerSlots;
LPVOID DAT_18001b298;
longlong DAT_18001b298;
sagPlayer * *s_LocalPlayer;
undefined FUN_18000c230;
undefined FUN_18000c2c0;
undefined8 *DAT_180019328;
undefined *DAT_18001b2a0;
undefined *DAT_18001b2a8;
longlong *DAT_180019328;
ulonglong DAT_180019350;
longlong DAT_180019338;
longlong DAT_180019330;
undefined4 DAT_18001b2b0;
undefined *DAT_18001b2b8;
ulonglong DAT_180019358;
longlong DAT_180019358;
undefined8 DAT_18001b2a8;
undefined FUN_18000c1b0;
undefined8 DAT_18001b2a0;
undefined FUN_18000c140;
LPVOID DAT_18001b2d0;
HANDLE DAT_18001a9e8;
uint DAT_18001b2d8;
uint DAT_18001b2dc;
longlong DAT_18001b2d0;
longlong DAT_18001a9e8;
undefined4 DAT_18001a9e0;
longlong *DAT_18001b2d0;
int DAT_18001a9e0;
undefined8 *DAT_18001b2c0;
undefined DAT_180019000;
undefined DAT_18001904a;
undefined DAT_1800190fd;
undefined DAT_180019104;
string s_@@@@AI@@@@LB@@@@@@@@ODS@@@DWC\@`_18001913c;
undefined1 DAT_1800191ae;
undefined DAT_1800191c6;
undefined1 DAT_1800191d8;
undefined DAT_1800191e7;
undefined DAT_180019211;
undefined8 *DAT_18001a9f0;
undefined DAT_180011500;
uintptr_t DAT_180019240;
void *DAT_18001aa08;
void *StackBase;
undefined8 DAT_18001aa18;
undefined1 DAT_18001aa10;
char DAT_18001aa11;
undefined DAT_18001aa28;
undefined DAT_18001aa30;
undefined DAT_18001aa40;
undefined8 UNK_18001aa20;
undefined8 UNK_18001aa38;
IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER_180000210;
undefined DAT_180000300;
undefined8 DAT_18001aa08;
char DAT_18001aa10;
undefined DAT_18001aa48;
undefined DAT_18001aa50;
int DAT_180019224;
undefined4 DAT_180019224;
int DAT_18001aa00;
int DAT_18001aa58;
undefined DAT_180011478;
undefined DAT_1800114b0;
undefined DAT_1800114b8;
undefined _guard_dispatch_icall;
undefined DAT_1800114c0;
undefined8 DAT_18001abf8;
undefined DAT_18001ab98;
undefined DAT_18001aa70;
undefined DAT_18001ab80;
undefined DAT_18001aa60;
undefined DAT_18001aa64;
undefined DAT_18001aa78;
undefined8 DAT_180019240;
undefined8 DAT_180019280;
undefined8 DAT_18001aa80;
undefined *PTR_DAT_180011658;
undefined DAT_18001ab00;
undefined DAT_180015bf8;
undefined DAT_1800192a0;
undefined DAT_180019298;
uint DAT_18001afd4;
ulonglong DAT_180019288;
undefined DAT_180019290;
uint DAT_180019294;
undefined DAT_18001afd0;
int DAT_1800192b0;
undefined DAT_18001afd8;
ulonglong DAT_180019280;
undefined DAT_18001afe0;
undefined DAT_18001aff0;
undefined DAT_18001aff8;
undefined DAT_18001b2e0;
undefined8 DAT_1800147c8;
undefined8 DAT_1800147d8;
undefined FUN_18000f488;
longlong *DAT_18001b1e8;
undefined DAT_18001b1b0;
void *DAT_1800192f8;
longlong DAT_180019308;
longlong *DAT_18001b270;
longlong DAT_18001b280;
void *DAT_18001b248;
longlong DAT_18001b258;

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180001010(void)

{
  DAT_1800192e8 = FUN_18000eeb0(0x70);
  *(longlong *)DAT_1800192e8 = DAT_1800192e8;
  *(longlong *)(DAT_1800192e8 + 8) = DAT_1800192e8;
  DAT_1800192f8 = 0;
  _DAT_180019300 = 0;
  DAT_180019308 = 0;
  DAT_180019310 = 7;
  DAT_180019318 = 8;
  _DAT_1800192e0 = 0x3f800000;
  FUN_1800046a0(&DAT_1800192f8,0x10,DAT_1800192e8);
  atexit(FUN_1800108d0);
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180001090(void)

{
  longlong *plVar1;
  undefined8 **ppuVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  longlong *local_30;
  longlong *plStack_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_98;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_180002e30(&local_78,"scripting/DesignerDefined/Player",0x20);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_180002e30(&local_58,"scripting/DesignerDefined/long_update_thread",0x2c);
  DAT_18001b270 = (longlong *)0x0;
  DAT_18001b278 = (longlong *)0x0;
  DAT_18001b280 = (longlong *)0x0;
  plVar1 = (longlong *)FUN_18000eeb0(0x40);
  DAT_18001b280 = plVar1 + 8;
  local_38 = &DAT_18001b270;
  ppuVar2 = &local_78;
  local_20 = &DAT_18001b270;
  DAT_18001b270 = plVar1;
  DAT_18001b278 = plVar1;
  local_30 = plVar1;
  do {
    plStack_28 = plVar1;
    FUN_1800044b0(plVar1,ppuVar2);
    plVar1 = plVar1 + 4;
    ppuVar2 = ppuVar2 + 4;
  } while (ppuVar2 != &local_38);
  plStack_28 = plVar1;
  FUN_180006fc0(plVar1,plVar1);
  DAT_18001b278 = plVar1;
  _eh_vector_destructor_iterator_(&local_78,0x20,2,FUN_180002710);
  atexit(FUN_180010950);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800011f0(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong local_118 [34];
  
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  local_118[3] = 0;
  FUN_180002e30(local_118,"content/ui/boot.sc",0x12);
  local_118[4] = 0;
  local_118[5] = 0;
  local_118[6] = 0;
  local_118[7] = 0;
  FUN_180002e30(local_118 + 4,"content/ui/boot.sc.xml",0x16);
  local_118[8] = 0;
  local_118[9] = 0;
  local_118[10] = 0;
  local_118[0xb] = 0;
  FUN_180002e30(local_118 + 8,"content/ui/pausemenu/pausemenuscene.sc",0x26);
  local_118[0xc] = 0;
  local_118[0xd] = 0;
  local_118[0xe] = 0;
  local_118[0xf] = 0;
  FUN_180002e30(local_118 + 0xc,"content/ui/pausemenu/pausemenuscene.sc.xml",0x2a);
  local_118[0x10] = 0;
  local_118[0x11] = 0;
  local_118[0x12] = 0;
  local_118[0x13] = 0;
  FUN_180002e30(local_118 + 0x10,"content/ui/pausemenu/savegame.sc",0x20);
  local_118[0x14] = 0;
  local_118[0x15] = 0;
  local_118[0x16] = 0;
  local_118[0x17] = 0;
  FUN_180002e30(local_118 + 0x14,"content/ui/pausemenu/savegame.sc.xml",0x24);
  local_118[0x18] = 0;
  local_118[0x19] = 0;
  local_118[0x1a] = 0;
  local_118[0x1b] = 0;
  FUN_180002e30(local_118 + 0x18,"content/ui/net/profileeditor/main.sc",0x24);
  local_118[0x1c] = 0;
  local_118[0x1d] = 0;
  local_118[0x1e] = 0;
  local_118[0x1f] = 0;
  FUN_180002e30(local_118 + 0x1c,"content/ui/net/profileeditor/main.sc.xml",0x28);
  DAT_18001b230 = 0;
  DAT_18001b238 = 0;
  DAT_18001b240 = 0;
  DAT_18001b238 = FUN_18000eeb0(0x50);
  *(longlong *)DAT_18001b238 = DAT_18001b238;
  *(longlong *)(DAT_18001b238 + 8) = DAT_18001b238;
  DAT_18001b248 = 0;
  _DAT_18001b250 = 0;
  DAT_18001b258 = 0;
  DAT_18001b260 = 7;
  DAT_18001b268 = 8;
  DAT_18001b230 = 0x3f800000;
  puVar1 = &DAT_18001b248;
  FUN_1800046a0(&DAT_18001b248,0x10,DAT_18001b238);
  plVar2 = local_118;
  do {
    FUN_180009990(puVar1,local_118 + 0x20,plVar2);
    plVar2 = plVar2 + 8;
  } while (plVar2 != local_118 + 0x20);
  _eh_vector_destructor_iterator_(local_118,0x40,4,FUN_1800070c0);
  atexit(FUN_1800109d0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180001420(void)

{
  DAT_180019328 = FUN_18000eeb0(0x20);
  *(longlong *)DAT_180019328 = DAT_180019328;
  *(longlong *)(DAT_180019328 + 8) = DAT_180019328;
  DAT_180019338 = 0;
  _DAT_180019340 = 0;
  uRam0000000180019348 = 0;
  DAT_180019350 = 7;
  DAT_180019358 = 8;
  _DAT_180019320 = 0x3f800000;
  FUN_1800046a0(&DAT_180019338,0x10,DAT_180019328);
  atexit((_func_5014 *)&LAB_180010a50);
  return;
}



undefined8 * FUN_1800014b0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}



char * FUN_1800014f0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



undefined8 * FUN_180001510(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_18000f264(param_1);
  }
  return param_1;
}



undefined8 * FUN_180001580(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



void FUN_1800015b0(void)

{
  undefined8 local_28 [5];
  
  FUN_180001580(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180015d28);
}



undefined8 * FUN_1800015d0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



undefined8 * FUN_180001610(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



void FUN_180001650(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 * FUN_180001670(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}



void FUN_1800016a0(void)

{
  undefined8 local_28 [5];
  
  FUN_180001670(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180015c68);
}



undefined8 * FUN_1800016c0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}



void FUN_180001700(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000180001727. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}



longlong FUN_180001730(longlong param_1)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffff9ff | 0x800;
  return param_1;
}



void FUN_180001750(longlong *param_1)

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
    FUN_18000f264(pvVar2);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}



void FUN_1800017c0(longlong *param_1)

{
  basic_ios<> *this;
  
  this = (basic_ios<> *)(param_1 + 0x12);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0x90) =
       std::basic_istringstream<>::vftable;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x94) = *(int *)(*param_1 + 4) + -0x90;
  FUN_180002650((basic_streambuf<> *)(param_1 + 2));
  std::basic_istream<>::~basic_istream<>((basic_istream<> *)(param_1 + 3));
                    // WARNING: Could not recover jumptable at 0x000180001814. Too many branches
                    // WARNING: Treating indirect jump as call
  std::basic_ios<>::~basic_ios<>(this);
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180001820(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  char ******ppppppcVar3;
  bool bVar4;
  undefined8 *puVar5;
  basic_istream<> *pbVar6;
  basic_istream<> *this;
  HMODULE pHVar7;
  HANDLE pvVar8;
  char *pcVar9;
  char *******pppppppcVar10;
  undefined1 *puVar11;
  char *pcVar12;
  int iVar13;
  ulonglong uVar14;
  size_t sVar15;
  uint uVar16;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [4];
  uint local_2b4;
  undefined8 *local_2b0;
  undefined8 uStack_2a8;
  longlong local_2a0;
  ulonglong uStack_298;
  longlong *local_290;
  undefined ***local_288;
  longlong local_280;
  uint local_278;
  undefined1 *local_268;
  undefined1 *puStack_260;
  undefined1 *local_258;
  undefined ***local_250;
  char ******local_248;
  undefined8 uStack_240;
  longlong local_238;
  undefined8 local_230;
  undefined *local_228 [2];
  undefined **local_218;
  basic_istream<> local_210 [16];
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  int *local_1c8;
  int *local_1c0;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  basic_ios<> local_198 [92];
  int iStack_13c;
  undefined *local_138 [2];
  undefined **local_128;
  basic_istream<> local_120 [120];
  basic_ios<> local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_180019240 ^ (ulonglong)auStack_2d8;
  local_2b4 = 0;
  local_268 = (undefined1 *)0x0;
  puStack_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_290 = param_2;
  memset(local_228,0,0xf0);
  local_2b0 = (undefined8 *)0x0;
  uStack_2a8 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  sVar15 = 0xffffffffffffffff;
  do {
    sVar15 = sVar15 + 1;
  } while (*(char *)((longlong)param_1[1] + sVar15) != '\0');
  FUN_180002e30(&local_2b0,(void *)param_1[1],sVar15);
  local_228[0] = &DAT_1800118a8;
  std::basic_ios<>::basic_ios<>(local_198);
  uVar16 = 2;
  local_2b4 = 2;
  std::basic_istream<>::basic_istream<>
            ((basic_istream<> *)local_228,(basic_streambuf<> *)&local_218,false);
  *(undefined ***)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4)) =
       std::basic_istringstream<>::vftable;
  *(int *)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4) + -4) =
       *(int *)(local_228[0] + 4) + -0x90;
  local_250 = &local_218;
  std::basic_streambuf<>::basic_streambuf<>((basic_streambuf<> *)&local_218);
  local_218 = std::basic_stringbuf<>::vftable;
  if (uStack_298 < 0x10) {
    iVar13 = 0x11;
    puVar5 = (undefined8 *)FUN_18000eeb0(0x11);
    *puVar5 = local_2b0;
    puVar5[1] = uStack_2a8;
  }
  else {
    iVar13 = (int)uStack_298 + 1;
    puVar5 = local_2b0;
  }
  local_1b0 = (undefined1 *)(local_2a0 + (longlong)puVar5);
  *local_1f8 = puVar5;
  *local_1d8 = puVar5;
  *local_1c0 = iVar13;
  *local_200 = puVar5;
  *local_1e0 = puVar5;
  *local_1c8 = (int)local_1b0 - (int)puVar5;
  local_1a8 = 0x23;
  uStack_240 = 0;
  local_238 = 0;
  local_230 = 0xf;
  local_248 = (char ******)0x0;
  pbVar6 = FUN_180002ae0((basic_istream<> *)local_228,(longlong *)&local_248,puVar5);
  bVar4 = std::ios_base::operator_bool((ios_base *)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4)));
  if (bVar4) {
    do {
      uVar14 = local_230;
      ppppppcVar3 = local_248;
      pppppppcVar10 = &local_248;
      if (0xf < local_230) {
        pppppppcVar10 = (char *******)local_248;
      }
      if (*(char *)pppppppcVar10 == '?') {
        local_2b8[0] = 0;
        if (puStack_260 == local_258) {
          puVar5 = (undefined8 *)local_2b8;
          FUN_180002fb0((longlong *)&local_268,puStack_260,(undefined1 *)puVar5);
        }
        else {
          *puStack_260 = 0;
          puStack_260 = puStack_260 + 1;
        }
      }
      else {
        if (((local_238 != 2) || (iVar13 = isxdigit((int)*(char *)pppppppcVar10), iVar13 == 0)) ||
           (iVar13 = isxdigit((int)*(char *)((longlong)pppppppcVar10 + 1)), iVar13 == 0)) {
          Log::Print(3,(char *)0x0,"Invalid pattern format \'%s\'",*param_1);
          if (0xf < uVar14) {
            pppppppcVar10 = (char *******)ppppppcVar3;
            if ((0xfff < uVar14 + 1) &&
               (pppppppcVar10 = (char *******)ppppppcVar3[-1],
               (char *)0x1f < (char *)((longlong)ppppppcVar3 + (-8 - (longlong)pppppppcVar10))))
            goto LAB_180001cec;
            FUN_18000f264(pppppppcVar10);
          }
          *(undefined ***)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4)) =
               std::basic_istringstream<>::vftable;
          *(int *)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4) + -4) =
               *(int *)(local_228[0] + 4) + -0x90;
          FUN_180002650((basic_streambuf<> *)&local_218);
          std::basic_istream<>::~basic_istream<>(local_210);
          std::basic_ios<>::~basic_ios<>(local_198);
          if (local_268 != (undefined1 *)0x0) {
            puVar11 = local_268;
            if ((0xfff < (ulonglong)((longlong)local_258 - (longlong)local_268)) &&
               (puVar11 = *(undefined1 **)(local_268 + -8),
               (undefined1 *)0x1f < local_268 + (-8 - (longlong)puVar11))) goto LAB_180001fa7;
            FUN_18000f264(puVar11);
            local_268 = (undefined1 *)0x0;
            puStack_260 = (undefined1 *)0x0;
            local_258 = (undefined1 *)0x0;
          }
          plVar1 = (longlong *)param_2[7];
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
          param_2[7] = 0;
          return;
        }
        memset(local_138,0,0xf0);
        local_138[0] = &DAT_1800118a8;
        std::basic_ios<>::basic_ios<>(local_a8);
        uVar16 = uVar16 | 1;
        local_2b4 = uVar16;
        std::basic_istream<>::basic_istream<>
                  ((basic_istream<> *)local_138,(basic_streambuf<> *)&local_128,false);
        *(undefined ***)((longlong)local_138 + (longlong)*(int *)(local_138[0] + 4)) =
             std::basic_istringstream<>::vftable;
        *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138[0] + 4)) =
             *(int *)(local_138[0] + 4) + -0x90;
        local_288 = &local_128;
        std::basic_streambuf<>::basic_streambuf<>((basic_streambuf<> *)&local_128);
        local_128 = std::basic_stringbuf<>::vftable;
        pppppppcVar10 = &local_248;
        if (0xf < uVar14) {
          pppppppcVar10 = (char *******)ppppppcVar3;
        }
        puVar5 = (undefined8 *)0x2;
        FUN_180002890((longlong)&local_128,pppppppcVar10,2,2);
        local_250 = (undefined ***)((ulonglong)local_250 & 0xffffffff00000000);
        this = std::basic_istream<>::operator>>((basic_istream<> *)local_138,FUN_180001730);
        std::basic_istream<>::operator>>((basic_istream<> *)this,(uint *)&local_250);
        uVar2 = local_250._0_1_;
        *(undefined ***)((longlong)local_138 + (longlong)*(int *)(local_138[0] + 4)) =
             std::basic_istringstream<>::vftable;
        *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138[0] + 4)) =
             *(int *)(local_138[0] + 4) + -0x90;
        FUN_180002650((basic_streambuf<> *)&local_128);
        std::basic_istream<>::~basic_istream<>(local_120);
        std::basic_ios<>::~basic_ios<>(local_a8);
        local_2b8[0] = uVar2;
        if (puStack_260 == local_258) {
          puVar5 = (undefined8 *)local_2b8;
          FUN_180002fb0((longlong *)&local_268,puStack_260,(undefined1 *)puVar5);
        }
        else {
          *puStack_260 = uVar2;
          puStack_260 = puStack_260 + 1;
        }
      }
      pbVar6 = FUN_180002ae0((basic_istream<> *)local_228,(longlong *)&local_248,puVar5);
      bVar4 = std::ios_base::operator_bool((ios_base *)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4)))
      ;
    } while (bVar4);
  }
  uVar14 = 0;
  pHVar7 = GetModuleHandleW((LPCWSTR)0x0);
  pvVar8 = GetCurrentProcess();
  K32GetModuleInformation(pvVar8,pHVar7,&local_280,0x18);
  if (local_278 != 0) {
    do {
      pcVar12 = (char *)(uVar14 + local_280);
      if (puStack_260 != local_268) {
        pcVar9 = pcVar12;
        do {
          if ((pcVar9[(longlong)local_268 - (longlong)pcVar12] != '\0') &&
             (*pcVar9 != pcVar9[(longlong)local_268 - (longlong)pcVar12])) goto LAB_180001c8d;
          pcVar9 = pcVar9 + 1;
        } while ((ulonglong)((longlong)pcVar9 - (longlong)pcVar12) <
                 (ulonglong)((longlong)puStack_260 - (longlong)local_268));
      }
      if (param_3 == 0) {
        param_1[2] = pcVar12;
        plVar1 = (longlong *)param_2[7];
        if (plVar1 == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        if (0xf < local_230) {
          pppppppcVar10 = (char *******)local_248;
          if ((0xfff < local_230 + 1) &&
             (pppppppcVar10 = (char *******)local_248[-1],
             (char *)0x1f < (char *)((longlong)local_248 + (-8 - (longlong)pppppppcVar10))))
          goto LAB_180001cec;
          FUN_18000f264(pppppppcVar10);
        }
        *(undefined ***)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4)) =
             std::basic_istringstream<>::vftable;
        *(int *)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4) + -4) =
             *(int *)(local_228[0] + 4) + -0x90;
        FUN_180002650((basic_streambuf<> *)&local_218);
        std::basic_istream<>::~basic_istream<>(local_210);
        std::basic_ios<>::~basic_ios<>(local_198);
        if (local_268 == (undefined1 *)0x0) goto LAB_180001edc;
        puVar11 = local_268;
        if (((ulonglong)((longlong)local_258 - (longlong)local_268) < 0x1000) ||
           (puVar11 = *(undefined1 **)(local_268 + -8),
           local_268 + (-8 - (longlong)puVar11) < (undefined1 *)0x20)) goto LAB_180001ec9;
        goto LAB_180001fa7;
      }
      param_3 = param_3 + -1;
LAB_180001c8d:
      uVar16 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar16;
    } while (uVar16 < local_278);
  }
  Log::Print(3,(char *)0x0,"Failed to find \'%s\'",*param_1);
  if (0xf < local_230) {
    pppppppcVar10 = (char *******)local_248;
    if ((0xfff < local_230 + 1) &&
       (pppppppcVar10 = (char *******)local_248[-1],
       (char *)0x1f < (char *)((longlong)local_248 + (-8 - (longlong)pppppppcVar10)))) {
LAB_180001cec:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pppppppcVar10);
  }
  *(undefined ***)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4)) =
       std::basic_istringstream<>::vftable;
  *(int *)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4) + -4) =
       *(int *)(local_228[0] + 4) + -0x90;
  FUN_180002650((basic_streambuf<> *)&local_218);
  std::basic_istream<>::~basic_istream<>(local_210);
  std::basic_ios<>::~basic_ios<>(local_198);
  if (local_268 != (undefined1 *)0x0) {
    puVar11 = local_268;
    if ((0xfff < (ulonglong)((longlong)local_258 - (longlong)local_268)) &&
       (puVar11 = *(undefined1 **)(local_268 + -8),
       (undefined1 *)0x1f < local_268 + (-8 - (longlong)*(undefined1 **)(local_268 + -8)))) {
LAB_180001fa7:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
LAB_180001ec9:
    FUN_18000f264(puVar11);
    local_268 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    puStack_260 = (undefined1 *)0x0;
  }
LAB_180001edc:
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  return;
}



void FUN_180001fb0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}



// public: virtual void __cdecl rage::globalBase::PostLoad(void) __ptr64

void __thiscall rage::globalBase::PostLoad(globalBase *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    // 0x1fe0  72  ?PostLoad@globalBase@rage@@UEAAXXZ
  local_58 = 0;
  local_68 = "globalBase";
  local_60 = "E8 ? ? ? ? EB 0D BA ? ? ? ? 48 8B CB E8 ? ? ? ? 48 83 3D ? ? ? ? ? 74 21";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// public: static unsigned __int64 __cdecl rage::globalBase::GetGlobalPtr(void)

__uint64 __cdecl rage::globalBase::GetGlobalPtr(void)

{
                    // 0x2040  55  ?GetGlobalPtr@globalBase@rage@@SA_KXZ
  return *DAT_18001b1a0;
}



void FUN_180002050(longlong *param_1)

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
    FUN_18000f264(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



ulonglong * FUN_1800020b0(longlong param_1,ulonglong *param_2,longlong *param_3,byte param_4)

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
      goto LAB_1800021ba;
    }
  }
  *param_2 = 0xffffffffffffffff;
LAB_1800021ba:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



ulonglong *
FUN_1800021e0(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,byte param_5)

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
  if ((bVar6) || (bVar7)) goto LAB_180002344;
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
LAB_1800022c7:
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
      goto LAB_18000234b;
    }
  }
  else if (param_4 == 1) {
    if ((param_5 & 3) != 3) {
      if ((param_5 & 1) == 0) {
        if (((param_5 & 2) != 0) && ((uVar10 != 0 || (lVar4 == 0)))) {
          uVar8 = uVar10 - lVar4;
          goto LAB_1800022c7;
        }
      }
      else if ((lVar3 != 0) || (lVar4 == 0)) {
        uVar8 = lVar3 - lVar4;
        goto LAB_1800022c7;
      }
    }
  }
  else {
    uVar8 = uVar9;
    if (param_4 == 2) goto LAB_1800022c7;
  }
LAB_180002344:
  *param_2 = 0xffffffffffffffff;
LAB_18000234b:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



ulonglong FUN_180002370(longlong param_1)

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



int FUN_1800023f0(longlong param_1,int param_2)

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



int FUN_180002450(longlong param_1,int param_2)

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
LAB_180002540:
    uVar7 = 0x20;
LAB_180002545:
    pvVar8 = (void *)FUN_18000eeb0(uVar7);
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
    if (uVar6 < 0x20) goto LAB_180002540;
    if (uVar6 < 0x3fffffff) {
      uVar7 = uVar6 * 2;
      if (uVar7 == 0) {
        pvVar8 = (void *)0x0;
        goto LAB_180002550;
      }
      if (0xfff < uVar7) {
        uVar4 = uVar7 + 0x27;
        if (uVar4 <= uVar7) {
                    // WARNING: Subroutine does not return
          FUN_1800015b0();
        }
        goto LAB_18000251b;
      }
      goto LAB_180002545;
    }
    uVar7 = 0x7fffffff;
    if (0x7ffffffe < uVar6) {
      return -1;
    }
    uVar4 = 0x80000026;
LAB_18000251b:
    lVar5 = FUN_18000eeb0(uVar4);
    if (lVar5 == 0) goto LAB_18000261e;
    pvVar8 = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)pvVar8 - 8) = lVar5;
  }
LAB_180002550:
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
LAB_18000261e:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar8);
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
  **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) + -1;
  puVar2 = (undefined1 *)**(longlong **)(param_1 + 0x40);
  **(longlong **)(param_1 + 0x40) = (longlong)(puVar2 + 1);
  *puVar2 = (char)param_2;
  return param_2;
}



void FUN_180002650(basic_streambuf<> *param_1)

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
    FUN_18000f264(pvVar2);
  }
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  **(undefined8 **)(param_1 + 0x20) = 0;
  **(undefined8 **)(param_1 + 0x40) = 0;
  **(undefined4 **)(param_1 + 0x58) = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
  *(undefined8 *)(param_1 + 0x68) = 0;
                    // WARNING: Could not recover jumptable at 0x0001800026f9. Too many branches
                    // WARNING: Treating indirect jump as call
  std::basic_streambuf<>::~basic_streambuf<>(param_1);
  return;
}



void FUN_180002710(longlong *param_1)

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
    FUN_18000f264(pvVar2);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



undefined8 * FUN_180002770(undefined8 *param_1,void *param_2)

{
  size_t sVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = 0xffffffffffffffff;
  do {
    sVar1 = sVar1 + 1;
  } while (*(char *)((longlong)param_2 + sVar1) != '\0');
  FUN_180002e30(param_1,param_2,sVar1);
  return param_1;
}



basic_ios<> * FUN_1800027b0(basic_ios<> *param_1,uint param_2)

{
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x90) + 4) + -0x90) =
       std::basic_istringstream<>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x90) + 4) + -0x94) =
       *(int *)(*(longlong *)(param_1 + -0x90) + 4) + -0x90;
  FUN_180002650((basic_streambuf<> *)(param_1 + -0x80));
  std::basic_istream<>::~basic_istream<>((basic_istream<> *)(param_1 + -0x78));
  std::basic_ios<>::~basic_ios<>(param_1);
  if ((param_2 & 1) != 0) {
    FUN_18000f264(param_1 + -0x90);
  }
  return param_1 + -0x90;
}



basic_streambuf<> * FUN_180002850(basic_streambuf<> *param_1,uint param_2)

{
  FUN_180002650(param_1);
  if ((param_2 & 1) != 0) {
    FUN_18000f264(param_1);
  }
  return param_1;
}



void FUN_180002890(longlong param_1,void *param_2,ulonglong param_3,uint param_4)

{
  void *pvVar1;
  longlong lVar2;
  void *pvVar3;
  uint uVar4;
  void *_Dst;
  
  uVar4 = param_4 & 0xffffffdf;
  if (0x7fffffff < param_3) {
                    // WARNING: Subroutine does not return
    std::_Xbad_alloc();
  }
  if ((param_3 == 0) || (((byte)uVar4 & 6) == 6)) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    if (param_3 < 0x1000) {
      _Dst = (void *)FUN_18000eeb0(param_3);
    }
    else {
      if (param_3 + 0x27 <= param_3) {
                    // WARNING: Subroutine does not return
        FUN_1800015b0();
      }
      lVar2 = FUN_18000eeb0(param_3 + 0x27);
      if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar2;
    }
    memcpy(_Dst,param_2,param_3);
    *(ulonglong *)(param_1 + 0x68) = (longlong)_Dst + param_3;
    if ((param_4 & 4) == 0) {
      **(undefined8 **)(param_1 + 0x18) = _Dst;
      **(undefined8 **)(param_1 + 0x38) = _Dst;
      **(int **)(param_1 + 0x50) = (int)((longlong)_Dst + param_3) - (int)_Dst;
    }
    if ((param_4 & 2) == 0) {
      pvVar1 = *(void **)(param_1 + 0x68);
      pvVar3 = pvVar1;
      if ((param_4 & 0x18) == 0) {
        pvVar3 = _Dst;
      }
      **(undefined8 **)(param_1 + 0x20) = _Dst;
      **(undefined8 **)(param_1 + 0x40) = pvVar3;
      **(int **)(param_1 + 0x58) = (int)pvVar1 - (int)pvVar3;
      if ((param_4 & 4) != 0) {
        **(undefined8 **)(param_1 + 0x18) = _Dst;
        **(undefined8 **)(param_1 + 0x38) = _Dst;
        **(undefined4 **)(param_1 + 0x50) = 0;
      }
    }
    uVar4 = uVar4 | 1;
  }
  *(uint *)(param_1 + 0x70) = uVar4;
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

facet * FUN_1800029d0(locale *param_1)

{
  longlong lVar1;
  __uint64 _Var2;
  _Locimp *p_Var3;
  facet *pfVar4;
  undefined1 auStack_48 [32];
  facet *local_28;
  _Lockit local_20 [8];
  facet *local_18;
  ulonglong local_10;
  
  local_10 = DAT_180019240 ^ (ulonglong)auStack_48;
  std::_Lockit::_Lockit(local_20,0);
  local_28 = DAT_18001b000;
  _Var2 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (_Var2 < *(ulonglong *)(lVar1 + 0x18)) {
    pfVar4 = *(facet **)(_Var2 * 8 + *(longlong *)(lVar1 + 0x10));
    if (pfVar4 != (facet *)0x0) goto LAB_180002aa7;
  }
  else {
    pfVar4 = (facet *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_180002a5d:
    if (pfVar4 != (facet *)0x0) goto LAB_180002aa7;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (_Var2 < *(ulonglong *)(p_Var3 + 0x18)) {
      pfVar4 = *(facet **)(_Var2 * 8 + *(longlong *)(p_Var3 + 0x10));
      goto LAB_180002a5d;
    }
  }
  pfVar4 = local_28;
  if (local_28 == (facet *)0x0) {
    _Var2 = std::ctype<char>::_Getcat(&local_28,param_1);
    pfVar4 = local_28;
    if (_Var2 == 0xffffffffffffffff) {
                    // WARNING: Subroutine does not return
      FUN_1800016a0();
    }
    local_18 = local_28;
    FUN_18000e780(local_28);
    (**(code **)(*(longlong *)pfVar4 + 8))(pfVar4);
    DAT_18001b000 = local_28;
    pfVar4 = local_28;
  }
LAB_180002aa7:
  std::_Lockit::~_Lockit(local_20);
  return pfVar4;
}



basic_istream<> * FUN_180002ae0(basic_istream<> *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  locale *plVar6;
  facet *pfVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *local_30;
  
  bVar3 = false;
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar4 = std::basic_istream<>::_Ipfx(param_1,false);
  uVar10 = 0;
  if (bVar4) {
    plVar6 = (locale *)
             std::ios_base::getloc((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    pfVar7 = FUN_1800029d0(plVar6);
    if ((local_30 != (longlong *)0x0) &&
       (puVar8 = (undefined8 *)(**(code **)(*local_30 + 0x10))(), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)(puVar8,1);
    }
    param_2[2] = 0;
    plVar9 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar9 = (longlong *)*param_2;
    }
    *(undefined1 *)plVar9 = 0;
    uVar11 = *(ulonglong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
    if (((longlong)uVar11 < 1) || (0x7ffffffffffffffe < uVar11)) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar5 = std::basic_streambuf<>::sgetc
                      (*(basic_streambuf<> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    for (; uVar10 = 0, uVar11 != 0; uVar11 = uVar11 - 1) {
      if (uVar5 == 0xffffffff) {
        uVar10 = 1;
        break;
      }
      uVar10 = 0;
      if ((*(byte *)(*(longlong *)(pfVar7 + 0x18) + (ulonglong)(uVar5 & 0xff) * 2) & 0x48) != 0)
      break;
      uVar1 = param_2[2];
      uVar2 = param_2[3];
      if (uVar1 < uVar2) {
        param_2[2] = uVar1 + 1;
        plVar9 = param_2;
        if (0xf < uVar2) {
          plVar9 = (longlong *)*param_2;
        }
        *(char *)((longlong)plVar9 + uVar1) = (char)uVar5;
        *(undefined1 *)((longlong)plVar9 + uVar1 + 1) = 0;
      }
      else {
        FUN_180002cc0(param_2,uVar2,param_3,(char)uVar5);
      }
      bVar3 = true;
      uVar5 = std::basic_streambuf<>::snextc
                        (*(basic_streambuf<> **)
                          (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    }
  }
  *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  if (!bVar3) {
    uVar10 = uVar10 | 2;
  }
  std::basic_ios<>::setstate
            ((basic_ios<> *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),uVar10,false);
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}



undefined8 *
FUN_180002cc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *_Dst;
  
  _Size = param_1[2];
  uVar5 = 0x7fffffffffffffff;
  if (_Size == 0x7fffffffffffffff) {
                    // WARNING: Subroutine does not return
    FUN_180001650();
  }
  uVar2 = param_1[3];
  uVar4 = _Size + 1 | 0xf;
  if ((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar5 = uVar4;
    if (uVar4 < uVar1) {
      uVar5 = uVar1;
    }
    uVar1 = uVar5 + 1;
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar4 = uVar5 + 0x28;
        if (uVar4 <= uVar1) {
                    // WARNING: Subroutine does not return
          FUN_1800015b0();
        }
        goto LAB_180002d65;
      }
      _Dst = (void *)FUN_18000eeb0(uVar1);
    }
  }
  else {
    uVar4 = 0x8000000000000027;
LAB_180002d65:
    lVar3 = FUN_18000eeb0(uVar4);
    if (lVar3 == 0) goto LAB_180002de0;
    _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar3;
  }
  param_1[2] = _Size + 1;
  param_1[3] = uVar5;
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    *(undefined1 *)(_Size + (longlong)_Dst) = param_4;
    *(undefined1 *)(_Size + 1 + (longlong)_Dst) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)(_Size + (longlong)_Dst) = param_4;
    *(undefined1 *)(_Size + 1 + (longlong)_Dst) = 0;
    pvVar6 = _Src;
    if ((0xfff < uVar2 + 1) &&
       (pvVar6 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar6)))) {
LAB_180002de0:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar6);
  }
  *param_1 = _Dst;
  return param_1;
}



void FUN_180002e30(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *_Dst;
  
  if (0x7fffffffffffffff < param_3) {
                    // WARNING: Subroutine does not return
    FUN_180001650();
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
      goto LAB_180002ef5;
    }
    if (uVar1 < 0x1000) {
      _Dst = (void *)FUN_18000eeb0(uVar1);
      goto LAB_180002ef5;
    }
    uVar3 = uVar2 + 0x28;
    if (uVar3 <= uVar1) {
                    // WARNING: Subroutine does not return
      FUN_1800015b0();
    }
  }
  else {
    uVar3 = 0x8000000000000027;
    uVar2 = 0x7fffffffffffffff;
  }
  lVar4 = FUN_18000eeb0(uVar3);
  if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar4;
LAB_180002ef5:
  *param_1 = _Dst;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  memcpy(_Dst,param_2,param_3);
  *(undefined1 *)(param_3 + (longlong)_Dst) = 0;
  return;
}



void FUN_180002f30(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



void FUN_180002f60(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



undefined1 * FUN_180002fb0(longlong *param_1,void *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *_Dst;
  void *pvVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  size_t _Size;
  undefined1 *puVar10;
  
  lVar2 = *param_1;
  uVar9 = 0x7fffffffffffffff;
  if (param_1[1] - lVar2 == 0x7fffffffffffffff) {
    FUN_180003190();
    pcVar4 = (code *)swi(3);
    puVar8 = (undefined1 *)(*pcVar4)();
    return puVar8;
  }
  uVar6 = param_1[2] - lVar2;
  uVar1 = (param_1[1] - lVar2) + 1;
  if (0x7fffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar6 = 0x8000000000000026;
LAB_18000301e:
    lVar5 = FUN_18000eeb0(uVar6);
    if (lVar5 == 0) goto LAB_180003118;
    puVar8 = (undefined1 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar8 + -8) = lVar5;
  }
  else {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar9 = uVar1;
    if (uVar1 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 == 0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      if (0xfff < uVar9) {
        uVar6 = uVar9 + 0x27;
        if (uVar6 <= uVar9) {
                    // WARNING: Subroutine does not return
          FUN_1800015b0();
        }
        goto LAB_18000301e;
      }
      puVar8 = (undefined1 *)FUN_18000eeb0(uVar9);
    }
  }
  puVar10 = puVar8 + ((longlong)param_2 - lVar2);
  *puVar10 = *param_3;
  pvVar3 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar3;
    _Dst = puVar8;
    param_2 = pvVar3;
  }
  else {
    memmove(puVar8,pvVar3,(longlong)param_2 - (longlong)pvVar3);
    _Dst = puVar10 + 1;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar7 = pvVar3;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar3)) &&
       (pvVar7 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) {
LAB_180003118:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar7);
  }
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1);
  param_1[2] = (longlong)(puVar8 + uVar9);
  return puVar10;
}



void FUN_180003130(void *param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_18000f264(param_1);
    return;
  }
  return;
}



longlong FUN_180003140(longlong param_1)

{
  return param_1 + 8;
}



TypeDescriptor * FUN_180003150(void)

{
  return &`public:_virtual_void___cdecl_rage::globalBase::PostLoad(void)___ptr64'::__l2::<lambda_1>
          ::RTTI_Type_Descriptor;
}



void FUN_180003160(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  DAT_18001b1a0 =
       lVar1 + 0x23 + (longlong)*(int *)(lVar1 + 1) +
       (longlong)*(int *)((longlong)*(int *)(lVar1 + 1) + 0x1f + lVar1);
  return;
}



undefined8 * FUN_180003180(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



void FUN_180003190(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_1800031a4(longlong param_1,uint param_2)

{
  FUN_1800027b0((basic_ios<> *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}



// public: struct rage::animAnimatorComponent & __ptr64 __cdecl
// rage::animAnimatorComponent::operator=(struct rage::animAnimatorComponent const & __ptr64)
// __ptr64

animAnimatorComponent * __thiscall
rage::animAnimatorComponent::operator=(animAnimatorComponent *this,animAnimatorComponent *param_1)

{
                    // 0x31b0  22  ??4animAnimatorComponent@rage@@QEAAAEAU01@AEBU01@@Z
  memcpy(this,param_1,0xa88);
  return this;
}



// public: struct rage::animAnimatorComponent & __ptr64 __cdecl
// rage::animAnimatorComponent::operator=(struct rage::animAnimatorComponent && __ptr64) __ptr64

animAnimatorComponent * __thiscall
rage::animAnimatorComponent::operator=(animAnimatorComponent *this,animAnimatorComponent *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  animAnimatorComponent *paVar3;
  longlong lVar4;
  
                    // 0x31d0  21  ??4animAnimatorComponent@rage@@QEAAAEAU01@$$QEAU01@@Z
  if ((param_1 + 0xf < this) || (this + 0xf < param_1)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)(this + 8) = uVar1;
    lVar4 = (longlong)param_1 - (longlong)this;
  }
  else {
    lVar4 = (longlong)param_1 - (longlong)this;
    lVar2 = 0x10;
    paVar3 = this;
    do {
      *paVar3 = paVar3[lVar4];
      paVar3 = paVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  paVar3 = this + 0x18;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  lVar2 = 0x52a;
  do {
    *paVar3 = paVar3[lVar4];
    paVar3[1] = paVar3[lVar4 + 1];
    paVar3 = paVar3 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined4 *)(this + 0xa6c) = *(undefined4 *)(param_1 + 0xa6c);
  this[0xa70] = param_1[0xa70];
  this[0xa71] = param_1[0xa71];
  this[0xa72] = param_1[0xa72];
  this[0xa73] = param_1[0xa73];
  this[0xa74] = param_1[0xa74];
  this[0xa75] = param_1[0xa75];
  this[0xa76] = param_1[0xa76];
  this[0xa77] = param_1[0xa77];
  this[0xa78] = param_1[0xa78];
  this[0xa79] = param_1[0xa79];
  this[0xa7a] = param_1[0xa7a];
  this[0xa7b] = param_1[0xa7b];
  this[0xa7c] = param_1[0xa7c];
  this[0xa7d] = param_1[0xa7d];
  this[0xa7e] = param_1[0xa7e];
  this[0xa7f] = param_1[0xa7f];
  this[0xa80] = param_1[0xa80];
  this[0xa81] = param_1[0xa81];
  this[0xa82] = param_1[0xa82];
  this[0xa83] = param_1[0xa83];
  *(undefined4 *)(this + 0xa84) = *(undefined4 *)(param_1 + 0xa84);
  return this;
}



// public: double __cdecl rage::animAnimatorComponent::GetCurrentAnimDuration(void) __ptr64

double __thiscall rage::animAnimatorComponent::GetCurrentAnimDuration(animAnimatorComponent *this)

{
                    // 0x3390  52  ?GetCurrentAnimDuration@animAnimatorComponent@rage@@QEAANXZ
  return 0.0;
}



// public: struct rage::hlthHealthComponent & __ptr64 __cdecl
// rage::hlthHealthComponent::operator=(struct rage::hlthHealthComponent const & __ptr64) __ptr64

hlthHealthComponent * __thiscall
rage::hlthHealthComponent::operator=(hlthHealthComponent *this,hlthHealthComponent *param_1)

{
  undefined8 uVar1;
  hlthHealthComponent *phVar2;
  hlthHealthComponent *phVar3;
  hlthHealthComponent *phVar4;
  longlong lVar5;
  
                    // 0x33a0  26  ??4hlthHealthComponent@rage@@QEAAAEAU01@AEBU01@@Z
  lVar5 = 2;
  phVar2 = this;
  do {
    phVar4 = param_1;
    phVar3 = phVar2;
    uVar1 = *(undefined8 *)(phVar4 + 8);
    *(undefined8 *)phVar3 = *(undefined8 *)phVar4;
    *(undefined8 *)(phVar3 + 8) = uVar1;
    uVar1 = *(undefined8 *)(phVar4 + 0x18);
    *(undefined8 *)(phVar3 + 0x10) = *(undefined8 *)(phVar4 + 0x10);
    *(undefined8 *)(phVar3 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)(phVar4 + 0x28);
    *(undefined8 *)(phVar3 + 0x20) = *(undefined8 *)(phVar4 + 0x20);
    *(undefined8 *)(phVar3 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)(phVar4 + 0x38);
    *(undefined8 *)(phVar3 + 0x30) = *(undefined8 *)(phVar4 + 0x30);
    *(undefined8 *)(phVar3 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)(phVar4 + 0x48);
    *(undefined8 *)(phVar3 + 0x40) = *(undefined8 *)(phVar4 + 0x40);
    *(undefined8 *)(phVar3 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)(phVar4 + 0x58);
    *(undefined8 *)(phVar3 + 0x50) = *(undefined8 *)(phVar4 + 0x50);
    *(undefined8 *)(phVar3 + 0x58) = uVar1;
    uVar1 = *(undefined8 *)(phVar4 + 0x68);
    *(undefined8 *)(phVar3 + 0x60) = *(undefined8 *)(phVar4 + 0x60);
    *(undefined8 *)(phVar3 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(phVar4 + 0x78);
    *(undefined8 *)(phVar3 + 0x70) = *(undefined8 *)(phVar4 + 0x70);
    *(undefined8 *)(phVar3 + 0x78) = uVar1;
    lVar5 = lVar5 + -1;
    phVar2 = phVar3 + 0x80;
    param_1 = phVar4 + 0x80;
  } while (lVar5 != 0);
  uVar1 = *(undefined8 *)(phVar4 + 0x88);
  *(undefined8 *)(phVar3 + 0x80) = *(undefined8 *)(phVar4 + 0x80);
  *(undefined8 *)(phVar3 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)(phVar4 + 0x98);
  *(undefined8 *)(phVar3 + 0x90) = *(undefined8 *)(phVar4 + 0x90);
  *(undefined8 *)(phVar3 + 0x98) = uVar1;
  uVar1 = *(undefined8 *)(phVar4 + 0xa8);
  *(undefined8 *)(phVar3 + 0xa0) = *(undefined8 *)(phVar4 + 0xa0);
  *(undefined8 *)(phVar3 + 0xa8) = uVar1;
  uVar1 = *(undefined8 *)(phVar4 + 0xb8);
  *(undefined8 *)(phVar3 + 0xb0) = *(undefined8 *)(phVar4 + 0xb0);
  *(undefined8 *)(phVar3 + 0xb8) = uVar1;
  uVar1 = *(undefined8 *)(phVar4 + 200);
  *(undefined8 *)(phVar3 + 0xc0) = *(undefined8 *)(phVar4 + 0xc0);
  *(undefined8 *)(phVar3 + 200) = uVar1;
  uVar1 = *(undefined8 *)(phVar4 + 0xd8);
  *(undefined8 *)(phVar3 + 0xd0) = *(undefined8 *)(phVar4 + 0xd0);
  *(undefined8 *)(phVar3 + 0xd8) = uVar1;
  uVar1 = *(undefined8 *)(phVar4 + 0xe8);
  *(undefined8 *)(phVar3 + 0xe0) = *(undefined8 *)(phVar4 + 0xe0);
  *(undefined8 *)(phVar3 + 0xe8) = uVar1;
  *(undefined8 *)(phVar3 + 0xf0) = *(undefined8 *)(phVar4 + 0xf0);
  return this;
}



// public: struct rage::hlthHealthComponent & __ptr64 __cdecl
// rage::hlthHealthComponent::operator=(struct rage::hlthHealthComponent && __ptr64) __ptr64

hlthHealthComponent * __thiscall
rage::hlthHealthComponent::operator=(hlthHealthComponent *this,hlthHealthComponent *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  hlthHealthComponent *phVar3;
  longlong lVar4;
  
                    // 0x3450  25  ??4hlthHealthComponent@rage@@QEAAAEAU01@$$QEAU01@@Z
  if ((param_1 + 0xf < this) || (this + 0xf < param_1)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)(this + 8) = uVar1;
    lVar4 = (longlong)param_1 - (longlong)this;
  }
  else {
    lVar4 = (longlong)param_1 - (longlong)this;
    lVar2 = 0x10;
    phVar3 = this;
    do {
      *phVar3 = phVar3[lVar4];
      phVar3 = phVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  phVar3 = this + 0x24;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  this[0x18] = param_1[0x18];
  this[0x19] = param_1[0x19];
  this[0x1a] = param_1[0x1a];
  this[0x1b] = param_1[0x1b];
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  lVar2 = 0x151;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  do {
    *phVar3 = phVar3[lVar4];
    phVar3 = phVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  this[0x175] = param_1[0x175];
  return this;
}



// public: void __cdecl rage::hlthHealthComponent::SetMaxHitPoints(float) __ptr64

void __thiscall rage::hlthHealthComponent::SetMaxHitPoints(hlthHealthComponent *this,float param_1)

{
                    // 0x3510  86  ?SetMaxHitPoints@hlthHealthComponent@rage@@QEAAXM@Z
  *(float *)(this + 0x1c) = param_1;
  return;
}



// public: __cdecl rage::mvrMoverComponent::mvrMoverComponent(void) __ptr64

mvrMoverComponent * __thiscall rage::mvrMoverComponent::mvrMoverComponent(mvrMoverComponent *this)

{
                    // 0x3520  6  ??0mvrMoverComponent@rage@@QEAA@XZ
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  return this;
}



// public: __cdecl rage::mvrMoverComponent::mvrMoverComponent(struct rage::mvrMoverComponent &&
// __ptr64) __ptr64

mvrMoverComponent * __thiscall
rage::mvrMoverComponent::mvrMoverComponent(mvrMoverComponent *this,mvrMoverComponent *param_1)

{
  undefined8 uVar1;
  
                    // 0x3550  4  ??0mvrMoverComponent@rage@@QEAA@$$QEAU01@@Z
                    // 0x3550  5  ??0mvrMoverComponent@rage@@QEAA@AEBU01@@Z
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  memcpy(this + 0x80,param_1 + 0x80,0xab8);
  *(undefined4 *)(this + 0xb38) = *(undefined4 *)(param_1 + 0xb38);
  uVar1 = *(undefined8 *)(param_1 + 0xb44);
  *(undefined8 *)(this + 0xb3c) = *(undefined8 *)(param_1 + 0xb3c);
  *(undefined8 *)(this + 0xb44) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xb54);
  *(undefined8 *)(this + 0xb4c) = *(undefined8 *)(param_1 + 0xb4c);
  *(undefined8 *)(this + 0xb54) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xb64);
  *(undefined8 *)(this + 0xb5c) = *(undefined8 *)(param_1 + 0xb5c);
  *(undefined8 *)(this + 0xb64) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xb74);
  *(undefined8 *)(this + 0xb6c) = *(undefined8 *)(param_1 + 0xb6c);
  *(undefined8 *)(this + 0xb74) = uVar1;
  *(undefined8 *)(this + 0xb7c) = *(undefined8 *)(param_1 + 0xb7c);
  this[0xb84] = param_1[0xb84];
  *(undefined4 *)(this + 0xb88) = *(undefined4 *)(param_1 + 0xb88);
  return this;
}



// public: struct rage::mvrMoverComponent & __ptr64 __cdecl
// rage::mvrMoverComponent::operator=(struct rage::mvrMoverComponent const & __ptr64) __ptr64

mvrMoverComponent * __thiscall
rage::mvrMoverComponent::operator=(mvrMoverComponent *this,mvrMoverComponent *param_1)

{
                    // 0x3660  28  ??4mvrMoverComponent@rage@@QEAAAEAU01@AEBU01@@Z
  memcpy(this,param_1,0xb90);
  return this;
}



// public: struct rage::mvrMoverComponent & __ptr64 __cdecl
// rage::mvrMoverComponent::operator=(struct rage::mvrMoverComponent && __ptr64) __ptr64

mvrMoverComponent * __thiscall
rage::mvrMoverComponent::operator=(mvrMoverComponent *this,mvrMoverComponent *param_1)

{
  undefined8 uVar1;
  mvrMoverComponent *pmVar2;
  longlong lVar3;
  longlong lVar4;
  
                    // 0x3680  27  ??4mvrMoverComponent@rage@@QEAAAEAU01@$$QEAU01@@Z
  if ((param_1 + 0xf < this) || (this + 0xf < param_1)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)(this + 8) = uVar1;
    lVar3 = (longlong)param_1 - (longlong)this;
  }
  else {
    lVar3 = (longlong)param_1 - (longlong)this;
    lVar4 = 0x10;
    pmVar2 = this;
    do {
      *pmVar2 = pmVar2[lVar3];
      pmVar2 = pmVar2 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  this[0x18] = param_1[0x18];
  this[0x19] = param_1[0x19];
  this[0x1a] = param_1[0x1a];
  this[0x1b] = param_1[0x1b];
  this[0x1c] = param_1[0x1c];
  this[0x1d] = param_1[0x1d];
  this[0x1e] = param_1[0x1e];
  this[0x1f] = param_1[0x1f];
  this[0x20] = param_1[0x20];
  this[0x21] = param_1[0x21];
  this[0x22] = param_1[0x22];
  this[0x23] = param_1[0x23];
  this[0x24] = param_1[0x24];
  this[0x25] = param_1[0x25];
  this[0x26] = param_1[0x26];
  this[0x27] = param_1[0x27];
  this[0x28] = param_1[0x28];
  this[0x29] = param_1[0x29];
  this[0x2a] = param_1[0x2a];
  this[0x2b] = param_1[0x2b];
  this[0x2c] = param_1[0x2c];
  this[0x2d] = param_1[0x2d];
  this[0x2e] = param_1[0x2e];
  this[0x2f] = param_1[0x2f];
  this[0x30] = param_1[0x30];
  this[0x31] = param_1[0x31];
  this[0x32] = param_1[0x32];
  this[0x33] = param_1[0x33];
  this[0x34] = param_1[0x34];
  this[0x35] = param_1[0x35];
  this[0x36] = param_1[0x36];
  this[0x37] = param_1[0x37];
  this[0x38] = param_1[0x38];
  this[0x39] = param_1[0x39];
  this[0x3a] = param_1[0x3a];
  this[0x3b] = param_1[0x3b];
  this[0x3c] = param_1[0x3c];
  this[0x3d] = param_1[0x3d];
  this[0x3e] = param_1[0x3e];
  this[0x3f] = param_1[0x3f];
  pmVar2 = this + 0x80;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  lVar4 = 0x55c;
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x78) = uVar1;
  do {
    *pmVar2 = pmVar2[lVar3];
    pmVar2[1] = pmVar2[lVar3 + 1];
    pmVar2 = pmVar2 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined4 *)(this + 0xb38) = *(undefined4 *)(param_1 + 0xb38);
  this[0xb3c] = param_1[0xb3c];
  this[0xb3d] = param_1[0xb3d];
  this[0xb3e] = param_1[0xb3e];
  this[0xb3f] = param_1[0xb3f];
  this[0xb40] = param_1[0xb40];
  this[0xb41] = param_1[0xb41];
  this[0xb42] = param_1[0xb42];
  this[0xb43] = param_1[0xb43];
  this[0xb44] = param_1[0xb44];
  this[0xb45] = param_1[0xb45];
  this[0xb46] = param_1[0xb46];
  this[0xb47] = param_1[0xb47];
  this[0xb48] = param_1[0xb48];
  this[0xb49] = param_1[0xb49];
  this[0xb4a] = param_1[0xb4a];
  this[0xb4b] = param_1[0xb4b];
  this[0xb4c] = param_1[0xb4c];
  this[0xb4d] = param_1[0xb4d];
  this[0xb4e] = param_1[0xb4e];
  this[0xb4f] = param_1[0xb4f];
  this[0xb50] = param_1[0xb50];
  this[0xb51] = param_1[0xb51];
  this[0xb52] = param_1[0xb52];
  this[0xb53] = param_1[0xb53];
  this[0xb54] = param_1[0xb54];
  this[0xb55] = param_1[0xb55];
  this[0xb56] = param_1[0xb56];
  this[0xb57] = param_1[0xb57];
  this[0xb58] = param_1[0xb58];
  this[0xb59] = param_1[0xb59];
  this[0xb5a] = param_1[0xb5a];
  this[0xb5b] = param_1[0xb5b];
  this[0xb5c] = param_1[0xb5c];
  this[0xb5d] = param_1[0xb5d];
  this[0xb5e] = param_1[0xb5e];
  this[0xb5f] = param_1[0xb5f];
  this[0xb60] = param_1[0xb60];
  this[0xb61] = param_1[0xb61];
  this[0xb62] = param_1[0xb62];
  this[0xb63] = param_1[0xb63];
  this[0xb64] = param_1[0xb64];
  this[0xb65] = param_1[0xb65];
  this[0xb66] = param_1[0xb66];
  this[0xb67] = param_1[0xb67];
  this[0xb68] = param_1[0xb68];
  this[0xb69] = param_1[0xb69];
  this[0xb6a] = param_1[0xb6a];
  this[0xb6b] = param_1[0xb6b];
  this[0xb6c] = param_1[0xb6c];
  this[0xb6d] = param_1[0xb6d];
  this[0xb6e] = param_1[0xb6e];
  this[0xb6f] = param_1[0xb6f];
  this[0xb70] = param_1[0xb70];
  this[0xb71] = param_1[0xb71];
  this[0xb72] = param_1[0xb72];
  this[0xb73] = param_1[0xb73];
  this[0xb74] = param_1[0xb74];
  this[0xb75] = param_1[0xb75];
  this[0xb76] = param_1[0xb76];
  this[0xb77] = param_1[0xb77];
  this[0xb78] = param_1[0xb78];
  this[0xb79] = param_1[0xb79];
  this[0xb7a] = param_1[0xb7a];
  this[0xb7b] = param_1[0xb7b];
  this[0xb7c] = param_1[0xb7c];
  this[0xb7d] = param_1[0xb7d];
  this[0xb7e] = param_1[0xb7e];
  this[0xb7f] = param_1[0xb7f];
  this[0xb80] = param_1[0xb80];
  this[0xb81] = param_1[0xb81];
  this[0xb82] = param_1[0xb82];
  this[0xb83] = param_1[0xb83];
  this[0xb84] = param_1[0xb84];
  *(undefined4 *)(this + 0xb88) = *(undefined4 *)(param_1 + 0xb88);
  return this;
}



// public: void __cdecl rage::mvrMoverComponent::EnableMoverCollision(bool) __ptr64

void __thiscall rage::mvrMoverComponent::EnableMoverCollision(mvrMoverComponent *this,bool param_1)

{
                    // 0x3c10  48  ?EnableMoverCollision@mvrMoverComponent@rage@@QEAAX_N@Z
  return;
}



// public: struct Vector3 __cdecl rage::mvrMoverComponent::GetPosition(void)const __ptr64

void __thiscall rage::mvrMoverComponent::GetPosition(mvrMoverComponent *this)

{
  undefined4 *in_RDX;
  
                    // 0x3c20  61  ?GetPosition@mvrMoverComponent@rage@@QEBA?AUVector3@@XZ
  *in_RDX = *(undefined4 *)(this + 0x70);
  in_RDX[1] = *(undefined4 *)(this + 0x74);
  in_RDX[2] = *(undefined4 *)(this + 0x78);
  return;
}



// public: struct Vector3 __cdecl rage::mvrMoverComponent::GetRotation(void)const __ptr64

void __thiscall rage::mvrMoverComponent::GetRotation(mvrMoverComponent *this)

{
  float *in_RDX;
  float fVar1;
  float fVar2;
  
                    // 0x3c40  62  ?GetRotation@mvrMoverComponent@rage@@QEBA?AUVector3@@XZ
  fVar1 = atan2f(*(float *)(this + 0x44),*(float *)(this + 0x40));
  fVar2 = *(float *)(this + 0x68);
  *in_RDX = fVar1 * 57.295776;
  fVar1 = atan2f(*(float *)(this + 0x60),fVar2);
  fVar2 = *(float *)(this + 0x68);
  in_RDX[1] = fVar1 * 57.295776;
  fVar2 = atan2f(*(float *)(this + 0x58),fVar2);
  in_RDX[2] = fVar2 * 57.295776;
  return;
}



// public: __cdecl rage::gohObjectManager::gohObjectManager(class rage::gohObjectManager && __ptr64)
// __ptr64

gohObjectManager * __thiscall
rage::gohObjectManager::gohObjectManager(gohObjectManager *this,gohObjectManager *param_1)

{
                    // 0x3cc0  1  ??0gohObjectManager@rage@@QEAA@$$QEAV01@@Z
                    // 0x3cc0  2  ??0gohObjectManager@rage@@QEAA@AEBV01@@Z
                    // 0x3cc0  3  ??0gohObjectManager@rage@@QEAA@XZ
  *(undefined ***)this = vftable;
  return this;
}



// public: class StaticCallbacksHandler<class rage::scrThread> & __ptr64 __cdecl
// StaticCallbacksHandler<class rage::scrThread>::operator=(class StaticCallbacksHandler<class
// rage::scrThread> && __ptr64) __ptr64

StaticCallbacksHandler<> * __thiscall
StaticCallbacksHandler<>::operator=
          (StaticCallbacksHandler<> *this,StaticCallbacksHandler<> *param_1)

{
                    // 0x3cd0  19
                    // ??4?$StaticCallbacksHandler@VscrThread@rage@@@@QEAAAEAV0@$$QEAV0@@Z
                    // 0x3cd0  20  ??4?$StaticCallbacksHandler@VscrThread@rage@@@@QEAAAEAV0@AEBV0@@Z
                    // 0x3cd0  23  ??4gohObjectManager@rage@@QEAAAEAV01@$$QEAV01@@Z
                    // 0x3cd0  24  ??4gohObjectManager@rage@@QEAAAEAV01@AEBV01@@Z
                    // 0x3cd0  31  ??4sagActorManager@rage@@QEAAAEAV01@$$QEAV01@@Z
                    // 0x3cd0  32  ??4sagActorManager@rage@@QEAAAEAV01@AEBV01@@Z
                    // 0x3cd0  35  ??4sagPlayerMgr@rage@@QEAAAEAV01@$$QEAV01@@Z
                    // 0x3cd0  36  ??4sagPlayerMgr@rage@@QEAAAEAV01@AEBV01@@Z
                    // 0x3cd0  37  ??4scrThread@rage@@QEAAAEAV01@$$QEAV01@@Z
                    // 0x3cd0  38  ??4scrThread@rage@@QEAAAEAV01@AEBV01@@Z
  return (StaticCallbacksHandler<> *)this;
}



// public: virtual void __cdecl rage::gohObjectManager::PostLoad(void) __ptr64

void __thiscall rage::gohObjectManager::PostLoad(gohObjectManager *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    // 0x3ce0  73  ?PostLoad@gohObjectManager@rage@@UEAAXXZ
  local_58 = 0;
  local_68 = "rage::aGuidGohBase::sm_ManagerSlots";
  local_60 = 
  "4C 8B 05 ? ? ? ? 0F B7 D1 8B C2 C1 E9 10 48 03 C0 66 41 39 4C C0 ? 75 50 48 03 D2 49 8B 14 D0";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// public: static struct rage::gohBase * __ptr64 __cdecl
// rage::gohObjectManager::GetObjectFromGuid(unsigned int)

gohBase * __cdecl rage::gohObjectManager::GetObjectFromGuid(uint param_1)

{
                    // 0x3d40  58  ?GetObjectFromGuid@gohObjectManager@rage@@SAPEAUgohBase@2@I@Z
  if (s_GohBaseManagerSlots == (__uint64 *)0x0) {
    return (gohBase *)0x0;
  }
  return *(gohBase **)(*s_GohBaseManagerSlots + (ulonglong)(ushort)param_1 * 0x10);
}



TypeDescriptor * FUN_180003d60(void)

{
  return &`public:_virtual_void___cdecl_rage::gohObjectManager::PostLoad(void)___ptr64'::__l2::
          <lambda_1>::RTTI_Type_Descriptor;
}



void FUN_180003d70(undefined8 param_1,longlong param_2)

{
  rage::gohObjectManager::s_GohBaseManagerSlots =
       (__uint64 *)
       (*(longlong *)(param_2 + 0x10) + 7 + (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 3));
  return;
}



undefined8 * FUN_180003d90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



// public: virtual void __cdecl Patches::PreLoad(void) __ptr64

void __thiscall Patches::PreLoad(Patches *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    // 0x3da0  78  ?PreLoad@Patches@@UEAAXXZ
  local_58 = 0;
  local_68 = "patch_SkipLogos";
  local_60 = "E8 ? ? ? ? 48 39 3D ? ? ? ? 0F 85 ? ? ? ? E8 ? ? ? ? 8B 0D ? ? ? ?";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



TypeDescriptor * FUN_180003e00(void)

{
  return &`public:_virtual_void___cdecl_Patches::PreLoad(void)___ptr64'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void FUN_180003e10(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)
   ((longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 8) + 0xc + *(longlong *)(param_2 + 0x10)) = 1
  ;
  return;
}



undefined8 * FUN_180003e40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



// public: virtual void __cdecl rage::ioMouse::PreLoad(void) __ptr64

void __thiscall rage::ioMouse::PreLoad(ioMouse *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    // 0x3e50  82  ?PreLoad@ioMouse@rage@@UEAAXXZ
  local_58 = 0;
  local_68 = "rage::ioMouse::sm_DisableCursorAlteration";
  local_60 = "0F B6 0D ? ? ? ? 84 C9";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  local_58 = 0;
  local_68 = "rage::ioMouse::UnlockAndShowCursor";
  local_60 = "40 53 48 83 EC 20 0F B6 D9 0F B6 0D ? ? ? ?";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// public: static void __cdecl rage::ioMouse::DisableCursorAlteration(bool)

void __cdecl rage::ioMouse::DisableCursorAlteration(bool param_1)

{
                    // 0x3ef0  46  ?DisableCursorAlteration@ioMouse@rage@@SAX_N@Z
  if (DAT_18001b1f0 != 0) {
    *(bool *)DAT_18001b1f0 = param_1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: static void __cdecl rage::ioMouse::UnlockAndShowCursor(bool)

void __cdecl rage::ioMouse::UnlockAndShowCursor(bool param_1)

{
                    // WARNING: Could not recover jumptable at 0x000180003f00. Too many branches
                    // WARNING: Treating indirect jump as call
                    // 0x3f00  88  ?UnlockAndShowCursor@ioMouse@rage@@SAX_N@Z
  (*_DAT_18001b1f8)();
  return;
}



TypeDescriptor * FUN_180003f10(void)

{
  return &`public:_virtual_void___cdecl_rage::ioMouse::PreLoad(void)___ptr64'::__l2::<lambda_2>::
          RTTI_Type_Descriptor;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180003f20(undefined8 param_1,longlong param_2)

{
  _DAT_18001b1f8 = *(undefined8 *)(param_2 + 0x10);
  return;
}



undefined8 * FUN_180003f30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



TypeDescriptor * FUN_180003f40(void)

{
  return &`public:_virtual_void___cdecl_rage::ioMouse::PreLoad(void)___ptr64'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void FUN_180003f50(undefined8 param_1,longlong param_2)

{
  DAT_18001b1f0 =
       *(longlong *)(param_2 + 0x10) + 7 + (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 3);
  return;
}



undefined8 * FUN_180003f70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



// public: virtual void __cdecl rdr2scripting::game::PreLoad(void) __ptr64

void __thiscall rdr2scripting::game::PreLoad(game *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    // 0x3f80  80  ?PreLoad@game@rdr2scripting@@UEAAXXZ
  local_58 = 0;
  local_68 = "rdr2scripting::game::_GameState";
  local_60 = "8B 05 ? ? ? ? 8D 48 FD";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// public: static unsigned int __cdecl rdr2scripting::game::GetGameState(void)

uint __cdecl rdr2scripting::game::GetGameState(void)

{
  uint uVar1;
  
                    // 0x3fe0  54  ?GetGameState@game@rdr2scripting@@SAIXZ
  uVar1 = 0;
  if (*DAT_18001b200 < 7) {
    uVar1 = *DAT_18001b200;
  }
  return uVar1;
}



TypeDescriptor * FUN_180004000(void)

{
  return &`public:_virtual_void___cdecl_rdr2scripting::game::PreLoad(void)___ptr64'::__l2::
          <lambda_1>::RTTI_Type_Descriptor;
}



void FUN_180004010(undefined8 param_1,longlong param_2)

{
  DAT_18001b200 =
       *(longlong *)(param_2 + 0x10) + 6 + (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 2);
  return;
}



undefined8 * FUN_180004030(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



// public: virtual void __cdecl rage::grcDevice::PreLoad(void) __ptr64

void __thiscall rage::grcDevice::PreLoad(grcDevice *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    // 0x4040  81  ?PreLoad@grcDevice@rage@@UEAAXXZ
  local_58 = 0;
  local_68 = "rage::grcDevice::sm_FrameCounter";
  local_60 = "FF 05 ? ? ? ? 48 8D 15 ? ? ? ?";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// public: static unsigned int __cdecl rage::grcDevice::GetFrameCount(void)

uint __cdecl rage::grcDevice::GetFrameCount(void)

{
                    // 0x40a0  53  ?GetFrameCount@grcDevice@rage@@SAIXZ
  if (DAT_18001b208 == (uint *)0x0) {
    return 0;
  }
  return *DAT_18001b208;
}



TypeDescriptor * FUN_1800040b0(void)

{
  return &`public:_virtual_void___cdecl_rage::grcDevice::PreLoad(void)___ptr64'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void FUN_1800040c0(undefined8 param_1,longlong param_2)

{
  DAT_18001b208 =
       *(longlong *)(param_2 + 0x10) + 6 + (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 2);
  return;
}



undefined8 * FUN_1800040e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



// public: __cdecl rage::scrThread::scrThread(class rage::scrThread && __ptr64) __ptr64

scrThread * __thiscall rage::scrThread::scrThread(scrThread *this,scrThread *param_1)

{
                    // 0x40f0  16  ??0scrThread@rage@@QEAA@$$QEAV01@@Z
                    // 0x40f0  17  ??0scrThread@rage@@QEAA@AEBV01@@Z
                    // 0x40f0  18  ??0scrThread@rage@@QEAA@XZ
  *(undefined ***)this = vftable;
  return this;
}



// public: virtual void __cdecl rage::ioKeyboard::PostLoad(void) __ptr64

void __thiscall rage::ioKeyboard::PostLoad(ioKeyboard *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    // 0x4100  74  ?PostLoad@ioKeyboard@rage@@UEAAXXZ
  local_58 = 0;
  local_68 = "rage::ioKeyboard::KeyDown";
  local_60 = "48 8D 05 ? ? ? ? 48 89 74 24 ? 48 8D 4C 24 ? 48 89 44 24 ? 48 89 4C 24 ?";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  local_58 = 0;
  local_68 = "rage::ioKeyboard::KeyPressed";
  local_60 = "48 8D 05 ? ? ? ? 48 89 75 80";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  local_58 = 0;
  local_68 = "rage::ioKeyboard::KeyReleased";
  local_60 = "48 8D 05 ? ? ? ? 48 89 4D F8";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  if (scrThread::s_RegisterCommand != (_func_bool_void_ptr_uint__func_void_InfoBase_ptr_ptr *)0x0) {
    (*scrThread::s_RegisterCommand)((void *)0x0,0xac93d58a,FUN_180004260);
    if (scrThread::s_RegisterCommand != (_func_bool_void_ptr_uint__func_void_InfoBase_ptr_ptr *)0x0)
    {
      (*scrThread::s_RegisterCommand)((void *)0x0,0x6afb8eb9,FUN_1800042a0);
      if (scrThread::s_RegisterCommand !=
          (_func_bool_void_ptr_uint__func_void_InfoBase_ptr_ptr *)0x0) {
        (*scrThread::s_RegisterCommand)((void *)0x0,0x21b6eb31,FUN_1800042e0);
      }
    }
  }
  return;
}



// public: static bool __cdecl rage::ioKeyboard::KeyDown(unsigned int)

bool __cdecl rage::ioKeyboard::KeyDown(uint param_1)

{
  undefined1 uVar1;
  
                    // 0x4230  66  ?KeyDown@ioKeyboard@rage@@SA_NI@Z
  if (DAT_18001b218 == (code *)0x0) {
    return false;
  }
                    // WARNING: Could not recover jumptable at 0x00018000423d. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_18001b218)();
  return (bool)uVar1;
}



// public: static bool __cdecl rage::ioKeyboard::KeyPressed(unsigned int)

bool __cdecl rage::ioKeyboard::KeyPressed(uint param_1)

{
  undefined1 uVar1;
  
                    // 0x4240  67  ?KeyPressed@ioKeyboard@rage@@SA_NI@Z
  if (DAT_18001b210 == (code *)0x0) {
    return false;
  }
                    // WARNING: Could not recover jumptable at 0x00018000424d. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_18001b210)();
  return (bool)uVar1;
}



// public: static bool __cdecl rage::ioKeyboard::KeyReleased(unsigned int)

bool __cdecl rage::ioKeyboard::KeyReleased(uint param_1)

{
  undefined1 uVar1;
  
                    // 0x4250  68  ?KeyReleased@ioKeyboard@rage@@SA_NI@Z
  if (DAT_18001b220 == (code *)0x0) {
    return false;
  }
                    // WARNING: Could not recover jumptable at 0x00018000425d. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_18001b220)();
  return (bool)uVar1;
}



void FUN_180004260(longlong *param_1)

{
  undefined1 uVar1;
  
  if (DAT_18001b218 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_18001b218)(*(undefined4 *)param_1[2]);
  }
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = uVar1;
  }
  return;
}



void FUN_1800042a0(longlong *param_1)

{
  undefined1 uVar1;
  
  if (DAT_18001b210 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_18001b210)(*(undefined4 *)param_1[2]);
  }
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = uVar1;
  }
  return;
}



void FUN_1800042e0(longlong *param_1)

{
  undefined1 uVar1;
  
  if (DAT_18001b220 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_18001b220)(*(undefined4 *)param_1[2]);
  }
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = uVar1;
  }
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
    FUN_18000f264(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void FUN_180004380(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_180005510(puVar1 + 2);
    FUN_18000f264(puVar1);
    puVar1 = puVar2;
  }
  FUN_18000f264((void *)*param_1);
  return;
}



// public: static void __cdecl StaticCallbacksHandler<class rage::scrThread>::ClearCallbacks(void)

void __cdecl StaticCallbacksHandler<>::ClearCallbacks(void)

{
                    // 0x43f0  44  ?ClearCallbacks@?$StaticCallbacksHandler@VscrThread@rage@@@@SAXXZ
  FUN_1800045d0(0x1800192e0);
  return;
}



// public: static void __cdecl StaticCallbacksHandler<class rage::scrThread>::ExecuteCallback(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
// __ptr64)

void __cdecl StaticCallbacksHandler<>::ExecuteCallback(basic_string<> *param_1)

{
  basic_string<> *pbVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  basic_string<> *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong local_18 [2];
  
                    // 0x4400  49
                    // ?ExecuteCallback@?$StaticCallbacksHandler@VscrThread@rage@@@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
  pbVar4 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pbVar4 = *(basic_string<> **)param_1;
  }
  uVar5 = 0;
  uVar6 = 0xcbf29ce484222325;
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    do {
      pbVar1 = pbVar4 + uVar5;
      uVar5 = uVar5 + 1;
      uVar6 = (uVar6 ^ (byte)*pbVar1) * 0x100000001b3;
    } while (uVar5 < *(ulonglong *)(param_1 + 0x10));
  }
  puVar2 = FUN_180005360(pbVar4,local_18,(undefined8 *)param_1,uVar6);
  if (puVar2[1] == 0) {
    return;
  }
  plVar3 = FUN_180004c90(pbVar4,local_18,(longlong *)param_1);
  if (*(longlong **)(*plVar3 + 0x68) != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000180004481. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(*plVar3 + 0x68) + 0x10))();
    return;
  }
                    // WARNING: Subroutine does not return
  std::_Xbad_function_call();
}



// public: static void __cdecl StaticCallbacksHandler<class rage::scrThread>::RegisterCallback(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
// __ptr64,class std::function<void __cdecl(void)> const & __ptr64)

void __cdecl StaticCallbacksHandler<>::RegisterCallback(basic_string<> *param_1,function<> *param_2)

{
  longlong local_18 [3];
  
                    // 0x4490  84
                    // ?RegisterCallback@?$StaticCallbacksHandler@VscrThread@rage@@@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AXXZ@3@@Z
  FUN_1800049e0(param_1,local_18,(longlong *)param_1,(longlong)param_2);
  return;
}



undefined8 * FUN_1800044b0(undefined8 *param_1,undefined8 *param_2)

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
    FUN_180001650();
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
    if (uVar1 == 0) goto LAB_18000458e;
    if (uVar1 < 0x1000) {
      _Dst = (void *)FUN_18000eeb0(uVar1);
      goto LAB_18000458e;
    }
    uVar4 = uVar6 + 0x28;
    if (uVar4 <= uVar1) {
                    // WARNING: Subroutine does not return
      FUN_1800015b0();
    }
  }
  else {
    uVar4 = 0x8000000000000027;
    uVar6 = 0x7fffffffffffffff;
  }
  lVar5 = FUN_18000eeb0(uVar4);
  if (lVar5 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar5;
LAB_18000458e:
  *param_1 = _Dst;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  memcpy(_Dst,param_2,uVar2 + 1);
  return param_1;
}



void FUN_1800045d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_18 [2];
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1800047e0(param_1,(longlong *)**(longlong **)(param_1 + 8),*(longlong **)(param_1 + 8));
      return;
    }
    puVar1 = *(undefined8 **)(param_1 + 8);
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_180005510(puVar1 + 2);
      FUN_18000f264(puVar1);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_18[0] = *(undefined8 *)(param_1 + 8);
    FUN_180004f10(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_1 + 0x20),local_18);
  }
  return;
}



void FUN_1800046a0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

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
LAB_1800047d9:
                    // WARNING: Subroutine does not return
      FUN_1800015b0();
    }
    uVar5 = param_2 * 8;
    if (uVar5 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else if (uVar5 < 0x1000) {
      puVar6 = (undefined8 *)FUN_18000eeb0(uVar5);
    }
    else {
      if (uVar5 + 0x27 <= uVar5) goto LAB_1800047d9;
      lVar3 = FUN_18000eeb0(uVar5 + 0x27);
      if (lVar3 == 0) goto LAB_1800047aa;
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
LAB_1800047aa:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000f264(pvVar4);
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



longlong * FUN_1800047e0(longlong param_1,longlong *param_2,longlong *param_3)

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
    FUN_180005510(plVar12 + 2);
    FUN_18000f264(plVar12);
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
          FUN_180005510(plVar8 + 2);
          FUN_18000f264(plVar8);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar8 == plVar10) break;
          plVar8 = plVar9;
          if (plVar9 == param_3) {
            *plVar12 = (longlong)plVar9;
            goto LAB_180004990;
          }
        }
        *plVar12 = (longlong)puVar3;
        plVar12[1] = (longlong)puVar3;
      }
      goto LAB_180004990;
    }
    plVar12 = plVar9;
  } while (plVar9 != param_3);
  if (plVar8 == param_2) {
    *plVar11 = (longlong)plVar9;
  }
LAB_180004990:
  *puVar4 = plVar9;
  plVar9[1] = (longlong)puVar4;
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800049e0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  ulonglong uVar10;
  undefined8 *local_78;
  undefined8 *local_68;
  longlong lStack_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  plVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    plVar6 = (longlong *)*param_3;
  }
  uVar10 = 0xcbf29ce484222325;
  uVar9 = 0;
  if (param_3[2] != 0) {
    do {
      uVar10 = (uVar10 ^ *(byte *)((longlong)plVar6 + uVar9)) * 0x100000001b3;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulonglong)param_3[2]);
  }
  FUN_180005360(uVar9,&local_68,param_3,uVar10);
  if (lStack_60 != 0) {
    *param_2 = lStack_60;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_1800192f0 == 0x249249249249249) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar3 = (code *)swi(3);
    plVar6 = (longlong *)(*pcVar3)();
    return plVar6;
  }
  local_58 = &DAT_1800192e8;
  local_50 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)FUN_18000eeb0(0x70);
  puVar2 = puVar7 + 2;
  local_50 = puVar7;
  local_48 = puVar2;
  FUN_1800044b0(puVar2,param_3);
  puVar7[0xd] = 0;
  puVar1 = *(undefined8 **)(param_4 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    uVar8 = (**(code **)*puVar1)(puVar1,puVar7 + 6);
    puVar7[0xd] = uVar8;
  }
  if (_DAT_1800192e0 < (float)(DAT_1800192f0 + 1) / (float)DAT_180019318) {
    FUN_180004fe0();
    local_78 = *(undefined8 **)(DAT_1800192f8 + 8 + (uVar10 & DAT_180019310) * 0x10);
    if (local_78 == DAT_1800192e8) {
      local_78 = DAT_1800192e8;
    }
    else {
      puVar1 = *(undefined8 **)(DAT_1800192f8 + (uVar10 & DAT_180019310) * 0x10);
      uVar9 = puVar7[5];
      _Size = puVar7[4];
      while( true ) {
        _Buf2 = local_78 + 2;
        if (0xf < (ulonglong)local_78[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        _Buf1 = puVar2;
        if (0xf < uVar9) {
          _Buf1 = (undefined8 *)*puVar2;
        }
        if ((_Size == local_78[4]) &&
           ((_Size == 0 || (iVar5 = memcmp(_Buf1,_Buf2,_Size), iVar5 == 0)))) break;
        if (local_78 == puVar1) goto LAB_180004bfc;
        local_78 = (undefined8 *)local_78[1];
      }
      local_78 = (undefined8 *)*local_78;
    }
LAB_180004bfc:
    local_68 = local_78;
  }
  puVar2 = (undefined8 *)local_68[1];
  DAT_1800192f0 = DAT_1800192f0 + 1;
  *puVar7 = local_68;
  puVar7[1] = puVar2;
  *puVar2 = puVar7;
  local_68[1] = puVar7;
  lVar4 = DAT_1800192f8;
  uVar10 = uVar10 & DAT_180019310;
  puVar1 = *(undefined8 **)(DAT_1800192f8 + uVar10 * 0x10);
  if (puVar1 == DAT_1800192e8) {
    *(undefined8 **)(DAT_1800192f8 + uVar10 * 0x10) = puVar7;
  }
  else {
    if (puVar1 == local_68) {
      *(undefined8 **)(DAT_1800192f8 + uVar10 * 0x10) = puVar7;
      goto LAB_180004c6a;
    }
    if (*(undefined8 **)(DAT_1800192f8 + 8 + uVar10 * 0x10) != puVar2) goto LAB_180004c6a;
  }
  *(undefined8 **)(lVar4 + 8 + uVar10 * 0x10) = puVar7;
LAB_180004c6a:
  *param_2 = (longlong)puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180004c90(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  size_t _Size;
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *local_58;
  longlong lStack_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  plVar5 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    plVar5 = (longlong *)*param_3;
  }
  uVar9 = 0xcbf29ce484222325;
  uVar7 = 0;
  if (param_3[2] != 0) {
    do {
      uVar9 = (uVar9 ^ *(byte *)((longlong)plVar5 + uVar7)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_3[2]);
  }
  FUN_180005360(uVar7,&local_58,param_3,uVar9);
  if (lStack_50 != 0) {
    *param_2 = lStack_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_1800192f0 == 0x249249249249249) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar2 = (code *)swi(3);
    plVar5 = (longlong *)(*pcVar2)();
    return plVar5;
  }
  local_48 = &DAT_1800192e8;
  local_40 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)FUN_18000eeb0(0x70);
  local_40 = puVar6;
  FUN_1800044b0(puVar6 + 2,param_3);
  puVar6[0xd] = 0;
  if (_DAT_1800192e0 < (float)(DAT_1800192f0 + 1) / (float)DAT_180019318) {
    FUN_180004fe0();
    local_58 = *(undefined8 **)(DAT_1800192f8 + 8 + (uVar9 & DAT_180019310) * 0x10);
    if (local_58 == DAT_1800192e8) {
      local_58 = DAT_1800192e8;
    }
    else {
      puVar1 = *(undefined8 **)(DAT_1800192f8 + (uVar9 & DAT_180019310) * 0x10);
      uVar7 = puVar6[5];
      _Size = puVar6[4];
      while( true ) {
        puVar8 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        _Buf1 = puVar6 + 2;
        if (0xf < uVar7) {
          _Buf1 = (undefined8 *)puVar6[2];
        }
        if ((_Size == local_58[4]) &&
           ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar8,_Size), iVar4 == 0)))) break;
        if (local_58 == puVar1) goto LAB_180004e90;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_180004e90:
  puVar1 = (undefined8 *)local_58[1];
  DAT_1800192f0 = DAT_1800192f0 + 1;
  *puVar6 = local_58;
  puVar6[1] = puVar1;
  *puVar1 = puVar6;
  local_58[1] = puVar6;
  lVar3 = DAT_1800192f8;
  uVar9 = uVar9 & DAT_180019310;
  puVar8 = *(undefined8 **)(DAT_1800192f8 + uVar9 * 0x10);
  if (puVar8 == DAT_1800192e8) {
    *(undefined8 **)(DAT_1800192f8 + uVar9 * 0x10) = puVar6;
  }
  else {
    if (puVar8 == local_58) {
      *(undefined8 **)(DAT_1800192f8 + uVar9 * 0x10) = puVar6;
      goto LAB_180004eec;
    }
    if (*(undefined8 **)(DAT_1800192f8 + 8 + uVar9 * 0x10) != puVar1) goto LAB_180004eec;
  }
  *(undefined8 **)(lVar3 + 8 + uVar9 * 0x10) = puVar6;
LAB_180004eec:
  *param_2 = (longlong)puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



void FUN_180004f10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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



void FUN_180004fa0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_180005510((longlong *)(*(longlong *)(param_1 + 8) + 0x10));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_18000f264(*(void **)(param_1 + 8));
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_180004fe0(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = DAT_180019318;
  fVar5 = ceilf((float)(DAT_1800192f0 + 1) / _DAT_1800192e0);
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
  FUN_1800050b0(uVar3,uVar4);
  return;
}



void FUN_1800050b0(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulonglong _Size;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *_Buf2;
  longlong lVar16;
  undefined8 *puVar17;
  
  puVar9 = DAT_1800192e8;
  for (lVar16 = 0x3f; 0xfffffffffffffffU >> lVar16 == 0; lVar16 = lVar16 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar16 & 0x3f)) < param_2) {
    std::_Xlength_error("invalid hash bucket count");
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = param_2 - 1 | 1;
  lVar16 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  lVar16 = 1L << ((char)lVar16 + 1U & 0x3f);
  FUN_1800046a0((ulonglong *)&DAT_1800192f8,lVar16 * 2,DAT_1800192e8);
  DAT_180019310 = lVar16 - 1;
  DAT_180019318 = lVar16;
  puVar8 = (undefined8 *)*DAT_1800192e8;
joined_r0x00018000513c:
  do {
    if (puVar8 == puVar9) {
      return;
    }
    uVar11 = puVar8[5];
    puVar17 = puVar8 + 2;
    puVar2 = (undefined8 *)*puVar8;
    _Size = puVar8[4];
    if (0xf < uVar11) {
      puVar17 = (undefined8 *)puVar8[2];
    }
    uVar14 = 0;
    uVar12 = 0xcbf29ce484222325;
    if (_Size != 0) {
      do {
        pbVar1 = (byte *)((longlong)puVar17 + uVar14);
        uVar14 = uVar14 + 1;
        uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
      } while (uVar14 < _Size);
    }
    puVar17 = (undefined8 *)((DAT_180019310 & uVar12) * 0x10 + DAT_1800192f8);
    if ((undefined8 *)*puVar17 == puVar9) {
      *puVar17 = puVar8;
LAB_180005317:
      puVar17[1] = puVar8;
      puVar8 = puVar2;
      goto joined_r0x00018000513c;
    }
    plVar3 = (longlong *)puVar17[1];
    plVar15 = plVar3 + 2;
    if (0xf < (ulonglong)plVar3[5]) {
      plVar15 = (longlong *)*plVar15;
    }
    puVar13 = puVar8 + 2;
    if (0xf < uVar11) {
      puVar13 = (undefined8 *)puVar8[2];
    }
    if ((_Size == plVar3[4]) &&
       ((_Size == 0 || (iVar10 = memcmp(puVar13,plVar15,_Size), iVar10 == 0)))) {
      puVar13 = (undefined8 *)*plVar3;
      if (puVar13 != puVar8) {
        puVar4 = (undefined8 *)puVar8[1];
        *puVar4 = puVar2;
        puVar5 = (undefined8 *)puVar2[1];
        *puVar5 = puVar13;
        puVar6 = (undefined8 *)puVar13[1];
        *puVar6 = puVar8;
        puVar13[1] = puVar5;
        puVar2[1] = puVar4;
        puVar8[1] = puVar6;
      }
      goto LAB_180005317;
    }
    plVar15 = (longlong *)*puVar17;
    do {
      if (plVar15 == plVar3) {
        puVar13 = (undefined8 *)puVar8[1];
        *puVar13 = puVar2;
        puVar4 = (undefined8 *)puVar2[1];
        *puVar4 = plVar3;
        puVar5 = (undefined8 *)plVar3[1];
        *puVar5 = puVar8;
        plVar3[1] = (longlong)puVar4;
        puVar2[1] = puVar13;
        puVar8[1] = puVar5;
        *puVar17 = puVar8;
        puVar8 = puVar2;
        goto joined_r0x00018000513c;
      }
      plVar3 = (longlong *)plVar3[1];
      _Buf2 = plVar3 + 2;
      if (0xf < (ulonglong)plVar3[5]) {
        _Buf2 = (longlong *)*_Buf2;
      }
      puVar13 = puVar8 + 2;
      if (0xf < uVar11) {
        puVar13 = (undefined8 *)puVar8[2];
      }
    } while ((_Size != plVar3[4]) ||
            ((_Size != 0 && (iVar10 = memcmp(puVar13,_Buf2,_Size), iVar10 != 0))));
    lVar16 = *plVar3;
    puVar17 = (undefined8 *)puVar8[1];
    *puVar17 = puVar2;
    plVar15 = (longlong *)puVar2[1];
    *plVar15 = lVar16;
    puVar13 = *(undefined8 **)(lVar16 + 8);
    *puVar13 = puVar8;
    *(longlong **)(lVar16 + 8) = plVar15;
    puVar2[1] = puVar17;
    puVar8[1] = puVar13;
    puVar8 = puVar2;
  } while( true );
}



undefined8 *
FUN_180005360(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)((DAT_180019310 & param_4) * 0x10 + DAT_1800192f8);
  puVar4 = (undefined8 *)plVar5[1];
  if (puVar4 == DAT_1800192e8) {
    *param_2 = DAT_1800192e8;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = (undefined8 *)*plVar5;
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = puVar4 + 2;
    if (0xf < (ulonglong)puVar4[5]) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    _Buf1 = param_3;
    if (0xf < uVar2) {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == puVar4[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0))))
    break;
    if (puVar4 == puVar1) {
      *param_2 = puVar4;
      param_2[1] = 0;
      return param_2;
    }
    puVar4 = (undefined8 *)puVar4[1];
  }
  *param_2 = *puVar4;
  param_2[1] = puVar4;
  return param_2;
}



TypeDescriptor * FUN_180005450(void)

{
  return &`public:_virtual_void___cdecl_rage::ioKeyboard::PostLoad(void)___ptr64'::__l2::<lambda_3>
          ::RTTI_Type_Descriptor;
}



void FUN_180005460(undefined8 param_1,longlong param_2)

{
  DAT_18001b220 =
       *(longlong *)(param_2 + 0x10) + 7 + (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 3);
  return;
}



undefined8 * FUN_180005480(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



TypeDescriptor * FUN_180005490(void)

{
  return &`public:_virtual_void___cdecl_rage::ioKeyboard::PostLoad(void)___ptr64'::__l2::<lambda_2>
          ::RTTI_Type_Descriptor;
}



void FUN_1800054a0(undefined8 param_1,longlong param_2)

{
  DAT_18001b210 =
       *(longlong *)(param_2 + 0x10) + 7 + (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 3);
  return;
}



undefined8 * FUN_1800054c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



TypeDescriptor * FUN_1800054d0(void)

{
  return &`public:_virtual_void___cdecl_rage::ioKeyboard::PostLoad(void)___ptr64'::__l2::<lambda_1>
          ::RTTI_Type_Descriptor;
}



void FUN_1800054e0(undefined8 param_1,longlong param_2)

{
  DAT_18001b218 =
       *(longlong *)(param_2 + 0x10) + 7 + (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 3);
  return;
}



undefined8 * FUN_180005500(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



void FUN_180005510(longlong *param_1)

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
    FUN_18000f264(pvVar3);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



undefined8 * FUN_1800055a0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}



undefined4 * FUN_1800055e0(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



undefined8 FUN_1800055f0(longlong *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  uint7 uVar2;
  undefined1 local_18 [16];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_1,local_18,param_2);
  uVar2 = (uint7)((ulonglong)piVar1 >> 8);
  if ((*(longlong *)(*(longlong *)(piVar1 + 2) + 8) == *(longlong *)(*(longlong *)(param_3 + 2) + 8)
      ) && (*piVar1 == *param_3)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



longlong FUN_180005630(longlong param_1,int *param_2,int param_3)

{
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)*(longlong *)(param_2 + 2) >> 8);
  if ((*(longlong *)(param_1 + 8) == *(longlong *)(*(longlong *)(param_2 + 2) + 8)) &&
     (*param_2 == param_3)) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}



undefined4 * FUN_180005650(undefined4 *param_1)

{
  *param_1 = 0x16;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_1800192b8;
  return param_1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

longlong * FUN_180005670(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 ****ppppuVar3;
  void *pvVar4;
  undefined1 auStack_78 [40];
  undefined8 ***local_50 [2];
  size_t local_40;
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180019240 ^ (ulonglong)auStack_78;
  local_30 = param_3;
  if (param_3[2] != 0) {
    FUN_180008840(param_3,&DAT_180012090,2);
  }
  (**(code **)(**(longlong **)(param_2 + 2) + 0x10))(*(longlong **)(param_2 + 2),local_50,*param_2);
  ppppuVar3 = local_50;
  if (0xf < local_38) {
    ppppuVar3 = (undefined8 ****)local_50[0];
  }
  FUN_180008840(param_3,ppppuVar3,local_40);
  if (0xf < local_38) {
    ppppuVar3 = (undefined8 ****)local_50[0];
    if ((0xfff < local_38 + 1) &&
       (ppppuVar3 = (undefined8 ****)local_50[0][-1],
       0x1f < (ulonglong)((longlong)local_50[0] + (-8 - (longlong)ppppuVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(ppppuVar3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = lVar2;
  lVar2 = param_3[3];
  param_1[2] = param_3[2];
  param_1[3] = lVar2;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  if (0xf < (ulonglong)param_3[3]) {
    pvVar1 = (void *)*param_3;
    pvVar4 = pvVar1;
    if ((0xfff < param_3[3] + 1U) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar4);
  }
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  return param_1;
}



undefined8 * FUN_1800057d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_18000f264(param_1);
  }
  return param_1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 *** FUN_180005820(undefined8 ***param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 *****pppppuVar3;
  undefined1 auStack_68 [32];
  undefined8 ****local_48 [3];
  ulonglong local_30;
  undefined8 ****local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_68;
  local_28 = (undefined8 ****)param_1;
  (**(code **)(*(longlong *)param_2[1] + 0x10))
            ((longlong *)param_2[1],local_48,*(undefined4 *)param_2);
  *param_1 = (undefined8 **)std::exception::vftable;
  local_20 = 1;
  local_28 = local_48;
  if (0xf < local_30) {
    local_28 = local_48[0];
  }
  param_1[1] = (undefined8 **)0x0;
  param_1[2] = (undefined8 **)0x0;
  __std_exception_copy(&local_28);
  *param_1 = (undefined8 **)std::runtime_error::vftable;
  if (0xf < local_30) {
    pppppuVar3 = (undefined8 *****)local_48[0];
    if ((0xfff < local_30 + 1) &&
       (pppppuVar3 = (undefined8 *****)local_48[0][-1],
       0x1f < (ulonglong)((longlong)local_48[0] + (-8 - (longlong)pppppuVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pppppuVar3);
  }
  ppuVar1 = (undefined8 **)*param_2;
  ppuVar2 = (undefined8 **)param_2[1];
  *param_1 = (undefined8 **)std::system_error::vftable;
  param_1[3] = ppuVar1;
  param_1[4] = ppuVar2;
  return param_1;
}



void FUN_180005910(void)

{
  undefined8 *puVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48 [4];
  undefined8 **local_38 [7];
  
  puVar1 = (undefined8 *)FUN_180005650(local_48);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  FUN_180005820(local_38,&local_58);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_180015d48);
}



undefined8 * FUN_180005950(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = std::system_error::vftable;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



undefined8 * FUN_1800059b0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  return param_1;
}



char * FUN_180005a10(void)

{
  return "generic";
}



undefined8 * FUN_180005a20(undefined8 param_1,undefined8 *param_2,int param_3)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = std::_Syserror_map(param_3);
  sVar2 = 0xffffffffffffffff;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    sVar2 = sVar2 + 1;
  } while (pcVar1[sVar2] != '\0');
  FUN_180002e30(param_2,pcVar1,sVar2);
  return param_2;
}



void * FUN_180005a70(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_18000f264(param_1);
  }
  return param_1;
}



char * FUN_180005aa0(void)

{
  return "system";
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 * FUN_180005ab0(undefined8 param_1,undefined8 *param_2,DWORD param_3)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_48 [40];
  char *local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180019240 ^ (ulonglong)auStack_48;
  local_20 = (char *)0x0;
  local_18 = FUN_18000e7fc(param_3,(longlong *)&local_20);
  if ((local_20 == (char *)0x0) || (pcVar1 = local_20, sVar2 = local_18, local_18 == 0)) {
    pcVar1 = "unknown error";
    sVar2 = 0xd;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_180002e30(param_2,pcVar1,sVar2);
  LocalFree(local_20);
  return param_2;
}



int * FUN_180005b50(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    *param_2 = 0;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_1800192b8;
    return param_2;
  }
  iVar1 = std::_Winerror_map(param_3);
  if (iVar1 == 0) {
    *param_2 = param_3;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_1800192c8;
    return param_2;
  }
  *param_2 = iVar1;
  *(undefined ***)(param_2 + 2) = &PTR_vftable_1800192b8;
  return param_2;
}



undefined4 * FUN_180005bd0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_1800192c8;
  return param_1;
}



void FUN_180005bf0(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48 [4];
  undefined8 **local_38 [7];
  
  puVar1 = (undefined8 *)FUN_180005bd0(local_48,param_1);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  FUN_180005820(local_38,&local_58);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_180015d48);
}



LPWSTR FUN_180005c30(LPWSTR param_1,UINT param_2,undefined8 *param_3)

{
  LPCSTR pCVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  LPWSTR pWVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  LPWSTR pWVar8;
  ulonglong uVar9;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  param_1[6] = L'\0';
  param_1[7] = L'\0';
  param_1[8] = L'\0';
  param_1[9] = L'\0';
  param_1[10] = L'\0';
  param_1[0xb] = L'\0';
  param_1[0xc] = L'\a';
  param_1[0xd] = L'\0';
  param_1[0xe] = L'\0';
  param_1[0xf] = L'\0';
  *param_1 = L'\0';
  uVar9 = param_3[1];
  if (uVar9 != 0) {
    if (0x7fffffff < uVar9) {
                    // WARNING: Subroutine does not return
      FUN_180005910();
    }
    pCVar1 = (LPCSTR)*param_3;
    uVar4 = __std_fs_convert_narrow_to_wide(param_2,pCVar1,(int)uVar9,(LPWSTR)0x0,0);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180005bf0(iVar3);
    }
    uVar7 = (ulonglong)(int)uVar4;
    uVar2 = *(ulonglong *)(param_1 + 8);
    if (uVar2 < uVar7) {
      uVar6 = uVar7 - uVar2;
      if (*(ulonglong *)(param_1 + 0xc) - uVar2 < uVar6) {
        FUN_1800094b0((undefined8 *)param_1,uVar6,uVar9,uVar6);
      }
      else {
        *(ulonglong *)(param_1 + 8) = uVar7;
        pWVar5 = param_1;
        if (7 < *(ulonglong *)(param_1 + 0xc)) {
          pWVar5 = *(LPWSTR *)param_1;
        }
        pWVar8 = pWVar5 + uVar2;
        if (uVar6 != 0) {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pWVar8 = L'\0';
            pWVar8 = pWVar8 + 1;
          }
        }
        pWVar5[uVar7] = L'\0';
      }
    }
    else {
      *(ulonglong *)(param_1 + 8) = uVar7;
      pWVar5 = param_1;
      if (7 < *(ulonglong *)(param_1 + 0xc)) {
        pWVar5 = *(LPWSTR *)param_1;
      }
      pWVar5[uVar7] = L'\0';
    }
    pWVar5 = param_1;
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      pWVar5 = *(LPWSTR *)param_1;
    }
    uVar4 = __std_fs_convert_narrow_to_wide(param_2,pCVar1,*(int *)(param_3 + 1),pWVar5,(int)uVar4);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180005bf0(iVar3);
    }
  }
  return param_1;
}



uint * FUN_180005da0(uint *param_1,uint *param_2)

{
  uint uVar1;
  short sVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2 - (longlong)param_1 >> 1;
  if (lVar3 < 2) {
    return param_1;
  }
  uVar1 = *param_1;
  sVar2 = (short)(uVar1 >> 0x10);
  if ((uVar1 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    return param_1 + 1;
  }
  if (((short)uVar1 != 0x5c) && ((short)uVar1 != 0x2f)) {
    return param_1;
  }
  if ((3 < lVar3) &&
     ((*(short *)((longlong)param_1 + 6) == 0x5c || (*(short *)((longlong)param_1 + 6) == 0x2f)))) {
    if ((lVar3 != 4) && (((short)param_1[2] == 0x5c || ((short)param_1[2] == 0x2f))))
    goto LAB_180005e69;
    sVar2 = *(short *)((longlong)param_1 + 2);
    if ((((sVar2 == 0x5c) || (sVar2 == 0x2f)) &&
        (((short)param_1[1] == 0x3f || ((short)param_1[1] == 0x2e)))) ||
       ((sVar2 == 0x3f && ((short)param_1[1] == 0x3f)))) {
      return (uint *)((longlong)param_1 + 6);
    }
  }
  if ((ulonglong)((longlong)param_2 - (longlong)param_1 >> 1) < 3) {
    return param_1;
  }
LAB_180005e69:
  if ((((sVar2 == 0x5c) || (sVar2 == 0x2f)) && ((short)param_1[1] != 0x5c)) &&
     (((short)param_1[1] != 0x2f && (param_1 = (uint *)((longlong)param_1 + 6), param_1 != param_2))
     )) {
    while (((short)*param_1 != 0x5c && ((short)*param_1 != 0x2f))) {
      param_1 = (uint *)((longlong)param_1 + 2);
      if (param_1 == param_2) {
        return param_1;
      }
    }
  }
  return param_1;
}



uint * FUN_180005eb0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint *puVar4;
  uint *_Src;
  uint *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar7 = *(ulonglong *)(param_2 + 6);
  puVar6 = param_2;
  if (7 < uVar7) {
    puVar6 = *(uint **)param_2;
  }
  uVar2 = *(ulonglong *)(param_2 + 4);
  uVar11 = uVar2 * 2;
  puVar10 = param_1;
  if (((longlong)uVar11 >> 1 < 2) || (0x19 < (*puVar6 & 0xffffffdf) - 0x3a0041)) {
    puVar5 = FUN_180005da0(puVar6,(uint *)(uVar11 + (longlong)puVar6));
    uVar7 = *(ulonglong *)(param_2 + 6);
    if (puVar6 != puVar5) goto LAB_180006018;
  }
  else if ((2 < (longlong)uVar11 >> 1) && (((short)puVar6[1] == 0x5c || ((short)puVar6[1] == 0x2f)))
          ) {
LAB_180006018:
    uVar11 = uVar2 * 2;
    if (param_1 == param_2) {
      return param_1;
    }
    if (7 < uVar7) {
      param_2 = *(uint **)param_2;
    }
    if (*(ulonglong *)(param_1 + 6) < uVar2) goto LAB_18000605a;
    if (7 < *(ulonglong *)(param_1 + 6)) {
      puVar10 = *(uint **)param_1;
    }
    goto LAB_18000603f;
  }
  puVar6 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar6 = *(uint **)param_1;
  }
  puVar5 = (uint *)((longlong)puVar6 + *(longlong *)(param_1 + 4) * 2);
  puVar9 = param_2;
  if (7 < uVar7) {
    puVar9 = *(uint **)param_2;
  }
  puVar1 = (uint *)((longlong)puVar9 + uVar2 * 2);
  puVar4 = FUN_180005da0(puVar6,puVar5);
  _Src = FUN_180005da0(puVar9,puVar1);
  if (puVar9 != _Src) {
    uVar11 = (longlong)_Src - (longlong)puVar9 >> 1;
    uVar12 = (longlong)puVar4 - (longlong)puVar6 >> 1;
    uVar7 = uVar12;
    if (uVar11 < uVar12) {
      uVar7 = uVar11;
    }
    if (uVar7 != 0) {
      lVar8 = (longlong)puVar6 - (longlong)puVar9;
      do {
        if (*(short *)(lVar8 + (longlong)puVar9) != (short)*puVar9) goto LAB_180005fce;
        puVar9 = (uint *)((longlong)puVar9 + 2);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if ((uVar12 < uVar11) || (uVar11 < uVar12)) {
LAB_180005fce:
      if (param_1 == param_2) {
        return param_1;
      }
      if (7 < *(ulonglong *)(param_2 + 6)) {
        param_2 = *(uint **)param_2;
      }
      if (*(ulonglong *)(param_1 + 6) < uVar2) {
LAB_18000605a:
        FUN_180008f70((longlong *)param_1,uVar2,uVar11,param_2);
        return param_1;
      }
      if (7 < *(ulonglong *)(param_1 + 6)) {
        puVar10 = *(uint **)param_1;
      }
LAB_18000603f:
      *(ulonglong *)(param_1 + 4) = uVar2;
      memmove(puVar10,param_2,uVar2 * 2);
      *(undefined2 *)((longlong)puVar10 + uVar2 * 2) = 0;
      return param_1;
    }
  }
  if ((_Src == puVar1) || (((short)*_Src != 0x5c && ((short)*_Src != 0x2f)))) {
    if (puVar4 == puVar5) {
      if ((longlong)((longlong)puVar4 - (longlong)puVar6 & 0xfffffffffffffffeU) < 6)
      goto LAB_18000610d;
    }
    else if ((*(short *)((longlong)puVar5 + -2) == 0x5c) ||
            (*(short *)((longlong)puVar5 + -2) == 0x2f)) goto LAB_18000610d;
    uVar7 = *(ulonglong *)(param_1 + 6);
    uVar2 = *(ulonglong *)(param_1 + 4);
    if (uVar2 < uVar7) {
      *(ulonglong *)(param_1 + 4) = uVar2 + 1;
      puVar6 = param_1;
      if (7 < uVar7) {
        puVar6 = *(uint **)param_1;
      }
      *(undefined4 *)((longlong)puVar6 + uVar2 * 2) = 0x5c;
    }
    else {
      FUN_180008de0((undefined8 *)param_1,uVar7,uVar11,0x5c);
    }
  }
  else {
    uVar7 = (longlong)puVar4 - (longlong)puVar6 >> 1;
    if (*(ulonglong *)(param_1 + 4) < uVar7) {
      FUN_1800088c0();
      pcVar3 = (code *)swi(3);
      puVar6 = (uint *)(*pcVar3)();
      return puVar6;
    }
    *(ulonglong *)(param_1 + 4) = uVar7;
    puVar6 = param_1;
    if (7 < *(ulonglong *)(param_1 + 6)) {
      puVar6 = *(uint **)param_1;
    }
    *(undefined2 *)((longlong)puVar6 + uVar7 * 2) = 0;
  }
LAB_18000610d:
  lVar8 = *(longlong *)(param_1 + 4);
  uVar7 = (longlong)puVar1 - (longlong)_Src >> 1;
  if (*(ulonglong *)(param_1 + 6) - lVar8 < uVar7) {
    FUN_1800090d0((undefined8 *)param_1,uVar7,uVar11,_Src,uVar7);
  }
  else {
    *(ulonglong *)(param_1 + 4) = lVar8 + uVar7;
    puVar6 = param_1;
    if (7 < *(ulonglong *)(param_1 + 6)) {
      puVar6 = *(uint **)param_1;
    }
    memmove((void *)((longlong)puVar6 + lVar8 * 2),_Src,uVar7 * 2);
    *(undefined2 *)((longlong)puVar6 + (lVar8 + uVar7) * 2) = 0;
  }
  return param_1;
}



uint * FUN_180006190(uint *param_1,uint *param_2,uint *param_3)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  undefined2 *_Dst;
  ulonglong uVar5;
  longlong lVar6;
  uint *_Dst_00;
  
  lVar2 = *(longlong *)(param_3 + 4);
  puVar4 = param_3;
  if (7 < *(ulonglong *)(param_3 + 6)) {
    puVar4 = *(uint **)param_3;
  }
  if (((lVar2 == 0) ||
      (((3 < lVar2 * 2 && ((*puVar4 & 0xffffffdf) - 0x3a0041 < 0x1a)) || ((short)*puVar4 == 0x5c))))
     || ((short)*puVar4 == 0x2f)) {
    FUN_180006320((undefined8 *)param_1,(undefined8 *)param_2);
    FUN_180005eb0(param_1,param_3);
    return param_1;
  }
  lVar3 = *(longlong *)(param_2 + 4);
  if (7 < *(ulonglong *)(param_2 + 6)) {
    param_2 = *(uint **)param_2;
  }
  if (lVar3 == 2) {
    if (0x19 < (*param_2 & 0xffffffdf) - 0x3a0041) {
LAB_180006276:
      sVar1 = *(short *)((longlong)param_2 + lVar3 * 2 + -2);
      if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) {
        lVar6 = 1;
        goto LAB_180006238;
      }
    }
  }
  else if (lVar3 != 0) goto LAB_180006276;
  lVar6 = 0;
LAB_180006238:
  uVar5 = lVar6 + lVar3 + lVar2;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 7;
  param_1[7] = 0;
  *(undefined2 *)param_1 = 0;
  if (uVar5 < 8) {
    *(ulonglong *)(param_1 + 4) = uVar5;
  }
  else {
    FUN_18000a2a0((undefined8 *)param_1,uVar5);
  }
  _Dst_00 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    _Dst_00 = *(uint **)param_1;
  }
  memcpy(_Dst_00,param_2,lVar3 * 2);
  _Dst = (undefined2 *)(lVar3 * 2 + (longlong)_Dst_00);
  if ((char)lVar6 != '\0') {
    *_Dst = 0x5c;
    _Dst = _Dst + 1;
  }
  memcpy(_Dst,puVar4,lVar2 * 2);
  *(ulonglong *)(param_1 + 4) = uVar5;
  puVar4 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar4 = *(uint **)param_1;
  }
  *(undefined2 *)((longlong)puVar4 + uVar5 * 2) = 0;
  return param_1;
}



undefined8 * FUN_180006320(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
  size_t sVar5;
  
  _Dst = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
                    // WARNING: Subroutine does not return
    FUN_180001650();
  }
  if (uVar1 < 8) {
    param_1[2] = uVar1;
    param_1[3] = 7;
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    return param_1;
  }
  uVar4 = uVar1 | 7;
  if (uVar4 < 0x7fffffffffffffff) {
    if (uVar4 < 10) {
      uVar4 = 10;
    }
    if (0x7fffffffffffffff < uVar4 + 1) goto LAB_18000644a;
    sVar5 = (uVar4 + 1) * 2;
    if (sVar5 == 0) goto LAB_180006415;
  }
  else {
    sVar5 = 0xfffffffffffffffe;
    uVar4 = 0x7ffffffffffffffe;
  }
  if (sVar5 < 0x1000) {
    _Dst = (void *)FUN_18000eeb0(sVar5);
  }
  else {
    if (sVar5 + 0x27 <= sVar5) {
LAB_18000644a:
                    // WARNING: Subroutine does not return
      FUN_1800015b0();
    }
    lVar3 = FUN_18000eeb0(sVar5 + 0x27);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar3;
  }
LAB_180006415:
  *param_1 = _Dst;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  memcpy(_Dst,param_2,uVar1 * 2 + 2);
  return param_1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 *
FUN_180006450(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined1 auStack_b8 [32];
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 *local_78;
  undefined8 local_68 [4];
  longlong *local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180019240 ^ (ulonglong)auStack_b8;
  local_78 = param_1;
  plVar2 = FUN_1800044b0(local_68,param_2);
  local_48 = (longlong *)*param_4;
  lStack_40 = param_4[1];
  local_48 = FUN_180005670((longlong *)&local_98,(undefined4 *)&local_48,plVar2);
  if (0xf < (ulonglong)local_48[3]) {
    local_48 = (longlong *)*local_48;
  }
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  lStack_40 = CONCAT71(lStack_40._1_7_,1);
  __std_exception_copy(&local_48,param_1 + 1);
  *param_1 = std::runtime_error::vftable;
  if (0xf < uStack_80) {
    pvVar3 = local_98;
    if ((0xfff < uStack_80 + 1) &&
       (pvVar3 = *(void **)((longlong)local_98 + -8),
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar3);
  }
  uVar1 = param_4[1];
  param_1[3] = *param_4;
  param_1[4] = uVar1;
  *param_1 = std::filesystem::filesystem_error::vftable;
  FUN_180006320(param_1 + 5,param_3);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  *(undefined2 *)(param_1 + 9) = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 7;
  local_98 = (void *)0x0;
  local_48 = (longlong *)"Unknown exception";
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    local_48 = (longlong *)param_1[1];
  }
  lStack_40 = -1;
  do {
    lStack_40 = lStack_40 + 1;
  } while (*(char *)((longlong)local_48 + lStack_40) != '\0');
  FUN_180006640(param_1 + 0xd,&local_48,param_3,&local_98);
  if (7 < uStack_80) {
    pvVar3 = local_98;
    if ((0xfff < uStack_80 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)local_98 + -8),
       0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar3);
  }
  return param_1;
}



longlong * FUN_180006630(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x68);
  if (0xf < *(ulonglong *)(param_1 + 0x80)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

longlong *
FUN_180006640(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined8 ****ppppuVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong *local_80;
  longlong local_78 [2];
  size_t local_68;
  ulonglong local_60;
  undefined8 ***local_58 [2];
  size_t local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180019240 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_88 = 1;
  local_80 = param_1;
  uVar3 = FUN_18000e89c();
  local_98 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    local_98 = (undefined8 *)*param_3;
  }
  uStack_90 = param_3[2];
  FUN_1800088e0((longlong *)local_58,(UINT)uVar3,&local_98);
  local_98 = param_4;
  if (7 < (ulonglong)param_4[3]) {
    local_98 = (undefined8 *)*param_4;
  }
  uStack_90 = param_4[2];
  FUN_1800088e0(local_78,(UINT)uVar3,&local_98);
  lVar7 = 8;
  if (local_68 == 0) {
    lVar7 = 4;
  }
  uVar3 = lVar7 + param_2[1] + local_48 + local_68;
  if ((ulonglong)param_1[3] < uVar3) {
    lVar7 = param_1[2];
    FUN_180009360(param_1,uVar3 - lVar7);
    param_1[2] = lVar7;
  }
  FUN_180008840(param_1,(void *)*param_2,param_2[1]);
  FUN_180008840(param_1,&DAT_1800120a8,3);
  ppppuVar6 = local_58;
  if (0xf < local_40) {
    ppppuVar6 = (undefined8 ****)local_58[0];
  }
  FUN_180008840(param_1,ppppuVar6,local_48);
  if (local_68 != 0) {
    FUN_180008840(param_1,&DAT_1800120ac,4);
    plVar4 = local_78;
    if (0xf < local_60) {
      plVar4 = (longlong *)CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]);
    }
    FUN_180008840(param_1,plVar4,local_68);
    local_48 = local_68;
  }
  uVar3 = param_1[2];
  uVar1 = param_1[3];
  if (uVar3 < uVar1) {
    param_1[2] = uVar3 + 1;
    plVar4 = param_1;
    if (0xf < uVar1) {
      plVar4 = (longlong *)*param_1;
    }
    *(undefined2 *)((longlong)plVar4 + uVar3) = 0x22;
  }
  else {
    FUN_180002cc0(param_1,uVar1,local_48,0x22);
  }
  if (0xf < local_60) {
    pvVar2 = (void *)CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]);
    pvVar5 = pvVar2;
    if ((0xfff < local_60 + 1) &&
       (pvVar5 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar5);
  }
  local_68 = 0;
  local_60 = 0xf;
  local_78[0]._0_1_ = 0;
  if (0xf < local_40) {
    ppppuVar6 = (undefined8 ****)local_58[0];
    if ((0xfff < local_40 + 1) &&
       (ppppuVar6 = (undefined8 ****)local_58[0][-1],
       0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)ppppuVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(ppppuVar6);
  }
  return param_1;
}



undefined8 * FUN_1800068b0(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (ulonglong)param_1[0x10]) {
    pvVar1 = (void *)param_1[0xd];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x10] + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1800069ed;
    FUN_18000f264(pvVar2);
  }
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (7 < (ulonglong)param_1[0xc]) {
    pvVar1 = (void *)param_1[9];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xc] * 2 + 2U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1800069ed;
    FUN_18000f264(pvVar2);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  *(undefined2 *)(param_1 + 9) = 0;
  if (7 < (ulonglong)param_1[8]) {
    pvVar1 = (void *)param_1[5];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[8] * 2 + 2U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_1800069ed:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar2);
  }
  param_1[7] = 0;
  param_1[8] = 7;
  *(undefined2 *)(param_1 + 5) = 0;
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_18000f264(param_1);
  }
  return param_1;
}



void FUN_180006a00(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (ulonglong)param_1[0x10]) {
    pvVar1 = (void *)param_1[0xd];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x10] + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180006b1b;
    FUN_18000f264(pvVar2);
  }
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (7 < (ulonglong)param_1[0xc]) {
    pvVar1 = (void *)param_1[9];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xc] * 2 + 2U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180006b1b;
    FUN_18000f264(pvVar2);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  *(undefined2 *)(param_1 + 9) = 0;
  if (7 < (ulonglong)param_1[8]) {
    pvVar1 = (void *)param_1[5];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[8] * 2 + 2U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_180006b1b:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar2);
  }
  param_1[7] = 0;
  param_1[8] = 7;
  *(undefined2 *)(param_1 + 5) = 0;
  *param_1 = std::exception::vftable;
                    // WARNING: Could not recover jumptable at 0x000180006b14. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_exception_destroy(param_1 + 1);
  return;
}



undefined8 * FUN_180006b30(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  *param_1 = std::filesystem::filesystem_error::vftable;
  FUN_180006320(param_1 + 5,(undefined8 *)(param_2 + 0x28));
  FUN_180006320(param_1 + 9,(undefined8 *)(param_2 + 0x48));
  FUN_1800044b0(param_1 + 0xd,(undefined8 *)(param_2 + 0x68));
  return param_1;
}



void FUN_180006bc0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8 [4];
  undefined8 local_98 [18];
  
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  FUN_180002770(local_b8,"exists");
  FUN_180006450(local_98,local_b8,param_3,&local_c8);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_98,(ThrowInfo *)&DAT_180015db8);
}



char * FUN_180006c20(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  FUN_1800044b0((undefined8 *)param_1,param_2);
  if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
    pcVar3 = param_1 + *(longlong *)(param_1 + 0x10);
    pcVar1 = param_1;
  }
  else {
    pcVar3 = *(char **)param_1 + *(longlong *)(param_1 + 0x10);
    pcVar1 = *(char **)param_1;
  }
  for (; pcVar1 != pcVar3; pcVar1 = pcVar1 + 1) {
    iVar2 = tolower((int)*pcVar1);
    *pcVar1 = (char)iVar2;
  }
  return param_1;
}



void FUN_180006ca0(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  void **ppvVar3;
  void *local_38;
  void *pvStack_30;
  void *local_28;
  void *pvStack_20;
  
  if (param_1[2] < (void *)0x201) {
    return;
  }
  local_38 = (void *)0x0;
  pvStack_30 = (void *)0x0;
  local_28 = (void *)0x0;
  pvStack_20 = (void *)0x0;
  ppvVar3 = param_1;
  if ((void *)0xf < param_1[3]) {
    ppvVar3 = *param_1;
  }
  FUN_180002e30(&local_38,ppvVar3,0x200);
  pvVar1 = pvStack_20;
  if (param_1 != &local_38) {
    if ((void *)0xf < param_1[3]) {
      pvVar1 = *param_1;
      pvVar2 = pvVar1;
      if ((0xfff < (longlong)param_1[3] + 1U) &&
         (pvVar2 = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180006d77;
      FUN_18000f264(pvVar2);
    }
    pvVar1 = local_38;
    local_38 = (void *)((ulonglong)local_38 & 0xffffffffffffff00);
    *param_1 = pvVar1;
    param_1[1] = pvStack_30;
    param_1[2] = local_28;
    param_1[3] = pvStack_20;
    pvVar1 = (void *)0xf;
  }
  if ((void *)0xf < pvVar1) {
    pvVar2 = local_38;
    if ((0xfff < (longlong)pvVar1 + 1U) &&
       (pvVar2 = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar2)))) {
LAB_180006d77:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar2);
  }
  FUN_180008840((longlong *)param_1,&DAT_1800120bc,3);
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

uint * FUN_180006db0(uint *param_1)

{
  char *pcVar1;
  short sVar2;
  code *pcVar3;
  void *pvVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint ****ppppuVar8;
  uint *puVar9;
  void *pvVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  uint *local_78;
  longlong local_70;
  WCHAR local_60;
  undefined6 uStack_5e;
  undefined8 local_50;
  ulonglong uStack_48;
  uint ***local_40 [2];
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  longlong lVar12;
  
  local_20 = DAT_180019240 ^ (ulonglong)auStack_98;
  local_78 = param_1;
  GetModuleFileNameA((HMODULE)&IMAGE_DOS_HEADER_180000000,&DAT_18001b060,0x104);
  lVar12 = -1;
  do {
    lVar11 = lVar12 + 1;
    pcVar1 = &DAT_18001b061 + lVar12;
    lVar12 = lVar11;
  } while (*pcVar1 != '\0');
  uVar6 = FUN_18000e89c();
  local_78 = (uint *)&DAT_18001b060;
  local_70 = lVar11;
  FUN_180005c30((LPWSTR)local_40,(UINT)uVar6,&local_78);
  uVar6 = FUN_18000e89c();
  local_78 = (uint *)0x1800122f4;
  local_70 = 5;
  FUN_180005c30(&local_60,(UINT)uVar6,&local_78);
  ppppuVar8 = local_40;
  if (7 < local_28) {
    ppppuVar8 = (uint ****)local_40[0];
  }
  puVar9 = (uint *)((longlong)ppppuVar8 + local_30 * 2);
  puVar7 = FUN_180005da0((uint *)ppppuVar8,puVar9);
  if (puVar7 == puVar9) {
LAB_180006eae:
    uVar6 = (longlong)puVar9 - (longlong)ppppuVar8 >> 1;
    if (local_30 < uVar6) {
      FUN_1800088c0();
      pcVar3 = (code *)swi(3);
      puVar9 = (uint *)(*pcVar3)();
      return puVar9;
    }
    ppppuVar8 = local_40;
    if (7 < local_28) {
      ppppuVar8 = (uint ****)local_40[0];
    }
    local_30 = uVar6;
    *(undefined2 *)((longlong)ppppuVar8 + uVar6 * 2) = 0;
    FUN_180006190(param_1,(uint *)local_40,(uint *)&local_60);
    if (7 < uStack_48) {
      pvVar4 = (void *)CONCAT62(uStack_5e,local_60);
      pvVar10 = pvVar4;
      if ((0xfff < uStack_48 * 2 + 2) &&
         (pvVar10 = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000f264(pvVar10);
    }
    local_50 = 0;
    uStack_48 = 7;
    local_60 = L'\0';
    if (7 < local_28) {
      ppppuVar8 = (uint ****)local_40[0];
      if ((0xfff < local_28 * 2 + 2) &&
         (ppppuVar8 = (uint ****)local_40[0][-1],
         0x1f < (ulonglong)((longlong)local_40[0] + (-8 - (longlong)ppppuVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000f264(ppppuVar8);
    }
    return param_1;
  }
  do {
    puVar5 = puVar9;
    if (((short)*puVar7 != 0x5c) && ((short)*puVar7 != 0x2f)) break;
    puVar7 = (uint *)((longlong)puVar7 + 2);
  } while (puVar7 != puVar9);
  do {
    puVar9 = puVar5;
    if (puVar7 == puVar9) goto LAB_180006eae;
    sVar2 = *(short *)((longlong)puVar9 + -2);
    if ((sVar2 == 0x5c) || (puVar5 = (uint *)((longlong)puVar9 + -2), sVar2 == 0x2f))
    goto LAB_180006eae;
  } while( true );
}



void FUN_180006fc0(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    if (0xf < (ulonglong)param_1[3]) {
      pvVar1 = (void *)*param_1;
      pvVar2 = pvVar1;
      if ((0xfff < param_1[3] + 1U) &&
         (pvVar2 = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000f264(pvVar2);
    }
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1 = param_1 + 4;
  } while( true );
}



void FUN_180007050(undefined8 *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  void *pvVar3;
  
  plVar1 = (longlong *)*param_1;
  if ((plVar1 != (longlong *)0x0) && ((longlong *)*plVar1 != (longlong *)0x0)) {
    FUN_180006fc0((longlong *)*plVar1,(longlong *)plVar1[1]);
    pvVar2 = (void *)*plVar1;
    pvVar3 = pvVar2;
    if ((0xfff < (plVar1[2] - (longlong)pvVar2 & 0xffffffffffffffe0U)) &&
       (pvVar3 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar3);
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  return;
}



void FUN_1800070c0(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (ulonglong)param_1[7]) {
    pvVar1 = (void *)param_1[4];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[7] + 1U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180007163;
    FUN_18000f264(pvVar2);
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
LAB_180007163:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar2);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



void FUN_180007170(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_1800087d0((longlong *)(param_1 + 8));
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// private: static void __cdecl rage::scrThread::n_Wait(class rage::scrThread::InfoBase * __ptr64)

void __cdecl rage::scrThread::n_Wait(InfoBase *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  size_t sVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_e8 [32];
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  undefined8 local_68 [2];
  undefined8 ***local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
                    // 0x71e0  91  ?n_Wait@scrThread@rage@@CAXPEAVInfoBase@12@@Z
  local_38 = DAT_180019240 ^ (ulonglong)auStack_e8;
  pvVar1 = (void *)FUN_180008a40();
  local_58 = (undefined8 ****)0x0;
  uStack_50 = 0;
  uVar9 = 0;
  local_48 = 0;
  local_40 = 0;
  sVar11 = 0xffffffffffffffff;
  do {
    sVar11 = sVar11 + 1;
  } while (*(char *)((longlong)pvVar1 + sVar11) != '\0');
  FUN_180002e30(&local_58,pvVar1,sVar11);
  ppppuVar4 = &local_58;
  if (0xf < local_40) {
    ppppuVar4 = (undefined8 ****)local_58;
  }
  uVar10 = 0xcbf29ce484222325;
  iVar8 = 0;
  if (0x10 < local_48) {
    lVar6 = *(longlong *)((local_48 - 0x11) + (longlong)ppppuVar4) + -0x6c6c6168635f6373;
    if ((lVar6 == 0) &&
       (lVar6 = *(longlong *)((local_48 - 9) + (longlong)ppppuVar4) + -0x696e695f65676e65,
       lVar6 == 0)) {
      lVar6 = (ulonglong)*(byte *)((local_48 - 1) + (longlong)ppppuVar4) - 0x74;
    }
    if (lVar6 == 0) {
      local_a8 = (undefined8 ****)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      FUN_180002e30(&local_a8,"OnUpdatePerTick",0xf);
      uVar14 = local_90;
      ppppuVar4 = (undefined8 ****)local_a8;
      ppppuVar5 = &local_a8;
      if (0xf < local_90) {
        ppppuVar5 = (undefined8 ****)local_a8;
      }
      uVar12 = 0xcbf29ce484222325;
      uVar7 = uVar9;
      if (local_98 != 0) {
        do {
          uVar12 = (uVar12 ^ *(byte *)((longlong)ppppuVar5 + uVar7)) * 0x100000001b3;
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_98);
      }
      puVar2 = FUN_180005360(uVar7,local_68,&local_a8,uVar12);
      if (puVar2[1] != 0) {
        plVar3 = FUN_180004c90(uVar7,local_78,(longlong *)&local_a8);
        if (*(longlong **)(*plVar3 + 0x68) == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        (**(code **)(**(longlong **)(*plVar3 + 0x68) + 0x10))();
        ppppuVar4 = (undefined8 ****)local_a8;
        uVar14 = local_90;
      }
      if (0xf < uVar14) {
        ppppuVar5 = ppppuVar4;
        if ((0xfff < uVar14 + 1) &&
           (ppppuVar5 = (undefined8 ****)ppppuVar4[-1],
           0x1f < (ulonglong)((longlong)ppppuVar4 + (-8 - (longlong)ppppuVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18000f264(ppppuVar5);
      }
      local_98 = 0;
      local_90 = 0xf;
      local_a8 = (undefined8 ***)((ulonglong)local_a8 & 0xffffffffffffff00);
      iVar13 = iVar8;
      if (DAT_18001b208 != (int *)0x0) {
        iVar13 = *DAT_18001b208;
      }
      if (DAT_18001b180 != iVar13) {
        local_c8 = (undefined8 ****)0x0;
        uStack_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        FUN_180002e30(&local_c8,"OnUpdatePerFrame",0x10);
        uVar14 = local_b0;
        ppppuVar4 = (undefined8 ****)local_c8;
        ppppuVar5 = &local_c8;
        if (0xf < local_b0) {
          ppppuVar5 = (undefined8 ****)local_c8;
        }
        uVar12 = 0xcbf29ce484222325;
        uVar7 = uVar9;
        if (local_b8 != 0) {
          do {
            uVar12 = (uVar12 ^ *(byte *)(uVar7 + (longlong)ppppuVar5)) * 0x100000001b3;
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_b8);
        }
        puVar2 = FUN_180005360(uVar7,local_78,&local_c8,uVar12);
        if (puVar2[1] != 0) {
          plVar3 = FUN_180004c90(uVar7,local_88,(longlong *)&local_c8);
          if (*(longlong **)(*plVar3 + 0x68) == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            std::_Xbad_function_call();
          }
          (**(code **)(**(longlong **)(*plVar3 + 0x68) + 0x10))();
          ppppuVar4 = (undefined8 ****)local_c8;
          uVar14 = local_b0;
        }
        if (0xf < uVar14) {
          ppppuVar5 = ppppuVar4;
          if ((0xfff < uVar14 + 1) &&
             (ppppuVar5 = (undefined8 ****)ppppuVar4[-1],
             0x1f < (ulonglong)((longlong)ppppuVar4 + (-8 - (longlong)ppppuVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18000f264(ppppuVar5);
        }
        local_b8 = 0;
        local_b0 = 0xf;
        local_c8 = (undefined8 ***)((ulonglong)local_c8 & 0xffffffffffffff00);
        DAT_18001b180 = iVar13;
      }
    }
  }
  if (DAT_18001b208 != (int *)0x0) {
    iVar8 = *DAT_18001b208;
  }
  iVar13 = DAT_18001b164;
  if (DAT_18001b164 != iVar8) {
    ppppuVar4 = &local_58;
    if (0xf < local_40) {
      ppppuVar4 = (undefined8 ****)local_58;
    }
    if (9 < local_48) {
      lVar6 = *(longlong *)((local_48 - 10) + (longlong)ppppuVar4) + -0x6174737373657270;
      if (lVar6 == 0) {
        lVar6 = (ulonglong)*(ushort *)((local_48 - 2) + (longlong)ppppuVar4) - 0x7472;
      }
      if (lVar6 == 0) {
        local_c8 = (undefined8 ****)0x0;
        uStack_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        FUN_180002e30(&local_c8,"OnPressStartScriptRunning",0x19);
        uVar14 = local_b0;
        ppppuVar4 = (undefined8 ****)local_c8;
        ppppuVar5 = &local_c8;
        if (0xf < local_b0) {
          ppppuVar5 = (undefined8 ****)local_c8;
        }
        uVar12 = 0xcbf29ce484222325;
        uVar7 = uVar9;
        if (local_b8 != 0) {
          do {
            uVar12 = (uVar12 ^ *(byte *)(uVar7 + (longlong)ppppuVar5)) * 0x100000001b3;
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_b8);
        }
        puVar2 = FUN_180005360(uVar7,local_88,&local_c8,uVar12);
        if (puVar2[1] != 0) {
          plVar3 = FUN_180004c90(uVar7,local_88,(longlong *)&local_c8);
          if (*(longlong **)(*plVar3 + 0x68) == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            std::_Xbad_function_call();
          }
          (**(code **)(**(longlong **)(*plVar3 + 0x68) + 0x10))();
          ppppuVar4 = (undefined8 ****)local_c8;
          uVar14 = local_b0;
        }
        if (0xf < uVar14) {
          ppppuVar5 = ppppuVar4;
          if ((0xfff < uVar14 + 1) &&
             (ppppuVar5 = (undefined8 ****)ppppuVar4[-1],
             0x1f < (ulonglong)((longlong)ppppuVar4 + (-8 - (longlong)ppppuVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18000f264(ppppuVar5);
        }
      }
    }
    uVar14 = local_48;
    ppppuVar4 = &local_58;
    if (0xf < local_40) {
      ppppuVar4 = (undefined8 ****)local_58;
    }
    iVar13 = iVar8;
    if (0xb < local_48) {
      sVar11 = local_48 - 0xb;
      ppppuVar5 = ppppuVar4;
      while (plVar3 = memchr(ppppuVar5,99,sVar11), plVar3 != (longlong *)0x0) {
        if ((*plVar3 == 0x2f746e65746e6f63) && ((int)plVar3[1] == 0x6e69616d)) {
          if ((longlong)plVar3 - (longlong)ppppuVar4 != -1) {
            local_c8 = (undefined8 ****)0x0;
            uStack_c0 = 0;
            local_b8 = 0;
            local_b0 = 0;
            FUN_180002e30(&local_c8,"OnMainScriptRunning",0x13);
            uVar14 = local_b0;
            ppppuVar4 = (undefined8 ****)local_c8;
            ppppuVar5 = &local_c8;
            if (0xf < local_b0) {
              ppppuVar5 = (undefined8 ****)local_c8;
            }
            if (local_b8 != 0) {
              do {
                uVar10 = (uVar10 ^ *(byte *)(uVar9 + (longlong)ppppuVar5)) * 0x100000001b3;
                uVar9 = uVar9 + 1;
              } while (uVar9 < local_b8);
            }
            puVar2 = FUN_180005360(ppppuVar5,local_88,&local_c8,uVar10);
            if (puVar2[1] != 0) {
              plVar3 = FUN_180004c90(ppppuVar5,local_88,(longlong *)&local_c8);
              if (*(longlong **)(*plVar3 + 0x68) == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                std::_Xbad_function_call();
              }
              (**(code **)(**(longlong **)(*plVar3 + 0x68) + 0x10))();
              ppppuVar4 = (undefined8 ****)local_c8;
              uVar14 = local_b0;
            }
            if (0xf < uVar14) {
              ppppuVar5 = ppppuVar4;
              if ((0xfff < uVar14 + 1) &&
                 (ppppuVar5 = (undefined8 ****)ppppuVar4[-1],
                 0x1f < (ulonglong)((longlong)ppppuVar4 + (-8 - (longlong)ppppuVar5)))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_18000f264(ppppuVar5);
            }
          }
          break;
        }
        ppppuVar5 = (undefined8 ****)((longlong)plVar3 + 1);
        sVar11 = (longlong)ppppuVar4 + ((uVar14 - 0xb) - (longlong)ppppuVar5);
      }
    }
  }
  DAT_18001b164 = iVar13;
  (*o_Wait)(param_1);
  if (0xf < local_40) {
    ppppuVar4 = (undefined8 ****)local_58;
    if ((0xfff < local_40 + 1) &&
       (ppppuVar4 = (undefined8 ****)local_58[-1],
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(ppppuVar4);
  }
  return;
}



// private: static void __cdecl rage::scrThread::n_QuitGame(void)

void __cdecl rage::scrThread::n_QuitGame(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  longlong local_38 [2];
  undefined8 ***local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  ulonglong local_10;
  
                    // 0x77d0  89  ?n_QuitGame@scrThread@rage@@CAXXZ
  local_28 = (undefined8 ****)0x0;
  uStack_20 = 0;
  uVar4 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_180002e30(&local_28,"OnQuitGame",10);
  uVar5 = local_10;
  ppppuVar6 = (undefined8 ****)local_28;
  ppppuVar3 = &local_28;
  if (0xf < local_10) {
    ppppuVar3 = (undefined8 ****)local_28;
  }
  uVar7 = 0xcbf29ce484222325;
  if (local_18 != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)((longlong)ppppuVar3 + uVar4)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_18);
  }
  puVar1 = FUN_180005360(ppppuVar3,local_38,&local_28,uVar7);
  if (puVar1[1] != 0) {
    plVar2 = FUN_180004c90(ppppuVar3,local_38,(longlong *)&local_28);
    if (*(longlong **)(*plVar2 + 0x68) == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(**(longlong **)(*plVar2 + 0x68) + 0x10))();
    uVar5 = local_10;
    ppppuVar6 = (undefined8 ****)local_28;
  }
  if (0xf < uVar5) {
    ppppuVar3 = ppppuVar6;
    if ((0xfff < uVar5 + 1) &&
       (ppppuVar3 = (undefined8 ****)ppppuVar6[-1],
       0x1f < (ulonglong)((longlong)ppppuVar6 + (-8 - (longlong)ppppuVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(ppppuVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// private: static unsigned int __cdecl rage::scrThread::n_StartNewThreadOverride(unsigned
// int,unsigned int * __ptr64,unsigned int,int)

uint __cdecl
rage::scrThread::n_StartNewThreadOverride(uint param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  
                    // 0x78f0  90  ?n_StartNewThreadOverride@scrThread@rage@@CAIIPEAIIH@Z
  _DAT_18001b178 = _DAT_18001b178 + 1;
                    // WARNING: Could not recover jumptable at 0x0001800078fe. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*o_StartNewThreadOverride)(param_1,param_2,param_3,param_4);
  return uVar1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

char FUN_180007910(undefined8 param_1,void *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 ******ppppppuVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *pcVar10;
  LPCWSTR pWVar11;
  WCHAR *pWVar12;
  void *pvVar13;
  uint uVar14;
  undefined8 *******pppppppuVar15;
  size_t sVar16;
  char *pcVar17;
  undefined1 auStackY_178 [32];
  WCHAR *local_148;
  undefined **ppuStack_140;
  void *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined8 ******local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulonglong uStack_100;
  WCHAR local_f8;
  undefined6 uStack_f6;
  undefined **local_e8;
  ulonglong local_e0;
  char local_d8;
  undefined7 uStack_d7;
  ulonglong local_c8;
  ulonglong local_c0;
  WCHAR *local_b8;
  undefined **ppuStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  void *local_98 [3];
  ulonglong local_80;
  ulonglong local_78 [2];
  uint local_68;
  int local_64;
  ulonglong local_58;
  
  local_58 = DAT_180019240 ^ (ulonglong)auStackY_178;
  cVar6 = (*DAT_18001b288)();
  if (cVar6 != '\0') {
    FUN_180006db0((uint *)local_98);
    if (param_2 != (void *)0x0) {
      local_138 = (void *)0x0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      sVar16 = 0xffffffffffffffff;
      do {
        sVar16 = sVar16 + 1;
      } while (*(char *)((longlong)param_2 + sVar16) != '\0');
      FUN_180002e30(&local_138,param_2,sVar16);
      FUN_180006c20(&local_d8,&local_138);
      if (0xf < uStack_120) {
        pvVar13 = local_138;
        if ((0xfff < uStack_120 + 1) &&
           (pvVar13 = *(void **)((longlong)local_138 + -8),
           0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)pvVar13)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18000f264(pvVar13);
      }
      puVar4 = DAT_18001b238;
      for (puVar1 = (undefined8 *)*DAT_18001b238; puVar1 != puVar4; puVar1 = (undefined8 *)*puVar1)
      {
        pppppppuVar15 = (undefined8 *******)(puVar1 + 6);
        pcVar17 = (char *)(puVar1 + 2);
        if (0xf < (ulonglong)puVar1[5]) {
          pcVar17 = (char *)puVar1[2];
        }
        pcVar10 = &local_d8;
        if (0xf < local_c0) {
          pcVar10 = (char *)CONCAT71(uStack_d7,local_d8);
        }
        lVar8 = FUN_1800092a0(pcVar10,local_c8,sVar16,pcVar17,puVar1[4]);
        if (lVar8 != -1) {
          uVar2 = puVar1[8];
          if (0xf < (ulonglong)puVar1[9]) {
            pppppppuVar15 = (undefined8 *******)*pppppppuVar15;
          }
          uVar9 = FUN_18000e89c();
          local_118 = pppppppuVar15;
          local_110 = uVar2;
          FUN_180005c30((LPWSTR)&local_138,(UINT)uVar9,&local_118);
          FUN_180006190((uint *)&local_f8,(uint *)local_98,(uint *)&local_138);
          if (7 < uStack_120) {
            pvVar13 = local_138;
            if ((0xfff < uStack_120 * 2 + 2) &&
               (pvVar13 = *(void **)((longlong)local_138 + -8),
               0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)pvVar13)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18000f264(pvVar13);
          }
          local_128 = 0;
          uStack_120 = 7;
          local_138 = (void *)((ulonglong)local_138 & 0xffffffffffff0000);
          pWVar11 = &local_f8;
          if (7 < local_e0) {
            pWVar11 = (LPCWSTR)CONCAT62(uStack_f6,local_f8);
          }
          DVar7 = FUN_18000eafc(pWVar11,local_78,3,0xffffffff);
          sVar16 = (size_t)DVar7;
          if (DVar7 == 0) {
            pWVar11 = (LPCWSTR)(ulonglong)(local_68 >> 10);
            if ((local_68 >> 10 & 1) == 0) {
LAB_180007b4e:
              uVar14 = local_68 >> 4 & 1 | 2;
            }
            else if (local_64 == -0x5ffffff4) {
              uVar14 = 4;
            }
            else {
              if (local_64 != -0x5ffffffd) goto LAB_180007b4e;
              uVar14 = 10;
            }
          }
          else if ((((DVar7 == 2) || (DVar7 == 3)) || (DVar7 == 0x35)) ||
                  ((DVar7 == 0x7b || (uVar14 = 0, DVar7 == 0x10b)))) {
            uVar14 = 1;
          }
          local_148 = (WCHAR *)CONCAT44(local_148._4_4_,DVar7);
          ppuStack_140 = &PTR_vftable_1800192c8;
          local_b8 = local_148;
          ppuStack_b0 = &PTR_vftable_1800192c8;
          if (uVar14 == 0) {
            if (DVar7 != 0) {
                    // WARNING: Subroutine does not return
              FUN_180006bc0(pWVar11,&local_b8,(undefined8 *)&local_f8);
            }
          }
          else if (uVar14 != 1) {
            local_148 = &local_f8;
            if (7 < local_e0) {
              local_148 = (WCHAR *)CONCAT62(uStack_f6,local_f8);
            }
            ppuStack_140 = local_e8;
            uVar9 = FUN_18000e89c();
            FUN_18000a140((longlong *)&local_b8,(UINT)uVar9,&local_148);
            local_148 = &local_f8;
            if (7 < local_e0) {
              local_148 = (WCHAR *)CONCAT62(uStack_f6,local_f8);
            }
            ppuStack_140 = local_e8;
            uVar9 = FUN_18000e89c();
            FUN_18000a140((longlong *)&local_118,(UINT)uVar9,&local_148);
            ppppppuVar5 = local_118;
            pppppppuVar15 = &local_118;
            if (0xf < uStack_100) {
              pppppppuVar15 = (undefined8 *******)local_118;
            }
            memcpy(param_2,pppppppuVar15,local_a8 + 1);
            if (0xf < uStack_100) {
              pppppppuVar15 = (undefined8 *******)ppppppuVar5;
              if ((0xfff < uStack_100 + 1) &&
                 (pppppppuVar15 = (undefined8 *******)ppppppuVar5[-1],
                 0x1f < (ulonglong)((longlong)ppppppuVar5 + (-8 - (longlong)pppppppuVar15)))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_18000f264(pppppppuVar15);
            }
            local_108 = 0;
            uStack_100 = 0xf;
            local_118 = (undefined8 ******)((ulonglong)local_118 & 0xffffffffffffff00);
            if (0xf < local_a0) {
              pWVar12 = local_b8;
              if ((0xfff < local_a0 + 1) &&
                 (pWVar12 = *(WCHAR **)(local_b8 + -4),
                 0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pWVar12)))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_18000f264(pWVar12);
            }
            if (local_e0 < 8) {
LAB_180007dc8:
              local_e8 = (undefined **)0x0;
              local_e0 = 7;
              local_f8 = L'\0';
              if (0xf < local_c0) {
                pvVar3 = (void *)CONCAT71(uStack_d7,local_d8);
                pvVar13 = pvVar3;
                if ((0xfff < local_c0 + 1) &&
                   (pvVar13 = *(void **)((longlong)pvVar3 + -8),
                   0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_18000f264(pvVar13);
              }
              local_c8 = 0;
              local_c0 = 0xf;
              local_d8 = '\0';
              if (7 < local_80) {
                pvVar13 = local_98[0];
                if ((0xfff < local_80 * 2 + 2) &&
                   (pvVar13 = *(void **)((longlong)local_98[0] + -8),
                   0x1f < (ulonglong)((longlong)local_98[0] + (-8 - (longlong)pvVar13)))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_18000f264(pvVar13);
              }
              return '\x01';
            }
            pvVar3 = (void *)CONCAT62(uStack_f6,local_f8);
            pvVar13 = pvVar3;
            if ((local_e0 * 2 + 2 < 0x1000) ||
               (pvVar13 = *(void **)((longlong)pvVar3 + -8),
               (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)) < 0x20)) {
              FUN_18000f264(pvVar13);
              goto LAB_180007dc8;
            }
            goto LAB_180007e6e;
          }
          if (7 < local_e0) {
            pvVar3 = (void *)CONCAT62(uStack_f6,local_f8);
            pvVar13 = pvVar3;
            if ((0xfff < local_e0 * 2 + 2) &&
               (pvVar13 = *(void **)((longlong)pvVar3 + -8),
               0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
LAB_180007e6e:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18000f264(pvVar13);
          }
        }
      }
      if (0xf < local_c0) {
        pvVar3 = (void *)CONCAT71(uStack_d7,local_d8);
        pvVar13 = pvVar3;
        if ((0xfff < local_c0 + 1) &&
           (pvVar13 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18000f264(pvVar13);
      }
    }
    if (7 < local_80) {
      pvVar13 = local_98[0];
      if ((0xfff < local_80 * 2 + 2) &&
         (pvVar13 = *(void **)((longlong)local_98[0] + -8),
         0x1f < (ulonglong)((longlong)local_98[0] + (-8 - (longlong)pvVar13)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000f264(pvVar13);
    }
  }
  return cVar6;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180007ef0(longlong param_1)

{
  void *pvVar1;
  size_t sVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0;
  sVar2 = 0xffffffffffffffff;
  do {
    sVar2 = sVar2 + 1;
  } while (*(char *)((longlong)**(undefined8 **)(param_1 + 0x10) + sVar2) != '\0');
  FUN_180002e30(&local_38,(void *)**(undefined8 **)(param_1 + 0x10),sVar2);
  if (local_28 != 0) {
    FUN_180006ca0(&local_38);
  }
  if (0xf < local_20) {
    pvVar1 = local_38;
    if ((0xfff < local_20 + 1) &&
       (pvVar1 = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar1);
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_180007fa0(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_58;
  lVar1 = FUN_180008c10();
  if (lVar1 != 0) {
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    sVar3 = 0xffffffffffffffff;
    do {
      sVar3 = sVar3 + 1;
    } while (*(char *)((longlong)**(undefined8 **)(param_1 + 0x10) + sVar3) != '\0');
    FUN_180002e30(&local_38,(void *)**(undefined8 **)(param_1 + 0x10),sVar3);
    if (local_28 != 0) {
      FUN_180006ca0(&local_38);
    }
    if (0xf < local_20) {
      pvVar2 = local_38;
      if ((0xfff < local_20 + 1) &&
         (pvVar2 = *(void **)((longlong)local_38 + -8),
         0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000f264(pvVar2);
    }
  }
  return;
}



// public: virtual void __cdecl rage::scrThread::PostLoad(void) __ptr64

void __thiscall rage::scrThread::PostLoad(scrThread *this)

{
  __uint64 _Var1;
  ulonglong uVar2;
  _func_void *p_Var3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *local_78;
  char *local_70;
  undefined8 local_68;
  undefined **local_60 [7];
  undefined ***local_28;
  
                    // 0x8070  77  ?PostLoad@scrThread@rage@@UEAAXXZ
  puVar10 = (undefined8 *)0x0;
  local_78 = "rage::scrThread::RegisterCommand";
  local_68 = 0;
  local_70 = "48 89 5C 24 ? 57 48 83 EC 20 44 8B 0D ? ? ? ?";
  local_60[0] = std::_Func_impl_no_alloc<>::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  local_68 = 0;
  local_78 = "rage::scrThread::sm_CommandsRegistration";
  local_70 = "4C 8B 1D ? ? ? ? 41 8B C1";
  local_60[0] = std::_Func_impl_no_alloc<>::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  local_68 = 0;
  local_70 = "E8 ? ? ? ? 8D 56 10";
  local_78 = "rage::scrThread::Wait";
  local_60[0] = std::_Func_impl_no_alloc<>::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  local_68 = 0;
  local_78 = "sagCoreScript::RDRStartNewScript";
  local_70 = "E8 ? ? ? ? 48 8B 0B 8B 44 24 40 89 01 48 83 C4 30 5B C3 CC 40 53";
  local_60[0] = std::_Func_impl_no_alloc<>::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  local_68 = 0;
  local_78 = "rage::scrThread::StartNewThreadOverride";
  local_70 = "E8 ? ? ? ? 48 8B D8 85 FF 74 16";
  local_60[0] = std::_Func_impl_no_alloc<>::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  local_68 = 0;
  local_70 = 
  "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57 48 83 EC 30 48 8B 05 ? ? ? ? 33 ED"
  ;
  local_78 = "rage::fiAssetManager::fullReadPath";
  local_60[0] = std::_Func_impl_no_alloc<>::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  local_78 = "QuitGame";
  local_68 = 0;
  local_70 = "48 83 EC 28 E8 ? ? ? ? C6 80 ? ? ? ? ?";
  local_60[0] = std::_Func_impl_no_alloc<>::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  pvVar4 = s_Wait;
  FUN_18000d8f4();
  uVar5 = FUN_18000d740(pvVar4,n_Wait,&o_Wait);
  if (uVar5 == 0) {
    iVar6 = FUN_18000d8e8((longlong)pvVar4);
    if (iVar6 != 0) {
      pcVar11 = "Failed to enable hook \'%s\'";
      goto LAB_18000827d;
    }
  }
  else {
    pcVar11 = "Failed to create hook \'%s\'";
LAB_18000827d:
    Log::Print(3,(char *)0x0,pcVar11);
  }
  pvVar4 = s_FullReadPath;
  FUN_18000d8f4();
  uVar5 = FUN_18000d740(pvVar4,FUN_180007910,&DAT_18001b288);
  if (uVar5 == 0) {
    iVar6 = FUN_18000d8e8((longlong)pvVar4);
    if (iVar6 != 0) {
      pcVar11 = "Failed to enable hook \'%s\'";
      goto LAB_1800082cf;
    }
  }
  else {
    pcVar11 = "Failed to create hook \'%s\'";
LAB_1800082cf:
    Log::Print(3,(char *)0x0,pcVar11);
  }
  p_Var3 = s_QuitGame;
  FUN_18000d8f4();
  uVar5 = FUN_18000d740((undefined8 *)p_Var3,n_QuitGame,&o_QuitGame);
  if (uVar5 == 0) {
    iVar6 = FUN_18000d8e8((longlong)p_Var3);
    if (iVar6 == 0) goto LAB_180008331;
    pcVar11 = "Failed to enable hook \'%s\'";
  }
  else {
    pcVar11 = "Failed to create hook \'%s\'";
  }
  Log::Print(3,(char *)0x0,pcVar11);
LAB_180008331:
  Log::Print(1,(char *)0x0,"Waiting for native invoker...");
  do {
    if ((s_CommandsRegistration != (__uint64 *)0x0) && (_Var1 = *s_CommandsRegistration, _Var1 != 0)
       ) {
      uVar5 = (uint)s_CommandsRegistration[1];
      uVar8 = 0xa0ae0c98;
      uVar2 = 0xa0ae0c98 % (ulonglong)uVar5;
      iVar6 = *(int *)(_Var1 + (ulonglong)(uint)((int)uVar2 * 4) * 4);
      do {
        if (iVar6 == -0x5f51f368) {
          uVar2 = 0x676167c3 % (ulonglong)uVar5;
          uVar8 = 0x676167c3;
          iVar9 = (int)uVar2;
          iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
          goto joined_r0x0001800083d5;
        }
        uVar7 = (int)(uVar8 >> 1) + 1;
        uVar8 = (ulonglong)uVar7;
        uVar2 = (ulonglong)(uVar7 + (int)uVar2) % (ulonglong)uVar5;
        iVar6 = *(int *)(_Var1 + (ulonglong)(uint)((int)uVar2 * 4) * 4);
      } while (iVar6 != 0);
    }
    Sleep(1);
  } while( true );
  while( true ) {
    uVar7 = (int)(uVar8 >> 1) + 1;
    uVar8 = (ulonglong)uVar7;
    uVar2 = (ulonglong)(uVar7 + (int)uVar2) % (ulonglong)uVar5;
    iVar9 = (int)uVar2;
    iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
    if (iVar6 == 0) break;
joined_r0x0001800083d5:
    if (iVar6 == 0x676167c3) {
      *(code **)(_Var1 + 8 + (ulonglong)(uint)(iVar9 * 2) * 8) = FUN_180007ef0;
      break;
    }
  }
  _Var1 = *s_CommandsRegistration;
  uVar2 = 0xfd25473e % (ulonglong)(uint)s_CommandsRegistration[1];
  uVar8 = 0xfd25473e;
  iVar9 = (int)uVar2;
  iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
  do {
    if (iVar6 == -0x2dab8c2) {
      *(code **)(_Var1 + 8 + (ulonglong)(uint)(iVar9 * 2) * 8) = FUN_180007ef0;
      break;
    }
    uVar5 = (int)(uVar8 >> 1) + 1;
    uVar8 = (ulonglong)uVar5;
    uVar2 = (ulonglong)(uVar5 + (int)uVar2) % (ulonglong)(uint)s_CommandsRegistration[1];
    iVar9 = (int)uVar2;
    iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
  } while (iVar6 != 0);
  _Var1 = *s_CommandsRegistration;
  uVar2 = 0x906c42fd % (ulonglong)(uint)s_CommandsRegistration[1];
  uVar8 = 0x906c42fd;
  iVar9 = (int)uVar2;
  iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
  do {
    if (iVar6 == -0x6f93bd03) {
      *(code **)(_Var1 + 8 + (ulonglong)(uint)(iVar9 * 2) * 8) = FUN_180007ef0;
      break;
    }
    uVar5 = (int)(uVar8 >> 1) + 1;
    uVar8 = (ulonglong)uVar5;
    uVar2 = (ulonglong)(uVar5 + (int)uVar2) % (ulonglong)(uint)s_CommandsRegistration[1];
    iVar9 = (int)uVar2;
    iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
  } while (iVar6 != 0);
  _Var1 = *s_CommandsRegistration;
  uVar2 = 0xecf8eb5f % (ulonglong)(uint)s_CommandsRegistration[1];
  uVar8 = 0xecf8eb5f;
  iVar9 = (int)uVar2;
  iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
  do {
    if (iVar6 == -0x130714a1) {
      puVar10 = *(undefined8 **)(_Var1 + 8 + (ulonglong)(uint)(iVar9 * 2) * 8);
      goto LAB_18000852d;
    }
    uVar5 = (int)(uVar8 >> 1) + 1;
    uVar8 = (ulonglong)uVar5;
    uVar2 = (ulonglong)(uVar5 + (int)uVar2) % (ulonglong)(uint)s_CommandsRegistration[1];
    iVar9 = (int)uVar2;
    iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
  } while (iVar6 != 0);
  Log::Print(3,(char *)0x0,"Failed to find native with hash 0x%08X");
LAB_18000852d:
  FUN_18000d8f4();
  uVar5 = FUN_18000d740(puVar10,FUN_180007fa0,(undefined8 *)&DAT_18001b290);
  if (uVar5 == 0) {
    iVar6 = FUN_18000d8e8((longlong)puVar10);
    if (iVar6 == 0) {
      return;
    }
    pcVar11 = "Failed to enable hook \'%s\'";
  }
  else {
    pcVar11 = "Failed to create hook \'%s\'";
  }
  Log::Print(3,(char *)0x0,pcVar11);
  return;
}



// public: virtual void __cdecl rage::scrThread::Unload(void) __ptr64

void __thiscall rage::scrThread::Unload(scrThread *this)

{
  _func_void *p_Var1;
  void *pvVar2;
  
                    // 0x85d0  87  ?Unload@scrThread@rage@@UEAAXXZ
  pvVar2 = s_Wait;
  FUN_18000d8e0((longlong)s_Wait);
  FUN_18000d950((longlong)pvVar2);
  pvVar2 = s_FullReadPath;
  FUN_18000d8e0((longlong)s_FullReadPath);
  FUN_18000d950((longlong)pvVar2);
  p_Var1 = s_QuitGame;
  FUN_18000d8e0((longlong)s_QuitGame);
  FUN_18000d950((longlong)p_Var1);
  FUN_1800045d0(0x1800192e0);
  return;
}



// private: static bool __cdecl rage::scrThread::IsInitialized(void)

bool __cdecl rage::scrThread::IsInitialized(void)

{
  int iVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
                    // 0x8630  65  ?IsInitialized@scrThread@rage@@CA_NXZ
  if ((s_CommandsRegistration != (__uint64 *)0x0) && (_Var2 = *s_CommandsRegistration, _Var2 != 0))
  {
    uVar5 = 0xa0ae0c98;
    uVar3 = 0xa0ae0c98 % (ulonglong)(uint)s_CommandsRegistration[1];
    iVar1 = *(int *)(_Var2 + (ulonglong)(uint)((int)uVar3 * 4) * 4);
    do {
      if (iVar1 == -0x5f51f368) {
        return true;
      }
      uVar4 = (int)(uVar5 >> 1) + 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = (ulonglong)(uVar4 + (int)uVar3) % (ulonglong)(uint)s_CommandsRegistration[1];
      iVar1 = *(int *)(_Var2 + (ulonglong)(uint)((int)uVar3 * 4) * 4);
    } while (iVar1 != 0);
  }
  return false;
}



// public: static bool __cdecl rage::scrThread::RegisterCommand(unsigned int,void (__cdecl*)(class
// rage::scrThread::InfoBase * __ptr64))

bool __cdecl rage::scrThread::RegisterCommand(uint param_1,_func_void_InfoBase_ptr *param_2)

{
  bool bVar1;
  
                    // 0x86a0  85  ?RegisterCommand@scrThread@rage@@SA_NIP6AXPEAVInfoBase@12@@Z@Z
  if (s_RegisterCommand == (_func_bool_void_ptr_uint__func_void_InfoBase_ptr_ptr *)0x0) {
    return false;
  }
                    // WARNING: Could not recover jumptable at 0x0001800086b4. Too many branches
                    // WARNING: Treating indirect jump as call
  bVar1 = (*s_RegisterCommand)((void *)0x0,param_1,param_2);
  return bVar1;
}



// public: static bool __cdecl rage::scrThread::OverrideCommand(unsigned int,void (__cdecl*)(class
// rage::scrThread::InfoBase * __ptr64))

bool __cdecl rage::scrThread::OverrideCommand(uint param_1,_func_void_InfoBase_ptr *param_2)

{
  uint uVar1;
  __uint64 _Var2;
  uint uVar3;
  uint uVar4;
  
                    // 0x86c0  70  ?OverrideCommand@scrThread@rage@@SA_NIP6AXPEAVInfoBase@12@@Z@Z
  _Var2 = *s_CommandsRegistration;
  uVar3 = param_1 % (uint)s_CommandsRegistration[1];
  uVar1 = *(uint *)(_Var2 + (ulonglong)(uVar3 * 4) * 4);
  uVar4 = param_1;
  do {
    if (uVar1 == param_1) {
      *(_func_void_InfoBase_ptr **)(_Var2 + 8 + (ulonglong)(uVar3 * 2) * 8) = param_2;
      return true;
    }
    uVar4 = (uVar4 >> 1) + 1;
    uVar3 = (uVar4 + uVar3) % (uint)s_CommandsRegistration[1];
    uVar1 = *(uint *)(_Var2 + (ulonglong)(uVar3 * 4) * 4);
  } while (uVar1 != 0);
  return false;
}



// public: static void (__cdecl*__cdecl rage::scrThread::GetCommand(unsigned int))(class
// rage::scrThread::InfoBase * __ptr64)

_func_void_InfoBase_ptr * __cdecl rage::scrThread::GetCommand(uint param_1)

{
  uint uVar1;
  __uint64 _Var2;
  uint uVar3;
  uint uVar4;
  
                    // 0x8740  51  ?GetCommand@scrThread@rage@@SAP6AXPEAVInfoBase@12@@ZI@Z
  _Var2 = *s_CommandsRegistration;
  uVar3 = param_1 % (uint)s_CommandsRegistration[1];
  uVar1 = *(uint *)(_Var2 + (ulonglong)(uVar3 * 4) * 4);
  uVar4 = param_1;
  do {
    if (uVar1 == param_1) {
      return *(_func_void_InfoBase_ptr **)(_Var2 + 8 + (ulonglong)(uVar3 * 2) * 8);
    }
    uVar4 = (uVar4 >> 1) + 1;
    uVar3 = (uVar4 + uVar3) % (uint)s_CommandsRegistration[1];
    uVar1 = *(uint *)(_Var2 + (ulonglong)(uVar3 * 4) * 4);
  } while (uVar1 != 0);
  Log::Print(3,(char *)0x0,"Failed to find native with hash 0x%08X");
  return (_func_void_InfoBase_ptr *)0x0;
}



// public: static void __cdecl rage::scrThread::QuitGame(void)

void __cdecl rage::scrThread::QuitGame(void)

{
                    // 0x87c0  83  ?QuitGame@scrThread@rage@@SAXXZ
  if (s_QuitGame != (_func_void *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001800087cc. Too many branches
                    // WARNING: Treating indirect jump as call
    (*s_QuitGame)();
    return;
  }
  return;
}



void FUN_1800087d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1800070c0(puVar1 + 2);
    FUN_18000f264(puVar1);
    puVar1 = puVar2;
  }
  FUN_18000f264((void *)*param_1);
  return;
}



longlong * FUN_180008840(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  lVar1 = param_1[2];
  uVar2 = param_1[3];
  if (param_3 <= uVar2 - lVar1) {
    param_1[2] = lVar1 + param_3;
    plVar3 = param_1;
    if (0xf < uVar2) {
      plVar3 = (longlong *)*param_1;
    }
    memmove((void *)((longlong)plVar3 + lVar1),param_2,param_3);
    *(undefined1 *)((longlong)plVar3 + lVar1 + param_3) = 0;
    return param_1;
  }
  plVar3 = FUN_180009800(param_1,param_3,uVar2,param_2,param_3);
  return plVar3;
}



void FUN_1800088c0(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



longlong * FUN_1800088e0(longlong *param_1,UINT param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong _Size;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar1 = param_3[1];
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
                    // WARNING: Subroutine does not return
      FUN_180005910();
    }
    uVar4 = FUN_18000ea30(param_2,(LPCWSTR)*param_3,(int)uVar1,(LPSTR)0x0,0);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180005bf0(iVar3);
    }
    uVar6 = (ulonglong)(int)uVar4;
    uVar1 = param_1[2];
    if (uVar1 < uVar6) {
      _Size = uVar6 - uVar1;
      uVar2 = param_1[3];
      if (uVar2 - uVar1 < _Size) {
        FUN_180009670(param_1,_Size,uVar2,_Size);
      }
      else {
        param_1[2] = uVar6;
        plVar5 = param_1;
        if (0xf < uVar2) {
          plVar5 = (longlong *)*param_1;
        }
        memset((void *)((longlong)plVar5 + uVar1),0,_Size);
        *(undefined1 *)((longlong)((longlong)plVar5 + uVar1) + _Size) = 0;
      }
    }
    else {
      param_1[2] = uVar6;
      plVar5 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar5 = (longlong *)*param_1;
      }
      *(undefined1 *)((longlong)plVar5 + uVar6) = 0;
    }
    plVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar5 = (longlong *)*param_1;
    }
    uVar4 = FUN_18000ea30(param_2,(LPCWSTR)*param_3,*(int *)(param_3 + 1),(LPSTR)plVar5,(int)uVar4);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180005bf0(iVar3);
    }
  }
  return param_1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_180008a40(void)

{
  int iVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  uint local_1e0;
  undefined1 local_1dc [4];
  longlong alStack_1d8 [4];
  undefined4 auStack_1b4 [39];
  undefined8 local_118 [32];
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_218;
  local_1ec = 0;
  memset(local_1dc,0,0x1c4);
  local_1e8 = local_118;
  local_1f8 = local_118;
  pcVar5 = (code *)0x0;
  local_1f0 = 0;
  local_1e0 = 0;
  memset(local_118,0,0x100);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_18001b168) && (FUN_18000f340(&DAT_18001b168), DAT_18001b168 == -1)) {
    uVar3 = 0xbc52445 % (ulonglong)(uint)rage::scrThread::s_CommandsRegistration[1];
    uVar7 = 0xbc52445;
    _Var2 = *rage::scrThread::s_CommandsRegistration;
    iVar4 = (int)uVar3;
    iVar1 = *(int *)(_Var2 + (ulonglong)(uint)(iVar4 * 4) * 4);
    do {
      if (iVar1 == 0xbc52445) {
        pcVar5 = *(code **)(_Var2 + 8 + (ulonglong)(uint)(iVar4 * 2) * 8);
        goto LAB_180008b51;
      }
      uVar6 = (int)(uVar7 >> 1) + 1;
      uVar7 = (ulonglong)uVar6;
      uVar3 = (ulonglong)(uVar6 + (int)uVar3) %
              (ulonglong)(uint)rage::scrThread::s_CommandsRegistration[1];
      iVar4 = (int)uVar3;
      iVar1 = *(int *)(_Var2 + (ulonglong)(uint)(iVar4 * 4) * 4);
    } while (iVar1 != 0);
    Log::Print(3,(char *)0x0,"Failed to find native with hash 0x%08X");
LAB_180008b51:
    DAT_18001b188 = pcVar5;
    _Init_thread_footer(&DAT_18001b168);
  }
  uVar6 = local_1e0;
  if (DAT_18001b188 != (code *)0x0) {
    (*DAT_18001b188)(&local_1f8);
    uVar6 = local_1e0;
  }
  while (uVar6 != 0) {
    local_1e0 = uVar6 - 1;
    *(undefined4 *)alStack_1d8[local_1e0] =
         *(undefined4 *)((longlong)&local_1f8 + (ulonglong)((uVar6 + 3) * 0x10));
    *(undefined4 *)(alStack_1d8[local_1e0] + 4) = auStack_1b4[(ulonglong)local_1e0 * 4];
    *(undefined4 *)(alStack_1d8[local_1e0] + 8) = auStack_1b4[(ulonglong)local_1e0 * 4 + 1];
    uVar6 = local_1e0;
  }
  return local_118[0];
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_180008c10(void)

{
  int iVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  uint local_1e0;
  undefined1 local_1dc [4];
  longlong alStack_1d8 [4];
  undefined4 auStack_1b4 [39];
  undefined8 local_118 [32];
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_218;
  local_1ec = 0;
  memset(local_1dc,0,0x1c4);
  local_1e8 = local_118;
  local_1f8 = local_118;
  pcVar5 = (code *)0x0;
  local_1f0 = 0;
  local_1e0 = 0;
  memset(local_118,0,0x100);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_18001b16c) && (FUN_18000f340(&DAT_18001b16c), DAT_18001b16c == -1)) {
    uVar3 = 0x960db7a5 % (ulonglong)(uint)rage::scrThread::s_CommandsRegistration[1];
    uVar7 = 0x960db7a5;
    _Var2 = *rage::scrThread::s_CommandsRegistration;
    iVar4 = (int)uVar3;
    iVar1 = *(int *)(_Var2 + (ulonglong)(uint)(iVar4 * 4) * 4);
    do {
      if (iVar1 == -0x69f2485b) {
        pcVar5 = *(code **)(_Var2 + 8 + (ulonglong)(uint)(iVar4 * 2) * 8);
        goto LAB_180008d21;
      }
      uVar6 = (int)(uVar7 >> 1) + 1;
      uVar7 = (ulonglong)uVar6;
      uVar3 = (ulonglong)(uVar6 + (int)uVar3) %
              (ulonglong)(uint)rage::scrThread::s_CommandsRegistration[1];
      iVar4 = (int)uVar3;
      iVar1 = *(int *)(_Var2 + (ulonglong)(uint)(iVar4 * 4) * 4);
    } while (iVar1 != 0);
    Log::Print(3,(char *)0x0,"Failed to find native with hash 0x%08X");
LAB_180008d21:
    DAT_18001b170 = pcVar5;
    _Init_thread_footer(&DAT_18001b16c);
  }
  uVar6 = local_1e0;
  if (DAT_18001b170 != (code *)0x0) {
    (*DAT_18001b170)(&local_1f8);
    uVar6 = local_1e0;
  }
  while (uVar6 != 0) {
    local_1e0 = uVar6 - 1;
    *(undefined4 *)alStack_1d8[local_1e0] =
         *(undefined4 *)((longlong)&local_1f8 + (ulonglong)((uVar6 + 3) * 0x10));
    *(undefined4 *)(alStack_1d8[local_1e0] + 4) = auStack_1b4[(ulonglong)local_1e0 * 4];
    *(undefined4 *)(alStack_1d8[local_1e0] + 8) = auStack_1b4[(ulonglong)local_1e0 * 4 + 1];
    uVar6 = local_1e0;
  }
  return local_118[0];
}



undefined8 *
FUN_180008de0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Src;
  longlong lVar4;
  size_t sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvVar8;
  void *_Dst;
  
  lVar2 = param_1[2];
  uVar7 = 0x7ffffffffffffffe;
  if (lVar2 == 0x7ffffffffffffffe) {
                    // WARNING: Subroutine does not return
    FUN_180001650();
  }
  uVar3 = param_1[3];
  uVar6 = lVar2 + 1U | 7;
  _Dst = (void *)0x0;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffff < uVar7 + 1) goto LAB_180008f67;
    sVar5 = (uVar7 + 1) * 2;
    if (sVar5 != 0) goto LAB_180008e89;
  }
  else {
    sVar5 = 0xfffffffffffffffe;
LAB_180008e89:
    if (sVar5 < 0x1000) {
      _Dst = (void *)FUN_18000eeb0(sVar5);
    }
    else {
      if (sVar5 + 0x27 <= sVar5) {
LAB_180008f67:
                    // WARNING: Subroutine does not return
        FUN_1800015b0();
      }
      lVar4 = FUN_18000eeb0(sVar5 + 0x27);
      if (lVar4 == 0) goto LAB_180008f22;
      _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar4;
    }
  }
  sVar5 = lVar2 * 2;
  param_1[2] = lVar2 + 1U;
  param_1[3] = uVar7;
  if (uVar3 < 8) {
    memcpy(_Dst,param_1,sVar5);
    *(undefined2 *)(sVar5 + (longlong)_Dst) = param_4;
    *(undefined2 *)(sVar5 + 2 + (longlong)_Dst) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,sVar5);
    *(undefined2 *)(sVar5 + (longlong)_Dst) = param_4;
    *(undefined2 *)(sVar5 + 2 + (longlong)_Dst) = 0;
    pvVar8 = _Src;
    if ((0xfff < uVar3 * 2 + 2) &&
       (pvVar8 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar8)))) {
LAB_180008f22:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar8);
  }
  *param_1 = _Dst;
  return param_1;
}



longlong * FUN_180008f70(longlong *param_1,ulonglong param_2,undefined8 param_3,void *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  longlong lVar4;
  size_t sVar5;
  void *pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *_Dst;
  
  uVar8 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe < param_2) {
                    // WARNING: Subroutine does not return
    FUN_180001650();
  }
  uVar7 = param_2 | 7;
  uVar2 = param_1[3];
  _Dst = (void *)0x0;
  if ((uVar7 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar7;
    if (uVar7 < uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffff < uVar8 + 1) goto LAB_1800090c4;
    sVar5 = (uVar8 + 1) * 2;
    if (sVar5 != 0) goto LAB_180009004;
  }
  else {
    sVar5 = 0xfffffffffffffffe;
LAB_180009004:
    if (sVar5 < 0x1000) {
      _Dst = (void *)FUN_18000eeb0(sVar5);
    }
    else {
      if (sVar5 + 0x27 <= sVar5) {
LAB_1800090c4:
                    // WARNING: Subroutine does not return
        FUN_1800015b0();
      }
      lVar4 = FUN_18000eeb0(sVar5 + 0x27);
      if (lVar4 == 0) goto LAB_1800090b7;
      _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar4;
    }
  }
  param_1[3] = uVar8;
  param_1[2] = param_2;
  memcpy(_Dst,param_4,param_2 * 2);
  *(undefined2 *)(param_2 * 2 + (longlong)_Dst) = 0;
  if (7 < uVar2) {
    pvVar3 = (void *)*param_1;
    pvVar6 = pvVar3;
    if ((0xfff < uVar2 * 2 + 2) &&
       (pvVar6 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6)))) {
LAB_1800090b7:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar6);
  }
  *param_1 = (longlong)_Dst;
  return param_1;
}



undefined8 *
FUN_1800090d0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,
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
    FUN_180001650();
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
    if (0x7fffffffffffffff < uVar8 + 1) goto LAB_18000928c;
    sVar6 = (uVar8 + 1) * 2;
    if (sVar6 != 0) goto LAB_18000917f;
  }
  else {
    sVar6 = 0xfffffffffffffffe;
LAB_18000917f:
    if (sVar6 < 0x1000) {
      _Dst = (void *)FUN_18000eeb0(sVar6);
    }
    else {
      if (sVar6 + 0x27 <= sVar6) {
LAB_18000928c:
                    // WARNING: Subroutine does not return
        FUN_1800015b0();
      }
      lVar5 = FUN_18000eeb0(sVar6 + 0x27);
      if (lVar5 == 0) goto LAB_180009239;
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
LAB_180009239:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar9);
  }
  *param_1 = _Dst;
  return param_1;
}



longlong FUN_1800092a0(void *param_1,ulonglong param_2,undefined8 param_3,char *param_4,
                      ulonglong param_5)

{
  char cVar1;
  int iVar2;
  void *_Buf1;
  
  if (param_5 <= param_2) {
    if (param_5 == 0) {
      return 0;
    }
    cVar1 = *param_4;
    for (_Buf1 = memchr(param_1,(int)cVar1,(param_2 - param_5) + 1); _Buf1 != (void *)0x0;
        _Buf1 = memchr((void *)((longlong)_Buf1 + 1),(int)cVar1,
                       (longlong)param_1 + (((param_2 - param_5) + 1) - ((longlong)_Buf1 + 1)))) {
      iVar2 = memcmp(_Buf1,param_4,param_5);
      if (iVar2 == 0) {
        return (longlong)_Buf1 - (longlong)param_1;
      }
    }
  }
  return -1;
}



undefined8 * FUN_180009360(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *_Dst;
  
  lVar2 = param_1[2];
  uVar6 = 0x7fffffffffffffff;
  if (0x7fffffffffffffffU - lVar2 < param_2) {
                    // WARNING: Subroutine does not return
    FUN_180001650();
  }
  uVar3 = param_1[3];
  uVar5 = param_2 + lVar2 | 0xf;
  if ((uVar5 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
    uVar1 = uVar6 + 1;
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar5 = uVar6 + 0x28;
        if (uVar5 <= uVar1) {
                    // WARNING: Subroutine does not return
          FUN_1800015b0();
        }
        goto LAB_1800093fe;
      }
      _Dst = (void *)FUN_18000eeb0(uVar1);
    }
  }
  else {
    uVar5 = 0x8000000000000027;
LAB_1800093fe:
    lVar4 = FUN_18000eeb0(uVar5);
    if (lVar4 == 0) goto LAB_180009470;
    _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar4;
  }
  param_1[2] = param_2 + lVar2;
  param_1[3] = uVar6;
  if (uVar3 < 0x10) {
    memcpy(_Dst,param_1,lVar2 + 1U);
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,lVar2 + 1U);
    pvVar7 = _Src;
    if ((0xfff < uVar3 + 1) &&
       (pvVar7 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar7)))) {
LAB_180009470:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar7);
  }
  *param_1 = _Dst;
  return param_1;
}



undefined8 *
FUN_1800094b0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Src;
  longlong lVar4;
  size_t sVar5;
  ulonglong uVar6;
  void *_Dst;
  void *pvVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  
  lVar2 = param_1[2];
  uVar8 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    // WARNING: Subroutine does not return
    FUN_180001650();
  }
  uVar3 = param_1[3];
  uVar6 = param_2 + lVar2 | 7;
  _Dst = (void *)0x0;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar8 = uVar6;
    if (uVar6 < uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffff < uVar8 + 1) goto LAB_18000965c;
    sVar5 = (uVar8 + 1) * 2;
    if (sVar5 != 0) goto LAB_180009558;
  }
  else {
    sVar5 = 0xfffffffffffffffe;
LAB_180009558:
    if (sVar5 < 0x1000) {
      _Dst = (void *)FUN_18000eeb0(sVar5);
    }
    else {
      if (sVar5 + 0x27 <= sVar5) {
LAB_18000965c:
                    // WARNING: Subroutine does not return
        FUN_1800015b0();
      }
      lVar4 = FUN_18000eeb0(sVar5 + 0x27);
      if (lVar4 == 0) goto LAB_180009606;
      _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar4;
    }
  }
  param_1[3] = uVar8;
  sVar5 = lVar2 * 2;
  param_1[2] = param_2 + lVar2;
  if (uVar3 < 8) {
    memcpy(_Dst,param_1,sVar5);
    puVar9 = (undefined2 *)(sVar5 + (longlong)_Dst);
    lVar4 = param_4;
    if (param_4 != 0) {
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
    }
    *(undefined2 *)((longlong)_Dst + (param_4 + lVar2) * 2) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,sVar5);
    puVar9 = (undefined2 *)(sVar5 + (longlong)_Dst);
    lVar4 = param_4;
    if (param_4 != 0) {
      for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
    }
    *(undefined2 *)((longlong)_Dst + (param_4 + lVar2) * 2) = 0;
    pvVar7 = _Src;
    if ((0xfff < uVar3 * 2 + 2) &&
       (pvVar7 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar7)))) {
LAB_180009606:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar7);
  }
  *param_1 = _Dst;
  return param_1;
}



undefined8 * FUN_180009670(undefined8 *param_1,ulonglong param_2,undefined8 param_3,size_t param_4)

{
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *_Dst;
  
  _Size = param_1[2];
  uVar5 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - _Size < param_2) {
                    // WARNING: Subroutine does not return
    FUN_180001650();
  }
  uVar4 = param_2 + _Size | 0xf;
  uVar2 = param_1[3];
  if ((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar5 = uVar4;
    if (uVar4 < uVar1) {
      uVar5 = uVar1;
    }
    uVar1 = uVar5 + 1;
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar4 = uVar5 + 0x28;
        if (uVar4 <= uVar1) {
                    // WARNING: Subroutine does not return
          FUN_1800015b0();
        }
        goto LAB_180009718;
      }
      _Dst = (void *)FUN_18000eeb0(uVar1);
    }
  }
  else {
    uVar4 = 0x8000000000000027;
LAB_180009718:
    lVar3 = FUN_18000eeb0(uVar4);
    if (lVar3 == 0) goto LAB_1800097a3;
    _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar3;
  }
  param_1[2] = param_2 + _Size;
  param_1[3] = uVar5;
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    memset((void *)(_Size + (longlong)_Dst),0,param_4);
    *(undefined1 *)(_Size + param_4 + (longlong)_Dst) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    memset((void *)(_Size + (longlong)_Dst),0,param_4);
    *(undefined1 *)(_Size + param_4 + (longlong)_Dst) = 0;
    pvVar6 = _Src;
    if ((0xfff < uVar2 + 1) &&
       (pvVar6 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar6)))) {
LAB_1800097a3:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar6);
  }
  *param_1 = _Dst;
  return param_1;
}



undefined8 *
FUN_180009800(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,size_t param_5)

{
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *_Dst;
  
  _Size = param_1[2];
  uVar5 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - _Size < param_2) {
                    // WARNING: Subroutine does not return
    FUN_180001650();
  }
  uVar2 = param_1[3];
  uVar4 = param_2 + _Size | 0xf;
  if ((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar5 = uVar4;
    if (uVar4 < uVar1) {
      uVar5 = uVar1;
    }
    uVar1 = uVar5 + 1;
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar4 = uVar5 + 0x28;
        if (uVar4 <= uVar1) {
                    // WARNING: Subroutine does not return
          FUN_1800015b0();
        }
        goto LAB_1800098ad;
      }
      _Dst = (void *)FUN_18000eeb0(uVar1);
    }
  }
  else {
    uVar4 = 0x8000000000000027;
LAB_1800098ad:
    lVar3 = FUN_18000eeb0(uVar4);
    if (lVar3 == 0) goto LAB_180009935;
    _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar3;
  }
  param_1[2] = param_2 + _Size;
  pvVar6 = (void *)(_Size + (longlong)_Dst);
  param_1[3] = uVar5;
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    memcpy(pvVar6,param_4,param_5);
    *(undefined1 *)((longlong)pvVar6 + param_5) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    memcpy(pvVar6,param_4,param_5);
    *(undefined1 *)((longlong)pvVar6 + param_5) = 0;
    pvVar6 = _Src;
    if ((0xfff < uVar2 + 1) &&
       (pvVar6 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar6)))) {
LAB_180009935:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar6);
  }
  *param_1 = _Dst;
  return param_1;
}



longlong * FUN_180009990(undefined8 param_1,longlong *param_2,longlong *param_3)

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
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined8 *local_68;
  undefined8 *local_58;
  longlong lStack_50;
  undefined8 *local_48;
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
  FUN_18000a410(uVar6,&local_58,param_3,uVar11);
  if (lStack_50 != 0) {
    *param_2 = lStack_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_18001b240 == 0x333333333333333) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  local_48 = &DAT_18001b238;
  local_40 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_18000eeb0(0x50);
  local_40 = puVar5;
  FUN_1800044b0(puVar5 + 2,param_3);
  FUN_1800044b0(puVar5 + 6,param_3 + 4);
  uVar6 = DAT_18001b268;
  if (DAT_18001b230 < (float)(DAT_18001b240 + 1) / (float)DAT_18001b268) {
    fVar12 = ceilf((float)(DAT_18001b240 + 1) / DAT_18001b230);
    lVar7 = 0;
    if ((9.223372e+18 <= fVar12) && (fVar12 = fVar12 - 9.223372e+18, fVar12 < 9.223372e+18)) {
      lVar7 = -0x8000000000000000;
    }
    uVar8 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar7)) {
      uVar8 = (longlong)fVar12 + lVar7;
    }
    uVar10 = uVar6;
    if ((uVar6 < uVar8) && ((0x1ff < uVar6 || (uVar10 = uVar6 * 8, uVar6 * 8 < uVar8)))) {
      uVar10 = uVar8;
    }
    FUN_180009e90(uVar8,uVar10);
    local_68 = *(undefined8 **)(DAT_18001b248 + 8 + (DAT_18001b260 & uVar11) * 0x10);
    if (local_68 == DAT_18001b238) {
      local_68 = DAT_18001b238;
    }
    else {
      puVar1 = *(undefined8 **)(DAT_18001b248 + (DAT_18001b260 & uVar11) * 0x10);
      uVar6 = puVar5[5];
      _Size = puVar5[4];
      while( true ) {
        puVar9 = local_68 + 2;
        if (0xf < (ulonglong)local_68[5]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        _Buf1 = puVar5 + 2;
        if (0xf < uVar6) {
          _Buf1 = (undefined8 *)puVar5[2];
        }
        if ((_Size == local_68[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar9,_Size), iVar3 == 0)))) break;
        if (local_68 == puVar1) goto LAB_180009bfe;
        local_68 = (undefined8 *)local_68[1];
      }
      local_68 = (undefined8 *)*local_68;
    }
LAB_180009bfe:
    local_58 = local_68;
  }
  puVar1 = (undefined8 *)local_58[1];
  DAT_18001b240 = DAT_18001b240 + 1;
  *puVar5 = local_58;
  puVar5[1] = puVar1;
  *puVar1 = puVar5;
  local_58[1] = puVar5;
  lVar7 = DAT_18001b248;
  uVar11 = DAT_18001b260 & uVar11;
  puVar9 = *(undefined8 **)(DAT_18001b248 + uVar11 * 0x10);
  if (puVar9 == DAT_18001b238) {
    *(undefined8 **)(DAT_18001b248 + uVar11 * 0x10) = puVar5;
  }
  else {
    if (puVar9 == local_58) {
      *(undefined8 **)(DAT_18001b248 + uVar11 * 0x10) = puVar5;
      goto LAB_180009c6f;
    }
    if (*(undefined8 **)(DAT_18001b248 + 8 + uVar11 * 0x10) != puVar1) goto LAB_180009c6f;
  }
  *(undefined8 **)(lVar7 + 8 + uVar11 * 0x10) = puVar5;
LAB_180009c6f:
  *param_2 = (longlong)puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



void FUN_180009ca0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800070c0((longlong *)(*(longlong *)(param_1 + 8) + 0x10));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_18000f264(*(void **)(param_1 + 8));
    return;
  }
  return;
}



TypeDescriptor * FUN_180009ce0(void)

{
  return &`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::__l2::<lambda_7>::
          RTTI_Type_Descriptor;
}



void FUN_180009cf0(undefined8 param_1,longlong param_2)

{
  rage::scrThread::s_QuitGame = *(_func_void **)(param_2 + 0x10);
  return;
}



undefined8 * FUN_180009d00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



TypeDescriptor * FUN_180009d10(void)

{
  return &`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::__l2::<lambda_6>::
          RTTI_Type_Descriptor;
}



void FUN_180009d20(undefined8 param_1,longlong param_2)

{
  rage::scrThread::s_FullReadPath = *(void **)(param_2 + 0x10);
  return;
}



undefined8 * FUN_180009d30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



TypeDescriptor * FUN_180009d40(void)

{
  return &`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::__l2::<lambda_5>::
          RTTI_Type_Descriptor;
}



void FUN_180009d50(undefined8 param_1,longlong param_2)

{
  rage::scrThread::s_StartNewThreadOverride =
       (void *)(*(longlong *)(param_2 + 0x10) + 5 +
               (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 1));
  return;
}



undefined8 * FUN_180009d70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



TypeDescriptor * FUN_180009d80(void)

{
  return &`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::__l2::<lambda_4>::
          RTTI_Type_Descriptor;
}



void FUN_180009d90(undefined8 param_1,longlong param_2)

{
  rage::scrThread::s_StartNewScript =
       (void *)(*(longlong *)(param_2 + 0x10) + 5 +
               (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 1));
  return;
}



undefined8 * FUN_180009db0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



TypeDescriptor * FUN_180009dc0(void)

{
  return &`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::__l2::<lambda_3>::
          RTTI_Type_Descriptor;
}



void FUN_180009dd0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  rage::scrThread::s_Wait =
       (void *)(lVar1 + 0x10 + (longlong)*(int *)(lVar1 + 1) +
               (longlong)*(int *)((longlong)*(int *)(lVar1 + 1) + 0xc + lVar1));
  return;
}



undefined8 * FUN_180009df0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



TypeDescriptor * FUN_180009e00(void)

{
  return &`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::__l2::<lambda_2>::
          RTTI_Type_Descriptor;
}



void FUN_180009e10(undefined8 param_1,longlong param_2)

{
  rage::scrThread::s_CommandsRegistration =
       (__uint64 *)
       (*(longlong *)(param_2 + 0x10) + 7 + (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 3));
  return;
}



undefined8 * FUN_180009e30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



TypeDescriptor * FUN_180009e40(void)

{
  return &`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void FUN_180009e50(undefined8 param_1,longlong param_2)

{
  rage::scrThread::s_RegisterCommand =
       *(_func_bool_void_ptr_uint__func_void_InfoBase_ptr_ptr **)(param_2 + 0x10);
  return;
}



undefined8 * FUN_180009e60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



void FUN_180009e90(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulonglong _Size;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *_Buf2;
  longlong lVar16;
  undefined8 *puVar17;
  
  puVar9 = DAT_18001b238;
  for (lVar16 = 0x3f; 0xfffffffffffffffU >> lVar16 == 0; lVar16 = lVar16 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar16 & 0x3f)) < param_2) {
    std::_Xlength_error("invalid hash bucket count");
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = param_2 - 1 | 1;
  lVar16 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  lVar16 = 1L << ((char)lVar16 + 1U & 0x3f);
  FUN_1800046a0((ulonglong *)&DAT_18001b248,lVar16 * 2,DAT_18001b238);
  DAT_18001b260 = lVar16 - 1;
  DAT_18001b268 = lVar16;
  puVar8 = (undefined8 *)*DAT_18001b238;
joined_r0x000180009f1c:
  do {
    if (puVar8 == puVar9) {
      return;
    }
    uVar11 = puVar8[5];
    puVar17 = puVar8 + 2;
    puVar2 = (undefined8 *)*puVar8;
    _Size = puVar8[4];
    if (0xf < uVar11) {
      puVar17 = (undefined8 *)puVar8[2];
    }
    uVar14 = 0;
    uVar12 = 0xcbf29ce484222325;
    if (_Size != 0) {
      do {
        pbVar1 = (byte *)((longlong)puVar17 + uVar14);
        uVar14 = uVar14 + 1;
        uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
      } while (uVar14 < _Size);
    }
    puVar17 = (undefined8 *)((DAT_18001b260 & uVar12) * 0x10 + DAT_18001b248);
    if ((undefined8 *)*puVar17 == puVar9) {
      *puVar17 = puVar8;
LAB_18000a0f7:
      puVar17[1] = puVar8;
      puVar8 = puVar2;
      goto joined_r0x000180009f1c;
    }
    plVar3 = (longlong *)puVar17[1];
    plVar15 = plVar3 + 2;
    if (0xf < (ulonglong)plVar3[5]) {
      plVar15 = (longlong *)*plVar15;
    }
    puVar13 = puVar8 + 2;
    if (0xf < uVar11) {
      puVar13 = (undefined8 *)puVar8[2];
    }
    if ((_Size == plVar3[4]) &&
       ((_Size == 0 || (iVar10 = memcmp(puVar13,plVar15,_Size), iVar10 == 0)))) {
      puVar13 = (undefined8 *)*plVar3;
      if (puVar13 != puVar8) {
        puVar4 = (undefined8 *)puVar8[1];
        *puVar4 = puVar2;
        puVar5 = (undefined8 *)puVar2[1];
        *puVar5 = puVar13;
        puVar6 = (undefined8 *)puVar13[1];
        *puVar6 = puVar8;
        puVar13[1] = puVar5;
        puVar2[1] = puVar4;
        puVar8[1] = puVar6;
      }
      goto LAB_18000a0f7;
    }
    plVar15 = (longlong *)*puVar17;
    do {
      if (plVar15 == plVar3) {
        puVar13 = (undefined8 *)puVar8[1];
        *puVar13 = puVar2;
        puVar4 = (undefined8 *)puVar2[1];
        *puVar4 = plVar3;
        puVar5 = (undefined8 *)plVar3[1];
        *puVar5 = puVar8;
        plVar3[1] = (longlong)puVar4;
        puVar2[1] = puVar13;
        puVar8[1] = puVar5;
        *puVar17 = puVar8;
        puVar8 = puVar2;
        goto joined_r0x000180009f1c;
      }
      plVar3 = (longlong *)plVar3[1];
      _Buf2 = plVar3 + 2;
      if (0xf < (ulonglong)plVar3[5]) {
        _Buf2 = (longlong *)*_Buf2;
      }
      puVar13 = puVar8 + 2;
      if (0xf < uVar11) {
        puVar13 = (undefined8 *)puVar8[2];
      }
    } while ((_Size != plVar3[4]) ||
            ((_Size != 0 && (iVar10 = memcmp(puVar13,_Buf2,_Size), iVar10 != 0))));
    lVar16 = *plVar3;
    puVar17 = (undefined8 *)puVar8[1];
    *puVar17 = puVar2;
    plVar15 = (longlong *)puVar2[1];
    *plVar15 = lVar16;
    puVar13 = *(undefined8 **)(lVar16 + 8);
    *puVar13 = puVar8;
    *(longlong **)(lVar16 + 8) = plVar15;
    puVar2[1] = puVar17;
    puVar8[1] = puVar13;
    puVar8 = puVar2;
  } while( true );
}



longlong * FUN_18000a140(longlong *param_1,UINT param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong _Size;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar1 = param_3[1];
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
                    // WARNING: Subroutine does not return
      FUN_180005910();
    }
    uVar4 = __std_fs_convert_wide_to_narrow(param_2,(LPCWSTR)*param_3,(int)uVar1,(LPSTR)0x0,0);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180005bf0(iVar3);
    }
    uVar6 = (ulonglong)(int)uVar4;
    uVar1 = param_1[2];
    if (uVar1 < uVar6) {
      _Size = uVar6 - uVar1;
      uVar2 = param_1[3];
      if (uVar2 - uVar1 < _Size) {
        FUN_180009670(param_1,_Size,uVar2,_Size);
      }
      else {
        param_1[2] = uVar6;
        plVar5 = param_1;
        if (0xf < uVar2) {
          plVar5 = (longlong *)*param_1;
        }
        memset((void *)((longlong)plVar5 + uVar1),0,_Size);
        *(undefined1 *)((longlong)((longlong)plVar5 + uVar1) + _Size) = 0;
      }
    }
    else {
      param_1[2] = uVar6;
      plVar5 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar5 = (longlong *)*param_1;
      }
      *(undefined1 *)((longlong)plVar5 + uVar6) = 0;
    }
    plVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar5 = (longlong *)*param_1;
    }
    uVar4 = __std_fs_convert_wide_to_narrow
                      (param_2,(LPCWSTR)*param_3,*(int *)(param_3 + 1),(LPSTR)plVar5,(int)uVar4);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180005bf0(iVar3);
    }
  }
  return param_1;
}



undefined8 * FUN_18000a2a0(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Src;
  longlong lVar4;
  size_t sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvVar8;
  void *_Dst;
  
  lVar2 = param_1[2];
  uVar7 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    // WARNING: Subroutine does not return
    FUN_180001650();
  }
  uVar3 = param_1[3];
  uVar6 = param_2 + lVar2 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffff < uVar7 + 1) goto LAB_18000a3fc;
    sVar5 = (uVar7 + 1) * 2;
    if (sVar5 != 0) goto LAB_18000a339;
    _Dst = (void *)0x0;
  }
  else {
    sVar5 = 0xfffffffffffffffe;
LAB_18000a339:
    if (sVar5 < 0x1000) {
      _Dst = (void *)FUN_18000eeb0(sVar5);
    }
    else {
      if (sVar5 + 0x27 <= sVar5) {
LAB_18000a3fc:
                    // WARNING: Subroutine does not return
        FUN_1800015b0();
      }
      lVar4 = FUN_18000eeb0(sVar5 + 0x27);
      if (lVar4 == 0) goto LAB_18000a3c9;
      _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar4;
    }
  }
  param_1[2] = param_2 + lVar2;
  sVar5 = lVar2 * 2 + 2;
  param_1[3] = uVar7;
  if (uVar3 < 8) {
    memcpy(_Dst,param_1,sVar5);
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,sVar5);
    pvVar8 = _Src;
    if ((0xfff < uVar3 * 2 + 2) &&
       (pvVar8 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar8)))) {
LAB_18000a3c9:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar8);
  }
  *param_1 = _Dst;
  return param_1;
}



undefined8 *
FUN_18000a410(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)((DAT_18001b260 & param_4) * 0x10 + DAT_18001b248);
  puVar4 = (undefined8 *)plVar5[1];
  if (puVar4 == DAT_18001b238) {
    *param_2 = DAT_18001b238;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = (undefined8 *)*plVar5;
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = puVar4 + 2;
    if (0xf < (ulonglong)puVar4[5]) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    _Buf1 = param_3;
    if (0xf < uVar2) {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == puVar4[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0))))
    break;
    if (puVar4 == puVar1) {
      *param_2 = puVar4;
      param_2[1] = 0;
      return param_2;
    }
    puVar4 = (undefined8 *)puVar4[1];
  }
  *param_2 = *puVar4;
  param_2[1] = puVar4;
  return param_2;
}



// public: __cdecl rage::sagActor::sagActor(void) __ptr64

sagActor * __thiscall rage::sagActor::sagActor(sagActor *this)

{
                    // 0xa500  9  ??0sagActor@rage@@QEAA@XZ
  *(undefined ***)this = vftable;
  return this;
}



// public: __cdecl rage::sagActor::sagActor(struct rage::sagActor && __ptr64) __ptr64

sagActor * __thiscall rage::sagActor::sagActor(sagActor *this,sagActor *param_1)

{
  undefined8 uVar1;
  
                    // 0xa510  7  ??0sagActor@rage@@QEAA@$$QEAU01@@Z
                    // 0xa510  8  ??0sagActor@rage@@QEAA@AEBU01@@Z
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(this + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(this + 0x14) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(this + 0x24) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x34) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(this + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(this + 0x44) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x54);
  *(undefined8 *)(this + 0x4c) = *(undefined8 *)(param_1 + 0x4c);
  *(undefined8 *)(this + 0x54) = uVar1;
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x70) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x80) = uVar1;
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x98) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(this + 0xa8) = uVar1;
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(this + 0xc0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(this + 0xd0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(this + 0xe0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(this + 0xe8) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(this + 0xf0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(this + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(this + 0x100) = uVar1;
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  uVar1 = *(undefined8 *)(param_1 + 0x114);
  *(undefined8 *)(this + 0x10c) = *(undefined8 *)(param_1 + 0x10c);
  *(undefined8 *)(this + 0x114) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x124);
  *(undefined8 *)(this + 0x11c) = *(undefined8 *)(param_1 + 0x11c);
  *(undefined8 *)(this + 0x124) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x134);
  *(undefined8 *)(this + 300) = *(undefined8 *)(param_1 + 300);
  *(undefined8 *)(this + 0x134) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x144);
  *(undefined8 *)(this + 0x13c) = *(undefined8 *)(param_1 + 0x13c);
  *(undefined8 *)(this + 0x144) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x154);
  *(undefined8 *)(this + 0x14c) = *(undefined8 *)(param_1 + 0x14c);
  *(undefined8 *)(this + 0x154) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x164);
  *(undefined8 *)(this + 0x15c) = *(undefined8 *)(param_1 + 0x15c);
  *(undefined8 *)(this + 0x164) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x174);
  *(undefined8 *)(this + 0x16c) = *(undefined8 *)(param_1 + 0x16c);
  *(undefined8 *)(this + 0x174) = uVar1;
  *(undefined8 *)(this + 0x17c) = *(undefined8 *)(param_1 + 0x17c);
  *(undefined4 *)(this + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  return this;
}



// public: struct rage::sagActor & __ptr64 __cdecl rage::sagActor::operator=(struct rage::sagActor
// && __ptr64) __ptr64

sagActor * __thiscall rage::sagActor::operator=(sagActor *this,sagActor *param_1)

{
                    // 0xa680  29  ??4sagActor@rage@@QEAAAEAU01@$$QEAU01@@Z
                    // 0xa680  30  ??4sagActor@rage@@QEAAAEAU01@AEBU01@@Z
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  this[0xd] = param_1[0xd];
  this[0xe] = param_1[0xe];
  this[0xf] = param_1[0xf];
  this[0x10] = param_1[0x10];
  this[0x11] = param_1[0x11];
  this[0x12] = param_1[0x12];
  this[0x13] = param_1[0x13];
  this[0x14] = param_1[0x14];
  this[0x15] = param_1[0x15];
  this[0x16] = param_1[0x16];
  this[0x17] = param_1[0x17];
  this[0x18] = param_1[0x18];
  this[0x19] = param_1[0x19];
  this[0x1a] = param_1[0x1a];
  this[0x1b] = param_1[0x1b];
  this[0x1c] = param_1[0x1c];
  this[0x1d] = param_1[0x1d];
  this[0x1e] = param_1[0x1e];
  this[0x1f] = param_1[0x1f];
  this[0x20] = param_1[0x20];
  this[0x21] = param_1[0x21];
  this[0x22] = param_1[0x22];
  this[0x23] = param_1[0x23];
  this[0x24] = param_1[0x24];
  this[0x25] = param_1[0x25];
  this[0x26] = param_1[0x26];
  this[0x27] = param_1[0x27];
  this[0x28] = param_1[0x28];
  this[0x29] = param_1[0x29];
  this[0x2a] = param_1[0x2a];
  this[0x2b] = param_1[0x2b];
  this[0x2c] = param_1[0x2c];
  this[0x2d] = param_1[0x2d];
  this[0x2e] = param_1[0x2e];
  this[0x2f] = param_1[0x2f];
  this[0x30] = param_1[0x30];
  this[0x31] = param_1[0x31];
  this[0x32] = param_1[0x32];
  this[0x33] = param_1[0x33];
  this[0x34] = param_1[0x34];
  this[0x35] = param_1[0x35];
  this[0x36] = param_1[0x36];
  this[0x37] = param_1[0x37];
  this[0x38] = param_1[0x38];
  this[0x39] = param_1[0x39];
  this[0x3a] = param_1[0x3a];
  this[0x3b] = param_1[0x3b];
  this[0x3c] = param_1[0x3c];
  this[0x3d] = param_1[0x3d];
  this[0x3e] = param_1[0x3e];
  this[0x3f] = param_1[0x3f];
  this[0x40] = param_1[0x40];
  this[0x41] = param_1[0x41];
  this[0x42] = param_1[0x42];
  this[0x43] = param_1[0x43];
  this[0x44] = param_1[0x44];
  this[0x45] = param_1[0x45];
  this[0x46] = param_1[0x46];
  this[0x47] = param_1[0x47];
  this[0x48] = param_1[0x48];
  this[0x49] = param_1[0x49];
  this[0x4a] = param_1[0x4a];
  this[0x4b] = param_1[0x4b];
  this[0x4c] = param_1[0x4c];
  this[0x4d] = param_1[0x4d];
  this[0x4e] = param_1[0x4e];
  this[0x4f] = param_1[0x4f];
  this[0x50] = param_1[0x50];
  this[0x51] = param_1[0x51];
  this[0x52] = param_1[0x52];
  this[0x53] = param_1[0x53];
  this[0x54] = param_1[0x54];
  this[0x55] = param_1[0x55];
  this[0x56] = param_1[0x56];
  this[0x57] = param_1[0x57];
  this[0x58] = param_1[0x58];
  this[0x59] = param_1[0x59];
  this[0x5a] = param_1[0x5a];
  this[0x5b] = param_1[0x5b];
  this[0x5c] = param_1[0x5c];
  this[0x5d] = param_1[0x5d];
  this[0x5e] = param_1[0x5e];
  this[0x5f] = param_1[0x5f];
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  this[0x68] = param_1[0x68];
  this[0x69] = param_1[0x69];
  this[0x6a] = param_1[0x6a];
  this[0x6b] = param_1[0x6b];
  this[0x6c] = param_1[0x6c];
  this[0x6d] = param_1[0x6d];
  this[0x6e] = param_1[0x6e];
  this[0x6f] = param_1[0x6f];
  this[0x70] = param_1[0x70];
  this[0x71] = param_1[0x71];
  this[0x72] = param_1[0x72];
  this[0x73] = param_1[0x73];
  this[0x74] = param_1[0x74];
  this[0x75] = param_1[0x75];
  this[0x76] = param_1[0x76];
  this[0x77] = param_1[0x77];
  this[0x78] = param_1[0x78];
  this[0x79] = param_1[0x79];
  this[0x7a] = param_1[0x7a];
  this[0x7b] = param_1[0x7b];
  this[0x7c] = param_1[0x7c];
  this[0x7d] = param_1[0x7d];
  this[0x7e] = param_1[0x7e];
  this[0x7f] = param_1[0x7f];
  this[0x80] = param_1[0x80];
  this[0x81] = param_1[0x81];
  this[0x82] = param_1[0x82];
  this[0x83] = param_1[0x83];
  this[0x84] = param_1[0x84];
  this[0x85] = param_1[0x85];
  this[0x86] = param_1[0x86];
  this[0x87] = param_1[0x87];
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  this[0x90] = param_1[0x90];
  this[0x91] = param_1[0x91];
  this[0x92] = param_1[0x92];
  this[0x93] = param_1[0x93];
  this[0x94] = param_1[0x94];
  this[0x95] = param_1[0x95];
  this[0x96] = param_1[0x96];
  this[0x97] = param_1[0x97];
  this[0x98] = param_1[0x98];
  this[0x99] = param_1[0x99];
  this[0x9a] = param_1[0x9a];
  this[0x9b] = param_1[0x9b];
  this[0x9c] = param_1[0x9c];
  this[0x9d] = param_1[0x9d];
  this[0x9e] = param_1[0x9e];
  this[0x9f] = param_1[0x9f];
  this[0xa0] = param_1[0xa0];
  this[0xa1] = param_1[0xa1];
  this[0xa2] = param_1[0xa2];
  this[0xa3] = param_1[0xa3];
  this[0xa4] = param_1[0xa4];
  this[0xa5] = param_1[0xa5];
  this[0xa6] = param_1[0xa6];
  this[0xa7] = param_1[0xa7];
  this[0xa8] = param_1[0xa8];
  this[0xa9] = param_1[0xa9];
  this[0xaa] = param_1[0xaa];
  this[0xab] = param_1[0xab];
  this[0xac] = param_1[0xac];
  this[0xad] = param_1[0xad];
  this[0xae] = param_1[0xae];
  this[0xaf] = param_1[0xaf];
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
  this[0xb8] = param_1[0xb8];
  this[0xb9] = param_1[0xb9];
  this[0xba] = param_1[0xba];
  this[0xbb] = param_1[0xbb];
  this[0xbc] = param_1[0xbc];
  this[0xbd] = param_1[0xbd];
  this[0xbe] = param_1[0xbe];
  this[0xbf] = param_1[0xbf];
  this[0xc0] = param_1[0xc0];
  this[0xc1] = param_1[0xc1];
  this[0xc2] = param_1[0xc2];
  this[0xc3] = param_1[0xc3];
  this[0xc4] = param_1[0xc4];
  this[0xc5] = param_1[0xc5];
  this[0xc6] = param_1[0xc6];
  this[199] = param_1[199];
  this[200] = param_1[200];
  this[0xc9] = param_1[0xc9];
  this[0xca] = param_1[0xca];
  this[0xcb] = param_1[0xcb];
  this[0xcc] = param_1[0xcc];
  this[0xcd] = param_1[0xcd];
  this[0xce] = param_1[0xce];
  this[0xcf] = param_1[0xcf];
  this[0xd0] = param_1[0xd0];
  this[0xd1] = param_1[0xd1];
  this[0xd2] = param_1[0xd2];
  this[0xd3] = param_1[0xd3];
  this[0xd4] = param_1[0xd4];
  this[0xd5] = param_1[0xd5];
  this[0xd6] = param_1[0xd6];
  this[0xd7] = param_1[0xd7];
  this[0xd8] = param_1[0xd8];
  this[0xd9] = param_1[0xd9];
  this[0xda] = param_1[0xda];
  this[0xdb] = param_1[0xdb];
  this[0xdc] = param_1[0xdc];
  this[0xdd] = param_1[0xdd];
  this[0xde] = param_1[0xde];
  this[0xdf] = param_1[0xdf];
  this[0xe0] = param_1[0xe0];
  this[0xe1] = param_1[0xe1];
  this[0xe2] = param_1[0xe2];
  this[0xe3] = param_1[0xe3];
  this[0xe4] = param_1[0xe4];
  this[0xe5] = param_1[0xe5];
  this[0xe6] = param_1[0xe6];
  this[0xe7] = param_1[0xe7];
  this[0xe8] = param_1[0xe8];
  this[0xe9] = param_1[0xe9];
  this[0xea] = param_1[0xea];
  this[0xeb] = param_1[0xeb];
  this[0xec] = param_1[0xec];
  this[0xed] = param_1[0xed];
  this[0xee] = param_1[0xee];
  this[0xef] = param_1[0xef];
  this[0xf0] = param_1[0xf0];
  this[0xf1] = param_1[0xf1];
  this[0xf2] = param_1[0xf2];
  this[0xf3] = param_1[0xf3];
  this[0xf4] = param_1[0xf4];
  this[0xf5] = param_1[0xf5];
  this[0xf6] = param_1[0xf6];
  this[0xf7] = param_1[0xf7];
  this[0xf8] = param_1[0xf8];
  this[0xf9] = param_1[0xf9];
  this[0xfa] = param_1[0xfa];
  this[0xfb] = param_1[0xfb];
  this[0xfc] = param_1[0xfc];
  this[0xfd] = param_1[0xfd];
  this[0xfe] = param_1[0xfe];
  this[0xff] = param_1[0xff];
  this[0x100] = param_1[0x100];
  this[0x101] = param_1[0x101];
  this[0x102] = param_1[0x102];
  this[0x103] = param_1[0x103];
  this[0x104] = param_1[0x104];
  this[0x105] = param_1[0x105];
  this[0x106] = param_1[0x106];
  this[0x107] = param_1[0x107];
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  this[0x10c] = param_1[0x10c];
  this[0x10d] = param_1[0x10d];
  this[0x10e] = param_1[0x10e];
  this[0x10f] = param_1[0x10f];
  this[0x110] = param_1[0x110];
  this[0x111] = param_1[0x111];
  this[0x112] = param_1[0x112];
  this[0x113] = param_1[0x113];
  this[0x114] = param_1[0x114];
  this[0x115] = param_1[0x115];
  this[0x116] = param_1[0x116];
  this[0x117] = param_1[0x117];
  this[0x118] = param_1[0x118];
  this[0x119] = param_1[0x119];
  this[0x11a] = param_1[0x11a];
  this[0x11b] = param_1[0x11b];
  this[0x11c] = param_1[0x11c];
  this[0x11d] = param_1[0x11d];
  this[0x11e] = param_1[0x11e];
  this[0x11f] = param_1[0x11f];
  this[0x120] = param_1[0x120];
  this[0x121] = param_1[0x121];
  this[0x122] = param_1[0x122];
  this[0x123] = param_1[0x123];
  this[0x124] = param_1[0x124];
  this[0x125] = param_1[0x125];
  this[0x126] = param_1[0x126];
  this[0x127] = param_1[0x127];
  this[0x128] = param_1[0x128];
  this[0x129] = param_1[0x129];
  this[0x12a] = param_1[0x12a];
  this[299] = param_1[299];
  this[300] = param_1[300];
  this[0x12d] = param_1[0x12d];
  this[0x12e] = param_1[0x12e];
  this[0x12f] = param_1[0x12f];
  this[0x130] = param_1[0x130];
  this[0x131] = param_1[0x131];
  this[0x132] = param_1[0x132];
  this[0x133] = param_1[0x133];
  this[0x134] = param_1[0x134];
  this[0x135] = param_1[0x135];
  this[0x136] = param_1[0x136];
  this[0x137] = param_1[0x137];
  this[0x138] = param_1[0x138];
  this[0x139] = param_1[0x139];
  this[0x13a] = param_1[0x13a];
  this[0x13b] = param_1[0x13b];
  this[0x13c] = param_1[0x13c];
  this[0x13d] = param_1[0x13d];
  this[0x13e] = param_1[0x13e];
  this[0x13f] = param_1[0x13f];
  this[0x140] = param_1[0x140];
  this[0x141] = param_1[0x141];
  this[0x142] = param_1[0x142];
  this[0x143] = param_1[0x143];
  this[0x144] = param_1[0x144];
  this[0x145] = param_1[0x145];
  this[0x146] = param_1[0x146];
  this[0x147] = param_1[0x147];
  this[0x148] = param_1[0x148];
  this[0x149] = param_1[0x149];
  this[0x14a] = param_1[0x14a];
  this[0x14b] = param_1[0x14b];
  this[0x14c] = param_1[0x14c];
  this[0x14d] = param_1[0x14d];
  this[0x14e] = param_1[0x14e];
  this[0x14f] = param_1[0x14f];
  this[0x150] = param_1[0x150];
  this[0x151] = param_1[0x151];
  this[0x152] = param_1[0x152];
  this[0x153] = param_1[0x153];
  this[0x154] = param_1[0x154];
  this[0x155] = param_1[0x155];
  this[0x156] = param_1[0x156];
  this[0x157] = param_1[0x157];
  this[0x158] = param_1[0x158];
  this[0x159] = param_1[0x159];
  this[0x15a] = param_1[0x15a];
  this[0x15b] = param_1[0x15b];
  this[0x15c] = param_1[0x15c];
  this[0x15d] = param_1[0x15d];
  this[0x15e] = param_1[0x15e];
  this[0x15f] = param_1[0x15f];
  this[0x160] = param_1[0x160];
  this[0x161] = param_1[0x161];
  this[0x162] = param_1[0x162];
  this[0x163] = param_1[0x163];
  this[0x164] = param_1[0x164];
  this[0x165] = param_1[0x165];
  this[0x166] = param_1[0x166];
  this[0x167] = param_1[0x167];
  this[0x168] = param_1[0x168];
  this[0x169] = param_1[0x169];
  this[0x16a] = param_1[0x16a];
  this[0x16b] = param_1[0x16b];
  this[0x16c] = param_1[0x16c];
  this[0x16d] = param_1[0x16d];
  this[0x16e] = param_1[0x16e];
  this[0x16f] = param_1[0x16f];
  this[0x170] = param_1[0x170];
  this[0x171] = param_1[0x171];
  this[0x172] = param_1[0x172];
  this[0x173] = param_1[0x173];
  this[0x174] = param_1[0x174];
  this[0x175] = param_1[0x175];
  this[0x176] = param_1[0x176];
  this[0x177] = param_1[0x177];
  this[0x178] = param_1[0x178];
  this[0x179] = param_1[0x179];
  this[0x17a] = param_1[0x17a];
  this[0x17b] = param_1[0x17b];
  this[0x17c] = param_1[0x17c];
  this[0x17d] = param_1[0x17d];
  this[0x17e] = param_1[0x17e];
  this[0x17f] = param_1[0x17f];
  this[0x180] = param_1[0x180];
  this[0x181] = param_1[0x181];
  this[0x182] = param_1[0x182];
  this[0x183] = param_1[0x183];
  this[0x184] = param_1[0x184];
  this[0x185] = param_1[0x185];
  this[0x186] = param_1[0x186];
  this[0x187] = param_1[0x187];
  *(undefined4 *)(this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  return this;
}



// public: __cdecl rage::sagActorManager::sagActorManager(class rage::sagActorManager && __ptr64)
// __ptr64

sagActorManager * __thiscall
rage::sagActorManager::sagActorManager(sagActorManager *this,sagActorManager *param_1)

{
                    // 0xb620  10  ??0sagActorManager@rage@@QEAA@$$QEAV01@@Z
                    // 0xb620  11  ??0sagActorManager@rage@@QEAA@AEBV01@@Z
                    // 0xb620  12  ??0sagActorManager@rage@@QEAA@XZ
  *(undefined ***)this = vftable;
  return this;
}



// public: virtual void __cdecl rage::sagActorManager::PostLoad(void) __ptr64

void __thiscall rage::sagActorManager::PostLoad(sagActorManager *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    // 0xb630  75  ?PostLoad@sagActorManager@rage@@UEAAXXZ
  local_58 = 0;
  local_68 = "rage::aGuidGeneral::sm_ManagerSlots";
  local_60 = 
  "48 8B 05 ? ? ? ? 0F B7 CA 48 03 C9 C1 EA 10 66 39 54 C8 ? 75 03 B0 01 C3 32 C0 C3 CC 48 89 5C 24 ?"
  ;
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// public: static struct rage::sagActor * __ptr64 __cdecl rage::sagActorManager::GetActor(unsigned
// int)

sagActor * __cdecl rage::sagActorManager::GetActor(uint param_1)

{
                    // 0xb690  50  ?GetActor@sagActorManager@rage@@SAPEAUsagActor@2@I@Z
  if (s_GeneralManagerSlots == (__uint64 *)0x0) {
    return (sagActor *)0x0;
  }
  return *(sagActor **)(*s_GeneralManagerSlots + (ulonglong)(ushort)param_1 * 0x10);
}



TypeDescriptor * FUN_18000b6b0(void)

{
  return &`public:_virtual_void___cdecl_rage::sagActorManager::PostLoad(void)___ptr64'::__l2::
          <lambda_1>::RTTI_Type_Descriptor;
}



void FUN_18000b6c0(undefined8 param_1,longlong param_2)

{
  rage::sagActorManager::s_GeneralManagerSlots =
       (__uint64 *)
       (*(longlong *)(param_2 + 0x10) + 7 + (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 3));
  return;
}



undefined8 * FUN_18000b6e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



// public: virtual void __cdecl rage::UIInput::PreLoad(void) __ptr64

void __thiscall rage::UIInput::PreLoad(UIInput *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    // 0xb6f0  79  ?PreLoad@UIInput@rage@@UEAAXXZ
  local_58 = 0;
  local_68 = "rage::UIInput::sm_DisableAllInputs";
  local_60 = "48 83 BB ? ? ? ? ? 74 5A";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: static void __cdecl rage::UIInput::DisableAllInputs(bool)

void __cdecl rage::UIInput::DisableAllInputs(bool param_1)

{
  LPVOID lpAddress;
  undefined1 auStack_38 [32];
  DWORD local_18 [2];
  ulonglong local_10;
  
                    // 0xb750  45  ?DisableAllInputs@UIInput@rage@@SAX_N@Z
  lpAddress = DAT_18001b298;
  local_10 = DAT_180019240 ^ (ulonglong)auStack_38;
  if (DAT_18001b298 != (LPVOID)0x0) {
    VirtualProtect(DAT_18001b298,1,0x40,local_18);
    *(bool *)lpAddress = param_1;
    VirtualProtect(lpAddress,1,local_18[0],local_18);
  }
  return;
}



TypeDescriptor * FUN_18000b7d0(void)

{
  return &`public:_virtual_void___cdecl_rage::UIInput::PreLoad(void)___ptr64'::__l2::<lambda_1>::
          RTTI_Type_Descriptor;
}



void FUN_18000b7e0(undefined8 param_1,longlong param_2)

{
  DAT_18001b298 = *(longlong *)(param_2 + 0x10) + -1;
  return;
}



undefined8 * FUN_18000b7f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



// public: struct rage::sagPlayer & __ptr64 __cdecl rage::sagPlayer::operator=(struct
// rage::sagPlayer const & __ptr64) __ptr64

sagPlayer * __thiscall rage::sagPlayer::operator=(sagPlayer *this,sagPlayer *param_1)

{
                    // 0xb800  34  ??4sagPlayer@rage@@QEAAAEAU01@AEBU01@@Z
  memcpy(this,param_1,0x600);
  return this;
}



// public: struct rage::sagPlayer & __ptr64 __cdecl rage::sagPlayer::operator=(struct
// rage::sagPlayer && __ptr64) __ptr64

sagPlayer * __thiscall rage::sagPlayer::operator=(sagPlayer *this,sagPlayer *param_1)

{
  sagPlayer *psVar1;
  sagPlayer *psVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  sagPlayer *psVar7;
  sagPlayer *psVar8;
  longlong lVar9;
  longlong lVar10;
  
                    // 0xb820  33  ??4sagPlayer@rage@@QEAAAEAU01@$$QEAU01@@Z
  if ((param_1 + 0x103 < this) || (this + 0x103 < param_1)) {
    lVar9 = 2;
    psVar7 = param_1;
    psVar8 = this;
    do {
      psVar1 = psVar8 + 0x80;
      uVar3 = *(undefined8 *)(psVar7 + 8);
      uVar4 = *(undefined8 *)(psVar7 + 0x10);
      uVar5 = *(undefined8 *)(psVar7 + 0x18);
      psVar2 = psVar7 + 0x80;
      *(undefined8 *)psVar8 = *(undefined8 *)psVar7;
      *(undefined8 *)(psVar8 + 8) = uVar3;
      uVar3 = *(undefined8 *)(psVar7 + 0x20);
      uVar6 = *(undefined8 *)(psVar7 + 0x28);
      *(undefined8 *)(psVar8 + 0x10) = uVar4;
      *(undefined8 *)(psVar8 + 0x18) = uVar5;
      uVar4 = *(undefined8 *)(psVar7 + 0x30);
      uVar5 = *(undefined8 *)(psVar7 + 0x38);
      *(undefined8 *)(psVar8 + 0x20) = uVar3;
      *(undefined8 *)(psVar8 + 0x28) = uVar6;
      uVar3 = *(undefined8 *)(psVar7 + 0x40);
      uVar6 = *(undefined8 *)(psVar7 + 0x48);
      *(undefined8 *)(psVar8 + 0x30) = uVar4;
      *(undefined8 *)(psVar8 + 0x38) = uVar5;
      uVar4 = *(undefined8 *)(psVar7 + 0x50);
      uVar5 = *(undefined8 *)(psVar7 + 0x58);
      *(undefined8 *)(psVar8 + 0x40) = uVar3;
      *(undefined8 *)(psVar8 + 0x48) = uVar6;
      uVar3 = *(undefined8 *)(psVar7 + 0x60);
      uVar6 = *(undefined8 *)(psVar7 + 0x68);
      *(undefined8 *)(psVar8 + 0x50) = uVar4;
      *(undefined8 *)(psVar8 + 0x58) = uVar5;
      uVar4 = *(undefined8 *)(psVar7 + 0x70);
      uVar5 = *(undefined8 *)(psVar7 + 0x78);
      *(undefined8 *)(psVar8 + 0x60) = uVar3;
      *(undefined8 *)(psVar8 + 0x68) = uVar6;
      *(undefined8 *)(psVar8 + 0x70) = uVar4;
      *(undefined8 *)(psVar8 + 0x78) = uVar5;
      lVar9 = lVar9 + -1;
      psVar7 = psVar2;
      psVar8 = psVar1;
    } while (lVar9 != 0);
    *(undefined4 *)psVar1 = *(undefined4 *)psVar2;
    lVar9 = (longlong)param_1 - (longlong)this;
  }
  else {
    lVar9 = (longlong)param_1 - (longlong)this;
    lVar10 = 0x104;
    psVar7 = this;
    do {
      *psVar7 = psVar7[lVar9];
      psVar7 = psVar7 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  psVar7 = this + 0x10c;
  *(undefined2 *)(this + 0x104) = *(undefined2 *)(param_1 + 0x104);
  lVar10 = 0x15a;
  *(undefined2 *)(this + 0x106) = *(undefined2 *)(param_1 + 0x106);
  *(undefined2 *)(this + 0x108) = *(undefined2 *)(param_1 + 0x108);
  *(undefined2 *)(this + 0x10a) = *(undefined2 *)(param_1 + 0x10a);
  do {
    *psVar7 = psVar7[lVar9];
    psVar7[1] = psVar7[lVar9 + 1];
    psVar7 = psVar7 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *(undefined4 *)(this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(this + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  this[0x3cc] = param_1[0x3cc];
  this[0x3cd] = param_1[0x3cd];
  this[0x3ce] = param_1[0x3ce];
  this[0x3cf] = param_1[0x3cf];
  this[0x3d0] = param_1[0x3d0];
  this[0x3d1] = param_1[0x3d1];
  this[0x3d2] = param_1[0x3d2];
  this[0x3d3] = param_1[0x3d3];
  *(undefined4 *)(this + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  this[0x3d8] = param_1[0x3d8];
  this[0x3d9] = param_1[0x3d9];
  this[0x3da] = param_1[0x3da];
  this[0x3db] = param_1[0x3db];
  this[0x3dc] = param_1[0x3dc];
  this[0x3dd] = param_1[0x3dd];
  this[0x3de] = param_1[0x3de];
  this[0x3df] = param_1[0x3df];
  this[0x3e0] = param_1[0x3e0];
  this[0x3e1] = param_1[0x3e1];
  this[0x3e2] = param_1[0x3e2];
  this[0x3e3] = param_1[0x3e3];
  this[0x3e4] = param_1[0x3e4];
  this[0x3e5] = param_1[0x3e5];
  this[0x3e6] = param_1[0x3e6];
  this[999] = param_1[999];
  this[1000] = param_1[1000];
  this[0x3e9] = param_1[0x3e9];
  this[0x3ea] = param_1[0x3ea];
  this[0x3eb] = param_1[0x3eb];
  this[0x3ec] = param_1[0x3ec];
  this[0x3ed] = param_1[0x3ed];
  this[0x3ee] = param_1[0x3ee];
  this[0x3ef] = param_1[0x3ef];
  this[0x3f0] = param_1[0x3f0];
  this[0x3f1] = param_1[0x3f1];
  this[0x3f2] = param_1[0x3f2];
  this[0x3f3] = param_1[0x3f3];
  this[0x3f4] = param_1[0x3f4];
  psVar7 = this + 0x418;
  lVar10 = 0x1d1;
  this[0x3f5] = param_1[0x3f5];
  this[0x3f6] = param_1[0x3f6];
  this[0x3f7] = param_1[0x3f7];
  this[0x3f8] = param_1[0x3f8];
  this[0x3f9] = param_1[0x3f9];
  this[0x3fa] = param_1[0x3fa];
  this[0x3fb] = param_1[0x3fb];
  this[0x3fc] = param_1[0x3fc];
  this[0x3fd] = param_1[0x3fd];
  this[0x3fe] = param_1[0x3fe];
  this[0x3ff] = param_1[0x3ff];
  this[0x400] = param_1[0x400];
  this[0x401] = param_1[0x401];
  this[0x402] = param_1[0x402];
  this[0x403] = param_1[0x403];
  this[0x404] = param_1[0x404];
  this[0x405] = param_1[0x405];
  this[0x406] = param_1[0x406];
  this[0x407] = param_1[0x407];
  this[0x408] = param_1[0x408];
  this[0x409] = param_1[0x409];
  this[0x40a] = param_1[0x40a];
  this[0x40b] = param_1[0x40b];
  this[0x40c] = param_1[0x40c];
  this[0x40d] = param_1[0x40d];
  this[0x40e] = param_1[0x40e];
  this[0x40f] = param_1[0x40f];
  *(undefined8 *)(this + 0x410) = *(undefined8 *)(param_1 + 0x410);
  do {
    *psVar7 = psVar7[lVar9];
    psVar7 = psVar7 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  this[0x5e9] = param_1[0x5e9];
  this[0x5ea] = param_1[0x5ea];
  this[0x5eb] = param_1[0x5eb];
  *(undefined4 *)(this + 0x5ec) = *(undefined4 *)(param_1 + 0x5ec);
  this[0x5f0] = param_1[0x5f0];
  this[0x5f1] = param_1[0x5f1];
  this[0x5f2] = param_1[0x5f2];
  this[0x5f3] = param_1[0x5f3];
  this[0x5f4] = param_1[0x5f4];
  this[0x5f5] = param_1[0x5f5];
  this[0x5f6] = param_1[0x5f6];
  this[0x5f7] = param_1[0x5f7];
  this[0x5f8] = param_1[0x5f8];
  this[0x5f9] = param_1[0x5f9];
  this[0x5fa] = param_1[0x5fa];
  this[0x5fb] = param_1[0x5fb];
  *(undefined4 *)(this + 0x5fc) = *(undefined4 *)(param_1 + 0x5fc);
  return this;
}



// public: unsigned int __cdecl rage::sagPlayer::GetPlayerGuid(void)const __ptr64

uint __thiscall rage::sagPlayer::GetPlayerGuid(sagPlayer *this)

{
                    // 0xbe20  60  ?GetPlayerGuid@sagPlayer@rage@@QEBAIXZ
  return *(uint *)(this + 0x5ec);
}



// public: struct rage::sagActor * __ptr64 __cdecl rage::sagPlayer::GetPlayerActor(void)const
// __ptr64

sagActor * __thiscall rage::sagPlayer::GetPlayerActor(sagPlayer *this)

{
                    // 0xbe30  59  ?GetPlayerActor@sagPlayer@rage@@QEBAPEAUsagActor@2@XZ
  if (sagActorManager::s_GeneralManagerSlots == (__uint64 *)0x0) {
    return (sagActor *)0x0;
  }
  return *(sagActor **)
          (*sagActorManager::s_GeneralManagerSlots + (ulonglong)*(ushort *)(this + 0x5ec) * 0x10);
}



// public: struct rage::unkStruct4 * __ptr64 __cdecl
// rage::sagPlayer::MaybeGetCurrentWeapon(void)const __ptr64

unkStruct4 * __thiscall rage::sagPlayer::MaybeGetCurrentWeapon(sagPlayer *this)

{
                    // 0xbe50  69  ?MaybeGetCurrentWeapon@sagPlayer@rage@@QEBAPEAUunkStruct4@2@XZ
  return *(unkStruct4 **)(this + 0x410);
}



// public: void __cdecl rage::sagPlayer::DisablePlayerControl(bool) __ptr64

void __thiscall rage::sagPlayer::DisablePlayerControl(sagPlayer *this,bool param_1)

{
                    // 0xbe60  47  ?DisablePlayerControl@sagPlayer@rage@@QEAAX_N@Z
  *(ushort *)(this + 0x104) = (ushort)param_1;
  *(ushort *)(this + 0x106) = (ushort)param_1;
  *(ushort *)(this + 0x108) = (ushort)param_1;
  *(ushort *)(this + 0x10a) = (ushort)param_1;
  return;
}



// public: __cdecl rage::sagPlayerMgr::sagPlayerMgr(class rage::sagPlayerMgr && __ptr64) __ptr64

sagPlayerMgr * __thiscall rage::sagPlayerMgr::sagPlayerMgr(sagPlayerMgr *this,sagPlayerMgr *param_1)

{
                    // 0xbe80  13  ??0sagPlayerMgr@rage@@QEAA@$$QEAV01@@Z
                    // 0xbe80  14  ??0sagPlayerMgr@rage@@QEAA@AEBV01@@Z
                    // 0xbe80  15  ??0sagPlayerMgr@rage@@QEAA@XZ
  *(undefined ***)this = vftable;
  return this;
}



// public: virtual void __cdecl rage::sagPlayerMgr::PostLoad(void) __ptr64

void __thiscall rage::sagPlayerMgr::PostLoad(sagPlayerMgr *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    // 0xbe90  76  ?PostLoad@sagPlayerMgr@rage@@UEAAXXZ
  local_58 = 0;
  local_68 = "rage::sagPlayer::sm_LocalPlayer";
  local_60 = "48 89 15 ? ? ? ? E9 ? ? ? ?";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// public: static struct rage::sagPlayer * __ptr64 __cdecl rage::sagPlayerMgr::GetLocalPlayer(void)

sagPlayer * __cdecl rage::sagPlayerMgr::GetLocalPlayer(void)

{
                    // 0xbef0  57  ?GetLocalPlayer@sagPlayerMgr@rage@@SAPEAUsagPlayer@2@XZ
  if (s_LocalPlayer == (sagPlayer **)0x0) {
    return (sagPlayer *)0x0;
  }
  return *s_LocalPlayer;
}



TypeDescriptor * FUN_18000bf10(void)

{
  return &`public:_virtual_void___cdecl_rage::sagPlayerMgr::PostLoad(void)___ptr64'::__l2::
          <lambda_1>::RTTI_Type_Descriptor;
}



void FUN_18000bf20(undefined8 param_1,longlong param_2)

{
  rage::sagPlayerMgr::s_LocalPlayer =
       (sagPlayer **)
       (*(longlong *)(param_2 + 0x10) + 7 + (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 3));
  return;
}



undefined8 * FUN_18000bf40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



// public: struct rage::gohBase * __ptr64 __cdecl rage::sagActor::GetGohObject(void)const __ptr64

gohBase * __thiscall rage::sagActor::GetGohObject(sagActor *this)

{
                    // 0xbf50  56  ?GetGohObject@sagActor@rage@@QEBAPEAUgohBase@2@XZ
  if (gohObjectManager::s_GohBaseManagerSlots == (__uint64 *)0x0) {
    return (gohBase *)0x0;
  }
  return *(gohBase **)
          (*gohObjectManager::s_GohBaseManagerSlots + (ulonglong)*(ushort *)(this + 0x188) * 0x10);
}



// public: bool __cdecl rage::sagActor::IsAlive(void)const __ptr64

bool __thiscall rage::sagActor::IsAlive(sagActor *this)

{
                    // 0xbf70  63  ?IsAlive@sagActor@rage@@QEBA_NXZ
  if ((*(longlong *)(this + 0x60) != 0) && (0.0 < *(float *)(*(longlong *)(this + 0x60) + 0x20))) {
    return true;
  }
  return false;
}



// public: bool __cdecl rage::sagActor::IsDrunk(void)const __ptr64

bool __thiscall rage::sagActor::IsDrunk(sagActor *this)

{
                    // 0xbf90  64  ?IsDrunk@sagActor@rage@@QEBA_NXZ
  if ((*(longlong *)(this + 0x60) != 0) && (*(char *)(*(longlong *)(this + 0x60) + 0x175) != '\0'))
  {
    return true;
  }
  return false;
}



void FUN_18000bfb0(longlong param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar4 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar4);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    FUN_18000f264(puVar2);
    puVar2 = puVar3;
  }
  FUN_18000f264(*(void **)(param_1 + 8));
  return;
}



// public: virtual void __cdecl rage::UIStringTable::PostLoad(void) __ptr64

void __thiscall rage::UIStringTable::PostLoad(UIStringTable *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    // 0xc060  71  ?PostLoad@UIStringTable@rage@@UEAAXXZ
  local_58 = 0;
  local_68 = "rage::UIStringTable::GetStringByHash";
  local_60 = "E8 ? ? ? ? 48 8B 0B 48 89 01 48 83 C4 20 5B C3";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,1);
  local_58 = 0;
  local_68 = "rage::UIStringTable::SetString";
  local_60 = "E8 ? ? ? ? 48 85 F6 74 25";
  local_50[0] = std::_Func_impl_no_alloc<>::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  if (scrThread::s_RegisterCommand != (_func_bool_void_ptr_uint__func_void_InfoBase_ptr_ptr *)0x0) {
    (*scrThread::s_RegisterCommand)((void *)0x0,0x5d425448,FUN_18000c230);
    if (scrThread::s_RegisterCommand != (_func_bool_void_ptr_uint__func_void_InfoBase_ptr_ptr *)0x0)
    {
      (*scrThread::s_RegisterCommand)((void *)0x0,0x9173f8fe,FUN_18000c2c0);
    }
  }
  return;
}



undefined8 FUN_18000c140(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  puVar2 = DAT_180019328;
  puVar1 = (undefined8 *)*DAT_180019328;
  while( true ) {
    if (puVar1 == puVar2) {
                    // WARNING: Could not recover jumptable at 0x00018000c18d. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar4 = (*DAT_18001b2a0)(param_1,param_2);
      return uVar4;
    }
    iVar3 = FUN_18000c490(puVar1[2]);
    if (iVar3 == param_2) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return puVar1[3];
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18000c1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28 [2];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180019240 ^ (ulonglong)auStack_48;
  uVar3 = param_1;
  local_18 = param_2;
  uVar1 = FUN_18000c680(param_1,(byte *)&local_18);
  if ((char)uVar1 != '\0') {
    plVar2 = FUN_18000c9b0(param_1,local_28,(byte *)&local_18);
    *(undefined8 *)(*plVar2 + 0x18) = param_3;
    return;
  }
  (*DAT_18001b2a8)(uVar3,param_2,param_3);
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18000c230(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)param_1[2];
  local_38 = ((undefined8 *)param_1[2])[1];
  puVar2 = param_1;
  uVar1 = FUN_18000c680(param_1,(byte *)&local_20);
  if ((char)uVar1 == '\0') {
    FUN_18000c740(puVar2,local_30,(byte *)&local_20,&local_38);
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 1;
    }
  }
  else if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = 0;
    return;
  }
  return;
}



void FUN_18000c2c0(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong local_18 [2];
  
  uVar8 = *(ulonglong *)param_1[2];
  local_18[0] = uVar8;
  uVar5 = FUN_18000c680(param_1,(byte *)local_18);
  plVar4 = DAT_180019328;
  if ((char)uVar5 == '\0') {
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
  }
  else {
    plVar7 = (longlong *)
             (((((((((uVar8 >> 8 & 0xff ^ (uVar8 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                     0x100000001b3 ^ uVar8 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar8 >> 0x18 & 0xff) *
                   0x100000001b3 ^ uVar8 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar8 >> 0x28 & 0xff) *
                 0x100000001b3 ^ uVar8 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar8 >> 0x38) *
               0x100000001b3 & DAT_180019350) * 0x10 + DAT_180019338);
    plVar1 = (longlong *)plVar7[1];
    if (plVar1 == DAT_180019328) {
LAB_18000c3b9:
      plVar6 = (longlong *)0x0;
    }
    else {
      uVar2 = plVar1[2];
      plVar6 = plVar1;
      while (uVar8 != uVar2) {
        if (plVar6 == (longlong *)*plVar7) goto LAB_18000c3b9;
        plVar6 = (longlong *)plVar6[1];
        uVar2 = plVar6[2];
      }
    }
    if (plVar6 != (longlong *)0x0) {
      if (plVar1 == plVar6) {
        if ((longlong *)*plVar7 == plVar6) {
          *plVar7 = (longlong)DAT_180019328;
          plVar7[1] = (longlong)plVar4;
        }
        else {
          plVar7[1] = plVar6[1];
        }
      }
      else if ((longlong *)*plVar7 == plVar6) {
        *plVar7 = *plVar6;
      }
      lVar3 = *plVar6;
      DAT_180019330 = DAT_180019330 + -1;
      *(longlong *)plVar6[1] = lVar3;
      *(longlong *)(lVar3 + 8) = plVar6[1];
      FUN_18000f264(plVar6);
    }
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 1;
      return;
    }
  }
  return;
}



void FUN_18000c430(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18000f264(puVar1);
    puVar1 = puVar2;
  }
  FUN_18000f264((void *)*param_1);
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined4 FUN_18000c490(undefined8 param_1)

{
  int iVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  ulonglong uVar7;
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
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_218;
  local_1ec = 0;
  memset(local_1dc,0,0x1c4);
  pcVar5 = (code *)0x0;
  local_1f0 = 0;
  local_1e0 = 0;
  local_1f8 = (undefined8 *)local_118;
  local_1e8 = (undefined8 *)local_118;
  memset(local_118,0,0x100);
  *(undefined8 *)((longlong)local_118 + (ulonglong)local_1f0 * 8) = param_1;
  local_1f0 = local_1f0 + 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_18001b2b0) && (FUN_18000f340(&DAT_18001b2b0), DAT_18001b2b0 == -1)) {
    uVar3 = 0x84415e28 % (ulonglong)(uint)rage::scrThread::s_CommandsRegistration[1];
    uVar7 = 0x84415e28;
    _Var2 = *rage::scrThread::s_CommandsRegistration;
    iVar4 = (int)uVar3;
    iVar1 = *(int *)(_Var2 + (ulonglong)(uint)(iVar4 * 4) * 4);
    do {
      if (iVar1 == -0x7bbea1d8) {
        pcVar5 = *(code **)(_Var2 + 8 + (ulonglong)(uint)(iVar4 * 2) * 8);
        goto LAB_18000c5b1;
      }
      uVar6 = (int)(uVar7 >> 1) + 1;
      uVar7 = (ulonglong)uVar6;
      uVar3 = (ulonglong)(uVar6 + (int)uVar3) %
              (ulonglong)(uint)rage::scrThread::s_CommandsRegistration[1];
      iVar4 = (int)uVar3;
      iVar1 = *(int *)(_Var2 + (ulonglong)(uint)(iVar4 * 4) * 4);
    } while (iVar1 != 0);
    Log::Print(3,(char *)0x0,"Failed to find native with hash 0x%08X");
LAB_18000c5b1:
    DAT_18001b2b8 = pcVar5;
    _Init_thread_footer(&DAT_18001b2b0);
  }
  uVar6 = local_1e0;
  if (DAT_18001b2b8 != (code *)0x0) {
    (*DAT_18001b2b8)(&local_1f8);
    uVar6 = local_1e0;
  }
  while (uVar6 != 0) {
    local_1e0 = uVar6 - 1;
    *(undefined4 *)alStack_1d8[local_1e0] =
         *(undefined4 *)((longlong)&local_1f8 + (ulonglong)((uVar6 + 3) * 0x10));
    *(undefined4 *)(alStack_1d8[local_1e0] + 4) = auStack_1b4[(ulonglong)local_1e0 * 4];
    *(undefined4 *)(alStack_1d8[local_1e0] + 8) = auStack_1b4[(ulonglong)local_1e0 * 4 + 1];
    uVar6 = local_1e0;
  }
  return local_118[0];
}



undefined8 FUN_18000c680(undefined8 param_1,byte *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           ((DAT_180019350 &
            (((((((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)param_2[1]) * 0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^
                (ulonglong)param_2[3]) * 0x100000001b3 ^ (ulonglong)param_2[4]) * 0x100000001b3 ^
              (ulonglong)param_2[5]) * 0x100000001b3 ^ (ulonglong)param_2[6]) * 0x100000001b3 ^
            (ulonglong)param_2[7]) * 0x100000001b3) * 0x10 + DAT_180019338);
  lVar1 = plVar2[1];
  if (lVar1 != DAT_180019328) {
    if (*(longlong *)param_2 == *(longlong *)(lVar1 + 0x10)) goto LAB_18000c738;
    while (lVar1 != *plVar2) {
      lVar1 = *(longlong *)(lVar1 + 8);
      if (*(longlong *)param_2 == *(longlong *)(lVar1 + 0x10)) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0);
      }
    }
  }
  lVar1 = 0;
LAB_18000c738:
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18000c740(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  uVar6 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar5 = *(undefined8 **)(DAT_180019338 + 8 + (DAT_180019350 & uVar6) * 0x10);
  puVar7 = DAT_180019328;
  if (puVar5 != DAT_180019328) {
    lVar1 = puVar5[2];
    puVar7 = puVar5;
    while( true ) {
      if (*(longlong *)param_3 == lVar1) {
        *param_2 = puVar7;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar7 == *(undefined8 **)(DAT_180019338 + (DAT_180019350 & uVar6) * 0x10)) break;
      puVar7 = (undefined8 *)puVar7[1];
      lVar1 = puVar7[2];
    }
  }
  if (DAT_180019330 == 0x7ffffffffffffff) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar4 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar4)();
    return puVar5;
  }
  puVar5 = (undefined8 *)FUN_18000eeb0(0x20);
  puVar5[2] = *(undefined8 *)param_3;
  puVar5[3] = *param_4;
  if (_DAT_180019320 < (float)(DAT_180019330 + 1) / (float)DAT_180019358) {
    FUN_18000cc60();
    puVar2 = *(undefined8 **)(DAT_180019338 + 8 + (DAT_180019350 & uVar6) * 0x10);
    puVar7 = DAT_180019328;
    if (puVar2 != DAT_180019328) {
      lVar1 = puVar2[2];
      puVar7 = puVar2;
      while (puVar5[2] != lVar1) {
        if (puVar7 == *(undefined8 **)(DAT_180019338 + (DAT_180019350 & uVar6) * 0x10))
        goto LAB_18000c93b;
        puVar7 = (undefined8 *)puVar7[1];
        lVar1 = puVar7[2];
      }
      puVar7 = (undefined8 *)*puVar7;
    }
  }
LAB_18000c93b:
  puVar2 = (undefined8 *)puVar7[1];
  DAT_180019330 = DAT_180019330 + 1;
  *puVar5 = puVar7;
  puVar5[1] = puVar2;
  *puVar2 = puVar5;
  puVar7[1] = puVar5;
  lVar1 = DAT_180019338;
  uVar6 = DAT_180019350 & uVar6;
  puVar3 = *(undefined8 **)(DAT_180019338 + uVar6 * 0x10);
  if (puVar3 == DAT_180019328) {
    *(undefined8 **)(DAT_180019338 + uVar6 * 0x10) = puVar5;
  }
  else {
    if (puVar3 == puVar7) {
      *(undefined8 **)(DAT_180019338 + uVar6 * 0x10) = puVar5;
      goto LAB_18000c99a;
    }
    if (*(undefined8 **)(DAT_180019338 + 8 + uVar6 * 0x10) != puVar2) goto LAB_18000c99a;
  }
  *(undefined8 **)(lVar1 + 8 + uVar6 * 0x10) = puVar5;
LAB_18000c99a:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18000c9b0(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar5 = *(undefined8 **)(DAT_180019338 + 8 + (DAT_180019350 & uVar7) * 0x10);
  puVar6 = DAT_180019328;
  if (puVar5 != DAT_180019328) {
    lVar2 = puVar5[2];
    while( true ) {
      if (*(longlong *)param_3 == lVar2) {
        *param_2 = puVar5;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      puVar6 = puVar5;
      if (puVar5 == *(undefined8 **)(DAT_180019338 + (DAT_180019350 & uVar7) * 0x10)) break;
      puVar5 = (undefined8 *)puVar5[1];
      lVar2 = puVar5[2];
    }
  }
  if (DAT_180019330 == 0x7ffffffffffffff) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar4 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar4)();
    return puVar5;
  }
  puVar5 = (undefined8 *)FUN_18000eeb0(0x20);
  puVar5[2] = *(undefined8 *)param_3;
  puVar5[3] = 0;
  if (_DAT_180019320 < (float)(DAT_180019330 + 1) / (float)DAT_180019358) {
    FUN_18000cc60();
    puVar1 = *(undefined8 **)(DAT_180019338 + 8 + (DAT_180019350 & uVar7) * 0x10);
    puVar6 = DAT_180019328;
    if (puVar1 != DAT_180019328) {
      lVar2 = puVar1[2];
      while (puVar5[2] != lVar2) {
        puVar6 = puVar1;
        if (puVar1 == *(undefined8 **)(DAT_180019338 + (DAT_180019350 & uVar7) * 0x10))
        goto LAB_18000cbc9;
        puVar1 = (undefined8 *)puVar1[1];
        lVar2 = puVar1[2];
      }
      puVar6 = (undefined8 *)*puVar1;
    }
  }
LAB_18000cbc9:
  puVar1 = (undefined8 *)puVar6[1];
  DAT_180019330 = DAT_180019330 + 1;
  *puVar5 = puVar6;
  puVar5[1] = puVar1;
  *puVar1 = puVar5;
  puVar6[1] = puVar5;
  lVar2 = DAT_180019338;
  uVar7 = DAT_180019350 & uVar7;
  puVar3 = *(undefined8 **)(DAT_180019338 + uVar7 * 0x10);
  if (puVar3 == DAT_180019328) {
    *(undefined8 **)(DAT_180019338 + uVar7 * 0x10) = puVar5;
  }
  else {
    if (puVar3 == puVar6) {
      *(undefined8 **)(DAT_180019338 + uVar7 * 0x10) = puVar5;
      goto LAB_18000cc2a;
    }
    if (*(undefined8 **)(DAT_180019338 + 8 + uVar7 * 0x10) != puVar1) goto LAB_18000cc2a;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar5;
LAB_18000cc2a:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_18000cc60(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = DAT_180019358;
  fVar5 = ceilf((float)(DAT_180019330 + 1) / _DAT_180019320);
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
  FUN_18000cd10(uVar3,uVar4);
  return;
}



void FUN_18000cd10(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  plVar8 = DAT_180019328;
  for (lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar10 & 0x3f)) < param_2) {
    std::_Xlength_error("invalid hash bucket count");
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = param_2 - 1 | 1;
  lVar10 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  lVar10 = 1L << ((char)lVar10 + 1U & 0x3f);
  FUN_1800046a0((ulonglong *)&DAT_180019338,lVar10 * 2,DAT_180019328);
  DAT_180019350 = lVar10 - 1;
  DAT_180019358 = lVar10;
  plVar7 = (longlong *)*DAT_180019328;
joined_r0x00018000cd92:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          return;
        }
        plVar1 = (longlong *)*plVar7;
        puVar11 = (undefined8 *)
                  (((((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180019350)
                   * 0x10 + DAT_180019338);
        if ((longlong *)*puVar11 != plVar8) break;
        *puVar11 = plVar7;
        puVar11[1] = plVar7;
        plVar7 = plVar1;
      }
      plVar2 = (longlong *)puVar11[1];
      if (plVar7[2] != plVar2[2]) break;
      plVar2 = (longlong *)*plVar2;
      if (plVar2 != plVar7) {
        puVar3 = (undefined8 *)plVar7[1];
        *puVar3 = plVar1;
        puVar4 = (undefined8 *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar7;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar7[1] = (longlong)puVar5;
      }
      puVar11[1] = plVar7;
      plVar7 = plVar1;
    }
    do {
      if ((longlong *)*puVar11 == plVar2) {
        puVar3 = (undefined8 *)plVar7[1];
        *puVar3 = plVar1;
        puVar4 = (undefined8 *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar7;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar7[1] = (longlong)puVar5;
        *puVar11 = plVar7;
        plVar7 = plVar1;
        goto joined_r0x00018000cd92;
      }
      plVar2 = (longlong *)plVar2[1];
    } while (plVar7[2] != plVar2[2]);
    lVar10 = *plVar2;
    puVar11 = (undefined8 *)plVar7[1];
    *puVar11 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    *plVar2 = lVar10;
    puVar3 = *(undefined8 **)(lVar10 + 8);
    *puVar3 = plVar7;
    *(longlong **)(lVar10 + 8) = plVar2;
    plVar1[1] = (longlong)puVar11;
    plVar7[1] = (longlong)puVar3;
    plVar7 = plVar1;
  } while( true );
}



TypeDescriptor * FUN_18000cef0(void)

{
  return &`public:_virtual_void___cdecl_rage::UIStringTable::PostLoad(void)___ptr64'::__l2::
          <lambda_2>::RTTI_Type_Descriptor;
}



void FUN_18000cf00(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  piVar3 = (int *)(*(longlong *)(param_2 + 0x10) + 1);
  iVar2 = *piVar3;
  FUN_18000d8f4();
  uVar1 = FUN_18000d740((undefined8 *)((longlong)piVar3 + (longlong)iVar2 + 4),FUN_18000c1b0,
                        &DAT_18001b2a8);
  if (uVar1 == 0) {
    iVar2 = FUN_18000d8e8((longlong)piVar3 + (longlong)iVar2 + 4);
    if (iVar2 == 0) {
      return;
    }
    pcVar4 = "Failed to enable hook \'%s\'";
  }
  else {
    pcVar4 = "Failed to create hook \'%s\'";
  }
                    // WARNING: Could not recover jumptable at 0x00018000cf63. Too many branches
                    // WARNING: Treating indirect jump as call
  Log::Print(3,(char *)0x0,pcVar4);
  return;
}



undefined8 * FUN_18000cf70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



TypeDescriptor * FUN_18000cf80(void)

{
  return &`public:_virtual_void___cdecl_rage::UIStringTable::PostLoad(void)___ptr64'::__l2::
          <lambda_1>::RTTI_Type_Descriptor;
}



void FUN_18000cf90(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  piVar3 = (int *)(*(longlong *)(param_2 + 0x10) + 1);
  iVar2 = *piVar3;
  FUN_18000d8f4();
  uVar1 = FUN_18000d740((undefined8 *)((longlong)piVar3 + (longlong)iVar2 + 4),FUN_18000c140,
                        &DAT_18001b2a0);
  if (uVar1 == 0) {
    iVar2 = FUN_18000d8e8((longlong)piVar3 + (longlong)iVar2 + 4);
    if (iVar2 == 0) {
      return;
    }
    pcVar4 = "Failed to enable hook \'%s\'";
  }
  else {
    pcVar4 = "Failed to create hook \'%s\'";
  }
                    // WARNING: Could not recover jumptable at 0x00018000cff3. Too many branches
                    // WARNING: Treating indirect jump as call
  Log::Print(3,(char *)0x0,pcVar4);
  return;
}



undefined8 * FUN_18000d000(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  return param_2;
}



LPVOID FUN_18000d010(void)

{
  LPVOID pvVar1;
  ulonglong uVar2;
  
  if (DAT_18001b2d0 == (LPVOID)0x0) {
    DAT_18001b2d8 = 0x20;
    DAT_18001b2d0 = HeapAlloc(DAT_18001a9e8,0,0x700);
    if (DAT_18001b2d0 == (LPVOID)0x0) {
      return (LPVOID)0x0;
    }
  }
  else if (DAT_18001b2d8 <= DAT_18001b2dc) {
    pvVar1 = HeapReAlloc(DAT_18001a9e8,0,DAT_18001b2d0,(ulonglong)(DAT_18001b2d8 * 2) * 0x38);
    if (pvVar1 == (LPVOID)0x0) {
      return (LPVOID)0x0;
    }
    DAT_18001b2d8 = DAT_18001b2d8 * 2;
    DAT_18001b2d0 = pvVar1;
  }
  uVar2 = (ulonglong)DAT_18001b2dc;
  DAT_18001b2dc = DAT_18001b2dc + 1;
  return (LPVOID)(uVar2 * 0x38 + (longlong)DAT_18001b2d0);
}



void FUN_18000d0b4(uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong lVar6;
  
  pvVar4 = DAT_18001b2d0;
  if (param_1 < DAT_18001b2dc - 1) {
    lVar6 = (ulonglong)(DAT_18001b2dc - 1) * 0x38;
    lVar5 = (ulonglong)param_1 * 0x38;
    uVar3 = ((undefined8 *)(lVar6 + (longlong)DAT_18001b2d0))[1];
    puVar1 = (undefined8 *)(lVar5 + (longlong)DAT_18001b2d0);
    *puVar1 = *(undefined8 *)(lVar6 + (longlong)DAT_18001b2d0);
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)pvVar4);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(lVar5 + 0x10 + (longlong)pvVar4);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar1 = (undefined8 *)(lVar6 + 0x20 + (longlong)pvVar4);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(lVar5 + 0x20 + (longlong)pvVar4);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    *(undefined8 *)(lVar5 + 0x30 + (longlong)pvVar4) =
         *(undefined8 *)(lVar6 + 0x30 + (longlong)pvVar4);
  }
  DAT_18001b2dc = DAT_18001b2dc - 1;
  if ((0x1f < DAT_18001b2d8 >> 1) && (DAT_18001b2dc <= DAT_18001b2d8 >> 1)) {
    pvVar4 = HeapReAlloc(DAT_18001a9e8,0,DAT_18001b2d0,(ulonglong)(DAT_18001b2d8 >> 1) * 0x38);
    if (pvVar4 != (LPVOID)0x0) {
      DAT_18001b2d8 = DAT_18001b2d8 >> 1;
      DAT_18001b2d0 = pvVar4;
    }
  }
  return;
}



ulonglong FUN_18000d158(uint param_1)

{
  ulonglong uVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong local_18 [2];
  
  uVar4 = 0;
  uVar3 = 0;
  if (DAT_18001b2dc != 0) {
    pbVar2 = (byte *)(DAT_18001b2d0 + 0x20);
    do {
      if ((*pbVar2 >> 1 & 1) != param_1) {
        if (uVar3 == 0xffffffff) {
          return 0;
        }
        FUN_18000d44c(local_18,0xffffffff,(uint)(param_1 != 0));
        uVar5 = DAT_18001b2dc;
        goto LAB_18000d1f4;
      }
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 0x38;
    } while (uVar3 < DAT_18001b2dc);
  }
  return 0;
LAB_18000d1f4:
  if (uVar5 <= uVar3) {
LAB_18000d1f9:
    FUN_18000da28(local_18);
    return uVar4;
  }
  if ((*(byte *)((ulonglong)uVar3 * 0x38 + 0x20 + DAT_18001b2d0) >> 1 & 1) != param_1) {
    uVar1 = FUN_18000d2f8((ulonglong)uVar3,param_1);
    uVar4 = uVar1 & 0xffffffff;
    uVar5 = DAT_18001b2dc;
    if ((int)uVar1 != 0) goto LAB_18000d1f9;
  }
  uVar3 = uVar3 + 1;
  goto LAB_18000d1f4;
}



ulonglong FUN_18000d218(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong local_18 [2];
  
  FUN_18000d40c();
  uVar3 = 0;
  if (DAT_18001a9e8 == 0) {
    uVar1 = 2;
  }
  else if (param_1 == 0) {
    uVar1 = FUN_18000d158(param_2);
    uVar1 = uVar1 & 0xffffffff;
  }
  else {
    plVar2 = DAT_18001b2d0;
    if (DAT_18001b2dc != 0) {
      do {
        if (param_1 == *plVar2) goto LAB_18000d282;
        uVar3 = uVar3 + 1;
        plVar2 = plVar2 + 7;
      } while (uVar3 < DAT_18001b2dc);
    }
    uVar3 = 0xffffffff;
LAB_18000d282:
    if (uVar3 == 0xffffffff) {
      uVar1 = 4;
    }
    else if ((*(byte *)(DAT_18001b2d0 + (ulonglong)uVar3 * 7 + 4) >> 1 & 1) == param_2) {
      uVar1 = (ulonglong)(6 - (param_2 != 0));
    }
    else {
      FUN_18000d44c(local_18,uVar3,1);
      uVar1 = FUN_18000d2f8((ulonglong)uVar3,param_2);
      uVar1 = uVar1 & 0xffffffff;
      FUN_18000da28(local_18);
    }
  }
  LOCK();
  DAT_18001a9e0 = 0;
  UNLOCK();
  return uVar1;
}



undefined8 FUN_18000d2f8(ulonglong param_1,int param_2)

{
  SIZE_T dwSize;
  undefined4 *puVar1;
  BOOL BVar2;
  undefined8 uVar3;
  HANDLE hProcess;
  undefined4 *lpAddress;
  undefined8 *puVar4;
  undefined4 *lpAddress_00;
  byte bVar5;
  DWORD local_res8 [2];
  
  puVar4 = (undefined8 *)((param_1 & 0xffffffff) * 0x38 + DAT_18001b2d0);
  puVar1 = (undefined4 *)*puVar4;
  bVar5 = *(byte *)(puVar4 + 4) & 1;
  lpAddress_00 = puVar1;
  if (bVar5 != 0) {
    lpAddress_00 = (undefined4 *)((longlong)puVar1 + -5);
  }
  lpAddress = (undefined4 *)((longlong)puVar1 + -5);
  if (bVar5 == 0) {
    lpAddress = puVar1;
  }
  dwSize = (ulonglong)bVar5 * 2 + 5;
  BVar2 = VirtualProtect(lpAddress,dwSize,0x40,local_res8);
  if (BVar2 == 0) {
    uVar3 = 10;
  }
  else {
    if (param_2 == 0) {
      bVar5 = *(byte *)(puVar4 + 4);
      *lpAddress_00 = *(undefined4 *)(puVar4 + 3);
      if ((bVar5 & 1) == 0) {
        *(undefined1 *)(lpAddress_00 + 1) = *(undefined1 *)((longlong)puVar4 + 0x1c);
      }
      else {
        *(undefined2 *)(lpAddress_00 + 1) = *(undefined2 *)((longlong)puVar4 + 0x1c);
        *(undefined1 *)((longlong)lpAddress_00 + 6) = *(undefined1 *)((longlong)puVar4 + 0x1e);
      }
    }
    else {
      *(undefined1 *)lpAddress_00 = 0xe9;
      *(int *)((longlong)lpAddress_00 + 1) = (*(int *)(puVar4 + 1) - (int)lpAddress_00) + -5;
      if ((*(byte *)(puVar4 + 4) & 1) != 0) {
        *(undefined2 *)*puVar4 = 0xf9eb;
      }
    }
    VirtualProtect(lpAddress_00,dwSize,local_res8[0],local_res8);
    hProcess = GetCurrentProcess();
    FlushInstructionCache(hProcess,lpAddress_00,dwSize);
    *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) & 0xfd;
    bVar5 = (byte)param_2 & 1;
    *(byte *)(puVar4 + 4) = bVar5 * '\x02' | *(byte *)(puVar4 + 4) & 0xfb | bVar5 << 2;
    uVar3 = 0;
  }
  return uVar3;
}



int FUN_18000d40c(void)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar2 = 0;
  while( true ) {
    LOCK();
    bVar3 = DAT_18001a9e0 == 0;
    iVar1 = DAT_18001a9e0;
    if (bVar3) {
      DAT_18001a9e0 = 1;
      iVar1 = 0;
    }
    UNLOCK();
    if (bVar3) break;
    Sleep((uint)(0x1f < uVar2));
    uVar2 = uVar2 + 1;
  }
  return iVar1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_18000d44c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  HANDLE pvVar4;
  LPVOID lpMem;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  DWORD64 DVar8;
  DWORD64 *pDVar9;
  ulonglong uVar10;
  uint uVar11;
  DWORD64 DVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_548 [32];
  uint local_528 [2];
  DWORD local_520;
  DWORD local_51c;
  _CONTEXT local_508;
  ulonglong local_38;
  
  local_38 = DAT_180019240 ^ (ulonglong)auStack_548;
  uVar10 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pvVar4 = (HANDLE)CreateToolhelp32Snapshot(4);
  if (pvVar4 != (HANDLE)0xffffffffffffffff) {
    local_528[0] = 0x1c;
    iVar1 = Thread32First(pvVar4,local_528);
    while (iVar1 != 0) {
      if (((0xf < local_528[0]) && (DVar2 = GetCurrentProcessId(), local_51c == DVar2)) &&
         (DVar2 = GetCurrentThreadId(), local_520 != DVar2)) {
        lpMem = (LPVOID)*param_1;
        if (lpMem == (LPVOID)0x0) {
          *(undefined4 *)(param_1 + 1) = 0x80;
          lpMem = HeapAlloc(DAT_18001a9e8,0,0x200);
          *param_1 = (longlong)lpMem;
          if (lpMem == (LPVOID)0x0) break;
        }
        else if (*(uint *)(param_1 + 1) <= *(uint *)((longlong)param_1 + 0xc)) {
          lpMem = HeapReAlloc(DAT_18001a9e8,0,lpMem,(ulonglong)(*(uint *)(param_1 + 1) * 2) << 2);
          if (lpMem == (LPVOID)0x0) break;
          *param_1 = (longlong)lpMem;
          *(int *)(param_1 + 1) = (int)param_1[1] * 2;
        }
        *(DWORD *)((longlong)lpMem + (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 4) = local_520;
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
      }
      local_528[0] = 0x1c;
      iVar1 = Thread32Next(pvVar4,local_528);
    }
    CloseHandle(pvVar4);
  }
  if ((*param_1 != 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    do {
      uVar14 = 0;
      pvVar4 = OpenThread(0x5a,0,*(DWORD *)(*param_1 + uVar10 * 4));
      if (pvVar4 != (HANDLE)0x0) {
        SuspendThread(pvVar4);
        local_508.ContextFlags = 0x100001;
        BVar3 = GetThreadContext(pvVar4,&local_508);
        if (BVar3 != 0) {
          uVar11 = DAT_18001b2dc;
          if (param_2 != 0xffffffff) {
            uVar11 = param_2 + 1;
            uVar14 = (ulonglong)param_2;
          }
          if ((uint)uVar14 < uVar11) {
            lVar13 = uVar14 * 0x38;
            uVar14 = (ulonglong)(uVar11 - (uint)uVar14);
            DVar12 = local_508.Rip;
            do {
              pDVar9 = (DWORD64 *)(DAT_18001b2d0 + lVar13);
              if (param_3 == 0) {
                bVar5 = 0;
              }
              else if (param_3 == 1) {
                bVar5 = 1;
              }
              else {
                bVar5 = (byte)pDVar9[4] >> 2 & 1;
              }
              if (((byte)pDVar9[4] >> 1 & 1) != bVar5) {
                if (bVar5 == 0) {
                  if ((((byte)pDVar9[4] & 1) == 0) || (DVar8 = *pDVar9, DVar12 != DVar8 - 5)) {
                    uVar7 = 0;
                    uVar11 = *(uint *)((longlong)pDVar9 + 0x24) & 0xf;
                    if (uVar11 != 0) {
                      do {
                        if (DVar12 == (ulonglong)*(byte *)((longlong)pDVar9 + uVar7 + 0x30) +
                                      pDVar9[2]) {
                          DVar8 = (ulonglong)*(byte *)(uVar7 + 0x28 + (longlong)pDVar9) + *pDVar9;
                          goto LAB_18000d66f;
                        }
                        uVar6 = (int)uVar7 + 1;
                        uVar7 = (ulonglong)uVar6;
                      } while (uVar6 < uVar11);
                    }
                    if (DVar12 != pDVar9[1]) goto LAB_18000d66d;
                    DVar8 = *pDVar9;
                  }
                }
                else {
                  uVar7 = 0;
                  uVar11 = *(uint *)((longlong)pDVar9 + 0x24) & 0xf;
                  if (uVar11 != 0) {
                    do {
                      if (DVar12 == (ulonglong)*(byte *)((longlong)pDVar9 + uVar7 + 0x28) + *pDVar9)
                      {
                        DVar8 = (ulonglong)*(byte *)(uVar7 + 0x30 + (longlong)pDVar9) + pDVar9[2];
                        goto LAB_18000d66f;
                      }
                      uVar6 = (int)uVar7 + 1;
                      uVar7 = (ulonglong)uVar6;
                    } while (uVar6 < uVar11);
                  }
LAB_18000d66d:
                  DVar8 = 0;
                }
LAB_18000d66f:
                if (DVar8 != 0) {
                  local_508.Rip = DVar8;
                  SetThreadContext(pvVar4,&local_508);
                  DVar12 = local_508.Rip;
                }
              }
              lVar13 = lVar13 + 0x38;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
        CloseHandle(pvVar4);
      }
      uVar11 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar11;
    } while (uVar11 < *(uint *)((longlong)param_1 + 0xc));
  }
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

uint FUN_18000d740(undefined8 *param_1,LPCVOID param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  LPCVOID local_70;
  undefined8 *local_68;
  undefined8 local_60;
  int local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_180019240 ^ (ulonglong)auStack_98;
  FUN_18000d40c();
  if (DAT_18001a9e8 == 0) {
    uVar1 = 2;
  }
  else {
    uVar2 = FUN_18000dd30(param_1);
    if (((int)uVar2 == 0) || (uVar2 = FUN_18000dd30(param_2), (int)uVar2 == 0)) {
      uVar1 = 7;
    }
    else {
      plVar5 = DAT_18001b2d0;
      uVar1 = 0;
      if (DAT_18001b2dc != 0) {
        do {
          if (param_1 == (undefined8 *)*plVar5) goto LAB_18000d7c8;
          uVar1 = uVar1 + 1;
          plVar5 = plVar5 + 7;
        } while (uVar1 < DAT_18001b2dc);
      }
      uVar1 = 0xffffffff;
LAB_18000d7c8:
      if (uVar1 == 0xffffffff) {
        puVar3 = (undefined8 *)FUN_18000daa0(param_1);
        if (puVar3 == (undefined8 *)0x0) {
          uVar1 = 9;
        }
        else {
          local_78 = param_1;
          local_70 = param_2;
          local_68 = puVar3;
          uVar2 = FUN_18000dd64((ulonglong *)&local_78);
          if ((int)uVar2 == 0) {
            uVar1 = 8;
          }
          else {
            puVar4 = FUN_18000d010();
            if (puVar4 != (undefined8 *)0x0) {
              *puVar4 = local_78;
              puVar4[1] = local_60;
              puVar4[2] = local_68;
              *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) & 0xf8 | (byte)local_58 & 1;
              *(uint *)((longlong)puVar4 + 0x24) =
                   *(uint *)((longlong)puVar4 + 0x24) ^
                   (*(uint *)((longlong)puVar4 + 0x24) ^ local_54) & 0xf;
              puVar4[5] = local_50;
              puVar4[6] = local_48;
              if (local_58 == 0) {
                *(undefined4 *)(puVar4 + 3) = *(undefined4 *)param_1;
                *(undefined1 *)((longlong)puVar4 + 0x1c) = *(undefined1 *)((longlong)param_1 + 4);
              }
              else {
                *(undefined4 *)(puVar4 + 3) = *(undefined4 *)((longlong)param_1 + -5);
                *(undefined2 *)((longlong)puVar4 + 0x1c) = *(undefined2 *)((longlong)param_1 + -1);
                *(undefined1 *)((longlong)puVar4 + 0x1e) = *(undefined1 *)((longlong)param_1 + 1);
              }
              uVar1 = 0;
              if (param_3 != (undefined8 *)0x0) {
                *param_3 = puVar4[2];
                uVar1 = 0;
              }
              goto LAB_18000d8bd;
            }
            uVar1 = 9;
          }
          FUN_18000dac4(puVar3);
        }
      }
      else {
        uVar1 = 3;
      }
    }
  }
LAB_18000d8bd:
  LOCK();
  DAT_18001a9e0 = 0;
  UNLOCK();
  return uVar1;
}



void FUN_18000d8e0(longlong param_1)

{
  FUN_18000d218(param_1,0);
  return;
}



void FUN_18000d8e8(longlong param_1)

{
  FUN_18000d218(param_1,1);
  return;
}



undefined8 FUN_18000d8f4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_18000d40c();
  if (DAT_18001a9e8 == (HANDLE)0x0) {
    DAT_18001a9e8 = HeapCreate(0,0,0);
    if (DAT_18001a9e8 == (HANDLE)0x0) {
      uVar1 = 9;
    }
    else {
      FUN_18000dd2c();
    }
  }
  else {
    uVar1 = 1;
  }
  LOCK();
  DAT_18001a9e0 = 0;
  UNLOCK();
  return uVar1;
}



ulonglong FUN_18000d950(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong local_18 [2];
  
  uVar3 = 0;
  FUN_18000d40c();
  if (DAT_18001a9e8 == 0) {
    uVar3 = 2;
  }
  else {
    plVar1 = DAT_18001b2d0;
    uVar2 = uVar3;
    if (DAT_18001b2dc != 0) {
      do {
        uVar4 = (uint)uVar2;
        if (param_1 == *plVar1) goto LAB_18000d9a9;
        plVar1 = plVar1 + 7;
        uVar2 = (ulonglong)(uVar4 + 1);
      } while (uVar4 + 1 < DAT_18001b2dc);
    }
    uVar4 = 0xffffffff;
LAB_18000d9a9:
    if (uVar4 == 0xffffffff) {
      uVar3 = 4;
    }
    else {
      if ((*(byte *)(DAT_18001b2d0 + (ulonglong)uVar4 * 7 + 4) & 2) != 0) {
        FUN_18000d44c(local_18,uVar4,0);
        uVar2 = FUN_18000d2f8((ulonglong)uVar4,0);
        uVar3 = uVar2 & 0xffffffff;
        FUN_18000da28(local_18);
        if ((int)uVar2 != 0) goto LAB_18000da09;
      }
      FUN_18000dac4((undefined8 *)DAT_18001b2d0[(ulonglong)uVar4 * 7 + 2]);
      FUN_18000d0b4(uVar4);
    }
  }
LAB_18000da09:
  LOCK();
  DAT_18001a9e0 = 0;
  UNLOCK();
  return uVar3;
}



void FUN_18000da28(longlong *param_1)

{
  HANDLE hThread;
  uint uVar1;
  ulonglong uVar2;
  LPVOID lpMem;
  
  lpMem = (LPVOID)*param_1;
  if (lpMem != (LPVOID)0x0) {
    uVar2 = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      do {
        hThread = OpenThread(0x5a,0,*(DWORD *)(*param_1 + uVar2 * 4));
        if (hThread != (HANDLE)0x0) {
          ResumeThread(hThread);
          CloseHandle(hThread);
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)((longlong)param_1 + 0xc));
      lpMem = (LPVOID)*param_1;
    }
    HeapFree(DAT_18001a9e8,0,lpMem);
  }
  return;
}



void FUN_18000daa0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_18000db2c(param_1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)puVar2[1];
    *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 1;
    puVar2[1] = uVar1;
  }
  return;
}



void FUN_18000dac4(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *lpAddress;
  undefined8 *puVar3;
  
  puVar2 = DAT_18001b2c0;
  puVar3 = (undefined8 *)0x0;
  while( true ) {
    lpAddress = puVar2;
    if (lpAddress == (undefined8 *)0x0) {
      return;
    }
    if (lpAddress == (undefined8 *)((ulonglong)param_1 & 0xfffffffffffff000)) break;
    puVar2 = (undefined8 *)*lpAddress;
    puVar3 = lpAddress;
  }
  *param_1 = lpAddress[1];
  piVar1 = (int *)(lpAddress + 2);
  *piVar1 = *piVar1 + -1;
  lpAddress[1] = param_1;
  if (*piVar1 == 0) {
    puVar2 = (undefined8 *)*lpAddress;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = (undefined8 *)*lpAddress;
      puVar2 = DAT_18001b2c0;
    }
    DAT_18001b2c0 = puVar2;
    VirtualFree(lpAddress,0,0x8000);
  }
  return;
}



undefined8 * FUN_18000db2c(undefined8 *param_1)

{
  DWORD DVar1;
  undefined8 *puVar2;
  SIZE_T SVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *lpAddress;
  ulonglong uVar7;
  PVOID pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  _SYSTEM_INFO local_78;
  _MEMORY_BASIC_INFORMATION local_48;
  PVOID pvVar6;
  
  GetSystemInfo(&local_78);
  puVar9 = local_78.lpMinimumApplicationAddress;
  if (((undefined8 *)0x40000000 < param_1) &&
     (local_78.lpMinimumApplicationAddress < param_1 + -0x8000000)) {
    puVar9 = param_1 + -0x8000000;
  }
  puVar10 = param_1 + 0x8000000;
  if (local_78.lpMaximumApplicationAddress <= param_1 + 0x8000000) {
    puVar10 = local_78.lpMaximumApplicationAddress;
  }
  puVar10 = (undefined8 *)((longlong)puVar10 - 0xfff);
  for (puVar5 = DAT_18001b2c0; puVar2 = (undefined8 *)0x0, lpAddress = param_1,
      puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
    if (((puVar9 <= puVar5) && (puVar5 < puVar10)) && (puVar5[1] != 0)) {
      return puVar5;
    }
  }
  do {
    if (lpAddress < puVar9) goto LAB_18000dcbc;
    pvVar8 = (PVOID)(ulonglong)local_78.dwAllocationGranularity;
    pvVar6 = (PVOID)((longlong)lpAddress - (ulonglong)lpAddress % (ulonglong)pvVar8);
    do {
      lpAddress = (undefined8 *)((longlong)pvVar6 - (longlong)pvVar8);
      if ((lpAddress < puVar9) || (SVar3 = VirtualQuery(lpAddress,&local_48,0x30), SVar3 == 0))
      break;
      if (local_48.State == 0x10000) goto LAB_18000dc00;
      pvVar6 = local_48.AllocationBase;
    } while (pvVar8 <= local_48.AllocationBase);
    lpAddress = (undefined8 *)0x0;
LAB_18000dc00:
    if (lpAddress == (undefined8 *)0x0) goto LAB_18000dcbc;
    puVar2 = VirtualAlloc(lpAddress,0x1000,0x3000,0x40);
  } while (puVar2 == (undefined8 *)0x0);
LAB_18000dcc9:
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  uVar4 = 0x40;
  puVar9 = puVar2;
  do {
    puVar9 = puVar9 + 8;
    uVar4 = uVar4 + 0x40;
    *puVar9 = puVar2[1];
    puVar2[1] = puVar9;
  } while (uVar4 < 0xfc1);
  *puVar2 = DAT_18001b2c0;
  DAT_18001b2c0 = puVar2;
  return puVar2;
LAB_18000dcbc:
  while (DVar1 = local_78.dwAllocationGranularity, puVar2 == (undefined8 *)0x0) {
    if (puVar10 < param_1) {
      return (undefined8 *)0x0;
    }
    uVar4 = (ulonglong)local_78.dwAllocationGranularity;
    param_1 = (undefined8 *)
              (((ulonglong)local_78.dwAllocationGranularity - (ulonglong)param_1 % uVar4) +
              (longlong)param_1);
    while ((param_1 <= puVar10 && (SVar3 = VirtualQuery(param_1,&local_48,0x30), SVar3 != 0))) {
      if (local_48.State == 0x10000) goto LAB_18000dc97;
      uVar7 = (DVar1 - 1) + local_48.RegionSize + (longlong)local_48.BaseAddress;
      param_1 = (undefined8 *)(uVar7 - uVar7 % uVar4);
    }
    param_1 = (undefined8 *)0x0;
LAB_18000dc97:
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar2 = VirtualAlloc(param_1,0x1000,0x3000,0x40);
  }
  goto LAB_18000dcc9;
}



void FUN_18000dd2c(void)

{
  return;
}



undefined8 FUN_18000dd30(LPCVOID param_1)

{
  undefined8 uVar1;
  _MEMORY_BASIC_INFORMATION local_38;
  
  VirtualQuery(param_1,&local_38,0x30);
  if ((local_38.State == 0x1000) && (((byte)local_38.Protect & 0xf0) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

undefined8 FUN_18000dd64(ulonglong *param_1)

{
  char cVar1;
  byte bVar2;
  undefined7 extraout_var;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  char *pcVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  ulonglong *puVar16;
  byte bVar17;
  undefined1 auStack_c8 [32];
  byte local_a8;
  uint local_a4;
  byte local_a0 [11];
  byte local_95;
  byte local_94;
  byte local_93;
  char local_91;
  int local_8b;
  int local_83;
  uint local_7f;
  undefined2 local_78;
  undefined4 uStack_76;
  undefined2 uStack_72;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  ulonglong local_68;
  ulonglong *local_60;
  undefined2 local_58;
  undefined4 local_56;
  undefined2 local_52;
  undefined8 local_50;
  ulonglong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_180019240 ^ (ulonglong)auStack_c8;
  local_58 = 0x15ff;
  local_50 = 0;
  uVar7 = 0;
  uStack_76 = 0;
  uVar15 = 0;
  uStack_72 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_60 = (ulonglong *)0x0;
  local_a8 = 0;
  local_a4 = 0;
  param_1[4] = 0;
  local_56 = 2;
  local_52 = 0x8eb;
  local_78 = 0x25ff;
  local_68 = 0x25ff0e70;
  puVar11 = (ulonglong *)0x0;
  do {
    bVar17 = (byte)uVar7;
    puVar16 = (ulonglong *)(uVar7 + *param_1);
    uVar7 = param_1[2];
    bVar2 = FUN_18000e104((byte *)puVar16,local_a0);
    uVar5 = CONCAT71(extraout_var,bVar2) & 0xffffffff;
    uVar14 = (uint)CONCAT71(extraout_var,bVar2);
    if ((local_7f & 0x1000) != 0) {
      return 0;
    }
    puVar6 = puVar11;
    if (bVar17 < 5) {
      if ((local_93 & 199) == 5) {
        puVar11 = puVar16;
        puVar12 = local_48;
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar12 = (char)*puVar11;
          puVar11 = (ulonglong *)((longlong)puVar11 + 1);
          puVar12 = (ulonglong *)((longlong)puVar12 + 1);
        }
        puVar12 = local_48;
        *(uint *)((longlong)local_48 +
                 ((ulonglong)local_a0[0] - (ulonglong)(local_7f >> 2 & 0xf)) + -4) =
             ((int)puVar16 - (uVar15 + (int)uVar7)) + local_83;
        if ((local_95 == 0xff) && (local_91 == '\x04')) {
          local_a4 = 1;
        }
      }
      else if (local_95 == 0xe8) {
        puVar12 = (ulonglong *)&local_58;
        local_50 = (longlong)puVar16 + (ulonglong)local_a0[0] + (longlong)local_8b;
LAB_18000df85:
        uVar14 = 0x10;
        puVar6 = puVar11;
      }
      else {
        puVar12 = puVar16;
        if ((local_95 & 0xfd) == 0xe9) {
          lVar3 = (longlong)(char)local_8b;
          if (local_95 != 0xeb) {
            lVar3 = (longlong)local_8b;
          }
          puVar6 = (ulonglong *)((longlong)puVar16 + lVar3 + (ulonglong)local_a0[0]);
          if ((puVar6 < (ulonglong *)*param_1) || ((ulonglong *)((longlong)*param_1 + 5U) <= puVar6)
             ) {
            uStack_72 = SUB82(puVar6,0);
            uStack_70 = (undefined4)((ulonglong)puVar6 >> 0x10);
            uStack_6c = (undefined2)((ulonglong)puVar6 >> 0x30);
            uVar14 = 0xe;
            puVar12 = (ulonglong *)&local_78;
LAB_18000df15:
            local_a4 = (uint)(puVar11 <= puVar16);
            puVar6 = puVar11;
          }
          else if (puVar6 <= puVar11) {
            puVar6 = puVar11;
          }
        }
        else if ((((local_95 & 0xf0) == 0x70) || ((local_95 & 0xfc) == 0xe0)) ||
                ((local_94 & 0xf0) == 0x80)) {
          if (((local_95 & 0xf0) == 0x70) || (lVar3 = (longlong)local_8b, (local_95 & 0xfc) == 0xe0)
             ) {
            lVar3 = (longlong)(char)local_8b;
          }
          puVar6 = (ulonglong *)((longlong)puVar16 + lVar3 + (ulonglong)local_a0[0]);
          if ((puVar6 < (ulonglong *)*param_1) || ((ulonglong *)((longlong)*param_1 + 5U) <= puVar6)
             ) {
            if ((local_95 & 0xfc) == 0xe0) {
              return 0;
            }
            puVar12 = &local_68;
            local_60 = puVar6;
            bVar2 = local_94;
            if (local_95 != 0xf) {
              bVar2 = local_95;
            }
            local_68 = CONCAT71(local_68._1_7_,bVar2) & 0xffffffffffffff0f ^ 0x71;
            goto LAB_18000df85;
          }
          if (puVar6 <= puVar11) {
            puVar6 = puVar11;
          }
        }
        else if ((local_95 & 0xfe) == 0xc2) goto LAB_18000df15;
      }
    }
    else {
      uStack_72 = SUB82(puVar16,0);
      uStack_70 = (undefined4)((ulonglong)puVar16 >> 0x10);
      uStack_6c = (undefined2)((ulonglong)puVar16 >> 0x30);
      puVar12 = (ulonglong *)&local_78;
      local_a4 = 1;
      uVar14 = 0xe;
    }
    if ((puVar16 < puVar6) && (uVar14 != local_a0[0])) {
      return 0;
    }
    if (0x32 < uVar14 + local_a8) {
      return 0;
    }
    if (7 < *(uint *)((longlong)param_1 + 0x24)) {
      return 0;
    }
    *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x24) + 0x28 + (longlong)param_1) = bVar17;
    *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x24) + 0x30 + (longlong)param_1) = local_a8;
    bVar2 = local_a8 + (char)uVar14;
    uVar15 = (uint)bVar2;
    uVar9 = 1;
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    puVar13 = (undefined1 *)((ulonglong)local_a8 + param_1[2]);
    for (uVar7 = (ulonglong)uVar14; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar13 = (char)*puVar12;
      puVar12 = (ulonglong *)((longlong)puVar12 + 1);
      puVar13 = puVar13 + 1;
    }
    bVar17 = bVar17 + local_a0[0];
    uVar7 = (ulonglong)bVar17;
    puVar11 = puVar6;
    local_a8 = bVar2;
  } while (local_a4 == 0);
  if (bVar17 < 5) {
    uVar5 = *param_1;
    pcVar8 = (char *)(uVar7 + uVar5);
    uVar4 = FUN_18000e0c8(pcVar8,5 - bVar17);
    if ((int)uVar4 == 0) {
      if (((1 < bVar17) || (uVar4 = FUN_18000e0c8(pcVar8,2 - bVar17), (int)uVar4 != 0)) &&
         (uVar4 = FUN_18000dd30((LPCVOID)(uVar5 - 5)), (int)uVar4 != 0)) {
        cVar1 = *(char *)(*param_1 - 5);
        if (((cVar1 == '\0') || (cVar1 == -0x70)) || (cVar1 == -0x34)) {
          pcVar8 = (char *)(*param_1 - 4);
          do {
            if (*pcVar8 != cVar1) {
              return 0;
            }
            uVar9 = uVar9 + 1;
            pcVar8 = pcVar8 + 1;
          } while (uVar9 < 5);
          *(undefined4 *)(param_1 + 4) = 1;
          goto LAB_18000e067;
        }
      }
      return 0;
    }
  }
LAB_18000e067:
  uVar7 = param_1[1];
  uStack_72 = (undefined2)uVar7;
  uStack_70 = (undefined4)(uVar7 >> 0x10);
  uStack_6c = (undefined2)(uVar7 >> 0x30);
  puVar10 = (undefined8 *)((ulonglong)bVar2 + param_1[2]);
  param_1[3] = (ulonglong)puVar10;
  *puVar10 = CONCAT26(uStack_72,CONCAT42(uStack_76,local_78));
  *(undefined4 *)(puVar10 + 1) = uStack_70;
  *(undefined2 *)((longlong)puVar10 + 0xc) = uStack_6c;
  return 1;
}



undefined8 FUN_18000e0c8(char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  cVar1 = *param_1;
  if (((cVar1 != '\0') && (cVar1 != -0x70)) && (cVar1 != -0x34)) {
    return 0;
  }
  uVar3 = 1;
  if (1 < param_2) {
    do {
      if (param_1[uVar3] != cVar1) {
        return 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < param_2);
  }
  return 1;
}



byte FUN_18000e104(byte *param_1,byte *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  byte *pbVar8;
  byte bVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  byte *pbVar15;
  byte *pbVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  undefined *puVar20;
  byte bVar21;
  byte bVar22;
  char cVar23;
  
  puVar20 = &DAT_180019000;
  cVar23 = false;
  bVar9 = 0;
  bVar14 = 0;
  cVar17 = '\x10';
  pbVar15 = param_2;
  for (lVar7 = 0x25; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pbVar15 = 0;
    pbVar15 = pbVar15 + 1;
  }
  pbVar15 = param_1;
  do {
    pbVar16 = pbVar15;
    bVar13 = *pbVar16;
    uVar10 = (ulonglong)bVar13;
    pbVar15 = pbVar16 + 1;
    if (bVar13 < 0x67) {
      if (bVar13 == 0x66) {
        param_2[4] = 0x66;
        bVar11 = 8;
      }
      else {
        if (((bVar13 - 0x26 & 0xffffffe7) != 0) && (bVar13 != 100 && bVar13 != 0x65)) break;
        param_2[3] = bVar13;
        bVar11 = 0x40;
      }
    }
    else if (bVar13 == 0x67) {
      param_2[5] = 0x67;
      bVar11 = 0x10;
    }
    else if (bVar13 == 0xf0) {
      param_2[2] = 0xf0;
      bVar11 = 0x20;
    }
    else if (bVar13 == 0xf2) {
      param_2[1] = 0xf2;
      bVar11 = 2;
    }
    else {
      if (bVar13 != 0xf3) break;
      param_2[1] = 0xf3;
      bVar11 = 4;
    }
    bVar9 = bVar9 | bVar11;
    cVar17 = cVar17 + -1;
  } while (cVar17 != '\0');
  uVar18 = (uint)bVar9 << 0x17;
  *(uint *)(param_2 + 0x21) = uVar18;
  bVar11 = 1;
  if (bVar9 != 0) {
    bVar11 = bVar9;
  }
  if ((bVar13 & 0xf0) == 0x40) {
    uVar18 = uVar18 | 0x40000000;
    bVar9 = bVar13 >> 3 & 1;
    *(uint *)(param_2 + 0x21) = uVar18;
    param_2[7] = bVar9;
    if (bVar9 != 0) {
      cVar23 = (*pbVar15 & 0xf8) == 0xb8;
    }
    param_2[8] = bVar13 >> 2 & 1;
    param_2[10] = bVar13 & 1;
    param_2[9] = bVar13 >> 1 & 1;
    bVar9 = *pbVar15;
    uVar10 = (ulonglong)bVar9;
    pbVar15 = pbVar16 + 2;
    if ((bVar9 & 0xf0) != 0x40) goto LAB_18000e234;
LAB_18000e293:
    uVar18 = uVar18 | 0x3000;
    *(uint *)(param_2 + 0x21) = uVar18;
    uVar12 = 0;
    if (((byte)uVar10 & 0xfd) == 0x24) {
      uVar12 = 1;
    }
  }
  else {
LAB_18000e234:
    bVar9 = (byte)uVar10;
    param_2[0xb] = bVar9;
    if (bVar9 == 0xf) {
      uVar10 = (ulonglong)*pbVar15;
      puVar20 = &DAT_18001904a;
      param_2[0xc] = *pbVar15;
      pbVar15 = pbVar15 + 1;
    }
    else if ((0x9f < bVar9) && (bVar9 < 0xa4)) {
      cVar23 = cVar23 + '\x01';
      if ((bVar11 & 0x10) == 0) {
        bVar11 = bVar11 & 0xf7;
      }
      else {
        bVar11 = bVar11 | 8;
      }
    }
    uVar12 = (uint)(byte)puVar20[(ulonglong)((uint)uVar10 & 3) +
                                 (ulonglong)(byte)puVar20[uVar10 >> 2]];
    if (puVar20[(ulonglong)((uint)uVar10 & 3) + (ulonglong)(byte)puVar20[uVar10 >> 2]] == 0xff)
    goto LAB_18000e293;
  }
  cVar17 = '\0';
  if ((char)uVar12 < '\0') {
    uVar4 = uVar12 & 0x7f;
    uVar12 = (uint)*(ushort *)(puVar20 + uVar4);
    cVar17 = (char)(*(ushort *)(puVar20 + uVar4) >> 8);
  }
  bVar9 = param_2[0xc];
  bVar13 = (byte)uVar10;
  uVar4 = (uint)uVar10;
  if ((bVar9 != 0) &&
     ((s_____AI____LB________ODS___DWC____18001913c
       [(ulonglong)(byte)s_____AI____LB________ODS___DWC____18001913c[uVar10 >> 2] +
        (ulonglong)(uVar4 & 3)] & bVar11) != 0)) {
    uVar18 = uVar18 | 0x3000;
    *(uint *)(param_2 + 0x21) = uVar18;
  }
  if ((uVar12 & 1) == 0) {
    if ((bVar11 & 0x20) != 0) {
      *(uint *)(param_2 + 0x21) = uVar18 | 0x9000;
    }
  }
  else {
    uVar19 = uVar18 | 1;
    *(uint *)(param_2 + 0x21) = uVar19;
    bVar22 = *pbVar15;
    param_2[0xd] = bVar22;
    bVar21 = bVar22 >> 6;
    bVar5 = bVar22 & 7;
    bVar22 = bVar22 >> 3 & 7;
    param_2[0xe] = bVar21;
    param_2[0x10] = bVar5;
    param_2[0xf] = bVar22;
    if ((cVar17 != '\0') && ((char)(cVar17 << bVar22) < '\0')) {
      uVar19 = uVar18 | 0x3001;
      *(uint *)(param_2 + 0x21) = uVar19;
    }
    if (((bVar9 == 0) && (0xd8 < bVar13)) && (bVar13 < 0xe0)) {
      uVar10 = (ulonglong)(uVar4 + 0x27 & 0xff);
      if (bVar21 == 3) {
        cVar17 = (&DAT_180019104)[(ulonglong)bVar22 + uVar10 * 8];
        bVar6 = bVar5;
      }
      else {
        cVar17 = (&DAT_1800190fd)[uVar10];
        bVar6 = bVar22;
      }
      if ((char)(cVar17 << bVar6) < '\0') {
        uVar19 = uVar19 | 0x3000;
        *(uint *)(param_2 + 0x21) = uVar19;
      }
    }
    if ((bVar11 & 0x20) != 0) {
      if (bVar21 == 3) {
        *(uint *)(param_2 + 0x21) = uVar19 | 0x9000;
      }
      else {
        pbVar8 = &DAT_1800191d8;
        pbVar16 = &DAT_1800191c6;
        if (bVar9 == 0) {
          pbVar8 = &DAT_1800191c6;
        }
        bVar6 = bVar13;
        if (bVar9 == 0) {
          pbVar16 = &DAT_1800191ae;
          bVar6 = bVar13 & 0xfe;
        }
        for (; pbVar16 != pbVar8; pbVar16 = pbVar16 + 2) {
          if (*pbVar16 == bVar6) {
            if (-1 < (char)(pbVar16[1] << bVar22)) goto LAB_18000e44c;
            break;
          }
        }
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x9000;
      }
    }
LAB_18000e44c:
    if (bVar9 == 0) {
      if (uVar4 == 0x8c) {
LAB_18000e536:
        if (5 < bVar22) goto LAB_18000e53b;
      }
      else {
        if (uVar4 == 0x8e) {
          if (bVar22 != 1) goto LAB_18000e536;
          goto LAB_18000e53b;
        }
LAB_18000e4b3:
        if (bVar21 == 3) {
          pbVar16 = &DAT_180019211;
          if (bVar9 == 0) {
            pbVar16 = &DAT_1800191e7;
          }
          pbVar8 = &DAT_1800191e7;
          if (bVar9 == 0) {
            pbVar8 = &DAT_1800191d8;
          }
          for (; pbVar8 != pbVar16; pbVar8 = pbVar8 + 3) {
            if (*pbVar8 == bVar13) {
              if (((pbVar8[1] & bVar11) != 0) && (-1 < (char)(pbVar8[2] << bVar22)))
              goto LAB_18000e53b;
              break;
            }
          }
        }
        else if (bVar9 != 0) {
          if (uVar4 == 0x50) {
LAB_18000e524:
            bVar9 = bVar11 & 9;
          }
          else {
            if (uVar4 == 0xc5) goto LAB_18000e53b;
            if (uVar4 != 0xd6) {
              if ((uVar4 != 0xd7) && (uVar4 != 0xf7)) goto LAB_18000e543;
              goto LAB_18000e524;
            }
            bVar9 = bVar11 & 6;
          }
          if (bVar9 != 0) goto LAB_18000e53b;
        }
      }
    }
    else if (uVar4 == 0x20) {
LAB_18000e482:
      bVar21 = 3;
      if ((4 < bVar22) || (bVar22 == 1)) goto LAB_18000e53b;
    }
    else {
      if (uVar4 != 0x21) {
        if (uVar4 == 0x22) goto LAB_18000e482;
        if (uVar4 != 0x23) goto LAB_18000e4b3;
      }
      bVar21 = 3;
      if ((byte)(bVar22 - 4) < 2) {
LAB_18000e53b:
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x11000;
      }
    }
LAB_18000e543:
    bVar9 = pbVar15[1];
    pbVar16 = pbVar15 + 2;
    if (bVar22 < 2) {
      if (bVar13 == 0xf6) {
        uVar12 = (uint)(byte)((byte)uVar12 | 2);
      }
      else if (bVar13 == 0xf7) {
        uVar12 = (uint)(byte)((byte)uVar12 | 0x10);
      }
    }
    if (bVar21 == 0) {
      if ((bVar11 & 0x10) == 0) {
        bVar14 = 0;
        if (bVar5 == 5) {
          bVar14 = 4;
        }
      }
      else {
        bVar14 = (bVar5 != 6) - 1U & 2;
      }
    }
    else if (bVar21 == 1) {
      bVar14 = 1;
    }
    else if ((bVar21 == 2) && (bVar14 = 2, (bVar11 & 0x10) == 0)) {
      bVar14 = 4;
    }
    if ((bVar21 != 3) && (bVar5 == 4)) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 2;
      pbVar16 = pbVar15 + 3;
      param_2[0x12] = bVar9 >> 6;
      param_2[0x11] = bVar9;
      param_2[0x13] = bVar9 >> 3 & 7;
      param_2[0x14] = bVar9 & 7;
      if (((bVar9 & 7) == 5) && ((bVar21 & 1) == 0)) {
        bVar14 = 4;
      }
    }
    pbVar16 = pbVar16 + -1;
    if (bVar14 == 1) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x40;
      param_2[0x1d] = *pbVar16;
    }
    else if (bVar14 == 2) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x80;
      *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)pbVar16;
    }
    else if (bVar14 == 4) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x100;
      *(undefined4 *)(param_2 + 0x1d) = *(undefined4 *)pbVar16;
    }
    pbVar15 = pbVar16 + bVar14;
  }
  if ((uVar12 & 0x10) == 0) goto LAB_18000e6af;
  if ((uVar12 & 0x40) == 0) {
    if (cVar23 == '\0') {
      if ((bVar11 & 8) == 0) {
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x10;
        uVar2 = *(undefined4 *)pbVar15;
        pbVar15 = pbVar15 + 4;
        *(undefined4 *)(param_2 + 0x15) = uVar2;
        goto LAB_18000e6af;
      }
LAB_18000e6b4:
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 8;
      uVar1 = *(undefined2 *)pbVar15;
      pbVar15 = pbVar15 + 2;
      *(undefined2 *)(param_2 + 0x15) = uVar1;
    }
    else {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x20;
      uVar3 = *(undefined8 *)pbVar15;
      pbVar15 = pbVar15 + 8;
      *(undefined8 *)(param_2 + 0x15) = uVar3;
LAB_18000e6af:
      if ((uVar12 & 4) != 0) goto LAB_18000e6b4;
    }
    if ((uVar12 & 2) != 0) {
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 4;
      bVar14 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      param_2[0x15] = bVar14;
    }
    if ((uVar12 & 0x40) == 0) {
      if ((uVar12 & 0x20) != 0) {
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x204;
        bVar14 = *pbVar15;
        pbVar15 = pbVar15 + 1;
        param_2[0x15] = bVar14;
      }
      goto LAB_18000e6f8;
    }
  }
  else if ((bVar11 & 8) != 0) {
    *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x208;
    uVar1 = *(undefined2 *)pbVar15;
    pbVar15 = pbVar15 + 2;
    *(undefined2 *)(param_2 + 0x15) = uVar1;
    goto LAB_18000e6f8;
  }
  *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x210;
  uVar2 = *(undefined4 *)pbVar15;
  pbVar15 = pbVar15 + 4;
  *(undefined4 *)(param_2 + 0x15) = uVar2;
LAB_18000e6f8:
  bVar14 = (char)pbVar15 - (char)param_1;
  *param_2 = bVar14;
  if (0xf < bVar14) {
    *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x5000;
    bVar14 = 0xf;
    *param_2 = 0xf;
  }
  return bVar14;
}



void CreateToolhelp32Snapshot(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000e75f. Too many branches
                    // WARNING: Treating indirect jump as call
  CreateToolhelp32Snapshot();
  return;
}



void Thread32First(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000e765. Too many branches
                    // WARNING: Treating indirect jump as call
  Thread32First();
  return;
}



void Thread32Next(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000e76b. Too many branches
                    // WARNING: Treating indirect jump as call
  Thread32Next();
  return;
}



void __cdecl std::_Xbad_alloc(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000e777. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _Xbad_alloc();
  return;
}



void FUN_18000e780(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = malloc(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_18001a9f0;
    puVar1[1] = param_1;
    DAT_18001a9f0 = puVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  std::_Xbad_alloc();
}



void __thiscall std::basic_streambuf<>::_Lock(basic_streambuf<> *this)

{
                    // WARNING: Could not recover jumptable at 0x00018000e7c3. Too many branches
                    // WARNING: Treating indirect jump as call
  _Lock(this);
  return;
}



void __thiscall std::basic_streambuf<>::_Unlock(basic_streambuf<> *this)

{
                    // WARNING: Could not recover jumptable at 0x00018000e7c9. Too many branches
                    // WARNING: Treating indirect jump as call
  _Unlock(this);
  return;
}



__int64 __thiscall std::basic_streambuf<>::showmanyc(basic_streambuf<> *this)

{
  __int64 _Var1;
  
                    // WARNING: Could not recover jumptable at 0x00018000e7cf. Too many branches
                    // WARNING: Treating indirect jump as call
  _Var1 = showmanyc(this);
  return _Var1;
}



int __thiscall std::basic_streambuf<>::uflow(basic_streambuf<> *this)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018000e7d5. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = uflow(this);
  return iVar1;
}



__int64 __thiscall
std::basic_streambuf<>::xsgetn(basic_streambuf<> *this,char *param_1,__int64 param_2)

{
  __int64 _Var1;
  
                    // WARNING: Could not recover jumptable at 0x00018000e7db. Too many branches
                    // WARNING: Treating indirect jump as call
  _Var1 = xsgetn(this,param_1,param_2);
  return _Var1;
}



__int64 __thiscall
std::basic_streambuf<>::xsputn(basic_streambuf<> *this,char *param_1,__int64 param_2)

{
  __int64 _Var1;
  
                    // WARNING: Could not recover jumptable at 0x00018000e7e1. Too many branches
                    // WARNING: Treating indirect jump as call
  _Var1 = xsputn(this,param_1,param_2);
  return _Var1;
}



basic_streambuf<> * __thiscall
std::basic_streambuf<>::setbuf(basic_streambuf<> *this,char *param_1,__int64 param_2)

{
  basic_streambuf<> *pbVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018000e7e7. Too many branches
                    // WARNING: Treating indirect jump as call
  pbVar1 = setbuf(this,param_1,param_2);
  return pbVar1;
}



int __thiscall std::basic_streambuf<>::sync(basic_streambuf<> *this)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018000e7ed. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = sync(this);
  return iVar1;
}



void __thiscall std::basic_streambuf<>::imbue(basic_streambuf<> *this,locale *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00018000e7f3. Too many branches
                    // WARNING: Treating indirect jump as call
  imbue(this,param_1);
  return;
}



ulonglong FUN_18000e7fc(DWORD param_1,longlong *param_2)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  DWORD local_res18 [4];
  
  iVar1 = GetLocaleInfoEx(L"!x-sys-default-locale",0x20000001,(LPWSTR)local_res18,2);
  if (iVar1 == 0) {
    local_res18[0] = 0;
  }
  DVar2 = FormatMessageA(0x1300,(LPCVOID)0x0,param_1,local_res18[0],(LPSTR)param_2,0,(va_list *)0x0)
  ;
  uVar3 = (ulonglong)DVar2;
  if (DVar2 != 0) {
    pbVar5 = (byte *)(*param_2 + -1 + uVar3);
    uVar4 = uVar3;
    do {
      if ((&DAT_180011500)[*pbVar5] == '\0') {
        return uVar4;
      }
      pbVar5 = pbVar5 + -1;
      uVar4 = uVar4 - 1;
      uVar3 = 0;
    } while (uVar4 != 0);
  }
  return uVar3;
}



HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018000e894. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}



ulonglong FUN_18000e89c(void)

{
  UINT UVar1;
  BOOL BVar2;
  ulonglong uVar3;
  
  UVar1 = ___lc_codepage_func();
  uVar3 = 0xfde9;
  if (UVar1 != 0xfde9) {
    BVar2 = AreFileApisANSI();
    uVar3 = (ulonglong)(BVar2 == 0);
  }
  return uVar3;
}



// Library Function - Single Match
//  __std_fs_convert_narrow_to_wide
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8
__std_fs_convert_narrow_to_wide(UINT param_1,LPCSTR param_2,int param_3,LPWSTR param_4,int param_5)

{
  int iVar1;
  undefined4 uStack_14;
  
  iVar1 = MultiByteToWideChar(param_1,8,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = 0;
  }
  return CONCAT44(uStack_14,iVar1);
}



// Library Function - Single Match
//  __std_fs_convert_wide_to_narrow
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined8
__std_fs_convert_wide_to_narrow(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  BOOL local_res8 [2];
  int local_28;
  DWORD DStack_24;
  
  if ((param_1 == 0xfde9) || (param_1 == 0xd698)) {
    local_28 = WideCharToMultiByte(param_1,0x80,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
  }
  else {
    local_res8[0] = 0;
    local_28 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   local_res8);
    if (local_res8[0] != 0) {
      local_28 = 0;
      DStack_24 = 0x459;
      goto LAB_18000ea12;
    }
  }
  if (local_28 == 0) {
    DStack_24 = GetLastError();
  }
  else {
    DStack_24 = 0;
  }
  if (DStack_24 == 0x3ec) {
    local_28 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_28 == 0) {
      DStack_24 = GetLastError();
    }
    else {
      DStack_24 = 0;
    }
  }
LAB_18000ea12:
  return CONCAT44(DStack_24,local_28);
}



undefined8 FUN_18000ea30(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                 (LPBOOL)0x0);
  if (local_18 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = 0;
  }
  if (uStack_14 == 0x3ec) {
    local_18 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_18 == 0) {
      uStack_14 = GetLastError();
    }
    else {
      uStack_14 = 0;
    }
  }
  return CONCAT44(uStack_14,local_18);
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Type propagation algorithm not settling

DWORD FUN_18000eafc(LPCWSTR param_1,ulonglong *param_2,uint param_3,uint param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  uint local_2a0 [2];
  ulonglong local_298;
  undefined4 local_290;
  uint local_28c;
  DWORD DStack_288;
  DWORD local_284;
  uint local_280;
  _WIN32_FIND_DATAW local_278;
  ulonglong local_28;
  
  local_28 = DAT_180019240 ^ (ulonglong)auStack_2c8;
  uVar4 = param_3 & 0xfffffffe;
  if (((param_3 & 1) != 0) && ((param_3 >> 2 & 1) != 0)) {
    return 0x57;
  }
  if ((((param_3 >> 1 & 1) != 0) && (param_4 != 0xffffffff)) &&
     (((param_4 >> 10 & 1) == 0 || ((param_3 & 1) == 0)))) {
    uVar4 = param_3 & 0xfffffffc;
    *(uint *)(param_2 + 2) = param_4;
  }
  if (uVar4 != 0) {
    if (((uVar4 & 0x2a) != 0) &&
       (((param_4 == 0xffffffff || ((param_4 >> 10 & 1) == 0)) || ((param_3 & 1) == 0)))) {
      BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2a0);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (DVar2 != 0x20) {
          return DVar2;
        }
        pvVar3 = FindFirstFileW(param_1,&local_278);
        if (pvVar3 == (HANDLE)0xffffffffffffffff) {
          DVar2 = GetLastError();
          return DVar2;
        }
        FindClose(pvVar3);
        local_28c = local_278.ftLastWriteTime.dwLowDateTime;
        DStack_288 = local_278.ftLastWriteTime.dwHighDateTime;
      }
      else {
        local_278.ftLastWriteTime.dwHighDateTime = DStack_288;
        local_278.ftLastWriteTime.dwLowDateTime = local_28c;
        local_278.dwFileAttributes = local_2a0[0];
        local_278.nFileSizeHigh = local_284;
        local_278.nFileSizeLow = local_280;
      }
      if (((param_3 & 1) == 0) || ((local_278.dwFileAttributes >> 10 & 1) == 0)) {
        *(DWORD *)(param_2 + 2) = local_278.dwFileAttributes;
        param_2[1] = CONCAT44(local_278.nFileSizeHigh,local_278.nFileSizeLow);
        *param_2 = (ulonglong)local_278.ftLastWriteTime & 0xffffffff00000000 | (ulonglong)local_28c;
        uVar4 = uVar4 & 0xffffffd5;
        if (uVar4 == 0) {
          return 0;
        }
      }
    }
    DVar2 = __std_fs_open_handle
                      (&local_2a8,param_1,0x80,(((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000);
    if (DVar2 == 0) {
      pvVar3 = (HANDLE)CONCAT44(local_2a8._4_4_,(undefined4)local_2a8);
      uVar5 = uVar4;
      if ((uVar4 & 0x26) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar3,FileBasicInfo,local_2a0,0x28);
        if (BVar1 == 0) {
          DVar2 = GetLastError();
          if (pvVar3 == (HANDLE)0xffffffffffffffff) {
            return DVar2;
          }
          BVar1 = CloseHandle(pvVar3);
          if (BVar1 == 0) {
                    // WARNING: Subroutine does not return
            abort();
          }
          return DVar2;
        }
        uVar5 = uVar4 & 0xffffffdd;
        *param_2 = CONCAT44(local_28c,local_290);
        *(uint *)(param_2 + 2) = local_280;
        if ((uVar5 >> 2 & 1) != 0) {
          if ((local_280 >> 10 & 1) == 0) {
            *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          }
          else {
            BVar1 = GetFileInformationByHandleEx(pvVar3,FileAttributeTagInfo,&local_2a8,8);
            if (BVar1 == 0) {
              DVar2 = GetLastError();
              if (pvVar3 == (HANDLE)0xffffffffffffffff) {
                return DVar2;
              }
              BVar1 = CloseHandle(pvVar3);
              if (BVar1 == 0) {
                    // WARNING: Subroutine does not return
                abort();
              }
              return DVar2;
            }
            *(undefined4 *)((longlong)param_2 + 0x14) = local_2a8._4_4_;
          }
          uVar5 = uVar4 & 0xffffffd9;
        }
      }
      if ((uVar5 & 0x18) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar3,FileStandardInfo,local_2a0,0x18);
        if (BVar1 == 0) {
          DVar2 = GetLastError();
          if (pvVar3 == (HANDLE)0xffffffffffffffff) {
            return DVar2;
          }
          BVar1 = CloseHandle(pvVar3);
          if (BVar1 == 0) {
                    // WARNING: Subroutine does not return
            abort();
          }
          return DVar2;
        }
        uVar5 = uVar5 & 0xffffffe7;
        param_2[1] = local_298;
        *(undefined4 *)(param_2 + 3) = local_290;
      }
      if (uVar5 == 0) {
        if (pvVar3 == (HANDLE)0xffffffffffffffff) {
          return 0;
        }
        BVar1 = CloseHandle(pvVar3);
        if (BVar1 != 0) {
          return 0;
        }
      }
      else if ((pvVar3 == (HANDLE)0xffffffffffffffff) || (BVar1 = CloseHandle(pvVar3), BVar1 != 0))
      {
        return 0x32;
      }
    }
    else {
      if ((HANDLE)CONCAT44(local_2a8._4_4_,(undefined4)local_2a8) == (HANDLE)0xffffffffffffffff) {
        return DVar2;
      }
      BVar1 = CloseHandle((HANDLE)CONCAT44(local_2a8._4_4_,(undefined4)local_2a8));
      if (BVar1 != 0) {
        return DVar2;
      }
    }
                    // WARNING: Subroutine does not return
    abort();
  }
  return 0;
}



// Library Function - Single Match
//  __std_fs_open_handle
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

DWORD __std_fs_open_handle(undefined8 *param_1,LPCWSTR param_2,DWORD param_3,DWORD param_4)

{
  DWORD DVar1;
  HANDLE pvVar2;
  
  DVar1 = 0;
  pvVar2 = CreateFileW(param_2,param_3,7,(LPSECURITY_ATTRIBUTES)0x0,3,param_4,(HANDLE)0x0);
  *param_1 = pvVar2;
  if (pvVar2 == (HANDLE)0xffffffffffffffff) {
    DVar1 = GetLastError();
  }
  return DVar1;
}



// WARNING: This is an inlined function

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180019240) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_18000f888();
  return;
}



void FUN_18000eeb0(size_t param_1)

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
    FUN_1800015b0();
  }
                    // WARNING: Subroutine does not return
  FUN_18000f9f0();
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
LAB_18000ef1a:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18001aa08 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18001aa08;
        pvVar1 = DAT_18001aa08;
      }
      DAT_18001aa08 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_18000ef1a;
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
    uVar3 = FUN_18000fcdc();
    uVar3 = _configure_narrow_argv(uVar3 & 0xffffffff);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = _initialize_narrow_environment();
  }
  else {
    uVar2 = FUN_18000fa10();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



bool FUN_18000ef5c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18000f094(0);
  return (char)uVar1 != '\0';
}



undefined1 FUN_18000ef74(void)

{
  char cVar1;
  
  cVar1 = FUN_18001006c();
  if (cVar1 != '\0') {
    cVar1 = FUN_18001006c();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_18001006c();
  }
  return 0;
}



undefined1 FUN_18000ef9c(void)

{
  FUN_18001006c();
  FUN_18001006c();
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
    _execute_onexit_table(&DAT_18001aa18);
    return;
  }
  uVar2 = FUN_180010070();
  if ((int)uVar2 == 0) {
    _cexit();
  }
  return;
}



void FUN_18000f044(void)

{
  FUN_18001006c();
  FUN_18001006c();
  return;
}



longlong FUN_18000f058(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_18001aa10 = 1;
  }
  FUN_18000fa10();
  cVar1 = FUN_18001006c();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_18001006c();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_18001006c();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18000f094(uint param_1)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (DAT_18001aa11 == '\0') {
    if (1 < param_1) {
                    // WARNING: Subroutine does not return
      FUN_18000fcf8(5);
    }
    bVar1 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar1) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_18001aa18 = 0xffffffffffffffff;
      uRam000000018001aa20 = 0xffffffffffffffff;
      _DAT_18001aa28 = 0xffffffffffffffff;
      _DAT_18001aa30 = 0xffffffffffffffff;
      uRam000000018001aa38 = 0xffffffffffffffff;
      _DAT_18001aa40 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18001aa18);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18001aa30), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18001aa11 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



// WARNING: Removing unreachable block (ram,0x00018000f1ad)
// WARNING: Enum "SectionFlags": Some values do not have unique names

ulonglong FUN_18000f120(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000210; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000300;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_18000f196;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18000f196:
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
    DAT_18001aa08 = 0;
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
  if ((DAT_18001aa10 == '\0') || (param_2 == '\0')) {
    FUN_18001006c();
    FUN_18001006c();
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
  
  if (DAT_18001aa18 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18001aa18);
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



void FUN_18000f264(void *param_1)

{
  free(param_1);
  return;
}



undefined8 * FUN_18000f26c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    FUN_18000f264(param_1);
  }
  return param_1;
}



void FUN_18000f298(undefined4 *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_18001aa50);
  *param_1 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18001aa50);
                    // WARNING: Could not recover jumptable at 0x00018000f2ca. Too many branches
                    // WARNING: Treating indirect jump as call
  WakeAllConditionVariable(&DAT_18001aa48);
  return;
}



// Library Function - Single Match
//  _Init_thread_footer
// 
// Library: Visual Studio 2019 Release

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_18001aa50);
  uVar1 = (ulonglong)_tls_index;
  DAT_180019224 = DAT_180019224 + 1;
  *param_1 = DAT_180019224;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_180019224;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18001aa50);
                    // WARNING: Could not recover jumptable at 0x00018000f336. Too many branches
                    // WARNING: Treating indirect jump as call
  WakeAllConditionVariable(&DAT_18001aa48);
  return;
}



void FUN_18000f340(int *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_18001aa50);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_18000f3a5:
                    // WARNING: Could not recover jumptable at 0x00018000f3b1. Too many branches
                    // WARNING: Treating indirect jump as call
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18001aa50);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_180019224;
      goto LAB_18000f3a5;
    }
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_18001aa48,(PSRWLOCK)&DAT_18001aa50,0xffffffff,0);
  } while( true );
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// Library Function - Single Match
//  void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
// __int64,void (__cdecl*)(void * __ptr64))
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*param_4)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// Library Function - Single Match
//  void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,unsigned __int64,void (__cdecl*)(void
// * __ptr64))
// 
// Library: Visual Studio 2019 Release

void __cdecl
__ArrayUnwind(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    param_1 = (void *)((longlong)param_1 - param_2);
    (*param_4)(param_1);
  }
  return;
}



ulonglong FUN_18000f488(undefined8 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined7 extraout_var;
  
  if (param_2 == 0) {
    uVar2 = FUN_18000f5f0(CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != 0));
    return CONCAT71(extraout_var,uVar2);
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar1 = FUN_18000ef74();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar1 = FUN_18000ef9c();
    }
    return (ulonglong)bVar1;
  }
  uVar3 = FUN_18000f4d8(param_1,param_3);
  return uVar3;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

undefined8 FUN_18000f4d8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar4 = FUN_18000f058(0);
  if ((char)uVar4 != '\0') {
    uVar4 = __scrt_acquire_startup_lock();
    bVar1 = true;
    if (DAT_18001aa00 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18000fcf8(7);
    }
    DAT_18001aa00 = 1;
    bVar2 = FUN_18000ef5c();
    if (bVar2) {
      FUN_18000ff60();
      FUN_18000ff10();
      FUN_18000ff3c();
      iVar3 = _initterm_e(&DAT_1800114b8,&DAT_1800114c0);
      if ((iVar3 == 0) && (uVar5 = __scrt_dllmain_after_initialize_c(), (char)uVar5 != '\0')) {
        _initterm(&DAT_180011478,&DAT_1800114b0);
        DAT_18001aa00 = 2;
        bVar1 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar4);
    if (!bVar1) {
      plVar6 = (longlong *)FUN_18000ff58();
      if ((*plVar6 != 0) && (uVar7 = FUN_18000f120((longlong)plVar6), (char)uVar7 != '\0')) {
        (*(code *)*plVar6)(param_1,2,param_2,_guard_dispatch_icall);
      }
      DAT_18001aa58 = DAT_18001aa58 + 1;
      return 1;
    }
  }
  return 0;
}



undefined1 FUN_18000f5f0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  
  uVar1 = (undefined1)param_1;
  if (DAT_18001aa58 < 1) {
    uVar1 = 0;
  }
  else {
    DAT_18001aa58 = DAT_18001aa58 + -1;
    uVar2 = __scrt_acquire_startup_lock();
    if (DAT_18001aa00 != 2) {
                    // WARNING: Subroutine does not return
      FUN_18000fcf8(7);
    }
    __scrt_dllmain_uninitialize_c();
    FUN_18000ff20();
    FUN_18000ff9c();
    DAT_18001aa00 = 0;
    uVar3 = (undefined7)((ulonglong)param_1 >> 8);
    __scrt_release_startup_lock((char)uVar2);
    uVar1 = __scrt_uninitialize_crt(CONCAT71(uVar3,uVar1),'\0');
    FUN_18000f044();
  }
  return uVar1;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall
// WARNING: Removing unreachable block (ram,0x00018000f72d)
// WARNING: Removing unreachable block (ram,0x00018000f6be)
// WARNING: Removing unreachable block (ram,0x00018000f76c)

int FUN_18000f670(HMODULE param_1,int param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  HMODULE pHVar4;
  
  if ((param_2 == 0) && (DAT_18001aa58 < 1)) {
    iVar1 = 0;
  }
  else {
    if ((param_2 - 1U < 2) && (uVar2 = FUN_18000f488(param_1,param_2,param_3), (int)uVar2 == 0)) {
      return 0;
    }
    uVar3 = FUN_18000feec(param_1,param_2);
    iVar1 = (int)uVar3;
    if ((param_2 == 1) && (iVar1 == 0)) {
      pHVar4 = param_1;
      FUN_18000feec(param_1,0);
      FUN_18000f5f0(CONCAT71((int7)((ulonglong)pHVar4 >> 8),param_3 != 0));
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar2 = FUN_18000f488(param_1,param_2,param_3);
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
  FUN_18000f670(param_1,param_2,param_3);
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
                    // WARNING: Could not recover jumptable at 0x00018000f881. Too many branches
                    // WARNING: Treating indirect jump as call
  TerminateProcess(pvVar1,0xc0000409);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_18000f888(void)

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
  *(undefined8 *)(puVar3 + -8) = 0x18000f8b3;
  capture_previous_context((PCONTEXT)&DAT_18001ab00);
  _DAT_18001aa70 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18001ab98 = puVar3 + 0x40;
  _DAT_18001ab80 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18001aa60 = 0xc0000409;
  _DAT_18001aa64 = 1;
  _DAT_18001aa78 = 1;
  DAT_18001aa80 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180019240;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180019280;
  *(undefined8 *)(puVar3 + -8) = 0x18000f955;
  DAT_18001abf8 = _DAT_18001aa70;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180011658);
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



undefined8 * FUN_18000f9d0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



void FUN_18000f9f0(void)

{
  undefined8 local_28 [5];
  
  FUN_18000f9d0(local_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180015bf8);
}



// WARNING: Removing unreachable block (ram,0x00018000fb33)
// WARNING: Removing unreachable block (ram,0x00018000fb16)
// WARNING: Removing unreachable block (ram,0x00018000fae5)
// WARNING: Removing unreachable block (ram,0x00018000fa4c)
// WARNING: Removing unreachable block (ram,0x00018000fa29)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18000fa10(void)

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
    _DAT_1800192a0 = 0xffffffffffffffff;
    uVar8 = *puVar2 & 0xfff3ff0;
    _DAT_180019298 = 0x8000;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18001afd4 = DAT_18001afd4 | 1;
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
      DAT_18001afd4 = DAT_18001afd4 | 2;
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
  _DAT_180019290 = 1;
  DAT_180019294 = 2;
  uVar9 = DAT_180019288 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    _DAT_180019290 = 2;
    DAT_180019294 = 6;
    uVar9 = DAT_180019288 & 0xffffffffffffffee;
  }
  DAT_180019288 = uVar9;
  if ((uVar5 >> 0x1b & 1) != 0) {
    uVar9 = xinuse(0);
    uVar9 = in_XCR0 & uVar9 & 0xffffffff;
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar7 = (byte)uVar9, (bVar7 & 6) == 6)) {
      _DAT_180019290 = 3;
      uVar6 = DAT_180019288;
      uVar5 = DAT_180019294 | 8;
      if ((uVar8 & 0x20) != 0) {
        _DAT_180019290 = 5;
        uVar6 = DAT_180019288 & 0xfffffffffffffffd;
        uVar5 = DAT_180019294 | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar7 & 0xe0) == 0xe0)) {
          DAT_180019294 = DAT_180019294 | 0x68;
          _DAT_180019290 = 6;
          uVar6 = DAT_180019288 & 0xffffffffffffffd9;
          uVar5 = DAT_180019294;
        }
      }
      DAT_180019294 = uVar5;
      DAT_180019288 = uVar6;
      if ((uVar10 >> 0x17 & 1) != 0) {
        DAT_180019288 = DAT_180019288 & 0xfffffffffeffffff;
      }
      if (((uVar12 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
        _DAT_18001afd0 = uVar11 & 0x400ff;
        DAT_180019288 = ~((ulonglong)(uVar11 >> 0x10 & 7) | 0x1000028) & DAT_180019288;
        if (1 < _DAT_18001afd0) {
          DAT_180019288 = DAT_180019288 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar12 >> 0x15 & 1) != 0) && ((uVar9 >> 0x13 & 1) != 0)) {
      DAT_180019288 = DAT_180019288 & 0xffffffffffffff7f;
    }
  }
  return 0;
}



undefined8 FUN_18000fcdc(void)

{
  return 1;
}



// Library Function - Single Match
//  __scrt_is_ucrt_dll_in_use
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_1800192b0 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_18000fcf0(void)

{
  _DAT_18001afd8 = 0;
  return;
}



void FUN_18000fcf8(undefined4 param_1)

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
  *(undefined8 *)(puVar4 + -8) = 0x18000fd2c;
  FUN_18000fcf0();
  *(undefined8 *)(puVar4 + -8) = 0x18000fd3d;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18000fd47;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x18000fd61;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x18000fda2;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18000fdd4;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x18000fdf6;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x18000fe13;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x18000fe1e;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x18000fe2f;
    FUN_18000fcf0();
  }
  return;
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
  
  if (DAT_180019240 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_180019240 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_180019240 == 0x2b992ddfa232) {
      DAT_180019240 = 0x2b992ddfa233;
    }
  }
  DAT_180019280 = ~DAT_180019240;
  return;
}



undefined8 FUN_18000feec(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
}



void FUN_18000ff10(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000ff17. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeSListHead(&DAT_18001afe0);
  return;
}



void FUN_18000ff20(void)

{
  __std_type_info_destroy_list(&DAT_18001afe0);
  return;
}



undefined * FUN_18000ff2c(void)

{
  return &DAT_18001aff0;
}



undefined * FUN_18000ff34(void)

{
  return &DAT_18001aff8;
}



void FUN_18000ff3c(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_18000ff2c();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_18000ff34();
  *puVar1 = *puVar1 | 2;
  return;
}



undefined * FUN_18000ff58(void)

{
  return &DAT_18001b2e0;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_18000ff60(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1800147c8; puVar1 < &DAT_1800147c8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_18000ff9c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1800147d8; puVar1 < &DAT_1800147d8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



void __CxxFrameHandler4(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000ffe0. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler4();
  return;
}



void _purecall(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000ffec. Too many branches
                    // WARNING: Treating indirect jump as call
  _purecall();
  return;
}



void __current_exception(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000fff8. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception();
  return;
}



void __current_exception_context(void)

{
                    // WARNING: Could not recover jumptable at 0x00018000fffe. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception_context();
  return;
}



void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    // WARNING: Could not recover jumptable at 0x000180010004. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001000a. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void __std_type_info_destroy_list(void)

{
                    // WARNING: Could not recover jumptable at 0x000180010010. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_type_info_destroy_list();
  return;
}



void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x000180010016. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}



void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001001c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = malloc(_Size);
  return pvVar1;
}



int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000180010022. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _callnewh(_Size);
  return iVar1;
}



void _seh_filter_dll(void)

{
                    // WARNING: Could not recover jumptable at 0x000180010028. Too many branches
                    // WARNING: Treating indirect jump as call
  _seh_filter_dll();
  return;
}



void _configure_narrow_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001002e. Too many branches
                    // WARNING: Treating indirect jump as call
  _configure_narrow_argv();
  return;
}



void _initialize_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x000180010034. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_narrow_environment();
  return;
}



void _initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001003a. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_onexit_table();
  return;
}



void _register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x000180010040. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_onexit_function();
  return;
}



void _execute_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x000180010046. Too many branches
                    // WARNING: Treating indirect jump as call
  _execute_onexit_table();
  return;
}



void _crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001004c. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_atexit();
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000180010052. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



void terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x000180010058. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x00018001005e. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x000180010064. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



undefined1 FUN_18001006c(void)

{
  return 1;
}



undefined8 FUN_180010070(void)

{
  return 0;
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



void * __cdecl memchr(void *_Buf,int _Val,size_t _MaxCount)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001800100f3. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memchr(_Buf,_Val,_MaxCount);
  return pvVar1;
}



int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001800100f9. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001800100ff. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000180010105. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



float __cdecl atan2f(float _Y,float _X)

{
  float fVar1;
  
                    // WARNING: Could not recover jumptable at 0x00018001010b. Too many branches
                    // WARNING: Treating indirect jump as call
  fVar1 = atan2f(_Y,_X);
  return fVar1;
}



float __cdecl ceilf(float _X)

{
  float fVar1;
  
                    // WARNING: Could not recover jumptable at 0x000180010111. Too many branches
                    // WARNING: Treating indirect jump as call
  fVar1 = ceilf(_X);
  return fVar1;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x000180010130. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x000180010130. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_180010184(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;
    std::basic_ios<>::~basic_ios<>((basic_ios<> *)(param_2 + 0x140));
  }
  return;
}



void FUN_1800101ed(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    std::basic_ios<>::~basic_ios<>((basic_ios<> *)(param_2 + 0x230));
  }
  return;
}



undefined8 FUN_180010294(undefined8 param_1,longlong param_2)

{
  std::basic_ios<>::setstate
            ((basic_ios<> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x30) + 4) +
             (longlong)*(longlong **)(param_2 + 0x30)),4,true);
  return 0;
}



void FUN_180010370(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_180001750(*(longlong **)(param_2 + 0x70));
  }
  return;
}



void FUN_1800103a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001750(*(longlong **)(param_2 + 0x28));
  }
  return;
}



void FUN_1800103c6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_180001750(*(longlong **)(param_2 + 0x28));
  }
  return;
}



void FUN_180010430(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_180002710(*(longlong **)(param_2 + 0x38));
  }
  return;
}



void FUN_1800104b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180002710(*(longlong **)(param_2 + 0x28));
  }
  return;
}



void FUN_18001050c(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x20),0x20,2,FUN_180002710);
  return;
}



void FUN_1800105a4(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(param_2 + 0x20),0x40,4,FUN_1800070c0);
  return;
}



void FUN_1800106a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_180002710(*(longlong **)(param_2 + 0x60));
  }
  return;
}



bool FUN_180010768(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



void FUN_180010780(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    __ArrayUnwind(*(void **)(param_2 + 0x60),*(__uint64 *)(param_2 + 0x68),
                  *(__uint64 *)(param_2 + 0x70),*(_func_void_void_ptr **)(param_2 + 0x78));
  }
  return;
}



undefined4 FUN_1800107ac(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x40) = param_1;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x28) != -0x1f928c9d) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
  puVar2 = (undefined8 *)__current_exception();
  *puVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
  puVar2 = (undefined8 *)__current_exception_context();
  *puVar2 = uVar1;
                    // WARNING: Subroutine does not return
  terminate();
}



void FUN_18001080b(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}



void FUN_180010822(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x20));
  return;
}



void FUN_18001083b(void)

{
  FUN_18000f044();
  return;
}



void FUN_18001084f(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),FUN_18000f488,*(undefined4 *)*param_1,param_1);
  return;
}



void FUN_180010890(void)

{
  if (DAT_18001b1e8 != (longlong *)0x0) {
    (**(code **)(*DAT_18001b1e8 + 0x20))
              (DAT_18001b1e8,CONCAT71(0x18001b1,DAT_18001b1e8 != (longlong *)&DAT_18001b1b0));
    DAT_18001b1e8 = (longlong *)0x0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800108d0(void)

{
  void *pvVar1;
  
  if (DAT_1800192f8 != (void *)0x0) {
    pvVar1 = DAT_1800192f8;
    if ((0xfff < (DAT_180019308 - (longlong)DAT_1800192f8 & 0xfffffffffffffff8U)) &&
       (pvVar1 = *(void **)((longlong)DAT_1800192f8 + -8),
       0x1f < (ulonglong)((longlong)DAT_1800192f8 + (-8 - (longlong)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar1);
    DAT_1800192f8 = (void *)0x0;
    _DAT_180019300 = 0;
    DAT_180019308 = 0;
  }
  FUN_180004380(&DAT_1800192e8);
  return;
}



void FUN_180010950(void)

{
  longlong *plVar1;
  
  if (DAT_18001b270 != (longlong *)0x0) {
    FUN_180006fc0(DAT_18001b270,DAT_18001b278);
    plVar1 = DAT_18001b270;
    if ((0xfff < (DAT_18001b280 - (longlong)DAT_18001b270 & 0xffffffffffffffe0U)) &&
       (plVar1 = (longlong *)DAT_18001b270[-1],
       0x1f < (ulonglong)((longlong)DAT_18001b270 + (-8 - (longlong)plVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(plVar1);
    DAT_18001b270 = (longlong *)0x0;
    DAT_18001b278 = (longlong *)0x0;
    DAT_18001b280 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1800109d0(void)

{
  void *pvVar1;
  
  if (DAT_18001b248 != (void *)0x0) {
    pvVar1 = DAT_18001b248;
    if ((0xfff < (DAT_18001b258 - (longlong)DAT_18001b248 & 0xfffffffffffffff8U)) &&
       (pvVar1 = *(void **)((longlong)DAT_18001b248 + -8),
       0x1f < (ulonglong)((longlong)DAT_18001b248 + (-8 - (longlong)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar1);
    DAT_18001b248 = (void *)0x0;
    _DAT_18001b250 = 0;
    DAT_18001b258 = 0;
  }
  FUN_1800087d0(&DAT_18001b238);
  return;
}



// WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall

void FUN_180010a5c(void)

{
  undefined8 *_Memory;
  undefined8 *puVar1;
  
  while (_Memory = DAT_18001a9f0, DAT_18001a9f0 != (undefined8 *)0x0) {
    puVar1 = DAT_18001a9f0 + 1;
    DAT_18001a9f0 = (undefined8 *)*DAT_18001a9f0;
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)*puVar1 + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    free(_Memory);
  }
  return;
}


