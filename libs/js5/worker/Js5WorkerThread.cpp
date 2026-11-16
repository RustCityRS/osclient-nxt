// libs/js5/worker/Js5WorkerThread.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

#include "Js5WorkerThread.h"

// 0x1009f3890, 1280 bytes, placed by class name
// Js5WorkerThread::OnMessage(jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&)
void Js5WorkerThread::OnMessage(PacketT* param_1) {
    char cVar1;
    byte bVar2;
    ushort uVar3;
    uint uVar4;
    int iVar5;
    ModeGame* pMVar6;
    long lVar7;
    ulong uVar8;
    undefined8 uVar9;
    char* pcVar10;
    char* pcVar11;
    char* pcVar12;
    uchar* puVar13;
    undefined1 local_3d0[328];
    fixed_string<char, 256, true, eastl::allocator> local_288[296];
    fixed_string<char, 256, true, eastl::allocator> local_160[4];
    undefined4 local_15c;
    undefined4 local_158;
    undefined4 local_154;
    undefined8 local_150;
    undefined1 local_148;
    undefined1 local_147;
    char local_145;
    undefined4 local_144;
    undefined4 local_140;
    undefined8 local_138;
    undefined1 local_130[248];
    long local_38;

    local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
    cVar1 = param_1->g1();
    switch (cVar1 + -2) {
    case '\0':
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160);
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_288);
        new ((local_3d0 + 32)) eastl::fixed_string<char, 256, true, eastl::allocator>();
        jag::PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::gStringNoConversion<256,
                                                                                                               true>(
            (PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)param_1,
            (fixed_string*)local_160, false);
        jag::PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::gStringNoConversion<256,
                                                                                                               true>(
            (PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)param_1,
            (fixed_string*)local_288, false);
        jag::PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::gStringNoConversion<256,
                                                                                                               true>(
            (PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)param_1,
            (fixed_string*)(local_3d0 + 32), false);
        bVar2 = param_1->g1();
        pMVar6 = (ModeGame*)jag::ModeGame::GetByID((uint)bVar2);
        uVar3 = param_1->g2();
        new (local_3d0) jag::PacketT<jag::Array<unsigned char, eastl::allocator>>((ulong)uVar3);
        lVar7 = local_3d0->GetTextureAtlas();
        if (lVar7 != 0) {
            uVar8 = local_3d0->GetTextureAtlas();
            jag::PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::gArrayBuffer<
                jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>(
                (PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)param_1,
                (PacketT*)local_3d0, uVar8);
        }
        uVar3 = param_1->g2();
        pcVar10 = (char*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        pcVar11 = (char*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        pcVar12 = (char*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        Initialize(this, pcVar10, pcVar11, pcVar12, pMVar6, (PacketT*)local_3d0, (uint)uVar3);
        SetInterval(5);
        local_3d0->~VBOMapper();
        goto LAB_1009f3ae2;
    default:
        uVar9 = jag::logger::default_logger();
        jag::logger::Logger::Log(
            uVar9, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp", 143,
            "Unhandled Js5Worker event: %d", cVar1);
        break;
    case '\x05':
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160);
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_288);
        new ((local_3d0 + 32)) eastl::fixed_string<char, 256, true, eastl::allocator>();
        jag::PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::gStringNoConversion<256,
                                                                                                               true>(
            (PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)param_1,
            (fixed_string*)local_160, false);
        jag::PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::gStringNoConversion<256,
                                                                                                               true>(
            (PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)param_1,
            (fixed_string*)local_288, false);
        jag::PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::gStringNoConversion<256,
                                                                                                               true>(
            (PacketReaderMixin<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)param_1,
            (fixed_string*)(local_3d0 + 32), false);
        pcVar10 = (char*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        pcVar11 = (char*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        pcVar12 = (char*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        ChangeURLs(this, pcVar10, pcVar11, pcVar12);
    LAB_1009f3ae2:
        /* WARNING: Subroutine does not return */
        ((local_3d0 + 32))->~fixed_string();
    case '\b':
        RequestMasterIndex(this);
        break;
    case '\x12':
        uVar4 = param_1->g1();
        iVar5 = param_1->g4();
        new (local_160) jag::Array<unsigned char, jag::SafeBucketAllocatorEASTL>(64);
        puVar13 = (uchar*)local_160->data();
        param_1->gArrayBuffer(puVar13, 0, 64);
        jag::Array<unsigned char, eastl::allocator>::Array<jag::SafeBucketAllocatorEASTL>(
            (Array<unsigned char, eastl::allocator>*)local_288, (Array*)local_160);
        RequestIndex(this, uVar4 & 255, iVar5, (Array*)local_288);
        local_288->~Array();
        local_160->~Array();
        break;
    case '\x1c':
        new (local_160) Js5WorkerRequestMessage();
        local_160->Deserialize(param_1);
        RequestGroup(this, local_15c, local_158, local_154, local_150, local_148, (int)local_145, local_147, local_138,
                     local_144, local_140, local_130);
        local_160->~Js5WorkerRequestMessage();
        break;
    case '&':
        RequestMasterIndexOverHTTP(this);
    }
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

// 0x1009f3d90, 160 bytes, placed by class name
// Js5WorkerThread::Initialize(char const*, char const*, char const*, jag::ModeGame const*, jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&, int)
void Js5WorkerThread::Initialize(char* param_1, char* param_2, char* param_3, ModeGame* param_4, PacketT* param_5,
                                 int param_6) {
    undefined8 uVar1;

    uVar1 = jag::logger::default_logger();
    jag::logger::Logger::Log(
        uVar1, 0, 8,
        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp", 781,
        "Js5WorkerThread: Initialising...");
    *(ModeGame**)(this + 664) = param_4;
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::operator=(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)(this + 672), param_5);
    *(int*)(this + 704) = param_6;
    ChangeURLs(this, param_1, param_2, param_3);
    jag::BucketManager::CreateBucket(16256, 4, 64);
}

// 0x1009f3e30, 96 bytes, placed by class name
// Js5WorkerThread::ChangeURLs(char const*, char const*, char const*)
void Js5WorkerThread::ChangeURLs(char* param_1, char* param_2, char* param_3) {
    ((this + 592))->assign(param_1);
    ((this + 560))->assign(param_2);
    ((this + 624))->assign(param_3);
    this[656] = (Js5WorkerThread)0;
    UpdateConnection(this);
}

// 0x1009f3e90, 192 bytes, placed by class name
// Js5WorkerThread::RequestMasterIndex()
void Js5WorkerThread::RequestMasterIndex() {
    char cVar1;
    Js5NetQueue* pJVar2;
    function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                  jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>
        local_58[48];
    long local_28;

    local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
    cVar1 = IsJs5Connected(this);
    if (cVar1 == '\0') {
        this[720] = (Js5WorkerThread)1;
    } else {
        pJVar2 = (Js5NetQueue*)std::unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>::operator->(
            (unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>*)(this + 512));
        std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                           jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&,
                           bool)>::function<Js5WorkerThread::RequestMasterIndex()::__6, void>(local_58, this);
        cVar1 = pJVar2->RequestData(255, 255, 0, 1, local_58);
        std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                           jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>::~function(local_58);
        if (cVar1 != '\0')
            goto LAB_1009f3f14;
    }
    MasterIndexNotDownloaded(this);
LAB_1009f3f14:
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

// 0x1009f3f50, 256 bytes, placed by class name
// Js5WorkerThread::RequestMasterIndexOverHTTP()
void Js5WorkerThread::RequestMasterIndexOverHTTP() {
    char cVar1;
    Js5HTTPQueue* pJVar2;
    function<void(unsigned int, unsigned int, bool)> local_98[48];
    function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                  jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>
        local_68[56];
    long local_30;

    local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
    cVar1 = IsJs5Connected(this);
    if (cVar1 == '\0') {
        this[720] = (Js5WorkerThread)1;
    } else {
        pJVar2 = (Js5HTTPQueue*)std::unique_ptr<jag::Js5HTTPQueue, std::default_delete<jag::Js5HTTPQueue>>::operator->(
            (unique_ptr<jag::Js5HTTPQueue, std::default_delete<jag::Js5HTTPQueue>>*)(this + 520));
        std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                           jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&,
                           bool)>::function<Js5WorkerThread::RequestMasterIndexOverHTTP()::__7, void>(local_68, this);
        std::function<void(unsigned int, unsigned int,
                           bool)>::function<Js5WorkerThread::RequestMasterIndexOverHTTP()::__8, void>(local_98, this);
        cVar1 = pJVar2->RequestData(255, 255, 0, 0, 0, 1, local_68, local_98);
        std::function<void(unsigned int, unsigned int, bool)>::~function(local_98);
        std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                           jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>::~function(local_68);
        if (cVar1 != '\0')
            goto LAB_1009f4005;
    }
    MasterIndexNotDownloadedOverHTTP(this);
LAB_1009f4005:
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

// 0x1009f4050, 368 bytes, placed by class name
// Js5WorkerThread::RequestIndex(unsigned int, int, jag::Array<unsigned char, eastl::allocator> const&)
void Js5WorkerThread::RequestIndex(uint param_1, int param_2, Array* param_3) {
    byte bVar1;
    char cVar2;
    long lVar3;
    uchar* puVar4;
    ulong uVar5;
    Js5NetQueue* pJVar6;
    VBOMapper local_88;
    function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                  jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>
        local_68[48];
    long local_38;

    local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
    lVar3 = param_3->end();
    new (&local_88) jag::PacketT<jag::Array<unsigned char, eastl::allocator>>(lVar3 + 5);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)&local_88, param_2);
    bVar1 = param_3->empty();
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)&local_88, (ulong)(bVar1 ^ 1));
    puVar4 = (uchar*)param_3->data();
    uVar5 = param_3->end();
    local_88.pArrayBuffer(puVar4, 0, uVar5);
    cVar2 = IsJs5Connected(this);
    if (cVar2 == '\0') {
        this[720] = (Js5WorkerThread)1;
        IndexNotDownloaded(this, param_1);
    } else {
        pJVar6 = (Js5NetQueue*)std::unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>::operator->(
            (unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>*)(this + 512));
        std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                           jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>::
            function<Js5WorkerThread::RequestIndex(unsigned int, int,
                                                   jag::Array<unsigned char, eastl::allocator> const&)::__9,
                     void>(local_68, this);
        cVar2 = pJVar6->RequestData(255, param_1, 0, 1, local_68, &local_88, jag::Priority::HIGHEST);
        std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                           jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>::~function(local_68);
        if (cVar2 == '\0') {
            IndexNotDownloaded(this, param_1);
        }
    }
    local_88.~VBOMapper();
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

