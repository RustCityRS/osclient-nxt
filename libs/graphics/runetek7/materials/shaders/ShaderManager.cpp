// libs/graphics/runetek7/materials/shaders/ShaderManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ShaderManager.h"

namespace jag::graphics {
    // 0x10016b4a0: ShaderManager::UniqueShaderCount() const has the same machine code as oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetAdvisedZoom() const

    // 0x1008908a0
    ShaderManager::ShaderManager(unsigned long arg1) : eastl::vector_map<unsigned long long, shared_ptr<Shader>>() {
        vector<shared_ptr<Shader>>* local_38 = (vector<shared_ptr<Shader>>*)&field_40;
        new (local_38) eastl::vector<shared_ptr<Shader>>();
        field_76 = 0;
        field_80 = 0;
        new (&field_88) eastl::vector<ShaderPermutation>();
        field_120 = 0;
        new (&field_128) eastl::string("PgEAAAAAXZ3bawAAAUgFgADwCAaEKAQFABAAzBL7EgUAAIAA*"
                                       "BsGriAEBQIQAIrylkIKAACAAPAKBq4qBAUAEACK8pZCBgAAgAD4GgbuIAQFAhAAivKWQgAAAIAA*"
                                       "BsG7qoFBQIQAIrylkIAAACAAPgKBq6oBQUCEACK8pZCtgAAgAD4Ggbu6AUFAhAAivKWQj4AAIAA*"
                                       "AoG6iAEhQIQAIrylkIEAACAAPgbBq7oFQUCEACK8pZCRAAAgAD4CwauqBUFAhAAivKWQiAAAIAA8AoG"
                                       "rioUBQAQAIrylkIGAACAAPgbBu6gBQUCEACK8pZCAAAAgAD4GwauIBQFAhAAivKWQgcAAIAA*"
                                       "AoGruAUBQIQAIrylkIxAACAAPgaBq5oBQUCEACK8pZCtgAAgAD4GgbuoAQFAhAAivKWQjAAAIAA*"
                                       "AsGruAVBQIQAIrylkIgAACAAPgbBq6gBQUCEACK8pZCDQAAgAD4CgbuqgUFAhAAivKWQgAABAAABAgA"
                                       "hAAAAQAAADGldNYvAACAAPgbBq6qBQUCEACK8pZCCAAAgAD4GgauoAQFAhAAivKWQj4AAIAA8AoG7iA"
                                       "FBQAQAIrylkIGAACAAPAKBu4qBAUAEACK8pZCBQAAgADwCwauIBUFABAAivKWQiYAAIAA*"
                                       "BoG7igFBQIQAIrylkIvAACAAPAKBq4gBQUAEACK8pZCTgAAgAD4Ggbu6AQFAhAAivKWQj4AAIAA*"
                                       "AoGriAVBQIQAIrylkIWAACAAPgaBq4oBAUCEACK8pZCTAAAgAD4GwbuIAQFAhAAivKWQgMAAIAA*"
                                       "AsGrqAFBQIQAIrylkIeAACAAPgKBqoqBIUCEACK8pZCAAAAgADwCgauIAQFABAAivKWQjcAAAAA8AoA"
                                       "AKAADQAAAIrylkIDAACAAPgbBq6gFAUCEACK8pZCBgAAgADwCwbuoAUFABAAivKWQgUAAIAA*"
                                       "AsGrqAUBQIQAIrylkIpAACAAPgKBqoqFIUCEACK8pZCAAAAgAD4CgbuoAQFAhAAivKWQi8AAIAA*"
                                       "AoG6qoFhQIQAIrylkIAAACAAPgLBu6gFQUCEACK8pZCAAAAgAD4Ggbu4AQFAhAAivKWQjAAAIAA8AoG"
                                       "riAUBQAQAIrylkK2AACAAPgaBu6oBAUCEACK8pZCMAAAgAD4CgaqIBWFAhAAivKWQhMACYAAQBgGhAA"
                                       "EAcJ2AL-7ZmoNAACAAPgLBu4oBAUCEACK8pZCEwAAgADwCwauIBQFABAAivKWQkMAAIAA*"
                                       "BoGriAEBQIQAIrylkIfAACAAPALBu4qBAUAEACK8pZCBQADAAAAAAAAAhABAAAAivKWQgAAAIAA*"
                                       "AsGrugEBQIQAIrylkJMAACAAPgKBu5gBAUCEACK8pZCMQAAgADwCgbu4AQFABAAivKWQi8AAIAA*"
                                       "AoG6qAEhQIQAIrylkIHAACAAPgKBqqqBYUCEACK8pZCBAAAgAD4CwauoBUFAhAAivKWQgAAAIAA*"
                                       "BoGriAVBQIQAIrylkIYAACAAPgKBurgBYUCEACK8pZCHwAAgAD4Cgaq4FWFAhAAivKWQkkAAIAA*"
                                       "AoG7ioFBQIQAIrylkIGAACAAPgKBuroBIUCEACK8pZCFgAAgADwCwauoBUFABAAivKWQgYABYAA*"
                                       "BgGhGgEBQIQAMwS*xIAAAqAAAAIAoRAAAECWABbPrREAAAAgAD4Cwbu6AQFAhAAivKWQkoAAIAA*"
                                       "AoGrqAVBQIQAIrylkIAAACAAPALBq4qBAUAEACK8pZCBgAAgADwCwbu4AUFABAAivKWQh8AAIAA*"
                                       "BoG7iAFBQIQAIrylkIBAACAAPgLBq7gFAUCEACK8pZCKQAAgAD4Cgbq6AWFAhAAivKWQj4AAIAA*"
                                       "AsGriAVBQIQAIrylkIjAACAAPgKBq6oFAUCEACK8pZCRQAAgADwCgbuIBQFABAAivKWQi8AAIAA*"
                                       "AoG7qAVBQIQAIrylkIxAACAAPgKBq6oBAUCEACK8pZCPgAAgAD4CwbuqAQFAhAAivKWQhMAAIAA*"
                                       "AsGrqgFBQIQAIrylkJIAACA..." /* TRUNCATED STRING LITERAL */);
        new (field_160) shared_ptr();
        field_176 = nullptr;
        reserve(arg1);
        local_38->reserve(arg1);
        field_88.reserve(arg1);
    }

