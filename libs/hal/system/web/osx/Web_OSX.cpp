// libs/hal/system/web/osx/Web_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.web

namespace jag {
    class Web {
    public:
        void ParseKeyValueParams(const eastl::string& str,
                                 eastl::vector<eastl::pair<eastl::string const, eastl::string const>>& pairs);
        unsigned long OpenURL(const eastl::string& str, bool arg2);
        bool ValidateURL(const eastl::string& str);
        void OpenURLOverlaid(const eastl::string& str);

        uint8_t _unknown_0[1];
    };

    // 0x1007a1140
    unsigned long Web::OpenURL(const eastl::string& str, bool arg2) {
        uint8_t* puVar1;
        uint64_t uVar3;
        ID IVar4;
        uint64_t uVar5;
        uint64_t uVar6;
        unsigned long uVar7;

        bool cVar2 = ValidateURL((eastl::string*)this);
        if (!cVar2) {
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            IVar4 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar3);
            uVar3 = _objc_retainAutoreleasedReturnValue(IVar4);
            IVar4 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL, "URLWithString:", uVar3);
            uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
            (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
            IVar4 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace, "sharedWorkspace");
            uVar6 = _objc_retainAutoreleasedReturnValue(IVar4);
            cVar2 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar6, "openURL:", uVar5);
            puVar1 = PTR__objc_release_100ee9e60;
            uVar7 = (((uint64_t)((int64_t)((unsigned long)uVar3 >> 8)) << 8) | (uint8_t)(cVar2));
            (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar6);
            (*(void (*)(...))puVar1)(uVar5);
        } else {
            uVar7 = 0;
        }
        return uVar7 & 4294967295;
    }

    // 0x1007a1240
    bool Web::ValidateURL(const eastl::string& str) {
        bool bVar2 = false;
        int iVar1 = str.compare(0, 7, "http://");
        if (iVar1 != 0) {
            iVar1 = str.compare(0, 8, "https://");
            bVar2 = iVar1 != 0;
        }
        return bVar2;
    }

    // 0x1007a1290
    void Web::OpenURLOverlaid(const eastl::string& str) {
        bool in_DL;

        OpenURL(nullptr, in_DL);
    }

} // namespace jag