// 0x1009f4310, 752 bytes, placed by class name
// Js5WorkerThread::RequestGroup(int, int, int, jag::EncodeType const*, bool, jag::Js5DiskCacheFormat, bool, jag::Priority const*, int, int, jag::Array<unsigned char, eastl::allocator> const&)
void Js5WorkerThread::RequestGroup(
    int param_1, undefined4 param_2, int param_3, long param_4, char param_5, char param_7, byte param_8,
    undefined8 param_9, int param_10, undefined4 param_11,
    vector<jag::oldscape::dash3d::EntityHighlight*, jag::BucketAllocatorEASTL>* param_12) {
    byte bVar1;
    char cVar2;
    long lVar3;
    uchar* puVar4;
    ulong uVar5;
    Js5HTTPQueue* pJVar6;
    Js5NetQueue* pJVar7;
    int iVar8;
    undefined8 in_stack_fffffffffffffee8;
    undefined4 uVar9;
    VBOMapper local_f0;
    undefined4 local_d0;
    int local_cc;
    function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                  jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>
        local_c8[48];
    function<void(unsigned int, unsigned int, bool)> local_98[48];
    function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                  jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>
        local_68[48];
    long local_38;

    uVar9 = (undefined4)((ulong)in_stack_fffffffffffffee8 >> 32);
    local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
    local_d0 = param_2;
    local_cc = param_1;
    lVar3 = eastl::vector<jag::oldscape::dash3d::EntityHighlight*, jag::BucketAllocatorEASTL>::end(param_12);
    new (&local_f0) jag::PacketT<jag::Array<unsigned char, eastl::allocator>>(lVar3 + 11);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)&local_f0, param_3);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)&local_f0, (ulong) * (uint*)(param_4 + 8));
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<bool>(SUB81(&local_f0, 0));
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)&local_f0, param_10);
    bVar1 = param_12->empty();
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
        (PacketT<jag::Array<unsigned char, eastl::allocator>>*)&local_f0,
        (ulong)((uint)(bVar1 ^ 1) + (uint)(param_7 == '\x02') * 2));
    puVar4 = (uchar*)param_12->data();
    uVar5 = eastl::vector<jag::oldscape::dash3d::EntityHighlight*, jag::BucketAllocatorEASTL>::end(param_12);
    local_f0.pArrayBuffer(puVar4, 0, uVar5);
    cVar2 = IsJs5Connected(this);
    iVar8 = (int)this;
    if (cVar2 != '\0') {
        cVar2 = IsSocketConnected(this);
        if (cVar2 != '\0') {
            if (param_5 == '\0') {
                pJVar7 =
                    (Js5NetQueue*)std::unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>::operator->(
                        (unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>*)(this + 512));
                std::function<void(
                    unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>::function(local_c8,
                                                                                                  (function*)(this +
                                                                                                              832));
                cVar2 = pJVar7->RequestData(local_cc, local_d0, 2, param_8, local_c8, &local_f0, param_9);
                std::function<void(
                    unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>::~function(local_c8);
                if (cVar2 == '\0') {
                    GroupNotDownloaded(iVar8, local_cc, SUB41(local_d0, 0));
                }
            } else {
                pJVar6 = (Js5HTTPQueue*)
                             std::unique_ptr<jag::Js5HTTPQueue, std::default_delete<jag::Js5HTTPQueue>>::operator->(
                                 (unique_ptr<jag::Js5HTTPQueue, std::default_delete<jag::Js5HTTPQueue>>*)(this + 520));
                std::function<void(
                    unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>::function(local_68,
                                                                                                  (function*)(this +
                                                                                                              832));
                std::function<void(unsigned int, unsigned int, bool)>::function(local_98, (function*)(this + 880));
                cVar2 = pJVar6->RequestData(local_cc, local_d0, param_10, param_11, 2, CONCAT44(uVar9, (uint)param_8),
                                            local_68, local_98, &local_f0, param_9);
                std::function<void(unsigned int, unsigned int, bool)>::~function(local_98);
                std::function<void(
                    unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>::~function(local_68);
                if (cVar2 == '\0') {
                    GroupNotDownloaded(iVar8, local_cc, SUB41(local_d0, 0));
                }
            }
            goto LAB_1009f44f0;
        }
    }
    this[720] = (Js5WorkerThread)1;
    GroupNotDownloaded(iVar8, local_cc, SUB41(local_d0, 0));
LAB_1009f44f0:
    local_f0.~VBOMapper();
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

// 0x1009f4600, 80 bytes, placed by class name
// Js5WorkerThread::IsSocketConnected() const
bool Js5WorkerThread::IsSocketConnected() {
    CoordMapSquare* this_00;
    bool bVar3;

    bVar3 = false;
    if (jag::operator!=((shared_ptr*)(this + 496), (_func_decltype_nullptr*)0)) {
        this_00 = (CoordMapSquare*)jag::shared_ptr<jag::ClientStream>::operator->(
            (shared_ptr<jag::ClientStream>*)(this + 496));
        bVar3 = this_00->GetX() == 2;
    }
    return bVar3;
}

// 0x1009f4650, 48 bytes, placed by class name
// Js5WorkerThread::RequestServerDrop()
void Js5WorkerThread::RequestServerDrop() {
    Js5NetQueue* this_00;

    if (IsJs5Connected(this) != '\0') {
        this_00 = (Js5NetQueue*)std::unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>::operator->(
            (unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>*)(this + 512));
        this_00->RequestServerDrop();
    }
}

// 0x1009f46a0, 80 bytes, placed by class name
// Js5WorkerThread::DropClientConnection()
void Js5WorkerThread::DropClientConnection() {
    ClientStream* this_00;

    if (((this + 496))->operator_cast_to_bool()) {
        this_00 =
            (ClientStream*)jag::shared_ptr<jag::ClientStream>::operator->((shared_ptr<jag::ClientStream>*)(this + 496));
        this_00->Drop();
        jag::shared_ptr<jag::ClientStream>::reset();
        this[720] = (Js5WorkerThread)1;
        *(undefined4*)(this + 788) = 0;
    }
}

// 0x1009f4720, 128 bytes, placed by class name
// Js5WorkerThread::MasterIndexNotDownloaded()
void Js5WorkerThread::MasterIndexNotDownloaded() {
    PacketT<jag::Array<unsigned char, eastl::allocator>>* pPVar1;
    int* in_RDX;
    shared_ptr local_30;
    undefined4 local_1c;

    local_1c = 3;
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<int>(
        &local_30, (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>*)&local_1c,
        in_RDX);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_30);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar1, 10);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_30);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p2<unsigned long>(pPVar1, 0);
    Response(&local_30);
    local_30.~shared_ptr();
}

// 0x1009f4890, 128 bytes, placed by class name
// Js5WorkerThread::MasterIndexNotDownloadedOverHTTP()
void Js5WorkerThread::MasterIndexNotDownloadedOverHTTP() {
    PacketT<jag::Array<unsigned char, eastl::allocator>>* pPVar1;
    int* in_RDX;
    shared_ptr local_30;
    undefined4 local_1c;

    local_1c = 3;
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<int>(
        &local_30, (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>*)&local_1c,
        in_RDX);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_30);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar1, 40);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_30);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p2<unsigned long>(pPVar1, 0);
    Response(&local_30);
    local_30.~shared_ptr();
}

