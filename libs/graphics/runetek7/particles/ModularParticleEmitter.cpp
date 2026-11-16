// libs/graphics/runetek7/particles/ModularParticleEmitter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ModularParticleEmitter.h"

namespace jag::graphics {
    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    ModularParticleEmitter::GetParticles() const;

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    ModularParticleEmitter::GetEmitterTemplate() const;

    // 0x1001c21e0: the linker folded this into oldscape::MutationTracked<EffectList>::IsDirty() const, which has identical code
    ModularParticleEmitter::IsEmitting() const;

    // 0x1003c2100: the linker folded this into game::LocationContainer::GetDynamicMultiLocations() const, which has identical code
    ModularParticleEmitter::GetAABB() const;

    // 0x10069f0d0: the linker folded this into ui::SpriteData::SetSpriteAlpha(unsigned char), which has identical code
    ModularParticleEmitter::SetEmitting(bool);

    // 0x1008286c0, 144 bytes, base-object constructor, placed by class name and debug map
    // ModularParticleEmitter::ModularParticleEmitter(ModularParticleEmitterTemplate const&)
    void ModularParticleEmitter::ModularParticleEmitter(ModularParticleEmitterTemplate* param_1) {
        ushort uVar1;
        uint uVar2;

        field_0 = param_1;
        m_atlasMaterialSettingsSlotXY = 0;
        new (field_12) callstack::Callstack();
        field_12[4] = 1;
        uVar2 = param_1->GetEmissiveScale();
        *(uint*)(field_12 + 8) = uVar2 ^ 2147483648;
        new ((field_12 + 12)) ParticleData();
        new (&field_288) math::AABB();
        uVar1 = param_1->GetMaxActiveParticlesEstimate();
        ((field_12 + 12), (ulong)uVar1)->Reserve();
    }

    // 0x1008287d0, 16 bytes, complete-object constructor, placed by class name
    // ModularParticleEmitter::ModularParticleEmitter(ModularParticleEmitterTemplate const&): jumps straight to the base-object constructor

