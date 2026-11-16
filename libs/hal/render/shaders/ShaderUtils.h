// libs/hal/render/shaders/ShaderUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class ShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~ShaderSourceStream();
        ShaderSourceStream(ShaderType, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision,
                           ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, unsigned int);
        void InitShaderPrecisionProfile(ShaderPrecisionProfile&, ShaderType, RenderDeviceCaps const&);
        ShaderSourceStream(std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&, ShaderType,
                           ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision,
                           ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, unsigned int);

        // data members, from how the methods use this: 136 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined* field_16; // offset 16
        char _unknown_24[104];
        undefined* field_128; // offset 128
    };

    // 0x1009b9690, 176 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ComputeShaderSourceStream::ComputeShaderSourceStream(ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, unsigned int)
    void ComputeShaderSourceStream::ComputeShaderSourceStream(undefined4 param_2, undefined4 param_3,
                                                              undefined4 param_4, undefined4 param_5,
                                                              undefined4 param_6, undefined4 param_7,
                                                              undefined4 param_8) {
        undefined* puVar1;

        new (&field_128) std::ios();
        new (this) ShaderSourceStream(PTR_VTT_100ee6fa0 + 8, 37305, param_2, param_3, param_4, param_5, param_6,
                                      param_7, param_8);
        puVar1 = PTR_vtable_100ee86a0;
        field_0 = PTR_vtable_100ee86a0 + 24;
        field_128 = puVar1 + 104;
        field_16 = puVar1 + 64;
    }

    // 0x1009b9740, 48 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ComputeShaderSourceStream::~ComputeShaderSourceStream()
    void ComputeShaderSourceStream::~ComputeShaderSourceStream() {
        ~ComputeShaderSourceStream(this);
        (&field_128)->~ios();
    }

    // 0x1009b9ca0, 48 bytes, inline, placed by debug map only (low confidence)
    // Viewport::IsValid() const
    bool Viewport::IsValid() {
        if (((field_0 < 0) || (field_4 < 0)) || (field_8 < 0)) {
            return false;
        }
        return -1 < field_12;
    }

    // 0x1009b9ff0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TextureSamplerStateTracker::TextureSamplerStateTracker(Texture&)
    void TextureSamplerStateTracker::TextureSamplerStateTracker(Texture* param_1) {
        new (this) TextureState(param_1);
        field_0 = PTR_vtable_100ee86a8 + 16;
        field_16 = param_1->GetDefaultMaterial();
    }

    // 0x1009ba050, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // TextureSamplerStateTracker::~TextureSamplerStateTracker()
    void TextureSamplerStateTracker::~TextureSamplerStateTracker() {
        ~TextureSamplerStateTracker(this);
        operator_delete(this);
    }

    // 0x1009ba070, 80 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // TextureSamplerStateTracker::~TextureSamplerStateTracker()
    void TextureSamplerStateTracker::~TextureSamplerStateTracker() {
        field_0 = PTR_vtable_100ee86a8 + 16;
        (*(code*)field_8->field_0[3])(field_8, field_16, 0);
        ~AutoSingleton();
    }

    // 0x1009bb020, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // ComputeShaderSourceStream::~ComputeShaderSourceStream()
    void ComputeShaderSourceStream::~ComputeShaderSourceStream() {
        ~ComputeShaderSourceStream(this);
        operator_delete(this);
    }

    // 0x100bde5d0, 176 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // VertexShaderSourceStream::VertexShaderSourceStream(ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, unsigned int)
    void VertexShaderSourceStream::VertexShaderSourceStream(undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                                            undefined4 param_5, undefined4 param_6, undefined4 param_7,
                                                            undefined4 param_8) {
        undefined* puVar1;

        new (&field_128) std::ios();
        new (this) ShaderSourceStream(PTR_VTT_100ee6f98 + 8, 35633, param_2, param_3, param_4, param_5, param_6,
                                      param_7, param_8);
        puVar1 = PTR_vtable_100ee8698;
        field_0 = PTR_vtable_100ee8698 + 24;
        field_128 = puVar1 + 104;
        field_16 = puVar1 + 64;
    }

    // 0x100bde680, 176 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PixelShaderSourceStream::PixelShaderSourceStream(ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, unsigned int)
    void PixelShaderSourceStream::PixelShaderSourceStream(undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                                          undefined4 param_5, undefined4 param_6, undefined4 param_7,
                                                          undefined4 param_8) {
        undefined* puVar1;

        new (&field_128) std::ios();
        new (this) ShaderSourceStream(PTR_VTT_100ee6f90 + 8, 35632, param_2, param_3, param_4, param_5, param_6,
                                      param_7, param_8);
        puVar1 = PTR_vtable_100ee8690;
        field_0 = PTR_vtable_100ee8690 + 24;
        field_128 = puVar1 + 104;
        field_16 = puVar1 + 64;
    }

} // namespace jag::render

