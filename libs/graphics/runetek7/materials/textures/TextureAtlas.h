// libs/graphics/runetek7/materials/textures/TextureAtlas.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class TextureAtlas {
    public:
        // virtual methods in vtable order
        virtual ~TextureAtlas();
        int GetID() const;
        uint8_t* GetTexture() const;
        Callstack GetFormatTypeRequest() const;
        TextureAtlas(const graphicutils::TextureAtlasQuality& textureAtlasQuality,
                     const graphicutils::TextureAtlasUsage* textureAtlasUsage, bool arg3);
        void CommonConstructor();
        TextureAtlas(TextureManager& textureManager, int arg2, std::recursive_mutex& recursive_mutex,
                     const graphicutils::TextureAtlasUsage* textureAtlasUsage);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void CreateAtlasTextures(render::Texture2D& texture2D1, render::Texture2D& texture2D2,
                                 render::TextureFormatBitSet textureFormatBitSet,
                                 TextureAtlasInitialisationMode textureAtlasInitialisationMode);
        int GetMippedPixelCount(unsigned int& arg1, unsigned int& arg2, render::TextureFormatBitSet textureFormatBitSet,
                                unsigned int arg4);
        void GenerateDummyTextureData(render::Texture2D& texture2D);
        void GenerateDummyMaterialSettings();
        void GenerateAtlasBackingData(std::unique_ptr<unsigned char[]>& arg1, unsigned int& arg2, unsigned int arg3,
                                      render::TextureFormatBitSet textureFormatBitSet,
                                      TextureAtlasInitialisationMode textureAtlasInitialisationMode);
        void InitialiseFormatTypeRequests();
        void GetUseCompressedTextures() const;
        void ClearSubSection(render::Texture2D& texture2D, render::TextureFormatBitSet textureFormatBitSet,
                             TextureAtlasInitialisationMode textureAtlasInitialisationMode, unsigned int arg4,
                             unsigned int arg5, unsigned int arg6);
        void GetTextureSlotData(std::array<unsigned int, 3ul>& arg1, std::array<unsigned char, 3ul>& arg2,
                                std::array<unsigned short, 3ul>& arg3, std::array<unsigned short, 3ul>& arg4,
                                unsigned char arg5, int arg6);
        unsigned long GetTextureSlotIDs(std::array<unsigned int, 3ul>& arg1, int arg2) const;
        void GetTextureSlotSizes(std::array<unsigned char, 3ul>& arg1, int arg2) const;
        void SetMaterialSettingsTextureData(unsigned int arg1,
                                            const TextureAtlasMaterialSettings& textureAtlasMaterialSettings);
        unsigned long GetTexturePixelSizes(std::array<unsigned short, 3ul>& arg1, int arg2) const;
        unsigned int GetMaterialSettingsSlotXY(unsigned short& arg1, unsigned int arg2) const;
        void AddReference(const MaterialInfo& materialInfo);
        void AddReferences(const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos);
        void RemoveReference(int arg1);
        void RemoveReferences(const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos);
        unsigned long
        CheckContainsMaterials(const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos) const;
        unsigned long CheckContainsMaterial(int arg1) const;
        unsigned long
        CheckMaterialsLoaded(const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos) const;
        unsigned long CheckMaterialLoaded(int arg1) const;
        unsigned int AddMaterials(const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos);
        unsigned long GetTextureSlots(eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul>* textureAtlasSlot2DGroups,
                                      const WrapArray<MaterialInfo const>& wrapArray);
        void AddMaterial(unsigned int arg1, TextureAtlasMaterialMapping& textureAtlasMaterialMapping,
                         const TextureAtlasSlot2DGroup& textureAtlasSlot2DGroup);
        auto GetSlotForNewTexture(unsigned int arg1);
        void SetTextureMipData(render::Texture2D& texture2D, bool arg2, unsigned int arg3, unsigned int arg4,
                               unsigned int arg5, unsigned int arg6, const void* arg7, unsigned int arg8,
                               unsigned int arg9);
        void AddTextureReference(bool arg1, unsigned int arg2, unsigned int arg3,
                                 const graphicutils::TextureAtlasSlot2D& textureAtlasSlot2D);
        void AddMaterialProvisionally(const MaterialInfo& materialInfo);
        void AddTextureData(const shared_ptr<TextureData>& textureData,
                            const TextureAtlasTextureMapping& textureAtlasTextureMapping);
        void GetAtlasQuality() const;
        uint64_t UploadTexture(int arg1, TextureAtlasTextureMapping& textureAtlasTextureMapping);
        void UpdateMaterials();
        void ProcessRemovalQueue();
        unsigned long UpdateMaterial(unsigned int arg1);
        void RemoveMaterial(unsigned int arg1);
        void RemoveTexture(unsigned int arg1);
        void MainDraw();
        void LoadTextures();
        void UploadDelayedMaterials();
        void SetSamplerState(const render::SamplerState* samplerState);
        uint32_t GetNumLoadingTextures() const;
        uint32_t GetNumLoadingMaterials() const;
        void GetUsageMap(TextureAtlasUsageMap& textureAtlasUsageMap) const;
        unsigned long GetDetailsAtPosition(int& arg1, int& arg2, int& arg3, unsigned int& arg4,
                                           eastl::vector<eastl::pair<int, int>>& pairs, int arg6, int arg7) const;
        uint32_t CheckMaterialsFit(const WrapArray<MaterialInfo const>& wrapArray);
        uint32_t CheckMaterialsFitWorstCase(const WrapArray<MaterialInfo const>& wrapArray);
        void GetAtlasUsageType() const;
        bool InUse() const;
        uint8_t* GetSettingsTexture() const;
        void GetSlotCount() const;
        uint32_t GetSlotPixelResolution() const;
        void GetAtlasPixelResolution() const;
        void GetMipLimit() const;
        static int32_t m_clearDataMutex[16];                                      // initialised in its definition
        static int64_t m_textureDataTypes;                                        // = 16974336
        static int32_t m_dummyTextureIDs[3];                                      // = { -1, -2, -3 }
        static int32_t m_loadingTextureIDs[3];                                    // = { -4, -2, -3 }
        static eastl::fixed_vector<unsigned char, 16ul> m_initialisationData[30]; // initialised in its definition
        static std::array<std::array<Array<unsigned char>, 5ul>, 6ul>
            m_clearData; // = array<std::array<Array<unsigned char>, 5ul>, 6ul>()

    private:
        TextureManager* field_8;
        int m_iD;
        uint8_t _unknown_20[4];
        AnimationWrapper field_24;
        uint8_t _unknown_144[32];
        Callstack m_formatTypeRequest;
        uint8_t _unknown_192[164472];
        uint8_t field_164664;
        uint8_t _unknown_164665[7];
        uint8_t m_texture[1];
        uint8_t _unknown_164673[511];
        uint8_t m_settingsTexture[1];
        uint8_t _unknown_165185[22607];
        int field_187792;
        uint8_t _unknown_187796[12];
        recursive_mutex* field_187808;
        uint8_t _unknown_187816[8];
    };

    class TextureAtlasMaterialMapping {
    public:
        TextureAtlasMaterialMapping();
        void Initialise(const std::array<int, 3ul>& arg1, unsigned int arg2);

    private:
        uint64_t field_0;
        uint32_t field_8;
        unsigned int field_12;
        uint32_t field_16;
        uint8_t field_20;
        uint8_t _unknown_21[7];
    };

    class TextureAtlasSlot2DGroup {
    public:
        void operator[](int arg1) const;
        TextureAtlasSlot2DGroup();
        void operator[](int arg1);
        TextureAtlasSlot2DGroup(const TextureAtlasSlot2DGroup& textureAtlasSlot2DGroup);

        uint8_t _unknown_0[1];
    };

    // 0x1001ec630
    uint8_t* TextureAtlas::GetTexture() const {
        return m_texture;
    }

    // 0x1001edb30
    void GraphNodeDelete::operator()(GraphNode* graphNode) const {
        graphNode->~GraphNode();
    }

    // 0x10085b570
    void TextureAtlas::GetAtlasQuality() const {
        field_24->SSOBeginPtr();
    }

    // 0x10085f360
    void TextureAtlas::GetAtlasUsageType() const {
        field_24->GetAuthWrapper();
    }

    // 0x10086a790
    TextureAtlasMaterialMapping::TextureAtlasMaterialMapping() : field_12(4294967295), field_16(4294967295) {
        *(uint16_t*)&field_20 = 0;
    }

    // 0x10086a9a0
    TextureAtlasSlot2DGroup::TextureAtlasSlot2DGroup() : std::array<graphicutils::TextureAtlasSlot2D, 3ul>() {}

    // 0x10086f250
    auto TextureAtlas::MainDraw()::$_0::operator()<std::future<void>>(std::future<void>& future) const {
        type* in_RDX;
        duration<long long, std::ratio<1l, 1l>> local_28;

        local_28.duration<int>(0, in_RDX);
        return wait_for<long long, std::ratio<1l, 1l>>(local_28) == 0;
    }

    // 0x100870560
    auto
    TextureAtlas::DestroyRenderingResources()::$_2::operator()<std::future<void>>(std::future<void>& future) const {
        type* in_RDX;
        duration<long long, std::ratio<1l, 1l>> local_28;

        local_28.duration<int>(0, in_RDX);
        return wait_for<long long, std::ratio<1l, 1l>>(local_28) == 0;
    }

    // 0x1008705a0
    auto
    TextureAtlas::GetNumLoadingTextures() const ::$_3::operator()<eastl::pair<int const, TextureAtlasTextureMapping>>(
        const eastl::pair<int const, TextureAtlasTextureMapping>& arg1) const {
        return this[15] != (__3)2;
    }

    // 0x1008705b0
    auto
    TextureAtlas::GetNumLoadingMaterials() const ::$_4::operator()<eastl::pair<int const, TextureAtlasMaterialMapping>>(
        const eastl::pair<int const, TextureAtlasMaterialMapping>& arg1) const {
        return this[25] != (__4)2;
    }

    // 0x100871530
    TextureAtlasSlot2DGroup::TextureAtlasSlot2DGroup(const TextureAtlasSlot2DGroup& textureAtlasSlot2DGroup)
        : std::array<graphicutils::TextureAtlasSlot2D, 3ul>(textureAtlasSlot2DGroup) {}

    // 0x100871600
    auto TextureAtlas::GetTextureSlots(eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul>*,
                                       WrapArray<MaterialInfo const> const&)::$_6::
    operator()<eastl::pair<int const, TextureAtlasTextureMapping>>(
        const eastl::pair<int const, TextureAtlasTextureMapping>& arg1) const {
        return this[14];
    }

    // 0x100871610
    auto TextureAtlas::GetTextureSlots(eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul>*,
                                       WrapArray<MaterialInfo const> const&)::$_7::
    operator()<eastl::pair<int const, TextureAtlasMaterialMapping>>(
        const eastl::pair<int const, TextureAtlasMaterialMapping>& arg1) const {
        int* piVar1;
        long lVar3;
        uint8_t* puVar4;
        uint64_t unaff_RBX;

        pair<int const, TextureAtlasMaterialMapping> pVar2 = arg1[24];
        if (pVar2 != (pair<int const, TextureAtlasMaterialMapping>)0) {
            lVar3 = *(long*)this;
            puVar4 = (uint8_t*)(*((lVar3 + 186448)))[(long)*(int*)(arg1 + 16)];
            *puVar4 = 0;
            piVar1 = (int*)(lVar3 + 187792);
            *piVar1 = *piVar1 - 1;
        }
        return (auto)(((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)pVar2);
    }

    // 0x1008764b0
    bool TextureAtlas::InUse() const {
        return 4 < field_187792;
    }

    // 0x10087e310
    uint8_t* TextureAtlas::GetSettingsTexture() const {
        return m_settingsTexture;
    }

    // 0x10091e650
    void TextureAtlas::GetSlotCount() const {
        field_24->GetAliveCount();
    }

    // 0x10091e660
    uint32_t TextureAtlas::GetSlotPixelResolution() const {
        auto puVar1 = GetAtlasQuality();
        return *puVar1;
    }

    // 0x10091e670
    void TextureAtlas::GetAtlasPixelResolution() const {
        field_24->GetNormalEmissiveMapID();
    }

    // 0x10091e680
    void TextureAtlas::GetMipLimit() const {
        field_24->GetMipLimit();
    }

} // namespace jag::graphics

