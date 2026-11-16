// libs/game/runetek5/scene/entities/LightSource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LightSource.h"

namespace jag::game {
    // 0x100f38bb8, 4 bytes, __data
    float LightSource::m_debugGlobalIntensityScale = 1.0f;

    // 0x100f38bbc, 4 bytes, __data
    LightSource::m_debugIsolatedPointLight = -1;

    // 0x1039b4e61, 7 bytes, __common; zero-initialised
    LightSource::m_suppressFlicker;

    // 0x1001c0a60: the linker folded this into graphics::GraphNode::GetChildren() const, which has identical code
    LightSource::GetShadowParams();

    // 0x100417830: the linker folded this into LightSource::GetPointLightSM() const, which has identical code
    LightSource::GetPointLightSM();

    // 0x100429990, 384 bytes, base-object constructor, placed by class name and debug map
    // LightSource::LightSource(graphics::GraphNode*, shared_ptr<World> const&, ConfigProvider*, shared_ptr<StaticPointLight> const&, unsigned int)
    void LightSource::LightSource(GraphNode* param_1, shared_ptr* param_2, ConfigProvider* param_3, shared_ptr* param_4,
                                  uint param_5) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        HitmarkType* this_00;
        LightType* this_01;
        WorldmapAreaMetadata* this_02;
        Material* this_03;
        undefined4 uVar4;

