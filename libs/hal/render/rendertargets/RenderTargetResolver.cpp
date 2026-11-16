// libs/hal/render/rendertargets/RenderTargetResolver.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "RenderTargetResolver.h"

namespace jag::render {
    // 0x100bdd470, 4416 bytes, placed by class name and debug map
    // RenderTargetResolver::CreateRenderingResources()
    byte RenderTargetResolver::CreateRenderingResources() {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        byte bVar4;
        char* pcVar6;
        char* pcVar7;
        MapArea* pMVar8;
        long lVar9;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>* this_00;
        undefined1 local_1328[280];
        undefined1 local_1210[280];
        undefined1 local_10f8[280];
        undefined1 local_fe0[280];
        undefined1 local_ec8[280];
        undefined1 local_db0[280];
        undefined1 local_c98[280];
        undefined1 local_b80[280];
        undefined1 local_a68[280];
        undefined1 local_950[280];
        undefined1 local_838[280];
        undefined1 local_720[280];
        undefined1 local_608[280];
        undefined1 local_4f0[280];
        undefined1 local_3d8[280];
        undefined1 local_2c0[280];
        undefined1 local_1a8[280];
        VertexElementDesc local_90;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_68[24];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_50[27];
        byte local_35;
        byte local_34;
        byte local_33;
        byte local_32;
        byte local_31;

        if (CreateRenderingResources()::quadVertices == '\0') {
            if (___cxa_guard_acquire(&CreateRenderingResources()::quadVertices) != 0) {
                new (&CreateRenderingResources()::quadVertices) math::Point<float>(0.0, 1.0);
                new (&DAT_104235048) math::Point<float>(1.0, 1.0);
                new (&DAT_104235050) math::Point<float>(0.0, 0.0);
                new (&DAT_104235058) math::Point<float>(1.0, 0.0);
                ___cxa_guard_release(&CreateRenderingResources()::quadVertices);
            }
        }
        bVar1 = Create(32, 0, &CreateRenderingResources()::quadVertices);
        new (&local_90) VertexElementDesc(0, "aTexCoord", 1, 0, 5, 0);
        new (local_3d8) VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (ostream*)(local_3d8 + 16),
            "attribute vec2 aTexCoord;                                              \n                                 "
            "                                      \nout vec2 vTexCoord;                                               "
            "     \n                                                                       \nvoid main()               "
            "                                             \n{                                                          "
            "            \n   vTexCoord = aTexCoord;                                              \n                   "
            "                                                    \n   gl_Position = vec4(aTexCoord * 2.0 - 1.0, 0.0, "
            "1.0);                \n}                                                                      \n");
        new (local_1328) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (ostream*)(local_1328 + 16),
            "in vec2 vTexCoord;                                                     \n                                 "
            "                                      \nuniform sampler2D uColourTexture;                                 "
            "     \nuniform highp sampler2D uDepthTexture;                                 \n                          "
            "                                             \nvoid main()                                                "
            "            \n{                                                                      \n    gl_FragColor = "
            "texture2DLodCompat(uColourTexture, vTexCoord, 0.0); \n    gl_FragDepth = "
            "texture2DLodCompat(uDepthTexture, vTexCoord, 0.0).r;\n}                                                   "
            "                   \n");
        new (local_1210) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (ostream*)(local_1210 + 16),
            "in vec2 vTexCoord;                                                                                 \n     "
            "                                                                                              \nuniform "
            "vec4 uViewportLookupScale;                                                                 \nuniform "
            "sampler2D uColourTexture;                                                                  \nuniform "
            "highp sampler2D uDepthTexture;                                                             \n             "
            "                                                                                      \nvoid main()       "
            "                                                                                 \n{                      "
            "                                                                            \n   gl_FragColor = "
            "texture2DLodCompat(uColourTexture, vTexCoord, 0.0);                              \n                       "
            "                                                                            \n   highp float result = "
            "0.0;                                                                       \n   highp vec4 depths = "
            "textureGatherCompat(uDepthTexture, vTexCoord, uViewportLookupScale.zw);     \n   result = max(depths.x, "
            "max(depths.y, max(depths.z, depths.w)));                                 \n   gl_FragDepth = result;      "
            "                                                                    \n}                                   "
            "                                                               \n");
        new (local_10f8) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (ostream*)(local_10f8 + 16),
            "in vec2 vTexCoord;                                                     \n                                 "
            "                                      \nuniform sampler2D uColourTexture;                                 "
            "     \n                                                                       \nvoid main()               "
            "                                             \n{                                                          "
            "            \n    gl_FragColor = texture2DLodCompat(uColourTexture, vTexCoord, 0.0); \n}                  "
            "                                                    \n");
        new (local_fe0) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (ostream*)(local_fe0 + 16),
            "in vec2 vTexCoord;                                                         \n                             "
            "                                              \nuniform highp sampler2D uDepthTexture;                    "
            "                 \n                                                                           \nvoid "
            "main()                                                                \n{                                 "
            "                                         \n    gl_FragDepth = texture2DLodCompat(uDepthTexture, "
            "vTexCoord, 0.0).r;    \n}                                                                          \n");
        new (local_ec8) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (ostream*)(local_ec8 + 16),
            "in vec2 vTexCoord;                                                                                 \n     "
            "                                                                                              \nuniform "
            "vec4 uViewportLookupScale;                                                                 \nuniform "
            "highp sampler2D uDepthTexture;                                                             \n             "
            "                                                                                      \nvoid main()       "
            "                                                                                 \n{                      "
            "                                                                            \n   highp float result = "
            "0.0;                                                                       \n   highp vec4 depths = "
            "textureGatherCompat(uDepthTexture, vTexCoord, uViewportLookupScale.zw);     \n   result = max(depths.x, "
            "max(depths.y, max(depths.z, depths.w)));                                 \n   gl_FragDepth = result;      "
            "                                                                    \n}                                   "
            "                                                               \n");
        new (local_db0) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<((ostream*)(local_db0 + 16),
                        "\n                in vec2 vTexCoord;\n\n                uniform sampler2D uColourTexture;\n   "
                        "             uniform vec4 uSliceBounds;\n\n                void main()\n                {\n   "
                        "                 gl_FragColor = texture2DLodCompat(uColourTexture, vTexCoord * "
                        "uSliceBounds.zw + uSliceBounds.xy, 0.0);\n                }\n                ");
        new (local_c98) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<((ostream*)(local_c98 + 16),
                        "\n                in vec2 vTexCoord;\n\n                uniform highp sampler2D "
                        "uDepthTexture;\n                uniform vec4 uSliceBounds;\n\n                void main()\n   "
                        "             {\n                    gl_FragDepth = texture2DLodCompat(uDepthTexture, "
                        "vTexCoord * uSliceBounds.zw + uSliceBounds.xy, 0.0).r;\n                }\n                ");
        new (local_b80) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<((ostream*)(local_b80 + 16),
                        "\n                in vec2 vTexCoord;\n\n                uniform sampler2D uColourTexture;\n   "
                        "             uniform highp sampler2D uDepthTexture;\n                uniform vec4 "
                        "uSliceBounds;\n\n                void main()\n                {\n                    "
                        "gl_FragColor = texture2DLodCompat(uColourTexture, vTexCoord * uSliceBounds.zw + "
                        "uSliceBounds.xy, 0.0);\n                    gl_FragDepth = texture2DLodCompat(uDepthTexture, "
                        "vTexCoord * uSliceBounds.zw + uSliceBounds.xy, 0.0).r;\n                }\n                ");
        local_2c0->str();
        pcVar6 = (char*)local_2c0->c_str();
        local_1a8->str();
        pcVar7 = (char*)local_1a8->c_str();
        bVar2 = (field_3792, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
        local_1a8->~basic_string();
        local_2c0->~basic_string();
        local_2c0->str();
        pcVar6 = (char*)local_2c0->c_str();
        local_1a8->str();
        pcVar7 = (char*)local_1a8->c_str();
        bVar3 = (field_18640, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
        local_1a8->~basic_string();
        this_00 = (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_2c0;
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(this_00);
        pMVar8 = (MapArea*)this_00->Instance();
        bVar3 = bVar1 & bVar2 & bVar3;
        lVar9 = pMVar8->GetOrigin();
        if (*(char*)(lVar9 + 145) != '\0') {
            local_2c0->str();
            pcVar6 = (char*)local_2c0->c_str();
            local_1a8->str();
            pcVar7 = (char*)local_1a8->c_str();
            bVar1 = (field_80, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            local_1a8->~basic_string();
            local_2c0->~basic_string();
            local_2c0->str();
            pcVar6 = (char*)local_2c0->c_str();
            local_1a8->str();
            pcVar7 = (char*)local_1a8->c_str();
            bVar2 = (field_1936, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            local_1a8->~basic_string();
            local_2c0->~basic_string();
            local_2c0->str();
            local_34 = bVar2;
            pcVar6 = (char*)local_2c0->c_str();
            local_1a8->str();
            pcVar7 = (char*)local_1a8->c_str();
            bVar2 = (field_5648, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            local_1a8->~basic_string();
            local_2c0->~basic_string();
            local_2c0->str();
            local_33 = bVar2;
            pcVar6 = (char*)local_2c0->c_str();
            local_1a8->str();
            pcVar7 = (char*)local_1a8->c_str();
            bVar2 = (field_7504, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            local_32 = bVar1;
            local_1a8->~basic_string();
            local_2c0->~basic_string();
            local_2c0->str();
            pcVar6 = (char*)local_2c0->c_str();
            local_1a8->str();
            pcVar7 = (char*)local_1a8->c_str();
            local_31 = (field_22352, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            local_1a8->~basic_string();
            local_2c0->~basic_string();
            local_2c0->str();
            pcVar6 = (char*)local_2c0->c_str();
            local_1a8->str();
            pcVar7 = (char*)local_1a8->c_str();
            bVar1 = (field_26064, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            bVar3 = bVar3 & local_32 & local_34 & local_33 & bVar2 & local_31 & bVar1;
            local_1a8->~basic_string();
            pMVar8 = (MapArea*)local_2c0;
            pMVar8->~basic_string();
        }
        pMVar8 = (MapArea*)pMVar8->Instance();
        lVar9 = pMVar8->GetOrigin();
        if (*(char*)(lVar9 + 167) != '\0') {
            new (local_2c0) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (ostream*)(local_2c0 + 16),
                "in vec2 vTexCoord;                                                                                    "
                " \n                                                                                                   "
                "    \nuniform sampler2DMS uColourTexture;                                                             "
                "       \nuniform highp sampler2DMS uDepthTexture;                                                     "
                "          \n                                                                                          "
                "             \nvoid main()                                                                            "
                "                \n{                                                                                   "
                "                   \n   gl_FragColor = texelFetch(uColourTexture, ivec2(vTexCoord * "
                "vec2(textureSize(uColourTexture))), 0); \n   gl_FragDepth = texelFetch(uDepthTexture, ivec2(vTexCoord "
                "* vec2(textureSize(uDepthTexture))), 0).r; \n}                                                        "
                "                                              \n");
            new (local_1a8) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::
            operator<<((ostream*)(local_1a8 + 16),
                       "in vec2 vTexCoord;                                                                             "
                       "        \n                                                                                     "
                       "                  \nuniform vec4 uViewportLookupScale;                                         "
                       "                            \n                                                                 "
                       "                                      \nuniform sampler2DMS uColourTexture;                    "
                       "                                                \nuniform highp sampler2DMS uDepthTexture;     "
                       "                                                          \n                                   "
                       "                                                                    \nvoid main()              "
                       "                                                                              \n{              "
                       "                                                                                        \n   "
                       "gl_FragColor = texelFetch(uColourTexture, ivec2(vTexCoord * "
                       "vec2(textureSize(uColourTexture))), 0); \n                                                     "
                       "                                                  \n   highp float result = 0.0;               "
                       "                                                            \n   highp vec4 depths = "
                       "vec4(0.0);                                                                      \n   ivec2 "
                       "intTexCoord = ivec2(vTexCoord * uViewportLookupScale.xy);                                     "
                       "\n   depths.x = texelFetch(uDepthTexture, intTexCoord + ivec2(-1, -1), 0).r;                   "
                       "          \n   depths.y = texelFetch(uDepthTexture, intTexCoord + ivec2(-1, 1), 0).r;          "
                       "                    \n   depths.z = texelFetch(uDepthTexture, intTexCoord + ivec2(1, -1), "
                       "0).r;                              \n   depths.w = texelFetch(uDepthTexture, intTexCoord, "
                       "0).r;                                             \n   result = max(depths.x, max(depths.y, "
                       "max(depths.z, depths.w)));                                     \n                              "
                       "                                          ..." /* TRUNCATED STRING LITERAL */
            );
            new (local_a68) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (ostream*)(local_a68 + 16),
                "in vec2 vTexCoord;                                                     \n                             "
                "                                          \nuniform sampler2DMS uColourTexture;                       "
                "             \n                                                                       \nvoid main()   "
                "                                                         \n{                                          "
                "                            \n   gl_FragColor = texelFetch(uColourTexture, ivec2(vTexCoord * "
                "vec2(textureSize(uColourTexture))), 0); \n}                                                           "
                "           \n");
            new (local_950) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (ostream*)(local_950 + 16),
                "in vec2 vTexCoord;                                                     \n                             "
                "                                          \nuniform highp sampler2DMS uDepthTexture;                  "
                "             \n                                                                       \nvoid main()   "
                "                                                         \n{                                          "
                "                            \n   gl_FragDepth = texelFetch(uDepthTexture, ivec2(vTexCoord * "
                "vec2(textureSize(uDepthTexture))), 0).r; \n}                                                          "
                "            \n");
            new (local_838) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (ostream*)(local_838 + 16),
                "in vec2 vTexCoord;                                                                     \n             "
                "                                                                          \nuniform vec4 "
                "uViewportLookupScale;                                                     \n                          "
                "                                                             \nuniform highp sampler2DMS "
                "uDepthTexture;                                               \n                                       "
                "                                                \nvoid main()                                         "
                "                                   \n{                                                                "
                "                      \n   highp float result = 0.0;                                                  "
                "         \n   highp vec4 depths = vec4(0.0);                                                      \n  "
                " ivec2 intTexCoord = ivec2(vTexCoord * uViewportLookupScale.xy);                     \n   depths.x = "
                "texelFetch(uDepthTexture, intTexCoord + ivec2(-1, -1), 0).r;             \n   depths.y = "
                "texelFetch(uDepthTexture, intTexCoord + ivec2(-1, 1), 0).r;              \n   depths.z = "
                "texelFetch(uDepthTexture, intTexCoord + ivec2(1, -1), 0).r;              \n   depths.w = "
                "texelFetch(uDepthTexture, intTexCoord, 0).r;                             \n   result = max(depths.x, "
                "max(depths.y, max(depths.z, depths.w)));                     \n                                       "
                "                                                \n   gl_FragDepth = result;                           "
                "                                   \n}                                                                "
                "                      \n");
            new (local_720) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (ostream*)(local_720 + 16),
                "\n                    in vec2 vTexCoord;\n\n                    uniform sampler2DMS uColourTexture;\n "
                "                   uniform vec4 uSliceBounds;\n\n                    void main()\n                    "
                "{\n                        gl_FragColor = texelFetch(uColourTexture, ivec2(vTexCoord * "
                "uSliceBounds.zw + uSliceBounds.xy), 0);\n                    }\n                    ");
            new (local_608) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (ostream*)(local_608 + 16),
                "\n                    in vec2 vTexCoord;\n\n                    uniform highp sampler2DMS "
                "uDepthTexture;\n                    uniform vec4 uSliceBounds;\n\n                    void main()\n   "
                "                 {\n                        gl_FragDepth = texelFetch(uDepthTexture, ivec2(vTexCoord "
                "* uSliceBounds.zw + uSliceBounds.xy), 0).r;\n                    }\n                    ");
            new (local_4f0) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (ostream*)(local_4f0 + 16),
                "\n                    in vec2 vTexCoord;\n\n                    uniform sampler2DMS uColourTexture;\n "
                "                   uniform highp sampler2DMS uDepthTexture;\n                    uniform vec4 "
                "uSliceBounds;\n\n                    void main()\n                    {\n                        "
                "gl_FragColor = texelFetch(uColourTexture, ivec2(vTexCoord * uSliceBounds.zw + uSliceBounds.xy), 0);\n "
                "                       gl_FragDepth = texelFetch(uDepthTexture, ivec2(vTexCoord * uSliceBounds.zw + "
                "uSliceBounds.xy), 0).r;\n                    }\n                    ");
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_68);
            pcVar6 = (char*)local_68->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_50);
            pcVar7 = (char*)local_50->c_str();
            bVar1 = (field_9360, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            local_50->~basic_string();
            local_68->~basic_string();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_68);
            pcVar6 = (char*)local_68->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_50);
            pcVar7 = (char*)local_50->c_str();
            bVar2 = (field_11216, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            local_50->~basic_string();
            local_68->~basic_string();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_68);
            local_34 = bVar2;
            pcVar6 = (char*)local_68->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_50);
            pcVar7 = (char*)local_50->c_str();
            bVar2 = (field_13072, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            local_50->~basic_string();
            local_68->~basic_string();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_68);
            local_33 = bVar2;
            pcVar6 = (char*)local_68->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_50);
            pcVar7 = (char*)local_50->c_str();
            bVar2 = (field_14928, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            local_50->~basic_string();
            local_68->~basic_string();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_68);
            local_32 = bVar2;
            pcVar6 = (char*)local_68->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_50);
            pcVar7 = (char*)local_50->c_str();
            bVar2 = (field_16784, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            local_50->~basic_string();
            local_68->~basic_string();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_68);
            local_35 = bVar2;
            local_31 = bVar1;
            pcVar6 = (char*)local_68->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_50);
            pcVar7 = (char*)local_50->c_str();
            bVar1 = (field_20496, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            local_50->~basic_string();
            local_68->~basic_string();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_68);
            pcVar6 = (char*)local_68->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_50);
            pcVar7 = (char*)local_50->c_str();
            bVar2 = (field_24208, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            local_50->~basic_string();
            local_68->~basic_string();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_68);
            pcVar6 = (char*)local_68->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_50);
            pcVar7 = (char*)local_50->c_str();
            bVar4 = (field_27920, pcVar6, pcVar7, &local_90, 1, '\x04')->CreateFromSourceString();
            bVar3 = bVar3 & local_31 & local_34 & local_33 & local_32 & local_35 & bVar1 & bVar2 & bVar4;
            local_50->~basic_string();
            local_68->~basic_string();
            local_4f0->~PixelShaderSourceStream();
            local_608->~PixelShaderSourceStream();
            local_720->~PixelShaderSourceStream();
            local_838->~PixelShaderSourceStream();
            local_950->~PixelShaderSourceStream();
            local_a68->~PixelShaderSourceStream();
            local_1a8->~PixelShaderSourceStream();
            local_2c0->~PixelShaderSourceStream();
        }
        local_b80->~PixelShaderSourceStream();
        local_c98->~PixelShaderSourceStream();
        local_db0->~PixelShaderSourceStream();
        local_ec8->~PixelShaderSourceStream();
        local_fe0->~PixelShaderSourceStream();
        local_10f8->~PixelShaderSourceStream();
        local_1210->~PixelShaderSourceStream();
        local_1328->~PixelShaderSourceStream();
        local_3d8->~VertexShaderSourceStream();
        return bVar3;
    }

    // 0x100bde860, 240 bytes, placed by class name
    // RenderTargetResolver::DestroyRenderingResources()
    void RenderTargetResolver::DestroyRenderingResources() {
        field_29776->Destroy();
        Destroy();
        field_9360->Destroy();
        field_11216->Destroy();
        field_13072->Destroy();
        field_14928->Destroy();
        field_16784->Destroy();
        field_80->Destroy();
        field_1936->Destroy();
        field_3792->Destroy();
        field_5648->Destroy();
        field_7504->Destroy();
        field_18640->Destroy();
        field_20496->Destroy();
        field_22352->Destroy();
        field_24208->Destroy();
        field_26064->Destroy();
        field_27920->Destroy();
    }

    // 0x100bdea40, 2480 bytes, placed by class name
    // RenderTargetResolver::ResolveViaQuad(ImmediateRenderContext&, Texture const*, Texture const*, RenderTargets const*, unsigned int, math::Rect<unsigned int> const&, math::Rect<unsigned int> const&)
    void RenderTargetResolver::ResolveViaQuad(ImmediateRenderContext* param_1, Texture* param_2, Texture* param_3,
                                              RenderTargets* param_4, uint param_5, Rect* param_6, Rect* param_7) {
        undefined1* this_00;
        uint uVar1;
        bool bVar2;
        RenderTargetResolver* pRVar3;
        char cVar4;
        float fVar5;
        uint uVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        long lVar11;
        uint* puVar12;
        ShaderProgram* pSVar13;
        RenderPipelineState* pRVar14;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        Viewport* pVVar15;
        OutputMergerState* pOVar16;
        Layout* pLVar17;
        Texture* pTVar18;
        VertexDeclaration* pVVar19;
        uint uVar20;
        ShaderProgram* pSVar21;
        Texture* pTVar22;
        DrawCallState* pDVar23;
        byte bVar24;
        undefined1 auVar25[16];
        undefined1 local_618[24];
        undefined1 local_600[24];
        Texture* local_5e8;
        RenderPipelineState* local_5e0;
        DrawCallState local_5d8;
        uint* local_5a8;
        HashedString local_5a0;
        RenderTargets* local_590;
        float local_588;
        float local_584;
        float local_580;
        float local_57c;
        float local_574;
        RenderTargetResolver* local_570;
        ShaderProgram* local_568;
        float local_55c;
        OutputMergerState local_558;
        RenderPipelineState local_488;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_600._16_8_ = param_1;
        local_590 = param_4;
        local_570 = this;
        if ((param_5 & 1024) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("(resolveMask & STENCIL_BUFFER_BIT) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetResolver.cpp",
                      435, "Resolving stencil buffers is not currently supported");
        }
        if (param_2 == (Texture*)0 && param_3 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("srcColourTexture || srcDepthTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetResolver.cpp",
                      436, (char*)0);
        }
        pTVar22 = param_3;
        if (param_2 != (Texture*)0) {
            pTVar22 = param_2;
        }
        local_5a8 = (uint*)pTVar22->second();
        fVar5 = 0.0;
        new (local_600) oldscape::dash3d::GridRect(0, 0, *local_5a8, local_5a8[1]);
        cVar4 = param_6->Valid();
        if (cVar4 != '\0') {
            fVar5 = (float)math::Rect<int>::operator!=((Rect<int>*)param_6, (Rect*)local_600);
        }
        uVar20 = ~param_5;
        if (SUB41(fVar5, 0) != '\0') {
            if ((uVar20 & 16640) == 0) {
                if ((((param_2 == (Texture*)0) || (lVar11 = param_2->second(), *(uint*)(lVar11 + 16) < 2)) ||
                     (param_3 == (Texture*)0)) ||
                    (lVar11 = param_3->second(), *(uint*)(lVar11 + 16) < 2)) {
                    pSVar21 = (ShaderProgram*)local_570->field_26064;
                } else {
                    pSVar21 = (ShaderProgram*)local_570->field_27920;
                }
            } else if ((param_5 & 256) == 0) {
                if ((param_5 & 16384) == 0) {
                    pSVar21 = (ShaderProgram*)0;
                } else if ((param_2 == (Texture*)0) || (lVar11 = param_2->second(), *(uint*)(lVar11 + 16) < 2)) {
                    pSVar21 = (ShaderProgram*)local_570->field_18640;
                } else {
                    pSVar21 = (ShaderProgram*)local_570->field_20496;
                }
            } else if ((param_3 == (Texture*)0) || (lVar11 = param_3->second(), *(uint*)(lVar11 + 16) < 2)) {
                pSVar21 = (ShaderProgram*)local_570->field_22352;
            } else {
                pSVar21 = (ShaderProgram*)local_570->field_24208;
            }
            goto LAB_100bded29;
        }
        local_568 = (ShaderProgram*)param_2;
        local_55c = fVar5;
        if (param_3 == (Texture*)0) {
            bVar2 = false;
            if ((uVar20 & 16640) != 0)
                goto LAB_100bdec88;
        LAB_100bdebe6:
            if ((((local_568 == (ShaderProgram*)0) || (lVar11 = local_568->second(), *(uint*)(lVar11 + 16) < 2)) ||
                 (param_3 == (Texture*)0)) ||
                (lVar11 = param_3->second(), *(uint*)(lVar11 + 16) < 2)) {
                pSVar13 = (ShaderProgram*)local_570->field_1936;
                pSVar21 = (ShaderProgram*)local_570->field_80;
            } else {
                pSVar13 = (ShaderProgram*)local_570->field_11216;
                pSVar21 = (ShaderProgram*)local_570->field_9360;
            }
        LAB_100bded14:
            if (bVar2) {
                pSVar21 = pSVar13;
            }
        } else {
            puVar12 = (uint*)param_3->second();
            uVar1 = *puVar12;
            uVar6 = param_7->GetPos();
            bVar2 = true;
            if (uVar1 <= uVar6) {
                lVar11 = param_3->second();
                uVar1 = *(uint*)(lVar11 + 4);
                uVar6 = param_7->GetLevel();
                bVar2 = uVar6 < uVar1;
            }
            if ((uVar20 & 16640) == 0)
                goto LAB_100bdebe6;
        LAB_100bdec88:
            fVar5 = local_55c;
            param_2 = (Texture*)local_568;
            if ((param_5 & 256) != 0) {
                if ((param_3 == (Texture*)0) || (lVar11 = param_3->second(), *(uint*)(lVar11 + 16) < 2)) {
                    pSVar13 = (ShaderProgram*)local_570->field_5648;
                    pSVar21 = (ShaderProgram*)local_570->field_7504;
                } else {
                    pSVar13 = (ShaderProgram*)local_570->field_16784;
                    pSVar21 = (ShaderProgram*)local_570->field_14928;
                }
                goto LAB_100bded14;
            }
            if ((param_5 & 16384) != 0) {
                if ((local_568 == (ShaderProgram*)0) || (lVar11 = local_568->second(), *(uint*)(lVar11 + 16) < 2)) {
                    pSVar21 = (ShaderProgram*)local_570->field_3792;
                } else {
                    pSVar21 = (ShaderProgram*)local_570->field_13072;
                }
                goto LAB_100bded29;
            }
            pSVar21 = (ShaderProgram*)0;
        }
        param_2 = (Texture*)local_568;
        fVar5 = local_55c;
    LAB_100bded29:
        if ((pSVar21 == (ShaderProgram*)0) || (iVar7 = pSVar21->GetNativeShaderProgram(), iVar7 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                            "rendertargets/RenderTargetResolver.cpp",
                            526, "Attempting to resolve unsupported texture format");
        }
        local_568 = pSVar21;
        new (&local_5d8) DrawCallState();
        new (&local_488) RenderPipelineState();
        local_5d8.SetRenderPipelineState(&local_488);
        new (&local_558) OutputMergerState();
        local_5e8 = param_3;
        local_574 = (float)param_5;
        local_55c = fVar5;
        local_5d8.SetOutputMergerState(&local_558);
        pDVar23 = &local_5d8;
        pRVar14 = (RenderPipelineState*)pDVar23->GetRenderPipelineState();
        lVar11 = pDVar23->Instance();
        pRVar14->SetRasteriserState((RasteriserState*)(lVar11 + 1200));
        pDVar23 = &local_5d8;
        this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar23->GetRenderPipelineState();
        auVar25 = pDVar23->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_01, (EntityHighlight**)(auVar25._0_8_ + 1524), auVar25._8_8_);
        pRVar14 = (RenderPipelineState*)local_5d8.GetRenderPipelineState();
        pRVar14->SetShaderProgram(local_568);
        iVar7 = param_7->GetX();
        iVar8 = param_7->GetZ();
        iVar9 = param_7->GetPos();
        iVar10 = param_7->GetLevel();
        new (local_618) Viewport(iVar7, iVar8, iVar9, iVar10, 0.0, 1.0);
        fVar5 = local_574;
        pTVar22 = local_5e8;
        pVVar15 = (Viewport*)local_5d8.GetOutputMergerState();
        OutputMergerState::SetViewports(pVVar15, (uint)local_618);
        pOVar16 = (OutputMergerState*)local_5d8.GetOutputMergerState();
        pOVar16->SetRenderTargets(local_590);
        bVar24 = (byte)((uint)fVar5 >> 8) & pTVar22 != (Texture*)0;
        if ((bVar24 == 1) && (cVar4 = pTVar22->IsCreated(), cVar4 != '\0')) {
            local_5e0 = (RenderPipelineState*)local_5d8.GetRenderPipelineState();
            new (&local_5a0) HashedString("uDepthTexture");
            pSVar21 = local_568;
            iVar7 = local_568->GetConstIndex(&local_5a0);
            lVar11 = pSVar21->Instance();
            local_5e0->SetPSTextureSamplerPair(1, pTVar22, iVar7, (SamplerState*)(lVar11 + 80), false);
            pDVar23 = &local_5d8;
            pLVar17 = (Layout*)pDVar23->GetRenderPipelineState();
            lVar11 = pDVar23->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(pLVar17, lVar11 + 900);
            pOVar16 = (OutputMergerState*)local_5d8.GetOutputMergerState();
            if (local_590 == (RenderTargets*)0) {
                pTVar18 = (Texture*)0;
            } else {
                pTVar18 = (Texture*)local_590->GetDepthStencilTargetTexture();
            }
            uVar20 = GetDepthTextureClearFlags(pTVar18);
            pOVar16->SetClearFlags(uVar20);
            pOVar16 = (OutputMergerState*)local_5d8.GetOutputMergerState();
            pOVar16->SetDepthStencilClear(1.0, '\0');
        } else {
            pDVar23 = &local_5d8;
            pLVar17 = (Layout*)pDVar23->GetRenderPipelineState();
            lVar11 = pDVar23->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(pLVar17, lVar11 + 1080);
        }
        if (((((uint)fVar5 & 16384) != 0) && (param_2 != (Texture*)0)) &&
            (cVar4 = param_2->IsCreated(), cVar4 != '\0')) {
            pRVar14 = (RenderPipelineState*)local_5d8.GetRenderPipelineState();
            new (&local_5a0) HashedString("uColourTexture");
            pSVar21 = local_568;
            iVar7 = local_568->GetConstIndex(&local_5a0);
            lVar11 = pSVar21->Instance();
            pRVar14->SetPSTextureSamplerPair(0, param_2, iVar7, (SamplerState*)(lVar11 + 272), false);
        }
        if (local_55c._0_1_ == '\0') {
            if ((bVar24 != 0) && (cVar4 = pTVar22->IsCreated(), cVar4 != '\0')) {
                new (&local_5a0) HashedString("uViewportLookupScale");
                pSVar21 = local_568;
                iVar7 = local_568->GetConstIndex(&local_5a0);
                if (iVar7 != -1) {
                    new (&local_588) ImVec4((float)*local_5a8, (float)local_5a8[1], 1.0 / (float)*local_5a8,
                                            1.0 / (float)local_5a8[1]);
                    pSVar21->SetShaderConstVector4(&local_5a0, 1, (Vector4T*)&local_588, 1);
                }
            }
        } else {
            new (&local_5a0) HashedString("uSliceBounds");
            pSVar21 = local_568;
            iVar7 = local_568->GetConstIndex(&local_5a0);
            if (iVar7 != -1) {
                uVar20 = param_6->GetX();
                local_55c = (float)uVar20;
                uVar20 = param_6->GetZ();
                local_590 = (RenderTargets*)CONCAT44(local_590._4_4_, (float)uVar20);
                uVar20 = param_6->GetPos();
                local_574 = (float)uVar20;
                uVar20 = param_6->GetLevel();
                new (&local_588) ImVec4(local_55c, local_590._0_4_, local_574, (float)uVar20);
                if (local_5a8[4] == 1) {
                    local_588 = local_588 * (1.0 / (float)*local_5a8);
                    local_584 = local_584 * (1.0 / (float)local_5a8[1]);
                    local_580 = (1.0 / (float)*local_5a8) * local_580;
                    local_57c = (1.0 / (float)local_5a8[1]) * local_57c;
                }
                pSVar21->SetShaderConstVector4(&local_5a0, 1, (Vector4T*)&local_588, 1);
            }
        }
        pRVar3 = local_570;
        this_00 = local_570->field_29776;
        pVVar19 = (VertexDeclaration*)local_568->second();
        this_00->SetVertexStreamData(pVVar19, pRVar3);
        local_5d8.SetInputAssemblerState(this_00);
        local_600._16_8_->DrawPrimitives(&local_5d8, 5, 0, 4);
        local_558.~OutputMergerState();
        local_488.~RenderPipelineState();
        local_5d8.~DrawCallState();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::render
