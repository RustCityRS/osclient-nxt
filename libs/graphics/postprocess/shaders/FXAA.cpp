// libs/graphics/postprocess/shaders/FXAA.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class FXAA {
    public:
        FXAA* BuildFSFragment(Quality);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009b4310, 736 bytes, placed by class name and debug map
    // FXAA::BuildFSFragment(FXAA::Quality)
    FXAA* FXAA::BuildFSFragment(undefined4 param_2) {
        ostream* poVar1;
        MapArea* pMVar2;
        long lVar3;
        ostream* poVar4;
        undefined1 local_140[280];

        new (local_140) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        poVar1 = (ostream*)(local_140 + 16);
        poVar4 = poVar1;
        std::operator<<(poVar1, "#define FXAA_PC 1\n");
        pMVar2 = (MapArea*)poVar4->Instance();
        lVar3 = pMVar2->GetOrigin();
        if (*(char*)(lVar3 + 174) != '\0') {
            if ((1 < *(int*)(lVar3 + 32)) || (*(int*)(lVar3 + 32) == 1 && 20 < *(int*)(lVar3 + 36))) {
                std::operator<<(poVar1, "\n#define FXAA_GLSL_130 1\n");
                std::operator<<(poVar1, "#define FXAA_GLSL_120 0\n");
                std::operator<<(poVar1, "#define FXAA_WebGL 0\n");
                goto LAB_1009b4442;
            }
        }
        if (((*(char*)(lVar3 + 174) == '\0') || (*(int*)(lVar3 + 32) != 1)) || (*(int*)(lVar3 + 36) != 20)) {
            std::operator<<(poVar1, "\n#define FXAA_GLSL_130 0\n");
            std::operator<<(poVar1, "#define FXAA_GLSL_120 0\n");
            std::operator<<(poVar1, "#define FXAA_WebGL 1\n");
        } else {
            std::operator<<(poVar1, "\n#define FXAA_GLSL_130 0\n");
            std::operator<<(poVar1, "#define FXAA_GLSL_120 1\n");
            std::operator<<(poVar1, "#define FXAA_WebGL 0\n");
        }
    LAB_1009b4442:
        if (*(char*)(lVar3 + 176) == '\0') {
            std::operator<<(poVar1, "#define FXAA_GATHER4_ALPHA 0\n");
        }
        switch (param_2) {
        case 0:
            std::operator<<(poVar1, "#define FXAA_QUALITY_PRESET 10\n");
            break;
        case 1:
            std::operator<<(poVar1, "#define FXAA_QUALITY_PRESET 15\n");
            break;
        case 2:
            std::operator<<(poVar1, "#define FXAA_QUALITY_PRESET 25\n");
            break;
        case 3:
            std::operator<<(poVar1, "#define FXAA_QUALITY_PRESET 39\n");
            break;
        default:
            std::operator<<(poVar1, "#define FXAA_QUALITY_PRESET 39\n");
        }
        std::operator<<(
            poVar1, "\n#ifndef FXAA_PC                                                             \n    #define "
                    "FXAA_PC 0                                                       \n#endif                          "
                    "                                            \n#ifndef FXAA_PC_CONSOLE                             "
                    "                        \n    #define FXAA_PC_CONSOLE 0                                           "
                    "    \n#endif                                                                      \n");
        std::operator<<(
            poVar1,
            "#ifndef FXAA_GLSL_120                                                       \n    #define FXAA_GLSL_120 0 "
            "                                                \n#endif                                                  "
            "                    \n#ifndef FXAA_GLSL_130                                                       \n    "
            "#define FXAA_GLSL_130 0                                                 \n#endif                          "
            "                                            \n#ifndef FXAA_HLSL_3                                         "
            "                \n    #define FXAA_HLSL_3 0                                                   \n#endif    "
            "                                                                  \n#ifndef FXAA_HLSL_4                   "
            "                                      \n    #define FXAA_HLSL_4 0                                         "
            "          \n#endif                                                                      \n#ifndef "
            "FXAA_HLSL_5                                                         \n    #define FXAA_HLSL_5 0           "
            "                                        \n#endif                                                          "
            "            \n#ifndef FXAA_GREEN_AS_LUMA                                                  \n    #define "
            "FXAA_GREEN_AS_LUMA 1                                            \n#endif                                  "
            "                                    \n#ifndef FXAA_EARLY_EXIT                                             "
            "        \n    #define FXAA_EARLY_EXIT 1                                               \n#endif            "
            "                                                          \n#ifndef FXAA_DISCARD                          "
            "                              \n    #define FXAA_DISCARD 0                                                "
            "  \n#endif                                                                      \n");
        poVar4 = poVar1;
        std::operator<<(poVar1, "#ifndef FXAA_FAST_PIXEL_OFFSET                                              \n");
        pMVar2 = (MapArea*)poVar4->Instance();
        lVar3 = pMVar2->GetOrigin();
        if (3 < *(int*)(lVar3 + 32)) {
            std::operator<<(poVar1,
                            "    #ifdef GL_EXT_gpu_shader4                                               \n        "
                            "#define FXAA_FAST_PIXEL_OFFSET 1                                    \n    #endif          "
                            "                                                        \n    #ifdef GL_NV_gpu_shader5    "
                            "                                            \n        #define FXAA_FAST_PIXEL_OFFSET 1    "
                            "                                \n    #endif                                              "
                            "                    \n    #ifdef GL_ARB_gpu_shader5                                       "
                            "        \n        #define FXAA_FAST_PIXEL_OFFSET 1                                    \n  "
                            "  #endif                                                                  \n");
        }
        poVar4 = poVar1;
        std::operator<<(poVar1,
                        "    #ifndef FXAA_FAST_PIXEL_OFFSET                                          \n        #define "
                        "FXAA_FAST_PIXEL_OFFSET 0                                    \n    #endif                      "
                        "                                            \n#endif                                          "
                        "                            \n#ifndef FXAA_GATHER4_ALPHA                                      "
                        "            \n    #if (FXAA_HLSL_5 == 1)                                                  \n  "
                        "      #define FXAA_GATHER4_ALPHA 1                                        \n    #endif        "
                        "                                                          \n");
        pMVar2 = (MapArea*)poVar4->Instance();
        lVar3 = pMVar2->GetOrigin();
        if (3 < *(int*)(lVar3 + 32)) {
            std::operator<<(
                poVar1, "    #ifdef GL_ARB_gpu_shader5                                               \n        #define "
                        "FXAA_GATHER4_ALPHA 1                                        \n    #endif                      "
                        "                                            \n    #ifdef GL_NV_gpu_shader5                    "
                        "                            \n        #define FXAA_GATHER4_ALPHA 1                            "
                        "            \n    #endif                                                                  \n");
        }
        std::operator<<(poVar1, "    #ifndef FXAA_GATHER4_ALPHA                                              \n        "
                                "#define FXAA_GATHER4_ALPHA 0                                        \n    #endif      "
                                "                                                            \n#endif                  "
                                "                                                    \n");
        std::operator<<(
            poVar1,
            "#ifndef FXAA_QUALITY_PRESET                                                \n    #define "
            "FXAA_QUALITY_PRESET 12                                         \n#endif                                   "
            "                                   \n#if (FXAA_QUALITY_PRESET == 10)                                      "
            "      \n    #define FXAA_QUALITY_PS 3                                              \n    #define "
            "FXAA_QUALITY_P0 1.5                                            \n    #define FXAA_QUALITY_P1 3.0          "
            "                                  \n    #define FXAA_QUALITY_P2 12.0                                      "
            "     \n#endif                                                                      \n#if "
            "(FXAA_QUALITY_PRESET == 11)                                            \n    #define FXAA_QUALITY_PS 4    "
            "                                          \n    #define FXAA_QUALITY_P0 1.0                               "
            "             \n    #define FXAA_QUALITY_P1 1.5                                            \n    #define "
            "FXAA_QUALITY_P2 3.0                                            \n    #define FXAA_QUALITY_P3 12.0         "
            "                                  \n#endif                                                                "
            "      \n#if (FXAA_QUALITY_PRESET == 12)                                            \n    #define "
            "FXAA_QUALITY_PS 5                                              \n    #define FXAA_QUALITY_P0 1.0          "
            "                                  \n    #define FXAA_QUALITY_P1 1.5                                       "
            "     \n    #define FXAA_QUALITY_P2 2.0                                            \n    #define "
            "FXAA_QUALITY_P3 4.0                                            \n    #define FXAA_QUALITY_P4 12.0         "
            "                                  \n#endif                                                                "
            "      \n#if (FXAA_QUALITY_PRESET == 13)                                            \n    #define "
            "FXAA_QUALITY_PS 6                                              \n    #define FXAA_QUALITY_P0 1.0          "
            "                           ..." /* TRUNCATED STRING LITERAL */
        );
        std::operator<<(
            poVar1, "#if (FXAA_PC == 1)                                                                                "
                    "          \nFxaaFloat4 FxaaPixelShader(                                                           "
                    "                      \n    FxaaFloat2 pos                                                        "
                    "                                  \n    ,FxaaTex tex                                              "
                    "                                              \n    ,FxaaFloat2 fxaaQualityRcpFrame               "
                    "                                                          \n    #if (FXAA_PC_CONSOLE == 1)        "
                    "                                                                      \n        ,FxaaFloat4 "
                    "fxaaConsoleRcpFrameOpt                                                                  \n        "
                    ",FxaaFloat4 fxaaConsoleRcpFrameOpt2                                                               "
                    "  \n        ,FxaaFloat4 fxaaConsole360RcpFrameOpt2                                                "
                    "              \n    #endif                                                                        "
                    "                          \n    ,FxaaFloat fxaaQualitySubpix                                      "
                    "                                      \n    ,FxaaFloat fxaaQualityEdgeThreshold                   "
                    "                                                  \n    ,FxaaFloat fxaaQualityEdgeThresholdMin    "
                    "                                                              \n    #if (FXAA_PC_CONSOLE == 1)    "
                    "                                                                         \n        ,FxaaFloat "
                    "fxaaConsoleEdgeSharpness                                                                 \n       "
                    " ,FxaaFloat fxaaConsoleEdgeThreshold                                                              "
                    "   \n        ,FxaaFloat fxaaConsoleEdgeThresholdMin                                               "
                    "               \n    #endif                                                                       "
                    "                           \n) {                                                                  "
                    "                  ..." /* TRUNCATED STRING LITERAL */
        );
        std::operator<<(
            poVar1, "#endif                                                                                            "
                    "          \n#if (FXAA_PC_CONSOLE == 1)                                                            "
                    "                      \nFxaaFloat4 FxaaPixelShader(                                               "
                    "                                  \n    FxaaFloat2 pos,                                           "
                    "                                              \n    FxaaFloat4 fxaaConsolePosPos,                 "
                    "                                                          \n    FxaaTex tex,                      "
                    "                                                                      \n    FxaaTex "
                    "fxaaConsole360TexExpBiasNegOne,                                                                 "
                    "\n    FxaaTex fxaaConsole360TexExpBiasNegTwo,                                                     "
                    "            \n    FxaaFloat2 fxaaQualityRcpFrame,                                                 "
                    "                        \n    FxaaFloat4 fxaaConsoleRcpFrameOpt,                                  "
                    "                                    \n    FxaaFloat4 fxaaConsoleRcpFrameOpt2,                     "
                    "                                                \n    FxaaFloat4 fxaaConsole360RcpFrameOpt2,      "
                    "                                                            \n    FxaaFloat fxaaQualitySubpix,    "
                    "                                                                        \n    FxaaFloat "
                    "fxaaQualityEdgeThreshold,                                                                     \n  "
                    "  FxaaFloat fxaaQualityEdgeThresholdMin,                                                          "
                    "        \n    FxaaFloat fxaaConsoleEdgeSharpness,                                                 "
                    "                    \n    FxaaFloat fxaaConsoleEdgeThreshold,                                     "
                    "                                \n    FxaaFloat fxaaConsoleEdgeThresholdMin,                      "
                    "                                            \n    FxaaFloat4 fxaaConsole360ConstDir               "
                    "                                  ..." /* TRUNCATED STRING LITERAL */
        );
        std::operator<<(poVar1, "\nuniform sampler2D sSourceTex;\nuniform vec4 uFxaaQualityRcpFrame;\nuniform float "
                                "uFxaaQualitySubpix;\nuniform float uFxaaQualityEdgeThreshold;\nuniform float "
                                "uFxaaQualityEdgeThresholdMin;\n\nin vec2 vTexCoord;\n\nvoid main()\n{\n   "
                                "gl_FragColor = FxaaPixelShader(vTexCoord, sSourceTex, uFxaaQualityRcpFrame.xy, "
                                "uFxaaQualitySubpix, uFxaaQualityEdgeThreshold, uFxaaQualityEdgeThresholdMin);\n}");
        str();
        local_140->~PixelShaderSourceStream();
        return this;
    }

} // namespace jag::postprocess
