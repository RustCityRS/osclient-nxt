// libs/oldscape/rs2lib/worldmap/WorldmapAreaMetadata.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "WorldmapAreaMetadata.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100009720: the linker folded this into BaseApp::GetExitCode(), which has identical code
    WorldmapAreaMetadata::GetMaxMapX() const;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    WorldmapAreaMetadata::GetDebugName() const;

    // 0x10005fe80: the linker folded this into widgets::CommandLineWidget::SetSelectedTextColour(unsigned int), which has identical code
    WorldmapAreaMetadata::SetMinMapX(int);

    // 0x100067280: the linker folded this into game::console::Snow::GetSnowPiles() const, which has identical code
    WorldmapAreaMetadata::GetNiceName() const;

    // 0x1000b7a80: the linker folded this into minimenu::MinimenuEntry::GetObjCount() const, which has identical code
    WorldmapAreaMetadata::GetMaxMapZ() const;

    // 0x1000b9960: the linker folded this into ScriptVarType::GetID() const, which has identical code
    WorldmapAreaMetadata::GetId() const;

    // 0x1000e31a0: the linker folded this into graphics::NXTPixScreen::GetUIWidth() const, which has identical code
    WorldmapAreaMetadata::GetMinMapX() const;

    // 0x100102fc0: the linker folded this into InputField::GetPlaceholderContents() const, which has identical code
    WorldmapAreaMetadata::GetOrigin() const;

    // 0x10012dc00: the linker folded this into graphics::NXTPixScreen::GetViewportX(), which has identical code
    WorldmapAreaMetadata::GetBackgroundColour() const;

    // 0x100214ff0, 352 bytes, placed by class name and debug map
    // WorldmapAreaMetadata::Unpack(PacketJ<Array<unsigned char, eastl::allocator> >&, int, ErrorCapture&)
    void WorldmapAreaMetadata::Unpack(PacketJ* param_1, int param_2, ErrorCapture* param_3) {
        undefined1* this;
        char cVar1;
        byte bVar2;
        uint uVar4;
        undefined4 uVar5;
        undefined4 in_register_00000034;
        ErrorCapture* this_00;
        WorldmapAreaMetadata* pWVar6;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_58[32];
        WorldmapAreaMetadata* local_38;

        this_00 = (ErrorCapture*)CONCAT44(in_register_00000034, param_2);
        *(int*)param_1 = (int)param_3;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            local_58, SUB41(param_2, 0));
        eastl::string::operator=((eastl::string*)(param_1 + 8), (basic_string*)local_58);
        local_58->~basic_string();
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            local_58, SUB41(param_2, 0));
        eastl::string::operator=((eastl::string*)(param_1 + 40), (basic_string*)local_58);
        local_58->~basic_string();
        uVar4 = this_00->g4();
        pWVar6 = (WorldmapAreaMetadata*)(ulong)uVar4;
        ((param_1 + 80))->Set(uVar4);
        uVar5 = this_00->g4();
        *(undefined4*)(param_1 + 72) = uVar5;
        cVar1 = this_00->g1();
        param_1[108] = (PacketJ)(cVar1 == '\x01');
        cVar1 = this_00->g1();
        param_1[109] = (PacketJ)(cVar1 == '\x01');
        bVar2 = this_00->g1();
        *(uint*)(param_1 + 76) = (uint)bVar2;
        local_38 = (WorldmapAreaMetadata*)param_1;
        bVar2 = this_00->g1();
        if (bVar2 != 0) {
            uVar4 = (uint)bVar2;
            this = &local_38->field_112;
            do {
                UnpackSubarea((WorldmapAreaMetadata*)local_58, (PacketJ*)pWVar6, this_00);
                if (std::operator!=((unique_ptr*)local_58, (_func_decltype_nullptr*)pWVar6)) {
                    pWVar6 = (WorldmapAreaMetadata*)local_58;
                    eastl::vector<std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>,
                                  eastl::allocator>::
                        emplace_back<std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>>(
                            (vector<std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>,
                                    eastl::allocator>*)this,
                            (unique_ptr*)local_58);
                }
                local_58->~unique_ptr();
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        CalcBounding(local_38);
    }

    // 0x100215470, 368 bytes, placed by class name and debug map
    // WorldmapAreaMetadata::UnpackSubarea(PacketJ<Array<unsigned char, eastl::allocator> >&, ErrorCapture&)
    WorldmapAreaMetadata* WorldmapAreaMetadata::UnpackSubarea(PacketJ* param_1, ErrorCapture* param_2) {
        byte bVar1;
        WorldmapSubareaZoneArea* this_00;
        long* plVar2;
        undefined8 uVar3;
        ErrorCapture* in_RCX;
        unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>> local_30[8];

        bVar1 = param_2->g1();
        std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::unique_ptr<true, void>(local_30);
        switch (bVar1) {
        case 0:
            this_00 = operator_new(64);
            new (this_00) WorldmapSubareaSquareArea();
            break;
        case 1:
            this_00 = operator_new(48);
            new (this_00) WorldmapSubareaSquare();
            break;
        case 2:
            this_00 = operator_new(80);
            WorldmapSubareaZoneArea::WorldmapSubareaZoneArea(this_00);
            break;
        case 3:
            this_00 = operator_new(64);
            new (this_00) WorldmapSubareaZone();
            break;
        default:
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/worldmap/"
                "WorldmapAreaMetadata.cpp",
                177, "WorldmapAreaMetadata.unpackSubarea - packet contains invalid subarea type enum value: %i",
                (uint)bVar1);
            in_RCX->Raise("WorldmapAreaMetadata.unpackSubarea - packet contains invalid subarea type enum value: %i",
                          (ulong)(uint)bVar1);
            std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::unique_ptr<true, void>(
                (_func_decltype_nullptr*)this);
            goto LAB_10021553e;
        }
        std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::reset(local_30,
                                                                                      (WorldmapSubarea*)this_00);
        plVar2 = (long*)std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::operator->(local_30);
        (**(code**)(*plVar2 + 88))(plVar2, param_2);
        new (this) std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>(local_30);
    LAB_10021553e:
        std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::~unique_ptr(local_30);
        return this;
    }

    // 0x100215670, 96 bytes, placed by class name and debug map
    // WorldmapAreaMetadata::CalcBounding()
    void WorldmapAreaMetadata::CalcBounding() {
        unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>* this_00;
        unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>* puVar1;
        long* plVar2;

        this_00 = (unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>*)(&field_112)->HeapBeginPtr();
        puVar1 = (unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>*)(&field_112)->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            plVar2 = (long*)std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::operator->(this_00);
            (**(code**)(*plVar2 + 40))(plVar2, this);
        }
    }

    // 0x1002156d0, 192 bytes, placed by class name and debug map
    // WorldmapAreaMetadata::ContainsSourceTile(int, int, int)
    ulong WorldmapAreaMetadata::ContainsSourceTile(int param_1, int param_2, int param_3) {
        char cVar1;
        unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>* this_00;
        unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>* puVar2;
        long* plVar3;
        undefined8 unaff_R13;
        bool bVar4;

        this_00 = (unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>*)(&field_112)->HeapBeginPtr();
        puVar2 = (unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>*)(&field_112)->end();
        bVar4 = this_00 == puVar2;
        if (!bVar4) {
            plVar3 = (long*)std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::operator->(this_00);
            cVar1 = (**(code**)(*plVar3 + 48))(plVar3, param_1, param_2);
            while (cVar1 == '\0') {
                this_00 = this_00 + 8;
                bVar4 = this_00 == puVar2;
                if (bVar4)
                    break;
                plVar3 =
                    (long*)std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::operator->(this_00);
                cVar1 = (**(code**)(*plVar3 + 48))(plVar3, param_1, param_2, param_3);
            }
        }
        return (CONCAT71((int7)((ulong)unaff_R13 >> 8), bVar4) ^ 1) & 4294967295;
    }

    // 0x1002157a0, 224 bytes, placed by class name and debug map
    // WorldmapAreaMetadata::ContainsTargetTile(int, int)
    ulong WorldmapAreaMetadata::ContainsTargetTile(int param_1, int param_2) {
        char cVar1;
        int iVar2;
        unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>* this_00;
        unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>* puVar3;
        long* plVar4;
        int iVar5;
        undefined8 unaff_R15;
        ulong uVar6;
        bool bVar7;

        iVar5 = param_1 + 63;
        if (-1 < param_1) {
            iVar5 = param_1;
        }
        iVar2 = param_2 + 63;
        if (-1 < param_2) {
            iVar2 = param_2;
        }
        if ((((iVar5 >> 6 < m_minMapX) || (m_maxMapX < iVar5 >> 6)) || (iVar2 >> 6 < m_minMapZ)) ||
            (m_maxMapZ < iVar2 >> 6)) {
            uVar6 = 0;
        } else {
            this_00 = (unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>*)(&field_112)->HeapBeginPtr();
            puVar3 = (unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>*)(&field_112)->end();
            bVar7 = this_00 == puVar3;
            if (!bVar7) {
                plVar4 =
                    (long*)std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::operator->(this_00);
                cVar1 = (**(code**)(*plVar4 + 56))(plVar4, param_1, param_2);
                while (cVar1 == '\0') {
                    this_00 = this_00 + 8;
                    bVar7 = this_00 == puVar3;
                    if (bVar7)
                        break;
                    plVar4 = (long*)std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::operator->(
                        this_00);
                    cVar1 = (**(code**)(*plVar4 + 56))(plVar4, param_1, param_2);
                }
            }
            uVar6 = CONCAT71((int7)((ulong)unaff_R15 >> 8), bVar7) ^ 1;
        }
        return uVar6 & 4294967295;
    }

    // 0x100215880, 176 bytes, placed by class name and debug map
    // WorldmapAreaMetadata::SourceToTargetTile(int, int, int)
    WorldmapAreaMetadata* WorldmapAreaMetadata::SourceToTargetTile(int param_1, int param_2, int param_3) {
        char cVar1;
        unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>* this_00;
        unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>* puVar2;
        long* plVar3;
        undefined4 in_register_00000034;
        undefined4 in_R8D;
        Layout* this_01;

        this_01 = (Layout*)(CONCAT44(in_register_00000034, param_1) + 112);
        this_00 = (unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        puVar2 = (unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>*)this_01->end();
        while (true) {
            if (this_00 == puVar2) {
                std::unique_ptr<std::array<int, 2ul>, std::default_delete<std::array<int, 2ul>>>::unique_ptr<true,
                                                                                                             void>(
                    (_func_decltype_nullptr*)this);
                return this;
            }
            plVar3 = (long*)std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::operator->(this_00);
            cVar1 = (**(code**)(*plVar3 + 48))(plVar3, param_2, param_3, in_R8D);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 8;
        }
        plVar3 = (long*)std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::operator->(this_00);
        (**(code**)(*plVar3 + 64))(this, plVar3, param_2, param_3, in_R8D);
        return this;
    }

    // 0x100215940, 176 bytes, placed by class name and debug map
    // WorldmapAreaMetadata::TargetToSourceTile(int, int)
    WorldmapAreaMetadata* WorldmapAreaMetadata::TargetToSourceTile(int param_1, int param_2) {
        char cVar1;
        unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>* this_00;
        unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>* puVar2;
        long* plVar3;
        undefined4 in_ECX;
        undefined4 in_register_00000034;
        Layout* this_01;

        this_01 = (Layout*)(CONCAT44(in_register_00000034, param_1) + 112);
        this_00 = (unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        puVar2 = (unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>*)this_01->end();
        while (true) {
            if (this_00 == puVar2) {
                new (this) rs2lib::CoordGrid((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull);
                return this;
            }
            plVar3 = (long*)std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::operator->(this_00);
            cVar1 = (**(code**)(*plVar3 + 56))(plVar3, param_2, in_ECX);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 8;
        }
        plVar3 = (long*)std::unique_ptr<WorldmapSubarea, std::default_delete<WorldmapSubarea>>::operator->(this_00);
        (**(code**)(*plVar3 + 72))(this, plVar3, param_2, in_ECX);
        return this;
    }

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag {
    // 0x100215150, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::worldmap::MapSquareData>::type make_shared<oldscape::rs2lib::worldmap::MapSquareData>()
    jag* make_shared<oldscape::rs2lib::worldmap::MapSquareData>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        MapSquareData* local_28[2];

        pvVar1 = (void*)aligned_alloc(224, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::worldmap::MapSquareData>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>, int,
                                   oldscape::rs2lib::worldmap::MapSquareData*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100215210, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::worldmap::MapZoneData>::type make_shared<oldscape::rs2lib::worldmap::MapZoneData>()
    jag* make_shared<oldscape::rs2lib::worldmap::MapZoneData>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        MapZoneData* local_28[2];

        pvVar1 = (void*)aligned_alloc(240, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::worldmap::MapZoneData>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>, int,
                                   oldscape::rs2lib::worldmap::MapZoneData*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100215380, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::worldmap::StaticMapElement>::type make_shared<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid const&, oldscape::rs2lib::CoordGrid&, int&, decltype(nullptr)>(oldscape::rs2lib::CoordGrid const&, oldscape::rs2lib::CoordGrid&, int&, decltype(nullptr)&&)
    jag* jag::make_shared<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid_const&,
                          oldscape::rs2lib::CoordGrid&, int&, decltype(nullptr)>(CoordGrid* param_1, CoordGrid* param_2,
                                                                                 int* param_3,
                                                                                 _func_decltype_nullptr** param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        StaticMapElement* local_40[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid_const&,
                              oldscape::rs2lib::CoordGrid&, int&, decltype(nullptr)>(
                    (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>, int,
                                   oldscape::rs2lib::worldmap::StaticMapElement*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1002177a0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_array<unsigned int []>::type make_shared<unsigned int []>(unsigned long)
    jag* make_shared<unsigned int[]>(ulong param_1) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        ulong uVar3;
        _func_decltype_nullptr* p_Var4;
        long lVar5;
        ulong local_40;
        hash_node** local_38[2];

        p_Var4 = (_func_decltype_nullptr*)0;
        local_40 = param_1;
        if (param_1 != 0) {
            p_Var4 = (_func_decltype_nullptr*)8;
            pvVar1 = (void*)aligned_alloc(param_1 * 4 + 20, 8);
            if (pvVar1 != (void*)0) {
                local_38[0] = (hash_node**)((long)pvVar1 + 16);
                if (local_40 != 0) {
                    lVar5 = 0;
                    uVar3 = 0;
                    do {
                        placement_new<unsigned int>((void*)((long)local_38[0] + lVar5));
                        uVar3 = uVar3 + 1;
                        lVar5 = lVar5 + 4;
                    } while (uVar3 < local_40);
                }
                prVar2 = placement_new<ref_counter_shared_trivial<unsigned int>, unsigned long&, unsigned int*&>(
                    pvVar1, &local_40, (uint**)local_38);
                new (this)
                    eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
                return this;
            }
        }
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var4);
        return this;
    }

    // 0x100217850, 16 bytes, inline, placed by debug map only (low confidence)
    // unsigned int* placement_new<unsigned int>(void*)
    uint* placement_new<unsigned int>(void* param_1) {
        *(undefined4*)param_1 = 0;
        return param_1;
    }

    // 0x100217860, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<unsigned int>* placement_new<ref_counter_shared_trivial<unsigned int>, unsigned long&, unsigned int*&>(void*, unsigned long&, unsigned int*&)
    ref_counter_shared_trivial* placement_new<ref_counter_shared_trivial<unsigned int>, unsigned long&, unsigned int*&>(
        void* param_1, ulong* param_2, uint** param_3) {
        ref_counter_shared_trivial<unsigned int>::ref_counter_shared_trivial(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10021d2d0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::HttpSpriteData* placement_new<oldscape::rs2lib::HttpSpriteData, eastl::string const&>(void*, eastl::string const&)
    HttpSpriteData* jag::placement_new<oldscape::rs2lib::HttpSpriteData, eastl::stringconst&>(void* param_1,
                                                                                              basic_string* param_2) {
        oldscape::rs2lib::HttpSpriteData::HttpSpriteData(param_1, param_2);
        return param_1;
    }

    // 0x10021d2f0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::HttpSpriteData>* placement_new<ref_counter_shared<oldscape::rs2lib::HttpSpriteData>, int, oldscape::rs2lib::HttpSpriteData*&>(void*, int&&, oldscape::rs2lib::HttpSpriteData*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::HttpSpriteData>, int, oldscape::rs2lib::HttpSpriteData*&>(
        void* param_1, int* param_2, HttpSpriteData** param_3) {
        ref_counter_shared<oldscape::rs2lib::HttpSpriteData>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x100218ab0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100218ac0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0,
   void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100218ad0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::BaseApp__(void* param_1, BaseApp* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100218ae0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{lambda(void*, BaseApp*)#1}::operator()(void*, BaseApp*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0,
   void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{lambda(void*,
   BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, BaseApp*) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* param_1, BaseApp * param_2) {
        bool->SetFocus()::$_0::operator()(param_1, param_2);
    }

    // 0x100218bd0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag::stringtools {
    // 0x100219b70, 16 bytes, inline, placed by debug map only (low confidence)
    // UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL> >(eastl::basic_string<char, BucketAllocatorEASTL>&)::{lambda(char)#1}::operator()(char) const
    /* UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>
   >(eastl::basic_string<char,
   BucketAllocatorEASTL>&)::{lambda(char)#1}::TEMPNAMEPLACEHOLDERVALUE(char) const */

    int stringtools::UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>(
        eastl::basic_string<char, BucketAllocatorEASTL>&)::{
        lambda(char) #1
    }
    ::operator()(char param_1) {
        char cVar1;

        cVar1 = eastl::CharToLower(param_1);
        return (int)cVar1;
    }

} // namespace jag::stringtools
