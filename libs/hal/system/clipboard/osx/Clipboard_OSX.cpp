// libs/hal/system/clipboard/osx/Clipboard_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.clipboard

#include "libs/hal/system/clipboard/Clipboard.h"

namespace jag {
    // 0x1007a1be0
    Clipboard::Clipboard() {}

    // 0x1007a1c00
    Clipboard::~Clipboard() {}

    // 0x1007a1c20
    uint64_t Clipboard::GetText(eastl::string& str) {
        uint8_t* puVar1 = PTR__objc_msgSend_100ee9e50;
        uint64_t uVar3 = _objc_retainAutoreleasedReturnValue(
            NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard, "generalPasteboard"));
        uint64_t uVar4 =
            (*(void (*)(...))puVar1)(uVar3, "stringForType:", *(uint64_t*)PTR__NSStringPboardType_100ee4020);
        long lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
        if (lVar5 != 0) {
            uVar4 = _objc_retainAutorelease(lVar5);
            str.assign((char*)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar4, "UTF8String"));
        }
        puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(lVar5);
        (*(void (*)(...))puVar1)(uVar3);
        return 1;
    }

    // 0x1007a1ce0
    unsigned long Clipboard::SetText(const char* str, int arg2) {
        uint32_t in_register_00000034;

        auto IVar3 = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard, "generalPasteboard");
        uint64_t uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
        IVar3 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:",
                                                (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2));
        uint64_t uVar5 = _objc_retainAutoreleasedReturnValue(IVar3);
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar4, "clearContents");
        char cVar2 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar4, "setString:forType:", uVar5,
                                                                   *(uint64_t*)PTR__NSStringPboardType_100ee4020);
        uint8_t* puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar5);
        (*(void (*)(...))puVar1)(uVar4);
        return cVar2 & 4294967295;
    }

} // namespace jag
