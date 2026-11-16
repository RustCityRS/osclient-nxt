// libs/game/runetek5/scene/entities/LightSource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LightSource.h"

namespace jag::game {
    // 0x100f38bb8
    float LightSource::m_debugGlobalIntensityScale = 1.0f;

    // 0x100f38bbc
    int32_t LightSource::m_debugIsolatedPointLight = -1;

    // 0x1039b4e61
    bool LightSource::m_suppressFlicker;

    // 0x1001c0a60: LightSource::GetShadowParams() has the same machine code as graphics::GraphNode::GetChildren() const

    // 0x100417830: LightSource::GetPointLightSM() has the same machine code as LightSource::GetPointLightSM() const

    // 0x100429990
    LightSource::LightSource(graphics::GraphNode* graphNode, const shared_ptr<World>& world,
                             ConfigProvider* configProvider, const shared_ptr<StaticPointLight>& staticPointLight,
                             unsigned int arg5)
        : Entity(graphNode, world, 11, 0) {
        unsigned int arg1 = ((HitmarkType*)staticPointLight.operator->())->GetDuration();
        unsigned int arg2 = ((LightType*)staticPointLight.operator->())->GetAmplitude();
        int arg3 = ((WorldmapAreaMetadata*)staticPointLight.operator->())->GetMaxMapZ();
        new (field_192) graphics::ScriptedPointLight(arg1, arg2, arg3);
        new (this) MakeSharedPool<LightSource, 1024>();
        field_8 = &PTR__LightSource_100effba8;
        *(ConfigProvider**)(field_192 + 128) = configProvider;
        *(unsigned int*)(field_192 + 136) = arg5;
        new ((field_192 + 144)) shared_ptr(staticPointLight);
        *(uint64_t*)(field_192 + 160) = 0;
        new ((field_192 + 168)) LightShadowParams();
        *(uint64_t*)(field_192 + 184) = 0;
        *(uint64_t*)(field_192 + 192) = 0;
        uint32_t uVar1 = ((Material*)staticPointLight.operator->())->GetMaterialAnimationH();
        *(uint32_t*)(field_192 + 200) = uVar1;
        new ((field_192 + 208)) eastl::fixed_vector<unsigned int, 3ul>();
        field_192[264] = 0;
        if (graphNode == nullptr) {
            LogAssert("node",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/LightSource.cpp",
                      36, nullptr);
        }
        RecalculateAABB();
    }

    // 0x100429c20
    void LightSource::RecalculateAABB() {
        uint64_t local_38[2];

        auto this_00 = GetAABB();
        auto this_01 = GetNode();
        auto pVVar2 = this_01->GetWorldTranslation();
        auto pVVar3 = field_192->GetBoneIDMap();
        local_38[0] = *pVVar2 + *pVVar3;
        unsigned int uVar1 = ((HitmarkType*)(*((field_192 + 144))).operator->())->GetDuration();
        float local_28 = (float)uVar1;
        pVVar2 = (Vector3T<float>*)this_00->SSOBeginPtr();
        pVVar3 = (Vector3T<float>*)this_00->GetScreen();
        uint32_t* puVar4 = (uint32_t*)(*local_38)[0];
        uint32_t local_24 = *puVar4;
        puVar4 = (uint32_t*)(*pVVar3)[0];
        *puVar4 = local_24;
        puVar4 = (uint32_t*)(*pVVar2)[0];
        *puVar4 = local_24;
        puVar4 = (uint32_t*)(*local_38)[1];
        local_24 = *puVar4;
        puVar4 = (uint32_t*)(*pVVar3)[1];
        *puVar4 = local_24;
        puVar4 = (uint32_t*)(*pVVar2)[1];
        *puVar4 = local_24;
        puVar4 = (uint32_t*)(*local_38)[2];
        local_24 = *puVar4;
        puVar4 = (uint32_t*)(*pVVar3)[2];
        *puVar4 = local_24;
        puVar4 = (uint32_t*)(*pVVar2)[2];
        *puVar4 = local_24;
        float* pfVar5 = (float*)(*pVVar2)[0];
        *pfVar5 = *pfVar5 - local_28;
        pfVar5 = (float*)(*pVVar2)[1];
        *pfVar5 = *pfVar5 - local_28;
        pfVar5 = (float*)(*pVVar2)[2];
        *pfVar5 = *pfVar5 - local_28;
        pfVar5 = (float*)(*pVVar3)[0];
        *pfVar5 = *pfVar5 + local_28;
        pfVar5 = (float*)(*pVVar3)[1];
        *pfVar5 = *pfVar5 + local_28;
        pfVar5 = (float*)(*pVVar3)[2];
        *pfVar5 = local_28 + *pfVar5;
    }