// 0x1009f4a80, 176 bytes, placed by class name
// Js5WorkerThread::MasterIndexDownloaded(jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&)
void Js5WorkerThread::MasterIndexDownloaded(PacketT* param_1) {
    PacketT<jag::Array<unsigned char, eastl::allocator>>* pPVar1;
    ulong uVar2;
    undefined1 auVar3[16];
    long local_38;
    shared_ptr local_30;

    auVar3 = param_1->GetTextureAtlas();
    local_38 = auVar3._0_8_ + 3;
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<unsigned long>(
        &local_30, (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>*)&local_38,
        auVar3._8_8_);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_30);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar1, 10);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_30);
    uVar2 = param_1->GetTextureAtlas();
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p2<unsigned long>(pPVar1, uVar2);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_30);
    pPVar1->pArrayBuffer(param_1);
    Response(&local_30);
    local_30.~shared_ptr();
}

// 0x1009f4b30, 176 bytes, placed by class name
// Js5WorkerThread::MasterIndexDownloadedOverHTTP(jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&)
void Js5WorkerThread::MasterIndexDownloadedOverHTTP(PacketT* param_1) {
    PacketT<jag::Array<unsigned char, eastl::allocator>>* pPVar1;
    ulong uVar2;
    undefined1 auVar3[16];
    long local_38;
    shared_ptr local_30;

    auVar3 = param_1->GetTextureAtlas();
    local_38 = auVar3._0_8_ + 3;
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<unsigned long>(
        &local_30, (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>*)&local_38,
        auVar3._8_8_);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_30);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar1, 40);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_30);
    uVar2 = param_1->GetTextureAtlas();
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p2<unsigned long>(pPVar1, uVar2);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_30);
    pPVar1->pArrayBuffer(param_1);
    Response(&local_30);
    local_30.~shared_ptr();
}