namespace jag {
    // 0x1009bd580, 64 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<bool>(unsigned long&, bool const&)
    void hash_combine<bool>(ulong* param_1, bool* param_2) {
        ulong uVar1;
        long lVar2;

        lVar2 = std::hash<bool>::operator()((hash<bool>*)(ulong)*param_2, SUB81(param_2, 0));
        uVar1 = *param_1;
        *param_1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

    // 0x1009bd5c0, 64 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<int>(unsigned long&, int const&)
    void hash_combine<int>(ulong* param_1, int* param_2) {
        ulong uVar1;
        long lVar2;

        lVar2 = std::hash<int>::operator()((hash<int>*)(ulong)(uint)*param_2, (int)param_2);
        uVar1 = *param_1;
        *param_1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

    // 0x1009bd840, 32 bytes, inline, placed by debug map only (low confidence)
    // render::Texture3D* placement_new<render::Texture3D, char const (&) [14]>(void*, char const (&) [14])
    /* render::Texture3D* placement_new<render::Texture3D, char const (&) [32]>(void*,
   char const (&) [32]) */

    Texture3D* placement_new<render::Texture3D, char const (&)[32]>(void* param_1, char* param_2) {
        render::Texture3D::Texture3D(param_1, param_2);
        return param_1;
    }

    // 0x1009bd860, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::Texture3D>* placement_new<ref_counter_shared<render::Texture3D>, int, render::Texture3D*&>(void*, int&&, render::Texture3D*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<render::Texture3D>, int, render::Texture3D*&>(void* param_1, int* param_2,
                                                                                   Texture3D** param_3) {
        ref_counter_shared<render::Texture3D>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1009bd880, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::Texture3D>::ref_counter_shared(unsigned long, render::Texture3D*): jumps straight to the base-object constructor

    // 0x1009bd890, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::Texture3D>::ref_counter_shared(unsigned long, render::Texture3D*)
    void ref_counter_shared<render::Texture3D>::ref_counter_shared(ulong param_1, Texture3D* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee74f0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Texture3D**)(this + 24) = param_2;
    }

    // 0x1009bd8d0, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::Texture3D>::DeleteData()
    /* ref_counter_shared<render::Texture2D>::DeleteData() */

    void ref_counter_shared<render::Texture2D>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 512;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1009bd930, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::Texture2D>* placement_new<ref_counter_shared<render::Texture2D>, int, render::Texture2D*&>(void*, int&&, render::Texture2D*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<render::Texture2D>, int, render::Texture2D*&>(void* param_1, int* param_2,
                                                                                   Texture2D** param_3) {
        ref_counter_shared<render::Texture2D>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1009bd950, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::Texture2D>::ref_counter_shared(unsigned long, render::Texture2D*): jumps straight to the base-object constructor

    // 0x1009bd960, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::Texture2D>::ref_counter_shared(unsigned long, render::Texture2D*)
    void ref_counter_shared<render::Texture2D>::ref_counter_shared(ulong param_1, Texture2D* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee74e8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Texture2D**)(this + 24) = param_2;
    }

} // namespace jag

namespace jag::postprocess {
    // 0x1009bd180, 144 bytes, inline, placed by debug map only (low confidence)
    // ColourGradingBloomEffectConfig::operator==(ColourGradingBloomEffectConfig const&) const
    /* ColourGradingBloomEffectConfig::TEMPNAMEPLACEHOLDERVALUE(ColourGradingBloomEffectConfig
   const&) const */

    bool ColourGradingBloomEffectConfig::operator==(ColourGradingBloomEffectConfig* param_1) {
        int iVar1;
        int iVar2;

        if ((((field_260 == param_1->field_260) && (field_312 == param_1->field_312)) &&
             (field_12 == param_1->field_12)) &&
            ((field_316 == param_1->field_316 && (field_16[0] == param_1->field_16[0])))) {
            iVar1 = field_16->CountColourMappings();
            iVar2 = param_1->field_16->CountColourMappings();
            if (iVar1 == iVar2) {
                return field_16[1] == param_1->field_16[1];
            }
        }
        return false;
    }

    // 0x1009bd330, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ColourGradingBloomEffectConfig::ColourGradingBloomEffectConfig(ColourGradingBloomEffectConfig const&): jumps straight to the base-object constructor

    // 0x1009bd340, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ColourGradingBloomEffectConfig::ColourGradingBloomEffectConfig(ColourGradingBloomEffectConfig const&)
    void ColourGradingBloomEffectConfig::ColourGradingBloomEffectConfig(ColourGradingBloomEffectConfig* param_1) {
        undefined4 uVar1;
        uint uVar2;

        uVar1 = *(undefined4*)&param_1->field_0;
        uVar2 = param_1->field_4;
        *(undefined8*)((long)&field_4 + 1) = *(undefined8*)((long)&param_1->field_4 + 1);
        *(undefined4*)&field_0 = uVar1;
        field_4 = uVar2;
        new (field_16, (ColourCorrectionConfig*)param_1->field_16) ColourCorrectionConfig();
        _memcpy(&field_168, &param_1->field_168, 152);
    }

    // 0x1009bd4e0, 160 bytes, inline, placed by debug map only (low confidence)
    // ColourGradingBloomEffectConfig::hash() const
    ulong ColourGradingBloomEffectConfig::hash() {
        ulong local_30;
        int local_24;

        local_30 = 0;
        hash_combine<bool>(&local_30, &field_260);
        hash_combine<bool>(&local_30, &field_312);
        hash_combine<bool>(&local_30, &field_12);
        local_24 = field_316;
        hash_combine<int>(&local_30, &local_24);
        hash_combine<bool>(&local_30, (bool*)field_16);
        local_24 = field_16->CountColourMappings();
        hash_combine<int>(&local_30, &local_24);
        hash_combine<bool>(&local_30, (bool*)(field_16 + 1));
        return local_30;
    }

} // namespace jag::postprocess
