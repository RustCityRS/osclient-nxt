// libs/game/runetek5/scene/entities/CombinedLocation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "CombinedLocation.h"

namespace jag::game {
    // 0x100f38f31, 1 bytes, __data
    CombinedLocation::m_ShowCombinedLocations = 1;

    // 0x100f38f32, 1 bytes, __data
    CombinedLocation::m_enableFadeIn = 1;

    // 0x1039b4ec4, 1 bytes, __common; zero-initialised
    CombinedLocation::m_debugPrimitiveInactiveSection;

    // 0x1039b4ec5, 1 bytes, __common; zero-initialised
    CombinedLocation::m_debugPrimitiveActiveSection;

    // 0x1039b4ec6, 1 bytes, __common; zero-initialised
    CombinedLocation::m_debugPrimitiveSectionMouseoverEnabled;

    // 0x1039b4ec7, 1 bytes, __common; zero-initialised
    CombinedLocation::m_debugPrimitiveAABBOnHighlight;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    CombinedLocation::IsAnimatable() const;

    // 0x100049090: the linker folded this into oldscape::option::Option<eastl::fixed_string<char, 256, true, eastl::allocator> >::GetDefaultValue() const, which has identical code
    shared_ptr CombinedLocation::GetModel() const;

    // 0x1001e0d50: the linker folded this into hal::audio::AudioAPI::~AudioAPI(), which has identical code
    CombinedLocation::VFXData::~VFXData();

    // 0x1001e0d60: the linker folded this into hal::audio::AudioAPI::~AudioAPI(), which has identical code
    CombinedLocation::VFXData::~VFXData();

    // 0x1004453f0, 48 bytes, placed by class name and debug map
    // CombinedLocation::SectionsToRender::HideSection(BuildCombinedLocationResult_GroupSection const&, unsigned char)
    bool CombinedLocation::SectionsToRender::HideSection(BuildCombinedLocationResult_GroupSection* param_1,
                                                         uchar param_2) {
        byte* pbVar1;
        byte bVar2;

        pbVar1 = (byte*)eastl::vector_map<
            int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
            eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>>::
        operator[](
            (vector_map<int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                        eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>>*)&field_8,
            (int*)param_1);
        bVar2 = *pbVar1 & param_2;
        if (bVar2 != param_2) {
            *pbVar1 = *pbVar1 | param_2;
        }
        return bVar2 != param_2;
    }

    // 0x1004454c0, 128 bytes, placed by class name and debug map
    // CombinedLocation::SectionsToRender::UnhideSection(BuildCombinedLocationResult_GroupSection const&, unsigned char)
    undefined8 CombinedLocation::SectionsToRender::UnhideSection(BuildCombinedLocationResult_GroupSection* param_1,
                                                                 uchar param_2) {
        char cVar1;
        pair* ppVar2;
        pair* ppVar3;
        uint3 in_register_00000011;
        undefined1* this_00;
        undefined8 uVar4;

        this_00 = &field_8;
        ppVar2 = (pair*)this_00->find(param_1);
        ppVar3 = (pair*)this_00->end();
        if ((ppVar2 == ppVar3) || ((param_2 & ~(byte)ppVar2[4]) != 0)) {
            uVar4 = 0;
        } else {
            ((FaceGroupRenderMasks*)(ppVar2 + 4))->field_0 = (byte)ppVar2[4] & ~param_2;
            cVar1 = ((ppVar2 + 4))->IsEmpty();
            uVar4 = CONCAT71((uint7)in_register_00000011, 1);
            if (cVar1 != '\0') {
                this_00->erase(ppVar2);
            }
        }
        return uVar4;
    }

    // 0x100445570, 48 bytes, placed by class name
    // CombinedLocation::SectionsToRender::AppendSectionRenderCustomisationMask(BuildCombinedLocationResult_GroupSection const&, unsigned char)
    bool CombinedLocation::SectionsToRender::AppendSectionRenderCustomisationMask(
        BuildCombinedLocationResult_GroupSection* param_1, uchar param_2) {
        long lVar1;
        byte bVar2;

        lVar1 = eastl::vector_map<int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>>::
        operator[](
            (vector_map<int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                        eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>>*)&field_8,
            (int*)param_1);
        bVar2 = *(byte*)(lVar1 + 1) & param_2;
        if (bVar2 != param_2) {
            *(byte*)(lVar1 + 1) = *(byte*)(lVar1 + 1) | param_2;
        }
        return bVar2 != param_2;
    }

    // 0x1004455a0, 112 bytes, placed by class name
    // CombinedLocation::SectionsToRender::RemoveSectionRenderCustomisationMask(BuildCombinedLocationResult_GroupSection const&, unsigned char)
    undefined8 CombinedLocation::SectionsToRender::RemoveSectionRenderCustomisationMask(
        BuildCombinedLocationResult_GroupSection* param_1, uchar param_2) {
        char cVar1;
        pair* ppVar2;
        pair* ppVar3;
        uint3 in_register_00000011;
        undefined1* this_00;
        undefined8 uVar4;

        this_00 = &field_8;
        ppVar2 = (pair*)this_00->find(param_1);
        ppVar3 = (pair*)this_00->end();
        if ((ppVar2 == ppVar3) || (((byte)ppVar2[5] & param_2) == 0)) {
            uVar4 = 0;
        } else {
            ppVar2[5] = (pair)((byte)ppVar2[5] & ~param_2);
            cVar1 = ((ppVar2 + 4))->IsEmpty();
            uVar4 = CONCAT71((uint7)in_register_00000011, 1);
            if (cVar1 != '\0') {
                this_00->erase(ppVar2);
            }
        }
        return uVar4;
    }

