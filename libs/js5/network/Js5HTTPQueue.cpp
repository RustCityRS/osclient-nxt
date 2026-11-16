// libs/js5/network/Js5HTTPQueue.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

#include "Js5HTTPQueue.h"

namespace jag {
    // 0x1009f1490, 640 bytes, placed by class name and debug map
    // Js5HTTPQueue::RequestData(unsigned int, unsigned int, int, int, unsigned int, bool, std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>, std::function<void (unsigned int, unsigned int, bool)>, PacketT<Array<unsigned char, eastl::allocator> >&&, Priority const*)
    /* Js5HTTPQueue::RequestData(unsigned int, unsigned int, int, int, unsigned int, bool,
   std::function<void (unsigned int, unsigned int, PacketT<Array<unsigned char,
   eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&&, bool)>,
   std::function<void (unsigned int, unsigned int, bool)>, PacketT<Array<unsigned char,
   eastl::allocator> >&&, Priority const*) */

    uint Js5HTTPQueue::RequestData(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                   undefined4 param_5, undefined1 param_6, function* param_8, function* param_9,
                                   undefined8 param_10, long param_11) {
        uint uVar1;
        char cVar2;
        uint uVar3;
        Js5HTTPQueueRequest* pJVar4;
        char* pcVar5;
        pair* ppVar6;
        pair* ppVar7;
        long lVar8;
        undefined8 uVar9;
        undefined8* puVar10;
        undefined1* this_00;
        function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                      PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>* this_01;
        undefined4 uVar11;
        int local_b8;
        int local_b4;
        undefined4 local_b0;
        undefined4 local_ac;
        Js5HTTPQueueRequest* local_a8;
        undefined4 local_a0;
        undefined4 local_9c;
        function<void(unsigned int, unsigned int, bool)> local_98[48];
        function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                      PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>
            local_68[48];
        long local_38;

        local_a8 = (Js5HTTPQueueRequest*)CONCAT44(local_a8._4_4_, param_4);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_b0 = param_3;
        uVar3 = IsPrefetchQueueFull(this);
        if ((char)uVar3 == '\0') {
            local_ac = param_5;
            local_a0 = param_1;
            local_9c = param_2;
            pJVar4 = (Js5HTTPQueueRequest*)BucketManager::Allocate(224, 0, 16);
            this_01 = local_68;
            std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                               PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::function(this_01, param_8);
            std::function<void(unsigned int, unsigned int, bool)>::function(local_98, param_9);
            Js5HTTPQueueRequest::Js5HTTPQueueRequest(pJVar4, local_a0, local_9c, local_b0, (ulong)local_a8 & 4294967295,
                                                     local_ac, param_6, this_01, local_98, param_10, param_11);
            uVar11 = (undefined4)((ulong)this_01 >> 32);
            std::function<void(unsigned int, unsigned int, bool)>::~function(local_98);
            std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                               PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>::~function(local_68);
            cVar2 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar2 == '\0') {
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pJVar4->SetProxyUserName(pcVar5);
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pJVar4->SetProxyPassword(pcVar5);
            }
            local_a8 = pJVar4;
            local_b8 = pJVar4->GetKey();
            this_00 = &field_32;
            ppVar6 = (pair*)this_00->find(&local_b8);
            ppVar7 = (pair*)this_00->end();
            if (ppVar6 != ppVar7) {
                pJVar4 = *(Js5HTTPQueueRequest**)(ppVar6 + 8);
                uVar1 = *(uint*)(param_11 + 8);
                lVar8 = pJVar4->GetPriority();
                if (*(uint*)(lVar8 + 8) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("priority->id < old->GetPriority()->id",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/"
                              "Js5HTTPQueue.cpp",
                              37, "RequestData http received same request");
                }
                uVar9 = logger::default_logger();
                logger::Logger::Log(uVar9, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/network/"
                                    "Js5HTTPQueue.cpp",
                                    38, "Found existing http prefetchQueueRequest for %u,%u", local_a0,
                                    CONCAT44(uVar11, local_9c));
                this_00->erase(ppVar6);
                pJVar4->~Js5HTTPQueueRequest();
                BucketManager::DeAllocate(pJVar4);
            }
            pJVar4 = local_a8;
            local_b4 = local_a8->GetKey();
            puVar10 = (undefined8*)
                eastl::vector_map<int, Js5HTTPQueueRequest*, eastl::less<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, Js5HTTPQueueRequest*>, eastl::allocator>>::
                operator[](
                    (vector_map<int, Js5HTTPQueueRequest*, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, Js5HTTPQueueRequest*>, eastl::allocator>>*)this_00,
                    &local_b4);
            *puVar10 = pJVar4;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar3 ^ 1;
    }

