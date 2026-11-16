// libs/graphics/runetek7/fonts/FontManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "FontManager.h"

namespace jag::graphics {
    // 0x1008e58c0, 208 bytes, base-object constructor, placed by class name and debug map
    // FontManager::FontManager(SpriteAtlasManager*, Js5ResourceProvider*, IConfigProvider*, Js5ArchiveSettings*)
    void FontManager::FontManager(SpriteAtlasManager* param_1, Js5ResourceProvider* param_2, IConfigProvider* param_3,
                                  Js5ArchiveSettings* param_4) {
        undefined1 local_80[72];
        FontManager* local_38;

        field_0 = param_1;
        field_8 = param_2;
        field_16 = param_3;
        new (&field_24, 64, "FontManager") LRUHashCache<Font, 64ul, 65ul, false, unsigned long long>();
        new (&field_5400)
            eastl::vector_map<int, shared_ptr<FontMetrics>, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, shared_ptr<FontMetrics>>, eastl::allocator>>();
        (&field_5400, 256)->reserve();
        new (local_80) ConfigDecoderInfo();
        local_38 = this;
        eastl::function<void(
            unsigned int, unsigned int, unsigned int, unsigned int,
            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
            Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator> const*)>::
        operator=((function<void(unsigned int, unsigned int, unsigned int, unsigned int,
                                 shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&,
                                 Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>,
                                       eastl::allocator> const*)>*)(local_80 + 8),
                  (__0*)&local_38);
        (**(code**)(field_16->field_0 + 16))(field_16, param_4, (ConfigDecoderInfo*)local_80);
        local_80->~ConfigDecoderInfo();
    }

    // 0x1008e5a40, 16 bytes, complete-object constructor, placed by class name and debug map
    // FontManager::FontManager(SpriteAtlasManager*, Js5ResourceProvider*, IConfigProvider*, Js5ArchiveSettings*): jumps straight to the base-object constructor

    // 0x1008e5a50, 80 bytes, base-object destructor, placed by class name and debug map
    // FontManager::~FontManager()
    void FontManager::~FontManager() {
        Flush(this);
        (&field_5400)->~vector_map();
        (&field_24)->~LRUHashCache();
    }

    // 0x1008e5aa0, 16 bytes, placed by class name and debug map
    // FontManager::Flush()
    void FontManager::Flush() {
        (&field_24)->Reset();
    }

    // 0x1008e5ab0, 16 bytes, complete-object destructor, placed by class name and debug map
    // FontManager::~FontManager(): jumps straight to the base-object destructor

    // 0x1008e5ac0, 32 bytes, placed by class name and debug map
    // FontManager::MainLogic()
    void FontManager::MainLogic() {
        (&field_24, 1500)->Clean();
    }