namespace jag::graphicutils {
    class TextureAtlasSlot {
    public:
        TextureAtlasSlot();
        bool OccupiesSlot(unsigned short arg1, unsigned short arg2, unsigned short arg3) const;

    private:
        uint32_t field_0;
        uint16_t field_4;
        uint8_t field_6;
        uint8_t _unknown_7[1];
        unsigned short field_8;
        unsigned short field_10;
        uint8_t _unknown_12[6];
    };

    class TextureAtlasSlot2D {
    public:
        TextureAtlasSlot2D(unsigned short arg1, unsigned short arg2, unsigned short arg3);
        TextureAtlasSlot2D(const TextureAtlasSlot2D& textureAtlasSlot2D);
        TextureAtlasSlot2D();
        bool IsValid() const;

    private:
        uint16_t field_0;
        uint16_t field_2;
        uint16_t field_4;
        uint8_t _unknown_6[6];
    };

    // 0x100bbd3a0
    bool TextureAtlasSlot2D::IsValid() const {
        if ((field_0 == -1) || (field_2 == -1)) {
            return false;
        }
        return field_4 != 0;
    }

    // 0x100bbee60
    TextureAtlasSlot2D::TextureAtlasSlot2D() : field_0(65535), field_2(65535), field_4(0) {}

    // 0x100bc0990
    bool TextureAtlasSlot::OccupiesSlot(unsigned short arg1, unsigned short arg2, unsigned short arg3) const {
        uint64_t in_register_00000032;

        if ((field_8 <= arg1) && (field_10 <= arg2)) {
            if ((int)(((int)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) - (unsigned int)field_8) *
                      (unsigned int)arg3) < (int)(unsigned int)(unsigned short)field_4) {
                return (int)(((unsigned int)arg2 - (unsigned int)field_10) * (unsigned int)arg3) <
                       (int)(unsigned int)(unsigned short)field_4;
            }
        }
        return false;
    }

} // namespace jag::graphicutils

