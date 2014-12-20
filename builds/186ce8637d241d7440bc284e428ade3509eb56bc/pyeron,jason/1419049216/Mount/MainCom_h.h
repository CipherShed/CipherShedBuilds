

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sat Dec 20 03:57:52 2014
 */
/* Compiler settings for .\MainCom.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __MainCom_h_h__
#define __MainCom_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICipherShedMainCom_FWD_DEFINED__
#define __ICipherShedMainCom_FWD_DEFINED__
typedef interface ICipherShedMainCom ICipherShedMainCom;
#endif 	/* __ICipherShedMainCom_FWD_DEFINED__ */


#ifndef __CipherShedMainCom_FWD_DEFINED__
#define __CipherShedMainCom_FWD_DEFINED__

#ifdef __cplusplus
typedef class CipherShedMainCom CipherShedMainCom;
#else
typedef struct CipherShedMainCom CipherShedMainCom;
#endif /* __cplusplus */

#endif 	/* __CipherShedMainCom_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "Password.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CipherShedMainCom_LIBRARY_DEFINED__
#define __CipherShedMainCom_LIBRARY_DEFINED__

/* library CipherShedMainCom */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_CipherShedMainCom;

#ifndef __ICipherShedMainCom_INTERFACE_DEFINED__
#define __ICipherShedMainCom_INTERFACE_DEFINED__

/* interface ICipherShedMainCom */
/* [helpstring][oleautomation][object][uuid] */ 


