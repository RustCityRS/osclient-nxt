// libs/graphics/runetek7/materials/shaders/RT7ShaderSourceStream.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "RT7ShaderSourceStream.h"

namespace jag::graphics {
    // 0x10088fa00, 176 bytes, base-object constructor, placed by class name and debug map
    // RT7ShaderSourceStream::RT7ShaderSourceStream(ShaderSource const&, render::ShaderType, EffectList const&, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, unsigned int)
    void RT7ShaderSourceStream::RT7ShaderSourceStream(long* param_1, ShaderSource* param_3, undefined4 param_4,
                                                      EffectList* param_5, undefined4 param_6, undefined4 param_7,
                                                      undefined4 param_8, undefined4 param_9, undefined4 param_10,
                                                      undefined4 param_11, undefined4 param_12) {
        undefined** ppuVar1;

        new (this) render::ShaderSourceStream(param_1 + 1, param_4, param_6, param_7, param_8, param_9, param_10,
                                              param_11, param_12);
        ppuVar1 = (undefined**)*param_1;
        field_0 = ppuVar1;
        *(long*)((long)&field_0 + (long)ppuVar1[-3]) = param_1[14];
        field_16 = (undefined**)param_1[15];
        AppendRelevantEffectsAsStringDefines(this, param_3, param_5);
        (*(code*)field_0[2])(this);
    }

    // 0x10088fab0, 96 bytes, placed by class name and debug map
    // RT7ShaderSourceStream::AppendRelevantEffectsAsStringDefines(ShaderSource const&, EffectList const&)
    void RT7ShaderSourceStream::AppendRelevantEffectsAsStringDefines(ShaderSource* param_1, EffectList* param_2) {
        undefined8* puVar1;
        EffectList* pEVar2;
        undefined8 local_38;
        undefined8 uStack_30;

        puVar1 = (undefined8*)param_1->second();
        local_38 = *puVar1;
        uStack_30 = puVar1[1];
        pEVar2 = (EffectList*)param_1->second();
        EffectList::operator|=((EffectList*)&local_38, pEVar2);
        EffectList::operator&=((EffectList*)&local_38, param_2);
        local_38.AppendAsStringDefines(this);
    }

    // 0x10088fb10, 224 bytes, complete-object constructor, placed by class name and debug map
    // RT7ShaderSourceStream::RT7ShaderSourceStream(ShaderSource const&, render::ShaderType, EffectList const&, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, unsigned int)
    void RT7ShaderSourceStream::RT7ShaderSourceStream(ShaderSource* param_1, undefined4 param_3, EffectList* param_4,
                                                      undefined4 param_5, undefined4 param_6, undefined4 param_7,
                                                      undefined4 param_8, undefined4 param_9, undefined4 param_10,
                                                      undefined4 param_11) {
        new (&field_128) std::ios();
        new (this) render::ShaderSourceStream(&PTR_PTR_100f17430, param_3, param_5, param_6, param_7, param_8, param_9,
                                              param_10, param_11);
        field_0 = &PTR__RT7ShaderSourceStream_100f173c0;
        field_128 = &PTR__RT7ShaderSourceStream_100f17418;
        field_16 = &PTR__RT7ShaderSourceStream_100f173f0;
        AppendRelevantEffectsAsStringDefines(this, param_1, param_4);
        (*(code*)field_0[2])(this);
    }

    // 0x10088fc20, 176 bytes, base-object constructor, placed by class name and debug map
    // RT7ShaderSourceStream::RT7ShaderSourceStream(render::ShaderType, EffectList const&, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, unsigned int)
    void RT7ShaderSourceStream::RT7ShaderSourceStream(long* param_2, undefined8 param_3, EffectList* param_4,
                                                      undefined4 param_5, undefined4 param_6, undefined4 param_7,
                                                      undefined4 param_8, undefined4 param_9, undefined4 param_10,
                                                      undefined4 param_11) {
        undefined** ppuVar1;

        new (this) render::ShaderSourceStream(param_2 + 1, param_3, param_5, param_6, param_7, param_8, param_9,
                                              param_10, param_11);
        ppuVar1 = (undefined**)*param_2;
        field_0 = ppuVar1;
        *(long*)((long)&field_0 + (long)ppuVar1[-3]) = param_2[14];
        field_16 = (undefined**)param_2[15];
        param_4->AppendAsStringDefines(this);
        (*(code*)field_0[2])(this);
    }

