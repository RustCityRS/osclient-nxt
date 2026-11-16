// libs/game/runetek5/network/pow/HashCashSolver.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "HashCashSolver.h"

namespace jag::game {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    HashCashSolver::~HashCashSolver();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    HashCashSolver::~HashCashSolver();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    HashCashSolver::~HashCashSolver();

    // 0x10049fd60, 96 bytes, placed by class name and debug map
    // HashCashSolver::SolveChallenge(PacketT<Array<unsigned char, eastl::allocator> >&)
    HashCashSolver* HashCashSolver::SolveChallenge(PacketT* param_1) {
        std::make_unique<PacketT<Array<unsigned char, eastl::allocator>>,
                         PacketT<Array<unsigned char, eastl::allocator>>::PacketConstants>((PacketConstants*)this);
        std::unique_ptr<PacketT<Array<unsigned char, eastl::allocator>>,
                        std::default_delete<PacketT<Array<unsigned char, eastl::allocator>>>>::
        operator*((unique_ptr<PacketT<Array<unsigned char, eastl::allocator>>,
                              std::default_delete<PacketT<Array<unsigned char, eastl::allocator>>>>*)this);
        (*(code*)**(undefined8**)param_1)(param_1);
        return this;
    }

    // 0x10049fe40, 208 bytes, placed by class name and debug map
    // HashCashSolver::SolveChallenge(PacketT<Array<unsigned char, eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&)
    void HashCashSolver::SolveChallenge(PacketT* param_1, PacketT* param_2) {
        char* pcVar1;
        char cVar2;
        int iVar3;
        long lVar4;
        undefined1 local_80[40];
        HashCashChallenge local_58[2];

        HashCashChallenge::HashCashChallenge(local_58, param_1);
        new (local_80) HashCashVerifier(local_58);
        lVar4 = 0;
        while (true) {
            iVar3 = local_58->GetZ();
            ((local_80 + 16))->GetFullyQualifiedHeader();
            pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            cVar2 = iVar3->VerifyAnswer(pcVar1, lVar4);
            ((local_80 + 16))->~basic_string();
            if (cVar2 != '\0')
                break;
            lVar4 = lVar4 + 1;
        }
        PacketT<Array<unsigned char, eastl::allocator>>::p8<long long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_2, lVar4);
        local_58->~LanguageMessage();
    }

} // namespace jag::game
