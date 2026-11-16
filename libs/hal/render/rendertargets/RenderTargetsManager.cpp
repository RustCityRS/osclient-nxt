// libs/hal/render/rendertargets/RenderTargetsManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "RenderTargetsManager.h"

namespace jag::render {
    // 0x100049400: the linker folded this into std::__tuple_leaf<1ul, eastl::fixed_string<char, 256, true, eastl::allocator>, false>::~__tuple_leaf(), which has identical code
    RenderTargetsManager::RenderTargetsDesc::~RenderTargetsDesc();

    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    RenderTargetsManager::ManagedRenderTargets::~ManagedRenderTargets();

    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    RenderTargetsManager::ManagedRenderTargets::~ManagedRenderTargets();

    // 0x100183c00: the linker folded this into Filename::~Filename(), which has identical code
    RenderTargetsManager::RenderTargetsDesc::~RenderTargetsDesc();

    // 0x100be0b70, 240 bytes, base-object constructor, placed by class name
    // RenderTargetsManager::RenderTargetsManager(char const*, unsigned int, int)
    void RenderTargetsManager::RenderTargetsManager(char* param_1, uint param_2, int param_3) {
        allocator local_40[8];
        undefined1* local_38;

        new (this) RenderDeviceOnEndFrame(true);
        field_0 = &PTR__RenderTargetsManager_100f28090;
        new (&field_16) eastl::vector<
            eastl::pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>,
            eastl::allocator>();
        field_48 = param_2;
        field_52 = 0;
        field_56 = param_3;
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        local_38 = &field_64;
        new (local_38) eastl::string(param_1, local_40);
        if ((param_3 != -1) && (param_3 < 2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("frameCountSelfDestruct == -1 || frameCountSelfDestruct >= 2",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      25, (char*)0);
        }
        (&field_16, (ulong)param_2)->reserve();
    }

    // 0x100be0cc0, 16 bytes, complete-object constructor, placed by class name
    // RenderTargetsManager::RenderTargetsManager(char const*, unsigned int, int): jumps straight to the base-object constructor

    // 0x100be0cd0, 112 bytes, base-object destructor, placed by class name
    // RenderTargetsManager::~RenderTargetsManager()
    void RenderTargetsManager::~RenderTargetsManager() {
        field_0 = &PTR__RenderTargetsManager_100f28090;
        GarbageCollect(this, true);
        DestroyRenderingResources(this);
        (&field_64)->~basic_string();
        (&field_16)->~vector();
        ~RenderDeviceOnEndFrame();
    }

    // 0x100be0d40, 176 bytes, placed by class name
    // RenderTargetsManager::GarbageCollect(bool)
    void RenderTargetsManager::GarbageCollect(bool param_1) {
        undefined1* this_00;
        undefined8 in_RAX;
        eastl* peVar2;
        undefined8 uVar3;
        pair* ppVar4;
        pair* ppVar5;
        undefined7 local_28;
        char local_21;

        local_28 = (undefined7)in_RAX;
        local_21 = param_1;
        local_28.~AutoSingleton("Render_Targets");
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      161, (char*)0);
        }
        if ((local_21 != '\0') || (-1 < field_56)) {
            this_00 = &field_16;
            peVar2 = (eastl*)this_00->HeapBeginPtr();
            uVar3 = this_00->end();
            ppVar4 = eastl::remove_if<
                eastl::pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>*,
                bool->GarbageCollect()::__1>(peVar2, uVar3, &local_21, this);
            ppVar5 = (pair*)this_00->end();
            this_00->erase(ppVar4, ppVar5);
        }
    }

    // 0x100be0df0, 512 bytes, placed by class name
    // RenderTargetsManager::DestroyRenderingResources()
    void RenderTargetsManager::DestroyRenderingResources() {
        int iVar3;
        shared_ptr* this_00;
        shared_ptr* psVar4;
        RenderTargets* pRVar5;
        RenderDevice* this_01;
        undefined8 uVar6;
        undefined8 uVar7;
        shared_ptr* this_02;
        undefined1* this_03;
        undefined1 local_e0[168];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      247, (char*)0);
        }
        this_03 = &field_16;
        this_00 = (shared_ptr*)this_03->HeapBeginPtr();
        psVar4 = (shared_ptr*)this_03->end();
        if (this_00 != psVar4) {
            do {
                this_02 = this_00;
                iVar3 = this_00->use_count();
                if (iVar3 == 1) {
                    if (this_00[1].field_4 == '\0') {
                        shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)this_00);
                        local_e0->GetInfoString();
                        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        /* WARNING: Subroutine does not return */
                        LogAssert("managedRenderTargets.first.m_unregisterCalled",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "rendertargets/RenderTargetsManager.cpp",
                                  256,
                                  "Managed render target %s was not destroyed using RenderTargetsManager Unregister()",
                                  uVar6);
                    }
                    pRVar5 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)this_00);
                    pRVar5->EnableKeepAlive();
                    pRVar5 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)this_00);
                    pRVar5->KeepAlive();
                } else {
                    this_01 = (RenderDevice*)this_02->Instance();
                    if (!RenderDevice::IsKeepAliveSharedPtr<RenderTargets>(this_01, this_00)) {
                        uVar6 = logger::default_logger();
                        shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)this_00);
                        local_e0->GetInfoString();
                        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(
                            uVar6, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                            "rendertargets/RenderTargetsManager.cpp",
                            263, "Render targets \'%s\' still needs to be un-registered (%i references still in use)",
                            uVar7, iVar3 + -1);
                        /* WARNING: Subroutine does not return */
                        local_e0->~fixed_string();
                    }
                }
                this_00 = (shared_ptr*)&this_00[21].field_8;
            } while (this_00 != psVar4);
        }
        this_03->clear();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be0ff0, 16 bytes, complete-object destructor, placed by class name
    // RenderTargetsManager::~RenderTargetsManager(): jumps straight to the base-object destructor

    // 0x100be1000, 32 bytes, deleting destructor, placed by class name
    // RenderTargetsManager::~RenderTargetsManager()
    void RenderTargetsManager::~RenderTargetsManager() {
        ~RenderTargetsManager(this);
        operator_delete(this);
    }

    // 0x100be1020, 800 bytes, placed by class name
    // RenderTargetsManager::Register(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int, Texture::Desc const&, unsigned int, bool)
    /* RenderTargetsManager::Register(char const*, TextureType,
   std::array<Texture::Desc, 2ul> const&, int, Texture::Desc const&,
   unsigned int, bool) */

    RenderTargetsManager* RenderTargetsManager::Register(RenderTargetsDesc* param_1, char* param_3, undefined4 param_4,
                                                         undefined8 param_5, int param_6, long param_7,
                                                         undefined4 param_8) {
        undefined1* this_00;
        undefined8 this_01;
        char cVar1;
        long lVar2;
        long lVar3;
        shared_ptr* this_02;
        shared_ptr* psVar4;
        RenderTargets* this_03;
        ulong uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        RenderTargetsDesc* pRVar8;
        undefined8 in_stack_fffffffffffffe48;
        undefined4 uVar9;
        undefined1 local_198[32];
        undefined1 local_178[305];
        undefined1 local_47;
        long local_38;

        uVar9 = (undefined4)((ulong)in_stack_fffffffffffffe48 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_198._24_8_ = this;
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      44, (char*)0);
        }
        if ((param_6 < 1) && (*(int*)(param_7 + 12) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("numColourTargets > 0 || depthStencilTargetDesc.m_Format != FORMAT_UNKNOWN",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      45,
                      "Render targets created with RenderTargetsManager must have backing resources at creation time. "
                      "Use a standalone RenderTargets object otherwise.");
        }
        new (local_178) RenderTargetsDesc(param_3, param_4, param_5, param_6, param_7, CONCAT44(uVar9, param_8) | 6);
        lVar2 = ((local_178 + 112))->begin();
        lVar3 = ((local_178 + 112))->end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 64) {
            *(undefined1*)(lVar2 + 57) = 1;
        }
        local_47 = 1;
        pRVar8 = (RenderTargetsDesc*)local_178;
        this_02 = (shared_ptr*)GetRenderTargetsDescPairIt((RenderTargetsManager*)param_1, pRVar8);
        this_01 = local_198._24_8_;
        new (local_198._24_8_) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pRVar8);
        this_00 = &param_1->field_16;
        psVar4 = (shared_ptr*)this_00->end();
        if (this_02 == psVar4) {
            uVar5 = this_00->size();
            if (*(uint*)&param_1->field_48 <= uVar5) {
                uVar6 = logger::default_logger();
                logger::Logger::Log(uVar6, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/RenderTargetsManager.cpp",
                                    74,
                                    "RenderTargetsManager has reached capacity while creating \'%s\' - attempting to "
                                    "free up an unused entry...",
                                    param_3);
                cVar1 = FreeUnusedRenderTarget((RenderTargetsManager*)param_1);
                if (cVar1 == '\0') {
                    uVar6 = logger::default_logger();
                    GetStats((RenderTargetsManager*)local_198);
                    uVar7 = local_198->c_str();
                    logger::Logger::Log(uVar6, 1, 7,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/rendertargets/RenderTargetsManager.cpp",
                                        79, uVar7);
                    local_198->~string();
                }
            }
            CreateRenderTargets((RenderTargetsManager*)local_198, param_1, SUB81(local_178, 0));
            shared_ptr<RenderTargets>::operator=((shared_ptr<RenderTargets>*)this_01, (shared_ptr*)local_198);
            local_198->~shared_ptr();
        } else {
            psVar4 = (shared_ptr*)this_00->end();
            if (this_02 == psVar4) {
                /* WARNING: Subroutine does not return */
                LogAssert("renderTargetsIt != m_managedRenderTargets.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargetsManager.cpp",
                          88, (char*)0);
            }
            cVar1 = this_02->unique();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("renderTargetsIt->first.m_renderTargets.unique()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargetsManager.cpp",
                          89, (char*)0);
            }
            shared_ptr<RenderTargets>::operator=((shared_ptr<RenderTargets>*)this_01, this_02);
            this_03 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)this_02);
            this_03->SetName(param_3);
            eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
                (fixed_string<char, 16, true, eastl::allocator>*)&this_02[1].field_8, param_3);
        }
        local_178->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RenderTargetsManager*)this_01;
    }

    // 0x100be1380, 112 bytes, placed by class name
    // RenderTargetsManager::GetRenderTargetsDescPairIt(RenderTargetsManager::RenderTargetsDesc const&)
    void RenderTargetsManager::GetRenderTargetsDescPairIt(RenderTargetsDesc* param_1) {
        undefined8 uVar2;
        undefined8 uVar3;

        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      315, (char*)0);
        }
        uVar2 = (&field_16)->HeapBeginPtr();
        uVar3 = (&field_16)->end();
        eastl::find_if<
            eastl::pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>*,
            (RenderTargetsManager::RenderTargetsDesc_const&)->GetRenderTargetsDescPairIt()::__2>(uVar2, uVar3, param_1);
    }

    // 0x100be1410, 208 bytes, placed by class name
    // RenderTargetsManager::FreeUnusedRenderTarget()
    ulong RenderTargetsManager::FreeUnusedRenderTarget() {
        char cVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar2;
        RenderTargets* pRVar3;
        undefined1* this_01;
        undefined8 unaff_R15;
        undefined7 uVar4;
        bool bVar5;
        AutoSingleton<ShaderThreadPoolSingleton> local_28[8];

        local_28->~AutoSingleton("Render_Targets");
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      186, (char*)0);
        }
        this_01 = &field_16;
        this_00 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)this_01->HeapBeginPtr();
        do {
            psVar2 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)this_01->end();
            bVar5 = this_00 == psVar2;
            uVar4 = (undefined7)((ulong)unaff_R15 >> 8);
            unaff_R15 = CONCAT71(uVar4, bVar5);
            if (bVar5) {
            LAB_100be14c1:
                return (CONCAT71(uVar4, bVar5) ^ 1) & 4294967295;
            }
            cVar1 = this_00->unique();
            if (cVar1 != '\0') {
                pRVar3 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)this_00);
                pRVar3->EnableKeepAlive();
                pRVar3 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)this_00);
                pRVar3->KeepAlive();
                this_01->erase_unsorted(this_00);
                goto LAB_100be14c1;
            }
            this_00 = this_00 + 344;
        } while (true);
    }

    // 0x100be14e0, 1056 bytes, placed by class name
    // RenderTargetsManager::GetStats()
    RenderTargetsManager* RenderTargetsManager::GetStats() {
        bool bVar1;
        int iVar2;
        uint uVar3;
        ostream* poVar4;
        char* pcVar5;
        shared_ptr* this_00;
        ostream* poVar6;
        RenderDevice* this_01;
        RenderTargets* pRVar7;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        long* plVar8;
        uint* puVar9;
        Texture* this_03;
        long in_RSI;
        long local_160[2];
        ostream local_150[264];
        shared_ptr* local_48;
        RenderTargetsManager* local_40;
        float local_38;
        float local_34;

        local_40 = this;
        new (local_160) std::stringstream();
        std::ios_base::precision((long)((stringstream*)local_160 + *(long*)(local_160[0] + -24)));
        poVar4 = std::operator<<(local_150, "\n");
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        poVar4 = std::operator<<(poVar4, pcVar5);
        std::operator<<(poVar4, " Render Targets Summary: ");
        this_00 = (shared_ptr*)((in_RSI + 16))->HeapBeginPtr();
        local_48 = (shared_ptr*)((in_RSI + 16))->end();
        if (this_00 == local_48) {
            local_38 = 0.0;
        } else {
            local_38 = 0.0;
            do {
                poVar4 = std::operator<<(local_150, "\n\t");
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                poVar4 = std::operator<<(poVar4, pcVar5);
                poVar4 = std::operator<<(poVar4, ": (Refs: ");
                iVar2 = this_00->use_count();
                poVar6 = (ostream*)std::ostream::operator<<(poVar4, iVar2);
                this_01 = (RenderDevice*)poVar4->Instance();
                bVar1 = RenderDevice::IsKeepAliveSharedPtr<RenderTargets>(this_01, this_00);
                pcVar5 = "";
                if (bVar1) {
                    pcVar5 = " incl threaded keep-alive";
                }
                poVar4 = std::operator<<(poVar6, pcVar5);
                poVar4 = std::operator<<(poVar4, ", GC frame count: ");
                poVar4 = (ostream*)std::ostream::operator<<(poVar4, *(int*)(this_00 + 1));
                std::operator<<(poVar4, ")");
                if ((int)this_00[16].field_8 < 1) {
                    local_34 = 0.0;
                    iVar2 = *(int*)((long)&this_00[17].field_8 + 4);
                } else {
                    iVar2 = 0;
                    do {
                        pRVar7 =
                            (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)this_00);
                        this_02 = (vector<Texture*,
                                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                      pRVar7->GetColourTargetTextures();
                        plVar8 =
                            (long*)eastl::vector<Texture*,
                                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                               eastl::allocator>>::operator[](this_02,
                                                                                                              0);
                        if (*plVar8 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("colourTarget != nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/rendertargets/RenderTargetsManager.cpp",
                                      224, (char*)0);
                        }
                        puVar9 = (uint*)(*plVar8)->second();
                        uVar3 = (*plVar8)->GetImageDataSize();
                        local_34 = Bytes2Megabytes<unsigned int>(uVar3);
                        poVar4 = std::operator<<(local_150, "\n\t\t");
                        poVar4 = std::operator<<(poVar4, "Colour Target ");
                        poVar4 = (ostream*)std::ostream::operator<<(poVar4, iVar2);
                        poVar4 = std::operator<<(poVar4, ": ");
                        poVar4 = (ostream*)std::ostream::operator<<(poVar4, *puVar9);
                        poVar4 = std::operator<<(poVar4, "x");
                        poVar4 = (ostream*)std::ostream::operator<<(poVar4, puVar9[1]);
                        poVar4 = std::operator<<(poVar4, ", ");
                        poVar4 = (ostream*)std::ostream::operator<<(poVar4, puVar9[3]);
                        poVar4 = std::operator<<(poVar4, ", ");
                        poVar4 = (ostream*)std::ostream::operator<<(poVar4, local_34);
                        std::operator<<(poVar4, "MB");
                        iVar2 = iVar2 + 1;
                    } while (iVar2 < (int)this_00[16].field_8);
                    iVar2 = *(int*)((long)&this_00[17].field_8 + 4);
                }
                if (iVar2 != 0) {
                    pRVar7 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)this_00);
                    this_03 = (Texture*)pRVar7->GetDepthStencilTargetTexture();
                    uVar3 = this_03->GetImageDataSize();
                    local_34 = Bytes2Megabytes<unsigned int>(uVar3);
                    poVar4 = std::operator<<(local_150, "\n\t\t");
                    poVar4 = std::operator<<(poVar4, "Depth/Stencil Target: ");
                    poVar4 = (ostream*)std::ostream::operator<<(poVar4, *(uint*)(this_00 + 17));
                    poVar4 = std::operator<<(poVar4, "x");
                    poVar4 = (ostream*)std::ostream::operator<<(poVar4, *(uint*)&this_00[17].field_4);
                    poVar4 = std::operator<<(poVar4, ", ");
                    poVar4 = (ostream*)std::ostream::operator<<(poVar4, *(uint*)((long)&this_00[17].field_8 + 4));
                    poVar4 = std::operator<<(poVar4, ", ");
                    poVar4 = (ostream*)std::ostream::operator<<(poVar4, local_34);
                    std::operator<<(poVar4, "MB");
                }
                local_38 = local_38 + local_34;
                this_00 = (shared_ptr*)&this_00[21].field_8;
            } while (this_00 != local_48);
        }
        poVar4 = std::operator<<(local_150, "\n\n\tTotal RT Image Data Size: ");
        poVar4 = (ostream*)std::ostream::operator<<(poVar4, local_38);
        std::operator<<(poVar4, "MB");
        local_40->str();
        local_160->~stringstream();
        return local_40;
    }

    // 0x100be1910, 832 bytes, placed by class name
    // RenderTargetsManager::CreateRenderTargets(RenderTargetsManager::RenderTargetsDesc const&, bool)
    RenderTargetsManager* RenderTargetsManager::CreateRenderTargets(RenderTargetsDesc* param_1, bool param_2) {
        char cVar1;
        int iVar2;
        RenderTargets* pRVar3;
        undefined8 uVar4;
        uint* puVar5;
        undefined8 uVar6;
        byte in_CL;
        undefined7 in_register_00000011;
        RenderTargetsDesc* pRVar7;
        undefined8 in_stack_fffffffffffffe18;
        undefined4 uVar8;
        ManagedRenderTargets local_1c8;
        shared_ptr local_1b0;
        AutoSingleton<ShaderThreadPoolSingleton> local_198[8];
        uint local_190[86];
        long local_38;

        uVar8 = (undefined4)((ulong)in_stack_fffffffffffffe18 >> 32);
        pRVar7 = (RenderTargetsDesc*)CONCAT71(in_register_00000011, param_2);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_198->~AutoSingleton("Render_Targets");
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      274, (char*)0);
        }
        make_shared<RenderTargets>((jag*)&local_1b0);
        pRVar3 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)&local_1b0);
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar6 = CONCAT44(uVar8, (uint)(in_CL ^ 1) << 3 | pRVar7->field_312);
        cVar1 =
            pRVar3->Create(uVar4, pRVar7->field_104, &pRVar7->field_112, pRVar7->field_240, &pRVar7->field_248, uVar6);
        uVar8 = (undefined4)((ulong)uVar6 >> 32);
        if (cVar1 == '\0') {
            if (in_CL == 0) {
                uVar4 = logger::default_logger();
                shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)&local_1b0);
                local_190->GetInfoString();
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                iVar2 = (&param_1->field_16)->size();
                logger::Logger::Log(uVar4, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/RenderTargetsManager.cpp",
                                    304, "Failed to create RT %s. RenderTargetsManager usage: %u/%u peak: %u", uVar6,
                                    iVar2 + 1, *(undefined4*)&param_1->field_48, *(undefined4*)&param_1->field_52);
                /* WARNING: Subroutine does not return */
                local_190->~fixed_string();
            }
            shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)&local_1b0);
            local_190->GetInfoString();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar2 = (&param_1->field_16)->size();
            /* WARNING: Subroutine does not return */
            LogAssert("success",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      300, "Failed to create RT %s. RenderTargetsManager usage: %u/%u peak: %u", uVar4,
                      (ulong)(iVar2 + 1), CONCAT44(uVar8, *(undefined4*)&param_1->field_48),
                      *(undefined4*)&param_1->field_52);
        }
        new (&local_1c8) ManagedRenderTargets(&local_1b0);
        eastl::pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>::pair<
            RenderTargetsManager::ManagedRenderTargets&, void>(
            (pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>*)local_190,
            &local_1c8, pRVar7);
        (&param_1->field_16, (pair*)local_190)->push_back();
        local_190->~pair();
        local_190[0] = (&param_1->field_16)->size();
        puVar5 = std::max<unsigned int>((uint*)&param_1->field_52, local_190);
        *(uint*)&param_1->field_52 = *puVar5;
        new ((RenderTargetsManager*)this) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&local_1c8);
        local_1c8.~LRUHashCacheWrapper();
        local_1b0.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RenderTargetsManager*)this;
    }

    // 0x100be1d10, 640 bytes, placed by class name
    // RenderTargetsManager::Unregister(shared_ptr<RenderTargets>&)
    void RenderTargetsManager::Unregister(shared_ptr* param_1) {
        char cVar1;
        bool bVar2;
        int iVar3;
        RenderTargets* pRVar4;
        undefined8 uVar5;
        RenderDevice* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar6;
        long lVar7;
        long lVar8;
        char* pcVar9;
        undefined1 local_e0[168];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      103, (char*)0);
        }
        bVar2 = shared_ptr::operator_cast_to_bool(param_1);
        if (bVar2) {
            pRVar4 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)param_1);
            cVar1 = pRVar4->HasColourTargets();
            if (cVar1 == '\0') {
                pRVar4 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)param_1);
                cVar1 = pRVar4->HasDepthTarget();
                if (cVar1 == '\0') {
                    shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)param_1);
                    local_e0->GetInfoString();
                    uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    /* WARNING: Subroutine does not return */
                    LogAssert("renderTargets->HasColourTargets() || renderTargets->HasDepthTarget()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/RenderTargetsManager.cpp",
                              108,
                              "Invalid render target (%s) recycled back into RenderTargetsManager - do not call "
                              "Destroy() on managed render targets.",
                              uVar5);
                }
            }
            iVar3 = param_1->use_count();
            this_00 = (RenderDevice*)param_1->Instance();
            bVar2 = RenderDevice::IsKeepAliveSharedPtr<RenderTargets>(this_00, param_1);
            if ((2 < iVar3) && ((iVar3 != 3 || (!bVar2)))) {
                shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)param_1);
                local_e0->GetInfoString();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar9 = "";
                if (bVar2) {
                    pcVar9 = " incl 1 from threaded rendering keep-alive";
                }
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "useCount <= 2 || (useCount == 3 && isKeepAlive)",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                    "RenderTargetsManager.cpp",
                    117,
                    "Render target %s was not unused (%i external refs%s) at call to %s - this could lead to leaks",
                    uVar5, (ulong)(iVar3 - 2), pcVar9, "Unregister");
            }
            this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(&field_16)->HeapBeginPtr();
            pvVar6 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(&field_16)->end();
            while (true) {
                if (this_01 == pvVar6) {
                    shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)param_1);
                    local_e0->GetInfoString();
                    uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/RenderTargetsManager.cpp",
                                    134, "Trying to Unregister an unmanaged render target (%s)", uVar5);
                }
                lVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                lVar8 = param_1->end();
                if (lVar7 == lVar8)
                    break;
                this_01 = this_01 + 344;
            }
            shared_ptr<RenderTargets>::reset();
            *(undefined4*)(this_01 + 16) = 0;
            this_01[20] = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>)1;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be1fb0, 288 bytes, placed by class name
    // RenderTargetsManager::OnEndFrame()
    void RenderTargetsManager::OnEndFrame() {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar2;
        undefined8 uVar3;
        undefined1 local_e0[168];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        GarbageCollect(this, false);
        this_00 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(&field_16)->HeapBeginPtr();
        psVar2 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(&field_16)->end();
        if (this_00 != psVar2) {
            do {
                if (this_00->unique() == '\0') {
                    this_00[20] = (shared_ptr<oldscape::configdecoder::OldscapeVarType>)0;
                } else {
                    *(int*)(this_00 + 16) = *(int*)(this_00 + 16) + 1;
                    if (this_00[20] == (shared_ptr<oldscape::configdecoder::OldscapeVarType>)0) {
                        shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)this_00);
                        local_e0->GetInfoString();
                        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        /* WARNING: Subroutine does not return */
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
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be2ca0, 112 bytes, placed by class name
    // RenderTargetsManager::RenderTargetsDesc::operator==(RenderTargetsManager::RenderTargetsDesc const&) const
    /* RenderTargetsManager::RenderTargetsDesc::TEMPNAMEPLACEHOLDERVALUE(RenderTargetsManager::RenderTargetsDesc
   const&) const */

    undefined4 RenderTargetsManager::RenderTargetsDesc::operator==(RenderTargetsDesc* param_1) {
        bool bVar1;
        char cVar2;

        if ((((field_104 == param_1->field_104) &&
              (bVar1 = std::operator==((array*)&field_112, (array*)&param_1->field_112), bVar1)) &&
             (field_240 == param_1->field_240)) &&
            (cVar2 = Texture::Desc::operator==((Desc*)&field_248, (Desc*)&param_1->field_248), cVar2 != '\0')) {
            return CONCAT31((int3)((uint)field_312 >> 8), field_312 == param_1->field_312);
        }
        return 0;
    }

} // namespace jag::render
