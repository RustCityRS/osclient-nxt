// libs/oldscape/jagex3/shared/prot/ClientMessage.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "ClientMessage.h"

namespace jag::oldscape::shared {
    // 0x100126500: ClientMessage::ClientMessage() has the same machine code as ServerMessage::ServerMessage()

    // 0x100292da0
    auto ClientMessage::MakeClientMessage(ClientProt::ID id, Isaac& isaac) {
        auto result;

        ClientMessage(&result);
        result = id;
        int arg2 = *(int*)(PTR_SIZES_100ee6b70 + (unsigned long)id * 4);
        *(int*)&result.field_4 = arg2;
        SuperPacket* superPacket = (SuperPacket*)(&result + 1);
        GetOrCreatePacketMemory((PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>*)superPacket, arg2);
        superPacket->SetEnc(isaac);
        superPacket->pHead(id);
        *(uint32_t*)(&result + 7) = 0;
        return result;
    }

    // 0x100292e20
    void ClientMessage::GetOrCreatePacketMemory(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                int arg2) {
        bool bVar1;
        int* piVar4;
        uint32_t in_register_00000034;
        array<int, 3ul>* array;

        PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>* arg1 =
            (PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>*)(((uint64_t)in_register_00000034 << 32) |
                                                                     (uint32_t)arg2);
        auto plVar3 = OSRenderCore_AudioThread::Instance();
        bool cVar2 = ((OSRenderCore_LogicThread_Common*)((long)plVar3 + *(long*)(*plVar3 - 24)))->IsLogicThread();
        if (!cVar2) {
            LogAssert("OSRenderCore_LogicThread::Instance().IsLogicThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/shared/"
                      "prot/ClientMessage.cpp",
                      87, nullptr);
        }
        if (arg2 == -1) {
            array = (array<int, 3ul>*)&DAT_00000001;
            bVar1 = false;
        } else if (arg2 == -2) {
            array = (array<int, 3ul>*)2;
            bVar1 = true;
        } else {
            bVar1 = false;
            piVar4 = &nullptr[(unsigned long)arg1];
            array = nullptr;
            if (*piVar4 - 2 < arg2) {
                piVar4 = &DAT_00000001[(unsigned long)arg1];
                bVar1 = *piVar4 - 2 < arg2;
                array = (array<int, 3ul>*)((unsigned long)bVar1 + 1);
            }
        }
        if (!bVar1) {
            arg1 = packetJ;
            cVar2 = ((PacketPool*)(&PacketPool::g_pools + (long)array * 328))->Fetch(packetJ);
            if (cVar2)
                goto LAB_100292ef2;
        }
        piVar4 = (int*)(*array)[(unsigned long)arg1];
        packetJ.Reserve((long)*piVar4);
    LAB_100292ef2:
        packetJ.SetPos(0);
    }

    // 0x100292fb0
    void ClientMessage::ReturnToPool(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&& packetJ) {
        PacketPool* this_00;

        auto plVar3 = OSRenderCore_AudioThread::Instance();
        if (((OSRenderCore_LogicThread_Common*)((long)plVar3 + *(long*)(*plVar3 - 24)))->IsLogicThread() == '\0') {
            LogAssert("OSRenderCore_LogicThread::Instance().IsLogicThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/shared/"
                      "prot/ClientMessage.cpp",
                      128, nullptr);
        }
        int iVar2 = GetTextureAtlas();
        int* piVar4 = &nullptr[(unsigned long)packetJ];
        if (*piVar4 == iVar2) {
            this_00 = (PacketPool*)&PacketPool::g_pools;
        } else {
            piVar4 = &DAT_00000001[(unsigned long)packetJ];
            if (*piVar4 != iVar2) {
                if (iVar2 == 0) {
                    return;
                }
                piVar4 = (int*)(*2)[(unsigned long)packetJ];
                if (*piVar4 != iVar2) {
                    LogAssert("sz == 0 || sz == PacketPool::SIZES[2]",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "shared/prot/ClientMessage.cpp",
                              141, nullptr);
                }
                return;
            }
            this_00 = (PacketPool*)&reinterpret_cast<const uint64_t*>(&g_pools)[41];
        }
        this_00->Return(*this);
    }

} // namespace jag::oldscape::shared
