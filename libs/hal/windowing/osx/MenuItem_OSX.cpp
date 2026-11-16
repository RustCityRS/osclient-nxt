// libs/hal/windowing/osx/MenuItem_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.windowing

#include "libs/hal/windowing/MenuItem.h"

namespace jag {
    // 0x1003a1e80
    void MenuItem::AddChildMenuItems(NSMenu* nsMenu, unsigned int& arg2, MenuItem& menuItem, const Window& window) {
        long lVar1 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(nsMenu);
        auto IVar2 = NSMenu::alloc((ID)&_OBJC_CLASS___NSMenu, "alloc");
        auto nsMenu_00 = NSMenu::initWithTitle_(IVar2, "initWithTitle:", &cf___);
        auto this_00 = menuItem.SSOBeginPtr();
        auto menuItem_00 = this_00->HeapBeginPtr();
        auto pMVar3 = this_00->end();
        for (; menuItem_00 != pMVar3; menuItem_00 = (MenuItem*)&menuItem_00[1].field_8) {
            AddSingleMenuItem(nsMenu_00, arg2, *menuItem_00, window);
        }
        fixed_string<char, 256> local_160;
        auto str2 = GetText(menuItem);
        ConvertMenuItemString<256, true>(&local_160, str2);
        IVar2 = NSMenuItem::alloc((ID)&_OBJC_CLASS___NSMenuItem, "alloc");
        uint64_t uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar4 = _objc_retainAutoreleasedReturnValue(
            NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar4));
        IVar2 = NSMenuItem::initWithTitle_action_keyEquivalent_(IVar2, "initWithTitle:action:keyEquivalent:", uVar4, 0,
                                                                &cf___);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar4);
        NSMenuItem::setSubmenu_(IVar2, "setSubmenu:", nsMenu_00);
        if (lVar1 != 0) {
            (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(lVar1, "addItem:", IVar2);
        }
    }

    // 0x1003a20c0
    void MenuItem::AddSingleMenuItem(NSMenu* nsMenu, unsigned int& arg2, MenuItem& menuItem, const Window& window) {
        unsigned int uVar1;
        uint64_t uVar3;
        ID IVar4;
        char* str2;
        fixed_string<char, 256> local_160;

        NSMenu* nsMenu_00 = (NSMenu*)(*(void (*)(...))PTR__objc_retain_100ee9e68)(nsMenu);
        if (!(IsSubMenu(menuItem))) {
            if (!(IsEmpty(menuItem))) {
                uVar1 = arg2;
                arg2 = uVar1 + 1;
                menuItem.SetLoopIterations(uVar1 + 1);
                local_160 = eastl::fixed_string<char, 256>();
                str2 = (char*)GetText(menuItem);
                ConvertMenuItemString<256, true>(&local_160, str2);
                IVar4 = NSMenuItem::alloc((ID)&_OBJC_CLASS___NSMenuItem, "alloc");
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar3 = _objc_retainAutoreleasedReturnValue(
                    NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar3));
                IVar4 = NSMenuItem::initWithTitle_action_keyEquivalent_(
                    IVar4, "initWithTitle:action:keyEquivalent:", uVar3, 0, &cf___);
                (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
                uVar3 = window.GetWindowDelegate();
                uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
                NSMenuItem::setTarget_(IVar4, "setTarget:", uVar3);
                (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
                NSMenuItem::setTag_(IVar4, "setTag:", (unsigned long)*arg2);
                NSMenuItem::setEnabled_(IVar4, "setEnabled:", 1);
                NSMenuItem::setAction_(IVar4, "setAction:", "onMenuItemSelected:");
                (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(nsMenu_00, "addItem:", IVar4);
                (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar4);
            }
            IVar4 = NSMenuItem::separatorItem((ID)&_OBJC_CLASS___NSMenuItem, "separatorItem");
            uVar3 = _objc_retainAutoreleasedReturnValue(IVar4);
            (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(nsMenu_00, "addItem:", uVar3);
            (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
        } else {
            uVar3 = AddChildMenuItems(nsMenu_00, arg2, menuItem, window);
            uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
            (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
        }
        (*(void (*)(...))PTR__objc_release_100ee9e60)(nsMenu_00);
    }

    // 0x1003a2380
    void ConvertMenuItemString<256, true>(eastl::fixed_string<char, 256>& str1, const char* str2) {
        str1 = str2;
        unsigned long arg1 = str1.find('&', 0);
        if (arg1 != 18446744073709551615) {
            str1.replace(arg1, 1, "");
        }
    }

    // 0x1003a23f0: MenuItem::IsEmpty() const has the same machine code as MenuItem::IsSeparator() const

    // 0x1003a2450
    void MenuItem::Setup(const Window& window) {
        ID self;
        uint64_t uVar2;
        NSMenu* nsMenu;
        vector<MenuItem>* this_00;
        MenuItem* menuItem;
        uint64_t uVar4;
        unsigned int local_34;

        Destroy((Window*)this);
        if (IsEmpty() == '\0') {
            self = NSMenu::alloc((ID)&_OBJC_CLASS___NSMenu, "alloc");
            uVar2 = GetText();
            uVar2 = _objc_retainAutoreleasedReturnValue(
                NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar2));
            nsMenu = (NSMenu*)NSMenu::initWithTitle_(self, "initWithTitle:", uVar2);
            (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar2);
            NSMenu::setAutoenablesItems_((ID)nsMenu, "setAutoenablesItems:", 0);
            this_00 = (vector<MenuItem>*)SSOBeginPtr();
            menuItem = (MenuItem*)this_00->front();
            uVar2 = AddChildMenuItems(nsMenu, local_34, *menuItem, window);
            uVar4 = _objc_retainAutoreleasedReturnValue(uVar2);
            uVar2 = field_128;
            field_128 = uVar4;
            (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar2);
            (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(*(uint64_t*)PTR__NSApp_100ee4008, "setMenu:", nsMenu);
            (*(void (*)(...))PTR__objc_release_100ee9e60)(nsMenu);
        }
    }

    // 0x1003a2590
    void MenuItem::Destroy(const Window& window) {
        uint64_t uVar1 = *(uint64_t*)&window.field_128;
        *(uint64_t*)&window.field_128 = 0;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar1);
    }

} // namespace jag
