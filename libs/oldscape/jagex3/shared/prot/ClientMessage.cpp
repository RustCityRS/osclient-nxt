// libs/oldscape/jagex3/shared/prot/ClientMessage.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "ClientMessage.h"

namespace jag::oldscape::shared {
    // 0x1000bc090: the linker folded this into ServerMessage::ServerMessage(), which has identical code
    ClientMessage::ClientMessage();

    // 0x100126500: the linker folded this into ServerMessage::ServerMessage(), which has identical code
    ClientMessage::ClientMessage();

    // 0x100292da0, 128 bytes, placed by class name and debug map
    // ClientMessage::MakeClientMessage(ClientProt::ID, Isaac&)
    ClientMessage* ClientMessage::MakeClientMessage(uint param_2, Isaac* param_3) {
        undefined1* this_00;
        int iVar1;

        ClientMessage(this);
        field_0 = param_2;
        iVar1 = *(int*)(PTR_SIZES_100ee6b70 + (ulong)param_2 * 4);
        field_4 = iVar1;
        this_00 = &field_8;
        GetOrCreatePacketMemory((PacketJ*)this_00, iVar1);
        this_00->SetEnc(param_3);
        this_00->pHead(param_2);
        field_56 = 0;
        return this;
    }

    // 0x100292e20, 240 bytes, placed by class name and debug map
    // ClientMessage::GetOrCreatePacketMemory(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, int)
    void ClientMessage::GetOrCreatePacketMemory(PacketJ* param_1, int param_2) {
        bool bVar1;
        char cVar2;
        long* plVar3;
        int* piVar4;
        ulong uVar5;

        plVar3 = (long*)OSRenderCore_AudioThread::Instance();
        cVar2 = (((long)plVar3 + *(long*)(*plVar3 + -24)))->IsLogicThread();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("OSRenderCore_LogicThread::Instance().IsLogicThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/shared/"
                      "prot/ClientMessage.cpp",
                      87, (char*)0);
        }
        if (param_2 == -1) {
            uVar5 = 1;
            bVar1 = false;
        } else if (param_2 == -2) {
            uVar5 = 2;
            bVar1 = true;
        } else {
            bVar1 = false;
            piVar4 = (int*)std::array<int, 3ul>::operator[](0);
            uVar5 = 0;
            if (*piVar4 + -2 < param_2) {
                piVar4 = (int*)std::array<int, 3ul>::operator[](1);
                bVar1 = *piVar4 + -2 < param_2;
                uVar5 = (ulong)bVar1 + 1;
            }
        }
        if (!bVar1) {
            cVar2 = ((&PacketPool::g_pools + uVar5 * 328))->Fetch(param_1);
            if (cVar2 != '\0')
                goto LAB_100292ef2;
        }
        piVar4 = (int*)std::array<int, 3ul>::operator[](uVar5);
        param_1->Reserve((long)*piVar4);
    LAB_100292ef2:
        param_1->SetPos(0);
    }

    // 0x100292fb0, 192 bytes, placed by class name and debug map
    // ClientMessage::ReturnToPool(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&&)
    void ClientMessage::ReturnToPool(PacketJ* param_1) {
        char cVar1;
        int iVar2;
        long* plVar3;
        int* piVar4;
        PacketPool* this;

        plVar3 = (long*)OSRenderCore_AudioThread::Instance();
        cVar1 = (((long)plVar3 + *(long*)(*plVar3 + -24)))->IsLogicThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("OSRenderCore_LogicThread::Instance().IsLogicThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/shared/"
                      "prot/ClientMessage.cpp",
                      128, (char*)0);
        }
        iVar2 = param_1->GetTextureAtlas();
        piVar4 = (int*)std::array<int, 3ul>::operator[](0);
        if (*piVar4 == iVar2) {
            this = (PacketPool*)&PacketPool::g_pools;
        } else {
            piVar4 = (int*)std::array<int, 3ul>::operator[](1);
            if (*piVar4 != iVar2) {
                if (iVar2 == 0) {
                    return;
                }
                piVar4 = (int*)std::array<int, 3ul>::operator[](2);
                if (*piVar4 != iVar2) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("sz == 0 || sz == PacketPool::SIZES[2]",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "shared/prot/ClientMessage.cpp",
                              141, (char*)0);
                }
                return;
            }
            this = (PacketPool*)&DAT_1016c1a58;
        }
        Return(param_1);
    }

} // namespace jag::oldscape::shared