    // 0x1008e5ae0, 784 bytes, placed by class name and debug map
    // FontManager::GetFont(int, shared_ptr<SpriteAtlas> const&)
    Js5ResourceProvider* FontManager::GetFont(int param_1, shared_ptr* param_2) {
        Js5ResourceProvider* pJVar1;
        bool bVar2;
        char cVar3;
        undefined4 uVar5;
        NXTPixScreen* this_00;
        Js5ResourceProvider* this_01;
        shared_ptr* this_02;
        FontMetrics* pFVar6;
        undefined* puVar7;
        Js5ResourceProvider* this_03;
        uint uVar8;
        VectorFontLoader* pVVar9;
        _func_decltype_nullptr* p_Var10;
        shared_ptr local_b0;
        Js5ResourceProvider* local_a0;
        LRUHashCache<Font, 64ul, 65ul, false, unsigned long long>* local_98;
        VectorFontLoader* local_90;
        shared_ptr* local_88;
        shared_ptr local_80[2];
        shared_ptr local_58;
        shared_ptr local_48;
        Js5ArchiveSettings* local_38;

        uVar8 = 0;
        bVar2 = operator==(param_2, (_func_decltype_nullptr*)0);
        if (!bVar2) {
            this_00 = (NXTPixScreen*)shared_ptr<SpriteAtlas>::operator->((shared_ptr<SpriteAtlas>*)param_2);
            uVar8 = this_00->GetUIHeight() * 65536 + 65536;
        }
        local_98 = (LRUHashCache<Font, 64ul, 65ul, false, unsigned long long>*)&field_24;
        pVVar9 = (VectorFontLoader*)(long)(int)(uVar8 | param_1);
        local_80[0]._0_8_ = pVVar9;
        this_01 =
            (Js5ResourceProvider*)LRUHashCache<Font, 64ul, 65ul, false, unsigned long long>::Find((ulonglong*)local_98);
        bVar2 = this_01->operator_cast_to_bool();
        if (!bVar2) {
            p_Var10 = (_func_decltype_nullptr*)(ulong)(uint)param_1;
            this_02 = (shared_ptr*)GetFontMetricsFromID(this, param_1);
            bVar2 = shared_ptr::operator_cast_to_bool(this_02);
            if (bVar2) {
                new (&local_48) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var10);
                pFVar6 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this_02);
                cVar3 = pFVar6->IsSpriteFont();
                local_90 = pVVar9;
                if (cVar3 == '\0') {
                    new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var10);
                    this_03 = field_8;
                    local_38 = Js5Archive::JS5_TRUETYPEFONTS;
                    pFVar6 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this_02);
                    uVar8 = pFVar6->GetSourcePackID();
                    this_03->GetGroup(&local_58, local_38, uVar8, (Priority*)Priority::HIGHEST, true, false);
                    bVar2 = shared_ptr::operator_cast_to_bool(&local_58);
                    if (bVar2) {
                        local_38 = (Js5ArchiveSettings*)local_58.Instance();
                        pFVar6 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this_02);
                        uVar8 = pFVar6->GetSourcePackID();
                        pFVar6 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this_02);
                        pFVar6->GetPixelSize();
                        local_80->CreateFontSource((int)local_38, (shared_ptr*)(ulong)uVar8, (uchar)&local_58);
                        this_03 = (Js5ResourceProvider*)local_80;
                        bVar2 = this_03->operator_cast_to_bool();
                        if (bVar2) {
                            local_a0 = this_03;
                            make_shared<Font, shared_ptr<FontMetrics> const&, VectorFontSource*, SpriteAtlasManager*&,
                                        shared_ptr<SpriteAtlas> const&>(
                                (jag*)&local_b0, this_02, (VectorFontSource**)&local_a0, &field_0, param_2);
                            shared_ptr<Font>::operator=((shared_ptr<Font>*)&local_48, &local_b0);
                            local_b0.~shared_ptr();
                        }
                        local_80->~VectorFontSource();
                    }
                    local_58.~shared_ptr();
                } else {
                    pJVar1 = field_8;
                    local_38 = Js5Archive::JS5_SPRITES;
                    local_88 = this_02;
                    pFVar6 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this_02);
                    uVar5 = pFVar6->GetSourcePackID();
                    this_03 = (Js5ResourceProvider*)pJVar1->field_0;
                    puVar7 =
                        (undefined*)(**(code**)&this_03->field_48)(pJVar1, local_38, uVar5, 0, Priority::HIGHEST, 1);
                    if (puVar7 == DataStatus::READY) {
                        make_shared<Font, shared_ptr<FontMetrics> const&, SpriteAtlasManager*&,
                                    shared_ptr<SpriteAtlas> const&>((jag*)local_80, local_88, &field_0, param_2);
                        shared_ptr<Font>::operator=((shared_ptr<Font>*)&local_48, local_80);
                        local_80->~shared_ptr();
                    }
                }
                bVar2 = shared_ptr::operator_cast_to_bool(&local_48);
                if (bVar2) {
                    local_80[0]._0_8_ = local_90;
                    this_03 = (Js5ResourceProvider*)local_98->Put(&local_48, 1, local_80);
                }
                local_48.~shared_ptr();
                if (bVar2) {
                    return this_03;
                }
            }
        }
        return this_01;
    }

} // namespace jag::graphics
