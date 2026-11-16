// libs/hal/render/shaders/ShaderProgramManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "ShaderProgramManager.h"

namespace jag::render {
    // 0x100beb480
    auto ShaderProgramManager::RegisterFromSourceString(const char* str1, const char* str2,
                                                        const VertexElementDesc* vertexElementDesc, unsigned int arg4,
                                                        unsigned char arg5) {
        ShaderProgram* pSVar2;
        uint32_t in_register_00000084;
        uint64_t in_register_00000089;
        uint8_t in_stack_00000008;
        ResourceList<unsigned long, ShaderProgram, eastl::vector_map<unsigned long, shared_ptr<ShaderProgram>>>
            local_60;
        shared_ptr<ShaderProgram> local_58;

        VertexElementDesc* local_48 = (VertexElementDesc*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        unsigned int local_34 = (unsigned int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5);
        unsigned long local_40 = CreateShaderProgramKey(str2, (char*)vertexElementDesc, nullptr);
        ResourceList<unsigned long, ShaderProgram,
                     eastl::vector_map<unsigned long, shared_ptr<ShaderProgram>>>::AddResource<>(&local_60,
                                                                                                 (unsigned long*)(str1 +
                                                                                                                  8));
        if (local_60[0] == (ResourceList<unsigned long, ShaderProgram,
                                         eastl::vector_map<unsigned long, shared_ptr<ShaderProgram>>>)0) {
            if ((in_stack_00000008 & 1) == 0) {
                pSVar2 = (ShaderProgram*)local_58.operator->();
                pSVar2->WaitForAsyncCompile();
            }
        } else {
            pSVar2 = (ShaderProgram*)local_58.operator->();
            if (pSVar2->CreateFromSourceString(str2, vertexElementDesc, local_48, local_34, in_stack_00000008) ==
                '\0') {
                ((str1 + 8))->EraseResource(local_40);
            }
        }
        auto result(&local_58);
        return result;
    }

    // 0x100beb7a0
    auto ShaderProgramManager::RegisterFromSourceString(const char* str1, const char* str2,
                                                        const VertexDeclaration* vertexDeclaration,
                                                        unsigned char arg4) {
        auto result;

        unsigned int arg4_00 =
            ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)vertexDeclaration->second())->data();
        unsigned char arg5 =
            ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)vertexDeclaration->second())->end();
        RegisterFromSourceString(&result, (char*)this, str1, (VertexElementDesc*)str2, arg4_00, arg5);
        return result;
    }

    // 0x100beb820
    auto ShaderProgramManager::RegisterFromSourceString(const char* str, unsigned char arg2) {
        ShaderProgram* pSVar2;
        ResourceList<unsigned long, ShaderProgram, eastl::vector_map<unsigned long, shared_ptr<ShaderProgram>>>
            local_50;
        shared_ptr<ShaderProgram> local_48;

        unsigned long local_38 = CreateShaderProgramKey(nullptr, nullptr, str);
        ResourceList<unsigned long, ShaderProgram,
                     eastl::vector_map<unsigned long, shared_ptr<ShaderProgram>>>::AddResource<>(&local_50, &field_8);
        if (local_50[0] == (ResourceList<unsigned long, ShaderProgram,
                                         eastl::vector_map<unsigned long, shared_ptr<ShaderProgram>>>)0) {
            if ((arg2 & 1) == 0) {
                pSVar2 = (ShaderProgram*)local_48.operator->();
                pSVar2->WaitForAsyncCompile();
            }
        } else {
            pSVar2 = (ShaderProgram*)local_48.operator->();
            if (pSVar2->CreateFromSourceString(str, arg2) == '\0') {
                field_8.EraseResource(local_38);
            }
        }
        auto result(&local_48);
        return result;
    }

    // 0x100beb940
    void ShaderProgramManager::Unregister(shared_ptr<ShaderProgram>& shaderProgram) {
        ShaderProgram* pSVar1;
        NPCTypeList* this_00;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>* pFVar2;
        unsigned long uVar3;
        Entity* this_01;
        HTTPRequest* this_02;
        unsigned long local_20;

        if (shaderProgram.operator_cast_to_bool()) {
            local_20 = 0;
            pSVar1 = (ShaderProgram*)shaderProgram.operator->();
            if (pSVar1->HasVertexShader()) {
                this_00 = (NPCTypeList*)shaderProgram.operator->();
                pFVar2 =
                    (FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>*)
                        this_00->GetBodyModelCache();
                uVar3 = pFVar2->capacity();
                hash_combine(&local_20, uVar3);
            }
            pSVar1 = (ShaderProgram*)shaderProgram.operator->();
            if (pSVar1->HasPixelShader()) {
                this_01 = (Entity*)shaderProgram.operator->();
                pFVar2 =
                    (FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>*)
                        this_01->GetWorld();
                uVar3 = pFVar2->capacity();
                hash_combine(&local_20, uVar3);
            }
            pSVar1 = (ShaderProgram*)shaderProgram.operator->();
            if (pSVar1->HasComputeShader()) {
                this_02 = (HTTPRequest*)shaderProgram.operator->();
                pFVar2 =
                    (FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>*)
                        this_02->GetRedirectLocation();
                uVar3 = pFVar2->capacity();
                hash_combine(&local_20, uVar3);
            }
            field_8.ReleaseResource(local_20, shaderProgram);
        }
    }

    // 0x100bebb80
    void ShaderProgramManager::GarbageCollect() {
        function<void(unsigned long const&, shared_ptr<ShaderProgram> const&)> local_88[48];
        function<bool(unsigned long const&, shared_ptr<ShaderProgram> const&)> local_58[48];
        long local_28;

        new (local_58) std::function<bool(unsigned long const&, shared_ptr<ShaderProgram> const&)>();
        new (local_88) std::function<void(unsigned long const&, shared_ptr<ShaderProgram> const&)>();
        field_8.GarbageCollect(*local_58, *local_88);
    }

} // namespace jag::render

namespace jag {
    // 0x100beb450
    void hash_combine(unsigned long& arg1, unsigned long arg2) {
        unsigned long uVar1 = arg1;
        arg1 = (uVar1 >> 2) + uVar1 * 64 + arg2 + 2654435769 ^ uVar1;
    }

} // namespace jag
