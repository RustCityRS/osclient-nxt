// libs/graphics/runetek7/effects/water/WaterNormalMapsShaderEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class WaterNormalMapsShaderEffect {
    public:
        class NormalMapSamplingParams;
        class NormalMapTexCoordTransformParams;
        class SamplingConsts;
        class TexCoordTransformConsts;
        // virtual methods in vtable order
        virtual ~WaterNormalMapsShaderEffect();
        virtual void Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void SetUniforms(render::ShaderProgram const&) const;
        void SetNormalMapUniforms(NormalMapTexCoordTransformParams const&, NormalMapSamplingParams const&,
                                  render::ShaderProgram const&, ShaderVariable, ShaderVariable, ShaderVariable,
                                  ShaderVariable, ShaderVariable) const;
        bool QualitySettingNormalMapEnabled(unsigned long);
        bool QualitySettingNormalMapMacroEnabled(unsigned long);
        void SetParameters(WaterParameters const&, std::array<int, 3ul> const&);
        WaterNormalMapsShaderEffect(RT7Core&, int, int);

        // data members, from how the methods use this: 904 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[680];
        undefined4 field_704; // offset 704
        char _unknown_708[156];
        int field_864;        // offset 864
        int field_868;        // offset 868
        undefined8 field_872; // offset 872
        undefined4 field_880; // offset 880
        char _unknown_884[20];
    };

    class WaterNormalMapsShaderEffect::NormalMapSamplingParams {
    public:
        void Set(WaterNormalMapParams const&, bool);
        NormalMapSamplingParams();

        // data members, from how the methods use this: 16 bytes
        undefined4 field_0; // offset 0
        undefined4 field_4; // offset 4
        undefined8 field_8; // offset 8
    };

    class WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams {
    public:
        void Set(WaterNormalMapParams const&);
        void GetUVRotationMatrix() const;
        void GetFlowRotationMatrix() const;
        void SetUVRotation(math::Matrix22T<float> const&);
        void SetFlowRotation(math::Matrix22T<float> const&);
        UnpackMatrix22(std::array<math::Vector4T<float>, 2ul> const&) const;
        void PackMatrix22(std::array<math::Vector4T<float>, 2ul>&, math::Matrix22T<float> const&) const;
        NormalMapTexCoordTransformParams();

        // data members, from how the methods use this: 88 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[4];
        undefined8 field_8; // offset 8
        char _unknown_16[72];
    };

    class WaterNormalMapsShaderEffect::SamplingConsts {
    public:
        SamplingConsts();

        // data members, from how the methods use this: 112 bytes
        char _unknown_0[96];
        undefined8 field_96;  // offset 96
        undefined8 field_104; // offset 104
    };

    class WaterNormalMapsShaderEffect::TexCoordTransformConsts {
    public:
        TexCoordTransformConsts();

        // data members, from how the methods use this: 296 bytes
        char _unknown_0[296];
    };

    // 0x1009220f0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // WaterNormalMapsShaderEffect::~WaterNormalMapsShaderEffect(): jumps straight to the base-object destructor

    // 0x100922100, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // WaterNormalMapsShaderEffect::~WaterNormalMapsShaderEffect()
    void WaterNormalMapsShaderEffect::~WaterNormalMapsShaderEffect() {
        ~WaterNormalMapsShaderEffect(this);
        operator_delete(this);
    }

    // 0x100922720, 224 bytes, inline, placed by debug map only (low confidence)
    // SkyBox_DE* DrawableElementPool<SkyBox_DE>::Create<>()
    SkyBox_DE* DrawableElementPool<SkyBox_DE>::Create<>() {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        SkyBox_DE* this_00;
        undefined8 uVar4;

        GetDrawableElementPool();
        iVar1 = (&GetDrawableElementPool()::pool)->GetValue();
        iVar2 = (&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            this_00 = FastPool<SkyBox_DE, int>::Create<>((FastPool<SkyBox_DE, int>*)&GetDrawableElementPool()::pool);
        } else {
            uVar4 = logger::default_logger();
            uVar3 = (&GetDrawableElementPool()::pool)->GetValue();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/renderer/DrawableElement.h",
                                142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            this_00 = operator_new(128);
            this_00->field_0 = (undefined**)0;
            *(undefined8*)&this_00->field_8 = 0;
            *(undefined8*)&this_00->field_16 = 0;
            *(undefined8*)&this_00->field_24 = 0;
            *(undefined8*)&this_00->field_32 = 0;
            *(undefined8*)&this_00->field_40 = 0;
            *(undefined8*)&this_00->field_48 = 0;
            *(undefined8*)&this_00->field_56 = 0;
            *(undefined8*)&this_00->field_64 = 0;
            *(undefined8*)&this_00->field_72 = 0;
            *(undefined8*)&this_00->field_80 = 0;
            *(undefined8*)&this_00->field_88 = 0;
            *(undefined8*)&this_00->field_96 = 0;
            this_00->field_104 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)0;
            *(undefined8*)&this_00->field_112 = 0;
            *(undefined8*)&this_00->field_120 = 0;
            SkyBox_DE::SkyBox_DE(this_00);
        }
        return this_00;
    }

    // 0x100922910, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DrawableElementPool<SkyBox_DE>::DrawableElementPool()
    void DrawableElementPool<SkyBox_DE>::DrawableElementPool() {
        new (this) DrawableElement();
        *(undefined**)this = PTR_vtable_100ee8800 + 16;
    }

    // 0x100922bd0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SkyBoxEntry::SkyBoxEntry(int, shared_ptr<SkyBox> const&)
    void SkyBoxEntry::SkyBoxEntry(int param_1, shared_ptr* param_2) {
        SystemTimer* this_00;

        field_0 = param_1;
        this_00 = (SystemTimer*)&field_8;
        new (this_00) shared_ptr<oldscape::dash3d::Decor>(param_2);
        field_24 = SystemTimer::GetTimeMS<std::chrono::steady_clock>(this_00);
    }

    // 0x100922cc0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ViewportMapEntry::ViewportMapEntry(int, shared_ptr<render::Texture2D> const&)
    void ViewportMapEntry::ViewportMapEntry(int param_1, shared_ptr* param_2) {
        SystemTimer* this_00;

        field_0 = param_1;
        this_00 = (SystemTimer*)&field_8;
        new (this_00) shared_ptr<oldscape::dash3d::Decor>(param_2);
        field_24 = SystemTimer::GetTimeMS<std::chrono::steady_clock>(this_00);
    }

    // 0x100923840, 80 bytes, base-object destructor, inline, placed by class name and debug map
    // WaterNormalMapsShaderEffect::~WaterNormalMapsShaderEffect()
    void WaterNormalMapsShaderEffect::~WaterNormalMapsShaderEffect() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__WaterNormalMapsShaderEffect_100f19a88;
        (&field_888)->~array();
        (&field_792)->~TypedShaderConstBuffer();
        (&field_720)->~TypedShaderConstBuffer();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x10093caf0, 16 bytes, complete-object constructor, inline, placed by class name
    // WaterNormalMapsShaderEffect::WaterNormalMapsShaderEffect(RT7Core&, int, int): jumps straight to the base-object constructor

    // 0x10093cb10, 208 bytes, base-object constructor, inline, placed by class name
    // WaterNormalMapsShaderEffect::WaterNormalMapsShaderEffect(RT7Core&, int, int)
    void WaterNormalMapsShaderEffect::WaterNormalMapsShaderEffect(RT7Core* param_1, int param_2, int param_3) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__WaterNormalMapsShaderEffect_100f19a88;
        new (&field_32) TexCoordTransformConsts();
        new (&field_608) SamplingConsts();
        new (&field_720) render::TypedShaderConstBuffer<DirLightCsmManager::ShaderConsts>();
        new (&field_792) render::TypedShaderConstBuffer<DirLightCsmManager::ShaderConsts>();
        field_864 = param_2;
        field_868 = param_3;
        field_872 = 18446744073709551615;
        field_880 = 4294967295;
        std::array<shared_ptr<render::Texture>, 3ul>::array();
    }

    // 0x10093cbe0, 16 bytes, complete-object constructor, inline, placed by class name
    // WaterNormalMapsShaderEffect::TexCoordTransformConsts::TexCoordTransformConsts(): jumps straight to the base-object constructor

    // 0x10093cbf0, 16 bytes, complete-object constructor, inline, placed by class name
    // WaterNormalMapsShaderEffect::SamplingConsts::SamplingConsts(): jumps straight to the base-object constructor

    // 0x10093cc00, 48 bytes, base-object constructor, inline, placed by class name
    // WaterNormalMapsShaderEffect::TexCoordTransformConsts::TexCoordTransformConsts()
    void WaterNormalMapsShaderEffect::TexCoordTransformConsts::TexCoordTransformConsts() {
        new (this) std::array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>();
        new (&field_288) std::array<WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams, 3ul>();
    }

    // 0x10093cc70, 16 bytes, complete-object constructor, inline, placed by class name
    // WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::NormalMapTexCoordTransformParams(): jumps straight to the base-object constructor

    // 0x10093cc80, 176 bytes, base-object constructor, inline, placed by class name
    // WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::NormalMapTexCoordTransformParams()
    void WaterNormalMapsShaderEffect::NormalMapTexCoordTransformParams::NormalMapTexCoordTransformParams() {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(PTR_ONE_100ee6700 + 8);
        *(undefined8*)this = *(undefined8*)PTR_ONE_100ee6700;
        field_8 = uVar1;
        new (&field_16, 1.0, 1.0, 0.0, 0.0) ImVec4();
        new (&field_32, 1.0, 0.0, 0.0, 0.0) ImVec4();
        new (&field_48, 0.0, 1.0, 0.0, 0.0) ImVec4();
        new (&field_64, 1.0, 0.0, 0.0, 0.0) ImVec4();
        new (&field_80, 0.0, 1.0, 0.0, 0.0) ImVec4();
    }

    // 0x10093cd30, 48 bytes, base-object constructor, inline, placed by class name
    // WaterNormalMapsShaderEffect::SamplingConsts::SamplingConsts()
    void WaterNormalMapsShaderEffect::SamplingConsts::SamplingConsts() {
        undefined8 uVar1;

        new (this) std::array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>();
        new (&field_48) std::array<WaterNormalMapsShaderEffect::NormalMapSamplingParams, 3ul>();
        uVar1 = *(undefined8*)(PTR_ZERO_100ee6708 + 8);
        field_96 = *(undefined8*)PTR_ZERO_100ee6708;
        field_104 = uVar1;
    }

    // 0x10093cda0, 16 bytes, complete-object constructor, inline, placed by class name
    // WaterNormalMapsShaderEffect::NormalMapSamplingParams::NormalMapSamplingParams(): jumps straight to the base-object constructor

    // 0x10093cdb0, 32 bytes, base-object constructor, inline, placed by class name
    // WaterNormalMapsShaderEffect::NormalMapSamplingParams::NormalMapSamplingParams()
    void WaterNormalMapsShaderEffect::NormalMapSamplingParams::NormalMapSamplingParams() {
        undefined8 uVar1;
        undefined8 uVar2;

        uVar1 = *(undefined8*)PTR_ZERO_100ee6708;
        uVar2 = *(undefined8*)(PTR_ZERO_100ee6708 + 8);
        field_0 = (int)uVar1;
        field_4 = (int)((ulong)uVar1 >> 32);
        field_8 = uVar2;
    }

} // namespace jag::graphics

// 0x1009221b0, 16 bytes, placed by debug map only (low confidence)
// acos(float)
void acos(float param_1) {
    _acosf();
}

// 0x1009221c0, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x1009221d0, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x100923900, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

namespace jag::render {
    // 0x100922290, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TypedShaderConstBuffer<graphics::PointLightShadows::ShaderConsts>::TypedShaderConstBuffer()
    /* TypedShaderConstBuffer<graphics::DirLightCsmManager::ShaderConsts>::TypedShaderConstBuffer()
    */

    void TypedShaderConstBuffer<graphics::DirLightCsmManager::ShaderConsts>::TypedShaderConstBuffer() {
        new (this) HistoryCachedDynamicBuffer<ShaderConstBuffer>();
    }

    // 0x1009222a0, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // TypedShaderConstBuffer<graphics::PointLightShadows::ShaderConsts>::~TypedShaderConstBuffer()
    /* TypedShaderConstBuffer<math::Matrix44T<float> >::~TypedShaderConstBuffer() */

    void TypedShaderConstBuffer<math::Matrix44T<float>>::~TypedShaderConstBuffer() {
        ~HistoryCachedDynamicBuffer();
    }

} // namespace jag::render
