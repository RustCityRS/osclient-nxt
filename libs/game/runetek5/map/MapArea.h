// libs/game/runetek5/map/MapArea.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class MapArea {
    public:
        class CompositeTextureMeta;
        class SubArea;
        GetMapID() const;
        GetOrigin() const;
        GetUniqueName() const;
        GetAdvisedZoom() const;
        GetStaticMapElements() const;
        GetTargetBounds() const;
        AreStaticMapElementsLoaded() const;
        GetBackgroundRGBA() const;
        ~MapArea();
        MapArea(Js5ResourceProvider*, int, PacketT<Array<unsigned char, eastl::allocator>>&,
                PacketT<Array<unsigned char, eastl::allocator>>&);
        void CalculateBounds();
        MapArea(Js5ResourceProvider*, int, int, int);
        GetCompositeTextureMeta(CompositeTextureMeta&);
        void ReleaseCompositeTextureMeta();
        void GetCompositeMap();
        ulong ContainsSource(CoordGrid const&) const;
        ulong GetTargetCoord(CoordGrid&, CoordGrid const&) const;
        ulong GetSourceCoord(CoordGrid&, CoordGrid const&) const;
        LoadStaticMapElements();
        void GetValidZones(Array<bool, eastl::allocator>&, int, int, int, int) const;
        MapArea* operator=(MapArea&&);
        ShouldAutoFind() const;
        MapArea(MapArea&&);
        MapArea();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullMapArea;

        // data members, from how the methods use this: 336 bytes
        Js5ResourceProvider* field_0; // offset 0
        int field_8;                  // offset 8
        char _unknown_12[92];
        undefined8 m_origin;      // offset 104
        undefined4 field_112;     // offset 112
        undefined4 field_116;     // offset 116
        undefined1 field_120;     // offset 120
        undefined3 field_121;     // offset 121
        undefined4 m_advisedZoom; // offset 124
        char _unknown_128[48];
        shared_ptr field_176; // offset 176
        shared_ptr field_192; // offset 192
        float field_208;      // offset 208
        float field_212;      // offset 212
        int field_216;        // offset 216
        int field_220;        // offset 220
        char _unknown_224[16];
        GridRect field_240; // offset 240
        char _unknown_260[44];
        GridRect field_304; // offset 304
        char _unknown_324[4];
        undefined4 field_328; // offset 328
        char _unknown_332[4];
    };

    class MapArea::CompositeTextureMeta {
    public:
        CompositeTextureMeta();
        ~CompositeTextureMeta();
        CompositeTextureMeta(CompositeTextureMeta&&);
        CompositeTextureMeta* operator=(CompositeTextureMeta const&);
        CompositeTextureMeta* operator=(CompositeTextureMeta&&);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[16];
        undefined8 field_16; // offset 16
    };

    class MapArea::SubArea {
    public:
        SubArea(SubArea&&);
        SubArea();

        // data members, from how the methods use this: 28 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[24];
    };

    // 0x1003c0980, 80 bytes, inline, placed by class name and debug map
    // MapArea::GetStaticMapElements() const
    undefined1* MapArea::GetStaticMapElements() {
        if (field_240[16] == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_staticMapElementsLoaded",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/map/MapArea.h",
                153, (char*)0);
        }
        return &field_264;
    }

    // 0x1003c9110, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapArea::GetTargetBounds() const
    /* graphics::MaterialManager::GetDefaultMaterial() const */

    undefined1* graphics::MaterialManager::GetDefaultMaterial() {
        return m_defaultMaterial;
    }

    // 0x1003caa10, 16 bytes, inline, placed by class name
    // MapArea::AreStaticMapElementsLoaded() const
    undefined1 MapArea::AreStaticMapElementsLoaded() {
        return field_240[16];
    }

    // 0x1003cbc60, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapArea::GetBackgroundRGBA() const
    /* Entity::GetPickingPrepassType() const */

    undefined4 Entity::GetPickingPrepassType() {
        return m_pickingPrepassType;
    }

    // 0x10046b330, 16 bytes, complete-object destructor, inline, placed by class name
    // MapArea::~MapArea(): jumps straight to the base-object destructor

    // 0x10046b340, 112 bytes, base-object destructor, inline, placed by class name
    // MapArea::~MapArea()
    void MapArea::~MapArea() {
        (&field_264)->~Array();
        field_192->~LRUHashCacheWrapper();
        field_176->~shared_ptr();
        (&field_152)->~Array();
        (&field_128)->~Array();
        (&field_80)->~Array();
        (&field_48)->~basic_string();
        (&field_16)->~basic_string();
    }

    // 0x1004adad0, 48 bytes, inline, placed by class name
    // MapArea::CompositeTextureMeta::operator=(MapArea::CompositeTextureMeta const&)
    /* MapArea::CompositeTextureMeta::TEMPNAMEPLACEHOLDERVALUE(MapArea::CompositeTextureMeta
   const&) */

    CompositeTextureMeta* MapArea::CompositeTextureMeta::operator=(CompositeTextureMeta* param_1) {
        shared_ptr<render::Texture2D>::operator=((shared_ptr<render::Texture2D>*)this, (shared_ptr*)param_1);
        field_16 = param_1->field_16;
        return this;
    }

    // 0x1004af110, 320 bytes, inline, placed by class name
    // MapArea::operator=(MapArea&&)
    /* MapArea::TEMPNAMEPLACEHOLDERVALUE(MapArea&&) */

    MapArea* MapArea::operator=(MapArea* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined3 uVar3;
        int iVar4;

        field_8 = param_1->field_8;
        field_0 = param_1->field_0;
        eastl::string::operator=((eastl::string*)&field_16, (basic_string*)&param_1->field_16);
        eastl::string::operator=((eastl::string*)&field_48, (basic_string*)&param_1->field_48);
        Array<MapArea::SubArea, eastl::allocator>::operator=((Array<MapArea::SubArea, eastl::allocator>*)&field_80,
                                                             (Array*)&param_1->field_80);
        uVar1 = param_1->field_112;
        uVar2 = param_1->field_116;
        m_origin = param_1->m_origin;
        field_112 = uVar1;
        field_116 = uVar2;
        uVar3 = param_1->field_121;
        uVar1 = param_1->m_advisedZoom;
        field_120 = param_1->field_120;
        field_121 = uVar3;
        m_advisedZoom = uVar1;
        Array<MapArea::CompositeSquare, eastl::allocator>::operator=(
            (Array<MapArea::CompositeSquare, eastl::allocator>*)&field_128, (Array*)&param_1->field_128);
        Array<MapArea::CompositeZone, eastl::allocator>::operator=(
            (Array<MapArea::CompositeZone, eastl::allocator>*)&field_152, (Array*)&param_1->field_152);
        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true,
                                       eastl::allocator>>::
        operator=((shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                                  4ul, true, eastl::allocator>>*)field_176,
                  (shared_ptr*)param_1->field_176);
        CompositeTextureMeta::operator=((CompositeTextureMeta*)field_192, (CompositeTextureMeta*)param_1->field_192);
        iVar4 = param_1->field_220;
        field_216 = param_1->field_216;
        field_220 = iVar4;
        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)&field_224, (Rect*)&param_1->field_224);
        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)field_240, (Rect*)param_1->field_240);
        field_240[16] = param_1->field_240[16];
        Array<StaticMapElement, eastl::allocator>::operator=((Array<StaticMapElement, eastl::allocator>*)&field_264,
                                                             (Array*)&param_1->field_264);
        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)&field_288, (Rect*)&param_1->field_288);
        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)field_304, (Rect*)param_1->field_304);
        *(undefined8*)(field_304 + 16) = *(undefined8*)(param_1->field_304 + 16);
        field_328 = param_1->field_328;
        return this;
    }

    // 0x1004af330, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapArea::ShouldAutoFind() const
    /* ObjTypeList::IsMembersServer() const */

    undefined1 ObjTypeList::IsMembersServer() {
        return m_membersServer;
    }

    // 0x1004b0600, 48 bytes, inline, placed by class name
    // MapArea::CompositeTextureMeta::operator=(MapArea::CompositeTextureMeta&&)
    /* MapArea::CompositeTextureMeta::TEMPNAMEPLACEHOLDERVALUE(MapArea::CompositeTextureMeta&&)
    */

    CompositeTextureMeta* MapArea::CompositeTextureMeta::operator=(CompositeTextureMeta* param_1) {
        shared_ptr<render::Texture2D>::operator=((shared_ptr<render::Texture2D>*)this, (shared_ptr*)param_1);
        field_16 = param_1->field_16;
        return this;
    }

    // 0x1004b1d60, 16 bytes, complete-object constructor, inline, placed by class name
    // MapArea::SubArea::SubArea(MapArea::SubArea&&): jumps straight to the base-object constructor

    // 0x1004b1d70, 16 bytes, complete-object constructor, inline, placed by class name
    // MapArea::SubArea::SubArea(): jumps straight to the base-object constructor

    // 0x1004b1d80, 48 bytes, base-object constructor, inline, placed by class name
    // MapArea::SubArea::SubArea()
    void MapArea::SubArea::SubArea() {
        _func_decltype_nullptr* in_RSI;

        new (&field_4, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_20, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1004b1db0, 64 bytes, base-object constructor, inline, placed by class name
    // MapArea::SubArea::SubArea(MapArea::SubArea&&)
    void MapArea::SubArea::SubArea(SubArea* param_1) {
        field_0 = param_1->field_0;
        new (&field_4, (Rect*)&param_1->field_4) math::Rect<unsigned int>();
        new (&field_20, (Rect*)&param_1->field_20) math::Rect<unsigned int>();
    }

    // 0x1004b2440, 16 bytes, complete-object constructor, inline, placed by class name
    // MapArea::MapArea(MapArea&&): jumps straight to the base-object constructor

    // 0x1004b2450, 16 bytes, complete-object constructor, inline, placed by class name
    // MapArea::MapArea(): jumps straight to the base-object constructor

    // 0x1004b2460, 416 bytes, base-object constructor, inline, placed by class name
    // MapArea::MapArea()
    void MapArea::MapArea() {
        _func_decltype_nullptr* in_RSI;

        field_0 = (Js5ResourceProvider*)0;
        field_8 = -1;
        new (&field_16) eastl::string();
        new (&field_48) eastl::string();
        new (&field_80) Array<MapArea::SubArea, eastl::allocator>();
        new (&m_origin) game::CoordGrid();
        field_116 = 255;
        field_120 = 1;
        m_advisedZoom = 4294967295;
        new (&field_128) Array<MapArea::CompositeSquare, eastl::allocator>();
        new (&field_152) Array<MapArea::CompositeZone, eastl::allocator>();
        new (field_176, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_192) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_216 = 1;
        field_220 = 1;
        new (&field_224, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_240, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_240[16] = 0;
        new (&field_264) Array<StaticMapElement, eastl::allocator>();
        new (&field_288, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_304, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new ((field_304 + 16)) game::CoordGrid();
    }

    // 0x1004b2600, 464 bytes, base-object constructor, inline, placed by class name
    // MapArea::MapArea(MapArea&&)
    void MapArea::MapArea(MapArea* param_1) {
        undefined3 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        int iVar4;

        field_8 = param_1->field_8;
        field_0 = param_1->field_0;
        new (&field_16, (basic_string*)&param_1->field_16) eastl::string();
        new (&field_48, (basic_string*)&param_1->field_48) eastl::string();
        new (&field_80, (Array*)&param_1->field_80) Array<MapArea::SubArea, eastl::allocator>();
        uVar1 = param_1->field_121;
        uVar2 = param_1->m_advisedZoom;
        field_120 = param_1->field_120;
        field_121 = uVar1;
        m_advisedZoom = uVar2;
        uVar2 = param_1->field_112;
        uVar3 = param_1->field_116;
        m_origin = param_1->m_origin;
        field_112 = uVar2;
        field_116 = uVar3;
        new (&field_128, (Array*)&param_1->field_128) Array<MapArea::CompositeSquare, eastl::allocator>();
        new (&field_152, (Array*)&param_1->field_152) Array<MapArea::CompositeZone, eastl::allocator>();
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)field_176, (shared_ptr*)param_1->field_176);
        new (field_192, (CompositeTextureMeta*)param_1->field_192) CompositeTextureMeta();
        iVar4 = param_1->field_220;
        field_216 = param_1->field_216;
        field_220 = iVar4;
        new (&field_224, (Rect*)&param_1->field_224) math::Rect<unsigned int>();
        new (field_240, (Rect*)param_1->field_240) math::Rect<unsigned int>();
        field_240[16] = param_1->field_240[16];
        new (&field_264, (Array*)&param_1->field_264) Array<StaticMapElement, eastl::allocator>();
        new (&field_288, (Rect*)&param_1->field_288) math::Rect<unsigned int>();
        new (field_304, (Rect*)param_1->field_304) math::Rect<unsigned int>();
        field_328 = param_1->field_328;
        *(undefined8*)(field_304 + 16) = *(undefined8*)(param_1->field_304 + 16);
    }

} // namespace jag::game
