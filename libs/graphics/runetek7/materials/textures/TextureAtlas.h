// libs/graphics/runetek7/materials/textures/TextureAtlas.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class TextureAtlas {
    public:
        // virtual methods in vtable order
        virtual ~TextureAtlas();
        int GetID() const;
        GetTexture() const;
        Callstack GetFormatTypeRequest() const;
        TextureAtlas(graphicutils::TextureAtlasQuality const&, graphicutils::TextureAtlasUsage const*, bool);
        void CommonConstructor();
        TextureAtlas(TextureManager&, int, std::recursive_mutex&, graphicutils::TextureAtlasUsage const*);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        CreateAtlasTextures(render::Texture2D&, render::Texture2D&, render::TextureFormatBitSet,
                            TextureAtlasInitialisationMode);
        int GetMippedPixelCount(unsigned int&, unsigned int&, render::TextureFormatBitSet, unsigned int);
        void GenerateDummyTextureData(render::Texture2D&);
        void GenerateDummyMaterialSettings();
        void GenerateAtlasBackingData(std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>&,
                                      unsigned int&, unsigned int, render::TextureFormatBitSet,
                                      TextureAtlasInitialisationMode);
        void InitialiseFormatTypeRequests();
        void GetUseCompressedTextures() const;
        void ClearSubSection(render::Texture2D&, render::TextureFormatBitSet, TextureAtlasInitialisationMode,
                             unsigned int, unsigned int, unsigned int);
        void GetTextureSlotData(std::array<unsigned int, 3ul>&, std::array<unsigned char, 3ul>&,
                                std::array<unsigned short, 3ul>&, std::array<unsigned short, 3ul>&, unsigned char, int);
        ulong GetTextureSlotIDs(std::array<unsigned int, 3ul>&, int) const;
        void GetTextureSlotSizes(std::array<unsigned char, 3ul>&, int) const;
        void SetMaterialSettingsTextureData(unsigned int, TextureAtlasMaterialSettings const&);
        ulong GetTexturePixelSizes(std::array<unsigned short, 3ul>&, int) const;
        ulong GetMaterialSettingsSlotXY(unsigned short&, unsigned int) const;
        void AddReference(MaterialInfo const&);
        void AddReferences(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&);
        void RemoveReference(int);
        void RemoveReferences(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&);
        ulong CheckContainsMaterials(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&) const;
        ulong CheckContainsMaterial(int) const;
        ulong CheckMaterialsLoaded(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&) const;
        ulong CheckMaterialLoaded(int) const;
        uint AddMaterials(eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&);
        ulong GetTextureSlots(eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
                              WrapArray<MaterialInfo const> const&);
        void AddMaterial(unsigned int, TextureAtlasMaterialMapping&, TextureAtlasSlot2DGroup const&);
        TextureAtlas* GetSlotForNewTexture(unsigned int);
        void SetTextureMipData(render::Texture2D&, bool, unsigned int, unsigned int, unsigned int, unsigned int,
                               void const*, unsigned int, unsigned int);
        void AddTextureReference(bool, unsigned int, unsigned int, graphicutils::TextureAtlasSlot2D const&);
        void AddMaterialProvisionally(MaterialInfo const&);
        void AddTextureData(shared_ptr<TextureData> const&, TextureAtlasTextureMapping const&);
        void GetAtlasQuality() const;
        UploadTexture(int, TextureAtlasTextureMapping&);
        void UpdateMaterials();
        void ProcessRemovalQueue();
        ulong UpdateMaterial(unsigned int);
        void RemoveMaterial(unsigned int);
        void RemoveTexture(unsigned int);
        void MainDraw();
        void LoadTextures();
        void UploadDelayedMaterials();
        void SetSamplerState(render::SamplerState const*);
        GetNumLoadingTextures() const;
        GetNumLoadingMaterials() const;
        void GetUsageMap(TextureAtlasUsageMap&) const;
        ulong GetDetailsAtPosition(int&, int&, int&, unsigned int&,
                                   eastl::vector<eastl::pair<int, int>, eastl::allocator>&, int, int) const;
        CheckMaterialsFit(WrapArray<MaterialInfo const> const&);
        CheckMaterialsFitWorstCase(WrapArray<MaterialInfo const> const&);
        void GetAtlasUsageType() const;
        bool InUse() const;
        GetSettingsTexture() const;
        void GetSlotCount() const;
        GetSlotPixelResolution() const;
        void GetAtlasPixelResolution() const;
        void GetMipLimit() const;
        static /* 64 bytes */ m_clearDataMutex;                                         // initialised in its definition
        static /* 8 bytes */ m_textureDataTypes;                                        // = 16974336
        static /* 12 bytes */ m_dummyTextureIDs;                                        // = { -1, -2, -3 }
        static /* 12 bytes */ m_loadingTextureIDs;                                      // = { -4, -2, -3 }
        static eastl::fixed_vector<unsigned char, 16ul, true, eastl::allocator>         /* 1680 bytes */
            m_initialisationData[30];                                                   // initialised in its definition
        static std::array<std::array<Array<unsigned char, eastl::allocator>, 5ul>, 6ul> /* 720 bytes */
            m_clearData; // = array<std::array<Array<unsigned char,eastl::allocator>,5ul>,6ul>()

        // data members, from how the methods use this: 187824 bytes
        undefined** field_0;     // offset 0, vtable pointer
        TextureManager* field_8; // offset 8
        int m_iD;                // offset 16
        char _unknown_20[4];
        AnimationWrapper field_24; // offset 24
        char _unknown_144[32];
        Callstack m_formatTypeRequest; // offset 176
        char _unknown_192[65832];
        undefined1 field_66024; // offset 66024
        char _unknown_66025[98639];
        undefined1 field_164664; // offset 164664
        char _unknown_164665[7];
        undefined1 m_texture; // offset 164672
        char _unknown_164673[511];
        undefined1 m_settingsTexture; // offset 165184
        char _unknown_165185[22607];
        int field_187792; // offset 187792
        char _unknown_187796[12];
        recursive_mutex* field_187808; // offset 187808
        undefined1 field_187816;       // offset 187816
        char _unknown_187817[7];
    };

    class TextureAtlasMaterialMapping {
    public:
        TextureAtlasMaterialMapping();
        void Initialise(std::array<int, 3ul> const&, unsigned int);

        // data members, from how the methods use this: 28 bytes
        undefined8 field_0;  // offset 0
        undefined4 field_8;  // offset 8
        uint field_12;       // offset 12
        undefined4 field_16; // offset 16
        undefined1 field_20; // offset 20
        char _unknown_21[7];
    };

    class TextureAtlasSlot2DGroup {
    public:
        void operator[](int) const;
        TextureAtlasSlot2DGroup();
        void operator[](int);
        TextureAtlasSlot2DGroup(TextureAtlasSlot2DGroup const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1001ec630, 16 bytes, inline, placed by class name and debug map
    // TextureAtlas::GetTexture() const
    undefined1* TextureAtlas::GetTexture() {
        return &m_texture;
    }

    // 0x1001edb30, 16 bytes, inline, placed by debug map only (low confidence)
    // GraphNodeDelete::operator()(GraphNode*) const
    /* GraphNodeDelete::TEMPNAMEPLACEHOLDERVALUE(GraphNode*) const */

    void GraphNodeDelete::operator()(GraphNode* param_1) {
        param_1->~GraphNode();
    }

    // 0x10085b570, 16 bytes, inline, placed by class name
    // TextureAtlas::GetAtlasQuality() const
    void TextureAtlas::GetAtlasQuality() {
        type* in_RSI;

        (field_24, in_RSI)->SSOBeginPtr();
    }

    // 0x10085f360, 16 bytes, inline, placed by class name
    // TextureAtlas::GetAtlasUsageType() const
    void TextureAtlas::GetAtlasUsageType() {
        field_24->GetAuthWrapper();
    }

    // 0x10086a790, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // TextureAtlasMaterialMapping::TextureAtlasMaterialMapping()
    void TextureAtlasMaterialMapping::TextureAtlasMaterialMapping() {
        field_12 = 4294967295;
        field_16 = 4294967295;
        *(undefined2*)&field_20 = 0;
    }

    // 0x10086a9a0, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // TextureAtlasSlot2DGroup::TextureAtlasSlot2DGroup()
    void TextureAtlasSlot2DGroup::TextureAtlasSlot2DGroup() {
        new (this) std::array<graphicutils::TextureAtlasSlot2D, 3ul>();
    }

    // 0x10086f250, 64 bytes, inline, placed by class name
    // auto TextureAtlas::MainDraw()::$_0::operator()<std::future<void> >(std::future<void>&) const
    /* auto TextureAtlas::MainDraw()::$_0::TEMPNAMEPLACEHOLDERVALUE(std::future<void>&)
   const */

    bool TextureAtlas::MainDraw()::$_0::operator()(future* param_1) {
        duration local_28[12];
        undefined4 local_1c;

        local_1c = 0;
        std::chrono::duration<long long, std::ratio<1l, 1l>>::duration<int>((int*)local_28, (type*)&local_1c);
        return std::future<void>::wait_for<long long, std::ratio<1l, 1l>>((future<void>*)this, local_28) == 0;
    }

    // 0x100870560, 64 bytes, inline, placed by class name
    // auto TextureAtlas::DestroyRenderingResources()::$_2::operator()<std::future<void> >(std::future<void>&) const
    /* auto 
   TextureAtlas::DestroyRenderingResources()::$_2::TEMPNAMEPLACEHOLDERVALUE(std::future<void>&)
   const */

    bool TextureAtlas::DestroyRenderingResources()::$_2::operator()(future* param_1) {
        duration local_28[12];
        undefined4 local_1c;

        local_1c = 0;
        std::chrono::duration<long long, std::ratio<1l, 1l>>::duration<int>((int*)local_28, (type*)&local_1c);
        return std::future<void>::wait_for<long long, std::ratio<1l, 1l>>((future<void>*)this, local_28) == 0;
    }

    // 0x1008705a0, 16 bytes, inline, placed by class name
    // auto TextureAtlas::GetNumLoadingTextures() const::$_3::operator()<eastl::pair<int const, TextureAtlasTextureMapping> >(eastl::pair<int const, TextureAtlasTextureMapping> const&) const
    /* auto TextureAtlas::GetNumLoadingTextures()
   const::$_3::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<int const,
   TextureAtlasTextureMapping> const&) const */

    _func_GetNumLoadingTextures* const ::$_3::operator()(pair * param_1) {
        undefined7 in_register_00000001;

        return (_func_GetNumLoadingTextures*)CONCAT71(in_register_00000001, this[15] != (__3)2);
    }

    // 0x1008705b0, 16 bytes, inline, placed by class name
    // auto TextureAtlas::GetNumLoadingMaterials() const::$_4::operator()<eastl::pair<int const, TextureAtlasMaterialMapping> >(eastl::pair<int const, TextureAtlasMaterialMapping> const&) const
    /* auto TextureAtlas::GetNumLoadingMaterials()
   const::$_4::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<int const,
   TextureAtlasMaterialMapping> const&) const */

    _func_GetNumLoadingMaterials* const ::$_4::operator()(pair * param_1) {
        undefined7 in_register_00000001;

        return (_func_GetNumLoadingMaterials*)CONCAT71(in_register_00000001, this[25] != (__4)2);
    }

    // 0x100871450, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // TextureAtlasSlot2DGroup::TextureAtlasSlot2DGroup(TextureAtlasSlot2DGroup const&): jumps straight to the base-object constructor

    // 0x100871530, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // TextureAtlasSlot2DGroup::TextureAtlasSlot2DGroup(TextureAtlasSlot2DGroup const&)
    void TextureAtlasSlot2DGroup::TextureAtlasSlot2DGroup(TextureAtlasSlot2DGroup* param_1) {
        new (this) std::array<graphicutils::TextureAtlasSlot2D, 3ul>(param_1);
    }

    // 0x100871600, 16 bytes, inline, placed by class name
    // auto TextureAtlas::GetTextureSlots(eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*, WrapArray<MaterialInfo const> const&)::$_6::operator()<eastl::pair<int const, TextureAtlasTextureMapping> >(eastl::pair<int const, TextureAtlasTextureMapping> const&) const
    /* auto 
   TextureAtlas::GetTextureSlots(eastl::fixed_vector<TextureAtlasSlot2DGroup,
   32ul, true, eastl::allocator>*, WrapArray<MaterialInfo const>
   const&)::$_6::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<int const,
   TextureAtlasTextureMapping> const&) const */

    __6 TextureAtlas::GetTextureSlots(eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
                                      WrapArray<MaterialInfo_const> const&)::$_6::operator()(pair* param_1) {
        return this[14];
    }

    // 0x100871610, 64 bytes, inline, placed by class name
    // auto TextureAtlas::GetTextureSlots(eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*, WrapArray<MaterialInfo const> const&)::$_7::operator()<eastl::pair<int const, TextureAtlasMaterialMapping> >(eastl::pair<int const, TextureAtlasMaterialMapping> const&) const
    /* auto 
   TextureAtlas::GetTextureSlots(eastl::fixed_vector<TextureAtlasSlot2DGroup,
   32ul, true, eastl::allocator>*, WrapArray<MaterialInfo const>
   const&)::$_7::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<int const,
   TextureAtlasMaterialMapping> const&) const */

    ulong TextureAtlas::GetTextureSlots(eastl::fixed_vector<TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
                                        WrapArray<MaterialInfo_const> const&)::$_7::operator()(pair* param_1) {
        int* piVar1;
        pair pVar2;
        long lVar3;
        undefined1* puVar4;
        undefined8 unaff_RBX;

        pVar2 = param_1[24];
        if (pVar2 != (pair)0) {
            lVar3 = *(long*)this;
            puVar4 = (undefined1*)std::array<bool, 1344ul>::operator[]((array<bool, 1344ul>*)(lVar3 + 186448),
                                                                       (long)*(int*)(param_1 + 16));
            *puVar4 = 0;
            piVar1 = (int*)(lVar3 + 187792);
            *piVar1 = *piVar1 + -1;
        }
        return CONCAT71((int7)((ulong)unaff_RBX >> 8), pVar2) & 4294967295;
    }

    // 0x1008764b0, 16 bytes, inline, placed by class name
    // TextureAtlas::InUse() const
    bool TextureAtlas::InUse() {
        return 4 < field_187792;
    }

    // 0x10087e310, 16 bytes, inline, placed by class name
    // TextureAtlas::GetSettingsTexture() const
    undefined1* TextureAtlas::GetSettingsTexture() {
        return &m_settingsTexture;
    }

    // 0x10091e650, 16 bytes, inline, placed by class name
    // TextureAtlas::GetSlotCount() const
    void TextureAtlas::GetSlotCount() {
        field_24->GetAliveCount();
    }

    // 0x10091e660, 16 bytes, inline, placed by class name
    // TextureAtlas::GetSlotPixelResolution() const
    undefined4 TextureAtlas::GetSlotPixelResolution() {
        undefined4* puVar1;

        puVar1 = (undefined4*)GetAtlasQuality(this);
        return *puVar1;
    }

    // 0x10091e670, 16 bytes, inline, placed by class name
    // TextureAtlas::GetAtlasPixelResolution() const
    void TextureAtlas::GetAtlasPixelResolution() {
        field_24->GetNormalEmissiveMapID();
    }

    // 0x10091e680, 16 bytes, inline, placed by class name
    // TextureAtlas::GetMipLimit() const
    void TextureAtlas::GetMipLimit() {
        field_24->GetMipLimit();
    }

} // namespace jag::graphics

namespace jag::graphicutils {
    class TextureAtlasSlot {
    public:
        TextureAtlasSlot();
        bool OccupiesSlot(unsigned short, unsigned short, unsigned short) const;

        // data members, from how the methods use this: 18 bytes
        undefined4 field_0; // offset 0
        undefined2 field_4; // offset 4
        undefined1 field_6; // offset 6
        char _unknown_7[1];
        ushort field_8;  // offset 8
        ushort field_10; // offset 10
        char _unknown_12[6];
    };

    class TextureAtlasSlot2D {
    public:
        TextureAtlasSlot2D(unsigned short, unsigned short, unsigned short);
        TextureAtlasSlot2D(TextureAtlasSlot2D const&);
        TextureAtlasSlot2D();
        bool IsValid() const;

        // data members, from how the methods use this: 12 bytes
        undefined2 field_0; // offset 0
        undefined2 field_2; // offset 2
        undefined2 field_4; // offset 4
        char _unknown_6[6];
    };

    // 0x100bbd340, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // TextureAtlasSlot2D::TextureAtlasSlot2D(): jumps straight to the base-object constructor

    // 0x100bbd3a0, 32 bytes, inline, placed by class header (inline)
    // TextureAtlasSlot2D::IsValid() const
    bool TextureAtlasSlot2D::IsValid() {
        if ((field_0 == -1) || (field_2 == -1)) {
            return false;
        }
        return field_4 != 0;
    }

    // 0x100bbee60, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // TextureAtlasSlot2D::TextureAtlasSlot2D()
    void TextureAtlasSlot2D::TextureAtlasSlot2D() {
        field_0 = 65535;
        field_2 = 65535;
        field_4 = 0;
    }

    // 0x100bc0990, 64 bytes, inline, placed by class header (inline)
    // TextureAtlasSlot::OccupiesSlot(unsigned short, unsigned short, unsigned short) const
    bool TextureAtlasSlot::OccupiesSlot(ushort param_1, ushort param_2, ushort param_3) {
        undefined6 in_register_00000032;

        if ((field_8 <= param_1) && (field_10 <= param_2)) {
            if ((int)(((int)CONCAT62(in_register_00000032, param_1) - (uint)field_8) * (uint)param_3) <
                (int)(uint)(ushort)field_4) {
                return (int)(((uint)param_2 - (uint)field_10) * (uint)param_3) < (int)(uint)(ushort)field_4;
            }
        }
        return false;
    }

} // namespace jag::graphicutils

namespace jag::oldscape::rseven {
    // 0x1001ed340, 144 bytes, inline, placed by debug map only (low confidence)
    // SamplerOverride::~SamplerOverride()::$_2::operator()(shared_ptr<jag::graphics::TextureAtlas>&) const
    /* SamplerOverride::~SamplerOverride()::$_2::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<jag::graphics::TextureAtlas>&)
   const */

    void SamplerOverride::~SamplerOverride()::$_2::operator()(shared_ptr * param_1) {
        TextureAtlas* this_00;
        long lVar1;
        hashtable_iterator_base* extraout_RDX;
        eastl local_48[16];
        undefined8 local_38[2];

        local_38[0] = param_1->end();
        eastl::hashtable<jag::graphics::TextureAtlas*,
                         eastl::pair<jag::graphics::TextureAtlas* const, render::SamplerState>, eastl::allocator,
                         eastl::use_first<eastl::pair<jag::graphics::TextureAtlas* const, render::SamplerState>>,
                         eastl::equal_to<jag::graphics::TextureAtlas*>, eastl::hash<jag::graphics::TextureAtlas*>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                         true>::find((TextureAtlas**)local_48);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_48, (hashtable_iterator_base*)local_38, extraout_RDX)) {
            this_00 = (TextureAtlas*)shared_ptr<jag::graphics::TextureAtlas>::operator->(
                (shared_ptr<jag::graphics::TextureAtlas>*)param_1);
            lVar1 = local_48->HeapBeginPtr();
            this_00->SetSamplerState((SamplerState*)(lVar1 + 16));
        }
    }

} // namespace jag::oldscape::rseven
