// libs/game/runetek5/compression/huffman/WordPack.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "WordPack.h"

namespace jag::game {
    // 0x1005f9510
    int WordPack::PackUTF8AsCP1252(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                   const eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        unsigned int uVar2;
        unsigned int arg5;
        int iVar3;
        Array<unsigned char, BucketAllocatorEASTL>* arg4;
        long lVar4;
        Logger* this_00;
        basic_string<char, BucketAllocatorEASTL> local_50;
        uint64_t local_38;

        if (Ready() == '\0') {
            this_00 = logger::default_logger();
            iVar3 = 0;
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                         "compression/huffman/WordPack.cpp",
                         13,
                         "WordPack.Pack - Huffman system is not yet ready. Always call WordPack.ready before using "
                         "this function!");
        } else {
            local_38 = arg1.size();
            local_50 = eastl::basic_string<char, BucketAllocatorEASTL>();
            stringtools::UTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(str, local_50);
            arg1.pSmart1or2(local_50.size());
            uVar2 = local_50.size();
            arg4 = (Array<unsigned char, BucketAllocatorEASTL>*)arg1.SSOBeginPtr();
            arg5 = arg1.size();
            uVar2 = Encode<Array<unsigned char, BucketAllocatorEASTL>>(local_50, 0, uVar2, *arg4, arg5);
            lVar4 = arg1.size();
            arg1.SetPos((unsigned long)uVar2 + lVar4);
            iVar3 = arg1.size();
            iVar3 = iVar3 - (int)local_38;
        }
        return iVar3;
    }

    // 0x1005f9740
    uint32_t WordPack::UnpackCP1252AsUTF8(eastl::basic_string<char, BucketAllocatorEASTL>& str,
                                          PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) {
        unsigned short uVar1;
        unsigned int uVar3;
        Array<unsigned char, BucketAllocatorEASTL>* arg1;
        long lVar4;
        Array<unsigned char> local_60;
        basic_string<char, BucketAllocatorEASTL> local_48;

        uint32_t uVar2 = Ready();
        if ((char)uVar2 == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/compression/"
                      "huffman/WordPack.cpp",
                      30,
                      "WordPack.Unpack - Huffman system is not yet ready. Always call WordPack.ready before using this "
                      "function!");
        } else {
            uVar1 = arg2.gSmart1or2();
            str.reserve((unsigned long)(uVar1 + 1));
            local_48 = eastl::basic_string<char, BucketAllocatorEASTL>();
            arg1 = (Array<unsigned char, BucketAllocatorEASTL>*)arg2.SSOBeginPtr();
            local_60.Array<BucketAllocatorEASTL>(*arg1);
            uVar3 = arg2.size();
            uVar3 = Decode(local_60, uVar3, local_48, 0, (unsigned int)uVar1);
            stringtools::CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(local_48, str);
            lVar4 = arg2.size();
            arg2.SetPos((unsigned long)uVar3 + lVar4);
        }
        return uVar2;
    }

} // namespace jag::game
