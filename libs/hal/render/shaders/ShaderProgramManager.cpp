// libs/hal/render/shaders/ShaderProgramManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "ShaderProgramManager.h"

namespace jag::render {
    // 0x100beb480, 224 bytes, placed by class name and debug map
    // ShaderProgramManager::RegisterFromSourceString(char const*, char const*, VertexElementDesc const*, unsigned int, unsigned char)
    ShaderProgramManager* ShaderProgramManager::RegisterFromSourceString(char* param_1, char* param_2,
                                                                         VertexElementDesc* param_3, uint param_4,
                                                                         uchar param_5) {
        char cVar1;
        ShaderProgram* pSVar2;
        undefined4 in_register_00000084;
        undefined7 in_register_00000089;
        byte in_stack_00000008;
        ResourceList<
            unsigned long, ShaderProgram,
            eastl::vector_map<unsigned long, shared_ptr<ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<ShaderProgram>>, eastl::allocator>>>
            local_60[8];
        shared_ptr local_58;
        VertexElementDesc* local_48;
        ulong local_40;
        uint local_34;

        local_48 = (VertexElementDesc*)CONCAT44(in_register_00000084, param_4);
        local_34 = (uint)CONCAT71(in_register_00000089, param_5);
        local_40 = CreateShaderProgramKey(param_2, (char*)param_3, (char*)0);
        ResourceList<
            unsigned long, ShaderProgram,
            eastl::vector_map<unsigned long, shared_ptr<ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<ShaderProgram>>, eastl::allocator>>>::
            AddResource<>(local_60, (ulong*)(param_1 + 8));
        if (local_60[0] ==
            (ResourceList<
                unsigned long, ShaderProgram,
                eastl::vector_map<
                    unsigned long, shared_ptr<ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
                    eastl::vector<eastl::pair<unsigned long, shared_ptr<ShaderProgram>>, eastl::allocator>>>)0) {
            if ((in_stack_00000008 & 1) == 0) {
                pSVar2 = (ShaderProgram*)shared_ptr<ShaderProgram>::operator->((shared_ptr<ShaderProgram>*)&local_58);
                pSVar2->WaitForAsyncCompile();
            }
        } else {
            pSVar2 = (ShaderProgram*)shared_ptr<ShaderProgram>::operator->((shared_ptr<ShaderProgram>*)&local_58);
            cVar1 = pSVar2->CreateFromSourceString(param_2, param_3, local_48, local_34, in_stack_00000008);
            if (cVar1 == '\0') {
                ((param_1 + 8))->EraseResource(&local_40);
            }
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(&local_58);
        local_60->~pair();
        return this;
    }

    // 0x100beb7a0, 128 bytes, placed by class name and debug map
    // ShaderProgramManager::RegisterFromSourceString(char const*, char const*, VertexDeclaration const*, unsigned char)
    ShaderProgramManager* ShaderProgramManager::RegisterFromSourceString(char* param_1, char* param_2,
                                                                         VertexDeclaration* param_3, uchar param_4) {
        uchar uVar1;
        uint uVar2;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        undefined7 in_register_00000081;

        this_00 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)(CONCAT71(in_register_00000081, param_4))
                ->second();
        uVar2 = this_00->data();
        this_01 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(CONCAT71(in_register_00000081, param_4))
                ->second();
        uVar1 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        RegisterFromSourceString(this, param_1, param_2, (VertexElementDesc*)param_3, uVar2, uVar1);
        return this;
    }

