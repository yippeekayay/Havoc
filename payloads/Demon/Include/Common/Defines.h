#ifndef DEMON_STRINGS_H
#define DEMON_STRINGS_H

#define PROCESS_ARCH_UNKNOWN				0
#define PROCESS_ARCH_X86					1
#define PROCESS_ARCH_X64					2
#define PROCESS_ARCH_IA64					3

#ifdef _WIN64
#define PROCESS_AGENT_ARCH PROCESS_ARCH_X64
#else
#define PROCESS_AGENT_ARCH PROCESS_ARCH_X86
#endif

/* Win32 Functions */
#define H_FUNC_LDRLOADDLL                        0x9e456a43
#define H_FUNC_LDRGETPROCEDUREADDRESS            0xfce76bb6
#define H_FUNC_NTADDBOOTENTRY                    0x8cfcc776
#define H_FUNC_NTALLOCATEVIRTUALMEMORY           0xf783b8ec
#define H_FUNC_NTFREEVIRTUALMEMORY               0x2802c609
#define H_FUNC_NTWRITEVIRTUALMEMORY              0xc3170192
#define H_FUNC_NTSETINFORMATIONVIRTUALMEMORY     0x946ac239
#define H_FUNC_NTQUERYVIRTUALMEMORY              0x10c0e85d
#define H_FUNC_NTOPENPROCESSTOKEN                0x350dca99
#define H_FUNC_NTOPENTHREADTOKEN                 0x803347d2
#define H_FUNC_NTQUERYOBJECT                     0xc85dc9b4
#define H_FUNC_NTOPENPROCESS                     0x4b82f718
#define H_FUNC_NTOPENTHREAD                      0x968e0cb1
#define H_FUNC_NTSETCONTEXTTHREAD                0xffa0bf10
#define H_FUNC_NTGETCONTEXTTHREAD                0x6d22f884
#define H_FUNC_NTCLOSE                           0x40d6e69d
#define H_FUNC_NTCONTINUE                        0xfc3a6c2c
#define H_FUNC_NTSETEVENT                        0xcb87d8b5
#define H_FUNC_NTCREATEEVENT                     0x28d3233d
#define H_FUNC_NTWAITFORSINGLEOBJECT             0xe8ac0c3c
#define H_FUNC_NTSIGNALANDWAITFORSINGLEOBJECT    0x78983aed
#define H_FUNC_NTGETNEXTTHREAD                   0xa410fb9e
#define H_FUNC_NTRESUMETHREAD                    0x5a4bc3d0
#define H_FUNC_NTSUSPENDTHREAD                   0xe43d93e1
#define H_FUNC_NTDUPLICATEOBJECT                 0x4441d859
#define H_FUNC_NTQUERYINFORMATIONTHREAD          0xf5a0461b
#define H_FUNC_NTCREATETHREADEX                  0xaf18cfb0
#define H_FUNC_NTQUEUEAPCTHREAD                  0xa6664b8
#define H_FUNC_NTQUERYSYSTEMINFORMATION          0x7bc23928
#define H_FUNC_NTQUERYINFORMATIONTOKEN           0xf371fe4
#define H_FUNC_NTQUERYINFORMATIONPROCESS         0x8cdc5dc2
#define H_FUNC_NTSETINFORMATIONTHREAD            0xc3c03f1
#define H_FUNC_NTSETINFORMATIONVIRTUALMEMORY     0x946ac239
#define H_FUNC_NTPROTECTVIRTUALMEMORY            0x50e92888
#define H_FUNC_NTREADVIRTUALMEMORY               0xa3288103
#define H_FUNC_NTFREEVIRTUALMEMORY               0x2802c609
#define H_FUNC_NTTERMINATETHREAD                 0xccf58808
#define H_FUNC_NTWRITEVIRTUALMEMORY              0xc3170192
#define H_FUNC_NTDUPLICATETOKEN                  0x8e160b23
#define H_FUNC_NTALERTRESUMETHREAD               0x5ba11e28
#define H_FUNC_NTTESTALERT                       0x858a32df
#define H_FUNC_RTLALLOCATEHEAP                   0x3be94c5a
#define H_FUNC_RTLREALLOCATEHEAP                 0xaf740371
#define H_FUNC_RTLFREEHEAP                       0x73a9e4d7
#define H_FUNC_RTLEXITUSERPROCESS                0x57c72f
#define H_FUNC_RTLRANDOMEX                       0x7f1224f5
#define H_FUNC_RTLRANDOMEX                       0x7f1224f5
#define H_FUNC_RTLNTSTATUSTODOSERROR             0x39d7c890
#define H_FUNC_RTLGETVERSION                     0xdde5cdd
#define H_FUNC_RTLADDVECTOREDEXCEPTIONHANDLER    0x2df06c89
#define H_FUNC_RTLREMOVEVECTOREDEXCEPTIONHANDLER 0xad1b018e
#define H_FUNC_RTLCREATETIMERQUEUE               0x50ef3c31
#define H_FUNC_RTLDELETETIMERQUEUE               0xeec188b0
#define H_FUNC_RTLCREATETIMER                    0x1877faec
#define H_FUNC_RTLREGISTERWAIT                   0x600fe691
#define H_FUNC_RTLCAPTURECONTEXT                 0xeba8d910
#define H_FUNC_RTLCOPYMAPPEDMEMORY               0x5b56b302
#define H_FUNC_RTLFILLMEMORY                     0x89ab5f57
#define H_FUNC_RTLEXITUSERTHREAD                 0x2f6db5e8
#define H_FUNC_RTLSUBAUTHORITYSID                0x90ed208a
#define H_FUNC_RTLSUBAUTHORITYCOUNTSID           0x4b23c9d3

