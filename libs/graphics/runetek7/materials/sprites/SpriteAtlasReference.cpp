// libs/graphics/runetek7/materials/sprites/SpriteAtlasReference.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SpriteAtlasReference.h"

namespace jag::graphics {
    // 0x103bbdfe0, set at startup by ___cxx_global_var_init.8
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> SpriteAtlasReference::NullSpriteAtlasReference =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100009d10: SpriteAtlasReference::GetSpriteHash() const has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x100009d50: SpriteAtlasReference::GetSpriteAtlas() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x10011c9a0: SpriteAtlasReference::~SpriteAtlasReference() has the same machine code as oldscape::dash3d::ModelAppender::~ModelAppender()

    // 0x10012a760: SpriteAtlasReference::~SpriteAtlasReference() has the same machine code as eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric>>::~pair()

    // 0x10018b300: SpriteAtlasReference::GetSpriteIndex() const has the same machine code as oldscape::jagex3::Js5::GetIndexVersion() const

    // 0x10080f980: SpriteAtlasReference::GetDisableCache() const has the same machine code as GeometryBatch::HasShareLight() const

    // 0x10088f7d0
    SpriteAtlasReference::SpriteAtlasReference(const shared_ptr<SpriteAtlas>& spriteAtlas, int arg2, long long arg3)
        : MakeSharedPool<SpriteAtlasReference, 2048>(), field_0(arg3) {
        uint8_t* this_00 = field_8;
        new (this_00) shared_ptr(spriteAtlas);
        field_24 = 4294967295;
        m_spriteIndex = arg2;
        field_32 = 0;
        field_36 = 0;
        m_disableCache = 0;
        if (this_00->operator_cast_to_bool() != '\0') {
            field_24 = ((NXTPixScreen*)(*this_00).operator->())->GetUIHeight();
            field_36 = 1;
        }
    }

    // 0x10088f8d0
    void SpriteAtlasReference::SetAtlas(const shared_ptr<SpriteAtlas>& spriteAtlas, int arg2) {
        *field_8 = spriteAtlas;
        field_24 = ((NXTPixScreen*)spriteAtlas.operator->())->GetUIHeight();
        m_spriteIndex = arg2;
        field_36 = 1;
    }

    // 0x10088f970
    bool SpriteAtlasReference::IsReady() const {
        bool bVar2;

        if ((field_8->operator_cast_to_bool() == '\0') || (m_spriteIndex == -1)) {
            bVar2 = false;
        } else {
            bVar2 = field_0 != -1;
        }
        return bVar2;
    }

    // 0x10088f9a0
    void SpriteAtlasReference::HasChanged(bool arg1) {
        if ((field_36 != '\0') && (arg1)) {
            field_36 = 0;
        }
    }

    // 0x10088f9c0
    void SpriteAtlasReference::SetLoading() {
        field_24 = 4294967295;
        field_8->reset();
        m_spriteIndex = -1;
        field_36 = 1;
    }

} // namespace jag::graphics
