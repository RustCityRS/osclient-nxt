// libs/graphics/runetek7/materials/textures/RT7TextureDataProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

namespace jag::graphics {
    class RT7TextureDataProvider {
    public:
        // virtual methods in vtable order
        virtual ~RT7TextureDataProvider();
        virtual GetTexturesCompressedDXTArchive() const;
        virtual GetTexturesCompressedETCArchive() const;
        virtual GetTexturesUncompressedMippedArchive() const;
        virtual GetSpritesArchive() const;
        virtual GetTextureDataUncompressed(TextureData&, TextureType const*, unsigned int);
        virtual GetTextureDataPNG(TextureData&, TextureType const*, unsigned int);
        virtual GetTextureDataDXT(TextureData&, TextureType const*, unsigned int);
        virtual GetTextureDataETC(TextureData&, TextureType const*, unsigned int);
        void LoadDXTTexture(unsigned char*&, unsigned int&, unsigned int&, unsigned int&, unsigned int&,
                            PacketT<Array<unsigned char, eastl::allocator>>&);
        void LoadETCTexture(unsigned char*&, unsigned int&, unsigned int&, unsigned int&, unsigned int&,
                            PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 48 bytes
        long field_0;                 // offset 0, vtable pointer
        Js5ResourceProvider* field_8; // offset 8
        Js5ArchiveSettings* field_16; // offset 16
        Js5ArchiveSettings* field_24; // offset 24
        char _unknown_32[8];
        undefined8 m_spritesArchive; // offset 40
    };

    // 0x100016cf0: the linker folded this into eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int> >, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const, which has identical code
    RT7TextureDataProvider::GetTexturesCompressedETCArchive() const;

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    RT7TextureDataProvider::~RT7TextureDataProvider();

    // 0x100023f30: the linker folded this into oldscape::option::IOption::GetName() const, which has identical code
    RT7TextureDataProvider::GetTexturesCompressedDXTArchive() const;

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    RT7TextureDataProvider::~RT7TextureDataProvider();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    RT7TextureDataProvider::~RT7TextureDataProvider();

    // 0x10011c770: the linker folded this into eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>, eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<int const, unsigned long> >, true, true>::size() const, which has identical code
    RT7TextureDataProvider::GetTexturesUncompressedMippedArchive() const;

    // 0x10019bbb0: the linker folded this into SystemSettings::GetModeGame() const, which has identical code
    RT7TextureDataProvider::GetSpritesArchive() const;

    // 0x100855c50, 16 bytes, placed by class name and debug map
    // RT7TextureDataProvider::GetTextureDataUncompressed(TextureData&, TextureType const*, unsigned int)
    undefined* RT7TextureDataProvider::GetTextureDataUncompressed(TextureData* param_1, TextureType* param_2,
                                                                  uint param_3) {
        return DataStatus::READY;
    }

