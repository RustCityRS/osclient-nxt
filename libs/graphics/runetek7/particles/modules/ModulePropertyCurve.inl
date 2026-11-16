// libs/graphics/runetek7/particles/modules/ModulePropertyCurve.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    // 0x1007d7dd0, 192 bytes, inline, placed by class name and debug map
    // ModulePropertyCurve<float>::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined1 ModulePropertyCurve<float>::LoadFromPacket(uchar param_1, PacketT* param_2) {
        char cVar1;
        undefined4* puVar2;
        undefined4* puVar3;
        undefined4 uVar4;

        cVar1 = param_2->g1();
        eastl::vector<ModulePropertyCurve<float>::Key,
                      eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::resize((ulong)this);
        if (cVar1 == '\x01') {
            puVar3 = (undefined4*)front();
            uVar4 = param_2->gFloat();
            *puVar3 = uVar4;
            uVar4 = DecodePayload(param_2);
            puVar3[1] = uVar4;
        } else {
            puVar3 = (undefined4*)HeapBeginPtr();
            puVar2 = (undefined4*)end();
            for (; puVar3 != puVar2; puVar3 = puVar3 + 4) {
                uVar4 = param_2->gFloat();
                *puVar3 = uVar4;
                uVar4 = DecodePayload(param_2);
                puVar3[1] = uVar4;
                uVar4 = param_2->gFloat();
                puVar3[2] = uVar4;
                uVar4 = DecodePayload(param_2);
                puVar3[3] = uVar4;
            }
            GenerateEvalCache(this);
        }
        return 1;
    }

    // 0x1007d8040, 400 bytes, inline, placed by class name and debug map
    // ModulePropertyCurve<float>::Eval(float) const
    float ModulePropertyCurve<float>::Eval(float param_1) {
        vector<eastl::pair<int, int>, eastl::allocator>* this_00;
        int iVar1;
        int iVar2;
        long lVar3;
        float* pfVar4;
        float* pfVar5;
        float fVar6;

        if ((param_1 < 0.0) || (1.0 < param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("(t >= 0.f) && (t <= 1.f)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      42, (char*)0);
        }
        lVar3 = size();
        if (lVar3 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_keys.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      43, (char*)0);
        }
        this_00 = (vector<eastl::pair<int, int>, eastl::allocator>*)(this + 56);
        lVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_00);
        if (lVar3 == 0) {
            lVar3 = size();
            if (lVar3 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_keys.size() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/modules/ModulePropertyCurve.inl",
                          48, (char*)0);
            }
            lVar3 = back();
        } else {
            iVar1 = GetStartingKeyIndex<eastl::vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>>(
                (vector*)this_00, param_1);
            if (iVar1 < 0) {
                lVar3 = this_00->front();
            } else {
                iVar2 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_00);
                if (iVar1 < iVar2 + -1) {
                    pfVar4 =
                        (float*)eastl::vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>::operator[](
                            (vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>*)this_00, (long)iVar1);
                    pfVar5 =
                        (float*)eastl::vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>::operator[](
                            (vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>*)this_00,
                            (long)(iVar1 + 1));
                    fVar6 = (param_1 - *pfVar4) / (*pfVar5 - *pfVar4);
                    if ((0.0 <= fVar6) && (fVar6 <= 1.0)) {
                        fVar6 = math::Lerp<float, float>(pfVar4 + 1, pfVar5 + 1, fVar6);
                        return fVar6;
                    }
                    /* WARNING: Subroutine does not return */
                    LogAssert("(interpolator >= 0.f) && (interpolator <= 1.f)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "particles/modules/ModulePropertyCurve.inl",
                              69, (char*)0);
                }
                lVar3 = this_00->back();
            }
        }
        return *(float*)(lVar3 + 4);
    }

    // 0x1007d81d0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<ParticleData::PositionTimeData>::SplatOp::~SplatOp(): jumps straight to the base-object destructor

    // 0x1007d81e0, 64 bytes, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<math::Vector3T<float> >::operator+=(math::Vector3T<float> const&)
    /* ParticleVertexDataProxy<math::Vector3T<float>
   >::TEMPNAMEPLACEHOLDERVALUE(math::Vector3T<float> const&) */

    ParticleVertexDataProxy<math::Vector3T<float>>*
    ParticleVertexDataProxy<math::Vector3T<float>>::operator+=(Vector3T* param_1) {
        Vector3T* pVVar1;

        pVVar1 = (Vector3T*)math::Vector3T<float>::operator+=((Vector3T<float>*)(this + 36), param_1);
        pVVar1 = (Vector3T*)((this + 24))->SetXYZ(pVVar1);
        pVVar1 = (Vector3T*)((this + 12))->SetXYZ(pVVar1);
        SetXYZ(pVVar1);
        return this;
    }

    // 0x1007d8290, 272 bytes, inline, placed by class name and debug map
    // ModulePropertyCurve<math::Vector3T<float> >::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined1 ModulePropertyCurve<math::Vector3T<float>>::LoadFromPacket(uchar param_1, PacketT* param_2) {
        char cVar1;
        undefined4* puVar2;
        undefined4* puVar3;
        undefined4 uVar4;
        undefined8 local_40[2];

        cVar1 = param_2->g1();
        eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::Key,
                      eastl::fixed_vector_allocator<32ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::resize((ulong)this);
        if (cVar1 == '\x01') {
            puVar3 = (undefined4*)front();
            uVar4 = param_2->gFloat();
            *puVar3 = uVar4;
            local_40[0] = DecodePayload(param_2);
            ((puVar3 + 1))->SetXYZ(local_40);
        } else {
            puVar3 = (undefined4*)HeapBeginPtr();
            puVar2 = (undefined4*)end();
            if (puVar3 != puVar2) {
                do {
                    uVar4 = param_2->gFloat();
                    *puVar3 = uVar4;
                    local_40[0] = DecodePayload(param_2);
                    ((puVar3 + 1))->SetXYZ(local_40);
                    uVar4 = param_2->gFloat();
                    puVar3[4] = uVar4;
                    local_40[0] = DecodePayload(param_2);
                    ((puVar3 + 5))->SetXYZ(local_40);
                    puVar3 = puVar3 + 8;
                } while (puVar3 != puVar2);
            }
            GenerateEvalCache(this);
        }
        return 1;
    }

    // 0x1007d88e0, 416 bytes, inline, placed by class name and debug map
    // ModulePropertyCurve<math::Vector3T<float> >::Eval(float) const
    undefined8 ModulePropertyCurve<math::Vector3T<float>>::Eval(float param_1) {
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00;
        int iVar1;
        int iVar2;
        long lVar3;
        float* pfVar4;
        float fVar5;
        undefined8 uVar6;
        undefined1 auVar7[16];

        if ((param_1 < 0.0) || (1.0 < param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("(t >= 0.f) && (t <= 1.f)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      42, (char*)0);
        }
        lVar3 = size();
        if (lVar3 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_keys.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      43, (char*)0);
        }
        this_00 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(this + 72);
        lVar3 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
        if (lVar3 == 0) {
            lVar3 = size();
            if (lVar3 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_keys.size() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/modules/ModulePropertyCurve.inl",
                          48, (char*)0);
            }
            lVar3 = back();
        } else {
            iVar1 = GetStartingKeyIndex<
                eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>>(
                (vector*)this_00, param_1);
            if (iVar1 < 0) {
                lVar3 = this_00->front();
            } else {
                iVar2 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
                if (iVar1 < iVar2 + -1) {
                    pfVar4 = (float*)eastl::
                        vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>::operator[](
                            (vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>*)this_00,
                            (long)iVar1);
                    auVar7 = eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>::
                    operator[](
                        (vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>*)this_00,
                        (long)(iVar1 + 1));
                    fVar5 = (param_1 - *pfVar4) / (*auVar7._0_8_ - *pfVar4);
                    if ((0.0 <= fVar5) && (fVar5 <= 1.0)) {
                        uVar6 = math::Lerp<math::Vector3T<float>, float>(
                            (math*)(pfVar4 + 1), (Vector3T*)(auVar7._0_8_ + 1), auVar7._8_8_, fVar5);
                        return uVar6;
                    }
                    /* WARNING: Subroutine does not return */
                    LogAssert("(interpolator >= 0.f) && (interpolator <= 1.f)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "particles/modules/ModulePropertyCurve.inl",
                              69, (char*)0);
                }
                lVar3 = this_00->back();
            }
        }
        return *(undefined8*)(lVar3 + 4);
    }

    // 0x1007d8ce0, 64 bytes, inline, placed by debug map only (low confidence)
    // ParticleVertexDataProxy<math::Vector3T<float> >::operator=(math::Vector3T<float>&&)
    /* ParticleVertexDataProxy<math::Vector3T<float>
   >::TEMPNAMEPLACEHOLDERVALUE(math::Vector3T<float> const&) */

    ParticleVertexDataProxy<math::Vector3T<float>>*
    ParticleVertexDataProxy<math::Vector3T<float>>::operator=(Vector3T* param_1) {
        Vector3T* pVVar1;

        pVVar1 = (Vector3T*)((this + 36))->SetXYZ(param_1);
        pVVar1 = (Vector3T*)((this + 24))->SetXYZ(pVVar1);
        pVVar1 = (Vector3T*)((this + 12))->SetXYZ(pVVar1);
        SetXYZ(pVVar1);
        return this;
    }

    // 0x1007db7e0, 336 bytes, inline, placed by __FILE__ string
    // ModulePropertyCurve<math::Vector3T<float> >::EvalLinear(float) const
    undefined8 ModulePropertyCurve<math::Vector3T<float>>::EvalLinear(float param_1) {
        int iVar1;
        int iVar2;
        long lVar3;
        float* pfVar4;
        float fVar5;
        undefined8 uVar6;
        undefined1 auVar7[16];

        if ((param_1 < 0.0) || (1.0 < param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("(t >= 0.f) && (t <= 1.f)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      111, (char*)0);
        }
        lVar3 = size();
        if (lVar3 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_keys.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      112, (char*)0);
        }
        iVar1 = GetStartingKeyIndex<
            eastl::fixed_vector<ModulePropertyCurve<math::Vector3T<float>>::Key, 1ul, true, eastl::allocator>>(
            (fixed_vector*)this, param_1);
        if (iVar1 < 0) {
            lVar3 = front();
        } else {
            iVar2 = size();
            if (iVar1 < iVar2) {
                pfVar4 =
                    (float*)eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::Key,
                                          eastl::fixed_vector_allocator<32ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<ModulePropertyCurve<math::Vector3T<float>>::Key,
                                eastl::fixed_vector_allocator<32ul, 1ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                        (long)iVar1);
                auVar7 = eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::Key,
                                       eastl::fixed_vector_allocator<32ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<ModulePropertyCurve<math::Vector3T<float>>::Key,
                                   eastl::fixed_vector_allocator<32ul, 1ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                           (long)(iVar1 + 1));
                fVar5 = (param_1 - *pfVar4) / (*auVar7._0_8_ - *pfVar4);
                if ((0.0 <= fVar5) && (fVar5 <= 1.0)) {
                    uVar6 = math::Lerp<math::Vector3T<float>, float>((math*)(pfVar4 + 1), (Vector3T*)(auVar7._0_8_ + 1),
                                                                     auVar7._8_8_, fVar5);
                    return uVar6;
                }
                /* WARNING: Subroutine does not return */
                LogAssert("(interpolator >= 0.f) && (interpolator <= 1.f)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/modules/ModulePropertyCurve.inl",
                          132, (char*)0);
            }
            lVar3 = back();
        }
        return *(undefined8*)(lVar3 + 4);
    }

    // 0x1007db930, 320 bytes, inline, placed by __FILE__ string
    // ModulePropertyCurve<float>::EvalLinear(float) const
    float ModulePropertyCurve<float>::EvalLinear(float param_1) {
        int iVar1;
        int iVar2;
        long lVar3;
        float* pfVar4;
        float* pfVar5;
        float fVar6;

        if ((param_1 < 0.0) || (1.0 < param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("(t >= 0.f) && (t <= 1.f)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      111, (char*)0);
        }
        lVar3 = size();
        if (lVar3 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_keys.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      112, (char*)0);
        }
        iVar1 = GetStartingKeyIndex<eastl::fixed_vector<ModulePropertyCurve<float>::Key, 1ul, true, eastl::allocator>>(
            (fixed_vector*)this, param_1);
        if (iVar1 < 0) {
            lVar3 = front();
        } else {
            iVar2 = size();
            if (iVar1 < iVar2) {
                pfVar4 =
                    (float*)eastl::vector<ModulePropertyCurve<float>::Key,
                                          eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<ModulePropertyCurve<float>::Key,
                                eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                        (long)iVar1);
                pfVar5 =
                    (float*)eastl::vector<ModulePropertyCurve<float>::Key,
                                          eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<ModulePropertyCurve<float>::Key,
                                eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                        (long)(iVar1 + 1));
                fVar6 = (param_1 - *pfVar4) / (*pfVar5 - *pfVar4);
                if ((0.0 <= fVar6) && (fVar6 <= 1.0)) {
                    fVar6 = math::Lerp<float, float>(pfVar4 + 1, pfVar5 + 1, fVar6);
                    return fVar6;
                }
                /* WARNING: Subroutine does not return */
                LogAssert("(interpolator >= 0.f) && (interpolator <= 1.f)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/modules/ModulePropertyCurve.inl",
                          132, (char*)0);
            }
            lVar3 = back();
        }
        return *(float*)(lVar3 + 4);
    }

    // 0x1007e76e0, 208 bytes, inline, placed by __FILE__ string
    // int ModulePropertyCurve<float>::GetStartingKeyIndex<eastl::vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator> >(eastl::vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator> const&, float)
    int ModulePropertyCurve<float>::GetStartingKeyIndex<
        eastl::vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>>(vector* param_1, float param_2) {
        char cVar1;
        int iVar2;
        int iVar3;
        long lVar4;
        float* pfVar5;
        ulong uVar6;

        cVar1 = param_1->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!keys.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      168, (char*)0);
        }
        iVar2 = -1;
        if ((((param_2 != 0.0) && (lVar4 = param_1->size(), lVar4 != 1)) && (iVar2 = param_1->size(), param_2 < 1.0)) &&
            (iVar3 = param_1->size(), 0 < iVar3)) {
            uVar6 = 0;
            do {
                pfVar5 = (float*)eastl::vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>::operator[](
                    (vector<ModulePropertyCurve<float>::CacheEntry, eastl::allocator>*)param_1, uVar6);
                if (param_2 < *pfVar5) {
                    return (int)uVar6 + -1;
                }
                uVar6 = uVar6 + 1;
                iVar3 = param_1->size();
            } while ((long)uVar6 < (long)iVar3);
        }
        return iVar2;
    }

    // 0x1007e78a0, 208 bytes, inline, placed by __FILE__ string
    // int ModulePropertyCurve<math::Vector3T<float> >::GetStartingKeyIndex<eastl::vector<ModulePropertyCurve<math::Vector3T<float> >::CacheEntry, eastl::allocator> >(eastl::vector<ModulePropertyCurve<math::Vector3T<float> >::CacheEntry, eastl::allocator> const&, float)
    int ModulePropertyCurve<math::Vector3T<float>>::GetStartingKeyIndex<
        eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>>(vector* param_1,
                                                                                                 float param_2) {
        char cVar1;
        int iVar2;
        int iVar3;
        long lVar4;
        float* pfVar5;
        ulong uVar6;

        cVar1 = param_1->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!keys.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      168, (char*)0);
        }
        iVar2 = -1;
        if ((((param_2 != 0.0) && (lVar4 = param_1->size(), lVar4 != 1)) && (iVar2 = param_1->size(), param_2 < 1.0)) &&
            (iVar3 = param_1->size(), 0 < iVar3)) {
            uVar6 = 0;
            do {
                pfVar5 = (float*)
                    eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>::operator[](
                        (vector<ModulePropertyCurve<math::Vector3T<float>>::CacheEntry, eastl::allocator>*)param_1,
                        uVar6);
                if (param_2 < *pfVar5) {
                    return (int)uVar6 + -1;
                }
                uVar6 = uVar6 + 1;
                iVar3 = param_1->size();
            } while ((long)uVar6 < (long)iVar3);
        }
        return iVar2;
    }

    // 0x1007e7aa0, 208 bytes, inline, placed by __FILE__ string
    // int ModulePropertyCurve<math::Vector3T<float> >::GetStartingKeyIndex<eastl::fixed_vector<ModulePropertyCurve<math::Vector3T<float> >::Key, 1ul, true, eastl::allocator> >(eastl::fixed_vector<ModulePropertyCurve<math::Vector3T<float> >::Key, 1ul, true, eastl::allocator> const&, float)
    int ModulePropertyCurve<math::Vector3T<float>>::GetStartingKeyIndex<
        eastl::fixed_vector<ModulePropertyCurve<math::Vector3T<float>>::Key, 1ul, true, eastl::allocator>>(
        fixed_vector* param_1, float param_2) {
        char cVar1;
        int iVar2;
        int iVar3;
        long lVar4;
        float* pfVar5;
        ulong uVar6;

        cVar1 = param_1->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!keys.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      168, (char*)0);
        }
        iVar2 = -1;
        if ((((param_2 != 0.0) && (lVar4 = param_1->size(), lVar4 != 1)) && (iVar2 = param_1->size(), param_2 < 1.0)) &&
            (iVar3 = param_1->size(), 0 < iVar3)) {
            uVar6 = 0;
            do {
                pfVar5 =
                    (float*)eastl::vector<ModulePropertyCurve<math::Vector3T<float>>::Key,
                                          eastl::fixed_vector_allocator<32ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<ModulePropertyCurve<math::Vector3T<float>>::Key,
                                eastl::fixed_vector_allocator<32ul, 1ul, 4ul, 0ul, true, eastl::allocator>>*)param_1,
                        uVar6);
                if (param_2 < *pfVar5) {
                    return (int)uVar6 + -1;
                }
                uVar6 = uVar6 + 1;
                iVar3 = param_1->size();
            } while ((long)uVar6 < (long)iVar3);
        }
        return iVar2;
    }

    // 0x1007e7be0, 208 bytes, inline, placed by __FILE__ string
    // int ModulePropertyCurve<float>::GetStartingKeyIndex<eastl::fixed_vector<ModulePropertyCurve<float>::Key, 1ul, true, eastl::allocator> >(eastl::fixed_vector<ModulePropertyCurve<float>::Key, 1ul, true, eastl::allocator> const&, float)
    int ModulePropertyCurve<float>::GetStartingKeyIndex<
        eastl::fixed_vector<ModulePropertyCurve<float>::Key, 1ul, true, eastl::allocator>>(fixed_vector* param_1,
                                                                                           float param_2) {
        char cVar1;
        int iVar2;
        int iVar3;
        long lVar4;
        float* pfVar5;
        ulong uVar6;

        cVar1 = param_1->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!keys.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/ModulePropertyCurve.inl",
                      168, (char*)0);
        }
        iVar2 = -1;
        if ((((param_2 != 0.0) && (lVar4 = param_1->size(), lVar4 != 1)) && (iVar2 = param_1->size(), param_2 < 1.0)) &&
            (iVar3 = param_1->size(), 0 < iVar3)) {
            uVar6 = 0;
            do {
                pfVar5 =
                    (float*)eastl::vector<ModulePropertyCurve<float>::Key,
                                          eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<ModulePropertyCurve<float>::Key,
                                eastl::fixed_vector_allocator<16ul, 1ul, 4ul, 0ul, true, eastl::allocator>>*)param_1,
                        uVar6);
                if (param_2 < *pfVar5) {
                    return (int)uVar6 + -1;
                }
                uVar6 = uVar6 + 1;
                iVar3 = param_1->size();
            } while ((long)uVar6 < (long)iVar3);
        }
        return iVar2;
    }

} // namespace jag::graphics

