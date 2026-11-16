// libs/hal/render/rendertargets/RenderTargetsManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "RenderTargetsManager.h"

namespace jag::render {
    // 0x100049400: RenderTargetsManager::RenderTargetsDesc::~RenderTargetsDesc() has the same machine code as std::__tuple_leaf<1ul, eastl::fixed_string<char, 256>, false>::~__tuple_leaf()

    // 0x10012d160: RenderTargetsManager::ManagedRenderTargets::~ManagedRenderTargets() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x100183c00: RenderTargetsManager::RenderTargetsDesc::~RenderTargetsDesc() has the same machine code as Filename::~Filename()

    // 0x100be0b70
    RenderTargetsManager::RenderTargetsManager(const char* str, unsigned int arg2, int arg3)
        : RenderDeviceOnEndFrame(true), field_48(arg2), field_52(0), field_56(arg3) {
        uint8_t* local_38 = &field_64;
        new (local_38) eastl::string(str);
        if ((arg3 != -1) && (arg3 < 2)) {
            LogAssert("frameCountSelfDestruct == -1 || frameCountSelfDestruct >= 2",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      25, nullptr);
        }
        field_16.reserve((unsigned long)arg2);
    }

    // 0x100be0cd0
    RenderTargetsManager::~RenderTargetsManager() {
        GarbageCollect(true);
        DestroyRenderingResources();
        field_64.~basic_string();
        field_16.~vector();
    }