// 0x1009f4be0, 16 bytes, placed by class name
// Js5WorkerThread::IndexNotDownloaded(int)
void Js5WorkerThread::IndexNotDownloaded(int param_1) {
    FailGetIndexResponse(this, param_1, 3);
}

// 0x1009f4c00, 976 bytes, placed by class name
// Js5WorkerThread::IndexDownloaded(int, jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&, jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&&)
void Js5WorkerThread::IndexDownloaded(int param_1, PacketT* param_2, PacketT* param_3) {
    uint uVar1;
    char cVar2;
    int iVar3;
    ulong uVar5;
    uchar* puVar6;
    undefined8 uVar7;
    undefined8 uVar8;
    PacketT<jag::Array<unsigned char, eastl::allocator>>* pPVar9;
    undefined1 auVar10[16];
    long local_128[3];
    PacketT* local_110;
    shared_ptr local_108[2];
    int local_e8;
    Whirlpool local_e0;
    long local_38;

    local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
    param_3->SetPos(0);
    iVar3 = param_3->g4();
    uVar5 = param_2->GetTextureAtlas();
    puVar6 = (uchar*)param_2->GetDataPtr();
    if (jag::CRC32(puVar6, uVar5, 4294967295) == iVar3) {
        iVar3 = param_2->GetTextureAtlas();
        *(int*)(this + 708) = *(int*)(this + 708) + iVar3;
        cVar2 = param_3->g1();
        if (cVar2 == '\x01') {
            new (&local_e0) jag::Whirlpool();
            local_110 = param_2;
            puVar6 = (uchar*)param_2->GetDataPtr();
            local_e0.Update(puVar6, uVar5);
            new (local_108) jag::Array<unsigned char, jag::SafeBucketAllocatorEASTL>(64);
            puVar6 = (uchar*)local_108->data();
            local_e0.Final(puVar6);
            new (local_128) jag::Array<unsigned char, jag::SafeBucketAllocatorEASTL>(64);
            puVar6 = (uchar*)local_128->data();
            param_3->gArrayBuffer(puVar6, 0, 64);
            cVar2 = jag::Array<unsigned char, eastl::allocator>::operator==(
                (Array<unsigned char, eastl::allocator>*)local_108, (Array*)local_128);
            if (cVar2 == '\0') {
                FailGetIndexResponse(this, (uint)param_1, 2);
                local_128->~Array();
                local_108->~Array();
                goto LAB_1009f4f33;
            }
            local_128->~Array();
            local_108->~Array();
            param_2 = local_110;
        }
        local_e8 = 1;
        local_e0.Decompress(param_2, (JS5DecompressionResult*)&local_e8);
        if (local_e8 == 1) {
            uVar7 = jag::logger::default_logger();
            uVar1 = (uint)param_1;
            local_108->ToString();
            uVar8 = eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
            jag::logger::Logger::Log(
                uVar7, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp",
                309, "Error decompressing index: archive=%i, packet=%s", uVar1, uVar8);
            local_108->~basic_string();
            IndexNotDownloaded(this, uVar1);
        } else {
            auVar10 = local_e0.GetTextureAtlas();
            local_128[0] = auVar10._0_8_ + 7;
            jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<
                unsigned long>(
                local_108, (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>*)local_128,
                auVar10._8_8_);
            uVar1 = (uint)param_1;
            pPVar9 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                         jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_108);
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar9, 20);
            pPVar9 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                         jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_108);
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar9, (ulong)uVar1);
            pPVar9 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                         jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_108);
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar9, 0);
            pPVar9 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                         jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_108);
            iVar3 = local_e0.GetTextureAtlas();
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar9, iVar3);
            pPVar9 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                         jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                             (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_108);
            pPVar9->pArrayBuffer((PacketT*)&local_e0);
            Response(local_108);
            local_108->~shared_ptr();
        }
        local_e0.~VBOMapper();
    } else {
        FailGetIndexResponse(this, (uint)param_1, 1);
    }
LAB_1009f4f33:
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

// 0x1009f4fd0, 176 bytes, placed by class name
// Js5WorkerThread::FailGetIndexResponse(int, Js5WorkerGetIndexResponseType)
void Js5WorkerThread::FailGetIndexResponse(uint param_1, int* param_3) {
    PacketT<jag::Array<unsigned char, eastl::allocator>>* pPVar1;
    shared_ptr local_40;
    undefined4 local_2c;

    local_2c = 3;
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<int>(
        &local_40, (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>*)&local_2c,
        param_3);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_40);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar1, 20);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_40);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar1, (ulong)param_1);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_40);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar1, (ulong)param_3 & 4294967295);
    Response(&local_40);
    local_40.~shared_ptr();
}

// 0x1009f5080, 32 bytes, placed by class name
// Js5WorkerThread::GroupNotDownloaded(int, int, bool)
void Js5WorkerThread::GroupNotDownloaded(int param_1, int param_2, bool param_3) {
    FailGetGroupResponse();
}

