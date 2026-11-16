// libs/graphics/view/ViewRenderTargets.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ViewRenderTargets {
    public:
        Get(HashedString) const;
        void Set(HashedString, shared_ptr<render::RenderTargets> const&);
        void Swap(HashedString, HashedString);

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        undefined8 field_8; // offset 8
    };

    // 0x1009afd20, 80 bytes, inline, placed by class name and debug map
    // ViewRenderTargets::Get(HashedString) const
    undefined1* ViewRenderTargets::Get(HashedString param_1) {
        long lVar1;
        long lVar2;
        undefined1* puVar3;
        HashedString local_28;

        local_28.field_8 = param_1.field_8;
        local_28.field_0 = param_1.field_0;
        lVar1 = find(&local_28);
        lVar2 = end();
        if (lVar1 == lVar2) {
            puVar3 = &render::RenderTargets::NullRenderTargets;
        } else {
            puVar3 = (undefined1*)(lVar1 + 16);
        }
        return puVar3;
    }

    // 0x1009b53a0, 112 bytes, inline, placed by class name
    // ViewRenderTargets::Set(HashedString, shared_ptr<render::RenderTargets> const&)
    void ViewRenderTargets::Set(HashedString param_1, shared_ptr* param_2) {
        shared_ptr* this;
        shared_ptr* in_RCX;
        char* this_00;
        HashedString local_28;

        local_28.field_0 = (char*)param_1.field_8;
        local_28.field_8 = param_2;
        this = (shared_ptr*)eastl::vector_map<
            HashedString, shared_ptr<render::RenderTargets>, eastl::less<HashedString>, eastl::allocator,
            eastl::vector<eastl::pair<HashedString, shared_ptr<render::RenderTargets>>, eastl::allocator>>::
        operator[](
            (vector_map<HashedString, shared_ptr<render::RenderTargets>, eastl::less<HashedString>, eastl::allocator,
                        eastl::vector<eastl::pair<HashedString, shared_ptr<render::RenderTargets>>, eastl::allocator>>*)
                param_1.field_0,
            &local_28);
        if (shared_ptr::operator_cast_to_bool(this)) {
            this_00 = "!destination";
            LogFatalError("!destination",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/view/"
                          "ViewRenderTargets.h",
                          33, 0, (char*)0);
            /* WARNING: Subroutine does not return */
            this_00->~OptionStore();
        }
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this, in_RCX);
    }

    // 0x1009b67c0, 160 bytes, inline, placed by class name
    // ViewRenderTargets::Swap(HashedString, HashedString)
    void ViewRenderTargets::Swap(HashedString param_1, HashedString param_2) {
        char cVar1;
        long lVar2;
        long lVar3;
        long lVar4;
        vector_map<HashedString, shared_ptr<render::RenderTargets>, eastl::less<HashedString>, eastl::allocator,
                   eastl::vector<eastl::pair<HashedString, shared_ptr<render::RenderTargets>>, eastl::allocator>>* this;
        HashedString local_40;
        HashedString local_30;

        local_30.field_0 = (char*)param_2.field_8;
        local_40.field_8 = param_2.field_0;
        local_40.field_0 = (char*)param_1.field_8;
        this =
            (vector_map<HashedString, shared_ptr<render::RenderTargets>, eastl::less<HashedString>, eastl::allocator,
                        eastl::vector<eastl::pair<HashedString, shared_ptr<render::RenderTargets>>, eastl::allocator>>*)
                param_1.field_0;
        cVar1 = HashedString::operator!=(&local_40, &local_30);
        if (cVar1 == '\0') {
            return;
        }
        lVar2 = eastl::vector_map<HashedString, shared_ptr<render::RenderTargets>, eastl::less<HashedString>,
                                  eastl::allocator,
                                  eastl::vector<eastl::pair<HashedString, shared_ptr<render::RenderTargets>>,
                                                eastl::allocator>>::find(this, &local_40);
        lVar3 = eastl::vector_map<HashedString, shared_ptr<render::RenderTargets>, eastl::less<HashedString>,
                                  eastl::allocator,
                                  eastl::vector<eastl::pair<HashedString, shared_ptr<render::RenderTargets>>,
                                                eastl::allocator>>::find(this, &local_30);
        lVar4 = end();
        if ((lVar2 == lVar4) || (lVar4 = end(), lVar3 == lVar4)) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/view/"
                            "ViewRenderTargets.h",
                            58, (char*)0);
        }
        std::swap<shared_ptr<render::RenderTargets>>((shared_ptr*)(lVar2 + 16), (shared_ptr*)(lVar3 + 16));
    }

} // namespace jag::graphics