    // 0x100be0d40
    void RenderTargetsManager::GarbageCollect(bool arg1) {
        uint8_t* this_00;
        uint64_t in_RAX;
        pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>* ppVar2;
        pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>* ppVar3;

        uint64_t local_28 = (uint64_t)in_RAX;
        char local_21 = arg1;
        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      161, nullptr);
        }
        if ((local_21 != '\0') || (-1 < field_56)) {
            this_00 = &field_16;
            ppVar2 = (pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>*)
                         this_00->HeapBeginPtr();
            ppVar3 = (pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>*)
                         this_00->end();
            ppVar2 = eastl::remove_if<
                eastl::pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>*,
                bool->GarbageCollect()::__1>(ppVar2, ppVar3, (__1*)&local_21);
            ppVar3 = (pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>*)
                         this_00->end();
            this_00->erase(ppVar2, ppVar3);
        }
    }

    // 0x100be0df0
    void RenderTargetsManager::DestroyRenderingResources() {
        int iVar3;
        Logger* this_02;
        RenderTargets* pRVar5;
        uint64_t uVar6;
        shared_ptr<RenderTargets>* this_03;
        ReturnValue local_e0;

        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      247, nullptr);
        }
        uint8_t* this_04 = &field_16;
        auto this_00 = this_04->HeapBeginPtr();
        auto psVar4 = this_04->end();
        if (this_00 != psVar4) {
            do {
                this_03 = this_00;
                iVar3 = this_00->use_count();
                if (iVar3 == 1) {
                    if (this_00[20] == (shared_ptr<RenderTargets>)0) {
                        pRVar5 = (RenderTargets*)(*this_00).operator->();
                        local_e0 = pRVar5->GetInfoString();
                        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        LogAssert("managedRenderTargets.first.m_unregisterCalled",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "rendertargets/RenderTargetsManager.cpp",
                                  256,
                                  "Managed render target %s was not destroyed using RenderTargetsManager Unregister()",
                                  uVar6);
                    }
                    pRVar5 = (RenderTargets*)(*this_00).operator->();
                    pRVar5->EnableKeepAlive();
                    pRVar5 = (RenderTargets*)(*this_00).operator->();
                    pRVar5->KeepAlive();
                } else {
                    if (!((RenderDevice*)this_03->Instance())->IsKeepAliveSharedPtr<RenderTargets>(*this_00)) {
                        this_02 = logger::default_logger();
                        pRVar5 = (RenderTargets*)(*this_00).operator->();
                        local_e0 = pRVar5->GetInfoString();
                        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        this_02->Log(
                            false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                            "rendertargets/RenderTargetsManager.cpp",
                            263, "Render targets \'%s\' still needs to be un-registered (%i references still in use)",
                            uVar6, iVar3 - 1);
                    }
                }
                this_00 = this_00 + 344;
            } while (this_00 != psVar4);
        }
        this_04->clear();
    }

    // 0x100be1020
    RenderTargetsManager* RenderTargetsManager::Register(const char* str, TextureType textureType,
                                                         const std::array<Texture::Desc, 2ul>& descs, int arg4,
                                                         const Texture::Desc& desc, unsigned int arg6, bool arg7) {
        unsigned long uVar5;
        Logger* pLVar6;
        uint32_t in_register_00000014;
        uint32_t in_register_00000084;
        uint32_t in_stack_0000000c;
        uint8_t local_198[32];

        char* pcVar7 = (char*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)textureType);
        local_198._24_8_ = this;
        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      44, nullptr);
        }
        if (((int)desc < 1) && (((Desc*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg6))->field_12 == 0)) {
            LogAssert("numColourTargets > 0 || depthStencilTargetDesc.m_Format != FORMAT_UNKNOWN",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      45,
                      "Render targets created with RenderTargetsManager must have backing resources at creation time. "
                      "Use a standalone RenderTargets object otherwise.");
        }
        RenderTargetsDesc local_178(
            pcVar7, (TextureType)descs,
            *((array<Texture::Desc, _2ul>*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4)), (int)desc,
            *((Desc*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg6)), _arg7 | 6);
        long lVar2 = std::array<Texture::Desc, 2ul>::begin();
        long lVar3 = std::array<Texture::Desc, 2ul>::end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 64) {
            *(uint8_t*)(lVar2 + 57) = 1;
        }
        local_178.field_304._1_1_ = 1;
        auto this_02 = GetRenderTargetsDescPairIt((RenderTargetsManager*)str, &local_178);
        uint64_t this_01 = local_198._24_8_;
        new (local_198._24_8_) shared_ptr();
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(str + 16);
        auto psVar4 = this_00->end();
        if (this_02 == psVar4) {
            uVar5 = this_00->size();
            if (*(unsigned int*)(str + 48) <= uVar5) {
                pLVar6 = logger::default_logger();
                pLVar6->Log(false, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                            "rendertargets/RenderTargetsManager.cpp",
                            74,
                            "RenderTargetsManager has reached capacity while creating \'%s\' - attempting to free up "
                            "an unused entry...",
                            pcVar7);
                if (!(FreeUnusedRenderTarget((RenderTargetsManager*)str))) {
                    pLVar6 = logger::default_logger();
                    GetStats((RenderTargetsManager*)local_198);
                    pcVar7 = (char*)local_198->c_str();
                    pLVar6->Log(true, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "rendertargets/RenderTargetsManager.cpp",
                                79, pcVar7);
                }
            }
            CreateRenderTargets((RenderTargetsManager*)local_198, (RenderTargetsDesc*)str, (uint8_t)(&local_178));
            *this_01 = *local_198;
        } else {
            psVar4 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)this_00->end();
            if (this_02 == psVar4) {
                LogAssert("renderTargetsIt != m_managedRenderTargets.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargetsManager.cpp",
                          88, nullptr);
            }
            if (!(this_02->unique())) {
                LogAssert("renderTargetsIt->first.m_renderTargets.unique()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargetsManager.cpp",
                          89, nullptr);
            }
            *this_01 = *this_02;
            ((RenderTargets*)(*this_02).operator->())->SetName(pcVar7);
            (*((this_02 + 24))) = pcVar7;
        }
        return (RenderTargetsManager*)this_01;
    }

    // 0x100be1380
    void
    RenderTargetsManager::GetRenderTargetsDescPairIt(const RenderTargetsManager::RenderTargetsDesc& renderTargetsDesc) {
        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      315, nullptr);
        }
        auto arg1 = field_16.HeapBeginPtr();
        auto arg2 = field_16.end();
        eastl::find_if<
            eastl::pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>*,
            (RenderTargetsManager::RenderTargetsDesc const&)->GetRenderTargetsDescPairIt()::__2>(
            arg1, arg2, (__2*)renderTargetsDesc);
    }

    // 0x100be1410
    unsigned long RenderTargetsManager::FreeUnusedRenderTarget() {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar2;
        RenderTargets* pRVar3;
        uint64_t unaff_R15;
        uint64_t uVar4;
        bool bVar5;
        AutoSingleton<ShaderThreadPoolSingleton> local_28;

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      186, nullptr);
        }
        uint8_t* this_01 = &field_16;
        auto this_00 = this_01->HeapBeginPtr();
        do {
            psVar2 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)this_01->end();
            bVar5 = this_00 == psVar2;
            uVar4 = (uint64_t)((unsigned long)unaff_R15 >> 8);
            unaff_R15 = (((uint64_t)uVar4 << 8) | (uint8_t)bVar5);
            if (bVar5) {
            LAB_100be14c1:
                return ((((uint64_t)uVar4 << 8) | (uint8_t)bVar5) ^ 1) & 4294967295;
            }
            if (this_00->unique()) {
                pRVar3 = (RenderTargets*)(*this_00).operator->();
                pRVar3->EnableKeepAlive();
                pRVar3 = (RenderTargets*)(*this_00).operator->();
                pRVar3->KeepAlive();
                this_01->erase_unsorted(this_00);
                goto LAB_100be14c1;
            }
            this_00 = this_00 + 344;
        } while (true);
    }

    // 0x100be14e0
    RenderTargetsManager* RenderTargetsManager::GetStats() {
        bool bVar1;
        int iVar2;
        unsigned int uVar3;
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        RenderTargets* pRVar6;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_02;
        long* plVar7;
        unsigned int* puVar8;
        long in_RSI;
        long local_160[2];
        basic_ostream<char, std::char_traits<char> _> local_150;
        float local_38;
        float local_34;

        new (local_160) std::stringstream();
        std::ios_base::precision((long)((stringstream*)local_160 + *(long*)(local_160[0] - 24)));
        basic_ostream<char, std::char_traits<char> _>* pbVar4 = std::operator<<(&local_150, "\n");
        char* pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pbVar4 = std::operator<<(pbVar4, pcVar5);
        std::operator<<(pbVar4, " Render Targets Summary: ");
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00 =
            (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)((in_RSI + 16))->HeapBeginPtr();
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* local_48 =
            (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)((in_RSI + 16))->end();
        if (this_00 == local_48) {
            local_38 = 0.0;
        } else {
            local_38 = 0.0;
            do {
                pbVar4 = std::operator<<(&local_150, "\n\t");
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pbVar4 = std::operator<<(pbVar4, pcVar5);
                pbVar4 = std::operator<<(pbVar4, ": (Refs: ");
                iVar2 = this_00->use_count();
                basic_ostream =
                    (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar4, iVar2);
                bVar1 = ((RenderDevice*)pbVar4->Instance())->IsKeepAliveSharedPtr<RenderTargets>(*this_00);
                pcVar5 = "";
                if (bVar1) {
                    pcVar5 = " incl threaded keep-alive";
                }
                pbVar4 = std::operator<<(basic_ostream, pcVar5);
                pbVar4 = std::operator<<(pbVar4, ", GC frame count: ");
                pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                    (ostream*)pbVar4, *(int*)(this_00 + 16));
                std::operator<<(pbVar4, ")");
                if (*(int*)(this_00 + 264) < 1) {
                    local_34 = 0.0;
                    iVar2 = *(int*)(this_00 + 284);
                } else {
                    iVar2 = 0;
                    do {
                        pRVar6 = (RenderTargets*)(*this_00).operator->();
                        this_02 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      pRVar6->GetColourTargetTextures();
                        plVar7 = (long*)(*this_02)[0];
                        if (*plVar7 == 0) {
                            LogAssert("colourTarget != nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/rendertargets/RenderTargetsManager.cpp",
                                      224, nullptr);
                        }
                        puVar8 = (unsigned int*)(*plVar7)->second();
                        uVar3 = (*plVar7)->GetImageDataSize();
                        local_34 = Bytes2Megabytes<unsigned int>(uVar3);
                        pbVar4 = std::operator<<(&local_150, "\n\t\t");
                        pbVar4 = std::operator<<(pbVar4, "Colour Target ");
                        pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                            (ostream*)pbVar4, iVar2);
                        pbVar4 = std::operator<<(pbVar4, ": ");
                        pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                            (ostream*)pbVar4, *puVar8);
                        pbVar4 = std::operator<<(pbVar4, "x");
                        pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                            (ostream*)pbVar4, puVar8[1]);
                        pbVar4 = std::operator<<(pbVar4, ", ");
                        pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                            (ostream*)pbVar4, puVar8[3]);
                        pbVar4 = std::operator<<(pbVar4, ", ");
                        pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                            (ostream*)pbVar4, local_34);
                        std::operator<<(pbVar4, "MB");
                        iVar2 = iVar2 + 1;
                    } while (iVar2 < *(int*)(this_00 + 264));
                    iVar2 = *(int*)(this_00 + 284);
                }
                if (iVar2 != 0) {
                    pRVar6 = (RenderTargets*)(*this_00).operator->();
                    uVar3 = ((Texture*)pRVar6->GetDepthStencilTargetTexture())->GetImageDataSize();
                    local_34 = Bytes2Megabytes<unsigned int>(uVar3);
                    pbVar4 = std::operator<<(&local_150, "\n\t\t");
                    pbVar4 = std::operator<<(pbVar4, "Depth/Stencil Target: ");
                    pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                        (ostream*)pbVar4, *(unsigned int*)(this_00 + 272));
                    pbVar4 = std::operator<<(pbVar4, "x");
                    pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                        (ostream*)pbVar4, *(unsigned int*)(this_00 + 276));
                    pbVar4 = std::operator<<(pbVar4, ", ");
                    pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                        (ostream*)pbVar4, *(unsigned int*)(this_00 + 284));
                    pbVar4 = std::operator<<(pbVar4, ", ");
                    pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar4,
                                                                                                      local_34);
                    std::operator<<(pbVar4, "MB");
                }
                local_38 = local_38 + local_34;
                this_00 = this_00 + 344;
            } while (this_00 != local_48);
        }
        pbVar4 = std::operator<<(&local_150, "\n\n\tTotal RT Image Data Size: ");
        pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar4, local_38);
        std::operator<<(pbVar4, "MB");
        std::stringstream::str((ReturnValue*)this, (stringstream*)local_160);
        return this;
    }

    // 0x100be1910
    RenderTargetsManager*
    RenderTargetsManager::CreateRenderTargets(const RenderTargetsManager::RenderTargetsDesc& renderTargetsDesc,
                                              bool arg2) {
        int iVar2;
        RenderTargets* pRVar4;
        uint64_t uVar5;
        Logger* this_00;
        char in_CL;
        uint64_t in_register_00000011;
        uint64_t in_stack_fffffffffffffe18;
        ReturnValue local_1b0;
        AutoSingleton<ShaderThreadPoolSingleton> local_198;
        ReturnValue local_190;

        uint32_t uVar6 = (uint32_t)((unsigned long)in_stack_fffffffffffffe18 >> 32);
        RenderTargetsDesc* renderTargetsDesc_00 =
            (RenderTargetsDesc*)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      274, nullptr);
        }
        make_shared<RenderTargets>(&local_1b0);
        auto str = local_1b0.operator->();
        TextureType textureType = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (!(RenderTargets::Create(
                str, textureType, *((array<Texture::Desc, _2ul>*)(unsigned long)renderTargetsDesc_00->field_104),
                (int)renderTargetsDesc_00 + 112, *((Desc*)(unsigned long)(unsigned int)renderTargetsDesc_00->field_240),
                (int)renderTargetsDesc_00 + 248))) {
            if (in_CL == '\0') {
                this_00 = logger::default_logger();
                pRVar4 = (RenderTargets*)local_1b0.operator->();
                local_190 = pRVar4->GetInfoString();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                iVar2 = renderTargetsDesc.field_16.size();
                this_00->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/RenderTargetsManager.cpp",
                             304, "Failed to create RT %s. RenderTargetsManager usage: %u/%u peak: %u", uVar5,
                             iVar2 + 1, *(uint32_t*)&renderTargetsDesc.field_48,
                             *(uint32_t*)&renderTargetsDesc.field_52);
            }
            pRVar4 = (RenderTargets*)local_1b0.operator->();
            local_190 = pRVar4->GetInfoString();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar2 = renderTargetsDesc.field_16.size();
            LogAssert("success",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      300, "Failed to create RT %s. RenderTargetsManager usage: %u/%u peak: %u", uVar5,
                      (unsigned long)(iVar2 + 1),
                      (((uint64_t)uVar6 << 32) | (uint32_t)(*(uint32_t*)&renderTargetsDesc.field_48)),
                      *(uint32_t*)&renderTargetsDesc.field_52);
        }
        ManagedRenderTargets local_1c8(local_1b0);
        local_190.pair<RenderTargetsManager::ManagedRenderTargets&, void>(local_1c8, *renderTargetsDesc_00);
        renderTargetsDesc.field_16.push_back(local_190);
        local_190[0]._0_4_ = renderTargetsDesc.field_16.size();
        auto puVar3 = std::max<unsigned int>(renderTargetsDesc.field_52, local_190);
        *(unsigned int*)&renderTargetsDesc.field_52 = *puVar3;
        new (this) shared_ptr(&local_1c8);
        return this;
    }

    // 0x100be1d10
    void RenderTargetsManager::Unregister(shared_ptr<RenderTargets>& renderTargets) {
        bool bVar2;
        int iVar3;
        RenderTargets* pRVar4;
        uint64_t uVar5;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar6;
        long lVar7;
        long lVar8;
        char* pcVar9;
        ReturnValue local_e0;

        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      103, nullptr);
        }
        if (renderTargets.operator_cast_to_bool()) {
            pRVar4 = (RenderTargets*)renderTargets.operator->();
            if (!(pRVar4->HasColourTargets())) {
                pRVar4 = (RenderTargets*)renderTargets.operator->();
                if (!(pRVar4->HasDepthTarget())) {
                    pRVar4 = (RenderTargets*)renderTargets.operator->();
                    local_e0 = pRVar4->GetInfoString();
                    uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    LogAssert("renderTargets.HasColourTargets() || renderTargets.HasDepthTarget()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/RenderTargetsManager.cpp",
                              108,
                              "Invalid render target (%s) recycled back into RenderTargetsManager - do not call "
                              "Destroy() on managed render targets.",
                              uVar5);
                }
            }
            iVar3 = renderTargets.use_count();
            bVar2 = ((RenderDevice*)renderTargets.Instance())->IsKeepAliveSharedPtr<RenderTargets>(renderTargets);
            if ((2 < iVar3) && ((iVar3 != 3 || (!bVar2)))) {
                pRVar4 = (RenderTargets*)renderTargets.operator->();
                local_e0 = pRVar4->GetInfoString();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar9 = "";
                if (bVar2) {
                    pcVar9 = " incl 1 from threaded rendering keep-alive";
                }
                LogAssert(
                    "useCount <= 2 || (useCount == 3 && isKeepAlive)",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                    "RenderTargetsManager.cpp",
                    117,
                    "Render target %s was not unused (%i external refs%s) at call to %s - this could lead to leaks",
                    uVar5, (unsigned long)(iVar3 - 2), pcVar9, "Unregister");
            }
            this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_16.HeapBeginPtr();
            pvVar6 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_16.end();
            while (true) {
                if (this_01 == pvVar6) {
                    pRVar4 = (RenderTargets*)renderTargets.operator->();
                    local_e0 = pRVar4->GetInfoString();
                    uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/RenderTargetsManager.cpp",
                                    134, "Trying to Unregister an unmanaged render target (%s)", uVar5);
                }
                lVar7 = this_01->end();
                lVar8 = renderTargets.end();
                if (lVar7 == lVar8)
                    break;
                this_01 = this_01 + 344;
            }
            renderTargets.reset();
            *(uint32_t*)(this_01 + 16) = 0;
            this_01[20] = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>)1;
        }
    }

    // 0x100be1fb0
    void RenderTargetsManager::OnEndFrame() {
        uint64_t uVar3;
        ReturnValue local_e0;

        GarbageCollect(false);
        auto this_00 = field_16.HeapBeginPtr();
        auto psVar2 = field_16.end();
        if (this_00 != psVar2) {
            do {
                if (this_00->unique() == '\0') {
                    this_00[20] = (shared_ptr<oldscape::configdecoder::OldscapeVarType>)0;
                } else {
                    *(int*)(this_00 + 16) = *(int*)(this_00 + 16) + 1;
                    if (this_00[20] == (shared_ptr<oldscape::configdecoder::OldscapeVarType>)0) {
                        local_e0 = ((RenderTargets*)(*this_00).operator->())->GetInfoString();
                        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        LogAssert("renderTargetsResourcePair.first.m_unregisterCalled",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "rendertargets/RenderTargetsManager.cpp",
                                  149,
                                  "Managed render target %s was not destroyed using RenderTargetsManager Unregister()",
                                  uVar3);
                    }
                }
                this_00 = this_00 + 344;
            } while (this_00 != psVar2);
        }
    }

    // 0x100be2ca0
    uint32_t RenderTargetsManager::RenderTargetsDesc::operator==(
        const RenderTargetsManager::RenderTargetsDesc& renderTargetsDesc) const {
        bool bVar1;
        bool cVar2;

        if ((((field_104 == renderTargetsDesc.field_104) &&
              (bVar1 = &field_112 == &renderTargetsDesc.field_112, bVar1)) &&
             (field_240 == renderTargetsDesc.field_240)) &&
            (cVar2 = field_248 == renderTargetsDesc.field_248, cVar2)) {
            return field_312 == renderTargetsDesc.field_312;
        }
        return 0;
    }

} // namespace jag::render