// 0x1009f50a0, 2704 bytes, placed by class name
// Js5WorkerThread::GroupDownloaded(int, int, jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&, jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&&, bool)
void Js5WorkerThread::GroupDownloaded(int param_1, int param_2, PacketT* param_3, PacketT* param_4, bool param_5) {
    byte bVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    uint uVar7;
    uint uVar8;
    undefined8 uVar10;
    undefined* puVar11;
    uchar* puVar12;
    undefined8 uVar13;
    long lVar14;
    PacketT<jag::Array<unsigned char, eastl::allocator>>* pPVar15;
    undefined7 in_register_00000089;
    undefined1 auVar16[16];
    long local_138;
    uint local_130;
    uint local_12c;
    undefined1 local_128[32];
    shared_ptr local_108;
    int local_f0;
    byte local_e1;
    Whirlpool local_e0;
    long local_38;

    local_130 = (uint)CONCAT71(in_register_00000089, param_5);
    local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
    if (param_3->GetTextureAtlas() < 3) {
        uVar10 = jag::logger::default_logger();
        jag::logger::Logger::Log(
            uVar10, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp", 384,
            "Data received from server for group too small");
        goto LAB_1009f5a47;
    }
    param_4->SetPos(0);
    local_12c = param_4->g4();
    bVar1 = param_4->g1();
    puVar11 = (undefined*)jag::EncodeType::GetByID((uint)bVar1);
    param_4->g1();
    iVar4 = param_4->g4();
    iVar5 = param_3->GetTextureAtlas();
    puVar12 = (uchar*)param_3->GetDataPtr();
    if (jag::CRC32(puVar12, (long)(iVar5 + -2), 4294967295) != iVar4) {
        FailGetGroupResponse(this, (uint)param_1, param_2, (undefined1)local_130, 1);
        goto LAB_1009f5a47;
    }
    iVar4 = param_3->GetTextureAtlas();
    *(long*)(this + 712) = *(long*)(this + 712) + (long)iVar4;
    local_e1 = param_4->g1();
    uVar7 = local_130;
    if ((local_e1 & 1) != 0) {
        new (&local_e0) jag::Whirlpool();
        puVar12 = (uchar*)param_3->GetDataPtr();
        local_e0.Update(puVar12, (long)(iVar5 + -2));
        new (local_128) jag::Array<unsigned char, jag::SafeBucketAllocatorEASTL>(64);
        puVar12 = (uchar*)local_128->data();
        local_e0.Final(puVar12);
        new ((local_128 + 32)) jag::Array<unsigned char, jag::SafeBucketAllocatorEASTL>(64);
        puVar12 = (uchar*)((local_128 + 32))->data();
        param_4->gArrayBuffer(puVar12, 0, 64);
        cVar2 = jag::Array<unsigned char, eastl::allocator>::operator==(
            (Array<unsigned char, eastl::allocator>*)local_128, (Array*)(local_128 + 32));
        if (cVar2 == '\0') {
            FailGetGroupResponse(this, (uint)param_1, param_2, uVar7 & 255, 2);
            ((local_128 + 32))->~Array();
            local_128->~Array();
            goto LAB_1009f5a47;
        }
        ((local_128 + 32))->~Array();
        local_128->~Array();
    }
    if ((puVar11 == jag::EncodeType::PNG_MIPPED) && ((local_e1 & 2) != 0)) {
        /* WARNING: Subroutine does not return */
        jag::LogAssert(
            "!(extraData_encodeType == jag::EncodeType::PNG_MIPPED && extraData_JS5DiskCacheFormat == "
            "jag::Js5DiskCacheFormat::SERVER_COMPRESSED)",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp", 428,
            "PNG_MIPPED Cannot suppport SERVER_COMPRESSION unless DecodePNG is moved to the disk thread");
    }
    if ((char)uVar7 == '\0') {
        if ((local_e1 & 2) != 0) {
            auVar16 = param_3->GetTextureAtlas();
            local_128._0_8_ = auVar16._0_8_ + 12;
            jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<
                unsigned long>(
                (shared_ptr*)&local_e0,
                (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>*)local_128,
                auVar16._8_8_);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_e0);
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar15, 30);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_e0);
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar15, (ulong)(uint)param_1);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_e0);
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar15, param_2);
            bVar3 = (bool)jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_e0);
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<bool>(bVar3);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_e0);
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar15, 0);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_e0);
            iVar4 = param_3->GetTextureAtlas();
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar15, iVar4);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_e0);
            pPVar15->pArrayBuffer(param_3);
            Response((shared_ptr*)&local_e0);
            local_e0.~shared_ptr();
            goto LAB_1009f5a47;
        }
        local_f0 = 1;
        local_e0.Decompress(param_3, (JS5DecompressionResult*)&local_f0);
        if (local_f0 != 1) {
            new (local_128) jag::PacketT<jag::Array<unsigned char, eastl::allocator>>();
            uVar7 = local_12c;
            if (1 < (int)local_12c) {
                uVar8 = local_e0.GetTextureAtlas();
                jag::Js5DiskFileFormat::DechunkGroupFiles((PacketT*)local_128, (PacketT*)&local_e0, 0, uVar8, uVar7);
                jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::operator=(
                    (PacketT<jag::Array<unsigned char, eastl::allocator>>*)&local_e0, (PacketT*)local_128);
            }
            if (puVar11 == jag::EncodeType::PNG_MIPPED) {
                jag::Js5Compression::DecodePNG((PacketT*)&local_e0);
            }
            auVar16 = local_e0.GetTextureAtlas();
            local_138 = auVar16._0_8_ + 12;
            jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<
                unsigned long>(
                (shared_ptr*)(local_128 + 32),
                (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>*)&local_138,
                auVar16._8_8_);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar15, 30);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar15, (ulong)(uint)param_1);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar15, param_2);
            bVar3 = (bool)jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<bool>(bVar3);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar15, 0);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            iVar4 = local_e0.GetTextureAtlas();
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar15, iVar4);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            pPVar15->pArrayBuffer((PacketT*)&local_e0);
            Response((shared_ptr*)(local_128 + 32));
            goto LAB_1009f5a23;
        }
        uVar10 = jag::logger::default_logger();
        local_128->ToString();
        uVar13 = eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        iVar4 = param_2;
        uVar7 = (uint)param_1;
        jag::logger::Logger::Log(
            uVar10, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp", 456,
            "Error decompressing packet: archive=%i, group=%i, packet=%s", (uint)param_1, param_2, uVar13);
        local_128->~basic_string();
        FailGetGroupResponse(this, uVar7, iVar4, 0, 5);
    } else {
        local_f0 = 1;
        local_e0.Decompress(param_3, (JS5DecompressionResult*)&local_f0);
        if (local_f0 == 1) {
            uVar10 = jag::logger::default_logger();
            local_128->ToString();
            uVar13 = eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
            iVar4 = param_2;
            uVar7 = (uint)param_1;
            jag::logger::Logger::Log(
                uVar10, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp",
                501, "Error decompressing packet: archive=%i, group=%i, packet=%s", (uint)param_1, param_2, uVar13);
            local_128->~basic_string();
            FailGetGroupResponse(this, uVar7, iVar4, 1, 5);
        } else if (local_12c == 1) {
            if ((local_e1 & 2) == 0) {
                jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::operator=(
                    (PacketT<jag::Array<unsigned char, eastl::allocator>>*)param_3, (PacketT*)&local_e0);
            }
            if (puVar11 == jag::EncodeType::PNG_MIPPED) {
                jag::Js5Compression::DecodePNG((PacketT*)&local_e0);
                jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::operator=(
                    (PacketT<jag::Array<unsigned char, eastl::allocator>>*)param_3, (PacketT*)&local_e0);
            }
            lVar14 = param_3->GetTextureAtlas();
            auVar16 = local_e0.GetTextureAtlas();
            local_108._0_8_ = auVar16._0_8_ + lVar14 + 16;
            jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<
                unsigned long>(
                (shared_ptr*)local_128,
                (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>*)(local_128 + 32),
                auVar16._8_8_);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_128);
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar15, 30);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_128);
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar15, (ulong)(uint)param_1);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_128);
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar15, param_2);
            bVar3 = (bool)jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_128);
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<bool>(bVar3);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_128);
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar15, 0);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_128);
            iVar4 = param_3->GetTextureAtlas();
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar15, iVar4);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_128);
            pPVar15->pArrayBuffer(param_3);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_128);
            iVar4 = local_e0.GetTextureAtlas();
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar15, iVar4);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)local_128);
            pPVar15->pArrayBuffer((PacketT*)&local_e0);
            Response(local_128);
            local_128->~shared_ptr();
        } else {
            new (local_128) jag::PacketT<jag::Array<unsigned char, eastl::allocator>>();
            uVar7 = local_e0.GetTextureAtlas();
            jag::Js5DiskFileFormat::DechunkGroupFiles((PacketT*)local_128, (PacketT*)&local_e0, 0, uVar7, local_12c);
            if ((local_e1 & 2) == 0) {
                jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::operator=(
                    (PacketT<jag::Array<unsigned char, eastl::allocator>>*)param_3, (PacketT*)local_128);
            }
            lVar14 = param_3->GetTextureAtlas();
            auVar16 = local_128->GetTextureAtlas();
            local_138 = auVar16._0_8_ + lVar14 + 16;
            jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<
                unsigned long>(
                (shared_ptr*)(local_128 + 32),
                (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>*)&local_138,
                auVar16._8_8_);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar15, 30);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar15, (ulong)(uint)param_1);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar15, param_2);
            bVar3 = (bool)jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<bool>(bVar3);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar15, 0);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            iVar4 = param_3->GetTextureAtlas();
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar15, iVar4);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            pPVar15->pArrayBuffer(param_3);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            iVar4 = local_128->GetTextureAtlas();
            jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar15, iVar4);
            pPVar15 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                          jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)(local_128 + 32));
            pPVar15->pArrayBuffer(local_128);
            Response((shared_ptr*)(local_128 + 32));
        LAB_1009f5a23:
            ((local_128 + 32))->~shared_ptr();
            local_128->~VBOMapper();
        }
    }
    local_e0.~VBOMapper();
