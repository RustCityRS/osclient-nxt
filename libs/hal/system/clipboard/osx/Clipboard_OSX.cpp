// libs/hal/system/clipboard/osx/Clipboard_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.clipboard

#include "libs/hal/system/clipboard/Clipboard.h"

namespace jag {
    // 0x1007a1be0, 16 bytes, base-object constructor, placed by class name and debug map
    // Clipboard::Clipboard()
    void Clipboard::Clipboard() {}

    // 0x1007a1bf0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Clipboard::Clipboard(): jumps straight to the base-object constructor

    // 0x1007a1c00, 16 bytes, base-object destructor, placed by class name and debug map
    // Clipboard::~Clipboard()
    void Clipboard::~Clipboard() {}

    // 0x1007a1c10, 16 bytes, complete-object destructor, placed by class name and debug map
    // Clipboard::~Clipboard(): jumps straight to the base-object destructor

    // 0x1007a1c20, 192 bytes, placed by class name and debug map
    // Clipboard::GetText(eastl::string&)
    undefined8 Clipboard::GetText(basic_string* param_1) {
        undefined* puVar1;
        ID IVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        long lVar5;
        char* pcVar6;

        puVar1 = PTR__objc_msgSend_100ee9e50;
        IVar2 = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard, "generalPasteboard");
        uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
        uVar4 = (*(code*)puVar1)(uVar3, "stringForType:", *(undefined8*)PTR__NSStringPboardType_100ee4020);
        lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
        if (lVar5 != 0) {
            uVar4 = _objc_retainAutorelease(lVar5);
            pcVar6 = (char*)(*(code*)PTR__objc_msgSend_100ee9e50)(uVar4, "UTF8String");
            param_1->assign(pcVar6);
        }
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(lVar5);
        (*(code*)puVar1)(uVar3);
        return 1;
    }

    // 0x1007a1ce0, 208 bytes, placed by class name and debug map
    // Clipboard::SetText(char const*, int)
    ulong Clipboard::SetText(char* param_1, int param_2) {
        undefined* puVar1;
        char cVar2;
        ID IVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined4 in_register_00000034;

        IVar3 = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard, "generalPasteboard");
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
        IVar3 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,
                                                "stringWithUTF8String:", CONCAT44(in_register_00000034, param_2));
        uVar5 = _objc_retainAutoreleasedReturnValue(IVar3);
        (*(code*)PTR__objc_msgSend_100ee9e50)(uVar4, "clearContents");
        cVar2 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar4, "setString:forType:", uVar5,
                                                      *(undefined8*)PTR__NSStringPboardType_100ee4020);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(uVar5);
        (*(code*)puVar1)(uVar4);
        return CONCAT71((int7)(CONCAT44(in_register_00000034, param_2) >> 8), cVar2 != '\0') & 4294967295;
    }

} // namespace jag
