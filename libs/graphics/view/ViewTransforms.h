// libs/graphics/view/ViewTransforms.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag {
    class ViewTransforms {
    public:
        void GetCameraPos() const;
        uint8_t* GetViewMatrix() const;
        uint8_t* GetProjMatrix() const;
        ViewTransforms();
        ViewTransforms* operator=(const ViewTransforms& viewTransforms);
        ViewTransforms* operator=(ViewTransforms&& viewTransforms);
        uint64_t GetViewVector() const;
        uint8_t* GetViewProjMatrix() const;
        ViewTransforms(const Camera& camera);
        void SetProjMatrix(const math::Matrix44T<float>& matrix44);
        ViewTransforms(const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442);
        void SetViewProjMatrix(const math::Matrix44T<float>& matrix44);
        void Set(const Camera& camera);
        void Set(const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442);
        void SetToIdentity();
        void GetNearFarPlaneDistances(float& arg1, float& arg2) const;
        void hash() const;

    private:
        float field_0;
        float field_4;
        float field_8;
        uint8_t _unknown_12[68];
        uint8_t m_projMatrix[1];
        uint8_t _unknown_81[71];
    };

    class ViewTransformsShaderConsts {
    public:
        ViewTransformsShaderConsts();
        ViewTransformsShaderConsts* operator=(const ViewTransformsShaderConsts& viewTransformsShaderConsts);
        ViewTransformsShaderConsts* operator=(ViewTransformsShaderConsts&& viewTransformsShaderConsts);

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint8_t _unknown_12[140];
    };

    // 0x1001d07b0
    ViewTransforms* ViewTransforms::operator=(const ViewTransforms& viewTransforms) {
        *this = viewTransforms;
        return this;
    }

    // 0x1001db150
    ViewTransforms::ViewTransforms() : ViewTransformsShaderConsts() {
        SetToIdentity();
    }

    // 0x1001df200
    uint64_t ViewTransforms::GetViewVector() const {
        uint64_t uVar2;

        uint8_t* this_00 = &field_16;
        float* pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)this_00, 2);
        float local_18 = *pfVar1;
        pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)this_00, 6);
        float local_14 = *pfVar1;
        pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)this_00, 10);
        ColourHSL local_28(local_18, local_14, *pfVar1);
        uVar2._0_4_ = local_28.field_0;
        uVar2._4_4_ = local_28.field_4;
        return uVar2;
    }

    // 0x10046b6e0
    ViewTransforms::ViewTransforms(const Camera& camera) : ViewTransformsShaderConsts() {
        Set(camera);
    }

    // 0x1007e8010
    ViewTransforms::ViewTransforms(const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442)
        : ViewTransformsShaderConsts() {
        Set(matrix441, matrix442);
    }

    // 0x1008b2420
    void ViewTransforms::SetViewProjMatrix(const math::Matrix44T<float>& matrix44) {
        field_144 = matrix44;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x1001c48e0
    void OSRenderCore_RenderThread_JavaStyle::SetDepthBufferEnabled(bool arg1) {
        SetupDepthStencils(arg1);
    }

} // namespace jag::oldscape
