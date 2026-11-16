// libs/oldscape/jagex3/js5/Js5LocalLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::jagex3 {
    class Js5LocalLoader {
    public:
        class Js5Local;
        // virtual methods in vtable order
        virtual void MainLogic();
        virtual ~Js5LocalLoader();
        virtual OpenJs5(Js5ArchiveId, bool, bool, bool, bool, Error*);
        virtual Shutdown();
        virtual GetIndexPercentage(Js5ArchiveId) const;
        virtual GetGroupCountInCache(Js5ArchiveId) const;
        virtual BlockingFetch(Js5RequestKey const&, Js5RequestParameters const&);
        GetGroupLoadPercentage(Js5ArchiveId, Js5GroupId) const;
        ulong Initialize(char const**, unsigned int, Filename const&);

        // data members, from how the methods use this: 408 bytes
        Js5Loader field_0; // offset 0
        char _unknown_40[56];
        Filename field_96; // offset 96
        char _unknown_112[296];
    };

    class Js5LocalLoader::Js5Local {
    public:
        // virtual methods in vtable order
        virtual ~Js5Local();
        int Open(Filename const&);
        int LoadIndexDataFromFile();
        int LoadGroupDataFromFile(PacketJ<Array<unsigned char, eastl::allocator>>&, Js5GroupId);
        int ReadFirstPacketPage(unsigned char (&)[4096], unsigned int&, unsigned int);
        ulong ReadPacketPart2(PacketJ<Array<unsigned char, eastl::allocator>>&, unsigned char const (&)[4096],
                              unsigned int);
        Js5Local(Js5Loader&, Js5ArchiveId, bool, bool, bool);

        // data members, from how the methods use this: 456 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[12];
        undefined4 field_20; // offset 20
        uint field_24;       // offset 24
        undefined4 field_28; // offset 28
        char _unknown_32[96];
        Filename field_128; // offset 128
        char _unknown_144[288];
        File field_432; // offset 432
    };

    // 0x1002bae60, 208 bytes, inline, placed by class name
    // Js5LocalLoader::Js5Local::Open(Filename const&)
    int Js5LocalLoader::Js5Local::Open(Filename* param_1) {
        undefined1 local_168[320];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_168) callstack::Callstack();
        Filename::operator=((Filename*)field_128, param_1);
        new ((local_168 + 8)) File(param_1, 0, local_168);
        if (local_168->IsValid() == '\0') {
            File::operator=((File*)field_432, (File*)(local_168 + 8));
        }
        ((local_168 + 8))->~File();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_168._0_4_;
    }

    // 0x1002bb0d0, 672 bytes, inline, placed by class name
    // Js5LocalLoader::Js5Local::LoadIndexDataFromFile()
    int Js5LocalLoader::Js5Local::LoadIndexDataFromFile() {
        Array<Js5LocalLoader::Js5Local::GroupOffsets, eastl::allocator>* this_00;
        uint uVar1;
        uint uVar2;
        char cVar3;
        ulong uVar4;
        StyleSheet* this_01;
        uint* puVar5;
        long lVar6;
        undefined4* puVar7;
        uint uVar8;
        ulong uVar9;
        Array<Js5::GroupState, eastl::allocator>* this_02;
        WindowSavedPosition local_1098;
        ulong local_1078;
        Array<Js5::GroupState, eastl::allocator>* local_1070;
        Array<Js5LocalLoader::Js5Local::GroupOffsets, eastl::allocator>* local_1060;
        uint local_1054;
        uint local_1050;
        uint local_104c;
        int local_1048;
        char local_1041;
        undefined1 local_1040[4104];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_1040._0_4_ = ReadFirstPacketPage(this, (unsigned char*)(local_1040 + 8), &local_1054, 0);
        cVar3 = local_1040->IsValid();
        if (cVar3 != '\0') {
            local_1048 = local_1040._0_4_;
            goto LAB_1002bb31d;
        }
        new (&local_1098) PacketJ<Array<unsigned char, eastl::allocator>>();
        local_1040._0_4_ = ReadPacketPart2(this, (PacketJ*)&local_1098, (unsigned char*)(local_1040 + 8), local_1054);
        cVar3 = local_1040->IsValid();
        if (cVar3 == '\0') {
            cVar3 = LoadIndex((PacketJ*)&local_1098);
            if (cVar3 != '\0') {
                this_02 = (Array<Js5::GroupState, eastl::allocator>*)&field_32;
                uVar4 = this_02->end();
                local_1060 = (Array<Js5LocalLoader::Js5Local::GroupOffsets, eastl::allocator>*)&field_104;
                local_1060->set_max_size(uVar4, 3);
                if (uVar4 != 0) {
                    uVar8 = 1;
                    local_104c = local_1054;
                    uVar9 = 0;
                    local_1078 = uVar4;
                    local_1070 = this_02;
                    do {
                        this_01 = (StyleSheet*)Array<Js5::GroupState, eastl::allocator>::operator[](this_02, uVar9);
                        cVar3 = this_01->HasParent();
                        if (cVar3 == '\0') {
                            puVar7 = (undefined4*)
                                Array<Js5LocalLoader::Js5Local::GroupOffsets, eastl::allocator>::operator[](local_1060,
                                                                                                            uVar9);
                            *puVar7 = 0;
                            lVar6 = Array<Js5LocalLoader::Js5Local::GroupOffsets, eastl::allocator>::operator[](
                                local_1060, uVar9);
                            *(undefined4*)(lVar6 + 4) = 0;
                        } else {
                            local_1040._0_4_ =
                                ReadFirstPacketPage(this, (unsigned char*)(local_1040 + 8), &local_1050, local_104c);
                            local_1041 = local_1040->IsValid();
                            this_00 = local_1060;
                            if (local_1041 == '\0') {
                                puVar5 =
                                    (uint*)Array<Js5LocalLoader::Js5Local::GroupOffsets, eastl::allocator>::operator[](
                                        local_1060, uVar9);
                                uVar2 = local_104c;
                                uVar1 = local_1050;
                                *puVar5 = local_104c;
                                lVar6 = Array<Js5LocalLoader::Js5Local::GroupOffsets, eastl::allocator>::operator[](
                                    this_00, uVar9);
                                *(uint*)(lVar6 + 4) = uVar1;
                                local_104c = uVar2 + local_1050;
                                this = (Js5Local*)this;
                            } else {
                                local_1048 = local_1040._0_4_;
                            }
                            uVar4 = local_1078;
                            this_02 = local_1070;
                            if (local_1041 != '\0')
                                goto LAB_1002bb311;
                        }
                        uVar9 = (ulong)uVar8;
                        uVar8 = uVar8 + 1;
                    } while (uVar9 < uVar4);
                }
                goto LAB_1002bb16e;
            }
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)&local_1048, 92);
        } else {
        LAB_1002bb16e:
            local_1048 = local_1040._0_4_;
        }
    LAB_1002bb311:
        local_1098.~WindowSavedPosition();
    LAB_1002bb31d:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_1048;
    }

    // 0x1002bb370, 192 bytes, inline, placed by class name
    // Js5LocalLoader::Js5Local::LoadGroupDataFromFile(PacketJ<Array<unsigned char, eastl::allocator> >&, Js5GroupId)
    int Js5LocalLoader::Js5Local::LoadGroupDataFromFile(PacketT<Array<unsigned char, eastl::allocator>>* param_1,
                                                        uint param_3) {
        undefined1* this_00;
        uint uVar1;
        ulong uVar3;
        long lVar4;
        uint* puVar5;
        uchar* puVar6;
        int local_40[2];
        Error local_38[2];

        this_00 = &field_104;
        uVar3 = this_00->end();
        if ((ulong)param_3 < uVar3) {
            lVar4 = Array<Js5LocalLoader::Js5Local::GroupOffsets, eastl::allocator>::operator[](
                (Array<Js5LocalLoader::Js5Local::GroupOffsets, eastl::allocator>*)this_00, (ulong)param_3);
            uVar1 = *(uint*)(lVar4 + 4);
            param_1->Reserve((ulong)uVar1);
            new (local_38) callstack::Callstack();
            puVar5 = (uint*)Array<Js5LocalLoader::Js5Local::GroupOffsets, eastl::allocator>::operator[](
                (Array<Js5LocalLoader::Js5Local::GroupOffsets, eastl::allocator>*)this_00, (ulong)param_3);
            if ((field_432, (ulong)*puVar5, 0, local_38)->seek() != '\0') {
                puVar6 = (uchar*)param_1->GetDataPtr();
                (field_432, puVar6, uVar1, 0, local_38)->read();
            }
            local_40[0] = local_38[0].field_0;
        } else {
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_40, 22);
        }
        return local_40[0];
    }

    // 0x1002d9910, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Js5LocalLoader::~Js5LocalLoader(): jumps straight to the base-object destructor

    // 0x1002d9920, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // Js5LocalLoader::~Js5LocalLoader()
    void Js5LocalLoader::~Js5LocalLoader() {
        ~Js5LocalLoader(this);
        operator_delete(this);
    }

    // 0x1002da190, 256 bytes, inline, placed by class name
    // Js5LocalLoader::Js5Local::ReadFirstPacketPage(unsigned char (&) [4096], unsigned int&, unsigned int)
    int Js5LocalLoader::Js5Local::ReadFirstPacketPage(unsigned char* param_1, uint* param_2, uint param_3) {
        char cVar1;
        uint uVar2;
        long lVar3;
        undefined1* this_00;
        ulong uVar4;
        int local_44;
        undefined4 local_40[2];
        int local_38[2];

        new (local_38) callstack::Callstack();
        this_00 = field_432;
        this_00->seek((ulong)param_3, 0, local_38);
        cVar1 = local_38->IsValid();
        if (cVar1 == '\0') {
            lVar3 = this_00->length(local_38);
            cVar1 = local_38->IsValid();
            if (cVar1 == '\0') {
                uVar4 = lVar3 - (ulong)param_3;
                uVar2 = 4096;
                if (uVar4 < 4096) {
                    uVar2 = (uint)uVar4;
                }
                this_00->read(param_1, uVar2, 0, local_38);
                cVar1 = local_38->IsValid();
                if (cVar1 == '\0') {
                    local_44 = *(int*)(param_1 + 1);
                    ReorderToBE<int>(&local_44);
                    uVar2 = local_44 + (uint)(*param_1 != (unsigned char)0) * 4 + 5;
                    *param_2 = uVar2;
                    if (uVar4 < uVar2) {
                        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_40, 92);
                        return local_40[0];
                    }
                }
            }
        }
        return local_38[0];
    }

    // 0x1002da290, 160 bytes, inline, placed by class name
    // Js5LocalLoader::Js5Local::ReadPacketPart2(PacketJ<Array<unsigned char, eastl::allocator> >&, unsigned char const (&) [4096], unsigned int)
    ulong Js5LocalLoader::Js5Local::ReadPacketPart2(PacketJ* param_1, unsigned char* param_2, uint param_3) {
        ulong in_RAX;
        void* pvVar1;
        uchar* puVar2;
        ulong local_38;

        local_38 = in_RAX;
        new (&local_38) callstack::Callstack();
        param_1->Reserve((ulong)param_3);
        pvVar1 = (void*)param_1->GetDataPtr();
        if (param_3 < 4097) {
            _memcpy(pvVar1, param_2, (ulong)param_3);
        } else {
            _memcpy(pvVar1, param_2, 4096);
            puVar2 = (uchar*)param_1->GetDataPtr();
            (field_432, puVar2, param_3 - 4096, 4096, (Error*)&local_38)->read();
        }
        return local_38 & 4294967295;
    }

    // 0x1002dc430, 64 bytes, base-object destructor, inline, placed by class name
    // Js5LocalLoader::~Js5LocalLoader()
    void Js5LocalLoader::~Js5LocalLoader() {
        *(undefined***)field_0 = &PTR_MainLogic_100efa560;
        (&field_400)->~Array();
        field_96->~pair();
        ~Js5Loader();
    }

    // 0x1002e0bc0, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5LocalLoader::Js5Local::Js5Local(Js5Loader&, Js5ArchiveId, bool, bool, bool): jumps straight to the base-object constructor

    // 0x1002e0bd0, 128 bytes, base-object constructor, inline, placed by class name
    // Js5LocalLoader::Js5Local::Js5Local(Js5Loader&, Js5ArchiveId, bool, bool, bool)
    void Js5LocalLoader::Js5Local::Js5Local() {
        Js5Loader::Js5ForLoader::Js5();
        field_0 = PTR_vtable_100ee89f8 + 16;
        new (&field_104) Array<Js5LocalLoader::Js5Local::GroupOffsets, eastl::allocator>();
        new (field_128) Filename();
        new (field_432) File();
    }

    // 0x1002e0cb0, 16 bytes, complete-object destructor, inline, placed by class name
    // Js5LocalLoader::Js5Local::~Js5Local(): jumps straight to the base-object destructor

    // 0x1002e0cc0, 32 bytes, deleting destructor, inline, placed by class name
    // Js5LocalLoader::Js5Local::~Js5Local()
    void Js5LocalLoader::Js5Local::~Js5Local() {
        ~Js5Local(this);
        operator_delete(this);
    }

    // 0x1002e0e90, 80 bytes, base-object destructor, inline, placed by class name
    // Js5LocalLoader::Js5Local::~Js5Local()
    void Js5LocalLoader::Js5Local::~Js5Local() {
        field_0 = PTR_vtable_100ee89f8 + 16;
        field_432->~File();
        field_128->~pair();
        (&field_104)->~Array();
        ~Js5();
    }

} // namespace jag::oldscape::jagex3
