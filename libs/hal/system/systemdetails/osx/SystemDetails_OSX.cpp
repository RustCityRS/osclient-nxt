// libs/hal/system/systemdetails/osx/SystemDetails_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.systemdetails

#include "libs/hal/system/systemdetails/SystemDetails.h"

namespace jag {
    // 0x1003ab600
    void SystemDetails::GetLanguageCode(eastl::string& str) {
        uint64_t uVar3;

        long lVar2 =
            _objc_retainAutoreleasedReturnValue(NSLocale::currentLocale((ID)&_OBJC_CLASS___NSLocale, "currentLocale"));
        if (lVar2 != 0) {
            uVar3 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(
                lVar2, "objectForKey:", *(uint64_t*)PTR__NSLocaleLanguageCode_100ee4018);
            uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
            uVar3 = _objc_retainAutorelease(uVar3);
            str.assign((char*)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar3, "UTF8String"));
            (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
        }
        (*(void (*)(...))PTR__objc_release_100ee9e60)(lVar2);
        return 1;
    }

    // 0x1003ab6c0
    void SystemDetails::GetBundleParameter(const eastl::string& str1, eastl::string& str2) {
        auto IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle, "mainBundle");
        uint64_t uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
        uint64_t uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        IVar2 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar4);
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar2);
        long lVar6 = _objc_retainAutoreleasedReturnValue(
            (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar3, "objectForInfoDictionaryKey:", uVar4));
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar4);
        if (lVar6 != 0) {
            uVar4 = _objc_retainAutorelease(lVar6);
            str2.assign((char*)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar4, "UTF8String"));
        }
        uint8_t* puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(lVar6);
        (*(void (*)(...))puVar1)(uVar3);
        return 1;
    }

    // 0x1003ab7c0
    bool SystemDetails::SetTargetEnvironmentVariable(const char* str1, const char* str2) {
        return _setenv(str1, str2, 1) == 0;
    }

    // 0x1003ab7e0
    unsigned long SystemDetails::GetTargetEnvironmentVariable(const char* str1, eastl::string& str2) {
        auto str = _getenv(str1);
        if (str != nullptr) {
            str2.assign(str);
        }
        return str2.empty() ^ 1;
    }

    // 0x1003ab810
    auto SystemDetails::GetDeepLink() {

        return auto("");
    }

} // namespace jag