    // 0x100429e30
    LightSource::~LightSource() {
        field_8 = &PTR__LightSource_100effba8;
        *(uint32_t*)(field_192 + 136) = 4294967295;
        if (*(PointLightSM**)(field_192 + 184) != nullptr) {
            (*(PointLightSM**)(field_192 + 184))->Destroy();
            *(uint64_t*)(field_192 + 184) = 0;
        }
        ((field_192 + 208))->~fixed_vector();
        ((field_192 + 144))->~shared_ptr();
    }

    // 0x100429f20
    void LightSource::MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44) {
        uint8_t* this_00;
        ConfigProvider* configProvider;
        StaticPointLight* pSVar1;
        PointLightPositionJitterData* pointLightPositionJitterData;
        float fVar2;
        uint32_t uVar3;

        if (*(unsigned int*)(field_192 + 160) < arg2) {
            this_00 = field_192;
            this_00->UpdateColour(arg2);
            this_00->UpdateIntensityScale(arg2);
            fVar2 = (float)FrameTime::GetFrameDelta();
            UpdateShadows(fVar2);
            pSVar1 = (StaticPointLight*)(*((field_192 + 144))).operator->();
            configProvider = *(ConfigProvider**)(field_192 + 128);
            pointLightPositionJitterData = (PointLightPositionJitterData*)this_00->GetCallstackRaw();
            pSVar1->CalculatePositionJitter(configProvider, *pointLightPositionJitterData);
            pSVar1 = (StaticPointLight*)(*((field_192 + 144))).operator->();
            uVar3 = pSVar1->CalculateIntensity(*(ConfigProvider**)(field_192 + 128), arg2, (bool)m_suppressFlicker);
            *(uint32_t*)(field_192 + 164) = uVar3;
            fVar2 = (float)this_00->GetIntensityScale();
            *(float*)(field_192 + 164) = fVar2 * *(float*)(field_192 + 164);
            *(unsigned int*)(field_192 + 160) = arg2;
        }
    }

    // 0x10042a000
    void LightSource::UpdateShadows(float arg1) {
        float* pfVar2;
        float fVar3;
        float local_28;
        float local_1c;

        if (*(long*)(field_192 + 184) != 0) {
            if (GetVisibleLastFrame() == '\0') {
                *(uint32_t*)(field_192 + 192) = 0;
                fVar3 = arg1 + *(float*)(field_192 + 196);
                *(float*)(field_192 + 196) = fVar3;
                if (*(float*)(field_192 + 176) <= fVar3 && fVar3 != *(float*)(field_192 + 176)) {
                    (*(PointLightSM**)(field_192 + 184))->Destroy();
                    *(uint64_t*)(field_192 + 184) = 0;
                }
            } else {
                if (*(float*)(field_192 + 192) < 1.125) {
                    local_28 = *(float*)(field_192 + 192) + arg1;
                    *(float*)(field_192 + 192) = local_28;
                    local_1c = 0.0;
                    local_28 = local_28 * 0.8888889f;
                    pfVar2 = std::min<float>(local_28, 1.0);
                    fVar3 = math::Lerp<float, float>(local_1c, *((field_192 + 200)), *pfVar2);
                    *(float*)(field_192 + 180) = fVar3;
                    local_1c = 1.0;
                    pfVar2 = std::min<float>(*((field_192 + 180)), local_1c);
                    *(float*)(field_192 + 180) = *pfVar2;
                }
                (*(PointLightSM**)(field_192 + 184))->SetShadowParams(*((field_192 + 168)));
                *(uint32_t*)(field_192 + 196) = 0;
            }
        }
    }

    // 0x10042a160
    void LightSource::SyncWithConfigurationSource() {
        uint8_t local_a8[128];

        shared_ptr<StaticPointLight>* this_00 = (shared_ptr<StaticPointLight>*)(field_192 + 144);
        unsigned int arg1 = ((HitmarkType*)(*this_00).operator->())->GetDuration();
        unsigned int arg2 = ((LightType*)(*this_00).operator->())->GetAmplitude();
        int arg3 = ((WorldmapAreaMetadata*)(*this_00).operator->())->GetMaxMapZ();
        new (local_a8) graphics::ScriptedPointLight(arg1, arg2, arg3);
        *field_192 = *local_a8;
    }

    // 0x10042a250
    uint64_t LightSource::WithinInfluenceRadius(const math::Vector3T<float>& vector3) {
        auto this_00 = GetNode();
        auto vector32 = this_00->GetWorldTranslation();
        uint64_t local_28 = vector3 - *vector32;
        float local_1c = (float)local_28.LengthSq();
        unsigned int uVar1 = ((HitmarkType*)(*((field_192 + 144))).operator->())->GetDuration();
        uint64_t uVar2 = 4294967295;
        if (local_1c < (float)uVar1 * (float)uVar1) {
            uVar2 = math::RoundFloatToInt(local_1c);
        }
        return uVar2;
    }

    // 0x10042a370
    bool LightSource::TestLightIntersection(const math::Sphere& sphere) {
        uint8_t local_20[16];

        local_20._0_8_ = GetWorldSphere();
        return local_20->TestIntersection(sphere) != '\0';
    }

    // 0x10042a420
    LightSource* LightSource::GetPointLight() const {
        LightSource* in_RSI;
        Vector4T<float> local_58;
        uint64_t local_40[2];

        uint8_t* this_00 = in_RSI->field_192;
        unsigned int uVar1 = this_00->GetPos();
        math::Colour4FromA8R8G8B8(uVar1);
        auto vector31 = in_RSI->GetWorldPosition();
        auto vector32 = this_00->GetBoneIDMap();
        local_40[0] = *vector31 + *vector32;
        uVar1 = this_00->GetX();
        float local_30 = (float)uVar1;
        float local_2c = (float)GetAttenuationFalloff(in_RSI);
        float arg5 = (float)GetBacklightRatio(in_RSI);
        new (this) graphics::PointLight(*local_40, local_30, local_58, local_2c, arg5, true);
        return this;
    }

    // 0x10042a540
    void LightSource::SetPointLightSM(graphics::PointLightSM* pointLightSM) {
        PointLightSM* this_00 = *(PointLightSM**)(field_192 + 184);
        if (this_00 != pointLightSM) {
            if (this_00 != nullptr) {
                this_00->Destroy();
                *(uint64_t*)(field_192 + 184) = 0;
            }
            if (pointLightSM != nullptr) {
                *(PointLightSM**)(field_192 + 184) = pointLightSM;
                *(uint32_t*)(field_192 + 180) = 0;
                pointLightSM->SetShadowParams(*((field_192 + 168)));
                *(uint64_t*)(field_192 + 192) = 0;
            }
        }
    }

    // 0x10042a5b0
    void LightSource::AddRemoteMapSquare(unsigned int arg1, unsigned int arg2) {
        unsigned int local_1c = arg1 << 16 | arg2;
        Layout* this_00 = (Layout*)(field_192 + 208);
        auto puVar1 = this_00->HeapBeginPtr();
        auto puVar2 = this_00->end();
        while (true) {
            if (puVar1 == puVar2) {
                this_00->push_back(local_1c);
                return;
            }
            if (*puVar1 == local_1c)
                break;
            puVar1 = puVar1 + 1;
        }
    }

    // 0x10042a630
    void LightSource::RemoveRemoteMapSquare(unsigned int arg1, unsigned int arg2) {
        Layout* this_00 = (Layout*)(field_192 + 208);
        auto arg1_00 = this_00->HeapBeginPtr();
        auto puVar1 = this_00->end();
        if (arg1_00 != puVar1) {
            do {
                if ((arg1 << 16 | arg2) == *arg1_00) {
                    this_00->erase(arg1_00);
                    return;
                }
                arg1_00 = arg1_00 + 1;
                puVar1 = (unsigned int*)this_00->end();
            } while (arg1_00 != puVar1);
        }
    }

    // 0x10042a6f0
    void LightSource::InitialiseTweakVars(tweak::ContainerGroup& containerGroup,
                                          graphics::EffectManager& effectManager) {
        shared_ptr<tweak::Container> local_48;

        eastl::string local_68("PointLights");
        (**(void (**)(...))(effectManager.field_0 + 240))(&local_48, effectManager, &local_68);
        local_68 = eastl::string((CtorSprintf*)"PointLight_%d",
                                 (char*)(unsigned long)*(unsigned int*)&containerGroup[1].field_32);
        auto str = local_48.operator->();
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_38.AddGroup(str);
        *local_38;
        (containerGroup._vptr[3]._dtor)(containerGroup);
    }

    // 0x10042a8e0
    void LightSource::CreateTweakPosSlider(tweak::Container& container, const char* str, float* arg3) {
        function<void(tweak::Event const&)> local_58[48];
        long local_28;

        std::function<void(tweak::Event const&)>::function<
            LightSource::CreateTweakPosSlider(tweak::Container&, char const*, float*)::__0, void>(local_58, (__0*)this);
        container.AddGradientSlider(str, -500000.0, 500000.0, 5.0, *local_58);
    }

    // 0x100436b90
    void LightSource::CreateTweakPosSlider(tweak::Container&, char const*,
                                           float*)::$_0::operator()(const tweak::Event& event) const {
        uint64_t uVar2;
        uint32_t uVar3;

        long* plVar1 = *(long**)this;
        auto this_00 = event.end();
        if (event.field_16 == 3) {
            uVar3 = this_00->GetCurrentValue();
            **(uint32_t**)(this + 8) = uVar3;
            uVar2 = (**(void (**)(...))(*plVar1 + 96))(plVar1);
            (**(void (**)(...))(*plVar1 + 88))(plVar1, uVar2);
        } else if (event.field_16 == 1) {
            this_00->SetSlider<float>(**(float**)(this + 8));
            this_00->SetGradient(2290649343, 2290649343);
        }
    }

} // namespace jag::game