#define H_FUNC_GETTICKCOUNT                      0xa28ae999
#define H_FUNC_GETCOMPUTERNAMEEXA                0xec725c53
#define H_FUNC_WAITFORSINGLEOBJECTEX             0x512e1b97
#define H_FUNC_VIRTUALPROTECT                    0xe857500d
#define H_FUNC_GETMODULEHANDLEA                  0xd908e1d8
#define H_FUNC_GETPROCADDRESS                    0xdecfc1bf
#define H_FUNC_GETCURRENTDIRECTORYW              0x3d54a9f4
#define H_FUNC_FINDFIRSTFILEW                    0xf67b31a5
#define H_FUNC_FINDNEXTFILEW                     0x3626633c
#define H_FUNC_FINDCLOSE                         0x42ade43c
#define H_FUNC_FILETIMETOSYSTEMTIME              0x7a047cab
#define H_FUNC_SYSTEMTIMETOTZSPECIFICLOCALTIME   0x77b0aa6a
#define H_FUNC_OUTPUTDEBUGSTRINGA                0x490fc1d5
#define H_FUNC_DEBUGBREAK                        0xd08caa91
#define H_FUNC_SYSTEMFUNCTION032                 0xe58c8805
#define H_FUNC_LOOKUPACCOUNTSIDW                 0xd51fdfa3
#define H_FUNC_IMPERSONATELOGGEDONUSER           0x47ec82fa
#define H_FUNC_LOGONUSEREXW                      0x6ba383b7
#define H_FUNC_VSNPRINTF                         0xe212f2ef
#define H_FUNC_GETADAPTERSINFO                   0x37cada45
#define H_FUNC_WINHTTPOPEN                       0x613eace5
#define H_FUNC_WINHTTPCONNECT                    0x81e0c81d
#define H_FUNC_WINHTTPOPENREQUEST                0xb06d900e
#define H_FUNC_WINHTTPSETOPTION                  0x5b6ad378
#define H_FUNC_WINHTTPSENDREQUEST                0x7739d0e6
#define H_FUNC_WINHTTPRECEIVERESPONSE            0xae351ae5
#define H_FUNC_WINHTTPADDREQUESTHEADERS          0xa2c0b0e1
#define H_FUNC_WINHTTPREADDATA                   0x75064b89
#define H_FUNC_WINHTTPQUERYHEADERS               0xcc1a89c5
#define H_FUNC_WINHTTPCLOSEHANDLE                0xa7355f15
#define H_FUNC_VIRTUALPROTECTEX                  0x5b6b908a
#define H_FUNC_LOCALALLOC                        0x72073b5b
#define H_FUNC_LOCALREALLOC                      0x1c44e892
#define H_FUNC_LOCALFREE                         0x32030e92
#define H_FUNC_CREATEREMOTETHREAD                0x252b157d
#define H_FUNC_CREATETOOLHELP32SNAPSHOT          0xf37ac035
#define H_FUNC_PROCESS32FIRSTW                   0xb06fa1a8
#define H_FUNC_PROCESS32NEXTW                    0x43f6e75f
#define H_FUNC_CREATEPIPE                        0x9694e9e7
#define H_FUNC_CREATEPROCESSW                    0xfbaf90cf
#define H_FUNC_CREATEFILEW                       0x687d2110
#define H_FUNC_GETFULLPATHNAMEW                  0xa6a2249d
#define H_FUNC_GETFILESIZE                       0x7b813820
#define H_FUNC_CREATENAMEDPIPEW                  0xa05e2a83
#define H_FUNC_CONVERTFIBERTOTHREAD              0x11b30049
#define H_FUNC_CREATEFIBEREX                     0x7b94a3fe
#define H_FUNC_READFILE                          0x84d15061
#define H_FUNC_VIRTUALALLOCEX                    0x5775bd54
#define H_FUNC_WAITFORSINGLEOBJECTEX             0x512e1b97
#define H_FUNC_THREAD32NEXT                      0x85585ce1
#define H_FUNC_THREAD32FIRST                     0x2fd54d2a
#define H_FUNC_GETCOMPUTERNAMEEXA                0xec725c53
#define H_FUNC_EXITPROCESS                       0xd154167e
#define H_FUNC_GETEXITCODEPROCESS                0xa7c5fd39
#define H_FUNC_GETEXITCODETHREAD                 0x538852b2
#define H_FUNC_GETTICKCOUNT                      0xa28ae999
#define H_FUNC_READPROCESSMEMORY                 0x5c3f8699
#define H_FUNC_CONVERTTHREADTOFIBEREX            0xd139cc66
#define H_FUNC_SWITCHTOFIBER                     0x14fc3cc2
#define H_FUNC_DELETEFIBER                       0x99beb7a0
#define H_FUNC_ALLOCCONSOLE                      0x3c2fba83
#define H_FUNC_FREECONSOLE                       0xa4e66f3a
#define H_FUNC_GETCONSOLEWINDOW                  0xc2c4270
#define H_FUNC_GETSTDHANDLE                      0x9ab85b1c
#define H_FUNC_SETSTDHANDLE                      0xe620bba8
#define H_FUNC_WAITNAMEDPIPEW                    0x50ac3c84
#define H_FUNC_PEEKNAMEDPIPE                     0xd5312e5d
#define H_FUNC_DISCONNECTNAMEDPIPE               0x342bd542
#define H_FUNC_WRITEFILE                         0xf1d207d0
#define H_FUNC_CONNECTNAMEDPIPE                  0x436e4c62
#define H_FUNC_FREELIBRARY                       0x4ad9b11c
#define H_FUNC_GETCURRENTDIRECTORYW              0x3d54a9f4
#define H_FUNC_GETFILEATTRIBUTESW                0xf30aab23
#define H_FUNC_FINDFIRSTFILEW                    0xf67b31a5
#define H_FUNC_FINDNEXTFILEW                     0x3626633c
#define H_FUNC_FINDCLOSE                         0x42ade43c
#define H_FUNC_FILETIMETOSYSTEMTIME              0x7a047cab
#define H_FUNC_SYSTEMTIMETOTZSPECIFICLOCALTIME   0x77b0aa6a
#define H_FUNC_REMOVEDIRECTORYW                  0xb6af709f
#define H_FUNC_DELETEFILEW                       0x99bee22f
#define H_FUNC_CREATEDIRECTORYW                  0xb717be65
#define H_FUNC_COPYFILEW                         0x39e8f317
#define H_FUNC_SETCURRENTDIRECTORYW              0xcf2ad680
#define H_FUNC_WOW64DISABLEWOW64FSREDIRECTION    0x40750b38
#define H_FUNC_WOW64REVERTWOW64FSREDIRECTION     0xc993b9c
#define H_FUNC_GETMODULEHANDLEA                  0xd908e1d8
#define H_FUNC_GETSYSTEMTIMEASFILETIME           0x7a14b61c
#define H_FUNC_GETLOCALTIME                      0x71842fbf
#define H_FUNC_DUPLICATEHANDLE                   0x95f45a6c
#define H_FUNC_TERMINATEPROCESS                  0xf3c179ad
#define H_FUNC_VIRTUALPROTECT                    0xe857500d
#define H_FUNC_GETTOKENINFORMATION               0x10357d2c
#define H_FUNC_CREATEPROCESSWITHTOKENW           0xf3e5480c
#define H_FUNC_CREATEPROCESSWITHLOGONW           0xe139fc0a
#define H_FUNC_REVERTTOSELF                      0x7292758a
#define H_FUNC_GETUSERNAMEA                      0xfca17e46
#define H_FUNC_LOGONUSERW                        0x5ed5d61a
#define H_FUNC_LOOKUPACCOUNTSIDA                 0xd51fdf8d
#define H_FUNC_LOOKUPACCOUNTSIDW                 0xd51fdfa3
#define H_FUNC_OPENTHREADTOKEN                   0xe249d070
#define H_FUNC_OPENPROCESSTOKEN                  0xd9f566f7
#define H_FUNC_IMPERSONATELOGGEDONUSER           0x47ec82fa
#define H_FUNC_ADJUSTTOKENPRIVILEGES             0x677fbb8b
#define H_FUNC_LOOKUPPRIVILEGENAMEA              0x843a85e8
#define H_FUNC_SYSTEMFUNCTION032                 0xe58c8805
#define H_FUNC_FREESID                           0xd47b1967
#define H_FUNC_SETSECURITYDESCRIPTORSACL         0x5c0cc90b
#define H_FUNC_SETSECURITYDESCRIPTORDACL         0x5c048f5c
#define H_FUNC_INITIALIZESECURITYDESCRIPTOR      0x31e175ce
#define H_FUNC_ADDMANDATORYACE                   0x9fb18806
#define H_FUNC_INITIALIZEACL                     0x136c4367
#define H_FUNC_ALLOCATEANDINITIALIZESID          0xa9174a4f
#define H_FUNC_CHECKTOKENMEMBERSHIP              0x1cf324d0
#define H_FUNC_SETENTRIESINACLW                  0xd396389
#define H_FUNC_SETTHREADTOKEN                    0xc9f4966a
#define H_FUNC_LSANTSTATUSTOWINERROR             0x9d5beb66
#define H_FUNC_EQUALSID                          0x4fa8b17d
#define H_FUNC_CONVERTSIDTOSTRINGSIDW            0x2fb2f7d7
#define H_FUNC_LOOKUPPRIVILEGEVALUEA             0x1e344064
#define H_FUNC_SAFEARRAYACCESSDATA               0xf6a0d34f
#define H_FUNC_SAFEARRAYUNACCESSDATA             0xe981b312
#define H_FUNC_SAFEARRAYCREATE                   0x53ec8017
#define H_FUNC_SAFEARRAYPUTELEMENT               0x311f586
#define H_FUNC_SAFEARRAYCREATEVECTOR             0x6b6a636a
#define H_FUNC_SAFEARRAYDESTROY                  0x12b6aed
#define H_FUNC_SYSALLOCSTRING                    0x3351eb46
#define H_FUNC_COMMANDLINETOARGVW                0xec6ba0d6
#define H_FUNC_VSNPRINTF                         0xe212f2ef
#define H_FUNC_SHOWWINDOW                        0x29bbc91e
#define H_FUNC_GETSYSTEMMETRICS                  0x287c6401
#define H_FUNC_GETDC                             0xd2b106c
#define H_FUNC_RELEASEDC                         0x6fbc050d
#define H_FUNC_GETCURRENTOBJECT                  0xfe6f663f
#define H_FUNC_GETOBJECTW                        0xa04fbb33
#define H_FUNC_CREATECOMPATIBLEDC                0xd0b24920
#define H_FUNC_CREATEDIBSECTION                  0x2c2309dd
#define H_FUNC_SELECTOBJECT                      0x96a6b43c
#define H_FUNC_BITBLT                            0xa72badc6
#define H_FUNC_DELETEOBJECT                      0xe619cf2f
#define H_FUNC_DELETEDC                          0xb2fa1ebf
#define H_FUNC_SETPROCESSVALIDCALLTARGETS        0x647d9236
#define H_FUNC_CLRCREATEINSTANCE                 0x2303b88f
#define H_FUNC_GETADAPTERSINFO                   0x37cada45
#define H_FUNC_NETLOCALGROUPENUM                 0x910ca519
#define H_FUNC_NETGROUPENUM                      0x11254b4e
#define H_FUNC_NETUSERENUM                       0xeb3b8f20
#define H_FUNC_NETWKSTAUSERENUM                  0x6bec8d0a
#define H_FUNC_NETSESSIONENUM                    0xf155c7e5
#define H_FUNC_NETSHAREENUM                      0xef26c94
#define H_FUNC_NETAPIBUFFERFREE                  0x694e2662
#define H_FUNC_WSASTARTUP                        0x142e89c3
#define H_FUNC_WSACLEANUP                        0x32206eb8
#define H_FUNC_WSASOCKETA                        0x8a4d8fa
#define H_FUNC_WSAGETLASTERROR                   0x9c1d912e
#define H_FUNC_IOCTLSOCKET                       0xd5e978a9
#define H_FUNC_BIND                              0x7c828162
#define H_FUNC_LISTEN                            0xbe7f0354
#define H_FUNC_ACCEPT                            0xa460acf5
#define H_FUNC_CLOSESOCKET                       0x185953a4
#define H_FUNC_RECV                              0x7c8b3515
#define H_FUNC_SEND                              0x7c8bc2cf
#define H_FUNC_CONNECT                           0xe73478ef
#define H_FUNC_GETADDRINFO                       0x4b91706c
#define H_FUNC_FREEADDRINFO                      0x307204e
#define H_FUNC_LSAREGISTERLOGONPROCESS           0xd8f30a28
#define H_FUNC_LSALOOKUPAUTHENTICATIONPACKAGE    0x876cc00b
#define H_FUNC_LSADEREGISTERLOGONPROCESS         0x8aba5ef1
#define H_FUNC_LSACONNECTUNTRUSTED               0x1da98b7d
#define H_FUNC_LSAFREERETURNBUFFER               0x916b1321
#define H_FUNC_LSACALLAUTHENTICATIONPACKAGE      0x6d1a042d
#define H_FUNC_LSAGETLOGONSESSIONDATA            0x1c698f42
#define H_FUNC_LSAENUMERATELOGONSESSIONS         0xbca01141
#define H_FUNC_SLEEP                             0xe07cd7e
#define H_FUNC_CREATETHREAD                      0x98baab11

