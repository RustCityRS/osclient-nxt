// libs/hal/render/shaders/VertexDeclaration.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "VertexDeclaration.h"

namespace jag::render {
    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    VertexDeclaration::GetVertexElemDescs() const;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    VertexDeclaration::GetVertexElementByteOffsets() const;

    // 0x1000b7900: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectType() const, which has identical code
    int VertexDeclaration::GetNumVertexStreams() const;

    // 0x1000e31a0: the linker folded this into oldscape::graphics::NXTPixScreen::GetUIWidth() const, which has identical code
    VertexDeclaration::hash() const;

    // 0x100beda90, 128 bytes, base-object constructor, placed by class name
    // VertexDeclaration::VertexDeclaration()
    void VertexDeclaration::VertexDeclaration() {
        uint in_EAX;
        undefined8 uStack_28;

        uStack_28._0_4_ = in_EAX;
        new (this) RenderResource();
        new (&field_8) Array<VertexElementDesc, eastl::allocator>();
        new (&field_32) Array<unsigned int, eastl::allocator>();
        *(undefined8*)&m_numVertexStreams = 0;
        uStack_28 = (ulong)(uint)uStack_28;
        (&field_56, (uint*)((long)&uStack_28 + 4))->fill();
    }

    // 0x100bedb50, 16 bytes, complete-object constructor, placed by class name
    // VertexDeclaration::VertexDeclaration(): jumps straight to the base-object constructor

    // 0x100bedb60, 96 bytes, base-object destructor, placed by class name
    // VertexDeclaration::~VertexDeclaration()
    void VertexDeclaration::~VertexDeclaration() {
        Destroy(this);
        (&field_32)->~Array();
        (&field_8)->~Array();
        ~RenderResource();
    }

    // 0x100bedbc0, 64 bytes, placed by class name
    // VertexDeclaration::Destroy()
    void VertexDeclaration::Destroy() {
        uint in_EAX;
        undefined8 uStack_18;

        uStack_18._0_4_ = in_EAX;
        MarkAsDead();
        uStack_18 = (ulong)(uint)uStack_18;
        (&field_56, (uint*)((long)&uStack_18 + 4))->fill();
        *(undefined8*)&m_numVertexStreams = 0;
    }

    // 0x100bedc00, 16 bytes, complete-object destructor, placed by class name
    // VertexDeclaration::~VertexDeclaration(): jumps straight to the base-object destructor

