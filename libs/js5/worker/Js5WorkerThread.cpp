// libs/js5/worker/Js5WorkerThread.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

#include "Js5WorkerThread.h"

// 0x1009f3890
void Js5WorkerThread::OnMessage(jag::PacketT<jag::Array<unsigned char>>& arg1) {
    unsigned short uVar2;
    unsigned int uVar3;
    int arg2;
    ModeGame* arg5;
    unsigned long arg2_00;
    ModeGame* modeGame;
    char* pcVar5;
    char* pcVar6;
    char* str3;
    fixed_string<char, _256>* str;
    uint8_t local_3d0[328];
    fixed_string<char, 256> local_288;
    fixed_string<char, 256> local_160;
    int local_15c;
    int local_158;
    int local_154;
    EncodeType* local_150;
    bool local_148;
    bool local_147;
    char local_145;
    int local_144;
    int local_140;
    Priority* local_138;
    Array<unsigned char> local_130;

    uint8_t bVar1 = arg1.g1();
    switch (bVar1 - 2) {
    case 0:
        local_160 = eastl::fixed_string<char, 256>();
        local_288 = eastl::fixed_string<char, 256>();
        new ((local_3d0 + 32)) eastl::fixed_string<char, 256>();
        arg1.gStringNoConversion<256, true>(local_160, false);
        arg1.gStringNoConversion<256, true>(local_288, false);
        str = (fixed_string<char, _256>*)(local_3d0 + 32);
        arg1.gStringNoConversion<256, true>(*str, false);
        uVar3 = (unsigned int)str;
        bVar1 = arg1.g1();
        arg5 = ((ModeGame*)(unsigned long)bVar1)->GetByID(uVar3);
        uVar2 = arg1.g2();
        new (local_3d0) jag::PacketT((unsigned long)uVar2);
        if (local_3d0->GetTextureAtlas() != 0) {
            arg2_00 = local_3d0->GetTextureAtlas();
            arg1.gArrayBuffer<jag::PacketT<jag::Array<unsigned char>>>(*local_3d0, arg2_00);
        }
        arg1.g2();
        pcVar5 = (char*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        pcVar6 = (char*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        modeGame = (ModeGame*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        Initialize((char*)this, pcVar5, pcVar6, modeGame, (PacketT<jag::Array<unsigned char> _>*)arg5, (int)local_3d0);
        SetInterval(5);
        goto LAB_1009f3ae2;
    default:
        (jag::logger::default_logger())
            ->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp",
                143, "Unhandled Js5Worker event: %d", (unsigned int)bVar1);
        break;
    case 5:
        local_160 = eastl::fixed_string<char, 256>();
        local_288 = eastl::fixed_string<char, 256>();
        new ((local_3d0 + 32)) eastl::fixed_string<char, 256>();
        arg1.gStringNoConversion<256, true>(local_160, false);
        arg1.gStringNoConversion<256, true>(local_288, false);
        arg1.gStringNoConversion<256, true>(*((local_3d0 + 32)), false);
        pcVar5 = (char*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        pcVar6 = (char*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        str3 = (char*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        ChangeURLs(pcVar5, pcVar6, str3);
    LAB_1009f3ae2:
        ((local_3d0 + 32))->~fixed_string();
    case 8:
        RequestMasterIndex();
        break;
    case 18:
        uVar3 = arg1.g1();
        arg2 = arg1.g4();
        local_160 = jag::Array<unsigned char, jag::SafeBucketAllocatorEASTL>(64);
        arg1.gArrayBuffer((unsigned char*)local_160.data(), 0, 64);
        local_288.Array<jag::SafeBucketAllocatorEASTL>(local_160);
        RequestIndex(uVar3 & 255, arg2, local_288);
        break;
    case 28:
        local_160 = Js5WorkerRequestMessage();
        local_160.Deserialize(arg1);
        RequestGroup(local_15c, local_158, local_154, local_150, local_148, (int)local_145, local_147, local_138,
                     local_144, local_140, local_130);
        break;
    case 38:
        RequestMasterIndexOverHTTP();
    }
}

// 0x1009f3d90
void Js5WorkerThread::Initialize(const char* str1, const char* str2, const char* str3, const jag::ModeGame* modeGame,
                                 jag::PacketT<jag::Array<unsigned char>>& arg5, int arg6) {
    uint32_t in_register_0000008c;
    uint32_t in_stack_00000008;

    (jag::logger::default_logger())
        ->Log(false, 8,
              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp",
              781, "Js5WorkerThread: Initialising...");
    *(PacketT<jag::Array<unsigned char> _>**)(str1 + 664) = arg5;
    (*((str1 + 672))) =
        (*((PacketT<jag::Array<unsigned char> _>*)(((uint64_t)in_register_0000008c << 32) | (uint32_t)arg6)));
    *(uint32_t*)(str1 + 704) = in_stack_00000008;
    ChangeURLs((Js5WorkerThread*)str1, str2, str3, (char*)modeGame);
    jag::BucketManager::CreateBucket(16256, 4, 64);
}

// 0x1009f3e30
void Js5WorkerThread::ChangeURLs(const char* str1, const char* str2, const char* str3) {
    ((this + 74))->assign(str1);
    ((this + 70))->assign(str2);
    ((this + 78))->assign(str3);
    *(uint8_t*)&this[82]._vptr = 0;
    UpdateConnection();
}

// 0x1009f3e90
void Js5WorkerThread::RequestMasterIndex() {
    Js5NetQueue* this_00;
    function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char>>&,
                  jag::PacketT<jag::Array<unsigned char>>&&, bool)>
        local_58[48];
    long local_28;

    bool cVar1 = IsJs5Connected();
    if (!cVar1) {
        *(uint8_t*)&this[90]._vptr = 1;
    } else {
        this_00 = (Js5NetQueue*)(*((this + 64))).operator->();
        std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char>>&,
                           jag::PacketT<jag::Array<unsigned char>>&&,
                           bool)>::function<Js5WorkerThread::RequestMasterIndex()::__6, void>(local_58, (__6*)this);
        cVar1 = this_00->RequestData(255, 255, 0, true, local_58);
        if (cVar1)
            goto LAB_1009f3f14;
    }
    MasterIndexNotDownloaded();
LAB_1009f3f14:
}

// 0x1009f3f50
void Js5WorkerThread::RequestMasterIndexOverHTTP() {
    Js5HTTPQueue* this_00;
    function<void(unsigned int, unsigned int, bool)> local_98[48];
    function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char>>&,
                  jag::PacketT<jag::Array<unsigned char>>&&, bool)>
        local_68[56];
    long local_30;

    bool cVar1 = IsJs5Connected();
    if (!cVar1) {
        *(uint8_t*)&this[90]._vptr = 1;
    } else {
        this_00 = (Js5HTTPQueue*)(*((this + 65))).operator->();
        std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char>>&,
                           jag::PacketT<jag::Array<unsigned char>>&&,
                           bool)>::function<Js5WorkerThread::RequestMasterIndexOverHTTP()::__7, void>(local_68,
                                                                                                      (__7*)this);
        std::function<void(unsigned int, unsigned int,
                           bool)>::function<Js5WorkerThread::RequestMasterIndexOverHTTP()::__8, void>(local_98,
                                                                                                      (__8*)this);
        cVar1 = this_00->RequestData(255, 255, 0, 0, 0, true, local_68, local_98);
        if (cVar1)
            goto LAB_1009f4005;
    }
    MasterIndexNotDownloadedOverHTTP();
LAB_1009f4005:
}

// 0x1009f4050
void Js5WorkerThread::RequestIndex(unsigned int arg1, int arg2, const jag::Array<unsigned char>& arg3) {
    Js5NetQueue* this_00;
    function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char>>&,
                  jag::PacketT<jag::Array<unsigned char>>&&, bool)>
        local_68[48];
    long local_38;

    long lVar3 = arg3.end();
    VBOMapper local_88(lVar3 + 5);
    local_88.p4<int>(arg2);
    uint8_t bVar1 = arg3.empty();
    local_88.p1<unsigned long>((unsigned int)(bVar1 ^ 1));
    auto arg1_00 = arg3.data();
    unsigned long arg3_00 = arg3.end();
    local_88.pArrayBuffer(arg1_00, 0, arg3_00);
    bool cVar2 = IsJs5Connected();
    if (!cVar2) {
        *(uint8_t*)&this[90]._vptr = 1;
        IndexNotDownloaded(arg1);
    } else {
        this_00 = (Js5NetQueue*)(*((this + 64))).operator->();
        std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char>>&,
                           jag::PacketT<jag::Array<unsigned char>>&&, bool)>::
            function<Js5WorkerThread::RequestIndex(unsigned int, int, jag::Array<unsigned char> const&)::__9, void>(
                local_68, (__9*)this);
        cVar2 = this_00->RequestData(255, arg1, 0, true, local_68, local_88, (Priority*)jag::Priority::HIGHEST);
        if (!cVar2) {
            IndexNotDownloaded(arg1);
        }
    }
}