    // 0x100855c60, 816 bytes, placed by class name and debug map
    // RT7TextureDataProvider::GetTextureDataPNG(TextureData&, TextureType const*, unsigned int)
    undefined* RT7TextureDataProvider::GetTextureDataPNG(TextureData* param_1, TextureType* param_2, uint param_3) {
        Js5ArchiveSettings* pJVar1;
        byte bVar2;
        uint uVar3;
        int iVar4;
        int iVar5;
        undefined4 uVar6;
        undefined* puVar7;
        undefined8 uVar8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_00;
        void* pvVar9;
        uchar* puVar10;
        long lVar11;
        long lVar12;
        uint uVar13;
        uint uVar14;
        undefined* puVar15;
        undefined1 local_c8[52];
        undefined4 local_94;
        RGBAImage local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pJVar1 = *(Js5ArchiveSettings**)(&field_32 + (ulong)((TextureType*)TextureType::SPRITE == param_2) * 8);
        if (pJVar1 == (Js5ArchiveSettings*)0) {
            uVar8 = param_2->HeapBeginPtr();
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/textures/RT7TextureDataProvider.cpp",
                            37, "TextureManager.GetTextureDataPNG: Texture type %s cannot be processed directly",
                            uVar8);
        }
        local_c8._40_8_ = param_1;
        puVar7 = (undefined*)(*(code*)field_8->field_0[6])(field_8, pJVar1, param_3, 0, Priority::LOW, 1);
        puVar15 = DataStatus::MISSING;
        if (puVar7 != DataStatus::MISSING) {
            if (puVar7 == DataStatus::READY) {
                new (local_c8) PacketView();
                (field_8, (PacketView*)local_c8, pJVar1, param_3, 0, (Priority*)Priority::HIGH, true, true, false)
                    ->GetFile();
                if ((TextureType*)TextureType::SPRITE == param_2) {
                    new (&local_90) RGBAImage();
                    RAWDecoder::LoadSingle(&local_90, (PacketView*)local_c8);
                    iVar4 = local_90.GetX();
                    iVar5 = local_90.GetZ();
                    uVar3 = iVar5 * iVar4 * 4;
                    puVar10 = (uchar*)(**(code**)(field_0 + 80))(this, uVar3);
                    this_00 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                     std::default_delete<LoadingScreenScript::AnimLayer>>,
                                     eastl::allocator>*)local_90.GetDevCredentialsOutputDirectory();
                    pvVar9 = (void*)this_00->data();
                    _memcpy(puVar10, pvVar9, (ulong)uVar3);
                    uVar6 = local_90.GetX();
                    uVar8 = local_c8._40_8_;
                    *(undefined4*)(local_c8._40_8_ + 16) = uVar6;
                    uVar6 = local_90.GetZ();
                    *(undefined4*)((long)(uVar8 + 16) + 4) = uVar6;
                    std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::reset<unsigned char*>(
                        (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)uVar8, puVar10);
                    *(uint*)(uVar8 + 8) = uVar3;
                    *(undefined4*)((long)(uVar8 + 8) + 4) = 1;
                    puVar15 = DataStatus::READY;
                    local_90.~RGBAImage();
                } else {
                    bVar2 = local_c8->g1();
                    uVar3 = local_c8->g4();
                    local_94 = local_c8->g4();
                    if (bVar2 == 0) {
                        iVar4 = 0;
                    } else {
                        uVar13 = 0;
                        iVar4 = 0;
                        do {
                            uVar14 = uVar3 >> ((byte)uVar13 & 31);
                            iVar4 = iVar4 + uVar14 * uVar14;
                            uVar13 = uVar13 + 1;
                        } while (bVar2 != uVar13);
                    }
                    uVar13 = iVar4 * 24;
                    if ((TextureType*)TextureType::CUBEMAP != param_2) {
                        uVar13 = iVar4 * 4;
                    }
                    puVar10 = (uchar*)(**(code**)(field_0 + 80))(this, (ulong)uVar13);
                    lVar11 = local_c8->GetTextureAtlas();
                    lVar12 = local_c8->data();
                    _memcpy(puVar10, (void*)(lVar11 + lVar12), (ulong)uVar13);
                    uVar8 = local_c8._40_8_;
                    std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::reset<unsigned char*>(
                        (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)local_c8._40_8_, puVar10);
                    *(uint*)(uVar8 + 8) = uVar13;
                    *(uint*)((long)(uVar8 + 8) + 4) = (uint)bVar2;
                    *(uint*)(uVar8 + 16) = uVar3;
                    *(undefined4*)((long)(uVar8 + 16) + 4) = local_94;
                    puVar15 = DataStatus::READY;
                }
                local_c8->~PacketView();
            } else {
                puVar15 = DataStatus::NOTLOADED;
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return puVar15;
    }

