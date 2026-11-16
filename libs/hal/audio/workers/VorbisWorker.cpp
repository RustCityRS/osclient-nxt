// libs/hal/audio/workers/VorbisWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.audio

#include "VorbisWorker.h"

// 0x100b914e0
void VorbisWorker::SetWorkerOnResponse(std::function<void(jag::PacketT<jag::Array<unsigned char>>&)> const& callback) {

    scoped_lock<std::mutex> local_20(*((this + 102)));
    (*((this + 58))) = callback;
}

// 0x100b91fd0
VorbisWorker::VorbisWorker() : jag::Task(0) {
    new ((this + 58)) std::function<void(jag::PacketT<jag::Array<unsigned char>>&)>();
    new ((this + 65)) eastl::fixed_stack<jag::PacketT<jag::Array<unsigned char>>, 8ul, true>();
    new ((this + 102)) std::mutex();
}

// 0x100b92090
VorbisWorker::~VorbisWorker() {
    _stb_vorbis_close(this[64]._vptr);
    ((this + 102))->~mutex();
    ((this + 65))->~fixed_stack();
    ((this + 58))->~function();
}

// 0x100b920f0
void _stb_vorbis_close(stb_vorbis* param_1) {
    if (param_1 != nullptr) {
        jag::hal::audio::decoders::vorbis::vorbis_deinit(param_1);
        jag::hal::audio::decoders::vorbis::setup_free(param_1, param_1);
    }
}

// 0x100b92160
void VorbisWorker::OnMessage(jag::PacketT<jag::Array<unsigned char>>& arg1) {
    int iVar2;
    long lVar3;
    VorbisWorker_vtbl* pVVar4;
    int local_28;
    unsigned int local_24;

    uint8_t bVar1 = arg1.g1();
    if (bVar1 == 10) {
        arg1.SetPos(1);
        ((this + 65))->push(arg1);
        _stb_vorbis_flush_pushdata(this[64]._vptr);
    } else if (bVar1 == 0) {
        SetInterval(4);
        if (this[64]._vptr != nullptr) {
            _stb_vorbis_close();
            this[64]._vptr = nullptr;
        }
        *(uint32_t*)&this[56]._vptr = 0;
        iVar2 = arg1.GetTextureAtlas();
        lVar3 = arg1.GetDataPtr();
        pVVar4 = (VorbisWorker_vtbl*)_stb_vorbis_open_pushdata(lVar3 + 1, iVar2 - 1, &local_28, &local_24, 0);
        this[64]._vptr = pVVar4;
        if (pVVar4 == nullptr) {
            jag::LogAssert("m_vorbis",
                           "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                           "VorbisWorker.cpp",
                           55, "Failed to decode vorbis data - error: %i", (unsigned long)local_24);
        }
        arg1.SetPos((long)local_28 + 1);
        ((this + 65))->push(arg1);
        *(int*)&this[56]._vptr = *(int*)&this[56]._vptr + local_28;
    } else {
        (jag::logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                  "VorbisWorker.cpp",
                  73, "Unhandled VorbisWorker event: %d", (unsigned int)bVar1);
    }
}

// 0x100b922b0
void* _stb_vorbis_open_pushdata(long param_1, int param_2, int* param_3, undefined4* param_4,
                                stb_vorbis_alloc* param_5) {
    uint32_t uVar2;
    void* pvVar3;
    stb_vorbis local_790;
    int local_710;
    uint32_t local_70c;

    jag::hal::audio::decoders::vorbis::vorbis_init(&local_790, param_5);
    long local_758 = param_2 + param_1;
    uint8_t local_74c = 1;
    long local_768 = param_1;
    if (jag::hal::audio::decoders::vorbis::start_decoder(&local_790) == 0) {
        uVar2 = 1;
        if (local_710 == 0) {
            uVar2 = local_70c;
        }
        *param_4 = uVar2;
    } else {
        pvVar3 = (void*)jag::hal::audio::decoders::vorbis::vorbis_alloc(&local_790);
        if (pvVar3 != nullptr) {
            _memcpy(pvVar3, &local_790, 1880);
            *param_3 = *(int*)((long)pvVar3 + 40) - (int)param_1;
            *param_4 = 0;
            goto LAB_100b92377;
        }
        jag::hal::audio::decoders::vorbis::vorbis_deinit(&local_790);
    }
    pvVar3 = nullptr;
LAB_100b92377:
    return pvVar3;
}

// 0x100b923c0
void _stb_vorbis_flush_pushdata(long param_1) {
    *(uint32_t*)(param_1 + 1248) = 0;
    *(uint32_t*)(param_1 + 1784) = 0;
    *(uint64_t*)(param_1 + 1776) = 0;
    *(uint32_t*)(param_1 + 1388) = 0;
    *(uint8_t*)(param_1 + 1741) = 0;
    *(uint64_t*)(param_1 + 1868) = 0;
}