// 0x1009f4310
void Js5WorkerThread::RequestGroup(int arg1, int arg2, int arg3, const jag::EncodeType* encodeType, bool arg5,
                                   jag::Js5DiskCacheFormat js5DiskCacheFormat, bool arg7, const jag::Priority* priority,
                                   int arg9, int arg10, const jag::Array<unsigned char>& arg11) {
    Js5HTTPQueue* this_00;
    Js5NetQueue* this_01;
    function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char>>&,
                  jag::PacketT<jag::Array<unsigned char>>&&, bool)>
        local_c8[48];
    function<void(unsigned int, unsigned int, bool)> local_98[48];
    function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char>>&,
                  jag::PacketT<jag::Array<unsigned char>>&&, bool)>
        local_68[48];
    long local_38;

    unsigned int local_d0 = arg2;
    unsigned int local_cc = arg1;
    long lVar3 = arg11.end();
    VBOMapper local_f0(lVar3 + 11);
    local_f0.p4<int>(arg3);
    local_f0.p1<unsigned long>(*(ID*)(encodeType + 8));
    local_f0.p1<bool>(arg5);
    local_f0.p4<int>(arg9);
    uint8_t bVar1 = arg11.empty();
    local_f0.p1<unsigned long>((unsigned int)(bVar1 ^ 1) + (unsigned int)((uint8_t)js5DiskCacheFormat == 2) * 2);
    auto arg1_00 = arg11.data();
    unsigned long arg3_00 = arg11.end();
    local_f0.pArrayBuffer(arg1_00, 0, arg3_00);
    bool cVar2 = IsJs5Connected();
    if (cVar2) {
        cVar2 = IsSocketConnected();
        if (cVar2) {
            if (arg5) {
                this_00 = (Js5HTTPQueue*)(*((this + 65))).operator->();
                new (local_68) std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char>>&,
                                                  jag::PacketT<jag::Array<unsigned char>>&&, bool)>(*((this + 104)));
                new (local_98) std::function<void(unsigned int, unsigned int, bool)>(*((this + 110)));
                cVar2 = this_00->RequestData(local_cc, local_d0, arg9, arg10, 2, arg7, local_68, local_98, local_f0,
                                             priority);
                if (!cVar2) {
                    GroupNotDownloaded(local_cc, local_d0, arg7);
                }
            } else {
                this_01 = (Js5NetQueue*)(*((this + 64))).operator->();
                new (local_c8) std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char>>&,
                                                  jag::PacketT<jag::Array<unsigned char>>&&, bool)>(*((this + 104)));
                cVar2 = this_01->RequestData(local_cc, local_d0, 2, arg7, local_c8, local_f0, priority);
                if (!cVar2) {
                    GroupNotDownloaded(local_cc, local_d0, arg7);
                }
            }
            goto LAB_1009f44f0;
        }
    }
    *(uint8_t*)&this[90]._vptr = 1;
    GroupNotDownloaded(local_cc, local_d0, arg7);
