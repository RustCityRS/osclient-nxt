// libs/hal/audio/workers/VorbisWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.audio

#include "VorbisWorker.h"

// 0x100b914e0, 96 bytes, placed by class name and debug map
// VorbisWorker::SetWorkerOnResponse(std::function<void (jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&)> const&)
/* VorbisWorker::SetWorkerOnResponse(std::function<void (jag::PacketT<jag::Array<unsigned char,
   eastl::allocator> >&)> const&) */

void VorbisWorker::SetWorkerOnResponse(function* param_1) {
    scoped_lock<std::mutex> local_20[8];

    std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)(this + 816));
    std::function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>::operator=(
        (function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>*)(this + 464), param_1);
    std::scoped_lock<std::mutex>::~scoped_lock(local_20);
}

// 0x100b91fd0, 144 bytes, base-object constructor, placed by class name
// VorbisWorker::VorbisWorker()
void VorbisWorker::VorbisWorker() {
    new (this) jag::Task(0);
    *(undefined***)this = &PTR__VorbisWorker_100f269f8;
    *(undefined4*)(this + 448) = 0;
    std::function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>::function(
        (function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>*)(this + 464));
    *(undefined8*)(this + 512) = 0;
    new ((this + 520)) eastl::fixed_stack<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 8ul, true>();
    new ((this + 816)) std::mutex();
}

// 0x100b92080, 16 bytes, complete-object constructor, placed by class name
// VorbisWorker::VorbisWorker(): jumps straight to the base-object constructor

// 0x100b92090, 96 bytes, base-object destructor, placed by class name
// VorbisWorker::~VorbisWorker()
void VorbisWorker::~VorbisWorker() {
    *(undefined***)this = &PTR__VorbisWorker_100f269f8;
    _stb_vorbis_close(*(undefined8*)(this + 512));
    ((this + 816))->~mutex();
    ((this + 520))->~fixed_stack();
    std::function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>::~function(
        (function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>*)(this + 464));
    ~Task();
}

// 0x100b920f0, 48 bytes, placed by neighbouring functions
// stb_vorbis_close
void _stb_vorbis_close(vorbis* param_1, stb_vorbis* param_2) {
    if (param_1 != (vorbis*)0) {
        param_1->vorbis_deinit(param_2);
        jag::hal::audio::decoders::vorbis::setup_free((stb_vorbis*)param_1, param_1);
    }
}

// 0x100b92130, 16 bytes, complete-object destructor, placed by class name
// VorbisWorker::~VorbisWorker(): jumps straight to the base-object destructor

// 0x100b92140, 32 bytes, deleting destructor, placed by class name
// VorbisWorker::~VorbisWorker()
void VorbisWorker::~VorbisWorker() {
    ~VorbisWorker(this);
    operator_delete(this);
}

// 0x100b92160, 336 bytes, placed by class name
// VorbisWorker::OnMessage(jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&)
void VorbisWorker::OnMessage(PacketT* param_1) {
    char cVar1;
    int iVar2;
    long lVar3;
    undefined8 uVar4;
    int local_28;
    uint local_24;

    cVar1 = param_1->g1();
    if (cVar1 == '\n') {
        param_1->SetPos(1);
        eastl::stack<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>,
                     eastl::fixed_vector<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 8ul, true,
                                         eastl::allocator>>::push((PacketT*)(this + 520));
        _stb_vorbis_flush_pushdata(*(undefined8*)(this + 512));
    } else if (cVar1 == '\0') {
        SetInterval(4);
        if (*(long*)(this + 512) != 0) {
            _stb_vorbis_close();
            *(undefined8*)(this + 512) = 0;
        }
        *(undefined4*)(this + 448) = 0;
        iVar2 = param_1->GetTextureAtlas();
        lVar3 = param_1->GetDataPtr();
        lVar3 = _stb_vorbis_open_pushdata(lVar3 + 1, iVar2 + -1, &local_28, &local_24, 0);
        *(long*)(this + 512) = lVar3;
        if (lVar3 == 0) {
            /* WARNING: Subroutine does not return */
            jag::LogAssert("m_vorbis",
                           "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/"
                           "VorbisWorker.cpp",
                           55, "Failed to decode vorbis data - error: %i", (ulong)local_24);
        }
        param_1->SetPos((long)local_28 + 1);
        eastl::stack<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>,
                     eastl::fixed_vector<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 8ul, true,
                                         eastl::allocator>>::push((PacketT*)(this + 520));
        *(int*)(this + 448) = *(int*)(this + 448) + local_28;
    } else {
        uVar4 = jag::logger::default_logger();
        jag::logger::Logger::Log(
            uVar4, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/workers/VorbisWorker.cpp",
            73, "Unhandled VorbisWorker event: %d", cVar1);
    }
}

