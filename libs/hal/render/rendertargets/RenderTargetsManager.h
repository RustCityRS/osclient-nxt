// libs/hal/render/rendertargets/RenderTargetsManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class RenderTargetsManager {
    public:
        class ManagedRenderTargets;
        class RenderTargetsDesc;
        // virtual methods in vtable order
        virtual ~RenderTargetsManager();
        virtual void OnEndFrame();
        RenderTargetsManager(char const*, unsigned int, int);
        void GarbageCollect(bool);
        void DestroyRenderingResources();
        RenderTargetsManager* Register(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int,
                                       Texture::Desc const&, unsigned int, bool);
        void GetRenderTargetsDescPairIt(RenderTargetsDesc const&);
        ulong FreeUnusedRenderTarget();
        GetStats();
        CreateRenderTargets(RenderTargetsDesc const&, bool);
        void Unregister(shared_ptr<RenderTargets>&);

        // data members, from how the methods use this: 72 bytes
        undefined** field_0;            // offset 0, vtable pointer
        RenderDeviceOnEndFrame field_8; // offset 8
        char _unknown_9[39];
        uint field_48;       // offset 48
        undefined4 field_52; // offset 52
        int field_56;        // offset 56
        char _unknown_60[12];
    };

    class RenderTargetsManager::ManagedRenderTargets {
    public:
        ~ManagedRenderTargets();
        ManagedRenderTargets(shared_ptr<RenderTargets>&);
        ManagedRenderTargets(ManagedRenderTargets const&);
        ManagedRenderTargets(ManagedRenderTargets&&);
        ManagedRenderTargets* operator=(ManagedRenderTargets&&);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[16];
        undefined4 field_16; // offset 16
        undefined1 field_20; // offset 20
        char _unknown_21[3];
    };

    class RenderTargetsManager::RenderTargetsDesc {
    public:
        ~RenderTargetsDesc();
        RenderTargetsDesc(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int, Texture::Desc const&,
                          unsigned int);
        operator==(RenderTargetsDesc const&) const;
        RenderTargetsDesc(RenderTargetsDesc const&);
        RenderTargetsDesc(RenderTargetsDesc&&);
        RenderTargetsDesc* operator=(RenderTargetsDesc&&);

        // data members, from how the methods use this: 320 bytes
        char _unknown_0[104];
        undefined4 field_104; // offset 104
        char _unknown_108[4];
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        undefined8 field_128; // offset 128
        undefined8 field_136; // offset 136
        undefined8 field_144; // offset 144
        undefined8 field_152; // offset 152
        undefined8 field_160; // offset 160
        undefined8 field_168; // offset 168
        undefined8 field_176; // offset 176
        undefined8 field_184; // offset 184
        undefined8 field_192; // offset 192
        undefined8 field_200; // offset 200
        undefined8 field_208; // offset 208
        undefined8 field_216; // offset 216
        undefined8 field_224; // offset 224
        undefined8 field_232; // offset 232
        undefined4 field_240; // offset 240
        char _unknown_244[4];
        undefined8 field_248; // offset 248
        undefined8 field_256; // offset 256
        undefined8 field_264; // offset 264
        undefined8 field_272; // offset 272
        undefined8 field_280; // offset 280
        undefined8 field_288; // offset 288
        undefined8 field_296; // offset 296
        undefined8 field_304; // offset 304
        undefined4 field_312; // offset 312
        char _unknown_316[4];
    };

    // 0x100be1340, 32 bytes, complete-object constructor, inline, placed by class name and debug map
    // RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int, Texture::Desc const&, unsigned int)
    /* RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(char const*,
   TextureType, std::array<Texture::Desc, 2ul> const&, int,
   Texture::Desc const&, unsigned int) */

    void RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc() {
        RenderTargetsDesc();
    }

    // 0x100be2bb0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // RenderTargetsManager::ManagedRenderTargets::ManagedRenderTargets(shared_ptr<RenderTargets>&): jumps straight to the base-object constructor

    // 0x100bf7090, 224 bytes, base-object constructor, inline, placed by class name
    // RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(char const*, TextureType, std::array<Texture::Desc, 2ul> const&, int, Texture::Desc const&, unsigned int)
    /* RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(char const*,
   TextureType, std::array<Texture::Desc, 2ul> const&, int,
   Texture::Desc const&, unsigned int) */

    void RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(char* param_1, undefined4 param_3,
                                                                    undefined8* param_4, undefined4 param_5,
                                                                    undefined8* param_6, undefined4 param_7) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        new (this) eastl::fixed_string<char, 64, true, eastl::allocator>(param_1);
        field_104 = param_3;
        uVar1 = param_4[1];
        uVar2 = param_4[2];
        uVar3 = param_4[3];
        uVar4 = param_4[4];
        uVar5 = param_4[5];
        uVar6 = param_4[6];
        uVar7 = param_4[7];
        field_112 = *param_4;
        field_120 = uVar1;
        field_128 = uVar2;
        field_136 = uVar3;
        field_144 = uVar4;
        field_152 = uVar5;
        field_160 = uVar6;
        field_168 = uVar7;
        uVar1 = param_4[9];
        field_176 = param_4[8];
        field_184 = uVar1;
        uVar1 = param_4[11];
        field_192 = param_4[10];
        field_200 = uVar1;
        uVar1 = param_4[13];
        field_208 = param_4[12];
        field_216 = uVar1;
        uVar1 = param_4[15];
        field_224 = param_4[14];
        field_232 = uVar1;
        field_240 = param_5;
        uVar1 = param_6[1];
        uVar2 = param_6[2];
        uVar3 = param_6[3];
        uVar4 = param_6[4];
        uVar5 = param_6[5];
        uVar6 = param_6[6];
        uVar7 = param_6[7];
        field_248 = *param_6;
        field_256 = uVar1;
        field_264 = uVar2;
        field_272 = uVar3;
        field_280 = uVar4;
        field_288 = uVar5;
        field_296 = uVar6;
        field_304 = uVar7;
        field_312 = param_7;
    }

    // 0x100bf74f0, 32 bytes, base-object constructor, inline, placed by class name
    // RenderTargetsManager::ManagedRenderTargets::ManagedRenderTargets(shared_ptr<RenderTargets>&)
    void RenderTargetsManager::ManagedRenderTargets::ManagedRenderTargets(shared_ptr* param_1) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        field_16 = 0;
        field_20 = 0;
    }

    // 0x100bf7560, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderTargetsManager::ManagedRenderTargets::ManagedRenderTargets(RenderTargetsManager::ManagedRenderTargets const&): jumps straight to the base-object constructor

    // 0x100bf7570, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(RenderTargetsManager::RenderTargetsDesc const&): jumps straight to the base-object constructor

    // 0x100bf7580, 48 bytes, base-object constructor, inline, placed by class name
    // RenderTargetsManager::ManagedRenderTargets::ManagedRenderTargets(RenderTargetsManager::ManagedRenderTargets const&)
    void RenderTargetsManager::ManagedRenderTargets::ManagedRenderTargets(ManagedRenderTargets* param_1) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        field_20 = param_1->field_20;
        field_16 = param_1->field_16;
    }

    // 0x100bf75b0, 48 bytes, base-object constructor, inline, placed by class name
    // RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(RenderTargetsManager::RenderTargetsDesc const&)
    void RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(RenderTargetsDesc* param_1) {
        new (this) eastl::fixed_string<char, 64, true, eastl::allocator>(param_1);
        _memcpy(&field_104, &param_1->field_104, 212);
    }

    // 0x100bfb010, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderTargetsManager::ManagedRenderTargets::ManagedRenderTargets(RenderTargetsManager::ManagedRenderTargets&&): jumps straight to the base-object constructor

    // 0x100bfb020, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(RenderTargetsManager::RenderTargetsDesc&&): jumps straight to the base-object constructor

    // 0x100bfb030, 48 bytes, base-object constructor, inline, placed by class name
    // RenderTargetsManager::ManagedRenderTargets::ManagedRenderTargets(RenderTargetsManager::ManagedRenderTargets&&)
    void RenderTargetsManager::ManagedRenderTargets::ManagedRenderTargets(ManagedRenderTargets* param_1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        field_20 = param_1->field_20;
        field_16 = param_1->field_16;
    }

    // 0x100bfb060, 48 bytes, base-object constructor, inline, placed by class name
    // RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(RenderTargetsManager::RenderTargetsDesc&&)
    void RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(RenderTargetsDesc* param_1) {
        new (this) eastl::fixed_string<char, 64, true, eastl::allocator>(param_1);
        _memcpy(&field_104, &param_1->field_104, 212);
    }

    // 0x100bfb200, 272 bytes, inline, placed by class name
    // RenderTargetsManager::GarbageCollect(bool)::$_1::operator()(eastl::pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc> const&) const
    /* RenderTargetsManager::GarbageCollect(bool)::$_1::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<RenderTargetsManager::ManagedRenderTargets,
   RenderTargetsManager::RenderTargetsDesc> const&) const */

    undefined8 RenderTargetsManager::GarbageCollect(bool)::$_1::operator()(pair* param_1) {
        long lVar1;
        char cVar2;
        undefined8 uVar3;
        RenderTargets* pRVar4;
        undefined1 local_d0[168];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        lVar1 = *(long*)(this + 8);
        cVar2 = param_1->unique();
        if ((cVar2 == '\0') || ((**(char**)this == '\0' && (*(int*)(param_1 + 16) < *(int*)(lVar1 + 56))))) {
            uVar3 = 0;
        } else {
            if (param_1[20] == (pair)0) {
                shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)param_1);
                local_d0->GetInfoString();
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                /* WARNING: Subroutine does not return */
                LogAssert("renderTargetsResourcePair.first.m_unregisterCalled",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargetsManager.cpp",
                          170, "Managed render target %s was not destroyed using RenderTargetsManager Unregister()",
                          uVar3);
            }
            pRVar4 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)param_1);
            pRVar4->EnableKeepAlive();
            pRVar4 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)param_1);
            pRVar4->KeepAlive();
            uVar3 = 1;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar3;
    }

    // 0x100bfb350, 48 bytes, inline, placed by class name
    // RenderTargetsManager::ManagedRenderTargets::operator=(RenderTargetsManager::ManagedRenderTargets&&)
    /* RenderTargetsManager::ManagedRenderTargets::TEMPNAMEPLACEHOLDERVALUE(RenderTargetsManager::ManagedRenderTargets&&)
    */

    ManagedRenderTargets* RenderTargetsManager::ManagedRenderTargets::operator=(ManagedRenderTargets* param_1) {
        shared_ptr<RenderTargets>::operator=((shared_ptr<RenderTargets>*)this, (shared_ptr*)param_1);
        field_16 = param_1->field_16;
        field_20 = param_1->field_20;
        return this;
    }

    // 0x100bfb380, 48 bytes, inline, placed by class name
    // RenderTargetsManager::RenderTargetsDesc::operator=(RenderTargetsManager::RenderTargetsDesc&&)
    /* RenderTargetsManager::RenderTargetsDesc::TEMPNAMEPLACEHOLDERVALUE(RenderTargetsManager::RenderTargetsDesc&&)
    */

    RenderTargetsDesc* RenderTargetsManager::RenderTargetsDesc::operator=(RenderTargetsDesc* param_1) {
        eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
            (fixed_string<char, 4096, true, eastl::allocator>*)this, (fixed_string*)param_1);
        _memcpy(&field_104, &param_1->field_104, 212);
        return this;
    }

    // 0x100bfb780, 176 bytes, inline, placed by class name
    // RenderTargetsManager::GetRenderTargetsDescPairIt(RenderTargetsManager::RenderTargetsDesc const&)::$_2::operator()(eastl::pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc> const&) const
    /* RenderTargetsManager::GetRenderTargetsDescPairIt(RenderTargetsManager::RenderTargetsDesc
   const&)::$_2::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<RenderTargetsManager::ManagedRenderTargets,
   RenderTargetsManager::RenderTargetsDesc> const&) const */

    undefined8 RenderTargetsManager::GetRenderTargetsDescPairIt(
        RenderTargetsManager::RenderTargetsDesc_const&)::$_2::operator()(pair* param_1) {
        char cVar1;
        RenderTargets* pRVar2;
        undefined8 uVar3;

        if ((*(int*)(param_1 + 264) < 1) && (*(int*)(param_1 + 284) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("rtResourcePair.second.m_numColourTargets > 0 || "
                      "rtResourcePair.second.m_depthStencilTargetDesc.m_Format != FORMAT_UNKNOWN",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      321, (char*)0);
        }
        pRVar2 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)param_1);
        cVar1 = pRVar2->HasColourTargets();
        if (cVar1 == '\0') {
            pRVar2 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)param_1);
            cVar1 = pRVar2->HasDepthTarget();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("rtResourcePair.first.m_renderTargets->HasColourTargets() || "
                          "rtResourcePair.first.m_renderTargets->HasDepthTarget()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargetsManager.cpp",
                          322, (char*)0);
            }
        }
        cVar1 = RenderTargetsDesc::operator==((RenderTargetsDesc*)(param_1 + 24), *(RenderTargetsDesc**)this);
        if (cVar1 == '\0') {
            uVar3 = 0;
        } else {
            uVar3 = param_1->unique();
        }
        return uVar3;
    }

} // namespace jag::render
