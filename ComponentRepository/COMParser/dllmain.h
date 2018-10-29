// dllmain.h : Declaration of module class.

class CCOMParserModule : public ATL::CAtlDllModuleT< CCOMParserModule >
{
public :
	DECLARE_LIBID(LIBID_COMParserLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COMPARSER, "{77f22e4f-aec3-4d95-b801-c580301ef089}")
};

extern class CCOMParserModule _AtlModule;
