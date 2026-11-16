// libs/graphics/runetek7/materials/sprites/SpriteAtlasReference.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SpriteAtlasReference {
    public:
        GetSpriteHash() const;
        GetSpriteAtlas() const;
        ~SpriteAtlasReference();
        GetSpriteIndex() const;
        GetWidth() const;
        GetHeight() const;
        SetDisableCache(bool);
        void GetRenderMapping() const;
        GetDisableCache() const;
        SpriteAtlasReference(shared_ptr<SpriteAtlas> const&, int, long long);
        void SetAtlas(shared_ptr<SpriteAtlas> const&, int);
        IsReady() const;
        void HasChanged(bool);
        void SetLoading();
        void GetTotalWidth() const;
        void GetTotalHeight() const;
        bool ShouldAlwaysBeLoaded();
        void DecrementAlwaysLoaded();
        void IncrementAlwaysLoaded();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullSpriteAtlasReference;

        // data members, from how the methods use this: 44 bytes
        longlong field_0;          // offset 0
        shared_ptr field_8;        // offset 8
        undefined4 field_24;       // offset 24
        int field_28;              // offset 28
        int field_32;              // offset 32
        undefined1 field_36;       // offset 36
        undefined1 m_disableCache; // offset 37
        char _unknown_38[6];
    };

    // 0x1003c3da0, 64 bytes, inline, placed by class name and debug map
    // SpriteAtlasReference::GetWidth() const
    undefined4 SpriteAtlasReference::GetWidth() {
        SpriteAtlas* this_00;
        long lVar1;
        undefined4* puVar2;

        this_00 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)field_8);
        lVar1 = this_00->GetSpriteRenderMapping(field_28);
        puVar2 = (undefined4*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)(lVar1 + 104), 0);
        return *puVar2;
    }

    // 0x1003c3de0, 64 bytes, inline, placed by class name and debug map
    // SpriteAtlasReference::GetHeight() const
    undefined4 SpriteAtlasReference::GetHeight() {
        SpriteAtlas* this_00;
        long lVar1;
        undefined4* puVar2;

        this_00 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)field_8);
        lVar1 = this_00->GetSpriteRenderMapping(field_28);
        puVar2 = (undefined4*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)(lVar1 + 104), 1);
        return *puVar2;
    }

    // 0x100524d00, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SpriteAtlasReference::SetDisableCache(bool)
    /* GeometryBatch::SetShareLight(bool) */

    void GeometryBatch::SetShareLight(bool param_1) {
        m_shareLight = param_1;
    }

    // 0x10068f9d0, 48 bytes, inline, placed by class name
    // SpriteAtlasReference::GetRenderMapping() const
    void SpriteAtlasReference::GetRenderMapping() {
        SpriteAtlas* this_00;

        this_00 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)field_8);
        this_00->GetSpriteRenderMapping(field_28);
    }

    // 0x1008c8140, 48 bytes, inline, placed by class name
    // SpriteAtlasReference::GetTotalWidth() const
    void SpriteAtlasReference::GetTotalWidth() {
        SpriteAtlas* this_00;
        SpriteAtlasMapping* this_01;

        this_00 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)field_8);
        this_01 = (SpriteAtlasMapping*)this_00->GetSpriteRenderMapping(field_28);
        this_01->TotalWidth();
    }

    // 0x1008c8170, 48 bytes, inline, placed by class name
    // SpriteAtlasReference::GetTotalHeight() const
    void SpriteAtlasReference::GetTotalHeight() {
        SpriteAtlas* this_00;
        SpriteAtlasMapping* this_01;

        this_00 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)field_8);
        this_01 = (SpriteAtlasMapping*)this_00->GetSpriteRenderMapping(field_28);
        this_01->TotalHeight();
    }

    // 0x1008c98c0, 16 bytes, inline, placed by class name
    // SpriteAtlasReference::ShouldAlwaysBeLoaded()
    bool SpriteAtlasReference::ShouldAlwaysBeLoaded() {
        return 0 < field_32;
    }

    // 0x1008c9d00, 64 bytes, inline, placed by class name
    // SpriteAtlasReference::DecrementAlwaysLoaded()
    void SpriteAtlasReference::DecrementAlwaysLoaded() {
        if (field_32 < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_alwaysLoadedReferenceCount > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/sprites/SpriteAtlasReference.h",
                      35, (char*)0);
        }
        field_32 = field_32 + -1;
    }

    // 0x1008c9dc0, 16 bytes, inline, placed by class name
    // SpriteAtlasReference::IncrementAlwaysLoaded()
    void SpriteAtlasReference::IncrementAlwaysLoaded() {
        field_32 = field_32 + 1;
    }

} // namespace jag::graphics
