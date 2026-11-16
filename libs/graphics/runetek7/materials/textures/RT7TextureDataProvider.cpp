// libs/graphics/runetek7/materials/textures/RT7TextureDataProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

namespace jag::graphics {
    class RT7TextureDataProvider {
    public:
        // virtual methods in vtable order
        virtual ~RT7TextureDataProvider();
        virtual Js5ArchiveSettings* GetTexturesCompressedDXTArchive() const;
        virtual void GetTexturesCompressedETCArchive() const;
        virtual void GetTexturesUncompressedMippedArchive() const;
        virtual uint64_t GetSpritesArchive() const;
        virtual uint8_t* GetTextureDataUncompressed(TextureData& textureData, const TextureType* textureType,
                                                    unsigned int arg3);
        virtual uint8_t* GetTextureDataPNG(TextureData& textureData, const TextureType* textureType, unsigned int arg3);
        virtual uint8_t* GetTextureDataDXT(TextureData& textureData, const TextureType* textureType, unsigned int arg3);
        virtual uint8_t* GetTextureDataETC(TextureData& textureData, const TextureType* textureType, unsigned int arg3);
        void LoadDXTTexture(unsigned char*& arg1, unsigned int& arg2, unsigned int& arg3, unsigned int& arg4,
                            unsigned int& arg5, PacketT<Array<unsigned char>>& arg6);
        void LoadETCTexture(unsigned char*& arg1, unsigned int& arg2, unsigned int& arg3, unsigned int& arg4,
                            unsigned int& arg5, PacketT<Array<unsigned char>>& arg6);

    private:
        Js5ResourceProvider* field_8;
        Js5ArchiveSettings* m_texturesCompressedDXTArchive;
        Js5ArchiveSettings* field_24;
        uint8_t _unknown_32[8];
        uint64_t m_spritesArchive;
    };

    // 0x100016cf0: RT7TextureDataProvider::GetTexturesCompressedETCArchive() const has the same machine code as eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const

    // 0x100022b10: RT7TextureDataProvider::~RT7TextureDataProvider() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100023f30: RT7TextureDataProvider::GetTexturesCompressedDXTArchive() const has the same machine code as oldscape::option::IOption::GetName() const

    // 0x10002a770: RT7TextureDataProvider::~RT7TextureDataProvider() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10011c770: RT7TextureDataProvider::GetTexturesUncompressedMippedArchive() const has the same machine code as eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>, eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true>, eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>::size() const

    // 0x10019bbb0: RT7TextureDataProvider::GetSpritesArchive() const has the same machine code as SystemSettings::GetModeGame() const

    // 0x100855c50
    uint8_t* RT7TextureDataProvider::GetTextureDataUncompressed(TextureData& textureData,
                                                                const TextureType* textureType, unsigned int arg3) {
        return DataStatus::READY;
    }

