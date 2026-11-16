// libs/graphics/runetek7/materials/shaders/Shader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "Shader.h"

namespace jag::graphics {
    // 0x103bbe000
    uint8_t Shader::m_constructedShaderCount[16];

    // 0x100009d50: Shader::GetConstructedEffects() has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x1000b9960: Shader::GetType() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x10011c770: Shader::GetSourceHash() const has the same machine code as eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>, eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true>, eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>::size() const

    // 0x1001a3c10: Shader::GetProgramUnchecked() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1003cf2a0: Shader::GetConstructedShaderId() const has the same machine code as game::WorldMapDefaults::GetDropShadowColourRGBA() const

    // 0x10088fe90
    Shader::Shader(ShaderType shaderType,
                   const std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str1,
                   const std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str2,
                   unsigned long arg4, const EffectList& effectList, const render::VertexDeclaration& vertexDeclaration,
                   const EffectManager& effectManager, unsigned char arg8, RenderPassType renderPassType)
        : m_type(shaderType) {
        ShaderSource* shaderSource2;
        EffectList* effectList_00;

        uint64_t uVar1 = *(uint64_t*)(effectList + 8);
        *(uint64_t*)&field_8 = *(uint64_t*)effectList;
        field_16 = uVar1;
        m_constructedShaderId = 0;
        field_28 = renderPassType;
        field_32 = arg4;
        uint8_t* this_02 = &m_program;
        new (this_02) render::ShaderProgram("");
        field_1904 = arg8;
        field_1905 = '\0';
        auto this_00 = graphics::operator*(m_type);
        shaderSource2 = (ShaderSource*)**this_00;
        Singleton<render::RenderDevice>* this_03 = (Singleton<render::RenderDevice>*)(this_00 + 8);
        effectList_00 = (EffectList*)**this_03;
        ValidateShader((ShaderType)this_03, (ShaderSource*)(unsigned long)shaderType, shaderSource2, effectList_00,
                       (VertexDeclaration*)effectList,
                       (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)vertexDeclaration);
        long lVar4 = ((MapArea*)this_03->Instance())->GetOrigin();
        if (*(char*)(lVar4 + 226) == '\0') {
            field_1904 = field_1904 & 252;
        }
        auto str1_00 = str1.c_str();
        auto str2_00 = str2.c_str();
        bool cVar2 = this_02->CreateFromSourceString(str1_00, str2_00, vertexDeclaration, field_1904);
        this_02->SetName((&ShaderTypeStrings)[m_type]);
        unsigned int uVar3 = (unsigned int)m_constructedShaderCount;
        m_constructedShaderCount = m_constructedShaderCount + 1;
        m_constructedShaderId = uVar3;
        if (!cVar2) {
            shadersourceprovider::ClearResourceCache();
            shadersourceprovider::ForceFileLoading();
            ReloadProgramFromSource(effectManager, 1);
        }
        PostBuild(effectManager);
    }

    // 0x100890010
    void operator*(ShaderType shaderType) {
        return &_shaderTypes + (unsigned long)shaderType * 16;
    }

