// libs/js5/network/Js5HTTPQueueRequest.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

#include "Js5HTTPQueueRequest.h"

namespace jag {
    // 0x1004f3660: the linker folded this into game::BaseConfigTypeList::GetLanguage() const, which has identical code
    Js5HTTPQueueRequest::GetPriority() const;

    // 0x10064c750: the linker folded this into game::CombinedLocation::SetConfigProviderDebug(game::ConfigProvider*), which has identical code
    Js5HTTPQueueRequest::SetProxyPassword(char const*);

    // 0x1009f1750, 48 bytes, complete-object constructor, placed by class name and debug map
    // Js5HTTPQueueRequest::Js5HTTPQueueRequest(unsigned int, unsigned int, int, int, unsigned int, bool, std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>, std::function<void (unsigned int, unsigned int, bool)>, PacketT<Array<unsigned char, eastl::allocator> >&&, Priority const*)
    /* Js5HTTPQueueRequest::Js5HTTPQueueRequest(unsigned int, unsigned int, int, int, unsigned int,
   bool, std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char,
   eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>,
   std::function<void (unsigned int, unsigned int, bool)>, PacketT<Array<unsigned char,
   eastl::allocator> >&&, Priority const*) */

    void Js5HTTPQueueRequest::Js5HTTPQueueRequest() {
        Js5HTTPQueueRequest();
    }

    // 0x1009f17c0, 16 bytes, complete-object destructor, placed by class name
    // Js5HTTPQueueRequest::~Js5HTTPQueueRequest(): jumps straight to the base-object destructor

