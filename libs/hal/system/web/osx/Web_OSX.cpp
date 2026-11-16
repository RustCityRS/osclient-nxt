// libs/hal/system/web/osx/Web_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.web

namespace jag {
    class Web {
    public:
        void
        ParseKeyValueParams(eastl::string const&,
                            eastl::vector<eastl::pair<eastl::string const, eastl::string const>, eastl::allocator>&);
        ulong OpenURL(eastl::string const&, bool);
        bool ValidateURL(eastl::string const&);
        void OpenURLOverlaid(eastl::string const&);
    };

    // 0x1007a1140, 256 bytes, placed by class name and debug map
    // Web::OpenURL(eastl::string const&, bool)
    ulong Web::OpenURL(basic_string* param_1, bool param_2) {
        undefined* puVar1;
        char cVar2;
        undefined8 uVar3;
        ID IVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        ulong uVar7;

        cVar2 = ValidateURL(param_1);
        if (cVar2 == '\0') {
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            IVar4 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar3);
            uVar3 = _objc_retainAutoreleasedReturnValue(IVar4);
            IVar4 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL, "URLWithString:", uVar3);
            uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
            (*(code*)PTR__objc_release_100ee9e60)(uVar3);
            IVar4 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace, "sharedWorkspace");
            uVar6 = _objc_retainAutoreleasedReturnValue(IVar4);
            cVar2 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar6, "openURL:", uVar5);
            puVar1 = PTR__objc_release_100ee9e60;
            uVar7 = CONCAT71((int7)((ulong)uVar3 >> 8), cVar2 != '\0');
            (*(code*)PTR__objc_release_100ee9e60)(uVar6);
            (*(code*)puVar1)(uVar5);
        } else {
            uVar7 = 0;
        }
        return uVar7 & 4294967295;
    }

    // 0x1007a1240, 80 bytes, placed by class name and debug map
    // Web::ValidateURL(eastl::string const&)
    bool Web::ValidateURL(basic_string* param_1) {
        int iVar1;
        bool bVar2;

        bVar2 = false;
        iVar1 = param_1->compare(0, 7, "http://");
        if (iVar1 != 0) {
            iVar1 = param_1->compare(0, 8, "https://");
            bVar2 = iVar1 != 0;
        }
        return bVar2;
    }

    // 0x1007a1290, 16 bytes, placed by class name and debug map
    // Web::OpenURLOverlaid(eastl::string const&)
    void Web::OpenURLOverlaid(basic_string* param_1) {
        OpenURL(param_1, false);
    }

} // namespace jag