namespace jag::oldscape::rseven {
    // 0x1001ed340
    void SamplerOverride::~SamplerOverride()::$_2::operator()(
        shared_ptr<jag::graphics::TextureAtlas>& textureAtlas) const {
        TextureAtlas* this_00;
        long lVar2;

        hashtable<jag::graphics::TextureAtlas*, eastl::pair<jag::graphics::TextureAtlas* const, render::SamplerState>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<jag::graphics::TextureAtlas* const, render::SamplerState>>,
                  eastl::equal_to<jag::graphics::TextureAtlas*>, eastl::hash<jag::graphics::TextureAtlas*>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_01 =
                (hashtable<jag::graphics::TextureAtlas*,
                           eastl::pair<jag::graphics::TextureAtlas* const, render::SamplerState>, eastl::allocator,
                           eastl::use_first<eastl::pair<jag::graphics::TextureAtlas* const, render::SamplerState>>,
                           eastl::equal_to<jag::graphics::TextureAtlas*>, eastl::hash<jag::graphics::TextureAtlas*>,
                           eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                           true, true>*)(field_0 + 16);
        local_38[0] = (ReturnValue)textureAtlas.end();
        auto local_48 = this_01->find(local_38);
        auto local_38 = this_01->end();
        if (local_48 != local_38 != '\0') {
            this_00 = (TextureAtlas*)textureAtlas.operator->();
            lVar2 = local_48.HeapBeginPtr();
            this_00->SetSamplerState((lVar2 + 16));
        }
    }

} // namespace jag::oldscape::rseven