namespace jag::graphics::particlemodules {
    // 0x1007d7e90, 432 bytes, placed by debug map only (low confidence)
    // Gravity::ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const
    void Gravity::ProcessTick(float param_1, ParticleModuleUpdateParams* param_2, ParticleModuleUpdateState* param_3,
                              ParticleData* param_4) {
        long lVar1;
        float* pfVar2;
        Vector3T<float>* this_00;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_01;
        ulong uVar3;
        ulong uVar4;
        float fVar5;
        Layout local_98[8];
        undefined8 local_90[2];
        undefined8 local_80[2];
        vector<float, SafeBucketAllocatorEASTL>* local_70;
        ModulePropertyCurve<float>* local_68;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* local_60;
        vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>* local_58;
        undefined8 local_50;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        if (DAT_1039bd37b == '\0') {
            local_34 = param_1;
            lVar1 = param_4->GetCount();
            if (lVar1 != 0) {
                local_38 = local_34 * local_34;
                local_70 = (vector<float, SafeBucketAllocatorEASTL>*)&param_4->field_24;
                local_68 = (ModulePropertyCurve<float>*)&field_8;
                local_60 =
                    (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>*)&param_4
                        ->field_120;
                local_58 = (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&param_4
                               ->field_168;
                uVar4 = 0;
                do {
                    pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](local_70, uVar4);
                    local_3c = *pfVar2;
                    local_44 = (float)local_68->Eval(local_3c);
                    local_40 = (float)(&field_96, local_3c)->Eval();
                    pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                        (vector<float, SafeBucketAllocatorEASTL>*)param_4, uVar4);
                    fVar5 = math::Lerp<float, float>(&local_44, &local_40, *pfVar2);
                    local_90[0] = math::operator*((Vector3T*)PTR_UP_100ee66d0, fVar5);
                    local_50 = math::operator*((Vector3T*)local_90, 0.5);
                    local_80[0] = math::operator*((Vector3T*)&local_50, local_38);
                    local_50 = math::operator*((Vector3T*)local_90, local_34);
                    eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                  SafeBucketAllocatorEASTL>::operator[](local_60, uVar4);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    this_00 = (Vector3T<float>*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_98);
                    math::Vector3T<float>::operator+=(this_00, (Vector3T*)local_80);
                    local_98->~SplatOp();
                    this_01 = (ParticleVertexDataProxy<math::Vector3T<float>>*)
                        eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>,
                                      SafeBucketAllocatorEASTL>::operator[](local_58, uVar4);
                    ParticleVertexDataProxy<math::Vector3T<float>>::operator+=(this_01, (Vector3T*)&local_50);
                    uVar4 = uVar4 + 1;
                    uVar3 = param_4->GetCount();
                } while (uVar4 < uVar3);
            }
        }
    }

    // 0x1007d8220, 112 bytes, placed by debug map only (low confidence)
    // TriggerPlane::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined8 TriggerPlane::LoadFromPacket(uchar param_1, PacketT* param_2) {
        byte bVar1;
        char cVar2;
        undefined8 uVar3;

        bVar1 = param_2->g1();
        field_216 = bVar1;
        cVar2 = (&field_224, param_1, param_2)->LoadFromPacket();
        if ((cVar2 == '\0') || (cVar2 = (&field_8, param_1, param_2)->LoadFromPacket(), cVar2 == '\0')) {
            return 0;
        }
        uVar3 = (&field_112, param_1, param_2)->LoadFromPacket();
        return uVar3;
    }

    // 0x1007d8a80, 128 bytes, placed by debug map only (low confidence)
    // TriggerPlane::ApplyBounce(ParticleData&, unsigned long, math::Vector3T<float> const&, float)
    void TriggerPlane::ApplyBounce(ParticleData* param_1, ulong param_2, Vector3T* param_3, float param_4) {
        Layout* this_00;
        vector* pvVar1;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_01;
        undefined8 local_40[2];
        undefined8 local_30;

        this_00 = (Layout*)
            eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&field_168,
                (ulong)param_1);
        pvVar1 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)param_1);
        local_30 = math::Vector3Reflect<float>((Vector3T*)pvVar1, (Vector3T*)param_2);
        local_40[0] = math::operator*((Vector3T*)&local_30, param_4);
        this_01 = (ParticleVertexDataProxy<math::Vector3T<float>>*)
            eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>::operator[](
                (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&field_168,
                (ulong)param_1);
        ParticleVertexDataProxy<math::Vector3T<float>>::operator=(this_01, (Vector3T*)local_40);
    }

    // 0x1007d8b00, 96 bytes, placed by debug map only (low confidence)
    // TriggerPlane::ApplyKill(ParticleData&, unsigned long, float)
    void TriggerPlane::ApplyKill(ParticleData* param_1, ulong param_2, float param_3) {
        float fVar1;
        float* pfVar2;

        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&param_1->field_24, param_2);
        fVar1 = *pfVar2;
        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
            (vector<float, SafeBucketAllocatorEASTL>*)&param_1->field_24, param_2);
        *pfVar2 = (1.0 - fVar1) * param_3 + *pfVar2;
    }

    // 0x1007d8b60, 304 bytes, placed by debug map only (low confidence)
    // TriggerPlane::RenderDebug(math::Matrix44T<float> const&, float) const
    void TriggerPlane::RenderDebug(Matrix44T* param_1, float param_2) {
        byte bVar1;
        long* plVar2;
        uint uVar3;
        uint uVar4;
        undefined8 local_68[2];
        SideBarData local_58;
        undefined8 local_48[2];
        undefined8 local_38[2];

        if (DAT_1039bd387 != '\0') {
            local_38[0] = param_1->GetPos();
            local_58._0_8_ = (&field_8, param_2)->Eval();
            local_48[0] = math::operator*(param_1, (Vector3T*)&local_58);
            local_68[0] = math::operator+((Vector3T*)local_38, (Vector3T*)local_48);
            local_38[0] = (&field_112, param_2)->Eval();
            local_48[0] = math::operator*(param_1, (Vector3T*)local_38);
            new (local_38) math::PlaneT<float>(local_48, local_68);
            bVar1 = field_216;
            uVar3 = 4294901760;
            if ((bVar1 & 2) == 0) {
                uVar3 = 4278190080;
            }
            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != (long*)0) {
                uVar4 = uVar3 | 255;
                if ((bVar1 & 1) == 0) {
                    uVar4 = uVar3;
                }
                new (&local_58) oldscape::sidebars::SideBarData(uVar4, 3);
                (**(code**)(*plVar2 + 104))(plVar2, local_68, local_38, 500, 500, &local_58);
            }
        }
    }

    // 0x1007d8d20, 80 bytes, placed by debug map only (low confidence)
    // Attractor::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined8 Attractor::LoadFromPacket(uchar param_1, PacketT* param_2) {
        char cVar1;
        undefined8 uVar2;

        cVar1 = (&field_8, param_1, param_2)->LoadFromPacket();
        if (cVar1 == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = (&field_112, param_1, param_2)->LoadFromPacket();
        }
        return uVar2;
    }

    // 0x1007d8d70, 560 bytes, placed by debug map only (low confidence)
    // Attractor::ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const
    void Attractor::ProcessTick(float param_1, ParticleModuleUpdateParams* param_2, ParticleModuleUpdateState* param_3,
                                ParticleData* param_4) {
        long lVar1;
        type* ptVar2;
        Layout* this_00;
        vector* pvVar3;
        Vector3T<float>* this_01;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_02;
        type* ptVar4;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* this_03;
        float fVar5;
        undefined4 in_XMM1_Da;
        Layout local_b0[8];
        undefined8 local_a8[2];
        undefined8 local_98[2];
        vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>* local_88;
        vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>, SafeBucketAllocatorEASTL>* local_80;
        undefined8 local_78[2];
        float local_68;
        float local_64;
        undefined8 local_60[2];
        ParticleData* local_50;
        float local_44;
        undefined8 local_40;
        undefined4 local_38;

        if (DAT_1039bd37d == '\0') {
            local_50 = param_4;
            local_44 = param_1;
            local_a8[0] = (&field_8, *(float*)&param_2[1].field_28)->Eval();
            local_60[0] = math::operator*((QuaternionT*)&param_2->field_44, (Vector3T*)local_a8);
            local_98[0] = math::operator+((Vector3T*)&param_2->field_32, (Vector3T*)local_60);
            local_68 = (float)(&field_112, *(float*)&param_2[1].field_28)->Eval();
            lVar1 = local_50->GetCount();
            if (lVar1 != 0) {
                local_64 = local_44 * local_44;
                this_03 = (vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                  SafeBucketAllocatorEASTL>*)&local_50->field_120;
                local_88 = (vector<ParticleVertexDataProxy<math::Vector3T<float>>, SafeBucketAllocatorEASTL>*)&local_50
                               ->field_168;
                ptVar4 = (type*)0;
                local_80 = this_03;
                do {
                    ptVar2 = ptVar4;
                    this_00 = (Layout*)eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                                     SafeBucketAllocatorEASTL>::operator[](this_03, (ulong)ptVar4);
                    pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar2);
                    local_40 = *(undefined8*)pvVar3;
                    local_38 = *(undefined4*)(pvVar3 + 8);
                    local_60[0] = math::operator-((Vector3T*)local_98, (Vector3T*)&local_40);
                    fVar5 = (float)local_60->LengthSq();
                    if (0.0 < fVar5) {
                        fVar5 = (float)::sqrt(fVar5);
                        local_78[0] = math::operator/((Vector3T*)local_60, fVar5);
                        local_40 = math::operator*((Vector3T*)local_78, local_68);
                        local_60->SetXYZ((Vector3T*)&local_40);
                        local_78[0] = math::operator*((Vector3T*)local_60, 0.5);
                        this_03 = local_80;
                        local_40 = math::operator*((Vector3T*)local_78, local_64);
                        eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                      SafeBucketAllocatorEASTL>::operator[](this_03, (ulong)ptVar4);
                        eastl::rbtree<
                            unsigned int,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::less<unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<
                                unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                            true, true>::end();
                        this_01 = (Vector3T<float>*)eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(local_b0);
                        math::Vector3T<float>::operator+=(this_01, (Vector3T*)&local_40);
                        local_b0->~SplatOp();
                        local_40 = math::operator*((Vector3T*)local_60, local_44);
                        local_38 = in_XMM1_Da;
                        this_02 = (ParticleVertexDataProxy<math::Vector3T<float>>*)
                            eastl::vector<ParticleVertexDataProxy<math::Vector3T<float>>,
                                          SafeBucketAllocatorEASTL>::operator[](local_88, (ulong)ptVar4);
                        ParticleVertexDataProxy<math::Vector3T<float>>::operator+=(this_02, (Vector3T*)&local_40);
                    }
                    ptVar4 = ptVar4 + 1;
                    ptVar2 = (type*)local_50->GetCount();
                } while (ptVar4 < ptVar2);
            }
        }
    }

    // 0x1007d8fa0, 448 bytes, placed by debug map only (low confidence)
    // Attractor::RenderDebug(math::Matrix44T<float> const&, float) const
    void Attractor::RenderDebug(Matrix44T* param_1, float param_2) {
        long* plVar1;
        allocator local_98[8];
        SideBarData local_90[3];
        undefined1 local_68[8];
        undefined1 local_60[16];
        undefined8 local_50;
        ColourHSL local_40;
        undefined8 local_30;
        undefined4 local_28;
        float local_24;

        if (DAT_1039bd388 != '\0') {
            local_24 = param_2;
            local_60._0_8_ = param_1->GetPos();
            local_90->GetRot();
            local_40._0_8_ = (&field_8, local_24)->Eval();
            local_30 = math::operator*((Matrix33T*)local_90, (Vector3T*)&local_40);
            local_50 = math::operator+((Vector3T*)local_60, (Vector3T*)&local_30);
            local_24 = (float)(&field_112, local_24)->Eval();
            new (local_60) math::Sphere((Vector3T*)&local_50, local_24);
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                oldscape::sidebars::SideBarData::SideBarData(local_90, -1, 3);
                (**(code**)(*plVar1 + 32))(plVar1, local_60, local_90);
            }
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                new (&local_40) math::ColourHSL(local_24, 0.0, 0.0);
                local_30 = math::operator+((Vector3T*)&local_50, (Vector3T*)&local_40);
                local_28 = 0;
                eastl::allocator::allocator(local_98, "EASTL basic_string");
                new (local_90) eastl::string("ATRACTOR", local_98);
                new (local_68) oldscape::sidebars::SideBarData(-1, 1);
                (**(code**)(*plVar1 + 136))(plVar1, &local_30, local_90, local_68);
                local_90->~basic_string();
            }
        }
    }

} // namespace jag::graphics::particlemodules

