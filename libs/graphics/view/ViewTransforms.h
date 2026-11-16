// libs/graphics/view/ViewTransforms.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag {
    class ViewTransforms {
    public:
        GetCameraPos() const;
        GetViewMatrix() const;
        GetProjMatrix() const;
        ViewTransforms();
        ViewTransforms* operator=(ViewTransforms const&);
        ViewTransforms* operator=(ViewTransforms&&);
        GetViewVector() const;
        GetViewProjMatrix() const;
        ViewTransforms(Camera const&);
        void SetProjMatrix(math::Matrix44T<float> const&);
        ViewTransforms(math::Matrix44T<float> const&, math::Matrix44T<float> const&);
        void SetViewProjMatrix(math::Matrix44T<float> const&);
        void Set(Camera const&);
        void Set(math::Matrix44T<float> const&, math::Matrix44T<float> const&);
        void SetToIdentity();
        void GetNearFarPlaneDistances(float&, float&) const;
        void hash() const;

        // data members, from how the methods use this: 152 bytes
        float field_0; // offset 0
        float field_4; // offset 4
        float field_8; // offset 8
        char _unknown_12[68];
        undefined1 m_projMatrix; // offset 80
        char _unknown_81[71];
    };

    class ViewTransformsShaderConsts {
    public:
        ViewTransformsShaderConsts();
        ViewTransformsShaderConsts* operator=(ViewTransformsShaderConsts const&);
        ViewTransformsShaderConsts* operator=(ViewTransformsShaderConsts&&);

        // data members, from how the methods use this: 152 bytes
        undefined4 field_0; // offset 0
        undefined4 field_4; // offset 4
        undefined4 field_8; // offset 8
        char _unknown_12[140];
    };

    // 0x1001c4740, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ViewTransforms::ViewTransforms(): jumps straight to the base-object constructor

    // 0x1001d07b0, 32 bytes, inline, placed by class name
    // ViewTransforms::operator=(ViewTransforms const&)
    /* ViewTransforms::TEMPNAMEPLACEHOLDERVALUE(ViewTransforms&&) */

    ViewTransforms* ViewTransforms::operator=(ViewTransforms* param_1) {
        ViewTransformsShaderConsts::operator=((ViewTransformsShaderConsts*)this, (ViewTransformsShaderConsts*)param_1);
        return this;
    }

    // 0x1001db150, 32 bytes, base-object constructor, inline, placed by class name
    // ViewTransforms::ViewTransforms()
    void ViewTransforms::ViewTransforms() {
        new (this) ViewTransformsShaderConsts();
        SetToIdentity(this);
    }

    // 0x1001df200, 128 bytes, inline, placed by class name
    // ViewTransforms::GetViewVector() const
    undefined8 ViewTransforms::GetViewVector() {
        float* pfVar1;
        undefined1* this_00;
        undefined8 uVar2;
        ColourHSL local_28;
        float local_18;
        float local_14;

        this_00 = &field_16;
        pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)this_00, 2);
        local_18 = *pfVar1;
        pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)this_00, 6);
        local_14 = *pfVar1;
        pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)this_00, 10);
        new (&local_28) math::ColourHSL(local_18, local_14, *pfVar1);
        uVar2._0_4_ = local_28.field_0;
        uVar2._4_4_ = local_28.field_4;
        return uVar2;
    }

    // 0x100462c00, 16 bytes, complete-object constructor, inline, placed by class name
    // ViewTransforms::ViewTransforms(Camera const&): jumps straight to the base-object constructor

    // 0x10046b6e0, 48 bytes, base-object constructor, inline, placed by class name
    // ViewTransforms::ViewTransforms(Camera const&)
    void ViewTransforms::ViewTransforms(Camera* param_1) {
        new (this) ViewTransformsShaderConsts();
        Set(this, param_1);
    }

    // 0x1007e0f20, 16 bytes, complete-object constructor, inline, placed by class name
    // ViewTransforms::ViewTransforms(math::Matrix44T<float> const&, math::Matrix44T<float> const&): jumps straight to the base-object constructor

    // 0x1007e8010, 64 bytes, base-object constructor, inline, placed by class name
    // ViewTransforms::ViewTransforms(math::Matrix44T<float> const&, math::Matrix44T<float> const&)
    void ViewTransforms::ViewTransforms(Matrix44T* param_1, Matrix44T* param_2) {
        new (this) ViewTransformsShaderConsts();
        Set(this, param_1, param_2);
    }

    // 0x1008b2420, 32 bytes, inline, placed by class name
    // ViewTransforms::SetViewProjMatrix(math::Matrix44T<float> const&)
    void ViewTransforms::SetViewProjMatrix(Matrix44T* param_1) {
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_144, param_1);
    }

} // namespace jag

namespace jag::oldscape {
    // 0x1001c48e0, 16 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_JavaStyle::SetDepthBufferEnabled(bool)
    void OSRenderCore_RenderThread_JavaStyle::SetDepthBufferEnabled(bool param_1) {
        SetupDepthStencils(this, param_1);
    }

} // namespace jag::oldscape
