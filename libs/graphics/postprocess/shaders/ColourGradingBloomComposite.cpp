// libs/graphics/postprocess/shaders/ColourGradingBloomComposite.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class ColourGradingBloomComposite {
    public:
        ColourGradingBloomComposite* BuildFSFragment(ToneMapOperator, bool, bool, bool, bool, int, bool,
                                                     LuminanceShaderOutputFormat);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009aeb90, 432 bytes, placed by class name and debug map
    // ColourGradingBloomComposite::BuildFSFragment(ToneMapOperator, bool, bool, bool, bool, int, bool, LuminanceShaderOutputFormat)
    ColourGradingBloomComposite* ColourGradingBloomComposite::BuildFSFragment(undefined4 param_2, char param_3,
                                                                              undefined4 param_4, undefined4 param_5,
                                                                              undefined4 param_6, int param_7,
                                                                              char param_8, undefined4 param_9) {
        ostream* poVar1;
        char* pcVar2;
        undefined1 local_170[280];
        ToneMapOperators local_58[28];

        new (local_170) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        local_58->BuildFragment(param_2);
        poVar1 = (ostream*)(local_170 + 16);
        std::operator<<(poVar1, (basic_string*)local_58);
        local_58->~basic_string();
        local_58->BuildUnpackFragment(param_9);
        std::operator<<(poVar1, (basic_string*)local_58);
        local_58->~basic_string();
        if (param_3 != '\0') {
            std::operator<<(poVar1, "#define TONE_MAPPING_ENABLED\n");
        }
        if ((char)param_4 != '\0') {
            std::operator<<(poVar1, "#define BLOOM_ENABLED\n");
        }
        if ((char)param_5 != '\0') {
            std::operator<<(poVar1, "#define OUTPUT_SRGB\n");
        }
        if ((char)param_6 != '\0') {
            std::operator<<(poVar1, "#define COLOUR_CORRECTION_ENABLED\n");
            if (param_8 != '\0') {
                std::operator<<(poVar1, "#define VOLUME_TEXTURES\n");
            }
            if (1 < param_7) {
                std::operator<<(poVar1, "#define COLOUR_REMAPS_2\n");
            }
            if (2 < param_7) {
                std::operator<<(poVar1, "#define COLOUR_REMAPS_3\n");
            }
        }
        pcVar2 = (char*)graphics::shadersourceprovider::GetShaderString(106);
        std::operator<<(poVar1, pcVar2);
        str();
        local_170->~PixelShaderSourceStream();
        return this;
    }

} // namespace jag::postprocess

namespace jag {
    // 0x1009af260, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<render::Texture3D>::type make_shared<render::Texture3D, char const (&) [14]>(char const (&) [14])
    /* shared_ptr_if_not_array<render::Texture3D>::type
   make_shared<render::Texture3D, char const (&) [32]>(char const (&) [32]) */

    jag* make_shared<render::Texture3D, char const (&)[32]>(char* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Texture3D* local_30[2];

        pvVar1 = (void*)aligned_alloc(544, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<render::Texture3D, char const(&)[32]>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<render::Texture3D>, int, render::Texture3D*&>(pvVar1, &local_34,
                                                                                                    local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