    // 0x1009f1a70, 96 bytes, placed by class name
    // Js5HTTPQueueRequest::Service()
    void Js5HTTPQueueRequest::Service() {
        HTTPRequest* this_00;
        int iVar1;
        _func_decltype_nullptr* in_RSI;

        if ((m_complete == '\0') && (field_201 == '\0')) {
            this_00 =
                (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_160);
            iVar1 = this_00->GetState();
            if (iVar1 == 2) {
                DownloadFailed(this);
            } else {
                if (iVar1 != 1) {
                    return;
                }
                DownloadComplete(this);
            }
            std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(
                (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_160, in_RSI);
        }
    }

    // 0x1009f1ad0, 16 bytes, placed by class name
    // Js5HTTPQueueRequest::IsComplete()
    char Js5HTTPQueueRequest::IsComplete() {
        return m_complete;
    }

    // 0x1009f1ae0, 80 bytes, placed by class name
    // Js5HTTPQueueRequest::IsFailed()
    bool Js5HTTPQueueRequest::IsFailed() {
        bool bVar1;
        HTTPRequest* this_00;

        bVar1 = true;
        if (field_201 == '\0') {
            bVar1 = (&field_160)->operator_cast_to_bool();
            if (bVar1) {
                this_00 = (HTTPRequest*)
                              std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                  (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_160);
                bVar1 = this_00->GetState() == 2;
            } else {
                bVar1 = false;
            }
        }
        return bVar1;
    }

    // 0x1009f1c90, 352 bytes, placed by class name
    // Js5HTTPQueueRequest::Send(eastl::string const&)
    void Js5HTTPQueueRequest::Send(basic_string* param_1) {
        unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>* this;
        uint uVar1;
        uint uVar2;
        undefined8 uVar3;
        HTTPRequest* pHVar4;
        char* pcVar5;
        unique_ptr local_460[8];
        fixed_string<char, 1024, true, eastl::allocator> local_458[1064];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1[200] == (basic_string)0) {
            eastl::fixed_string<char, 1024, true, eastl::allocator>::fixed_string(local_458);
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar1 = *(uint*)param_1;
            uVar2 = game::Version::GetClientVersion();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_458, "%s/ms?m=0&a=%u&k=%d&g=%u&c=%d&v=%d", uVar3, (ulong)uVar1, (ulong)uVar2,
                        (ulong) * (uint*)(param_1 + 4), *(undefined4*)(param_1 + 8), *(undefined4*)(param_1 + 12));
            std::make_unique<http::HTTPRequest, int const&>((int*)local_460);
            this = (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)(param_1 + 160);
            std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(this, local_460);
            local_460->~unique_ptr();
            pcVar5 = *(char**)(param_1 + 208);
            if (pcVar5 != (char*)0) {
                pHVar4 =
                    (HTTPRequest*)
                        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(this);
                pHVar4->SetProxyUserName(pcVar5);
                pHVar4 =
                    (HTTPRequest*)
                        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(this);
                pHVar4->SetProxyPassword(*(char**)(param_1 + 216));
            }
            pHVar4 =
                (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    this);
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pHVar4->Get(pcVar5);
            /* WARNING: Subroutine does not return */
            local_458->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009f1df0, 256 bytes, base-object constructor, placed by class name
    // Js5HTTPQueueRequest::Js5HTTPQueueRequest(unsigned int, unsigned int, int, int, unsigned int, bool, std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>, std::function<void (unsigned int, unsigned int, bool)>, PacketT<Array<unsigned char, eastl::allocator> >&&, Priority const*)
    /* Js5HTTPQueueRequest::Js5HTTPQueueRequest(unsigned int, unsigned int, int, int, unsigned int,
   bool, std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char,
   eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>,
   std::function<void (unsigned int, unsigned int, bool)>, PacketT<Array<unsigned char,
   eastl::allocator> >&&, Priority const*) */

    void Js5HTTPQueueRequest::Js5HTTPQueueRequest(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                                                  undefined4 param_4, undefined4 param_5, bool param_6,
                                                  function* param_8, function* param_9, PacketT* param_10,
                                                  undefined8 param_11) {
        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        field_12 = param_4;
        field_16 = param_6;
        field_20 = param_5;
        new (field_24) PacketT<Array<unsigned char, eastl::allocator>>();
        m_priority = param_11;
        std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                           PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::
            function((function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                    PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>*)&field_64,
                     param_8);
        std::function<void(unsigned int, unsigned int, bool)>::function(
            (function<void(unsigned int, unsigned int, bool)>*)&field_112, param_9);
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::unique_ptr<true, void>(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_160);
        new (field_168) PacketT<Array<unsigned char, eastl::allocator>>();
        m_complete = '\0';
        field_201 = '\0';
        m_pProxyUserName = (char*)0;
        m_pProxyPassword = (char*)0;
        (field_24, param_10)->swap();
    }

    // 0x1009f1f10, 80 bytes, base-object destructor, placed by class name
    // Js5HTTPQueueRequest::~Js5HTTPQueueRequest()
    void Js5HTTPQueueRequest::~Js5HTTPQueueRequest() {
        field_168->~VBOMapper();
        (&field_160)->~unique_ptr();
        std::function<void(unsigned int, unsigned int, bool)>::~function(
            (function<void(unsigned int, unsigned int, bool)>*)&field_112);
        std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                           PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::
            ~function((function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                     PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>*)&field_64);
        field_24->~VBOMapper();
    }

    // 0x1009f1f60, 288 bytes, placed by class name
    // Js5HTTPQueueRequest::DownloadComplete()
    void Js5HTTPQueueRequest::DownloadComplete() {
        undefined1* this_00;
        int iVar2;
        HTTPRequest* pHVar3;
        basic_string<char, BucketAllocatorEASTL>* this_01;
        undefined8 uVar4;
        undefined8 uVar5;
        RT7Core* this_02;
        Array* pAVar6;
        VBOMapper local_40;

        this_00 = &field_160;
        pHVar3 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        this_01 = (basic_string<char, BucketAllocatorEASTL>*)pHVar3->GetContentType();
        iVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::compare(this_01, "application/octet-stream");
        if (iVar2 == 0) {
            m_complete = '\x01';
            this_02 = (RT7Core*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            pAVar6 = (Array*)this_02->GetMSAASampleCount();
            new (&local_40) PacketT<Array<unsigned char, eastl::allocator>>(pAVar6);
            PacketT<Array<unsigned char, eastl::allocator>>::operator=(
                (PacketT<Array<unsigned char, eastl::allocator>>*)field_168, (PacketT*)&local_40);
            local_40.~VBOMapper();
            if (std::operator!=((function*)&field_64, (_func_decltype_nullptr*)&local_40)) {
                std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                   PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::
                operator()((function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                                          PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>*)&field_64,
                           field_0, field_4, (PacketT*)field_168, (PacketT*)field_24, field_16);
            }
        } else {
            field_201 = '\x01';
            uVar4 = logger::default_logger();
            pHVar3 =
                (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            pHVar3->GetContentType();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/"
                                "Js5HTTPQueueRequest.cpp",
                                54, "HTTP request returned incorrect data type %s", uVar5);
        }
    }

    // 0x1009f20d0, 48 bytes, placed by class name
    // Js5HTTPQueueRequest::DownloadFailed()
    void Js5HTTPQueueRequest::DownloadFailed() {
        field_201 = '\x01';
        std::function<void(unsigned int, unsigned int, bool)>::operator()(
            (function<void(unsigned int, unsigned int, bool)>*)&field_112, field_0, field_4, field_16);
    }

} // namespace jag