LAB_1009f44f0:
}

// 0x1009f4600
bool Js5WorkerThread::IsSocketConnected() const {
    bool bVar3 = false;
    if ((*((this + 62))) != nullptr) {
        bVar3 = ((CoordMapSquare*)(*((this + 62))).operator->())->GetX() == 2;
    }
    return bVar3;
}

// 0x1009f4650
void Js5WorkerThread::RequestServerDrop() {
    if (IsJs5Connected() != '\0') {
        ((Js5NetQueue*)(*((this + 64))).operator->())->RequestServerDrop();
    }
}

// 0x1009f46a0
void Js5WorkerThread::DropClientConnection() {
    shared_ptr* this_00 = (shared_ptr*)(this + 62);
    if (jag::shared_ptr::operator_cast_to_bool(this_00) != '\0') {
        ((ClientStream*)(*this_00).operator->())->Drop();
        this_00->reset();
        *(uint8_t*)&this[90]._vptr = 1;
        *(uint32_t*)((long)&this[98]._vptr + 4) = 0;
    }
}

// 0x1009f4720
void Js5WorkerThread::MasterIndexNotDownloaded() {
    shared_ptr<jag::PacketT<jag::Array<unsigned char>>> local_30;

    uint32_t local_1c = 3;
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 16192>::MakeShared<int>(&local_30);
    auto pPVar1 = local_30.operator->();
    pPVar1->p1<unsigned long>(10);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_30.operator->();
    pPVar1->p2<unsigned long>(0);
    Response(local_30);
}

// 0x1009f4890
void Js5WorkerThread::MasterIndexNotDownloadedOverHTTP() {
    shared_ptr<jag::PacketT<jag::Array<unsigned char>>> local_30;

    uint32_t local_1c = 3;
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 16192>::MakeShared<int>(&local_30);
    auto pPVar1 = local_30.operator->();
    pPVar1->p1<unsigned long>(40);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_30.operator->();
    pPVar1->p2<unsigned long>(0);
    Response(local_30);
}

// 0x1009f4a80
void Js5WorkerThread::MasterIndexDownloaded(jag::PacketT<jag::Array<unsigned char>>& arg1) {
    shared_ptr<jag::PacketT<jag::Array<unsigned char>>> local_30;

    arg1.GetTextureAtlas();
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 16192>::MakeShared<unsigned long>(&local_30);
    auto pPVar1 = local_30.operator->();
    pPVar1->p1<unsigned long>(10);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_30.operator->();
    unsigned short arg1_00 = arg1.GetTextureAtlas();
    pPVar1->p2<unsigned long>(arg1_00);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_30.operator->();
    pPVar1->pArrayBuffer(arg1);
    Response(local_30);
}

// 0x1009f4b30
void Js5WorkerThread::MasterIndexDownloadedOverHTTP(jag::PacketT<jag::Array<unsigned char>>& arg1) {
    shared_ptr<jag::PacketT<jag::Array<unsigned char>>> local_30;

    arg1.GetTextureAtlas();
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 16192>::MakeShared<unsigned long>(&local_30);
    auto pPVar1 = local_30.operator->();
    pPVar1->p1<unsigned long>(40);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_30.operator->();
    unsigned short arg1_00 = arg1.GetTextureAtlas();
    pPVar1->p2<unsigned long>(arg1_00);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_30.operator->();
    pPVar1->pArrayBuffer(arg1);
    Response(local_30);
}

// 0x1009f4be0
void Js5WorkerThread::IndexNotDownloaded(int arg1) {
    FailGetIndexResponse(arg1, 3);
}

