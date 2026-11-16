// libs/graphics/runetek7/particles/modules/VisualModules.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "VisualModules.h"

namespace jag::graphics::particlemodules {
    // 0x100d4abf0, 12 bytes, __const
    Lighting::MODE_PARTICLE_DATA_FLAGS = {3, 4, 5};

    // 0x1007db5b0, 128 bytes, placed by debug map only (low confidence)
    // Colour::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined8 Colour::LoadFromPacket(uchar param_1, PacketT* param_2) {
        char cVar1;
        undefined8 uVar2;

        cVar1 = (&field_8, param_1, param_2)->LoadFromPacket();
        if (((cVar1 == '\0') || (cVar1 = (&field_112, param_1, param_2)->LoadFromPacket(), cVar1 == '\0')) ||
            (cVar1 = (&field_200, param_1, param_2)->LoadFromPacket(), cVar1 == '\0')) {
            return 0;
        }
        uVar2 = (&field_304, param_1, param_2)->LoadFromPacket();
        return uVar2;
    }

    // 0x1007db630, 368 bytes, placed by debug map only (low confidence)
    // Colour::ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const
    float Colour::ProcessTick(float param_1, ParticleModuleUpdateParams* param_2, ParticleModuleUpdateState* param_3,
                              ParticleData* param_4) {
        long lVar1;
        float* pfVar2;
        ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>* this_00;
        ulong uVar3;
        ulong uVar4;
        float extraout_XMM0_Da;
        float fVar5;
        float extraout_XMM0_Da_00;
        undefined8 local_98[3];
        undefined8 local_80[2];
        undefined8 local_70[2];
        vector<float, SafeBucketAllocatorEASTL>* local_60;
        ModulePropertyCurve<math::Vector3T<float>>* local_58;
        ModulePropertyCurve<math::Vector3T<float>>* local_50;
        ModulePropertyCurve<float>* local_48;
        vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>, SafeBucketAllocatorEASTL>*
            local_40;
        undefined4 local_38;
        float local_34;

        if (DAT_1039bd37a == '\0') {
            lVar1 = param_4->GetCount();
            param_1 = extraout_XMM0_Da;
            if (lVar1 != 0) {
                local_60 = (vector<float, SafeBucketAllocatorEASTL>*)&param_4->field_24;
                local_58 = (ModulePropertyCurve<math::Vector3T<float>>*)&field_8;
                local_50 = (ModulePropertyCurve<math::Vector3T<float>>*)&field_200;
                local_48 = (ModulePropertyCurve<float>*)&field_112;
                local_40 = (vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                                   SafeBucketAllocatorEASTL>*)&param_4->field_192;
                uVar4 = 0;
                do {
                    pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](local_60, uVar4);
                    local_34 = *pfVar2;
                    local_98[0] = local_58->EvalLinear(local_34);
                    pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                        (vector<float, SafeBucketAllocatorEASTL>*)param_4, uVar4);
                    local_70[0] = local_50->EvalLinear(*pfVar2);
                    local_80[0] = math::operator*((Vector3T*)local_98, (Vector3T*)local_70);
                    local_34 = (float)local_48->EvalLinear(local_34);
                    pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                        (vector<float, SafeBucketAllocatorEASTL>*)param_4, uVar4);
                    fVar5 = (float)(&field_304, *pfVar2)->EvalLinear();
                    new (local_98) math::Vector4T<float>(local_80, fVar5 * local_34);
                    new (&local_38) math::ColourStorage8888<math::RGBA8StorageLayout>(local_98);
                    math::ColourStorage8888<math::ABGR8StorageLayout>::ColourStorage8888<math::RGBA8StorageLayout>(
                        (ColourStorage8888<math::ABGR8StorageLayout>*)local_70, local_38);
                    this_00 = (ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>*)
                        eastl::vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                                      SafeBucketAllocatorEASTL>::operator[](local_40, uVar4);
                    ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>::operator=(
                        this_00, (MaterialSlotRotationData*)local_70);
                    uVar4 = uVar4 + 1;
                    uVar3 = param_4->GetCount();
                    param_1 = extraout_XMM0_Da_00;
                } while (uVar4 < uVar3);
            }
        }
        return param_1;
    }

    // 0x1007dbab0, 192 bytes, placed by debug map only (low confidence)
    // Scale::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined8 Scale::LoadFromPacket(uchar param_1, PacketT* param_2) {
        char cVar1;
        undefined8 uVar2;
        undefined4 uVar3;

        cVar1 = param_2->g1();
        field_8 = cVar1 == '\x01';
        uVar3 = param_2->gFloat();
        field_12 = uVar3;
        uVar3 = param_2->gFloat();
        field_20 = uVar3;
        uVar3 = param_2->gFloat();
        field_16 = uVar3;
        uVar3 = param_2->gFloat();
        field_24 = uVar3;
        cVar1 = (&field_32, param_1, param_2)->LoadFromPacket();
        if (((cVar1 == '\0') || (cVar1 = (&field_208, param_1, param_2)->LoadFromPacket(), cVar1 == '\0')) ||
            (cVar1 = (&field_120, param_1, param_2)->LoadFromPacket(), cVar1 == '\0')) {
            return 0;
        }
        uVar2 = (&field_296, param_1, param_2)->LoadFromPacket();
        return uVar2;
    }

    // 0x1007dbb70, 656 bytes, placed by debug map only (low confidence)
    // Scale::ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const
    undefined8 Scale::ProcessTick(float param_1, ParticleModuleUpdateParams* param_2,
                                  ParticleModuleUpdateState* param_3, ParticleData* param_4) {
        long lVar1;
        float* pfVar2;
        ulong uVar3;
        ulong uVar4;
        float fVar5;
        undefined4 in_XMM0_Db;
        undefined8 uVar6;
        undefined8 extraout_XMM0_Qa;
        undefined8 extraout_XMM0_Qa_00;
        undefined8 extraout_XMM0_Qa_01;
        undefined8 extraout_XMM0_Qa_02;
        Point<float> local_88[8];
        undefined8 local_80;
        ModulePropertyCurve<float>* local_78;
        ModulePropertyCurve<float>* local_70;
        Point<float> local_68[4];
        float local_64;
        vector<float, SafeBucketAllocatorEASTL>* local_60;
        Vector2T* local_58;
        ModulePropertyCurve<float>* local_50;
        ModulePropertyCurve<float>* local_48;
        ParticleData* local_40;
        float local_38;
        float local_34;

        uVar6 = CONCAT44(in_XMM0_Db, param_1);
        if (DAT_1039bd37f == '\0') {
            if (field_8 == false) {
                lVar1 = param_4->GetCount();
                uVar6 = extraout_XMM0_Qa_01;
                if (lVar1 != 0) {
                    local_60 = (vector<float, SafeBucketAllocatorEASTL>*)&field_12;
                    local_58 = (Vector2T*)&field_20;
                    local_50 = (ModulePropertyCurve<float>*)&field_32;
                    local_48 = (ModulePropertyCurve<float>*)&field_120;
                    local_78 = (ModulePropertyCurve<float>*)&field_208;
                    local_70 = (ModulePropertyCurve<float>*)&field_296;
                    uVar4 = 0;
                    do {
                        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                            (vector<float, SafeBucketAllocatorEASTL>*)&param_4->field_24, uVar4);
                        local_34 = *pfVar2;
                        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                            (vector<float, SafeBucketAllocatorEASTL>*)param_4, uVar4);
                        local_40 = (ParticleData*)math::Lerp<math::Vector2T<float>, float>((Vector2T*)local_60,
                                                                                           local_58, *pfVar2);
                        local_38 = (float)local_50->Eval(local_34);
                        fVar5 = (float)local_48->Eval(local_34);
                        math::Point<float>::Point(local_68, local_38, fVar5);
                        local_38 = (float)local_78->Eval(local_34);
                        fVar5 = (float)local_70->Eval(local_34);
                        math::Point<float>::Point(local_88, local_38, fVar5);
                        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                            (vector<float, SafeBucketAllocatorEASTL>*)param_4, uVar4);
                        local_80 =
                            math::Lerp<math::Vector2T<float>, float>((Vector2T*)local_68, (Vector2T*)local_88, *pfVar2);
                        math::Vector2T<float>::operator*=((Vector2T<float>*)&local_40, (Vector2T*)&local_80);
                        local_40->SetParticleSize(param_4, uVar4);
                        uVar4 = uVar4 + 1;
                        uVar3 = param_4->GetCount();
                        uVar6 = extraout_XMM0_Qa_02;
                    } while (uVar4 < uVar3);
                }
            } else {
                local_60 = (vector<float, SafeBucketAllocatorEASTL>*)&param_4->field_24;
                lVar1 = param_4->GetCount();
                uVar6 = extraout_XMM0_Qa;
                if (lVar1 != 0) {
                    local_58 = (Vector2T*)&field_12;
                    local_50 = (ModulePropertyCurve<float>*)&field_20;
                    local_48 = (ModulePropertyCurve<float>*)&field_32;
                    uVar4 = 0;
                    do {
                        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](local_60, uVar4);
                        local_34 = *pfVar2;
                        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                            (vector<float, SafeBucketAllocatorEASTL>*)param_4, uVar4);
                        fVar5 = math::Lerp<float, float>((float*)local_58, (float*)local_50, *pfVar2);
                        new (&local_40) math::Vector2T<float>(fVar5);
                        local_38 = (float)local_48->Eval(local_34);
                        fVar5 = (float)(&field_208, local_34)->Eval();
                        math::Point<float>::Point(local_68, local_38, fVar5);
                        pfVar2 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::operator[](
                            (vector<float, SafeBucketAllocatorEASTL>*)param_4, uVar4);
                        fVar5 = math::Lerp<float, float>((float*)local_68, &local_64, *pfVar2);
                        math::Vector2T<float>::operator*=((Vector2T<float>*)&local_40, fVar5);
                        local_40->SetParticleSize(param_4, uVar4);
                        uVar4 = uVar4 + 1;
                        uVar3 = param_4->GetCount();
                        uVar6 = extraout_XMM0_Qa_00;
                    } while (uVar4 < uVar3);
                }
            }
        }
        return uVar6;
    }

    // 0x1007dbe30, 544 bytes, placed by debug map only (low confidence)
    // Scale::RenderDebug(math::Matrix44T<float> const&, float) const
    void Scale::RenderDebug(Matrix44T* param_1, float param_2) {
        long* plVar1;
        char* pcVar2;
        float fVar3;
        undefined4 uVar4;
        double dVar5;
        eastl::string local_1a0[32];
        undefined8 local_180;
        undefined4 local_178;
        allocator local_170[8];
        undefined1 local_168[8];
        float local_160;
        float local_15c;
        float local_158;
        float local_154;
        float local_150;
        fixed_string<char, 256, true, eastl::allocator> local_148[296];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (DAT_1039bd38a != '\0') {
            local_150 = (float)(&field_32, param_2)->Eval();
            fVar3 = (float)(&field_120, param_2)->Eval();
            new (&local_160) math::Point<float>(local_150, fVar3);
            local_150 = (float)(&field_208, param_2)->Eval();
            fVar3 = (float)(&field_296, param_2)->Eval();
            new (&local_158) math::Point<float>(local_150, fVar3);
            eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_148);
            dVar5 = (double)local_160;
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_148, (double)param_2, dVar5, (double)local_15c, (double)local_158,
                        (double)local_154, "Size (%.2f) - %.2fx%.2f to %.2fx%.2f");
            uVar4 = SUB84(dVar5, 0);
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                local_180 = param_1->GetPos();
                local_178 = uVar4;
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::allocator::allocator(local_170, "EASTL basic_string");
                eastl::string::basic_string(local_1a0, pcVar2, local_170);
                new (local_168) oldscape::sidebars::SideBarData(-1, 3);
                (**(code**)(*plVar1 + 136))(plVar1, &local_180, local_1a0, local_168);
                eastl::string::~basic_string(local_1a0);
            }
            /* WARNING: Subroutine does not return */
            local_148->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007dc050, 64 bytes, placed by debug map only (low confidence)
    // Flipbook::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined8 Flipbook::LoadFromPacket(uchar param_1, PacketT* param_2) {
        char cVar1;

        cVar1 = param_2->g1();
        field_8 = cVar1;
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_framerate > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/VisualModules.cpp",
                      115, (char*)0);
        }
        return 1;
    }

    // 0x1007dc090, 224 bytes, placed by debug map only (low confidence)
    // Flipbook::ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const
    float Flipbook::ProcessTick(float param_1, ParticleModuleUpdateParams* param_2, ParticleModuleUpdateState* param_3,
                                ParticleData* param_4) {
        char cVar1;
        ulong uVar2;
        long lVar3;
        ulong uVar4;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        Layout local_40[8];

        if (DAT_1039bd381 == '\0') {
            uVar4 = *(ulong*)&param_2[1].field_12;
            uVar2 = param_4->GetCount();
            param_1 = extraout_XMM0_Da;
            if (uVar4 < uVar2) {
                do {
                    eastl::vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>::
                    operator[]((vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>,
                                       SafeBucketAllocatorEASTL>*)&param_4->field_240,
                               uVar4);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    lVar3 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_40);
                    ((lVar3 + 2))->set(2, true);
                    cVar1 = ((Flipbook*)this)->field_8;
                    lVar3 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_40);
                    *(char*)(lVar3 + 1) = cVar1;
                    local_40->~SplatOp();
                    uVar4 = uVar4 + 1;
                    uVar2 = param_4->GetCount();
                    param_1 = extraout_XMM0_Da_00;
                } while (uVar4 < uVar2);
            }
        }
        return param_1;
    }

    // 0x1007dc170, 64 bytes, placed by debug map only (low confidence)
    // Lighting::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined8 Lighting::LoadFromPacket(uchar param_1, PacketT* param_2) {
        byte bVar1;

        bVar1 = param_2->g1();
        field_8 = (uint)bVar1;
        bVar1 = param_2->g1();
        field_12 = bVar1;
        bVar1 = param_2->g1();
        field_13 = bVar1;
        return 1;
    }

    // 0x1007dc1b0, 240 bytes, placed by debug map only (low confidence)
    // Lighting::ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const
    float Lighting::ProcessTick(float param_1, ParticleModuleUpdateParams* param_2, ParticleModuleUpdateState* param_3,
                                ParticleData* param_4) {
        byte bVar1;
        byte bVar2;
        ulong uVar3;
        long lVar4;
        int* piVar5;
        ulong uVar6;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        Layout local_48[8];
        vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>* local_40;
        ParticleData* local_38;

        if (field_12 != 0) {
            uVar6 = *(ulong*)&param_2[1].field_12;
            local_38 = param_4;
            uVar3 = param_4->GetCount();
            param_1 = extraout_XMM0_Da;
            if (uVar6 < uVar3) {
                local_40 =
                    (vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>*)&local_38
                        ->field_240;
                do {
                    eastl::vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>,
                                  SafeBucketAllocatorEASTL>::operator[](local_40, uVar6);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    lVar4 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_48);
                    piVar5 = (int*)std::array<ParticleData::Flag, 3ul>::operator[]((long)(int)field_8);
                    ((lVar4 + 2))->set((long)*piVar5, true);
                    bVar1 = field_12;
                    bVar2 = field_13;
                    lVar4 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_48);
                    *(byte*)(lVar4 + 3) = bVar2 & 240 | bVar1 >> 4;
                    local_48->~SplatOp();
                    uVar6 = uVar6 + 1;
                    uVar3 = local_38->GetCount();
                    param_1 = extraout_XMM0_Da_00;
                } while (uVar6 < uVar3);
            }
        }
        return param_1;
    }

} // namespace jag::graphics::particlemodules

namespace jag::math {
    // 0x1007db7a0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator*<float>(Vector3T<float> const&, Vector3T<float> const&)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   Vector3T<float> const&) */

    undefined8 operator*(Vector3T* param_1, Vector3T* param_2) {
        undefined8 uVar1;
        ColourHSL local_18;

        new (&local_18) ColourHSL(*(float*)param_2 * *(float*)param_1, *(float*)(param_2 + 4) * *(float*)(param_1 + 4),
                                  *(float*)(param_2 + 8) * *(float*)(param_1 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

} // namespace jag::math
