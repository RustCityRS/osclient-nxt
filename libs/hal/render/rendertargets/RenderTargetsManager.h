// libs/hal/render/rendertargets/RenderTargetsManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class RenderTargetsManager {
    public:
        class ManagedRenderTargets;
        class RenderTargetsDesc;
        // virtual methods in vtable order
        virtual ~RenderTargetsManager();
        virtual void OnEndFrame();
        RenderTargetsManager(const char* str, unsigned int arg2, int arg3);
        void GarbageCollect(bool arg1);
        void DestroyRenderingResources();
        RenderTargetsManager* Register(const char* str, TextureType textureType,
                                       const std::array<Texture::Desc, 2ul>& descs, int arg4, const Texture::Desc& desc,
                                       unsigned int arg6, bool arg7);
        void GetRenderTargetsDescPairIt(const RenderTargetsDesc& renderTargetsDesc);
        unsigned long FreeUnusedRenderTarget();
        RenderTargetsManager* GetStats();
        RenderTargetsManager* CreateRenderTargets(const RenderTargetsDesc& renderTargetsDesc, bool arg2);
        void Unregister(shared_ptr<RenderTargets>& renderTargets);

    private:
        RenderDeviceOnEndFrame field_8;
        uint8_t _unknown_9[39];
        unsigned int field_48;
        uint32_t field_52;
        int field_56;
        uint8_t _unknown_60[12];
    };

    class RenderTargetsManager::ManagedRenderTargets {
    public:
        ~ManagedRenderTargets();
        ManagedRenderTargets(shared_ptr<RenderTargets>& renderTargets);
        ManagedRenderTargets(const ManagedRenderTargets& managedRenderTargets);
        ManagedRenderTargets(ManagedRenderTargets&& managedRenderTargets);
        ManagedRenderTargets* operator=(ManagedRenderTargets&& managedRenderTargets);

    private:
        uint8_t _unknown_0[16];
        uint32_t field_16;
        uint8_t field_20;
        uint8_t _unknown_21[3];
    };

    class RenderTargetsManager::RenderTargetsDesc {
    public:
        ~RenderTargetsDesc();
        RenderTargetsDesc(const char* str, TextureType textureType, const std::array<Texture::Desc, 2ul>& descs,
                          int arg4, const Texture::Desc& desc, unsigned int arg6);
        uint32_t operator==(const RenderTargetsDesc& renderTargetsDesc) const;
        RenderTargetsDesc(const RenderTargetsDesc& renderTargetsDesc);
        RenderTargetsDesc(RenderTargetsDesc&& renderTargetsDesc);
        RenderTargetsDesc* operator=(RenderTargetsDesc&& renderTargetsDesc);

    private:
        uint8_t _unknown_0[104];
        TextureType field_104;
        uint8_t _unknown_108[4];
        uint64_t field_112;
        uint64_t field_120;
        uint64_t field_128;
        uint64_t field_136;
        uint64_t field_144;
        uint64_t field_152;
        uint64_t field_160;
        uint64_t field_168;
        uint64_t field_176;
        uint64_t field_184;
        uint64_t field_192;
        uint64_t field_200;
        uint64_t field_208;
        uint64_t field_216;
        uint64_t field_224;
        uint64_t field_232;
        int field_240;
        uint8_t _unknown_244[4];
        uint64_t field_248;
        uint64_t field_256;
        uint64_t field_264;
        uint64_t field_272;
        uint64_t field_280;
        uint64_t field_288;
        uint64_t field_296;
        uint64_t field_304;
        unsigned int field_312;
        uint8_t _unknown_316[4];
    };

    // 0x100bf7090
    RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(const char* str, TextureType textureType,
                                                               const std::array<Texture::Desc, 2ul>& descs, int arg4,
                                                               const Texture::Desc& desc, unsigned int arg6)
        : eastl::fixed_string<char, 64>(str), field_104(textureType) {
        uint64_t uVar1 = *(uint64_t*)(descs + 8);
        uint64_t uVar2 = *(uint64_t*)(descs + 16);
        uint64_t uVar3 = *(uint64_t*)(descs + 24);
        uint64_t uVar4 = *(uint64_t*)(descs + 32);
        uint64_t uVar5 = *(uint64_t*)(descs + 40);
        uint64_t uVar6 = *(uint64_t*)(descs + 48);
        uint64_t uVar7 = *(uint64_t*)(descs + 56);
        field_112 = *(uint64_t*)descs;
        field_120 = uVar1;
        field_128 = uVar2;
        field_136 = uVar3;
        field_144 = uVar4;
        field_152 = uVar5;
        field_160 = uVar6;
        field_168 = uVar7;
        uVar1 = *(uint64_t*)(descs + 72);
        field_176 = *(uint64_t*)(descs + 64);
        field_184 = uVar1;
        uVar1 = *(uint64_t*)(descs + 88);
        field_192 = *(uint64_t*)(descs + 80);
        field_200 = uVar1;
        uVar1 = *(uint64_t*)(descs + 104);
        field_208 = *(uint64_t*)(descs + 96);
        field_216 = uVar1;
        uVar1 = *(uint64_t*)(descs + 120);
        field_224 = *(uint64_t*)(descs + 112);
        field_232 = uVar1;
        field_240 = arg4;
        uVar1 = *(uint64_t*)&desc.field_8;
        uVar2 = *(uint64_t*)&desc.field_16;
        uVar3 = *(uint64_t*)&desc.field_24;
        uVar4 = *(uint64_t*)&desc.field_32;
        uVar5 = *(uint64_t*)&desc.field_40;
        uVar6 = desc.field_48;
        uVar7 = *(uint64_t*)&desc.field_56;
        field_248 = *(uint64_t*)desc;
        field_256 = uVar1;
        field_264 = uVar2;
        field_272 = uVar3;
        field_280 = uVar4;
        field_288 = uVar5;
        field_296 = uVar6;
        field_304 = uVar7;
        field_312 = arg6;
    }

    // 0x100bf74f0
    RenderTargetsManager::ManagedRenderTargets::ManagedRenderTargets(shared_ptr<RenderTargets>& renderTargets)
        : shared_ptr(renderTargets), field_16(0), field_20(0) {}

    // 0x100bf7580
    RenderTargetsManager::ManagedRenderTargets::ManagedRenderTargets(
        const RenderTargetsManager::ManagedRenderTargets& managedRenderTargets)
        : shared_ptr(managedRenderTargets), field_20(managedRenderTargets.field_20),
          field_16(managedRenderTargets.field_16) {}

    // 0x100bf75b0
    RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(
        const RenderTargetsManager::RenderTargetsDesc& renderTargetsDesc)
        : eastl::fixed_string<char, 64>(renderTargetsDesc) {
        _memcpy(&field_104, &renderTargetsDesc.field_104, 212);
    }

    // 0x100bfb030
    RenderTargetsManager::ManagedRenderTargets::ManagedRenderTargets(
        RenderTargetsManager::ManagedRenderTargets&& managedRenderTargets) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(managedRenderTargets);
        field_20 = managedRenderTargets.field_20;
        field_16 = managedRenderTargets.field_16;
    }

    // 0x100bfb060
    RenderTargetsManager::RenderTargetsDesc::RenderTargetsDesc(
        RenderTargetsManager::RenderTargetsDesc&& renderTargetsDesc)
        : eastl::fixed_string<char, 64>(renderTargetsDesc) {
        _memcpy(&field_104, &renderTargetsDesc.field_104, 212);
    }

    // 0x100bfb200
    uint64_t RenderTargetsManager::GarbageCollect(bool)::$_1::operator()(
        const eastl::pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>& arg1)
        const {
        RenderTargets* pRVar3;
        uint64_t uVar4;
        ReturnValue local_d0;

        long lVar1 = field_8;
        if ((arg1.unique() == '\0') || ((*field_0 == '\0' && (*(int*)(arg1 + 16) < *(int*)(lVar1 + 56))))) {
            uVar4 = 0;
        } else {
            if (arg1[20] ==
                (pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>)0) {
                pRVar3 = (RenderTargets*)arg1.operator->();
                local_d0 = pRVar3->GetInfoString();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                LogAssert("renderTargetsResourcePair.first.m_unregisterCalled",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargetsManager.cpp",
                          170, "Managed render target %s was not destroyed using RenderTargetsManager Unregister()",
                          uVar4);
            }
            pRVar3 = (RenderTargets*)arg1.operator->();
            pRVar3->EnableKeepAlive();
            pRVar3 = (RenderTargets*)arg1.operator->();
            pRVar3->KeepAlive();
            uVar4 = 1;
        }
        return uVar4;
    }

    // 0x100bfb350
    ManagedRenderTargets* RenderTargetsManager::ManagedRenderTargets::operator=(
        RenderTargetsManager::ManagedRenderTargets&& managedRenderTargets) {
        *this = managedRenderTargets;
        field_16 = managedRenderTargets.field_16;
        field_20 = managedRenderTargets.field_20;
        return this;
    }

    // 0x100bfb380
    RenderTargetsDesc*
    RenderTargetsManager::RenderTargetsDesc::operator=(RenderTargetsManager::RenderTargetsDesc&& renderTargetsDesc) {
        *this = renderTargetsDesc;
        _memcpy(&field_104, &renderTargetsDesc.field_104, 212);
        return this;
    }

    // 0x100bfb780
    uint64_t
    RenderTargetsManager::GetRenderTargetsDescPairIt(RenderTargetsManager::RenderTargetsDesc const&)::$_2::operator()(
        const eastl::pair<RenderTargetsManager::ManagedRenderTargets, RenderTargetsManager::RenderTargetsDesc>& arg1)
        const {
        uint64_t uVar3;

        if ((*(int*)(arg1 + 264) < 1) && (*(int*)(arg1 + 284) == 0)) {
            LogAssert("rtResourcePair.second.m_numColourTargets > 0 || "
                      "rtResourcePair.second.m_depthStencilTargetDesc.m_Format != FORMAT_UNKNOWN",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetsManager.cpp",
                      321, nullptr);
        }
        auto pRVar2 = arg1.operator->();
        if (!(pRVar2->HasColourTargets())) {
            pRVar2 = (RenderTargets*)arg1.operator->();
            if (!(pRVar2->HasDepthTarget())) {
                LogAssert("rtResourcePair.first.m_renderTargets->HasColourTargets() || "
                          "rtResourcePair.first.m_renderTargets->HasDepthTarget()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/RenderTargetsManager.cpp",
                          322, nullptr);
            }
        }
        if (!((*((arg1 + 24))) == (*(*(RenderTargetsDesc**)this)))) {
            uVar3 = 0;
        } else {
            uVar3 = arg1.unique();
        }
        return uVar3;
    }

} // namespace jag::render
