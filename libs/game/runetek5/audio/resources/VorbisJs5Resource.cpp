// libs/game/runetek5/audio/resources/VorbisJs5Resource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "VorbisJs5Resource.h"

namespace jag {
    // 0x1000fcbb0: VorbisJs5Resource::GetFormat() const has the same machine code as oldscape::ClientObj::GetHighlight()

    // 0x100429b10: VorbisJs5Resource::GetID() const has the same machine code as game::StaticPointLight::GetRGB() const

    // 0x100665d30
    VorbisJs5Resource::VorbisJs5Resource(hal::audio::AudioAPI* audioAPI)
        : audio::SoundResource(), field_16(audioAPI), field_24(-1) {
        make_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>((ReturnValue*)&field_32);
        m_pFormat = (AudioFormat*)hal::audio::AudioFormat::INVALID;
        field_56 = nullptr;
        m_iD = 4294967295;
        field_68 = -1;
        field_72 = 0;
        field_80 = nullptr;
        new (&field_88) std::atomic<unsigned int>((unsigned int)audioAPI);
        field_92 = 0;
        field_96 = 0;
        new (&field_104) shared_ptr();
        field_120 = 0;
    }

    // 0x100665e00
    shared_ptr_if_not_array<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::type
    make_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>() {
        ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, _1ul, true> _>* ref_counter_shared;
        int local_2c;
        fixed_stack<shared_ptr<hal::audio::AudioBuffer>, _1ul, true>* local_28[2];

        auto arg1 = aligned_alloc(88, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::type result;
        } else {
            local_28[0] = placement_new<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>(
                (void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>,
                              int, eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>*&>(
                    arg1, &local_2c, local_28);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100665eb0
    VorbisJs5Resource::~VorbisJs5Resource() {
        function<void(PacketT<Array<unsigned char>>&)> local_58[48];
        long local_28;

        bool cVar2 = field_16->IsRendererValid();
        AudioDecoder* pAVar1 = field_80;
        if (!cVar2) {
            if (pAVar1 != nullptr) {
                LogAssert("!m_AudioDecoder",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/audio/"
                          "resources/VorbisJs5Resource.cpp",
                          46, nullptr);
            }
        } else if (pAVar1 != nullptr) {
            (*pAVar1->_vptr[3]._x7e___2)(pAVar1, local_58);
        }
        field_104.~shared_ptr();
        field_32.~shared_ptr();
    }

    // 0x100666000
    void VorbisJs5Resource::SetData(void* arg1, int arg2, const hal::audio::AudioFormat* audioFormat) {
        field_56 = arg1;
        m_iD = arg2;
        field_24 = 0;
    }

    // 0x100666020
    void VorbisJs5Resource::Update(float arg1) {
        Js5ResourceProvider* this_00;
        char cVar1;
        uint32_t uVar3;
        unsigned int uVar4;
        Array<int>* pAVar5;
        unsigned int* puVar6;
        MainLoopFrameTimer** ppMVar7;
        uint8_t* puVar8;
        Logger* this_03;
        TextureAtlasReference* this_04;
        AudioBuffer* this_05;
        unsigned char* arg1_00;
        long lVar9;
        stack<shared_ptr<hal::audio::AudioBuffer>, eastl::fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul>>*
            psVar10;
        AudioDecoder* pAVar11;
        uint32_t* puVar12;
        unsigned long arg1_01;
        ReturnValue* in_RSI;
        ReturnValue local_a0;
        unsigned int local_8c;
        unsigned int local_88;
        unsigned int local_84;
        int* local_80;
        ReturnValue local_78;
        ReturnValue local_68;

        auto this_01 = field_16->SSOBeginPtr();
        int iVar2 = ((TcpConnectionMessageBase*)(*this_01).operator->())->GetEndPosition();
        if (iVar2 == 2) {
            if (field_80 != nullptr) {
                field_16->FreeDecoder(field_80);
                field_80 = nullptr;
                field_24 = -1;
            }
        } else {
            if (field_24 == 0) {
                uVar4 = m_iD;
                cVar1 = IsValid();
                if ((cVar1) && (0 < field_96)) {
                    pAVar5 = (Array<int>*)*field_104;
                    in_RSI = (ReturnValue*)(long)field_96;
                    puVar6 = (unsigned int*)(*pAVar5)[(unsigned long)in_RSI];
                    uVar4 = *puVar6;
                }
                cVar1 = IsValid();
                if ((!cVar1) || (field_120 == '\0')) {
                    in_RSI = &local_78;
                    new (in_RSI) shared_ptr();
                    this_00 = field_56;
                    cVar1 = IsValid();
                    if (!cVar1) {
                        ppMVar7 = (MainLoopFrameTimer**)&Js5Archive::JS5_VORBIS;
                    } else {
                        ppMVar7 = &Js5Archive::JS5_AUDIOSTREAMS;
                    }
                    puVar8 = (uint8_t*)this_00->GetFile(*in_RSI, *(*ppMVar7), uVar4, 0, (Priority*)Priority::HIGH, true,
                                                        true, false);
                    if (puVar8 == DataStatus::READY) {
                        this_04 = (TextureAtlasReference*)*local_78;
                        uVar4 = (unsigned int)in_RSI;
                        cVar1 = IsValid();
                        if (!cVar1) {
                            m_pFormat = (AudioFormat*)hal::audio::AudioFormat::FLOAT;
                            field_88 = uVar4;
                            pAVar11 = (AudioDecoder*)field_16->GetDecoder(m_pFormat);
                            field_80 = pAVar11;
                            if (pAVar11 != nullptr) {
                                cVar1 = this_04->g1();
                                if (cVar1 == 'J') {
                                    cVar1 = this_04->g1();
                                    if (cVar1 == 'A') {
                                        cVar1 = this_04->g1();
                                        if (cVar1 == 'G') {
                                            cVar1 = this_04->g1();
                                            if (cVar1 == 'A') {
                                                this_04->Skip(4);
                                                local_8c = this_04->g4();
                                                local_88 = this_04->g4();
                                                local_84 = this_04->g4();
                                                iVar2 = this_04->g4();
                                                field_92 = iVar2;
                                                this_04->Skip((long)(iVar2 << 3));
                                                uVar4 = this_04->size();
                                                field_72 = uVar4;
                                                field_88 += uVar4;
                                                iVar2 =
                                                    ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                         this_04->GetDataArrayPtr())
                                                        ->end();
                                                field_68 = iVar2;
                                                local_68[0]._0_1_ = 0;
                                                make_shared<hal::audio::AudioBuffer, int&, int, unsigned int const&,
                                                            hal::audio::AudioFormat const*&, bool>(
                                                    &local_a0, &local_8c, &local_84, &local_88,
                                                    (AudioFormat**)&hal::audio::AudioFormat::FLOAT, &local_68);
                                                psVar10 =
                                                    (stack<
                                                        shared_ptr<hal::audio::AudioBuffer>,
                                                        eastl::fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul>>*)
                                                        field_32.operator->();
                                                psVar10->push(local_a0);
                                                pAVar11 = field_80;
                                                std::function<void(PacketT<Array<unsigned char>>&)>::function<
                                                    VorbisJs5Resource::Update(float)::__5, void>(
                                                    (function<void(PacketT<Array<unsigned char>>&)>*)&local_68,
                                                    (__5*)this);
                                                (*pAVar11->_vptr[3]._x7e___2)(pAVar11, &local_68);
                                            }
                                        }
                                    }
                                }
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "game/runetek5/audio/resources/VorbisJs5Resource.cpp",
                                                171, nullptr);
                            }
                            goto LAB_1006666af;
                        }
                        m_pFormat = (AudioFormat*)hal::audio::AudioFormat::VORBIS;
                        if (field_96 == 0) {
                            cVar1 = this_04->g1();
                            if (cVar1 != 'J') {
                            LAB_10066667a:
                                field_96 = 0;
                                field_120 = 1;
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "game/runetek5/audio/resources/VorbisJs5Resource.cpp",
                                                100, nullptr);
                            }
                            cVar1 = this_04->g1();
                            if (cVar1 != 'A')
                                goto LAB_10066667a;
                            cVar1 = this_04->g1();
                            if (cVar1 != 'G')
                                goto LAB_10066667a;
                            cVar1 = this_04->g1();
                            if (cVar1 != 'A')
                                goto LAB_10066667a;
                            this_04->Skip(4);
                            this_04->Skip(4);
                            this_04->Skip(4);
                            this_04->Skip(4);
                            iVar2 = this_04->g4();
                            local_80 = &field_92;
                            field_92 = iVar2;
                            make_shared<Array<int>, int&>(&local_68, local_80);
                            field_104 = local_68;
                            if (0 < *local_80) {
                                arg1_01 = 0;
                                do {
                                    this_04->Skip(4);
                                    uVar3 = this_04->g4();
                                    pAVar5 = (Array<int>*)*field_104;
                                    puVar12 = (uint32_t*)(*pAVar5)[arg1_01];
                                    *puVar12 = uVar3;
                                    arg1_01 = arg1_01 + 1;
                                } while ((long)arg1_01 < (long)*local_80);
                            }
                            uVar4 = this_04->size();
                            field_72 = uVar4;
                        }
                        field_96 = field_96 + 1;
                        local_a0[0]._0_4_ = this_04->GetTextureAtlas();
                        local_a0[0]._0_4_ = local_a0[0]._0_4_ - field_72;
                        make_shared<hal::audio::AudioBuffer, unsigned int, hal::audio::AudioFormat const*&>(
                            &local_68, &local_a0, (AudioFormat**)&hal::audio::AudioFormat::VORBIS);
                        this_05 = (AudioBuffer*)local_68.operator->();
                        arg1_00 = (unsigned char*)this_04->GetDataPtr();
                        uVar4 = field_72;
                        lVar9 = this_04->GetTextureAtlas();
                        this_05->WriteByteData(arg1_00, (unsigned long)uVar4, lVar9 - (unsigned long)field_72);
                        field_72 = 0;
                        psVar10 = (stack<shared_ptr<hal::audio::AudioBuffer>,
                                         eastl::fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul>>*)
                                      field_32.operator->();
                        in_RSI = &local_68;
                        psVar10->push(*in_RSI);
                        if (field_92 <= field_96) {
                            field_24 = 4;
                            field_96 = 0;
                            field_120 = 1;
                        }
                    } else if (puVar8 == DataStatus::MISSING) {
                        field_24 = 2;
                    } else {
                        cVar1 = IsValid();
                        if (cVar1) {
                            cVar1 = (Js5Archive::JS5_AUDIOSTREAMS)->GetFastUpdateLoopEnabled();
                            if (cVar1) {
                                cVar1 = ((Js5ArchiveSettings*)Js5Archive::JS5_AUDIOSTREAMS)->IsHTTPValidated();
                                if (!cVar1) {
                                    this_03 = logger::default_logger();
                                    in_RSI = (ReturnValue*)&DAT_00000001;
                                    this_03->Log(true, 3,
                                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                 "libs/game/runetek5/audio/resources/VorbisJs5Resource.cpp",
                                                 231, "HTTP is not validated for streaming");
                                }
                            }
                        }
                    }
                }
            }
            iVar2 = field_24;
            if (((iVar2 == 4) || (iVar2 == 1)) && (field_68 != -1)) {
                if (iVar2 == 1) {
                    cVar1 = IsUsablePrematurely();
                    if (cVar1) {
                        field_24 = 4;
                    }
                }
                iVar2 = (&field_88)->operator_cast_to_unsigned_int();
                if (field_68 <= iVar2) {
                    pAVar11 = field_80;
                    local_68 = std::function<void(PacketT<Array<unsigned char>>&)>(in_RSI);
                    (*pAVar11->_vptr[3]._x7e___2)(pAVar11, &local_68);
                }
            }
        }
    LAB_1006666af:
    }

    // 0x100666750
    shared_ptr_if_not_array<hal::audio::AudioBuffer>::type
    make_shared<hal::audio::AudioBuffer, unsigned int, hal::audio::AudioFormat const*&>(
        unsigned int&& arg1, const hal::audio::AudioFormat*& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        AudioBuffer* local_38[2];

        auto arg1_00 = aligned_alloc(248, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<hal::audio::AudioBuffer>::type result;
        } else {
            local_38[0] = placement_new<hal::audio::AudioBuffer, unsigned int, hal::audio::AudioFormat const*&>(
                (void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<hal::audio::AudioBuffer>, int, hal::audio::AudioBuffer*&>(
                    arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100666830
    shared_ptr_if_not_array<hal::audio::AudioBuffer>::type
    make_shared<hal::audio::AudioBuffer, unsigned int&, unsigned int&, unsigned int&, hal::audio::AudioFormat const*&,
                bool>(unsigned int& arg1, unsigned int& arg2, unsigned int& arg3, const hal::audio::AudioFormat*& arg4,
                      bool&& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        AudioBuffer* local_40[2];

        auto arg1_00 = aligned_alloc(248, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<hal::audio::AudioBuffer>::type result;
        } else {
            local_40[0] =
                placement_new<hal::audio::AudioBuffer, int&, int, unsigned int const&, hal::audio::AudioFormat const*&,
                              bool>((void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<hal::audio::AudioBuffer>, int, hal::audio::AudioBuffer*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100666910
    bool VorbisJs5Resource::IsUsablePrematurely() const {
        auto this_00 = field_32.operator->();
        auto this_01 = this_00->SSOBeginPtr();
        shared_ptr<hal::audio::AudioBuffer>* this_02 = (shared_ptr<hal::audio::AudioBuffer>*)(*this_01)[0];
        long* plVar2 = (long*)(*this_02).operator->();
        unsigned int uVar1 = (**(void (**)(...))(*plVar2 + 16))(plVar2, 0);
        return 14336 < uVar1;
    }

    // 0x100666950
    bool VorbisJs5Resource::IsReady() const {
        uint64_t uVar1 = 1;
        if ((field_24 != 4) && ((field_24 != 0 || (field_96 < 3)))) {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x100666970
    uint8_t* VorbisJs5Resource::GetResource() const {
        uint8_t* puVar2;

        if (IsReady() == '\0') {
            puVar2 = &audio::SoundResource::NullSoundResourceData;
        } else {
            puVar2 = &field_32;
        }
        return puVar2;
    }

    // 0x1006669a0
    unsigned int VorbisJs5Resource::GetResourceByteLength() const {
        int iVar2;
        Layout* this_00;
        fixed_vector<shared_ptr<hal::audio::AudioBuffer>, _1ul>* audioBuffers;
        shared_ptr<hal::audio::AudioBuffer>* this_01;
        shared_ptr<hal::audio::AudioBuffer>* psVar3;
        unsigned long uVar4;
        unsigned int uVar5;
        fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul> local_70;

        if (field_56 == nullptr) {
            uVar5 = 0;
        } else {
            this_00 = (Layout*)field_32.operator->();
            audioBuffers = (fixed_vector<shared_ptr<hal::audio::AudioBuffer>, _1ul>*)this_00->SSOBeginPtr();
            local_70 = eastl::fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul>(*audioBuffers);
            this_01 = (shared_ptr<hal::audio::AudioBuffer>*)local_70.HeapBeginPtr();
            psVar3 = (shared_ptr<hal::audio::AudioBuffer>*)local_70.end();
            if (this_01 == psVar3) {
                uVar5 = 0;
            } else {
                uVar5 = 0;
                do {
                    iVar2 = ((AudioBuffer*)(*this_01).operator->())->TotalSize();
                    uVar5 = uVar5 + iVar2;
                    this_01 = this_01 + 16;
                } while (this_01 != psVar3);
            }
            if ((IsValid() != '\0') && (field_96 != field_92)) {
                uVar4 = ((stack<shared_ptr<hal::audio::AudioBuffer>,
                                eastl::fixed_vector<shared_ptr<hal::audio::AudioBuffer>, 1ul>>*)field_32.operator->())
                            ->size();
                uVar5 = (int)((unsigned long)uVar5 / (uVar4 & 4294967295)) * field_92;
            }
        }
        return uVar5;
    }

    // 0x100666b00
    void VorbisJs5Resource::DecodeCallback(PacketT<Array<unsigned char>>& arg1) {
        unsigned int uVar2;
        unsigned int arg4;
        unsigned int uVar3;
        unsigned int arg3;
        Layout* this_00;
        vector<shared_ptr<hal::audio::AudioBuffer>, eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true>>* this_01;
        shared_ptr<hal::audio::AudioBuffer>* this_02;
        AudioBuffer* pAVar5;
        unsigned char* arg1_00;

        char cVar1 = IsValid();
        if (cVar1) {
            LogAssert("!IsStreamed()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/audio/"
                      "resources/VorbisJs5Resource.cpp",
                      327,
                      "Streamed audio is decoded in VoiceInstance, where we dump the samples after they\'ve been "
                      "decoded. This way, we only have to keep around the comparitively smaller encoded samples.");
        }
        cVar1 = arg1.g1();
        if (cVar1 == '\x02') {
            uVar2 = arg1.g4();
            field_88 += uVar2;
        } else if (cVar1 == '\x14') {
            uVar2 = arg1.g4();
            arg4 = arg1.g4();
            uVar3 = arg1.g1();
            arg1.Skip(4);
            while (true) {
                if ((arg1.size() & 3) == 0)
                    break;
                arg1.g1();
            }
            field_88 += uVar2;
            this_00 = (Layout*)field_32.operator->();
            this_01 =
                (vector<shared_ptr<hal::audio::AudioBuffer>, eastl::fixed_vector_allocator<16ul, 1ul, 8ul, 0ul, true>>*)
                    this_00->SSOBeginPtr();
            this_02 = (shared_ptr<hal::audio::AudioBuffer>*)(*this_01)[0];
            pAVar5 = (AudioBuffer*)(*this_02).operator->();
            uVar2 = pAVar5->GetNumberSamplesCanBeWritten(0);
            if (uVar2 < arg4) {
                pAVar5 = (AudioBuffer*)(*this_02).operator->();
                arg4 = pAVar5->GetNumberSamplesCanBeWritten(0);
            }
            pAVar5 = (AudioBuffer*)(*this_02).operator->();
            arg1_00 = (unsigned char*)arg1.GetDataPtr();
            uVar2 = arg1.size();
            arg3 = arg1.GetTextureAtlas();
            pAVar5->WriteFromInterleavedPacket(arg1_00, uVar2, arg3, arg4, uVar3 & 255);
            pAVar5 = (AudioBuffer*)(*this_02).operator->();
            pAVar5->WroteSamples(arg4);
        }
    }

} // namespace jag
