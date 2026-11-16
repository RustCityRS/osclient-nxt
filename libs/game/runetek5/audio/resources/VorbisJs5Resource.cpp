// libs/game/runetek5/audio/resources/VorbisJs5Resource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "VorbisJs5Resource.h"

namespace jag {
    // 0x1000fcbb0: the linker folded this into oldscape::ClientObj::GetHighlight(), which has identical code
    VorbisJs5Resource::GetFormat() const;

    // 0x100429b10: the linker folded this into game::StaticPointLight::GetRGB() const, which has identical code
    VorbisJs5Resource::GetID() const;

    // 0x100665d30, 176 bytes, base-object constructor, placed by class name and debug map
    // VorbisJs5Resource::VorbisJs5Resource(hal::audio::AudioAPI*)
    void VorbisJs5Resource::VorbisJs5Resource(AudioAPI* param_1) {
        new (this) audio::SoundResource();
        field_0 = &PTR__VorbisJs5Resource_100f0def0;
        field_16 = param_1;
        field_24 = -1;
        make_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>((jag*)&field_32);
        field_48 = (AudioFormat*)hal::audio::AudioFormat::INVALID;
        m_pData = (void*)0;
        field_64 = 4294967295;
        field_68 = -1;
        field_72 = 0;
        field_80 = (AudioDecoder*)0;
        std::atomic<unsigned int>::atomic((int)this + 88);
        field_92 = 0;
        field_96 = 0;
        new (&field_104, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_120 = 0;
    }

    // 0x100665e00, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true> >::type make_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>()
    jag* make_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        fixed_stack* local_28[2];

        pvVar1 = (void*)aligned_alloc(88, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>(
                (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>,
                              int, eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>*&>(
                    pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100665ea0, 16 bytes, complete-object constructor, placed by class name and debug map
    // VorbisJs5Resource::VorbisJs5Resource(hal::audio::AudioAPI*): jumps straight to the base-object constructor

    // 0x100665eb0, 256 bytes, base-object destructor, placed by class name and debug map
    // VorbisJs5Resource::~VorbisJs5Resource()
    void VorbisJs5Resource::~VorbisJs5Resource() {
        AudioDecoder* pAVar1;
        char cVar2;
        function<void(PacketT<Array<unsigned char, eastl::allocator>>&)> local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = &PTR__VorbisJs5Resource_100f0def0;
        cVar2 = field_16->IsRendererValid();
        pAVar1 = field_80;
        if (cVar2 == '\0') {
            if (pAVar1 != (AudioDecoder*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_AudioDecoder",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/audio/"
                          "resources/VorbisJs5Resource.cpp",
                          46, (char*)0);
            }
        } else if (pAVar1 != (AudioDecoder*)0) {
            std::function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>::function(
                (_func_decltype_nullptr*)local_58);
            (**(code**)(pAVar1->field_0 + 56))(pAVar1, local_58);
            std::function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>::~function(local_58);
            (field_16, field_80)->FreeDecoder();
        }
        (&field_104)->~shared_ptr();
        (&field_32)->~shared_ptr();
        ~AutoSingleton();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100665fd0, 16 bytes, complete-object destructor, placed by class name and debug map
    // VorbisJs5Resource::~VorbisJs5Resource(): jumps straight to the base-object destructor

    // 0x100665fe0, 32 bytes, deleting destructor, placed by class name and debug map
    // VorbisJs5Resource::~VorbisJs5Resource()
    void VorbisJs5Resource::~VorbisJs5Resource() {
        ~VorbisJs5Resource(this);
        operator_delete(this);
    }

    // 0x100666000, 32 bytes, placed by class name and debug map
    // VorbisJs5Resource::SetData(void*, int, hal::audio::AudioFormat const*)
    void VorbisJs5Resource::SetData(void* param_1, int param_2, AudioFormat* param_3) {
        m_pData = param_1;
        field_64 = param_2;
        field_24 = 0;
    }

    // 0x100666020, 1840 bytes, placed by class name and debug map
    // VorbisJs5Resource::Update(float)
    void VorbisJs5Resource::Update(float param_1) {
        undefined1* this_00;
        Js5ResourceProvider* this_01;
        char cVar1;
        int iVar3;
        uint uVar4;
        uint uVar5;
        undefined4 uVar6;
        vector* pvVar7;
        TcpConnectionMessageBase* this_02;
        Array<int, eastl::allocator>* pAVar8;
        uint* puVar9;
        undefined8* puVar10;
        undefined* puVar11;
        undefined8 uVar12;
        TextureAtlasReference* this_03;
        uchar* puVar13;
        long lVar14;
        shared_ptr* psVar15;
        Layout* this_04;
        shared_ptr<hal::audio::AudioBuffer>* this_05;
        long* plVar16;
        AudioBuffer* pAVar17;
        AudioDecoder* pAVar18;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        undefined4* puVar19;
        ulong uVar20;
        type* in_RSI;
        uint local_a0[5];
        int local_8c;
        uint local_88;
        int local_84;
        int* local_80;
        shared_ptr local_78;
        shared_ptr local_68[3];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pvVar7 = (field_16, in_RSI)->SSOBeginPtr();
        this_02 = (TcpConnectionMessageBase*)shared_ptr<hal::audio::AudioRenderer>::operator->(
            (shared_ptr<hal::audio::AudioRenderer>*)pvVar7);
        iVar3 = this_02->GetEndPosition();
        if (iVar3 == 2) {
            if (field_80 != (AudioDecoder*)0) {
                (field_16, field_80)->FreeDecoder();
                field_80 = (AudioDecoder*)0;
                field_24 = -1;
            }
        } else {
            if (field_24 == 0) {
                uVar4 = field_64;
                cVar1 = IsValid();
                if ((cVar1 != '\0') && (0 < field_96)) {
                    pAVar8 = (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(
                        (shared_ptr<Array<int, eastl::allocator>>*)&field_104);
                    in_RSI = (type*)(long)field_96;
                    puVar9 = (uint*)Array<int, eastl::allocator>::operator[](pAVar8, (ulong)in_RSI);
                    uVar4 = *puVar9;
                }
                cVar1 = IsValid();
                if ((cVar1 == '\0') || (field_120 == '\0')) {
                    psVar15 = &local_78;
                    new (psVar15) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
                    this_01 = m_pData;
                    cVar1 = IsValid();
                    if (cVar1 == '\0') {
                        puVar10 = &Js5Archive::JS5_VORBIS;
                    } else {
                        puVar10 = &Js5Archive::JS5_AUDIOSTREAMS;
                    }
                    puVar11 = (undefined*)this_01->GetFile(psVar15, (Js5ArchiveSettings*)*puVar10, uVar4, 0,
                                                           (Priority*)Priority::HIGH, true, true, false);
                    uVar4 = (uint)psVar15;
                    if (puVar11 == DataStatus::READY) {
                        this_03 = (TextureAtlasReference*)
                            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_78);
                        cVar1 = IsValid();
                        if (cVar1 == '\0') {
                            field_48 = (AudioFormat*)hal::audio::AudioFormat::FLOAT;
                            this_00 = &field_88;
                            std::atomic<unsigned int>::operator=((atomic<unsigned int>*)this_00, uVar4);
                            pAVar18 = (AudioDecoder*)(field_16, field_48)->GetDecoder();
                            field_80 = pAVar18;
                            if (pAVar18 == (AudioDecoder*)0) {
                                local_78.~shared_ptr();
                                goto LAB_1006666af;
                            }
                            cVar1 = this_03->g1();
                            if (cVar1 != 'J') {
                            LAB_10066655a:
                                /* WARNING: Subroutine does not return */
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "game/runetek5/audio/resources/VorbisJs5Resource.cpp",
                                                171, (char*)0);
                            }
                            cVar1 = this_03->g1();
                            if (cVar1 != 'A')
                                goto LAB_10066655a;
                            cVar1 = this_03->g1();
                            if (cVar1 != 'G')
                                goto LAB_10066655a;
                            cVar1 = this_03->g1();
                            if (cVar1 != 'A')
                                goto LAB_10066655a;
                            this_03->Skip(4);
                            local_8c = this_03->g4();
                            local_88 = this_03->g4();
                            local_84 = this_03->g4();
                            iVar3 = this_03->g4();
                            field_92 = iVar3;
                            this_03->Skip((long)(iVar3 << 3));
                            uVar4 = this_03->size();
                            field_72 = uVar4;
                            std::__atomic_base<unsigned int, true>::operator+=(
                                (__atomic_base<unsigned int, true>*)this_00, uVar4);
                            this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                          this_03->GetDataArrayPtr();
                            iVar3 =
                                eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
                            field_68 = iVar3;
                            local_68[0]._0_1_ = 0;
                            make_shared<hal::audio::AudioBuffer, int&, int, unsigned int const&,
                                        hal::audio::AudioFormat_const*&, bool>(
                                (jag*)local_a0, &local_8c, &local_84, &local_88,
                                (AudioFormat**)&hal::audio::AudioFormat::FLOAT, (bool*)local_68);
                            psVar15 =
                                (shared_ptr*)
                                    shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::
                                    operator->((shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul,
                                                                              true>>*)&field_32);
                            eastl::stack<shared_ptr<hal::audio::AudioBuffer>,
                                         eastl::fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul, true,
                                                             eastl::allocator>>::push(psVar15);
                            pAVar18 = field_80;
                            std::function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>::function<
                                VorbisJs5Resource::Update(float)::__5, void>(local_68, this);
                            (**(code**)(pAVar18->field_0 + 56))(pAVar18, local_68);
                            std::function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>::~function(
                                (function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>*)local_68);
                            pAVar18 = field_80;
                            local_80 = (int*)this_03->GetDataPtr();
                            uVar4 = this_00->operator_cast_to_unsigned_int();
                            iVar3 = field_68;
                            uVar5 = this_00->operator_cast_to_unsigned_int();
                            (**(code**)(pAVar18->field_0 + 16))(pAVar18, local_80, uVar4, iVar3 - uVar5);
                            field_24 = 1;
                            local_a0->~shared_ptr();
                        } else {
                            field_48 = (AudioFormat*)hal::audio::AudioFormat::VORBIS;
                            if (field_96 == 0) {
                                cVar1 = this_03->g1();
                                if (cVar1 != 'J') {
                                LAB_10066667a:
                                    field_96 = 0;
                                    field_120 = 1;
                                    /* WARNING: Subroutine does not return */
                                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/game/runetek5/audio/resources/VorbisJs5Resource.cpp",
                                                    100, (char*)0);
                                }
                                cVar1 = this_03->g1();
                                if (cVar1 != 'A')
                                    goto LAB_10066667a;
                                cVar1 = this_03->g1();
                                if (cVar1 != 'G')
                                    goto LAB_10066667a;
                                cVar1 = this_03->g1();
                                if (cVar1 != 'A')
                                    goto LAB_10066667a;
                                this_03->Skip(4);
                                this_03->Skip(4);
                                this_03->Skip(4);
                                this_03->Skip(4);
                                iVar3 = this_03->g4();
                                local_80 = &field_92;
                                field_92 = iVar3;
                                make_shared<Array<int, eastl::allocator>, int&>((jag*)local_68, local_80);
                                shared_ptr<Array<int, eastl::allocator>>::operator=(
                                    (shared_ptr<Array<int, eastl::allocator>>*)&field_104, local_68);
                                local_68->~shared_ptr();
                                if (0 < *local_80) {
                                    uVar20 = 0;
                                    do {
                                        this_03->Skip(4);
                                        uVar6 = this_03->g4();
                                        pAVar8 = (Array<int, eastl::allocator>*)
                                            shared_ptr<Array<int, eastl::allocator>>::operator*(
                                                (shared_ptr<Array<int, eastl::allocator>>*)&field_104);
                                        puVar19 = (undefined4*)Array<int, eastl::allocator>::operator[](pAVar8, uVar20);
                                        *puVar19 = uVar6;
                                        uVar20 = uVar20 + 1;
                                    } while ((long)uVar20 < (long)*local_80);
                                }
                                uVar4 = this_03->size();
                                field_72 = uVar4;
                            }
                            field_96 = field_96 + 1;
                            iVar3 = this_03->GetTextureAtlas();
                            local_a0[0] = iVar3 - field_72;
                            make_shared<hal::audio::AudioBuffer, unsigned int, hal::audio::AudioFormat_const*&>(
                                (jag*)local_68, local_a0, (AudioFormat**)&hal::audio::AudioFormat::VORBIS);
                            pAVar17 = (AudioBuffer*)shared_ptr<hal::audio::AudioBuffer>::operator->(
                                (shared_ptr<hal::audio::AudioBuffer>*)local_68);
                            puVar13 = (uchar*)this_03->GetDataPtr();
                            uVar4 = field_72;
                            lVar14 = this_03->GetTextureAtlas();
                            pAVar17->WriteByteData(puVar13, (ulong)uVar4, lVar14 - (ulong)field_72);
                            field_72 = 0;
                            psVar15 =
                                (shared_ptr*)
                                    shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::
                                    operator->((shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul,
                                                                              true>>*)&field_32);
                            eastl::stack<shared_ptr<hal::audio::AudioBuffer>,
                                         eastl::fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul, true,
                                                             eastl::allocator>>::push(psVar15);
                            if (field_92 <= field_96) {
                                field_24 = 4;
                                field_96 = 0;
                                field_120 = 1;
                            }
                            local_68->~shared_ptr();
                        }
                    } else if (puVar11 == DataStatus::MISSING) {
                        field_24 = 2;
                    } else {
                        cVar1 = IsValid();
                        if (cVar1 != '\0') {
                            if (MainLoopFrameTimer::GetFastUpdateLoopEnabled(Js5Archive::JS5_AUDIOSTREAMS)) {
                                cVar1 = (Js5Archive::JS5_AUDIOSTREAMS)->IsHTTPValidated();
                                if (cVar1 == '\0') {
                                    uVar12 = logger::default_logger();
                                    logger::Logger::Log(
                                        uVar12, 1, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/audio/resources/VorbisJs5Resource.cpp",
                                        231, "HTTP is not validated for streaming");
                                }
                            }
                        }
                    }
                    local_78.~shared_ptr();
                }
            }
            iVar3 = field_24;
            if (((iVar3 == 4) || (iVar3 == 1)) && (field_68 != -1)) {
                if (iVar3 == 1) {
                    cVar1 = IsUsablePrematurely(this);
                    if (cVar1 != '\0') {
                        field_24 = 4;
                    }
                }
                uVar4 = (&field_88)->operator_cast_to_unsigned_int();
                if (field_68 <= (int)uVar4) {
                    pAVar18 = field_80;
                    psVar15 = local_68;
                    std::function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>::function(
                        (_func_decltype_nullptr*)psVar15);
                    (**(code**)(pAVar18->field_0 + 56))(pAVar18);
                    std::function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>::~function(
                        (function<void(PacketT<Array<unsigned char, eastl::allocator>>&)>*)local_68);
                    this_04 =
                        (Layout*)shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::
                        operator->(
                            (shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>*)&field_32);
                    pvVar7 = eastl::string::Layout::SSOBeginPtr(this_04, (type*)psVar15);
                    this_05 = (shared_ptr<hal::audio::AudioBuffer>*)
                        eastl::vector<shared_ptr<hal::audio::AudioBuffer>,
                                      eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<shared_ptr<hal::audio::AudioBuffer>,
                                    eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)pvVar7,
                            0);
                    plVar16 = (long*)shared_ptr<hal::audio::AudioBuffer>::operator->(this_05);
                    uVar4 = (**(code**)(*plVar16 + 16))(plVar16, 0);
                    plVar16 = (long*)shared_ptr<hal::audio::AudioBuffer>::operator->(this_05);
                    uVar5 = (**(code**)(*plVar16 + 80))(plVar16);
                    if (uVar4 <= uVar5 && uVar5 - uVar4 != 0) {
                        pAVar17 = (AudioBuffer*)shared_ptr<hal::audio::AudioBuffer>::operator->(this_05);
                        pAVar17->WroteSamples(uVar5 - uVar4);
                    }
                    (field_16, field_80)->FreeDecoder();
                    field_80 = (AudioDecoder*)0;
                    field_24 = 4;
                    field_68 = -1;
                }
            }
        }
    LAB_1006666af:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100666750, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<hal::audio::AudioBuffer>::type make_shared<hal::audio::AudioBuffer, unsigned int, hal::audio::AudioFormat const*&>(unsigned int&&, hal::audio::AudioFormat const*&)
    jag* make_shared<hal::audio::AudioBuffer, unsigned int, hal::audio::AudioFormat_const*&>(uint* param_1,
                                                                                             AudioFormat** param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        AudioBuffer* local_38[2];

        pvVar1 = (void*)aligned_alloc(248, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<hal::audio::AudioBuffer, unsigned int, hal::audio::AudioFormat_const*&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<hal::audio::AudioBuffer>, int, hal::audio::AudioBuffer*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100666830, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<hal::audio::AudioBuffer>::type make_shared<hal::audio::AudioBuffer, unsigned int&, unsigned int&, unsigned int&, hal::audio::AudioFormat const*&, bool>(unsigned int&, unsigned int&, unsigned int&, hal::audio::AudioFormat const*&, bool&&)
    /* shared_ptr_if_not_array<hal::audio::AudioBuffer>::type
   make_shared<hal::audio::AudioBuffer, int&, int, unsigned int const&,
   hal::audio::AudioFormat const*&, bool>(int&, int&&, unsigned int const&,
   hal::audio::AudioFormat const*&, bool&&) */

    jag*
    jag::make_shared<hal::audio::AudioBuffer, int&, int, unsigned int const&, hal::audio::AudioFormat_const*&, bool>(
        int* param_1, int* param_2, uint* param_3, AudioFormat** param_4, bool* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        AudioBuffer* local_40[2];

        pvVar1 = (void*)aligned_alloc(248, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<hal::audio::AudioBuffer, int&, int, unsigned int const&, hal::audio::AudioFormat_const*&,
                              bool>((void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<hal::audio::AudioBuffer>, int, hal::audio::AudioBuffer*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100666910, 64 bytes, placed by class name and debug map
    // VorbisJs5Resource::IsUsablePrematurely() const
    bool VorbisJs5Resource::IsUsablePrematurely() {
        uint uVar1;
        Layout* this_00;
        vector* this_01;
        shared_ptr<hal::audio::AudioBuffer>* this_02;
        long* plVar2;
        type* in_RSI;

        this_00 = (Layout*)shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::operator->(
            (shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>*)&field_32);
        this_01 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        this_02 = (shared_ptr<hal::audio::AudioBuffer>*)
            eastl::vector<shared_ptr<hal::audio::AudioBuffer>,
                          eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<shared_ptr<hal::audio::AudioBuffer>,
                               eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this_01,
                       0);
        plVar2 = (long*)shared_ptr<hal::audio::AudioBuffer>::operator->(this_02);
        uVar1 = (**(code**)(*plVar2 + 16))(plVar2, 0);
        return 14336 < uVar1;
    }

    // 0x100666950, 32 bytes, placed by class name and debug map
    // VorbisJs5Resource::IsReady() const
    undefined8 VorbisJs5Resource::IsReady() {
        undefined8 uVar1;

        uVar1 = 1;
        if ((field_24 != 4) && ((field_24 != 0 || (field_96 < 3)))) {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x100666970, 48 bytes, placed by class name and debug map
    // VorbisJs5Resource::GetResource() const
    undefined1* VorbisJs5Resource::GetResource() {
        undefined1* puVar2;

        if ((*(code*)field_0[4])() == '\0') {
            puVar2 = &audio::SoundResource::NullSoundResourceData;
        } else {
            puVar2 = &field_32;
        }
        return puVar2;
    }

    // 0x1006669a0, 288 bytes, placed by class name and debug map
    // VorbisJs5Resource::GetResourceByteLength() const
    uint VorbisJs5Resource::GetResourceByteLength() {
        char cVar1;
        int iVar2;
        Layout* this_00;
        vector* pvVar3;
        shared_ptr<hal::audio::AudioBuffer>* this_01;
        shared_ptr<hal::audio::AudioBuffer>* psVar4;
        AudioBuffer* this_02;
        stack<shared_ptr<hal::audio::AudioBuffer>,
              eastl::fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul, true, eastl::allocator>>* this_03;
        ulong uVar5;
        type* in_RSI;
        uint uVar6;
        fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul, true, eastl::allocator> local_70[56];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (m_pData == (void*)0) {
            uVar6 = 0;
        } else {
            this_00 =
                (Layout*)shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::operator->(
                    (shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>*)&field_32);
            pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
            eastl::fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul, true, eastl::allocator>::fixed_vector(
                local_70, (fixed_vector*)pvVar3);
            this_01 = (shared_ptr<hal::audio::AudioBuffer>*)local_70->HeapBeginPtr();
            psVar4 = (shared_ptr<hal::audio::AudioBuffer>*)local_70->end();
            if (this_01 == psVar4) {
                uVar6 = 0;
            } else {
                uVar6 = 0;
                do {
                    this_02 = (AudioBuffer*)shared_ptr<hal::audio::AudioBuffer>::operator->(this_01);
                    iVar2 = this_02->TotalSize();
                    uVar6 = uVar6 + iVar2;
                    this_01 = this_01 + 16;
                } while (this_01 != psVar4);
            }
            cVar1 = IsValid();
            if ((cVar1 != '\0') && (field_96 != field_92)) {
                this_03 =
                    (stack<shared_ptr<hal::audio::AudioBuffer>,
                           eastl::fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul, true, eastl::allocator>>*)
                        shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::operator->(
                            (shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>*)&field_32);
                uVar5 = eastl::stack<shared_ptr<hal::audio::AudioBuffer>,
                                     eastl::fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul, true,
                                                         eastl::allocator>>::size(this_03);
                uVar6 = (int)((ulong)uVar6 / (uVar5 & 4294967295)) * field_92;
            }
            eastl::fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul, true, eastl::allocator>::~fixed_vector(
                local_70);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar6;
    }

    // 0x100666b00, 400 bytes, placed by class name and debug map
    // VorbisJs5Resource::DecodeCallback(PacketT<Array<unsigned char, eastl::allocator> >&)
    void VorbisJs5Resource::DecodeCallback(PacketT* param_1) {
        char cVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;
        ulong uVar6;
        Layout* this_00;
        vector* this_01;
        shared_ptr<hal::audio::AudioBuffer>* this_02;
        AudioBuffer* pAVar7;
        uchar* puVar8;
        type* ptVar9;

        cVar1 = IsValid();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!IsStreamed()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/audio/"
                      "resources/VorbisJs5Resource.cpp",
                      327,
                      "Streamed audio is decoded in VoiceInstance, where we dump the samples after they\'ve been "
                      "decoded. This way, we only have to keep around the comparitively smaller encoded samples.");
        }
        cVar1 = param_1->g1();
        if (cVar1 == '\x02') {
            uVar2 = param_1->g4();
            std::__atomic_base<unsigned int, true>::operator+=((__atomic_base<unsigned int, true>*)&field_88, uVar2);
        } else if (cVar1 == '\x14') {
            uVar2 = param_1->g4();
            ptVar9 = (type*)(ulong)uVar2;
            uVar3 = param_1->g4();
            uVar4 = param_1->g1();
            param_1->Skip(4);
            while (true) {
                uVar6 = param_1->size();
                if ((uVar6 & 3) == 0)
                    break;
                param_1->g1();
            }
            std::__atomic_base<unsigned int, true>::operator+=((__atomic_base<unsigned int, true>*)&field_88, uVar2);
            this_00 =
                (Layout*)shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::operator->(
                    (shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>*)&field_32);
            this_01 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar9);
            this_02 = (shared_ptr<hal::audio::AudioBuffer>*)
                eastl::vector<shared_ptr<hal::audio::AudioBuffer>,
                              eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<shared_ptr<hal::audio::AudioBuffer>,
                                   eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true, eastl::allocator>>*)this_01,
                           0);
            pAVar7 = (AudioBuffer*)shared_ptr<hal::audio::AudioBuffer>::operator->(this_02);
            uVar2 = pAVar7->GetNumberSamplesCanBeWritten(0);
            if (uVar2 < uVar3) {
                pAVar7 = (AudioBuffer*)shared_ptr<hal::audio::AudioBuffer>::operator->(this_02);
                uVar3 = pAVar7->GetNumberSamplesCanBeWritten(0);
            }
            pAVar7 = (AudioBuffer*)shared_ptr<hal::audio::AudioBuffer>::operator->(this_02);
            puVar8 = (uchar*)param_1->GetDataPtr();
            uVar2 = param_1->size();
            uVar5 = param_1->GetTextureAtlas();
            pAVar7->WriteFromInterleavedPacket(puVar8, uVar2, uVar5, uVar3, uVar4 & 255);
            pAVar7 = (AudioBuffer*)shared_ptr<hal::audio::AudioBuffer>::operator->(this_02);
            pAVar7->WroteSamples(uVar3);
        }
    }

} // namespace jag