// 0x1009f4c00
void Js5WorkerThread::IndexDownloaded(int arg1, jag::PacketT<jag::Array<unsigned char>>& arg2,
                                      jag::PacketT<jag::Array<unsigned char>>&& arg3) {
    int* piVar1;
    ID IVar2;
    char cVar3;
    unsigned int arg1_00;
    Logger* this_00;
    uint64_t uVar7;
    PacketT<jag::Array<unsigned char>>* pPVar8;
    long local_128[3];
    PacketT<jag::Array<unsigned char> _>* local_110;
    ReturnValue local_108;
    Whirlpool local_e0;

    arg3.SetPos(0);
    int iVar4 = arg3.g4();
    unsigned long arg2_00 = arg2.GetTextureAtlas();
    auto puVar6 = arg2.GetDataPtr();
    if (jag::CRC32(puVar6, arg2_00, 4294967295) == iVar4) {
        iVar4 = arg2.GetTextureAtlas();
        piVar1 = (int*)((long)&this[88]._vptr + 4);
        *piVar1 = *piVar1 + iVar4;
        cVar3 = arg3.g1();
        if (cVar3 == '\x01') {
            local_e0 = jag::Whirlpool();
            local_110 = arg2;
            puVar6 = (unsigned char*)arg2.GetDataPtr();
            local_e0.Update(puVar6, arg2_00);
            local_108 = jag::Array<unsigned char, jag::SafeBucketAllocatorEASTL>(64);
            puVar6 = (unsigned char*)local_108.data();
            local_e0.Final(puVar6);
            new (local_128) jag::Array<unsigned char, jag::SafeBucketAllocatorEASTL>(64);
            puVar6 = (unsigned char*)local_128->data();
            arg3.gArrayBuffer(puVar6, 0, 64);
            cVar3 = local_108 == *local_128;
            if (!cVar3) {
                FailGetIndexResponse((ID)arg1, 2);
                goto LAB_1009f4f33;
            }
            arg2 = local_110;
        }
        local_e0 = jag::Js5Compression::Decompress(arg2, 1);
        if (1 == 1) {
            this_00 = jag::logger::default_logger();
            IVar2 = (ID)arg1;
            local_108 = arg2.ToString();
            uVar7 = eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
            this_00->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp",
                309, "Error decompressing index: archive=%i, packet=%s", IVar2, uVar7);
            IndexNotDownloaded(IVar2);
        } else {
            local_128[0] = local_e0.GetTextureAtlas();
            local_128[0] = local_128[0] + 7;
            jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 16192>::MakeShared<unsigned long>(&local_108);
            IVar2 = (ID)arg1;
            pPVar8 = (PacketT<jag::Array<unsigned char>>*)local_108.operator->();
            pPVar8->p1<unsigned long>(20);
            pPVar8 = (PacketT<jag::Array<unsigned char>>*)local_108.operator->();
            pPVar8->p1<unsigned long>(IVar2);
            pPVar8 = (PacketT<jag::Array<unsigned char>>*)local_108.operator->();
            pPVar8->p1<unsigned long>(0);
            pPVar8 = (PacketT<jag::Array<unsigned char>>*)local_108.operator->();
            arg1_00 = local_e0.GetTextureAtlas();
            pPVar8->p4<int>(arg1_00);
            pPVar8 = (PacketT<jag::Array<unsigned char>>*)local_108.operator->();
            pPVar8->pArrayBuffer(local_e0);
            Response(local_108);
        }
    } else {
        FailGetIndexResponse((ID)arg1, 1);
    }
LAB_1009f4f33:
}

// 0x1009f4fd0
void Js5WorkerThread::FailGetIndexResponse(int arg1, Js5WorkerGetIndexResponseType js5WorkerGetIndexResponseType) {
    shared_ptr<jag::PacketT<jag::Array<unsigned char>>> local_40;

    uint32_t local_2c = 3;
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 16192>::MakeShared<int>(&local_40);
    auto pPVar1 = local_40.operator->();
    pPVar1->p1<unsigned long>(20);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_40.operator->();
    pPVar1->p1<unsigned long>(arg1);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_40.operator->();
    pPVar1->p1<unsigned long>(js5WorkerGetIndexResponseType);
    Response(local_40);
}

// 0x1009f5080
void Js5WorkerThread::GroupNotDownloaded(int arg1, int arg2, bool arg3) {
    FailGetGroupResponse(arg1, arg2, arg3, 6);
}