    // 0x100890ab0
    void ShaderManager::Initialise(const EffectManager* effectManager) {
        field_176 = effectManager;
    }

    // 0x100890ac0
    void ShaderManager::InitialisePreloadFromDisk(SystemSettings* systemSettings) {
        Filename local_158("ShaderManager");
        long lVar1 = systemSettings->GetSpritesArchive();
        auto local_168 = FileSystem::NewFileSystem(local_158, 0, *(char**)(lVar1 + 16), false);
        *field_160 = local_168;
    }

    // 0x100890ba0
    void ShaderManager::Destroy() {
        FileSystem* this_01;
        Array<unsigned char, BucketAllocatorEASTL>* arg2;
        char* arg1;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_1e8;
        function<void(Filename const&, int, eastl::stringconst&)> local_1c8[48];
        function<void(Filename const&)> local_198[48];
        Filename local_168;
        long local_38;

        uint8_t* this_00 = field_160;
        if (this_00->operator_cast_to_bool()) {
            if (!(empty())) {
                local_1e8 = PacketT();
                SerialisePermutations(local_1e8);
                this_01 = (FileSystem*)(*this_00).operator->();
                arg1 = "PreloadList";
                local_168 = Filename("PreloadList");
                arg2 = (Array<unsigned char, BucketAllocatorEASTL>*)local_1e8.GetDataArrayPtr();
                std::function<void(Filename const&)>::function<ShaderManager::Destroy()::__0, void>(local_198,
                                                                                                    (__0*)arg1);
                std::function<void(Filename const&, int, eastl::stringconst&)>::function<ShaderManager::Destroy()::__1,
                                                                                         void>(local_1c8, (__1*)arg1);
                this_01->WriteFile(local_168, *arg2, false, *local_198, *local_1c8);
                local_168.~pair();
            }
        }
        DestroyRenderingResources();
        Clear();
        this_00->reset();
    }