    // 0x1008287e0, 832 bytes, placed by class name
    // ModularParticleEmitter::Update(float, math::Matrix44T<float> const&, math::Matrix44T<float> const&, bool)
    undefined1 ModularParticleEmitter::Update(float param_1, Matrix44T* param_2, Matrix44T* param_3, bool param_4) {
        undefined1* this_00;
        undefined1* this_01;
        ModularParticleEmitter* this_02;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* this_03;
        char cVar1;
        long lVar2;
        Vector3T<float>* this_04;
        type* ptVar3;
        float* pfVar4;
        float* pfVar5;
        Matrix44T* pMVar6;
        Layout* pLVar7;
        vector* pvVar8;
        undefined7 in_register_00000009;
        ParticleData* pPVar9;
        type* ptVar10;
        float fVar11;
        float fVar12;
        float extraout_XMM0_Da;
        undefined1 local_118[32];
        undefined1 local_f8[64];
        math local_b8;
        ParticleData* local_58;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* local_50;
        Matrix44T* local_48;
        vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>* local_40;
        float local_34;

        local_b8.field_88._4_4_ = (undefined4)CONCAT71(in_register_00000009, param_4);
        local_58 = (ParticleData*)(field_12 + 12);
        local_50 =
            (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)&field_144;
        local_b8.field_72 = param_2;
        local_b8.field_80 = this;
        local_48 = param_3;
        local_34 = param_1;
        lVar2 = local_58->GetCount();
        if (lVar2 != 0) {
            this_00 = &(local_b8.field_80)->field_48;
            this_01 = &(local_b8.field_80)->field_72;
            local_40 =
                (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&(local_b8.field_80)
                    ->field_192;
            ptVar10 = (type*)0;
            do {
                pfVar4 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                    (vector<float, SafeBucketAllocatorEASTL>*)this_00, (ulong)ptVar10);
                pfVar5 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                    (vector<float, SafeBucketAllocatorEASTL>*)this_01, (ulong)ptVar10);
                pPVar9 = local_58;
                fVar11 = *pfVar5 * local_34 + *pfVar4;
                *pfVar4 = fVar11;
                if (fVar11 < 1.0) {
                    ptVar3 = ptVar10;
                    fVar11 = local_34;
                    pLVar7 = (Layout*)eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>,
                                                    SafeBucketAllocatorEASTL>::operator[](local_40, (ulong)ptVar10);
                    pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, ptVar3);
                    local_b8._0_8_ = math::operator*((Vector3T*)pvVar8, local_34);
                    local_b8.field_8 = fVar11;
                    eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                  SafeBucketAllocatorEASTL>::operator[](local_50, (ulong)ptVar10);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    this_04 = (Vector3T<float>*)local_f8->HeapBeginPtr();
                    math::Vector3T<float>::operator+=(this_04, (Vector3T*)(local_f8 + 64));
                    local_f8->~SplatOp();
                    pPVar9 = local_58;
                } else {
                    local_58->Remove((ulong)ptVar10);
                    ptVar10 = ptVar10 + -1;
                }
                ptVar10 = ptVar10 + 1;
                ptVar3 = (type*)pPVar9->GetCount();
            } while (ptVar10 < ptVar3);
        }
        this_02 = local_b8.field_80;
        *(float*)((local_b8.field_80)->field_12 + 8) = *(float*)((local_b8.field_80)->field_12 + 8) + local_34;
        pMVar6 = (Matrix44T*)((local_b8.field_80)->field_0)->GetOrigin();
        math::operator*((math*)(local_f8 + 64), pMVar6, local_b8.field_72);
        pMVar6 = (Matrix44T*)this_02->field_0->GetOrigin();
        math::operator*((math*)local_f8, pMVar6, local_48);
        local_40._0_4_ = *(float*)(this_02->field_12 + 8);
        fVar11 = (float)this_02->field_0->GetPlaybackStart();
        if (fVar11 <= local_40._0_4_) {
            cVar1 = this_02->field_0->GetUseTerrainHeight();
            if (cVar1 == '\0') {
                fVar12 = (float)this_02->field_0->GetPlaybackStart();
                fVar11 = local_34;
            } else {
                local_40._0_4_ = *(float*)(this_02->field_12 + 8);
                fVar11 = (float)this_02->field_0->GetPlaybackStart();
                local_40._0_4_ = local_40._0_4_ - fVar11;
                local_34 = local_34 - local_40._0_4_;
                fVar11 = (float)this_02->field_0->GetPlaybackStart();
                TickModules(this_02, local_34, fVar11, (Matrix44T*)(local_f8 + 64), (Matrix44T*)local_f8);
                local_34 = (float)this_02->field_0->GetEmissiveScale();
                local_48 = (Matrix44T*)CONCAT44(local_48._4_4_, *(undefined4*)(this_02->field_12 + 8));
                fVar11 = (float)this_02->field_0->GetPlaybackStart();
                fVar12 = (float)fmod(local_48._0_4_, fVar11);
                fVar12 = fVar12 - local_34;
                fVar11 = local_40._0_4_;
            }
            *(float*)(this_02->field_12 + 8) = fVar12;
        } else {
            fVar11 = local_34;
        }
        this_03 = local_50;
        TickModules(this_02, fVar11, *(float*)(this_02->field_12 + 8), (Matrix44T*)(local_f8 + 64),
                    (Matrix44T*)local_f8);
        local_34 = *(float*)(this_02->field_12 + 8);
        this_02->field_0->GetPlaybackStart();
        pPVar9 = local_58;
        if (extraout_XMM0_Da <= local_34) {
            this_02->field_12[4] = 0;
        }
        if (local_b8.field_88._4_1_ != '\0') {
            new (local_118) math::AABB();
            math::AABB::operator=((AABB*)&this_02->field_288, (AABB*)local_118);
            lVar2 = pPVar9->GetCount();
            if (lVar2 != 0) {
                ptVar10 = (type*)0;
                do {
                    ptVar3 = ptVar10;
                    pLVar7 = (Layout*)eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                                    SafeBucketAllocatorEASTL>::operator[](this_03, (ulong)ptVar10);
                    pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, ptVar3);
                    (&this_02->field_288, (Vector3T*)pvVar8)->AddPoint();
                    ptVar10 = ptVar10 + 1;
                    ptVar3 = (type*)pPVar9->GetCount();
                } while (ptVar10 < ptVar3);
            }
        }
        return this_02->field_12[4];
    }

    // 0x100828ce0, 432 bytes, placed by class name
    // ModularParticleEmitter::TickModules(float, float, math::Matrix44T<float> const&, math::Matrix44T<float> const&)
    void ModularParticleEmitter::TickModules(float param_1, float param_2, Matrix44T* param_3, Matrix44T* param_4) {
        float* pfVar1;
        undefined1 local_c0[16];
        Rect<float> local_b0[16];
        Vector4T<float> local_a0[12];
        Rect<float> local_94[16];
        ushort local_84;
        undefined1 local_82;
        undefined1 local_81;
        undefined8 local_80;
        undefined2 local_78;
        float local_74;
        float local_70;
        undefined4 local_6c;
        float local_68[4];
        ulong local_58;
        float local_50;

        new (local_c0) ParticleModuleUpdateParams();
        local_c0[0] = math::operator!=(param_3, param_4);
        if ((bool)local_c0[0]) {
            local_58 = param_3->GetPos();
            local_50 = param_2;
            ((local_c0 + 4))->SetXYZ((Vector3T*)&local_58);
            local_58.GetRot();
            new (local_68) math::QuaternionT<float>((Matrix44T<float>*)&local_58);
            math::Rect<float>::operator=(local_b0, (Rect*)local_68);
        }
        local_58 = param_4->GetPos();
        local_50 = param_2;
        math::Vector4T<float>::SetXYZ(local_a0, (Vector3T*)&local_58);
        local_58.GetRot();
        new (local_68) math::QuaternionT<float>((Matrix44T<float>*)&local_58);
        math::Rect<float>::operator=(local_94, (Rect*)local_68);
        local_80 = ((field_12 + 12))->GetCount();
        local_84 = m_atlasMaterialSettingsSlotXY;
        local_82 = field_0->GetNumTiles();
        local_81 = field_0->GetNumTilesPerRow();
        if (field_12[4] == '\0') {
            local_78 = 0;
        } else {
            local_78 = field_0->GetMaxParticles();
        }
        local_74 = (float)field_0->GetEmissiveScale();
        local_74 = local_74 + param_2;
        local_58 = local_58 & 18446744069414584320;
        local_68[0] = (float)field_0->GetPlaybackStart();
        local_68[0] = param_2 / local_68[0];
        pfVar1 = std::max<float>((float*)&local_58, local_68);
        local_70 = *pfVar1;
        local_6c = field_0->GetLevel();
        (field_0, param_1, (ParticleModuleUpdateParams*)local_c0, (ParticleModuleUpdateState*)field_12,
         (ParticleData*)(field_12 + 12))
            ->ProcessTick();
    }

    // 0x100828e90, 64 bytes, placed by class name
    // ModularParticleEmitter::Restart()
    void ModularParticleEmitter::Restart() {
        undefined8 in_RAX;
        uint uVar1;
        undefined8 local_18;

        local_18._4_4_ = (uint)((ulong)in_RAX >> 32);
        uVar1 = field_0->GetEmissiveScale();
        *(uint*)(field_12 + 8) = uVar1 ^ 2147483648;
        field_12[4] = 1;
        local_18 = (ulong)local_18._4_4_ << 32;
        new (&local_18) callstack::Callstack();
        *(int*)field_12 = (int)local_18;
    }

    // 0x100828ed0, 48 bytes, placed by class name
    // ModularParticleEmitter::SortParticles()
    void ModularParticleEmitter::SortParticles() {
        if (field_0->GetLevel() != 1) {
            helpers::SortParticleData((ParticleData*)(field_12 + 12));
        }
    }

    // 0x100828f00, 368 bytes, placed by class name
    // ModularParticleEmitter::CalculateViewDistances(math::Vector4T<float> const&)
    undefined8 ModularParticleEmitter::CalculateViewDistances(Vector4T* param_1) {
        long lVar1;
        type* ptVar2;
        Layout* this_00;
        float* pfVar3;
        vector* pvVar4;
        float* pfVar5;
        type* ptVar6;
        float fVar7;
        undefined8 local_58;
        ParticleData* local_50;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* local_48;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_40 = 3.4028235e+38;
        local_3c = -3.4028235e+38;
        local_50 = (ParticleData*)(field_12 + 12);
        lVar1 = local_50->GetCount();
        if (lVar1 != 0) {
            local_48 =
                (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)&field_144;
            ptVar6 = (type*)0;
            do {
                this_00 = (Layout*)eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                                 SafeBucketAllocatorEASTL>::operator[](local_48, (ulong)ptVar6);
                ptVar2 = ptVar6;
                pfVar3 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                    (vector<float, SafeBucketAllocatorEASTL>*)&field_120, (ulong)ptVar6);
                local_34 = *(float*)param_1;
                pvVar4 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar2);
                local_34 = local_34 * *(float*)pvVar4;
                local_38 = *(float*)(param_1 + 4);
                pvVar4 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar2);
                local_38 = local_38 * *(float*)(pvVar4 + 4) + local_34;
                local_34 = *(float*)(param_1 + 8);
                pvVar4 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar2);
                fVar7 = (float)::abs(local_34 * *(float*)(pvVar4 + 8) + local_38 + *(float*)(param_1 + 12));
                *pfVar3 = fVar7;
                if ((fVar7 != 3.4028235e+38) && (0.0 < fVar7)) {
                    pfVar5 = std::min<float>(&local_40, pfVar3);
                    local_40 = *pfVar5;
                    pfVar3 = std::max<float>(&local_3c, pfVar3);
                    local_3c = *pfVar3;
                }
                ptVar6 = ptVar6 + 1;
                ptVar2 = (type*)local_50->GetCount();
            } while (ptVar6 < ptVar2);
        }
        std::pair<float, float>::pair<float&, float&, false>((pair<float, float>*)&local_58, &local_40, &local_3c);
        return local_58;
    }

    // 0x100829080, 160 bytes, placed by class name
    // ModularParticleEmitter::TranslateParticles(math::Vector3T<float> const&)
    void ModularParticleEmitter::TranslateParticles(Vector3T* param_1) {
        Vector3T<float>* this_00;
        ulong uVar2;
        ulong uVar3;
        Layout local_38[8];

        if (((field_12 + 12))->GetCount() != 0) {
            uVar3 = 0;
            do {
                eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>::
                operator[]((vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                   SafeBucketAllocatorEASTL>*)&field_144,
                           uVar3);
                eastl::rbtree<
                    unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const,
                                                 eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                    true, true>::end();
                this_00 = (Vector3T<float>*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(local_38);
                math::Vector3T<float>::operator+=(this_00, param_1);
                local_38->~SplatOp();
                uVar3 = uVar3 + 1;
                uVar2 = ((field_12 + 12))->GetCount();
            } while (uVar3 < uVar2);
        }
    }

    // 0x100829120, 176 bytes, placed by class name
    // ModularParticleEmitter::RenderDebug(math::Matrix44T<float> const&) const
    void ModularParticleEmitter::RenderDebug(Matrix44T* param_1) {
        WorldmapAreaMetadata* this_00;
        Matrix44T MVar1;
        Matrix44T* pMVar2;
        float* pfVar3;
        undefined1 local_78[16];
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        float local_2c;
        float local_28;
        float local_24;

        this_00 = (WorldmapAreaMetadata*)field_0;
        pMVar2 = (Matrix44T*)this_00->GetOrigin();
        math::operator*((math*)local_78, pMVar2, param_1);
        local_2c = 0.0;
        local_24 = *(float*)(field_12 + 8);
        local_28 = (float)field_0->GetPlaybackStart();
        local_28 = local_24 / local_28;
        pfVar3 = std::max<float>(&local_2c, &local_28);
        MVar1._8_8_ = local_78._8_8_;
        MVar1._0_8_ = local_78._0_8_;
        MVar1._16_8_ = local_68;
        MVar1._24_8_ = uStack_60;
        MVar1._32_8_ = local_58;
        MVar1._40_8_ = uStack_50;
        MVar1._48_8_ = local_48;
        this_00->RenderDebug(MVar1, *pfVar3);
    }

} // namespace jag::graphics