// 0x100b922b0, 256 bytes, placed by neighbouring functions
// stb_vorbis_open_pushdata
void* _stb_vorbis_open_pushdata(byte* param_1, int param_2, stb_vorbis_alloc* param_3, undefined4* param_4,
                                stb_vorbis* param_5) {
    undefined4 uVar2;
    void* pvVar3;
    vorbis local_790;
    long local_38;

    local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
    local_790.vorbis_init(param_5, param_3);
    local_790.field_56 = param_1 + param_2;
    local_790.field_68[0] = 1;
    local_790.field_40 = param_1;
    if (jag::hal::audio::decoders::vorbis::start_decoder((stb_vorbis*)&local_790) == 0) {
        uVar2 = 1;
        if (local_790.field_128 == 0) {
            uVar2 = local_790.field_132;
        }
        *param_4 = uVar2;
    } else {
        pvVar3 = (void*)local_790.vorbis_alloc(param_5);
        if (pvVar3 != (void*)0) {
            _memcpy(pvVar3, &local_790, 1880);
            *(int*)param_3 = *(int*)((long)pvVar3 + 40) - (int)param_1;
            *param_4 = 0;
            goto LAB_100b92377;
        }
        local_790.vorbis_deinit(param_5);
    }
    pvVar3 = (void*)0;
LAB_100b92377:
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
    return pvVar3;
}

// 0x100b923c0, 80 bytes, placed by neighbouring functions
// stb_vorbis_flush_pushdata
void _stb_vorbis_flush_pushdata(long param_1) {
    *(undefined4*)(param_1 + 1248) = 0;
    *(undefined4*)(param_1 + 1784) = 0;
    *(undefined8*)(param_1 + 1776) = 0;
    *(undefined4*)(param_1 + 1388) = 0;
    *(undefined1*)(param_1 + 1741) = 0;
    *(undefined8*)(param_1 + 1868) = 0;
}