// 0x100b92410
void VorbisWorker::OnInterval(float arg1, unsigned long long arg2) {
    uint64_t uVar1;
    long lVar2;
    unsigned int arg1_00;
    int iVar4;
    int iVar5;
    TextureAtlasReference* this_01;
    long lVar6;
    long lVar7;
    unsigned long uVar8;
    unsigned long uVar9;
    PacketT<jag::Array<unsigned char>>* pPVar10;
    WindowSavedPosition local_88;
    shared_ptr<jag::PacketT<jag::Array<unsigned char> _> _> local_68;
    long local_58;
    unsigned long local_50;
    stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>>>* local_40;
    unsigned int local_38;
    ID local_34;

    stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>>>* this_00 =
        (stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>>>*)(this + 65);
    bool cVar3 = this_00->empty();
    if (!cVar3) {
        if (this[64]._vptr == nullptr) {
            (jag::logger::default_logger())
                ->Log(true, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                      "VorbisWorker.cpp",
                      85, "DecoderMessageTypes::INITIALISE FAILED");
        } else {
            local_38 = 0;
            cVar3 = this_00->empty();
            if (!cVar3) {
                local_40 = this_00;
                do {
                    this_01 = (TextureAtlasReference*)
                        eastl::stack<jag::PacketT<jag::Array<unsigned char>>,
                                     eastl::fixed_vector<jag::PacketT<jag::Array<unsigned char>>, 8ul>>::top();
                    iVar4 = this_01->GetTextureAtlas();
                    iVar5 = this_01->size();
                    uVar1 = *(uint64_t*)&((Task*)((long)this + 296))->field_216;
                    lVar6 = this_01->GetDataPtr();
                    lVar7 = this_01->size();
                    this = (VorbisWorker*)(Task*)this;
                    iVar4 = _stb_vorbis_decode_frame_pushdata(uVar1, lVar6 + lVar7, iVar4 - iVar5, &local_34, &local_58,
                                                              &local_38);
                    lVar6 = this_01->size();
                    this_01->SetPos(lVar6 + iVar4);
                    *(int*)&((Task*)((long)this + 296))->field_152 =
                        *(int*)&((Task*)((long)this + 296))->field_152 + iVar4;
                    uVar8 = this_01->size();
                    uVar9 = this_01->GetTextureAtlas();
                    if (uVar9 <= uVar8) {
                        eastl::stack<jag::PacketT<jag::Array<unsigned char>>,
                                     eastl::fixed_vector<jag::PacketT<jag::Array<unsigned char>>, 8ul>>::pop();
                    }
                    arg1_00 = local_38;
                    if ((long)(int)local_38 < 1) {
                        if ((0 < *(int*)&((Task*)((long)this + 296))->field_152) && (uVar9 <= uVar8)) {
                            local_88.PacketT(5);
                            jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>,
                                                2048>::MakeShared<VorbisWorkerPacket>(&local_68);
                            pPVar10 = (PacketT<jag::Array<unsigned char>>*)local_68.operator->();
                            pPVar10->p1<unsigned long>(2);
                            pPVar10 = (PacketT<jag::Array<unsigned char>>*)local_68.operator->();
                            pPVar10->p4<int>(*(unsigned int*)&((Task*)((long)this + 296))->field_152);
                            Response(local_68);
                            goto LAB_100b9247f;
                        }
                    } else {
                        local_88.PacketT((long)(int)local_34 * (long)(int)local_38 * 4 + 16);
                        jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>,
                                            2048>::MakeShared<VorbisWorkerPacket>(&local_68);
                        pPVar10 = (PacketT<jag::Array<unsigned char>>*)local_68.operator->();
                        pPVar10->p1<unsigned long>(20);
                        pPVar10 = (PacketT<jag::Array<unsigned char>>*)local_68.operator->();
                        pPVar10->p4<int>(*(unsigned int*)&((Task*)((long)this + 296))->field_152);
                        pPVar10 = (PacketT<jag::Array<unsigned char>>*)local_68.operator->();
                        pPVar10->p4<int>(arg1_00);
                        pPVar10 = (PacketT<jag::Array<unsigned char>>*)local_68.operator->();
                        pPVar10->p1<unsigned long>(local_34);
                        pPVar10 = (PacketT<jag::Array<unsigned char>>*)local_68.operator->();
                        _stb_vorbis_get_info(&local_88, *(uint64_t*)&((Task*)((long)this + 296))->field_216);
                        pPVar10->p4<int>(local_88._0_4_);
                        iVar4 = 2;
                        do {
                            pPVar10 = (PacketT<jag::Array<unsigned char>>*)local_68.operator->();
                            pPVar10->p1<unsigned long>(0);
                            iVar4 = iVar4 - 1;
                        } while (iVar4 != 0);
                        local_50 = (unsigned long)arg1_00;
                        uVar8 = 0;
                        do {
                            lVar6 = local_58;
                            if (0 < (int)local_34) {
                                lVar7 = 0;
                                do {
                                    lVar2 = *(long*)(lVar6 + lVar7 * 8);
                                    pPVar10 = (PacketT<jag::Array<unsigned char>>*)local_68.operator->();
                                    pPVar10->pFloatPlatformEndian(*(float*)(lVar2 + uVar8 * 4));
                                    lVar7 = lVar7 + 1;
                                } while (lVar7 < (int)local_34);
                            }
                            this = (VorbisWorker*)(Task*)this;
                            uVar8 = uVar8 + 1;
                        } while (uVar8 != local_50);
                        Response(local_68);
                    LAB_100b9247f:
                        *(uint32_t*)&((Task*)((long)this + 296))->field_152 = 0;
                    }
                    cVar3 = local_40->empty();
                } while (!cVar3);
            }
        }
    }
}
