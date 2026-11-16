// libs/graphics/runetek7/materials/shaders/ShaderManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ShaderManager {
    public:
        UniqueShaderCount() const;
        ShaderManager(unsigned long);
        void Initialise(EffectManager const*);
        void InitialisePreloadFromDisk(SystemSettings*);
        void Destroy();
        void SerialisePermutations(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&) const;
        void DestroyRenderingResources();
        void Clear();
        void GetShader(ShaderType, EffectManager const&, EffectList const&, render::VertexDeclaration const&,
                       unsigned char, RenderPassType);
        shared_ptr* LoadShader(ShaderType, EffectManager const&, EffectList const&, render::VertexDeclaration const&,
                               unsigned long long, unsigned char, RenderPassType);
        void CreateRenderingResources();
        void ReloadShadersFromSource(ShaderReloadMode);
        void MainLogic();
        void StartShaderPreload();
        void UseDefaultPermutations();
        ulong DeserialisePermutations(eastl::vector<ShaderPermutation, eastl::allocator>&,
                                      PacketT<Array<unsigned char, BucketAllocatorEASTL>>&) const;
        void PreloadShaders();
        bool IsPreloadingShaders() const;
        GetUniqueShaders() const;
        int CountShadersOfType(ShaderType) const;
        int CountShadersOfTypeUsingEffect(ShaderType, EffectType) const;
        void AppendPermutationHTML(std::basic_stringstream<char, std::char_traits<char>, std::allocator<char>>&,
                                   ShaderType, eastl::bitset<121ul, unsigned long long> const&, bool) const;
        void AppendPermutationStr(eastl::fixed_string<char, 260, true, eastl::allocator>&,
                                  eastl::bitset<121ul, unsigned long long> const&, bool, ShaderSource const&) const;
        void SerialisePermutationsToString(
            std::basic_stringstream<char, std::char_traits<char>, std::allocator<char>>&) const;
        void CacheSize() const;
        ~ShaderManager();

        // data members, from how the methods use this: 184 bytes
        SpriteReference* field_0; // offset 0
        SpriteReference* field_8; // offset 8
        char _unknown_16[56];
        uint field_72;       // offset 72
        undefined4 field_76; // offset 76
        undefined1 field_80; // offset 80
        char _unknown_81[39];
        int field_120; // offset 120
        char _unknown_124[36];
        shared_ptr field_160;     // offset 160
        EffectManager* field_176; // offset 176
    };

    // 0x100891e80, 48 bytes, inline, placed by class name and debug map
    // ShaderManager::IsPreloadingShaders() const
    bool ShaderManager::IsPreloadingShaders() {
        int iVar1;
        bool bVar2;
        int iVar3;

        if (field_80 == '\0') {
            bVar2 = false;
        } else {
            iVar1 = field_120;
            iVar3 = (&field_88)->size();
            bVar2 = iVar1 < iVar3;
        }
        return bVar2;
    }

    // 0x10089b9d0, 128 bytes, inline, placed by class name
    // ShaderManager::Destroy()::$_1::operator()(Filename const&, int, eastl::string const&) const
    /* ShaderManager::Destroy()::$_1::TEMPNAMEPLACEHOLDERVALUE(Filename const&, int,
   eastl::string const&) const */

    void ShaderManager::Destroy()::$_1::operator()(Filename* param_1, int param_2, basic_string* param_3) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = logger::default_logger();
        uVar2 = param_1->GetName();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar1, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/shaders/ShaderManager.cpp",
                            56, "Failed to save %s shader preload list to %s (%d: %s)", "PreloadList", uVar2, param_2,
                            uVar3);
    }

    // 0x10089cc70, 272 bytes, inline, placed by class name
    // ShaderManager::StartShaderPreload()::$_2::operator()(Filename const&, Array<unsigned char, eastl::allocator>) const
    /* ShaderManager::StartShaderPreload()::$_2::TEMPNAMEPLACEHOLDERVALUE(Filename
   const&, Array<unsigned char, eastl::allocator>) const */

    void ShaderManager::StartShaderPreload()::$_2::operator()(undefined8* param_1, Filename* param_2, Array* param_3) {
        ShaderManager* this;
        undefined8 uVar2;
        undefined8 uVar3;
        ShaderManager* this_00;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_60[32];
        Array<unsigned char, BucketAllocatorEASTL> local_40[24];

        this = (ShaderManager*)*param_1;
        Array<unsigned char, BucketAllocatorEASTL>::Array<eastl::allocator>(local_40, param_3);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(local_60, (Array*)local_40);
        this_00 = (ShaderManager*)local_40;
        this_00->~Array();
        if (DeserialisePermutations(this_00, (vector*)&field_88, (PacketT*)local_60) == '\0') {
            uVar2 = logger::default_logger();
            uVar3 = param_2->GetName();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/shaders/ShaderManager.cpp",
                                241, "Shader preload list loaded from %s failed deserialisation, so using defaults",
                                uVar3);
            UseDefaultPermutations(this);
        } else {
            uVar2 = logger::default_logger();
            uVar3 = param_2->GetName();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/shaders/ShaderManager.cpp",
                                236, "Shader preload list loaded from %s", uVar3);
            field_80 = 1;
        }
        local_60->~PacketT();
    }

    // 0x10089d6d0, 144 bytes, inline, placed by class name
    // ShaderManager::StartShaderPreload()::$_3::operator()(Filename const&, int, eastl::string const&) const
    /* ShaderManager::StartShaderPreload()::$_3::TEMPNAMEPLACEHOLDERVALUE(Filename
   const&, int, eastl::string const&) const */

    void ShaderManager::StartShaderPreload()::$_3::operator()(Filename* param_1, int param_2, basic_string* param_3) {
        ShaderManager* this;
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined4 in_register_00000034;

        this = *(ShaderManager**)param_1;
        uVar1 = logger::default_logger();
        uVar2 = (CONCAT44(in_register_00000034, param_2))->GetName();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar1, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/shaders/ShaderManager.cpp",
                            247, "Failed to load %s shader preload list at %s (%d: %s), so using defaults",
                            "PreloadList", uVar2, (ulong)param_3 & 4294967295, uVar3);
        UseDefaultPermutations(this);
    }

    // 0x1008a9180, 16 bytes, inline, placed by class name
    // ShaderManager::CacheSize() const
    void ShaderManager::CacheSize() {
        size();
    }

    // 0x10097ee80, 16 bytes, complete-object destructor, inline, placed by class name
    // ShaderManager::~ShaderManager(): jumps straight to the base-object destructor

    // 0x1009910b0, 144 bytes, base-object destructor, inline, placed by class name
    // ShaderManager::~ShaderManager()
    void ShaderManager::~ShaderManager() {
        Destroy(this);
        field_160->~shared_ptr();
        (&field_128)->~basic_string();
        (&field_88)->~vector();
        (&field_40)->~vector();
        ~vector_map();
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008915f0, 224 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::Shader>::type make_shared<graphics::Shader, graphics::ShaderType&, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, unsigned long&, graphics::EffectList const&, render::VertexDeclaration const&, graphics::EffectManager const&, unsigned char&, graphics::RenderPassType&>(graphics::ShaderType&, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, unsigned long&, graphics::EffectList const&, render::VertexDeclaration const&, graphics::EffectManager const&, unsigned char&, graphics::RenderPassType&)
    /* shared_ptr_if_not_array<graphics::Shader>::type make_shared<graphics::Shader,
   graphics::ShaderType&, std::basic_string<char, std::char_traits<char>,
   BucketAllocatorSTL<char> > const&, std::basic_string<char, std::char_traits<char>,
   BucketAllocatorSTL<char> > const&, unsigned long&, graphics::EffectList const&,
   render::VertexDeclaration const&, graphics::EffectManager const&, unsigned char&,
   graphics::RenderPassType&>(graphics::ShaderType&, std::basic_string<char,
   std::char_traits<char>, BucketAllocatorSTL<char> > const&, std::basic_string<char,
   std::char_traits<char>, BucketAllocatorSTL<char> > const&, unsigned long&,
   graphics::EffectList const&, render::VertexDeclaration const&,
   graphics::EffectManager const&, unsigned char&, graphics::RenderPassType&) */

    jag* jag::make_shared<graphics::Shader, graphics::ShaderType&,
                          std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                          std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                          unsigned long&, graphics::EffectList_const&, render::VertexDeclaration_const&,
                          graphics::EffectManager_const&, unsigned char&, graphics::RenderPassType&>(
        ShaderType* param_1, basic_string* param_2, basic_string* param_3, ulong* param_4, EffectList* param_5,
        VertexDeclaration* param_6, EffectManager* param_7, uchar* param_8, RenderPassType* param_9) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        Shader* local_40[2];

        pvVar1 = (void*)aligned_alloc(1952, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] =
                placement_new<graphics::Shader, graphics::ShaderType&,
                              std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                              std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                              unsigned long&, graphics::EffectList_const&, render::VertexDeclaration_const&,
                              graphics::EffectManager_const&, unsigned char&, graphics::RenderPassType&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
                    param_9);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::Shader>, int, graphics::Shader*&>(pvVar1, &local_44,
                                                                                                  local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
