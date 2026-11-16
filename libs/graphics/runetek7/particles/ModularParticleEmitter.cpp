// libs/graphics/runetek7/particles/ModularParticleEmitter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ModularParticleEmitter.h"

namespace jag::graphics {
    // 0x100009d00: ModularParticleEmitter::GetParticles() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x100009d10: ModularParticleEmitter::GetEmitterTemplate() const has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x1001c21e0: ModularParticleEmitter::IsEmitting() const has the same machine code as oldscape::MutationTracked<EffectList>::IsDirty() const

    // 0x1003c2100: ModularParticleEmitter::GetAABB() const has the same machine code as game::LocationContainer::GetDynamicMultiLocations() const

    // 0x10069f0d0: ModularParticleEmitter::SetEmitting(bool) has the same machine code as ui::SpriteData::SetSpriteAlpha(unsigned char)

    // 0x1008286c0
    ModularParticleEmitter::ModularParticleEmitter(const ModularParticleEmitterTemplate& modularParticleEmitterTemplate)
        : field_0(modularParticleEmitterTemplate), m_atlasMaterialSettingsSlotXY(0) {
        field_12[4] = 1;
        unsigned int uVar2 = modularParticleEmitterTemplate.GetEmissiveScale();
        *(unsigned int*)(field_12 + 8) = uVar2 ^ 2147483648;
        new ((field_12 + 12)) ParticleData();
        new (&field_288) math::AABB();
        unsigned short uVar1 = modularParticleEmitterTemplate.GetMaxActiveParticlesEstimate();
        ((field_12 + 12))->Reserve((unsigned long)uVar1);
    }

    // 0x1008287e0
    uint8_t ModularParticleEmitter::Update(float arg1, const math::Matrix44T<float>& matrix441,
                                           const math::Matrix44T<float>& matrix442, bool arg4) {
        uint8_t* this_00;
        uint8_t* this_01;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>* this_02;
        unsigned long uVar3;
        float* pfVar4;
        float* pfVar5;
        Layout* pLVar7;
        Vector3T<float>* pVVar8;
        uint64_t in_register_00000009;
        ParticleData* pPVar9;
        unsigned long uVar10;
        float fVar11;
        float fVar12;
        float extraout_XMM0_Da;
        uint8_t local_118[96];
        uint64_t local_b8;
        float local_b0;
        vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>* local_40;

        uint32_t local_5c = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg4);
        ParticleData* local_58 = (ParticleData*)(field_12 + 12);
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* local_50 =
            (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)&field_144;
        Matrix44T<float>* local_70 = matrix441;
        ModularParticleEmitter* local_68 = this;
        Matrix44T<float>* local_48 = matrix442;
        float local_34 = arg1;
        long lVar2 = local_58->GetCount();
        if (lVar2 != 0) {
            this_00 = &local_68->field_48;
            this_01 = &local_68->field_72;
            local_40 =
                (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&local_68->field_192;
            uVar10 = 0;
            this_02 =
                (rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>,
                        true, true>*)(local_118 + 32);
            do {
                pfVar4 = (float*)(*this_00)[uVar10];
                pfVar5 = (float*)(*this_01)[uVar10];
                pPVar9 = local_58;
                fVar11 = *pfVar5 * local_34 + *pfVar4;
                *pfVar4 = fVar11;
                if (fVar11 < 1.0) {
                    fVar11 = local_34;
                    pLVar7 = (Layout*)(*local_40)[uVar10];
                    pVVar8 = (Vector3T<float>*)pLVar7->SSOBeginPtr();
                    local_b8 = *local_34 * *pVVar8;
                    local_b0 = fVar11;
                    (*local_50)[uVar10];
                    this_02->end();
                    pVVar8 = (Vector3T<float>*)this_02->HeapBeginPtr();
                    *pVVar8 += local_b8;
                    this_02->~SplatOp();
                    pPVar9 = local_58;
                } else {
                    local_58->Remove(uVar10);
                    uVar10 = uVar10 - 1;
                }
                uVar10 = uVar10 + 1;
                uVar3 = pPVar9->GetCount();
            } while (uVar10 < uVar3);
        }
        ModularParticleEmitter* this_03 = local_68;
        *(float*)(local_68->field_12 + 8) = *(float*)(local_68->field_12 + 8) + local_34;
        auto pMVar6 = local_68->field_0->GetOrigin();
        local_b8** pMVar6;
        pMVar6 = (Matrix44T<float>*)this_03->field_0->GetOrigin();
        (*((local_118 + 32))) * *pMVar6;
        local_40._0_4_ = *(float*)(this_03->field_12 + 8);
        fVar11 = (float)this_03->field_0->GetPlaybackStart();
        if (fVar11 <= local_40._0_4_) {
            if (this_03->field_0->GetUseTerrainHeight() == '\0') {
                fVar12 = (float)this_03->field_0->GetPlaybackStart();
                fVar11 = local_34;
            } else {
                local_40._0_4_ = *(float*)(this_03->field_12 + 8);
                fVar11 = (float)this_03->field_0->GetPlaybackStart();
                local_40._0_4_ = local_40._0_4_ - fVar11;
                local_34 = local_34 - local_40._0_4_;
                fVar11 = (float)this_03->field_0->GetPlaybackStart();
                TickModules(this_03, local_34, fVar11, (Matrix44T<float>*)&local_b8,
                            (Matrix44T<float>*)(local_118 + 32));
                local_34 = (float)this_03->field_0->GetEmissiveScale();
                local_48 = (Matrix44T<float>*)(((uint64_t)local_48._4_4_ << 32) |
                                               (uint32_t)(*(uint32_t*)(this_03->field_12 + 8)));
                fVar11 = (float)this_03->field_0->GetPlaybackStart();
                fVar12 = (float)fmod(local_48._0_4_, fVar11);
                fVar12 = fVar12 - local_34;
                fVar11 = local_40._0_4_;
            }
            *(float*)(this_03->field_12 + 8) = fVar12;
        } else {
            fVar11 = local_34;
        }
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* this_04 = local_50;
        TickModules(this_03, fVar11, *(float*)(this_03->field_12 + 8), (Matrix44T<float>*)&local_b8,
                    (Matrix44T<float>*)(local_118 + 32));
        local_34 = *(float*)(this_03->field_12 + 8);
        this_03->field_0->GetPlaybackStart();
        pPVar9 = local_58;
        if (extraout_XMM0_Da <= local_34) {
            this_03->field_12[4] = 0;
        }
        if ((char)local_5c != '\0') {
            new (local_118) math::AABB();
            this_03->field_288 = *local_118;
            lVar2 = pPVar9->GetCount();
            if (lVar2 != 0) {
                uVar10 = 0;
                do {
                    pLVar7 = (Layout*)(*this_04)[uVar10];
                    pVVar8 = (Vector3T<float>*)pLVar7->SSOBeginPtr();
                    this_03->field_288.AddPoint(*pVVar8);
                    uVar10 = uVar10 + 1;
                    uVar3 = pPVar9->GetCount();
                } while (uVar10 < uVar3);
            }
        }
        return this_03->field_12[4];
    }

