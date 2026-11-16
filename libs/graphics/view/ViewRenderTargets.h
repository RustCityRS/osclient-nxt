// libs/graphics/view/ViewRenderTargets.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ViewRenderTargets {
    public:
        uint8_t* Get(HashedString hashedString) const;
        void Set(HashedString hashedString, const shared_ptr<render::RenderTargets>& renderTargets);
        void Swap(HashedString hashedString1, HashedString hashedString2);

    private:
        uint8_t _unknown_0[8];
        uint64_t field_8;
    };

    // 0x1009afd20
    uint8_t* ViewRenderTargets::Get(HashedString hashedString) const {
        uint8_t* puVar3;

        long lVar1 = eastl::vector_map<HashedString, shared_ptr<render::RenderTargets>>::find(*this);
        long lVar2 = end();
        if (lVar1 == lVar2) {
            puVar3 = &render::RenderTargets::NullRenderTargets;
        } else {
            puVar3 = (uint8_t*)(lVar1 + 16);
        }
        return puVar3;
    }

    // 0x1009b53a0
    void ViewRenderTargets::Set(HashedString hashedString, const shared_ptr<render::RenderTargets>& renderTargets) {
        char* this_01;
        HashedString local_28;

        local_28.field_8 = hashedString.field_8;
        local_28.field_0 = hashedString.field_0;
        shared_ptr* this_00 = (shared_ptr*)(*this)[local_28];
        if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
            this_01 = "!destination";
            LogFatalError("!destination",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/view/"
                          "ViewRenderTargets.h",
                          33, 0, nullptr);
            this_01->~OptionStore();
        }
        *this_00 = renderTargets;
    }

    // 0x1009b67c0
    void ViewRenderTargets::Swap(HashedString hashedString1, HashedString hashedString2) {
        HashedString local_40;
        HashedString local_30;

        local_40.field_8 = hashedString1.field_8;
        local_40.field_0 = hashedString1.field_0;
        local_30.field_8 = hashedString2.field_8;
        local_30.field_0 = hashedString2.field_0;
        if (local_40 != local_30 == '\0') {
            return;
        }
        long lVar2 = eastl::vector_map<HashedString, shared_ptr<render::RenderTargets>>::find(*this);
        long lVar3 = eastl::vector_map<HashedString, shared_ptr<render::RenderTargets>>::find(*this);
        long lVar4 = end();
        if ((lVar2 == lVar4) || (lVar4 = end(), lVar3 == lVar4)) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/view/"
                            "ViewRenderTargets.h",
                            58, nullptr);
        }
        std::swap<shared_ptr<render::RenderTargets>>(*((lVar2 + 16)), *((lVar3 + 16)));
    }

} // namespace jag::graphics
