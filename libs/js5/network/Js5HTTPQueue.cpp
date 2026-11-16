// libs/js5/network/Js5HTTPQueue.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

#include "Js5HTTPQueue.h"

namespace jag {
    // 0x1009f1490
    unsigned int
    Js5HTTPQueue::RequestData(unsigned int arg1, unsigned int arg2, int arg3, int arg4, unsigned int arg5, bool arg6,
                              std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                                 PacketT<Array<unsigned char>>&&, bool)>
                                  callback1,
                              std::function<void(unsigned int, unsigned int, bool)> callback2,
                              PacketT<Array<unsigned char>>&& arg9, const Priority* priority) {
        unsigned int uVar1;
        Js5HTTPQueueRequest* pJVar4;
        char* str;
        ConfigProvider* configProvider;
        pair<int, Js5HTTPQueueRequest*>* arg1_00;
        pair<int, Js5HTTPQueueRequest*>* ppVar5;
        long lVar6;
        Logger* this_00;
        uint64_t* puVar7;
        int* this_01;
        function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&, PacketT<Array<unsigned char>>&&,
                      bool)>* this_02;
        uint32_t uVar8;
        int local_b4;
        unsigned int local_ac;
        Js5HTTPQueueRequest* local_a8;
        unsigned int local_a0;
        unsigned int local_9c;
        function<void(unsigned int, unsigned int, bool)> local_98[48];
        function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&, PacketT<Array<unsigned char>>&&,
                      bool)>
            local_68[48];
        long local_38;

        local_a8 = (Js5HTTPQueueRequest*)(((uint64_t)local_a8._4_4_ << 32) | (uint32_t)arg4);
        int local_b0 = arg3;
        unsigned int uVar3 = IsPrefetchQueueFull();
        if ((char)uVar3 == '\0') {
            local_ac = arg5;
            local_a0 = arg1;
            local_9c = arg2;
            pJVar4 = (Js5HTTPQueueRequest*)BucketManager::Allocate(224, 0, 16);
            this_02 = local_68;
            new (this_02) std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                             PacketT<Array<unsigned char>>&&, bool)>(*callback1);
            new (local_98) std::function<void(unsigned int, unsigned int, bool)>(*callback2);
            new (pJVar4) Js5HTTPQueueRequest(local_a0, local_9c, local_b0, (int)local_a8, local_ac, arg6, this_02,
                                             local_98, arg9, priority);
            uVar8 = (uint32_t)((unsigned long)this_02 >> 32);
            if (!(field_96.empty())) {
                str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pJVar4->SetProxyUserName(str);
                configProvider = (ConfigProvider*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pJVar4->SetProxyPassword(configProvider);
            }
            local_a8 = pJVar4;
            pJVar4->GetKey();
            this_01 = &field_32;
            arg1_00 =
                (pair<int, Js5HTTPQueueRequest*>*)eastl::vector_map<int, graphics::Material const*>::find(*this_01);
            ppVar5 = (pair<int, Js5HTTPQueueRequest*>*)this_01->end();
            if (arg1_00 != ppVar5) {
                pJVar4 = *(Js5HTTPQueueRequest**)(arg1_00 + 8);
                uVar1 = *(unsigned int*)(priority + 8);
                lVar6 = pJVar4->GetPriority();
                if (*(unsigned int*)(lVar6 + 8) <= uVar1) {
                    LogAssert("priority->id < old->GetPriority()->id",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/"
                              "Js5HTTPQueue.cpp",
                              37, "RequestData http received same request");
                }
                this_00 = logger::default_logger();
                this_00->Log(false, 3,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/"
                             "Js5HTTPQueue.cpp",
                             38, "Found existing http prefetchQueueRequest for %u,%u", local_a0,
                             (((uint64_t)uVar8 << 32) | (uint32_t)local_9c));
                this_01->erase(arg1_00);
                pJVar4->~Js5HTTPQueueRequest();
                BucketManager::DeAllocate(pJVar4);
            }
            pJVar4 = local_a8;
            local_b4 = local_a8->GetKey();
            puVar7 = (uint64_t*)(*this_01)[local_b4];
            *puVar7 = pJVar4;
        }
        return uVar3 ^ 1;
    }

    // 0x1009f1860
    uint64_t Js5HTTPQueue::Service() {
        Js5HTTPQueueRequest* pJVar1;
        uint64_t uVar2;
        bool cVar3;
        unsigned long uVar5;
        uint64_t* puVar6;
        long lVar7;
        long* plVar8;
        unsigned long uVar9;
        unsigned long uVar10;
        unsigned long uVar11;

        uint8_t* this_00 = &field_72;
        long lVar4 = this_00->end();
        if (lVar4 != 0) {
            uVar11 = 1;
            uVar9 = 0;
            do {
                uVar10 = uVar11;
                puVar6 = (uint64_t*)(*this_00)[uVar9];
                pJVar1 = (Js5HTTPQueueRequest*)*puVar6;
                if (pJVar1 != nullptr) {
                    pJVar1->Service();
                    cVar3 = pJVar1->IsComplete();
                    if ((cVar3) || (cVar3 = pJVar1->IsFailed(), cVar3)) {
                        pJVar1->~Js5HTTPQueueRequest();
                        BucketManager::DeAllocate(pJVar1);
                        puVar6 = (uint64_t*)(*this_00)[uVar9];
                        *puVar6 = 0;
                    }
                }
                uVar5 = this_00->end();
                uVar11 = (unsigned long)((int)uVar10 + 1);
                uVar9 = uVar10;
            } while (uVar10 < uVar5);
        }
        int* this_01 = &field_32;
        lVar4 = this_01->HeapBeginPtr();
        do {
            lVar7 = this_01->end();
            if (lVar4 == lVar7) {
                this_01->clear();
                return 1;
            }
            pJVar1 = *(Js5HTTPQueueRequest**)(lVar4 + 8);
            SendRequest(pJVar1);
            lVar7 = this_00->end();
            if (lVar7 != 0) {
                uVar11 = 0;
                do {
                    plVar8 = (long*)(*this_00)[uVar11];
                    if (*plVar8 == 0) {
                        uVar2 = *(uint64_t*)(lVar4 + 8);
                        puVar6 = (uint64_t*)(*this_00)[uVar11];
                        *puVar6 = uVar2;
                        goto LAB_1009f1910;
                    }
                    uVar11 = (unsigned long)((int)uVar11 + 1);
                    uVar9 = this_00->end();
                } while (uVar11 < uVar9);
            }
            if (pJVar1 != nullptr) {
                lVar7 = this_00->end();
                this_00->set_max_size(lVar7 + 1, 3);
                lVar7 = this_00->end();
                puVar6 = (uint64_t*)(*this_00)[lVar7 - 1];
                *puVar6 = pJVar1;
            }
        LAB_1009f1910:
            lVar4 = lVar4 + 16;
        } while (true);
    }

    // 0x1009f1b30
    void Js5HTTPQueue::SendRequest(Js5HTTPQueueRequest* js5HTTPQueueRequest) {
        js5HTTPQueueRequest->Send(*this);
    }

} // namespace jag