    // 0x100890040
    void Shader::ValidateShader(ShaderType shaderType, const ShaderSource& shaderSource1,
                                const ShaderSource& shaderSource2, const EffectList& effectList,
                                const render::VertexDeclaration& vertexDeclaration,
                                const std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str) {
        bool bVar1;
        Logger* pLVar4;
        bitset<121ul, unsigned long long>* pbVar5;
        bitset<121ul, unsigned long long>* pbVar6;
        long lVar7;
        unsigned long uVar8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        unsigned long uVar9;
        unsigned int uVar10;
        uint8_t auVar11[16];
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>* in_stack_00000008;
        uint64_t in_stack_ffffffffffffff78;

        uint32_t uVar12 = (uint32_t)((unsigned long)in_stack_ffffffffffffff78 >> 32);
        EffectList local_58;
        EffectList local_78;
        auto pEVar3 = shaderSource2.second();
        local_58 |= *pEVar3;
        pEVar3 = (EffectList*)effectList.second();
        local_58 |= *pEVar3;
        pEVar3 = (EffectList*)shaderSource2.second();
        local_78 |= *pEVar3;
        pEVar3 = (EffectList*)effectList.second();
        local_78 |= *pEVar3;
        EffectList local_68;
        local_68 |= local_58;
        local_68 |= local_78;
        bool cVar2 = local_68.Contains(vertexDeclaration);
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>* local_40 = str;
        if (!cVar2) {
            pLVar4 = logger::default_logger();
            pLVar4->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "materials/shaders/Shader.cpp",
                        160, "Requested effects not available in provided shader. Shader type: %i",
                        (((uint64_t)uVar12 << 32) | (uint32_t)(uint32_t)shaderSource1));
            pLVar4 = logger::default_logger();
            pLVar4->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "materials/shaders/Shader.cpp",
                        161, "Missing effects:");
            pbVar5 = (bitset<121ul, unsigned long long>*)local_68.SSOBeginPtr();
            pbVar6 = (bitset<121ul, unsigned long long>*)vertexDeclaration.SSOBeginPtr();
            lVar7 = pbVar5->size();
            if (lVar7 != 0) {
                uVar8 = 0;
                uVar9 = 1;
                do {
                    cVar2 = (*pbVar6)[uVar8];
                    if (cVar2) {
                        cVar2 = (*pbVar5)[uVar8];
                        if (!cVar2) {
                            pLVar4 = logger::default_logger();
                            pLVar4->Log(false, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/materials/shaders/Shader.cpp",
                                        168, "EffectID: %s (%u)", (&EffectTypeStrings)[uVar8], (int)uVar9 - 1);
                        }
                    }
                    uVar8 = pbVar5->size();
                    bVar1 = uVar9 < uVar8;
                    uVar8 = uVar9;
                    uVar9 = (unsigned long)((int)uVar9 + 1);
                } while (bVar1);
            }
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/shaders/Shader.cpp",
                            173, nullptr);
        }
        cVar2 = vertexDeclaration.Contains(&local_58);
        if (!cVar2) {
            pLVar4 = logger::default_logger();
            pLVar4->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "materials/shaders/Shader.cpp",
                        178, "Missing mandatory effects for requested shader. Shader type: %i",
                        (((uint64_t)uVar12 << 32) | (uint32_t)(uint32_t)shaderSource1));
            pLVar4 = logger::default_logger();
            pLVar4->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "materials/shaders/Shader.cpp",
                        179, "Missing effects:");
            pbVar5 = (bitset<121ul, unsigned long long>*)local_58.SSOBeginPtr();
            pbVar6 = (bitset<121ul, unsigned long long>*)vertexDeclaration.SSOBeginPtr();
            lVar7 = pbVar5->size();
            if (lVar7 != 0) {
                uVar8 = 0;
                uVar9 = 1;
                do {
                    cVar2 = (*pbVar5)[uVar8];
                    if (cVar2) {
                        cVar2 = (*pbVar6)[uVar8];
                        if (!cVar2) {
                            pLVar4 = logger::default_logger();
                            pLVar4->Log(false, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/materials/shaders/Shader.cpp",
                                        186, "EffectID: %s (%u)", (&EffectTypeStrings)[uVar8], (int)uVar9 - 1);
                        }
                    }
                    uVar8 = pbVar5->size();
                    bVar1 = uVar9 < uVar8;
                    uVar8 = uVar9;
                    uVar9 = (unsigned long)((int)uVar9 + 1);
                } while (bVar1);
            }
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/shaders/Shader.cpp",
                            191, nullptr);
        }
        this = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)str.second();
        lVar7 = end();
        if (lVar7 != 0) {
            uVar10 = 1;
            uVar8 = 0;
            do {
                lVar7 = (*this)[uVar8];
                if (*(long*)(lVar7 + 8) == 0) {
                    LogAssert("elementDescs[i].m_Name",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/shaders/Shader.cpp",
                              197, nullptr);
                }
                auVar11 = (*this)[uVar8];
                lVar7 = in_stack_00000008->find(*(char**)(auVar11._0_8_ + 8), auVar11._8_8_);
                if (lVar7 == -1) {
                    lVar7 = (*this)[uVar8];
                    lVar7 = __ZL6strstrUa9enable_ifIXLb1EEEPKcS0_(*(uint64_t*)(lVar7 + 8));
                    if (lVar7 == 0) {
                        pLVar4 = logger::default_logger();
                        lVar7 = (*this)[uVar8];
                        pLVar4->Log(
                            false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/shaders/Shader.cpp",
                            200, "Shader: Warning, referenced vertex attribute %s not found in vertex shader source!",
                            *(uint64_t*)(lVar7 + 8));
                    }
                }
                uVar8 = (unsigned long)uVar10;
                uVar9 = end();
                uVar10 = uVar10 + 1;
            } while (uVar8 < uVar9);
        }
    }

    // 0x100890490
    void Shader::ReloadProgramFromSource(const EffectManager& effectManager, ShaderReloadMode shaderReloadMode) {
        unsigned long* arg1;
        bool cVar3;
        char* pcVar4;
        unsigned long uVar5;
        char* str2;
        VertexDeclaration* vertexDeclaration;
        unsigned char arg4;
        HashedString local_b0;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_a0;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_88;

        ShaderProgram* local_50 = (ShaderProgram*)&m_program;
        local_50->Destroy();
        field_1905 = '\0';
        auto this_00 = graphics::operator*(m_type);
        long* local_70 = (long*)**this_00;
        auto local_68 = *(*(this_00 + 8));
        uint8_t* local_60 = &field_8;
        unsigned long* local_58 = &field_32;
        while (true) {
            (**(void (**)(...))(*local_70 + 16))(&local_a0, local_70, effectManager, local_60);
            (**(void (**)(...))(*local_68 + 16))(&local_88, local_68, effectManager);
            arg1 = local_58;
            *local_58 = 0;
            pcVar4 = (char*)local_a0.c_str();
            local_b0 = HashedString(pcVar4);
            uVar5 = local_b0.end();
            hash_combine(arg1, uVar5);
            pcVar4 = (char*)local_88.c_str();
            local_b0 = HashedString(pcVar4);
            uVar5 = local_b0.end();
            hash_combine(arg1, uVar5);
            pcVar4 = (char*)local_a0.c_str();
            str2 = (char*)local_88.c_str();
            vertexDeclaration = (VertexDeclaration*)local_50->second();
            if (shaderReloadMode == 2) {
                arg4 = field_1904;
            } else {
                arg4 = '\0';
            }
            cVar3 = local_50->CreateFromSourceString(pcVar4, str2, vertexDeclaration, arg4);
            if (shaderReloadMode == 2 || cVar3)
                break;
            shadersourceprovider::ClearResourceCache();
        }
        PostBuild(effectManager);
    }

    // 0x100890690
    void Shader::PostBuild(const EffectManager& effectManager) {
        long lVar1;

        if ((field_1904 & 1) != 0) {
            lVar1 = ((MapArea*)Instance())->GetOrigin();
            if (*(char*)(lVar1 + 224) != '\0') {
                return;
            }
        }
        effectManager.BindConstBufferToShader(m_program, field_8);
        field_1905 = '\x01';
    }

    // 0x100890710
    void Shader::RebuildProgramFromInternalSource(const EffectManager& effectManager) {
        field_1905 = '\0';
        m_program.RebuildFromInternalSource();
        PostBuild(effectManager);
    }

    // 0x1008907a0
    unsigned long Shader::IsReady() const {
        char cVar1 = field_1905;
        if (cVar1) {
            if (m_program.IsReady() == '\0') {
                LogAssert("m_program.IsReady()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/shaders/Shader.cpp",
                          211, nullptr);
            }
        }
        return cVar1 & 4294967295;
    }

    // 0x1008907f0
    void Shader::PreRender(const EffectManager& effectManager) {
        uint8_t* this_00 = &m_program;
        this_00->PreRender();
        if (field_1905 == '\0') {
            if ((field_1904 & 3) == 1) {
                this_00->WaitForAsyncCompile();
                if (!(this_00->IsReady())) {
                    LogAssert("m_program.IsReady()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/shaders/Shader.cpp",
                              232, nullptr);
                }
            }
            if (this_00->IsReady()) {
                effectManager.BindConstBufferToShader(*this_00, field_8);
                field_1905 = '\x01';
            }
        }
    }

    // 0x100890880
    void Shader::DestroyProgram() {
        m_program.Destroy();
        field_1905 = '\0';
    }

} // namespace jag::graphics

// 0x100890790
void __ZL6strstrUa9enable_ifIXLb1EEEPKcS0_(char* param_1, char* param_2) {
    __libcpp_strstr(param_1, param_2);
}