    // 0x100828ce0
    void ModularParticleEmitter::TickModules(float arg1, float arg2, const math::Matrix44T<float>& matrix441,
                                             const math::Matrix44T<float>& matrix442) {
        uint8_t local_c0[16];
        Rect<float> local_b0;
        Vector4T<float> local_a0;
        uint16_t local_78;
        float local_68[4];
        unsigned long local_58;
        float local_50;

        new (local_c0) ParticleModuleUpdateParams();
        local_c0[0] = matrix441 != matrix442;
        if (local_c0[0]) {
            local_58 = matrix441.GetPos();
            local_50 = arg2;
            ((local_c0 + 4))->SetXYZ(local_58);
            local_58.GetRot();
            new (local_68) math::QuaternionT<float>(local_58);
            local_b0 = *local_68;
        }
        local_58 = matrix442.GetPos();
        local_50 = arg2;
        local_a0.SetXYZ(local_58);
        local_58.GetRot();
        new (local_68) math::QuaternionT<float>(local_58);
        Rect<float> local_94 = *local_68;
        uint64_t local_80 = ((field_12 + 12))->GetCount();
        unsigned short local_84 = m_atlasMaterialSettingsSlotXY;
        uint8_t local_82 = field_0->GetNumTiles();
        uint8_t local_81 = field_0->GetNumTilesPerRow();
        if (field_12[4] == '\0') {
            local_78 = 0;
        } else {
            local_78 = field_0->GetMaxParticles();
        }
        float local_74 = (float)field_0->GetEmissiveScale();
        local_74 = local_74 + arg2;
        local_58 = local_58 & 18446744069414584320;
        local_68[0] = (float)field_0->GetPlaybackStart();
        local_68[0] = arg2 / local_68[0];
        auto pfVar1 = std::max<float>(local_58, *local_68);
        float local_70 = *pfVar1;
        uint32_t local_6c = field_0->GetLevel();
        field_0->ProcessTick(arg1, *local_c0, *field_12, *((field_12 + 12)));
    }

