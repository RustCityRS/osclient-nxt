// libs/graphics/runetek7/materials/sprites/SpriteAtlasReference.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SpriteAtlasReference.h"

namespace jag::graphics {
    // 0x103bbdfe0, 16 bytes, __common; set at startup by ___cxx_global_var_init.8
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> SpriteAtlasReference::NullSpriteAtlasReference;

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    SpriteAtlasReference::GetSpriteHash() const;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    SpriteAtlasReference::GetSpriteAtlas() const;

    // 0x10011c9a0: the linker folded this into oldscape::dash3d::ModelAppender::~ModelAppender(), which has identical code
    SpriteAtlasReference::~SpriteAtlasReference();

    // 0x10012a760: the linker folded this into eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric> >::~pair(), which has identical code
    SpriteAtlasReference::~SpriteAtlasReference();

    // 0x10018b300: the linker folded this into oldscape::jagex3::Js5::GetIndexVersion() const, which has identical code
    int SpriteAtlasReference::GetSpriteIndex() const;

    // 0x10080f980: the linker folded this into GeometryBatch::HasShareLight() const, which has identical code
    SpriteAtlasReference::GetDisableCache() const;

    // 0x10088f7d0, 144 bytes, base-object constructor, placed by class name and debug map
    // SpriteAtlasReference::SpriteAtlasReference(shared_ptr<SpriteAtlas> const&, int, long long)
    void SpriteAtlasReference::SpriteAtlasReference(shared_ptr* param_1, int param_2, longlong param_3) {
        undefined1* this_00;
        NXTPixScreen* this_01;

        new (this) MakeSharedPool<SpriteAtlasReference, 2048>();
        field_0 = param_3;
        this_00 = field_8;
        new (this_00) shared_ptr<oldscape::dash3d::Decor>(param_1);
        field_24 = 4294967295;
        m_spriteIndex = param_2;
        field_32 = 0;
        field_36 = 0;
        m_disableCache = 0;
        if (this_00->operator_cast_to_bool()) {
            this_01 = (NXTPixScreen*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)this_00);
            field_24 = this_01->GetUIHeight();
            field_36 = 1;
        }
    }

    // 0x10088f8c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // SpriteAtlasReference::SpriteAtlasReference(shared_ptr<SpriteAtlas> const&, int, long long): jumps straight to the base-object constructor

    // 0x10088f8d0, 80 bytes, placed by class name and debug map
    // SpriteAtlasReference::SetAtlas(shared_ptr<SpriteAtlas> const&, int)
    void SpriteAtlasReference::SetAtlas(shared_ptr* param_1, int param_2) {
        NXTPixScreen* this_00;

        shared_ptr<SpriteAtlas>::operator=((shared_ptr<SpriteAtlas>*)field_8, param_1);
        this_00 = (NXTPixScreen*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)param_1);
        field_24 = this_00->GetUIHeight();
        m_spriteIndex = param_2;
        field_36 = 1;
    }

    // 0x10088f970, 48 bytes, placed by class name and debug map
    // SpriteAtlasReference::IsReady() const
    undefined8 SpriteAtlasReference::IsReady() {
        undefined7 extraout_var;
        undefined8 uVar2;

        if ((field_8->operator_cast_to_bool()) && (m_spriteIndex != -1)) {
            uVar2 = CONCAT71(extraout_var, field_0 != -1);
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x10088f9a0, 32 bytes, placed by class name and debug map
    // SpriteAtlasReference::HasChanged(bool)
    void SpriteAtlasReference::HasChanged(bool param_1) {
        if ((field_36 != '\0') && (param_1)) {
            field_36 = 0;
        }
    }

    // 0x10088f9c0, 48 bytes, placed by class name and debug map
    // SpriteAtlasReference::SetLoading()
    void SpriteAtlasReference::SetLoading() {
        field_24 = 4294967295;
        shared_ptr<SpriteAtlas>::reset();
        m_spriteIndex = -1;
        field_36 = 1;
    }

    // 0x1008a2b70, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.8
    void ___cxx_global_var_init_8(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&SpriteAtlasReference::NullSpriteAtlasReference)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5378, &SpriteAtlasReference::NullSpriteAtlasReference, 4294967296);
    }

} // namespace jag::graphics
