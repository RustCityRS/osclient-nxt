// libs/js5/worker/Js5WorkerThread.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

class Js5WorkerThread {
public:
    // virtual methods in vtable order
    virtual ~Js5WorkerThread();
    virtual void OnInterval(float, unsigned long long);
    virtual void OnMessage(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&);
    virtual void OnResponse(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&);
    void SetWorkerOnMessage(std::function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)> const&);
    Js5WorkerThread();
    GetClientStream() const;
    void Post(Js5WorkerMessageTypes::Type);
    void Initialize(char const*, char const*, char const*, jag::ModeGame const*,
                    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&, int);
    void ChangeURLs(char const*, char const*, char const*);
    void RequestMasterIndex();
    void RequestMasterIndexOverHTTP();
    void RequestIndex(unsigned int, int, jag::Array<unsigned char, eastl::allocator> const&);
    void RequestGroup(int, int, int, jag::EncodeType const*, bool, jag::Js5DiskCacheFormat, bool, jag::Priority const*,
                      int, int, jag::Array<unsigned char, eastl::allocator> const&);
    bool IsSocketConnected() const;
    void RequestServerDrop();
    bool IsJs5Connected() const;
    void DropClientConnection();
    void MasterIndexNotDownloaded();
    void MasterIndexNotDownloadedOverHTTP();
    void MasterIndexDownloaded(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&);
    void MasterIndexDownloadedOverHTTP(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&);
    void IndexNotDownloaded(int);
    void IndexDownloaded(int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                         jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&);
    void FailGetIndexResponse(int, Js5WorkerGetIndexResponseType);
    void GroupNotDownloaded(int, int, bool);
    void GroupDownloaded(int, int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                         jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool);
    void FailGetGroupResponse(int, int, bool, Js5WorkerGetGroupResponseType);
    void RotateConnectMethods();
    void UpdatedFailedConnectionAttemptCount(int, int);
    void ServiceConnected();
    void ServiceReconnect();
    void UpdateConnection();
};

// 0x10019b9b0, 32 bytes, inline, placed by class name and debug map
// Js5WorkerThread::SetWorkerOnMessage(std::function<void (jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&)> const&)
/* Js5WorkerThread::SetWorkerOnMessage(std::function<void (jag::PacketT<jag::Array<unsigned char,
   eastl::allocator> >&)> const&) */

void Js5WorkerThread::SetWorkerOnMessage(function* param_1) {
    std::function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>::operator=(
        (function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>*)(this + 448), param_1);
}

// 0x10019c290, 16 bytes, complete-object constructor, inline, placed by class name
// Js5WorkerThread::Js5WorkerThread(): jumps straight to the base-object constructor

// 0x10019c2a0, 496 bytes, base-object constructor, inline, placed by class name
// Js5WorkerThread::Js5WorkerThread()
void Js5WorkerThread::Js5WorkerThread() {
    jag::Task::Task();
    *(undefined***)this = &PTR__Js5WorkerThread_100f1cd38;
    std::function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>::function(
        (function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>*)(this + 448));
    new ((this + 496)) jag::shared_ptr<jag::oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
    std::unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>::unique_ptr<true, void>(
        (unique_ptr<jag::Js5NetQueue, std::default_delete<jag::Js5NetQueue>>*)(this + 512));
    std::unique_ptr<jag::Js5HTTPQueue, std::default_delete<jag::Js5HTTPQueue>>::unique_ptr<true, void>(
        (unique_ptr<jag::Js5HTTPQueue, std::default_delete<jag::Js5HTTPQueue>>*)(this + 520));
    new ((this + 528)) eastl::string();
    new ((this + 560)) eastl::string();
    new ((this + 592)) eastl::string();
    new ((this + 624)) eastl::string();
    this[656] = (Js5WorkerThread)0;
    *(undefined8*)(this + 664) = 0;
    new ((this + 672)) jag::PacketT<jag::Array<unsigned char, eastl::allocator>>();
    *(undefined8*)(this + 704) = 0;
    *(undefined8*)(this + 712) = 0;
    *(undefined2*)(this + 720) = 1;
    *(undefined8*)(this + 728) = 0;
    *(undefined8*)(this + 736) = 0;
    *(undefined8*)(this + 744) = 0;
    *(undefined8*)(this + 752) = 0;
    *(undefined8*)(this + 760) = 0;
    *(undefined8*)(this + 768) = 0;
    *(undefined8*)(this + 776) = 0;
    *(undefined8*)(this + 784) = 0;
    new ((this + 792)) jag::PacketT<jag::Array<unsigned char, eastl::allocator>>(1000);
    std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                       jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>::
        function<Js5WorkerThread::m_GroupDownloadCallback::_lambda(
                     unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                     jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool) _1_,
                 void>(this + 832, this);
    std::function<void(unsigned int, unsigned int, bool)>::function<
        Js5WorkerThread::m_GroupFailedDownloadCallback::_lambda(unsigned int, unsigned int, bool) _1_, void>(this + 880,
                                                                                                             this);
}