    // 0x100828e90
    void ModularParticleEmitter::Restart() {
        uint64_t in_RAX;
        uint64_t local_18;

        local_18._4_4_ = (unsigned int)((unsigned long)in_RAX >> 32);
        unsigned int uVar1 = field_0->GetEmissiveScale();
        *(unsigned int*)(field_12 + 8) = uVar1 ^ 2147483648;
        field_12[4] = 1;
        local_18 = (unsigned long)local_18._4_4_ << 32;
        new (&local_18) callstack::Callstack();
        *(int*)field_12 = (int)local_18;
    }

    // 0x100828ed0
    void ModularParticleEmitter::SortParticles() {
        if (field_0->GetLevel() != 1) {
            helpers::SortParticleData(*((field_12 + 12)));
        }
    }

    // 0x100828f00
    uint64_t ModularParticleEmitter::CalculateViewDistances(const math::Vector4T<float>& vector4) {
        unsigned long uVar2;
        Layout* this_00;
        float* pfVar3;
        float* pfVar4;
        unsigned long arg1;
        float fVar5;
        uint64_t local_58;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* local_48;
        float local_38;
        float local_34;

        float local_40 = 3.4028235e+38;
        float local_3c = -3.4028235e+38;
        ParticleData* local_50 = (ParticleData*)(field_12 + 12);
        long lVar1 = local_50->GetCount();
        if (lVar1 != 0) {
            local_48 =
                (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)&field_144;
            arg1 = 0;
            do {
                this_00 = (Layout*)(*local_48)[arg1];
                pfVar3 = &field_120[arg1];
                local_34 = *(float*)vector4;
                pfVar4 = (float*)this_00->SSOBeginPtr();
                local_34 = local_34 * *pfVar4;
                local_38 = *(float*)(vector4 + 4);
                lVar1 = this_00->SSOBeginPtr();
                local_38 = local_38 * *(float*)(lVar1 + 4) + local_34;
                local_34 = *(float*)(vector4 + 8);
                lVar1 = this_00->SSOBeginPtr();
                fVar5 = (float)::abs(local_34 * *(float*)(lVar1 + 8) + local_38 + *(float*)(vector4 + 12));
                *pfVar3 = fVar5;
                if ((fVar5 != 3.4028235e+38) && (0.0 < fVar5)) {
                    pfVar4 = std::min<float>(local_40, *pfVar3);
                    local_40 = *pfVar4;
                    pfVar3 = std::max<float>(local_3c, *pfVar3);
                    local_3c = *pfVar3;
                }
                arg1 = arg1 + 1;
                uVar2 = local_50->GetCount();
            } while (arg1 < uVar2);
        }
        local_58.pair<float&, float&, false>(local_40, local_3c);
        return local_58;
    }

    // 0x100829080
    void ModularParticleEmitter::TranslateParticles(const math::Vector3T<float>& vector3) {
        Vector3T<float>* this_00;
        unsigned long uVar2;
        unsigned long arg1;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        if (((field_12 + 12))->GetCount() != 0) {
            arg1 = 0;
            do {
                field_144[arg1];
                local_38.end();
                this_00 = (Vector3T<float>*)local_38.HeapBeginPtr();
                *this_00 += vector3;
                arg1 = arg1 + 1;
                uVar2 = ((field_12 + 12))->GetCount();
            } while (arg1 < uVar2);
        }
    }

    // 0x100829120
    void ModularParticleEmitter::RenderDebug(const math::Matrix44T<float>& matrix44) const {
        Matrix44T<float> local_78;

        WorldmapAreaMetadata* this_00 = (WorldmapAreaMetadata*)field_0;
        auto pMVar1 = this_00->GetOrigin();
        local_78** pMVar1;
        float local_24 = *(float*)(field_12 + 8);
        float local_28 = (float)field_0->GetPlaybackStart();
        local_28 = local_24 / local_28;
        pMVar1 = (Matrix44T<float>*)&local_28;
        auto pfVar2 = std::max<float>(0.0, *pMVar1);
        this_00->RenderDebug(pMVar1, *pfVar2);
    }

} // namespace jag::graphics
