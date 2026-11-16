// libs/hal/render/shaders/ShaderUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class ShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~ShaderSourceStream();
        ShaderSourceStream(ShaderType shaderType, ShaderVariablePrecision shaderVariablePrecision1,
                           ShaderVariablePrecision shaderVariablePrecision2,
                           ShaderVariablePrecision shaderVariablePrecision3,
                           ShaderVariablePrecision shaderVariablePrecision4,
                           ShaderVariablePrecision shaderVariablePrecision5,
                           ShaderVariablePrecision shaderVariablePrecision6, unsigned int arg8);
        void InitShaderPrecisionProfile(ShaderPrecisionProfile& shaderPrecisionProfile, ShaderType shaderType,
                                        const RenderDeviceCaps& renderDeviceCaps);
        ShaderSourceStream(const std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str,
                           ShaderType shaderType, ShaderVariablePrecision shaderVariablePrecision1,
                           ShaderVariablePrecision shaderVariablePrecision2,
                           ShaderVariablePrecision shaderVariablePrecision3,
                           ShaderVariablePrecision shaderVariablePrecision4,
                           ShaderVariablePrecision shaderVariablePrecision5,
                           ShaderVariablePrecision shaderVariablePrecision6, unsigned int arg9);

    private:
        uint8_t _unknown_8[8];
        void* field_16;
        uint8_t _unknown_24[104];
        uint8_t* field_128;
    };

    // 0x1009b9690
    ComputeShaderSourceStream::ComputeShaderSourceStream(ShaderVariablePrecision shaderVariablePrecision1,
                                                         ShaderVariablePrecision shaderVariablePrecision2,
                                                         ShaderVariablePrecision shaderVariablePrecision3,
                                                         ShaderVariablePrecision shaderVariablePrecision4,
                                                         ShaderVariablePrecision shaderVariablePrecision5,
                                                         ShaderVariablePrecision shaderVariablePrecision6,
                                                         unsigned int arg7)
        : ShaderSourceStream((int)PTR_VTT_100ee6fa0 + 8, 37305, shaderVariablePrecision1, shaderVariablePrecision2,
                             shaderVariablePrecision3, shaderVariablePrecision4, shaderVariablePrecision5,
                             shaderVariablePrecision6) {
        uint8_t* puVar1 = PTR_vtable_100ee86a0;
        field_128 = puVar1 + 104;
        field_16 = puVar1 + 64;
    }

    // 0x1009b9740
    ComputeShaderSourceStream::~ComputeShaderSourceStream() {
        ~ComputeShaderSourceStream(this, (void**)PTR_VTT_100ee6fa0);
        (&field_128)->~ios();
    }

    // 0x1009b9ca0
    bool Viewport::IsValid() const {
        if (((field_0 < 0) || (field_4 < 0)) || (field_8 < 0)) {
            return false;
        }
        return -1 < field_12;
    }

    // 0x1009b9ff0
    TextureSamplerStateTracker::TextureSamplerStateTracker(Texture& texture) : TextureState(texture) {
        field_16 = texture.GetDefaultMaterial();
    }

    // 0x1009ba070
    TextureSamplerStateTracker::~TextureSamplerStateTracker() {
        (*(void (*)(...))field_8->field_0[3])(field_8, field_16, 0);
    }

    // 0x100bde5d0
    VertexShaderSourceStream::VertexShaderSourceStream(ShaderVariablePrecision shaderVariablePrecision1,
                                                       ShaderVariablePrecision shaderVariablePrecision2,
                                                       ShaderVariablePrecision shaderVariablePrecision3,
                                                       ShaderVariablePrecision shaderVariablePrecision4,
                                                       ShaderVariablePrecision shaderVariablePrecision5,
                                                       ShaderVariablePrecision shaderVariablePrecision6,
                                                       unsigned int arg7)
        : ShaderSourceStream((int)PTR_VTT_100ee6f98 + 8, 35633, shaderVariablePrecision1, shaderVariablePrecision2,
                             shaderVariablePrecision3, shaderVariablePrecision4, shaderVariablePrecision5,
                             shaderVariablePrecision6) {
        uint8_t* puVar1 = PTR_vtable_100ee8698;
        field_128 = puVar1 + 104;
        field_16 = puVar1 + 64;
    }

    // 0x100bde680
    PixelShaderSourceStream::PixelShaderSourceStream(ShaderVariablePrecision shaderVariablePrecision1,
                                                     ShaderVariablePrecision shaderVariablePrecision2,
                                                     ShaderVariablePrecision shaderVariablePrecision3,
                                                     ShaderVariablePrecision shaderVariablePrecision4,
                                                     ShaderVariablePrecision shaderVariablePrecision5,
                                                     ShaderVariablePrecision shaderVariablePrecision6,
                                                     unsigned int arg7)
        : ShaderSourceStream((int)PTR_VTT_100ee6f90 + 8, 35632, shaderVariablePrecision1, shaderVariablePrecision2,
                             shaderVariablePrecision3, shaderVariablePrecision4, shaderVariablePrecision5,
                             shaderVariablePrecision6) {
        uint8_t* puVar1 = PTR_vtable_100ee8690;
        field_128 = puVar1 + 104;
        field_16 = puVar1 + 64;
    }

} // namespace jag::render