EXTERN_C const IID IID_ICipherShedMainCom;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("252C9DE6-D4B9-4A59-8A10-9CA73217B3D0")
    ICipherShedMainCom : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE AnalyzeKernelMiniDump( 
            LONG_PTR hwndDlg) = 0;
        
        virtual int STDMETHODCALLTYPE BackupVolumeHeader( 
            LONG_PTR hwndDlg,
            BOOL bRequireConfirmation,
            BSTR lpszVolume) = 0;
        
        virtual DWORD STDMETHODCALLTYPE CallDriver( 
            DWORD ioctl,
            BSTR input,
            BSTR *output) = 0;
        
        virtual int STDMETHODCALLTYPE ChangePassword( 
            BSTR volumePath,
            Password *oldPassword,
            Password *newPassword,
            int pkcs5,
            LONG_PTR hWnd) = 0;
        
        virtual DWORD STDMETHODCALLTYPE CopyFile( 
            BSTR sourceFile,
            BSTR destinationFile) = 0;
        
        virtual DWORD STDMETHODCALLTYPE DeleteFile( 
            BSTR file) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsPagingFileActive( 
            BOOL checkNonWindowsPartitionsOnly) = 0;
        
        virtual DWORD STDMETHODCALLTYPE ReadWriteFile( 
            BOOL write,
            BOOL device,
            BSTR filePath,
            BSTR *bufferBstr,
            unsigned __int64 offset,
            unsigned __int32 size,
            DWORD *sizeDone) = 0;
        
        virtual DWORD STDMETHODCALLTYPE RegisterFilterDriver( 
            BOOL registerDriver,
            int filterType) = 0;
        
        virtual DWORD STDMETHODCALLTYPE RegisterSystemFavoritesService( 
            BOOL registerService) = 0;
        
        virtual int STDMETHODCALLTYPE RestoreVolumeHeader( 
            LONG_PTR hwndDlg,
            BSTR lpszVolume) = 0;
        
        virtual DWORD STDMETHODCALLTYPE SetDriverServiceStartType( 
            DWORD startType) = 0;
        
        virtual DWORD STDMETHODCALLTYPE WriteLocalMachineRegistryDwordValue( 
            BSTR keyPath,
            BSTR valueName,
            DWORD value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICipherShedMainComVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICipherShedMainCom * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICipherShedMainCom * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICipherShedMainCom * This);
        
        void ( STDMETHODCALLTYPE *AnalyzeKernelMiniDump )( 
            ICipherShedMainCom * This,
            LONG_PTR hwndDlg);
        
        int ( STDMETHODCALLTYPE *BackupVolumeHeader )( 
            ICipherShedMainCom * This,
            LONG_PTR hwndDlg,
            BOOL bRequireConfirmation,
            BSTR lpszVolume);
        
        DWORD ( STDMETHODCALLTYPE *CallDriver )( 
            ICipherShedMainCom * This,
            DWORD ioctl,
            BSTR input,
            BSTR *output);
        
        int ( STDMETHODCALLTYPE *ChangePassword )( 
            ICipherShedMainCom * This,
            BSTR volumePath,
            Password *oldPassword,
            Password *newPassword,
            int pkcs5,
            LONG_PTR hWnd);
        
        DWORD ( STDMETHODCALLTYPE *CopyFile )( 
            ICipherShedMainCom * This,
            BSTR sourceFile,
            BSTR destinationFile);
        
        DWORD ( STDMETHODCALLTYPE *DeleteFile )( 
            ICipherShedMainCom * This,
            BSTR file);
        
        BOOL ( STDMETHODCALLTYPE *IsPagingFileActive )( 
            ICipherShedMainCom * This,
            BOOL checkNonWindowsPartitionsOnly);
        
        DWORD ( STDMETHODCALLTYPE *ReadWriteFile )( 
            ICipherShedMainCom * This,
            BOOL write,
            BOOL device,
            BSTR filePath,
            BSTR *bufferBstr,
            unsigned __int64 offset,
            unsigned __int32 size,
            DWORD *sizeDone);
        
        DWORD ( STDMETHODCALLTYPE *RegisterFilterDriver )( 
            ICipherShedMainCom * This,
            BOOL registerDriver,
            int filterType);
        
        DWORD ( STDMETHODCALLTYPE *RegisterSystemFavoritesService )( 
            ICipherShedMainCom * This,
            BOOL registerService);
        
        int ( STDMETHODCALLTYPE *RestoreVolumeHeader )( 
            ICipherShedMainCom * This,
            LONG_PTR hwndDlg,
            BSTR lpszVolume);
        
        DWORD ( STDMETHODCALLTYPE *SetDriverServiceStartType )( 
            ICipherShedMainCom * This,
            DWORD startType);
        
        DWORD ( STDMETHODCALLTYPE *WriteLocalMachineRegistryDwordValue )( 
            ICipherShedMainCom * This,
            BSTR keyPath,
            BSTR valueName,
            DWORD value);
        
        END_INTERFACE
    } ICipherShedMainComVtbl;

    interface ICipherShedMainCom
    {
        CONST_VTBL struct ICipherShedMainComVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICipherShedMainCom_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICipherShedMainCom_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICipherShedMainCom_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICipherShedMainCom_AnalyzeKernelMiniDump(This,hwndDlg)	\
    ( (This)->lpVtbl -> AnalyzeKernelMiniDump(This,hwndDlg) ) 

#define ICipherShedMainCom_BackupVolumeHeader(This,hwndDlg,bRequireConfirmation,lpszVolume)	\
    ( (This)->lpVtbl -> BackupVolumeHeader(This,hwndDlg,bRequireConfirmation,lpszVolume) ) 

#define ICipherShedMainCom_CallDriver(This,ioctl,input,output)	\
    ( (This)->lpVtbl -> CallDriver(This,ioctl,input,output) ) 

#define ICipherShedMainCom_ChangePassword(This,volumePath,oldPassword,newPassword,pkcs5,hWnd)	\
    ( (This)->lpVtbl -> ChangePassword(This,volumePath,oldPassword,newPassword,pkcs5,hWnd) ) 

#define ICipherShedMainCom_CopyFile(This,sourceFile,destinationFile)	\
    ( (This)->lpVtbl -> CopyFile(This,sourceFile,destinationFile) ) 

#define ICipherShedMainCom_DeleteFile(This,file)	\
    ( (This)->lpVtbl -> DeleteFile(This,file) ) 

#define ICipherShedMainCom_IsPagingFileActive(This,checkNonWindowsPartitionsOnly)	\
    ( (This)->lpVtbl -> IsPagingFileActive(This,checkNonWindowsPartitionsOnly) ) 

#define ICipherShedMainCom_ReadWriteFile(This,write,device,filePath,bufferBstr,offset,size,sizeDone)	\
    ( (This)->lpVtbl -> ReadWriteFile(This,write,device,filePath,bufferBstr,offset,size,sizeDone) ) 

#define ICipherShedMainCom_RegisterFilterDriver(This,registerDriver,filterType)	\
    ( (This)->lpVtbl -> RegisterFilterDriver(This,registerDriver,filterType) ) 

#define ICipherShedMainCom_RegisterSystemFavoritesService(This,registerService)	\
    ( (This)->lpVtbl -> RegisterSystemFavoritesService(This,registerService) ) 

#define ICipherShedMainCom_RestoreVolumeHeader(This,hwndDlg,lpszVolume)	\
    ( (This)->lpVtbl -> RestoreVolumeHeader(This,hwndDlg,lpszVolume) ) 

#define ICipherShedMainCom_SetDriverServiceStartType(This,startType)	\
    ( (This)->lpVtbl -> SetDriverServiceStartType(This,startType) ) 

#define ICipherShedMainCom_WriteLocalMachineRegistryDwordValue(This,keyPath,valueName,value)	\
    ( (This)->lpVtbl -> WriteLocalMachineRegistryDwordValue(This,keyPath,valueName,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICipherShedMainCom_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CipherShedMainCom;

#ifdef __cplusplus

class DECLSPEC_UUID("CECBC0EE-78D9-41E6-BCF1-BC222BB224BA")
CipherShedMainCom;
#endif
#endif /* __CipherShedMainCom_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