// 0x1009f50a0
void Js5WorkerThread::GroupDownloaded(int arg1, int arg2, jag::PacketT<jag::Array<unsigned char>>& arg3,
                                      jag::PacketT<jag::Array<unsigned char>>&& arg4, bool arg5) {
    ID IVar1;
    Logger* pLVar10;
    uint64_t uVar13;
    long lVar14;
    PacketT<jag::Array<unsigned char>>* pPVar16;
    uint8_t local_128[32];
    unsigned long local_108[3];
    int local_f0;
    Whirlpool local_e0;

    if (arg3.GetTextureAtlas() < 3) {
        pLVar10 = jag::logger::default_logger();
        pLVar10->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp", 384,
            "Data received from server for group too small");
        goto LAB_1009f5a47;
    }
    unsigned int uVar8 = 0;
    arg4.SetPos(0);
    unsigned int uVar4 = arg4.g4();
    uint8_t bVar2 = arg4.g1();
    uint8_t* puVar11 = (uint8_t*)((EncodeType*)(unsigned long)bVar2)->GetByID(uVar8);
    arg4.g1();
    int iVar5 = arg4.g4();
    int iVar6 = arg3.GetTextureAtlas();
    auto puVar12 = arg3.GetDataPtr();
    if (jag::CRC32(puVar12, (long)(iVar6 - 2), 4294967295) != iVar5) {
        FailGetGroupResponse((ID)arg1, (unsigned int)arg2, arg5, 1);
        goto LAB_1009f5a47;
    }
    iVar5 = arg3.GetTextureAtlas();
    this[89]._vptr = (Js5WorkerThread_vtbl*)((long)&(this[89]._vptr)->_dtor + (long)iVar5);
    uint8_t local_e1 = arg4.g1();
    if ((local_e1 & 1) != 0) {
        local_e0 = jag::Whirlpool();
        puVar12 = (unsigned char*)arg3.GetDataPtr();
        local_e0.Update(puVar12, (long)(iVar6 - 2));
        new (local_128) jag::Array<unsigned char, jag::SafeBucketAllocatorEASTL>(64);
        puVar12 = (unsigned char*)local_128->data();
        local_e0.Final(puVar12);
        new (local_108) jag::Array<unsigned char, jag::SafeBucketAllocatorEASTL>(64);
        puVar12 = (unsigned char*)local_108->data();
        arg4.gArrayBuffer(puVar12, 0, 64);
        if (*local_128 == *local_108 == '\0') {
            FailGetGroupResponse((ID)arg1, (unsigned int)arg2, arg5, 2);
            goto LAB_1009f5a47;
        }
    }
    if ((puVar11 == jag::EncodeType::PNG_MIPPED) && ((local_e1 & 2) != 0)) {
        jag::LogAssert(
            "!(extraData_encodeType == jag::EncodeType::PNG_MIPPED && extraData_JS5DiskCacheFormat == "
            "jag::Js5DiskCacheFormat::SERVER_COMPRESSED)",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp", 428,
            "PNG_MIPPED Cannot suppport SERVER_COMPRESSION unless DecodePNG is moved to the disk thread");
    }
    if (arg5) {
        local_f0 = 1;
        local_e0 = jag::Js5Compression::Decompress(arg3, local_f0);
        if (local_f0 == 1) {
            pLVar10 = jag::logger::default_logger();
            *local_128 = arg3.ToString();
            uVar13 = eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
            uVar4 = (unsigned int)arg2;
            IVar1 = (ID)arg1;
            pLVar10->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp",
                501, "Error decompressing packet: archive=%i, group=%i, packet=%s", (ID)arg1, (unsigned int)arg2,
                uVar13);
            FailGetGroupResponse(IVar1, uVar4, true, 5);
        } else if (uVar4 == 1) {
            if ((local_e1 & 2) == 0) {
                arg3 = local_e0;
            }
            if (puVar11 == jag::EncodeType::PNG_MIPPED) {
                jag::Js5Compression::DecodePNG(local_e0);
                arg3 = local_e0;
            }
            lVar14 = arg3.GetTextureAtlas();
            local_108[0] = local_e0.GetTextureAtlas() + lVar14 + 16;
            jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 16192>::MakeShared<unsigned long>(
                (unsigned long*)local_128);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_128).operator->();
            pPVar16->p1<unsigned long>(30);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_128).operator->();
            pPVar16->p1<unsigned long>((ID)arg1);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_128).operator->();
            pPVar16->p4<int>((unsigned int)arg2);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_128).operator->();
            pPVar16->p1<bool>('\x01');
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_128).operator->();
            pPVar16->p1<unsigned long>(0);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_128).operator->();
            uVar4 = arg3.GetTextureAtlas();
            pPVar16->p4<int>(uVar4);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_128).operator->();
            pPVar16->pArrayBuffer(arg3);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_128).operator->();
            uVar4 = local_e0.GetTextureAtlas();
            pPVar16->p4<int>(uVar4);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_128).operator->();
            pPVar16->pArrayBuffer(local_e0);
            Response(*local_128);
        } else {
            new (local_128) jag::PacketT();
            uVar8 = local_e0.GetTextureAtlas();
            jag::Js5DiskFileFormat::DechunkGroupFiles(*local_128, local_e0, 0, uVar8, uVar4);
            if ((local_e1 & 2) == 0) {
                arg3 = *local_128;
            }
            arg3.GetTextureAtlas();
            local_128->GetTextureAtlas();
            jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 16192>::MakeShared<unsigned long>(local_108);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            pPVar16->p1<unsigned long>(30);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            pPVar16->p1<unsigned long>((ID)arg1);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            pPVar16->p4<int>((unsigned int)arg2);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            pPVar16->p1<bool>('\x01');
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            pPVar16->p1<unsigned long>(0);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            uVar4 = arg3.GetTextureAtlas();
            pPVar16->p4<int>(uVar4);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            pPVar16->pArrayBuffer(arg3);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            uVar4 = local_128->GetTextureAtlas();
            pPVar16->p4<int>(uVar4);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            pPVar16->pArrayBuffer(*local_128);
            Response(*local_108);
        LAB_1009f5a23:
        }
    } else {
        if ((local_e1 & 2) != 0) {
            lVar14 = arg3.GetTextureAtlas();
            local_128._0_8_ = lVar14 + 12;
            jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 16192>::MakeShared<unsigned long>(
                (unsigned long*)&local_e0);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)local_e0.operator->();
            pPVar16->p1<unsigned long>(30);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)local_e0.operator->();
            pPVar16->p1<unsigned long>((ID)arg1);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)local_e0.operator->();
            pPVar16->p4<int>((unsigned int)arg2);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)local_e0.operator->();
            pPVar16->p1<bool>('\0');
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)local_e0.operator->();
            pPVar16->p1<unsigned long>(0);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)local_e0.operator->();
            uVar4 = arg3.GetTextureAtlas();
            pPVar16->p4<int>(uVar4);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)local_e0.operator->();
            pPVar16->pArrayBuffer(arg3);
            Response(local_e0);
            goto LAB_1009f5a47;
        }
        local_f0 = 1;
        local_e0 = jag::Js5Compression::Decompress(arg3, local_f0);
        if (local_f0 != 1) {
            new (local_128) jag::PacketT();
            if (1 < (int)uVar4) {
                uVar8 = local_e0.GetTextureAtlas();
                jag::Js5DiskFileFormat::DechunkGroupFiles(*local_128, local_e0, 0, uVar8, uVar4);
                local_e0 = *local_128;
            }
            if (puVar11 == jag::EncodeType::PNG_MIPPED) {
                jag::Js5Compression::DecodePNG(local_e0);
            }
            local_e0.GetTextureAtlas();
            jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 16192>::MakeShared<unsigned long>(local_108);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            pPVar16->p1<unsigned long>(30);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            pPVar16->p1<unsigned long>((ID)arg1);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            pPVar16->p4<int>((unsigned int)arg2);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            pPVar16->p1<bool>('\0');
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            pPVar16->p1<unsigned long>(0);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            uVar4 = local_e0.GetTextureAtlas();
            pPVar16->p4<int>(uVar4);
            pPVar16 = (PacketT<jag::Array<unsigned char>>*)(*local_108).operator->();
            pPVar16->pArrayBuffer(local_e0);
            Response(*local_108);
            goto LAB_1009f5a23;
        }
        pLVar10 = jag::logger::default_logger();
        *local_128 = arg3.ToString();
        uVar13 = eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        uVar4 = (unsigned int)arg2;
        IVar1 = (ID)arg1;
        pLVar10->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp", 456,
            "Error decompressing packet: archive=%i, group=%i, packet=%s", (ID)arg1, (unsigned int)arg2, uVar13);
        FailGetGroupResponse(IVar1, uVar4, false, 5);
    }