        Entity::Entity();
        this_00 = (HitmarkType*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)param_4);
        uVar1 = this_00->GetDuration();
        this_01 = (LightType*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)param_4);
        uVar2 = this_01->GetAmplitude();
        this_02 =
            (WorldmapAreaMetadata*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)param_4);
        iVar3 = this_02->GetMaxMapZ();
        new (field_192, uVar1, uVar2, iVar3) graphics::ScriptedPointLight();
        new (this) MakeSharedPool<LightSource, 1024>();
        field_0 = &PTR__LightSource_100effa68;
        field_8 = &PTR__LightSource_100effba8;
        *(ConfigProvider**)(field_192 + 128) = param_3;
        *(uint*)(field_192 + 136) = param_5;
        new ((field_192 + 144), param_4) shared_ptr<oldscape::dash3d::Decor>();
        *(undefined8*)(field_192 + 160) = 0;
        new ((field_192 + 168)) LightShadowParams();
        *(undefined8*)(field_192 + 184) = 0;
        *(undefined8*)(field_192 + 192) = 0;
        this_03 = (Material*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)param_4);
        uVar4 = this_03->GetMaterialAnimationH();
        *(undefined4*)(field_192 + 200) = uVar4;
        new ((field_192 + 208)) eastl::fixed_vector<unsigned int, 3ul, true, eastl::allocator>();
        field_192[264] = 0;
        if (param_1 == (GraphNode*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("node",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/LightSource.cpp",
                      36, (char*)0);
        }
        RecalculateAABB(this);
    }

    // 0x100429c20, 496 bytes, placed by class name and debug map
    // LightSource::RecalculateAABB()
    void LightSource::RecalculateAABB() {
        uint uVar1;
        NXTPixToolkit* this_00;
        GraphNode* this_01;
        Vector3T* pVVar2;
        Vector3T* pVVar3;
        HitmarkType* this_02;
        vector* this_03;
        Vector3T<float>* this_04;
        undefined4* puVar4;
        float* pfVar5;
        undefined8 local_38[2];
        float local_28;
        undefined4 local_24;

        this_00 = (NXTPixToolkit*)GetAABB();
        this_01 = (GraphNode*)GetNode();
        pVVar2 = (Vector3T*)this_01->GetWorldTranslation();
        pVVar3 = (Vector3T*)field_192->GetBoneIDMap();
        local_38[0] = math::operator+(pVVar2, pVVar3);
        this_02 =
            (HitmarkType*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)(field_192 + 144));
        uVar1 = this_02->GetDuration();
        local_28 = (float)uVar1;
        this_03 = this_00->SSOBeginPtr(pVVar3);
        this_04 = (Vector3T<float>*)this_00->GetScreen();
        puVar4 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_38, 0);
        local_24 = *puVar4;
        puVar4 = (undefined4*)math::Vector3T<float>::operator[](this_04, 0);
        *puVar4 = local_24;
        puVar4 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 0);
        *puVar4 = local_24;
        puVar4 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_38, 1);
        local_24 = *puVar4;
        puVar4 = (undefined4*)math::Vector3T<float>::operator[](this_04, 1);
        *puVar4 = local_24;
        puVar4 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 1);
        *puVar4 = local_24;
        puVar4 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)local_38, 2);
        local_24 = *puVar4;
        puVar4 = (undefined4*)math::Vector3T<float>::operator[](this_04, 2);
        *puVar4 = local_24;
        puVar4 = (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 2);
        *puVar4 = local_24;
        pfVar5 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 0);
        *pfVar5 = *pfVar5 - local_28;
        pfVar5 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 1);
        *pfVar5 = *pfVar5 - local_28;
        pfVar5 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_03, 2);
        *pfVar5 = *pfVar5 - local_28;
        pfVar5 = (float*)math::Vector3T<float>::operator[](this_04, 0);
        *pfVar5 = *pfVar5 + local_28;
        pfVar5 = (float*)math::Vector3T<float>::operator[](this_04, 1);
        *pfVar5 = *pfVar5 + local_28;
        pfVar5 = (float*)math::Vector3T<float>::operator[](this_04, 2);
        *pfVar5 = local_28 + *pfVar5;
    }

    // 0x100429e20, 16 bytes, complete-object constructor, placed by class name and debug map
    // LightSource::LightSource(graphics::GraphNode*, shared_ptr<World> const&, ConfigProvider*, shared_ptr<StaticPointLight> const&, unsigned int): jumps straight to the base-object constructor

    // 0x100429e30, 160 bytes, base-object destructor, placed by class name and debug map
    // LightSource::~LightSource()
    void LightSource::~LightSource() {
        field_0 = &PTR__LightSource_100effa68;
        field_8 = &PTR__LightSource_100effba8;
        *(undefined4*)(field_192 + 136) = 4294967295;
        if (*(PointLightSM**)(field_192 + 184) != (PointLightSM*)0) {
            (*(PointLightSM**)(field_192 + 184))->Destroy();
            *(undefined8*)(field_192 + 184) = 0;
        }
        ((field_192 + 208))->~fixed_vector();
        ((field_192 + 144))->~shared_ptr();
        ~Entity();
    }

    // 0x100429ed0, 16 bytes, complete-object destructor, placed by class name and debug map
    // LightSource::~LightSource(): jumps straight to the base-object destructor

    // 0x100429ef0, 32 bytes, deleting destructor, placed by class name and debug map
    // LightSource::~LightSource()
    void LightSource::~LightSource() {
        ~LightSource(this);
        operator_delete(this);
    }

    // 0x100429f20, 224 bytes, placed by class name and debug map
    // LightSource::MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&)
    void LightSource::MainLogic(RT7Core* param_1, uint param_2, Matrix44T* param_3) {
        undefined1* this_00;
        ConfigProvider* pCVar1;
        StaticPointLight* pSVar2;
        PointLightPositionJitterData* pPVar3;
        float fVar4;
        undefined4 uVar5;

        if (*(uint*)(field_192 + 160) < param_2) {
            this_00 = field_192;
            this_00->UpdateColour(param_2);
            this_00->UpdateIntensityScale(param_2);
            fVar4 = (float)FrameTime::GetFrameDelta();
            UpdateShadows(this, fVar4);
            pSVar2 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(
                (shared_ptr<StaticPointLight>*)(field_192 + 144));
            pCVar1 = *(ConfigProvider**)(field_192 + 128);
            pPVar3 = (PointLightPositionJitterData*)this_00->GetCallstackRaw();
            pSVar2->CalculatePositionJitter(pCVar1, pPVar3);
            pSVar2 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(
                (shared_ptr<StaticPointLight>*)(field_192 + 144));
            uVar5 = pSVar2->CalculateIntensity(*(ConfigProvider**)(field_192 + 128), param_2, (bool)m_suppressFlicker);
            *(undefined4*)(field_192 + 164) = uVar5;
            fVar4 = (float)this_00->GetIntensityScale();
            *(float*)(field_192 + 164) = fVar4 * *(float*)(field_192 + 164);
            *(uint*)(field_192 + 160) = param_2;
        }
    }

    // 0x10042a000, 304 bytes, placed by class name and debug map
    // LightSource::UpdateShadows(float)
    void LightSource::UpdateShadows(float param_1) {
        float* pfVar2;
        float fVar3;
        float local_28;
        float local_24;
        float local_1c;

        if (*(long*)(field_192 + 184) != 0) {
            if (GetVisibleLastFrame(this) == '\0') {
                *(undefined4*)(field_192 + 192) = 0;
                fVar3 = param_1 + *(float*)(field_192 + 196);
                *(float*)(field_192 + 196) = fVar3;
                if (*(float*)(field_192 + 176) <= fVar3 && fVar3 != *(float*)(field_192 + 176)) {
                    (*(PointLightSM**)(field_192 + 184))->Destroy();
                    *(undefined8*)(field_192 + 184) = 0;
                }
            } else {
                if (*(float*)(field_192 + 192) < 1.125) {
                    local_28 = *(float*)(field_192 + 192) + param_1;
                    *(float*)(field_192 + 192) = local_28;
                    local_1c = 0.0;
                    local_28 = local_28 * 0.8888889;
                    local_24 = 1.0;
                    pfVar2 = std::min<float>(&local_28, &local_24);
                    fVar3 = math::Lerp<float, float>(&local_1c, (float*)(field_192 + 200), *pfVar2);
                    *(float*)(field_192 + 180) = fVar3;
                    local_1c = 1.0;
                    pfVar2 = std::min<float>((float*)(field_192 + 180), &local_1c);
                    *(float*)(field_192 + 180) = *pfVar2;
                }
                (*(PointLightSM**)(field_192 + 184), (LightShadowParams*)(field_192 + 168))->SetShadowParams();
                *(undefined4*)(field_192 + 196) = 0;
            }
        }
    }

    // 0x10042a160, 144 bytes, placed by class name and debug map
    // LightSource::SyncWithConfigurationSource()
    void LightSource::SyncWithConfigurationSource() {
        shared_ptr<StaticPointLight>* this_00;
        HitmarkType* this_01;
        LightType* this_02;
        WorldmapAreaMetadata* this_03;
        uint uVar1;
        uint uVar2;
        int iVar3;
        undefined1 local_a8[128];

        this_00 = (shared_ptr<StaticPointLight>*)(field_192 + 144);
        this_01 = (HitmarkType*)shared_ptr<StaticPointLight>::operator->(this_00);
        uVar1 = this_01->GetDuration();
        this_02 = (LightType*)shared_ptr<StaticPointLight>::operator->(this_00);
        uVar2 = this_02->GetAmplitude();
        this_03 = (WorldmapAreaMetadata*)shared_ptr<StaticPointLight>::operator->(this_00);
        iVar3 = this_03->GetMaxMapZ();
        new (local_a8) graphics::ScriptedPointLight(uVar1, uVar2, iVar3);
        graphics::ScriptedPointLight::operator=((ScriptedPointLight*)field_192, (ScriptedPointLight*)local_a8);
    }

    // 0x10042a250, 144 bytes, placed by class name and debug map
    // LightSource::WithinInfluenceRadius(math::Vector3T<float> const&)
    undefined8 LightSource::WithinInfluenceRadius(Vector3T* param_1) {
        uint uVar1;
        GraphNode* this_00;
        Vector3T* pVVar2;
        HitmarkType* this_01;
        undefined8 uVar3;
        undefined8 local_28;
        float local_1c;

        this_00 = (GraphNode*)GetNode();
        pVVar2 = (Vector3T*)this_00->GetWorldTranslation();
        local_28 = math::operator-(param_1, pVVar2);
        local_1c = (float)local_28.LengthSq();
        this_01 =
            (HitmarkType*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)(field_192 + 144));
        uVar1 = this_01->GetDuration();
        uVar3 = 4294967295;
        if (local_1c < (float)uVar1 * (float)uVar1) {
            uVar3 = math::RoundFloatToInt(local_1c);
        }
        return uVar3;
    }

    // 0x10042a370, 48 bytes, placed by class name and debug map
    // LightSource::TestLightIntersection(math::Sphere const&)
    bool LightSource::TestLightIntersection(Sphere* param_1) {
        undefined1 local_20[16];

        local_20._0_8_ = GetWorldSphere(this);
        return local_20->TestIntersection(param_1) != '\0';
    }

    // 0x10042a420, 192 bytes, placed by class name and debug map
    // LightSource::GetPointLight() const
    LightSource* LightSource::GetPointLight() {
        undefined1* this_00;
        uint uVar1;
        Vector3T* pVVar2;
        Vector3T* pVVar3;
        LightSource* in_RSI;
        float fVar4;
        undefined8 local_58[3];
        undefined8 local_40[2];
        float local_30;
        float local_2c;

        this_00 = in_RSI->field_192;
        uVar1 = this_00->GetPos();
        local_58[0] = math::Colour4FromA8R8G8B8(uVar1);
        pVVar2 = (Vector3T*)in_RSI->GetWorldPosition();
        pVVar3 = (Vector3T*)this_00->GetBoneIDMap();
        local_40[0] = math::operator+(pVVar2, pVVar3);
        uVar1 = this_00->GetX();
        local_30 = (float)uVar1;
        local_2c = (float)GetAttenuationFalloff(in_RSI);
        fVar4 = (float)GetBacklightRatio(in_RSI);
        new (this) graphics::PointLight(local_40, local_30, local_58, local_2c, fVar4, true);
        return this;
    }

    // 0x10042a540, 112 bytes, placed by class name and debug map
    // LightSource::SetPointLightSM(graphics::PointLightSM*)
    void LightSource::SetPointLightSM(PointLightSM* param_1) {
        PointLightSM* this_00;

        this_00 = *(PointLightSM**)(field_192 + 184);
        if (this_00 != param_1) {
            if (this_00 != (PointLightSM*)0) {
                this_00->Destroy();
                *(undefined8*)(field_192 + 184) = 0;
            }
            if (param_1 != (PointLightSM*)0) {
                *(PointLightSM**)(field_192 + 184) = param_1;
                *(undefined4*)(field_192 + 180) = 0;
                param_1->SetShadowParams((LightShadowParams*)(field_192 + 168));
                *(undefined8*)(field_192 + 192) = 0;
            }
        }
    }

    // 0x10042a5b0, 112 bytes, placed by class name and debug map
    // LightSource::AddRemoteMapSquare(unsigned int, unsigned int)
    void LightSource::AddRemoteMapSquare(uint param_1, uint param_2) {
        uint* puVar1;
        uint* puVar2;
        Layout* this_00;

        this_00 = (Layout*)(field_192 + 208);
        puVar1 = (uint*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        puVar2 = (uint*)this_00->end();
        while (true) {
            if (puVar1 == puVar2) {
                eastl::fixed_vector<unsigned int, 3ul, true, eastl::allocator>::push_back((uint*)this_00);
                return;
            }
            if (*puVar1 == (param_1 << 16 | param_2))
                break;
            puVar1 = puVar1 + 1;
        }
    }

    // 0x10042a630, 112 bytes, placed by class name and debug map
    // LightSource::RemoveRemoteMapSquare(unsigned int, unsigned int)
    void LightSource::RemoveRemoteMapSquare(uint param_1, uint param_2) {
        uint* puVar1;
        uint* puVar2;
        Layout* this_00;

        this_00 = (Layout*)(field_192 + 208);
        puVar1 = (uint*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        puVar2 = (uint*)this_00->end();
        if (puVar1 != puVar2) {
            do {
                if ((param_1 << 16 | param_2) == *puVar1) {
                    this_00->erase(puVar1);
                    return;
                }
                puVar1 = puVar1 + 1;
                puVar2 = (uint*)this_00->end();
            } while (puVar1 != puVar2);
        }
    }

    // 0x10042a6f0, 496 bytes, placed by class name and debug map
    // LightSource::InitialiseTweakVars(tweak::ContainerGroup&, graphics::EffectManager&)
    void LightSource::InitialiseTweakVars(ContainerGroup* param_1, EffectManager* param_2) {
        char* pcVar1;
        Container* this;
        Layout* this_00;
        StringEnum* pSVar2;
        vector* pvVar3;
        float* pfVar4;
        eastl::string local_68[32];
        shared_ptr<tweak::Container> local_48[16];
        vector* local_38[2];

        new (local_38) eastl::allocator("EASTL basic_string");
        eastl::string::basic_string(local_68, "PointLights", (allocator*)local_38);
        (**(code**)(param_2->field_0 + 240))(local_48, param_2, local_68);
        eastl::string::~basic_string(local_68);
        eastl::string::basic_string(local_68, "PointLight_%d", *(undefined4*)&param_1[1].field_32);
        pcVar1 = (char*)shared_ptr<tweak::Container>::operator->(local_48);
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_38->AddGroup(pcVar1);
        this = (Container*)shared_ptr<tweak::Container>::operator*((shared_ptr<tweak::Container>*)local_38);
        local_38->~shared_ptr();
        this_00 = (Layout*)(*(code*)param_1->field_0[12])(param_1);
        AddCheckBox("ShadowEnabled", (bool*)&param_1[1].field_64);
        pSVar2 = (StringEnum*)GetOrthoFrustumFitNames();
        pcVar1 = "Shadow Frustum Fit";
        AddEnum("Shadow Frustum Fit", pSVar2, (int*)&param_1[1].field_68);
        pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)pcVar1);
        CreateTweakPosSlider((LightSource*)param_1, this, "Pos: X", (float*)pvVar3);
        pfVar4 = (float*)this_00->y();
        CreateTweakPosSlider((LightSource*)param_1, this, "Pos: Y", pfVar4);
        pfVar4 = (float*)this_00->second();
        CreateTweakPosSlider((LightSource*)param_1, this, "Pos: Z", pfVar4);
        local_38[0] = (&param_1->field_192, (type*)this)->SSOBeginPtr();
        tweak::Container::AddSlider<unsigned int>(this, "Radius", 0.0, 5000.0, 1.0, (uint**)local_38);
        eastl::string::~basic_string(local_68);
        local_48->~shared_ptr();
    }

    // 0x10042a8e0, 160 bytes, placed by class name and debug map
    // LightSource::CreateTweakPosSlider(tweak::Container&, char const*, float*)
    void LightSource::CreateTweakPosSlider(Container* param_1, char* param_2, float* param_3) {
        function local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(tweak::Event_const&)>::function<
            LightSource::CreateTweakPosSlider(tweak::Container&, char const*, float*)::__0, void>(local_58, this,
                                                                                                  param_3);
        param_1->AddGradientSlider(param_2, -500000.0, 500000.0, 5.0, local_58);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100436b90, 128 bytes, placed by class name
    // LightSource::CreateTweakPosSlider(tweak::Container&, char const*, float*)::$_0::operator()(tweak::Event const&) const
    /* LightSource::CreateTweakPosSlider(tweak::Container&, char const*,
   float*)::$_0::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const */

    void LightSource::CreateTweakPosSlider(tweak::Container&, char const*, float*)::$_0::operator()(Event* param_1) {
        long* plVar1;
        GradientSlider* this_00;
        undefined8 uVar2;
        undefined4 uVar3;

        plVar1 = *(long**)this;
        this_00 = (GradientSlider*)param_1->end();
        if (param_1->field_16 == 3) {
            uVar3 = this_00->GetCurrentValue();
            **(undefined4**)(this + 8) = uVar3;
            uVar2 = (**(code**)(*plVar1 + 96))(plVar1);
            (**(code**)(*plVar1 + 88))(plVar1, uVar2);
        } else if (param_1->field_16 == 1) {
            tweak::Slider::SetSlider<float>((Slider*)this_00, **(float**)(this + 8));
            this_00->SetGradient(2290649343, 2290649343);
        }
    }

} // namespace jag::game
