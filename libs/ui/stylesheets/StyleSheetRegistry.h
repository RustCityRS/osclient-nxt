// libs/ui/stylesheets/StyleSheetRegistry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class StyleSheetRegistry {
    public:
        void Instance();
        uint64_t Find(int arg1) const;
        StyleSheetRegistry();
        ~StyleSheetRegistry();

    private:
        long field_0;
        long field_8;
    };

    // 0x100692ba0
    void StyleSheetRegistry::Instance() {
        if (*PTR_instance_100ee50c0 == '\0') {
            if (___cxa_guard_acquire(PTR_instance_100ee50c0) != 0) {
                StyleSheetRegistry((StyleSheetRegistry*)PTR_instance_100ee9d30);
                ___cxa_atexit(PTR__StyleSheetRegistry_100ee6440, PTR_instance_100ee9d30, 4294967296);
                ___cxa_guard_release(PTR_instance_100ee50c0);
            }
        }
        return PTR_instance_100ee9d30;
    }

    // 0x100692c20
    uint64_t StyleSheetRegistry::Find(int arg1) const {
        uint64_t uVar3;

        long lVar1 = eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>::find(*this);
        long lVar2 = end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = ((lVar1 + 8))->end();
        }
        return uVar3;
    }

    // 0x1006b0490
    StyleSheetRegistry::StyleSheetRegistry() : eastl::vector_map<int, shared_ptr<StyleSheet>>() {
        reserve(256);
    }

    // 0x1006b0750
    StyleSheetRegistry::~StyleSheetRegistry() {
        if (empty() == '\0') {
            LogAssert("m_styleSheets.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetRegistry.h",
                      53, nullptr);
        }
    }

} // namespace jag::ui