namespace jag::math {
    // 0x1007d8660, 640 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator*<float>(QuaternionT<float> const&, Vector3T<float> const&)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(QuaternionT<float>
   const&, Vector3T<float> const&) */

    undefined8 operator*(QuaternionT* param_1, Vector3T* param_2) {
        float* pfVar1;
        vector* pvVar2;
        undefined8 uVar4;
        undefined1 local_38[16];
        float local_28;
        float local_24;
        float local_20;
        float local_1c;

        pfVar1 = (float*)param_1->second();
        local_20 = *pfVar1;
        pfVar1 = (float*)param_2->y();
        local_20 = local_20 * *pfVar1;
        pfVar1 = (float*)param_1->y();
        local_1c = *pfVar1;
        pfVar1 = (float*)param_2->second();
        local_20 = local_20 - local_1c * *pfVar1;
        pvVar2 = param_1->SSOBeginPtr(param_2);
        local_38._12_4_ = *(undefined4*)pvVar2;
        pfVar1 = (float*)param_2->second();
        local_38._12_4_ = (float)local_38._12_4_ * *pfVar1;
        pfVar1 = (float*)param_1->second();
        local_1c = *pfVar1;
        pvVar2 = param_2->SSOBeginPtr(param_2);
        local_38._12_4_ = (float)local_38._12_4_ - local_1c * *(float*)pvVar2;
        pfVar1 = (float*)param_1->y();
        local_1c = *pfVar1;
        pvVar2 = param_2->SSOBeginPtr(param_2);
        local_1c = local_1c * *(float*)pvVar2;
        pvVar2 = param_1->SSOBeginPtr(param_2);
        local_24 = *(float*)pvVar2;
        pfVar1 = (float*)param_2->y();
        local_1c = local_1c - local_24 * *pfVar1;
        pfVar1 = (float*)param_1->qw();
        local_24 = *pfVar1 * local_20;
        pfVar1 = (float*)param_1->second();
        local_24 = *pfVar1 * (float)local_38._12_4_ + local_24;
        pfVar1 = (float*)param_1->y();
        local_24 = local_24 - *pfVar1 * local_1c;
        pfVar1 = (float*)param_1->qw();
        local_28 = *pfVar1 * (float)local_38._12_4_;
        pvVar2 = param_1->SSOBeginPtr(param_2);
        local_28 = *(float*)pvVar2 * local_1c + local_28;
        pfVar1 = (float*)param_1->second();
        local_28 = local_28 - *pfVar1 * local_20;
        pfVar1 = (float*)param_1->qw();
        local_1c = local_1c * *pfVar1;
        pfVar1 = (float*)param_1->y();
        local_20 = local_20 * *pfVar1 + local_1c;
        pvVar2 = param_1->SSOBeginPtr(param_2);
        local_20 = local_20 - (float)local_38._12_4_ * *(float*)pvVar2;
        pvVar2 = param_2->SSOBeginPtr(param_2);
        local_24 = local_24 + local_24 + *(float*)pvVar2;
        pfVar1 = (float*)param_2->y();
        local_28 = local_28 + local_28 + *pfVar1;
        pfVar1 = (float*)param_2->second();
        new (local_38) ColourHSL(local_24, local_28, local_20 + local_20 + *pfVar1);
        uVar4._0_4_ = (float)local_38._0_4_;
        uVar4._4_4_ = (float)local_38._4_4_;
        return uVar4;
    }

    // 0x1007d8c90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PlaneT<float>::PlaneT(Vector3T<float> const&, Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x1007d8ca0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> Vector3Reflect<float>(Vector3T<float> const&, Vector3T<float> const&)
    void Vector3Reflect<float>(Vector3T* param_1, Vector3T* param_2) {
        float fVar1;
        undefined8 local_28[2];

        fVar1 = Vector3Dot<float>(param_1, param_2);
        local_28[0] = operator*(param_2, fVar1 + fVar1);
        operator-(param_1, (Vector3T*)local_28);
    }

} // namespace jag::math