LAB_1009f5a47:
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

// 0x1009f5b30, 224 bytes, placed by class name
// Js5WorkerThread::FailGetGroupResponse(int, int, bool, Js5WorkerGetGroupResponseType)
void Js5WorkerThread::FailGetGroupResponse(uint param_1, int* param_3, undefined8 param_4, uint param_5) {
    bool bVar1;
    PacketT<jag::Array<unsigned char, eastl::allocator>>* pPVar2;
    undefined4 local_44;
    shared_ptr local_40;

    local_44 = 8;
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<int>(
        &local_40, (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>*)&local_44,
        param_3);
    pPVar2 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_40);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar2, 30);
    pPVar2 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_40);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar2, (ulong)param_1);
    pPVar2 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_40);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar2, (int)param_3);
    bVar1 = (bool)jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
        (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_40);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<bool>(bVar1);
    pPVar2 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_40);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar2, (ulong)param_5);
    Response(&local_40);
    local_40.~shared_ptr();
}

// 0x1009f5c10, 336 bytes, placed by class name
// Js5WorkerThread::OnInterval(float, unsigned long long)
void Js5WorkerThread::OnInterval(float param_1, ulonglong param_2) {
    shared_ptr* this_00;
    bool bVar1;
    int iVar2;
    long lVar3;
    CoordMapSquare* pCVar4;
    Js5HTTPQueue* this_01;
    ulonglong uVar5;

    lVar3 = jag::SystemTimer::ConvertNStoSecondsApprox(param_2);
    if (*(long*)(this + 736) != lVar3) {
        *(undefined4*)(this + 744) = *(undefined4*)(this + 748);
        *(undefined4*)(this + 748) = 0;
        *(long*)(this + 736) = lVar3;
        if (*(ulong*)(this + 752) < lVar3 - 10U) {
            *(long*)(this + 760) = lVar3;
            *(undefined8*)(this + 768) = 0;
            *(undefined8*)(this + 776) = 0;
            *(long*)(this + 752) = lVar3;
        }
    }
    if (this[721] != (Js5WorkerThread)0) {
        bVar1 = jag::operator!=((shared_ptr*)(this + 496), (_func_decltype_nullptr*)0);
        if (bVar1) {
            pCVar4 = (CoordMapSquare*)jag::shared_ptr<jag::ClientStream>::operator->(
                (shared_ptr<jag::ClientStream>*)(this + 496));
            iVar2 = pCVar4->GetX();
            if (iVar2 == 0) {
                RotateConnectMethods(this);
                UpdatedFailedConnectionAttemptCount(this, *(int*)(this + 784) + 1, -1);
            }
        }
    }
    this_00 = (shared_ptr*)(this + 496);
    bVar1 = jag::operator!=(this_00, (_func_decltype_nullptr*)0);
    if (bVar1) {
        pCVar4 =
            (CoordMapSquare*)jag::shared_ptr<jag::ClientStream>::operator->((shared_ptr<jag::ClientStream>*)this_00);
        iVar2 = pCVar4->GetX();
        if (iVar2 == 2) {
            ServiceConnected(this);
            goto LAB_1009f5d21;
        }
    }
    bVar1 = jag::operator==(this_00, (_func_decltype_nullptr*)0);
    if (!bVar1) {
        pCVar4 =
            (CoordMapSquare*)jag::shared_ptr<jag::ClientStream>::operator->((shared_ptr<jag::ClientStream>*)this_00);
        iVar2 = pCVar4->GetX();
        if (iVar2 != 0)
            goto LAB_1009f5d21;
    }
    ServiceReconnect(this);
LAB_1009f5d21:
    this_01 = (Js5HTTPQueue*)std::unique_ptr<jag::Js5HTTPQueue, std::default_delete<jag::Js5HTTPQueue>>::operator->(
        (unique_ptr<jag::Js5HTTPQueue, std::default_delete<jag::Js5HTTPQueue>>*)(this + 520));
    this_01->Service();
    *(int*)(this + 748) = *(int*)(this + 748) + 1;
    uVar5 = jag::SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_01);
    *(ulonglong*)(this + 776) = *(long*)(this + 776) + (uVar5 - lVar3);
}