    // 0x100855fc0, 400 bytes, placed by class name and debug map
    // RT7TextureDataProvider::GetTextureDataDXT(TextureData&, TextureType const*, unsigned int)
    undefined* RT7TextureDataProvider::GetTextureDataDXT(TextureData* param_1, TextureType* param_2, uint param_3) {
        undefined* puVar1;
        PacketT* pPVar2;
        undefined* puVar3;
        Js5ArchiveSettings* pJVar4;
        shared_ptr local_58;
        uchar* local_48;
        uint local_40;
        uint local_3c;
        uint local_38;
        uint local_34;

        if ((TextureType*)TextureType::SPRITE == param_2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/materials/"
                "textures/RT7TextureDataProvider.cpp",
                112, "TextureDataProvider::GetTextureDataDXT - cannot return compressed texture data for Sprites");
        }
        pJVar4 = field_16;
        puVar1 = (undefined*)(*(code*)field_8->field_0[6])(field_8, pJVar4, param_3, 0, Priority::LOW, 1);
        puVar3 = DataStatus::MISSING;
        if (puVar1 != DataStatus::MISSING) {
            if (puVar1 == DataStatus::READY) {
                new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pJVar4);
                (field_8, &local_58, field_16, param_3, 0, (Priority*)Priority::HIGH, true, true, false)->GetFile();
                pPVar2 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_58);
                local_48 = (uchar*)0;
                local_40 = 0;
                local_3c = 0;
                local_38 = 0;
                local_34 = 0;
                LoadDXTTexture(this, &local_48, &local_40, &local_3c, &local_38, &local_34, pPVar2);
                std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::reset<unsigned char*>(
                    (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)param_1, local_48);
                *(uint*)&param_1->field_8 = local_40;
                *(uint*)((long)&param_1->field_8 + 4) = local_3c;
                *(uint*)&param_1->field_16 = local_38;
                *(uint*)((long)&param_1->field_16 + 4) = local_34;
                puVar3 = DataStatus::READY;
                local_58.~shared_ptr();
            } else {
                puVar3 = DataStatus::NOTLOADED;
            }
        }
        return puVar3;
    }

    // 0x100856150, 352 bytes, placed by class name and debug map
    // RT7TextureDataProvider::LoadDXTTexture(unsigned char*&, unsigned int&, unsigned int&, unsigned int&, unsigned int&, PacketT<Array<unsigned char, eastl::allocator> >&)
    void RT7TextureDataProvider::LoadDXTTexture(uchar** param_1, uint* param_2, uint* param_3, uint* param_4,
                                                uint* param_5, PacketT* param_6) {
        byte bVar1;
        int iVar2;
        uint uVar3;
        uchar* puVar4;
        long lVar5;

        bVar1 = param_6->g1();
        if (bVar1 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureCount == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/RT7TextureDataProvider.cpp",
                      199, "Unexpected texture count for DXT data: %u", (ulong)bVar1);
        }
        iVar2 = param_6->g4();
        param_6->Skip(12);
        uVar3 = param_6->g4_alt1();
        *param_4 = uVar3;
        uVar3 = param_6->g4_alt1();
        *param_5 = uVar3;
        param_6->Skip(8);
        uVar3 = param_6->g4_alt1();
        *param_3 = uVar3;
        param_6->Skip(52);
        uVar3 = param_6->g4_alt1();
        if ((uVar3 & 4227858431) != 827611204) {
            /* WARNING: Subroutine does not return */
            LogAssert("fourCC == dxt5 || fourCC == dxt1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/RT7TextureDataProvider.cpp",
                      218, "Unexpected DXT format found: %c%c%c%c", (ulong)(uint)(int)(char)uVar3,
                      (ulong)(uint)(int)(char)(uVar3 >> 8), (ulong)(uint)(int)(char)(uVar3 >> 16),
                      (ulong)(uint)((int)uVar3 >> 24));
        }
        *param_2 = iVar2 - 128U;
        puVar4 = (uchar*)(**(code**)(field_0 + 80))(this, iVar2 - 128U);
        *param_1 = puVar4;
        lVar5 = param_6->GetDataPtr();
        _memcpy(puVar4, (void*)(lVar5 + 133), (ulong)*param_2);
    }

    // 0x1008562b0, 400 bytes, placed by class name and debug map
    // RT7TextureDataProvider::GetTextureDataETC(TextureData&, TextureType const*, unsigned int)
    undefined* RT7TextureDataProvider::GetTextureDataETC(TextureData* param_1, TextureType* param_2, uint param_3) {
        undefined* puVar1;
        PacketT* pPVar2;
        undefined* puVar3;
        Js5ArchiveSettings* pJVar4;
        shared_ptr local_58;
        uchar* local_48;
        uint local_40;
        uint local_3c;
        uint local_38;
        uint local_34;

        if ((TextureType*)TextureType::SPRITE == param_2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/textures/RT7TextureDataProvider.cpp",
                            155,
                            "TextureManager::GetTextureDataETC - cannot return compressed texture data for Sprites");
        }
        pJVar4 = field_24;
        puVar1 = (undefined*)(*(code*)field_8->field_0[6])(field_8, pJVar4, param_3, 0, Priority::LOW, 1);
        puVar3 = DataStatus::MISSING;
        if (puVar1 != DataStatus::MISSING) {
            if (puVar1 == DataStatus::READY) {
                new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pJVar4);
                (field_8, &local_58, field_24, param_3, 0, (Priority*)Priority::HIGH, true, true, false)->GetFile();
                pPVar2 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_58);
                local_48 = (uchar*)0;
                local_40 = 0;
                local_3c = 0;
                local_38 = 0;
                local_34 = 0;
                LoadETCTexture(this, &local_48, &local_40, &local_3c, &local_38, &local_34, pPVar2);
                std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::reset<unsigned char*>(
                    (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)param_1, local_48);
                *(uint*)&param_1->field_8 = local_40;
                *(uint*)((long)&param_1->field_8 + 4) = local_3c;
                *(uint*)&param_1->field_16 = local_38;
                *(uint*)((long)&param_1->field_16 + 4) = local_34;
                puVar3 = DataStatus::READY;
                local_58.~shared_ptr();
            } else {
                puVar3 = DataStatus::NOTLOADED;
            }
        }
        return puVar3;
    }

    // 0x100856440, 496 bytes, placed by class name and debug map
    // RT7TextureDataProvider::LoadETCTexture(unsigned char*&, unsigned int&, unsigned int&, unsigned int&, unsigned int&, PacketT<Array<unsigned char, eastl::allocator> >&)
    void RT7TextureDataProvider::LoadETCTexture(uchar** param_1, uint* param_2, uint* param_3, uint* param_4,
                                                uint* param_5, PacketT* param_6) {
        byte bVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        uchar* puVar5;
        long lVar6;
        long lVar7;
        uint uVar8;
        uint uVar9;
        uint uVar10;
        uint uVar11;

        bVar1 = param_6->g1();
        uVar8 = (uint)bVar1;
        if ((bVar1 != 1) && (bVar1 != 6)) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureCount == 1 || textureCount == 6",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/RT7TextureDataProvider.cpp",
                      231, (char*)0);
        }
        if (uVar8 != 0) {
            uVar3 = 0;
            uVar9 = 0;
            uVar10 = 0;
            do {
                iVar2 = param_6->g4();
                if (uVar10 == 0) {
                    param_6->Skip(36);
                    uVar3 = param_6->g4_alt1();
                    *param_4 = uVar3;
                    uVar3 = param_6->g4_alt1();
                    *param_5 = uVar3;
                    param_6->Skip(12);
                    uVar3 = param_6->g4_alt1();
                    *param_3 = uVar3;
                    uVar3 = param_6->g4_alt1();
                    if (uVar3 != 0) {
                        param_6->Skip((ulong)uVar3);
                    }
                    uVar11 = ((iVar2 - uVar3) + *param_3 * -4 + -64) * uVar8;
                    *param_2 = uVar11;
                    puVar5 = (uchar*)(**(code**)(field_0 + 80))(this, uVar11);
                    *param_1 = puVar5;
                } else {
                    param_6->Skip((ulong)(uVar3 + 64));
                }
                if (*param_3 != 0) {
                    uVar11 = 0;
                    do {
                        uVar4 = param_6->g4_alt1();
                        puVar5 = *param_1;
                        lVar6 = param_6->GetDataPtr();
                        lVar7 = param_6->size();
                        _memcpy(puVar5 + uVar9, (void*)(lVar6 + lVar7), (ulong)uVar4);
                        param_6->Skip((ulong)uVar4);
                        uVar9 = uVar4 + uVar9;
                        uVar11 = uVar11 + 1;
                    } while (uVar11 < *param_3);
                }
                uVar10 = uVar10 + 1;
            } while (uVar10 != uVar8);
        }
    }

} // namespace jag::graphics