// Beacon API
#define H_COFFAPI_BEACONDATAPARSER                0xe2494ba2
#define H_COFFAPI_BEACONDATAINT                   0xaf1afdd2
#define H_COFFAPI_BEACONDATASHORT                 0xe2835ef7
#define H_COFFAPI_BEACONDATALENGTH                0x22641d29
#define H_COFFAPI_BEACONDATAEXTRACT               0x80d46722

#define H_COFFAPI_BEACONFORMATALLOC               0x4caae0e1
#define H_COFFAPI_BEACONFORMATRESET               0x4ddac759
#define H_COFFAPI_BEACONFORMATFREE                0x7e749f38
#define H_COFFAPI_BEACONFORMATAPPEND              0xe25167ce
#define H_COFFAPI_BEACONFORMATPRINTF              0x056f4aa9
#define H_COFFAPI_BEACONFORMATTOSTRING            0xb59f4df0
#define H_COFFAPI_BEACONFORMATINT                 0x3a229cc1

#define H_COFFAPI_BEACONPRINTF                    0x700d8660
#define H_COFFAPI_BEACONOUTPUT                    0x6df4b81e
#define H_COFFAPI_BEACONUSETOKEN                  0x889e48bb
#define H_COFFAPI_BEACONREVERTTOKEN               0xf2744ba6
#define H_COFFAPI_BEACONISADMIN                   0x566264d2
#define H_COFFAPI_BEACONGETSPAWNTO                0x1e7c9fb9
#define H_COFFAPI_BEACONSPAWNTEMPORARYPROCESS     0xd6c57438
#define H_COFFAPI_BEACONINJECTPROCESS             0x0ea75b09
#define H_COFFAPI_BEACONINJECTTEMPORARYPROCESS    0x9e22498c
#define H_COFFAPI_BEACONCLEANUPPROCESS            0xcee62b74

#define H_COFFAPI_TOWIDECHAR                      0x59fcf3cf
#define H_COFFAPI_LOADLIBRARYA                    0x5fbff0fb
#define H_COFFAPI_GETPROCADDRESS                  0xcf31bb1f
#define H_COFFAPI_GETMODULEHANDLE                 0x5a153f58
#define H_COFFAPI_FREELIBRARY                     0x30eece3c
#define H_COFFAPI_LOCALFREE                       0xa66df372

#define H_MODULE_KERNEL32                           0xadd31df0
#define H_MODULE_NTDLL                              0x70e61753

#endif
