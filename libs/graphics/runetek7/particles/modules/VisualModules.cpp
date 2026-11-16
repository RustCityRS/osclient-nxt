// libs/graphics/runetek7/particles/modules/VisualModules.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "VisualModules.h"

namespace jag::graphics::particlemodules {
    // 0x100d4abf0
    int32_t Lighting::MODE_PARTICLE_DATA_FLAGS[3] = {3, 4, 5};

    // 0x1007db5b0
    uint64_t Colour::LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2) {
        bool cVar1 = field_8.LoadFromPacket(arg1, arg2);
        if (((!cVar1) || (cVar1 = field_112.LoadFromPacket(arg1, arg2), !cVar1)) ||
            (cVar1 = field_200.LoadFromPacket(arg1, arg2), !cVar1)) {
            return 0;
        }
        return field_304.LoadFromPacket(arg1, arg2);
    }

    // 0x1007db630
    float Colour::ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                              ParticleModuleUpdateState& particleModuleUpdateState, ParticleData& particleData) const {
        long lVar1;
        float* pfVar2;
        ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>* this_00;
        unsigned long uVar3;
        unsigned long arg1_00;
        float extraout_XMM0_Da;
        float fVar4;
        float extraout_XMM0_Da_00;
        uint64_t local_98[3];
        uint64_t local_80[2];
        UVAnimationData local_70;
        vector<float, SafeBucketAllocatorEASTL>* local_60;
        ModulePropertyCurve<math::Vector3T<float>>* local_58;
        ModulePropertyCurve<math::Vector3T<float>>* local_50;
        ModulePropertyCurve<float>* local_48;
        vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>, SafeBucketAllocatorEASTL>*
            local_40;
        unsigned int local_38;
        float local_34;

        if (DAT_1039bd37a == '\0') {
            lVar1 = particleData.GetCount();
            arg1 = extraout_XMM0_Da;
            if (lVar1 != 0) {
                local_60 = (vector<float, SafeBucketAllocatorEASTL>*)&particleData.field_24;
                local_58 = (ModulePropertyCurve<math::Vector3T<float>>*)&field_8;
                local_50 = (ModulePropertyCurve<math::Vector3T<float>>*)&field_200;
                local_48 = (ModulePropertyCurve<float>*)&field_112;
                local_40 = (vector<ParticleVertexDataProxy<math::ColourStorage8888<math::ABGR8StorageLayout>>,
                                   SafeBucketAllocatorEASTL>*)&particleData.field_192;
                arg1_00 = 0;
                do {
                    pfVar2 = (float*)(*local_60)[arg1_00];
                    local_34 = *pfVar2;
                    local_98[0] = local_58->EvalLinear(local_34);
                    pfVar2 = &particleData[arg1_00];
                    local_70._0_8_ = local_50->EvalLinear(*pfVar2);
                    local_80[0] = *local_98 * local_70;
                    local_34 = (float)local_48->EvalLinear(local_34);
                    pfVar2 = &particleData[arg1_00];
                    fVar4 = (float)field_304.EvalLinear(*pfVar2);
                    new (local_98) math::Vector4T(*local_80, fVar4 * local_34);
                    new (&local_38) math::ColourStorage8888(local_98);
                    local_70.ColourStorage8888<math::RGBA8StorageLayout>(
                        (ColourStorage8888<math::RGBA8StorageLayout>*)(unsigned long)local_38);
                    this_00 = (ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>*)(*local_40)[arg1_00];
                    *this_00 = local_70;
                    arg1_00 = arg1_00 + 1;
                    uVar3 = particleData.GetCount();
                    arg1 = extraout_XMM0_Da_00;
                } while (arg1_00 < uVar3);
            }
        }
        return arg1;
    }

    // 0x1007dbab0
    uint64_t Scale::LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2) {
        char cVar1 = arg2.g1();
        field_8 = cVar1 == '\x01';
        uint32_t uVar3 = arg2.gFloat();
        field_12 = uVar3;
        uVar3 = arg2.gFloat();
        field_20 = uVar3;
        uVar3 = arg2.gFloat();
        field_16 = uVar3;
        uVar3 = arg2.gFloat();
        field_24 = uVar3;
        cVar1 = field_32.LoadFromPacket(arg1, arg2);
        if (((!cVar1) || (cVar1 = field_208.LoadFromPacket(arg1, arg2), !cVar1)) ||
            (cVar1 = field_120.LoadFromPacket(arg1, arg2), !cVar1)) {
            return 0;
        }
        return field_296.LoadFromPacket(arg1, arg2);
    }

    // 0x1007dbb70
    uint64_t Scale::ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                ParticleModuleUpdateState& particleModuleUpdateState,
                                ParticleData& particleData) const {
        long lVar1;
        float* pfVar2;
        unsigned long uVar3;
        Vector2T<float>* vector2;
        Vector2T<float>* vector2_00;
        unsigned long uVar4;
        float fVar5;
        uint32_t in_XMM0_Db;
        uint64_t extraout_XMM0_Qa;
        uint64_t extraout_XMM0_Qa_00;
        uint64_t extraout_XMM0_Qa_01;
        uint64_t extraout_XMM0_Qa_02;
        Point<float> local_88;
        uint64_t local_80;
        ModulePropertyCurve<float>* local_78;
        ModulePropertyCurve<float>* local_70;
        Point<float> local_68;
        float local_64;
        vector<float, SafeBucketAllocatorEASTL>* local_60;
        Vector2T<float>* local_58;
        ModulePropertyCurve<float>* local_50;
        ModulePropertyCurve<float>* local_48;
        uint64_t local_40;
        float local_38;
        float local_34;

        uint64_t uVar6 = (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1);
        if (DAT_1039bd37f == '\0') {
            if (field_8 == false) {
                lVar1 = particleData.GetCount();
                uVar6 = extraout_XMM0_Qa_01;
                if (lVar1 != 0) {
                    local_60 = (vector<float, SafeBucketAllocatorEASTL>*)&field_12;
                    local_58 = (Vector2T<float>*)&field_20;
                    local_50 = (ModulePropertyCurve<float>*)&field_32;
                    local_48 = (ModulePropertyCurve<float>*)&field_120;
                    local_78 = (ModulePropertyCurve<float>*)&field_208;
                    local_70 = (ModulePropertyCurve<float>*)&field_296;
                    uVar4 = 0;
                    do {
                        pfVar2 = &particleData.field_24[uVar4];
                        local_34 = *pfVar2;
                        pfVar2 = &particleData[uVar4];
                        local_40 = math::Lerp<math::Vector2T<float>, float>(*local_60, *local_58, *pfVar2);
                        local_38 = (float)local_50->Eval(local_34);
                        fVar5 = (float)local_48->Eval(local_34);
                        local_68 = math::Point(local_38, fVar5);
                        local_38 = (float)local_78->Eval(local_34);
                        fVar5 = (float)local_70->Eval(local_34);
                        local_88 = math::Point(local_38, fVar5);
                        pfVar2 = &particleData[uVar4];
                        local_80 = math::Lerp<math::Vector2T<float>, float>(local_68, local_88, *pfVar2);
                        local_40 *= &local_80;
                        particleData.SetParticleSize(uVar4, vector2_00);
                        uVar4 = uVar4 + 1;
                        uVar3 = particleData.GetCount();
                        uVar6 = extraout_XMM0_Qa_02;
                    } while (uVar4 < uVar3);
                }
            } else {
                local_60 = (vector<float, SafeBucketAllocatorEASTL>*)&particleData.field_24;
                lVar1 = particleData.GetCount();
                uVar6 = extraout_XMM0_Qa;
                if (lVar1 != 0) {
                    local_58 = (Vector2T<float>*)&field_12;
                    local_50 = (ModulePropertyCurve<float>*)&field_20;
                    local_48 = (ModulePropertyCurve<float>*)&field_32;
                    uVar4 = 0;
                    do {
                        pfVar2 = (float*)(*local_60)[uVar4];
                        local_34 = *pfVar2;
                        pfVar2 = &particleData[uVar4];
                        fVar5 = math::Lerp<float, float>(*local_58, *local_50, *pfVar2);
                        new (&local_40) math::Vector2T(fVar5);
                        local_38 = (float)local_48->Eval(local_34);
                        fVar5 = (float)field_208.Eval(local_34);
                        local_68 = math::Point(local_38, fVar5);
                        pfVar2 = &particleData[uVar4];
                        fVar5 = math::Lerp<float, float>(local_68, local_64, *pfVar2);
                        local_40 *= fVar5;
                        particleData.SetParticleSize(uVar4, vector2);
                        uVar4 = uVar4 + 1;
                        uVar3 = particleData.GetCount();
                        uVar6 = extraout_XMM0_Qa_00;
                    } while (uVar4 < uVar3);
                }
            }
        }
        return uVar6;
    }

    // 0x1007dbe30
    void Scale::RenderDebug(const math::Matrix44T<float>& matrix44, float arg2) const {
        long* plVar1;
        char* str;
        float fVar2;
        uint32_t uVar3;
        double dVar4;
        eastl::string local_1a0;
        uint64_t local_180;
        uint32_t local_178;
        uint8_t local_168[8];
        float local_160;
        float local_15c;
        float local_158;
        float local_154;
        float local_150;
        fixed_string<char, 256> local_148;

        if (DAT_1039bd38a != '\0') {
            local_150 = (float)field_32.Eval(arg2);
            fVar2 = (float)field_120.Eval(arg2);
            new (&local_160) math::Point(local_150, fVar2);
            local_150 = (float)field_208.Eval(arg2);
            fVar2 = (float)field_296.Eval(arg2);
            new (&local_158) math::Point(local_150, fVar2);
            local_148 = eastl::fixed_string<char, 256>();
            dVar4 = (double)local_160;
            local_148.sprintf("Size (%.2f) - %.2fx%.2f to %.2fx%.2f", (double)arg2, dVar4, (double)local_15c,
                              (double)local_158, (double)local_154);
            uVar3 = (uint32_t)dVar4;
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                local_180 = matrix44.GetPos();
                local_178 = uVar3;
                str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_1a0 = eastl::string(str);
                new (local_168) oldscape::sidebars::SideBarData(-1, 3);
                (**(void (**)(...))(*plVar1 + 136))(plVar1, &local_180, &local_1a0, local_168);
            }
        }
    }

    // 0x1007dc050
    uint64_t Flipbook::LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2) {
        char cVar1 = arg2.g1();
        field_8 = cVar1;
        if (!cVar1) {
            LogAssert("m_framerate > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/modules/VisualModules.cpp",
                      115, nullptr);
        }
        return 1;
    }

    // 0x1007dc090
    float Flipbook::ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                ParticleModuleUpdateState& particleModuleUpdateState,
                                ParticleData& particleData) const {
        bool cVar1;
        unsigned long uVar2;
        long lVar3;
        unsigned long arg1_00;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_40;

        if (reinterpret_cast<const uint64_t*>(&m_debugDisabled)[1] == '\0') {
            arg1_00 = *(unsigned long*)&particleModuleUpdateParams[1].field_12;
            uVar2 = particleData.GetCount();
            arg1 = extraout_XMM0_Da;
            if (arg1_00 < uVar2) {
                do {
                    particleData.field_240[arg1_00];
                    local_40.end();
                    lVar3 = local_40.HeapBeginPtr();
                    *((lVar3 + 2)) = eastl::bitset<7ul, unsigned char>::set(2, true);
                    cVar1 = field_8;
                    lVar3 = local_40.HeapBeginPtr();
                    *(char*)(lVar3 + 1) = cVar1;
                    arg1_00 = arg1_00 + 1;
                    uVar2 = particleData.GetCount();
                    arg1 = extraout_XMM0_Da_00;
                } while (arg1_00 < uVar2);
            }
        }
        return arg1;
    }

    // 0x1007dc170
    uint64_t Lighting::LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2) {
        uint8_t bVar1 = arg2.g1();
        field_8 = (unsigned int)bVar1;
        bVar1 = arg2.g1();
        field_12 = bVar1;
        bVar1 = arg2.g1();
        field_13 = bVar1;
        return 1;
    }

    // 0x1007dc1b0
    float Lighting::ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                ParticleModuleUpdateState& particleModuleUpdateState,
                                ParticleData& particleData) const {
        uint8_t bVar1;
        uint8_t bVar2;
        unsigned long uVar3;
        long lVar4;
        int* piVar5;
        unsigned long arg1_00;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_48;
        vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>* local_40;
        ParticleData* local_38;

        if (field_12 != 0) {
            arg1_00 = *(unsigned long*)&particleModuleUpdateParams[1].field_12;
            local_38 = particleData;
            uVar3 = particleData.GetCount();
            arg1 = extraout_XMM0_Da;
            if (arg1_00 < uVar3) {
                local_40 =
                    (vector<ParticleVertexDataProxy<ParticleData::UVAnimationData>, SafeBucketAllocatorEASTL>*)&local_38
                        ->field_240;
                do {
                    uVar3 = (*local_40)[arg1_00];
                    local_48.end();
                    lVar4 = local_48.HeapBeginPtr();
                    piVar5 = (int*)(*((array<ParticleData::Flag, 3ul>*)(long)(int)field_8))[uVar3];
                    *((lVar4 + 2)) = eastl::bitset<7ul, unsigned char>::set((long)*piVar5, true);
                    bVar1 = field_12;
                    bVar2 = field_13;
                    lVar4 = local_48.HeapBeginPtr();
                    *(uint8_t*)(lVar4 + 3) = bVar2 & 240 | bVar1 >> 4;
                    arg1_00 = arg1_00 + 1;
                    uVar3 = local_38->GetCount();
                    arg1 = extraout_XMM0_Da_00;
                } while (arg1_00 < uVar3);
            }
        }
        return arg1;
    }

} // namespace jag::graphics::particlemodules

namespace jag::math {
    // 0x1007db7a0
    Vector3T<float> operator* <float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        uint64_t uVar1;

        ColourHSL local_18(*(float*)vector32 * *(float*)vector31, *(float*)(vector32 + 4) * *(float*)(vector31 + 4),
                           *(float*)(vector32 + 8) * *(float*)(vector31 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

} // namespace jag::math
