// libs/oldscape/rs2lib/worldmap/WorldmapAreaMetadata.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "WorldmapAreaMetadata.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100009720: WorldmapAreaMetadata::GetMaxMapX() const has the same machine code as BaseApp::GetExitCode()

    // 0x100009d50: WorldmapAreaMetadata::GetDebugName() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x10005fe80: WorldmapAreaMetadata::SetMinMapX(int) has the same machine code as widgets::CommandLineWidget::SetSelectedTextColour(unsigned int)

    // 0x100067280: WorldmapAreaMetadata::GetNiceName() const has the same machine code as game::console::Snow::GetSnowPiles() const

    // 0x1000b7a80: WorldmapAreaMetadata::GetMaxMapZ() const has the same machine code as minimenu::MinimenuEntry::GetObjCount() const

    // 0x1000b9960: WorldmapAreaMetadata::GetId() const has the same machine code as ScriptVarType::GetID() const

    // 0x1000e31a0: WorldmapAreaMetadata::GetMinMapX() const has the same machine code as graphics::NXTPixScreen::GetUIWidth() const

    // 0x100102fc0: WorldmapAreaMetadata::GetOrigin() const has the same machine code as InputField::GetPlaceholderContents() const

    // 0x10012dc00: WorldmapAreaMetadata::GetBackgroundColour() const has the same machine code as graphics::NXTPixScreen::GetViewportX()

    // 0x100214ff0
    void WorldmapAreaMetadata::Unpack(PacketJ<Array<unsigned char>>& packetJ, int arg2, ErrorCapture& errorCapture) {
        uint8_t* this_00;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_58;

        m_id = arg2;
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_58,
                                                                                             (uint8_t)packetJ);
        field_8 = &local_58;
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_58,
                                                                                             (uint8_t)packetJ);
        field_40 = &local_58;
        unsigned int uVar4 = packetJ.g4();
        WorldmapAreaMetadata* this_01 = (WorldmapAreaMetadata*)(unsigned long)uVar4;
        m_origin->Set(uVar4);
        uint32_t uVar5 = packetJ.g4();
        *(uint32_t*)&m_backgroundColour = uVar5;
        char cVar1 = packetJ.g1();
        *(bool*)&field_108 = cVar1 == '\x01';
        cVar1 = packetJ.g1();
        *(bool*)((long)&field_108 + 1) = cVar1 == '\x01';
        uint8_t bVar2 = packetJ.g1();
        *(unsigned int*)((long)&m_backgroundColour + 4) = (unsigned int)bVar2;
        WorldmapAreaMetadata* local_38 = this;
        bVar2 = packetJ.g1();
        if (bVar2 != 0) {
            uVar4 = (unsigned int)bVar2;
            this_00 = &local_38->field_112;
            do {
                UnpackSubarea(&local_58, this_01, packetJ, errorCapture);
                if (&local_58 != this_01) {
                    this_01 = &local_58;
                    eastl::vector<std::unique_ptr<WorldmapSubarea>>::emplace_back<std::unique_ptr<WorldmapSubarea>>(
                        (vector<std::unique_ptr<WorldmapSubarea>>*)this_00, &local_58);
                }
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        CalcBounding(local_38);
    }

    // 0x100215470
    auto WorldmapAreaMetadata::UnpackSubarea(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture) {
        WorldmapSubareaZoneArea* this_00;
        char* arg1;
        unique_ptr<WorldmapSubarea> local_30;

        uint8_t bVar1 = packetJ.g1();
        local_30.unique_ptr<true, void>();
        switch (bVar1) {
        case 0:
            this_00 = (WorldmapSubareaZoneArea*)operator new(64);
            new (this_00) WorldmapSubareaSquareArea();
            break;
        case 1:
            this_00 = (WorldmapSubareaZoneArea*)operator new(48);
            new (this_00) WorldmapSubareaSquare();
            break;
        case 2:
            this_00 = (WorldmapSubareaZoneArea*)operator new(80);
            new (this_00) WorldmapSubareaZoneArea();
            break;
        case 3:
            this_00 = (WorldmapSubareaZoneArea*)operator new(64);
            new (this_00) WorldmapSubareaZone();
            break;
        default:
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/worldmap/"
                      "WorldmapAreaMetadata.cpp",
                      177, "WorldmapAreaMetadata.unpackSubarea - packet contains invalid subarea type enum value: %i",
                      (unsigned int)bVar1);
            arg1 = "WorldmapAreaMetadata.unpackSubarea - packet contains invalid subarea type enum value: %i";
            errorCapture.Raise(
                "WorldmapAreaMetadata.unpackSubarea - packet contains invalid subarea type enum value: %i",
                (unsigned long)(unsigned int)bVar1);
            result.unique_ptr<true, void>(arg1);
            goto LAB_10021553e;
        }
        local_30.reset(this_00);
        auto plVar2 = local_30.operator->();
        (**(void (**)(...))(*plVar2 + 88))(plVar2, packetJ);
        auto result(local_30);
    LAB_10021553e:
        return result;
    }

    // 0x100215670
    void WorldmapAreaMetadata::CalcBounding() {
        long* plVar2;

        auto this_00 = field_112.HeapBeginPtr();
        auto puVar1 = field_112.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 40))(plVar2, this);
        }
    }

    // 0x1002156d0
    unsigned long WorldmapAreaMetadata::ContainsSourceTile(int arg1, int arg2, int arg3) {
        bool cVar1;
        long* plVar3;
        uint64_t unaff_R13;

        auto this_00 = field_112.HeapBeginPtr();
        auto puVar2 = field_112.end();
        bool bVar4 = this_00 == puVar2;
        if (!bVar4) {
            plVar3 = (long*)(*this_00).operator->();
            cVar1 = (**(void (**)(...))(*plVar3 + 48))(plVar3, arg1, arg2);
            while (!cVar1) {
                this_00 = this_00 + 8;
                bVar4 = this_00 == puVar2;
                if (bVar4)
                    break;
                plVar3 = (long*)(*this_00).operator->();
                cVar1 = (**(void (**)(...))(*plVar3 + 48))(plVar3, arg1, arg2, arg3);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)unaff_R13 >> 8)) << 8) | (uint8_t)bVar4) ^ 1) & 4294967295;
    }

    // 0x1002157a0
    unsigned long WorldmapAreaMetadata::ContainsTargetTile(int arg1, int arg2) {
        bool cVar1;
        unique_ptr<WorldmapSubarea>* this_00;
        unique_ptr<WorldmapSubarea>* puVar3;
        long* plVar4;
        uint64_t unaff_R15;
        unsigned long uVar6;
        bool bVar7;

        int iVar5 = arg1 + 63;
        if (-1 < arg1) {
            iVar5 = arg1;
        }
        int iVar2 = arg2 + 63;
        if (-1 < arg2) {
            iVar2 = arg2;
        }
        if ((((iVar5 >> 6 < m_minMapX) || (m_maxMapX < iVar5 >> 6)) || (iVar2 >> 6 < m_minMapZ)) ||
            (m_maxMapZ < iVar2 >> 6)) {
            uVar6 = 0;
        } else {
            this_00 = (unique_ptr<WorldmapSubarea>*)field_112.HeapBeginPtr();
            puVar3 = (unique_ptr<WorldmapSubarea>*)field_112.end();
            bVar7 = this_00 == puVar3;
            if (!bVar7) {
                plVar4 = (long*)(*this_00).operator->();
                cVar1 = (**(void (**)(...))(*plVar4 + 56))(plVar4, arg1, arg2);
                while (!cVar1) {
                    this_00 = this_00 + 8;
                    bVar7 = this_00 == puVar3;
                    if (bVar7)
                        break;
                    plVar4 = (long*)(*this_00).operator->();
                    cVar1 = (**(void (**)(...))(*plVar4 + 56))(plVar4, arg1, arg2);
                }
            }
            uVar6 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)bVar7) ^ 1;
        }
        return uVar6 & 4294967295;
    }

    // 0x100215880
    auto WorldmapAreaMetadata::SourceToTargetTile(int arg1, int arg2, int arg3) {
        auto result;
        long* plVar3;

        uint8_t* this_01 = &field_112;
        auto this_00 = this_01->HeapBeginPtr();
        auto puVar2 = this_01->end();
        while (true) {
            if (this_00 == puVar2) {
                result.unique_ptr<true, void>(this);
                return result;
            }
            plVar3 = (long*)(*this_00).operator->();
            this = (WorldmapAreaMetadata*)(unsigned long)(unsigned int)arg1;
            if ((**(void (**)(...))(*plVar3 + 48))(plVar3, this, arg2, arg3) != '\0')
                break;
            this_00 = this_00 + 8;
        }
        plVar3 = (long*)(*this_00).operator->();
        (**(void (**)(...))(*plVar3 + 64))(&result, plVar3, arg1, arg2, arg3);
        return result;
    }

    // 0x100215940
    CoordGrid WorldmapAreaMetadata::TargetToSourceTile(int arg1, int arg2) {
        long* plVar3;
        uint32_t in_ECX;
        uint64_t extraout_RDX;
        uint64_t extraout_RDX_00;
        uint64_t uVar4;
        uint32_t in_register_00000034;
        CoordGrid CVar5;

        Layout* this_01 = (Layout*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 112);
        auto this_00 = this_01->HeapBeginPtr();
        auto puVar2 = this_01->end();
        do {
            if (this_00 == puVar2) {
                new (this) rs2lib::CoordGrid((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull);
                uVar4 = extraout_RDX;
            LAB_1002159cf:
                CVar5._8_8_ = uVar4;
                CVar5._0_8_ = this;
                return CVar5;
            }
            plVar3 = (long*)(*this_00).operator->();
            if ((**(void (**)(...))(*plVar3 + 56))(plVar3, arg2, in_ECX) != '\0') {
                plVar3 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar3 + 72))(this, plVar3, arg2, in_ECX);
                uVar4 = extraout_RDX_00;
                goto LAB_1002159cf;
            }
            this_00 = this_00 + 8;
        } while (true);
    }

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag {
    // 0x100215150
    shared_ptr_if_not_array<oldscape::rs2lib::worldmap::MapSquareData>::type
    make_shared<oldscape::rs2lib::worldmap::MapSquareData>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        MapSquareData* local_28[2];

        auto arg1 = aligned_alloc(224, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::worldmap::MapSquareData>::type result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::worldmap::MapSquareData>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>, int,
                              oldscape::rs2lib::worldmap::MapSquareData*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100215210
    shared_ptr_if_not_array<oldscape::rs2lib::worldmap::MapZoneData>::type
    make_shared<oldscape::rs2lib::worldmap::MapZoneData>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        MapZoneData* local_28[2];

        auto arg1 = aligned_alloc(240, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::worldmap::MapZoneData>::type result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::worldmap::MapZoneData>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>, int,
                              oldscape::rs2lib::worldmap::MapZoneData*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100215380
    shared_ptr_if_not_array<oldscape::rs2lib::worldmap::StaticMapElement>::type
    make_shared<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid const&,
                oldscape::rs2lib::CoordGrid&, int&, decltype(nullptr)>(const oldscape::rs2lib::CoordGrid& coordGrid1,
                                                                       oldscape::rs2lib::CoordGrid& coordGrid2,
                                                                       int& arg3, decltype(nullptr)&& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        StaticMapElement* local_40[2];

        auto arg1 = aligned_alloc(96, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::worldmap::StaticMapElement>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid const&,
                              oldscape::rs2lib::CoordGrid&, int&, decltype(nullptr)>(
                    (void*)((long)arg1 + 32), coordGrid1, coordGrid2, arg3, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>, int,
                              oldscape::rs2lib::worldmap::StaticMapElement*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x1002177a0
    shared_ptr_if_array<unsigned int[]>::type make_shared<unsigned int[]>(unsigned long arg1) {
        void* arg1_00;
        unsigned long uVar1;
        long lVar2;
        unsigned int* local_38[2];

        unsigned long local_40 = arg1;
        if ((arg1 == 0) || (arg1_00 = (void*)aligned_alloc(arg1 * 4 + 20, 8), arg1_00 == nullptr)) {
            return shared_ptr_if_array<unsigned int[]>::type();
        }
        local_38[0] = (unsigned int*)((long)arg1_00 + 16);
        if (local_40 != 0) {
            lVar2 = 0;
            uVar1 = 0;
            do {
                placement_new<unsigned int>((void*)((long)local_38[0] + lVar2));
                uVar1 = uVar1 + 1;
                lVar2 = lVar2 + 4;
            } while (uVar1 < local_40);
        }
        auto fastPool = placement_new<ref_counter_shared_trivial<unsigned int>, unsigned long&, unsigned int*&>(
            arg1_00, &local_40, local_38);
        new (&result) eastl::hashtable_iterator(fastPool, (unsigned long)local_38[0]);
        return result;
    }

    // 0x100217850
    unsigned int* placement_new<unsigned int>(void* arg1) {
        *(uint32_t*)arg1 = 0;
        return arg1;
    }

    // 0x100217860
    ref_counter_shared_trivial<unsigned int>*
    placement_new<ref_counter_shared_trivial<unsigned int>, unsigned long&, unsigned int*&>(void* arg1,
                                                                                            unsigned long& arg2,
                                                                                            unsigned int*& arg3) {
        new (arg1) ref_counter_shared_trivial<unsigned int>(arg2, arg3);
        return arg1;
    }

    // 0x10021d2d0
    oldscape::rs2lib::HttpSpriteData*
    placement_new<oldscape::rs2lib::HttpSpriteData, eastl::string const&>(void* arg1, const eastl::string& str) {
        new (arg1) oldscape::rs2lib::HttpSpriteData(str);
        return arg1;
    }

    // 0x10021d2f0
    ref_counter_shared<oldscape::rs2lib::HttpSpriteData>*
    placement_new<ref_counter_shared<oldscape::rs2lib::HttpSpriteData>, int, oldscape::rs2lib::HttpSpriteData*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::HttpSpriteData*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::HttpSpriteData>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x100218ab0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100218ac0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100218ad0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::__invoke(void* arg1, BaseApp* baseApp) {
        operator()(this, arg1, baseApp);
    }

    // 0x100218ae0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* arg1, BaseApp * baseApp) const {
        bool->SetFocus()::$_0::operator()((__0*)this, arg1);
    }

    // 0x100218bd0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag::stringtools {
    // 0x100219b70
    int
    UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>(eastl::basic_string<char, BucketAllocatorEASTL>&)::{
        lambda(char) #1
    }
    ::operator()(char arg1) const {
        bool cVar1 = eastl::CharToLower(arg1);
        return (int)cVar1;
    }

} // namespace jag::stringtools
