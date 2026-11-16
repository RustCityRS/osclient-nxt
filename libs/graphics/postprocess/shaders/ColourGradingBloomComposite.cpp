// libs/graphics/postprocess/shaders/ColourGradingBloomComposite.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class ColourGradingBloomComposite {
    public:
        ColourGradingBloomComposite* BuildFSFragment(ToneMapOperator arg1, bool arg2, bool arg3, bool arg4, bool arg5,
                                                     int arg6, bool arg7, LuminanceShaderOutputFormat arg8);

        uint8_t _unknown_0[1];
    };

    // 0x1009aeb90
    ColourGradingBloomComposite* ColourGradingBloomComposite::BuildFSFragment(ToneMapOperator arg1, bool arg2,
                                                                              bool arg3, bool arg4, bool arg5, int arg6,
                                                                              bool arg7,
                                                                              LuminanceShaderOutputFormat arg8) {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_170[280];

        new (local_170) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        auto local_58 = ToneMapOperators::BuildFragment(param_2);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_170 + 16);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_58);
        local_58 = LuminanceUtils::BuildUnpackFragment(param_9);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_58);
        if (param_3 != '\0') {
            std::operator<<(basic_ostream, "#define TONE_MAPPING_ENABLED\n");
        }
        if ((char)param_4 != '\0') {
            std::operator<<(basic_ostream, "#define BLOOM_ENABLED\n");
        }
        if ((char)param_5 != '\0') {
            std::operator<<(basic_ostream, "#define OUTPUT_SRGB\n");
        }
        if ((char)param_6 != '\0') {
            std::operator<<(basic_ostream, "#define COLOUR_CORRECTION_ENABLED\n");
            if (param_8 != '\0') {
                std::operator<<(basic_ostream, "#define VOLUME_TEXTURES\n");
            }
            if (1 < param_7) {
                std::operator<<(basic_ostream, "#define COLOUR_REMAPS_2\n");
            }
            if (2 < param_7) {
                std::operator<<(basic_ostream, "#define COLOUR_REMAPS_3\n");
            }
        }
        auto str = graphics::shadersourceprovider::GetShaderString(106);
        std::operator<<(basic_ostream, str);
        *this = local_170->str();
        return this;
    }

} // namespace jag::postprocess

namespace jag {
    // 0x1009af260
    shared_ptr_if_not_array<render::Texture3D>::type
    make_shared<render::Texture3D, char const (&)[14]>(char const (&arg1)[14]) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        Texture3D* local_30[2];

        auto arg1_00 = aligned_alloc(544, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<render::Texture3D>::type result;
        } else {
            local_30[0] = placement_new<render::Texture3D, char const(&)[32]>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<render::Texture3D>, int, render::Texture3D*&>(arg1_00, &local_34,
                                                                                               local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
