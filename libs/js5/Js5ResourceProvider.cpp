// libs/js5/Js5ResourceProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

#include "Js5ResourceProvider.h"

namespace jag {
    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    Js5ResourceProvider::GetJs5WorkerThread() const;

    // 0x100029c40: the linker folded this into oldscape::javapal::GameShell::GetGraphicsApp(), which has identical code
    Js5ResourceProvider::GetDiskCache() const;

    // 0x10017f5b0: the linker folded this into oldscape::javapal::GameShell::GetPixToolkit(), which has identical code
    Js5ResourceProvider::GetMemoryCache();

    // 0x1004af330: the linker folded this into game::MapArea::ShouldAutoFind() const, which has identical code
    Js5ResourceProvider::IsLocalMode();

    // 0x1009e22e0, 3472 bytes, base-object constructor, placed by class name and debug map
    // Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)
    void Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator>* param_1,
                                                  SystemSettings* param_2, Js5ArchiveSetSettings* param_3,
                                                  BigInteger* param_4, BigInteger* param_5, BigInteger* param_6,
                                                  basic_string* param_8, char param_9) {
        future<void>* this_00;
        bool bVar1;
        BigInteger* pBVar2;
        char cVar3;
        bool bVar4;
        int iVar5;
        uint uVar6;
        int iVar7;
        Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>, eastl::allocator>* this_01;
        long lVar8;
        unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>* puVar9;
        _func_decltype_nullptr* p_Var10;
        RT7TextureDataProvider* pRVar11;
        basic_string* pbVar12;
        char* pcVar13;
        undefined8 uVar14;
        ThreadPool* this_02;
        Layout* this_03;
        vector* pvVar15;
        ulong uVar16;
        undefined8* puVar17;
        ulonglong uVar18;
        unique_ptr* puVar19;
        MapSquarePointLights* pMVar20;
        AnimationParameters* this_04;
        Js5LocalModeLoader* this_05;
        Array<game::VarValue, eastl::allocator>* this_06;
        void* pvVar21;
        size_t sVar22;
        uchar* puVar23;
        ulong uVar24;
        type* ptVar25;
        Js5Index* pJVar26;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        _func_decltype_nullptr* p_Var27;
        _func_decltype_nullptr* p_Var28;
        _func_decltype_nullptr* p_Var29;
        Js5ArchiveSetSettings* this_07;
        AutoSingleton<ThreadPoolSingleton>* this_08;
        list<console::Line, eastl::allocator>* this_09;
        undefined8 in_stack_fffffffffffffb78;
        undefined4 uVar30;
        list<std::future<void>*, eastl::allocator> local_470[32];
        Array<unsigned char, BucketAllocatorEASTL> local_450[24];
        Array<unsigned char, BucketAllocatorEASTL> local_438[24];
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_420[32];
        char* local_400;
        Array<eastl::string, eastl::allocator>* local_3f8;
        ulonglong local_3f0;
        BigInteger* local_3e8;
        undefined1* local_3e0;
        undefined1* local_3d8;
        undefined1* local_3d0;
        undefined1* local_3c8;
        undefined1* local_3c0;
        undefined1* local_3b8;
        undefined1* local_3b0;
        undefined1* local_3a8;
        undefined1* local_3a0;
        undefined1* local_398;
        undefined1* local_390;
        undefined1* local_388;
        ThreadPool* local_380[4];
        BigInteger* local_360;
        Js5ResourceProvider* local_358;
        unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>* local_350;
        BigInteger local_348[3];
        int local_32c;
        BigInteger local_328;
        BigInteger local_320;
        ulong local_318;
        RT7TextureDataProvider* local_310;
        int local_304;
        Js5ArchiveSetSettings* local_300;
        undefined1 local_2f8[320];
        char local_1b8;
        Js5ResourceProvider* local_1b0;
        Filename local_1a8[19];
        mutex local_78[64];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = &PTR__Js5ResourceProvider_100f1ccb0;
        local_3e0 = field_8;
        p_Var29 = (_func_decltype_nullptr*)0;
        local_3e8 = param_4;
        local_360 = param_5;
        local_300 = param_3;
        new (local_3e0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        local_3d8 = &field_24;
        new (local_3d8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var29);
        field_40 = 0;
        field_44 = 0;
        local_3d0 = &field_48;
        new (local_3d0) eastl::string(param_8);
        field_80 = local_300;
        field_104 = local_360;
        field_112 = param_6;
        field_120 = 1;
        field_128 = param_1;
        this_01 = operator_new(24);
        iVar5 = local_300->GetX();
        Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>, eastl::allocator>::Array(
            this_01, (ulong)(iVar5 + 1));
        field_136 = this_01;
        local_3c8 = &field_160;
        m_pMemoryCache = (Js5MemoryCache*)0;
        field_152 = (Js5DiskCache*)0;
        std::array<eastl::map<unsigned int, Priority_const*, eastl::less<unsigned int>, SafeBucketAllocatorEASTL>,
                   67ul>::array();
        local_3c0 = &field_3392;
        new (local_3c0) std::array<std::mutex, 4ul>();
        local_3b8 = &field_3648;
        new (local_3b8) std::array<std::mutex, 67ul>();
        local_3b0 = &field_7936;
        new (local_3b0) std::array<
            eastl::map<unsigned int, shared_ptr<Js5WorkerRequestMessage>, eastl::less<unsigned int>, eastl::allocator>,
            67ul>();
        local_3a8 = &field_11152;
        new (local_3a8) std::array<eastl::set<shared_ptr<Js5WorkerRequestMessage>,
                                              eastl::less<shared_ptr<Js5WorkerRequestMessage>>, eastl::allocator>,
                                   4ul>();
        field_11344 = 0;
        local_350 = (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368;
        field_11348 = 0;
        field_11352 = 0;
        field_11356 = 0;
        field_11364 = 0;
        std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::unique_ptr<true, void>(local_350);
        field_11376 = 0;
        field_11377 = false;
        local_3a0 = &field_11384;
        std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::unique_ptr<true, void>(
            (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)local_3a0);
        local_398 = &field_11664;
        new (local_398) std::array<Js5Index, 67ul>();
        local_390 = &field_29888;
        new (local_390) std::array<Js5Index, 67ul>();
        local_388 = &field_48112;
        new (local_388) std::array<Js5Index, 67ul>();
        field_66336 = true;
        field_66344 = param_2;
        this_07 = local_300;
        uVar6 = local_300->GetX();
        local_3f0 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_07);
        eastl::list<std::future<void>*, eastl::allocator>::list(local_470);
        std::mutex::mutex(local_78);
        lVar8 = field_136->end();
        if (lVar8 != 0) {
            p_Var29 = (_func_decltype_nullptr*)&DAT_00000001;
            p_Var28 = (_func_decltype_nullptr*)0;
            do {
                p_Var27 = p_Var29;
                puVar9 = (unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>*)
                    Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>,
                          eastl::allocator>::operator[](field_136, (ulong)p_Var28);
                std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>::operator=(puVar9,
                                                                                                        p_Var28);
                p_Var10 = (_func_decltype_nullptr*)field_136->end();
                p_Var29 = (_func_decltype_nullptr*)(ulong)((int)p_Var27 + 1);
                p_Var28 = p_Var27;
            } while (p_Var27 < p_Var10);
        }
        local_318 = (ulong)uVar6;
        pRVar11 = (RT7TextureDataProvider*)local_300->GetStart(&local_32c);
        local_400 = "";
        if (param_9 != '\0') {
            local_400 = "(Index Only)";
        }
        local_304 = 0;
        local_3f8 = param_1;
        local_358 = this;
        do {
            if (pRVar11 == (RT7TextureDataProvider*)0) {
                this_09 = (list<console::Line, eastl::allocator>*)local_2f8;
                eastl::list<console::Line, eastl::allocator>::begin(this_09);
                local_1a8->end();
                bVar4 = eastl::operator!=((eastl*)this_09, (hashtable_iterator_base*)local_1a8, extraout_RDX);
                uVar30 = (undefined4)((ulong)in_stack_fffffffffffffb78 >> 32);
                if (bVar4) {
                    do {
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_2f8);
                        std::future<void>::get();
                        puVar17 =
                            (undefined8*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)local_2f8);
                        this_00 = (future<void>*)*puVar17;
                        if (this_00 != (future<void>*)0) {
                            std::future<void>::~future(this_00);
                            operator_delete(this_00);
                        }
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_2f8);
                        local_1a8->end();
                        this_09 = (list<console::Line, eastl::allocator>*)local_2f8;
                        bVar4 =
                            eastl::operator!=((eastl*)local_2f8, (hashtable_iterator_base*)local_1a8, extraout_RDX_00);
                        uVar30 = (undefined4)((ulong)in_stack_fffffffffffffb78 >> 32);
                    } while (bVar4);
                }
                uVar18 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_09);
                uVar16 = local_318;
                uVar14 = logger::default_logger();
                logger::Logger::Log(
                    SUB84((double)((float)(uVar18 - local_3f0) * 0.001), 0), uVar14, 0, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    202, "Took %.3f secs to load %d Js5s", CONCAT44(uVar30, local_304));
                new (local_1a8) PacketT<Array<unsigned char, BucketAllocatorEASTL>>(5000);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_1a8);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_1a8, 0);
                iVar5 = local_1a8->size();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_1a8, (int)uVar16 + 1);
                uVar6 = 0;
                do {
                    p_Var28 = (_func_decltype_nullptr*)(ulong)uVar6;
                    p_Var29 = p_Var28;
                    puVar19 =
                        (unique_ptr*)Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>,
                                           eastl::allocator>::operator[](field_136, (ulong)p_Var28);
                    bVar4 = std::operator==(puVar19, p_Var29);
                    if (bVar4) {
                        lVar8 = local_1a8->size();
                        local_1a8->SetPos(lVar8 + 80);
                    } else {
                        puVar9 = (unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>*)
                            Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>,
                                  eastl::allocator>::operator[](field_136, (ulong)p_Var28);
                        pMVar20 = (MapSquarePointLights*)std::unique_ptr<
                                      Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>::operator->(puVar9);
                        this_04 = (AnimationParameters*)pMVar20->GetLightSourcesDynamic();
                        iVar7 = this_04->GetX();
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_1a8, iVar7);
                        iVar7 = this_04->GetStatus();
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_1a8, iVar7);
                        iVar7 = this_04->GetAnimationLength();
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_1a8, iVar7 + 1);
                        puVar9 = (unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>*)
                            Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>,
                                  eastl::allocator>::operator[](field_136, (ulong)p_Var28);
                        this_05 = (Js5LocalModeLoader*)std::unique_ptr<
                                      Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>::operator->(puVar9);
                        iVar7 = this_05->GetUncompressedLength();
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_1a8, iVar7);
                        this_06 = (Array<game::VarValue, eastl::allocator>*)this_04->second();
                        cVar3 = this_06->empty();
                        if (cVar3 == '\0') {
                            puVar23 = (uchar*)this_06->data();
                            local_1a8->pArrayBuffer(puVar23, 0, 64);
                            uVar16 = local_318;
                        } else {
                            lVar8 = local_1a8->size();
                            local_1a8->SetPos(lVar8 + 64);
                            uVar16 = local_318;
                        }
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 <= (uint)uVar16);
                lVar8 = local_1a8->size();
                Array<unsigned char, BucketAllocatorEASTL>::Array(local_438, lVar8 - 5);
                pvVar21 = (void*)Array<unsigned char, BucketAllocatorEASTL>::operator[](local_438, 0);
                lVar8 = local_1a8->GetDataPtr();
                sVar22 = local_438->end();
                _memcpy(pvVar21, (void*)(lVar8 + 5), sVar22);
                new (local_2f8) Whirlpool();
                puVar23 = (uchar*)local_438->data();
                uVar24 = local_438->end();
                local_2f8->Update(puVar23, uVar24);
                Array<unsigned char, BucketAllocatorEASTL>::Array(local_450, 64);
                puVar23 = (uchar*)local_450->data();
                local_2f8->Final(puVar23);
                new (local_380) PacketT<Array<unsigned char, BucketAllocatorEASTL>>(65);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_380, 10);
                ptVar25 = (type*)local_450->data();
                uVar24 = local_450->end();
                local_380->pArrayBuffer(ptVar25, 0, uVar24);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(local_420);
                pBVar2 = local_3e8;
                if ((local_3e8 == (BigInteger*)0) || (param_6 == (BigInteger*)0)) {
                    pvVar15 = local_380->SSOBeginPtr(ptVar25);
                    Array<unsigned char, eastl::allocator>::Array<BucketAllocatorEASTL>(
                        (Array<unsigned char, eastl::allocator>*)local_348, (Array*)pvVar15);
                    local_420->SetDataRaw(local_348);
                    local_348->~Array();
                    uVar24 = local_380->size();
                    local_420->SetPos(uVar24);
                } else {
                    puVar23 = (uchar*)local_380->GetDataPtr();
                    uVar24 = local_380->size();
                    new (&local_328) math::BigInteger(puVar23, uVar24);
                    local_320.PowMod(&local_328, pBVar2);
                    local_348->Get();
                    uVar24 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    local_420->Reserve(uVar24);
                    puVar23 = (uchar*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    uVar24 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    local_420->pArrayBuffer(puVar23, 0, uVar24);
                    local_348->~basic_string();
                    local_320.~BigInteger();
                    local_328.~BigInteger();
                }
                uVar24 = local_420->size();
                local_1a8->pArrayBuffer(local_420, 0, uVar24);
                iVar7 = local_1a8->size();
                local_1a8->pSize4(iVar7 - iVar5);
                std::make_unique<Js5MasterIndex, math::BigInteger*&, math::BigInteger*&,
                                 PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(&local_348[0].field_0,
                                                                                       &local_360, (PacketT*)&param_6);
                std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator=(local_350,
                                                                                                (unique_ptr*)local_348);
                local_348->~unique_ptr();
                ProcessNewMasterIndex(this);
                uVar6 = 0;
                do {
                    p_Var28 = (_func_decltype_nullptr*)(ulong)uVar6;
                    p_Var29 = p_Var28;
                    puVar19 =
                        (unique_ptr*)Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>,
                                           eastl::allocator>::operator[](field_136, (ulong)p_Var28);
                    bVar4 = std::operator!=(puVar19, p_Var29);
                    if (bVar4) {
                        puVar9 = (unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>*)
                            Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>,
                                  eastl::allocator>::operator[](field_136, (ulong)p_Var28);
                        pMVar20 = (MapSquarePointLights*)std::unique_ptr<
                                      Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>::operator->(puVar9);
                        pJVar26 = (Js5Index*)pMVar20->GetLightSourcesDynamic();
                        ProcessNewIndex(this, uVar6, pJVar26);
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 <= (uint)uVar16);
                local_420->~PacketT();
                local_380->~PacketT();
                local_450->~Array();
                local_438->~Array();
                local_1a8->~PacketT();
                std::mutex::~mutex(local_78);
                local_470->~list();
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return;
            }
            local_310 = pRVar11;
            lVar8 = param_1->end();
            if (lVar8 == 0) {
                bVar4 = false;
            } else {
                bVar4 = false;
                uVar16 = 0;
                uVar24 = 1;
                do {
                    pbVar12 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](param_1, uVar16);
                    Filename::Filename(local_1a8, pbVar12);
                    pcVar13 = (char*)local_310->GetSpritesArchive();
                    Filename::operator/=(local_1a8, pcVar13);
                    cVar3 = local_1a8->Exists();
                    bVar1 = true;
                    if ((cVar3 != '\0') && (cVar3 = local_1a8->IsFile(), cVar3 != '\0')) {
                        uVar14 = logger::default_logger();
                        in_stack_fffffffffffffb78 = local_310->GetSpritesArchive();
                        ptVar25 = (type*)0;
                        logger::Logger::Log(uVar14, 0, 8,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                            "Js5ResourceProvider.cpp",
                                            160, "Js5ResourceProvider: Loading archive in local mode: %s %s",
                                            in_stack_fffffffffffffb78, local_400);
                        this_08 = (AutoSingleton<ThreadPoolSingleton>*)8;
                        this_02 = operator_new(8);
                        this_03 = (Layout*)this_08->Instance();
                        pvVar15 = eastl::string::Layout::SSOBeginPtr(this_03, ptVar25);
                        local_2f8._0_8_ = local_78;
                        local_2f8._8_8_ = local_310;
                        new ((local_2f8 + 16)) Filename(local_1a8);
                        local_1b8 = param_9;
                        local_1b0 = local_358;
                        ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
                            Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
                            math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::__1>(
                            this_02, (char*)pvVar15, (__1*)local_2f8);
                        local_380[0] = this_02;
                        eastl::list<std::future<void>*, eastl::allocator>::push_back(local_470, (future**)local_380);
                        Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                            Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                            math::BigInteger*, eastl::string, bool)::$_1::~__1((__1*)local_2f8);
                        bVar4 = true;
                        bVar1 = false;
                        param_1 = local_3f8;
                    }
                    local_1a8->~pair();
                    if (!bVar1)
                        break;
                    uVar16 = param_1->end();
                    bVar1 = uVar24 < uVar16;
                    uVar16 = uVar24;
                    uVar24 = (ulong)((int)uVar24 + 1);
                } while (bVar1);
            }
            this = local_358;
            if (bVar4) {
                local_304 = local_304 + 1;
            } else {
                uVar14 = logger::default_logger();
                in_stack_fffffffffffffb78 = local_310->GetSpritesArchive();
                logger::Logger::Log(
                    uVar14, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    190,
                    "Js5ResourceProvider: Specified archive doesn\'t exist in any of the provided pack directories: %s",
                    in_stack_fffffffffffffb78);
            }
            pRVar11 = (RT7TextureDataProvider*)local_300->GetNext(&local_32c);
        } while (true);
    }

    // 0x1009e3540, 672 bytes, placed by class name
    // Js5ResourceProvider::ProcessNewMasterIndex()
    void Js5ResourceProvider::ProcessNewMasterIndex() {
        undefined1* this_00;
        uint uVar1;
        int iVar2;
        CoordMapSquare* this_01;
        Js5ArchiveSettings* this_02;
        Js5MasterIndex* pJVar3;
        long lVar4;
        int* piVar5;
        Js5Index* this_03;
        undefined4* puVar6;
        uint* puVar7;
        uint* puVar8;
        Js5MemoryCache* this_04;
        Js5DiskCache* this_05;
        Js5ResourceProvider* pJVar9;
        Js5ResourceProvider* pJVar10;
        Js5Index local_160;
        array<Js5Index, 67ul>* local_50;
        array<unsigned int, 67ul>* local_48;
        Js5ResourceProvider* local_40;
        int local_38;
        uint local_34;

        this_00 = &field_11368;
        this_01 = (CoordMapSquare*)std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
            (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)this_00);
        local_34 = this_01->GetX();
        if (67 < local_34) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "Js5Constants::NUM_FIXED_ARCHIVES >= maximumArchiveID",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                393, (char*)0);
        }
        this_02 = (Js5ArchiveSettings*)(field_80, &local_38)->GetStart();
        if (this_02 != (Js5ArchiveSettings*)0) {
            do {
                uVar1 = this_02->GetX();
                pJVar3 =
                    (Js5MasterIndex*)std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
                        (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)this_00);
                lVar4 = pJVar3->GetArchiveData(uVar1);
                if (lVar4 != 0) {
                    this_02->SetGroupIDLimit(*(uint*)(lVar4 + 32));
                    this_02->SetTotalSize(*(uint*)(lVar4 + 36));
                }
                this_02 = (Js5ArchiveSettings*)(field_80, &local_38)->GetNext();
            } while (this_02 != (Js5ArchiveSettings*)0);
        }
        local_40 = this;
        if (m_pMemoryCache == (Js5MemoryCache*)0) {
            puVar7 = (uint*)(&field_11392)->begin();
            puVar8 = (uint*)(&field_11392)->end();
            eastl::fill<unsigned int>(puVar7, puVar8, 0);
            puVar7 = (uint*)(&field_3376)->begin();
            puVar8 = (uint*)(&field_3376)->end();
            eastl::fill<unsigned int>(puVar7, puVar8, 0);
            this_04 = operator_new(327960);
            pJVar10 = (Js5ResourceProvider*)67108864;
            Js5MemoryCache::Js5MemoryCache(this_04, 67108864, 1024);
            m_pMemoryCache = this_04;
            if (field_66336 != false) {
                this_05 = operator_new(1513232);
                pJVar9 = local_40;
                pJVar10 = local_40;
                Js5DiskCache::Js5DiskCache(this_05, local_40, (basic_string*)&local_40->field_48, local_40->field_66344,
                                           local_40->field_80);
                pJVar9->field_152 = this_05;
            }
        } else {
            local_50 = (array<Js5Index, 67ul>*)&field_11664;
            local_48 = (array<unsigned int, 67ul>*)&field_11392;
            uVar1 = 0;
            do {
                pJVar3 =
                    (Js5MasterIndex*)std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
                        (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)this_00);
                piVar5 = (int*)pJVar3->GetArchiveData(uVar1);
                pJVar9 = (Js5ResourceProvider*)(ulong)uVar1;
                pJVar10 = pJVar9;
                this_03 = (Js5Index*)std::array<Js5Index, 67ul>::operator[](local_50, (ulong)pJVar9);
                iVar2 = this_03->GetStatus();
                if (iVar2 == piVar5[1]) {
                    iVar2 = this_03->GetX();
                    if (iVar2 != *piVar5)
                        goto LAB_1009e3693;
                } else {
                LAB_1009e3693:
                    new (&local_160) Js5Index();
                    Js5Index::operator=(this_03, &local_160);
                    local_160.~OldscapeToNxtJs5Index();
                    puVar6 = (undefined4*)std::array<unsigned int, 67ul>::operator[](local_48, (ulong)pJVar9);
                    *puVar6 = 0;
                    pJVar10 = pJVar9;
                }
                uVar1 = uVar1 + 1;
            } while (uVar1 <= local_34);
        }
        pJVar9 = local_40;
        local_40->field_152->UpdateIndexSizesForArchives();
        std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator=(
            (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&pJVar9->field_11384,
            (_func_decltype_nullptr*)pJVar10);
        pJVar9->field_11376 = 0;
    }

    // 0x1009e37f0, 208 bytes, placed by class name
    // Js5ResourceProvider::ProcessNewIndex(unsigned int, Js5Index const&)
    void Js5ResourceProvider::ProcessNewIndex(uint param_1, Js5Index* param_2) {
        Js5MasterIndex* this_00;
        int* piVar2;
        Js5Index* this_01;
        undefined4* puVar3;
        undefined8 uVar4;

        this_00 = (Js5MasterIndex*)std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
            (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368);
        piVar2 = (int*)this_00->GetArchiveData(param_1);
        if (param_2->GetX() == *piVar2) {
            this_01 =
                (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664, (ulong)param_1);
            Js5Index::operator=(this_01, param_2);
            puVar3 = (undefined4*)std::array<unsigned int, 67ul>::operator[]((array<unsigned int, 67ul>*)&field_11392,
                                                                             (ulong)param_1);
            *puVar3 = 3;
            if (field_152 != (Js5DiskCache*)0) {
                (field_152, param_1)->Validate();
            }
        } else {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                306, "Js5ResourceProvider: Index CRC failure for archive: %u", param_1);
        }
    }

    // 0x1009e38c0, 48 bytes, complete-object constructor, placed by class name
    // Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)
    void Js5ResourceProvider::Js5ResourceProvider() {
        Js5ResourceProvider();
    }

    // 0x1009e3a50, 528 bytes, base-object destructor, placed by class name
    // Js5ResourceProvider::~Js5ResourceProvider()
    void Js5ResourceProvider::~Js5ResourceProvider() {
        undefined1* this_00;
        undefined1* this_01;
        bool bVar1;
        Task* this_02;
        rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::Texture>>,
               eastl::less<unsigned long long>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::Texture>>>, true, true>*
            this_03;
        rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::Texture>>,
               eastl::less<unsigned long long>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::Texture>>>, true, true>*
            prVar2;

        field_0 = &PTR__Js5ResourceProvider_100f1ccb0;
        this_00 = field_8;
        bVar1 = this_00->operator_cast_to_bool();
        if (bVar1) {
            this_02 = (Task*)shared_ptr<Js5WorkerThread>::operator->((shared_ptr<Js5WorkerThread>*)this_00);
            this_02->Join();
            shared_ptr<Js5WorkerThread>::reset();
        }
        (&field_11368, (Js5MasterIndex*)0)->reset();
        (&field_11384, (Js5MasterIndex*)0)->reset();
        safe_delete<Js5MemoryCache>(&m_pMemoryCache);
        safe_delete<Js5DiskCache>(&field_152);
        this_01 = &field_7936;
        this_03 =
            (rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::Texture>>,
                    eastl::less<unsigned long long>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::Texture>>>, true, true>*)
                this_01->begin();
        prVar2 =
            (rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::Texture>>,
                    eastl::less<unsigned long long>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::Texture>>>, true, true>*)
                this_01->end();
        for (; this_03 != prVar2; this_03 = this_03 + 48) {
            eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::Texture>>,
                          eastl::less<unsigned long long>, eastl::allocator,
                          eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::Texture>>>, true,
                          true>::clear(this_03);
        }
        safe_delete<
            Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>, eastl::allocator>>(
            (Array**)&field_136);
        (&field_48112)->~array();
        (&field_29888)->~array();
        (&field_11664)->~array();
        (&field_11384)->~unique_ptr();
        (&field_11368)->~unique_ptr();
        (&field_11152)->~array();
        this_01->~array();
        (&field_3648)->~array();
        (&field_3392)->~array();
        (&field_160)->~array();
        (&field_48)->~basic_string();
        (&field_24)->~shared_ptr();
        this_00->~shared_ptr();
    }

    // 0x1009e3da0, 16 bytes, complete-object destructor, placed by class name
    // Js5ResourceProvider::~Js5ResourceProvider(): jumps straight to the base-object destructor

    // 0x1009e3db0, 32 bytes, deleting destructor, placed by class name
    // Js5ResourceProvider::~Js5ResourceProvider()
    void Js5ResourceProvider::~Js5ResourceProvider() {
        ~Js5ResourceProvider(this);
        operator_delete(this);
    }

    // 0x1009e3dd0, 32 bytes, placed by class name
    // Js5ResourceProvider::IsDiskCacheReady() const
    bool Js5ResourceProvider::IsDiskCacheReady() {
        return field_152 != (Js5DiskCache*)0;
    }

    // 0x1009e3df0, 16 bytes, placed by class name
    // Js5ResourceProvider::ProcessNewMasterIndexFromHTTP()
    void Js5ResourceProvider::ProcessNewMasterIndexFromHTTP() {
        ValidateHTTPArchiveIndices(this);
    }

    // 0x1009e3e00, 224 bytes, placed by class name
    // Js5ResourceProvider::ValidateHTTPArchiveIndices()
    void Js5ResourceProvider::ValidateHTTPArchiveIndices() {
        bool bVar1;
        uint uVar2;
        MainLoopFrameTimer* this_00;
        Js5MasterIndex* pJVar3;
        int* piVar4;
        int* piVar5;
        int local_34;

        this_00 = (MainLoopFrameTimer*)(field_80, &local_34)->GetStart();
        if (this_00 != (MainLoopFrameTimer*)0) {
            do {
                bVar1 = MainLoopFrameTimer::GetFastUpdateLoopEnabled(this_00);
                if (bVar1) {
                    uVar2 = this_00->GetX();
                    pJVar3 = (Js5MasterIndex*)
                                 std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
                                     (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368);
                    piVar4 = (int*)pJVar3->GetArchiveData(uVar2);
                    pJVar3 = (Js5MasterIndex*)
                                 std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
                                     (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11384);
                    piVar5 = (int*)pJVar3->GetArchiveData(uVar2);
                    if ((piVar4 != (int*)0) && (piVar5 != (int*)0)) {
                        if (*piVar4 == *piVar5) {
                            bVar1 = piVar4[1] == piVar5[1];
                        } else {
                            bVar1 = false;
                        }
                        this_00->SetHTTPValidated(bVar1);
                    }
                }
                this_00 = (MainLoopFrameTimer*)(field_80, &local_34)->GetNext();
            } while (this_00 != (MainLoopFrameTimer*)0);
        }
    }

    // 0x1009e3ee0, 32 bytes, placed by class name
    // Js5ResourceProvider::EnableDiskCacheValidation(bool)
    void Js5ResourceProvider::EnableDiskCacheValidation(bool param_1) {
        if (field_152 != (Js5DiskCache*)0) {
            (field_152, param_1)->EnableValidate();
        }
    }

    // 0x1009e4130, 96 bytes, placed by class name
    // Js5ResourceProvider::CheckArchive(Js5ArchiveSettings const&) const
    bool Js5ResourceProvider::CheckArchive(Js5ArchiveSettings* param_1) {
        Js5ArchiveSetSettings* this_00;
        uint uVar1;
        Js5ArchiveSettings* pJVar2;
        undefined8 uVar3;

        this_00 = field_80;
        uVar1 = param_1->GetX();
        pJVar2 = (Js5ArchiveSettings*)this_00->GetByArchiveID(uVar1);
        if (pJVar2 != param_1) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                471, "Js5ResourceProvider: Can only request archives passed during initialisation, or INDEX_ARCHIVE");
        }
        return pJVar2 == param_1;
    }

    // 0x1009e41e0, 384 bytes, placed by class name
    // Js5ResourceProvider::RequestIndex(unsigned int, Js5ArchiveSettings const&)
    undefined* Js5ResourceProvider::RequestIndex(uint param_1, Js5ArchiveSettings* param_2) {
        uint* puVar2;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar3;
        Js5MasterIndex* pJVar4;
        int* piVar5;
        long lVar6;
        Task* this_00;
        uint* extraout_RDX;
        VBOMapper local_60;
        shared_ptr local_40;

        puVar2 =
            (uint*)std::array<unsigned int, 67ul>::operator[]((array<unsigned int, 67ul>*)&field_11392, (ulong)param_1);
        if (*puVar2 < 2) {
            if (RequestGroupFromDisk(this, param_2, 4294967295, (Priority*)Priority::HIGHEST, true) == '\0') {
                local_60._0_4_ = 70;
                MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<unsigned int>(
                    &local_40, (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>*)&local_60,
                    extraout_RDX);
                pPVar3 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                             shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar3, 20);
                pPVar3 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                             shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar3, (ulong)param_1);
                pPVar3 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                             shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                pJVar4 =
                    (Js5MasterIndex*)std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
                        (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368);
                piVar5 = (int*)pJVar4->GetArchiveData(param_1);
                PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(pPVar3, *piVar5);
                pPVar3 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                             shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                 (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                pJVar4 =
                    (Js5MasterIndex*)std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
                        (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368);
                lVar6 = pJVar4->GetArchiveData(param_1);
                new (&local_60) PacketT<Array<unsigned char, eastl::allocator>>((Array*)(lVar6 + 8));
                pPVar3->pArrayBuffer((PacketT*)&local_60);
                local_60.~VBOMapper();
                this_00 = (Task*)shared_ptr<Js5WorkerThread>::operator->((shared_ptr<Js5WorkerThread>*)field_8);
                this_00->Message(&local_40);
                *puVar2 = 2;
                local_40.~shared_ptr();
            }
        }
        return DataStatus::NOTLOADED;
    }

    // 0x1009e4360, 1024 bytes, placed by class name
    // Js5ResourceProvider::RequestGroupFromDisk(Js5ArchiveSettings const&, unsigned int, Priority const*, bool)
    ulong Js5ResourceProvider::RequestGroupFromDisk(Js5ArchiveSettings* param_1, uint param_2, Priority* param_3,
                                                    bool param_4) {
        undefined1* this_00;
        Js5DiskCache* pJVar1;
        Priority* pPVar2;
        Js5Index* this_01;
        uint uVar3;
        uint uVar4;
        char cVar5;
        uint uVar6;
        int iVar7;
        Js5MasterIndex* pJVar8;
        uint* puVar9;
        long lVar10;
        Js5Index* pJVar11;
        undefined8 uVar12;
        int* piVar13;
        undefined4* puVar14;
        undefined7 in_register_00000081;
        uint uVar15;
        undefined8 unaff_R12;
        ulong uVar16;
        uint7 uVar17;
        uint uVar18;
        ulong uVar19;
        bool bVar20;
        Js5Index local_178;
        uint local_64;
        ulong local_60;
        Js5Index* local_48;
        uint local_40;
        uint local_3c;
        uint local_34;

        if (field_120 == '\0') {
            if (field_66336 != false) {
                local_40 = (uint)CONCAT71(in_register_00000081, param_4);
                uVar6 = param_1->GetX();
                pJVar1 = field_152;
                uVar16 = CONCAT71((int7)((ulong)unaff_R12 >> 8), 1);
                if (pJVar1 == (Js5DiskCache*)0)
                    goto LAB_1009e4388;
                uVar19 = (ulong)uVar6;
                if ((char)local_40 == '\0') {
                    iVar7 = param_1->GetX();
                    cVar5 = pJVar1->IsValidated(iVar7);
                    if (cVar5 == '\0') {
                        uVar6 = param_1->GetX();
                        /* WARNING: Subroutine does not return */
                        LogAssert("urgent || m_diskCache->IsValidated(archive.GetArchiveID())",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                  "Js5ResourceProvider.cpp",
                                  786, "Non-urgent request for %d,%d sent before archive cache has been validated",
                                  (ulong)uVar6, (ulong)param_2);
                    }
                }
                uVar15 = param_2;
                local_60 = uVar19;
                local_3c = uVar6;
                if (param_2 == 4294967295) {
                    pJVar8 = (Js5MasterIndex*)
                                 std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
                                     (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368);
                    puVar9 = (uint*)pJVar8->GetArchiveData(uVar6);
                    local_64 = *puVar9;
                    pJVar8 = (Js5MasterIndex*)
                                 std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
                                     (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368);
                    lVar10 = pJVar8->GetArchiveData(uVar6);
                    local_34 = *(uint*)(lVar10 + 4);
                    pJVar11 = (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_48112,
                                                                                local_60);
                    uVar15 = pJVar11->GetGroupCRC(4294967295);
                    uVar6 = local_64;
                    local_48 = pJVar11;
                    if ((uVar15 != local_64) || (uVar15 = pJVar11->GetGroupVersion(4294967295), uVar15 != local_34)) {
                        local_178.CreateDummyIndex(1, uVar6, local_34);
                        Js5Index::operator=(pJVar11, &local_178);
                        local_178.~OldscapeToNxtJs5Index();
                    }
                    uVar15 = param_2;
                    uVar6 = local_3c;
                } else {
                    local_48 =
                        (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664, uVar19);
                }
                cVar5 = (field_152, uVar6)->HasReadOnlyArchive();
                if (cVar5 == '\0') {
                    local_34 = 0;
                } else {
                    pJVar11 = (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_29888,
                                                                                local_60);
                    cVar5 = pJVar11->IsValid();
                    if (cVar5 == '\0') {
                        local_34 = 0;
                        uVar6 = local_3c;
                    } else {
                        local_34 = pJVar11->GetGroupCRC(uVar15);
                        this_01 = local_48;
                        iVar7 = local_48->GetGroupCRC(uVar15);
                        if (local_34 == iVar7) {
                            local_34 = pJVar11->GetGroupVersion(param_2);
                            uVar12 = this_01->GetGroupVersion(param_2);
                            bVar20 = local_34 == (int)uVar12;
                            local_34 = (uint)CONCAT71((int7)((ulong)uVar12 >> 8), bVar20);
                            local_48 = this_01;
                            if (bVar20) {
                                local_48 = pJVar11;
                            }
                        } else {
                            local_34 = 0;
                        }
                        uVar15 = param_2;
                        uVar6 = local_3c;
                    }
                }
                cVar5 = (field_152, uVar6, uVar15)->CheckGroup();
                if (cVar5 != '\x02') {
                    if (cVar5 != '\x03') {
                        uVar6 = *(uint*)(param_3 + 8);
                        this_00 = &field_3376;
                        uVar16 = 0;
                        uVar15 = 0;
                        do {
                            piVar13 = (int*)std::array<unsigned int, 4ul>::operator[](
                                (array<unsigned int, 4ul>*)this_00, uVar16);
                            uVar4 = param_2;
                            uVar3 = local_3c;
                            uVar15 = uVar15 + *piVar13;
                            uVar18 = (int)uVar16 + 1;
                            uVar16 = (ulong)uVar18;
                        } while (uVar18 <= uVar6);
                        uVar17 = (uint7)(uint3)(uVar15 >> 8);
                        if (uVar15 < 9999) {
                            cVar5 = IsRequested(this, local_3c, param_2);
                            pPVar2 = param_3;
                            uVar16 = CONCAT71(uVar17, 1);
                            if (cVar5 == '\0') {
                                SetRequested(this, uVar3, uVar4, param_3);
                                piVar13 = (int*)std::array<unsigned int, 4ul>::operator[](
                                    (array<unsigned int, 4ul>*)this_00, (ulong) * (uint*)(pPVar2 + 8));
                                *piVar13 = *piVar13 + 1;
                                if (uVar4 == 4294967295) {
                                    puVar14 = (undefined4*)std::array<unsigned int, 67ul>::operator[](
                                        (array<unsigned int, 67ul>*)&field_11392, local_60);
                                    *puVar14 = 1;
                                    pJVar1 = field_152;
                                    cVar5 = param_1->GetDiskEncodeType();
                                    uVar6 = local_3c;
                                    pJVar11 = local_48;
                                    local_40 = local_40 & 255;
                                    pJVar1->GetGroup(local_3c, 4294967295, local_48, (int)cVar5, param_3, local_40,
                                                     local_34 & 255);
                                    cVar5 = (field_152, uVar6)->HasReadOnlyArchive();
                                    if (cVar5 != '\0') {
                                        pJVar1 = field_152;
                                        cVar5 = param_1->GetDiskEncodeType();
                                        pPVar2 = param_3;
                                        pJVar1->GetGroup(uVar6, 4294967295, pJVar11, (int)cVar5, param_3, local_40, 1);
                                        piVar13 = (int*)std::array<unsigned int, 4ul>::operator[](
                                            (array<unsigned int, 4ul>*)this_00, (ulong) * (uint*)(pPVar2 + 8));
                                        *piVar13 = *piVar13 + 1;
                                    }
                                } else {
                                    pJVar1 = field_152;
                                    cVar5 = param_1->GetDiskEncodeType();
                                    pJVar1->GetGroup(local_3c, uVar4, local_48, (int)cVar5, param_3, local_40 & 255,
                                                     local_34 & 255);
                                }
                            }
                        } else {
                            uVar16 = CONCAT71(uVar17, 1);
                        }
                    }
                    goto LAB_1009e4388;
                }
            }
        } else {
            RequestGroupFromLocalArchive(this, param_1, param_2);
        }
        uVar16 = 0;
    LAB_1009e4388:
        return uVar16 & 4294967295;
    }

    // 0x1009e4860, 240 bytes, placed by class name
    // Js5ResourceProvider::FileReady(Js5ArchiveSettings const&, unsigned int, unsigned int, Priority const*, bool)
    undefined* Js5ResourceProvider::FileReady(Js5ArchiveSettings* param_1, uint param_2, uint param_3,
                                              Priority* param_4, bool param_5) {
        char cVar1;
        uint uVar2;
        undefined* puVar3;
        Js5Index* this_00;
        undefined** ppuVar4;

        puVar3 = (undefined*)(*(code*)field_0[2])();
        ppuVar4 = &DataStatus::READY;
        if (puVar3 == DataStatus::READY) {
            uVar2 = param_1->GetX();
            this_00 =
                (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664, (ulong)uVar2);
            cVar1 = this_00->DoesFileExist(param_2, param_3);
            if (cVar1 == '\0') {
                ppuVar4 = &DataStatus::MISSING;
            } else {
                cVar1 = (m_pMemoryCache, uVar2, param_2, param_3, this_00)->CheckFile();
                if (cVar1 == '\0') {
                    cVar1 = RequestGroupFromDisk(this, param_1, param_2, param_4, true);
                    ppuVar4 = &DataStatus::NOTLOADED;
                    if (cVar1 == '\0') {
                        RequestGroupFromServer(this, param_1, param_2, param_4, param_5);
                    }
                }
            }
            puVar3 = *ppuVar4;
        }
        return puVar3;
    }

    // 0x1009e4a40, 1056 bytes, placed by class name
    // Js5ResourceProvider::RequestGroupFromServer(Js5ArchiveSettings const&, unsigned int, Priority const*, bool)
    void Js5ResourceProvider::RequestGroupFromServer(Js5ArchiveSettings* param_1, uint param_2, Priority* param_3,
                                                     bool param_4) {
        uint uVar1;
        Priority* pPVar2;
        bool bVar3;
        char cVar4;
        undefined1 uVar5;
        undefined4 uVar6;
        mutex* pmVar7;
        map<unsigned int, shared_ptr<Js5WorkerRequestMessage>, eastl::less<unsigned int>, eastl::allocator>* pmVar8;
        long lVar9;
        shared_ptr* psVar10;
        undefined8 uVar11;
        Js5Index* pJVar12;
        Array* pAVar13;
        rbtree<shared_ptr<Js5WorkerRequestMessage>, shared_ptr<Js5WorkerRequestMessage>,
               eastl::less<shared_ptr<Js5WorkerRequestMessage>>, eastl::allocator,
               eastl::use_self<shared_ptr<Js5WorkerRequestMessage>>, false, true>* this_00;
        hashtable_iterator_base* extraout_RDX;
        Js5Index* pJVar14;
        Js5ArchiveSettings* pJVar15;
        ulong uVar16;
        shared_ptr<Js5WorkerRequestMessage>* psVar17;
        undefined1 local_98[8];
        undefined8 local_90;
        map<unsigned int, shared_ptr<Js5WorkerRequestMessage>, eastl::less<unsigned int>, eastl::allocator>* local_88;
        uint local_7c;
        eastl local_78[8];
        Priority* local_70;
        shared_ptr local_68;
        shared_ptr local_58;
        shared_ptr local_48;
        uint local_34;

        local_34 = param_2;
        if (field_120 != '\0') {
            RequestGroupFromLocalArchive(this, param_1, param_2);
            return;
        }
        pJVar15 = param_1;
        bVar3 = param_1->GetFastUpdateLoopEnabled();
        if ((bVar3) && (cVar4 = param_1->IsHTTPValidated(), cVar4 == '\0')) {
            return;
        }
        if (param_4) {
            uVar1 = field_11348;
        } else {
            uVar1 = field_11352;
        }
        if (1500 < uVar1) {
            return;
        }
        new (&local_48) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pJVar15);
        local_7c = param_1->GetX();
        pJVar14 = (Js5Index*)(ulong)local_7c;
        pmVar7 =
            (mutex*)std::array<std::mutex, 67ul>::operator[]((array<std::mutex, 67ul>*)&field_3648, (ulong)pJVar14);
        new (&local_58) std::scoped_lock<std::mutex>(pmVar7);
        local_70 = param_3;
        local_58.field_8 = (long)pJVar14;
        pmVar8 = (map<unsigned int, shared_ptr<Js5WorkerRequestMessage>, eastl::less<unsigned int>, eastl::allocator>*)
            std::array<eastl::map<unsigned int, shared_ptr<Js5WorkerRequestMessage>, eastl::less<unsigned int>,
                                  eastl::allocator>,
                       67ul>::operator[]((array<eastl::map<unsigned int, shared_ptr<Js5WorkerRequestMessage>,
                                                           eastl::less<unsigned int>, eastl::allocator>,
                                                67ul>*)&field_7936,
                                         (ulong)pJVar14);
        eastl::rbtree<unsigned int, eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage>>>, true,
                      true>::find((uint*)local_78);
        local_88 = pmVar8;
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar3 = eastl::operator!=(local_78, (hashtable_iterator_base*)&local_68, extraout_RDX);
        if (bVar3) {
            lVar9 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_78);
            psVar17 = (shared_ptr<Js5WorkerRequestMessage>*)(lVar9 + 8);
            lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->(psVar17);
            pPVar2 = local_70;
            if ((*(char*)(lVar9 + 26) != '\0') ||
                ((lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->(psVar17),
                  *(Priority**)(lVar9 + 40) <= pPVar2 &&
                      ((!param_4 || (lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->(psVar17),
                                     *(char*)(lVar9 + 25) != '\0')))))) {
                psVar10 = &local_58;
                goto LAB_1009e4dca;
            }
            lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->(psVar17);
            uVar16 = (ulong) * (uint*)(*(long*)(lVar9 + 40) + 8);
            pmVar7 = (mutex*)std::array<std::mutex, 4ul>::operator[]((array<std::mutex, 4ul>*)&field_3392, uVar16);
            new (&local_68) std::scoped_lock<std::mutex>(pmVar7);
            psVar10 = (shared_ptr*)std::array<
                eastl::set<shared_ptr<Js5WorkerRequestMessage>, eastl::less<shared_ptr<Js5WorkerRequestMessage>>,
                           eastl::allocator>,
                4ul>::operator[]((array<eastl::set<shared_ptr<Js5WorkerRequestMessage>,
                                                   eastl::less<shared_ptr<Js5WorkerRequestMessage>>, eastl::allocator>,
                                        4ul>*)&field_11152,
                                 uVar16);
            lVar9 = eastl::set<shared_ptr<Js5WorkerRequestMessage>, eastl::less<shared_ptr<Js5WorkerRequestMessage>>,
                               eastl::allocator>::erase(psVar10);
            if (lVar9 == 0) {
                uVar11 = logger::default_logger();
                logger::Logger::Log(
                    uVar11, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    1168, "Removed duplicate request from request map, but failed to find it in request list");
            }
            new (&local_90) eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_78);
            eastl::rbtree<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::TextureCube>>,
                          eastl::less<unsigned long long>, eastl::allocator,
                          eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::TextureCube>>>,
                          true, true>::erase(local_98, local_88, local_90);
            local_68.~scoped_lock();
        }
        pJVar12 =
            (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664, local_58.field_8);
        pJVar14 = (Js5Index*)local_58.field_8;
        local_58.field_8 = (long)pJVar12;
        MakeSharedPool<Js5WorkerRequestMessage, 768>::MakeShared<>(
            &local_68, (MakeSharedPool<Js5WorkerRequestMessage, 768>*)pJVar14);
        shared_ptr<Js5WorkerRequestMessage>::operator=((shared_ptr<Js5WorkerRequestMessage>*)&local_48, &local_68);
        local_68.~shared_ptr();
        lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->((shared_ptr<Js5WorkerRequestMessage>*)&local_48);
        uVar1 = local_34;
        *(uint*)(lVar9 + 4) = local_7c;
        lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->((shared_ptr<Js5WorkerRequestMessage>*)&local_48);
        *(uint*)(lVar9 + 8) = uVar1;
        uVar6 = local_58.field_8->GetFileCount(local_34);
        lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->((shared_ptr<Js5WorkerRequestMessage>*)&local_48);
        *(undefined4*)(lVar9 + 12) = uVar6;
        uVar11 = param_1->size();
        lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->((shared_ptr<Js5WorkerRequestMessage>*)&local_48);
        *(undefined8*)(lVar9 + 16) = uVar11;
        bVar3 = param_1->GetFastUpdateLoopEnabled();
        lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->((shared_ptr<Js5WorkerRequestMessage>*)&local_48);
        *(bool*)(lVar9 + 24) = bVar3;
        lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->((shared_ptr<Js5WorkerRequestMessage>*)&local_48);
        *(bool*)(lVar9 + 25) = param_4;
        lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->((shared_ptr<Js5WorkerRequestMessage>*)&local_48);
        *(undefined1*)(lVar9 + 26) = 0;
        uVar6 = local_58.field_8->GetGroupCRC(local_34);
        lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->((shared_ptr<Js5WorkerRequestMessage>*)&local_48);
        *(undefined4*)(lVar9 + 28) = uVar6;
        uVar6 = local_58.field_8->GetGroupVersion(local_34);
        lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->((shared_ptr<Js5WorkerRequestMessage>*)&local_48);
        *(undefined4*)(lVar9 + 32) = uVar6;
        uVar5 = param_1->GetDiskEncodeType();
        lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->((shared_ptr<Js5WorkerRequestMessage>*)&local_48);
        *(undefined1*)(lVar9 + 27) = uVar5;
        lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->((shared_ptr<Js5WorkerRequestMessage>*)&local_48);
        *(Priority**)(lVar9 + 40) = local_70;
        cVar4 = local_58.field_8->HasGroupWhirlpools();
        if (cVar4 != '\0') {
            pAVar13 = (Array*)local_58.field_8->GetGroupWhirlpool(local_34);
            lVar9 = shared_ptr<Js5WorkerRequestMessage>::operator->((shared_ptr<Js5WorkerRequestMessage>*)&local_48);
            Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)(lVar9 + 48),
                                                              pAVar13);
        }
        psVar17 = (shared_ptr<Js5WorkerRequestMessage>*)
            eastl::map<unsigned int, shared_ptr<Js5WorkerRequestMessage>, eastl::less<unsigned int>,
                       eastl::allocator>::operator[](local_88, &local_34);
        shared_ptr<Js5WorkerRequestMessage>::operator=(psVar17, &local_48);
        local_58.~scoped_lock();
        pPVar2 = local_70;
        pmVar7 = (mutex*)std::array<std::mutex, 4ul>::operator[]((array<std::mutex, 4ul>*)&field_3392,
                                                                 (ulong) * (uint*)(local_70 + 8));
        new (&local_68) std::scoped_lock<std::mutex>(pmVar7);
        this_00 = (rbtree<shared_ptr<Js5WorkerRequestMessage>, shared_ptr<Js5WorkerRequestMessage>,
                          eastl::less<shared_ptr<Js5WorkerRequestMessage>>, eastl::allocator,
                          eastl::use_self<shared_ptr<Js5WorkerRequestMessage>>, false, true>*)
            std::array<
                eastl::set<shared_ptr<Js5WorkerRequestMessage>, eastl::less<shared_ptr<Js5WorkerRequestMessage>>,
                           eastl::allocator>,
                4ul>::operator[]((array<eastl::set<shared_ptr<Js5WorkerRequestMessage>,
                                                   eastl::less<shared_ptr<Js5WorkerRequestMessage>>, eastl::allocator>,
                                        4ul>*)&field_11152,
                                 (ulong) * (uint*)(pPVar2 + 8));
        eastl::rbtree<shared_ptr<Js5WorkerRequestMessage>, shared_ptr<Js5WorkerRequestMessage>,
                      eastl::less<shared_ptr<Js5WorkerRequestMessage>>, eastl::allocator,
                      eastl::use_self<shared_ptr<Js5WorkerRequestMessage>>, false,
                      true>::insert<shared_ptr<Js5WorkerRequestMessage>&, void>(this_00, &local_48);
        psVar10 = &local_68;
    LAB_1009e4dca:
        psVar10->~scoped_lock();
        local_48.~shared_ptr();
    }

    // 0x1009e4e60, 448 bytes, placed by class name
    // Js5ResourceProvider::GroupPreloaded(Js5ArchiveSettings const&, unsigned int, bool, bool&)
    undefined* Js5ResourceProvider::GroupPreloaded(Js5ArchiveSettings* param_1, uint param_2, bool param_3,
                                                   bool* param_4) {
        char cVar1;
        int iVar2;
        int iVar3;
        long lVar4;
        Js5Index* this_00;
        Js5Index* this_01;
        undefined** ppuVar5;

        *param_4 = false;
        lVar4 = (*(code*)field_0[2])();
        ppuVar5 = &DataStatus::NOTLOADED;
        if (lVar4 == 0)
            goto LAB_1009e500b;
        iVar2 = param_1->GetX();
        this_00 = (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664, (long)iVar2);
        cVar1 = this_00->DoesGroupExist(param_2);
        if (cVar1 == '\0') {
            ppuVar5 = &DataStatus::MISSING;
            goto LAB_1009e500b;
        }
        if (field_66336 == false) {
            cVar1 = '\x02';
        LAB_1009e4f2e:
            if (cVar1 == '\x01') {
            LAB_1009e4f32:
                ppuVar5 = &DataStatus::READY;
                goto LAB_1009e500b;
            }
            cVar1 = (field_152, iVar2)->HasReadOnlyArchive();
            if (cVar1 != '\0') {
                this_01 = (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_29888,
                                                                            (long)iVar2);
                cVar1 = this_01->IsValid();
                if (cVar1 != '\0') {
                    iVar2 = this_01->GetGroupCRC(param_2);
                    iVar3 = this_00->GetGroupCRC(param_2);
                    if (iVar2 == iVar3) {
                        iVar2 = this_01->GetGroupVersion(param_2);
                        iVar3 = this_00->GetGroupVersion(param_2);
                        if (iVar2 == iVar3)
                            goto LAB_1009e4f32;
                    }
                }
            }
            cVar1 = RequestGroupFromDisk(this, param_1, param_2, (Priority*)Priority::LOW, param_3);
            if (cVar1 == '\0') {
                RequestGroupFromServer(this, param_1, param_2, (Priority*)Priority::LOW, param_3);
                *param_4 = true;
            }
        } else {
            cVar1 = IsDiskCacheReady(this);
            if ((cVar1 != '\0') && (cVar1 = (field_152, iVar2, param_2)->CheckGroup(), cVar1 != '\x03'))
                goto LAB_1009e4f2e;
        }
        ppuVar5 = &DataStatus::NOTLOADED;
    LAB_1009e500b:
        return *ppuVar5;
    }

    // 0x1009e51f0, 256 bytes, placed by class name
    // Js5ResourceProvider::GroupReady(Js5ArchiveSettings const&, unsigned int, Priority const*, bool)
    undefined* Js5ResourceProvider::GroupReady(Js5ArchiveSettings* param_1, uint param_2, Priority* param_3,
                                               bool param_4) {
        char cVar2;
        uint uVar3;
        undefined* puVar4;
        Js5Index* this_00;
        undefined** ppuVar5;
        undefined7 in_register_00000081;
        uint local_3c;
        undefined4 local_34;

        puVar4 = (undefined*)(*(code*)field_0[2])();
        if (puVar4 == DataStatus::READY) {
            local_34 = (undefined4)CONCAT71(in_register_00000081, param_4);
            uVar3 = param_1->GetX();
            this_00 =
                (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664, (ulong)uVar3);
            cVar2 = this_00->GetFirstFileID(param_2, &local_3c);
            if (cVar2 == '\0') {
                ppuVar5 = &DataStatus::MISSING;
            } else {
                cVar2 = (m_pMemoryCache, uVar3, param_2, local_3c, this_00)->CheckFile();
                ppuVar5 = &DataStatus::READY;
                if (cVar2 == '\0') {
                    cVar2 = RequestGroupFromDisk(this, param_1, param_2, param_3, true);
                    ppuVar5 = &DataStatus::NOTLOADED;
                    if (cVar2 == '\0') {
                        RequestGroupFromServer(this, param_1, param_2, param_3, local_34._0_1_);
                        ppuVar5 = &DataStatus::NOTLOADED;
                    }
                }
            }
            puVar4 = *ppuVar5;
        }
        return puVar4;
    }

    // 0x1009e53e0, 464 bytes, placed by class name
    // Js5ResourceProvider::GetFile(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&, Js5ArchiveSettings const&, unsigned int, unsigned int, Priority const*, bool, bool, bool)
    undefined* Js5ResourceProvider::GetFile(shared_ptr* param_1, Js5ArchiveSettings* param_2, uint param_3,
                                            uint param_4, Priority* param_5, bool param_6, bool param_7, bool param_8) {
        char cVar1;
        uint uVar2;
        undefined* puVar3;
        Js5Index* this_00;
        undefined** ppuVar4;

        puVar3 = (undefined*)(*(code*)field_0[2])(this, param_2);
        if (puVar3 != DataStatus::READY) {
            return puVar3;
        }
        uVar2 = param_2->GetX();
        this_00 = (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664, (ulong)uVar2);
        cVar1 = this_00->DoesFileExist(param_3, param_4);
        if (cVar1 == '\0') {
            ppuVar4 = &DataStatus::MISSING;
        } else {
            cVar1 = (m_pMemoryCache, param_1, uVar2, param_3, param_4, this_00, param_7)->GetFile();
            if (cVar1 == '\0') {
                if (*(uint*)(Priority::LOW + 8) <= *(uint*)(param_5 + 8)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("priority->id < Priority::LOW->id",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                              "Js5ResourceProvider.cpp",
                              668, (char*)0);
                }
                cVar1 = RequestGroupFromDisk(this, param_2, param_3, param_5, true);
                if (cVar1 != '\0') {
                    ppuVar4 = &DataStatus::NOTLOADED;
                    if ((!param_8) || (cVar1 = IsRequested(this, uVar2, param_3), cVar1 == '\0'))
                        goto LAB_1009e5590;
                    do {
                        field_152->Service();
                        cVar1 = (m_pMemoryCache, param_1, uVar2, param_3, param_4, this_00, param_7)->GetFile();
                        if (cVar1 != '\0')
                            goto LAB_1009e548b;
                        cVar1 = (field_152, uVar2, param_3)->CheckGroup();
                    } while (cVar1 != '\x02');
                }
                RequestGroupFromServer(this, param_2, param_3, param_5, param_6);
                ppuVar4 = &DataStatus::NOTLOADED;
            } else {
            LAB_1009e548b:
                ppuVar4 = &DataStatus::READY;
            }
        }
    LAB_1009e5590:
        return *ppuVar4;
    }

    // 0x1009e5750, 320 bytes, placed by class name
    // Js5ResourceProvider::GetGroup(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&, Js5ArchiveSettings const&, unsigned int, Priority const*, bool, bool)
    undefined* Js5ResourceProvider::GetGroup(shared_ptr* param_1, Js5ArchiveSettings* param_2, uint param_3,
                                             Priority* param_4, bool param_5, bool param_6) {
        char cVar1;
        uint uVar2;
        undefined* puVar3;
        Js5Index* this_00;
        undefined** ppuVar4;

        puVar3 = (undefined*)(*(code*)field_0[2])(this, param_2);
        if (puVar3 == DataStatus::READY) {
            uVar2 = param_2->GetX();
            this_00 =
                (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664, (ulong)uVar2);
            cVar1 = this_00->DoesGroupExist(param_3);
            if (cVar1 == '\0') {
                ppuVar4 = &DataStatus::MISSING;
            } else {
                cVar1 = (m_pMemoryCache, param_1, uVar2, param_3, this_00, param_6)->GetGroup();
                ppuVar4 = &DataStatus::READY;
                if (cVar1 == '\0') {
                    if (*(uint*)(Priority::LOW + 8) <= *(uint*)(param_4 + 8)) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("priority->id < Priority::LOW->id",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                  "Js5ResourceProvider.cpp",
                                  724, (char*)0);
                    }
                    cVar1 = RequestGroupFromDisk(this, param_2, param_3, param_4, true);
                    ppuVar4 = &DataStatus::NOTLOADED;
                    if (cVar1 == '\0') {
                        RequestGroupFromServer(this, param_2, param_3, param_4, param_5);
                        ppuVar4 = &DataStatus::NOTLOADED;
                    }
                }
            }
            puVar3 = *ppuVar4;
        }
        return puVar3;
    }

    // 0x1009e58b0, 48 bytes, placed by class name
    // Js5ResourceProvider::EnsureArchiveLoadedIfAvailableOnDisk(Js5ArchiveSettings const&)
    bool Js5ResourceProvider::EnsureArchiveLoadedIfAvailableOnDisk(Js5ArchiveSettings* param_1) {
        int iVar1;

        iVar1 = GetRequestArchiveStatus(this, param_1);
        if (iVar1 == 0) {
            RequestArchive(this, param_1);
        }
        return iVar1 == 4;
    }

    // 0x1009e58e0, 48 bytes, placed by class name
    // Js5ResourceProvider::GetRequestArchiveStatus(Js5ArchiveSettings const&)
    void Js5ResourceProvider::GetRequestArchiveStatus(Js5ArchiveSettings* param_1) {
        Js5DiskCache* this_00;
        int iVar1;

        this_00 = field_152;
        iVar1 = param_1->GetX();
        this_00->GetStateFulllArchiveLoad(iVar1);
    }

    // 0x1009e5910, 64 bytes, placed by class name
    // Js5ResourceProvider::RequestArchive(Js5ArchiveSettings const&)
    void Js5ResourceProvider::RequestArchive(Js5ArchiveSettings* param_1) {
        Js5DiskCache* this_00;
        int iVar1;

        if ((undefined*)(*(code*)field_0[2])() == DataStatus::READY) {
            this_00 = field_152;
            iVar1 = param_1->GetX();
            this_00->RequestFullArchive(iVar1);
        }
    }

    // 0x1009e59f0, 240 bytes, placed by class name
    // Js5ResourceProvider::RequestGroupFromLocalArchive(Js5ArchiveSettings const&, unsigned int)
    void Js5ResourceProvider::RequestGroupFromLocalArchive(Js5ArchiveSettings* param_1, uint param_2) {
        Js5MemoryCache* this_00;
        Js5Index* this_01;
        unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>* this_02;
        uint uVar1;
        uint uVar2;
        uint uVar3;
        VBOMapper local_60;
        shared_ptr local_40;

        uVar1 = param_1->GetX();
        this_01 = (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664, (ulong)uVar1);
        this_02 = (unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>*)
            Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>,
                  eastl::allocator>::operator[](field_136, (ulong)uVar1);
        uVar2 = std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>::operator->(this_02);
        local_60.GetGroupData(uVar2);
        make_shared<PacketT<Array<unsigned char, eastl::allocator>>, PacketT<Array<unsigned char, eastl::allocator>>>(
            (jag*)&local_40, (PacketT*)&local_60);
        local_60.~VBOMapper();
        this_00 = m_pMemoryCache;
        uVar2 = this_01->GetGroupVersion(param_2);
        uVar3 = this_01->GetGroupCRC(param_2);
        this_00->ProvideGroup(uVar1, param_2, uVar2, uVar3, &local_40);
        local_40.~shared_ptr();
    }

    // 0x1009e5d30, 640 bytes, placed by class name
    // Js5ResourceProvider::OnGroupLoaded(int, int, Array<unsigned char, eastl::allocator>&&, unsigned int, unsigned int, Priority const*, bool, bool, bool)
    void Js5ResourceProvider::OnGroupLoaded(int param_1, int param_2, Array* param_3, uint param_4, uint param_5,
                                            Priority* param_6, bool param_7, bool param_8, bool param_9) {
        undefined1* this_00;
        Js5ResourceProvider* pJVar1;
        Js5MasterIndex* pJVar2;
        uint* puVar3;
        Js5Index* pJVar4;
        int* piVar5;
        undefined4 in_register_00000014;
        Js5Index local_170;
        VBOMapper local_60;
        int* local_40;
        Js5ResourceProvider* local_38;

        local_38 = this;
        if (param_2 == -1) {
            if (param_9) {
                pJVar2 =
                    (Js5MasterIndex*)std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
                        (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368);
                puVar3 = (uint*)pJVar2->GetArchiveData(param_1);
                new (&local_60) PacketT<Array<unsigned char, eastl::allocator>>(param_3);
                new (&local_170) Js5Index(*puVar3, (Array*)(puVar3 + 2), (PacketT*)&local_60);
                pJVar4 = (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_29888,
                                                                           (long)param_1);
                Js5Index::operator=(pJVar4, &local_170);
                local_170.~OldscapeToNxtJs5Index();
            } else {
                piVar5 = (int*)std::array<unsigned int, 67ul>::operator[]((array<unsigned int, 67ul>*)&field_11392,
                                                                          (long)param_1);
                if (*piVar5 == 3)
                    goto LAB_1009e5ef4;
                local_40 = piVar5;
                pJVar2 =
                    (Js5MasterIndex*)std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
                        (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&local_38->field_11368);
                puVar3 = (uint*)pJVar2->GetArchiveData(param_1);
                new (&local_60) PacketT<Array<unsigned char, eastl::allocator>>(param_3);
                new (&local_170) Js5Index(*puVar3, *puVar3, (Array*)(puVar3 + 2), (Array*)(puVar3 + 2), puVar3[1],
                                          (PacketT*)&local_60);
                pJVar1 = local_38;
                pJVar4 = (Js5Index*)std::array<Js5Index, 67ul>::operator[](
                    (array<Js5Index, 67ul>*)&local_38->field_11664, (long)param_1);
                Js5Index::operator=(pJVar4, &local_170);
                local_170.~OldscapeToNxtJs5Index();
                *local_40 = 3;
                if (pJVar1->field_152 != (Js5DiskCache*)0) {
                    (pJVar1->field_152, param_1)->Validate();
                }
            }
            local_60.~VBOMapper();
        } else if (param_7) {
            MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<
                Array<unsigned char, eastl::allocator>>(
                (shared_ptr*)&local_170,
                (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>*)param_3,
                (Array*)CONCAT44(in_register_00000014, param_2));
            local_40 = (int*)CONCAT44(local_40._4_4_, param_1);
            (local_38->m_pMemoryCache, param_1, param_2, param_5, param_4, (shared_ptr*)&local_170)->ProvideGroup();
            local_170.~shared_ptr();
            param_1 = (uint)local_40;
        }
    LAB_1009e5ef4:
        pJVar1 = local_38;
        if (!param_8) {
            this_00 = &local_38->field_3376;
            piVar5 = (int*)std::array<unsigned int, 4ul>::operator[]((array<unsigned int, 4ul>*)this_00,
                                                                     (ulong) * (uint*)(param_6 + 8));
            if (*piVar5 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_diskRequestCount[priority->id] >= 1",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    981, (char*)0);
            }
            piVar5 = (int*)std::array<unsigned int, 4ul>::operator[]((array<unsigned int, 4ul>*)this_00,
                                                                     (ulong) * (uint*)(param_6 + 8));
            *piVar5 = *piVar5 + -1;
            ClearRequested((uint)pJVar1, param_1);
        }
    }

    // 0x1009e61d0, 464 bytes, placed by class name
    // Js5ResourceProvider::OnGroupLoadFailed(int, int, Priority const*, bool)
    void Js5ResourceProvider::OnGroupLoadFailed(int param_1, int param_2, Priority* param_3, bool param_4) {
        Js5ArchiveSettings* pJVar1;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar2;
        Js5MasterIndex* pJVar3;
        long lVar4;
        Task* this_00;
        undefined4* puVar5;
        int* piVar6;
        undefined4 in_register_00000014;
        VBOMapper local_68;
        shared_ptr local_48;

        if (param_2 == -1) {
            local_68._0_4_ = 70;
            MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<unsigned int>(
                &local_48, (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>*)&local_68,
                (uint*)CONCAT44(in_register_00000014, param_2));
            pPVar2 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                         shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_48);
            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar2, 20);
            pPVar2 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                         shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_48);
            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar2, (ulong)(uint)param_1);
            pPVar2 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                         shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_48);
            pJVar3 = (Js5MasterIndex*)std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
                (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368);
            piVar6 = (int*)pJVar3->GetArchiveData(param_1);
            PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(pPVar2, *piVar6);
            pPVar2 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                         shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_48);
            pJVar3 = (Js5MasterIndex*)std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
                (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368);
            lVar4 = pJVar3->GetArchiveData(param_1);
            new (&local_68) PacketT<Array<unsigned char, eastl::allocator>>((Array*)(lVar4 + 8));
            pPVar2->pArrayBuffer((PacketT*)&local_68);
            local_68.~VBOMapper();
            this_00 = (Task*)shared_ptr<Js5WorkerThread>::operator->((shared_ptr<Js5WorkerThread>*)field_8);
            this_00->Message(&local_48);
            puVar5 = (undefined4*)std::array<unsigned int, 67ul>::operator[]((array<unsigned int, 67ul>*)&field_11392,
                                                                             (long)param_1);
            *puVar5 = 2;
            local_48.~shared_ptr();
        } else if (param_4) {
            pJVar1 = (Js5ArchiveSettings*)(field_80, param_1)->GetByArchiveID();
            RequestGroupFromServer(this, pJVar1, (uint)param_2, param_3, true);
        }
        piVar6 = (int*)std::array<unsigned int, 4ul>::operator[]((array<unsigned int, 4ul>*)&field_3376,
                                                                 (ulong) * (uint*)(param_3 + 8));
        if (*piVar6 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_diskRequestCount[priority->id] >= 1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                1028, (char*)0);
        }
        piVar6 = (int*)std::array<unsigned int, 4ul>::operator[]((array<unsigned int, 4ul>*)&field_3376,
                                                                 (ulong) * (uint*)(param_3 + 8));
        *piVar6 = *piVar6 + -1;
        ClearRequested((uint)this, param_1);
    }

    // 0x1009e6440, 784 bytes, placed by class name
    // Js5ResourceProvider::SaveLocalArchiveAssetToDisk(Js5ArchiveSettings const&, Js5Index const&, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&, unsigned int, unsigned int)
    void Js5ResourceProvider::SaveLocalArchiveAssetToDisk(Js5ArchiveSettings* param_1, Js5Index* param_2,
                                                          shared_ptr* param_3, uint param_4, uint param_5) {
        Js5DiskCache* pJVar1;
        char cVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        uint uVar5;
        uint uVar6;
        PacketT* pPVar7;
        undefined* puVar8;
        VBOMapper local_90;
        undefined1 local_70[32];
        int local_50[4];
        Js5DiskCache* local_40;
        int local_38;

        if (param_4 == 4294967295) {
            local_50[0] = 1;
            pPVar7 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_3);
            local_70->Decompress(pPVar7, local_50);
            if (local_50[0] != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "status == Js5Compression::JS5DecompressionResult::DECOMPRESSION_SUCCEEDED",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    1049, "Failed to decompress index from local loader: archive=%i", (ulong)param_5);
            }
            pJVar1 = field_152;
            make_shared<PacketT<Array<unsigned char, eastl::allocator>>,
                        PacketT<Array<unsigned char, eastl::allocator>>&>((jag*)&local_90, (PacketT*)local_70);
            uVar3 = param_2->GetX();
            uVar4 = param_2->GetStatus();
            pJVar1->ProvideGroup(param_5, 4294967295, &local_90, uVar3, uVar4, 1);
            local_90.~shared_ptr();
        } else {
            cVar2 = param_1->GetDiskEncodeType();
            if (cVar2 == '\x02') {
                local_40 = field_152;
                uVar3 = param_2->GetGroupCRC(param_4);
                uVar4 = param_2->GetGroupVersion(param_4);
                cVar2 = param_1->GetDiskEncodeType();
                local_40->ProvideGroup(param_5, param_4, param_3, uVar3, uVar4, (int)cVar2);
                return;
            }
            local_40 = (Js5DiskCache*)param_1;
            cVar2 = param_1->GetDiskEncodeType();
            if (cVar2 != '\x01') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    1090, "Invalid Disk Encode Type Specified");
            }
            local_38 = 1;
            pPVar7 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_3);
            local_70->Decompress(pPVar7, (JS5DecompressionResult*)&local_38);
            if (local_38 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "status == Js5Compression::JS5DecompressionResult::DECOMPRESSION_SUCCEEDED",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    1069, "Failed to decompress group from local loader: archive=%i, group=%i", (ulong)param_5,
                    (ulong)param_4);
            }
            new (&local_90) PacketT<Array<unsigned char, eastl::allocator>>();
            uVar5 = param_2->GetFileCount(param_4);
            if (1 < (int)uVar5) {
                uVar6 = local_70->GetTextureAtlas();
                Js5DiskFileFormat::DechunkGroupFiles((PacketT*)&local_90, (PacketT*)local_70, 0, uVar6, uVar5);
                PacketT<Array<unsigned char, eastl::allocator>>::operator=(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)local_70, (PacketT*)&local_90);
            }
            puVar8 = (undefined*)local_40->size();
            if (puVar8 == EncodeType::PNG_MIPPED) {
                Js5Compression::DecodePNG((PacketT*)local_70);
            }
            pJVar1 = field_152;
            make_shared<PacketT<Array<unsigned char, eastl::allocator>>,
                        PacketT<Array<unsigned char, eastl::allocator>>&>((jag*)local_50, (PacketT*)local_70);
            uVar3 = param_2->GetGroupCRC(param_4);
            uVar4 = param_2->GetGroupVersion(param_4);
            cVar2 = local_40->GetDiskEncodeType();
            pJVar1->ProvideGroup(param_5, param_4, local_50, uVar3, uVar4, (int)cVar2);
            local_50->~shared_ptr();
            local_90.~VBOMapper();
        }
        local_70->~VBOMapper();
    }

    // 0x1009e6e50, 256 bytes, placed by class name
    // Js5ResourceProvider::ChangeURLs(char const*, char const*, char const*)
    void Js5ResourceProvider::ChangeURLs(char* param_1, char* param_2, char* param_3) {
        int iVar2;
        int iVar3;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar4;
        Task* this_00;
        int* extraout_RDX;
        shared_ptr local_48;
        int local_34;

        if (field_8->operator_cast_to_bool()) {
            iVar2 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringNoConversion(param_1, false);
            iVar3 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringNoConversion(param_2, false);
            local_34 =
                PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringNoConversion(param_3, false);
            local_34 = local_34 + iVar3 + iVar2;
            MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<int>(
                &local_48, (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>*)&local_34,
                extraout_RDX);
            pPVar4 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                         shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_48);
            pPVar4->pStringNoConversion(param_1, false);
            pPVar4 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                         shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_48);
            pPVar4->pStringNoConversion(param_2, false);
            pPVar4 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                         shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_48);
            pPVar4->pStringNoConversion(param_3, false);
            this_00 = (Task*)shared_ptr<Js5WorkerThread>::operator->((shared_ptr<Js5WorkerThread>*)field_8);
            this_00->Message(&local_48);
            local_48.~shared_ptr();
        }
    }

    // 0x1009e70c0, 2480 bytes, placed by class name
    // Js5ResourceProvider::WorkerOnMessage(PacketT<Array<unsigned char, eastl::allocator> >&)
    void Js5ResourceProvider::WorkerOnMessage(PacketT* param_1) {
        Js5DiskCache* pJVar1;
        uint* puVar2;
        byte bVar3;
        undefined1 uVar4;
        char cVar5;
        bool bVar6;
        ushort uVar7;
        int iVar8;
        undefined4 uVar9;
        uint uVar10;
        uint uVar11;
        undefined8 uVar12;
        Js5MasterIndex* this_00;
        PacketT<Array<unsigned char, eastl::allocator>>* this_01;
        long lVar13;
        undefined4* puVar14;
        PacketT* pPVar15;
        Js5Index* pJVar16;
        Js5ArchiveSettings* this_02;
        uchar* puVar17;
        undefined8 uVar18;
        mutex* pmVar19;
        long lVar20;
        shared_ptr* psVar21;
        uint* extraout_RDX;
        uint* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        shared_ptr<Js5WorkerRequestMessage>* this_03;
        undefined8 uVar22;
        char* pcVar23;
        ulong uVar24;
        undefined1 auVar25[16];
        undefined8 in_stack_fffffffffffffe38;
        undefined8 in_stack_fffffffffffffe40;
        undefined4 uVar26;
        undefined8 local_1a8;
        uint* local_1a0;
        uint local_194;
        uint local_190;
        uint local_18c;
        shared_ptr local_188;
        uint local_174;
        uint local_170[3];
        char local_161;
        Js5Index local_160;
        long local_38;

        uVar9 = (undefined4)((ulong)in_stack_fffffffffffffe38 >> 32);
        uVar26 = (undefined4)((ulong)in_stack_fffffffffffffe40 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pPVar15 = param_1;
        iVar8 = param_1->g1();
        field_11344 = 1;
        switch (iVar8 - 1U & 255) {
        case 0:
            new (&local_160) eastl::fixed_string<char, 256, true, eastl::allocator>();
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringNoConversion<256, true>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (fixed_string*)&local_160,
                false);
            uVar12 = logger::default_logger();
            uVar18 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(
                uVar12, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                1360, "LOG> %s", uVar18);
            /* WARNING: Subroutine does not return */
            local_160.~fixed_string();
        default:
            uVar12 = logger::default_logger();
            logger::Logger::Log(
                uVar12, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                1458, "Js5ResourceProvider: Received unknown message from js5 worker: %d",
                CONCAT44(uVar9, iVar8) & 18446744069414584575);
            break;
        case 2:
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                1353, "Not implemented");
        case 5:
            uVar9 = param_1->g4();
            field_40 = uVar9;
            uVar9 = param_1->g4s();
            field_44 = uVar9;
            field_11344 = 0;
            break;
        case 9:
            uVar7 = param_1->g2();
            if (uVar7 == 0) {
                field_11364 = 0;
                break;
            }
            new (&local_160) PacketT<Array<unsigned char, BucketAllocatorEASTL>>((ulong)uVar7);
            puVar17 = (uchar*)local_160.GetDataPtr();
            param_1->gArrayBuffer(puVar17, 0, (ulong)uVar7);
            std::make_unique<Js5MasterIndex, math::BigInteger_const*&, math::BigInteger_const*&,
                             PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>((BigInteger**)&local_188, &field_104,
                                                                                   (PacketT*)&field_112);
            std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator=(
                (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368,
                (unique_ptr*)&local_188);
            local_188.~unique_ptr();
            ProcessNewMasterIndex(this);
            goto LAB_1009e764a;
        case 19:
            bVar3 = param_1->g1();
            uVar24 = (ulong)bVar3;
            cVar5 = param_1->g1();
            if (cVar5 != '\x03') {
                if (cVar5 == '\0') {
                    local_170[0] = param_1->g4();
                    bVar6 = (&field_11368)->operator_cast_to_bool();
                    if (bVar6) {
                        this_00 =
                            (Js5MasterIndex*)
                                std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator->(
                                    (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368);
                        auVar25 = this_00->GetArchiveData((uint)bVar3);
                        local_1a0 = auVar25._0_8_;
                        MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<int&>(
                            &local_188,
                            (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>*)local_170,
                            auVar25._8_8_);
                        this_01 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_188);
                        lVar20 = param_1->GetDataPtr();
                        lVar13 = param_1->size();
                        this_01->pArrayBuffer((uchar*)(lVar20 + lVar13), 0, (long)(int)local_170[0]);
                        puVar2 = local_1a0;
                        uVar10 = *local_1a0;
                        pPVar15 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_188);
                        new (&local_160) Js5Index(uVar10, (Array*)(puVar2 + 2), pPVar15);
                        pJVar16 = (Js5Index*)std::array<Js5Index, 67ul>::operator[](
                            (array<Js5Index, 67ul>*)&field_11664, uVar24);
                        Js5Index::operator=(pJVar16, &local_160);
                        local_160.~OldscapeToNxtJs5Index();
                        if ((field_66336 != false) && (field_152 != (Js5DiskCache*)0)) {
                            (field_152, uVar24, 4294967295, &local_188, *puVar2, puVar2[1],
                             CONCAT44(uVar9)->ProvideGroup(1));
                            (field_152, (uint)bVar3)->Validate();
                        }
                        puVar14 = (undefined4*)std::array<unsigned int, 67ul>::operator[](
                            (array<unsigned int, 67ul>*)&field_11392, uVar24);
                        *puVar14 = 3;
                        local_188.~shared_ptr();
                        break;
                    }
                    uVar12 = logger::default_logger();
                    pcVar23 = "Received an index with no master index - need to re-request it";
                    uVar18 = 3;
                    uVar22 = 1376;
                } else {
                    uVar12 = logger::default_logger();
                    Js5WorkerRequestMessage::WorkerRespoonseError(cVar5);
                    pcVar23 = "Js5ResourceProvider: Index failure for archive: %d with %s";
                    uVar18 = 2;
                    uVar22 = 1400;
                }
                logger::Logger::Log(
                    uVar12, 0, uVar18,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ResourceProvider.cpp",
                    uVar22, pcVar23);
            }
            puVar14 = (undefined4*)std::array<unsigned int, 67ul>::operator[]((array<unsigned int, 67ul>*)&field_11392,
                                                                              uVar24);
            *puVar14 = 0;
            break;
        case 29:
            bVar3 = param_1->g1();
            uVar10 = param_1->g4();
            uVar4 = param_1->g1();
            local_1a0 = (uint*)CONCAT71(local_1a0._1_7_, uVar4);
            cVar5 = param_1->g1();
            local_174 = (uint)bVar3;
            uVar24 = (ulong)local_174;
            local_161 = cVar5;
            if (cVar5 != '\x06') {
                local_18c = uVar10;
                if (cVar5 == '\0') {
                    local_170[0] = param_1->g4();
                    MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<unsigned int&>(
                        (shared_ptr*)&local_160,
                        (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>*)local_170,
                        extraout_RDX);
                    pPVar15 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_160);
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gArrayBuffer<
                        PacketT<Array<unsigned char, eastl::allocator>>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pPVar15,
                        (ulong)local_170[0]);
                    pJVar16 =
                        (Js5Index*)std::array<Js5Index, 67ul>::operator[]((array<Js5Index, 67ul>*)&field_11664, uVar24);
                    uVar10 = local_18c;
                    local_190 = pJVar16->GetGroupCRC(local_18c);
                    uVar11 = pJVar16->GetGroupVersion(uVar10);
                    if ((field_66336 != false) && (field_152 != (Js5DiskCache*)0)) {
                        this_02 = (Js5ArchiveSettings*)(field_80, local_174)->GetByArchiveID();
                        pJVar1 = field_152;
                        cVar5 = this_02->GetDiskEncodeType();
                        uVar10 = local_18c;
                        pJVar1->ProvideGroup(local_174, local_18c, &local_160, local_190, uVar11,
                                             CONCAT44(uVar9, (int)cVar5));
                    }
                    if ((char)local_1a0 == '\x01') {
                        local_194 = param_1->g4();
                        MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<
                            unsigned int&>(
                            &local_188,
                            (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>*)&local_194,
                            extraout_RDX_00);
                        pPVar15 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_188);
                        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gArrayBuffer<
                            PacketT<Array<unsigned char, eastl::allocator>>>(
                            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pPVar15,
                            (ulong)local_194);
                        (m_pMemoryCache, local_174, uVar10, uVar11, local_190, &local_188)->ProvideGroup();
                        local_188.~shared_ptr();
                    }
                    local_160.~shared_ptr();
                } else {
                    uVar12 = logger::default_logger();
                    uVar18 = Js5WorkerRequestMessage::WorkerRespoonseError(cVar5);
                    uVar10 = local_18c;
                    logger::Logger::Log(uVar12, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                                        "Js5ResourceProvider.cpp",
                                        1294,
                                        "Js5ResourceProvider::WorkerOnMessage: Failed to receive group: %d, %d (%s)",
                                        CONCAT44(uVar9, local_174), CONCAT44(uVar26, local_18c), uVar18);
                }
            }
            pmVar19 = (mutex*)std::array<std::mutex, 67ul>::operator[]((array<std::mutex, 67ul>*)&field_3648, uVar24);
            new (&local_160) std::scoped_lock<std::mutex>(pmVar19);
            uVar12 = std::array<eastl::map<unsigned int, shared_ptr<Js5WorkerRequestMessage>, eastl::less<unsigned int>,
                                           eastl::allocator>,
                                67ul>::operator[]((array<eastl::map<unsigned int, shared_ptr<Js5WorkerRequestMessage>,
                                                                    eastl::less<unsigned int>, eastl::allocator>,
                                                         67ul>*)&field_7936,
                                                  uVar24);
            local_170[0] = uVar10;
            eastl::rbtree<unsigned int, eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage>>,
                          eastl::less<unsigned int>, eastl::allocator,
                          eastl::use_first<eastl::pair<unsigned int const, shared_ptr<Js5WorkerRequestMessage>>>, true,
                          true>::find((uint*)&local_188);
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            bVar6 = eastl::operator!=((eastl*)&local_188, (hashtable_iterator_base*)local_170, extraout_RDX_01);
            if (bVar6) {
                lVar20 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_188);
                this_03 = (shared_ptr<Js5WorkerRequestMessage>*)(lVar20 + 8);
                if (local_161 == '\x06') {
                    lVar20 = shared_ptr<Js5WorkerRequestMessage>::operator->(this_03);
                    *(undefined1*)(lVar20 + 26) = 0;
                } else {
                    lVar20 = shared_ptr<Js5WorkerRequestMessage>::operator->(this_03);
                    pmVar19 = (mutex*)std::array<std::mutex, 4ul>::operator[](
                        (array<std::mutex, 4ul>*)&field_3392, (ulong) * (uint*)(*(long*)(lVar20 + 40) + 8));
                    new (local_170) std::scoped_lock<std::mutex>(pmVar19);
                    lVar20 = shared_ptr<Js5WorkerRequestMessage>::operator->(this_03);
                    psVar21 = (shared_ptr*)
                        std::array<eastl::set<shared_ptr<Js5WorkerRequestMessage>,
                                              eastl::less<shared_ptr<Js5WorkerRequestMessage>>, eastl::allocator>,
                                   4ul>::operator[]((array<eastl::set<shared_ptr<Js5WorkerRequestMessage>,
                                                                      eastl::less<shared_ptr<Js5WorkerRequestMessage>>,
                                                                      eastl::allocator>,
                                                           4ul>*)&field_11152,
                                                    (ulong) * (uint*)(*(long*)(lVar20 + 40) + 8));
                    eastl::set<shared_ptr<Js5WorkerRequestMessage>, eastl::less<shared_ptr<Js5WorkerRequestMessage>>,
                               eastl::allocator>::erase(psVar21);
                    local_170->~scoped_lock();
                    new (&local_1a8) eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                         shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                         shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(
                        (ListIterator*)&local_188);
                    eastl::rbtree<
                        unsigned long long, eastl::pair<unsigned long long const, shared_ptr<render::TextureCube>>,
                        eastl::less<unsigned long long>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<render::TextureCube>>>, true,
                        true>::erase(local_170, uVar12, local_1a8);
                }
            }
            local_160.~scoped_lock();
            if ((char)local_1a0 == '\x01') {
                if (field_11348 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_serverUrgentRequestCount > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                              "Js5ResourceProvider.cpp",
                              1340, (char*)0);
                }
                field_11348 = field_11348 - 1;
            } else {
                if (field_11352 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_serverPrefetchRequestCount > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/"
                              "Js5ResourceProvider.cpp",
                              1345, (char*)0);
                }
                field_11352 = field_11352 - 1;
            }
            break;
        case 39:
            uVar7 = param_1->g2();
            if ((uVar7 == 0) ||
                (bVar6 = std::operator!=((unique_ptr*)&field_11368, (_func_decltype_nullptr*)pPVar15), !bVar6)) {
                field_11376 = 0;
                break;
            }
            new (&local_160) PacketT<Array<unsigned char, BucketAllocatorEASTL>>((ulong)uVar7);
            puVar17 = (uchar*)local_160.GetDataPtr();
            param_1->gArrayBuffer(puVar17, 0, (ulong)uVar7);
            std::make_unique<Js5MasterIndex, math::BigInteger_const*&, math::BigInteger_const*&,
                             PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>((BigInteger**)&local_188, &field_104,
                                                                                   (PacketT*)&field_112);
            std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator=(
                (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11384,
                (unique_ptr*)&local_188);
            local_188.~unique_ptr();
            ProcessNewMasterIndexFromHTTP(this);
        LAB_1009e764a:
            local_160.~PacketT();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009e7f10, 848 bytes, placed by class name
    // Js5ResourceProvider::Service()
    void Js5ResourceProvider::Service() {
        undefined1* puVar1;
        int* piVar2;
        uint uVar3;
        Js5ResourceProvider* pJVar4;
        char cVar5;
        bool bVar6;
        Task* pTVar7;
        TextureAtlasReference* this_00;
        long lVar8;
        Js5WorkerThread* pJVar9;
        rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
               eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
               eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>* this_01;
        mutex* pmVar10;
        shared_ptr<Js5WorkerRequestMessage>* this_02;
        Js5WorkerRequestMessage* this_03;
        PacketT* pPVar11;
        undefined8 extraout_RDX;
        shared_ptr* in_RSI;
        MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>* this_04;
        hashtable_iterator_base* this_05;
        ulong uVar12;
        undefined1 auVar13[16];
        undefined8 local_78;
        undefined8 local_70;
        array<eastl::set<shared_ptr<Js5WorkerRequestMessage>, eastl::less<shared_ptr<Js5WorkerRequestMessage>>,
                         eastl::allocator>,
              4ul>* local_68;
        array<std::mutex, 4ul>* local_60;
        scoped_lock<std::mutex> local_58[8];
        shared_ptr local_50;
        shared_ptr<Js5WorkerThread>* local_40;
        Js5ResourceProvider* local_38;

        local_40 = (shared_ptr<Js5WorkerThread>*)field_8;
        local_38 = this;
        pTVar7 = (Task*)shared_ptr<Js5WorkerThread>::operator->(local_40);
        cVar5 = pTVar7->IsReady();
        pJVar4 = local_38;
        if (cVar5 != '\0') {
            puVar1 = &local_38->field_24;
            this_00 = (TextureAtlasReference*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)puVar1);
            lVar8 = this_00->GetTextureAtlas();
            if (lVar8 != 0) {
                pTVar7 = (Task*)shared_ptr<Js5WorkerThread>::operator->(local_40);
                this_04 = (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>*)puVar1;
                pTVar7->Message(puVar1);
                in_RSI = &local_50;
                MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<>(in_RSI, this_04);
                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(
                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)puVar1, in_RSI);
                local_50.~shared_ptr();
            }
            puVar1 = &pJVar4->field_11368;
            bVar6 = std::operator==((unique_ptr*)puVar1, (_func_decltype_nullptr*)in_RSI);
            if ((bVar6) && (pJVar4->field_11364 == '\0')) {
                pJVar9 = (Js5WorkerThread*)shared_ptr<Js5WorkerThread>::operator->(local_40);
                in_RSI = (shared_ptr*)10;
                pJVar9->Post();
                pJVar4->field_11364 = 1;
            }
            if ((((pJVar4->field_11377 != false) &&
                  (bVar6 = std::operator!=((unique_ptr*)puVar1, (_func_decltype_nullptr*)in_RSI), bVar6)) &&
                 (bVar6 = std::operator==((unique_ptr*)&pJVar4->field_11384, (_func_decltype_nullptr*)in_RSI),
                  bVar6)) &&
                (pJVar4->field_11376 == '\0')) {
                pJVar9 = (Js5WorkerThread*)shared_ptr<Js5WorkerThread>::operator->(local_40);
                pJVar9->Post(40);
                pJVar4->field_11376 = 1;
            }
            bVar6 = puVar1->operator_cast_to_bool();
            if (!bVar6) {
                return;
            }
            bVar6 = (&local_38->field_11384)->operator_cast_to_bool();
            if ((!bVar6) && (local_38->field_11377 != false)) {
                return;
            }
        }
        pJVar4 = local_38;
        if (local_38->field_152 != (Js5DiskCache*)0) {
            local_38->field_152->Service();
        }
        if (pJVar4->m_pMemoryCache != (Js5MemoryCache*)0) {
            pJVar4->m_pMemoryCache->Service();
        }
        pTVar7 = (Task*)shared_ptr<Js5WorkerThread>::operator->(local_40);
        cVar5 = pTVar7->IsReady();
        if ((cVar5 != '\0') && (local_38->field_11348 < 500)) {
            local_68 = (array<eastl::set<shared_ptr<Js5WorkerRequestMessage>,
                                         eastl::less<shared_ptr<Js5WorkerRequestMessage>>, eastl::allocator>,
                              4ul>*)&local_38->field_11152;
            local_60 = (array<std::mutex, 4ul>*)&local_38->field_3392;
            uVar12 = 0;
            do {
                this_01 = (rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                                  eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                                  eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>*)
                    std::array<eastl::set<shared_ptr<Js5WorkerRequestMessage>,
                                          eastl::less<shared_ptr<Js5WorkerRequestMessage>>, eastl::allocator>,
                               4ul>::operator[](local_68, uVar12);
                cVar5 =
                    eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                                  eastl::fixed_node_allocator<48ul, 1ul, 8ul, 0ul, true, eastl::allocator>,
                                  eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>::empty(this_01);
                if (cVar5 == '\0') {
                    pmVar10 = (mutex*)std::array<std::mutex, 4ul>::operator[](local_60, uVar12);
                    std::scoped_lock<std::mutex>::scoped_lock(local_58, pmVar10);
                    local_78 =
                        eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                      eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                      true>::begin();
                    auVar13 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>,
                                            eastl::less<eastl::string>, eastl::allocator,
                                            eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
                    while (true) {
                        local_70 = auVar13._0_8_;
                        this_05 = (hashtable_iterator_base*)&local_70;
                        bVar6 =
                            eastl::operator!=((eastl*)&local_78, (hashtable_iterator_base*)&local_70, auVar13._8_8_);
                        if (!bVar6)
                            break;
                        this_02 = (shared_ptr<Js5WorkerRequestMessage>*)eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                        operator*((rbtree_iterator<
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                   eastl::pair<unsigned int const,
                                               eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                 eastl::allocator>>&>*)&local_78);
                        lVar8 = shared_ptr<Js5WorkerRequestMessage>::operator->(this_02);
                        if (*(char*)(lVar8 + 26) == '\0') {
                            lVar8 = shared_ptr<Js5WorkerRequestMessage>::operator->(this_02);
                            if (*(char*)(lVar8 + 25) == '\0') {
                                uVar3 = local_38->field_11352;
                            } else {
                                uVar3 = local_38->field_11348;
                            }
                            if (uVar3 < 500) {
                                MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<>(
                                    &local_50,
                                    (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>*)this_05);
                                this_03 =
                                    (Js5WorkerRequestMessage*)shared_ptr<Js5WorkerRequestMessage>::operator->(this_02);
                                pPVar11 =
                                    (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_50);
                                this_03->Serialize(pPVar11);
                                pTVar7 = (Task*)shared_ptr<Js5WorkerThread>::operator->(local_40);
                                pTVar7->Message(&local_50);
                                lVar8 = shared_ptr<Js5WorkerRequestMessage>::operator->(this_02);
                                *(undefined1*)(lVar8 + 26) = 1;
                                lVar8 = shared_ptr<Js5WorkerRequestMessage>::operator->(this_02);
                                if (*(char*)(lVar8 + 25) == '\0') {
                                    local_38->field_11352 = local_38->field_11352 + 1;
                                    piVar2 = (int*)((long)&local_38->field_11356 + 4);
                                    *piVar2 = *piVar2 + 1;
                                } else {
                                    local_38->field_11348 = local_38->field_11348 + 1;
                                    *(int*)&local_38->field_11356 = *(int*)&local_38->field_11356 + 1;
                                }
                                local_50.~shared_ptr();
                            }
                        }
                        eastl::rbtree_iterator<
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                        operator++((rbtree_iterator<
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                    eastl::pair<unsigned int const,
                                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe,
                                                                                  eastl::allocator>>&>*)&local_78);
                        auVar13._8_8_ = extraout_RDX;
                        auVar13._0_8_ = local_70;
                    }
                    std::scoped_lock<std::mutex>::~scoped_lock(local_58);
                }
                uVar12 = uVar12 + 1;
            } while (uVar12 != 4);
        }
    }

    // 0x1009e8550, 48 bytes, placed by class name
    // Js5ResourceProvider::DataUpdate()
    void Js5ResourceProvider::DataUpdate() {
        _func_decltype_nullptr* in_RSI;

        std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator=(
            (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11368, in_RSI);
        field_11364 = 0;
    }

    // 0x1009e8580, 48 bytes, placed by class name
    // Js5ResourceProvider::RerequestHTTPMasterIndex()
    void Js5ResourceProvider::RerequestHTTPMasterIndex() {
        _func_decltype_nullptr* in_RSI;

        std::unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>::operator=(
            (unique_ptr<Js5MasterIndex, std::default_delete<Js5MasterIndex>>*)&field_11384, in_RSI);
        field_11376 = 0;
    }

    // 0x1009e85b0, 64 bytes, placed by class name
    // Js5ResourceProvider::DeleteCaches()
    void Js5ResourceProvider::DeleteCaches() {
        m_pMemoryCache->DeleteCache();
        if ((field_66336 != false) && (field_152 != (Js5DiskCache*)0)) {
            field_152->DeleteCache();
        }
    }

    // 0x1009e8670, 64 bytes, placed by class name
    // Js5ResourceProvider::ReinitialiseCaches()
    void Js5ResourceProvider::ReinitialiseCaches() {
        m_pMemoryCache->DeleteCache();
        field_152->ClearFullArchiveRequestState();
        field_152->Shutdown();
        field_152->Startup();
    }

    // 0x1009e8b40, 32 bytes, placed by class name
    // Js5ResourceProvider::DeleteCacheGroup(unsigned int, unsigned int)
    void Js5ResourceProvider::DeleteCacheGroup(uint param_1, uint param_2) {
        (m_pMemoryCache, param_1, param_2)->DeleteGroup();
    }

    // 0x1009e8b90, 32 bytes, placed by class name
    // Js5ResourceProvider::Shutdown()
    void Js5ResourceProvider::Shutdown() {
        if (field_152 != (Js5DiskCache*)0) {
            field_152->Shutdown();
        }
    }

    // 0x1009f67d0: the linker folded this into Js5ResourceProvider::GetIndex(Js5Index**, Js5ArchiveSettings const&), which has identical code
    Js5ResourceProvider::GetIndex(Js5Index const**, Js5ArchiveSettings const&);

} // namespace jag

// 0x1009e7c40, 32 bytes, placed by neighbouring functions
// Js5WorkerRequestMessage::WorkerRespoonseError(Js5WorkerGetGroupResponseType)
undefined* Js5WorkerRequestMessage::WorkerRespoonseError(uint param_1) {
    if (param_1 < 7) {
        return (&PTR_s_SUCCESS_100f1d088)[(int)param_1];
    }
    return (undefined*)0;
}

// 0x1009e7e70, 32 bytes, placed by neighbouring functions
// Js5WorkerRequestMessage::WorkerRespoonseError(Js5WorkerGetIndexResponseType)
undefined* Js5WorkerRequestMessage::WorkerRespoonseError(uint param_1) {
    if (param_1 < 4) {
        return (&PTR_s_SUCCESS_100f1d0c0)[(int)param_1];
    }
    return (undefined*)0;
}
