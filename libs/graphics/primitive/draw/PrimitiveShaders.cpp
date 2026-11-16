// libs/graphics/primitive/draw/PrimitiveShaders.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.draw

#include "PrimitiveShaders.h"

namespace jag {
    // 0x100bc0ea0
    PrimitiveShaderFamily::PrimitiveShaderFamily()
        : Singleton<PrimitiveShaderFamily>(), render::RenderDeviceCallback(true, 1) {
        if (Init() == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/draw/"
                      "PrimitiveShaders.cpp",
                      12, "Failed to initialise primitive shaders");
        }
    }

    // 0x100bc0fb0
    uint32_t PrimitiveShaderFamily::Init() {
        uint8_t local_3c0[280];
        uint8_t local_2a8[280];
        uint8_t local_190[280];
        ReturnValue local_78;

        new (local_2a8) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_2a8 + 16),
                        "                                                                       \nattribute vec3 aPos; "
                        "                                                  \n                                          "
                        "                             \nvoid main()                                                    "
                        "        \n{                                                                      \n   "
                        "gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);                    \n}\n");
        new (local_3c0) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
                        "void main()                                                            \n{                    "
                        "                                                  \n}\n");
        array<render::ShaderProgram, 18ul>* local_58 = (array<render::ShaderProgram, 18ul>*)&field_16;
        ShaderProgram* pSVar4 = (ShaderProgram*)(*local_58)[0];
        *local_190 = local_2a8->str();
        auto pcVar5 = local_190->c_str();
        auto local_50 = local_3c0->str();
        auto pcVar6 = local_50.c_str();
        uint8_t bVar1 = pSVar4->CreateFromSourceString(pcVar5, pcVar6,
                                                       (VertexElementDesc*)&PrimVertPos::m_VertexElemDescs, 1, '\x01');
        pSVar4->SetName("PRIM_SHADER_POS");
        new (local_2a8) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_2a8 + 16),
            "                                                                       \nattribute vec3 aPos;             "
            "                                      \nattribute vec4 aColour;                                           "
            "     \n                                                                       \nuniform mat4 uWorldMat;   "
            "                                             \nuniform mat4 uViewProjMat;                                 "
            "            \n                                                                       \nout vec4 "
            "vVertexAlbedo;                                                \n                                          "
            "                             \nvoid main()                                                            \n{ "
            "                                                                     \n   vec4 worldPos = uWorldMat * "
            "vec4(aPos.x, aPos.y, aPos.z, 1.0);      \n   vec4 clipPos = uViewProjMat * worldPos;                      "
            "       \n                                                                       \n   vVertexAlbedo = "
            "aColour;                                            \n                                                    "
            "                   \n   gl_Position = clipPos;                                              \n}\n");
        new (local_3c0) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
            "                                                                       \nin vec4 vVertexAlbedo;           "
            "                                      \n                                                                  "
            "     \nvoid main()                                                            \n{                         "
            "                                             \n   vec4 finalColour = vec4(vVertexAlbedo.rgb, "
            "vVertexAlbedo.a);        \n   gl_FragColor = finalColour;                                         \n}\n");
        pSVar4 = (ShaderProgram*)(*local_58)[1];
        *local_190 = local_2a8->str();
        pcVar5 = (char*)local_190->c_str();
        local_50 = local_3c0->str();
        pcVar6 = (char*)local_50.c_str();
        uint8_t bVar2 = pSVar4->CreateFromSourceString(
            pcVar5, pcVar6, (VertexElementDesc*)&PrimVertPosCol::m_VertexElemDescs, 2, '\x01');
        pSVar4->SetName("PRIM_SHADER_COLOUR");
        new (local_2a8) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_2a8 + 16),
            "                                                                       \nattribute vec3 aPos;             "
            "                                      \nattribute vec4 aColour;                                           "
            "     \n                                                                       \nuniform mat4 uWorldMat;   "
            "                                             \nuniform mat4 uViewProjMat;                                 "
            "            \nuniform vec4 uColour;                                                  \n                   "
            "                                                    \nout vec4 vVertexAlbedo;                             "
            "                   \n                                                                       \nvoid main() "
            "                                                           \n{                                            "
            "                          \n   vec4 worldPos = uWorldMat * vec4(aPos.x, aPos.y, aPos.z, 1.0);      \n   "
            "vec4 clipPos = uViewProjMat * worldPos;                             \n                                    "
            "                                   \n   vVertexAlbedo = aColour * uColour;                                "
            "  \n                                                                       \n   gl_Position = clipPos;    "
            "                                          \n}\n");
        uint8_t local_31 = bVar1;
        new (local_3c0) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
            "                                                                       \nin vec4 vVertexAlbedo;           "
            "                                      \n                                                                  "
            "     \nvoid main()                                                            \n{                         "
            "                                             \n   vec4 finalColour = vec4(vVertexAlbedo.rgb, "
            "vVertexAlbedo.a);        \n   gl_FragColor = finalColour;                                         \n}\n");
        pSVar4 = (ShaderProgram*)(*local_58)[2];
        *local_190 = local_2a8->str();
        pcVar5 = (char*)local_190->c_str();
        local_50 = local_3c0->str();
        pcVar6 = (char*)local_50.c_str();
        bVar1 = pSVar4->CreateFromSourceString(pcVar5, pcVar6, (VertexElementDesc*)&PrimVertPosCol::m_VertexElemDescs,
                                               2, '\x01');
        pSVar4->SetName("PRIM_SHADER_COLOUR_UNIFORM");
        new (local_2a8) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_2a8 + 16),
            "                                                                       \nattribute vec3 aPos;             "
            "                                      \nattribute vec2 aTexCoord;                                         "
            "     \n                                                                       \nuniform mat4 uWorldMat;   "
            "                                             \nuniform mat4 uViewProjMat;                                 "
            "            \n                                                                       \nout vec2 "
            "vTexCoord;                                                    \n                                          "
            "                             \nvoid main()                                                            \n{ "
            "                                                                     \n   vec4 worldPos = uWorldMat * "
            "vec4(aPos.x, aPos.y, aPos.z, 1.0);      \n   vec4 clipPos = uViewProjMat * worldPos;                      "
            "       \n                                                                       \n   vTexCoord = "
            "aTexCoord;                                              \n                                                "
            "                       \n   gl_Position = clipPos;                                              \n}\n");
        new (local_3c0) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
            "                                                                       \nin vec2 vTexCoord;               "
            "                                      \n                                                                  "
            "     \nuniform sampler2D sTexture;                                            \n                          "
            "                                             \nvoid main()                                                "
            "            \n{                                                                      \n   vec4 texColour "
            "= texture2DLodCompat(sTexture, vTexCoord, 0.0);      \n                                                   "
            "                    \n   vec4 finalColour = texColour;                                       \n   "
            "gl_FragColor = finalColour;                                         \n}\n");
        pSVar4 = (ShaderProgram*)(*local_58)[3];
        *local_190 = local_2a8->str();
        pcVar5 = (char*)local_190->c_str();
        local_50 = local_3c0->str();
        pcVar6 = (char*)local_50.c_str();
        uint8_t bVar3 = pSVar4->CreateFromSourceString(
            pcVar5, pcVar6, (VertexElementDesc*)&PrimVertPosUV::m_VertexElemDescs, 2, '\x01');
        pSVar4->SetName("PRIM_SHADER_UV");
        new (local_2a8) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_2a8 + 16),
            "                                                                       \nattribute vec3 aPos;             "
            "                                      \nattribute vec2 aTexCoord;                                         "
            "     \n                                                                       \nuniform mat4 uWorldMat;   "
            "                                             \nuniform mat4 uViewProjMat;                                 "
            "            \nuniform float uExplicitDepth;                                          \n                   "
            "                                                    \nout vec2 vTexCoord;                                 "
            "                   \n                                                                       \nvoid main() "
            "                                                           \n{                                            "
            "                          \n   vec4 worldPos = uWorldMat * vec4(aPos.x, aPos.y, aPos.z, 1.0);      \n   "
            "vec4 clipPos = uViewProjMat * worldPos;                             \n   clipPos.z = uExplicitDepth * "
            "clipPos.w;                             \n                                                                 "
            "      \n   vTexCoord = aTexCoord;                                              \n                         "
            "                                              \n   gl_Position = clipPos;                                 "
            "             \n}\n");
        uint8_t local_59 = bVar1;
        new (local_3c0) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
            "                                                                       \nin vec2 vTexCoord;               "
            "                                      \n                                                                  "
            "     \nuniform sampler2D sTexture;                                            \n                          "
            "                                             \nvoid main()                                                "
            "            \n{                                                                      \n   vec4 texColour "
            "= texture2DLodCompat(sTexture, vTexCoord, 0.0);      \n                                                   "
            "                    \n   vec4 finalColour = texColour;                                       \n   "
            "gl_FragColor = finalColour;                                         \n}\n");
        pSVar4 = (ShaderProgram*)(*local_58)[4];
        *local_190 = local_2a8->str();
        pcVar5 = (char*)local_190->c_str();
        local_50 = local_3c0->str();
        pcVar6 = (char*)local_50.c_str();
        uint8_t* puVar9 = &PrimVertPosUV::m_VertexElemDescs;
        bVar1 = pSVar4->CreateFromSourceString(pcVar5, pcVar6, (VertexElementDesc*)&PrimVertPosUV::m_VertexElemDescs, 2,
                                               '\x01');
        pSVar4->SetName("PRIM_SHADER_UV_EXPLICITDEPTH");
        auto pMVar7 = pSVar4->Instance();
        unsigned long uVar11 =
            (((uint64_t)((int64_t)((unsigned long)puVar9 >> 8)) << 8) | (uint8_t)(local_31 & bVar2)) & 4294967295;
        uint64_t uVar12 = (uint64_t)(uVar11 >> 8);
        bVar1 = (uint8_t)uVar11 & local_59 & bVar3 & bVar1;
        long lVar8 = pMVar7->GetOrigin();
        if (*(char*)(lVar8 + 167) != '\0') {
            new (local_190) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_190 + 16),
                "                                                                                               \nin "
                "vec2 vTexCoord;                                                                             \n        "
                "                                                                                       \nuniform "
                "sampler2DMS sTexture;                                                                  \n             "
                "                                                                                  \nvoid main()       "
                "                                                                             \n{                      "
                "                                                                        \n   vec4 texColour = "
                "texelFetch(sTexture, ivec2(vTexCoord * vec2(textureSize(sTexture))), 0);   \n                         "
                "                                                                      \n   vec4 finalColour = "
                "texColour;                                                               \n   gl_FragColor = "
                "finalColour;                                                                 \n}\n");
            pSVar4 = (ShaderProgram*)(*local_58)[5];
            local_50 = local_2a8->str();
            pcVar5 = (char*)local_50.c_str();
            local_78 = local_190->str();
            pcVar6 = (char*)local_78.c_str();
            bVar2 = pSVar4->CreateFromSourceString(pcVar5, pcVar6,
                                                   (VertexElementDesc*)&PrimVertPosUV::m_VertexElemDescs, 2, '\x01');
            pSVar4->SetName("PRIM_SHADER_UV_EXPLICITDEPTH_MULTISAMPLE");
            bVar1 = bVar1 & bVar2;
        }
        new (local_2a8) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_2a8 + 16),
            "                                                                       \nattribute vec3 aPos;             "
            "                                      \nattribute vec2 aTexCoord;                                         "
            "     \nattribute vec4 aColour;                                                \n                          "
            "                                             \nuniform mat4 uWorldMat;                                    "
            "            \nuniform mat4 uViewProjMat;                                             \n                   "
            "                                                    \nout vec2 vTexCoord;                                 "
            "                   \nout vec4 vVertexAlbedo;                                                \n            "
            "                                                           \nvoid main()                                  "
            "                          \n{                                                                      \n   "
            "vec4 worldPos = uWorldMat * vec4(aPos.x, aPos.y, aPos.z, 1.0);      \n   vec4 clipPos = uViewProjMat * "
            "worldPos;                             \n                                                                  "
            "     \n   vTexCoord = aTexCoord;                                              \n   vVertexAlbedo = "
            "aColour;                                            \n                                                    "
            "                   \n   gl_Position = clipPos;                                              \n}\n");
        new (local_3c0) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
            "                                                                       \nin vec2 vTexCoord;               "
            "                                      \nin vec4 vVertexAlbedo;                                            "
            "     \n                                                                       \nuniform sampler2D "
            "sTexture;                                            \n                                                   "
            "                    \nvoid main()                                                            \n{          "
            "                                                            \n   vec4 texColour = texture2D(sTexture, "
            "vTexCoord);                    \n   texColour *= vVertexAlbedo;                                         "
            "\n                                                                       \n   vec4 finalColour = "
            "texColour;                                       \n   gl_FragColor = finalColour;                         "
            "                \n}\n");
        pSVar4 = (ShaderProgram*)(*local_58)[6];
        *local_190 = local_2a8->str();
        pcVar5 = (char*)local_190->c_str();
        local_50 = local_3c0->str();
        pcVar6 = (char*)local_50.c_str();
        bVar2 = pSVar4->CreateFromSourceString(pcVar5, pcVar6, (VertexElementDesc*)&PrimVertPosUVCol::m_VertexElemDescs,
                                               3, '\x01');
        pSVar4->SetName("PRIM_SHADER_UV_COLOUR");
        pMVar7 = (MapArea*)pSVar4->Instance();
        bVar1 = bVar1 & bVar2;
        lVar8 = pMVar7->GetOrigin();
        if (*(char*)(lVar8 + 167) != '\0') {
            new (local_190) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_190 + 16),
                "                                                                                             \nin "
                "vec2 vTexCoord;                                                                           \nin vec4 "
                "vVertexAlbedo;                                                                       \n               "
                "                                                                              \nuniform sampler2DMS "
                "sTexture;                                                                \n                           "
                "                                                                  \nvoid main()                       "
                "                                                           \n{                                        "
                "                                                    \n   vec4 texColour = texelFetch(sTexture, "
                "ivec2(vTexCoord * vec2(textureSize(sTexture))), 0); \n   texColour *= vVertexAlbedo;                  "
                "                                             \n                                                       "
                "                                      \n   vec4 finalColour = texColour;                              "
                "                               \n   gl_FragColor = finalColour;                                       "
                "                        \n}\n");
            pSVar4 = (ShaderProgram*)(*local_58)[8];
            local_50 = local_2a8->str();
            pcVar5 = (char*)local_50.c_str();
            local_78 = local_190->str();
            pcVar6 = (char*)local_78.c_str();
            bVar2 = pSVar4->CreateFromSourceString(pcVar5, pcVar6,
                                                   (VertexElementDesc*)&PrimVertPosUVCol::m_VertexElemDescs, 3, '\x01');
            pSVar4->SetName("PRIM_SHADER_UV_COLOUR_MULTISAMPLE");
            bVar1 = bVar1 & bVar2;
            pMVar7 = (MapArea*)local_190;
            pMVar7->~PixelShaderSourceStream();
        }
        pMVar7 = (MapArea*)pMVar7->Instance();
        lVar8 = pMVar7->GetOrigin();
        if (*(char*)(lVar8 + 222) != '\0') {
            new (local_190) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_190 + 16),
                "                                                                              \nin vec2 vTexCoord;    "
                "                                                        \nin vec4 vColour;                            "
                "                                  \n                                                                  "
                "            \nuniform highp usampler2D sTexture;                                            \n        "
                "                                                                      \nvoid main()                   "
                "                                                \n{                                                   "
                "                          \n   highp vec4 texColour = vec4(texture2D(sTexture, vTexCoord));           "
                "    \n   gl_FragColor = vec4(texColour.r * 0.1, 0.0, 0.0, 1.0);                     \n}\n");
            pSVar4 = (ShaderProgram*)(*local_58)[9];
            local_50 = local_2a8->str();
            pcVar5 = (char*)local_50.c_str();
            local_78 = local_190->str();
            pcVar6 = (char*)local_78.c_str();
            bVar2 = pSVar4->CreateFromSourceString(pcVar5, pcVar6,
                                                   (VertexElementDesc*)&PrimVertPosUVCol::m_VertexElemDescs, 3, '\x01');
            pSVar4->SetName("PRIM_SHADER_UV_COLOUR_UINT");
            bVar1 = bVar1 & bVar2;
            pMVar7 = (MapArea*)local_190;
            pMVar7->~PixelShaderSourceStream();
        }
        pMVar7 = (MapArea*)pMVar7->Instance();
        lVar8 = pMVar7->GetOrigin();
        if (*(char*)(lVar8 + 146) != '\0') {
            new (local_190) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_190 + 16),
                "                                                                 \nin vec2 vTexCoord;                 "
                "                              \nin vec4 vVertexAlbedo;                                           \n   "
                "                                                              \nuniform sampler2DArray sTexture;      "
                "                           \n                                                                 \nvoid "
                "main()                                                      \n{                                       "
                "                         \n   vec4 texColour = texture2D(sTexture, vec3(vTexCoord, 0.0));   \n   "
                "texColour *= vVertexAlbedo;                                   \n                                      "
                "                           \n   vec4 finalColour = texColour;                                 \n   "
                "gl_FragColor = finalColour;                                   \n}\n");
            pSVar4 = (ShaderProgram*)(*local_58)[7];
            local_50 = local_2a8->str();
            pcVar5 = (char*)local_50.c_str();
            local_78 = local_190->str();
            pcVar6 = (char*)local_78.c_str();
            bVar2 = pSVar4->CreateFromSourceString(pcVar5, pcVar6,
                                                   (VertexElementDesc*)&PrimVertPosUVCol::m_VertexElemDescs, 3, '\x01');
            pSVar4->SetName("PRIM_SHADER_UV_COLOUR_ARRAY");
            bVar1 = bVar1 & bVar2;
        }
        new (local_2a8) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_2a8 + 16),
            "                                                                                       \nattribute vec3 "
            "aPos;                                                                   \nattribute vec2 aTexCoord0;      "
            "                                                       \nattribute vec2 aTexCoord1;                       "
            "                                      \nattribute vec2 aTexCoord2;                                        "
            "                     \nattribute vec2 aTexCoord3;                                                         "
            "    \nattribute vec4 aTexBlendWeights;                                                       \nattribute "
            "vec4 aColour;                                                                \n                           "
            "                                                            \nuniform mat4 uWorldMat;                     "
            "                                           \nuniform mat4 uViewProjMat;                                   "
            "                          \n                                                                              "
            "         \nout vec2 vTexCoord0;                                                                   \nout "
            "vec2 vTexCoord1;                                                                   \nout vec2 vTexCoord2; "
            "                                                                  \nout vec2 vTexCoord3;                  "
            "                                                 \nout vec4 vTexBlendWeights;                             "
            "                                \nout vec4 vColour;                                                       "
            "               \n                                                                                       "
            "\nvoid main()                                                                            \n{              "
            "                                                                        \n   vec4 worldPos = uWorldMat * "
            "vec4(aPos.x, aPos.y, aPos.z, 1.0);                      \n   vec4 clipPos = uViewProjMat * worldPos;      "
            "                                       \n                        ..." /* TRUNCATED STRING LITERAL */
        );
        new (local_3c0) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
            "                                                                                                          "
            "                                                                     \nin vec2 vTexCoord0;                "
            "                                                                                                          "
            "                                  \nin vec2 vTexCoord1;                                                   "
            "                                                                                                         "
            "\nin vec2 vTexCoord2;                                                                                     "
            "                                                                       \nin vec2 vTexCoord3;              "
            "                                                                                                          "
            "                                    \nin vec4 vTexBlendWeights;                                           "
            "                                                                                                          "
            " \nin vec4 vColour;                                                                                       "
            "                                                                        \n                                "
            "                                                                                                          "
            "                                     \nuniform sampler2D sTexture0;                                       "
            "                                                                                                          "
            "  \nuniform sampler2D sTexture1;                                                                          "
            "                                                                         \nuniform sampler2D sTexture2;   "
            "                                                                                                          "
            "                                      \nuniform sampler2D sTexture3;                                      "
            "                                              ..." /* TRUNCATED STRING LITERAL */
        );
        pSVar4 = (ShaderProgram*)(*local_58)[10];
        *local_190 = local_2a8->str();
        pcVar5 = (char*)local_190->c_str();
        local_50 = local_3c0->str();
        pcVar6 = (char*)local_50.c_str();
        bVar2 = pSVar4->CreateFromSourceString(
            pcVar5, pcVar6, (VertexElementDesc*)&PrimVertPosNormUV4Col::m_VertexElemDescs, 7, '\x01');
        pSVar4->SetName("PRIM_SHADER_UV4_COLOUR");
        bVar1 = bVar1 & bVar2;
        VertexShaderSourceStream* pVVar10 = (VertexShaderSourceStream*)local_2a8;
        pVVar10->~VertexShaderSourceStream();
        pMVar7 = (MapArea*)pVVar10->Instance();
        lVar8 = pMVar7->GetOrigin();
        if (*(char*)(lVar8 + 145) != '\0') {
            new (local_2a8) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_2a8 + 16),
                "                                                                       \nattribute vec3 aPos;         "
                "                                          \nattribute vec2 aTexCoord;                                 "
                "             \n                                                                       \nout vec2 "
                "vTexCoord;                                                    \n                                      "
                "                                 \nvoid main()                                                        "
                "    \n{                                                                      \n   vTexCoord = "
                "aTexCoord;                                              \n                                            "
                "                           \n   gl_Position = vec4(aPos, 1.0);                                      "
                "\n}\n");
            new (local_3c0) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
                "                                                                       \nin vec2 vTexCoord;           "
                "                                          \n                                                          "
                "             \nuniform sampler2D sTexture;                                            \n              "
                "                                                         \nvoid main()                                "
                "                            \n{                                                                      "
                "\n   float depth = texture2DLodCompat(sTexture, vTexCoord, 0.0).r;       \n                           "
                "                                            \n   gl_FragDepth = depth;                                "
                "               \n}\n");
            pSVar4 = (ShaderProgram*)(*local_58)[11];
            *local_190 = local_2a8->str();
            pcVar5 = (char*)local_190->c_str();
            local_50 = local_3c0->str();
            pcVar6 = (char*)local_50.c_str();
            bVar2 = pSVar4->CreateFromSourceString(pcVar5, pcVar6,
                                                   (VertexElementDesc*)&PrimVertPosUV::m_VertexElemDescs, 2, '\x01');
            local_190->~basic_string();
            pSVar4->SetName("PRIM_SHADER_UV_DEPTH");
            bVar1 = bVar1 & bVar2;
        }
        new (local_2a8) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_2a8 + 16),
            "                                                                       \nattribute vec3 aPos;             "
            "                                      \nattribute vec2 aTexCoord;                                         "
            "     \nattribute vec4 aColour;                                                \n                          "
            "                                             \nuniform mat4 uWorldMat;                                    "
            "            \nuniform mat4 uViewProjMat;                                             \n                   "
            "                                                    \nout vec2 vTexCoord;                                 "
            "                   \nout vec4 vVertexAlbedo;                                                \n            "
            "                                                           \nvoid main()                                  "
            "                          \n{                                                                      \n   "
            "vec4 worldPos = uWorldMat * vec4(aPos.x, aPos.y, aPos.z, 1.0);      \n   vec4 clipPos = uViewProjMat * "
            "worldPos;                             \n                                                                  "
            "     \n   vTexCoord = aTexCoord;                                              \n   vVertexAlbedo = "
            "aColour;                                            \n                                                    "
            "                   \n   gl_Position = clipPos;                                              \n}\n");
        new (local_3c0) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
            "                                                                                                          "
            "\nin vec2 vTexCoord;                                                                                      "
            "  \nin vec4 vVertexAlbedo;                                                                                "
            "    \n                                                                                                    "
            "      \nuniform int uCubemapFace;                                                                         "
            "        \nuniform samplerCube sTextureCube;                                                               "
            "          \n                                                                                              "
            "            \nvoid main()                                                                                 "
            "              \n{                                                                                         "
            "                \n   const int CUBEMAP_FACE_POS_X = 0;                                                    "
            "                  \n   const int CUBEMAP_FACE_NEG_X = 1;                                                  "
            "                    \n   const int CUBEMAP_FACE_POS_Y = 2;                                                "
            "                      \n   const int CUBEMAP_FACE_NEG_Y = 3;                                              "
            "                        \n   const int CUBEMAP_FACE_POS_Z = 4;                                            "
            "                          \n   const int CUBEMAP_FACE_NEG_Z = 5;                                          "
            "                            \n                                                                            "
            "                              \n   vec2 srcTexCoords = vTexCoord;                                         "
            "                                \n   vec3 texCoords = vec3(0.0, 0.0, 0.0);                                "
            "                                  \n   if (uCubemapFace == CUBEMAP_FACE_POS_X)                            "
            "                                    \n   {           ..." /* TRUNCATED STRING LITERAL */
        );
        pSVar4 = (ShaderProgram*)(*local_58)[12];
        *local_190 = local_2a8->str();
        pcVar5 = (char*)local_190->c_str();
        local_50 = local_3c0->str();
        pcVar6 = (char*)local_50.c_str();
        bVar2 = pSVar4->CreateFromSourceString(pcVar5, pcVar6, (VertexElementDesc*)&PrimVertPosUVCol::m_VertexElemDescs,
                                               3, '\x01');
        pSVar4->SetName("PRIM_SHADER_IMAGECUBE");
        new (local_2a8) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_2a8 + 16),
            "                                                                       \nattribute vec3 aPos;             "
            "                                      \nattribute vec2 aTexCoord;                                         "
            "     \nattribute vec4 aColour;                                                \n                          "
            "                                             \nuniform mat4 uWorldMat;                                    "
            "            \nuniform mat4 uViewProjMat;                                             \n                   "
            "                                                    \nout vec2 vTexCoord;                                 "
            "                   \nout vec4 vVertexAlbedo;                                                \n            "
            "                                                           \nvoid main()                                  "
            "                          \n{                                                                      \n   "
            "vec4 worldPos = uWorldMat * vec4(aPos.x, aPos.y, aPos.z, 1.0);      \n   vec4 clipPos = uViewProjMat * "
            "worldPos;                             \n                                                                  "
            "     \n   vTexCoord = aTexCoord;                                              \n   vVertexAlbedo = "
            "aColour;                                            \n                                                    "
            "                   \n   gl_Position = clipPos;                                              \n}\n");
        new (local_3c0) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
            "                                                                                                          "
            "\nin vec2 vTexCoord;                                                                                      "
            "  \nin vec4 vVertexAlbedo;                                                                                "
            "    \n                                                                                                    "
            "      \nuniform int uCubemapFace;                                                                         "
            "        \nuniform samplerCube sTextureCube;                                                               "
            "          \n                                                                                              "
            "            \nvoid main()                                                                                 "
            "              \n{                                                                                         "
            "                \n   const int CUBEMAP_FACE_POS_X = 0;                                                    "
            "                  \n   const int CUBEMAP_FACE_NEG_X = 1;                                                  "
            "                    \n   const int CUBEMAP_FACE_POS_Y = 2;                                                "
            "                      \n   const int CUBEMAP_FACE_NEG_Y = 3;                                              "
            "                        \n   const int CUBEMAP_FACE_POS_Z = 4;                                            "
            "                          \n   const int CUBEMAP_FACE_NEG_Z = 5;                                          "
            "                            \n                                                                            "
            "                              \n   vec2 srcTexCoords = vTexCoord;                                         "
            "                                \n   vec3 texCoords = vec3(0.0, 0.0, 0.0);                                "
            "                                  \n   if (uCubemapFace == CUBEMAP_FACE_POS_X)                            "
            "                                    \n   {           ..." /* TRUNCATED STRING LITERAL */
        );
        pSVar4 = (ShaderProgram*)(*local_58)[16];
        *local_190 = local_2a8->str();
        pcVar5 = (char*)local_190->c_str();
        local_50 = local_3c0->str();
        pcVar6 = (char*)local_50.c_str();
        local_31 = pSVar4->CreateFromSourceString(pcVar5, pcVar6,
                                                  (VertexElementDesc*)&PrimVertPosUVCol::m_VertexElemDescs, 3, '\x01');
        pSVar4->SetName("PRIM_SHADER_IMAGECUBE_DEPTH");
        new (local_2a8) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_2a8 + 16),
            "                                                                       \nattribute vec3 aPos;             "
            "                                      \nattribute vec2 aTexCoord;                                         "
            "     \nattribute vec4 aColour;                                                \n                          "
            "                                             \nuniform mat4 uWorldMat;                                    "
            "            \nuniform mat4 uViewProjMat;                                             \n                   "
            "                                                    \nout vec2 vTexCoord;                                 "
            "                   \nout vec4 vVertexAlbedo;                                                \n            "
            "                                                           \nvoid main()                                  "
            "                          \n{                                                                      \n   "
            "vec4 worldPos = uWorldMat * vec4(aPos.x, aPos.y, aPos.z, 1.0);      \n   vec4 clipPos = uViewProjMat * "
            "worldPos;                             \n                                                                  "
            "     \n   vTexCoord = aTexCoord;                                              \n   vVertexAlbedo = "
            "aColour;                                            \n                                                    "
            "                   \n   gl_Position = clipPos;                                              \n}\n");
        new (local_3c0) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
            "                                                                           \nin vec2 vTexCoord;           "
            "                                              \nin vec4 vVertexAlbedo;                                    "
            "                 \n                                                                           \nuniform "
            "sampler2D sTexture;                                                \n\n");
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
            "void main()                                                                \n{                            "
            "                                              \n   float depth = texture2D(sTexture, vTexCoord).r;        "
            "                 \n   vec4 finalColour = vec4(depth, depth, depth, vVertexAlbedo.a);          \n   "
            "gl_FragColor = finalColour;                                             \n}\n");
        pSVar4 = (ShaderProgram*)(*local_58)[13];
        *local_190 = local_2a8->str();
        pcVar5 = (char*)local_190->c_str();
        local_50 = local_3c0->str();
        pcVar6 = (char*)local_50.c_str();
        bVar3 = pSVar4->CreateFromSourceString(pcVar5, pcVar6, (VertexElementDesc*)&PrimVertPosUVCol::m_VertexElemDescs,
                                               3, '\x01');
        pSVar4->SetName("PRIM_SHADER_IMAGE2D_DEPTH");
        pMVar7 = (MapArea*)pSVar4->Instance();
        bVar3 = bVar1 & bVar2 & local_31 & bVar3;
        lVar8 = pMVar7->GetOrigin();
        if (*(char*)(lVar8 + 167) != '\0') {
            new (local_190) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_190 + 16),
                "                                                                                            \nin vec2 "
                "vTexCoord;                                                                          \nin vec4 "
                "vVertexAlbedo;                                                                      \n                "
                "                                                                            \nuniform sampler2DMS "
                "sTexture;                                                               \n                            "
                "                                                                \nvoid main()                         "
                "                                                        \n{                                           "
                "                                                \n   float depth = texelFetch(sTexture, "
                "ivec2(vTexCoord * vec2(textureSize(sTexture))), 0).r; \n   vec4 finalColour = vec4(depth, depth, "
                "depth, vVertexAlbedo.a);                           \n   gl_FragColor = finalColour;                   "
                "                                           \n}\n");
            pSVar4 = (ShaderProgram*)(*local_58)[14];
            local_50 = local_2a8->str();
            pcVar5 = (char*)local_50.c_str();
            local_78 = local_190->str();
            pcVar6 = (char*)local_78.c_str();
            bVar1 = pSVar4->CreateFromSourceString(pcVar5, pcVar6,
                                                   (VertexElementDesc*)&PrimVertPosUVCol::m_VertexElemDescs, 3, '\x01');
            pSVar4->SetName("PRIM_SHADER_IMAGE2D_DEPTH_MULTISAMPLE");
            bVar3 = bVar3 & bVar1;
        }
        new (local_2a8) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_2a8 + 16),
            "                                                                       \nattribute vec3 aPos;             "
            "                                      \nattribute vec2 aTexCoord;                                         "
            "     \nattribute vec4 aColour;                                                \n                          "
            "                                             \nuniform mat4 uWorldMat;                                    "
            "            \nuniform mat4 uViewProjMat;                                             \n                   "
            "                                                    \nout vec2 vTexCoord;                                 "
            "                   \nout vec4 vColour;                                                      \n            "
            "                                                           \nvoid main()                                  "
            "                          \n{                                                                      \n   "
            "vec4 worldPos = uWorldMat * vec4(aPos.x, aPos.y, aPos.z, 1.0);      \n   vec4 clipPos = uViewProjMat * "
            "worldPos;                             \n                                                                  "
            "     \n   vTexCoord = aTexCoord;                                              \n   vColour = aColour;     "
            "                                             \n                                                           "
            "            \n   gl_Position = clipPos;                                              \n}\n");
        new (local_3c0) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
            "                                                                              \nin vec2 vTexCoord;        "
            "                                                    \nin vec4 vColour;                                    "
            "                          \n                                                                              "
            "\nuniform sampler2D sTexture;                                                   \n                        "
            "                                                      \nvoid main()                                       "
            "                            \n{                                                                           "
            "  \n   vec4 texColour = texture2D(sTexture, vTexCoord * 2.0);                     \n   int channel = "
            "int((step(0.5, vTexCoord.y) * 2.0) + step(0.5, vTexCoord.x));\n   float colour = 1.0 - "
            "(texColour[channel] * (1.0 / vColour.r));             \n   vec4 finalColour = vec4(colour, colour, "
            "colour, vColour.a);                \n   gl_FragColor = finalColour;                                       "
            "         \n}\n");
        pSVar4 = (ShaderProgram*)(*local_58)[15];
        *local_190 = local_2a8->str();
        pcVar5 = (char*)local_190->c_str();
        local_50 = local_3c0->str();
        pcVar6 = (char*)local_50.c_str();
        bVar1 = pSVar4->CreateFromSourceString(pcVar5, pcVar6, (VertexElementDesc*)&PrimVertPosUVCol::m_VertexElemDescs,
                                               3, '\x01');
        pSVar4->SetName("PRIM_SHADER_IMAGE2D_SEPARATE_RGBA");
        uint32_t uVar13 = (uint32_t)(((uint64_t)uVar12 << 8) | (uint8_t)(bVar3 & bVar1));
        pVVar10 = (VertexShaderSourceStream*)local_2a8;
        pVVar10->~VertexShaderSourceStream();
        pMVar7 = (MapArea*)pVVar10->Instance();
        lVar8 = pMVar7->GetOrigin();
        if (*(char*)(lVar8 + 165) != '\0') {
            new (local_2a8) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_2a8 + 16),
                "                                                                       \nattribute vec3 aPos;         "
                "                                          \nattribute vec2 aTexCoord;                                 "
                "             \nattribute vec4 aColour;                                                \n              "
                "                                                         \nuniform mat4 uWorldMat;                    "
                "                            \nuniform mat4 uViewProjMat;                                             "
                "\nuniform float uSliceZ;                                                 \n                           "
                "                                            \nout vec3 vTexCoord;                                     "
                "               \nout vec4 vVertexAlbedo;                                                \n            "
                "                                                           \nvoid main()                              "
                "                              \n{                                                                     "
                " \n   vec4 worldPos = uWorldMat * vec4(aPos.x, aPos.y, aPos.z, 1.0);      \n   vec4 clipPos = "
                "uViewProjMat * worldPos;                             \n                                               "
                "                        \n   vTexCoord = vec3(aTexCoord, uSliceZ);                               \n   "
                "vVertexAlbedo = aColour;                                            \n                                "
                "                                       \n   gl_Position = clipPos;                                    "
                "          \n}\n");
            new (local_3c0) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_3c0 + 16),
                "                                                                       \nin vec3 vTexCoord;           "
                "                                          \nin vec4 vVertexAlbedo;                                    "
                "             \n                                                                       \nuniform "
                "sampler3D sTexture3D;                                          \n                                     "
                "                                  \nvoid main()                                                       "
                "     \n{                                                                      \n   vec4 texColour = "
                "texture3D(sTexture3D, vTexCoord);                  \n   texColour.rgb *= vVertexAlbedo.rgb;           "
                "                      \n   texColour.a *= vVertexAlbedo.a;                                     \n     "
                "                                                                  \n   vec4 finalColour = texColour;  "
                "                                     \n   gl_FragColor = finalColour;                                 "
                "        \n}\n");
            pSVar4 = (ShaderProgram*)(*local_58)[17];
            *local_190 = local_2a8->str();
            pcVar5 = (char*)local_190->c_str();
            local_50 = local_3c0->str();
            pcVar6 = (char*)local_50.c_str();
            bVar2 = pSVar4->CreateFromSourceString(pcVar5, pcVar6,
                                                   (VertexElementDesc*)&PrimVertPosUVCol::m_VertexElemDescs, 3, '\x01');
            local_190->~basic_string();
            pSVar4->SetName("PRIM_SHADER_IMAGE3D");
            uVar13 = (uint32_t)(((uint64_t)uVar12 << 8) | (uint8_t)(bVar3 & bVar1 & bVar2));
            pMVar7 = (MapArea*)local_2a8;
            pMVar7->~VertexShaderSourceStream();
        }
        if ((char)uVar13 == '\0') {
            pMVar7->Destroy();
        }
        return uVar13;
    }

    // 0x100bc28c0
    void PrimitiveShaderFamily::DestroyGraphicResources() {
        ShaderProgram* this_00 = (ShaderProgram*)std::array<render::ShaderProgram, 18ul>::begin();
        ShaderProgram* pSVar1 = (ShaderProgram*)std::array<render::ShaderProgram, 18ul>::end();
        for (; this_00 != pSVar1; this_00 = this_00 + 1) {
            this_00->Destroy();
        }
    }

} // namespace jag