namespace jag {
    // 0x1009bd580
    void hash_combine<bool>(unsigned long& arg1, const bool& arg2) {
        long lVar2 = std::hash<bool>::operator()((hash<bool>*)(unsigned long)*arg2, (uint8_t)arg2);
        unsigned long uVar1 = arg1;
        arg1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

    // 0x1009bd5c0
    void hash_combine<int>(unsigned long& arg1, const int& arg2) {
        long lVar2 = std::hash<int>::operator()((hash<int>*)(unsigned long)(unsigned int)*arg2, (int)arg2);
        unsigned long uVar1 = arg1;
        arg1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

    // 0x1009bd840
    render::Texture3D* placement_new<render::Texture3D, char const (&)[14]>(void* arg1, char const (&arg2)[14]) {
        new (arg1) render::Texture3D(arg2);
        return arg1;
    }

    // 0x1009bd860
    ref_counter_shared<render::Texture3D>*
    placement_new<ref_counter_shared<render::Texture3D>, int, render::Texture3D*&>(void* arg1, int&& arg2,
                                                                                   render::Texture3D*& arg3) {
        new (arg1) ref_counter_shared<render::Texture3D>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1009bd890
    ref_counter_shared<render::Texture3D>::ref_counter_shared(unsigned long arg1, render::Texture3D* texture3D)
        : ref_counter_base() {}

    // 0x1009bd8d0
    void ref_counter_shared<render::Texture3D>::DeleteData() {
        long lVar1;
        ref_counter_shared<render::Texture2D> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<render::Texture2D> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 512;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1009bd930
    ref_counter_shared<render::Texture2D>*
    placement_new<ref_counter_shared<render::Texture2D>, int, render::Texture2D*&>(void* arg1, int&& arg2,
                                                                                   render::Texture2D*& arg3) {
        new (arg1) ref_counter_shared<render::Texture2D>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1009bd960
    ref_counter_shared<render::Texture2D>::ref_counter_shared(unsigned long arg1, render::Texture2D* texture2D)
        : ref_counter_base() {}

} // namespace jag

namespace jag::postprocess {
    // 0x1009bd180
    bool ColourGradingBloomEffectConfig::operator==(
        const ColourGradingBloomEffectConfig& colourGradingBloomEffectConfig) const {
        int iVar1;
        int iVar2;

        if ((((field_260 == colourGradingBloomEffectConfig.field_260) &&
              (field_312 == colourGradingBloomEffectConfig.field_312)) &&
             (field_12 == colourGradingBloomEffectConfig.field_12)) &&
            ((field_316 == colourGradingBloomEffectConfig.field_316 &&
              (field_16[0] == colourGradingBloomEffectConfig.field_16[0])))) {
            iVar1 = field_16->CountColourMappings();
            iVar2 = colourGradingBloomEffectConfig.field_16->CountColourMappings();
            if (iVar1 == iVar2) {
                return field_16[1] == colourGradingBloomEffectConfig.field_16[1];
            }
        }
        return false;
    }

    // 0x1009bd340
    ColourGradingBloomEffectConfig::ColourGradingBloomEffectConfig(
        const ColourGradingBloomEffectConfig& colourGradingBloomEffectConfig) {
        uint32_t uVar1 = *(uint32_t*)&colourGradingBloomEffectConfig.field_0;
        BloomQuality BVar2 = colourGradingBloomEffectConfig.field_4;
        *(uint64_t*)((long)&field_4 + 1) = *(uint64_t*)((long)&colourGradingBloomEffectConfig.field_4 + 1);
        *(uint32_t*)&field_0 = uVar1;
        field_4 = BVar2;
        new (field_16) ColourCorrectionConfig(colourGradingBloomEffectConfig.field_16);
        _memcpy(&field_168, &colourGradingBloomEffectConfig.field_168, 152);
    }

    // 0x1009bd4e0
    unsigned long ColourGradingBloomEffectConfig::hash() const {
        return local_30 = 0;
        hash_combine<bool>(&local_30, &field_260);
        hash_combine<bool>(&local_30, &field_312);
        hash_combine<bool>(&local_30, &field_12);
        int local_24 = field_316;
        hash_combine<int>(&local_30, &local_24);
        hash_combine<bool>(&local_30, (bool*)field_16);
        local_24 = field_16->CountColourMappings();
        hash_combine<int>(&local_30, &local_24);
        hash_combine<bool>(&local_30, (bool*)(field_16 + 1));
        return local_30;
    }

} // namespace jag::postprocess
