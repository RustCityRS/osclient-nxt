// libs/graphics/runetek7/materials/shaders/Shader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "Shader.h"

namespace jag::graphics {
    // 0x103bbe000, 16 bytes, __common; zero-initialised
    Shader::m_constructedShaderCount;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    Shader::GetConstructedEffects();

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    Shader::GetType() const;

    // 0x10011c770: the linker folded this into eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>, eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<int const, unsigned long> >, true, true>::size() const, which has identical code
    Shader::GetSourceHash() const;

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    Shader::GetProgramUnchecked() const;

    // 0x1003cf2a0: the linker folded this into game::WorldMapDefaults::GetDropShadowColourRGBA() const, which has identical code
    Shader::GetConstructedShaderId() const;

    // 0x10088fe90, 384 bytes, base-object constructor, placed by class name and debug map
    // Shader::Shader(ShaderType, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, unsigned long, EffectList const&, render::VertexDeclaration const&, EffectManager const&, unsigned char, RenderPassType)
    /* Shader::Shader(ShaderType, std::basic_string<char,
   std::char_traits<char>, BucketAllocatorSTL<char> > const&, std::basic_string<char,
   std::char_traits<char>, BucketAllocatorSTL<char> > const&, unsigned long,
   EffectList const&, render::VertexDeclaration const&,
   EffectManager const&, unsigned char, RenderPassType) */

    void Shader::Shader(undefined4 param_2,
                        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>* param_3,
                        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>* param_4,
                        undefined8 param_5, undefined8* param_6, VertexDeclaration* param_7, EffectManager* param_8,
                        byte param_9, undefined4 param_10) {
        undefined8 uVar1;
        char cVar2;
        uint uVar3;
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>>* this_00;
        MapArea* this_01;
        long lVar4;
        char* pcVar5;
        char* pcVar6;
        undefined1* this_02;
        Singleton<render::RenderDevice>* this_03;

        *(undefined4*)&field_0 = param_2;
        uVar1 = param_6[1];
        *(undefined8*)&field_8 = *param_6;
        field_16 = uVar1;
        field_24 = 0;
        field_28 = param_10;
        field_32 = param_5;
        this_02 = &field_48;
        new (this_02) render::ShaderProgram("");
        field_1904 = param_9;
        field_1905 = '\0';
        /* WARNING: Load size is inaccurate */
        this_00 = (unique_ptr<ShaderSource, std::default_delete<ShaderSource>>*)graphics::operator*(field_0);
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::operator*(this_00);
        this_03 = (Singleton<render::RenderDevice>*)(this_00 + 8);
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::operator*(
            (unique_ptr<ShaderSource, std::default_delete<ShaderSource>>*)this_03);
        ValidateShader();
        this_01 = (MapArea*)this_03->Instance();
        lVar4 = this_01->GetOrigin();
        if (*(char*)(lVar4 + 226) == '\0') {
            field_1904 = field_1904 & 252;
        }
        pcVar5 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(param_3);
        pcVar6 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(param_4);
        cVar2 = this_02->CreateFromSourceString(pcVar5, pcVar6, param_7, field_1904);
        this_02->SetName((&ShaderTypeStrings)[*(int*)&field_0]);
        uVar3 = (uint)m_constructedShaderCount;
        m_constructedShaderCount = m_constructedShaderCount + 1;
        field_24 = uVar3;
        if (cVar2 == '\0') {
            shadersourceprovider::ClearResourceCache();
            shadersourceprovider::ForceFileLoading();
            ReloadProgramFromSource(this, param_8, 1);
        }
        PostBuild(this, param_8);
    }

    // 0x100890010, 32 bytes, placed by neighbouring functions
    // operator*(ShaderType)
    /* TEMPNAMEPLACEHOLDERVALUE(ShaderType) */

    undefined1* operator*(uint param_1) {
        return &_shaderTypes + (ulong)param_1 * 16;
    }

    // 0x100890040, 1088 bytes, placed by class name
    // Shader::ValidateShader(ShaderType, ShaderSource const&, ShaderSource const&, EffectList const&, render::VertexDeclaration const&, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&)
    /* Shader::ValidateShader(ShaderType, ShaderSource
   const&, ShaderSource const&, EffectList const&,
   render::VertexDeclaration const&, std::basic_string<char, std::char_traits<char>,
   BucketAllocatorSTL<char> > const&) */