// 0x1009e2290, 16 bytes, inline, placed by class name
// the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
// Js5WorkerThread::GetClientStream() const
/* jag::render::RenderPipelineState::GetPSStorageBuffers() const */

undefined1* jag::render::RenderPipelineState::GetPSStorageBuffers() {
    return &field_496;
}

// 0x1009e8370, 128 bytes, inline, placed by class name
// Js5WorkerThread::Post(Js5WorkerMessageTypes::Type)
void Js5WorkerThread::Post(uint param_2, int* param_3) {
    PacketT<jag::Array<unsigned char, eastl::allocator>>* this_00;
    shared_ptr local_38;
    undefined4 local_24;

    this[720] = (Js5WorkerThread)1;
    local_24 = 1;
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<int>(
        &local_38, (MakeSharedPool<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>, 16192>*)&local_24,
        param_3);
    this_00 = (PacketT<jag::Array<unsigned char, eastl::allocator>>*)
                  jag::shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>::operator->(
                      (shared_ptr<jag::PacketT<jag::Array<unsigned char, eastl::allocator>>>*)&local_38);
    jag::PacketT<jag::Array<unsigned char, eastl::allocator>>::p1<unsigned long>(this_00, (ulong)param_2);
    Message(&local_38);
    local_38.~shared_ptr();
}

// 0x1009f4680, 16 bytes, inline, placed by class name
// Js5WorkerThread::IsJs5Connected() const
bool Js5WorkerThread::IsJs5Connected() {
    return *(int*)(this + 788) == 3;
}

// 0x1009f6680, 16 bytes, complete-object destructor, inline, placed by class name
// Js5WorkerThread::~Js5WorkerThread(): jumps straight to the base-object destructor

// 0x1009f6690, 32 bytes, deleting destructor, inline, placed by class name
// Js5WorkerThread::~Js5WorkerThread()
void Js5WorkerThread::~Js5WorkerThread() {
    ~Js5WorkerThread(this);
    operator_delete(this);
}

// 0x1009f66b0, 48 bytes, inline, placed by class name
// Js5WorkerThread::OnResponse(jag::PacketT<jag::Array<unsigned char, eastl::allocator> >&)
void Js5WorkerThread::OnResponse(PacketT* param_1) {
    if (std::operator!=((function*)(this + 448), (_func_decltype_nullptr*)param_1)) {
        std::function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>::operator()(
            (function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>*)(this + 448), param_1);
    }
}

// 0x1009faf40, 192 bytes, base-object destructor, inline, placed by class name
// Js5WorkerThread::~Js5WorkerThread()
void Js5WorkerThread::~Js5WorkerThread() {
    *(undefined***)this = &PTR__Js5WorkerThread_100f1cd38;
    std::function<void(unsigned int, unsigned int, bool)>::~function(
        (function<void(unsigned int, unsigned int, bool)>*)(this + 880));
    std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                       jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>::
        ~function((function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&,
                                 jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&&, bool)>*)(this + 832));
    ((this + 792))->~VBOMapper();
    ((this + 672))->~VBOMapper();
    ((this + 624))->~basic_string();
    ((this + 592))->~basic_string();
    ((this + 560))->~basic_string();
    ((this + 528))->~basic_string();
    ((this + 520))->~unique_ptr();
    ((this + 512))->~unique_ptr();
    ((this + 496))->~shared_ptr();
    std::function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>::~function(
        (function<void(jag::PacketT<jag::Array<unsigned char, eastl::allocator>>&)>*)(this + 448));
    ~Task();
}

namespace jag {
    // 0x10019bb60, 80 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, eastl::allocator> >::pStringNoConversion<eastl::string >(eastl::string const&, bool)
    void PacketT<Array<unsigned char, eastl::allocator>>::pStringNoConversion<eastl::string>(
        PacketT<Array<unsigned char, eastl::allocator>>* this, basic_string* param_1, bool param_2) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        pStringNoConversion(this, pcVar1, uVar2, param_2);
    }

    // 0x10019bbc0, 64 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::pArrayBuffer(PacketT<Array<unsigned char, eastl::allocator> > const&)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::pArrayBuffer(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  PacketT* param_1) {
        uchar* puVar1;
        ulong uVar2;

        puVar1 = (uchar*)GetDataPtr((PacketT<Array<unsigned char, eastl::allocator>>*)param_1);
        uVar2 = param_1->GetTextureAtlas();
        pArrayBuffer(this, puVar1, 0, uVar2);
    }

} // namespace jag
