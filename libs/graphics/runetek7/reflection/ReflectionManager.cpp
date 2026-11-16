// libs/graphics/runetek7/reflection/ReflectionManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ReflectionManager.h"

namespace jag::graphics {
    // 0x1000b9950: ReflectionManager::GetCullFrustum() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x100324d40: ReflectionManager::GetViewTransforms() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix2D()

    // 0x1007e0cd0
    ReflectionManager::ReflectionManager(render::RenderTargetsManager& renderTargetsManager)
        : Config(), field_640(renderTargetsManager) {}

    // 0x1007e0d70
    ReflectionManager::~ReflectionManager() {
        Destroy();
        field_384.~shared_ptr();
    }

    // 0x1007e0db0
    void ReflectionManager::Destroy() {
        DestroyRenderingResources();
    }

    // 0x1007e0dd0
    void ReflectionManager::Initialise(const ReflectionManager::Config& config) {
        uint64_t uVar1;

        if (CreateRenderingResources(config) != '\0') {
            uVar1 = config.field_8;
            field_0 = config.field_0;
            field_8 = uVar1;
        }
    }

    // 0x1007e0e00
    void ReflectionManager::CreateRenderingResources(const ReflectionManager::Config& config) {
        AutoSingleton<ShaderThreadPoolSingleton> local_20;

        CreateRenderTargets(config);
    }

    // 0x1007e0e40
    void ReflectionManager::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18;