    void
    Shader::ValidateShader(undefined8 param_1, undefined4 param_2,
                           compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>* param_3,
                           compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>* param_4,
                           EffectList* param_5,
                           compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>* param_6,
                           char* param_7) {
        bool bVar1;
        char cVar2;
        EffectList* pEVar3;
        undefined8 uVar4;
        vector* pvVar5;
        vector* pvVar6;
        long lVar7;
        ulong uVar8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        ulong uVar9;
        type* ptVar10;
        uint uVar11;
        undefined8 in_stack_ffffffffffffff78;
        undefined4 uVar12;
        EffectList local_78[16];
        EffectList local_68[16];
        EffectList local_58[16];
        EffectList* local_48;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* local_40;
        undefined4 local_34;

        uVar12 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 32);
        local_48 = param_5;
        local_34 = param_2;
        EffectList::EffectList(local_58);
        EffectList::EffectList(local_78);
        pEVar3 = (EffectList*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(param_3);
        EffectList::operator|=(local_58, pEVar3);
        pEVar3 = (EffectList*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(param_4);
        EffectList::operator|=(local_58, pEVar3);
        pEVar3 = (EffectList*)param_3->second();
        EffectList::operator|=(local_78, pEVar3);
        pEVar3 = (EffectList*)param_4->second();
        EffectList::operator|=(local_78, pEVar3);
        EffectList::EffectList(local_68);
        EffectList::operator|=(local_68, local_58);
        pEVar3 = local_48;
        EffectList::operator|=(local_68, local_78);
        cVar2 = local_68->Contains(pEVar3);
        local_40 = param_6;
        if (cVar2 == '\0') {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/shaders/Shader.cpp",
                                160, "Requested effects not available in provided shader. Shader type: %i",
                                CONCAT44(uVar12, local_34));
            uVar4 = logger::default_logger();
            ptVar10 = (type*)0;
            logger::Logger::Log(uVar4, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/shaders/Shader.cpp",
                                161, "Missing effects:");
            pvVar5 = local_68->SSOBeginPtr(ptVar10);
            pvVar6 = pEVar3->SSOBeginPtr(ptVar10);
            lVar7 = eastl::bitset<121ul, unsigned long long>::size();
            if (lVar7 != 0) {
                uVar8 = 0;
                uVar9 = 1;
                do {
                    cVar2 = eastl::bitset<121ul, unsigned long long>::operator[](
                        (bitset<121ul, unsigned long long>*)pvVar6, uVar8);
                    if (cVar2 != '\0') {
                        cVar2 = eastl::bitset<121ul, unsigned long long>::operator[](
                            (bitset<121ul, unsigned long long>*)pvVar5, uVar8);
                        if (cVar2 == '\0') {
                            uVar4 = logger::default_logger();
                            logger::Logger::Log(uVar4, 0, 8,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "graphics/runetek7/materials/shaders/Shader.cpp",
                                                168, "EffectID: %s (%u)", (&EffectTypeStrings)[uVar8], (int)uVar9 + -1);
                        }
                    }
                    uVar8 = eastl::bitset<121ul, unsigned long long>::size();
                    bVar1 = uVar9 < uVar8;
                    uVar8 = uVar9;
                    uVar9 = (ulong)((int)uVar9 + 1);
                } while (bVar1);
            }
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/shaders/Shader.cpp",
                            173, (char*)0);
        }
        cVar2 = pEVar3->Contains(local_58);
        if (cVar2 == '\0') {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/shaders/Shader.cpp",
                                178, "Missing mandatory effects for requested shader. Shader type: %i",
                                CONCAT44(uVar12, local_34));
            uVar4 = logger::default_logger();
            ptVar10 = (type*)0;
            logger::Logger::Log(uVar4, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/shaders/Shader.cpp",
                                179, "Missing effects:");
            pvVar5 = local_58->SSOBeginPtr(ptVar10);
            pvVar6 = pEVar3->SSOBeginPtr(ptVar10);
            lVar7 = eastl::bitset<121ul, unsigned long long>::size();
            if (lVar7 != 0) {
                uVar8 = 0;
                uVar9 = 1;
                do {
                    cVar2 = eastl::bitset<121ul, unsigned long long>::operator[](
                        (bitset<121ul, unsigned long long>*)pvVar5, uVar8);
                    if (cVar2 != '\0') {
                        cVar2 = eastl::bitset<121ul, unsigned long long>::operator[](
                            (bitset<121ul, unsigned long long>*)pvVar6, uVar8);
                        if (cVar2 == '\0') {
                            uVar4 = logger::default_logger();
                            logger::Logger::Log(uVar4, 0, 8,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "graphics/runetek7/materials/shaders/Shader.cpp",
                                                186, "EffectID: %s (%u)", (&EffectTypeStrings)[uVar8], (int)uVar9 + -1);
                        }
                    }
                    uVar8 = eastl::bitset<121ul, unsigned long long>::size();
                    bVar1 = uVar9 < uVar8;
                    uVar8 = uVar9;
                    uVar9 = (ulong)((int)uVar9 + 1);
                } while (bVar1);
            }
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/shaders/Shader.cpp",
                            191, (char*)0);
        }
        this = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(param_6);
        lVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
        if (lVar7 != 0) {
            uVar11 = 1;
            uVar8 = 0;
            do {
                lVar7 = Array<render::VertexElementDesc, eastl::allocator>::operator[](
                    (Array<render::VertexElementDesc, eastl::allocator>*)this, uVar8);
                if (*(long*)(lVar7 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("elementDescs[i].m_Name",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/shaders/Shader.cpp",
                              197, (char*)0);
                }
                lVar7 = Array<render::VertexElementDesc, eastl::allocator>::operator[](
                    (Array<render::VertexElementDesc, eastl::allocator>*)this, uVar8);
                lVar7 = std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::find(
                    param_7, *(ulong*)(lVar7 + 8));
                if (lVar7 == -1) {
                    lVar7 = Array<render::VertexElementDesc, eastl::allocator>::operator[](
                        (Array<render::VertexElementDesc, eastl::allocator>*)this, uVar8);
                    lVar7 = __ZL6strstrUa9enable_ifIXLb1EEEPKcS0_(*(undefined8*)(lVar7 + 8));
                    if (lVar7 == 0) {
                        uVar4 = logger::default_logger();
                        lVar7 = Array<render::VertexElementDesc, eastl::allocator>::operator[](
                            (Array<render::VertexElementDesc, eastl::allocator>*)this, uVar8);
                        logger::Logger::Log(
                            uVar4, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/shaders/Shader.cpp",
                            200, "Shader: Warning, referenced vertex attribute %s not found in vertex shader source!",
                            *(undefined8*)(lVar7 + 8));
                    }
                }
                uVar8 = (ulong)uVar11;
                uVar9 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
                uVar11 = uVar11 + 1;
            } while (uVar8 < uVar9);
        }
    }

    // 0x100890490, 512 bytes, placed by class name
    // Shader::ReloadProgramFromSource(EffectManager const&, ShaderReloadMode)
    void Shader::ReloadProgramFromSource(EffectManager* param_1, int param_3) {
        ulong* puVar1;
        char cVar4;
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>>* this_00;
        char* pcVar5;
        ulong uVar6;
        char* pcVar7;
        VertexDeclaration* pVVar8;
        byte bVar9;
        HashedString local_b0;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_a0[24];
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_88[24];
        long* local_70;
        long* local_68;
        undefined1* local_60;
        ulong* local_58;
        ShaderProgram* local_50;

        local_50 = (ShaderProgram*)&field_48;
        local_50->Destroy();
        field_1905 = '\0';
        /* WARNING: Load size is inaccurate */
        this_00 = (unique_ptr<ShaderSource, std::default_delete<ShaderSource>>*)graphics::operator*(field_0);
        local_70 = (long*)std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::operator*(this_00);
        local_68 = (long*)std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::operator*(this_00 + 8);
        local_60 = &field_8;
        local_58 = &field_32;
        while (true) {
            (**(code**)(*local_70 + 16))(local_a0, local_70, param_1, local_60);
            (**(code**)(*local_68 + 16))(local_88, local_68, param_1);
            puVar1 = local_58;
            *local_58 = 0;
            pcVar5 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_a0);
            new (&local_b0) HashedString(pcVar5);
            uVar6 = local_b0.end();
            hash_combine(puVar1, uVar6);
            pcVar5 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_88);
            new (&local_b0) HashedString(pcVar5);
            uVar6 = local_b0.end();
            hash_combine(puVar1, uVar6);
            pcVar5 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_a0);
            pcVar7 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_88);
            pVVar8 = (VertexDeclaration*)local_50->second();
            if (param_3 == 2) {
                bVar9 = ((Shader*)this)->field_1904;
            } else {
                bVar9 = 0;
            }
            cVar4 = local_50->CreateFromSourceString(pcVar5, pcVar7, pVVar8, bVar9);
            if (param_3 == 2 || cVar4 != '\0')
                break;
            shadersourceprovider::ClearResourceCache();
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_88);
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_a0);
        }
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_88);
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_a0);
        PostBuild((Shader*)this, param_1);
    }

    // 0x100890690, 80 bytes, placed by class name
    // Shader::PostBuild(EffectManager const&)
    void Shader::PostBuild(EffectManager* param_1) {
        MapArea* this_00;
        long lVar1;

        if ((field_1904 & 1) != 0) {
            this_00 = (MapArea*)Instance();
            lVar1 = this_00->GetOrigin();
            if (*(char*)(lVar1 + 224) != '\0') {
                return;
            }
        }
        param_1->BindConstBufferToShader((ShaderProgram*)&field_48, (EffectList*)&field_8);
        field_1905 = '\x01';
    }

    // 0x1008906e0, 48 bytes, complete-object constructor, placed by class name
    // Shader::Shader(ShaderType, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > const&, unsigned long, EffectList const&, render::VertexDeclaration const&, EffectManager const&, unsigned char, RenderPassType)
    /* Shader::Shader(ShaderType, std::basic_string<char,
   std::char_traits<char>, BucketAllocatorSTL<char> > const&, std::basic_string<char,
   std::char_traits<char>, BucketAllocatorSTL<char> > const&, unsigned long,
   EffectList const&, render::VertexDeclaration const&,
   EffectManager const&, unsigned char, RenderPassType) */

    void Shader::Shader() {
        Shader();
    }

    // 0x100890710, 48 bytes, placed by class name
    // Shader::RebuildProgramFromInternalSource(EffectManager const&)
    void Shader::RebuildProgramFromInternalSource(EffectManager* param_1) {
        field_1905 = '\0';
        (&field_48)->RebuildFromInternalSource();
        PostBuild(this, param_1);
    }

    // 0x1008907a0, 80 bytes, placed by class name
    // Shader::IsReady() const
    ulong Shader::IsReady() {
        char cVar1;
        undefined8 unaff_RBX;

        cVar1 = field_1905;
        if (cVar1 != '\0') {
            if ((&field_48)->IsReady() == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_program.IsReady()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/shaders/Shader.cpp",
                          211, (char*)0);
            }
        }
        return CONCAT71((int7)((ulong)unaff_RBX >> 8), cVar1) & 4294967295;
    }

    // 0x1008907f0, 144 bytes, placed by class name
    // Shader::PreRender(EffectManager const&)
    void Shader::PreRender(EffectManager* param_1) {
        undefined1* this_00;
        char cVar1;

        this_00 = &field_48;
        this_00->PreRender();
        if (field_1905 == '\0') {
            if ((field_1904 & 3) == 1) {
                this_00->WaitForAsyncCompile();
                cVar1 = this_00->IsReady();
                if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_program.IsReady()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "materials/shaders/Shader.cpp",
                              232, (char*)0);
                }
            }
            cVar1 = this_00->IsReady();
            if (cVar1 != '\0') {
                param_1->BindConstBufferToShader(this_00, (EffectList*)&field_8);
                field_1905 = '\x01';
            }
        }
    }

    // 0x100890880, 32 bytes, placed by class name
    // Shader::DestroyProgram()
    void Shader::DestroyProgram() {
        (&field_48)->Destroy();
        field_1905 = '\0';
    }

} // namespace jag::graphics

// 0x100890790, 16 bytes, placed by neighbouring functions
// _ZL6strstrUa9enable_ifIXLb1EEEPKcS0_
void __ZL6strstrUa9enable_ifIXLb1EEEPKcS0_(char* param_1, char* param_2) {
    __libcpp_strstr(param_1, param_2);
}
