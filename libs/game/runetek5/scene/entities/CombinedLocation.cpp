// libs/game/runetek5/scene/entities/CombinedLocation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "CombinedLocation.h"

namespace jag::game {
    // 0x100f38f31
    bool CombinedLocation::m_ShowCombinedLocations = 1;

    // 0x100f38f32
    bool CombinedLocation::m_enableFadeIn = 1;

    // 0x1039b4ec4
    bool CombinedLocation::m_debugPrimitiveInactiveSection;

    // 0x1039b4ec5
    bool CombinedLocation::m_debugPrimitiveActiveSection;

    // 0x1039b4ec6
    bool CombinedLocation::m_debugPrimitiveSectionMouseoverEnabled;

    // 0x1039b4ec7
    bool CombinedLocation::m_debugPrimitiveAABBOnHighlight;

    // 0x100029ea0: CombinedLocation::IsAnimatable() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100049090: CombinedLocation::GetModel() const has the same machine code as oldscape::option::Option<eastl::fixed_string<char, 256>>::GetDefaultValue() const

    // 0x1001e0d60: CombinedLocation::VFXData::~VFXData() has the same machine code as hal::audio::AudioAPI::~AudioAPI()

    // 0x1004453f0
    bool CombinedLocation::SectionsToRender::HideSection(
        const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection, unsigned char arg2) {
        uint8_t* pbVar1 = &field_8[buildCombinedLocationResult_GroupSection];
        uint8_t bVar2 = *pbVar1 & arg2;
        if (bVar2 != arg2) {
            *pbVar1 = *pbVar1 | arg2;
        }
        return bVar2 != arg2;
    }

    // 0x1004454c0
    uint64_t CombinedLocation::SectionsToRender::UnhideSection(
        const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection, unsigned char arg2) {
        bool cVar1;
        uint32_t in_register_00000011;
        uint64_t uVar3;

        int* this_00 = &field_8;
        pair<int, graphics::FaceGroupRenderMasks>* arg1 =
            (pair<int, graphics::FaceGroupRenderMasks>*)eastl::vector_map<int, int>::find(*this_00);
        auto ppVar2 = this_00->end();
        if ((arg1 == ppVar2) || ((arg2 & ~(uint8_t)arg1[4]) != 0)) {
            uVar3 = 0;
        } else {
            ((FaceGroupRenderMasks*)(arg1 + 4))->field_0 = (uint8_t)arg1[4] & ~arg2;
            cVar1 = ((arg1 + 4))->IsEmpty();
            uVar3 = (((uint64_t)((uint64_t)in_register_00000011) << 8) | (uint8_t)1);
            if (cVar1) {
                this_00->erase(arg1);
            }
        }
        return uVar3;
    }

    // 0x100445570
    bool CombinedLocation::SectionsToRender::AppendSectionRenderCustomisationMask(
        const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection, unsigned char arg2) {
        long lVar1 = field_8[buildCombinedLocationResult_GroupSection];
        uint8_t bVar2 = *(uint8_t*)(lVar1 + 1) & arg2;
        if (bVar2 != arg2) {
            *(uint8_t*)(lVar1 + 1) = *(uint8_t*)(lVar1 + 1) | arg2;
        }
        return bVar2 != arg2;
    }

    // 0x1004455a0
    uint64_t CombinedLocation::SectionsToRender::RemoveSectionRenderCustomisationMask(
        const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection, unsigned char arg2) {
        bool cVar1;
        uint32_t in_register_00000011;
        uint64_t uVar3;

        int* this_00 = &field_8;
        pair<int, graphics::FaceGroupRenderMasks>* arg1 =
            (pair<int, graphics::FaceGroupRenderMasks>*)eastl::vector_map<int, int>::find(*this_00);
        auto ppVar2 = this_00->end();
        if ((arg1 == ppVar2) || (((uint8_t)arg1[5] & arg2) == 0)) {
            uVar3 = 0;
        } else {
            arg1[5] = (pair<int, graphics::FaceGroupRenderMasks>)((uint8_t)arg1[5] & ~arg2);
            cVar1 = ((arg1 + 4))->IsEmpty();
            uVar3 = (((uint64_t)((uint64_t)in_register_00000011) << 8) | (uint8_t)1);
            if (cVar1) {
                this_00->erase(arg1);
            }
        }
        return uVar3;
    }

