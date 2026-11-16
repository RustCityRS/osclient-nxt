// libs/graphics/runetek7/lighting/PointLightTexture.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "PointLightTexture.h"

namespace jag::graphics {
    // 0x1008a96f0, 464 bytes, placed by debug map only (low confidence)
    // PointLightGridTextureData::ApplyLightIDToTextureData(unsigned int, int, int, int, int, int, int, int, int, Array<std::array<bool, 129ul>, BucketAllocatorEASTL> const&)
    /* PointLightGridTextureData::ApplyLightIDToTextureData(unsigned int, int, int, int,
   int, int, int, int, int, Array<std::array<bool, 129ul>, BucketAllocatorEASTL> const&)
    */

    void PointLightGridTextureData::ApplyLightIDToTextureData(uint param_1, int param_2, int param_3, int param_4,
                                                              int param_5, int param_6, int param_7, int param_8,
                                                              int param_9, Array* param_10) {
        int iVar1;
        uint uVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        array<bool, 129ul>* this_00;
        char* pcVar6;
        array<PointLightTextureData, 256ul>* this_01;
        uint* puVar7;
        uint uVar8;
        ulong uVar9;
        ulong uVar10;
        int iVar11;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        uint local_34;

        local_44 = param_2;
        local_40 = param_4;
        local_3c = param_3;
        local_38 = param_5;
        local_34 = param_1;
        if (255 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("lightID <= 0xFF",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLightTexture.cpp",
                      24, (char*)0);
        }
        if (param_2 <= param_3) {
            do {
                if (local_40 <= local_38) {
                    uVar10 = (ulong)param_8;
                    iVar4 = local_40;
                    do {
                        iVar5 = iVar4 + 64;
                        if (param_2 < 2) {
                            iVar5 = iVar4;
                        }
                        if (param_6 <= param_7) {
                            uVar9 = (ulong)param_9;
                            iVar11 = param_6 + -1;
                            do {
                                iVar1 = iVar11 + 1;
                                this_00 = (array<bool, 129ul>*)
                                    Array<std::array<bool, 129ul>, BucketAllocatorEASTL>::operator[](
                                        (Array<std::array<bool, 129ul>, BucketAllocatorEASTL>*)param_10, uVar10);
                                pcVar6 = (char*)std::array<bool, 129ul>::operator[](this_00, uVar9);
                                if (*pcVar6 != '\0') {
                                    iVar11 = iVar11 + 65;
                                    if (param_2 % 2 != 1) {
                                        iVar11 = iVar1;
                                    }
                                    this_01 = (array<PointLightTextureData, 256ul>*)
                                        std::array<std::array<PointLightTextureData, 256ul>, 128ul>::operator[](
                                            (array<std::array<PointLightTextureData, 256ul>, 128ul>*)this, (long)iVar5);
                                    puVar7 = (uint*)std::array<PointLightTextureData, 256ul>::operator[](this_01,
                                                                                                         (long)iVar11);
                                    uVar2 = *puVar7;
                                    if ((char)uVar2 == '\0') {
                                        uVar8 = local_34;
                                    } else if ((uVar2 & 65280) == 0) {
                                        uVar8 = local_34 << 8;
                                    } else if ((uVar2 & 16711680) == 0) {
                                        uVar8 = local_34 << 16;
                                    } else {
                                        if (16777215 < uVar2)
                                            goto LAB_1008a9827;
                                        uVar8 = local_34 << 24;
                                    }
                                    *puVar7 = uVar8 | uVar2;
                                }
                            LAB_1008a9827:
                                uVar9 = uVar9 + 1;
                                iVar11 = iVar1;
                            } while (iVar1 < param_7);
                        }
                        uVar10 = uVar10 + 1;
                        bVar3 = iVar4 < local_38;
                        iVar4 = iVar4 + 1;
                    } while (bVar3);
                }
                bVar3 = param_2 < local_3c;
                param_2 = param_2 + 1;
            } while (bVar3);
        }
        hash_combine<unsigned int, int, int, int, int, int, int, int, int>(&field_131072, &local_34, &local_44,
                                                                           &local_3c, &local_40, &local_38, &param_6,
                                                                           &param_7, &param_8, &param_9);
    }

