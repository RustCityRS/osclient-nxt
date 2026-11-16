// libs/hal/render/rendertargets/RenderTargetResolver.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "RenderTargetResolver.h"

namespace jag::render {
    // 0x100bdd470
    uint8_t RenderTargetResolver::CreateRenderingResources() {
        uint8_t bVar4;
        uint8_t local_1328[280];
        uint8_t local_1210[280];
        uint8_t local_10f8[280];
        uint8_t local_fe0[280];
        uint8_t local_ec8[280];
        uint8_t local_db0[280];
        uint8_t local_c98[280];
        uint8_t local_b80[280];
        uint8_t local_a68[280];
        uint8_t local_950[280];
        uint8_t local_838[280];
        uint8_t local_720[280];
        uint8_t local_608[280];
        uint8_t local_4f0[280];
        uint8_t local_3d8[280];
        uint8_t local_2c0[280];
        uint8_t local_1a8[280];
        ReturnValue local_68;
        ReturnValue local_50;
        uint8_t local_35;
        uint8_t local_34;
        uint8_t local_33;
        uint8_t local_32;
        uint8_t local_31;

        if (CreateRenderingResources()::quadVertices == '\0') {
            if (___cxa_guard_acquire(&CreateRenderingResources()::quadVertices) != 0) {
                new ((Point<float>*)&CreateRenderingResources()::quadVertices) math::Point(0.0, 1.0);
                new (&DAT_104235048) math::Point(1.0, 1.0);
                new (&DAT_104235050) math::Point(0.0, 0.0);
                new (&DAT_104235058) math::Point(1.0, 0.0);
                ___cxa_guard_release(&CreateRenderingResources()::quadVertices);
            }
        }
        uint8_t bVar1 = Create(32, 0, &CreateRenderingResources()::quadVertices);
        VertexElementDesc local_90(0, "aTexCoord", 1, false, 5, 0);
        new (local_3d8) VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_3d8 + 16),
            "attribute vec2 aTexCoord;                                              \n                                 "
            "                                      \nout vec2 vTexCoord;                                               "
            "     \n                                                                       \nvoid main()               "
            "                                             \n{                                                          "
            "            \n   vTexCoord = aTexCoord;                                              \n                   "
            "                                                    \n   gl_Position = vec4(aTexCoord * 2.0 - 1.0, 0.0, "
            "1.0);                \n}                                                                      \n");
        new (local_1328) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_1328 + 16),
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
            (basic_ostream<char, std::char_traits<char> _>*)(local_1210 + 16),
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
            (basic_ostream<char, std::char_traits<char> _>*)(local_10f8 + 16),
            "in vec2 vTexCoord;                                                     \n                                 "
            "                                      \nuniform sampler2D uColourTexture;                                 "
            "     \n                                                                       \nvoid main()               "
            "                                             \n{                                                          "
            "            \n    gl_FragColor = texture2DLodCompat(uColourTexture, vTexCoord, 0.0); \n}                  "
            "                                                    \n");
        new (local_fe0) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_fe0 + 16),
            "in vec2 vTexCoord;                                                         \n                             "
            "                                              \nuniform highp sampler2D uDepthTexture;                    "
            "                 \n                                                                           \nvoid "
            "main()                                                                \n{                                 "
            "                                         \n    gl_FragDepth = texture2DLodCompat(uDepthTexture, "
            "vTexCoord, 0.0).r;    \n}                                                                          \n");
        new (local_ec8) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_ec8 + 16),
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
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_db0 + 16),
                        "\n                in vec2 vTexCoord;\n\n                uniform sampler2D uColourTexture;\n   "
                        "             uniform vec4 uSliceBounds;\n\n                void main()\n                {\n   "
                        "                 gl_FragColor = texture2DLodCompat(uColourTexture, vTexCoord * "
                        "uSliceBounds.zw + uSliceBounds.xy, 0.0);\n                }\n                ");
        new (local_c98) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_c98 + 16),
                        "\n                in vec2 vTexCoord;\n\n                uniform highp sampler2D "
                        "uDepthTexture;\n                uniform vec4 uSliceBounds;\n\n                void main()\n   "
                        "             {\n                    gl_FragDepth = texture2DLodCompat(uDepthTexture, "
                        "vTexCoord * uSliceBounds.zw + uSliceBounds.xy, 0.0).r;\n                }\n                ");
        new (local_b80) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_b80 + 16),
                        "\n                in vec2 vTexCoord;\n\n                uniform sampler2D uColourTexture;\n   "
                        "             uniform highp sampler2D uDepthTexture;\n                uniform vec4 "
                        "uSliceBounds;\n\n                void main()\n                {\n                    "
                        "gl_FragColor = texture2DLodCompat(uColourTexture, vTexCoord * uSliceBounds.zw + "
                        "uSliceBounds.xy, 0.0);\n                    gl_FragDepth = texture2DLodCompat(uDepthTexture, "
                        "vTexCoord * uSliceBounds.zw + uSliceBounds.xy, 0.0).r;\n                }\n                ");
        *local_2c0 = local_3d8->str();
        auto pcVar6 = local_2c0->c_str();
        *local_1a8 = local_10f8->str();
        auto pcVar7 = local_1a8->c_str();
        uint8_t bVar2 = field_3792->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
        *local_2c0 = local_3d8->str();
        pcVar6 = (char*)local_2c0->c_str();
        *local_1a8 = local_db0->str();
        pcVar7 = (char*)local_1a8->c_str();
        uint8_t bVar3 = field_18640->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>* this_00 =
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_2c0;
        this_00->~basic_string();
        auto pMVar8 = this_00->Instance();
        bVar3 = bVar1 & bVar2 & bVar3;
        long lVar9 = pMVar8->GetOrigin();
        if (*(char*)(lVar9 + 145) != '\0') {
            *local_2c0 = local_3d8->str();
            pcVar6 = (char*)local_2c0->c_str();
            *local_1a8 = local_1328->str();
            pcVar7 = (char*)local_1a8->c_str();
            bVar1 = field_80->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
            local_1a8->~basic_string();
            local_2c0->~basic_string();
            *local_2c0 = local_3d8->str();
            pcVar6 = (char*)local_2c0->c_str();
            *local_1a8 = local_1210->str();
            pcVar7 = (char*)local_1a8->c_str();
            bVar2 = field_1936->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
            local_1a8->~basic_string();
            local_2c0->~basic_string();
            *local_2c0 = local_3d8->str();
            local_34 = bVar2;
            pcVar6 = (char*)local_2c0->c_str();
            *local_1a8 = local_fe0->str();
            pcVar7 = (char*)local_1a8->c_str();
            bVar2 = field_5648->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
            local_1a8->~basic_string();
            local_2c0->~basic_string();
            *local_2c0 = local_3d8->str();
            local_33 = bVar2;
            pcVar6 = (char*)local_2c0->c_str();
            *local_1a8 = local_ec8->str();
            pcVar7 = (char*)local_1a8->c_str();
            bVar2 = field_7504->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
            local_32 = bVar1;
            local_1a8->~basic_string();
            local_2c0->~basic_string();
            *local_2c0 = local_3d8->str();
            pcVar6 = (char*)local_2c0->c_str();
            *local_1a8 = local_c98->str();
            pcVar7 = (char*)local_1a8->c_str();
            local_31 = field_22352->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
            local_1a8->~basic_string();
            local_2c0->~basic_string();
            *local_2c0 = local_3d8->str();
            pcVar6 = (char*)local_2c0->c_str();
            *local_1a8 = local_b80->str();
            pcVar7 = (char*)local_1a8->c_str();
            bVar1 = field_26064->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
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
                (basic_ostream<char, std::char_traits<char> _>*)(local_2c0 + 16),
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
            operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_1a8 + 16),
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
                (basic_ostream<char, std::char_traits<char> _>*)(local_a68 + 16),
                "in vec2 vTexCoord;                                                     \n                             "
                "                                          \nuniform sampler2DMS uColourTexture;                       "
                "             \n                                                                       \nvoid main()   "
                "                                                         \n{                                          "
                "                            \n   gl_FragColor = texelFetch(uColourTexture, ivec2(vTexCoord * "
                "vec2(textureSize(uColourTexture))), 0); \n}                                                           "
                "           \n");
            new (local_950) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_950 + 16),
                "in vec2 vTexCoord;                                                     \n                             "
                "                                          \nuniform highp sampler2DMS uDepthTexture;                  "
                "             \n                                                                       \nvoid main()   "
                "                                                         \n{                                          "
                "                            \n   gl_FragDepth = texelFetch(uDepthTexture, ivec2(vTexCoord * "
                "vec2(textureSize(uDepthTexture))), 0).r; \n}                                                          "
                "            \n");
            new (local_838) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_838 + 16),
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
                (basic_ostream<char, std::char_traits<char> _>*)(local_720 + 16),
                "\n                    in vec2 vTexCoord;\n\n                    uniform sampler2DMS uColourTexture;\n "
                "                   uniform vec4 uSliceBounds;\n\n                    void main()\n                    "
                "{\n                        gl_FragColor = texelFetch(uColourTexture, ivec2(vTexCoord * "
                "uSliceBounds.zw + uSliceBounds.xy), 0);\n                    }\n                    ");
            new (local_608) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_608 + 16),
                "\n                    in vec2 vTexCoord;\n\n                    uniform highp sampler2DMS "
                "uDepthTexture;\n                    uniform vec4 uSliceBounds;\n\n                    void main()\n   "
                "                 {\n                        gl_FragDepth = texelFetch(uDepthTexture, ivec2(vTexCoord "
                "* uSliceBounds.zw + uSliceBounds.xy), 0).r;\n                    }\n                    ");
            new (local_4f0) PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_4f0 + 16),
                "\n                    in vec2 vTexCoord;\n\n                    uniform sampler2DMS uColourTexture;\n "
                "                   uniform highp sampler2DMS uDepthTexture;\n                    uniform vec4 "
                "uSliceBounds;\n\n                    void main()\n                    {\n                        "
                "gl_FragColor = texelFetch(uColourTexture, ivec2(vTexCoord * uSliceBounds.zw + uSliceBounds.xy), 0);\n "
                "                       gl_FragDepth = texelFetch(uDepthTexture, ivec2(vTexCoord * uSliceBounds.zw + "
                "uSliceBounds.xy), 0).r;\n                    }\n                    ");
            local_68 = local_3d8->str();
            pcVar6 = (char*)local_68.c_str();
            local_50 = local_2c0->str();
            pcVar7 = (char*)local_50.c_str();
            bVar1 = field_9360->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
            local_68 = local_3d8->str();
            pcVar6 = (char*)local_68.c_str();
            local_50 = local_1a8->str();
            pcVar7 = (char*)local_50.c_str();
            bVar2 = field_11216->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
            local_68 = local_3d8->str();
            local_34 = bVar2;
            pcVar6 = (char*)local_68.c_str();
            local_50 = local_a68->str();
            pcVar7 = (char*)local_50.c_str();
            bVar2 = field_13072->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
            local_68 = local_3d8->str();
            local_33 = bVar2;
            pcVar6 = (char*)local_68.c_str();
            local_50 = local_950->str();
            pcVar7 = (char*)local_50.c_str();
            bVar2 = field_14928->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
            local_68 = local_3d8->str();
            local_32 = bVar2;
            pcVar6 = (char*)local_68.c_str();
            local_50 = local_838->str();
            pcVar7 = (char*)local_50.c_str();
            bVar2 = field_16784->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
            local_68 = local_3d8->str();
            local_35 = bVar2;
            local_31 = bVar1;
            pcVar6 = (char*)local_68.c_str();
            local_50 = local_720->str();
            pcVar7 = (char*)local_50.c_str();
            bVar1 = field_20496->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
            local_68 = local_3d8->str();
            pcVar6 = (char*)local_68.c_str();
            local_50 = local_608->str();
            pcVar7 = (char*)local_50.c_str();
            bVar2 = field_24208->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
            local_68 = local_3d8->str();
            pcVar6 = (char*)local_68.c_str();
            local_50 = local_4f0->str();
            pcVar7 = (char*)local_50.c_str();
            bVar4 = field_27920->CreateFromSourceString(pcVar6, pcVar7, &local_90, 1, '\x04');
            bVar3 = bVar3 & local_31 & local_34 & local_33 & local_32 & local_35 & bVar1 & bVar2 & bVar4;
        }
        return bVar3;
    }

    // 0x100bde860
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

    // 0x100bdea40
    void RenderTargetResolver::ResolveViaQuad(ImmediateRenderContext& immediateRenderContext, const Texture* texture1,
                                              const Texture* texture2, const RenderTargets* renderTargets,
                                              unsigned int arg5, const math::Rect<unsigned int>& rect1,
                                              const math::Rect<unsigned int>& rect2) {
        unsigned int uVar1;
        bool bVar2;
        unsigned int uVar5;
        int iVar6;
        long lVar7;
        unsigned int* puVar8;
        ShaderProgram* pSVar9;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        Layout* pLVar12;
        Texture* texture;
        VertexDeclaration* vertexDeclaration;
        ShaderProgram* pSVar14;
        uint8_t local_618[24];
        uint8_t local_600[24];
        RenderPipelineState* local_5e0;
        HashedString local_5a0;
        float local_588;
        float local_584;
        float local_580;
        float local_57c;

        local_600._16_8_ = immediateRenderContext;
        RenderTargets* local_590 = renderTargets;
        if ((arg5 & 1024) != 0) {
            LogAssert("(resolveMask & STENCIL_BUFFER_BIT) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetResolver.cpp",
                      435, "Resolving stencil buffers is not currently supported");
        }
        if (texture1 == nullptr && texture2 == nullptr) {
            LogAssert("srcColourTexture || srcDepthTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "RenderTargetResolver.cpp",
                      436, nullptr);
        }
        Texture* pTVar15 = texture2;
        if (texture1 != nullptr) {
            pTVar15 = texture1;
        }
        auto local_5a8 = pTVar15->second();
        float fVar4 = 0.0;
        new (local_600) oldscape::dash3d::GridRect(0, 0, *local_5a8, local_5a8[1]);
        bool cVar3 = rect1.Valid();
        if (cVar3) {
            fVar4 = (float)rect1 != *local_600;
        }
        unsigned int uVar13 = ~arg5;
        if ((uint8_t)fVar4 != '\0') {
            if ((uVar13 & 16640) == 0) {
                if ((((texture1 == nullptr) || (lVar7 = texture1->second(), *(unsigned int*)(lVar7 + 16) < 2)) ||
                     (texture2 == nullptr)) ||
                    (lVar7 = texture2->second(), *(unsigned int*)(lVar7 + 16) < 2)) {
                    pSVar14 = (ShaderProgram*)field_26064;
                } else {
                    pSVar14 = (ShaderProgram*)field_27920;
                }
            } else if ((arg5 & 256) == 0) {
                if ((arg5 & 16384) == 0) {
                    pSVar14 = nullptr;
                } else if ((texture1 == nullptr) || (lVar7 = texture1->second(), *(unsigned int*)(lVar7 + 16) < 2)) {
                    pSVar14 = (ShaderProgram*)field_18640;
                } else {
                    pSVar14 = (ShaderProgram*)field_20496;
                }
            } else if ((texture2 == nullptr) || (lVar7 = texture2->second(), *(unsigned int*)(lVar7 + 16) < 2)) {
                pSVar14 = (ShaderProgram*)field_22352;
            } else {
                pSVar14 = (ShaderProgram*)field_24208;
            }
            goto LAB_100bded29;
        }
        ShaderProgram* local_568 = (ShaderProgram*)texture1;
        float local_55c = fVar4;
        if (texture2 == nullptr) {
            bVar2 = false;
            if ((uVar13 & 16640) != 0)
                goto LAB_100bdec88;
        LAB_100bdebe6:
            if ((((local_568 == nullptr) || (lVar7 = local_568->second(), *(unsigned int*)(lVar7 + 16) < 2)) ||
                 (texture2 == nullptr)) ||
                (lVar7 = texture2->second(), *(unsigned int*)(lVar7 + 16) < 2)) {
                pSVar9 = (ShaderProgram*)field_1936;
                pSVar14 = (ShaderProgram*)field_80;
            } else {
                pSVar9 = (ShaderProgram*)field_11216;
                pSVar14 = (ShaderProgram*)field_9360;
            }
        LAB_100bded14:
            if (bVar2) {
                pSVar14 = pSVar9;
            }
        } else {
            puVar8 = (unsigned int*)texture2->second();
            uVar1 = *puVar8;
            uVar5 = rect2.GetPos();
            bVar2 = true;
            if (uVar1 <= uVar5) {
                lVar7 = texture2->second();
                uVar1 = *(unsigned int*)(lVar7 + 4);
                uVar5 = rect2.GetLevel();
                bVar2 = uVar5 < uVar1;
            }
            if ((uVar13 & 16640) == 0)
                goto LAB_100bdebe6;
        LAB_100bdec88:
            fVar4 = local_55c;
            texture1 = (Texture*)local_568;
            if ((arg5 & 256) != 0) {
                if ((texture2 == nullptr) || (lVar7 = texture2->second(), *(unsigned int*)(lVar7 + 16) < 2)) {
                    pSVar9 = (ShaderProgram*)field_5648;
                    pSVar14 = (ShaderProgram*)field_7504;
                } else {
                    pSVar9 = (ShaderProgram*)field_16784;
                    pSVar14 = (ShaderProgram*)field_14928;
                }
                goto LAB_100bded14;
            }
            if ((arg5 & 16384) != 0) {
                if ((local_568 == nullptr) || (lVar7 = local_568->second(), *(unsigned int*)(lVar7 + 16) < 2)) {
                    pSVar14 = (ShaderProgram*)field_3792;
                } else {
                    pSVar14 = (ShaderProgram*)field_13072;
                }
                goto LAB_100bded29;
            }
            pSVar14 = nullptr;
        }
        texture1 = (Texture*)local_568;
        fVar4 = local_55c;
    LAB_100bded29:
        if ((pSVar14 == nullptr) || (iVar6 = pSVar14->GetNativeShaderProgram(), iVar6 == 0)) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                            "rendertargets/RenderTargetResolver.cpp",
                            526, "Attempting to resolve unsupported texture format");
        }
        local_568 = pSVar14;
        DrawCallState local_5d8;
        RenderPipelineState local_488;
        local_5d8.SetRenderPipelineState(&local_488);
        OutputMergerState local_558;
        float local_574 = (float)arg5;
        local_55c = fVar4;
        local_5d8.SetOutputMergerState(&local_558);
        DrawCallState* pDVar16 = &local_5d8;
        auto pRVar10 = pDVar16->GetRenderPipelineState();
        lVar7 = pDVar16->Instance();
        pRVar10->SetRasteriserState((lVar7 + 1200));
        pDVar16 = &local_5d8;
        this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar16->GetRenderPipelineState();
        lVar7 = pDVar16->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_01, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar7 + 1524));
        pRVar10 = (RenderPipelineState*)local_5d8.GetRenderPipelineState();
        pRVar10->SetShaderProgram(local_568);
        iVar6 = rect2.GetX();
        int arg2 = rect2.GetZ();
        int arg3 = rect2.GetPos();
        int arg4 = rect2.GetLevel();
        new (local_618) Viewport(iVar6, arg2, arg3, arg4, 0.0, 1.0);
        fVar4 = local_574;
        pTVar15 = texture2;
        auto pOVar11 = local_5d8.GetOutputMergerState();
        pOVar11->SetViewports(local_618, 1);
        pOVar11 = local_5d8.GetOutputMergerState();
        pOVar11->SetRenderTargets(local_590);
        uint8_t bVar17 = (uint8_t)((unsigned int)fVar4 >> 8) & pTVar15 != nullptr;
        if ((bVar17 == 1) && (cVar3 = pTVar15->IsCreated(), cVar3)) {
            local_5e0 = (RenderPipelineState*)local_5d8.GetRenderPipelineState();
            local_5a0 = HashedString("uDepthTexture");
            pSVar14 = local_568;
            iVar6 = local_568->GetConstIndex(local_5a0);
            lVar7 = pSVar14->Instance();
            local_5e0->SetPSTextureSamplerPair(1, pTVar15, iVar6, (lVar7 + 80), false);
            pDVar16 = &local_5d8;
            pLVar12 = (Layout*)pDVar16->GetRenderPipelineState();
            lVar7 = pDVar16->Instance();
            pLVar12->SetHeapSize((lVar7 + 900));
            pOVar11 = local_5d8.GetOutputMergerState();
            if (local_590 == nullptr) {
                texture = nullptr;
            } else {
                texture = (Texture*)local_590->GetDepthStencilTargetTexture();
            }
            uVar13 = GetDepthTextureClearFlags(texture);
            pOVar11->SetClearFlags(uVar13);
            pOVar11 = local_5d8.GetOutputMergerState();
            pOVar11->SetDepthStencilClear(1.0, '\0');
        } else {
            pDVar16 = &local_5d8;
            pLVar12 = (Layout*)pDVar16->GetRenderPipelineState();
            lVar7 = pDVar16->Instance();
            pLVar12->SetHeapSize((lVar7 + 1080));
        }
        if (((((unsigned int)fVar4 & 16384) != 0) && (texture1 != nullptr)) && (cVar3 = texture1->IsCreated(), cVar3)) {
            pRVar10 = (RenderPipelineState*)local_5d8.GetRenderPipelineState();
            local_5a0 = HashedString("uColourTexture");
            pSVar14 = local_568;
            iVar6 = local_568->GetConstIndex(local_5a0);
            lVar7 = pSVar14->Instance();
            pRVar10->SetPSTextureSamplerPair(0, texture1, iVar6, (lVar7 + 272), false);
        }
        if (local_55c._0_1_ == '\0') {
            if ((bVar17 != 0) && (cVar3 = pTVar15->IsCreated(), cVar3)) {
                local_5a0 = HashedString("uViewportLookupScale");
                pSVar14 = local_568;
                iVar6 = local_568->GetConstIndex(local_5a0);
                if (iVar6 != -1) {
                    new (&local_588) ImVec4((float)*local_5a8, (float)local_5a8[1], 1.0 / (float)*local_5a8,
                                            1.0 / (float)local_5a8[1]);
                    pSVar14->SetShaderConstVector4(&local_5a0, 1, &local_588, 1);
                }
            }
        } else {
            local_5a0 = HashedString("uSliceBounds");
            pSVar14 = local_568;
            iVar6 = local_568->GetConstIndex(local_5a0);
            if (iVar6 != -1) {
                uVar13 = rect1.GetX();
                local_55c = (float)uVar13;
                uVar13 = rect1.GetZ();
                local_590 = (RenderTargets*)(((uint64_t)local_590._4_4_ << 32) | (uint32_t)((float)uVar13));
                uVar13 = rect1.GetPos();
                local_574 = (float)uVar13;
                uVar13 = rect1.GetLevel();
                new (&local_588) ImVec4(local_55c, local_590._0_4_, local_574, (float)uVar13);
                if (local_5a8[4] == 1) {
                    local_588 = local_588 * (1.0 / (float)*local_5a8);
                    local_584 = local_584 * (1.0 / (float)local_5a8[1]);
                    local_580 = (1.0 / (float)*local_5a8) * local_580;
                    local_57c = (1.0 / (float)local_5a8[1]) * local_57c;
                }
                pSVar14->SetShaderConstVector4(&local_5a0, 1, &local_588, 1);
            }
        }
        uint8_t* this_00 = field_29776;
        vertexDeclaration = (VertexDeclaration*)local_568->second();
        this_00->SetVertexStreamData(vertexDeclaration, this);
        local_5d8.SetInputAssemblerState(this_00);
        local_600._16_8_->DrawPrimitives(local_5d8, 5, 0, 4);
    }

} // namespace jag::render
