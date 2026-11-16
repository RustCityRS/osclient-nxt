// libs/graphics/runetek7/particles/ParticleOverdrawComposite.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ParticleOverdrawComposite {
    public:
        ParticleOverdrawComposite* BuildVSFragment();
        ParticleOverdrawComposite* BuildFSFragment();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1007d0ab0, 160 bytes, placed by class name and debug map
    // ParticleOverdrawComposite::BuildVSFragment()
    ParticleOverdrawComposite* ParticleOverdrawComposite::BuildVSFragment() {
        undefined1 local_128[280];

        new (local_128) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (ostream*)(local_128 + 16),
            "\n            // Simple passthrough\n            attribute vec3 aPos;\n            attribute vec2 "
            "aTexCoord;\n\n            out vec2 vTexCoord;\n\n            void main()\n            {\n                "
            "vTexCoord = aTexCoord;\n                gl_Position = vec4(aPos, 1.0);\n            }\n            ");
        str();
        local_128->~VertexShaderSourceStream();
        return this;
    }

    // 0x1007d0b70, 192 bytes, placed by class name and debug map
    // ParticleOverdrawComposite::BuildFSFragment()
    ParticleOverdrawComposite* ParticleOverdrawComposite::BuildFSFragment() {
        char* pcVar1;
        undefined1 local_130[280];

        new (local_130) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        pcVar1 = (char*)shadersourceprovider::GetShaderString(7);
        std::operator<<((ostream*)(local_130 + 16), pcVar1);
        std::
        operator<<((ostream*)(local_130 + 16),
                   "\n            // Essentially this shader reads back the single-channel texture containing overdraw "
                   "information and converts it from\n            // an integer value representing how many times a "
                   "pixel has been drawn to, into a gradient colour.\n            // The end result is a "
                   "Purple->Blue->Cyan->Green->Yellow->Red->White gradient, with purple representing no overdraw, and "
                   "white\n            // an extreme amount of overdraw.\n\n            in vec2 vTexCoord;\n\n         "
                   "   uniform sampler2D sTexture;\n\n            void main()\n            {\n                const "
                   "float HIGH_OVERDRAW_COUNT = 20.0;\n                const float CRITICAL_OVERDRAW_COUNT = 30.0;\n   "
                   "             const float CRITICAL_OVERDRAW_RANGE = CRITICAL_OVERDRAW_COUNT - "
                   "HIGH_OVERDRAW_COUNT;\n\n                const float BASE_LUMINANCE = 0.65;\n                const "
                   "float CRITICAL_OVERDRAW_LUMINANCE = 1.0;\n\n                const float BASE_OVERDRAW_VISIBILITY = "
                   "0.35;\n                const float OVERDRAW_VISIBILITY_RANGE = 5.0;\n\n                // Using "
                   "HSL here so we get a nice gradient across all colours\n                // without having to do a "
                   "series of if checks and lerps\n                const float NO_OVERDRAW_HUE = 0.8;\n                "
                   "const float HIGH_OVERDRAW_HUE = 0.0;\n\n                // Sample and convert back into a useable "
                   "range\n                float overdrawAmount = texture2DLodCompat(sTexture, vTexCoord, 0.0).r * "
                   "255.0;\n\n                float overdrawInterpolator = min(1.0, (overdrawAmount / "
                   "HIGH_OVERDRAW_COUNT));\n                float luminanceInterpolator = clamp((overdrawAmount - "
                   "HIGH_OVERDRAW_COUNT) / CRITICAL_OVERDRAW_RANGE, 0.0, 1.0);\n\n                float overdrawHue = "
                   "mix(NO_OVERDRAW_HUE, HIGH_OVERDRAW_HUE, overdrawInterpolator);\n                float "
                   "overdrawLuminance = mix(BASE_LUMINANCE, CRITICAL_OVERDRAW_LUMINANCE, luminanceInterpolator);\n     "
                   "           float overdrawAlpha = min(1.0, ((overdrawAmount > 0.0) ? BASE_OVERDRAW_VISIBILITY : "
                   "0.0) + overdrawAmount / OVERDRAW_VISIBILITY_RANGE);\n\n                vec4 finalColour = "
                   "convertHSL..." /* TRUNCATED STRING LITERAL */
        );
        str();
        local_130->~PixelShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