        field_640->Unregister(field_384);
    }

    // 0x1007e0e80
    void ReflectionManager::Update(const ViewTransforms& viewTransforms1, const ViewTransforms& viewTransforms2) {
        *m_viewTransforms = viewTransforms1;
        auto pMVar1 = viewTransforms1.GetScreen();
        auto pMVar2 = viewTransforms2.GetOrigin();
        ViewTransforms local_f8(*pMVar1, *pMVar2);
        *field_400 = local_f8;
        pMVar1 = (Matrix44T<float>*)viewTransforms1.GetScreen();
        pMVar2 = (Matrix44T<float>*)viewTransforms1.GetOrigin();
        m_cullFrustum->Set(*pMVar1, *pMVar2);
    }

    // 0x1007e0f30
    uint64_t ReflectionManager::GetReflectionMapAtlas() const {
        uint64_t uVar2;
        uint64_t* puVar3;

        auto this_00 = field_384.operator->();
        auto this_01 = this_00->GetColourTargetTextures();
        if (this_01->empty() == '\0') {
            puVar3 = (uint64_t*)(*this_01)[0];
            uVar2 = *puVar3;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1007e0f80
    void ReflectionManager::GetReflectionMapAtlasDT() const {
        ((RenderTargets*)field_384.operator->())->GetDepthStencilTargetTexture();
    }

    // 0x1007e0fa0
    ReflectionManager* ReflectionManager::GetReflectionMapViewport() const {
        int* in_RSI;

        new (this) render::Viewport(0, 0, *in_RSI, in_RSI[1], 0.0, 1.0);
        return this;
    }

    // 0x1007e0fd0
    void ReflectionManager::GetReflectionMapRenderTargets(render::RenderTargetData& renderTargetData) {
        renderTargetData.field_0 = (RenderTargets*)field_384.end();
    }

    // 0x1007e0ff0
    unsigned long ReflectionManager::CreateRenderTargets(const ReflectionManager::Config& config) {
        uint8_t local_b8[68];
        uint32_t local_70;
        uint64_t local_68;
        uint64_t uStack_60;
        uint64_t local_58;
        uint64_t uStack_50;
        uint64_t local_48;
        uint64_t uStack_40;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38;

        Desc local_138;
        local_138.field_0 = *(int*)&config.field_0;
        local_138.field_4 = *(int*)((long)&config.field_0 + 4);
        local_138.field_12 =
            render::GetFormatFromDepthStencilBits(*(int*)&config.field_8, *(int*)((long)&config.field_8 + 4), false);
        new ((local_b8 + 64)) render::Texture::Desc();
        local_138._64_4_ = *(uint32_t*)&config.field_0;
        uint32_t local_f4 = *(uint32_t*)((long)&config.field_0 + 4);
        uint32_t local_6c = 7;
        RenderTargetsManager* str = field_640;
        uint64_t local_c8 = local_48;
        uint64_t uStack_c0 = uStack_40;
        uint64_t local_d8 = local_58;
        uint64_t uStack_d0 = uStack_50;
        uint64_t local_e8 = local_68;
        uint64_t uStack_e0 = uStack_60;
        uint32_t local_f0 = local_70;
        uint32_t local_ec = 7;
        local_b8._64_4_ = local_138._64_4_;
        uint32_t local_74 = local_f4;
        new (local_b8) render::Texture::Desc();
        local_38.Register(str, 14651115, *3553, (int)&local_138 + 64, DAT_00000001, (unsigned int)&local_138, false);
        field_384 = local_38;
        bool bVar1 = field_384 != nullptr;
        if (!bVar1) {
            LogAssert("success",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "reflection/ReflectionManager.cpp",
                      94, "ReflectionManager: Failed to create reflection target textures");
        }
        return bVar1 & 4294967295;
    }

    // 0x1007e1160
    void ReflectionManager::AddWaterPatchAABB(const math::AABB& aabb) {
        Matrix44T<float>* matrix44;
        float* pfVar1;
        Vector4T<float> local_a8;
        Vector4T<float> local_98;
        uint8_t local_88[32];
        uint64_t local_68;
        uint64_t local_48[3];

        new (local_88) math::AABB(PTR_ZERO_100ee66e8, PTR_ZERO_100ee66e8);
        unsigned int arg1 = 0;
        do {
            local_48[0] = aabb.GetCornerPos(arg1);
            local_a8 = math::Vector4T(*local_48, 1.0);
            matrix44 = (Matrix44T<float>*)m_viewTransforms->GetImmediateThreadPool();
            local_a8 *= matrix44;
            pfVar1 = (float*)local_a8.qw();
            local_68 = local_a8 * (*(0.5 / *pfVar1));
            local_98 = math::Vector4T(0.5);
            local_48[0] = (*((local_88 + 32))) + local_98;
            local_a8 = *local_48;
            local_48[0] = local_a8.GetXYZ();
            local_88->AddPoint(*local_48);
            arg1 = arg1 + 1;
        } while (arg1 != 8);
        if (local_88->IsValid() != '\0') {
            field_608.Union(*local_88);
        }
    }

    // 0x1007e12a0
    void ReflectionManager::ResetScissorRect() {
        uint8_t local_38[32];

        new (local_38) math::AABB(PTR_ZERO_100ee66e8, PTR_ZERO_100ee66e8);
        field_608 = *local_38;
    }

    // 0x1007e12e0
    oldscape::dash3d::GridRect ReflectionManager::GetScissorRect() {
        int local_44[3];

        auto this_00 = field_384.operator->();
        auto this_01 = this_00->GetColourTargetTextures();
        uint64_t* puVar1 = (uint64_t*)(*this_01)[0];
        int* piVar2 = (int*)(*puVar1)->second();
        float fVar3 = (float)field_608.GetMinY();
        local_44[2] = piVar2[1];
        local_44[0] = (int)((float)(unsigned int)local_44[2] * fVar3);
        local_44[1] = 0;
        int arg2 = math::Clamp<int>(*local_44, *(local_44 + 1), *(local_44 + 2));
        int arg3 = *piVar2;
        fVar3 = (float)field_608.GetMaxY();
        int local_34 = (int)((float)(unsigned int)piVar2[1] * fVar3);
        piVar2 = std::max<int>(0, local_34);
        return oldscape::dash3d::GridRect(0, arg2, arg3, *piVar2);
    }

} // namespace jag::graphics