LAB_1009f5a47:
}

// 0x1009f5b30
void Js5WorkerThread::FailGetGroupResponse(int arg1, int arg2, bool arg3,
                                           Js5WorkerGetGroupResponseType js5WorkerGetGroupResponseType) {
    shared_ptr<jag::PacketT<jag::Array<unsigned char>>> local_40;

    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 16192>::MakeShared<int>(&local_40);
    auto pPVar1 = local_40.operator->();
    pPVar1->p1<unsigned long>(30);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_40.operator->();
    pPVar1->p1<unsigned long>(arg1);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_40.operator->();
    pPVar1->p4<int>(arg2);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_40.operator->();
    pPVar1->p1<bool>(arg3);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_40.operator->();
    pPVar1->p1<unsigned long>(js5WorkerGetGroupResponseType);
    Response(local_40);
}

// 0x1009f5c10
void Js5WorkerThread::OnInterval(float arg1, unsigned long long arg2) {
    int iVar3;
    CoordMapSquare* pCVar5;

    auto pJVar4 = jag::SystemTimer::ConvertNStoSecondsApprox(arg2);
    if (this[92]._vptr != pJVar4) {
        *(uint32_t*)&this[93]._vptr = *(uint32_t*)((long)&this[93]._vptr + 4);
        *(uint32_t*)((long)&this[93]._vptr + 4) = 0;
        this[92]._vptr = pJVar4;
        if (this[94]._vptr < (Js5WorkerThread_vtbl*)((long)&pJVar4[-1].OnComplete + 6U)) {
            this[95]._vptr = pJVar4;
            this[96]._vptr = nullptr;
            this[97]._vptr = nullptr;
            this[94]._vptr = pJVar4;
        }
    }
    if (*(char*)((long)&this[90]._vptr + 1) != '\0') {
        if ((*((this + 62))) != nullptr) {
            pCVar5 = (CoordMapSquare*)(*((this + 62))).operator->();
            iVar3 = pCVar5->GetX();
            if (iVar3 == 0) {
                RotateConnectMethods();
                UpdatedFailedConnectionAttemptCount(*(int*)&this[98]._vptr + 1, -1);
            }
        }
    }
    shared_ptr<jag::oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread =
        (shared_ptr<jag::oldscape::midi2::MidiPlayerMainThread>*)(this + 62);
    if (*midiPlayerMainThread != nullptr) {
        pCVar5 = (CoordMapSquare*)(*midiPlayerMainThread).operator->();
        iVar3 = pCVar5->GetX();
        if (iVar3 == 2) {
            ServiceConnected();
            goto LAB_1009f5d21;
        }
    }
    if (!(*midiPlayerMainThread == nullptr)) {
        pCVar5 = (CoordMapSquare*)(*midiPlayerMainThread).operator->();
        iVar3 = pCVar5->GetX();
        if (iVar3 != 0)
            goto LAB_1009f5d21;
    }
    ServiceReconnect();
LAB_1009f5d21:
    ((Js5HTTPQueue*)(*((this + 65))).operator->())->Service();
    int* piVar1 = (int*)((long)&this[93]._vptr + 4);
    *piVar1 = *piVar1 + 1;
    unsigned long long uVar6 = jag::SystemTimer::GetTimeNS<std::chrono::steady_clock>();
    this[97]._vptr = (Js5WorkerThread_vtbl*)((long)this[97]._vptr + (uVar6 - (long)pJVar4));
}