    // 0x100855c60
    uint8_t* RT7TextureDataProvider::GetTextureDataPNG(TextureData& textureData, const TextureType* textureType,
                                                       unsigned int arg3) {
        uint8_t bVar2;
        unsigned int uVar3;
        int iVar4;
        uint32_t uVar6;
        uint64_t extraout_var;
        uint64_t uVar7;
        uint64_t extraout_var_00;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_00;
        void* pvVar8;
        uint64_t extraout_var_01;
        long lVar9;
        long lVar10;
        unsigned int uVar11;
        unsigned int uVar12;
        uint8_t local_c8[52];
        uint32_t local_94;
        RGBAImage local_90;

        Js5ArchiveSettings* js5ArchiveSettings =
            *(Js5ArchiveSettings**)(&field_32 + (unsigned long)((TextureType*)TextureType::SPRITE == textureType) * 8);
        if (js5ArchiveSettings == nullptr) {
            uVar7 = textureType->HeapBeginPtr();
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/textures/RT7TextureDataProvider.cpp",
                            37, "TextureManager.GetTextureDataPNG: Texture type %s cannot be processed directly",
                            uVar7);
        }
        local_c8._40_8_ = textureData;
        uint8_t uVar1 = field_8->FileReady((unsigned int)js5ArchiveSettings, arg3, nullptr, (uint8_t)(Priority::LOW));
        uint8_t* puVar13 = DataStatus::MISSING;
        if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) != DataStatus::MISSING) {
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) == DataStatus::READY) {
                new (local_c8) PacketView();
                field_8->GetFile(*local_c8, *js5ArchiveSettings, arg3, 0, (Priority*)Priority::HIGH, true, true, false);
                if ((TextureType*)TextureType::SPRITE == textureType) {
                    local_90 = RGBAImage();
                    RAWDecoder::LoadSingle(local_90, *local_c8);
                    iVar4 = local_90.GetX();
                    uVar3 = local_90.GetZ() * iVar4 * 4;
                    uVar1 = AllocateImageData((unsigned int)this);
                    this_00 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)
                                  local_90.GetDevCredentialsOutputDirectory();
                    pvVar8 = (void*)this_00->data();
                    _memcpy((unsigned char*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1), pvVar8,
                            (unsigned long)uVar3);
                    uVar6 = local_90.GetX();
                    uVar7 = local_c8._40_8_;
                    *(uint32_t*)(local_c8._40_8_ + 16) = uVar6;
                    uVar6 = local_90.GetZ();
                    *(uint32_t*)((long)(uVar7 + 16) + 4) = uVar6;
                    ((unique_ptr<unsigned char[]>*)uVar7)
                        ->reset<unsigned char*>((unsigned char*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1));
                    *(unsigned int*)(uVar7 + 8) = uVar3;
                    *(uint32_t*)((long)(uVar7 + 8) + 4) = 1;
                    puVar13 = DataStatus::READY;
                } else {
                    bVar2 = local_c8->g1();
                    uVar3 = local_c8->g4();
                    local_94 = local_c8->g4();
                    if (bVar2 == 0) {
                        iVar4 = 0;
                    } else {
                        uVar11 = 0;
                        iVar4 = 0;
                        do {
                            uVar12 = uVar3 >> ((uint8_t)uVar11 & 31);
                            iVar4 = iVar4 + uVar12 * uVar12;
                            uVar11 = uVar11 + 1;
                        } while (bVar2 != uVar11);
                    }
                    uVar11 = iVar4 * 24;
                    if ((TextureType*)TextureType::CUBEMAP != textureType) {
                        uVar11 = iVar4 * 4;
                    }
                    uVar1 = AllocateImageData((unsigned int)this);
                    lVar9 = local_c8->GetTextureAtlas();
                    lVar10 = local_c8->data();
                    _memcpy((unsigned char*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar1),
                            (void*)(lVar9 + lVar10), (unsigned long)uVar11);
                    uVar7 = local_c8._40_8_;
                    ((unique_ptr<unsigned char[]>*)local_c8._40_8_)
                        ->reset<unsigned char*>((unsigned char*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar1));
                    *(unsigned int*)(uVar7 + 8) = uVar11;
                    *(unsigned int*)((long)(uVar7 + 8) + 4) = (unsigned int)bVar2;
                    *(unsigned int*)(uVar7 + 16) = uVar3;
                    *(uint32_t*)((long)(uVar7 + 16) + 4) = local_94;
                    puVar13 = DataStatus::READY;
                }
            } else {
                puVar13 = DataStatus::NOTLOADED;
            }
        }
        return puVar13;
    }

    // 0x100855fc0
    uint8_t* RT7TextureDataProvider::GetTextureDataDXT(TextureData& textureData, const TextureType* textureType,
                                                       unsigned int arg3) {
        uint64_t extraout_var;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        unsigned char* local_48;
        unsigned int local_40;
        unsigned int local_3c;
        unsigned int local_38;
        uint32_t local_34;

        if ((TextureType*)TextureType::SPRITE == textureType) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/materials/"
                "textures/RT7TextureDataProvider.cpp",
                112, "TextureDataProvider::GetTextureDataDXT - cannot return compressed texture data for Sprites");
        }
        uint8_t uVar1 =
            field_8->FileReady((unsigned int)m_texturesCompressedDXTArchive, arg3, nullptr, (uint8_t)(Priority::LOW));
        uint8_t* puVar2 = DataStatus::MISSING;
        if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) != DataStatus::MISSING) {
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) == DataStatus::READY) {
                local_58 = shared_ptr();
                field_8->GetFile(local_58, *m_texturesCompressedDXTArchive, arg3, 0, (Priority*)Priority::HIGH, true,
                                 true, false);
                *local_58;
                local_48 = nullptr;
                local_40 = 0;
                local_3c = 0;
                local_38 = 0;
                local_34 = 0;
                LoadDXTTexture((unsigned char**)this, (unsigned int*)&local_48, &local_40, &local_3c, &local_38,
                               (PacketT<Array<unsigned char> _>*)&local_34);
                ((unique_ptr<unsigned char[]>*)textureData)->reset<unsigned char*>(local_48);
                *(unsigned int*)&textureData.field_8 = local_40;
                *(unsigned int*)((long)&textureData.field_8 + 4) = local_3c;
                *(unsigned int*)&textureData.field_16 = local_38;
                *(uint32_t*)((long)&textureData.field_16 + 4) = local_34;
                puVar2 = DataStatus::READY;
            } else {
                puVar2 = DataStatus::NOTLOADED;
            }
        }
        return puVar2;
    }

    // 0x100856150
    void RT7TextureDataProvider::LoadDXTTexture(unsigned char*& arg1, unsigned int& arg2, unsigned int& arg3,
                                                unsigned int& arg4, unsigned int& arg5,
                                                PacketT<Array<unsigned char>>& arg6) {
        PacketReaderMixin<PacketT<Array<unsigned char>>>* in_stack_00000008;

        uint8_t bVar1 = in_stack_00000008->g1();
        if (bVar1 != 1) {
            LogAssert("textureCount == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/RT7TextureDataProvider.cpp",
                      199, "Unexpected texture count for DXT data: %u", (unsigned long)bVar1);
        }
        int iVar2 = in_stack_00000008->g4();
        in_stack_00000008->Skip(12);
        unsigned int uVar3 = in_stack_00000008->g4_alt1();
        arg5 = uVar3;
        uint32_t uVar4 = in_stack_00000008->g4_alt1();
        *(uint32_t*)arg6 = uVar4;
        in_stack_00000008->Skip(8);
        uVar3 = in_stack_00000008->g4_alt1();
        arg4 = uVar3;
        in_stack_00000008->Skip(52);
        uVar3 = in_stack_00000008->g4_alt1();
        if ((uVar3 & 4227858431) != 827611204) {
            LogAssert("fourCC == dxt5 || fourCC == dxt1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/RT7TextureDataProvider.cpp",
                      218, "Unexpected DXT format found: %c%c%c%c", (unsigned long)(unsigned int)(int)(char)uVar3,
                      (unsigned long)(unsigned int)(int)(char)(uVar3 >> 8),
                      (unsigned long)(unsigned int)(int)(char)(uVar3 >> 16),
                      (unsigned long)(unsigned int)((int)uVar3 >> 24));
        }
        arg3 = iVar2 - 128U;
        void* pvVar5 = (void*)(**(void (**)(...))(arg1 + 80))(arg1, iVar2 - 128U);
        *(void**)arg2 = pvVar5;
        long lVar6 = in_stack_00000008->GetDataPtr();
        _memcpy(pvVar5, (void*)(lVar6 + 133), (unsigned long)*arg3);
    }

    // 0x1008562b0
    uint8_t* RT7TextureDataProvider::GetTextureDataETC(TextureData& textureData, const TextureType* textureType,
                                                       unsigned int arg3) {
        uint64_t extraout_var;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        unsigned char* local_48;
        unsigned int local_40;
        unsigned int local_3c;
        unsigned int local_38;
        uint32_t local_34;

        if ((TextureType*)TextureType::SPRITE == textureType) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/textures/RT7TextureDataProvider.cpp",
                            155,
                            "TextureManager::GetTextureDataETC - cannot return compressed texture data for Sprites");
        }
        uint8_t uVar1 = field_8->FileReady((unsigned int)field_24, arg3, nullptr, (uint8_t)(Priority::LOW));
        uint8_t* puVar2 = DataStatus::MISSING;
        if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) != DataStatus::MISSING) {
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) == DataStatus::READY) {
                local_58 = shared_ptr();
                field_8->GetFile(local_58, *field_24, arg3, 0, (Priority*)Priority::HIGH, true, true, false);
                *local_58;
                local_48 = nullptr;
                local_40 = 0;
                local_3c = 0;
                local_38 = 0;
                local_34 = 0;
                LoadETCTexture((unsigned char**)this, (unsigned int*)&local_48, &local_40, &local_3c, &local_38,
                               (PacketT<Array<unsigned char> _>*)&local_34);
                ((unique_ptr<unsigned char[]>*)textureData)->reset<unsigned char*>(local_48);
                *(unsigned int*)&textureData.field_8 = local_40;
                *(unsigned int*)((long)&textureData.field_8 + 4) = local_3c;
                *(unsigned int*)&textureData.field_16 = local_38;
                *(uint32_t*)((long)&textureData.field_16 + 4) = local_34;
                puVar2 = DataStatus::READY;
            } else {
                puVar2 = DataStatus::NOTLOADED;
            }
        }
        return puVar2;
    }

    // 0x100856440
    void RT7TextureDataProvider::LoadETCTexture(unsigned char*& arg1, unsigned int& arg2, unsigned int& arg3,
                                                unsigned int& arg4, unsigned int& arg5,
                                                PacketT<Array<unsigned char>>& arg6) {
        long lVar1;
        int iVar3;
        unsigned int uVar4;
        uint32_t uVar5;
        unsigned int uVar6;
        uint64_t uVar7;
        long lVar8;
        long lVar9;
        unsigned int uVar11;
        unsigned int uVar12;
        unsigned int uVar13;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* in_stack_00000008;

        uint8_t bVar2 = in_stack_00000008->g1();
        unsigned int uVar10 = (unsigned int)bVar2;
        if ((bVar2 != 1) && (bVar2 != 6)) {
            LogAssert("textureCount == 1 || textureCount == 6",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/RT7TextureDataProvider.cpp",
                      231, nullptr);
        }
        if (uVar10 != 0) {
            uVar4 = 0;
            uVar11 = 0;
            uVar12 = 0;
            do {
                iVar3 = in_stack_00000008->g4();
                if (uVar12 == 0) {
                    in_stack_00000008->Skip(36);
                    uVar4 = in_stack_00000008->g4_alt1();
                    arg5 = uVar4;
                    uVar5 = in_stack_00000008->g4_alt1();
                    *(uint32_t*)arg6 = uVar5;
                    in_stack_00000008->Skip(12);
                    uVar4 = in_stack_00000008->g4_alt1();
                    arg4 = uVar4;
                    uVar4 = in_stack_00000008->g4_alt1();
                    if (uVar4 != 0) {
                        in_stack_00000008->Skip((unsigned long)uVar4);
                    }
                    uVar13 = ((iVar3 - uVar4) + arg4 * -4 - 64) * uVar10;
                    arg3 = uVar13;
                    uVar7 = (**(void (**)(...))(arg1 + 80))(arg1, uVar13);
                    *(uint64_t*)arg2 = uVar7;
                } else {
                    in_stack_00000008->Skip((unsigned long)(uVar4 + 64));
                }
                if (arg4 != 0) {
                    uVar13 = 0;
                    do {
                        uVar6 = in_stack_00000008->g4_alt1();
                        lVar1 = *(long*)arg2;
                        lVar8 = in_stack_00000008->GetDataPtr();
                        lVar9 = in_stack_00000008->size();
                        _memcpy((void*)((unsigned long)uVar11 + lVar1), (void*)(lVar8 + lVar9), (unsigned long)uVar6);
                        in_stack_00000008->Skip((unsigned long)uVar6);
                        uVar11 = uVar6 + uVar11;
                        uVar13 = uVar13 + 1;
                    } while (uVar13 < arg4);
                }
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar10);
        }
    }

} // namespace jag::graphics
