// libs/hal/system/systemdetails/osx/SystemDetails_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.systemdetails

#include "libs/hal/system/systemdetails/SystemDetails.h"

namespace jag {
    // 0x1003ab600, 192 bytes, placed by class name and debug map
    // SystemDetails::GetLanguageCode(eastl::string&)
    undefined8 SystemDetails::GetLanguageCode(basic_string* param_1) {
        ID IVar1;
        long lVar2;
        undefined8 uVar3;
        char* pcVar4;

        IVar1 = NSLocale::currentLocale((ID)&_OBJC_CLASS___NSLocale, "currentLocale");
        lVar2 = _objc_retainAutoreleasedReturnValue(IVar1);
        if (lVar2 != 0) {
            uVar3 = (*(code*)PTR__objc_msgSend_100ee9e50)(
                lVar2, "objectForKey:", *(undefined8*)PTR__NSLocaleLanguageCode_100ee4018);
            uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
            uVar3 = _objc_retainAutorelease(uVar3);
            pcVar4 = (char*)(*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "UTF8String");
            param_1->assign(pcVar4);
            (*(code*)PTR__objc_release_100ee9e60)(uVar3);
        }
        (*(code*)PTR__objc_release_100ee9e60)(lVar2);
        return 1;
    }

    // 0x1003ab6c0, 256 bytes, placed by class name and debug map
    // SystemDetails::GetBundleParameter(eastl::string const&, eastl::string&)
    undefined8 SystemDetails::GetBundleParameter(basic_string* param_1, basic_string* param_2) {
        undefined* puVar1;
        ID IVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        long lVar6;
        char* pcVar7;

        IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle, "mainBundle");
        uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        IVar2 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar4);
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar2);
        uVar5 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "objectForInfoDictionaryKey:", uVar4);
        lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
        (*(code*)PTR__objc_release_100ee9e60)(uVar4);
        if (lVar6 != 0) {
            uVar4 = _objc_retainAutorelease(lVar6);
            pcVar7 = (char*)(*(code*)PTR__objc_msgSend_100ee9e50)(uVar4, "UTF8String");
            param_2->assign(pcVar7);
        }
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(lVar6);
        (*(code*)puVar1)(uVar3);
        return 1;
    }

    // 0x1003ab7c0, 32 bytes, placed by class name and debug map
    // SystemDetails::SetTargetEnvironmentVariable(char const*, char const*)
    bool SystemDetails::SetTargetEnvironmentVariable(char* param_1, char* param_2) {
        return _setenv(param_1, param_2, 1) == 0;
    }

    // 0x1003ab7e0, 48 bytes, placed by class name and debug map
    // SystemDetails::GetTargetEnvironmentVariable(char const*, eastl::string&)
    ulong SystemDetails::GetTargetEnvironmentVariable(char* param_1, basic_string* param_2) {
        char* pcVar1;

        pcVar1 = _getenv(param_1);
        if (pcVar1 != (char*)0) {
            param_2->assign(pcVar1);
        }
        return eastl::basic_string<
                   char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ^
               1;
    }

    // 0x1003ab810, 64 bytes, placed by class name and debug map
    // SystemDetails::GetDeepLink()
    SystemDetails* SystemDetails::GetDeepLink() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

} // namespace jag
