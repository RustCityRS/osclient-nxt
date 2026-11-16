// libs/game/runetek5/network/pow/HashCashSolver.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "HashCashSolver.h"

namespace jag::game {
    // 0x100022b10: HashCashSolver::~HashCashSolver() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: HashCashSolver::~HashCashSolver() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10049fd60
    auto HashCashSolver::SolveChallenge(PacketT<Array<unsigned char>>& arg1) {
        PacketConstants local_24;

        auto result =
            std::make_unique<PacketT<Array<unsigned char>>, PacketT<Array<unsigned char>>::PacketConstants>(local_24);
        *result;
        SolveChallenge(arg1);
        return result;
    }

    // 0x10049fe40
    void HashCashSolver::SolveChallenge(PacketT<Array<unsigned char>>& arg1, PacketT<Array<unsigned char>>& arg2) {
        bool cVar1;
        unsigned int uVar2;
        int arg1_00;
        long long in_RCX;
        ReturnValue local_70;

        HashCashChallenge local_58(arg1);
        HashCashVerifier local_80(local_58);
        char* str = nullptr;
        while (true) {
            uVar2 = local_58.GetZ();
            local_70 = local_58.GetFullyQualifiedHeader();
            arg1_00 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            cVar1 = ((HashCashVerifier*)(unsigned long)uVar2)->VerifyAnswer(arg1_00, str, in_RCX);
            if (cVar1)
                break;
            str = str + 1;
        }
        arg2.p8<long long>((unsigned long long)str);
    }

} // namespace jag::game
