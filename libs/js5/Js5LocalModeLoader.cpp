// libs/js5/Js5LocalModeLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

#include "Js5LocalModeLoader.h"

namespace jag {
    // 0x1004491a0: the linker folded this into game::CombinedLocationSection::GetHighlightState(), which has identical code
    Js5Index Js5LocalModeLoader::GetIndex() const;

    // 0x1009dfc30, 1248 bytes, base-object constructor, placed by class name and debug map
    // Js5LocalModeLoader::Js5LocalModeLoader(Js5ArchiveSettings const*, Filename const&, bool, bool)
    void Js5LocalModeLoader::Js5LocalModeLoader(Js5ArchiveSettings* param_1, Filename* param_2, bool param_3,
                                                bool param_4) {
        undefined1* this_00;
        undefined1* this_01;
        TextureAtlasReference* this_02;
        char cVar1;
        uint uVar2;
        undefined4 uVar3;
        int iVar4;
        undefined8 uVar5;
        uchar* puVar6;
        ulong uVar7;
        undefined8 uVar8;
        Array<unsigned int, eastl::allocator>* this_03;
        uint* puVar9;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar10;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* pPVar11;
        undefined7 in_register_00000009;
        undefined7 in_register_00000081;
        GeometryBatchInstance* pGVar12;
        ulong uVar13;
        VBOMapper local_2a0;
        Array<unsigned char, SafeBucketAllocatorEASTL> local_280[24];
        PacketT<Array<unsigned char, eastl::allocator>> local_268[32];
        Filename* local_240;
        char local_238;
        char local_234;
        GeometryBatchInstance* local_230;
        int local_224;
        TextureAtlasReference* local_220;
        Whirlpool local_218;
        File local_170[13];
        long local_38;

        _local_234 = (undefined4)CONCAT71(in_register_00000081, param_4);
        _local_238 = (undefined4)CONCAT71(in_register_00000009, param_3);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = param_1;
        local_240 = (Filename*)field_8;
        Filename::Filename(local_240, param_2);
        pGVar12 = (GeometryBatchInstance*)m_index;
        new (pGVar12) Js5Index();
        this_00 = &field_584;
        new (this_00) eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>();
        this_01 = field_616;
        new (this_01) PacketT<Array<unsigned char, eastl::allocator>>();
        *(undefined8*)(field_616 + 32) = 0;
        cVar1 = param_2->Exists();
        if (cVar1 == '\0') {
            uVar5 = param_2->GetName();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "file.Exists()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 18,
                "Js5LocalModeLoader: Requested file does not exist: %s", uVar5);
        }
        File::File(local_170, local_240, 0, (Error*)0);
        ReadSection((Js5LocalModeLoader*)&local_218, local_170);
        PacketT<Array<unsigned char, eastl::allocator>>::operator=(
            (PacketT<Array<unsigned char, eastl::allocator>>*)this_01, (PacketT*)&local_218);
        local_218.~VBOMapper();
        puVar6 = (uchar*)this_01->GetDataPtr();
        uVar7 = this_01->GetTextureAtlas();
        uVar2 = CRC32(puVar6, uVar7, 4294967295);
        local_230 = pGVar12;
        local_220 = (TextureAtlasReference*)this_01;
        new (&local_218) Whirlpool();
        puVar6 = (uchar*)local_220->GetDataPtr();
        uVar7 = local_220->GetTextureAtlas();
        local_218.Update(puVar6, uVar7);
        Array<unsigned char, SafeBucketAllocatorEASTL>::Array(local_280, 64);
        puVar6 = (uchar*)local_280->data();
        this_02 = local_220;
        local_218.Final(puVar6);
        local_224 = 1;
        local_2a0.Decompress(this_02, (JS5DecompressionResult*)&local_224);
        this_02->SetPos(0);
        if (local_224 == 1) {
            uVar5 = logger::default_logger();
            uVar3 = (((Js5LocalModeLoader*)this)->field_0)->GetX();
            local_268->ToString();
            uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(
                uVar5, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 37,
                "Error decompressing index: archive=%ui, packet=%s", uVar3, uVar8);
            local_268->~basic_string();
            pGVar12 = local_230;
        }
        Array<unsigned char, eastl::allocator>::Array<SafeBucketAllocatorEASTL>(
            (Array<unsigned char, eastl::allocator>*)local_268, (Array*)local_280);
        pGVar12->Init(uVar2, local_268, (PacketT*)&local_2a0);
        local_268->~Array();
        iVar4 = pGVar12->GetAnimationLength();
        this_00->resize((ulong)(iVar4 + 1));
        pGVar12 = local_230;
        if ((local_238 == '\0') && (local_234 == '\0')) {
            this_03 = (Array<unsigned int, eastl::allocator>*)local_230->GetMaterial();
            iVar4 = pGVar12->GetEndPosition();
            if (iVar4 != 0) {
                uVar7 = 0;
                do {
                    puVar9 = (uint*)Array<unsigned int, eastl::allocator>::operator[](this_03, uVar7);
                    uVar13 = (ulong)*puVar9;
                    ReadSection((Js5LocalModeLoader*)local_268, local_170);
                    pPVar10 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                        eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
                            (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)this_00,
                            uVar13);
                    PacketT<Array<unsigned char, eastl::allocator>>::operator=(pPVar10, (PacketT*)local_268);
                    local_268->~VBOMapper();
                    pPVar10 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                        eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
                            (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)this_00,
                            uVar13);
                    pPVar10->SetPos(0);
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                        eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
                            (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)this_00,
                            uVar13);
                    cVar1 = pPVar11->g1();
                    if (cVar1 != '\0') {
                        pPVar10 = (PacketT<Array<unsigned char, eastl::allocator>>*)eastl::
                            vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
                                (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)this_00,
                                uVar13);
                        pPVar10->SetPos(5);
                    }
                    pPVar11 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                        eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
                            (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)this_00,
                            uVar13);
                    uVar2 = pPVar11->g4();
                    *(ulong*)(((Js5LocalModeLoader*)this)->field_616 + 32) =
                        *(long*)(((Js5LocalModeLoader*)this)->field_616 + 32) + (ulong)uVar2;
                    uVar7 = uVar7 + 1;
                    uVar2 = local_230->GetEndPosition();
                } while (uVar7 < uVar2);
            }
        }
        local_2a0.~VBOMapper();
        local_280->~Array();
        local_170->~File();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009e0120, 512 bytes, placed by class name and debug map
    // Js5LocalModeLoader::ReadSection(File&)
    Js5LocalModeLoader* Js5LocalModeLoader::ReadSection(File* param_1) {
        Js5LocalModeLoader* pJVar1;
        byte bVar2;
        uint uVar3;
        uchar* puVar4;
        long lVar5;
        ulong uVar6;
        uint uVar7;
        VBOMapper local_68;
        byte local_31;

        new (&local_68) PacketT<Array<unsigned char, eastl::allocator>>(4);
        puVar4 = (uchar*)local_68.GetDataPtr();
        lVar5 = param_1->read(puVar4, 1, 0, 0);
        if (lVar5 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "read == 1",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 138,
                "Js5LocalModeLoader: Failed to read compression type in section");
        }
        bVar2 = local_68.g1();
        pJVar1 = (Js5LocalModeLoader*)this;
        local_68.SetPos(0);
        puVar4 = (uchar*)local_68.GetDataPtr();
        lVar5 = param_1->read(puVar4, 4, 0, 0);
        if (lVar5 != 4) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "read == 4",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 142,
                "Js5LocalModeLoader: Failed to read compressed length in section");
        }
        uVar3 = local_68.g4();
        uVar7 = uVar3 + 4;
        if (bVar2 == 0) {
            uVar7 = uVar3;
        }
        local_31 = bVar2;
        lVar5 = param_1->tell();
        uVar6 = param_1->length(0);
        if (uVar6 < lVar5 + (ulong)uVar7) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "f.tell() + compressedLength <= f.length()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 150,
                "Js5LocalModeLoader: Supplied file does not contain enough data to load data block");
        }
        new (pJVar1) PacketT<Array<unsigned char, eastl::allocator>>((ulong)(uVar7 + 5));
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)pJVar1, (ulong)local_31);
        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)pJVar1, uVar3);
        puVar4 = (uchar*)pJVar1->GetDataPtr();
        uVar3 = pJVar1->size();
        uVar6 = param_1->read(puVar4, uVar7, uVar3, 0);
        pJVar1 = (Js5LocalModeLoader*)this;
        if (uVar6 != uVar7) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "read == compressedLength",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 157,
                "Js5LocalModeLoader: Failed to read full data of section. Section length: %d but read: %d",
                (ulong)uVar7, uVar6);
        }
        ((Js5LocalModeLoader*)this)->SetPos(0);
        local_68.~VBOMapper();
        return pJVar1;
    }

    // 0x1009e04c0, 16 bytes, complete-object constructor, placed by class name
    // Js5LocalModeLoader::Js5LocalModeLoader(Js5ArchiveSettings const*, Filename const&, bool, bool): jumps straight to the base-object constructor

    // 0x1009e04d0, 96 bytes, placed by class name
    // Js5LocalModeLoader::GetGroupDataCompressed(unsigned int)
    Js5LocalModeLoader* Js5LocalModeLoader::GetGroupDataCompressed(uint param_1) {
        TextureAtlasReference* this_00;
        PacketT* pPVar2;
        uint in_EDX;
        vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>* this_01;
        undefined4 in_register_00000034;

        this_01 =
            (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)(CONCAT44(in_register_00000034,
                                                                                                  param_1) +
                                                                                         584);
        this_00 = (TextureAtlasReference*)
            eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](this_01,
                                                                                                         (ulong)in_EDX);
        if (this_00->GetTextureAtlas() == 0) {
            new (this) PacketT<Array<unsigned char, eastl::allocator>>();
        } else {
            pPVar2 =
                (PacketT*)eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
                    this_01, (ulong)in_EDX);
            new (this) PacketT<Array<unsigned char, eastl::allocator>>(pPVar2);
        }
        return this;
    }

    // 0x1009e0530, 96 bytes, placed by class name
    // Js5LocalModeLoader::ClearGroupData(unsigned int)
    void Js5LocalModeLoader::ClearGroupData(uint param_1) {
        PacketT<Array<unsigned char, eastl::allocator>>* this_00;
        VBOMapper local_38;

        new (&local_38) PacketT<Array<unsigned char, eastl::allocator>>();
        this_00 = (PacketT<Array<unsigned char, eastl::allocator>>*)
            eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
                (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)&field_584, (ulong)param_1);
        PacketT<Array<unsigned char, eastl::allocator>>::operator=(this_00, (PacketT*)&local_38);
        local_38.~VBOMapper();
    }

    // 0x1009e0590, 672 bytes, placed by class name
    // Js5LocalModeLoader::GetGroupData(unsigned int)
    Js5LocalModeLoader* Js5LocalModeLoader::GetGroupData(uint param_1) {
        vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>* this_00;
        undefined4 uVar1;
        uint uVar2;
        uint uVar3;
        TextureAtlasReference* this_01;
        PacketT* pPVar5;
        undefined8 uVar6;
        undefined* puVar7;
        ulong uVar8;
        ulong uVar9;
        uint in_EDX;
        undefined4 in_register_00000034;
        undefined8* puVar10;
        VBOMapper local_80;
        undefined1 local_60[36];
        int local_3c;

        puVar10 = (undefined8*)CONCAT44(in_register_00000034, param_1);
        this_00 = (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)(puVar10 + 73);
        uVar8 = (ulong)in_EDX;
        this_01 = (TextureAtlasReference*)
            eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](this_00,
                                                                                                         uVar8);
        if (this_01->GetTextureAtlas() == 0) {
            new (this) PacketT<Array<unsigned char, eastl::allocator>>();
            return this;
        }
        local_3c = 1;
        pPVar5 = (PacketT*)eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
            this_00, uVar8);
        local_60->Decompress(pPVar5, (JS5DecompressionResult*)&local_3c);
        if (local_3c == 1) {
            uVar6 = logger::default_logger();
            uVar1 = (*puVar10)->GetX();
            eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](this_00,
                                                                                                         uVar8);
            local_80.ToString();
            eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(
                uVar6, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp", 91,
                "Error decompressing packet: archive=%ui, group=%ui, packet=%s", uVar1);
            local_80.~basic_string();
        }
        uVar2 = ((puVar10 + 39))->GetFileCount(in_EDX);
        if (uVar2 < 2) {
            puVar7 = (undefined*)(*puVar10)->size();
            if (puVar7 == EncodeType::PNG) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5LocalModeLoader.cpp",
                    110, (char*)0);
            }
            puVar7 = (undefined*)(*puVar10)->size();
            if (puVar7 == EncodeType::PNG_MIPPED) {
                Js5Compression::DecodePNG((PacketT*)local_60);
                new ((Js5LocalModeLoader*)this) PacketT<Array<unsigned char, eastl::allocator>>(local_60);
            } else {
                puVar7 = (undefined*)(*puVar10)->size();
                if ((puVar7 == EncodeType::DXT) ||
                    (puVar7 = (undefined*)(*puVar10)->size(), puVar7 == EncodeType::ETC)) {
                    uVar8 = local_60->GetSpace();
                    new ((Js5LocalModeLoader*)this) PacketT<Array<unsigned char, eastl::allocator>>(uVar8);
                    uVar8 = local_60->size();
                    uVar9 = local_60->GetSpace();
                    ((Js5LocalModeLoader*)this)->pArrayBuffer(local_60, uVar8, uVar9);
                } else {
                    new ((Js5LocalModeLoader*)this) PacketT<Array<unsigned char, eastl::allocator>>(local_60);
                }
            }
        } else {
            new (&local_80) PacketT<Array<unsigned char, eastl::allocator>>();
            uVar2 = local_60->GetTextureAtlas();
            uVar3 = ((puVar10 + 39))->GetFileCount(in_EDX);
            Js5DiskFileFormat::DechunkGroupFiles((PacketT*)&local_80, (PacketT*)local_60, 0, uVar2, uVar3);
            new ((Js5LocalModeLoader*)this) PacketT<Array<unsigned char, eastl::allocator>>((PacketT*)&local_80);
            local_80.~VBOMapper();
        }
        local_60->~VBOMapper();
        return (Js5LocalModeLoader*)this;
    }

} // namespace jag