// 0x1009f5db0
void Js5WorkerThread::RotateConnectMethods() {
    *(uint8_t*)&this[82]._vptr = *(uint8_t*)&this[82]._vptr ^ 1;
    UpdateConnection();
}

// 0x1009f5dd0
void Js5WorkerThread::UpdatedFailedConnectionAttemptCount(int arg1, int arg2) {
    shared_ptr<jag::PacketT<jag::Array<unsigned char>>> local_40;

    *(int*)&this[98]._vptr = arg1;
    uint32_t local_2c = 9;
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 16192>::MakeShared<int>(&local_40);
    auto pPVar1 = local_40.operator->();
    pPVar1->p1<unsigned long>(6);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_40.operator->();
    pPVar1->p4<int>(arg1);
    pPVar1 = (PacketT<jag::Array<unsigned char>>*)local_40.operator->();
    pPVar1->p4<int>(arg2);
    Response(local_40);
}

// 0x1009f5e80
void Js5WorkerThread::ServiceConnected() {
    shared_ptr<jag::ClientStream>* psVar1;
    PacketT<jag::Array<unsigned char>>* pPVar2;
    uint8_t bVar3;
    uint64_t in_RAX;
    CoordMapSquare* pCVar5;
    ClientStream* pCVar7;
    unsigned long uVar9;
    Js5NetQueue* pJVar10;

    uint32_t uVar11 = (uint32_t)((unsigned long)in_RAX >> 32);
    int iVar4 = *(int*)((long)&this[98]._vptr + 4);
    if (iVar4 == 2) {
        psVar1 = (shared_ptr<jag::ClientStream>*)(this + 62);
        pCVar5 = (CoordMapSquare*)(*psVar1).operator->();
        iVar4 = pCVar5->GetX();
        if (iVar4 == 2) {
            iVar4 = *(int*)&this[88]._vptr;
            uVar9 = (long)iVar4 * 4;
            pCVar7 = (ClientStream*)(*psVar1).operator->();
            if (pCVar7->GetAvailable() < uVar9) {
                return;
            }
            if (iVar4 != 0) {
                pPVar2 = (PacketT<jag::Array<unsigned char>>*)(this + 99);
                iVar4 = 0;
                pPVar2->SetPos(0);
                pCVar7 = (ClientStream*)(*psVar1).operator->();
                pCVar7->Read<jag::PacketT<jag::Array<unsigned char>>>(*pPVar2, uVar9);
                pPVar2->SetPos(0);
                if (0 < *(int*)&this[88]._vptr) {
                    do {
                        pPVar2->g4();
                        iVar4 = iVar4 + 1;
                    } while (iVar4 < *(int*)&this[88]._vptr);
                }
            }
            pJVar10 = (Js5NetQueue*)(*((this + 64))).operator->();
            pJVar10->ProvideConnection(*psVar1, false);
            *(uint32_t*)((long)&this[98]._vptr + 4) = 3;
            *(uint16_t*)&this[90]._vptr = 0;
            UpdatedFailedConnectionAttemptCount(0, 0);
            return;
        }
    } else {
        if (iVar4 != 1) {
            if (iVar4 != 0) {
                pJVar10 = (Js5NetQueue*)(*((this + 64))).operator->();
                bVar3 = pJVar10->Service();
                *(uint8_t*)&this[90]._vptr = bVar3 ^ 1;
                return;
            }
            psVar1 = (shared_ptr<jag::ClientStream>*)(this + 62);
            pCVar5 = (CoordMapSquare*)(*psVar1).operator->();
            iVar4 = pCVar5->GetX();
            if (iVar4 != 2) {
                return;
            }
            if (((this + 84))->GetTextureAtlas() != 0) {
                pCVar7 = (ClientStream*)(*psVar1).operator->();
                pCVar7->Write(*((this + 84)));
                pCVar7 = (ClientStream*)(*psVar1).operator->();
                pCVar7->Flush();
            }
            *(uint32_t*)((long)&this[98]._vptr + 4) = 1;
            return;
        }
        psVar1 = (shared_ptr<jag::ClientStream>*)(this + 62);
        pCVar5 = (CoordMapSquare*)(*psVar1).operator->();
        iVar4 = pCVar5->GetX();
        if (iVar4 == 2) {
            pPVar2 = (PacketT<jag::Array<unsigned char>>*)(this + 99);
            pPVar2->SetPos(0);
            pCVar7 = (ClientStream*)(*psVar1).operator->();
            uVar9 = pCVar7->Read<jag::PacketT<jag::Array<unsigned char>>>(*pPVar2, 1);
            if (uVar9 != 1) {
                return;
            }
            pPVar2->SetPos(0);
            bVar3 = pPVar2->g1();
            if (bVar3 == 0) {
                *(uint32_t*)((long)&this[98]._vptr + 4) = 2;
                return;
            }
            (jag::logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/"
                      "Js5WorkerThread.cpp",
                      670, "Js5WorkerThread: Server response not 0: %d",
                      (((uint64_t)uVar11 << 32) | (uint32_t)((unsigned int)bVar3)));
            pCVar7 = (ClientStream*)(*psVar1).operator->();
            pCVar7->Close();
            psVar1->reset();
            *(uint32_t*)((long)&this[98]._vptr + 4) = 0;
            *(uint8_t*)&this[90]._vptr = 1;
            UpdatedFailedConnectionAttemptCount(*(int*)&this[98]._vptr + 1, (unsigned int)bVar3);
            return;
        }
    }
    *(uint32_t*)((long)&this[98]._vptr + 4) = 0;
    *(uint8_t*)&this[90]._vptr = 1;
}