// 0x100b92410, 864 bytes, placed by class name
// VorbisWorker::OnInterval(float, unsigned long long)
void VorbisWorker::OnInterval(float param_1, ulonglong param_2) {
    long lVar1;
    uint uVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    TextureAtlasReference* this_00;
    long lVar6;
    long lVar7;
    ulong uVar8;
    ulong uVar9;
    PacketT<jag::Array<unsigned char, eastl::allocator>>* pPVar10;
    undefined8 uVar11;
    VorbisWorkerPacket* extraout_RDX;
    VorbisWorkerPacket* extraout_RDX_00;
    stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>, eastl::allocator>>* this_01;
    WindowSavedPosition local_88;
    shared_ptr local_68;
    long local_58;
    ulong local_50;
    stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>, eastl::allocator>>* local_40;
    uint local_38;
    uint local_34;

    this_01 = (stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>, eastl::allocator>>*)(this + 520);
    cVar3 = eastl::stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>, eastl::allocator>>::empty(this_01);
    if (cVar3 == '\0') {
        if (*(long*)(this + 512) == 0) {
            uVar11 = jag::logger::default_logger();
            jag::logger::Logger::Log(uVar11, 1, 2,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                                     "workers/VorbisWorker.cpp",
                                     85, "DecoderMessageTypes::INITIALISE FAILED");
        } else {
            local_38 = 0;
            cVar3 = eastl::stack<jag::math::Rect<int>, eastl::vector<jag::math::Rect<int>, eastl::allocator>>::empty(
                this_01);
            if (cVar3 == '\0') {
                local_40 = this_01;
                do {
                    this_00 = (TextureAtlasReference*)this_01->top();
                    iVar4 = this_00->GetTextureAtlas();
                    iVar5 = this_00->size();
                    uVar11 = *(undefined8*)&((Task*)((long)this + 296))->field_216;
                    lVar6 = this_00->GetDataPtr();
                    lVar7 = this_00->size();
                    this = (VorbisWorker*)(Task*)this;
                    iVar4 = _stb_vorbis_decode_frame_pushdata(uVar11, lVar6 + lVar7, iVar4 - iVar5, &local_34,
                                                              &local_58, &local_38);
                    lVar6 = this_00->size();
                    this_00->SetPos(lVar6 + iVar4);
                    *(int*)&((Task*)((long)this + 296))->field_152 =
                        *(int*)&((Task*)((long)this + 296))->field_152 + iVar4;
                    uVar8 = this_00->size();
                    uVar9 = this_00->GetTextureAtlas();
                    if (uVar9 <= uVar8) {
                        local_40->pop();
                    }
                    uVar2 = local_38;
                    if ((long)(int)local_38 < 1) {
                        if ((0 < *(int*)&((Task*)((long)this + 296))->field_152) && (uVar9 <= uVar8)) {
                            local_88.PacketT(5);
                            jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 2048>::
                                MakeShared<VorbisWorkerPacket>(
                                    &local_68,
                                    (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>,
                                                    2048>*)&local_88,
                                    extraout_RDX_00);
                            local_88.~WindowSavedPosition();
                            pPVar10 =
                                (PacketT<jag::Array<unsigned char, eastl::allocator>>*)jag::shared_ptr<
                                    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::
                                operator->(
                                    (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_68);
                            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar10, 2);
                            pPVar10 =
                                (PacketT<jag::Array<unsigned char, eastl::allocator>>*)jag::shared_ptr<
                                    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::
                                operator->(
                                    (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_68);
                            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(
                                pPVar10, *(int*)&((Task*)((long)this + 296))->field_152);
                            Response(&local_68);
                            goto LAB_100b9247f;
                        }
                    } else {
                        local_88.PacketT((long)(int)local_34 * (long)(int)local_38 * 4 + 16);
                        jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 2048>::
                            MakeShared<VorbisWorkerPacket>(
                                &local_68,
                                (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>,
                                                2048>*)&local_88,
                                extraout_RDX);
                        local_88.~WindowSavedPosition();
                        pPVar10 =
                            (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                                jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                                    (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_68);
                        jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar10, 20);
                        pPVar10 =
                            (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                                jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                                    (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_68);
                        jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(
                            pPVar10, *(int*)&((Task*)((long)this + 296))->field_152);
                        pPVar10 =
                            (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                                jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                                    (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_68);
                        jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar10, uVar2);
                        pPVar10 =
                            (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                                jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                                    (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_68);
                        jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar10,
                                                                                                     (ulong)local_34);
                        pPVar10 =
                            (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                                jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                                    (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_68);
                        _stb_vorbis_get_info(&local_88, *(undefined8*)&((Task*)((long)this + 296))->field_216);
                        jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar10, local_88._0_4_);
                        iVar4 = 2;
                        do {
                            pPVar10 =
                                (PacketT<jag::Array<unsigned char, eastl::allocator>>*)jag::shared_ptr<
                                    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::
                                operator->(
                                    (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_68);
                            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar10, 0);
                            iVar4 = iVar4 + -1;
                        } while (iVar4 != 0);
                        local_50 = (ulong)uVar2;
                        uVar8 = 0;
                        do {
                            lVar6 = local_58;
                            if (0 < (int)local_34) {
                                lVar7 = 0;
                                do {
                                    lVar1 = *(long*)(lVar6 + lVar7 * 8);
                                    pPVar10 =
                                        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                                            jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::
                                            operator->((shared_ptr<jag::PacketT<
                                                            jag::Array<unsigned char, eastl::allocator>>>*)&local_68);
                                    pPVar10->pFloatPlatformEndian(*(float*)(lVar1 + uVar8 * 4));
                                    lVar7 = lVar7 + 1;
                                } while (lVar7 < (int)local_34);
                            }
                            this = (VorbisWorker*)(Task*)this;
                            uVar8 = uVar8 + 1;
                        } while (uVar8 != local_50);
                        Response(&local_68);
                    LAB_100b9247f:
                        *(undefined4*)&((Task*)((long)this + 296))->field_152 = 0;
                        local_68.~shared_ptr();
                    }
                    this_01 = local_40;
                    cVar3 = eastl::stack<jag::math::Rect<int>,
                                         eastl::vector<jag::math::Rect<int>, eastl::allocator>>::empty(local_40);
                } while (cVar3 == '\0');
            }
        }
    }
}