    // 0x1008a99d0, 640 bytes, placed by neighbouring functions
    // PointLightGridTextureData::ApplyLightDataToTextureData(PointLight const&, unsigned int, int)
    void PointLightGridTextureData::ApplyLightDataToTextureData(PointLight* param_1, uint param_2, int param_3) {
        undefined4 uVar1;
        int iVar2;
        uint uVar3;
        vector* pvVar4;
        array<PointLightTextureData, 256ul>* this_00;
        undefined4* puVar5;
        float* pfVar6;
        uint uVar8;
        ulong* puVar9;
        uint local_50;
        uint local_4c;
        uint local_48;
        uint local_44;
        Vector4T* local_40;
        ushort local_36;
        uint local_34;

        uVar8 = (uint)(127 < param_2) * 64;
        local_40 = (Vector4T*)(ulong)(uVar8 + 128);
        local_50 = param_2;
        local_44 = param_3;
        pvVar4 = param_1->SSOBeginPtr(param_1);
        uVar1 = render::RGBAToABGR((uint)(long)*(float*)pvVar4);
        this_00 = (array<PointLightTextureData, 256ul>*)
            std::array<std::array<PointLightTextureData, 256ul>, 128ul>::operator[](
                (array<std::array<PointLightTextureData, 256ul>, 128ul>*)this, (ulong)(param_2 & 127));
        puVar5 = (undefined4*)std::array<PointLightTextureData, 256ul>::operator[](this_00, (ulong)local_40);
        *puVar5 = uVar1;
        pfVar6 = (float*)param_1->y();
        uVar1 = render::RGBAToABGR((uint)(long)*pfVar6);
        puVar5 = (undefined4*)std::array<PointLightTextureData, 256ul>::operator[](this_00, (ulong)(uVar8 + 129));
        *puVar5 = uVar1;
        pfVar6 = (float*)param_1->second();
        uVar1 = render::RGBAToABGR((uint)(long)*pfVar6);
        local_40 = (Vector4T*)(ulong)(uVar8 + 131);
        puVar5 = (undefined4*)std::array<PointLightTextureData, 256ul>::operator[](this_00, (ulong)(uVar8 + 130));
        *puVar5 = uVar1;
        iVar2 = (int)(param_1->field_12 * 7.876803);
        local_36 = (ushort)iVar2;
        uVar1 = render::RGBAToABGR(local_44 & 65535 | iVar2 << 16);
        puVar5 = (undefined4*)std::array<PointLightTextureData, 256ul>::operator[](this_00, (ulong)local_40);
        *puVar5 = uVar1;
        local_40 = (Vector4T*)&param_1->field_16;
        uVar3 = math::R8G8B8A8FromColour4(local_40);
        uVar1 = render::RGBAToABGR(uVar3);
        puVar5 = (undefined4*)std::array<PointLightTextureData, 256ul>::operator[](this_00, (ulong)(uVar8 + 132));
        *puVar5 = uVar1;
        pfVar6 = std::min<float>((float*)&constants::LightConstants::ATTENUATIONFALLOFF_MAX, &param_1->field_32);
        pfVar6 = std::max<float>((float*)&constants::LightConstants::ATTENUATIONFALLOFF_MIN, pfVar6);
        uVar3 = (uint)(long)(*pfVar6 * 6553.5);
        local_4c = uVar3;
        pfVar6 = std::min<float>((float*)&constants::LightConstants::BACKLIGHTRATIO_MAX, &param_1->field_36);
        pfVar6 = std::max<float>((float*)&constants::LightConstants::BACKLIGHTRATIO_MIN, pfVar6);
        local_48 = (uint)(long)(*pfVar6 * 255.0);
        uVar1 = render::RGBAToABGR(local_48 << 8 | uVar3 << 16);
        puVar5 = (undefined4*)std::array<PointLightTextureData, 256ul>::operator[](this_00, (ulong)(uVar8 | 133));
        *puVar5 = uVar1;
        puVar9 = &field_131072;
        hash_combine<unsigned int>(puVar9, (uint*)(type*)&local_50);
        pvVar4 = param_1->SSOBeginPtr((type*)&local_50);
        local_34 = (uint)(long)*(float*)pvVar4;
        hash_combine<unsigned int>(puVar9, &local_34);
        pfVar6 = (float*)param_1->y();
        local_34 = (uint)(long)*pfVar6;
        hash_combine<unsigned int>(puVar9, &local_34);
        pfVar6 = (float*)param_1->second();
        local_34 = (uint)(long)*pfVar6;
        hash_combine<unsigned int>(puVar9, &local_34);
        hash_combine<unsigned short>(puVar9, &local_36);
        hash_combine<int>(puVar9, (int*)&local_44);
        local_34 = math::R8G8B8A8FromColour4(local_40);
        hash_combine<unsigned int>(puVar9, &local_34);
        hash_combine<unsigned int>(puVar9, &local_4c);
        hash_combine<unsigned int>(puVar9, &local_48);
    }