    // 0x100445610
    bool CombinedLocation::SectionsToRender::IsHidden(
        const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection,
        unsigned char arg2) const {
        uint64_t uVar3;

        long lVar1 = eastl::vector_map<int, int>::find(field_8);
        long lVar2 = field_8.end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = ((lVar1 + 4))->IsHiddenByMask(arg2);
        }
        return uVar3;
    }

    // 0x100445670
    bool CombinedLocation::SectionsToRender::HasRenderCustomisationMask(
        const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection,
        unsigned char arg2) const {
        uint64_t uVar3;

        long lVar1 = eastl::vector_map<int, int>::find(field_8);
        long lVar2 = field_8.end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = ((lVar1 + 4))->HasCustomisationMask(arg2);
        }
        return uVar3;
    }

    // 0x1004456d0
    unsigned long CombinedLocation::SectionsToRender::CheckIfActiveSectionsChangedFromDefault() const {
        unsigned int* puVar1;
        Material* this_00;

        int* this_01 = &field_8;
        auto puVar3 = this_01->HeapBeginPtr();
        auto puVar4 = this_01->end();
        bool bVar5 = puVar3 == puVar4;
        if ((!bVar5) && ((puVar3[4] & 1) == 0)) {
            this_00 = (Material*)(puVar3 + 4);
            do {
                if ((this_00->IsRT7() != '\0') || (bVar5 = &this_00->m_iD == (unsigned int*)puVar4, bVar5))
                    break;
                puVar1 = &this_00->m_size;
                this_00 = (Material*)&this_00->m_size;
            } while ((*puVar1 & 1) == 0);
        }
        return ~bVar5 & 4294967041;
    }

    // 0x100445760
    CombinedLocation::CombinedLocation(
        graphics::RT7Core& rt7Core, graphics::GraphNode* graphNode, const shared_ptr<World>& world, bool arg4,
        bool arg5, bool arg6, bool arg7, const shared_ptr<graphics::Model>& model,
        const eastl::vector<BuildCombinedLocationResult_GroupSection>& buildCombinedLocationResult_GroupSections) {
        uint8_t* this_00;
        uint8_t* this_01;
        char cVar2;
        uint8_t bVar3;
        uint8_t uVar4;
        Model* pMVar6;
        BuildCombinedLocationResult_GroupSection* buildCombinedLocationResult_GroupSection;
        GraphNode* pGVar7;
        Vector3T<float>* vector3;
        unsigned int arg1;
        uint64_t in_register_00000089;
        float arg2;
        float in_XMM1_Da;
        uint64_t local_148;
        float local_140;
        QuaternionT<float> local_108;
        QuaternionT<float> local_f8;
        QuaternionT<float> local_e8;
        MakeSharedPool<CombinedLocationSection, 512> local_d8;
        float local_6c;
        Vector3T<float>* local_68;
        GraphNode* local_60;

        local_68 = (Vector3T<float>*)(((uint64_t)local_68._4_4_ << 32) |
                                      (uint32_t)((int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5)));
        new (this) LocationInterface(2, graphNode, world, 8, 0);
        new (this) MakeSharedPool<CombinedLocation, 128>();
        field_8 = &PTR__CombinedLocation_100f003e8;
        field_224 = arg6;
        field_225 = arg7;
        Layout* local_78 = (Layout*)&field_232;
        new (local_78)
            eastl::vector<BuildCombinedLocationResult_GroupSection>(buildCombinedLocationResult_GroupSections);
        field_264 = 0;
        uint8_t* local_38 = &field_272;
        new (local_38) eastl::vector<LocationAudioProperties>();
        uint8_t* local_40 = &field_304;
        new (local_40) Array<int>();
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* local_58 =
            (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)m_model;
        new (local_58) shared_ptr(model);
        uint8_t* local_a8 = &field_344;
        new (local_a8) eastl::fixed_vector<shared_ptr<graphics::ParticleSystem>, 1ul>();
        uint8_t* local_a0 = &field_400;
        new (local_a0) eastl::vector<shared_ptr<graphics::ModularParticleSystem>>();
        uint8_t* local_98 = &field_432;
        new (local_98) eastl::vector<CombinedLocation::SectionVFXData>();
        uint8_t* local_90 = &field_464;
        new (local_90) eastl::vector_map<int, graphics::FaceGroupRenderMasks>();
        int iVar5 = buildCombinedLocationResult_GroupSections.size();
        uint8_t* local_88 = &field_504;
        new (&field_504) SectionsToRender(iVar5);
        iVar5 = buildCombinedLocationResult_GroupSections.size();
        char* local_80 = &field_552;
        new (&field_552) SectionsToRender(iVar5);
        iVar5 = buildCombinedLocationResult_GroupSections.size();
        uint8_t* local_50 = &field_600;
        new (&field_600) SectionsToRender(iVar5);
        field_648 = 0;
        if (!*local_58 != nullptr) {
            LogAssert("m_model != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/CombinedLocation.cpp",
                      189, nullptr);
        }
        if ((!arg4) && ((char)local_68 == '\0')) {
            pMVar6 = (Model*)(*local_58).operator->();
            cVar2 = pMVar6->IsEmptyModel();
            if (cVar2) {
                LogAssert("hasOpaqueFaces || hasAlphaFaces || !m_model->IsEmptyModel()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/CombinedLocation.cpp",
                          190, "CombinedLocation.spec - an empty combinable location was created");
            }
        }
        Layout* this_02 = local_78;
        buildCombinedLocationResult_GroupSection = (BuildCombinedLocationResult_GroupSection*)local_78->HeapBeginPtr();
        auto local_c8 = this_02->end();
        if (buildCombinedLocationResult_GroupSection != local_c8) {
            do {
                if (buildCombinedLocationResult_GroupSection->field_48[32] == '\0') {
                    pGVar7 = GetNode();
                    vector3 = (Vector3T<float>*)pGVar7->GetWorldTranslation();
                    buildCombinedLocationResult_GroupSection->field_48->Translate(*vector3);
                } else {
                    local_68 = (Vector3T<float>*)((long)&buildCombinedLocationResult_GroupSection->field_24 + 4);
                    local_148 = math::operator-(local_68);
                    this_00 = buildCombinedLocationResult_GroupSection->field_48;
                    local_140 = in_XMM1_Da;
                    this_00->Translate(local_148);
                    local_108 = math::QuaternionT<float>();
                    this_01 = buildCombinedLocationResult_GroupSection->field_88;
                    bVar3 = this_01->GetRot();
                    local_108.FromAxisAngle(*PTR_UP_100ee66d0, (float)bVar3 * -1.5707964);
                    new (&local_148) math::Matrix44T<float>(local_108, *PTR_ZERO_100ee66e8);
                    this_00->Transform(local_148);
                    local_60 = graphics::GraphNode::Create<>();
                    graphNode->AddChild(local_60);
                    MakeSharedPool<CombinedLocationSection, 512>::MakeShared<
                        graphics::GraphNode*&, shared_ptr<World> const&, int&, int&, int&, shared_ptr<LocType>&,
                        LocData&, bool&, short&, short&, math::AABB&, int&>(
                        &local_d8, &local_60, world, (int*)&buildCombinedLocationResult_GroupSection->field_4,
                        (int*)((long)&buildCombinedLocationResult_GroupSection->field_16 + 4),
                        (int*)&buildCombinedLocationResult_GroupSection->field_24,
                        (shared_ptr<LocType>*)&buildCombinedLocationResult_GroupSection->field_144, (LocData*)this_01,
                        (bool*)&buildCombinedLocationResult_GroupSection->field_140,
                        (short*)&buildCombinedLocationResult_GroupSection->field_16,
                        (short*)((long)&buildCombinedLocationResult_GroupSection->field_16 + 2), (AABB*)this_00,
                        &buildCombinedLocationResult_GroupSection->field_184);
                    uVar4 = ((LocType*)buildCombinedLocationResult_GroupSection->field_144.end())->HasParticles();
                    *(uint8_t*)((long)&buildCombinedLocationResult_GroupSection->field_140 + 1) = uVar4;
                    buildCombinedLocationResult_GroupSection->field_160 = local_d8;
                    bVar3 = this_01->GetRot();
                    local_6c = (float)bVar3 * 1.5707964f;
                    cVar2 = buildCombinedLocationResult_GroupSection->field_88[0];
                    local_f8 = math::QuaternionT<float>();
                    arg2 = local_6c + 0.7853982f;
                    if (cVar2 != '\v') {
                        arg2 = local_6c;
                    }
                    in_XMM1_Da = local_6c;
                    local_f8.FromAxisAngle(*PTR_UP_100ee66d0, arg2);
                    local_e8 = math::QuaternionT<float>(*((buildCombinedLocationResult_GroupSection->field_88 + 4)));
                    local_e8 *= &local_f8;
                    local_60->SetRotation(local_e8);
                    local_60->SetTranslation(*local_68);
                    local_60->SetScale(buildCombinedLocationResult_GroupSection->field_124);
                    pGVar7 = local_60;
                    pGVar7->SetEntity((GraphEntity*)local_d8.end());
                    BuildSectionVFX(rt7Core, buildCombinedLocationResult_GroupSection);
                }
                buildCombinedLocationResult_GroupSection = buildCombinedLocationResult_GroupSection + 1;
            } while (buildCombinedLocationResult_GroupSection != local_c8);
        }
        CombinedLocation* this_03 = this;
        NXTPixToolkit* this_05 = (NXTPixToolkit*)(*local_58).operator->();
        auto this_06 = this_05->GetScreen();
        cVar2 = this_06->IsValid();
        if (cVar2) {
            this_03->SetAABB(*this_06);
        }
        this_03->SetOccludesView(true);
        cVar2 = (&this_03->field_176)->operator_cast_to_bool();
        if (cVar2) {
            cVar2 = ((World*)this_03->field_176.operator->())->GetMainSceneDrawn();
            if ((cVar2) && (m_enableFadeIn != '\0')) {
                pMVar6 = (Model*)(*local_58).operator->();
                arg1 = 300;
                goto LAB_100445c90;
            }
        }
        pMVar6 = (Model*)(*local_58).operator->();
        arg1 = 0;
    LAB_100445c90:
        pMVar6->SetFadeTime(arg1);
        pMVar6 = (Model*)(*local_58).operator->();
        pMVar6->SetPointLightIndicesVertexData(true);
    }

    // 0x1004460c0
    void CombinedLocation::BuildSectionVFX(
        graphics::RT7Core& rt7Core,
        BuildCombinedLocationResult_GroupSection* buildCombinedLocationResult_GroupSection) {
        uint8_t bVar2;
        Matrix44T<float>* matrix44;
        ObjType* this_03;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_04;
        RawData* rawData;
        RawData* pRVar5;
        ReturnValue local_b8;
        uint8_t local_70[32];
        ReturnValue local_50;
        SectionVFXData* local_38;

        auto plVar3 = buildCombinedLocationResult_GroupSection->field_160.operator->();
        shared_ptr<LocType>* this_00 = (shared_ptr<LocType>*)(**(void (**)(...))(*plVar3 + 328))(plVar3);
        LocType* pLVar4 = (LocType*)(*this_00).operator->();
        if (pLVar4->HasVFX()) {
            pLVar4 = (LocType*)(*this_00).operator->();
            matrix44 = (((Entity*)buildCombinedLocationResult_GroupSection->field_160.operator->())->GetNode())
                           ->GetWorldTransformationMatrix();
            bVar2 = buildCombinedLocationResult_GroupSection->field_88->GetRot();
            local_b8 = pLVar4->GetLocationWorldMatrix(*matrix44, (unsigned int)bVar2);
            local_38 = field_432.emplace_back<>();
            local_38->field_0 = buildCombinedLocationResult_GroupSection;
            this_03 = (ObjType*)(*this_00).operator->();
            this_04 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_03->GetOffset2D();
            rawData = (RawData*)this_04->data();
            pRVar5 = (RawData*)this_04->end();
            if (rawData != pRVar5) {
                local_38 = (SectionVFXData*)&local_38->field_8;
                do {
                    new (local_70) VFXData();
                    make_shared<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo::RawData const&,
                                math::Matrix44T<float>&>(&local_50, rawData, &local_b8);
                    (*((local_70 + 16))) = local_50;
                    local_50 = ((ParticleManager*)rt7Core.GetParticleManager())->RegisterSystem(*((local_70 + 16)));
                    *local_70 = local_50;
                    if (local_70->operator_cast_to_bool()) {
                        local_38->push_back(*local_70);
                    }
                    rawData = (RawData*)&rawData[1].field_8;
                } while (rawData != pRVar5);
            }
        }
    }

    // 0x100446320
    CombinedLocation::~CombinedLocation() {
        field_8 = &PTR__CombinedLocation_100f003e8;
        Destruct();
        field_600.~SectionsToRender();
        field_504.~SectionsToRender();
        field_464.~vector_map();
        field_432.~vector();
        field_400.~vector();
        field_344.~fixed_vector();
        m_model->~shared_ptr();
        field_304.~Array();
        field_272.~vector();
        field_232.~vector();
    }

    // 0x1004464c0
    void CombinedLocation::Destruct() {
        shared_ptr<World>* this_02;
        HeightMap* this_04;
        BuildCombinedLocationResult_GroupSection* pBVar2;
        BuildCombinedLocationResult_GroupSection* pBVar3;

        if ((GetWorld())->operator_cast_to_bool()) {
            this_02 = (shared_ptr<World>*)GetWorld();
            this_04 = ((World*)(*this_02).operator->())->GetHeightMap();
            pBVar2 = (BuildCombinedLocationResult_GroupSection*)field_232.HeapBeginPtr();
            pBVar3 = (BuildCombinedLocationResult_GroupSection*)field_232.end();
            if (pBVar2 != pBVar3) {
                do {
                    if ((*(short*)&pBVar2->field_16 != 0) || (*(short*)((long)&pBVar2->field_16 + 2) != 0)) {
                        if (!(field_504.IsHidden(*pBVar2, '\a'))) {
                            this_04->RemoveLocationHeightOffset(
                                *(int*)&pBVar2->field_8, *(int*)((long)&pBVar2->field_16 + 4), *(int*)&pBVar2->field_24,
                                *(int*)&pBVar2->field_40, *(int*)((long)&pBVar2->field_40 + 4),
                                (int)*(short*)((long)&pBVar2->field_16 + 2), (int)*(short*)&pBVar2->field_16);
                        }
                    }
                    pBVar2 = pBVar2 + 1;
                } while (pBVar2 != pBVar3);
            }
        }
        uint8_t* this_00 = m_model;
        if (this_00->operator_cast_to_bool()) {
            pBVar2 = (BuildCombinedLocationResult_GroupSection*)field_232.HeapBeginPtr();
            pBVar3 = (BuildCombinedLocationResult_GroupSection*)field_232.end();
            if (pBVar2 != pBVar3) {
                do {
                    field_504.RemoveSectionRenderCustomisationMask(*pBVar2, '\x03');
                    pBVar2 = pBVar2 + 1;
                } while (pBVar2 != pBVar3);
            }
            ((Model*)(*this_00).operator->())->ClearHighlight();
        }
        this_00->reset();
        field_232.clear();
        field_344.clear();
        field_400.clear();
        field_432.clear();
        (*(void (*)(...))field_8[3])(&field_8);
    }

    // 0x1004466c0
    void CombinedLocation::HideSection(
        CombinedLocation::SectionsToRender& sectionsToRender,
        const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection, unsigned char arg3) {
        CombinedLocationSection* pCVar2;
        uint8_t* this_00;

        bool cVar1 = sectionsToRender.HideSection(buildCombinedLocationResult_GroupSection, arg3);
        if ((cVar1) && ((SectionsToRender*)&field_504 == sectionsToRender)) {
            this_00 = &buildCombinedLocationResult_GroupSection.field_160;
            cVar1 = this_00->operator_cast_to_bool();
            if (cVar1) {
                if ((arg3 & 2) == 0) {
                    if ((arg3 & 253) != 0) {
                        pCVar2 = (CombinedLocationSection*)(*this_00).operator->();
                        pCVar2->Hide();
                    }
                } else {
                    pCVar2 = (CombinedLocationSection*)(*this_00).operator->();
                    pCVar2->ActivateRoofRemove();
                }
            }
            field_506 = 1;
        }
    }

    // 0x1004467d0
    void CombinedLocation::HideSection(
        const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection, unsigned char arg2) {
        HideSection(field_504, buildCombinedLocationResult_GroupSection, arg2);
        HideSection(field_552, buildCombinedLocationResult_GroupSection, arg2);
        HideSection(field_600, buildCombinedLocationResult_GroupSection, arg2);
    }

    // 0x100446830
    void CombinedLocation::UnhideSection(
        CombinedLocation::SectionsToRender& sectionsToRender,
        const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection, unsigned char arg3) {
        CombinedLocationSection* pCVar2;
        uint8_t* this_00;

        bool cVar1 = sectionsToRender.UnhideSection(buildCombinedLocationResult_GroupSection, arg3);
        if ((cVar1) && ((SectionsToRender*)&field_504 == sectionsToRender)) {
            this_00 = &buildCombinedLocationResult_GroupSection.field_160;
            cVar1 = this_00->operator_cast_to_bool();
            if (cVar1) {
                if ((arg3 & 2) == 0) {
                    if ((arg3 & 253) != 0) {
                        pCVar2 = (CombinedLocationSection*)(*this_00).operator->();
                        pCVar2->Unhide();
                    }
                } else {
                    pCVar2 = (CombinedLocationSection*)(*this_00).operator->();
                    pCVar2->DeactivateRoofRemove();
                }
            }
            field_506 = 1;
        }
    }

    // 0x100446900
    void CombinedLocation::UnhideSection(
        const BuildCombinedLocationResult_GroupSection& buildCombinedLocationResult_GroupSection, unsigned char arg2) {
        UnhideSection(field_504, buildCombinedLocationResult_GroupSection, arg2);
        UnhideSection(field_552, buildCombinedLocationResult_GroupSection, arg2);
        UnhideSection(field_600, buildCombinedLocationResult_GroupSection, arg2);
    }

    // 0x100446960
    void CombinedLocation::HideSection(LocShape locShape) {
        bool cVar1;
        char cVar2;
        LocShape LVar3;
        int iVar4;
        int iVar5;
        BuildCombinedLocationResult_GroupSection* buildCombinedLocationResult_GroupSection;

        buildCombinedLocationResult_GroupSection = (BuildCombinedLocationResult_GroupSection*)field_232.HeapBeginPtr();
        auto pBVar6 = field_232.end();
        if (buildCombinedLocationResult_GroupSection != pBVar6) {
            do {
                cVar1 = (&buildCombinedLocationResult_GroupSection->field_160)->operator_cast_to_bool();
                if (cVar1) {
                    cVar1 = ((CombinedLocationSection*)buildCombinedLocationResult_GroupSection->field_160.operator->())
                                ->IsHidden();
                    if (!cVar1) {
                        LVar3 = buildCombinedLocationResult_GroupSection->field_88->GetShape();
                        iVar4 = LocShapes::GetLayer(LVar3 & 255);
                        iVar5 = LocShapes::GetLayer(locShape & 255);
                        if (iVar4 == iVar5) {
                            LVar3 = buildCombinedLocationResult_GroupSection->field_88->GetShape();
                            cVar1 = LocShapes::IsAlternativePieceShape(LVar3 & 255);
                            cVar2 = LocShapes::IsAlternativePieceShape(locShape & 255);
                            if (cVar1 == cVar2) {
                                HideSection(*buildCombinedLocationResult_GroupSection, '\x01');
                            }
                        }
                    }
                }
                buildCombinedLocationResult_GroupSection = buildCombinedLocationResult_GroupSection + 1;
            } while (buildCombinedLocationResult_GroupSection != pBVar6);
        }
    }

    // 0x100446ac0
    void CombinedLocation::UnhideSection(LocShape locShape) {
        bool cVar1;
        char cVar2;
        LocShape LVar3;
        int iVar4;
        int iVar5;
        BuildCombinedLocationResult_GroupSection* buildCombinedLocationResult_GroupSection;

        buildCombinedLocationResult_GroupSection = (BuildCombinedLocationResult_GroupSection*)field_232.HeapBeginPtr();
        auto pBVar6 = field_232.end();
        if (buildCombinedLocationResult_GroupSection != pBVar6) {
            do {
                cVar1 = (&buildCombinedLocationResult_GroupSection->field_160)->operator_cast_to_bool();
                if (cVar1) {
                    cVar1 = ((CombinedLocationSection*)buildCombinedLocationResult_GroupSection->field_160.operator->())
                                ->IsHidden();
                    if (cVar1) {
                        LVar3 = buildCombinedLocationResult_GroupSection->field_88->GetShape();
                        iVar4 = LocShapes::GetLayer(LVar3 & 255);
                        iVar5 = LocShapes::GetLayer(locShape & 255);
                        if (iVar4 == iVar5) {
                            LVar3 = buildCombinedLocationResult_GroupSection->field_88->GetShape();
                            cVar1 = LocShapes::IsAlternativePieceShape(LVar3 & 255);
                            cVar2 = LocShapes::IsAlternativePieceShape(locShape & 255);
                            if (cVar1 == cVar2) {
                                UnhideSection(*buildCombinedLocationResult_GroupSection, '\x01');
                            }
                        }
                    }
                }
                buildCombinedLocationResult_GroupSection = buildCombinedLocationResult_GroupSection + 1;
            } while (buildCombinedLocationResult_GroupSection != pBVar6);
        }
    }

    // 0x100446bb0
    unsigned long CombinedLocation::HideActiveSection(int arg1, int arg2, int arg3, int arg4, LocShape locShape) {
        bool cVar1;
        uint8_t bVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        BuildCombinedLocationResult_GroupSection* buildCombinedLocationResult_GroupSection;

        buildCombinedLocationResult_GroupSection = (BuildCombinedLocationResult_GroupSection*)field_232.HeapBeginPtr();
        auto pBVar6 = field_232.end();
        bool bVar7 = buildCombinedLocationResult_GroupSection == pBVar6;
        if (!bVar7) {
            do {
                if (buildCombinedLocationResult_GroupSection->field_48[32] != '\0') {
                    cVar1 = ((CombinedLocationSection*)buildCombinedLocationResult_GroupSection->field_160.operator->())
                                ->IsHidden();
                    if (((!cVar1) && (((arg1 == -1 || (buildCombinedLocationResult_GroupSection->field_84 == arg1)) &&
                                       (*(int*)&buildCombinedLocationResult_GroupSection->field_4 == arg2)))) &&
                        ((*(int*)((long)&buildCombinedLocationResult_GroupSection->field_16 + 4) == arg3 &&
                          (*(int*)&buildCombinedLocationResult_GroupSection->field_24 == arg4)))) {
                        bVar2 = buildCombinedLocationResult_GroupSection->field_88->GetShape();
                        iVar4 = LocShapes::GetLayer((unsigned int)bVar2);
                        iVar5 = LocShapes::GetLayer(locShape & 255);
                        if (iVar4 == iVar5) {
                            bVar2 = buildCombinedLocationResult_GroupSection->field_88->GetShape();
                            cVar1 = LocShapes::IsAlternativePieceShape((unsigned int)bVar2);
                            cVar3 = LocShapes::IsAlternativePieceShape(locShape & 255);
                            if (cVar1 == cVar3) {
                                HideSection(*buildCombinedLocationResult_GroupSection, '\x01');
                                break;
                            }
                        }
                    }
                }
                buildCombinedLocationResult_GroupSection = buildCombinedLocationResult_GroupSection + 1;
                bVar7 = buildCombinedLocationResult_GroupSection == pBVar6;
            } while (!bVar7);
        }
        return ~bVar7 & 4294967041;
    }

    // 0x100446cf0
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*
    CombinedLocation::UnhideActiveSection(int arg1, int arg2, int arg3, int arg4, LocShape locShape,
                                          Rotation90 rotation90) {
        bool cVar1;
        uint8_t bVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        BuildCombinedLocationResult_GroupSection* buildCombinedLocationResult_GroupSection;
        uint32_t in_register_00000034;
        uint32_t in_register_0000003c;
        uint8_t in_stack_00000008;
        char in_stack_00000010;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>* this_00 =
            (shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*)(((uint64_t)in_register_0000003c << 32) |
                                                                            (uint32_t)arg1);
        new (this_00) shared_ptr();
        uint8_t* puVar7 = &((CombinedLocation*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2))->field_232;
        buildCombinedLocationResult_GroupSection = (BuildCombinedLocationResult_GroupSection*)puVar7->HeapBeginPtr();
        auto pBVar6 = puVar7->end();
        for (; buildCombinedLocationResult_GroupSection != pBVar6;
             buildCombinedLocationResult_GroupSection = buildCombinedLocationResult_GroupSection + 1) {
            if (buildCombinedLocationResult_GroupSection->field_48[32] != '\0') {
                cVar1 = ((CombinedLocationSection*)buildCombinedLocationResult_GroupSection->field_160.operator->())
                            ->IsHidden();
                if (((cVar1) && (((arg3 == -1 || (buildCombinedLocationResult_GroupSection->field_84 == arg3)) &&
                                  (*(int*)&buildCombinedLocationResult_GroupSection->field_4 == arg4)))) &&
                    ((*(LocShape*)((long)&buildCombinedLocationResult_GroupSection->field_16 + 4) == locShape &&
                      (*(Rotation90*)&buildCombinedLocationResult_GroupSection->field_24 == rotation90)))) {
                    puVar7 = buildCombinedLocationResult_GroupSection->field_88;
                    cVar1 = puVar7->GetRot();
                    if (cVar1 == in_stack_00000010) {
                        bVar2 = puVar7->GetShape();
                        iVar4 = LocShapes::GetLayer((unsigned int)bVar2);
                        iVar5 = LocShapes::GetLayer((unsigned int)in_stack_00000008);
                        if (iVar4 == iVar5) {
                            bVar2 = puVar7->GetShape();
                            cVar1 = LocShapes::IsAlternativePieceShape((unsigned int)bVar2);
                            cVar3 = LocShapes::IsAlternativePieceShape((unsigned int)in_stack_00000008);
                            if (cVar1 == cVar3) {
                                UnhideSection(
                                    (CombinedLocation*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2),
                                    buildCombinedLocationResult_GroupSection, '\x01');
                                *this_00 = buildCombinedLocationResult_GroupSection->field_160;
                            }
                        }
                    }
                }
            }
        }
        return this_00;
    }

    // 0x100446e60
    void CombinedLocation::UnhideActiveSectionsArea(const CoordFine& coordFine1, const CoordFine& coordFine2) {
        float fVar1;
        BuildCombinedLocationResult_GroupSection* buildCombinedLocationResult_GroupSection;
        GraphNode* this_01;
        Layout* this_02;
        float* pfVar3;

        buildCombinedLocationResult_GroupSection = (BuildCombinedLocationResult_GroupSection*)field_232.HeapBeginPtr();
        auto pBVar2 = field_232.end();
        if (buildCombinedLocationResult_GroupSection != pBVar2) {
            do {
                if (buildCombinedLocationResult_GroupSection->field_48[32] != '\0') {
                    this_01 = ((Entity*)buildCombinedLocationResult_GroupSection->field_160.operator->())->GetNode();
                    this_02 = (Layout*)this_01->GetWorldTranslation();
                    pfVar3 = (float*)this_02->SSOBeginPtr();
                    fVar1 = *pfVar3;
                    pfVar3 = (float*)coordFine1.field_4.SSOBeginPtr();
                    if (*pfVar3 <= fVar1) {
                        pfVar3 = (float*)this_02->SSOBeginPtr();
                        fVar1 = *pfVar3;
                        pfVar3 = (float*)coordFine2.field_4.SSOBeginPtr();
                        if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
                            pfVar3 = (float*)this_02->second();
                            fVar1 = *pfVar3;
                            pfVar3 = (float*)coordFine1.field_4.second();
                            if (*pfVar3 <= fVar1) {
                                pfVar3 = (float*)this_02->second();
                                fVar1 = *pfVar3;
                                pfVar3 = (float*)coordFine2.field_4.second();
                                if ((fVar1 < *pfVar3 || fVar1 == *pfVar3) &&
                                    (*(unsigned int*)&buildCombinedLocationResult_GroupSection->field_4 ==
                                     coordFine1.field_0)) {
                                    UnhideSection(*buildCombinedLocationResult_GroupSection, '\x01');
                                }
                            }
                        }
                    }
                }
                buildCombinedLocationResult_GroupSection = buildCombinedLocationResult_GroupSection + 1;
            } while (buildCombinedLocationResult_GroupSection != pBVar2);
        }
    }

    // 0x100446fb0
    shared_ptr* CombinedLocation::FindActiveSection(int arg1, int arg2, int arg3, LocShape locShape) {
        uint8_t bVar1;
        uint8_t bVar2;
        int iVar3;
        int iVar4;
        shared_ptr* local_48;

        long lVar5 = field_232.HeapBeginPtr();
        long lVar6 = field_232.end();
        while (true) {
            if (lVar5 == lVar6) {
                return (shared_ptr*)&CombinedLocationSection::NullSection;
            }
            bVar2 = 1;
            if ((((*(char*)(lVar5 + 80) != '\0') && (*(int*)(lVar5 + 4) == arg1)) && (*(int*)(lVar5 + 20) == arg2)) &&
                (*(int*)(lVar5 + 24) == arg3)) {
                bVar1 = ((lVar5 + 88))->GetShape();
                iVar3 = LocShapes::GetLayer((unsigned int)bVar1);
                iVar4 = LocShapes::GetLayer(locShape & 255);
                if (iVar3 == iVar4) {
                    bVar2 = ((lVar5 + 88))->GetShape();
                    bVar1 = LocShapes::IsAlternativePieceShape((unsigned int)bVar2);
                    bVar2 = LocShapes::IsAlternativePieceShape(locShape & 255);
                    bVar2 = bVar2 ^ bVar1;
                    if (bVar2 == 0) {
                        local_48 = (shared_ptr*)(lVar5 + 160);
                    }
                }
            }
            if (bVar2 == 0)
                break;
            lVar5 = lVar5 + 192;
        }
        return local_48;
    }

    // 0x1004470d0
    shared_ptr* CombinedLocation::FindActiveSection(int arg1, int arg2, int arg3, int arg4) {
        uint32_t in_register_00000034;
        bool bVar4;

        shared_ptr* psVar3 = (shared_ptr*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        long lVar1 = field_232.HeapBeginPtr();
        long lVar2 = field_232.end();
        while (true) {
            if (lVar1 == lVar2) {
                return (shared_ptr*)&CombinedLocationSection::NullSection;
            }
            bVar4 = true;
            if ((((*(char*)(lVar1 + 80) != '\0') && (*(int*)(lVar1 + 84) == arg4)) && (*(int*)(lVar1 + 4) == arg1)) &&
                (*(int*)(lVar1 + 20) == arg2)) {
                bVar4 = *(int*)(lVar1 + 24) != arg3;
                if (!bVar4) {
                    psVar3 = (shared_ptr*)(lVar1 + 160);
                }
            }
            if (!bVar4)
                break;
            lVar1 = lVar1 + 192;
        }
        return psVar3;
    }

    // 0x100447180
    void CombinedLocation::HideHiddenAudioCombinableSections() {
        BuildCombinedLocationResult_GroupSection* buildCombinedLocationResult_GroupSection;

        buildCombinedLocationResult_GroupSection = (BuildCombinedLocationResult_GroupSection*)field_232.HeapBeginPtr();
        auto pBVar1 = field_232.end();
        for (; buildCombinedLocationResult_GroupSection != pBVar1;
             buildCombinedLocationResult_GroupSection = buildCombinedLocationResult_GroupSection + 1) {
            if (buildCombinedLocationResult_GroupSection->field_180 != '\0') {
                HideSection(*buildCombinedLocationResult_GroupSection, '\x01');
            }
        }
    }

    // 0x100447200
    void CombinedLocation::MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2,
                                     const math::Matrix44T<float>& matrix44) {
        Layout* this_01;
        bool bVar2;
        uint8_t arg1;
        int arg1_01;
        long lVar3;
        shared_ptr<World>* this_02;
        IrradianceEffect* midiPlayerMainThread;
        Model* pMVar4;
        IrradianceEffect* this_03;
        int* arg1_02;
        int* piVar5;
        uint8_t* puVar6;
        RT7Core* pRVar7;
        Layout* local_40;

        UpdateAudio();
        UpdateRandomSounds(TicksSinceLastCall(arg2));
        UpdateHighlighting(arg2);
        uint8_t* this_00 = m_model;
        if (this_00->operator_cast_to_bool()) {
            local_40 = (Layout*)&field_232;
            lVar3 = local_40->front();
            this_02 = (shared_ptr<World>*)GetWorld();
            arg1_01 = (*this_02).operator->();
            midiPlayerMainThread = (IrradianceEffect*)World::GetClosestMapSquare(
                arg1_01, *(int*)(lVar3 + 40), *(int*)(lVar3 + 44), *(int*)(lVar3 + 20), *(int*)(lVar3 + 24), field_68);
            this_03 = midiPlayerMainThread;
            bVar2 = *midiPlayerMainThread != nullptr;
            if (bVar2) {
                pMVar4 = (Model*)(*this_00).operator->();
                this_03 = (IrradianceEffect*)pMVar4->GetIrradianceEffect();
                this_03->SetCoefficients(((MapSquare*)(*midiPlayerMainThread).operator->())->GetIrradianceSHConsts());
            }
            ((ModelUpdateManager*)this_03->Instance())->AddToUpdateList(*this_00);
            pMVar4 = (Model*)(*this_00).operator->();
            if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)pMVar4->GetParticleEmitters())
                      ->empty())) {
                if (field_506 != '\0') {
                    field_506 = 0;
                    field_464 = field_512;
                    this_01 = local_40;
                    arg1_02 = (int*)local_40->HeapBeginPtr();
                    piVar5 = (int*)this_01->end();
                    for (; arg1_02 != piVar5; arg1_02 = arg1_02 + 48) {
                        if (*(char*)((long)arg1_02 + 141) == '\0') {
                            puVar6 = &field_464[*arg1_02];
                            *puVar6 = 1;
                        }
                    }
                }
                pRVar7 = (RT7Core*)(*this_00).operator->();
                bVar2 = (bool)((char)this - 48);
                graphics::Model::UpdateParticleEmitters(*pRVar7, rt7Core, field_344, matrix44, nullptr, bVar2);
                pRVar7 = (RT7Core*)(*this_00).operator->();
                graphics::Model::UpdateModularParticleSystems(*pRVar7, rt7Core, field_400, matrix44, nullptr, bVar2);
            }
        }
        if (!(field_344.empty())) {
            arg1 = false;
        } else {
            arg1 = field_400.empty();
        }
        SetNDCProjectionTestEnabled((bool)arg1);
    }

    // 0x100447440
    void CombinedLocation::UpdateRandomSounds(unsigned int arg1) {
        Array<VarValue>* this_00;
        uint8_t* this_02;
        uint32_t uVar3;
        unsigned int uVar4;
        uint32_t* puVar5;
        long lVar6;
        int* piVar7;
        int* piVar8;
        unsigned long arg1_00;

        uint8_t* this_01 = &field_272;
        int iVar2 = this_01->size();
        if (iVar2 != 0) {
            this_02 = &field_304;
            arg1_00 = 0;
            do {
                lVar6 = this_01->at(arg1_00);
                this_00 = (Array<VarValue>*)(lVar6 + 24);
                if (this_00->empty() == '\0') {
                    piVar7 = (int*)(*this_02)[arg1_00];
                    *piVar7 = *piVar7 - arg1;
                    piVar7 = (int*)(*this_02)[arg1_00];
                    if (*piVar7 < 1) {
                        piVar7 = (int*)this_00->data();
                        piVar8 = (int*)this_00->end();
                        for (; piVar7 != piVar8; piVar7 = piVar7 + 1) {
                            field_8.HasSoundInstance(*piVar7);
                        }
                        iVar2 = this_00->end();
                        iVar2 = math::Rand(iVar2 - 1);
                        piVar7 = (int*)(*this_00)[(long)iVar2];
                        uVar3 = AddRandomSound(*piVar7, (int)*(short*)(lVar6 + 4), (int)*(char*)(lVar6 + 56),
                                               (int)*(short*)(lVar6 + 8), (int)*(short*)(lVar6 + 6),
                                               *(unsigned int*)(lVar6 + 12), *(unsigned int*)(lVar6 + 16),
                                               *(unsigned int*)(lVar6 + 48), *(unsigned int*)(lVar6 + 52),
                                               *((lVar6 + 60)), *(int*)(lVar6 + 72));
                        puVar5 = (uint32_t*)(*this_02)[arg1_00];
                        *puVar5 = uVar3;
                    }
                }
                arg1_00 = arg1_00 + 1;
                uVar4 = this_01->size();
            } while (arg1_00 < uVar4);
        }
    }

    // 0x1004475c0
    void CombinedLocation::UpdateHighlighting(unsigned int arg1) {
        uint8_t* this_00;
        shared_ptr<graphics::Model>* psVar1;
        EntityHighlightVisualConfig* this_01;
        char cVar3;
        bool arg1_00;
        shared_ptr<World>* this_02;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_03;
        SceneManager* this_04;
        EntityHighlightGlobalState* this_05;
        BuildCombinedLocationResult_GroupSection* buildCombinedLocationResult_GroupSection;
        BuildCombinedLocationResult_GroupSection* pBVar5;
        long* plVar6;
        shared_ptr<LocType>* this_06;
        MapSquarePointLights* this_08;
        EntityHighlightState* this_09;
        Model* pMVar7;
        uint8_t* puVar8;
        BuildCombinedLocationResult_GroupSection* pBVar9;
        float fVar10;
        float fVar11;
        unsigned long uVar12;
        unsigned int extraout_XMM0_Dc;
        uint32_t extraout_XMM0_Dc_00;
        unsigned int extraout_XMM0_Dd;
        uint32_t extraout_XMM0_Dd_00;
        unsigned int uVar13;
        uint64_t local_d8;
        float fStack_d0;
        float fStack_cc;
        uint64_t local_c8;
        float fStack_c0;
        float fStack_bc;
        uint64_t local_b8;
        unsigned int uStack_b0;
        unsigned int uStack_ac;
        uint64_t local_a8;
        uint64_t uStack_a0;
        shared_ptr<graphics::Model>* local_90;
        ColourHSL local_88;
        float local_78;
        unsigned int uStack_74;
        unsigned int uStack_70;
        unsigned int uStack_6c;
        EntityHighlightVisualConfig* local_60;
        BuildCombinedLocationResult_GroupSection* local_50;
        BuildCombinedLocationResult_GroupSection* local_48;
        float local_38;
        float local_34;

        auto psVar4 = GetWorld();
        bool cVar2 = shared_ptr::operator_cast_to_bool(psVar4);
        if (cVar2) {
            puVar8 = m_model;
            cVar2 = puVar8->operator_cast_to_bool();
            if (cVar2) {
                this_02 = (shared_ptr<World>*)GetWorld();
                this_03 =
                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)(*this_02)
                        .operator->();
                this_04 = (SceneManager*)this_03->size();
                this_05 = (EntityHighlightGlobalState*)this_04->GetEntityHighlightGlobalState();
                cVar2 = this_05->IsEnabled();
                if (!cVar2) {
                    pMVar7 = (Model*)(*puVar8).operator->();
                    pMVar7->ClearHighlight();
                    pMVar7 = (Model*)(*puVar8).operator->();
                    pMVar7->ClearHighlightedSection();
                    field_648 = 0;
                } else {
                    local_60 = (EntityHighlightVisualConfig*)5->GetDefault((EntityHighlightType)arg1);
                    if ((field_648 != '\0') || (local_60->field_0 == 2)) {
                        local_90 = (shared_ptr<graphics::Model>*)puVar8;
                        buildCombinedLocationResult_GroupSection =
                            (BuildCombinedLocationResult_GroupSection*)field_232.HeapBeginPtr();
                        pBVar5 = (BuildCombinedLocationResult_GroupSection*)field_232.end();
                        if (buildCombinedLocationResult_GroupSection == pBVar5) {
                            pBVar9 = nullptr;
                            local_a8 = 0;
                            uStack_a0 = 0;
                            local_34 = 0.0;
                            uVar12 = 0;
                            uStack_b0 = 0;
                            uStack_ac = 0;
                        } else {
                            puVar8 = &field_504;
                            local_38 = 100000.0;
                            uVar13 = 0;
                            pBVar9 = nullptr;
                            local_34 = 0.0;
                            local_a8 = 0;
                            uStack_a0 = 0;
                            local_48 = pBVar5;
                            do {
                                this_00 = &buildCombinedLocationResult_GroupSection->field_160;
                                local_78 = (float)uVar13;
                                cVar2 = this_00->operator_cast_to_bool();
                                if (!cVar2) {
                                    puVar8->RemoveSectionRenderCustomisationMask(
                                        *buildCombinedLocationResult_GroupSection, '\x03');
                                    uVar12 = (unsigned long)(unsigned int)local_78;
                                    uStack_b0 = 0;
                                    uStack_ac = 0;
                                } else {
                                    local_50 = pBVar9;
                                    if (EntityHighlightGlobalState::m_allowExamineOnlyHighlights == '\0') {
                                        plVar6 = (long*)(*this_00).operator->();
                                        psVar4 = (shared_ptr*)(**(void (**)(...))(*plVar6 + 328))(plVar6);
                                        cVar2 = shared_ptr::operator_cast_to_bool(psVar4);
                                        cVar3 = '\x01';
                                        if (cVar2) {
                                            plVar6 = (long*)(*this_00).operator->();
                                            this_06 = (shared_ptr<LocType>*)(**(void (**)(...))(*plVar6 + 328))(plVar6);
                                            cVar3 = ((LocType*)(*this_06).operator->())->IsExamineOnly();
                                        }
                                    } else {
                                        cVar3 = '\0';
                                    }
                                    this_08 = (MapSquarePointLights*)(*this_00).operator->();
                                    this_09 = (EntityHighlightState*)this_08->GetLightSourcesDynamic();
                                    if (local_60->field_0 == 2) {
                                        new (this_09) oldscape::ServerConnectionWorkItem(arg1);
                                    }
                                    fVar10 = (float)FrameTime::GetFrameDelta();
                                    this_09->Update(*this_05, fVar10, arg1);
                                    fVar10 = 0.0;
                                    if (!cVar3) {
                                        fVar10 = 1.0;
                                    }
                                    uVar12 = local_60->EvaluateAlpha(*this_09, *this_05, fVar10);
                                    if ((float)uVar12 <= 0.0) {
                                        puVar8->RemoveSectionRenderCustomisationMask(
                                            *buildCombinedLocationResult_GroupSection, '\x03');
                                    } else {
                                        uStack_b0 = extraout_XMM0_Dc;
                                        uStack_ac = extraout_XMM0_Dd;
                                        local_b8 = uVar12;
                                        cVar2 = this_09->WasInteractedWithRecently();
                                        if (!cVar2) {
                                            local_a8 = eastl::max_alt((float)local_a8, (float)local_b8);
                                            uStack_a0 =
                                                (((uint64_t)extraout_XMM0_Dd_00 << 32) | (uint32_t)extraout_XMM0_Dc_00);
                                            puVar8->RemoveSectionRenderCustomisationMask(
                                                *buildCombinedLocationResult_GroupSection, '\x02');
                                        } else {
                                            fVar10 = (float)this_09->GetInterpolationRuntime();
                                            if (fVar10 < local_38) {
                                                if (local_50 != nullptr) {
                                                    puVar8->RemoveSectionRenderCustomisationMask(*local_50, '\x02');
                                                }
                                                local_34 = (float)this_09->GetInterpolationFactor();
                                                local_38 = (float)this_09->GetInterpolationRuntime();
                                                puVar8->AppendSectionRenderCustomisationMask(
                                                    *buildCombinedLocationResult_GroupSection, '\x02');
                                                pBVar9 = buildCombinedLocationResult_GroupSection;
                                                pBVar5 = local_48;
                                                uVar12 = local_b8;
                                                goto LAB_1004476e8;
                                            }
                                        }
                                        puVar8->AppendSectionRenderCustomisationMask(
                                            *buildCombinedLocationResult_GroupSection, '\x01');
                                    }
                                    uVar12 = (unsigned long)(unsigned int)local_78;
                                    uStack_b0 = 0;
                                    uStack_ac = 0;
                                    pBVar9 = local_50;
                                    pBVar5 = local_48;
                                }
                            LAB_1004476e8:
                                uVar13 = (unsigned int)uVar12;
                                buildCombinedLocationResult_GroupSection = buildCombinedLocationResult_GroupSection + 1;
                            } while (buildCombinedLocationResult_GroupSection != pBVar5);
                        }
                        this_01 = local_60;
                        psVar1 = local_90;
                        fVar10 = 0.0;
                        uStack_74 = local_a8._4_4_ & (unsigned int)(uVar12 >> 32);
                        uStack_70 = (unsigned int)uStack_a0 & uStack_b0;
                        uStack_6c = uStack_a0._4_4_ & uStack_ac;
                        fVar11 = (float)(~-(unsigned int)((float)local_a8 == 0.0) & (unsigned int)(float)local_a8 |
                                         -(unsigned int)((float)local_a8 == 0.0) & (unsigned int)uVar12);
                        if (fVar11 <= 0.0) {
                            pMVar7 = (Model*)(*local_90).operator->();
                            pMVar7->ClearHighlight();
                            pMVar7 = (Model*)(*psVar1).operator->();
                            pMVar7->ClearHighlightedSection();
                            field_648 = 0;
                        } else {
                            local_78 = fVar11;
                            local_b8 = uVar12;
                            local_d8 = local_60->GetDefaultColour();
                            psVar1 = local_90;
                            fStack_cc = local_78 * 0.0;
                            fStack_d0 = fVar10;
                            pMVar7 = (Model*)(*local_90).operator->();
                            pMVar7->SetHighlight(this_01->field_4, local_d8);
                            if (pBVar9 == nullptr) {
                                pMVar7 = (Model*)(*psVar1).operator->();
                                pMVar7->ClearHighlightedSection();
                            } else {
                                local_c8 = local_d8.GetXYZ();
                                fStack_c0 = fVar10;
                                local_88._0_8_ = math::RGBToHSL(local_c8);
                                local_88.field_8 = fVar10;
                                local_88.field_8 = math::Lerp<float, float>(
                                    local_88.field_8,
                                    *((float*)&EntityHighlightVisualConfig::m_interactionLuminosityTarget), local_34);
                                arg1_00 = (bool)this_01->IsSilhouette();
                                fVar11 = (float)EntityHighlightVisualConfig::GetDefaultAlpha(arg1_00);
                                local_c8 = math::HSLToRGB(local_88, fVar11 * (float)local_b8);
                                fStack_c0 = fVar10;
                                fStack_bc = 0.0;
                                local_d8 = local_c8;
                                local_34 = local_34 * EntityHighlightVisualConfig::m_scaleIncreaseOnInteraction + 1.0;
                                pMVar7 = (Model*)(*psVar1).operator->();
                                pMVar7->SetHighlightedSection(local_34 * this_01->field_4, local_d8);
                            }
                            field_648 = 1;
                        }
                    }
                }
            }
        }
    }

    // 0x100447b30
    void CombinedLocation::GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                                  const math::Matrix44T<float>& matrix44,
                                                  const graphics::SceneViewData& sceneViewData,
                                                  const graphics::EffectManager& effectManager) {
        CombinedLocation* pCVar2;
        bool arg2;
        uint8_t arg3;
        uint8_t arg4;
        bool arg5;
        uint8_t bVar4;
        SectionsToRender* pSVar5;
        Model* pMVar6;
        shared_ptr<graphics::ParticleSystem>* this_00;
        shared_ptr<graphics::ParticleSystem>* psVar7;
        long* plVar8;
        shared_ptr<graphics::ModularParticleSystem>* psVar9;
        shared_ptr<graphics::ModularParticleSystem>* psVar10;
        ModularParticleSystem* pMVar11;
        long* plVar12;
        Matrix44T<float>* matrix44_00;
        long lVar13;
        VFXAttachmentInfo* this_03;
        ObjType* this_04;
        Array<graphics::VFXAttachmentInfo::RawData>* this_05;
        unsigned long uVar14;
        uint8_t* puVar15;
        unsigned long arg1;
        vector_map<int, graphics::FaceGroupRenderMasks>* arg5_00;
        LocType* this_06;
        ReturnValue local_a8;
        long* local_68;
        long* local_60;
        SectionsToRender* local_58;
        CombinedLocation* local_38;

        LocType* local_40 = (LocType*)matrix44;
        bool cVar3 = IsValidValue();
        if ((cVar3) && (cVar3 = FilterRenderPasses(sceneViewData), cVar3)) {
            local_38 = this;
            arg2 = (bool)sceneViewData.HasShadowPass();
            cVar3 = sceneViewData.HasRenderPass(2);
            arg4 = true;
            arg3 = true;
            if (!cVar3) {
                arg3 = sceneViewData.HasRenderPass(7);
            }
            cVar3 = sceneViewData.HasRenderPass(4);
            if (!cVar3) {
                arg4 = sceneViewData.HasRenderPass(8);
            }
            arg5 = (bool)sceneViewData.HasRenderPass(5);
            pCVar2 = local_38;
            pSVar5 = (SectionsToRender*)CalculateSectionsToRender(local_38, sceneViewData, arg2, (bool)arg3, (bool)arg4,
                                                                  arg5);
            puVar15 = pCVar2->m_model;
            cVar3 = puVar15->operator_cast_to_bool();
            if ((cVar3) && (m_ShowCombinedLocations != '\0')) {
                pMVar6 = (Model*)(*puVar15).operator->();
                pMVar6->SetWorldTransform(*local_40);
                pMVar6 = (Model*)(*puVar15).operator->();
                arg5_00 = (vector_map<int, graphics::FaceGroupRenderMasks>*)&pSVar5->field_8;
                if (pSVar5 == nullptr) {
                    arg5_00 = nullptr;
                }
                pMVar6->GatherDrawableElements(drawableQueue, rt7Core, sceneViewData, effectManager, arg5_00);
            }
            puVar15 = &local_38->field_344;
            local_58 = pSVar5;
            this_00 = (shared_ptr<graphics::ParticleSystem>*)puVar15->HeapBeginPtr();
            psVar7 = (shared_ptr<graphics::ParticleSystem>*)puVar15->end();
            for (; this_00 != psVar7; this_00 = this_00 + 16) {
                plVar8 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar8 + 16))(plVar8, drawableQueue, rt7Core, sceneViewData, effectManager);
            }
            puVar15 = &local_38->field_400;
            psVar9 = (shared_ptr<graphics::ModularParticleSystem>*)puVar15->HeapBeginPtr();
            psVar10 = (shared_ptr<graphics::ModularParticleSystem>*)puVar15->end();
            for (; psVar9 != psVar10; psVar9 = psVar9 + 16) {
                pMVar11 = (ModularParticleSystem*)(*psVar9).operator->();
                plVar8 = pMVar11->GetDrawable();
                (**(void (**)(...))(*plVar8 + 16))(plVar8, drawableQueue, rt7Core, sceneViewData, effectManager);
            }
            puVar15 = &local_38->field_432;
            plVar8 = (long*)puVar15->HeapBeginPtr();
            local_60 = (long*)puVar15->end();
            pSVar5 = local_58;
            if (plVar8 != local_60) {
                do {
                    if ((pSVar5 == nullptr) || (cVar3 = pSVar5->IsHidden(*(*plVar8), 255), !cVar3)) {
                        lVar13 = *plVar8;
                        plVar12 = (long*)(*((lVar13 + 160))).operator->();
                        local_38 = (CombinedLocation*)(**(void (**)(...))(*plVar12 + 328))(plVar12);
                        local_40 = (LocType*)(*local_38).operator->();
                        matrix44_00 =
                            (((Entity*)(*((lVar13 + 160))).operator->())->GetNode())->GetWorldTransformationMatrix();
                        bVar4 = ((*plVar8 + 88))->GetRot();
                        local_a8 = local_40->GetLocationWorldMatrix(*matrix44_00, (unsigned int)bVar4);
                        this_06 = (LocType*)(plVar8 + 1);
                        local_68 = plVar8;
                        lVar13 = this_06->size();
                        if (lVar13 != 0) {
                            arg1 = 0;
                            local_40 = this_06;
                            do {
                                psVar9 = (shared_ptr<graphics::ModularParticleSystem>*)(*this_06)[arg1];
                                this_03 = (VFXAttachmentInfo*)(*((psVar9 + 16))).operator->();
                                this_04 = (ObjType*)(*local_38).operator->();
                                this_05 = (Array<graphics::VFXAttachmentInfo::RawData>*)this_04->GetOffset2D();
                                this_03->Update((RawData*)(*this_05)[arg1], &local_a8);
                                this_06 = local_40;
                                pMVar11 = (ModularParticleSystem*)(*psVar9).operator->();
                                plVar8 = pMVar11->GetDrawable();
                                (**(void (**)(...))(*plVar8 + 16))(plVar8, drawableQueue, rt7Core, sceneViewData,
                                                                   effectManager);
                                arg1 = arg1 + 1;
                                uVar14 = this_06->size();
                            } while (arg1 < uVar14);
                        }
                        plVar8 = local_68;
                        pSVar5 = local_58;
                    }
                    plVar8 = plVar8 + 14;
                } while (plVar8 != local_60);
            }
        }
    }

    // 0x100447ec0
    uint64_t CombinedLocation::FilterRenderPasses(const graphics::SceneViewData& sceneViewData) const {
        uint8_t bVar2;

        bool cVar1 = sceneViewData.HasShadowPass();
        if (((!cVar1) || ((field_224 != false && (bVar2 = GetNumTilesPerRow(), bVar2 < 3)))) &&
            ((cVar1 = sceneViewData.HasRenderPass(2), !cVar1 || (field_225 == false)))) {
            return 1;
        }
        return 0;
    }

    // 0x100447f20
    SectionsToRender* CombinedLocation::CalculateSectionsToRender(const graphics::SceneViewData& sceneViewData,
                                                                  bool arg2, bool arg3, bool arg4, bool arg5) {
        bool cVar1;
        World* pWVar3;
        bool bVar4;
        SectionsToRender* sectionsToRender;

        if (((arg2 != arg3) != arg4) == arg5) {
            LogAssert("shadowMapPass ^ waterReflectionPass ^ forwardLightingPass ^ minimapPass",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/CombinedLocation.cpp",
                      1097, nullptr);
        }
        int local_34 = 4;
        if (arg5) {
            cVar1 = sceneViewData.HasRenderPass(5);
            local_34 = 0;
            if (cVar1) {
                local_34 = ((Minimap*)sceneViewData.GetRenderPass(5))->GetLevel();
            }
        }
        if ((arg2) || (arg3)) {
            sectionsToRender = (SectionsToRender*)&field_552;
            bVar4 = true;
        } else {
            if (arg5) {
                sectionsToRender = (SectionsToRender*)&field_600;
            } else {
                if (!arg4) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/entities/CombinedLocation.cpp",
                                    1131, "No pass defined here");
                }
                sectionsToRender = (SectionsToRender*)&field_504;
            }
            bVar4 = arg5;
        }
        auto this_01 = GetWorld();
        if (bVar4 == false) {
            pWVar3 = (World*)(*this_01).operator->();
            local_34 = pWVar3->GetMaxRenderLevel();
        }
        if (arg4) {
            pWVar3 = (World*)(*this_01).operator->();
            cVar1 = pWVar3->IsRemoveRoofSelective();
            if (cVar1) {
                pWVar3 = (World*)**this_01;
                SelectiveRemoveRoofHideUnhide(*pWVar3, sectionsToRender);
                goto LAB_10044804e;
            }
        }
        if (!arg2) {
            NonSelectiveRemoveRoofHideUnhide(local_34, arg4, sectionsToRender);
        }
    LAB_10044804e:
        pWVar3 = (World*)(*this_01).operator->();
        uint8_t bVar2 = pWVar3->IsGroundDecorHidden();
        UpdateGroundDecorVisibility(*sectionsToRender, (bool)(bVar2 | arg5));
        DebugShowPrimitiveCombinedLocationSections(arg4);
        cVar1 = sectionsToRender->CheckIfActiveSectionsChangedFromDefault();
        if (((!cVar1) && (*(char*)&sectionsToRender->field_0 == '\0')) &&
            (*(char*)((long)&sectionsToRender->field_0 + 1) == '\0')) {
            sectionsToRender = nullptr;
        }
        return sectionsToRender;
    }

    // 0x100448120
    void CombinedLocation::SelectiveRemoveRoofHideUnhide(World& world,
                                                         CombinedLocation::SectionsToRender* sectionsToRender) {
        unsigned int arg3;
        int iVar1;
        uint8_t bVar3;
        uint8_t bVar4;
        BuildCombinedLocationResult_GroupSection* buildCombinedLocationResult_GroupSection;
        BuildCombinedLocationResult_GroupSection* pBVar5;
        CombinedLocationSection* pCVar6;
        bool bVar7;
        int iVar8;
        unsigned int arg2;
        unsigned int arg3_00;

        auto this_00 = world.GetRemoveRoof();
        bool cVar2 = this_00->AnyRoofRemoved();
        if ((cVar2) || (*(char*)&sectionsToRender->field_0 != '\0')) {
            *(uint8_t*)&sectionsToRender->field_0 = 0;
            buildCombinedLocationResult_GroupSection =
                (BuildCombinedLocationResult_GroupSection*)field_232.HeapBeginPtr();
            pBVar5 = (BuildCombinedLocationResult_GroupSection*)field_232.end();
            if (buildCombinedLocationResult_GroupSection == pBVar5) {
                bVar7 = false;
            } else {
                bVar7 = false;
                do {
                    buildCombinedLocationResult_GroupSection->field_176 = 0;
                    if (*(int*)&buildCombinedLocationResult_GroupSection->field_4 == -1) {
                        bVar3 = 0;
                    } else {
                        arg2 = *(unsigned int*)((long)&buildCombinedLocationResult_GroupSection->field_16 + 4);
                        arg3 = *(unsigned int*)&buildCombinedLocationResult_GroupSection->field_24;
                        bVar3 = this_00->IsRoofRemoved(*(int*)&buildCombinedLocationResult_GroupSection->field_4, arg2,
                                                       arg3);
                        if (bVar3 == 0) {
                            bVar4 = buildCombinedLocationResult_GroupSection->field_88->GetShape();
                            cVar2 = LocShapes::IsCentrePieceShape((unsigned int)bVar4);
                            if ((cVar2) &&
                                (((iVar8 = *(int*)&buildCombinedLocationResult_GroupSection->field_40,
                                   1 < iVar8 ||
                                       (1 < *(int*)((long)&buildCombinedLocationResult_GroupSection->field_40 + 4))) &&
                                  (0 < iVar8)))) {
                                iVar1 = *(int*)((long)&buildCombinedLocationResult_GroupSection->field_40 + 4);
                                iVar8 = iVar8 + arg2;
                                do {
                                    arg3_00 = arg3;
                                    if (0 < iVar1) {
                                        do {
                                            cVar2 = this_00->IsRoofRemoved(
                                                *(int*)&buildCombinedLocationResult_GroupSection->field_4, arg2,
                                                arg3_00);
                                            if (cVar2) {
                                                buildCombinedLocationResult_GroupSection->field_176 = 2;
                                                bVar3 = 1;
                                                break;
                                            }
                                            arg3_00 = arg3_00 + 1;
                                        } while ((int)arg3_00 < (int)(iVar1 + arg3));
                                    }
                                    arg2 = arg2 + 1;
                                } while ((int)arg2 < iVar8);
                            }
                        } else {
                            buildCombinedLocationResult_GroupSection->field_176 = 1;
                        }
                    }
                    if ((bVar3 & 1) == 0) {
                        cVar2 = sectionsToRender->UnhideSection(*buildCombinedLocationResult_GroupSection, '\x02');
                        if (cVar2) {
                            cVar2 = (&buildCombinedLocationResult_GroupSection->field_160)->operator_cast_to_bool();
                            bVar7 = true;
                            if (cVar2) {
                                pCVar6 = (CombinedLocationSection*)
                                             buildCombinedLocationResult_GroupSection->field_160.operator->();
                                pCVar6->DeactivateRoofRemove();
                            }
                        }
                    } else {
                        *(uint8_t*)&sectionsToRender->field_0 = 1;
                        cVar2 = sectionsToRender->HideSection(*buildCombinedLocationResult_GroupSection, '\x02');
                        if (cVar2) {
                            cVar2 = (&buildCombinedLocationResult_GroupSection->field_160)->operator_cast_to_bool();
                            bVar7 = true;
                            if (cVar2) {
                                pCVar6 = (CombinedLocationSection*)
                                             buildCombinedLocationResult_GroupSection->field_160.operator->();
                                pCVar6->ActivateRoofRemove();
                            }
                        }
                    }
                    buildCombinedLocationResult_GroupSection = buildCombinedLocationResult_GroupSection + 1;
                } while (buildCombinedLocationResult_GroupSection != pBVar5);
            }
            if (bVar7) {
                sectionsToRender->field_2 = 1;
            }
        }
    }

    // 0x100448380
    void CombinedLocation::NonSelectiveRemoveRoofHideUnhide(int arg1, bool arg2,
                                                            CombinedLocation::SectionsToRender* sectionsToRender) {
        uint8_t bVar1;
        uint8_t bVar2;
        bool cVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        shared_ptr<World>* this_00;
        LinkMap* this_02;
        BuildCombinedLocationResult_GroupSection* buildCombinedLocationResult_GroupSection;
        BuildCombinedLocationResult_GroupSection* pBVar6;
        CombinedLocationSection* pCVar7;
        bool bVar8;
        int arg2_00;
        int arg3;

        if ((arg1 != 4) || (*(char*)&sectionsToRender->field_0 != '\0')) {
            this_00 = (shared_ptr<World>*)GetWorld();
            this_02 = ((World*)(*this_00).operator->())->GetLinkMap();
            buildCombinedLocationResult_GroupSection =
                (BuildCombinedLocationResult_GroupSection*)field_232.HeapBeginPtr();
            pBVar6 = (BuildCombinedLocationResult_GroupSection*)field_232.end();
            if (buildCombinedLocationResult_GroupSection == pBVar6) {
                bVar8 = false;
            } else {
                bVar8 = false;
                do {
                    bVar1 = LinkConstants::IsAffectedByMaxRenderLevel(
                        *(int*)&buildCombinedLocationResult_GroupSection->field_4,
                        *(int*)((long)&buildCombinedLocationResult_GroupSection->field_8 + 4), arg1);
                    uVar4 = 0;
                    if (bVar1 != 0) {
                        uVar4 = this_02->GetTileLinkZero(
                            *(int*)&buildCombinedLocationResult_GroupSection->field_4,
                            *(int*)((long)&buildCombinedLocationResult_GroupSection->field_16 + 4),
                            *(int*)&buildCombinedLocationResult_GroupSection->field_24);
                        bVar2 = buildCombinedLocationResult_GroupSection->field_88->GetShape();
                        cVar3 = LocShapes::IsCentrePieceShape((unsigned int)bVar2);
                        if ((cVar3) && (0 < *(int*)&buildCombinedLocationResult_GroupSection->field_40)) {
                            arg2_00 = *(int*)((long)&buildCombinedLocationResult_GroupSection->field_16 + 4);
                            do {
                                if (0 < *(int*)((long)&buildCombinedLocationResult_GroupSection->field_40 + 4)) {
                                    arg3 = *(int*)&buildCombinedLocationResult_GroupSection->field_24;
                                    do {
                                        uVar5 = this_02->GetTileLinkZero(
                                            *(int*)&buildCombinedLocationResult_GroupSection->field_4, arg2_00, arg3);
                                        uVar4 = uVar4 & uVar5;
                                        arg3 = arg3 + 1;
                                    } while (arg3 <
                                             *(int*)((long)&buildCombinedLocationResult_GroupSection->field_40 + 4) +
                                                 *(int*)&buildCombinedLocationResult_GroupSection->field_24);
                                }
                                arg2_00 = arg2_00 + 1;
                            } while (arg2_00 <
                                     *(int*)&buildCombinedLocationResult_GroupSection->field_40 +
                                         *(int*)((long)&buildCombinedLocationResult_GroupSection->field_16 + 4));
                        }
                    }
                    if (((uVar4 & 8) == 0 & bVar1) == 1) {
                        buildCombinedLocationResult_GroupSection->field_176 = 1;
                        cVar3 = sectionsToRender->HideSection(*buildCombinedLocationResult_GroupSection, '\x02');
                        if (cVar3) {
                            *(uint8_t*)&sectionsToRender->field_0 = 1;
                            bVar8 = true;
                            if (arg2) {
                                cVar3 = (&buildCombinedLocationResult_GroupSection->field_160)->operator_cast_to_bool();
                                if (cVar3) {
                                    pCVar7 = (CombinedLocationSection*)
                                                 buildCombinedLocationResult_GroupSection->field_160.operator->();
                                    pCVar7->ActivateRoofRemove();
                                }
                            }
                        }
                    } else {
                        buildCombinedLocationResult_GroupSection->field_176 = 0;
                        cVar3 = sectionsToRender->UnhideSection(*buildCombinedLocationResult_GroupSection, '\x02');
                        if ((cVar3) && (bVar8 = true, arg2)) {
                            cVar3 = (&buildCombinedLocationResult_GroupSection->field_160)->operator_cast_to_bool();
                            bVar8 = true;
                            if (cVar3) {
                                pCVar7 = (CombinedLocationSection*)
                                             buildCombinedLocationResult_GroupSection->field_160.operator->();
                                pCVar7->DeactivateRoofRemove();
                            }
                        }
                    }
                    buildCombinedLocationResult_GroupSection = buildCombinedLocationResult_GroupSection + 1;
                } while (buildCombinedLocationResult_GroupSection != pBVar6);
            }
            if (arg1 == 4) {
                *(uint8_t*)&sectionsToRender->field_0 = 0;
            }
            if (bVar8) {
                sectionsToRender->field_2 = 1;
            }
        }
    }

    // 0x1004485e0
    void CombinedLocation::UpdateGroundDecorVisibility(CombinedLocation::SectionsToRender& sectionsToRender,
                                                       bool arg2) {
        BuildCombinedLocationResult_GroupSection* buildCombinedLocationResult_GroupSection;
        BuildCombinedLocationResult_GroupSection* pBVar1;

        if (*(char*)((long)&sectionsToRender.field_0 + 1) != arg2) {
            buildCombinedLocationResult_GroupSection =
                (BuildCombinedLocationResult_GroupSection*)field_232.HeapBeginPtr();
            pBVar1 = (BuildCombinedLocationResult_GroupSection*)field_232.end();
            for (; buildCombinedLocationResult_GroupSection != pBVar1;
                 buildCombinedLocationResult_GroupSection = buildCombinedLocationResult_GroupSection + 1) {
                if (buildCombinedLocationResult_GroupSection->field_188 != '\0') {
                    if (arg2) {
                        HideSection(sectionsToRender, *buildCombinedLocationResult_GroupSection, '\x04');
                    } else {
                        UnhideSection(sectionsToRender, *buildCombinedLocationResult_GroupSection, '\x04');
                    }
                }
            }
            *(bool*)((long)&sectionsToRender.field_0 + 1) = arg2;
        }
    }

    // 0x100448680
    void CombinedLocation::DebugShowPrimitiveCombinedLocationSections(bool arg1) {
        LocData* this_00;
        uint8_t* puVar1;
        short sVar2;
        Layout* this_01;
        CombinedLocation* this_02;
        char cVar3;
        uint8_t bVar4;
        int iVar5;
        unsigned int uVar6;
        uint32_t uVar7;
        long lVar8;
        long lVar9;
        MapSquarePointLights* this_03;
        EntityHighlightState* this_04;
        Entity* pEVar10;
        AABB* pAVar11;
        long* plVar12;
        int* piVar13;
        float* pfVar14;
        uint32_t* puVar15;
        shared_ptr* psVar16;
        char* pcVar17;
        shared_ptr<World>* psVar18;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar19;
        SceneManager* this_07;
        RT7Core* this_08;
        Minimap* this_09;
        uint64_t uVar20;
        shared_ptr* this_10;
        BillboardBatchInstance* this_11;
        Vector3T<float>* pVVar21;
        LocType* this_12;
        SceneViewData* this_13;
        World* pWVar22;
        Matrix44T<float>* pMVar23;
        Matrix44T<float>* pMVar24;
        bool bVar25;
        bool bVar26;
        bool bVar27;
        float fVar28;
        uint8_t local_330[40];
        int* local_308;
        Vector3T<int> local_300;
        Vector2T<int>* local_2f0;
        Layout* local_2e8;
        Matrix44T<float>* local_2d8;
        SideBarData local_2d0;
        PositionPoint local_268;

        CombinedLocation* local_2e0 = this;
        if (((m_debugPrimitiveInactiveSection != 0 || m_debugPrimitiveActiveSection != 0) ||
             ((m_debugPrimitiveSectionMouseoverEnabled != '\0' && (cVar3 = PickTestDebugCursor(), cVar3)))) &&
            (arg1)) {
            if (m_debugPrimitiveAABBOnHighlight != '\0') {
                puVar1 = &local_2e0->field_232;
                lVar8 = puVar1->HeapBeginPtr();
                lVar9 = puVar1->end();
                if (lVar8 != lVar9) {
                    do {
                        psVar16 = (shared_ptr*)(lVar8 + 160);
                        cVar3 = shared_ptr::operator_cast_to_bool(psVar16);
                        if (cVar3) {
                            this_03 = (MapSquarePointLights*)(*psVar16).operator->();
                            this_04 = (EntityHighlightState*)this_03->GetLightSourcesDynamic();
                            fVar28 = (float)this_04->GetAlpha();
                            if (0.0 < fVar28) {
                                local_268 = math::AABB();
                                if (*(char*)(lVar8 + 80) == '\0') {
                                    local_268 = (*((lVar8 + 48)));
                                    pMVar23 = local_2e0->GetNode()->GetWorldTransformationMatrix();
                                    local_268.Transform(*pMVar23);
                                } else {
                                    pEVar10 = (Entity*)(*psVar16).operator->();
                                    pAVar11 = (AABB*)pEVar10->GetWorldAABB();
                                    local_268 = *pAVar11;
                                }
                                plVar12 = DebugPrimitiveCollectorBasic::GetCollector("");
                                if (plVar12 != nullptr) {
                                    local_2d0 = oldscape::sidebars::SideBarData(301989887, 2);
                                    (**(void (**)(...))(*plVar12 + 72))(plVar12, &local_268, &local_2d0);
                                }
                            }
                        }
                        lVar8 = lVar8 + 192;
                    } while (lVar8 != lVar9);
                }
            }
            puVar1 = &local_2e0->field_232;
            piVar13 = (int*)puVar1->HeapBeginPtr();
            local_308 = (int*)puVar1->end();
            if (piVar13 != local_308) {
                do {
                    bVar26 = m_debugPrimitiveInactiveSection == (*(uint8_t*)(piVar13 + 20) ^ 1);
                    bVar27 = m_debugPrimitiveActiveSection == *(uint8_t*)(piVar13 + 20);
                    bVar25 = bVar27 || bVar26;
                    new ((local_330 + 8)) math::AABB();
                    this_02 = local_2e0;
                    if (m_debugPrimitiveSectionMouseoverEnabled == '\0') {
                    LAB_1004488b6:
                        uVar7 = 0;
                        if (bVar25) {
                        LAB_1004488bd:
                            local_2e8 = (Layout*)(((uint64_t)local_2e8._4_4_ << 32) | (uint32_t)uVar7);
                            local_268 = eastl::fixed_string<char, 512>();
                            local_300 = math::Vector3T();
                            local_2d8._0_4_ = ((float)piVar13[11] * 0.5 + (float)piVar13[5]) * 128.0;
                            pfVar14 = (float*)local_300.SSOBeginPtr();
                            *pfVar14 = local_2d8._0_4_;
                            local_2d8._0_4_ = ((float)piVar13[10] * 0.5 + (float)piVar13[6]) * 128.0;
                            pfVar14 = (float*)local_300.second();
                            *pfVar14 = local_2d8._0_4_;
                            this_00 = (LocData*)(piVar13 + 22);
                            cVar3 = this_00->GetShape();
                            sVar2 = *(short*)((long)piVar13 + (unsigned long)(cVar3 == '\x16') * 2 + 16);
                            local_2f0 = (Vector2T<int>*)(piVar13 + 7);
                            pfVar14 = (float*)((piVar13 + 7))->y();
                            local_2d8 = (Matrix44T<float>*)(((uint64_t)local_2d8._4_4_ << 32) |
                                                            (uint32_t)((float)(int)sVar2 + *pfVar14));
                            puVar15 = (uint32_t*)local_300.y();
                            *puVar15 = local_2d8._0_4_;
                            local_268.sprintf("[COMBINEDLOCATION %p] [%d,%d,%d] ", local_2e0,
                                              (unsigned long)(unsigned int)piVar13[1], (unsigned long)(piVar13[5] & 63),
                                              (unsigned long)(piVar13[6] & 63));
                            if (piVar13[2] != piVar13[1]) {
                                local_268.append_sprintf("(lvl %d) ");
                            }
                            local_268.append_sprintf("%d", (unsigned long)(unsigned int)piVar13[21]);
                            if (piVar13[21] != -1) {
                                psVar16 = (shared_ptr*)(*(ConfigProvider**)&local_2e0->field_216)
                                              ->GetConfig<LocType>(piVar13[21], nullptr);
                                cVar3 = shared_ptr::operator_cast_to_bool(psVar16);
                                if (!cVar3) {
                                    local_268.append("?");
                                } else {
                                    ((GeometryBatch*)(*psVar16).operator->())->GetVertexDataBufferPos();
                                    pcVar17 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                    if ((pcVar17 != nullptr) && (*pcVar17 != '\0')) {
                                        local_268.append_sprintf("(%s)", pcVar17);
                                    }
                                }
                            }
                            bVar4 = this_00->GetShape();
                            uVar20 = LocShapes::GetShapeDescription((unsigned int)bVar4);
                            local_268.append_sprintf("\n%s", uVar20);
                            if (sVar2 != 0) {
                                local_268.append_sprintf(" [Height=%d]", (unsigned long)(unsigned int)(int)sVar2);
                            }
                            if (*piVar13 != 0) {
                                local_268.append_sprintf(" [eid:%d]");
                            }
                            if (piVar13[44] != 0) {
                                pcVar17 = "";
                                if (piVar13[44] == 2) {
                                    pcVar17 = " CP";
                                }
                                local_268.append_sprintf(" [-ROOF%s]", pcVar17);
                            }
                            bVar4 = this_00->GetShape();
                            cVar3 = LocShapes::IsCentrePieceShape((unsigned int)bVar4);
                            if (cVar3) {
                                psVar16 = (shared_ptr*)(piVar13 + 36);
                                cVar3 = shared_ptr::operator_cast_to_bool(psVar16);
                                this_10 = psVar16;
                                if (!cVar3) {
                                    this_10 = (shared_ptr*)(*(ConfigProvider**)&local_2e0->field_216)
                                                  ->GetConfig<LocType>(piVar13[21], nullptr);
                                }
                                cVar3 = shared_ptr::operator_cast_to_bool(this_10);
                                if (cVar3) {
                                    *psVar16 = *this_10;
                                    this_11 = (BillboardBatchInstance*)(*this_10).operator->();
                                    pVVar21 = (Vector3T<float>*)this_11->GetApproxMaterialInfoList();
                                    bVar25 = *pVVar21 != *PTR_ONE_100ee66d8;
                                    local_2d8 = (Matrix44T<float>*)4309400246;
                                    if (bVar25) {
                                        local_2d0 = eastl::fixed_string<char, 64>();
                                        pcVar17 = ToText<64, true>((fixed_string<char, _64>*)&local_2d0, pVVar21);
                                        local_268.append_sprintf("%sResize=%s", "\nLocType: ", pcVar17);
                                    }
                                    this_12 = (LocType*)(*this_10).operator->();
                                    pVVar21 = (Vector3T<float>*)this_12->GetOffset();
                                    bVar25 = *pVVar21 != *PTR_ZERO_100ee66e8;
                                    if (bVar25) {
                                        local_2d0 = eastl::fixed_string<char, 64>();
                                        pcVar17 = ToText<64, true>((fixed_string<char, _64>*)&local_2d0, pVVar21);
                                        local_268.append_sprintf("%sOffset=%s", local_2d8, pcVar17);
                                    }
                                    this_13 = (SceneViewData*)(*this_10).operator->();
                                    pVVar21 = (Vector3T<float>*)this_13->GetStippleNearClipParams();
                                    bVar25 = *pVVar21 != *PTR_ZERO_100ee66e8;
                                    if (bVar25) {
                                        local_2d0 = eastl::fixed_string<char, 64>();
                                        pcVar17 = ToText<64, true>((fixed_string<char, _64>*)&local_2d0, pVVar21);
                                        local_268.append_sprintf("%sPost-Offset=%s", local_2d8, pcVar17);
                                    }
                                }
                                cVar3 = this_00->GetRot();
                                if (cVar3) {
                                    local_2d0 = eastl::fixed_string<char, 16>();
                                    bVar4 = this_00->GetRot();
                                    pcVar17 =
                                        ToText<16, true>((fixed_string<char, _16>*)&local_2d0, (unsigned int)bVar4);
                                    local_268.append_sprintf("%sRotation90=%s", "\nMSL: ", pcVar17);
                                }
                                bVar25 = *local_2f0 != *PTR_ZERO_100ee66e8;
                                if (bVar25) {
                                    local_2d0 = eastl::fixed_string<char, 64>();
                                    pcVar17 = ToText<64, true>((fixed_string<char, _64>*)&local_2d0,
                                                               (Vector3T<float>*)local_2f0);
                                    local_268.append_sprintf("%sOffsetFine=%s", "\nMSL: ", pcVar17);
                                }
                                bVar25 = (*((piVar13 + 31))) != *PTR_ONE_100ee66d8;
                                if (bVar25) {
                                    local_2d0 = eastl::fixed_string<char, 16>();
                                    pcVar17 = ToText<16, true>((fixed_string<char, _16>*)&local_2d0,
                                                               (Vector3T<float>*)(piVar13 + 31));
                                    local_268.append_sprintf("%sScale=%s", "\nMSL: ", pcVar17);
                                }
                                local_2d0 = math::QuaternionT<float>();
                                cVar3 = (*((piVar13 + 23))) != local_2d0;
                                if (cVar3) {
                                    local_2d0 = eastl::fixed_string<char, 16>();
                                    pcVar17 = ToText<16, true>((fixed_string<char, _16>*)&local_2d0,
                                                               (QuaternionT<float>*)(piVar13 + 23));
                                    local_268.append_sprintf("%sRotation=%s", "\nMSL: ", pcVar17);
                                }
                            }
                            plVar12 = DebugPrimitiveCollectorBasic::GetCollector("");
                            if (plVar12 != nullptr) {
                                pcVar17 = (char*)local_268.begin();
                                local_2d0 = eastl::string(pcVar17);
                                iVar5 = -65536;
                                if (piVar13[44] == 0) {
                                    iVar5 = -8323073;
                                }
                                new (local_330) oldscape::sidebars::SideBarData(iVar5, 1);
                                (**(void (**)(...))(*plVar12 + 136))(plVar12, &local_300, &local_2d0,
                                                                     (SideBarData*)local_330);
                            }
                            if (((char)local_2e8 != '\0') &&
                                (plVar12 = DebugPrimitiveCollectorBasic::GetCollector(""), plVar12 != nullptr)) {
                                local_2d0 = oldscape::sidebars::SideBarData(-12566273, 2);
                                (**(void (**)(...))(*plVar12 + 72))(plVar12, local_330 + 8, &local_2d0);
                            }
                        }
                    } else {
                        if (piVar13[44] != 0) {
                            bVar25 = false;
                            goto LAB_1004488b6;
                        }
                        psVar18 = (shared_ptr<World>*)local_2e0->GetWorld();
                        phVar19 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                             eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                             eastl::equal_to<long long>, eastl::hash<long long>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, true, true>*)(*psVar18)
                                      .operator->();
                        this_07 = (SceneManager*)phVar19->size();
                        psVar18 = (shared_ptr<World>*)this_02->GetWorld();
                        phVar19 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                             eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                             eastl::equal_to<long long>, eastl::hash<long long>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, true, true>*)(*psVar18)
                                      .operator->();
                        this_08 = (RT7Core*)phVar19->size();
                        local_2e8 = (Layout*)this_08->GetRenderTargetsManager();
                        this_09 = (Minimap*)this_07->GetGameSceneRect();
                        if ((char)piVar13[20] == '\0') {
                            pAVar11 = (AABB*)(piVar13 + 12);
                        } else {
                            pEVar10 = (Entity*)(*((piVar13 + 40))).operator->();
                            pAVar11 = (AABB*)pEVar10->GetWorldAABB();
                        }
                        (*((local_330 + 8))) = *pAVar11;
                        local_268 = math::Sphere2D();
                        pWVar22 = (World*)(*psVar18).operator->();
                        local_2d8 = (Matrix44T<float>*)pWVar22->GetLastCameraViewMatrix();
                        pWVar22 = (World*)(*psVar18).operator->();
                        pMVar23 = pWVar22->GetLastCameraProjectionMatrix();
                        pWVar22 = (World*)(*psVar18).operator->();
                        pMVar24 = pWVar22->GetLastViewProjectionMatrix();
                        iVar5 = this_09->GetPos();
                        uVar6 = this_09->GetLevel();
                        math::Sphere2D::Set(local_268, *local_2d8, *pMVar23, (int)pMVar24, iVar5,
                                            *((AABB*)(unsigned long)uVar6));
                        cVar3 = local_268.Ready();
                        this_01 = local_2e8;
                        if (!cVar3) {
                            uVar7 = 0;
                            if (bVar27 || bVar26)
                                goto LAB_1004488bd;
                        } else {
                            pfVar14 = (float*)local_2e8->SSOBeginPtr();
                            fVar28 = *pfVar14;
                            pfVar14 = (float*)this_01->y();
                            uVar7 = local_268.PointInside((int)fVar28, (int)*pfVar14, 0);
                            if ((char)uVar7 == '\x01' && (!bVar27 && !bVar26)) {
                                if ((m_debugPrimitiveActiveSection & 1) == 0 && m_debugPrimitiveInactiveSection == 0)
                                    goto LAB_1004488bd;
                            } else if ((char)uVar7 != '\0')
                                goto LAB_1004488bd;
                        }
                    }
                    piVar13 = piVar13 + 48;
                } while (piVar13 != local_308);
            }
        }
    }

    // 0x1004493a0
    char CombinedLocation::UpdateAudio() {
        int arg1;
        LocationAudioProperties* this_01;
        LocationAudioProperties* pLVar3;
        uint64_t uVar4;
        SoundInstance* this_02;

        uint8_t*** this_00 = &field_8;
        bool cVar1 = this_00->UpdateAudio();
        if (cVar1) {
            this_01 = (LocationAudioProperties*)field_272.HeapBeginPtr();
            pLVar3 = (LocationAudioProperties*)field_272.end();
            for (; this_01 != pLVar3; this_01 = this_01 + 1) {
                arg1 = *(int*)&this_01->field_0;
                if (-1 < arg1) {
                    this_02 = this_00->GetSoundInstance(arg1);
                    if (this_02 == nullptr) {
                        uVar4 = this_01->GenerateBackgroundSoundRandomRate();
                        (*(void (*)(...))(*this_00)[2])(
                            this_00, arg1, (int)*(short*)((long)&this_01->field_0 + 4), 1,
                            (int)(short)this_01->field_8 << 7, (int)*(short*)((long)&this_01->field_0 + 6) << 7,
                            &this_01->field_60, 18446744073709551615, 15, 1, this_01->field_72, uVar4);
                    } else {
                        if (this_02->IsAudible() == '\0') {
                            this_02->Suspend(0.0);
                        }
                    }
                }
            }
        }
        return cVar1;
    }

    // 0x100449530
    uint64_t CombinedLocation::PickTestSection(const CombinedLocationSection* combinedLocationSection,
                                               graphics::PickingHelper& pickingHelper) const {
        bool arg4;
        int* piVar2;
        int* piVar3;
        GeometryBatchInstance* this_00;
        Matrix44T<float>* matrix44;
        Model* this_01;
        vector<std::unique_ptr<graphics::GeometryBatchInstance,
                               MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>*
            geometryBatchInstances;
        uint64_t uVar5;

        uint8_t* this_02 = m_model;
        if (!(this_02->operator_cast_to_bool())) {
            uVar5 = 0;
        } else {
            piVar2 = (int*)field_232.HeapBeginPtr();
            piVar3 = (int*)field_232.end();
            if (piVar2 == piVar3) {
                uVar5 = 0;
            } else {
                uVar5 = 0;
                do {
                    if ((CombinedLocationSection*)((piVar2 + 40))->end() == combinedLocationSection) {
                        this_00 = (GeometryBatchInstance*)(*this_02).operator->();
                        matrix44 = (Matrix44T<float>*)this_00->GetMaterial();
                        this_01 = (Model*)(*this_02).operator->();
                        geometryBatchInstances =
                            (vector<std::unique_ptr<
                                 graphics::GeometryBatchInstance,
                                 MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>*)
                                this_01->GetBatchList();
                        arg4 = (bool)combinedLocationSection->UsesFastPickingTests();
                        if (pickingHelper.PickTest(*matrix44, *geometryBatchInstances, false, arg4, *piVar2)) {
                            uVar5 = 1;
                        }
                    }
                    piVar2 = piVar2 + 48;
                } while (piVar2 != piVar3);
            }
        }
        return uVar5;
    }

    // 0x100449650
    uint8_t CombinedLocation::GetMajorityShape() const {
        uint8_t bVar1;
        int* piVar5;

        uint64_t local_38 = 0;
        uint64_t uStack_30 = 0;
        uint64_t local_48 = 0;
        uint64_t uStack_40 = 0;
        uint64_t local_58 = 0;
        uint64_t uStack_50 = 0;
        uint64_t local_68 = 0;
        uint64_t uStack_60 = 0;
        uint64_t local_78 = 0;
        uint64_t uStack_70 = 0;
        uint64_t uStack_80 = 0;
        uint32_t local_28 = 0;
        long lVar3 = field_232.HeapBeginPtr();
        long lVar4 = field_232.end();
        if (lVar3 != lVar4) {
            do {
                bVar1 = ((lVar3 + 88))->GetShape();
                piVar5 = &0 [(unsigned long)bVar1];
                *piVar5 = *piVar5 + 1;
                lVar3 = lVar3 + 192;
            } while (lVar3 != lVar4);
        }
        piVar5 = (int*)std::array<int, 25ul>::begin();
        int* piVar6 = (int*)std::array<int, 25ul>::end();
        piVar6 = std::max_element<int*>(piVar5, piVar6);
        return std::distance<int*>(piVar5, piVar6);
    }

} // namespace jag::game
