// libs/graphics/runetek7/particles/modules/ModulePropertyCurve.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    // 0x1007d7dd0
    uint8_t ModulePropertyCurve<float>::LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2) {
        uint32_t* puVar2;
        uint32_t* puVar3;
        uint32_t uVar4;

        uint8_t bVar1 = arg2.g1();
        PacketT<Array<unsigned char> _>* arg1_00 = (PacketT<Array<unsigned char> _>*)(unsigned long)bVar1;
        resize((unsigned long)arg1_00);
        if (bVar1 == 1) {
            puVar3 = (uint32_t*)front();
            uVar4 = arg2.gFloat();
            *puVar3 = uVar4;
            uVar4 = DecodePayload((ModulePropertyCurve<float>*)arg2, arg1_00);
            puVar3[1] = uVar4;
        } else {
            puVar3 = (uint32_t*)HeapBeginPtr();
            puVar2 = (uint32_t*)end();
            for (; puVar3 != puVar2; puVar3 = puVar3 + 4) {
                uVar4 = arg2.gFloat();
                *puVar3 = uVar4;
                uVar4 = DecodePayload((ModulePropertyCurve<float>*)arg2, arg1_00);
                puVar3[1] = uVar4;
                uVar4 = arg2.gFloat();
                puVar3[2] = uVar4;
                uVar4 = DecodePayload((ModulePropertyCurve<float>*)arg2, arg1_00);
                puVar3[3] = uVar4;
            }
            GenerateEvalCache(this);
        }
        return 1;
    }

    // 0x1007d8040
    float ModulePropertyCurve<float>::Eval(float arg1) const {
        int iVar1;
        int iVar2;
        float* pfVar4;
        float* pfVar5;
        float fVar6;

        if ((arg1 < 0.0) || (1.0 < arg1)) {
            LogAssert("(t >= 0.f) && (t <= 1.f)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      42, nullptr);
        }
        long lVar3 = size();
        if (lVar3 == 0) {
            LogAssert("m_keys.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      43, nullptr);
        }
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(this + 56);
        lVar3 = this_00->size();
        if (lVar3 == 0) {
            lVar3 = size();
            if (lVar3 != 1) {
                LogAssert("m_keys.size() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/modules/ModulePropertyCurve.inl",
                          48, nullptr);
            }
            lVar3 = back();
        } else {
            iVar1 = GetStartingKeyIndex<eastl::vector<ModulePropertyCurve<float>::CacheEntry>>(
                (vector<ModulePropertyCurve<float>::CacheEntry>*)this_00, arg1);
            if (iVar1 < 0) {
                lVar3 = this_00->front();
            } else {
                iVar2 = this_00->size();
                if (iVar1 < iVar2 - 1) {
                    pfVar4 = (float*)(*this_00)[(long)iVar1];
                    pfVar5 = (float*)(*this_00)[(long)(iVar1 + 1)];
                    fVar6 = (arg1 - *pfVar4) / (*pfVar5 - *pfVar4);
                    if ((0.0 <= fVar6) && (fVar6 <= 1.0)) {
                        fVar6 = math::Lerp<float, float>(*(pfVar4 + 1), *(pfVar5 + 1), fVar6);
                        return fVar6;
                    }
                    LogAssert("(interpolator >= 0.f) && (interpolator <= 1.f)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "particles/modules/ModulePropertyCurve.inl",
                              69, nullptr);
                }
                lVar3 = this_00->back();
            }
        }
        return *(float*)(lVar3 + 4);
    }

    // 0x1007d81e0
    ParticleVertexDataProxy<math::Vector3T<float>>*
    ParticleVertexDataProxy<math::Vector3T<float>>::operator+=(const math::Vector3T<float>& vector3) {
        Vector3T<float>* pVVar1 = (Vector3T<float>*)(*((this + 36))) += vector3;
        pVVar1 = (Vector3T<float>*)((this + 24))->SetXYZ(*pVVar1);
        pVVar1 = (Vector3T<float>*)((this + 12))->SetXYZ(*pVVar1);
        SetXYZ(*pVVar1);
        return this;
    }

    // 0x1007d8290
    uint8_t ModulePropertyCurve<math::Vector3T<float>>::LoadFromPacket(unsigned char arg1,
                                                                       PacketT<Array<unsigned char>>& arg2) {
        uint32_t* puVar2;
        uint32_t* puVar3;
        uint32_t uVar4;
        uint64_t local_40[2];

        uint8_t bVar1 = arg2.g1();
        resize((unsigned long)bVar1);
        if (bVar1 == 1) {
            puVar3 = (uint32_t*)front();
            uVar4 = arg2.gFloat();
            *puVar3 = uVar4;
            local_40[0] = DecodePayload(arg2);
            ((puVar3 + 1))->SetXYZ(*local_40);
        } else {
            puVar3 = (uint32_t*)HeapBeginPtr();
            puVar2 = (uint32_t*)end();
            if (puVar3 != puVar2) {
                do {
                    uVar4 = arg2.gFloat();
                    *puVar3 = uVar4;
                    local_40[0] = DecodePayload(arg2);
                    ((puVar3 + 1))->SetXYZ(*local_40);
                    uVar4 = arg2.gFloat();
                    puVar3[4] = uVar4;
                    local_40[0] = DecodePayload(arg2);
                    ((puVar3 + 5))->SetXYZ(*local_40);
                    puVar3 = puVar3 + 8;
                } while (puVar3 != puVar2);
            }
            GenerateEvalCache(this);
        }
        return 1;
    }

    // 0x1007d88e0
    uint64_t ModulePropertyCurve<math::Vector3T<float>>::Eval(float arg1) const {
        int iVar1;
        int iVar2;
        float* pfVar4;
        float* pfVar5;
        float arg3;

        if ((arg1 < 0.0) || (1.0 < arg1)) {
            LogAssert("(t >= 0.f) && (t <= 1.f)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      42, nullptr);
        }
        long lVar3 = size();
        if (lVar3 == 0) {
            LogAssert("m_keys.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      43, nullptr);
        }
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00 =
            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(this + 72);
        lVar3 = this_00->size();
        if (lVar3 == 0) {
            lVar3 = size();
            if (lVar3 != 1) {
                LogAssert("m_keys.size() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/modules/ModulePropertyCurve.inl",
                          48, nullptr);
            }
            lVar3 = back();
        } else {
            iVar1 = GetStartingKeyIndex<eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry>>(
                (vector<ModulePropertyCurve<math::Vector3T<float> _>::CacheEntry>*)this_00, arg1);
            if (iVar1 < 0) {
                lVar3 = this_00->front();
            } else {
                iVar2 = this_00->size();
                if (iVar1 < iVar2 - 1) {
                    pfVar4 = (float*)(*this_00)[(long)iVar1];
                    pfVar5 = (float*)(*this_00)[(long)(iVar1 + 1)];
                    arg3 = (arg1 - *pfVar4) / (*pfVar5 - *pfVar4);
                    if ((0.0 <= arg3) && (arg3 <= 1.0)) {
                        return math::Lerp<math::Vector3T<float>, float>(*((pfVar4 + 1)), *((pfVar5 + 1)), arg3);
                    }
                    LogAssert("(interpolator >= 0.f) && (interpolator <= 1.f)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "particles/modules/ModulePropertyCurve.inl",
                              69, nullptr);
                }
                lVar3 = this_00->back();
            }
        }
        return *(uint64_t*)(lVar3 + 4);
    }

    // 0x1007d8ce0
    ParticleVertexDataProxy<math::Vector3T<float>>*
    ParticleVertexDataProxy<math::Vector3T<float>>::operator=(math::Vector3T<float>&& vector3) {
        Vector3T<float>* pVVar1 = (Vector3T<float>*)((this + 36))->SetXYZ(vector3);
        pVVar1 = (Vector3T<float>*)((this + 24))->SetXYZ(*pVVar1);
        pVVar1 = (Vector3T<float>*)((this + 12))->SetXYZ(*pVVar1);
        SetXYZ(*pVVar1);
        return this;
    }

    // 0x1007db7e0
    uint64_t ModulePropertyCurve<math::Vector3T<float>>::EvalLinear(float arg1) const {
        int iVar2;
        float* pfVar4;
        float* pfVar5;
        float arg3;

        if ((arg1 < 0.0) || (1.0 < arg1)) {
            LogAssert("(t >= 0.f) && (t <= 1.f)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      111, nullptr);
        }
        long lVar3 = size();
        if (lVar3 == 0) {
            LogAssert("m_keys.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      112, nullptr);
        }
        int iVar1 = GetStartingKeyIndex<eastl::fixed_vector<ModulePropertyCurve<math::Vector3T<float>>::Key, 1ul>>(
            (fixed_vector<ModulePropertyCurve<math::Vector3T<float> _>::Key, _1ul>*)this, arg1);
        if (iVar1 < 0) {
            lVar3 = front();
        } else {
            iVar2 = size();
            if (iVar1 < iVar2) {
                pfVar4 = (float*)(*this)[(long)iVar1];
                pfVar5 = (float*)(*this)[(long)(iVar1 + 1)];
                arg3 = (arg1 - *pfVar4) / (*pfVar5 - *pfVar4);
                if ((0.0 <= arg3) && (arg3 <= 1.0)) {
                    return math::Lerp<math::Vector3T<float>, float>(*((pfVar4 + 1)), *((pfVar5 + 1)), arg3);
                }
                LogAssert("(interpolator >= 0.f) && (interpolator <= 1.f)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/modules/ModulePropertyCurve.inl",
                          132, nullptr);
            }
            lVar3 = back();
        }
        return *(uint64_t*)(lVar3 + 4);
    }

    // 0x1007db930
    float ModulePropertyCurve<float>::EvalLinear(float arg1) const {
        int iVar2;
        float* pfVar4;
        float* pfVar5;
        float fVar6;

        if ((arg1 < 0.0) || (1.0 < arg1)) {
            LogAssert("(t >= 0.f) && (t <= 1.f)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      111, nullptr);
        }
        long lVar3 = size();
        if (lVar3 == 0) {
            LogAssert("m_keys.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      112, nullptr);
        }
        int iVar1 = GetStartingKeyIndex<eastl::fixed_vector<ModulePropertyCurve<float>::Key, 1ul>>(
            (fixed_vector<ModulePropertyCurve<float>::Key, _1ul>*)this, arg1);
        if (iVar1 < 0) {
            lVar3 = front();
        } else {
            iVar2 = size();
            if (iVar1 < iVar2) {
                pfVar4 = (float*)(*this)[(long)iVar1];
                pfVar5 = (float*)(*this)[(long)(iVar1 + 1)];
                fVar6 = (arg1 - *pfVar4) / (*pfVar5 - *pfVar4);
                if ((0.0 <= fVar6) && (fVar6 <= 1.0)) {
                    fVar6 = math::Lerp<float, float>(*(pfVar4 + 1), *(pfVar5 + 1), fVar6);
                    return fVar6;
                }
                LogAssert("(interpolator >= 0.f) && (interpolator <= 1.f)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/modules/ModulePropertyCurve.inl",
                          132, nullptr);
            }
            lVar3 = back();
        }
        return *(float*)(lVar3 + 4);
    }

    // 0x1007e76e0
    int ModulePropertyCurve<float>::GetStartingKeyIndex<eastl::vector<ModulePropertyCurve<float>::CacheEntry>>(
        const eastl::vector<ModulePropertyCurve<float>::CacheEntry>& cacheEntrys, float arg2) {
        int iVar3;
        long lVar4;
        float* pfVar5;
        unsigned long arg1;

        if (cacheEntrys.empty() != '\0') {
            LogAssert("!keys.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      168, nullptr);
        }
        int iVar2 = -1;
        if ((((arg2 != 0.0) && (lVar4 = cacheEntrys.size(), lVar4 != 1)) && (iVar2 = cacheEntrys.size(), arg2 < 1.0)) &&
            (iVar3 = cacheEntrys.size(), 0 < iVar3)) {
            arg1 = 0;
            do {
                pfVar5 = &cacheEntrys[arg1];
                if (arg2 < *pfVar5) {
                    return (int)arg1 - 1;
                }
                arg1 = arg1 + 1;
                iVar3 = cacheEntrys.size();
            } while ((long)arg1 < (long)iVar3);
        }
        return iVar2;
    }

    // 0x1007e78a0
    int ModulePropertyCurve<math::Vector3T<float>>::GetStartingKeyIndex<
        eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry>>(
        const eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry>& cacheEntrys, float arg2) {
        int iVar3;
        long lVar4;
        float* pfVar5;
        unsigned long arg1;

        if (cacheEntrys.empty() != '\0') {
            LogAssert("!keys.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      168, nullptr);
        }
        int iVar2 = -1;
        if ((((arg2 != 0.0) && (lVar4 = cacheEntrys.size(), lVar4 != 1)) && (iVar2 = cacheEntrys.size(), arg2 < 1.0)) &&
            (iVar3 = cacheEntrys.size(), 0 < iVar3)) {
            arg1 = 0;
            do {
                pfVar5 = &cacheEntrys[arg1];
                if (arg2 < *pfVar5) {
                    return (int)arg1 - 1;
                }
                arg1 = arg1 + 1;
                iVar3 = cacheEntrys.size();
            } while ((long)arg1 < (long)iVar3);
        }
        return iVar2;
    }

    // 0x1007e7aa0
    int ModulePropertyCurve<math::Vector3T<float>>::GetStartingKeyIndex<
        eastl::fixed_vector<ModulePropertyCurve<math::Vector3T<float>>::Key, 1ul>>(
        const eastl::fixed_vector<ModulePropertyCurve<math::Vector3T<float>>::Key, 1ul>& keys, float arg2) {
        int iVar3;
        long lVar4;
        float* pfVar5;
        unsigned long arg1;

        if (keys.empty() != '\0') {
            LogAssert("!keys.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      168, nullptr);
        }
        int iVar2 = -1;
        if ((((arg2 != 0.0) && (lVar4 = keys.size(), lVar4 != 1)) && (iVar2 = keys.size(), arg2 < 1.0)) &&
            (iVar3 = keys.size(), 0 < iVar3)) {
            arg1 = 0;
            do {
                pfVar5 = &keys[arg1];
                if (arg2 < *pfVar5) {
                    return (int)arg1 - 1;
                }
                arg1 = arg1 + 1;
                iVar3 = keys.size();
            } while ((long)arg1 < (long)iVar3);
        }
        return iVar2;
    }

    // 0x1007e7be0
    int ModulePropertyCurve<float>::GetStartingKeyIndex<eastl::fixed_vector<ModulePropertyCurve<float>::Key, 1ul>>(
        const eastl::fixed_vector<ModulePropertyCurve<float>::Key, 1ul>& keys, float arg2) {
        int iVar3;
        long lVar4;
        float* pfVar5;
        unsigned long arg1;

        if (keys.empty() != '\0') {
            LogAssert("!keys.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      168, nullptr);
        }
        int iVar2 = -1;
        if ((((arg2 != 0.0) && (lVar4 = keys.size(), lVar4 != 1)) && (iVar2 = keys.size(), arg2 < 1.0)) &&
            (iVar3 = keys.size(), 0 < iVar3)) {
            arg1 = 0;
            do {
                pfVar5 = &keys[arg1];
                if (arg2 < *pfVar5) {
                    return (int)arg1 - 1;
                }
                arg1 = arg1 + 1;
                iVar3 = keys.size();
            } while ((long)arg1 < (long)iVar3);
        }
        return iVar2;
    }

} // namespace jag::graphics

namespace jag::graphics::particlemodules {
    // 0x1007d7e90
    void Gravity::ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                              ParticleModuleUpdateState& particleModuleUpdateState, ParticleData& particleData) const {
        float* pfVar2;
        Vector3T<float>* this_00;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_01;
        unsigned long uVar3;
        unsigned long arg1_00;
        float arg1_01;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_98;
        uint64_t local_90[2];
        uint64_t local_80[2];
        vector<float, SafeBucketAllocatorEASTL>* local_70;
        ModulePropertyCurve<float>* local_68;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* local_60;
        vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>* local_58;
        uint64_t local_50;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;

        if (DAT_1039bd37b == '\0') {
            if (particleData.GetCount() != 0) {
                local_38 = arg1 * arg1;
                local_70 = (vector<float, SafeBucketAllocatorEASTL>*)&particleData.field_24;
                local_68 = (ModulePropertyCurve<float>*)&field_8;
                local_60 = (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                   SafeBucketAllocatorEASTL>*)&particleData.field_120;
                local_58 =
                    (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&particleData
                        .field_168;
                arg1_00 = 0;
                do {
                    pfVar2 = (float*)(*local_70)[arg1_00];
                    local_3c = *pfVar2;
                    local_44 = (float)local_68->Eval(local_3c);
                    local_40 = (float)field_96.Eval(local_3c);
                    pfVar2 = &particleData[arg1_00];
                    arg1_01 = math::Lerp<float, float>(local_44, local_40, *pfVar2);
                    local_90[0] = *arg1_01 * *PTR_UP_100ee66d0;
                    local_50 = *0.5 * *local_90;
                    local_80[0] = *local_38 * local_50;
                    local_50 = *arg1 * *local_90;
                    (*local_60)[arg1_00];
                    local_98.end();
                    this_00 = (Vector3T<float>*)local_98.HeapBeginPtr();
                    *this_00 += *local_80;
                    this_01 = (ParticleVertexDataProxy<math::Vector3T<float>>*)(*local_58)[arg1_00];
                    *this_01 += local_50;
                    arg1_00 = arg1_00 + 1;
                    uVar3 = particleData.GetCount();
                } while (arg1_00 < uVar3);
            }
        }
    }

    // 0x1007d8220
    uint64_t TriggerPlane::LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2) {
        field_216 = arg2.g1();
        bool cVar2 = field_224.LoadFromPacket(arg1, arg2);
        if ((!cVar2) || (cVar2 = field_8.LoadFromPacket(arg1, arg2), !cVar2)) {
            return 0;
        }
        return field_112.LoadFromPacket(arg1, arg2);
    }

    // 0x1007d8a80
    void TriggerPlane::ApplyBounce(ParticleData& particleData, unsigned long arg2, const math::Vector3T<float>& vector3,
                                   float arg4) {
        uint64_t local_40[2];

        Layout* layout = &particleData.field_168[arg2];
        auto vector31 = layout->SSOBeginPtr();
        uint64_t local_30 = math::Vector3Reflect<float>(*vector31, vector3);
        local_40[0] = *arg4 * local_30;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_00 = &particleData.field_168[arg2];
        *this_00 = *local_40;
    }

    // 0x1007d8b00
    void TriggerPlane::ApplyKill(ParticleData& particleData, unsigned long arg2, float arg3) {
        float* pfVar2 = &particleData.field_24[arg2];
        float fVar1 = *pfVar2;
        pfVar2 = &particleData.field_24[arg2];
        *pfVar2 = (1.0 - fVar1) * arg3 + *pfVar2;
    }

    // 0x1007d8b60
    void TriggerPlane::RenderDebug(const math::Matrix44T<float>& matrix44, float arg2) const {
        uint8_t bVar1;
        long* plVar2;
        unsigned int uVar3;
        unsigned int arg1;
        uint64_t local_68[2];
        SideBarData local_58;
        uint64_t local_48[2];
        uint64_t local_38[2];

        if (DAT_1039bd387 != '\0') {
            local_38[0] = matrix44.GetPos();
            local_58._0_8_ = field_8.Eval(arg2);
            local_48[0] = matrix44 * local_58;
            local_68[0] = *local_38 + *local_48;
            local_38[0] = field_112.Eval(arg2);
            local_48[0] = matrix44 * *local_38;
            new (local_38) math::PlaneT<float>(local_48, local_68);
            bVar1 = field_216;
            uVar3 = 4294901760;
            if ((bVar1 & 2) == 0) {
                uVar3 = 4278190080;
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                arg1 = uVar3 | 255;
                if ((bVar1 & 1) == 0) {
                    arg1 = uVar3;
                }
                local_58 = oldscape::sidebars::SideBarData(arg1, 3);
                (**(void (**)(...))(*plVar2 + 104))(plVar2, local_68, local_38, 500, 500, &local_58);
            }
        }
    }

    // 0x1007d8d20
    uint64_t Attractor::LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2) {
        uint64_t uVar2;

        if (field_8.LoadFromPacket(arg1, arg2) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = field_112.LoadFromPacket(arg1, arg2);
        }
        return uVar2;
    }

    // 0x1007d8d70
    void Attractor::ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                ParticleModuleUpdateState& particleModuleUpdateState,
                                ParticleData& particleData) const {
        unsigned long uVar2;
        Layout* this_00;
        uint64_t* puVar3;
        Vector3T<float>* this_01;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_02;
        unsigned long arg1_00;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* this_03;
        float fVar4;
        uint32_t in_XMM1_Da;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_b0;
        uint64_t local_a8[2];
        uint64_t local_98[2];
        vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>* local_88;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* local_80;
        uint64_t local_78[2];
        float local_68;
        float local_64;
        uint64_t local_60[2];
        ParticleData* local_50;
        uint64_t local_40;
        uint32_t local_38;

        if (DAT_1039bd37d == '\0') {
            local_50 = particleData;
            local_a8[0] = field_8.Eval(*(float*)&particleModuleUpdateParams[1].field_28);
            local_60[0] = particleModuleUpdateParams.field_44 * *local_a8;
            local_98[0] = particleModuleUpdateParams.field_32 + *local_60;
            local_68 = (float)field_112.Eval(*(float*)&particleModuleUpdateParams[1].field_28);
            if (local_50->GetCount() != 0) {
                local_64 = arg1 * arg1;
                this_03 = (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                  SafeBucketAllocatorEASTL>*)&local_50->field_120;
                local_88 = (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&local_50
                               ->field_168;
                arg1_00 = 0;
                local_80 = this_03;
                do {
                    this_00 = (Layout*)(*this_03)[arg1_00];
                    puVar3 = (uint64_t*)this_00->SSOBeginPtr();
                    local_40 = *puVar3;
                    local_38 = *(uint32_t*)(puVar3 + 1);
                    local_60[0] = *local_98 - local_40;
                    fVar4 = (float)local_60->LengthSq();
                    if (0.0 < fVar4) {
                        fVar4 = (float)::sqrt(fVar4);
                        local_78[0] = *local_60 / *fVar4;
                        local_40 = *local_68 * *local_78;
                        local_60->SetXYZ(local_40);
                        local_78[0] = *0.5 * *local_60;
                        this_03 = local_80;
                        local_40 = *local_64 * *local_78;
                        (*this_03)[arg1_00];
                        local_b0.end();
                        this_01 = (Vector3T<float>*)local_b0.HeapBeginPtr();
                        *this_01 += local_40;
                        local_40 = *arg1 * *local_60;
                        local_38 = in_XMM1_Da;
                        this_02 = (ParticleVertexDataProxy<math::Vector3T<float>>*)(*local_88)[arg1_00];
                        *this_02 += local_40;
                    }
                    arg1_00 = arg1_00 + 1;
                    uVar2 = local_50->GetCount();
                } while (arg1_00 < uVar2);
            }
        }
    }

    // 0x1007d8fa0
    void Attractor::RenderDebug(const math::Matrix44T<float>& matrix44, float arg2) const {
        long* plVar1;
        SideBarData local_90;
        uint8_t local_68[8];
        uint8_t local_60[16];
        uint64_t local_50;
        ColourHSL local_40;
        uint64_t local_30;
        uint32_t local_28;
        float local_24;

        if (DAT_1039bd388 != '\0') {
            local_24 = arg2;
            local_60._0_8_ = matrix44.GetPos();
            local_90.GetRot();
            local_40._0_8_ = field_8.Eval(local_24);
            local_30 = local_90 * local_40;
            local_50 = *local_60 + local_30;
            local_24 = (float)field_112.Eval(local_24);
            new (local_60) math::Sphere(local_50, local_24);
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                local_90 = oldscape::sidebars::SideBarData(-1, 3);
                (**(void (**)(...))(*plVar1 + 32))(plVar1, local_60, &local_90);
            }
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                local_40 = math::ColourHSL(local_24, 0.0, 0.0);
                local_30 = local_50 + local_40;
                local_28 = 0;
                local_90 = eastl::string("ATRACTOR");
                new (local_68) oldscape::sidebars::SideBarData(-1, 1);
                (**(void (**)(...))(*plVar1 + 136))(plVar1, &local_30, &local_90, local_68);
            }
        }
    }

} // namespace jag::graphics::particlemodules

namespace jag::math {
    // 0x1007d8660
    Vector3T<float> operator* <float>(const QuaternionT<float>& quaternion, const Vector3T<float>& vector3) {
        uint64_t uVar2;
        uint8_t local_38[16];

        auto pfVar1 = quaternion.second();
        float local_20 = *pfVar1;
        pfVar1 = (float*)vector3.y();
        local_20 = local_20 * *pfVar1;
        pfVar1 = (float*)quaternion.y();
        float local_1c = *pfVar1;
        pfVar1 = (float*)vector3.second();
        local_20 = local_20 - local_1c * *pfVar1;
        pfVar1 = (float*)quaternion.SSOBeginPtr();
        local_38._12_4_ = *pfVar1;
        pfVar1 = (float*)vector3.second();
        local_38._12_4_ = (float)local_38._12_4_ * *pfVar1;
        pfVar1 = (float*)quaternion.second();
        local_1c = *pfVar1;
        pfVar1 = (float*)vector3.SSOBeginPtr();
        local_38._12_4_ = (float)local_38._12_4_ - local_1c * *pfVar1;
        pfVar1 = (float*)quaternion.y();
        local_1c = *pfVar1;
        pfVar1 = (float*)vector3.SSOBeginPtr();
        local_1c = local_1c * *pfVar1;
        pfVar1 = (float*)quaternion.SSOBeginPtr();
        float local_24 = *pfVar1;
        pfVar1 = (float*)vector3.y();
        local_1c = local_1c - local_24 * *pfVar1;
        pfVar1 = (float*)quaternion.qw();
        local_24 = *pfVar1 * local_20;
        pfVar1 = (float*)quaternion.second();
        local_24 = *pfVar1 * (float)local_38._12_4_ + local_24;
        pfVar1 = (float*)quaternion.y();
        local_24 = local_24 - *pfVar1 * local_1c;
        pfVar1 = (float*)quaternion.qw();
        float local_28 = *pfVar1 * (float)local_38._12_4_;
        pfVar1 = (float*)quaternion.SSOBeginPtr();
        local_28 = *pfVar1 * local_1c + local_28;
        pfVar1 = (float*)quaternion.second();
        local_28 = local_28 - *pfVar1 * local_20;
        pfVar1 = (float*)quaternion.qw();
        local_1c = local_1c * *pfVar1;
        pfVar1 = (float*)quaternion.y();
        local_20 = local_20 * *pfVar1 + local_1c;
        pfVar1 = (float*)quaternion.SSOBeginPtr();
        local_20 = local_20 - (float)local_38._12_4_ * *pfVar1;
        pfVar1 = (float*)vector3.SSOBeginPtr();
        local_24 = local_24 + local_24 + *pfVar1;
        pfVar1 = (float*)vector3.y();
        local_28 = local_28 + local_28 + *pfVar1;
        pfVar1 = (float*)vector3.second();
        new (local_38) ColourHSL(local_24, local_28, local_20 + local_20 + *pfVar1);
        uVar2._0_4_ = (float)local_38._0_4_;
        uVar2._4_4_ = (float)local_38._4_4_;
        return uVar2;
    }

    // 0x1007d8ca0
    Vector3T<float> Vector3Reflect<float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        uint64_t local_28[2];

        float fVar1 = Vector3Dot<float>(vector31, vector32);
        local_28[0] = (fVar1 + fVar1) vector32;
        vector31 - *local_28;
    }

} // namespace jag::math