    // 0x1008a9ce0, 128 bytes, base-object destructor, placed by __FILE__ string
    // PointLightGridTexture::~PointLightGridTexture()
    void PointLightGridTexture::~PointLightGridTexture() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_texture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLightTexture.cpp",
                      118, "Destroy() not called on PointLightGridTexture");
        }
        (&field_40)->~future();
        m_effect->~shared_ptr();
        ~shared_ptr();
    }

    // 0x1008a9d60, 16 bytes, complete-object destructor, placed by neighbouring functions
    // PointLightGridTexture::~PointLightGridTexture(): jumps straight to the base-object destructor

    // 0x1008a9d70, 64 bytes, placed by neighbouring functions
    // PointLightGridTexture::Create(PointLightGridTextureData const*, RT7Core&, int, int)
    void PointLightGridTexture::Create(PointLightGridTextureData* param_1, RT7Core* param_2, int param_3, int param_4) {
        CreateTexture(this, param_1);
        CreatePointLightIndicesEffect(this, param_2, param_3, param_4);
    }

    // 0x1008a9db0, 384 bytes, placed by __FILE__ string
    // PointLightGridTexture::CreateTexture(PointLightGridTextureData const*)
    void PointLightGridTexture::CreateTexture(PointLightGridTextureData* param_1) {
        char cVar2;
        uchar* puVar3;
        Texture2D* this_00;
        long* plVar4;
        long lVar5;
        ulong uVar6;
        array<std::array<PointLightTextureData, 256ul>, 128ul> aaStack_20088[131072];
        undefined1 local_88[88];
        shared_ptr local_30;

        ___bzero(aaStack_20088, 131072);
        if (param_1 == (PointLightGridTextureData*)0) {
            puVar3 = (uchar*)std::array<std::array<PointLightTextureData, 256ul>, 128ul>::data(aaStack_20088);
        } else {
            puVar3 = (uchar*)std::array<std::array<PointLightTextureData, 256ul>, 128ul>::operator[]((ulong)param_1);
        }
        new ((local_88 + 64)) render::ResourceDataT<unsigned char const>(puVar3, 0, 0, false);
        new (local_88) render::Texture::Desc();
        local_88._0_4_ = 256;
        local_88._4_4_ = 128;
        local_88[32] = 0;
        local_88._12_4_ = 7;
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_texture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLightTexture.cpp",
                      159, (char*)0);
        }
        make_shared<render::Texture2D, char const(&)[31]>((jag*)&local_30, "MapSquarePointLightGridTexture");
        shared_ptr<render::Texture2D>::operator=((shared_ptr<render::Texture2D>*)this, &local_30);
        local_30.~shared_ptr();
        this_00 = (Texture2D*)shared_ptr<render::Texture2D>::operator->((shared_ptr<render::Texture2D>*)this);
        cVar2 = this_00->Create(local_88, (ResourceDataT*)(local_88 + 64), 0);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("success",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLightTexture.cpp",
                      162, (char*)0);
        }
        plVar4 = (long*)shared_ptr<render::Texture2D>::operator->((shared_ptr<render::Texture2D>*)this);
        lVar5 = ((PointLightGridTexture*)this)->Instance();
        (**(code**)(*plVar4 + 24))(plVar4, lVar5 + 80, 1);
        if (param_1 == (PointLightGridTextureData*)0) {
            uVar6 = 0;
        } else {
            uVar6 = param_1->field_131072;
        }
        field_32 = uVar6;
        ((local_88 + 64))->~ResourceDataT();
    }

    // 0x1008a9f30, 288 bytes, placed by __FILE__ string
    // PointLightGridTexture::CreatePointLightIndicesEffect(RT7Core&, int, int)
    void PointLightGridTexture::CreatePointLightIndicesEffect(RT7Core* param_1, int param_2, int param_3) {
        undefined1* this_00;
        bool bVar1;
        long* plVar2;
        PointLightIndicesEffect* pPVar3;
        shared_ptr* psVar4;
        RT7Core* extraout_RDX;
        shared_ptr local_48;

        this_00 = m_effect;
        bVar1 = this_00->operator_cast_to_bool();
        if (!bVar1) {
            MakeSharedPool<PointLightIndicesEffect, 64>::MakeShared<RT7Core&>(
                &local_48, (MakeSharedPool<PointLightIndicesEffect, 64>*)param_1, extraout_RDX);
            shared_ptr<PointLightIndicesEffect>::operator=((shared_ptr<PointLightIndicesEffect>*)this_00, &local_48);
            local_48.~shared_ptr();
            plVar2 =
                (long*)shared_ptr<PointLightIndicesEffect>::operator->((shared_ptr<PointLightIndicesEffect>*)this_00);
            psVar4 = (shared_ptr*)*plVar2;
            (**(code**)(psVar4 + 1))(plVar2);
            ((ulong)(uint)param_2)->AddEffect(param_3, (int)this_00, psVar4);
        }
        bVar1 = operator_cast_to_bool();
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_texture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLightTexture.cpp",
                      201, (char*)0);
        }
        pPVar3 = (PointLightIndicesEffect*)shared_ptr<PointLightIndicesEffect>::operator->(
            (shared_ptr<PointLightIndicesEffect>*)this_00);
        new (&local_48) shared_ptr<oldscape::dash3d::Decor>(this);
        pPVar3->SetTexture(&local_48);
        local_48.~shared_ptr();
        pPVar3 = (PointLightIndicesEffect*)shared_ptr<PointLightIndicesEffect>::operator->(
            (shared_ptr<PointLightIndicesEffect>*)this_00);
        pPVar3->SetMapSquareFineCoordBounds((uint)param_2, param_3);
    }

    // 0x1008aa050, 112 bytes, placed by neighbouring functions
    // PointLightGridTexture::Destroy(int, int)
    void PointLightGridTexture::Destroy(int param_1, int param_2) {
        bool bVar2;

        if ((&field_40)->valid() != '\0') {
            std::future<void>::wait();
        }
        bVar2 = operator_cast_to_bool();
        if (bVar2) {
            shared_ptr<render::Texture2D>::reset();
        }
        bVar2 = m_effect->operator_cast_to_bool();
        if (bVar2) {
            param_1->RemoveEffect(param_2);
            shared_ptr<PointLightIndicesEffect>::reset();
        }
    }

    // 0x1008aa1f0, 368 bytes, placed by __FILE__ string
    // PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)
    void PointLightGridTexture::UpdateTexture(shared_ptr* param_1) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        long lVar3;
        char* pcVar4;
        Singleton<render::RenderDevice>* this_01;
        PointLightGridTexture* local_f8;
        shared_ptr<oldscape::dash3d::Decor> local_f0[16];
        future local_e0[8];
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[168];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar1 = operator_cast_to_bool();
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_texture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLightTexture.cpp",
                      169, (char*)0);
        }
        if (field_32 != 0) {
            lVar3 = shared_ptr<PointLightGridTextureData>::operator->((shared_ptr<PointLightGridTextureData>*)param_1);
            if (*(long*)(lVar3 + 131072) == field_32)
                goto LAB_1008aa308;
        }
        this_00 = &field_40;
        this_01 = (Singleton<render::RenderDevice>*)this_00;
        cVar2 = this_00->valid();
        if (cVar2 != '\0') {
            this_01 = (Singleton<render::RenderDevice>*)this_00;
            std::future<void>::wait();
        }
        pcVar4 = (char*)this_01->Instance();
        local_f8 = this;
        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_f0, param_1);
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::__2, void>(
            local_d8, (__2*)&local_f8);
        local_e0->RunOnThreadPoolRenderContext(pcVar4, (function*)"UpdateTexture");
        std::future<void>::operator=((future<void>*)this_00, local_e0);
        local_e0->~future();
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            local_d8);
        UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::~__2((__2*)&local_f8);
        lVar3 = shared_ptr<PointLightGridTextureData>::operator->((shared_ptr<PointLightGridTextureData>*)param_1);
        field_32 = *(undefined8*)(lVar3 + 131072);
    LAB_1008aa308:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008a9970, 96 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<unsigned int, int, int, int, int, int, int, int, int>(unsigned long&, unsigned int const&, int const&, int const&, int const&, int const&, int const&, int const&, int const&, int const&)
    void hash_combine<unsigned int, int, int, int, int, int, int, int, int>(ulong* param_1, uint* param_2, int* param_3,
                                                                            int* param_4, int* param_5, int* param_6,
                                                                            int* param_7, int* param_8, int* param_9,
                                                                            int* param_10) {
        hash_combine<unsigned int>(param_1, param_2);
        hash_combine<int, int, int, int, int, int, int, int>(param_1, param_3, param_4, param_5, param_6, param_7,
                                                             param_8, param_9, param_10);
    }

} // namespace jag
