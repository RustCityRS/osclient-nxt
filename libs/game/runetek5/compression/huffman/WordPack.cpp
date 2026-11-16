// libs/game/runetek5/compression/huffman/WordPack.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "WordPack.h"

namespace jag::game {
    // 0x1005f9510, 288 bytes, placed by class name and debug map
    // WordPack::PackUTF8AsCP1252(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, eastl::basic_string<char, BucketAllocatorEASTL> const&)
    int WordPack::PackUTF8AsCP1252(PacketT* param_1, basic_string* param_2) {
        ushort uVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;
        vector* pvVar6;
        long lVar7;
        undefined8 uVar8;
        type* ptVar9;
        basic_string local_50[24];
        undefined8 local_38;

        if (Ready() == '\0') {
            uVar8 = logger::default_logger();
            iVar5 = 0;
            logger::Logger::Log(uVar8, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "compression/huffman/WordPack.cpp",
                                13,
                                "WordPack.Pack - Huffman system is not yet ready. Always call WordPack.ready before "
                                "using this function!");
        } else {
            local_38 = param_1->size();
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            stringtools::UTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(param_2, local_50);
            uVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            ptVar9 = (type*)(ulong)uVar2;
            param_1->pSmart1or2(uVar2);
            uVar3 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            pvVar6 = param_1->SSOBeginPtr(ptVar9);
            uVar4 = param_1->size();
            uVar3 = Huffman::Encode<Array<unsigned char, BucketAllocatorEASTL>>((Huffman*)this, local_50, 0, uVar3,
                                                                                (Array*)pvVar6, uVar4);
            lVar7 = param_1->size();
            param_1->SetPos((ulong)uVar3 + lVar7);
            iVar5 = param_1->size();
            iVar5 = iVar5 - (int)local_38;
            local_50->~basic_string();
        }
        return iVar5;
    }

    // 0x1005f9740, 288 bytes, placed by class name and debug map
    // WordPack::UnpackCP1252AsUTF8(eastl::basic_string<char, BucketAllocatorEASTL>&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    undefined4 WordPack::UnpackCP1252AsUTF8(basic_string* param_1, PacketT* param_2) {
        ushort uVar1;
        undefined4 uVar2;
        uint uVar3;
        vector* pvVar4;
        long lVar5;
        undefined8 uVar6;
        type* ptVar7;
        Array<unsigned char, eastl::allocator> local_60[24];
        basic_string local_48[24];

        uVar2 = Ready();
        if ((char)uVar2 == '\0') {
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "compression/huffman/WordPack.cpp",
                                30,
                                "WordPack.Unpack - Huffman system is not yet ready. Always call WordPack.ready before "
                                "using this function!");
        } else {
            uVar1 = param_2->gSmart1or2();
            ptVar7 = (type*)(ulong)(uVar1 + 1);
            param_1->reserve((ulong)ptVar7);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            pvVar4 = param_2->SSOBeginPtr(ptVar7);
            Array<unsigned char, eastl::allocator>::Array<BucketAllocatorEASTL>(local_60, (Array*)pvVar4);
            uVar3 = param_2->size();
            uVar3 = Decode(local_60, uVar3, local_48, 0, (uint)uVar1);
            local_60->~Array();
            stringtools::CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(local_48, param_1);
            lVar5 = param_2->size();
            param_2->SetPos((ulong)uVar3 + lVar5);
            local_48->~basic_string();
        }
        return uVar2;
    }

} // namespace jag::game
