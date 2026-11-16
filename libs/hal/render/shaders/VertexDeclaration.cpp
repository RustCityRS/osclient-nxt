// libs/hal/render/shaders/VertexDeclaration.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "VertexDeclaration.h"

namespace jag::render {
    // 0x100009d50: VertexDeclaration::GetVertexElemDescs() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x10002d850: VertexDeclaration::GetVertexElementByteOffsets() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x1000b7900: VertexDeclaration::GetNumVertexStreams() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectType() const

    // 0x1000e31a0: VertexDeclaration::hash() const has the same machine code as oldscape::graphics::NXTPixScreen::GetUIWidth() const

    // 0x100beda90
    VertexDeclaration::VertexDeclaration() {
        unsigned int in_EAX;
        uint64_t uStack_28;

        uStack_28._0_4_ = in_EAX;
        new (this) RenderResource();
        new (&field_8) Array<VertexElementDesc>();
        new (&field_32) Array<unsigned int>();
        m_numVertexStreams = 0;
        field_92 = 0;
        uStack_28 = (unsigned long)(unsigned int)uStack_28;
        field_56.fill(*((unsigned int*)((long)&uStack_28 + 4)));
    }

    // 0x100bedb60
    VertexDeclaration::~VertexDeclaration() {
        Destroy();
        field_32.~Array();
        field_8.~Array();
    }

    // 0x100bedbc0
    void VertexDeclaration::Destroy() {
        unsigned int in_EAX;
        uint64_t uStack_18;

        uStack_18._0_4_ = in_EAX;
        MarkAsDead();
        uStack_18 = (unsigned long)(unsigned int)uStack_18;
        field_56.fill(*((unsigned int*)((long)&uStack_18 + 4)));
        m_numVertexStreams = 0;
        field_92 = 0;
    }

    // 0x100bedc10
    uint64_t VertexDeclaration::Create(const VertexElementDesc* vertexElementDesc, unsigned long arg2, const void* arg3,
                                       unsigned long arg4) {
        int iVar1;
        char* pcVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        int iVar5;
        uint64_t* puVar7;
        int* piVar8;
        uint32_t* puVar9;
        uint8_t* pbVar10;
        int* piVar11;
        unsigned long uVar15;

        if (vertexElementDesc == nullptr) {
            LogAssert("pVertexElemDescs",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "VertexDeclaration.cpp",
                      29, nullptr);
        }
        if ((vertexElementDesc == nullptr) || (arg2 == 0)) {
            LogAssert("pVertexElemDescs && (numElements > 0)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "VertexDeclaration.cpp",
                      30, nullptr);
        }
        uint8_t* this_00 = &field_8;
        this_00->set_max_size(arg2, 4);
        uint8_t* this_01 = &field_32;
        this_01->set_max_size(arg2, 0);
        m_numVertexStreams = 0;
        uint8_t* this_02 = &field_56;
        if (arg2 != 0) {
            uVar15 = 0;
            iVar5 = -1;
            do {
                puVar7 = (uint64_t*)(*this_00)[uVar15];
                pcVar2 = vertexElementDesc->field_8;
                uVar3 = *(uint64_t*)&vertexElementDesc->field_16;
                uVar4 = *(uint64_t*)&vertexElementDesc->field_24;
                *puVar7 = *(uint64_t*)vertexElementDesc;
                puVar7[1] = pcVar2;
                puVar7[2] = uVar3;
                puVar7[3] = uVar4;
                *(unsigned int*)(puVar7 + 4) = vertexElementDesc->field_32;
                piVar8 = (int*)(*this_00)[uVar15];
                iVar1 = *piVar8;
                if (iVar1 != iVar5) {
                    if (iVar1 < iVar5) {
                        LogAssert("iStream > prevStream",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "shaders/VertexDeclaration.cpp",
                                  48, nullptr);
                    }
                    puVar9 = (uint32_t*)(*this_02)[(long)iVar1];
                    *puVar9 = 0;
                    m_numVertexStreams = m_numVertexStreams + 1;
                }
                pbVar10 = (uint8_t*)(*this_02)[(long)iVar1];
                iVar5 = *(int*)pbVar10;
                piVar11 = (int*)(*this_01)[uVar15];
                *piVar11 = iVar5;
                if (((*pbVar10 & 3) != 0) && (piVar8[6] != 15)) {
                    LogAssert("m_VertexStrides[iStream] % 4 == 0 || elemDesc.m_UsageSemantic == VERTEX_USAGE_DUMMY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/VertexDeclaration.cpp",
                              56,
                              "Vertex decl attribute %s is not 4 byte aligned. This may crash some drivers in certain "
                              "situations and will reduce performance.",
                              *(uint64_t*)(piVar8 + 2));
                }
                iVar5 = GetShaderInputElementSize(piVar8[4]);
                if ((((unsigned int)piVar8[4] < 11) && ((1632U >> (piVar8[4] & 31U) & 1) != 0)) && (piVar8[6] != 15)) {
                    LogAssert("(elemDesc.m_Format != SHADER_INPUT_FORMAT_BYTE1 && elemDesc.m_Format != "
                              "SHADER_INPUT_FORMAT_BYTE2 && elemDesc.m_Format != SHADER_INPUT_FORMAT_UBYTE1 && "
                              "elemDesc.m_Format != SHADER_INPUT_FORMAT_UBYTE2) || elemDesc.m_UsageSemantic == "
                              "VERTEX_USAGE_DUMMY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/VertexDeclaration.cpp",
                              67,
                              "Vertex decl attribute %s is of type BYTE1, BYTE2, UBYTE1 or UBYTE2 - these should not "
                              "be used due to incompatibility. Consider padding to SHORT1, SHORT2 or BYTE4.",
                              *(uint64_t*)(piVar8 + 2));
                }
                *(int*)pbVar10 = *(int*)pbVar10 + iVar5;
                uVar15 = uVar15 + 1;
                vertexElementDesc = vertexElementDesc + 1;
                iVar5 = iVar1;
            } while (arg2 != uVar15);
        }
        unsigned int* arg1 = &field_92;
        field_92 = 0;
        unsigned int uVar6 = this_00->end();
        hash_combine_32(arg1, uVar6);
        auto this_03 = this_00->data();
        auto pGVar12 = this_00->end();
        for (; this_03 != pGVar12; this_03 = this_03 + 1) {
            uVar6 = this_03->GetStatus();
            hash_combine_32(arg1, uVar6);
        }
        auto puVar13 = this_01->data();
        auto puVar14 = this_01->end();
        for (; puVar13 != puVar14; puVar13 = puVar13 + 1) {
            hash_combine_32(arg1, *puVar13);
        }
        hash_combine_32(arg1, m_numVertexStreams);
        if (0 < (int)m_numVertexStreams) {
            uVar15 = 0;
            do {
                puVar13 = (unsigned int*)(*this_02)[uVar15];
                hash_combine_32(arg1, *puVar13);
                uVar15 = uVar15 + 1;
            } while ((long)uVar15 < (long)(int)m_numVertexStreams);
        }
        return 1;
    }

} // namespace jag::render
