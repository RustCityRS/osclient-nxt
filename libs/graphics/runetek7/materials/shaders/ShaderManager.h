// libs/graphics/runetek7/materials/shaders/ShaderManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ShaderManager {
    public:
        unsigned int UniqueShaderCount() const;
        ShaderManager(unsigned long arg1);
        void Initialise(const EffectManager* effectManager);
        void InitialisePreloadFromDisk(SystemSettings* systemSettings);
        void Destroy();
        void SerialisePermutations(PacketT<Array<unsigned char>>& arg1) const;
        void DestroyRenderingResources();
        void Clear();
        void GetShader(ShaderType shaderType, const EffectManager& effectManager, const EffectList& effectList,
                       const render::VertexDeclaration& vertexDeclaration, unsigned char arg5,
                       RenderPassType renderPassType);
        shared_ptr* LoadShader(ShaderType shaderType, const EffectManager& effectManager, const EffectList& effectList,
                               const render::VertexDeclaration& vertexDeclaration, unsigned long long arg5,
                               unsigned char arg6, RenderPassType renderPassType);
        void CreateRenderingResources();
        void ReloadShadersFromSource(ShaderReloadMode shaderReloadMode);
        void MainLogic();
        void StartShaderPreload();
        void UseDefaultPermutations();
        unsigned long DeserialisePermutations(eastl::vector<ShaderPermutation>& shaderPermutations,
                                              PacketT<Array<unsigned char>>& arg2) const;
        void PreloadShaders();
        bool IsPreloadingShaders() const;
        auto GetUniqueShaders() const;
        int CountShadersOfType(ShaderType shaderType) const;
        int CountShadersOfTypeUsingEffect(ShaderType shaderType, EffectType effectType) const;
        void AppendPermutationHTML(std::basic_stringstream<char>& basic_stringstream, ShaderType shaderType,
                                   const eastl::bitset<121ul, unsigned long long>& bitset, bool arg4) const;
        void AppendPermutationStr(eastl::fixed_string<char, 260>& str,
                                  const eastl::bitset<121ul, unsigned long long>& bitset, bool arg3,
                                  const ShaderSource& shaderSource) const;
        void SerialisePermutationsToString(std::basic_stringstream<char>& basic_stringstream) const;
        void CacheSize() const;
        ~ShaderManager();

    private:
        pair<int, shared_ptr<game::DebugStringProvider::IStringPool>>* field_0;
        pair<int, shared_ptr<game::DebugStringProvider::IStringPool>>* field_8;
        uint8_t _unknown_16[56];
        unsigned int field_72;
        uint32_t field_76;
        uint8_t field_80;
        uint8_t _unknown_81[39];
        int field_120;
        uint8_t _unknown_124[36];
        shared_ptr field_160;
        EffectManager* field_176;
    };

    // 0x100891e80
    bool ShaderManager::IsPreloadingShaders() const {
        int iVar1;
        bool bVar2;
        int iVar3;

        if (field_80 == '\0') {
            bVar2 = false;
        } else {
            iVar1 = field_120;
            iVar3 = field_88.size();
            bVar2 = iVar1 < iVar3;
        }
        return bVar2;
    }

    // 0x10089b9d0
    void ShaderManager::Destroy()::$_1::operator()(const Filename& filename, int arg2, const eastl::string& str) const {
        auto this_00 = logger::default_logger();
        auto pcVar1 = GetName();
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_00->Log(false, 3,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                     "materials/shaders/ShaderManager.cpp",
                     56, "Failed to save %s shader preload list to %s (%d: %s)", "PreloadList", pcVar1,
                     (unsigned long)filename & 4294967295, uVar2);
    }

    // 0x10089cc70
    void ShaderManager::StartShaderPreload()::$_2::operator()(const Filename& filename,
                                                              Array<unsigned char> arg2) const {
        Logger* pLVar2;
        char* pcVar3;
        Array<unsigned char, BucketAllocatorEASTL> local_40;

        ShaderManager* this_00 = field_0;
        local_40.Array<eastl::allocator>(*arg2);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_60(&local_40);
        if (DeserialisePermutations(&local_40, (vector<ShaderPermutation>*)&this_00->field_88, &local_60) == '\0') {
            pLVar2 = logger::default_logger();
            pcVar3 = filename.GetName();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "materials/shaders/ShaderManager.cpp",
                        241, "Shader preload list loaded from %s failed deserialisation, so using defaults", pcVar3);
            UseDefaultPermutations(this_00);
        } else {
            pLVar2 = logger::default_logger();
            pcVar3 = filename.GetName();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "materials/shaders/ShaderManager.cpp",
                        236, "Shader preload list loaded from %s", pcVar3);
            this_00->field_80 = 1;
        }
    }

    // 0x10089d6d0
    void ShaderManager::StartShaderPreload()::$_3::operator()(const Filename& filename, int arg2,
                                                              const eastl::string& str) const {
        ShaderManager* this_00 = field_0;
        auto this_01 = logger::default_logger();
        auto pcVar1 = filename.GetName();
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_01->Log(false, 3,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                     "materials/shaders/ShaderManager.cpp",
                     247, "Failed to load %s shader preload list at %s (%d: %s), so using defaults", "PreloadList",
                     pcVar1, (unsigned long)(unsigned int)arg2, uVar2);
        UseDefaultPermutations(this_00);
    }

    // 0x1008a9180
    void ShaderManager::CacheSize() const {
        size();
    }

    // 0x1009910b0
    ShaderManager::~ShaderManager() {
        Destroy();
        field_160->~shared_ptr();
        field_128.~basic_string();
        field_88.~vector();
        field_40.~vector();
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008915f0
    shared_ptr_if_not_array<graphics::Shader>::type
    make_shared<graphics::Shader, graphics::ShaderType&,
                std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&, unsigned long&,
                graphics::EffectList const&, render::VertexDeclaration const&, graphics::EffectManager const&,
                unsigned char&, graphics::RenderPassType&>(
        graphics::ShaderType& shaderType,
        const std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str1,
        const std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str2, unsigned long& arg4,
        const graphics::EffectList& effectList, const render::VertexDeclaration& vertexDeclaration,
        const graphics::EffectManager& effectManager, unsigned char& arg8, graphics::RenderPassType& renderPassType) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        RenderPassType* in_stack_00000020;
        int local_44;
        Shader* local_40[2];

        auto arg1 = aligned_alloc(1952, 16);
        if (arg1 == nullptr) {
            new (shaderType) shared_ptr();
        } else {
            local_40[0] =
                placement_new<graphics::Shader, graphics::ShaderType&,
                              std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                              std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                              unsigned long&, graphics::EffectList const&, render::VertexDeclaration const&,
                              graphics::EffectManager const&, unsigned char&, graphics::RenderPassType&>(
                    (void*)((long)arg1 + 32), (ShaderType*)str1, str2,
                    (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)arg4,
                    (unsigned long*)effectList, (EffectList*)vertexDeclaration, (VertexDeclaration*)effectManager,
                    (EffectManager*)arg8, (unsigned char*)renderPassType, in_stack_00000020);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::Shader>, int, graphics::Shader*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (shaderType) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return shaderType;
    }

} // namespace jag
