// libs/js5/worker/Js5WorkerThread.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

class Js5WorkerThread {
public:
    // virtual methods in vtable order
    virtual ~Js5WorkerThread();
    virtual void OnInterval(float arg1, unsigned long long arg2);
    virtual void OnMessage(jag::PacketT<jag::Array<unsigned char>>& arg1);
    virtual void OnResponse(jag::PacketT<jag::Array<unsigned char>>& arg1);
    void SetWorkerOnMessage(std::function<void(jag::PacketT<jag::Array<unsigned char>>&)> const& callback);
    Js5WorkerThread();
    uint8_t* GetClientStream() const;
    void Post(Js5WorkerMessageTypes::Type arg1);
    void Initialize(const char* str1, const char* str2, const char* str3, const jag::ModeGame* modeGame,
                    jag::PacketT<jag::Array<unsigned char>>& arg5, int arg6);
    void ChangeURLs(const char* str1, const char* str2, const char* str3);
    void RequestMasterIndex();
    void RequestMasterIndexOverHTTP();
    void RequestIndex(unsigned int arg1, int arg2, const jag::Array<unsigned char>& arg3);
    void RequestGroup(int arg1, int arg2, int arg3, const jag::EncodeType* encodeType, bool arg5,
                      jag::Js5DiskCacheFormat js5DiskCacheFormat, bool arg7, const jag::Priority* priority, int arg9,
                      int arg10, const jag::Array<unsigned char>& arg11);
    bool IsSocketConnected() const;
    void RequestServerDrop();
    bool IsJs5Connected() const;
    void DropClientConnection();
    void MasterIndexNotDownloaded();
    void MasterIndexNotDownloadedOverHTTP();
    void MasterIndexDownloaded(jag::PacketT<jag::Array<unsigned char>>& arg1);
    void MasterIndexDownloadedOverHTTP(jag::PacketT<jag::Array<unsigned char>>& arg1);
    void IndexNotDownloaded(int arg1);
    void IndexDownloaded(int arg1, jag::PacketT<jag::Array<unsigned char>>& arg2,
                         jag::PacketT<jag::Array<unsigned char>>&& arg3);
    void FailGetIndexResponse(int arg1, Js5WorkerGetIndexResponseType js5WorkerGetIndexResponseType);
    void GroupNotDownloaded(int arg1, int arg2, bool arg3);
    void GroupDownloaded(int arg1, int arg2, jag::PacketT<jag::Array<unsigned char>>& arg3,
                         jag::PacketT<jag::Array<unsigned char>>&& arg4, bool arg5);
    void FailGetGroupResponse(int arg1, int arg2, bool arg3,
                              Js5WorkerGetGroupResponseType js5WorkerGetGroupResponseType);
    void RotateConnectMethods();
    void UpdatedFailedConnectionAttemptCount(int arg1, int arg2);
    void ServiceConnected();
    void ServiceReconnect();
    void UpdateConnection();
};

// 0x10019b9b0
void Js5WorkerThread::SetWorkerOnMessage(
    std::function<void(jag::PacketT<jag::Array<unsigned char>>&)> const& callback) {
    (*((this + 56))) = callback;
}

// 0x10019c2a0
Js5WorkerThread::Js5WorkerThread() : jag::Task(0) {
    new ((this + 56)) std::function<void(jag::PacketT<jag::Array<unsigned char>>&)>();
    new ((this + 62)) jag::shared_ptr();
    ((this + 64))->unique_ptr<true, void>();
    ((this + 65))->unique_ptr<true, void>();
    new ((this + 66)) eastl::string();
    new ((this + 70)) eastl::string();
    new ((this + 74)) eastl::string();
    new ((this + 78)) eastl::string();
    new ((this + 84)) jag::PacketT();
    new ((this + 99)) jag::PacketT(1000);
    std::function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char>>&,
                       jag::PacketT<jag::Array<unsigned char>>&&, bool)>::
        function<Js5WorkerThread::m_GroupDownloadCallback::_lambda(unsigned int, unsigned int,
                                                                   jag::PacketT<jag::Array<unsigned char>>&,
                                                                   jag::PacketT<jag::Array<unsigned char>>&&, bool) _1_,
                 void>((function<void(unsigned int, unsigned int, jag::PacketT<jag::Array<unsigned char>>&,
                                      jag::PacketT<jag::Array<unsigned char>>&&, bool)>*)(this + 104),
                       (_lambda_unsigned_int__unsigned_int__jag__PacketT<jag::Array<unsigned char> _>
                            ___jag__PacketT<jag::Array<unsigned char> _> ____bool__1_*)this);
    std::function<void(unsigned int, unsigned int, bool)>::function<
        Js5WorkerThread::m_GroupFailedDownloadCallback::_lambda(unsigned int, unsigned int, bool) _1_, void>(
        (function<void(unsigned int, unsigned int, bool)>*)(this + 110),
        (_lambda_unsigned_int__unsigned_int__bool__1_*)this);
}

// 0x1009e2290
uint8_t* Js5WorkerThread::GetClientStream() const {
    return &field_496;
}

// 0x1009e8370
void Js5WorkerThread::Post(Js5WorkerMessageTypes::Type arg1) {
    shared_ptr<jag::PacketT<jag::Array<unsigned char>>> local_38;

    *(uint8_t*)&this[90]._vptr = 1;
    uint32_t local_24 = 1;
    jag::MakeSharedPool<jag::PacketT<jag::Array<unsigned char>>, 16192>::MakeShared<int>(&local_38);
    ((PacketT<jag::Array<unsigned char>>*)local_38.operator->())->p1<unsigned long>(arg1);
    Message(local_38);
}

// 0x1009f4680
bool Js5WorkerThread::IsJs5Connected() const {
    return *(int*)((long)&this[98]._vptr + 4) == 3;
}

// 0x1009f66b0
void Js5WorkerThread::OnResponse(jag::PacketT<jag::Array<unsigned char>>& arg1) {
    if (((this + 56)) != arg1) {
        std::function<void(jag::PacketT<jag::Array<unsigned char>>&)>::operator()(
            (function<void(jag::PacketT<jag::Array<unsigned char>>&)>*)(this + 56), arg1);
    }
}

// 0x1009faf40
Js5WorkerThread::~Js5WorkerThread() {
    ((this + 110))->~function();
    ((this + 104))->~function();
    ((this + 99))->~VBOMapper();
    ((this + 84))->~VBOMapper();
    ((this + 78))->~basic_string();
    ((this + 74))->~basic_string();
    ((this + 70))->~basic_string();
    ((this + 66))->~basic_string();
    ((this + 65))->~unique_ptr();
    ((this + 64))->~unique_ptr();
    ((this + 62))->~shared_ptr();
    ((this + 56))->~function();
}

namespace jag {
    // 0x10019bb60
    void PacketT<Array<unsigned char>>::pStringNoConversion<eastl::string>(const eastl::string& str, bool arg2) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2_00 = str.size();
        pStringNoConversion(this, str_00, arg2_00, arg2);
    }

    // 0x10019bbc0
    void PacketT<Array<unsigned char>>::pArrayBuffer(const PacketT<Array<unsigned char>>& arg1) {
        auto arg1_00 = GetDataPtr((PacketT<Array<unsigned char>>*)arg1);
        unsigned long arg3 = arg1.GetTextureAtlas();
        pArrayBuffer(this, arg1_00, 0, arg3);
    }

} // namespace jag
