// libs/graphics/runetek7/lighting/PointLightTexture.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "PointLightTexture.h"

namespace jag::graphics {
    // 0x1008a96f0
    void PointLightGridTextureData::ApplyLightIDToTextureData(
        unsigned int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
        const Array<std::array<bool, 129ul>, BucketAllocatorEASTL>& arg10) {
        int iVar1;
        unsigned int uVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        array<bool, 129ul>* this_00;
        char* pcVar6;
        array<PointLightTextureData, 256ul>* this_01;
        unsigned int* puVar7;
        unsigned int uVar8;
        unsigned long arg1_00;
        unsigned long arg1_01;
        int iVar9;

        int local_44 = arg2;
        int local_40 = arg4;
        int local_3c = arg3;
        int local_38 = arg5;
        unsigned int local_34 = arg1;
        if (255 < arg1) {
            LogAssert("lightID <= 0xFF",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLightTexture.cpp",
                      24, nullptr);
        }
        if (arg2 <= arg3) {
            do {
                if (local_40 <= local_38) {
                    arg1_01 = (unsigned long)arg8;
                    iVar4 = local_40;
                    do {
                        iVar5 = iVar4 + 64;
                        if (arg2 < 2) {
                            iVar5 = iVar4;
                        }
                        if (arg6 <= arg7) {
                            arg1_00 = (unsigned long)arg9;
                            iVar9 = arg6 - 1;
                            do {
                                iVar1 = iVar9 + 1;
                                this_00 = &arg10[arg1_01];
                                pcVar6 = (char*)(*this_00)[arg1_00];
                                if (*pcVar6 != '\0') {
                                    iVar9 = iVar9 + 65;
                                    if (arg2 % 2 != 1) {
                                        iVar9 = iVar1;
                                    }
                                    this_01 = (array<PointLightTextureData, 256ul>*)(*this)[(long)iVar5];
                                    puVar7 = (unsigned int*)(*this_01)[(long)iVar9];
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
                                arg1_00 = arg1_00 + 1;
                                iVar9 = iVar1;
                            } while (iVar1 < arg7);
                        }
                        arg1_01 = arg1_01 + 1;
                        bVar3 = iVar4 < local_38;
                        iVar4 = iVar4 + 1;
                    } while (bVar3);
                }
                bVar3 = arg2 < local_3c;
                arg2 = arg2 + 1;
            } while (bVar3);
        }
        hash_combine<unsigned int, int, int, int, int, int, int, int, int>(
            &field_131072, &local_34, &local_44, &local_3c, &local_40, &local_38, &arg6, &arg7, &arg8, &arg9);
    }

    // 0x1008a99d0
    void PointLightGridTextureData::ApplyLightDataToTextureData(const PointLight& pointLight, unsigned int arg2,
                                                                int arg3) {
        unsigned int uVar6 = (unsigned int)(127 < arg2) * 64;
        Vector4T<float>* local_40 = (Vector4T<float>*)(unsigned long)(uVar6 + 128);
        unsigned int local_50 = arg2;
        unsigned int local_44 = arg3;
        auto pfVar4 = pointLight.SSOBeginPtr();
        uint32_t uVar1 = render::RGBAToABGR((unsigned int)(long)*pfVar4);
        array<PointLightTextureData, 256ul>* this_00 =
            (array<PointLightTextureData, 256ul>*)(*this)[(unsigned long)(arg2 & 127)];
        uint32_t* puVar5 = (uint32_t*)(*this_00)[(unsigned long)local_40];
        *puVar5 = uVar1;
        pfVar4 = (float*)pointLight.y();
        uVar1 = render::RGBAToABGR((unsigned int)(long)*pfVar4);
        puVar5 = (uint32_t*)(*this_00)[(unsigned long)(uVar6 + 129)];
        *puVar5 = uVar1;
        pfVar4 = (float*)pointLight.second();
        uVar1 = render::RGBAToABGR((unsigned int)(long)*pfVar4);
        local_40 = (Vector4T<float>*)(unsigned long)(uVar6 + 131);
        puVar5 = (uint32_t*)(*this_00)[(unsigned long)(uVar6 + 130)];
        *puVar5 = uVar1;
        int iVar2 = (int)(pointLight.field_12 * 7.876803f);
        unsigned short local_36 = (unsigned short)iVar2;
        uVar1 = render::RGBAToABGR(local_44 & 65535 | iVar2 << 16);
        puVar5 = (uint32_t*)(*this_00)[(unsigned long)local_40];
        *puVar5 = uVar1;
        local_40 = (Vector4T<float>*)&pointLight.field_16;
        unsigned int uVar3 = math::R8G8B8A8FromColour4(*local_40);
        uVar1 = render::RGBAToABGR(uVar3);
        puVar5 = (uint32_t*)(*this_00)[(unsigned long)(uVar6 + 132)];
        *puVar5 = uVar1;
        pfVar4 = std::min<float>(*((float*)&constants::LightConstants::ATTENUATIONFALLOFF_MAX), pointLight.field_32);
        pfVar4 = std::max<float>(*((float*)&constants::LightConstants::ATTENUATIONFALLOFF_MIN), *pfVar4);
        uVar3 = (unsigned int)(long)(*pfVar4 * 6553.5);
        unsigned int local_4c = uVar3;
        pfVar4 = std::min<float>(*((float*)&constants::LightConstants::BACKLIGHTRATIO_MAX), pointLight.field_36);
        pfVar4 = std::max<float>(*((float*)&constants::LightConstants::BACKLIGHTRATIO_MIN), *pfVar4);
        unsigned int local_48 = (unsigned int)(long)(*pfVar4 * 255.0);
        uVar1 = render::RGBAToABGR(local_48 << 8 | uVar3 << 16);
        puVar5 = (uint32_t*)(*this_00)[(unsigned long)(uVar6 | 133)];
        *puVar5 = uVar1;
        unsigned long* arg1 = &field_131072;
        hash_combine<unsigned int>(arg1, &local_50);
        pfVar4 = (float*)pointLight.SSOBeginPtr();
        unsigned int local_34 = (unsigned int)(long)*pfVar4;
        hash_combine<unsigned int>(arg1, &local_34);
        pfVar4 = (float*)pointLight.y();
        local_34 = (unsigned int)(long)*pfVar4;
        hash_combine<unsigned int>(arg1, &local_34);
        pfVar4 = (float*)pointLight.second();
        local_34 = (unsigned int)(long)*pfVar4;
        hash_combine<unsigned int>(arg1, &local_34);
        hash_combine<unsigned short>(arg1, &local_36);
        hash_combine<int>(arg1, (int*)&local_44);
        local_34 = math::R8G8B8A8FromColour4(*local_40);
        hash_combine<unsigned int>(arg1, &local_34);
        hash_combine<unsigned int>(arg1, &local_4c);
        hash_combine<unsigned int>(arg1, &local_48);
    }

    // 0x1008a9ce0
    PointLightGridTexture::~PointLightGridTexture() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_texture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLightTexture.cpp",
                      118, "Destroy() not called on PointLightGridTexture");
        }
        (&field_40)->~future();
        m_effect->~shared_ptr();
    }

    // 0x1008a9d70
    void PointLightGridTexture::Create(const PointLightGridTextureData* pointLightGridTextureData, RT7Core& rt7Core,
                                       int arg3, int arg4) {
        CreateTexture(pointLightGridTextureData);
        CreatePointLightIndicesEffect(rt7Core, arg3, arg4);
    }

    // 0x1008a9db0
    void PointLightGridTexture::CreateTexture(const PointLightGridTextureData* pointLightGridTextureData) {
        unsigned char* arg1;
        array<std::array<PointLightTextureData, 256ul>, 128ul> aaStack_20088;
        uint8_t local_88[88];
        ReturnValue local_30;

        unsigned long uVar4 = 131072;
        ___bzero(&aaStack_20088);
        if (pointLightGridTextureData == nullptr) {
            arg1 = (unsigned char*)aaStack_20088.data();
        } else {
            arg1 = (unsigned char*)(*pointLightGridTextureData)[uVar4];
        }
        new ((local_88 + 64)) render::ResourceDataT(arg1, 0, 0, false);
        new (local_88) render::Texture::Desc();
        local_88._0_4_ = 256;
        local_88._4_4_ = 128;
        local_88[32] = 0;
        local_88._12_4_ = 7;
        if (operator_cast_to_bool()) {
            LogAssert("!m_texture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLightTexture.cpp",
                      159, nullptr);
        }
        make_shared<render::Texture2D, char const(&)[31]>(&local_30, "MapSquarePointLightGridTexture");
        *this = local_30;
        if (!(((Texture2D*)(*this).operator->())->Create(*local_88, (local_88 + 64), 0))) {
            LogAssert("success",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLightTexture.cpp",
                      162, nullptr);
        }
        long* plVar2 = (long*)(*this).operator->();
        long lVar3 = Instance();
        (**(void (**)(...))(*plVar2 + 24))(plVar2, lVar3 + 80, 1);
        if (pointLightGridTextureData == nullptr) {
            uVar4 = 0;
        } else {
            uVar4 = pointLightGridTextureData->field_131072;
        }
        field_32 = uVar4;
        ((local_88 + 64))->~ResourceDataT();
    }

    // 0x1008a9f30
    void PointLightGridTexture::CreatePointLightIndicesEffect(RT7Core& rt7Core, int arg2, int arg3) {
        long* plVar2;
        shared_ptr<PointLightIndicesEffect>* pointLightIndicesEffect;

        uint8_t* this_00 = m_effect;
        if (!(this_00->operator_cast_to_bool())) {
            MakeSharedPool<PointLightIndicesEffect, 64>::MakeShared<RT7Core&>(&local_48);
            *this_00 = local_48;
            plVar2 = (long*)(*this_00).operator->();
            pointLightIndicesEffect = (shared_ptr<PointLightIndicesEffect>*)*plVar2;
            (**(void (**)(...))(pointLightIndicesEffect + 16))(plVar2);
            ((PointLightIndicesEffect*)(unsigned long)(unsigned int)arg2)
                ->AddEffect(arg3, (int)this_00, *pointLightIndicesEffect);
        }
        if (!(operator_cast_to_bool())) {
            LogAssert("m_texture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLightTexture.cpp",
                      201, nullptr);
        }
        PointLightIndicesEffect* pPVar3 = (PointLightIndicesEffect*)(*this_00).operator->();
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_48(this);
        pPVar3->SetTexture(local_48);
        pPVar3 = (PointLightIndicesEffect*)(*this_00).operator->();
        pPVar3->SetMapSquareFineCoordBounds((unsigned int)arg2, arg3);
    }

    // 0x1008aa050
    void PointLightGridTexture::Destroy(int arg1, int arg2) {

        if (field_40.valid()) {
            field_40.wait();
        }
        if (operator_cast_to_bool()) {
            reset();
        }
        if (m_effect->operator_cast_to_bool()) {
            arg1->RemoveEffect(arg2);
            m_effect->reset();
        }
    }

    // 0x1008aa1f0
    void PointLightGridTexture::UpdateTexture(const shared_ptr<PointLightGridTextureData>& pointLightGridTextureData) {
        long lVar2;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[168];
        long local_30;

        if (!(operator_cast_to_bool())) {
            LogAssert("m_texture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/PointLightTexture.cpp",
                      169, nullptr);
        }
        if (field_32 != 0) {
            lVar2 = pointLightGridTextureData.operator->();
            if (*(long*)(lVar2 + 131072) == field_32)
                goto LAB_1008aa308;
        }
        uint8_t* this_00 = &field_40;
        Singleton<render::RenderDevice>* this_02 = (Singleton<render::RenderDevice>*)this_00;
        if (this_00->valid()) {
            this_02 = (Singleton<render::RenderDevice>*)this_00;
            this_00->wait();
        }
        auto this_01 = this_02->Instance();
        PointLightGridTexture* local_f8 = this;
        shared_ptr<oldscape::dash3d::Decor> local_f0(pointLightGridTextureData);
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::__2, void>(
            local_d8, (__2*)&local_f8);
        auto local_e0 = this_01->RunOnThreadPoolRenderContext("UpdateTexture", *local_d8);
        *this_00 = local_e0;
        UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::~__2((__2*)&local_f8);
        lVar2 = pointLightGridTextureData.operator->();
        field_32 = *(uint64_t*)(lVar2 + 131072);
    LAB_1008aa308:
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008a9970
    void hash_combine<unsigned int, int, int, int, int, int, int, int, int>(
        unsigned long& arg1, const unsigned int& arg2, const int& arg3, const int& arg4, const int& arg5,
        const int& arg6, const int& arg7, const int& arg8, const int& arg9, const int& arg10) {
        hash_combine<unsigned int>(arg1, arg2);
        hash_combine<int, int, int, int, int, int, int, int>(arg1, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

} // namespace jag
