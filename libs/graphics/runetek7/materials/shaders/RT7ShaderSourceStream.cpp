// libs/graphics/runetek7/materials/shaders/RT7ShaderSourceStream.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "RT7ShaderSourceStream.h"

namespace jag::graphics {
    // 0x10088fa00
    RT7ShaderSourceStream::RT7ShaderSourceStream(const ShaderSource& shaderSource, render::ShaderType shaderType,
                                                 const EffectList& effectList,
                                                 render::ShaderVariablePrecision shaderVariablePrecision1,
                                                 render::ShaderVariablePrecision shaderVariablePrecision2,
                                                 render::ShaderVariablePrecision shaderVariablePrecision3,
                                                 render::ShaderVariablePrecision shaderVariablePrecision4,
                                                 render::ShaderVariablePrecision shaderVariablePrecision5,
                                                 render::ShaderVariablePrecision shaderVariablePrecision6,
                                                 unsigned int arg10)
        : render::ShaderSourceStream((int)shaderSource + 8, (ShaderVariablePrecision)effectList,
                                     shaderVariablePrecision2, shaderVariablePrecision3, shaderVariablePrecision4,
                                     shaderVariablePrecision5, shaderVariablePrecision6, arg10) {
        uint32_t in_register_00000014;
        uint32_t in_register_00000084;

        RT7ShaderSourceStream_vtbl* pRVar1 = (RT7ShaderSourceStream_vtbl*)shaderSource._vptr;
        *(uint64_t*)((long)&this->_vptr + (long)pRVar1[-1]._dtor) = shaderSource[2].field_32;
        field_16 = &(shaderSource[3]._vptr)->_dtor;
        AppendRelevantEffectsAsStringDefines(
            *((ShaderSource*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)shaderType)),
            *((EffectList*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)shaderVariablePrecision1)));
        AppendMandatoryShaderFragments();
    }

    // 0x10088fab0
    void RT7ShaderSourceStream::AppendRelevantEffectsAsStringDefines(const ShaderSource& shaderSource,
                                                                     const EffectList& effectList) {
        EffectList* effectList_00;

        auto puVar1 = shaderSource.second();
        uint64_t local_38 = *puVar1;
        uint64_t uStack_30 = puVar1[1];
        effectList_00 = (EffectList*)shaderSource.second();
        local_38 |= *effectList_00;
        local_38 &= effectList;
        local_38.AppendAsStringDefines(*this);
    }

    // 0x10088fc20
    RT7ShaderSourceStream::RT7ShaderSourceStream(render::ShaderType shaderType, const EffectList& effectList,
                                                 render::ShaderVariablePrecision shaderVariablePrecision1,
                                                 render::ShaderVariablePrecision shaderVariablePrecision2,
                                                 render::ShaderVariablePrecision shaderVariablePrecision3,
                                                 render::ShaderVariablePrecision shaderVariablePrecision4,
                                                 render::ShaderVariablePrecision shaderVariablePrecision5,
                                                 render::ShaderVariablePrecision shaderVariablePrecision6,
                                                 unsigned int arg9) {
        uint32_t in_register_0000000c;
        uint32_t in_register_00000034;

        long* plVar2 = (long*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)shaderType);
        new (this) render::ShaderSourceStream(
            shaderType + 8, (ShaderVariablePrecision)effectList, shaderVariablePrecision2, shaderVariablePrecision3,
            shaderVariablePrecision4, shaderVariablePrecision5, shaderVariablePrecision6, arg9);
        RT7ShaderSourceStream_vtbl* pRVar1 = (RT7ShaderSourceStream_vtbl*)*plVar2;
        *(long*)((long)&this->_vptr + (long)pRVar1[-1]._dtor) = plVar2[14];
        field_16 = &plVar2[15];
        ((EffectList*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)shaderVariablePrecision1))
            ->AppendAsStringDefines(*this);
        AppendMandatoryShaderFragments();
    }

    // 0x10088fdb0
    void RT7ShaderSourceStream::AppendMandatoryShaderFragments() {
        uint8_t*** basic_ostream = &field_16;
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream,
                        "\n/***************************************************/\n/********** Mandatory Shader "
                        "Fragments *************/\n/***************************************************/\n");
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream,
                        "\n#define GRAPHICS_QUALITY_LOW 0\n#define GRAPHICS_QUALITY_MEDIUM 1\n#define "
                        "GRAPHICS_QUALITY_HIGH 2\n#define GRAPHICS_QUALITY_ULTRA 3\n");
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)basic_ostream,
            "\n#define MATERIAL_SETTINGS_SLOT_PIXEL_RESOLUTION_X 3.0\n#define "
            "MATERIAL_SETTINGS_SLOT_PIXEL_RESOLUTION_Y 4.0\n#define MATERIAL_SETTINGS_SLOTS_DIMENSION_COUNT_X "
            "42.0\n#define MATERIAL_SETTINGS_SLOTS_DIMENSION_COUNT_Y 32.0\n#define "
            "MATERIAL_SETTINGS_TEXTURE_RESOLUTION 128.0\n");
        auto pcVar1 = shadersourceprovider::GetShaderString(29);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream, pcVar1);
        pcVar1 = shadersourceprovider::GetShaderString(7);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream, pcVar1);
        pcVar1 = shadersourceprovider::GetShaderString(42);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream, pcVar1);
        pcVar1 = shadersourceprovider::GetShaderString(109);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream, pcVar1);
        pcVar1 = shadersourceprovider::GetShaderString(77);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream, pcVar1);
        pcVar1 = shadersourceprovider::GetShaderString(94);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream, pcVar1);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream,
                        "\n/***************************************************/\n\n");
    }

} // namespace jag::graphics