// 0x1009f5db0, 32 bytes, placed by class name
// Js5WorkerThread::RotateConnectMethods()
void Js5WorkerThread::RotateConnectMethods() {
    this[656] = (Js5WorkerThread)((byte)this[656] ^ 1);
    UpdateConnection(this);
}

// 0x1009f5dd0, 176 bytes, placed by class name
// Js5WorkerThread::UpdatedFailedConnectionAttemptCount(int, int)
void Js5WorkerThread::UpdatedFailedConnectionAttemptCount(int param_1, int param_2) {
    PacketT<jag::Array<unsigned char, eastl::allocator>>* pPVar1;
    undefined4 in_register_00000014;
    shared_ptr local_40;
    undefined4 local_2c;

    *(int*)(this + 784) = param_1;
    local_2c = 9;
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<int>(
        &local_40, (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>*)&local_2c,
        (int*)CONCAT44(in_register_00000014, param_2));
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_40);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar1, 6);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_40);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar1, param_1);
    pPVar1 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                 jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                     (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_40);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p4<int>(pPVar1, param_2);
    Response(&local_40);
    local_40.~shared_ptr();
}

// 0x1009f5e80, 688 bytes, placed by class name
// Js5WorkerThread::ServiceConnected()
void Js5WorkerThread::ServiceConnected() {
    shared_ptr<jag::ClientStream>* psVar1;
    shared_ptr* this_00;
    PacketT<jag::Array<unsigned char, eastl::allocator>>* pPVar2;
    byte bVar3;
    int iVar4;
    undefined8 in_RAX;
    CoordMapSquare* pCVar5;
    long lVar6;
    ClientStream* pCVar7;
    ulong uVar9;
    undefined8 uVar10;
    Js5NetQueue* pJVar11;
    undefined4 uVar12;

    uVar12 = (undefined4)((ulong)in_RAX >> 32);
    iVar4 = *(int*)(this + 788);
    if (iVar4 == 2) {
        this_00 = (shared_ptr*)(this + 496);
        pCVar5 =
            (CoordMapSquare*)jag::shared_ptr<jag::ClientStream>::operator->((shared_ptr<jag::ClientStream>*)this_00);
        iVar4 = pCVar5->GetX();
        if (iVar4 == 2) {
            iVar4 = *(int*)(this + 704);
            uVar9 = (long)iVar4 * 4;
            pCVar7 =
                (ClientStream*)jag::shared_ptr<jag::ClientStream>::operator->((shared_ptr<jag::ClientStream>*)this_00);
            if (pCVar7->GetAvailable() < uVar9) {
                return;
            }
            if (iVar4 != 0) {
                pPVar2 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)(this + 792);
                iVar4 = 0;
                pPVar2->SetPos(0);
                pCVar7 = (ClientStream*)jag::shared_ptr<jag::ClientStream>::operator->(
                    (shared_ptr<jag::ClientStream>*)this_00);
                jag::ClientStream::Read<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>(
                    pCVar7, (PacketT*)pPVar2, uVar9);
                pPVar2->SetPos(0);
                if (0 < *(int*)(this + 704)) {
                    do {
                        pPVar2->g4();
                        iVar4 = iVar4 + 1;
                    } while (iVar4 < *(int*)(this + 704));
                }
            }
            pJVar11 =
                (Js5NetQueue*)std::unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>::operator->(
                    (unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>*)(this + 512));
            pJVar11->ProvideConnection(this_00, false);
            *(undefined4*)(this + 788) = 3;
            *(undefined2*)(this + 720) = 0;
            UpdatedFailedConnectionAttemptCount(this, 0, 0);
            return;
        }
    } else {
        if (iVar4 != 1) {
            if (iVar4 != 0) {
                pJVar11 =
                    (Js5NetQueue*)std::unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>::operator->(
                        (unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>*)(this + 512));
                bVar3 = pJVar11->Service();
                this[720] = (Js5WorkerThread)(bVar3 ^ 1);
                return;
            }
            psVar1 = (shared_ptr<jag::ClientStream>*)(this + 496);
            pCVar5 = (CoordMapSquare*)jag::shared_ptr<jag::ClientStream>::operator->(psVar1);
            iVar4 = pCVar5->GetX();
            if (iVar4 != 2) {
                return;
            }
            lVar6 = ((this + 672))->GetTextureAtlas();
            if (lVar6 != 0) {
                pCVar7 = (ClientStream*)jag::shared_ptr<jag::ClientStream>::operator->(psVar1);
                pCVar7->Write((PacketT*)(this + 672));
                pCVar7 = (ClientStream*)jag::shared_ptr<jag::ClientStream>::operator->(psVar1);
                pCVar7->Flush();
            }
            *(undefined4*)(this + 788) = 1;
            return;
        }
        psVar1 = (shared_ptr<jag::ClientStream>*)(this + 496);
        pCVar5 = (CoordMapSquare*)jag::shared_ptr<jag::ClientStream>::operator->(psVar1);
        iVar4 = pCVar5->GetX();
        if (iVar4 == 2) {
            pPVar2 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)(this + 792);
            pPVar2->SetPos(0);
            pCVar7 = (ClientStream*)jag::shared_ptr<jag::ClientStream>::operator->(psVar1);
            uVar9 = jag::ClientStream::Read<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>(
                pCVar7, (PacketT*)pPVar2, 1);
            if (uVar9 != 1) {
                return;
            }
            pPVar2->SetPos(0);
            bVar3 = pPVar2->g1();
            if (bVar3 == 0) {
                *(undefined4*)(this + 788) = 2;
                return;
            }
            uVar10 = jag::logger::default_logger();
            jag::logger::Logger::Log(
                uVar10, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp",
                670, "Js5WorkerThread: Server response not 0: %d", CONCAT44(uVar12, (uint)bVar3));
            pCVar7 = (ClientStream*)jag::shared_ptr<jag::ClientStream>::operator->(psVar1);
            pCVar7->Close();
            jag::shared_ptr<jag::ClientStream>::reset();
            *(undefined4*)(this + 788) = 0;
            this[720] = (Js5WorkerThread)1;
            UpdatedFailedConnectionAttemptCount(this, *(int*)(this + 784) + 1, (uint)bVar3);
            return;
        }
    }
    *(undefined4*)(this + 788) = 0;
    this[720] = (Js5WorkerThread)1;
}