    // 0x10088fcd0, 224 bytes, complete-object constructor, placed by class name and debug map
    // RT7ShaderSourceStream::RT7ShaderSourceStream(render::ShaderType, EffectList const&, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, render::ShaderVariablePrecision, unsigned int)
    void RT7ShaderSourceStream::RT7ShaderSourceStream(undefined4 param_2, EffectList* param_3, undefined4 param_4,
                                                      undefined4 param_5, undefined4 param_6, undefined4 param_7,
                                                      undefined4 param_8, undefined4 param_9, undefined4 param_10) {
        new (&field_128) std::ios();
        new (this) render::ShaderSourceStream(&PTR_PTR_100f17430, param_2, param_4, param_5, param_6, param_7, param_8,
                                              param_9, param_10);
        field_0 = &PTR__RT7ShaderSourceStream_100f173c0;
        field_128 = &PTR__RT7ShaderSourceStream_100f17418;
        field_16 = &PTR__RT7ShaderSourceStream_100f173f0;
        param_3->AppendAsStringDefines(this);
        (*(code*)field_0[2])(this);
    }

    // 0x10088fdb0, 208 bytes, placed by class name and debug map
    // RT7ShaderSourceStream::AppendMandatoryShaderFragments()
    void RT7ShaderSourceStream::AppendMandatoryShaderFragments() {
        char* pcVar1;
        undefined*** pppuVar2;

        pppuVar2 = &field_16;
        std::operator<<((ostream*)pppuVar2,
                        "\n/***************************************************/\n/********** Mandatory Shader "
                        "Fragments *************/\n/***************************************************/\n");
        std::operator<<((ostream*)pppuVar2, "\n#define GRAPHICS_QUALITY_LOW 0\n#define GRAPHICS_QUALITY_MEDIUM "
                                            "1\n#define GRAPHICS_QUALITY_HIGH 2\n#define GRAPHICS_QUALITY_ULTRA 3\n");
        std::operator<<(
            (ostream*)pppuVar2,
            "\n#define MATERIAL_SETTINGS_SLOT_PIXEL_RESOLUTION_X 3.0\n#define "
            "MATERIAL_SETTINGS_SLOT_PIXEL_RESOLUTION_Y 4.0\n#define MATERIAL_SETTINGS_SLOTS_DIMENSION_COUNT_X "
            "42.0\n#define MATERIAL_SETTINGS_SLOTS_DIMENSION_COUNT_Y 32.0\n#define "
            "MATERIAL_SETTINGS_TEXTURE_RESOLUTION 128.0\n");
        pcVar1 = (char*)shadersourceprovider::GetShaderString(29);
        std::operator<<((ostream*)pppuVar2, pcVar1);
        pcVar1 = (char*)shadersourceprovider::GetShaderString(7);
        std::operator<<((ostream*)pppuVar2, pcVar1);
        pcVar1 = (char*)shadersourceprovider::GetShaderString(42);
        std::operator<<((ostream*)pppuVar2, pcVar1);
        pcVar1 = (char*)shadersourceprovider::GetShaderString(109);
        std::operator<<((ostream*)pppuVar2, pcVar1);
        pcVar1 = (char*)shadersourceprovider::GetShaderString(77);
        std::operator<<((ostream*)pppuVar2, pcVar1);
        pcVar1 = (char*)shadersourceprovider::GetShaderString(94);
        std::operator<<((ostream*)pppuVar2, pcVar1);
        std::operator<<((ostream*)pppuVar2, "\n/***************************************************/\n\n");
    }

} // namespace jag::graphics
