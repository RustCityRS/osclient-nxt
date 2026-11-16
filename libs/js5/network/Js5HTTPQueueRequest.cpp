// libs/js5/network/Js5HTTPQueueRequest.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

#include "Js5HTTPQueueRequest.h"

namespace jag {
    // 0x1004f3660: Js5HTTPQueueRequest::GetPriority() const has the same machine code as game::BaseConfigTypeList::GetLanguage() const

    // 0x10064c750: Js5HTTPQueueRequest::SetProxyPassword(char const*) has the same machine code as game::CombinedLocation::SetConfigProviderDebug(game::ConfigProvider*)

    // 0x1009f1a70
    void Js5HTTPQueueRequest::Service() {
        int iVar1;
        void* in_RSI;

        if ((m_complete == '\0') && (field_201 == '\0')) {
            iVar1 = ((HTTPRequest*)field_160.operator->())->GetState();
            if (iVar1 == 2) {
                DownloadFailed();
            } else {
                if (iVar1 != 1) {
                    return;
                }
                DownloadComplete();
            }
            field_160 = in_RSI;
        }
    }

    // 0x1009f1ad0
    bool Js5HTTPQueueRequest::IsComplete() {
        return m_complete;
    }

    // 0x1009f1ae0
    bool Js5HTTPQueueRequest::IsFailed() {
        bool bVar3 = true;
        if (field_201 == '\0') {
            if ((&field_160)->operator_cast_to_bool() == '\0') {
                bVar3 = false;
            } else {
                bVar3 = ((HTTPRequest*)field_160.operator->())->GetState() == 2;
            }
        }
        return bVar3;
    }

    // 0x1009f1c90
    void Js5HTTPQueueRequest::Send(const eastl::string& str) {
        uint8_t* this_00;
        unsigned int uVar1;
        unsigned int uVar2;
        uint64_t uVar3;
        HTTPRequest* pHVar4;
        char* pcVar5;
        ReturnValue local_460;
        fixed_string<char, 1024> local_458;

        if (m_complete == '\0') {
            local_458 = eastl::fixed_string<char, 1024>();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar1 = field_0;
            uVar2 = game::Version::GetClientVersion();
            local_458.sprintf("%s/ms?m=0&a=%u&k=%d&g=%u&c=%d&v=%d", uVar3, (unsigned long)uVar1, (unsigned long)uVar2,
                              (unsigned long)field_4, field_8, field_12);
            local_460 = std::make_unique<http::HTTPRequest, int const&>(field_20);
            this_00 = &field_160;
            *this_00 = &local_460;
            pcVar5 = m_pProxyUserName;
            if (pcVar5 != nullptr) {
                pHVar4 = (HTTPRequest*)(*this_00).operator->();
                pHVar4->SetProxyUserName(pcVar5);
                pHVar4 = (HTTPRequest*)(*this_00).operator->();
                pHVar4->SetProxyPassword(m_pProxyPassword);
            }
            pHVar4 = (HTTPRequest*)(*this_00).operator->();
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pHVar4->Get(pcVar5);
        }
    }

    // 0x1009f1df0
    Js5HTTPQueueRequest::Js5HTTPQueueRequest(
        unsigned int arg1, unsigned int arg2, int arg3, int arg4, unsigned int arg5, bool arg6,
        std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&, PacketT<Array<unsigned char>>&&,
                           bool)>
            callback1,
        std::function<void(unsigned int, unsigned int, bool)> callback2, PacketT<Array<unsigned char>>&& arg9,
        const Priority* priority)
        : field_0(arg1), field_4(arg2), field_8(arg3), field_12(arg4), field_16(arg6), field_20(arg5),
          m_pPriority(priority), field_64(*callback1), field_112(*callback2) {
        field_160.unique_ptr<true, void>();
        new (field_168) PacketT();
        m_complete = '\0';
        field_201 = '\0';
        m_pProxyUserName = nullptr;
        m_pProxyPassword = nullptr;
        field_24->swap(arg9);
    }

    // 0x1009f1f10
    Js5HTTPQueueRequest::~Js5HTTPQueueRequest() {
        field_168->~VBOMapper();
        field_112.~function();
        field_64.~function();
        field_24->~VBOMapper();
    }

    // 0x1009f1f60
    void Js5HTTPQueueRequest::DownloadComplete() {
        Logger* this_02;
        uint64_t uVar4;
        RT7Core* this_03;
        Array<unsigned char>* arg1;
        VBOMapper local_40;

        uint8_t* this_00 = &field_160;
        HTTPRequest* pHVar3 = (HTTPRequest*)(*this_00).operator->();
        if (((basic_string<char, BucketAllocatorEASTL>*)pHVar3->GetContentType())
                ->compare("application/octet-stream") == 0) {
            m_complete = '\x01';
            this_03 = (RT7Core*)(*this_00).operator->();
            arg1 = (Array<unsigned char>*)this_03->GetMSAASampleCount();
            local_40 = PacketT(arg1);
            *field_168 = local_40;
            if (&field_64 != &local_40) {
                std::function<void(
                    unsigned int, unsigned int, PacketT<Array<unsigned char>>&, PacketT<Array<unsigned char>>&&,
                    bool)>::operator()((function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                                      PacketT<Array<unsigned char>>&&, bool)>*)&field_64,
                                       field_0, field_4, (PacketT<Array<unsigned char> _>*)field_168,
                                       (PacketT<Array<unsigned char> _>*)field_24, field_16);
            }
        } else {
            field_201 = '\x01';
            this_02 = logger::default_logger();
            pHVar3 = (HTTPRequest*)(*this_00).operator->();
            pHVar3->GetContentType();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_02->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/"
                         "Js5HTTPQueueRequest.cpp",
                         54, "HTTP request returned incorrect data type %s", uVar4);
        }
    }

    // 0x1009f20d0
    void Js5HTTPQueueRequest::DownloadFailed() {
        field_201 = '\x01';
        std::function<void(unsigned int, unsigned int, bool)>::operator()(
            (function<void(unsigned int, unsigned int, bool)>*)&field_112, field_0, field_4, field_16);
    }

} // namespace jag