    // 0x100890d30
    void ShaderManager::SerialisePermutations(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1) const {
        shared_ptr<Shader>* this_00;
        uint64_t uVar1;
        uint8_t uVar2;
        bool arg2;
        unsigned int arg1_00;
        GeometryBatchInstance* pGVar6;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_02;
        WorldmapAreaMetadata* this_03;
        ShaderProgram* this_05;
        uint8_t* puVar8;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_07;
        Layout* this_08;
        uint64_t* puVar9;
        unsigned long long arg1_01;
        ShaderPermutation* shaderPermutation;
        ShaderPermutation* pSVar10;
        float fVar11;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_78;
        float local_34;

        vector<ShaderPermutation, BucketAllocatorEASTL> local_50;
        unsigned long uVar3 = size();
        local_50.reserve(uVar3);
        float local_38 = (float)FrameTime::GetSecondsSinceProgramStart();
        long lVar4 = HeapBeginPtr();
        long lVar5 = end();
        do {
            if (lVar4 == lVar5) {
                lVar4 = local_50.size();
                local_78 = PacketT(lVar4 * 23 + 14);
                arg1 = local_78;
                arg1.p1<oldscape::shared::LoginProt::ID>(64);
                arg1.p1<oldscape::shared::LoginProt::ID>(3);
                arg1_01 = datetools::GetCompilationDate();
                arg1.p8<long long>(arg1_01);
                uVar3 = local_50.size();
                arg1.p4<int>(uVar3);
                arg2 = (bool)IsBigEndian();
                local_78 = DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(arg1, arg2);
                shaderPermutation = (ShaderPermutation*)local_50.HeapBeginPtr();
                pSVar10 = (ShaderPermutation*)local_50.end();
                if (shaderPermutation != pSVar10) {
                    do {
                        operator<<(&local_78, shaderPermutation);
                        shaderPermutation = shaderPermutation + 2;
                    } while (shaderPermutation != pSVar10);
                }
                return;
            }
            this_00 = (shared_ptr<Shader>*)(lVar4 + 8);
            pGVar6 = (GeometryBatchInstance*)(*this_00).operator->();
            this_02 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)pGVar6->GetMaterial();
            this_03 = (WorldmapAreaMetadata*)this_02->second();
            arg1_00 = this_03->GetMinMapX();
            if (this_03->Instance()->GetVertexDeclaration(arg1_00) != 0) {
                pGVar6 = (GeometryBatchInstance*)(*this_00).operator->();
                this_05 = (ShaderProgram*)pGVar6->GetMaterial();
                fVar11 = (float)this_05->GetLastUsedTimeSeconds();
                fVar11 = local_38 - fVar11;
                if (fVar11 <= 43200.0) {
                    local_34 = fVar11;
                    if (fVar11 < 0.0) {
                        LogAssert("secondsSinceLastUsed >= 0.0f",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/materials/shaders/ShaderManager.cpp",
                                  612, "We shouldn\'t have any shaders that have last been used in the future...");
                    }
                    puVar8 = (uint8_t*)local_50.push_back();
                    uVar2 = ((CoordMapSquare*)(*this_00).operator->())->GetX();
                    *puVar8 = uVar2;
                    this_07 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_00)
                                  .operator->();
                    this_08 = (Layout*)this_07->second();
                    puVar9 = (uint64_t*)this_08->SSOBeginPtr();
                    uVar1 = puVar9[1];
                    *(uint64_t*)(puVar8 + 8) = *puVar9;
                    *(uint64_t*)(puVar8 + 16) = uVar1;
                    *(unsigned int*)(puVar8 + 24) = arg1_00;
                    *(short*)(puVar8 + 28) = (short)(int)local_34;
                }
            }
            lVar4 = lVar4 + 24;
        } while (true);
    }

    // 0x100890fd0
    void ShaderManager::DestroyRenderingResources() {
        long lVar1 = HeapBeginPtr();
        long lVar2 = end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 24) {
            ((Shader*)(*((lVar1 + 8))).operator->())->DestroyProgram();
        }
        field_40.clear();
        field_76 = 0;
    }

    // 0x100891040
    void ShaderManager::Clear() {
        clear();
        field_40.clear();
        field_76 = 0;
        long lVar2 = HeapBeginPtr();
        long lVar3 = end();
        while (true) {
            if (lVar2 == lVar3) {
                return;
            }
            if (((lVar2 + 8))->unique() == '\0')
                break;
            lVar2 = lVar2 + 24;
        }
        LogAssert("shader.second.unique()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/materials/"
                  "shaders/ShaderManager.cpp",
                  74, nullptr);
    }

    // 0x1008910d0
    void ShaderManager::GetShader(ShaderType shaderType, const EffectManager& effectManager,
                                  const EffectList& effectList, const render::VertexDeclaration& vertexDeclaration,
                                  unsigned char arg5, RenderPassType renderPassType) {
        shared_ptr* shared_ptr;
        uint32_t in_register_0000003c;
        uint64_t in_register_00000081;
        RenderPassType in_stack_00000008;
        unsigned long long local_38;

        ShaderManager* this_00 = (ShaderManager*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)shaderType);
        unsigned long local_40 = 0;
        unsigned long arg2 = vertexDeclaration.GetEffectListHash();
        hash_combine(&local_40, arg2);
        hash_combine(&local_40, (unsigned long)effectManager & 4294967295);
        uint32_t uVar2 = ((WorldmapAreaMetadata*)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5))->GetMinMapX();
        local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar2);
        hash_combine<unsigned int>(&local_40, (unsigned int*)&local_38);
        local_38 = local_40;
        shared_ptr = (shared_ptr*)(*this_00)[local_38];
        if (shared_ptr::operator_cast_to_bool(shared_ptr) == '\0') {
            LoadShader(this_00, (ShaderType)effectManager, (EffectManager*)effectList, (EffectList*)vertexDeclaration,
                       (VertexDeclaration*)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5), local_40,
                       (unsigned char)renderPassType, in_stack_00000008);
        } else {
            local_38 = local_40;
            (*this_00)[local_38];
        }
    }

    // 0x100891280
    shared_ptr* ShaderManager::LoadShader(ShaderType shaderType, const EffectManager& effectManager,
                                          const EffectList& effectList,
                                          const render::VertexDeclaration& vertexDeclaration, unsigned long long arg5,
                                          unsigned char arg6, RenderPassType renderPassType) {
        bool bVar1;
        bool cVar2;
        shared_ptr<Shader>* psVar8;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        EffectList* this_04;
        ShaderProgram* shaderProgram;
        shared_ptr* psVar9;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_b0;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_98;
        shared_ptr* local_78;

        ShaderType local_34 = shaderType;
        auto this_01 = graphics::operator*(shaderType);
        long* plVar3 = (long*)**this_01;
        (**(void (**)(...))(*plVar3 + 16))(&local_b0, plVar3, effectManager, effectList);
        long lVar4 = graphics::operator*(local_34);
        plVar3 = (long*)*(*((lVar4 + 8)));
        (**(void (**)(...))(*plVar3 + 16))(&local_98, plVar3, effectManager, effectList);
        unsigned long local_48 = 0;
        auto pcVar5 = local_b0.c_str();
        HashedString local_60(pcVar5);
        unsigned long uVar6 = local_60.end();
        hash_combine(&local_48, uVar6);
        pcVar5 = (char*)local_98.c_str();
        local_60 = HashedString(pcVar5);
        uVar6 = local_60.end();
        hash_combine(&local_48, uVar6);
        lVar4 = HeapBeginPtr();
        long lVar7 = end();
        for (; lVar4 != lVar7; lVar4 = lVar4 + 24) {
            psVar9 = (shared_ptr*)(lVar4 + 8);
            cVar2 = shared_ptr::operator_cast_to_bool(psVar9);
            bVar1 = true;
            if (cVar2) {
                uVar6 = ((FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData,
                                   unsigned long>*)(*psVar9)
                             .operator->())
                            ->capacity();
                if (uVar6 == local_48) {
                    psVar8 = (shared_ptr<Shader>*)(*this)[arg5];
                    *psVar8 = *psVar9;
                    this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar9)
                                  .operator->();
                    this_04 = (EffectList*)this_03->second();
                    cVar2 = *this_04 != (*((EffectList*)(VertexDeclaration*)effectList));
                    if (cVar2) {
                        shaderProgram = ((Shader*)(*psVar9).operator->())->GetProgram();
                        effectManager.BindConstBufferToShader(*shaderProgram,
                                                              *((EffectList*)(VertexDeclaration*)effectList));
                    }
                    bVar1 = false;
                    local_78 = psVar9;
                }
            }
            if (!bVar1)
                break;
        }
        psVar9 = local_78;
        if (lVar4 == lVar7) {
            make_shared<Shader, ShaderType&,
                        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
                        unsigned long&, EffectList const&, render::VertexDeclaration const&, EffectManager const&,
                        unsigned char&, RenderPassType&>(
                (ShaderType*)&local_60,
                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_34,
                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_b0, &local_98,
                (EffectList*)&local_48, (VertexDeclaration*)effectList, (EffectManager*)vertexDeclaration,
                (unsigned char*)effectManager, (RenderPassType*)&arg6);
            psVar8 = (shared_ptr<Shader>*)(*this)[arg5];
            *psVar8 = local_60;
            field_76 = field_76 + 1;
            psVar9 = (shared_ptr*)(*this)[arg5];
        }
        return psVar9;
    }

    // 0x1008916d0
    void ShaderManager::CreateRenderingResources() {
        long lVar1 = HeapBeginPtr();
        long lVar2 = end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 24) {
            ((Shader*)(*((lVar1 + 8))).operator->())->RebuildProgramFromInternalSource(*field_176);
        }
    }

    // 0x100891730
    void ShaderManager::ReloadShadersFromSource(ShaderReloadMode shaderReloadMode) {
        EffectManager* effectManager;
        unsigned long uVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        unsigned int uVar4;

        shadersourceprovider::ClearResourceCache();
        uint8_t* this_00 = &field_40;
        this_00->clear();
        field_72 = 0;
        long lVar1 = HeapBeginPtr();
        long lVar2 = end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 24) {
            this_00->push_back(*((lVar1 + 8)));
        }
        if (shaderReloadMode != 0) {
            effectManager = field_176;
            uVar4 = field_72;
            while (uVar3 = this_00->size(), uVar4 < uVar3) {
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_00)[(
                    unsigned long)field_72];
                ((Shader*)this_01->end())->ReloadProgramFromSource(*effectManager, shaderReloadMode);
                uVar4 = field_72 + 1;
                field_72 = uVar4;
            }
            this_00->clear();
            field_72 = 0;
        }
    }

    // 0x1008918a0
    void ShaderManager::MainLogic() {
        EffectManager* effectManager;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        unsigned int uVar3;

        uint8_t* this_00 = &field_40;
        if (this_00->empty() == '\0') {
            effectManager = field_176;
            this_01 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_00)[(unsigned long)field_72];
            ((Shader*)this_01->end())->ReloadProgramFromSource(*effectManager, 0);
            uVar3 = field_72 + 1;
            field_72 = uVar3;
            if (this_00->size() <= uVar3) {
                this_00->clear();
                field_72 = 0;
            }
        }
    }

    // 0x100891920
    void ShaderManager::StartShaderPreload() {
        FileSystem* this_01;
        function<void(Filename const&, int, eastl::stringconst&)> local_1c8[48];
        function<void(Filename const&, Array<unsigned char> const&)> local_198[48];
        Filename local_168;
        long local_38;

        auto this_00 = logger::default_logger();
        this_00->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                     "materials/shaders/ShaderManager.cpp",
                     226, "Starting Shader Pre-load");
        if (!(field_160->operator_cast_to_bool())) {
            UseDefaultPermutations();
        } else {
            this_01 = (FileSystem*)(*field_160).operator->();
            local_168 = Filename("PreloadList");
            std::function<void(Filename const&, Array<unsigned char> const&)>::function<
                ShaderManager::StartShaderPreload()::__2, void>(local_198, (__2*)this);
            std::function<void(Filename const&, int, eastl::stringconst&)>::function<
                ShaderManager::StartShaderPreload()::__3, void>(local_1c8, (__3*)this);
            this_01->ReadFile(local_168, *local_198, *local_1c8);
        }
    }

    // 0x100891a80
    void ShaderManager::UseDefaultPermutations() {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_38(0);
        auto this_00 = Base64::Instance();
        auto arg1 = local_38.SSOBeginPtr();
        if (this_00->DecodeString<Array<unsigned char, BucketAllocatorEASTL>, eastl::string>(*arg1, field_128)) {
            if (DeserialisePermutations(this_00, (vector<ShaderPermutation>*)&field_88, &local_38) != '\0') {
                field_80 = 1;
            }
        }
    }

    // 0x100891b90
    unsigned long
    ShaderManager::DeserialisePermutations(eastl::vector<ShaderPermutation>& shaderPermutations,
                                           PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) const {
        bool bVar2;
        unsigned int uVar3;
        long lVar4;
        long lVar5;
        ShaderPermutation* shaderPermutation;
        Logger* pLVar6;
        int arg4;
        char* str2;
        unsigned int uVar7;
        unsigned long uVar8;
        unsigned long uVar9;
        DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_48;
        long local_38;

        uint8_t bVar1 = arg2.g1();
        if (bVar1 == 64) {
            bVar1 = arg2.g1();
            if (bVar1 != 3) {
                pLVar6 = logger::default_logger();
                str2 = "Not preloading shaders because DeserialisePermutations is being given binary type %d instead "
                       "of %d";
                arg4 = 645;
                goto LAB_100891ce6;
            }
            lVar4 = arg2.g8();
            lVar5 = datetools::GetCompilationDate();
            if (lVar4 != lVar5) {
                pLVar6 = logger::default_logger();
                uVar8 = 0;
                pLVar6->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "materials/shaders/ShaderManager.cpp",
                            652,
                            "Not preloading shaders because DeserialisePermutations is being given different C++ "
                            "compilation date");
                goto LAB_100891cf0;
            }
            uVar3 = arg2.g4();
            if (uVar3 != 0) {
                shaderPermutations.reserve((unsigned long)uVar3);
                bVar2 = (bool)IsBigEndian();
                local_48 = DataSerialise<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(arg2, bVar2);
                local_38 = arg2.size();
                uVar7 = uVar3;
                do {
                    shaderPermutation = (ShaderPermutation*)shaderPermutations.push_back();
                    local_48 >> *shaderPermutation;
                    uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
                lVar4 = arg2.size();
                bVar2 = lVar4 - local_38 == (unsigned long)(uVar3 * 23);
                uVar8 = (((uint64_t)((int64_t)((unsigned long)arg2 >> 8)) << 8) | (uint8_t)bVar2);
                if (!bVar2) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/materials/shaders/ShaderManager.cpp",
                                    673, "Decoded data different than expected");
                }
                goto LAB_100891cf0;
            }
            pLVar6 = logger::default_logger();
            str2 = "Not preloading shaders because DeserialisePermutations is being given %u elements!";
            arg4 = 659;
            uVar9 = 0;
        } else {
            pLVar6 = logger::default_logger();
            str2 = "Not preloading shaders because DeserialisePermutations is being given version %d instead of %d";
            arg4 = 638;
        LAB_100891ce6:
            uVar9 = (unsigned long)bVar1;
        }
        uVar8 = 0;
        pLVar6->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/materials/"
                    "shaders/ShaderManager.cpp",
                    arg4, str2, uVar9);
    LAB_100891cf0:
        return uVar8 & 4294967295;
    }

    // 0x100891d70
    void ShaderManager::PreloadShaders() {
        uint8_t bVar1;
        uint8_t* pbVar3;
        long lVar4;
        shared_ptr<Shader>* this_01;
        GeometryBatchInstance* this_02;
        ImColor local_38;
        float local_24;

        if (IsPreloadingShaders() != '\0') {
            local_24 = (float)FrameTime::GetSecondsSinceProgramStart();
            pbVar3 = &field_88[(long)field_120];
            bVar1 = *pbVar3;
            if (27 < bVar1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/shaders/ShaderManager.cpp",
                                279, "PreloadShaders is expecting a shader type of %d to exist!  Skipping load.",
                                (unsigned long)bVar1);
            }
            local_38 = ImColor(*((pbVar3 + 8)));
            lVar4 = &local_38->Instance()->GetVertexDeclaration(*(unsigned int*)(pbVar3 + 24));
            if (lVar4 == 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/shaders/ShaderManager.cpp",
                                290,
                                "ShaderManager couldn\'t get a vertex declaration from the stored hash, so we "
                                "shouldn\'t try and preload this shader.");
            }
            this_01 =
                (shared_ptr<Shader>*)GetShader((ShaderType)this, (EffectManager*)(unsigned long)(unsigned int)bVar1,
                                               (EffectList*)field_176, &local_38, (unsigned char)lVar4, 1);
            this_02 = (GeometryBatchInstance*)(*this_01).operator->();
            ((ShaderProgram*)this_02->GetMaterial())
                ->SetLastUsedTimeSeconds(local_24 - (float)*(unsigned short*)(pbVar3 + 28));
            field_120 = field_120 + 1;
        }
    }

    // 0x100891ef0
    auto ShaderManager::GetUniqueShaders() const {
        auto result(local_28);
        long lVar1 = HeapBeginPtr();
        long lVar2 = end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 24) {
            result.insert(*((lVar1 + 8)));
        }
        return result;
    }

    // 0x100891f90
    int ShaderManager::CountShadersOfType(ShaderType shaderType) const {
        ShaderType SVar2;
        int iVar5;

        long lVar3 = HeapBeginPtr();
        long lVar4 = end();
        if (lVar3 == lVar4) {
            iVar5 = 0;
        } else {
            iVar5 = 0;
            do {
                if (((lVar3 + 8))->operator_cast_to_bool() != '\0') {
                    SVar2 = ((CoordMapSquare*)(*((lVar3 + 8))).operator->())->GetX();
                    iVar5 = iVar5 + (unsigned int)(SVar2 == shaderType);
                }
                lVar3 = lVar3 + 24;
            } while (lVar3 != lVar4);
        }
        return iVar5;
    }

    // 0x100892020
    int ShaderManager::CountShadersOfTypeUsingEffect(ShaderType shaderType, EffectType effectType) const {
        shared_ptr* this_00;
        uint8_t bVar2;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_02;
        int iVar6;
        EffectType local_34;

        long lVar4 = HeapBeginPtr();
        long lVar5 = end();
        if (lVar4 == lVar5) {
            iVar6 = 0;
        } else {
            iVar6 = 0;
            local_34 = effectType & 255;
            do {
                this_00 = (shared_ptr*)(lVar4 + 8);
                if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                    if (((CoordMapSquare*)(*this_00).operator->())->GetX() == shaderType) {
                        this_02 =
                            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_00)
                                .operator->();
                        bVar2 = ((EffectList*)this_02->second())->Contains(local_34);
                        iVar6 = iVar6 + (unsigned int)bVar2;
                    }
                }
                lVar4 = lVar4 + 24;
            } while (lVar4 != lVar5);
        }
        return iVar6;
    }

    // 0x1008920d0
    void ShaderManager::AppendPermutationHTML(std::basic_stringstream<char>& basic_stringstream, ShaderType shaderType,
                                              const eastl::bitset<121ul, unsigned long long>& bitset, bool arg4) const {
        bool cVar1;
        int iVar2;
        int iVar3;
        unsigned long uVar5;
        EffectList* pEVar6;
        char* str;
        bool bVar7;
        EffectType EVar8;
        unsigned long arg1;
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        float fVar9;

        auto this_00 = graphics::operator*(shaderType);
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_01 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)**this_00;
        auto this_02 = *(*(this_00 + 8));
        if (bitset.size() != 0) {
            basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(basic_stringstream + 16);
            arg1 = 0;
            bVar7 = true;
            do {
                cVar1 = bitset.test(arg1);
                EVar8 = (EffectType)arg1;
                if (cVar1) {
                    if (bVar7) {
                        bVar7 = false;
                    } else {
                        std::operator<<(basic_ostream, " ");
                    }
                    iVar2 = CountShadersOfTypeUsingEffect(shaderType, EVar8 & 255);
                    iVar3 = CountShadersOfType(shaderType);
                    fVar9 = (float)iVar2 / (float)iVar3;
                    fVar9 = (float)(~-(unsigned int)(0.5 < fVar9) & (unsigned int)fVar9 |
                                    (unsigned int)(1.0 - fVar9) & -(unsigned int)(0.5 < fVar9));
                    str = "<font color=\"red\" title=\"";
                    if ((((0.4 < fVar9) || (str = "<font color=\"orange\" title=\"", 0.2 < fVar9)) ||
                         (str = "<font color=\"green\" title=\"", 0.001 < fVar9)) ||
                        (str = "<font color=\"black\" title=\"", !arg4)) {
                        std::operator<<(basic_ostream, str);
                        iVar2 = CountShadersOfTypeUsingEffect(shaderType, EVar8 & 255);
                        std::ostream::operator<<((ostream*)basic_ostream, iVar2);
                        std::operator<<(basic_ostream, " / ");
                        iVar2 = CountShadersOfType(shaderType);
                        std::ostream::operator<<((ostream*)basic_ostream, iVar2);
                        std::operator<<(basic_ostream, "\">");
                        std::operator<<(basic_ostream, (&EffectTypeStrings)[arg1]);
                        pEVar6 = (EffectList*)this_02->second();
                        cVar1 = pEVar6->Contains(EVar8 & 255);
                        if (!cVar1) {
                            pEVar6 = (EffectList*)this_02->second();
                            cVar1 = pEVar6->Contains(EVar8 & 255);
                            if (cVar1)
                                goto LAB_1008922cc;
                        } else {
                        LAB_1008922cc:
                            std::operator<<(basic_ostream, " (F)");
                        }
                        pEVar6 = (EffectList*)this_01->second();
                        cVar1 = pEVar6->Contains(EVar8 & 255);
                        if (!cVar1) {
                            pEVar6 = (EffectList*)this_01->second();
                            cVar1 = pEVar6->Contains(EVar8 & 255);
                            if (cVar1)
                                goto LAB_100892140;
                        } else {
                        LAB_100892140:
                            std::operator<<(basic_ostream, " (V)");
                        }
                        std::operator<<(basic_ostream, "</font>");
                    }
                }
                arg1 = (unsigned long)(EVar8 + 1);
                uVar5 = bitset.size();
            } while (arg1 < uVar5);
        }
    }

    // 0x100892360
    void ShaderManager::AppendPermutationStr(eastl::fixed_string<char, 260>& str,
                                             const eastl::bitset<121ul, unsigned long long>& bitset, bool arg3,
                                             const ShaderSource& shaderSource) const {
        EffectList* pEVar2;
        unsigned long uVar3;
        bool cVar4;
        EffectType EVar5;
        unsigned long arg1;

        if (bitset.size() != 0) {
            arg1 = 0;
            do {
                cVar4 = bitset.test(arg1);
                EVar5 = (EffectType)arg1;
                if (cVar4) {
                    pEVar2 = (EffectList*)shaderSource.second();
                    cVar4 = pEVar2->Contains(EVar5 & 255);
                    if (!cVar4) {
                        pEVar2 = (EffectList*)shaderSource.second();
                        cVar4 = pEVar2->Contains(EVar5 & 255);
                        if (!cVar4)
                            goto LAB_1008923ac;
                    }
                    str += "_";
                    str += ((&EffectTypeStrings)[arg1]);
                }
            LAB_1008923ac:
                arg1 = (unsigned long)(EVar5 + 1);
                uVar3 = bitset.size();
            } while (arg1 < uVar3);
        }
    }

    // 0x100892410
    void ShaderManager::SerialisePermutationsToString(std::basic_stringstream<char>& basic_stringstream) const {
        uint8_t local_60[64];

        new (local_60) PacketT();
        SerialisePermutations(*local_60);
        new ((local_60 + 32)) eastl::string();
        auto this_00 = Base64::Instance();
        auto arg2 = local_60->GetDataPtr();
        unsigned long arg3 = local_60->GetTextureAtlas();
        this_00->EncodeAlt(*((local_60 + 32)), arg2, arg3);
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(basic_stringstream + 16), str);
        ((local_60 + 32))->~basic_string();
    }

    // 0x10089b190
    void ShaderManager::Destroy()::$_0::operator()(const Filename& filename) const {
        auto this_00 = logger::default_logger();
        auto pcVar1 = GetName();
        this_00->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                     "materials/shaders/ShaderManager.cpp",
                     52, "Shader preload list saved to %s", pcVar1);
    }

} // namespace jag::graphics
