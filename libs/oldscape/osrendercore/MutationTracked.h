// libs/oldscape/osrendercore/MutationTracked.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape {
    template <
        typename...> // 3 instantiations, e.g. <jag::graphics::EffectList>, <jag::graphics::SimpleScatteringParams>, <jag::graphics::VolumetricScatteringParams>
    class MutationTracked {
    public:
        bool IsDirty() const;
        void ResetDirty();
        MutationTracked<jag::graphics::EffectList const&>(const jag::graphics::EffectList& effectList);
        MutationTracked<jag::graphics::VolumetricScatteringParams&>(
            jag::graphics::VolumetricScatteringParams& volumetricScatteringParams);
        MutationTracked<jag::graphics::VolumetricScatteringParams>*
        operator=(MutationTracked<jag::graphics::VolumetricScatteringParams>&& mutationTracked);
        MutationTracked<jag::graphics::EffectList>* GetMutable();
        MutationTracked<jag::graphics::VolumetricScatteringParams>* GetMutable();
        MutationTracked<jag::graphics::SimpleScatteringParams>* GetMutable();
        MutationTracked<>();
        MutationTracked<jag::graphics::SimpleScatteringParams>*
        operator=(const MutationTracked<jag::graphics::SimpleScatteringParams>& mutationTracked);
    };

    // 0x1001c21e0
    bool MutationTracked<jag::graphics::EffectList>::IsDirty() const {
        return field_12[4];
    }

    // 0x1001c21f0
    void MutationTracked<jag::graphics::EffectList>::ResetDirty() {
        this[16] = (MutationTracked<jag::graphics::EffectList>)0;
    }

    // 0x1001c2200
    bool MutationTracked<jag::graphics::SimpleScatteringParams>::IsDirty() const {
        return m_resize;
    }

    // 0x1001c2210
    void MutationTracked<jag::graphics::SimpleScatteringParams>::ResetDirty() {
        this[64] = (optional_storage<jag::math::Matrix44T<float>, true>)0;
    }

    // 0x1001c2220
    bool MutationTracked<jag::graphics::VolumetricScatteringParams>::IsDirty() const {
        return field_80;
    }

    // 0x1001c2230
    void MutationTracked<jag::graphics::VolumetricScatteringParams>::ResetDirty() {
        this[80] = (MutationTracked<jag::graphics::VolumetricScatteringParams>)0;
    }

    // 0x1001c2280
    MutationTracked<jag::graphics::VolumetricScatteringParams>*
    MutationTracked<jag::graphics::VolumetricScatteringParams>::operator=(
        MutationTracked<jag::graphics::VolumetricScatteringParams>&& mutationTracked) {
        *this = mutationTracked;
        this[80] = mutationTracked[80];
        return this;
    }

    // 0x1001c22b0
    void OSRenderCore_RenderThread_RSeven::UpdateHorizonEffects() {
        UpdateSkybox();
        UpdateFog();
    }

    // 0x1001c22d0
    void OSRenderCore_RenderThread_RSeven::UpdateSkybox() {

        auto local_28 = (((RT7Core*)field_8.operator->())->GetSkyBoxManager())->RegisterSkyBox(-1);
        ((SkyBox*)local_28.operator->())
            ->SetClearColour(*((Vector4T<float>*)(field_32 + *(long*)((long)field_0 - 24) + 32)));
    }

    // 0x1001c2350
    void OSRenderCore_RenderThread_RSeven::UpdateFog() {
        EffectManager* this_01 = ((RT7Core*)field_8.operator->())->GetEffectManager();
        float local_20 = 0.0;
        float local_1c = 0.0;
        long lVar1 = *(long*)((long)field_0 - 24);
        jag::graphics::FogEffect::CalculateFogNearFarPlane(
            local_20, local_1c, *(float*)(field_32 + lVar1 + 52),
            1.0 / *(float*)(field_32 + lVar1 + 48) + *(float*)(field_32 + lVar1 + 52), 8192.0);
        auto this_02 = this_01->GetEffect<jag::graphics::SunlightDirectLighting>(57);
        if (*(float*)(field_32 + *(long*)((long)field_0 - 24) + 48) == 0.0) {
            local_1c = 3.4028235e+38;
            local_20 = 3.4028235e+38;
        }
        this_02->SetFogColour(*((Vector4T<float>*)(field_32 + *(long*)((long)field_0 - 24) + 32)), 0, 0);
        this_02->SetFogDistance(eastl::make_pair<float&, float&>(local_20, local_1c), 0, 0);
        this_02->SetFogIntensity(*(float*)(field_32 + *(long*)((long)field_0 - 24) + 48));
        this_02->Update();
    }

    // 0x1001c3040
    MutationTracked<jag::graphics::EffectList>* MutationTracked<jag::graphics::EffectList>::GetMutable() {
        this[16] = (MutationTracked<jag::graphics::EffectList>)1;
        return this;
    }

    // 0x1001c3e90
    MutationTracked<jag::graphics::VolumetricScatteringParams>*
    MutationTracked<jag::graphics::VolumetricScatteringParams>::GetMutable() {
        this[80] = (MutationTracked<jag::graphics::VolumetricScatteringParams>)1;
        return this;
    }

    // 0x1001c3ee0
    MutationTracked<jag::graphics::SimpleScatteringParams>*
    MutationTracked<jag::graphics::SimpleScatteringParams>::GetMutable() {
        this[64] = (MutationTracked<jag::graphics::SimpleScatteringParams>)1;
        return this;
    }

    // 0x1001d4aa0
    MutationTracked<jag::graphics::EffectList>::MutationTracked<>() : jag::graphics::EffectList() {
        this[16] = (MutationTracked<jag::graphics::EffectList>)0;
    }

    // 0x1001d50f0
    MutationTracked<jag::graphics::SimpleScatteringParams>::MutationTracked<>() {
        *(uint64_t*)(this + 48) = 0;
        *(uint64_t*)(this + 56) = 0;
        *(uint64_t*)(this + 32) = 0;
        *(uint64_t*)(this + 40) = 0;
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        new (this) jag::graphics::SimpleScatteringParams();
        this[64] = (MutationTracked<jag::graphics::SimpleScatteringParams>)0;
    }

    // 0x1001d51a0
    MutationTracked<jag::graphics::VolumetricScatteringParams>::MutationTracked<>() {
        *(uint64_t*)(this + 64) = 0;
        *(uint64_t*)(this + 72) = 0;
        *(uint64_t*)(this + 48) = 0;
        *(uint64_t*)(this + 56) = 0;
        *(uint64_t*)(this + 32) = 0;
        *(uint64_t*)(this + 40) = 0;
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        new (this) jag::graphics::VolumetricScatteringParams();
        this[80] = (MutationTracked<jag::graphics::VolumetricScatteringParams>)0;
    }

    // 0x1001d9b40
    MutationTracked<jag::graphics::SimpleScatteringParams>*
    MutationTracked<jag::graphics::SimpleScatteringParams>::operator=(
        const MutationTracked<jag::graphics::SimpleScatteringParams>& mutationTracked) {
        *this = mutationTracked;
        this[64] = mutationTracked[64];
        return this;
    }

    // 0x1001e3950
    MutationTracked<jag::graphics::EffectList>::MutationTracked<jag::graphics::EffectList const&>(
        const jag::graphics::EffectList& effectList) {
        uint64_t uVar1 = *(uint64_t*)(effectList + 8);
        *(uint64_t*)this = *(uint64_t*)effectList;
        *(uint64_t*)(this + 8) = uVar1;
        this[16] = (MutationTracked<jag::graphics::EffectList>)0;
    }

    // 0x1001e3960
    MutationTracked<jag::graphics::VolumetricScatteringParams>::MutationTracked<
        jag::graphics::VolumetricScatteringParams&>(
        jag::graphics::VolumetricScatteringParams& volumetricScatteringParams) {
        uint64_t uVar1 = *(uint64_t*)((long)&volumetricScatteringParams[1].field_0 + 4);
        *(uint64_t*)(this + 64) = *(uint64_t*)&volumetricScatteringParams.field_64;
        *(uint64_t*)(this + 72) = uVar1;
        uVar1 = volumetricScatteringParams.field_0;
        uint64_t uVar2 = volumetricScatteringParams.field_8;
        uint64_t uVar3 = volumetricScatteringParams.field_16;
        uint64_t uVar4 = volumetricScatteringParams.field_24;
        uint64_t uVar5 = *(uint64_t*)volumetricScatteringParams.field_32;
        uint64_t uVar6 = *(uint64_t*)(volumetricScatteringParams.field_32 + 8);
        uint64_t uVar7 = *(uint64_t*)(volumetricScatteringParams.field_48 + 8);
        *(uint64_t*)(this + 48) = *(uint64_t*)volumetricScatteringParams.field_48;
        *(uint64_t*)(this + 56) = uVar7;
        *(uint64_t*)(this + 32) = uVar5;
        *(uint64_t*)(this + 40) = uVar6;
        *(uint64_t*)(this + 16) = uVar3;
        *(uint64_t*)(this + 24) = uVar4;
        *(uint64_t*)this = uVar1;
        *(uint64_t*)(this + 8) = uVar2;
        this[80] = (MutationTracked<jag::graphics::VolumetricScatteringParams>)0;
    }

} // namespace jag::oldscape