    // 0x1009f1860, 400 bytes, placed by class name
    // Js5HTTPQueue::Service()
    undefined8 Js5HTTPQueue::Service() {
        undefined1* this_00;
        Js5HTTPQueueRequest* pJVar1;
        undefined8 uVar2;
        char cVar3;
        long lVar4;
        ulong uVar5;
        undefined8* puVar6;
        long lVar7;
        long* plVar8;
        ulong uVar9;
        ulong uVar10;
        ulong uVar11;

        this_00 = &field_72;
        lVar4 = this_00->end();
        if (lVar4 != 0) {
            uVar11 = 1;
            uVar9 = 0;
            do {
                uVar10 = uVar11;
                puVar6 = (undefined8*)Array<Js5HTTPQueueRequest*, eastl::allocator>::operator[](
                    (Array<Js5HTTPQueueRequest*, eastl::allocator>*)this_00, uVar9);
                pJVar1 = (Js5HTTPQueueRequest*)*puVar6;
                if (pJVar1 != (Js5HTTPQueueRequest*)0) {
                    pJVar1->Service();
                    cVar3 = pJVar1->IsComplete();
                    if ((cVar3 != '\0') || (cVar3 = pJVar1->IsFailed(), cVar3 != '\0')) {
                        pJVar1->~Js5HTTPQueueRequest();
                        BucketManager::DeAllocate(pJVar1);
                        puVar6 = (undefined8*)Array<Js5HTTPQueueRequest*, eastl::allocator>::operator[](
                            (Array<Js5HTTPQueueRequest*, eastl::allocator>*)this_00, uVar9);
                        *puVar6 = 0;
                    }
                }
                uVar5 = this_00->end();
                uVar11 = (ulong)((int)uVar10 + 1);
                uVar9 = uVar10;
            } while (uVar10 < uVar5);
        }
        lVar4 = (&field_32)->HeapBeginPtr();
        do {
            lVar7 = (&field_32)->end();
            if (lVar4 == lVar7) {
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                return 1;
            }
            pJVar1 = *(Js5HTTPQueueRequest**)(lVar4 + 8);
            SendRequest(this, pJVar1);
            lVar7 = this_00->end();
            if (lVar7 != 0) {
                uVar11 = 0;
                do {
                    plVar8 = (long*)Array<Js5HTTPQueueRequest*, eastl::allocator>::operator[](
                        (Array<Js5HTTPQueueRequest*, eastl::allocator>*)this_00, uVar11);
                    if (*plVar8 == 0) {
                        uVar2 = *(undefined8*)(lVar4 + 8);
                        puVar6 = (undefined8*)Array<Js5HTTPQueueRequest*, eastl::allocator>::operator[](
                            (Array<Js5HTTPQueueRequest*, eastl::allocator>*)this_00, uVar11);
                        *puVar6 = uVar2;
                        goto LAB_1009f1910;
                    }
                    uVar11 = (ulong)((int)uVar11 + 1);
                    uVar9 = this_00->end();
                } while (uVar11 < uVar9);
            }
            if (pJVar1 != (Js5HTTPQueueRequest*)0) {
                lVar7 = this_00->end();
                this_00->set_max_size(lVar7 + 1, 3);
                lVar7 = this_00->end();
                puVar6 = (undefined8*)Array<Js5HTTPQueueRequest*, eastl::allocator>::operator[](
                    (Array<Js5HTTPQueueRequest*, eastl::allocator>*)this_00, lVar7 - 1);
                *puVar6 = pJVar1;
            }
        LAB_1009f1910:
            lVar4 = lVar4 + 16;
        } while (true);
    }

    // 0x1009f1b30, 32 bytes, placed by class name
    // Js5HTTPQueue::SendRequest(Js5HTTPQueueRequest*)
    void Js5HTTPQueue::SendRequest(Js5HTTPQueueRequest* param_1) {
        Js5HTTPQueueRequest::Send((basic_string*)param_1);
    }

} // namespace jag