    // 0x100bedc10, 784 bytes, placed by class name
    // VertexDeclaration::Create(VertexElementDesc const*, unsigned long, void const*, unsigned long)
    undefined8 VertexDeclaration::Create(VertexElementDesc* param_1, ulong param_2, void* param_3, ulong param_4) {
        char** this;
        uint* this_00;
        uint* puVar1;
        int iVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        int iVar6;
        uint uVar7;
        undefined8* puVar8;
        int* piVar9;
        undefined4* puVar10;
        byte* pbVar11;
        int* piVar12;
        GameToken* this_01;
        GameToken* pGVar13;
        uint* puVar14;
        uint* puVar15;
        ulong uVar16;
        void* pvVar17;

        if (param_2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pVertexElemDescs",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "VertexDeclaration.cpp",
                      29, (char*)0);
        }
        if ((param_2 == 0) || (param_3 == (void*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pVertexElemDescs && (numElements > 0)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                      "VertexDeclaration.cpp",
                      30, (char*)0);
        }
        this = &param_1->field_8;
        set_max_size((ulong)param_3, 4);
        puVar15 = &param_1->field_32;
        puVar15->set_max_size((ulong)param_3, 0);
        *(undefined4*)&param_1[2].field_8 = 0;
        this_00 = &param_1[1].field_16;
        if (param_3 != (void*)0) {
            pvVar17 = (void*)0;
            iVar6 = -1;
            do {
                puVar8 = (undefined8*)Array<VertexElementDesc, eastl::allocator>::operator[](
                    (Array<VertexElementDesc, eastl::allocator>*)this, (ulong)pvVar17);
                uVar3 = *(undefined8*)(param_2 + 8);
                uVar4 = *(undefined8*)(param_2 + 16);
                uVar5 = *(undefined8*)(param_2 + 24);
                *puVar8 = *(undefined8*)param_2;
                puVar8[1] = uVar3;
                puVar8[2] = uVar4;
                puVar8[3] = uVar5;
                *(undefined4*)(puVar8 + 4) = *(undefined4*)(param_2 + 32);
                piVar9 = (int*)Array<VertexElementDesc, eastl::allocator>::operator[](
                    (Array<VertexElementDesc, eastl::allocator>*)this, (ulong)pvVar17);
                iVar2 = *piVar9;
                if (iVar2 != iVar6) {
                    if (iVar2 < iVar6) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("iStream > prevStream",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "shaders/VertexDeclaration.cpp",
                                  48, (char*)0);
                    }
                    puVar10 = (undefined4*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)this_00,
                                                                                     (long)iVar2);
                    *puVar10 = 0;
                    *(int*)&param_1[2].field_8 = *(int*)&param_1[2].field_8 + 1;
                }
                pbVar11 =
                    (byte*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)this_00, (long)iVar2);
                iVar6 = *(int*)pbVar11;
                piVar12 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)puVar15, (ulong)pvVar17);
                *piVar12 = iVar6;
                if (((*pbVar11 & 3) != 0) && (piVar9[6] != 15)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_VertexStrides[iStream] % 4 == 0 || elemDesc.m_UsageSemantic == VERTEX_USAGE_DUMMY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/VertexDeclaration.cpp",
                              56,
                              "Vertex decl attribute %s is not 4 byte aligned. This may crash some drivers in certain "
                              "situations and will reduce performance.",
                              *(undefined8*)(piVar9 + 2));
                }
                iVar6 = GetShaderInputElementSize(piVar9[4]);
                if ((((uint)piVar9[4] < 11) && ((1632U >> (piVar9[4] & 31U) & 1) != 0)) && (piVar9[6] != 15)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("(elemDesc.m_Format != SHADER_INPUT_FORMAT_BYTE1 && elemDesc.m_Format != "
                              "SHADER_INPUT_FORMAT_BYTE2 && elemDesc.m_Format != SHADER_INPUT_FORMAT_UBYTE1 && "
                              "elemDesc.m_Format != SHADER_INPUT_FORMAT_UBYTE2) || elemDesc.m_UsageSemantic == "
                              "VERTEX_USAGE_DUMMY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "shaders/VertexDeclaration.cpp",
                              67,
                              "Vertex decl attribute %s is of type BYTE1, BYTE2, UBYTE1 or UBYTE2 - these should not "
                              "be used due to incompatibility. Consider padding to SHORT1, SHORT2 or BYTE4.",
                              *(undefined8*)(piVar9 + 2));
                }
                *(int*)pbVar11 = *(int*)pbVar11 + iVar6;
                pvVar17 = (void*)((long)pvVar17 + 1);
                param_2 = param_2 + 40;
                iVar6 = iVar2;
            } while (param_3 != pvVar17);
        }
        puVar1 = (uint*)((long)&param_1[2].field_8 + 4);
        *(undefined4*)((long)&param_1[2].field_8 + 4) = 0;
        uVar7 = end();
        hash_combine_32(puVar1, uVar7);
        this_01 = (GameToken*)data();
        pGVar13 = (GameToken*)end();
        for (; this_01 != pGVar13; this_01 = this_01 + 1) {
            uVar7 = this_01->GetStatus();
            hash_combine_32(puVar1, uVar7);
        }
        puVar14 = (uint*)puVar15->data();
        puVar15 = (uint*)puVar15->end();
        for (; puVar14 != puVar15; puVar14 = puVar14 + 1) {
            hash_combine_32(puVar1, *puVar14);
        }
        hash_combine_32(puVar1, *(uint*)&param_1[2].field_8);
        if (0 < *(int*)&param_1[2].field_8) {
            uVar16 = 0;
            do {
                puVar15 = (uint*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)this_00, uVar16);
                hash_combine_32(puVar1, *puVar15);
                uVar16 = uVar16 + 1;
            } while ((long)uVar16 < (long)*(int*)&param_1[2].field_8);
        }
        return 1;
    }

} // namespace jag::render