    // 0x100beb820, 208 bytes, placed by class name and debug map
    // ShaderProgramManager::RegisterFromSourceString(char const*, unsigned char)
    ShaderProgramManager* ShaderProgramManager::RegisterFromSourceString(char* param_1, uchar param_2) {
        char cVar1;
        ShaderProgram* pSVar2;
        byte in_CL;
        undefined7 in_register_00000011;
        ResourceList<
            unsigned long, ShaderProgram,
            eastl::vector_map<unsigned long, shared_ptr<ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<ShaderProgram>>, eastl::allocator>>>
            local_50[8];
        shared_ptr local_48;
        ulong local_38;

        local_38 = CreateShaderProgramKey((char*)0, (char*)0, (char*)CONCAT71(in_register_00000011, param_2));
        ResourceList<
            unsigned long, ShaderProgram,
            eastl::vector_map<unsigned long, shared_ptr<ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned long, shared_ptr<ShaderProgram>>, eastl::allocator>>>::
            AddResource<>(local_50, (ulong*)(param_1 + 8));
        if (local_50[0] ==
            (ResourceList<
                unsigned long, ShaderProgram,
                eastl::vector_map<
                    unsigned long, shared_ptr<ShaderProgram>, eastl::less<unsigned long>, eastl::allocator,
                    eastl::vector<eastl::pair<unsigned long, shared_ptr<ShaderProgram>>, eastl::allocator>>>)0) {
            if ((in_CL & 1) == 0) {
                pSVar2 = (ShaderProgram*)shared_ptr<ShaderProgram>::operator->((shared_ptr<ShaderProgram>*)&local_48);
                pSVar2->WaitForAsyncCompile();
            }
        } else {
            pSVar2 = (ShaderProgram*)shared_ptr<ShaderProgram>::operator->((shared_ptr<ShaderProgram>*)&local_48);
            cVar1 = pSVar2->CreateFromSourceString((char*)CONCAT71(in_register_00000011, param_2), in_CL);
            if (cVar1 == '\0') {
                ((param_1 + 8))->EraseResource(&local_38);
            }
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(&local_48);
        local_50->~pair();
        return this;
    }

    // 0x100beb940, 240 bytes, placed by class name and debug map
    // ShaderProgramManager::Unregister(shared_ptr<ShaderProgram>&)
    void ShaderProgramManager::Unregister(shared_ptr* param_1) {
        ShaderProgram* pSVar1;
        NPCTypeList* this_00;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* pFVar2;
        ulong uVar3;
        Entity* this_01;
        HTTPRequest* this_02;
        bool bVar4;
        char cVar5;
        ulong local_20;

        bVar4 = shared_ptr::operator_cast_to_bool(param_1);
        if (bVar4) {
            local_20 = 0;
            pSVar1 = (ShaderProgram*)shared_ptr<ShaderProgram>::operator->((shared_ptr<ShaderProgram>*)param_1);
            cVar5 = pSVar1->HasVertexShader();
            if (cVar5 != '\0') {
                this_00 = (NPCTypeList*)shared_ptr<ShaderProgram>::operator->((shared_ptr<ShaderProgram>*)param_1);
                pFVar2 =
                    (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                              unsigned long>*)this_00->GetBodyModelCache();
                uVar3 =
                    FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                             unsigned long>::capacity(pFVar2);
                hash_combine(&local_20, uVar3);
            }
            pSVar1 = (ShaderProgram*)shared_ptr<ShaderProgram>::operator->((shared_ptr<ShaderProgram>*)param_1);
            cVar5 = pSVar1->HasPixelShader();
            if (cVar5 != '\0') {
                this_01 = (Entity*)shared_ptr<ShaderProgram>::operator->((shared_ptr<ShaderProgram>*)param_1);
                pFVar2 =
                    (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                              unsigned long>*)this_01->GetWorld();
                uVar3 =
                    FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                             unsigned long>::capacity(pFVar2);
                hash_combine(&local_20, uVar3);
            }
            pSVar1 = (ShaderProgram*)shared_ptr<ShaderProgram>::operator->((shared_ptr<ShaderProgram>*)param_1);
            cVar5 = pSVar1->HasComputeShader();
            if (cVar5 != '\0') {
                this_02 = (HTTPRequest*)shared_ptr<ShaderProgram>::operator->((shared_ptr<ShaderProgram>*)param_1);
                pFVar2 =
                    (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                              unsigned long>*)this_02->GetRedirectLocation();
                uVar3 =
                    FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                             unsigned long>::capacity(pFVar2);
                hash_combine(&local_20, uVar3);
            }
            (&field_8, &local_20, param_1)->ReleaseResource();
        }
    }

    // 0x100bebb80, 160 bytes, placed by class name and debug map
    // ShaderProgramManager::GarbageCollect()
    void ShaderProgramManager::GarbageCollect() {
        function<void(unsigned long const&, shared_ptr<ShaderProgram> const&)> local_88[48];
        function<bool(unsigned long const&, shared_ptr<ShaderProgram> const&)> local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<bool(unsigned long const&, shared_ptr<ShaderProgram> const&)>::function(local_58);
        std::function<void(unsigned long const&, shared_ptr<ShaderProgram> const&)>::function(local_88);
        (&field_8, (function*)local_58, (function*)local_88)->GarbageCollect();
        std::function<void(unsigned long const&, shared_ptr<ShaderProgram> const&)>::~function(local_88);
        std::function<bool(unsigned long const&, shared_ptr<ShaderProgram> const&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::render

namespace jag {
    // 0x100beb450, 48 bytes, inline, placed by debug map only (low confidence)
    // hash_combine(unsigned long&, unsigned long)
    void hash_combine(ulong* param_1, ulong param_2) {
        ulong uVar1;

        uVar1 = *param_1;
        *param_1 = (uVar1 >> 2) + uVar1 * 64 + param_2 + 2654435769 ^ uVar1;
    }

} // namespace jag