// 0x1009f6130
void Js5WorkerThread::ServiceReconnect() {
    char* str2;

    auto pJVar4 = jag::SystemTimer::GetTimeMS<std::chrono::steady_clock>();
    if ((*(char*)&this[90]._vptr == '\0') || (&pJVar4[-18]._deleting_dtor <= this[91]._vptr)) {
        if ((*((this + 62))) != nullptr) {
            ((AutoSingleton<jag::ShaderThreadPoolSingleton>*)(*((this + 64))).operator->())->~AutoSingleton();
            ((this + 62))->reset();
            *(uint32_t*)((long)&this[98]._vptr + 4) = 0;
            return;
        }
        return;
    }
    auto pLVar5 = jag::logger::default_logger();
    uint64_t uVar6 = eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
    pLVar5->Log(false, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp",
                746, "Js5Worker: Initiating connection to JS5 server at %s...", uVar6);
    char* local_30 = (char*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
    auto local_50 = jag::make_shared<jag::ClientStream, char const*, int const&, int const&, int const&, int const&>(
        local_30, *(&jag::Js5Constants::CIRCULAR_RCV_BUFFER_SIZE), *(&jag::Js5Constants::CIRCULAR_SND_BUFFER_SIZE),
        *(&jag::Js5Constants::SOCKET_RCV_BUFFER_SIZE), *(&jag::Js5Constants::SOCKET_SND_BUFFER_SIZE));
    shared_ptr<jag::ClientStream>* this_00 = (shared_ptr<jag::ClientStream>*)(this + 62);
    *this_00 = local_50;
    this[91]._vptr = pJVar4;
    *(uint16_t*)&this[90]._vptr = 256;
    *(uint32_t*)((long)&this[98]._vptr + 4) = 0;
    CoordMapSquare* pCVar7 = (CoordMapSquare*)(*this_00).operator->();
    int iVar3 = pCVar7->GetX();
    if (iVar3 == 2) {
        pLVar5 = jag::logger::default_logger();
        str2 = "Js5Worker: Connected!";
        iVar3 = 758;
    } else {
        pCVar7 = (CoordMapSquare*)(*this_00).operator->();
        iVar3 = pCVar7->GetX();
        if (iVar3 != 0)
            goto LAB_1009f62d3;
        pLVar5 = jag::logger::default_logger();
        str2 = "Js5Worker: Closed immediately!";
        iVar3 = 762;
    }
    pLVar5->Log(false, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp",
                iVar3, str2);
LAB_1009f62d3:
    ClientStream* pCVar8 = (ClientStream*)(*this_00).operator->();
    auto puVar9 = pCVar8->GetError();
    local_30 = (char*)(((uint64_t)local_30._4_4_ << 32) | (uint32_t)(*puVar9));
    if (local_30.IsValid() != '\0') {
        pLVar5 = jag::logger::default_logger();
        local_50 = local_30.GetErrorString();
        uVar6 = eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        pLVar5->Log(
            false, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp", 767,
            "Connection error: %s", uVar6);
        pCVar8 = (ClientStream*)(*this_00).operator->();
        pCVar8->Close();
    }
}

// 0x1009f6490
void Js5WorkerThread::UpdateConnection() {
    (*((this + 66))) = ((eastl::string*)(this + (unsigned long)*(uint8_t*)&this[82]._vptr * 4 + 74));
    auto local_20 = std::make_unique<jag::Js5NetQueue>();
    (*((this + 64))) = local_20;
    local_20 = std::make_unique<jag::Js5HTTPQueue, eastl::string&>(*((this + 70)));
    (*((this + 65))) = local_20;
    *(uint8_t*)&this[90]._vptr = 1;
    *(uint32_t*)((long)&this[98]._vptr + 4) = 0;
}