    // 0x100445610, 80 bytes, placed by class name
    // CombinedLocation::SectionsToRender::IsHidden(BuildCombinedLocationResult_GroupSection const&, unsigned char) const
    undefined8 CombinedLocation::SectionsToRender::IsHidden(BuildCombinedLocationResult_GroupSection* param_1,
                                                            uchar param_2) {
        long lVar1;
        long lVar2;
        undefined8 uVar3;

        lVar1 = (&field_8, (int*)param_1)->find();
        lVar2 = (&field_8)->end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = ((lVar1 + 4))->IsHiddenByMask(param_2);
        }
        return uVar3;
    }

    // 0x100445670, 80 bytes, placed by class name
    // CombinedLocation::SectionsToRender::HasRenderCustomisationMask(BuildCombinedLocationResult_GroupSection const&, unsigned char) const
    undefined8
    CombinedLocation::SectionsToRender::HasRenderCustomisationMask(BuildCombinedLocationResult_GroupSection* param_1,
                                                                   uchar param_2) {
        long lVar1;
        long lVar2;
        undefined8 uVar3;

        lVar1 = (&field_8, (int*)param_1)->find();
        lVar2 = (&field_8)->end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = ((lVar1 + 4))->HasCustomisationMask(param_2);
        }
        return uVar3;
    }

    // 0x1004456d0, 128 bytes, placed by class name
    // CombinedLocation::SectionsToRender::CheckIfActiveSectionsChangedFromDefault() const
    ulong CombinedLocation::SectionsToRender::CheckIfActiveSectionsChangedFromDefault() {
        uint* puVar1;
        undefined1* puVar3;
        undefined1* puVar4;
        Material* this_00;
        undefined1* this_01;
        bool bVar5;

        this_01 = &field_8;
        puVar3 = (undefined1*)this_01->HeapBeginPtr();
        puVar4 = (undefined1*)this_01->end();
        bVar5 = puVar3 == puVar4;
        if ((!bVar5) && ((puVar3[4] & 1) == 0)) {
            this_00 = (Material*)(puVar3 + 4);
            do {
                if ((this_00->IsRT7() != '\0') || (bVar5 = &this_00->m_iD == (uint*)puVar4, bVar5))
                    break;
                puVar1 = &this_00->m_size;
                this_00 = (Material*)&this_00->m_size;
            } while ((*puVar1 & 1) == 0);
        }
        return CONCAT71((int7)((ulong)this_01 >> 8), ~bVar5) & 4294967041;
    }

    // 0x100445760, 1712 bytes, base-object constructor, placed by class name
    // CombinedLocation::CombinedLocation(graphics::RT7Core&, graphics::GraphNode*, shared_ptr<World> const&, bool, bool, bool, bool, shared_ptr<graphics::Model> const&, eastl::vector<BuildCombinedLocationResult_GroupSection, eastl::allocator> const&)
    void CombinedLocation::CombinedLocation(RT7Core* param_1, GraphNode* param_2, shared_ptr* param_3, bool param_4,
                                            bool param_5, bool param_6, bool param_7, shared_ptr* param_8,
                                            vector* param_9) {
        undefined1* this_00;
        undefined1* this_01;
        Layout* this_02;
        CombinedLocation* this_03;
        bool bVar1;
        char cVar2;
        byte bVar3;
        undefined1 uVar4;
        int iVar5;
        Model* pMVar6;
        BuildCombinedLocationResult_GroupSection* pBVar7;
        LocType* this_04;
        GraphEntity* pGVar8;
        GraphNode* pGVar9;
        RT7Core* pRVar10;
        NXTPixToolkit* this_05;
        AABB* this_06;
        World* this_07;
        uint uVar11;
        undefined7 in_register_00000089;
        float fVar12;
        float in_XMM1_Da;
        int* in_stack_fffffffffffffeb0;
        undefined1 local_148[64];
        QuaternionT<float> local_108[16];
        QuaternionT<float> local_f8[16];
        QuaternionT<float> local_e8[16];
        shared_ptr local_d8;
        BuildCombinedLocationResult_GroupSection* local_c8;
        undefined1* local_a8;
        undefined1* local_a0;
        undefined1* local_98;
        undefined1* local_90;
        undefined1* local_88;
        char* local_80;
        Layout* local_78;
        float local_6c;
        math* local_68;
        GraphNode* local_60;
        shared_ptr* local_58;
        undefined1* local_50;
        undefined1* local_40;
        undefined1* local_38;

        local_68 = (math*)CONCAT44(local_68._4_4_, (int)CONCAT71(in_register_00000089, param_5));
        new (this) LocationInterface(2, param_2, param_3, 8, 0);
        new (this) MakeSharedPool<CombinedLocation, 128>();
        field_0 = &PTR__CombinedLocation_100f00248;
        field_8 = &PTR__CombinedLocation_100f003e8;
        field_224 = param_6;
        field_225 = param_7;
        local_78 = (Layout*)&field_232;
        new (local_78) eastl::vector<BuildCombinedLocationResult_GroupSection, eastl::allocator>(param_9);
        field_264 = 0;
        local_38 = &field_272;
        new (local_38) eastl::vector<LocationAudioProperties, eastl::allocator>();
        local_40 = &field_304;
        new (local_40) Array<int, eastl::allocator>();
        local_58 = (shared_ptr*)m_model;
        new (local_58) shared_ptr<oldscape::dash3d::Decor>(param_8);
        local_a8 = &field_344;
        new (local_a8) eastl::fixed_vector<shared_ptr<graphics::ParticleSystem>, 1ul, true, eastl::allocator>();
        local_a0 = &field_400;
        new (local_a0) eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>();
        local_98 = &field_432;
        new (local_98) eastl::vector<CombinedLocation::SectionVFXData, eastl::allocator>();
        local_90 = &field_464;
        new (local_90)
            eastl::vector_map<int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>>();
        iVar5 = param_9->size();
        local_88 = &field_504;
        new (&field_504, iVar5) SectionsToRender();
        iVar5 = param_9->size();
        local_80 = &field_552;
        new (&field_552, iVar5) SectionsToRender();
        iVar5 = param_9->size();
        local_50 = &field_600;
        new (&field_600, iVar5) SectionsToRender();
        field_648 = 0;
        pRVar10 = (RT7Core*)0;
        bVar1 = operator!=(local_58, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_model != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/CombinedLocation.cpp",
                      189, (char*)0);
        }
        if ((!param_4) && ((char)local_68 == '\0')) {
            pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_58);
            cVar2 = pMVar6->IsEmptyModel();
            if (cVar2 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("hasOpaqueFaces || hasAlphaFaces || !m_model->IsEmptyModel()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "entities/CombinedLocation.cpp",
                          190, "CombinedLocation.spec - an empty combinable location was created");
            }
        }
        this_02 = local_78;
        pBVar7 = (BuildCombinedLocationResult_GroupSection*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_78);
        local_c8 = (BuildCombinedLocationResult_GroupSection*)this_02->end();
        if (pBVar7 != local_c8) {
            do {
                if (pBVar7->field_48[32] == '\0') {
                    pGVar9 = (GraphNode*)((CombinedLocation*)this)->GetNode();
                    pRVar10 = (RT7Core*)pGVar9->GetWorldTranslation();
                    (pBVar7->field_48, (Vector3T*)pRVar10)->Translate();
                } else {
                    local_68 = (math*)((long)&pBVar7->field_24 + 4);
                    local_148._0_8_ = math::operator-(local_68, (Vector3T*)pRVar10);
                    this_00 = pBVar7->field_48;
                    local_148._8_4_ = in_XMM1_Da;
                    this_00->Translate(local_148);
                    math::QuaternionT<float>::QuaternionT(local_108);
                    this_01 = pBVar7->field_88;
                    bVar3 = this_01->GetRot();
                    local_108->FromAxisAngle(PTR_UP_100ee66d0, (float)bVar3 * -1.5707964);
                    new (local_148) math::Matrix44T<float>(local_108, PTR_ZERO_100ee66e8);
                    pGVar9 = (GraphNode*)this_00;
                    this_00->Transform(local_148);
                    local_60 = graphics::GraphNode::Create<>(pGVar9);
                    param_2->AddChild(local_60);
                    MakeSharedPool<CombinedLocationSection, 512>::MakeShared<
                        graphics::GraphNode*&, shared_ptr<World> const&, int&, int&, int&, shared_ptr<LocType>&,
                        LocData&, bool&, short&, short&, math::AABB&, int&>(
                        &local_d8, (MakeSharedPool<CombinedLocationSection, 512>*)&local_60, (GraphNode**)param_3,
                        (shared_ptr*)&pBVar7->field_4, (int*)((long)&pBVar7->field_16 + 4), (int*)&pBVar7->field_24,
                        (int*)&pBVar7->field_144, (shared_ptr*)this_01, (LocData*)&pBVar7->field_140,
                        (bool*)&pBVar7->field_16, (short*)((long)&pBVar7->field_16 + 2), (short*)this_00,
                        (AABB*)&pBVar7->field_184, in_stack_fffffffffffffeb0);
                    this_04 = (LocType*)(&pBVar7->field_144)->end();
                    uVar4 = this_04->HasParticles();
                    *(undefined1*)((long)&pBVar7->field_140 + 1) = uVar4;
                    shared_ptr<CombinedLocationSection>::operator=(
                        (shared_ptr<CombinedLocationSection>*)&pBVar7->field_160, &local_d8);
                    bVar3 = this_01->GetRot();
                    local_6c = (float)bVar3 * 1.5707964;
                    cVar2 = pBVar7->field_88[0];
                    math::QuaternionT<float>::QuaternionT(local_f8);
                    fVar12 = local_6c + 0.7853982;
                    if (cVar2 != '\v') {
                        fVar12 = local_6c;
                    }
                    in_XMM1_Da = local_6c;
                    local_f8->FromAxisAngle(PTR_UP_100ee66d0, fVar12);
                    math::QuaternionT<float>::QuaternionT(local_e8, (QuaternionT*)(pBVar7->field_88 + 4));
                    math::QuaternionT<float>::operator*=(local_e8, (QuaternionT*)local_f8);
                    local_60->SetRotation(local_e8);
                    local_60->SetTranslation(local_68);
                    local_60->SetScale((Vector3T*)&pBVar7->field_124);
                    pGVar9 = local_60;
                    pGVar8 = (GraphEntity*)local_d8.end();
                    pGVar9->SetEntity(pGVar8);
                    pRVar10 = param_1;
                    BuildSectionVFX((CombinedLocation*)this, param_1, pBVar7);
                    local_d8.~shared_ptr();
                }
                pBVar7 = pBVar7 + 1;
            } while (pBVar7 != local_c8);
        }
        this_03 = (CombinedLocation*)this;
        this_05 = (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_58);
        this_06 = (AABB*)this_05->GetScreen();
        cVar2 = this_06->IsValid();
        if (cVar2 != '\0') {
            this_03->SetAABB(this_06);
        }
        this_03->SetOccludesView(true);
        bVar1 = (&this_03->field_176)->operator_cast_to_bool();
        if (bVar1) {
            this_07 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)&this_03->field_176);
            cVar2 = this_07->GetMainSceneDrawn();
            if ((cVar2 != '\0') && (m_enableFadeIn != '\0')) {
                pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_58);
                uVar11 = 300;
                goto LAB_100445c90;
            }
        }
        pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_58);
        uVar11 = 0;
    LAB_100445c90:
        pMVar6->SetFadeTime(uVar11);
        pMVar6 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_58);
        pMVar6->SetPointLightIndicesVertexData(true);
    }

    // 0x1004460c0, 464 bytes, placed by class name
    // CombinedLocation::BuildSectionVFX(graphics::RT7Core&, BuildCombinedLocationResult_GroupSection*)
    void CombinedLocation::BuildSectionVFX(RT7Core* param_1, BuildCombinedLocationResult_GroupSection* param_2) {
        char cVar1;
        undefined1 uVar2;
        bool bVar3;
        long* plVar4;
        shared_ptr<LocType>* this_00;
        LocType* this_01;
        undefined8 uVar5;
        Entity* this_02;
        GraphNode* this_03;
        undefined8 uVar6;
        ObjType* this_04;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_05;
        RawData* pRVar7;
        RawData* pRVar8;
        shared_ptr* psVar9;
        Matrix44T local_b8;
        undefined1 local_70[32];
        undefined1 local_50[16];
        RT7Core* local_40;
        SectionVFXData* local_38;

        local_40 = param_1;
        plVar4 = (long*)shared_ptr<CombinedLocationSection>::operator->(
            (shared_ptr<CombinedLocationSection>*)&param_2->field_160);
        this_00 = (shared_ptr<LocType>*)(**(code**)(*plVar4 + 328))(plVar4);
        this_01 = (LocType*)shared_ptr<LocType>::operator->(this_00);
        cVar1 = this_01->HasVFX();
        if (cVar1 != '\0') {
            uVar5 = shared_ptr<LocType>::operator->(this_00);
            this_02 = (Entity*)shared_ptr<CombinedLocationSection>::operator->(
                (shared_ptr<CombinedLocationSection>*)&param_2->field_160);
            this_03 = (GraphNode*)this_02->GetNode();
            uVar6 = this_03->GetWorldTransformationMatrix();
            uVar2 = param_2->field_88->GetRot();
            LocType::GetLocationWorldMatrix(&local_b8, uVar5, uVar6, uVar2);
            local_38 = eastl::vector<CombinedLocation::SectionVFXData, eastl::allocator>::emplace_back<>(
                (vector<CombinedLocation::SectionVFXData, eastl::allocator>*)&field_432);
            local_38->field_0 = param_2;
            this_04 = (ObjType*)shared_ptr<LocType>::operator->(this_00);
            this_05 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)this_04->GetOffset2D();
            pRVar7 = (RawData*)this_05->data();
            pRVar8 = (RawData*)this_05->end();
            if (pRVar7 != pRVar8) {
                local_38 = (SectionVFXData*)&local_38->field_8;
                do {
                    new (local_70) VFXData();
                    make_shared<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo::RawData_const&,
                                math::Matrix44T<float>&>((jag*)local_50, pRVar7, &local_b8);
                    shared_ptr<graphics::VFXAttachmentInfo>::operator=(
                        (shared_ptr<graphics::VFXAttachmentInfo>*)(local_70 + 16), (shared_ptr*)local_50);
                    local_50->~shared_ptr();
                    psVar9 = (shared_ptr*)local_40->GetParticleManager();
                    local_50->RegisterSystem(psVar9);
                    shared_ptr<graphics::ModularParticleSystem>::operator=(
                        (shared_ptr<graphics::ModularParticleSystem>*)local_70, (shared_ptr*)local_50);
                    local_50->~shared_ptr();
                    bVar3 = local_70->operator_cast_to_bool();
                    if (bVar3) {
                        local_38->push_back(local_70);
                    }
                    local_70->~ActiveComponent();
                    pRVar7 = (RawData*)&pRVar7[1].field_8;
                } while (pRVar7 != pRVar8);
            }
        }
    }

    // 0x1004462e0, 64 bytes, complete-object constructor, placed by class name
    // CombinedLocation::CombinedLocation(graphics::RT7Core&, graphics::GraphNode*, shared_ptr<World> const&, bool, bool, bool, bool, shared_ptr<graphics::Model> const&, eastl::vector<BuildCombinedLocationResult_GroupSection, eastl::allocator> const&)
    void CombinedLocation::CombinedLocation(RT7Core* param_1, GraphNode* param_2, shared_ptr* param_3, bool param_4,
                                            bool param_5, bool param_6, bool param_7, shared_ptr* param_8,
                                            vector* param_9) {
        CombinedLocation(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);
    }

    // 0x100446320, 336 bytes, base-object destructor, placed by class name
    // CombinedLocation::~CombinedLocation()
    void CombinedLocation::~CombinedLocation() {
        field_0 = &PTR__CombinedLocation_100f00248;
        field_8 = &PTR__CombinedLocation_100f003e8;
        Destruct(this);
        (&field_600)->~SectionsToRender();
        (&field_552)->~SectionsToRender();
        (&field_504)->~SectionsToRender();
        (&field_464)->~vector_map();
        (&field_432)->~vector();
        (&field_400)->~vector();
        (&field_344)->~fixed_vector();
        m_model->~shared_ptr();
        (&field_304)->~Array();
        (&field_272)->~vector();
        (&field_232)->~vector();
        ~LocationInterface();
    }

    // 0x100446470, 16 bytes, complete-object destructor, placed by class name
    // CombinedLocation::~CombinedLocation(): jumps straight to the base-object destructor

    // 0x100446490, 32 bytes, deleting destructor, placed by class name
    // CombinedLocation::~CombinedLocation()
    void CombinedLocation::~CombinedLocation() {
        ~CombinedLocation(this);
        operator_delete(this);
    }

    // 0x1004464c0, 416 bytes, placed by class name
    // CombinedLocation::Destruct()
    void CombinedLocation::Destruct() {
        bool bVar1;
        shared_ptr* this_00;
        shared_ptr<World>* this_01;
        World* this_02;
        HeightMap* this_03;
        BuildCombinedLocationResult_GroupSection* pBVar3;
        BuildCombinedLocationResult_GroupSection* pBVar4;
        Model* this_04;

        this_00 = (shared_ptr*)GetWorld();
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar1) {
            this_01 = (shared_ptr<World>*)GetWorld();
            this_02 = (World*)shared_ptr<World>::operator->(this_01);
            this_03 = (HeightMap*)this_02->GetHeightMap();
            pBVar3 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->HeapBeginPtr();
            pBVar4 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->end();
            if (pBVar3 != pBVar4) {
                do {
                    if ((*(short*)&pBVar3->field_16 != 0) || (*(short*)((long)&pBVar3->field_16 + 2) != 0)) {
                        if ((&field_504, pBVar3, '\a')->IsHidden() == '\0') {
                            this_03->RemoveLocationHeightOffset(
                                *(int*)&pBVar3->field_8, *(int*)((long)&pBVar3->field_16 + 4), *(int*)&pBVar3->field_24,
                                *(int*)&pBVar3->field_40, *(int*)((long)&pBVar3->field_40 + 4),
                                (int)*(short*)((long)&pBVar3->field_16 + 2), (int)*(short*)&pBVar3->field_16);
                        }
                    }
                    pBVar3 = pBVar3 + 1;
                } while (pBVar3 != pBVar4);
            }
        }
        bVar1 = m_model->operator_cast_to_bool();
        if (bVar1) {
            pBVar3 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->HeapBeginPtr();
            pBVar4 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->end();
            if (pBVar3 != pBVar4) {
                do {
                    (&field_504, pBVar3, '\x03')->RemoveSectionRenderCustomisationMask();
                    pBVar3 = pBVar3 + 1;
                } while (pBVar3 != pBVar4);
            }
            this_04 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)m_model);
            this_04->ClearHighlight();
        }
        shared_ptr<graphics::Model>::reset();
        (&field_232)->clear();
        (&field_344)->clear();
        (&field_400)->clear();
        (&field_432)->clear();
        (*(code*)field_8[3])(&field_8);
    }

    // 0x1004466c0, 144 bytes, placed by class name
    // CombinedLocation::HideSection(CombinedLocation::SectionsToRender&, BuildCombinedLocationResult_GroupSection const&, unsigned char)
    void CombinedLocation::HideSection(SectionsToRender* param_1, BuildCombinedLocationResult_GroupSection* param_2,
                                       uchar param_3) {
        CombinedLocationSection* pCVar3;
        undefined1* this_00;

        if ((param_1->HideSection(param_2, param_3) != '\0') && ((SectionsToRender*)&field_504 == param_1)) {
            this_00 = &param_2->field_160;
            if (this_00->operator_cast_to_bool()) {
                if ((param_3 & 2) == 0) {
                    if ((param_3 & 253) != 0) {
                        pCVar3 = (CombinedLocationSection*)shared_ptr<CombinedLocationSection>::operator->(
                            (shared_ptr<CombinedLocationSection>*)this_00);
                        pCVar3->Hide();
                    }
                } else {
                    pCVar3 = (CombinedLocationSection*)shared_ptr<CombinedLocationSection>::operator->(
                        (shared_ptr<CombinedLocationSection>*)this_00);
                    pCVar3->ActivateRoofRemove();
                }
            }
            field_506 = 1;
        }
    }

    // 0x1004467d0, 96 bytes, placed by class name
    // CombinedLocation::HideSection(BuildCombinedLocationResult_GroupSection const&, unsigned char)
    void CombinedLocation::HideSection(BuildCombinedLocationResult_GroupSection* param_1, uchar param_2) {
        HideSection(this, (SectionsToRender*)&field_504, param_1, param_2);
        HideSection(this, (SectionsToRender*)&field_552, param_1, param_2);
        HideSection(this, (SectionsToRender*)&field_600, param_1, param_2);
    }

    // 0x100446830, 144 bytes, placed by class name
    // CombinedLocation::UnhideSection(CombinedLocation::SectionsToRender&, BuildCombinedLocationResult_GroupSection const&, unsigned char)
    void CombinedLocation::UnhideSection(SectionsToRender* param_1, BuildCombinedLocationResult_GroupSection* param_2,
                                         uchar param_3) {
        CombinedLocationSection* pCVar3;
        undefined1* this_00;

        if ((param_1->UnhideSection(param_2, param_3) != '\0') && ((SectionsToRender*)&field_504 == param_1)) {
            this_00 = &param_2->field_160;
            if (this_00->operator_cast_to_bool()) {
                if ((param_3 & 2) == 0) {
                    if ((param_3 & 253) != 0) {
                        pCVar3 = (CombinedLocationSection*)shared_ptr<CombinedLocationSection>::operator->(
                            (shared_ptr<CombinedLocationSection>*)this_00);
                        pCVar3->Unhide();
                    }
                } else {
                    pCVar3 = (CombinedLocationSection*)shared_ptr<CombinedLocationSection>::operator->(
                        (shared_ptr<CombinedLocationSection>*)this_00);
                    pCVar3->DeactivateRoofRemove();
                }
            }
            field_506 = 1;
        }
    }

    // 0x100446900, 96 bytes, placed by class name
    // CombinedLocation::UnhideSection(BuildCombinedLocationResult_GroupSection const&, unsigned char)
    void CombinedLocation::UnhideSection(BuildCombinedLocationResult_GroupSection* param_1, uchar param_2) {
        UnhideSection(this, (SectionsToRender*)&field_504, param_1, param_2);
        UnhideSection(this, (SectionsToRender*)&field_552, param_1, param_2);
        UnhideSection(this, (SectionsToRender*)&field_600, param_1, param_2);
    }

    // 0x100446960, 240 bytes, placed by class name
    // CombinedLocation::HideSection(LocShape)
    void CombinedLocation::HideSection(undefined1 param_2) {
        CombinedLocationSection* this_00;
        char cVar2;
        undefined1 uVar3;
        char cVar4;
        int iVar5;
        int iVar6;
        BuildCombinedLocationResult_GroupSection* pBVar7;
        BuildCombinedLocationResult_GroupSection* pBVar8;

        pBVar8 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->HeapBeginPtr();
        pBVar7 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->end();
        for (; pBVar8 != pBVar7; pBVar8 = pBVar8 + 1) {
            if ((&pBVar8->field_160)->operator_cast_to_bool()) {
                this_00 = (CombinedLocationSection*)shared_ptr<CombinedLocationSection>::operator->(
                    (shared_ptr<CombinedLocationSection>*)&pBVar8->field_160);
                cVar2 = this_00->IsHidden();
                if (cVar2 == '\0') {
                    uVar3 = pBVar8->field_88->GetShape();
                    iVar5 = LocShapes::GetLayer(uVar3);
                    iVar6 = LocShapes::GetLayer(param_2);
                    if (iVar5 == iVar6) {
                        uVar3 = pBVar8->field_88->GetShape();
                        cVar2 = LocShapes::IsAlternativePieceShape(uVar3);
                        cVar4 = LocShapes::IsAlternativePieceShape(param_2);
                        if (cVar2 == cVar4) {
                            HideSection(this, pBVar8, '\x01');
                        }
                    }
                }
            }
        }
    }

    // 0x100446ac0, 240 bytes, placed by class name
    // CombinedLocation::UnhideSection(LocShape)
    void CombinedLocation::UnhideSection(undefined1 param_2) {
        CombinedLocationSection* this_00;
        char cVar2;
        undefined1 uVar3;
        char cVar4;
        int iVar5;
        int iVar6;
        BuildCombinedLocationResult_GroupSection* pBVar7;
        BuildCombinedLocationResult_GroupSection* pBVar8;

        pBVar8 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->HeapBeginPtr();
        pBVar7 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->end();
        for (; pBVar8 != pBVar7; pBVar8 = pBVar8 + 1) {
            if ((&pBVar8->field_160)->operator_cast_to_bool()) {
                this_00 = (CombinedLocationSection*)shared_ptr<CombinedLocationSection>::operator->(
                    (shared_ptr<CombinedLocationSection>*)&pBVar8->field_160);
                cVar2 = this_00->IsHidden();
                if (cVar2 != '\0') {
                    uVar3 = pBVar8->field_88->GetShape();
                    iVar5 = LocShapes::GetLayer(uVar3);
                    iVar6 = LocShapes::GetLayer(param_2);
                    if (iVar5 == iVar6) {
                        uVar3 = pBVar8->field_88->GetShape();
                        cVar2 = LocShapes::IsAlternativePieceShape(uVar3);
                        cVar4 = LocShapes::IsAlternativePieceShape(param_2);
                        if (cVar2 == cVar4) {
                            UnhideSection(this, pBVar8, '\x01');
                        }
                    }
                }
            }
        }
    }

    // 0x100446bb0, 320 bytes, placed by class name
    // CombinedLocation::HideActiveSection(int, int, int, int, LocShape)
    ulong CombinedLocation::HideActiveSection(int param_1, int param_2, int param_3, int param_4, undefined1 param_6) {
        char cVar1;
        undefined1 uVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        BuildCombinedLocationResult_GroupSection* pBVar6;
        BuildCombinedLocationResult_GroupSection* pBVar7;
        CombinedLocationSection* this_00;
        undefined8 unaff_R14;
        bool bVar8;

        pBVar6 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->HeapBeginPtr();
        pBVar7 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->end();
        bVar8 = pBVar6 == pBVar7;
        if (!bVar8) {
            do {
                if (pBVar6->field_48[32] != '\0') {
                    this_00 = (CombinedLocationSection*)shared_ptr<CombinedLocationSection>::operator->(
                        (shared_ptr<CombinedLocationSection>*)&pBVar6->field_160);
                    cVar1 = this_00->IsHidden();
                    if (((cVar1 == '\0') && (((param_1 == -1 || (pBVar6->field_84 == param_1)) &&
                                              (*(int*)&pBVar6->field_4 == param_2)))) &&
                        ((*(int*)((long)&pBVar6->field_16 + 4) == param_3 && (*(int*)&pBVar6->field_24 == param_4)))) {
                        uVar2 = pBVar6->field_88->GetShape();
                        iVar4 = LocShapes::GetLayer(uVar2);
                        iVar5 = LocShapes::GetLayer();
                        if (iVar4 == iVar5) {
                            uVar2 = pBVar6->field_88->GetShape();
                            cVar1 = LocShapes::IsAlternativePieceShape(uVar2);
                            cVar3 = LocShapes::IsAlternativePieceShape(param_6);
                            if (cVar1 == cVar3) {
                                HideSection(this, pBVar6, '\x01');
                                break;
                            }
                        }
                    }
                }
                pBVar6 = pBVar6 + 1;
                bVar8 = pBVar6 == pBVar7;
            } while (!bVar8);
        }
        return CONCAT71((int7)((ulong)unaff_R14 >> 8), ~bVar8) & 4294967041;
    }

    // 0x100446cf0, 368 bytes, placed by class name
    // CombinedLocation::UnhideActiveSection(int, int, int, int, LocShape, Rotation90)
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*
    CombinedLocation::UnhideActiveSection(shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>* param_1,
                                          CombinedLocation* param_2, int param_3, int param_4, int param_5, int param_6,
                                          undefined1 param_7, char param_8) {
        undefined1* this;
        char cVar1;
        undefined1 uVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        BuildCombinedLocationResult_GroupSection* pBVar6;
        BuildCombinedLocationResult_GroupSection* pBVar7;
        CombinedLocationSection* this_00;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(param_1,
                                                                                 (_func_decltype_nullptr*)param_2);
        pBVar6 = (BuildCombinedLocationResult_GroupSection*)(&param_2->field_232)->HeapBeginPtr();
        pBVar7 = (BuildCombinedLocationResult_GroupSection*)(&param_2->field_232)->end();
        for (; pBVar6 != pBVar7; pBVar6 = pBVar6 + 1) {
            if (pBVar6->field_48[32] != '\0') {
                this_00 = (CombinedLocationSection*)shared_ptr<CombinedLocationSection>::operator->(
                    (shared_ptr<CombinedLocationSection>*)&pBVar6->field_160);
                cVar1 = this_00->IsHidden();
                if (((cVar1 != '\0') &&
                     (((param_3 == -1 || (pBVar6->field_84 == param_3)) && (*(int*)&pBVar6->field_4 == param_4)))) &&
                    ((*(int*)((long)&pBVar6->field_16 + 4) == param_5 && (*(int*)&pBVar6->field_24 == param_6)))) {
                    this = pBVar6->field_88;
                    cVar1 = GetRot();
                    if (cVar1 == param_8) {
                        uVar2 = GetShape();
                        iVar4 = LocShapes::GetLayer(uVar2);
                        iVar5 = LocShapes::GetLayer();
                        if (iVar4 == iVar5) {
                            uVar2 = GetShape();
                            cVar1 = LocShapes::IsAlternativePieceShape(uVar2);
                            cVar3 = LocShapes::IsAlternativePieceShape(param_7);
                            if (cVar1 == cVar3) {
                                UnhideSection(param_2, pBVar6, '\x01');
                                shared_ptr<CombinedLocationSection>::operator=(
                                    (shared_ptr<CombinedLocationSection>*)param_1, (shared_ptr*)&pBVar6->field_160);
                            }
                        }
                    }
                }
            }
        }
        return param_1;
    }

    // 0x100446e60, 336 bytes, placed by class name
    // CombinedLocation::UnhideActiveSectionsArea(CoordFine const&, CoordFine const&)
    void CombinedLocation::UnhideActiveSectionsArea(CoordFine* param_1, CoordFine* param_2) {
        float fVar1;
        BuildCombinedLocationResult_GroupSection* pBVar2;
        BuildCombinedLocationResult_GroupSection* pBVar3;
        Entity* this_00;
        GraphNode* this_01;
        Layout* this_02;
        vector* pvVar4;
        float* pfVar5;
        BuildCombinedLocationResult_GroupSection* pBVar6;

        pBVar6 = (BuildCombinedLocationResult_GroupSection*)param_1;
        pBVar2 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->HeapBeginPtr();
        pBVar3 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->end();
        if (pBVar2 != pBVar3) {
            do {
                if (pBVar2->field_48[32] != '\0') {
                    this_00 = (Entity*)shared_ptr<CombinedLocationSection>::operator->(
                        (shared_ptr<CombinedLocationSection>*)&pBVar2->field_160);
                    this_01 = (GraphNode*)this_00->GetNode();
                    this_02 = (Layout*)this_01->GetWorldTranslation();
                    pvVar4 = eastl::string::Layout::SSOBeginPtr(this_02, (type*)pBVar6);
                    fVar1 = *(float*)pvVar4;
                    pvVar4 = (&param_1->field_4, (type*)pBVar6)->SSOBeginPtr();
                    if (*(float*)pvVar4 <= fVar1) {
                        pvVar4 = eastl::string::Layout::SSOBeginPtr(this_02, (type*)pBVar6);
                        fVar1 = *(float*)pvVar4;
                        pvVar4 = (&param_2->field_4, (type*)pBVar6)->SSOBeginPtr();
                        if (fVar1 < *(float*)pvVar4 || fVar1 == *(float*)pvVar4) {
                            pfVar5 = (float*)this_02->second();
                            fVar1 = *pfVar5;
                            pfVar5 = (float*)(&param_1->field_4)->second();
                            if (*pfVar5 <= fVar1) {
                                pfVar5 = (float*)this_02->second();
                                fVar1 = *pfVar5;
                                pfVar5 = (float*)(&param_2->field_4)->second();
                                if ((fVar1 < *pfVar5 || fVar1 == *pfVar5) &&
                                    (*(uint*)&pBVar2->field_4 == param_1->field_0)) {
                                    pBVar6 = pBVar2;
                                    UnhideSection(this, pBVar2, '\x01');
                                }
                            }
                        }
                    }
                }
                pBVar2 = pBVar2 + 1;
            } while (pBVar2 != pBVar3);
        }
    }

    // 0x100446fb0, 288 bytes, placed by class name
    // CombinedLocation::FindActiveSection(int, int, int, LocShape)
    undefined1* CombinedLocation::FindActiveSection(int param_1, int param_2, int param_3, undefined1 param_5) {
        undefined1 uVar1;
        byte bVar2;
        byte bVar3;
        int iVar4;
        int iVar5;
        long lVar6;
        long lVar7;
        undefined1* local_48;

        lVar6 = (&field_232)->HeapBeginPtr();
        lVar7 = (&field_232)->end();
        while (true) {
            if (lVar6 == lVar7) {
                return &CombinedLocationSection::NullSection;
            }
            bVar3 = 1;
            if ((((*(char*)(lVar6 + 80) != '\0') && (*(int*)(lVar6 + 4) == param_1)) &&
                 (*(int*)(lVar6 + 20) == param_2)) &&
                (*(int*)(lVar6 + 24) == param_3)) {
                uVar1 = ((lVar6 + 88))->GetShape();
                iVar4 = LocShapes::GetLayer(uVar1);
                iVar5 = LocShapes::GetLayer();
                if (iVar4 == iVar5) {
                    uVar1 = ((lVar6 + 88))->GetShape();
                    bVar2 = LocShapes::IsAlternativePieceShape(uVar1);
                    bVar3 = LocShapes::IsAlternativePieceShape(param_5);
                    bVar3 = bVar3 ^ bVar2;
                    if (bVar3 == 0) {
                        local_48 = (undefined1*)(lVar6 + 160);
                    }
                }
            }
            if (bVar3 == 0)
                break;
            lVar6 = lVar6 + 192;
        }
        return local_48;
    }

    // 0x1004470d0, 176 bytes, placed by class name
    // CombinedLocation::FindActiveSection(int, int, int, int)
    undefined1* CombinedLocation::FindActiveSection(int param_1, int param_2, int param_3, int param_4) {
        long lVar1;
        long lVar2;
        undefined4 in_register_00000034;
        undefined1* puVar3;
        bool bVar4;

        puVar3 = (undefined1*)CONCAT44(in_register_00000034, param_1);
        lVar1 = (&field_232)->HeapBeginPtr();
        lVar2 = (&field_232)->end();
        while (true) {
            if (lVar1 == lVar2) {
                return &CombinedLocationSection::NullSection;
            }
            bVar4 = true;
            if ((((*(char*)(lVar1 + 80) != '\0') && (*(int*)(lVar1 + 84) == param_4)) &&
                 (*(int*)(lVar1 + 4) == param_1)) &&
                (*(int*)(lVar1 + 20) == param_2)) {
                bVar4 = *(int*)(lVar1 + 24) != param_3;
                if (!bVar4) {
                    puVar3 = (undefined1*)(lVar1 + 160);
                }
            }
            if (!bVar4)
                break;
            lVar1 = lVar1 + 192;
        }
        return puVar3;
    }

    // 0x100447180, 128 bytes, placed by class name
    // CombinedLocation::HideHiddenAudioCombinableSections()
    void CombinedLocation::HideHiddenAudioCombinableSections() {
        BuildCombinedLocationResult_GroupSection* pBVar1;
        BuildCombinedLocationResult_GroupSection* pBVar2;

        pBVar1 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->HeapBeginPtr();
        pBVar2 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->end();
        for (; pBVar1 != pBVar2; pBVar1 = pBVar1 + 1) {
            if (pBVar1->field_180 != '\0') {
                HideSection(this, pBVar1, '\x01');
            }
        }
    }

    // 0x100447200, 576 bytes, placed by class name
    // CombinedLocation::MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&)
    void CombinedLocation::MainLogic(RT7Core* param_1, uint param_2, Matrix44T* param_3) {
        undefined1* this_00;
        Layout* this_01;
        bool bVar3;
        char cVar4;
        undefined1 uVar5;
        uint uVar6;
        long lVar7;
        shared_ptr<World>* this_02;
        World* this_03;
        IrradianceEffect* this_04;
        Model* pMVar8;
        IrradianceEffect* this_05;
        ModelUpdateManager* this_06;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_07;
        int* piVar9;
        int* piVar10;
        undefined1* puVar11;
        undefined1 local_b8[112];
        Layout* local_40;

        (*(code*)field_0[49])();
        uVar6 = TicksSinceLastCall(param_2);
        UpdateRandomSounds(this, uVar6);
        UpdateHighlighting(this, param_2);
        this_00 = m_model;
        bVar3 = this_00->operator_cast_to_bool();
        if (bVar3) {
            local_40 = (Layout*)&field_232;
            lVar7 = local_40->front();
            this_02 = (shared_ptr<World>*)GetWorld();
            this_03 = (World*)shared_ptr<World>::operator->(this_02);
            this_04 = (IrradianceEffect*)this_03->GetClosestMapSquare(*(int*)(lVar7 + 40), *(int*)(lVar7 + 44),
                                                                      *(int*)(lVar7 + 20), *(int*)(lVar7 + 24),
                                                                      field_68, (int)*(short*)(lVar7 + 16));
            this_05 = this_04;
            bVar3 = operator!=((shared_ptr*)this_04, (_func_decltype_nullptr*)0);
            if (bVar3) {
                pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                this_05 = (IrradianceEffect*)pMVar8->GetIrradianceEffect();
                shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_04);
                local_b8->GetIrradianceSHConsts();
                this_05->SetCoefficients(local_b8);
            }
            this_06 = (ModelUpdateManager*)this_05->Instance();
            this_06->AddToUpdateList(this_00);
            pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
            this_07 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          pMVar8->GetParticleEmitters();
            cVar4 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_07);
            if (cVar4 == '\0') {
                if (field_506 != '\0') {
                    field_506 = 0;
                    eastl::vector_map<
                        int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                        eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>>::
                    operator=((vector_map<int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>,
                                                        eastl::allocator>>*)&field_464,
                              (vector_map*)&field_512);
                    this_01 = local_40;
                    piVar9 = (int*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_40);
                    piVar10 = (int*)this_01->end();
                    for (; piVar9 != piVar10; piVar9 = piVar9 + 48) {
                        if (*(char*)((long)piVar9 + 141) == '\0') {
                            puVar11 = (undefined1*)eastl::vector_map<
                                int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>>::
                            operator[](
                                (vector_map<int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                                            eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>,
                                                          eastl::allocator>>*)&field_464,
                                piVar9);
                            *puVar11 = 1;
                        }
                    }
                }
                pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                pMVar8->UpdateParticleEmitters(param_1, (fixed_vector*)&field_344, param_3, (AnimationStateProvider*)0,
                                               (vector_map*)&field_464, false);
                pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                pMVar8->UpdateModularParticleSystems(param_1, (vector*)&field_400, param_3, (AnimationStateProvider*)0,
                                                     (vector_map*)&field_464, false);
            }
        }
        cVar4 = (&field_344)->empty();
        if (cVar4 == '\0') {
            uVar5 = false;
        } else {
            uVar5 = (&field_400)->empty();
        }
        SetNDCProjectionTestEnabled((bool)uVar5);
    }

    // 0x100447440, 384 bytes, placed by class name
    // CombinedLocation::UpdateRandomSounds(unsigned int)
    void CombinedLocation::UpdateRandomSounds(uint param_1) {
        Array<VarValue, eastl::allocator>* this_00;
        undefined1* this_01;
        undefined1* this_02;
        int iVar2;
        undefined4 uVar3;
        uint uVar4;
        undefined4* puVar5;
        long lVar6;
        int* piVar7;
        int* piVar8;
        ulong uVar9;

        this_01 = &field_272;
        iVar2 = this_01->size();
        if (iVar2 != 0) {
            this_02 = &field_304;
            uVar9 = 0;
            do {
                lVar6 = this_01->at(uVar9);
                this_00 = (Array<VarValue, eastl::allocator>*)(lVar6 + 24);
                if (this_00->empty() == '\0') {
                    piVar7 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar9);
                    *piVar7 = *piVar7 - param_1;
                    piVar7 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar9);
                    if (*piVar7 < 1) {
                        piVar7 = (int*)this_00->data();
                        piVar8 = (int*)this_00->end();
                        for (; piVar7 != piVar8; piVar7 = piVar7 + 1) {
                            (&field_8, *piVar7)->HasSoundInstance();
                        }
                        iVar2 = this_00->end();
                        iVar2 = math::Rand(iVar2 + -1);
                        piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                (long)iVar2);
                        uVar3 = AddRandomSound(*piVar7, (int)*(short*)(lVar6 + 4), (int)*(char*)(lVar6 + 56),
                                               (int)*(short*)(lVar6 + 8), (int)*(short*)(lVar6 + 6),
                                               *(uint*)(lVar6 + 12), *(uint*)(lVar6 + 16), *(uint*)(lVar6 + 48),
                                               *(uint*)(lVar6 + 52), (Vector3T*)(lVar6 + 60), *(int*)(lVar6 + 72));
                        puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)this_02, uVar9);
                        *puVar5 = uVar3;
                    }
                }
                uVar9 = uVar9 + 1;
                uVar4 = this_01->size();
            } while (uVar9 < uVar4);
        }
    }

    // 0x1004475c0, 1296 bytes, placed by class name
    // CombinedLocation::UpdateHighlighting(unsigned int)
    void CombinedLocation::UpdateHighlighting(uint param_1) {
        undefined1* this_00;
        shared_ptr<graphics::Model>* psVar1;
        EntityHighlightVisualConfig* this_01;
        bool bVar2;
        char cVar3;
        shared_ptr* psVar4;
        shared_ptr<World>* this_02;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_03;
        SceneManager* this_04;
        EntityHighlightGlobalState* this_05;
        BuildCombinedLocationResult_GroupSection* pBVar5;
        BuildCombinedLocationResult_GroupSection* pBVar6;
        long* plVar7;
        shared_ptr<LocType>* this_06;
        LocType* this_07;
        MapSquarePointLights* this_08;
        EntityHighlightState* this_09;
        Model* pMVar8;
        undefined1* puVar9;
        BuildCombinedLocationResult_GroupSection* pBVar10;
        float fVar11;
        float fVar12;
        ulong uVar13;
        uint extraout_XMM0_Dc;
        undefined4 extraout_XMM0_Dc_00;
        uint extraout_XMM0_Dd;
        undefined4 extraout_XMM0_Dd_00;
        uint uVar14;
        float fVar15;
        undefined8 local_d8;
        float fStack_d0;
        float fStack_cc;
        undefined8 local_c8;
        float fStack_c0;
        float fStack_bc;
        undefined8 local_b8;
        uint uStack_b0;
        uint uStack_ac;
        undefined8 local_a8;
        undefined8 uStack_a0;
        shared_ptr<graphics::Model>* local_90;
        ColourHSL local_88;
        float local_78;
        uint uStack_74;
        uint uStack_70;
        uint uStack_6c;
        EntityHighlightVisualConfig* local_60;
        CombinedLocation* local_58;
        BuildCombinedLocationResult_GroupSection* local_50;
        BuildCombinedLocationResult_GroupSection* local_48;
        uint local_3c;
        float local_38;
        float local_34;

        psVar4 = (shared_ptr*)GetWorld();
        bVar2 = shared_ptr::operator_cast_to_bool(psVar4);
        if (bVar2) {
            puVar9 = m_model;
            bVar2 = puVar9->operator_cast_to_bool();
            if (bVar2) {
                this_02 = (shared_ptr<World>*)GetWorld();
                this_03 =
                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                               eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                               eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                               eastl::prime_rehash_policy, false, true, true>*)shared_ptr<World>::operator->(this_02);
                this_04 = (SceneManager*)eastl::hashtable<
                    long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                    eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                    eastl::prime_rehash_policy, false, true, true>::size(this_03);
                this_05 = (EntityHighlightGlobalState*)this_04->GetEntityHighlightGlobalState();
                cVar3 = this_05->IsEnabled();
                if (cVar3 == '\0') {
                    pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)puVar9);
                    pMVar8->ClearHighlight();
                    pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)puVar9);
                    pMVar8->ClearHighlightedSection();
                    field_648 = 0;
                } else {
                    local_60 = (EntityHighlightVisualConfig*)EntityHighlightVisualConfig::GetDefault(5);
                    if ((field_648 != '\0') || (local_60->field_0 == 2)) {
                        local_90 = (shared_ptr<graphics::Model>*)puVar9;
                        local_3c = param_1;
                        pBVar5 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->HeapBeginPtr();
                        pBVar6 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->end();
                        local_58 = this;
                        if (pBVar5 == pBVar6) {
                            pBVar10 = (BuildCombinedLocationResult_GroupSection*)0;
                            local_a8 = 0;
                            uStack_a0 = 0;
                            local_34 = 0.0;
                            uVar13 = 0;
                            uStack_b0 = 0;
                            uStack_ac = 0;
                        } else {
                            puVar9 = &field_504;
                            local_38 = 100000.0;
                            uVar14 = 0;
                            pBVar10 = (BuildCombinedLocationResult_GroupSection*)0;
                            local_34 = 0.0;
                            local_a8 = 0;
                            uStack_a0 = 0;
                            local_48 = pBVar6;
                            do {
                                this_00 = &pBVar5->field_160;
                                local_78 = (float)uVar14;
                                bVar2 = this_00->operator_cast_to_bool();
                                if (bVar2) {
                                    local_50 = pBVar10;
                                    if (EntityHighlightGlobalState::m_allowExamineOnlyHighlights == '\0') {
                                        plVar7 = (long*)shared_ptr<CombinedLocationSection>::operator->(
                                            (shared_ptr<CombinedLocationSection>*)this_00);
                                        psVar4 = (shared_ptr*)(**(code**)(*plVar7 + 328))(plVar7);
                                        bVar2 = shared_ptr::operator_cast_to_bool(psVar4);
                                        cVar3 = '\x01';
                                        if (bVar2) {
                                            plVar7 = (long*)shared_ptr<CombinedLocationSection>::operator->(
                                                (shared_ptr<CombinedLocationSection>*)this_00);
                                            this_06 = (shared_ptr<LocType>*)(**(code**)(*plVar7 + 328))(plVar7);
                                            this_07 = (LocType*)shared_ptr<LocType>::operator->(this_06);
                                            cVar3 = this_07->IsExamineOnly();
                                        }
                                    } else {
                                        cVar3 = '\0';
                                    }
                                    this_08 = (MapSquarePointLights*)shared_ptr<CombinedLocationSection>::operator->(
                                        (shared_ptr<CombinedLocationSection>*)this_00);
                                    this_09 = (EntityHighlightState*)this_08->GetLightSourcesDynamic();
                                    if (local_60->field_0 == 2) {
                                        new (this_09) oldscape::ServerConnectionWorkItem(local_3c);
                                    }
                                    fVar11 = (float)FrameTime::GetFrameDelta();
                                    this_09->Update(this_05, fVar11, local_3c);
                                    fVar11 = 0.0;
                                    if (cVar3 == '\0') {
                                        fVar11 = 1.0;
                                    }
                                    uVar13 = local_60->EvaluateAlpha(this_09, this_05, fVar11);
                                    if ((float)uVar13 <= 0.0) {
                                        puVar9->RemoveSectionRenderCustomisationMask(pBVar5, '\x03');
                                    } else {
                                        uStack_b0 = extraout_XMM0_Dc;
                                        uStack_ac = extraout_XMM0_Dd;
                                        local_b8 = uVar13;
                                        cVar3 = this_09->WasInteractedWithRecently();
                                        if (cVar3 == '\0') {
                                            local_a8 = eastl::max_alt((float)local_a8, (float)local_b8);
                                            uStack_a0 = CONCAT44(extraout_XMM0_Dd_00, extraout_XMM0_Dc_00);
                                            puVar9->RemoveSectionRenderCustomisationMask(pBVar5, '\x02');
                                        } else {
                                            fVar11 = (float)this_09->GetInterpolationRuntime();
                                            if (fVar11 < local_38) {
                                                if (local_50 != (BuildCombinedLocationResult_GroupSection*)0) {
                                                    puVar9->RemoveSectionRenderCustomisationMask(local_50, '\x02');
                                                }
                                                local_34 = (float)this_09->GetInterpolationFactor();
                                                local_38 = (float)this_09->GetInterpolationRuntime();
                                                puVar9->AppendSectionRenderCustomisationMask(pBVar5, '\x02');
                                                pBVar10 = pBVar5;
                                                pBVar6 = local_48;
                                                uVar13 = local_b8;
                                                goto LAB_1004476e8;
                                            }
                                        }
                                        puVar9->AppendSectionRenderCustomisationMask(pBVar5, '\x01');
                                    }
                                    uVar13 = (ulong)(uint)local_78;
                                    uStack_b0 = 0;
                                    uStack_ac = 0;
                                    pBVar10 = local_50;
                                    pBVar6 = local_48;
                                } else {
                                    puVar9->RemoveSectionRenderCustomisationMask(pBVar5, '\x03');
                                    uVar13 = (ulong)(uint)local_78;
                                    uStack_b0 = 0;
                                    uStack_ac = 0;
                                }
                            LAB_1004476e8:
                                uVar14 = (uint)uVar13;
                                pBVar5 = pBVar5 + 1;
                            } while (pBVar5 != pBVar6);
                        }
                        this_01 = local_60;
                        psVar1 = local_90;
                        fVar11 = 0.0;
                        fVar15 = 0.0;
                        uStack_74 = local_a8._4_4_ & (uint)(uVar13 >> 32);
                        uStack_70 = (uint)uStack_a0 & uStack_b0;
                        uStack_6c = uStack_a0._4_4_ & uStack_ac;
                        fVar12 = (float)(~-(uint)((float)local_a8 == 0.0) & (uint)(float)local_a8 |
                                         -(uint)((float)local_a8 == 0.0) & (uint)uVar13);
                        if (fVar12 <= 0.0) {
                            pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->(local_90);
                            pMVar8->ClearHighlight();
                            pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->(psVar1);
                            pMVar8->ClearHighlightedSection();
                            local_58->field_648 = 0;
                        } else {
                            local_78 = fVar12;
                            local_b8 = uVar13;
                            local_d8 = local_60->GetDefaultColour();
                            psVar1 = local_90;
                            fStack_cc = local_78 * fVar15;
                            fStack_d0 = fVar11;
                            pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->(local_90);
                            pMVar8->SetHighlight(this_01->field_4, (Vector4T*)&local_d8);
                            if (pBVar10 == (BuildCombinedLocationResult_GroupSection*)0) {
                                pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->(psVar1);
                                pMVar8->ClearHighlightedSection();
                            } else {
                                local_c8 = local_d8.GetXYZ();
                                fStack_c0 = fVar11;
                                local_88._0_8_ = math::RGBToHSL((Vector3T*)&local_c8);
                                local_88.field_8 = fVar11;
                                local_88.field_8 = math::Lerp<float, float>(
                                    &local_88.field_8,
                                    (float*)&EntityHighlightVisualConfig::m_interactionLuminosityTarget, local_34);
                                bVar2 = (bool)this_01->IsSilhouette();
                                fVar12 = (float)EntityHighlightVisualConfig::GetDefaultAlpha(bVar2);
                                local_c8 = math::HSLToRGB(&local_88, fVar12 * (float)local_b8);
                                fStack_c0 = fVar11;
                                fStack_bc = fVar15;
                                math::Rect<float>::operator=((Rect<float>*)&local_d8, (Rect*)&local_c8);
                                local_34 = local_34 * EntityHighlightVisualConfig::m_scaleIncreaseOnInteraction + 1.0;
                                pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->(psVar1);
                                pMVar8->SetHighlightedSection(local_34 * this_01->field_4, (Vector4T*)&local_d8);
                            }
                            local_58->field_648 = 1;
                        }
                    }
                }
            }
        }
    }

    // 0x100447b30, 912 bytes, placed by class name
    // CombinedLocation::GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&, graphics::SceneViewData const&, graphics::EffectManager const&)
    void CombinedLocation::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, Matrix44T* param_3,
                                                  SceneViewData* param_4, EffectManager* param_5) {
        CombinedLocation* pCVar3;
        char cVar4;
        bool bVar5;
        undefined1 uVar6;
        undefined1 uVar7;
        bool bVar8;
        SectionsToRender* pSVar9;
        Model* pMVar10;
        shared_ptr<graphics::ParticleSystem>* this_00;
        shared_ptr<graphics::ParticleSystem>* psVar11;
        long* plVar12;
        shared_ptr<graphics::ModularParticleSystem>* psVar13;
        shared_ptr<graphics::ModularParticleSystem>* psVar14;
        ModularParticleSystem* pMVar15;
        long* plVar16;
        Entity* this_01;
        GraphNode* this_02;
        undefined8 uVar17;
        long lVar18;
        VFXAttachmentInfo* this_03;
        ObjType* this_04;
        Array<graphics::VFXAttachmentInfo::RawData, eastl::allocator>* this_05;
        RawData* pRVar19;
        ulong uVar20;
        undefined1* puVar21;
        ulong uVar22;
        vector_map* pvVar23;
        Matrix44T* this_06;
        Matrix44T local_a8;
        long* local_68;
        long* local_60;
        SectionsToRender* local_58;
        Matrix44T* local_40;
        CombinedLocation* local_38;

        local_40 = param_3;
        cVar4 = (*(code*)field_0[35])();
        if ((cVar4 != '\0') && (cVar4 = FilterRenderPasses(this, param_4), cVar4 != '\0')) {
            local_38 = this;
            bVar5 = (bool)param_4->HasShadowPass();
            cVar4 = param_4->HasRenderPass(2);
            uVar7 = true;
            uVar6 = true;
            if (cVar4 == '\0') {
                uVar6 = param_4->HasRenderPass(7);
            }
            cVar4 = param_4->HasRenderPass(4);
            if (cVar4 == '\0') {
                uVar7 = param_4->HasRenderPass(8);
            }
            bVar8 = (bool)param_4->HasRenderPass(5);
            pCVar3 = local_38;
            pSVar9 =
                (SectionsToRender*)CalculateSectionsToRender(local_38, param_4, bVar5, (bool)uVar6, (bool)uVar7, bVar8);
            puVar21 = pCVar3->m_model;
            bVar5 = puVar21->operator_cast_to_bool();
            if ((bVar5) && (m_ShowCombinedLocations != '\0')) {
                pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)puVar21);
                pMVar10->SetWorldTransform(local_40);
                pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)puVar21);
                pvVar23 = (vector_map*)&pSVar9->field_8;
                if (pSVar9 == (SectionsToRender*)0) {
                    pvVar23 = (vector_map*)0;
                }
                pMVar10->GatherDrawableElements(param_1, param_2, param_4, param_5, pvVar23);
            }
            puVar21 = &local_38->field_344;
            local_58 = pSVar9;
            this_00 = (shared_ptr<graphics::ParticleSystem>*)puVar21->HeapBeginPtr();
            psVar11 = (shared_ptr<graphics::ParticleSystem>*)puVar21->end();
            for (; this_00 != psVar11; this_00 = this_00 + 16) {
                plVar12 = (long*)shared_ptr<graphics::ParticleSystem>::operator->(this_00);
                (**(code**)(*plVar12 + 16))(plVar12, param_1, param_2, param_4, param_5);
            }
            puVar21 = &local_38->field_400;
            psVar13 = (shared_ptr<graphics::ModularParticleSystem>*)puVar21->HeapBeginPtr();
            psVar14 = (shared_ptr<graphics::ModularParticleSystem>*)puVar21->end();
            for (; psVar13 != psVar14; psVar13 = psVar13 + 16) {
                pMVar15 = (ModularParticleSystem*)shared_ptr<graphics::ModularParticleSystem>::operator->(psVar13);
                plVar12 = (long*)pMVar15->GetDrawable();
                (**(code**)(*plVar12 + 16))(plVar12, param_1, param_2, param_4, param_5);
            }
            puVar21 = &local_38->field_432;
            plVar12 = (long*)puVar21->HeapBeginPtr();
            local_60 = (long*)puVar21->end();
            pSVar9 = local_58;
            if (plVar12 != local_60) {
                do {
                    if ((pSVar9 == (SectionsToRender*)0) ||
                        (cVar4 = pSVar9->IsHidden((BuildCombinedLocationResult_GroupSection*)*plVar12, 255),
                         cVar4 == '\0')) {
                        lVar18 = *plVar12;
                        plVar16 = (long*)shared_ptr<CombinedLocationSection>::operator->(
                            (shared_ptr<CombinedLocationSection>*)(lVar18 + 160));
                        local_38 = (CombinedLocation*)(**(code**)(*plVar16 + 328))(plVar16);
                        local_40 = (Matrix44T*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)local_38);
                        this_01 = (Entity*)shared_ptr<CombinedLocationSection>::operator->(
                            (shared_ptr<CombinedLocationSection>*)(lVar18 + 160));
                        this_02 = (GraphNode*)this_01->GetNode();
                        uVar17 = this_02->GetWorldTransformationMatrix();
                        uVar6 = ((*plVar12 + 88))->GetRot();
                        LocType::GetLocationWorldMatrix(&local_a8, local_40, uVar17, uVar6);
                        this_06 = (Matrix44T*)(plVar12 + 1);
                        local_68 = plVar12;
                        lVar18 = this_06->size();
                        if (lVar18 != 0) {
                            uVar22 = 0;
                            local_40 = this_06;
                            do {
                                psVar13 = (shared_ptr<graphics::ModularParticleSystem>*)eastl::vector<
                                    CombinedLocation::VFXData,
                                    eastl::fixed_vector_allocator<32ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::
                                operator[]((vector<CombinedLocation::VFXData,
                                                   eastl::fixed_vector_allocator<32ul, 2ul, 8ul, 0ul, true,
                                                                                 eastl::allocator>>*)this_06,
                                           uVar22);
                                this_03 = (VFXAttachmentInfo*)shared_ptr<graphics::VFXAttachmentInfo>::operator->(
                                    (shared_ptr<graphics::VFXAttachmentInfo>*)(psVar13 + 16));
                                this_04 = (ObjType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)local_38);
                                this_05 = (Array<graphics::VFXAttachmentInfo::RawData, eastl::allocator>*)
                                              this_04->GetOffset2D();
                                pRVar19 =
                                    (RawData*)Array<graphics::VFXAttachmentInfo::RawData, eastl::allocator>::operator[](
                                        this_05, uVar22);
                                this_03->Update(pRVar19, &local_a8);
                                this_06 = local_40;
                                pMVar15 =
                                    (ModularParticleSystem*)shared_ptr<graphics::ModularParticleSystem>::operator->(
                                        psVar13);
                                plVar12 = (long*)pMVar15->GetDrawable();
                                (**(code**)(*plVar12 + 16))(plVar12, param_1, param_2, param_4, param_5);
                                uVar22 = uVar22 + 1;
                                uVar20 = this_06->size();
                            } while (uVar22 < uVar20);
                        }
                        plVar12 = local_68;
                        pSVar9 = local_58;
                    }
                    plVar12 = plVar12 + 14;
                } while (plVar12 != local_60);
            }
        }
    }

    // 0x100447ec0, 96 bytes, placed by class name
    // CombinedLocation::FilterRenderPasses(graphics::SceneViewData const&) const
    undefined8 CombinedLocation::FilterRenderPasses(SceneViewData* param_1) {
        char cVar1;
        byte bVar2;

        cVar1 = param_1->HasShadowPass();
        if (((cVar1 == '\0') || ((field_224 != false && (bVar2 = GetNumTilesPerRow(), bVar2 < 3)))) &&
            ((cVar1 = param_1->HasRenderPass(2), cVar1 == '\0' || (field_225 == false)))) {
            return 1;
        }
        return 0;
    }

    // 0x100447f20, 432 bytes, placed by class name
    // CombinedLocation::CalculateSectionsToRender(graphics::SceneViewData const&, bool, bool, bool, bool)
    SectionsToRender* CombinedLocation::CalculateSectionsToRender(SceneViewData* param_1, bool param_2, bool param_3,
                                                                  bool param_4, bool param_5) {
        char cVar1;
        byte bVar2;
        Minimap* this_00;
        shared_ptr<World>* this_01;
        World* pWVar3;
        bool bVar4;
        SectionsToRender* this_02;
        int local_34;

        if (((param_2 != param_3) != param_4) == param_5) {
            /* WARNING: Subroutine does not return */
            LogAssert("shadowMapPass ^ waterReflectionPass ^ forwardLightingPass ^ minimapPass",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/CombinedLocation.cpp",
                      1097, (char*)0);
        }
        local_34 = 4;
        if (param_5) {
            cVar1 = param_1->HasRenderPass(5);
            local_34 = 0;
            if (cVar1 != '\0') {
                this_00 = (Minimap*)param_1->GetRenderPass(5);
                local_34 = this_00->GetLevel();
            }
        }
        if ((param_2) || (param_3)) {
            this_02 = (SectionsToRender*)&field_552;
            bVar4 = true;
        } else {
            if (param_5) {
                this_02 = (SectionsToRender*)&field_600;
            } else {
                if (!param_4) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/entities/CombinedLocation.cpp",
                                    1131, "No pass defined here");
                }
                this_02 = (SectionsToRender*)&field_504;
            }
            bVar4 = param_5;
        }
        this_01 = (shared_ptr<World>*)GetWorld();
        if (bVar4 == false) {
            pWVar3 = (World*)shared_ptr<World>::operator->(this_01);
            local_34 = pWVar3->GetMaxRenderLevel();
        }
        if (param_4) {
            pWVar3 = (World*)shared_ptr<World>::operator->(this_01);
            cVar1 = pWVar3->IsRemoveRoofSelective();
            if (cVar1 != '\0') {
                pWVar3 = (World*)shared_ptr<World>::operator*(this_01);
                SelectiveRemoveRoofHideUnhide(this, pWVar3, this_02);
                goto LAB_10044804e;
            }
        }
        if (!param_2) {
            NonSelectiveRemoveRoofHideUnhide(this, local_34, param_4, this_02);
        }
    LAB_10044804e:
        pWVar3 = (World*)shared_ptr<World>::operator->(this_01);
        bVar2 = pWVar3->IsGroundDecorHidden();
        UpdateGroundDecorVisibility(this, this_02, (bool)(bVar2 | param_5));
        DebugShowPrimitiveCombinedLocationSections(this, param_4);
        cVar1 = this_02->CheckIfActiveSectionsChangedFromDefault();
        if (((cVar1 == '\0') && (*(char*)&this_02->field_0 == '\0')) &&
            (*(char*)((long)&this_02->field_0 + 1) == '\0')) {
            this_02 = (SectionsToRender*)0;
        }
        return this_02;
    }

    // 0x100448120, 608 bytes, placed by class name
    // CombinedLocation::SelectiveRemoveRoofHideUnhide(World&, CombinedLocation::SectionsToRender*)
    void CombinedLocation::SelectiveRemoveRoofHideUnhide(World* param_1, SectionsToRender* param_2) {
        uint uVar1;
        int iVar2;
        char cVar3;
        byte bVar4;
        undefined1 uVar5;
        bool bVar6;
        RemoveRoof* this_00;
        BuildCombinedLocationResult_GroupSection* pBVar7;
        BuildCombinedLocationResult_GroupSection* pBVar8;
        CombinedLocationSection* pCVar9;
        bool bVar10;
        int iVar11;
        uint uVar12;
        uint uVar13;

        this_00 = (RemoveRoof*)param_1->GetRemoveRoof();
        cVar3 = this_00->AnyRoofRemoved();
        if ((cVar3 != '\0') || (*(char*)&param_2->field_0 != '\0')) {
            *(undefined1*)&param_2->field_0 = 0;
            pBVar7 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->HeapBeginPtr();
            pBVar8 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->end();
            if (pBVar7 == pBVar8) {
                bVar10 = false;
            } else {
                bVar10 = false;
                do {
                    pBVar7->field_176 = 0;
                    if (*(int*)&pBVar7->field_4 == -1) {
                        bVar4 = 0;
                    } else {
                        uVar12 = *(uint*)((long)&pBVar7->field_16 + 4);
                        uVar1 = *(uint*)&pBVar7->field_24;
                        bVar4 = this_00->IsRoofRemoved(*(int*)&pBVar7->field_4, uVar12, uVar1);
                        if (bVar4 == 0) {
                            uVar5 = pBVar7->field_88->GetShape();
                            cVar3 = LocShapes::IsCentrePieceShape(uVar5);
                            if ((cVar3 != '\0') && (((iVar11 = *(int*)&pBVar7->field_40,
                                                      1 < iVar11 || (1 < *(int*)((long)&pBVar7->field_40 + 4))) &&
                                                     (0 < iVar11)))) {
                                iVar2 = *(int*)((long)&pBVar7->field_40 + 4);
                                iVar11 = iVar11 + uVar12;
                                do {
                                    uVar13 = uVar1;
                                    if (0 < iVar2) {
                                        do {
                                            cVar3 = this_00->IsRoofRemoved(*(int*)&pBVar7->field_4, uVar12, uVar13);
                                            if (cVar3 != '\0') {
                                                pBVar7->field_176 = 2;
                                                bVar4 = 1;
                                                break;
                                            }
                                            uVar13 = uVar13 + 1;
                                        } while ((int)uVar13 < (int)(iVar2 + uVar1));
                                    }
                                    uVar12 = uVar12 + 1;
                                } while ((int)uVar12 < iVar11);
                            }
                        } else {
                            pBVar7->field_176 = 1;
                        }
                    }
                    if ((bVar4 & 1) == 0) {
                        cVar3 = param_2->UnhideSection(pBVar7, '\x02');
                        if (cVar3 != '\0') {
                            bVar6 = (&pBVar7->field_160)->operator_cast_to_bool();
                            bVar10 = true;
                            if (bVar6) {
                                pCVar9 = (CombinedLocationSection*)shared_ptr<CombinedLocationSection>::operator->(
                                    (shared_ptr<CombinedLocationSection>*)&pBVar7->field_160);
                                pCVar9->DeactivateRoofRemove();
                            }
                        }
                    } else {
                        *(undefined1*)&param_2->field_0 = 1;
                        cVar3 = param_2->HideSection(pBVar7, '\x02');
                        if (cVar3 != '\0') {
                            bVar6 = (&pBVar7->field_160)->operator_cast_to_bool();
                            bVar10 = true;
                            if (bVar6) {
                                pCVar9 = (CombinedLocationSection*)shared_ptr<CombinedLocationSection>::operator->(
                                    (shared_ptr<CombinedLocationSection>*)&pBVar7->field_160);
                                pCVar9->ActivateRoofRemove();
                            }
                        }
                    }
                    pBVar7 = pBVar7 + 1;
                } while (pBVar7 != pBVar8);
            }
            if (bVar10) {
                param_2->field_2 = 1;
            }
        }
    }

    // 0x100448380, 608 bytes, placed by class name
    // CombinedLocation::NonSelectiveRemoveRoofHideUnhide(int, bool, CombinedLocation::SectionsToRender*)
    void CombinedLocation::NonSelectiveRemoveRoofHideUnhide(int param_1, bool param_2, SectionsToRender* param_3) {
        byte bVar1;
        undefined1 uVar2;
        char cVar3;
        bool bVar4;
        uint uVar5;
        uint uVar6;
        shared_ptr<World>* this_00;
        World* this_01;
        LinkMap* this_02;
        BuildCombinedLocationResult_GroupSection* pBVar7;
        BuildCombinedLocationResult_GroupSection* pBVar8;
        CombinedLocationSection* pCVar9;
        bool bVar10;
        int iVar11;
        int iVar12;

        if ((param_1 != 4) || (*(char*)&param_3->field_0 != '\0')) {
            this_00 = (shared_ptr<World>*)GetWorld();
            this_01 = (World*)shared_ptr<World>::operator->(this_00);
            this_02 = (LinkMap*)this_01->GetLinkMap();
            pBVar7 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->HeapBeginPtr();
            pBVar8 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->end();
            if (pBVar7 == pBVar8) {
                bVar10 = false;
            } else {
                bVar10 = false;
                do {
                    bVar1 = LinkConstants::IsAffectedByMaxRenderLevel(*(int*)&pBVar7->field_4,
                                                                      *(int*)((long)&pBVar7->field_8 + 4), param_1);
                    uVar5 = 0;
                    if (bVar1 != 0) {
                        uVar5 = this_02->GetTileLinkZero(*(int*)&pBVar7->field_4, *(int*)((long)&pBVar7->field_16 + 4),
                                                         *(int*)&pBVar7->field_24);
                        uVar2 = pBVar7->field_88->GetShape();
                        cVar3 = LocShapes::IsCentrePieceShape(uVar2);
                        if ((cVar3 != '\0') && (0 < *(int*)&pBVar7->field_40)) {
                            iVar11 = *(int*)((long)&pBVar7->field_16 + 4);
                            do {
                                if (0 < *(int*)((long)&pBVar7->field_40 + 4)) {
                                    iVar12 = *(int*)&pBVar7->field_24;
                                    do {
                                        uVar6 = this_02->GetTileLinkZero(*(int*)&pBVar7->field_4, iVar11, iVar12);
                                        uVar5 = uVar5 & uVar6;
                                        iVar12 = iVar12 + 1;
                                    } while (iVar12 < *(int*)((long)&pBVar7->field_40 + 4) + *(int*)&pBVar7->field_24);
                                }
                                iVar11 = iVar11 + 1;
                            } while (iVar11 < *(int*)&pBVar7->field_40 + *(int*)((long)&pBVar7->field_16 + 4));
                        }
                    }
                    if (((uVar5 & 8) == 0 & bVar1) == 1) {
                        pBVar7->field_176 = 1;
                        cVar3 = param_3->HideSection(pBVar7, '\x02');
                        if (cVar3 != '\0') {
                            *(undefined1*)&param_3->field_0 = 1;
                            bVar10 = true;
                            if (param_2) {
                                bVar4 = (&pBVar7->field_160)->operator_cast_to_bool();
                                if (bVar4) {
                                    pCVar9 = (CombinedLocationSection*)shared_ptr<CombinedLocationSection>::operator->(
                                        (shared_ptr<CombinedLocationSection>*)&pBVar7->field_160);
                                    pCVar9->ActivateRoofRemove();
                                }
                            }
                        }
                    } else {
                        pBVar7->field_176 = 0;
                        cVar3 = param_3->UnhideSection(pBVar7, '\x02');
                        if ((cVar3 != '\0') && (bVar10 = true, param_2)) {
                            bVar4 = (&pBVar7->field_160)->operator_cast_to_bool();
                            bVar10 = true;
                            if (bVar4) {
                                pCVar9 = (CombinedLocationSection*)shared_ptr<CombinedLocationSection>::operator->(
                                    (shared_ptr<CombinedLocationSection>*)&pBVar7->field_160);
                                pCVar9->DeactivateRoofRemove();
                            }
                        }
                    }
                    pBVar7 = pBVar7 + 1;
                } while (pBVar7 != pBVar8);
            }
            if (param_1 == 4) {
                *(undefined1*)&param_3->field_0 = 0;
            }
            if (bVar10) {
                param_3->field_2 = 1;
            }
        }
    }

    // 0x1004485e0, 160 bytes, placed by class name
    // CombinedLocation::UpdateGroundDecorVisibility(CombinedLocation::SectionsToRender&, bool)
    void CombinedLocation::UpdateGroundDecorVisibility(SectionsToRender* param_1, bool param_2) {
        BuildCombinedLocationResult_GroupSection* pBVar1;
        BuildCombinedLocationResult_GroupSection* pBVar2;

        if ((bool)*(char*)((long)&param_1->field_0 + 1) != param_2) {
            pBVar1 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->HeapBeginPtr();
            pBVar2 = (BuildCombinedLocationResult_GroupSection*)(&field_232)->end();
            for (; pBVar1 != pBVar2; pBVar1 = pBVar1 + 1) {
                if (pBVar1->field_188 != '\0') {
                    if (param_2) {
                        HideSection(this, param_1, pBVar1, '\x04');
                    } else {
                        UnhideSection(this, param_1, pBVar1, '\x04');
                    }
                }
            }
            *(bool*)((long)&param_1->field_0 + 1) = param_2;
        }
    }

    // 0x100448680, 2848 bytes, placed by class name
    // CombinedLocation::DebugShowPrimitiveCombinedLocationSections(bool)
    void CombinedLocation::DebugShowPrimitiveCombinedLocationSections(bool param_1) {
        LocData* this_00;
        undefined1* puVar1;
        short sVar2;
        Layout* this_01;
        CombinedLocation* this_02;
        char cVar3;
        bool bVar4;
        undefined1 uVar5;
        int iVar6;
        int iVar7;
        undefined4 uVar8;
        long lVar9;
        long lVar10;
        MapSquarePointLights* this_03;
        EntityHighlightState* this_04;
        Entity* pEVar11;
        PositionPoint* pPVar12;
        GraphNode* this_05;
        long* plVar13;
        int* piVar14;
        vector* pvVar15;
        float* pfVar16;
        undefined4* puVar17;
        shared_ptr* psVar18;
        GeometryBatch* this_06;
        char* pcVar19;
        shared_ptr<World>* psVar20;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar21;
        SceneManager* this_07;
        RT7Core* this_08;
        Minimap* this_09;
        AABB* pAVar22;
        undefined8 uVar23;
        shared_ptr* this_10;
        BillboardBatchInstance* this_11;
        Vector3T* pVVar24;
        LocType* this_12;
        SceneViewData* this_13;
        World* pWVar25;
        Matrix44T* pMVar26;
        Matrix44T* pMVar27;
        undefined7 in_register_00000031;
        bool bVar28;
        bool bVar29;
        float fVar30;
        allocator local_338[8];
        undefined1 local_330[40];
        int* local_308;
        Vector3T<int> local_300[16];
        Vector2T<int>* local_2f0;
        Layout* local_2e8;
        CombinedLocation* local_2e0;
        PositionPoint* local_2d8;
        SideBarData local_2d0[8];
        PositionPoint local_268[4];
        long local_38;

        pPVar12 = (PositionPoint*)CONCAT71(in_register_00000031, param_1);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_2e0 = this;
        if (((m_debugPrimitiveInactiveSection != 0 || m_debugPrimitiveActiveSection != 0) ||
             ((m_debugPrimitiveSectionMouseoverEnabled != '\0' && (cVar3 = PickTestDebugCursor(), cVar3 != '\0')))) &&
            (param_1)) {
            if (m_debugPrimitiveAABBOnHighlight != '\0') {
                puVar1 = &local_2e0->field_232;
                lVar9 = puVar1->HeapBeginPtr();
                lVar10 = puVar1->end();
                if (lVar9 != lVar10) {
                    do {
                        psVar18 = (shared_ptr*)(lVar9 + 160);
                        bVar4 = shared_ptr::operator_cast_to_bool(psVar18);
                        if (bVar4) {
                            this_03 = (MapSquarePointLights*)shared_ptr<CombinedLocationSection>::operator->(
                                (shared_ptr<CombinedLocationSection>*)psVar18);
                            this_04 = (EntityHighlightState*)this_03->GetLightSourcesDynamic();
                            fVar30 = (float)this_04->GetAlpha();
                            if (0.0 < fVar30) {
                                new (local_268) math::AABB();
                                if (*(char*)(lVar9 + 80) == '\0') {
                                    math::AABB::operator=((AABB*)local_268, (AABB*)(lVar9 + 48));
                                    this_05 = (GraphNode*)local_2e0->GetNode();
                                    pPVar12 = (PositionPoint*)this_05->GetWorldTransformationMatrix();
                                    local_268->Transform(pPVar12);
                                } else {
                                    pEVar11 = (Entity*)shared_ptr<CombinedLocationSection>::operator->(
                                        (shared_ptr<CombinedLocationSection>*)psVar18);
                                    pPVar12 = (PositionPoint*)pEVar11->GetWorldAABB();
                                    math::AABB::operator=((AABB*)local_268, (AABB*)pPVar12);
                                }
                                plVar13 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                if (plVar13 != (long*)0) {
                                    oldscape::sidebars::SideBarData::SideBarData(local_2d0, 301989887, 2);
                                    pPVar12 = local_268;
                                    (**(code**)(*plVar13 + 72))(plVar13, local_268, local_2d0);
                                }
                            }
                        }
                        lVar9 = lVar9 + 192;
                    } while (lVar9 != lVar10);
                }
            }
            puVar1 = &local_2e0->field_232;
            piVar14 = (int*)puVar1->HeapBeginPtr();
            local_308 = (int*)puVar1->end();
            if (piVar14 != local_308) {
                do {
                    bVar28 = m_debugPrimitiveInactiveSection == (*(byte*)(piVar14 + 20) ^ 1);
                    bVar29 = m_debugPrimitiveActiveSection == *(byte*)(piVar14 + 20);
                    bVar4 = bVar29 || bVar28;
                    new ((local_330 + 8)) math::AABB();
                    this_02 = local_2e0;
                    if (m_debugPrimitiveSectionMouseoverEnabled == '\0') {
                    LAB_1004488b6:
                        uVar8 = 0;
                        if (bVar4) {
                        LAB_1004488bd:
                            local_2e8 = (Layout*)CONCAT44(local_2e8._4_4_, uVar8);
                            new (local_268) eastl::fixed_string<char, 512, true, eastl::allocator>();
                            math::Vector3T<int>::Vector3T(local_300);
                            local_2d8._0_4_ = ((float)piVar14[11] * 0.5 + (float)piVar14[5]) * 128.0;
                            pvVar15 = local_300->SSOBeginPtr(pPVar12);
                            *(float*)pvVar15 = local_2d8._0_4_;
                            local_2d8._0_4_ = ((float)piVar14[10] * 0.5 + (float)piVar14[6]) * 128.0;
                            pfVar16 = (float*)local_300->second();
                            *pfVar16 = local_2d8._0_4_;
                            this_00 = (LocData*)(piVar14 + 22);
                            cVar3 = this_00->GetShape();
                            sVar2 = *(short*)((long)piVar14 + (ulong)(cVar3 == '\x16') * 2 + 16);
                            local_2f0 = (Vector2T<int>*)(piVar14 + 7);
                            pfVar16 = (float*)((piVar14 + 7))->y();
                            local_2d8 = (PositionPoint*)CONCAT44(local_2d8._4_4_, (float)(int)sVar2 + *pfVar16);
                            puVar17 = (undefined4*)local_300->y();
                            *puVar17 = local_2d8._0_4_;
                            eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                sprintf((char*)local_268, "[COMBINEDLOCATION %p] [%d,%d,%d] ", local_2e0,
                                        (ulong)(uint)piVar14[1], (ulong)(piVar14[5] & 63), (ulong)(piVar14[6] & 63));
                            if (piVar14[2] != piVar14[1]) {
                                eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                    append_sprintf((char*)local_268, "(lvl %d) ");
                            }
                            eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                append_sprintf((char*)local_268, "%d", (ulong)(uint)piVar14[21]);
                            if (piVar14[21] != -1) {
                                psVar18 = ConfigProvider::GetConfig<LocType>(*(ConfigProvider**)&local_2e0->field_216,
                                                                             piVar14[21], (DataStatus**)0);
                                bVar4 = shared_ptr::operator_cast_to_bool(psVar18);
                                if (bVar4) {
                                    this_06 =
                                        (GeometryBatch*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)psVar18);
                                    this_06->GetVertexDataBufferPos();
                                    pcVar19 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                    if ((pcVar19 != (char*)0) && (*pcVar19 != '\0')) {
                                        eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                      1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                            append_sprintf((char*)local_268, "(%s)", pcVar19);
                                    }
                                } else {
                                    local_268->append("?");
                                }
                            }
                            uVar5 = this_00->GetShape();
                            uVar23 = LocShapes::GetShapeDescription(uVar5);
                            eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                append_sprintf((char*)local_268, "\n%s", uVar23);
                            if (sVar2 != 0) {
                                eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                    append_sprintf((char*)local_268, " [Height=%d]", (ulong)(uint)(int)sVar2);
                            }
                            if (*piVar14 != 0) {
                                eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                    append_sprintf((char*)local_268, " [eid:%d]");
                            }
                            if (piVar14[44] != 0) {
                                pcVar19 = "";
                                if (piVar14[44] == 2) {
                                    pcVar19 = " CP";
                                }
                                eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                    append_sprintf((char*)local_268, " [-ROOF%s]", pcVar19);
                            }
                            uVar5 = this_00->GetShape();
                            cVar3 = LocShapes::IsCentrePieceShape(uVar5);
                            if (cVar3 != '\0') {
                                psVar18 = (shared_ptr*)(piVar14 + 36);
                                bVar4 = shared_ptr::operator_cast_to_bool(psVar18);
                                this_10 = psVar18;
                                if (!bVar4) {
                                    this_10 = ConfigProvider::GetConfig<LocType>(
                                        *(ConfigProvider**)&local_2e0->field_216, piVar14[21], (DataStatus**)0);
                                }
                                bVar4 = shared_ptr::operator_cast_to_bool(this_10);
                                if (bVar4) {
                                    shared_ptr<LocType>::operator=((shared_ptr<LocType>*)psVar18, this_10);
                                    this_11 = (BillboardBatchInstance*)shared_ptr<LocType>::operator->(
                                        (shared_ptr<LocType>*)this_10);
                                    pVVar24 = (Vector3T*)this_11->GetApproxMaterialInfoList();
                                    bVar4 = math::operator!=(pVVar24, (Vector3T*)PTR_ONE_100ee66d8);
                                    local_2d8 = (PositionPoint*)4309400246;
                                    if (bVar4) {
                                        new (local_2d0) eastl::fixed_string<char, 64, true, eastl::allocator>();
                                        pcVar19 = ToText<64, true>((fixed_string*)local_2d0, pVVar24);
                                        eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                      1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                            append_sprintf((char*)local_268, "%sResize=%s", "\nLocType: ", pcVar19);
                                        /* WARNING: Subroutine does not return */
                                        local_2d0->~fixed_string();
                                    }
                                    this_12 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_10);
                                    pVVar24 = (Vector3T*)this_12->GetOffset();
                                    bVar4 = math::operator!=(pVVar24, (Vector3T*)PTR_ZERO_100ee66e8);
                                    if (bVar4) {
                                        new (local_2d0) eastl::fixed_string<char, 64, true, eastl::allocator>();
                                        pcVar19 = ToText<64, true>((fixed_string*)local_2d0, pVVar24);
                                        eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                      1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                            append_sprintf((char*)local_268, "%sOffset=%s", local_2d8, pcVar19);
                                        /* WARNING: Subroutine does not return */
                                        local_2d0->~fixed_string();
                                    }
                                    this_13 =
                                        (SceneViewData*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_10);
                                    pVVar24 = (Vector3T*)this_13->GetStippleNearClipParams();
                                    bVar4 = math::operator!=(pVVar24, (Vector3T*)PTR_ZERO_100ee66e8);
                                    if (bVar4) {
                                        new (local_2d0) eastl::fixed_string<char, 64, true, eastl::allocator>();
                                        pcVar19 = ToText<64, true>((fixed_string*)local_2d0, pVVar24);
                                        eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                      1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                                            append_sprintf((char*)local_268, "%sPost-Offset=%s", local_2d8, pcVar19);
                                        /* WARNING: Subroutine does not return */
                                        local_2d0->~fixed_string();
                                    }
                                }
                                cVar3 = this_00->GetRot();
                                if (cVar3 != '\0') {
                                    new (local_2d0) eastl::fixed_string<char, 16, true, eastl::allocator>();
                                    uVar5 = this_00->GetRot();
                                    pcVar19 = ToText<16, true>(local_2d0, uVar5);
                                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                        append_sprintf((char*)local_268, "%sRotation90=%s", "\nMSL: ", pcVar19);
                                    /* WARNING: Subroutine does not return */
                                    local_2d0->~fixed_string();
                                }
                                bVar4 = math::operator!=((Vector3T*)local_2f0, (Vector3T*)PTR_ZERO_100ee66e8);
                                if (bVar4) {
                                    new (local_2d0) eastl::fixed_string<char, 64, true, eastl::allocator>();
                                    pcVar19 = ToText<64, true>((fixed_string*)local_2d0, (Vector3T*)local_2f0);
                                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                        append_sprintf((char*)local_268, "%sOffsetFine=%s", "\nMSL: ", pcVar19);
                                    /* WARNING: Subroutine does not return */
                                    local_2d0->~fixed_string();
                                }
                                bVar4 = math::operator!=((Vector3T*)(piVar14 + 31), (Vector3T*)PTR_ONE_100ee66d8);
                                if (bVar4) {
                                    new (local_2d0) eastl::fixed_string<char, 16, true, eastl::allocator>();
                                    pcVar19 = ToText<16, true>((fixed_string*)local_2d0, (Vector3T*)(piVar14 + 31));
                                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                        append_sprintf((char*)local_268, "%sScale=%s", "\nMSL: ", pcVar19);
                                    /* WARNING: Subroutine does not return */
                                    local_2d0->~fixed_string();
                                }
                                new (local_2d0) math::QuaternionT<float>();
                                cVar3 = math::QuaternionT<float>::operator!=((QuaternionT<float>*)(piVar14 + 23),
                                                                             (QuaternionT*)local_2d0);
                                if (cVar3 != '\0') {
                                    new (local_2d0) eastl::fixed_string<char, 16, true, eastl::allocator>();
                                    pcVar19 = ToText<16, true>((fixed_string*)local_2d0, (QuaternionT*)(piVar14 + 23));
                                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                        append_sprintf((char*)local_268, "%sRotation=%s", "\nMSL: ", pcVar19);
                                    /* WARNING: Subroutine does not return */
                                    local_2d0->~fixed_string();
                                }
                            }
                            plVar13 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                            if (plVar13 != (long*)0) {
                                pcVar19 = (char*)
                                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::begin();
                                eastl::allocator::allocator(local_338, "EASTL basic_string");
                                new (local_2d0) eastl::string(pcVar19, local_338);
                                iVar6 = -65536;
                                if (piVar14[44] == 0) {
                                    iVar6 = -8323073;
                                }
                                new (local_330) oldscape::sidebars::SideBarData(iVar6, 1);
                                (**(code**)(*plVar13 + 136))(plVar13, local_300, local_2d0, (SideBarData*)local_330);
                                local_2d0->~basic_string();
                            }
                            if (((char)local_2e8 != '\0') &&
                                (plVar13 = (long*)DebugPrimitiveCollectorBasic::GetCollector(""),
                                 plVar13 != (long*)0)) {
                                oldscape::sidebars::SideBarData::SideBarData(local_2d0, -12566273, 2);
                                (**(code**)(*plVar13 + 72))(plVar13, local_330 + 8, local_2d0);
                            }
                            /* WARNING: Subroutine does not return */
                            local_268->~fixed_string();
                        }
                    } else {
                        if (piVar14[44] != 0) {
                            bVar4 = false;
                            goto LAB_1004488b6;
                        }
                        psVar20 = (shared_ptr<World>*)local_2e0->GetWorld();
                        phVar21 =
                            (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                       eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                       eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                shared_ptr<World>::operator->(psVar20);
                        this_07 = (SceneManager*)eastl::hashtable<
                            long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>::size(phVar21);
                        psVar20 = (shared_ptr<World>*)this_02->GetWorld();
                        phVar21 =
                            (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                       eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                       eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                                shared_ptr<World>::operator->(psVar20);
                        this_08 = (RT7Core*)eastl::hashtable<
                            long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>::size(phVar21);
                        local_2e8 = (Layout*)this_08->GetRenderTargetsManager();
                        this_09 = (Minimap*)this_07->GetGameSceneRect();
                        if ((char)piVar14[20] == '\0') {
                            pAVar22 = (AABB*)(piVar14 + 12);
                        } else {
                            pEVar11 = (Entity*)shared_ptr<CombinedLocationSection>::operator->(
                                (shared_ptr<CombinedLocationSection>*)(piVar14 + 40));
                            pAVar22 = (AABB*)pEVar11->GetWorldAABB();
                        }
                        math::AABB::operator=((AABB*)(local_330 + 8), pAVar22);
                        new (local_268) math::Sphere2D();
                        pWVar25 = (World*)shared_ptr<World>::operator->(psVar20);
                        local_2d8 = (PositionPoint*)pWVar25->GetLastCameraViewMatrix();
                        pWVar25 = (World*)shared_ptr<World>::operator->(psVar20);
                        pMVar26 = (Matrix44T*)pWVar25->GetLastCameraProjectionMatrix();
                        pWVar25 = (World*)shared_ptr<World>::operator->(psVar20);
                        pMVar27 = (Matrix44T*)pWVar25->GetLastViewProjectionMatrix();
                        iVar6 = this_09->GetPos();
                        iVar7 = this_09->GetLevel();
                        pPVar12 = local_2d8;
                        local_268->Set(local_2d8, pMVar26, pMVar27, iVar6, iVar7, (AABB*)(local_330 + 8));
                        cVar3 = local_268->Ready();
                        this_01 = local_2e8;
                        if (cVar3 == '\0') {
                            uVar8 = 0;
                            if (bVar29 || bVar28)
                                goto LAB_1004488bd;
                        } else {
                            pvVar15 = eastl::string::Layout::SSOBeginPtr(local_2e8, (type*)pPVar12);
                            fVar30 = *(float*)pvVar15;
                            pfVar16 = (float*)this_01->y();
                            pPVar12 = (PositionPoint*)(ulong)(uint)(int)fVar30;
                            uVar8 = local_268->PointInside((int)fVar30, (int)*pfVar16, 0);
                            if ((char)uVar8 == '\x01' && (!bVar29 && !bVar28)) {
                                if ((m_debugPrimitiveActiveSection & 1) == 0 && m_debugPrimitiveInactiveSection == 0)
                                    goto LAB_1004488bd;
                            } else if ((char)uVar8 != '\0')
                                goto LAB_1004488bd;
                        }
                    }
                    piVar14 = piVar14 + 48;
                } while (piVar14 != local_308);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1004493a0, 240 bytes, placed by class name
    // CombinedLocation::UpdateAudio()
    char CombinedLocation::UpdateAudio() {
        undefined*** this_00;
        int iVar1;
        undefined8 uVar2;
        char cVar3;
        LocationAudioProperties* pLVar5;
        SoundInstance* this_01;
        LocationAudioProperties* this_02;

        this_00 = &field_8;
        cVar3 = this_00->UpdateAudio();
        if (cVar3 != '\0') {
            this_02 = (LocationAudioProperties*)(&field_272)->HeapBeginPtr();
            pLVar5 = (LocationAudioProperties*)(&field_272)->end();
            for (; this_02 != pLVar5; this_02 = this_02 + 1) {
                iVar1 = *(int*)&this_02->field_0;
                if (-1 < iVar1) {
                    this_01 = (SoundInstance*)this_00->GetSoundInstance(iVar1);
                    if (this_01 == (SoundInstance*)0) {
                        uVar2 = this_02->GenerateBackgroundSoundRandomRate();
                        (*(code*)(*this_00)[2])(this_00, iVar1, (int)*(short*)((long)&this_02->field_0 + 4), 1,
                                                (int)(short)this_02->field_8 << 7,
                                                (int)*(short*)((long)&this_02->field_0 + 6) << 7, &this_02->field_60,
                                                18446744073709551615, 15, 1, this_02->field_72, uVar2);
                    } else {
                        if (this_01->IsAudible() == '\0') {
                            this_01->Suspend(0.0);
                        }
                    }
                }
            }
        }
        return cVar3;
    }

    // 0x100449530, 288 bytes, placed by class name
    // CombinedLocation::PickTestSection(CombinedLocationSection const*, graphics::PickingHelper&) const
    undefined8 CombinedLocation::PickTestSection(CombinedLocationSection* param_1, PickingHelper* param_2) {
        bool bVar1;
        int* piVar3;
        int* piVar4;
        CombinedLocationSection* pCVar5;
        GeometryBatchInstance* this_00;
        Matrix44T* pMVar6;
        Model* this_01;
        vector* pvVar7;
        undefined1* this_02;
        undefined8 uVar8;

        this_02 = m_model;
        bVar1 = this_02->operator_cast_to_bool();
        if (bVar1) {
            piVar3 = (int*)(&field_232)->HeapBeginPtr();
            piVar4 = (int*)(&field_232)->end();
            if (piVar3 == piVar4) {
                uVar8 = 0;
            } else {
                uVar8 = 0;
                do {
                    pCVar5 = (CombinedLocationSection*)((piVar3 + 40))->end();
                    if (pCVar5 == param_1) {
                        this_00 = (GeometryBatchInstance*)shared_ptr<graphics::Model>::operator->(
                            (shared_ptr<graphics::Model>*)this_02);
                        pMVar6 = (Matrix44T*)this_00->GetMaterial();
                        this_01 =
                            (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_02);
                        pvVar7 = (vector*)this_01->GetBatchList();
                        bVar1 = (bool)(*(code*)param_1->field_0[16])(param_1);
                        if (param_2->PickTest(pMVar6, pvVar7, false, bVar1, *piVar3) != '\0') {
                            uVar8 = 1;
                        }
                    }
                    piVar3 = piVar3 + 48;
                } while (piVar3 != piVar4);
            }
        } else {
            uVar8 = 0;
        }
        return uVar8;
    }

    // 0x100449650, 192 bytes, placed by class name
    // CombinedLocation::GetMajorityShape() const
    undefined1 CombinedLocation::GetMajorityShape() {
        byte bVar1;
        long lVar3;
        long lVar4;
        int* piVar5;
        int* piVar6;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        undefined8 local_38;
        undefined8 uStack_30;
        undefined4 local_28;

        local_38 = 0;
        uStack_30 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_28 = 0;
        lVar3 = (&field_232)->HeapBeginPtr();
        lVar4 = (&field_232)->end();
        if (lVar3 != lVar4) {
            do {
                bVar1 = ((lVar3 + 88))->GetShape();
                piVar5 = (int*)std::array<int, 25ul>::operator[]((array<int, 25ul>*)&local_88, (ulong)bVar1);
                *piVar5 = *piVar5 + 1;
                lVar3 = lVar3 + 192;
            } while (lVar3 != lVar4);
        }
        piVar5 = (int*)local_88.begin();
        piVar6 = (int*)local_88.end();
        piVar6 = std::max_element<int*>(piVar5, piVar6);
        return std::distance<int*>(piVar5, piVar6);
    }

} // namespace jag::game