// 0x1009f6130, 608 bytes, placed by class name
// Js5WorkerThread::ServiceReconnect()
void Js5WorkerThread::ServiceReconnect() {
    shared_ptr<jag::ClientStream>* this_00;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    CoordMapSquare* pCVar7;
    AutoSingleton<jag::ShaderThreadPoolSingleton>* pAVar8;
    ClientStream* pCVar9;
    undefined4* puVar10;
    char* pcVar11;
    shared_ptr local_50[2];
    char* local_30;

    uVar4 = jag::SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
    if ((this[720] == (Js5WorkerThread)0) || (uVar4 - 1000 <= *(ulong*)(this + 728))) {
        if (jag::operator!=((shared_ptr*)(this + 496), (_func_decltype_nullptr*)0)) {
            pAVar8 = (AutoSingleton<jag::ShaderThreadPoolSingleton>*)
                         std::unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>::operator->(
                             (unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>*)(this + 512));
            pAVar8->~AutoSingleton();
            jag::shared_ptr<jag::ClientStream>::reset();
            *(undefined4*)(this + 788) = 0;
            return;
        }
        return;
    }
    uVar5 = jag::logger::default_logger();
    uVar6 = eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
    jag::logger::Logger::Log(
        uVar5, 0, 8,
        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp", 746,
        "Js5Worker: Initiating connection to JS5 server at %s...", uVar6);
    local_30 = (char*)eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
    jag::make_shared<jag::ClientStream, char const*, int const&, int const&, int const&, int const&>(
        (jag*)local_50, &local_30, &jag::Js5Constants::CIRCULAR_RCV_BUFFER_SIZE,
        &jag::Js5Constants::CIRCULAR_SND_BUFFER_SIZE, &jag::Js5Constants::SOCKET_RCV_BUFFER_SIZE,
        &jag::Js5Constants::SOCKET_SND_BUFFER_SIZE);
    this_00 = (shared_ptr<jag::ClientStream>*)(this + 496);
    jag::shared_ptr<jag::ClientStream>::operator=(this_00, local_50);
    local_50->~shared_ptr();
    *(ulonglong*)(this + 728) = uVar4;
    *(undefined2*)(this + 720) = 256;
    *(undefined4*)(this + 788) = 0;
    pCVar7 = (CoordMapSquare*)jag::shared_ptr<jag::ClientStream>::operator->(this_00);
    iVar3 = pCVar7->GetX();
    if (iVar3 == 2) {
        uVar5 = jag::logger::default_logger();
        pcVar11 = "Js5Worker: Connected!";
        uVar6 = 758;
    } else {
        pCVar7 = (CoordMapSquare*)jag::shared_ptr<jag::ClientStream>::operator->(this_00);
        iVar3 = pCVar7->GetX();
        if (iVar3 != 0)
            goto LAB_1009f62d3;
        uVar5 = jag::logger::default_logger();
        pcVar11 = "Js5Worker: Closed immediately!";
        uVar6 = 762;
    }
    jag::logger::Logger::Log(
        uVar5, 0, 8,
        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp", uVar6,
        pcVar11);
LAB_1009f62d3:
    pCVar9 = (ClientStream*)jag::shared_ptr<jag::ClientStream>::operator->(this_00);
    puVar10 = (undefined4*)pCVar9->GetError();
    local_30 = (char*)CONCAT44(local_30._4_4_, *puVar10);
    if (local_30.IsValid() != '\0') {
        uVar5 = jag::logger::default_logger();
        local_50->GetErrorString();
        uVar6 = eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        jag::logger::Logger::Log(
            uVar5, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/worker/Js5WorkerThread.cpp", 767,
            "Connection error: %s", uVar6);
        local_50->~basic_string();
        pCVar9 = (ClientStream*)jag::shared_ptr<jag::ClientStream>::operator->(this_00);
        pCVar9->Close();
    }
}

// 0x1009f6490, 160 bytes, placed by class name
// Js5WorkerThread::UpdateConnection()
void Js5WorkerThread::UpdateConnection() {
    unique_ptr local_20[8];

    eastl::string::operator=((eastl::string*)(this + 528), (basic_string*)(this + (ulong)(byte)this[656] * 32 + 592));
    std::make_unique<jag::Js5NetQueue>();
    std::unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>::operator=(
        (unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>*)(this + 512), local_20);
    local_20->~unique_ptr();
    std::make_unique<jag::Js5HTTPQueue, eastl::string&>((basic_string*)local_20);
    std::unique_ptr<jag::Js5HTTPQueue, std::default_delete<jag::Js5HTTPQueue>>::operator=(
        (unique_ptr<jag::Js5HTTPQueue, std::default_delete<jag::Js5HTTPQueue>>*)(this + 520), local_20);
    local_20->~unique_ptr();
    this[720] = (Js5WorkerThread)1;
    *(undefined4*)(this + 788) = 0;
}
