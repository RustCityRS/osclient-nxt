// libs/js5/Js5LocalModeLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

#include "Js5LocalModeLoader.h"

namespace jag {
    // 0x1004491a0: Js5LocalModeLoader::GetIndex() const has the same machine code as game::CombinedLocationSection::GetHighlightState()

    // 0x1009dfc30
    Js5LocalModeLoader::Js5LocalModeLoader(const Js5ArchiveSettings* js5ArchiveSettings, const Filename& filename,
                                           bool arg3, bool arg4) {
        uint32_t uVar3;
        char* pcVar5;
        Logger* this_02;
        uint64_t uVar8;
        Array<unsigned int>* this_03;
        unsigned int* puVar9;
        PacketT<Array<unsigned char>>* pPVar10;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* pPVar11;
        uint64_t in_register_00000009;
        uint64_t in_register_00000081;
        unsigned long arg1_00;
        ReturnValue local_268;
        char local_238;
        char local_234;

        _local_234 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        _local_238 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        field_0 = js5ArchiveSettings;
        Filename* local_240 = (Filename*)&field_8;
        new (local_240) Filename(filename);
        GeometryBatchInstance* pGVar12 = (GeometryBatchInstance*)m_index;
        new (pGVar12) Js5Index();
        uint8_t* this_00 = &field_584;
        new (this_00) eastl::vector<PacketT<Array<unsigned char>>>();
        uint8_t* this_01 = field_616;
        new (this_01) PacketT();
        *(uint64_t*)(field_616 + 32) = 0;
        if (!(filename.Exists())) {
            pcVar5 = filename.GetName();
            LogAssert(
                "file.Exists()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 18,
                "Js5LocalModeLoader: Requested file does not exist: %s", pcVar5);
        }
        File local_170(local_240, 0, nullptr);
        ReadSection((Js5LocalModeLoader*)&local_218, &local_170);
        *this_01 = local_218;
        auto puVar6 = this_01->GetDataPtr();
        unsigned long uVar7 = this_01->GetTextureAtlas();
        unsigned int uVar2 = CRC32(puVar6, uVar7, 4294967295);
        GeometryBatchInstance* local_230 = pGVar12;
        TextureAtlasReference* local_220 = (TextureAtlasReference*)this_01;
        Whirlpool local_218;
        puVar6 = (unsigned char*)local_220->GetDataPtr();
        uVar7 = local_220->GetTextureAtlas();
        local_218.Update(puVar6, uVar7);
        Array<unsigned char, SafeBucketAllocatorEASTL> local_280(64);
        puVar6 = (unsigned char*)local_280.data();
        TextureAtlasReference* arg1 = local_220;
        local_218.Final(puVar6);
        VBOMapper local_2a0 = Js5Compression::Decompress(*arg1, 1);
        arg1->SetPos(0);
        if (1 == 1) {
            this_02 = logger::default_logger();
            uVar3 = field_0->GetX();
            local_268 = local_220->ToString();
            uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_02->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 37,
                "Error decompressing index: archive=%ui, packet=%s", uVar3, uVar8);
            pGVar12 = local_230;
        }
        local_268.Array<SafeBucketAllocatorEASTL>(local_280);
        pGVar12->Init(uVar2, local_268, local_2a0);
        int iVar4 = pGVar12->GetAnimationLength();
        this_00->resize((unsigned long)(iVar4 + 1));
        pGVar12 = local_230;
        if ((local_238 == '\0') && (local_234 == '\0')) {
            this_03 = (Array<unsigned int>*)local_230->GetMaterial();
            iVar4 = pGVar12->GetEndPosition();
            if (iVar4 != 0) {
                uVar7 = 0;
                do {
                    puVar9 = (unsigned int*)(*this_03)[uVar7];
                    arg1_00 = (unsigned long)*puVar9;
                    ReadSection(&local_268, &local_170);
                    pPVar10 = (PacketT<Array<unsigned char>>*)(*this_00)[arg1_00];
                    *pPVar10 = local_268;
                    pPVar10 = (PacketT<Array<unsigned char>>*)(*this_00)[arg1_00];
                    pPVar10->SetPos(0);
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*this_00)[arg1_00];
                    if (pPVar11->g1()) {
                        pPVar10 = (PacketT<Array<unsigned char>>*)(*this_00)[arg1_00];
                        pPVar10->SetPos(5);
                    }
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*this_00)[arg1_00];
                    uVar2 = pPVar11->g4();
                    *(unsigned long*)(field_616 + 32) = *(long*)(field_616 + 32) + (unsigned long)uVar2;
                    uVar7 = uVar7 + 1;
                    uVar2 = local_230->GetEndPosition();
                } while (uVar7 < uVar2);
            }
        }
    }

    // 0x1009e0120
    Js5LocalModeLoader* Js5LocalModeLoader::ReadSection(File& file) {
        VBOMapper local_68(4);
        auto puVar4 = local_68.GetDataPtr();
        long lVar5 = file.read(puVar4, 1, 0, nullptr);
        if (lVar5 != 1) {
            LogAssert(
                "read == 1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 138,
                "Js5LocalModeLoader: Failed to read compression type in section");
        }
        uint8_t bVar2 = local_68.g1();
        Js5LocalModeLoader* pJVar1 = this;
        local_68.SetPos(0);
        puVar4 = (unsigned char*)local_68.GetDataPtr();
        lVar5 = file.read(puVar4, 4, 0, nullptr);
        if (lVar5 != 4) {
            LogAssert(
                "read == 4",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 142,
                "Js5LocalModeLoader: Failed to read compressed length in section");
        }
        unsigned int uVar3 = local_68.g4();
        unsigned int arg2 = uVar3 + 4;
        if (bVar2 == 0) {
            arg2 = uVar3;
        }
        uint8_t local_31 = bVar2;
        lVar5 = file.tell();
        unsigned long uVar6 = file.length(nullptr);
        if (uVar6 < lVar5 + (unsigned long)arg2) {
            LogAssert(
                "f.tell() + compressedLength <= f.length()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 150,
                "Js5LocalModeLoader: Supplied file does not contain enough data to load data block");
        }
        new (pJVar1) PacketT((unsigned long)(arg2 + 5));
        pJVar1->p1<unsigned long>((unsigned int)local_31);
        pJVar1->p4<int>(uVar3);
        puVar4 = (unsigned char*)pJVar1->GetDataPtr();
        uVar3 = pJVar1->size();
        uVar6 = file.read(puVar4, arg2, uVar3, nullptr);
        pJVar1 = this;
        if (uVar6 != arg2) {
            LogAssert(
                "read == compressedLength",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 157,
                "Js5LocalModeLoader: Failed to read full data of section. Section length: %d but read: %d",
                (unsigned long)arg2, uVar6);
        }
        SetPos(0);
        return pJVar1;
    }

    // 0x1009e04d0
    auto Js5LocalModeLoader::GetGroupDataCompressed(unsigned int arg1) {
        PacketJ<Array<unsigned char> _>* packetJ;

        if (((TextureAtlasReference*)field_584[(unsigned long)arg1])->GetTextureAtlas() == 0) {
            auto result;
        } else {
            packetJ = &field_584[(unsigned long)arg1];
            new (&result) PacketT(packetJ);
        }
        return result;
    }

    // 0x1009e0530
    void Js5LocalModeLoader::ClearGroupData(unsigned int arg1) {
        VBOMapper local_38;
        PacketT<Array<unsigned char>>* this_00 = &field_584[(unsigned long)arg1];
        *this_00 = local_38;
    }

    // 0x1009e0590
    auto Js5LocalModeLoader::GetGroupData(unsigned int arg1) {
        uint32_t uVar1;
        unsigned int arg5;
        Logger* this_02;
        uint64_t uVar4;
        uint8_t* puVar5;
        unsigned long arg3;
        VBOMapper local_80;
        uint8_t local_60[36];

        uint8_t* this_00 = &field_584;
        unsigned long uVar6 = (unsigned long)arg1;
        if (((TextureAtlasReference*)(*this_00)[uVar6])->GetTextureAtlas() == 0) {
            return auto();
        }
        PacketT<Array<unsigned char> _>* arg1_00 = (PacketT<Array<unsigned char> _>*)(*this_00)[uVar6];
        *local_60 = Js5Compression::Decompress(*arg1_00, 1);
        if (1 == 1) {
            this_02 = logger::default_logger();
            uVar1 = field_0->GetX();
            local_80 = ((PacketT<Array<unsigned char>>*)(*this_00)[uVar6])->ToString();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_02->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 91,
                "Error decompressing packet: archive=%ui, group=%ui, packet=%s", uVar1, arg1, uVar4);
        }
        unsigned int uVar2 = m_index->GetFileCount(arg1);
        if (uVar2 < 2) {
            puVar5 = (uint8_t*)field_0->size();
            if (puVar5 == EncodeType::PNG) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp",
                    110, nullptr);
            }
            puVar5 = (uint8_t*)field_0->size();
            if (puVar5 == EncodeType::PNG_MIPPED) {
                Js5Compression::DecodePNG(*local_60);
                new (&result) PacketT(local_60);
            } else {
                puVar5 = (uint8_t*)field_0->size();
                if ((puVar5 == EncodeType::DXT) || (puVar5 = (uint8_t*)field_0->size(), puVar5 == EncodeType::ETC)) {
                    uVar6 = local_60->GetSpace();
                    new (&result) PacketT(uVar6);
                    uVar6 = local_60->size();
                    arg3 = local_60->GetSpace();
                    result.pArrayBuffer(local_60, uVar6, arg3);
                } else {
                    new (&result) PacketT(local_60);
                }
            }
        } else {
            local_80 = PacketT();
            uVar2 = local_60->GetTextureAtlas();
            arg5 = m_index->GetFileCount(arg1);
            Js5DiskFileFormat::DechunkGroupFiles(local_80, *local_60, 0, uVar2, arg5);
            new (&result) PacketT(&local_80);
        }
        return result;
    }

} // namespace jag
