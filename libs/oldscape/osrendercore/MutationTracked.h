// libs/oldscape/osrendercore/MutationTracked.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape {
    template <
        typename...> // 3 instantiations, e.g. <jag::graphics::EffectList>, <jag::graphics::SimpleScatteringParams>, <jag::graphics::VolumetricScatteringParams>
    class MutationTracked {
    public:
        IsDirty() const;
        void ResetDirty();
        ResetDirty();
        MutationTracked<jag::graphics::EffectList const&>(jag::graphics::EffectList const&);
        MutationTracked<jag::graphics::VolumetricScatteringParams&>(jag::graphics::VolumetricScatteringParams&);
        MutationTracked<jag::graphics::VolumetricScatteringParams>*
        operator=(MutationTracked<jag::graphics::VolumetricScatteringParams>&&);
        MutationTracked<jag::graphics::EffectList>* GetMutable();
        MutationTracked<jag::graphics::VolumetricScatteringParams>* GetMutable();
        MutationTracked<jag::graphics::SimpleScatteringParams>* GetMutable();
        MutationTracked<>();
        MutationTracked<jag::graphics::SimpleScatteringParams>*
        operator=(MutationTracked<jag::graphics::SimpleScatteringParams> const&);
    };

    // 0x1001c21e0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MutationTracked<jag::graphics::EffectList>::IsDirty() const
    /* jag::graphics::ModularParticleEmitter::IsEmitting() const */

    undefined1 jag::graphics::ModularParticleEmitter::IsEmitting() {
        return field_12[4];
    }

    // 0x1001c21f0, 16 bytes, inline, placed by class name and debug map
    // MutationTracked<jag::graphics::EffectList>::ResetDirty()
    void MutationTracked<jag::graphics::EffectList>::ResetDirty() {
        this[16] = (MutationTracked<jag::graphics::EffectList>)0;
    }

    // 0x1001c2200, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MutationTracked<jag::graphics::SimpleScatteringParams>::IsDirty() const
    /* game::MSIType::GetResize() const */

    bool game::MSIType::GetResize() {
        return m_resize;
    }

    // 0x1001c2210, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MutationTracked<jag::graphics::SimpleScatteringParams>::ResetDirty()
    /* eastl::Internal::optional_storage<jag::math::Matrix44T<float>, true>::optional_storage() */

    void eastl::Internal::optional_storage<jag::math::Matrix44T<float>, true>::optional_storage(
        optional_storage<jag::math::Matrix44T<float>, true>* this) {
        this[64] = (optional_storage<jag::math::Matrix44T<float>, true>)0;
    }

    // 0x1001c2220, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MutationTracked<jag::graphics::VolumetricScatteringParams>::IsDirty() const
    /* game::LookatOrientation::Ready() const */

    undefined1 game::LookatOrientation::Ready() {
        return field_80;
    }

    // 0x1001c2230, 16 bytes, inline, placed by class name and debug map
    // MutationTracked<jag::graphics::VolumetricScatteringParams>::ResetDirty()
    void MutationTracked<jag::graphics::VolumetricScatteringParams>::ResetDirty() {
        this[80] = (MutationTracked<jag::graphics::VolumetricScatteringParams>)0;
    }

    // 0x1001c2240, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MutationTracked<jag::graphics::EffectList>::MutationTracked<jag::graphics::EffectList const&>(jag::graphics::EffectList const&): jumps straight to the base-object constructor

    // 0x1001c2270, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MutationTracked<jag::graphics::VolumetricScatteringParams>::MutationTracked<jag::graphics::VolumetricScatteringParams&>(jag::graphics::VolumetricScatteringParams&): jumps straight to the base-object constructor

    // 0x1001c2280, 48 bytes, inline, placed by class name and debug map
    // MutationTracked<jag::graphics::VolumetricScatteringParams>::operator=(MutationTracked<jag::graphics::VolumetricScatteringParams>&&)
    /* MutationTracked<jag::graphics::VolumetricScatteringParams>::TEMPNAMEPLACEHOLDERVALUE(MutationTracked<jag::graphics::VolumetricScatteringParams>
   const&) */

    MutationTracked<jag::graphics::VolumetricScatteringParams>*
    MutationTracked<jag::graphics::VolumetricScatteringParams>::operator=(MutationTracked* param_1) {
        jag::graphics::VolumetricScatteringParams::operator=((VolumetricScatteringParams*)this,
                                                             (VolumetricScatteringParams*)param_1);
        *(MutationTracked*)(this + 80) = param_1[80];
        return this;
    }

    // 0x1001c22b0, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::UpdateHorizonEffects()
    void OSRenderCore_RenderThread_RSeven::UpdateHorizonEffects() {
        UpdateSkybox(this);
        UpdateFog(this);
    }

    // 0x1001c22d0, 128 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::UpdateSkybox()
    void OSRenderCore_RenderThread_RSeven::UpdateSkybox() {
        int iVar1;
        RT7Core* this_00;
        SkyBox* this_01;
        shared_ptr<RSevenDebugPresetProvider> local_28[16];

        this_00 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)&field_8);
        iVar1 = this_00->GetSkyBoxManager();
        local_28->RegisterSkyBox(iVar1);
        this_01 = (SkyBox*)shared_ptr<jag::graphics::SkyBox>::operator->((shared_ptr<jag::graphics::SkyBox>*)local_28);
        this_01->SetClearColour((Vector4T*)(field_32 + *(long*)(field_0 + -24) + 32));
        local_28->~shared_ptr();
    }

    // 0x1001c2350, 256 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::UpdateFog()
    void OSRenderCore_RenderThread_RSeven::UpdateFog() {
        RT7Core* this_00;
        EffectManager* pEVar1;
        SunlightDirectLighting* this_01;
        undefined8 local_28;
        float local_20;
        float local_1c;

        this_00 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)&field_8);
        pEVar1 = (EffectManager*)this_00->GetEffectManager();
        local_20 = 0.0;
        local_1c = 0.0;
        jag::graphics::FogEffect::CalculateFogNearFarPlane(&local_20, &local_1c,
                                                           *(float*)(field_32 + *(long*)(field_0 + -24) + 52),
                                                           1.0 / *(float*)(field_32 + *(long*)(field_0 + -24) + 48) +
                                                               *(float*)(field_32 + *(long*)(field_0 + -24) + 52),
                                                           8192.0);
        this_01 = jag::graphics::EffectManager::GetEffect<jag::graphics::SunlightDirectLighting>(pEVar1, 57);
        if (*(float*)(field_32 + *(long*)(field_0 + -24) + 48) == 0.0) {
            local_1c = 3.4028235e+38;
            local_20 = 3.4028235e+38;
        }
        jag::graphics::FogEffect::SetFogColour((Vector4T*)this_01, (longlong)(field_32 + *(long*)(field_0 + -24) + 32),
                                               0);
        local_28 = eastl::make_pair<float&, float&>(&local_20, &local_1c);
        this_01->SetFogDistance((pair*)&local_28, 0, 0);
        this_01->SetFogIntensity(*(float*)(field_32 + *(long*)(field_0 + -24) + 48));
        this_01->Update();
    }

    // 0x1001c3040, 16 bytes, inline, placed by class name
    // MutationTracked<jag::graphics::EffectList>::GetMutable()
    MutationTracked<jag::graphics::EffectList>* MutationTracked<jag::graphics::EffectList>::GetMutable() {
        this[16] = (MutationTracked<jag::graphics::EffectList>)1;
        return this;
    }

    // 0x1001c3e90, 16 bytes, inline, placed by class name
    // MutationTracked<jag::graphics::VolumetricScatteringParams>::GetMutable()
    MutationTracked<jag::graphics::VolumetricScatteringParams>*
    MutationTracked<jag::graphics::VolumetricScatteringParams>::GetMutable() {
        this[80] = (MutationTracked<jag::graphics::VolumetricScatteringParams>)1;
        return this;
    }

    // 0x1001c3ee0, 16 bytes, inline, placed by class name
    // MutationTracked<jag::graphics::SimpleScatteringParams>::GetMutable()
    MutationTracked<jag::graphics::SimpleScatteringParams>*
    MutationTracked<jag::graphics::SimpleScatteringParams>::GetMutable() {
        this[64] = (MutationTracked<jag::graphics::SimpleScatteringParams>)1;
        return this;
    }

    // 0x1001d4a30, 16 bytes, complete-object constructor, inline, placed by class name
    // MutationTracked<jag::graphics::EffectList>::MutationTracked<>(): jumps straight to the base-object constructor

    // 0x1001d4a60, 16 bytes, complete-object constructor, inline, placed by class name
    // MutationTracked<jag::graphics::SimpleScatteringParams>::MutationTracked<>(): jumps straight to the base-object constructor

    // 0x1001d4a70, 16 bytes, complete-object constructor, inline, placed by class name
    // MutationTracked<jag::graphics::VolumetricScatteringParams>::MutationTracked<>(): jumps straight to the base-object constructor

    // 0x1001d4aa0, 32 bytes, base-object constructor, inline, placed by class name
    // MutationTracked<jag::graphics::EffectList>::MutationTracked<>()
    void MutationTracked<jag::graphics::EffectList>::MutationTracked<>() {
        new (this) jag::graphics::EffectList();
        this[16] = (MutationTracked<jag::graphics::EffectList>)0;
    }

    // 0x1001d50f0, 48 bytes, base-object constructor, inline, placed by class name
    // MutationTracked<jag::graphics::SimpleScatteringParams>::MutationTracked<>()
    void MutationTracked<jag::graphics::SimpleScatteringParams>::MutationTracked<>() {
        *(undefined8*)(this + 48) = 0;
        *(undefined8*)(this + 56) = 0;
        *(undefined8*)(this + 32) = 0;
        *(undefined8*)(this + 40) = 0;
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        new (this) jag::graphics::SimpleScatteringParams();
        this[64] = (MutationTracked<jag::graphics::SimpleScatteringParams>)0;
    }

    // 0x1001d51a0, 48 bytes, base-object constructor, inline, placed by class name
    // MutationTracked<jag::graphics::VolumetricScatteringParams>::MutationTracked<>()
    void MutationTracked<jag::graphics::VolumetricScatteringParams>::MutationTracked<>() {
        *(undefined8*)(this + 64) = 0;
        *(undefined8*)(this + 72) = 0;
        *(undefined8*)(this + 48) = 0;
        *(undefined8*)(this + 56) = 0;
        *(undefined8*)(this + 32) = 0;
        *(undefined8*)(this + 40) = 0;
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        new (this) jag::graphics::VolumetricScatteringParams();
        this[80] = (MutationTracked<jag::graphics::VolumetricScatteringParams>)0;
    }

    // 0x1001d9b40, 48 bytes, inline, placed by class name
    // MutationTracked<jag::graphics::SimpleScatteringParams>::operator=(MutationTracked<jag::graphics::SimpleScatteringParams> const&)
    /* MutationTracked<jag::graphics::SimpleScatteringParams>::TEMPNAMEPLACEHOLDERVALUE(MutationTracked<jag::graphics::SimpleScatteringParams>
   const&) */

    MutationTracked<jag::graphics::SimpleScatteringParams>*
    MutationTracked<jag::graphics::SimpleScatteringParams>::operator=(MutationTracked* param_1) {
        jag::graphics::SimpleScatteringParams::operator=((SimpleScatteringParams*)this,
                                                         (SimpleScatteringParams*)param_1);
        *(MutationTracked*)(this + 64) = param_1[64];
        return this;
    }

    // 0x1001e3950, 16 bytes, base-object constructor, inline, placed by class name
    // MutationTracked<jag::graphics::EffectList>::MutationTracked<jag::graphics::EffectList const&>(jag::graphics::EffectList const&)
    void
    MutationTracked<jag::graphics::EffectList>::MutationTracked<jag::graphics::EffectList_const&>(EffectList* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        this[16] = (MutationTracked<jag::graphics::EffectList>)0;
    }

    // 0x1001e3960, 48 bytes, base-object constructor, inline, placed by class name
    // MutationTracked<jag::graphics::VolumetricScatteringParams>::MutationTracked<jag::graphics::VolumetricScatteringParams&>(jag::graphics::VolumetricScatteringParams&)
    void MutationTracked<jag::graphics::VolumetricScatteringParams>::MutationTracked<
        jag::graphics::VolumetricScatteringParams&>(VolumetricScatteringParams* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        uVar1 = *(undefined8*)((long)&param_1[1].field_0 + 4);
        *(undefined8*)(this + 64) = *(undefined8*)&param_1->field_64;
        *(undefined8*)(this + 72) = uVar1;
        uVar1 = param_1->field_0;
        uVar2 = param_1->field_8;
        uVar3 = param_1->field_16;
        uVar4 = param_1->field_24;
        uVar5 = *(undefined8*)param_1->field_32;
        uVar6 = *(undefined8*)(param_1->field_32 + 8);
        uVar7 = *(undefined8*)(param_1->field_48 + 8);
        *(undefined8*)(this + 48) = *(undefined8*)param_1->field_48;
        *(undefined8*)(this + 56) = uVar7;
        *(undefined8*)(this + 32) = uVar5;
        *(undefined8*)(this + 40) = uVar6;
        *(undefined8*)(this + 16) = uVar3;
        *(undefined8*)(this + 24) = uVar4;
        *(undefined8*)this = uVar1;
        *(undefined8*)(this + 8) = uVar2;
        this[80] = (MutationTracked<jag::graphics::VolumetricScatteringParams>)0;
    }

} // namespace jag::oldscape
