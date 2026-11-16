// libs/ui/stylesheets/StyleSheetRegistry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class StyleSheetRegistry {
    public:
        Instance();
        Find(int) const;
        StyleSheetRegistry();
        ~StyleSheetRegistry();

        // data members, from how the methods use this: 16 bytes
        long field_0; // offset 0
        long field_8; // offset 8
    };

    // 0x100692ba0, 128 bytes, inline, placed by class name and debug map
    // StyleSheetRegistry::Instance()
    undefined* StyleSheetRegistry::Instance() {
        if (*PTR_instance_100ee50c0 == '\0') {
            if (___cxa_guard_acquire(PTR_instance_100ee50c0) != 0) {
                StyleSheetRegistry((StyleSheetRegistry*)PTR_instance_100ee9d30);
                ___cxa_atexit(PTR__StyleSheetRegistry_100ee6440, PTR_instance_100ee9d30, 4294967296);
                ___cxa_guard_release(PTR_instance_100ee50c0);
            }
        }
        return PTR_instance_100ee9d30;
    }

    // 0x100692c20, 80 bytes, inline, placed by class name and debug map
    // StyleSheetRegistry::Find(int) const
    undefined8 StyleSheetRegistry::Find(int param_1) {
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        int local_1c;

        local_1c = param_1;
        lVar1 = find(&local_1c);
        lVar2 = end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = ((lVar1 + 8))->end();
        }
        return uVar3;
    }

    // 0x1006b0470, 16 bytes, complete-object constructor, inline, placed by class name
    // StyleSheetRegistry::StyleSheetRegistry(): jumps straight to the base-object constructor

    // 0x1006b0480, 16 bytes, complete-object destructor, inline, placed by class name
    // StyleSheetRegistry::~StyleSheetRegistry(): jumps straight to the base-object destructor

    // 0x1006b0490, 64 bytes, base-object constructor, inline, placed by class name
    // StyleSheetRegistry::StyleSheetRegistry()
    void StyleSheetRegistry::StyleSheetRegistry() {
        new (this) eastl::vector_map<int, shared_ptr<StyleSheet>, eastl::less<int>, eastl::allocator,
                                     eastl::vector<eastl::pair<int, shared_ptr<StyleSheet>>, eastl::allocator>>();
        reserve(256);
    }

    // 0x1006b0750, 96 bytes, base-object destructor, inline, placed by class name
    // StyleSheetRegistry::~StyleSheetRegistry()
    void StyleSheetRegistry::~StyleSheetRegistry() {
        char cVar1;

        cVar1 = empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_styleSheets.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetRegistry.h",
                      53, (char*)0);
        }
        ~vector_map();
    }

} // namespace jag::ui
