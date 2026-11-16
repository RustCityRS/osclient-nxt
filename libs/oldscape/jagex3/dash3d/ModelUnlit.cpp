// libs/oldscape/jagex3/dash3d/ModelUnlit.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "ModelUnlit.h"
#include "ModelRSeven.h"

namespace jag::oldscape::dash3d {
    // 0x100d429a0
    bool ModelUnlitImpl::m_debug = 1;

    // 0x103936580, set at startup by ___cxx_global_var_init.101
    eastl::fixed_vector<int, 10000ul> ModelUnlitImpl::m_shareMap = fixed_vector<int, 10000ul>();

    // 0x1039401e8, set at startup by ___cxx_global_var_init.102
    eastl::fixed_vector<int, 10000ul> ModelUnlitImpl::m_shareMap2 = fixed_vector<int, 10000ul>();

    // 0x103949e50
    int32_t ModelUnlitImpl::m_shareTic;

    // 0x103949e54
    int32_t ModelUnlitImpl::m_oX;

    // 0x103949e58
    int32_t ModelUnlitImpl::m_oY;

    // 0x103949e5c
    int32_t ModelUnlitImpl::m_oZ;

    // 0x10002a770: ModelUnlit::~ModelUnlit() has the same machine code as void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*)

    // 0x100350700
    auto ModelUnlitImpl::Load(jagex3::Js5& js5, int arg2, int arg3) {
        PacketT<Array<unsigned char>>* packetT;
        unsigned char* local_58;
        unsigned long local_50;
        unsigned int local_34;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        if ((uint8_t*)js5.GetFile(local_48, arg2, arg3, nullptr) == DataStatus::READY) {
            packetT = (PacketT<Array<unsigned char>>*)local_48.operator->();
            local_58 = (unsigned char*)packetT->GetDataPtr();
            if (local_58 == nullptr) {
                auto result;
            } else {
                local_50 = ((TextureAtlasReference*)local_48.operator->())->GetTextureAtlas();
                local_34 = arg2 << 16 | arg3;
                make_shared<ModelUnlitImpl, unsigned char*&, unsigned long, int>(&result, &local_58, &local_50,
                                                                                 (int*)&local_34);
            }
        } else {
            new (&result) shared_ptr();
        }
        return result;
    }

    // 0x100350830
    void ModelUnlitImpl::CalculateNormals() {
        uint8_t* this_00;
        uint8_t* this_01;
        uint8_t* this_02;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        Array<FaceNormal>* this_03;
        ReturnValue* pRVar8;
        int* piVar9;
        unsigned long arg1;
        Array<signed char>* this_04;
        char* pcVar10;
        Array<PointNormal>* pAVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        unsigned long arg1_00;
        char cVar15;
        int iVar16;
        int iVar17;
        unsigned long arg1_01;
        int iVar18;
        uint8_t* objType;
        unsigned long arg1_02;
        double dVar19;
        ReturnValue local_40;

        uint8_t* midiPlayerMainThread = &field_432;
        if (!(*midiPlayerMainThread != nullptr)) {
            make_shared<Array<PointNormal>, int&>(&local_40, (int*)&field_20);
            *midiPlayerMainThread = local_40;
            if (0 < field_96) {
                this_00 = &field_24;
                this_01 = &field_48;
                this_02 = &field_72;
                objType = &field_416;
                arg1_00 = 0;
                do {
                    piVar9 = &field_104[arg1_00];
                    arg1_02 = (unsigned long)*piVar9;
                    piVar9 = &field_128[arg1_00];
                    arg1_01 = (unsigned long)*piVar9;
                    piVar9 = &field_152[arg1_00];
                    arg1 = (unsigned long)*piVar9;
                    piVar9 = (int*)(*this_00)[arg1_01];
                    iVar18 = *piVar9;
                    piVar9 = (int*)(*this_00)[arg1_02];
                    iVar12 = *piVar9;
                    piVar9 = (int*)(*this_01)[arg1_01];
                    iVar14 = *piVar9;
                    piVar9 = (int*)(*this_01)[arg1_02];
                    iVar17 = *piVar9;
                    piVar9 = (int*)(*this_02)[arg1_01];
                    iVar16 = *piVar9;
                    piVar9 = (int*)(*this_02)[arg1_02];
                    iVar1 = *piVar9;
                    piVar9 = (int*)(*this_00)[arg1];
                    iVar2 = *piVar9;
                    piVar9 = (int*)(*this_00)[arg1_02];
                    iVar3 = *piVar9;
                    piVar9 = (int*)(*this_01)[arg1];
                    iVar4 = *piVar9;
                    piVar9 = (int*)(*this_01)[arg1_02];
                    iVar5 = *piVar9;
                    piVar9 = (int*)(*this_02)[arg1];
                    iVar6 = *piVar9;
                    piVar9 = (int*)(*this_02)[arg1_02];
                    iVar13 = (iVar6 - *piVar9) * (iVar14 - iVar17) - (iVar4 - iVar5) * (iVar16 - iVar1);
                    iVar16 = (iVar16 - iVar1) * (iVar2 - iVar3) - (iVar6 - *piVar9) * (iVar18 - iVar12);
                    iVar18 = (iVar4 - iVar5) * (iVar18 - iVar12) - (iVar2 - iVar3) * (iVar14 - iVar17);
                    if (((((8192 < iVar13) || (8192 < iVar16)) || (8192 < iVar18)) ||
                         ((iVar13 < -8192 || (iVar16 < -8192)))) ||
                        (iVar18 < -8192)) {
                        do {
                            do {
                                iVar17 = iVar18;
                                iVar14 = iVar16;
                                iVar12 = iVar13;
                                iVar13 = iVar12 >> 1;
                                iVar16 = iVar14 >> 1;
                                iVar18 = iVar17 >> 1;
                            } while (16385 < iVar12);
                        } while (((16385 < iVar14) || (16385 < iVar17)) ||
                                 ((iVar12 < -16384 || ((iVar14 < -16384 || (iVar17 < -16384))))));
                    }
                    dVar19 = (double)sqrt<int>(iVar18 * iVar18 + iVar16 * iVar16 + iVar13 * iVar13);
                    iVar12 = (int)dVar19;
                    if (iVar12 < 1) {
                        iVar12 = 1;
                    }
                    iVar14 = (iVar13 << 8) / iVar12;
                    iVar17 = (iVar16 << 8) / iVar12;
                    iVar12 = (iVar18 << 8) / iVar12;
                    cVar15 = '\0';
                    if (!(field_176 == nullptr)) {
                        this_04 = (Array<signed char>*)*field_176;
                        pcVar10 = (char*)(*this_04)[arg1_00];
                        cVar15 = *pcVar10;
                    }
                    if (cVar15 == '\x01') {
                        if (*objType == nullptr) {
                            make_shared<Array<FaceNormal>, int&>(&local_40, &field_96);
                            *objType = local_40;
                        }
                        local_40 = (ReturnValue)0;
                        new (&local_40) jag::math::Vector3T();
                        this_03 = (Array<FaceNormal>*)**objType;
                        pRVar8 = (ReturnValue*)(*this_03)[arg1_00];
                        *pRVar8 = local_40;
                        *(int*)(pRVar8 + 1) = 0;
                        *(int*)pRVar8 = iVar14;
                        *(int*)&pRVar8->field_4 = iVar17;
                        *(int*)(pRVar8 + 1) = iVar12;
                    } else if (!cVar15) {
                        pAVar11 = (Array<PointNormal>*)**midiPlayerMainThread;
                        piVar9 = (int*)(*pAVar11)[arg1_02];
                        *piVar9 = *piVar9 + iVar14;
                        piVar9[1] = piVar9[1] + iVar17;
                        piVar9[2] = piVar9[2] + iVar12;
                        piVar9[3] = piVar9[3] + 1;
                        pAVar11 = (Array<PointNormal>*)**midiPlayerMainThread;
                        piVar9 = (int*)(*pAVar11)[arg1_01];
                        *piVar9 = *piVar9 + iVar14;
                        piVar9[1] = piVar9[1] + iVar17;
                        piVar9[2] = piVar9[2] + iVar12;
                        piVar9[3] = piVar9[3] + 1;
                        pAVar11 = (Array<PointNormal>*)**midiPlayerMainThread;
                        piVar9 = (int*)(*pAVar11)[arg1];
                        *piVar9 = *piVar9 + iVar14;
                        piVar9[1] = piVar9[1] + iVar17;
                        piVar9[2] = piVar9[2] + iVar12;
                        piVar9[3] = piVar9[3] + 1;
                    }
                    arg1_00 = arg1_00 + 1;
                } while ((long)arg1_00 < (long)field_96);
            }
        }
    }

    // 0x100350e70
    void ModelRSevenUnlit::BakedVertexLighting() {
        (OSRenderCore_LogicThread_RSeven::Instance()->GetEffectList())->Contains(43);
    }

    // 0x100352e90
    ModelUnlit* ModelUnlit::Load(jagex3::Js5& js5, int arg2, int arg3, bool arg4) {
        ReturnValue local_28;

        if (g_usingRSeven == '\0') {
            local_28 = ModelUnlitImpl::Load(js5, arg2, arg3);
            shared_ptr<FileRSevenDebugPresetProvider, void>(local_28);
        } else {
            local_28.Load(js5, arg2, arg3, arg4);
            shared_ptr<FileRSevenDebugPresetProvider, void>(local_28);
        }
        return this;
    }

    // 0x100352f30
    ModelUnlit* ModelUnlit::Combine(const eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>& modelUnlits) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        long* plVar4;
        ModelUnlit* pMVar5;
        int iVar6;
        int iVar7;
        ReturnValue local_48;

        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)modelUnlits.HeapBeginPtr();
        auto psVar3 = modelUnlits.end();
        if (midiPlayerMainThread == psVar3) {
            iVar7 = 0;
            iVar6 = 0;
        } else {
            iVar6 = 0;
            iVar7 = 0;
            do {
                if (*midiPlayerMainThread != nullptr) {
                    plVar4 = (long*)(*midiPlayerMainThread).operator->();
                    if ((**(void (**)(...))(*plVar4 + 56))(plVar4) == '\0') {
                        iVar7 = iVar7 + 1;
                    } else {
                        iVar6 = iVar6 + 1;
                    }
                }
                midiPlayerMainThread = midiPlayerMainThread + 16;
            } while (midiPlayerMainThread != psVar3);
        }
        if ((iVar6 != 0) && (iVar7 != 0)) {
            LogAssert("nR7 == 0 || nJ == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelUnlit.cpp",
                      48, nullptr);
        }
        if ((iVar7 == 0) && ((iVar6 != 0 || (g_usingRSeven != '\0')))) {
            local_48 = ModelRSevenUnlit::Combine(modelUnlits);
            pMVar5 = this;
            shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        } else {
            make_shared<ModelUnlitImpl, eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL> const&>(
                &local_48, modelUnlits);
            pMVar5 = this;
            shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        }
        return pMVar5;
    }

    // 0x100353120
    auto ModelUnlit::Copy(const ModelUnlit& modelUnlit, bool arg2, bool arg3, bool arg4, bool arg5) {
        (modelUnlit._vptr[3]._x7e___2)(modelUnlit);
    }

    // 0x1003532a0
    void ModelUnlit::ShareLight(ModelUnlit& modelUnlit1, ModelUnlit& modelUnlit2, int arg3, int arg4, int arg5,
                                bool arg6) {
        (modelUnlit1._vptr[3]._x7e___2)();
    }

    // 0x100353360
    void ModelUnlitImpl::ShareLight(ModelUnlitImpl& modelUnlitImpl1, ModelUnlitImpl& modelUnlitImpl2, int arg3,
                                    int arg4, int arg5, bool arg6) {
        uint8_t* puVar1;
        uint8_t* uint8_t;
        uint8_t* objType;
        uint8_t* objType_00;
        int iVar2;
        int iVar3;
        int iVar4;
        uint64_t uVar5;
        int iVar7;
        Array<PointNormal>* pAVar8;
        int* piVar9;
        int* piVar10;
        int* piVar11;
        int* piVar12;
        Array<signed char>* pAVar13;
        uint8_t* puVar14;
        int iVar15;
        unsigned long arg1;
        int iVar16;
        unsigned long uVar17;
        ModelUnlitImpl* pMVar18;
        Array<int>* pAVar19;
        ReturnValue local_68;
        Array<int>* local_58;
        Array<int>* local_50;

        CalcBoundingCube(modelUnlitImpl1);
        CalculateNormals(modelUnlitImpl1);
        CalcBoundingCube(modelUnlitImpl2);
        CalculateNormals(modelUnlitImpl2);
        m_shareTic = m_shareTic + 1;
        unsigned int local_34 = modelUnlitImpl2.field_20;
        ModelUnlitImpl* local_48 = modelUnlitImpl1;
        ModelUnlitImpl* local_40 = modelUnlitImpl2;
        if ((int)modelUnlitImpl1.field_20 < 1) {
            iVar16 = 0;
        } else {
            local_50 = (Array<int>*)&modelUnlitImpl2.field_24;
            uint8_t = &modelUnlitImpl2.field_432;
            puVar1 = &modelUnlitImpl2.field_72;
            puVar14 = &modelUnlitImpl2.field_48;
            objType = &modelUnlitImpl1.field_560;
            objType_00 = &modelUnlitImpl2.field_560;
            uVar17 = 0;
            iVar16 = 0;
            do {
                pAVar8 = (Array<PointNormal>*)modelUnlitImpl1.field_432;
                piVar9 = (int*)(*pAVar8)[uVar17];
                if (piVar9[3] != 0) {
                    piVar10 = &modelUnlitImpl1.field_48[uVar17];
                    iVar2 = *piVar10;
                    if (iVar2 - arg4 <= modelUnlitImpl2.field_580) {
                        piVar10 = &modelUnlitImpl1.field_24[uVar17];
                        iVar15 = *piVar10 - arg3;
                        if ((modelUnlitImpl2.field_584 <= iVar15) && (iVar15 <= modelUnlitImpl2.field_588)) {
                            piVar10 = &modelUnlitImpl1.field_72[uVar17];
                            iVar7 = *piVar10 - arg5;
                            if ((modelUnlitImpl2.field_596 <= iVar7) &&
                                ((iVar7 <= modelUnlitImpl2.field_592 && (0 < (int)local_34)))) {
                                local_58 = (Array<int>*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)iVar15);
                                arg1 = 0;
                                do {
                                    pAVar8 = (Array<PointNormal>*)**uint8_t;
                                    piVar10 = (int*)(*pAVar8)[arg1];
                                    piVar11 = (int*)(*local_50)[arg1];
                                    if ((int)local_58 == *piVar11) {
                                        piVar11 = (int*)(*puVar1)[arg1];
                                        if (iVar7 == *piVar11) {
                                            piVar11 = (int*)(*puVar14)[arg1];
                                            if ((iVar2 - arg4 == *piVar11) && (piVar10[3] != 0)) {
                                                if (*objType == nullptr) {
                                                    make_shared<Array<PointNormal>, int&>(
                                                        &local_68, (int*)&modelUnlitImpl1.field_20);
                                                    *objType = local_68;
                                                    local_68.~shared_ptr();
                                                }
                                                if (*objType_00 == nullptr) {
                                                    make_shared<Array<PointNormal>, int&>(&local_68, (int*)&local_34);
                                                    *objType_00 = local_68;
                                                    local_68.~shared_ptr();
                                                }
                                                pAVar8 = (Array<PointNormal>*)**objType;
                                                piVar11 = (int*)(*pAVar8)[uVar17];
                                                if (piVar11[3] == 0) {
                                                    uVar5 = *(uint64_t*)(piVar9 + 2);
                                                    *(uint64_t*)piVar11 = *(uint64_t*)piVar9;
                                                    *(uint64_t*)(piVar11 + 2) = uVar5;
                                                }
                                                pAVar8 = (Array<PointNormal>*)**objType_00;
                                                piVar12 = (int*)(*pAVar8)[arg1];
                                                if (piVar12[3] == 0) {
                                                    iVar15 = piVar10[1];
                                                    iVar3 = piVar10[2];
                                                    iVar4 = piVar10[3];
                                                    *piVar12 = *piVar10;
                                                    piVar12[1] = iVar15;
                                                    piVar12[2] = iVar3;
                                                    piVar12[3] = iVar4;
                                                }
                                                *piVar11 = *piVar11 + *piVar10;
                                                piVar11[1] = piVar11[1] + piVar10[1];
                                                piVar11[2] = piVar11[2] + piVar10[2];
                                                piVar11 = piVar11 + 3;
                                                *piVar11 = *piVar11 + piVar10[3];
                                                if (*piVar11 == 0) {
                                                    LogAssert(
                                                        "p1.m_c != 0",
                                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/ModelUnlit.cpp",
                                                        3026, nullptr);
                                                }
                                                *piVar12 = *piVar12 + *piVar9;
                                                piVar12[1] = piVar12[1] + piVar9[1];
                                                piVar12[2] = piVar12[2] + piVar9[2];
                                                piVar12 = piVar12 + 3;
                                                *piVar12 = *piVar12 + piVar9[3];
                                                iVar15 = m_shareTic;
                                                if (*piVar12 == 0) {
                                                    LogAssert(
                                                        "p2.m_c != 0",
                                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/ModelUnlit.cpp",
                                                        3032, nullptr);
                                                }
                                                iVar16 = iVar16 + 1;
                                                piVar10 = &m_shareMap[uVar17];
                                                *piVar10 = iVar15;
                                                iVar15 = m_shareTic;
                                                piVar10 = &m_shareMap2[arg1];
                                                *piVar10 = iVar15;
                                                modelUnlitImpl2 = local_40;
                                            }
                                        }
                                    }
                                    arg1 = arg1 + 1;
                                } while ((long)arg1 < (long)(int)local_34);
                            }
                        }
                    }
                }
                uVar17 = uVar17 + 1;
            } while ((long)uVar17 < (long)(int)modelUnlitImpl1.field_20);
        }
        if ((2 < iVar16) && (arg6)) {
            if (0 < local_48->field_96) {
                piVar9 = &local_48->field_96;
                puVar1 = &local_48->field_104;
                pAVar19 = (Array<int>*)&local_48->field_128;
                local_58 = (Array<int>*)&local_48->field_152;
                local_48 = (ModelUnlitImpl*)&local_48->field_176;
                uVar17 = 0;
                local_50 = pAVar19;
                do {
                    piVar10 = (int*)(*puVar1)[uVar17];
                    piVar10 = &m_shareMap[(long)*piVar10];
                    if (*piVar10 == m_shareTic) {
                        piVar10 = (int*)(*pAVar19)[uVar17];
                        piVar10 = &m_shareMap[(long)*piVar10];
                        if (*piVar10 == m_shareTic) {
                            piVar10 = (int*)(*local_58)[uVar17];
                            piVar10 = &m_shareMap[(long)*piVar10];
                            pMVar18 = local_48;
                            if (*piVar10 == m_shareTic) {
                                if (*local_48 == nullptr) {
                                    make_shared<Array<signed char>, int&>(&local_68, piVar9);
                                    *pMVar18 = local_68;
                                    pMVar18 = local_48;
                                }
                                pAVar13 = (Array<signed char>*)**pMVar18;
                                puVar14 = (uint8_t*)(*pAVar13)[uVar17];
                                *puVar14 = 2;
                                pAVar19 = local_50;
                            }
                        }
                    }
                    uVar17 = uVar17 + 1;
                } while ((long)uVar17 < (long)*piVar9);
            }
            if (0 < local_40->field_96) {
                piVar9 = &local_40->field_96;
                puVar1 = &local_40->field_104;
                pAVar19 = (Array<int>*)&local_40->field_128;
                local_58 = (Array<int>*)&local_40->field_152;
                local_40 = (ModelUnlitImpl*)&local_40->field_176;
                uVar17 = 0;
                local_50 = pAVar19;
                do {
                    piVar10 = (int*)(*puVar1)[uVar17];
                    piVar10 = &m_shareMap2[(long)*piVar10];
                    if (*piVar10 == m_shareTic) {
                        piVar10 = (int*)(*pAVar19)[uVar17];
                        piVar10 = &m_shareMap2[(long)*piVar10];
                        if (*piVar10 == m_shareTic) {
                            piVar10 = (int*)(*local_58)[uVar17];
                            piVar10 = &m_shareMap2[(long)*piVar10];
                            pMVar18 = local_40;
                            if (*piVar10 == m_shareTic) {
                                if (*local_40 == nullptr) {
                                    make_shared<Array<signed char>, int&>(&local_68, piVar9);
                                    *pMVar18 = local_68;
                                    pMVar18 = local_40;
                                }
                                pAVar13 = (Array<signed char>*)**pMVar18;
                                puVar14 = (uint8_t*)(*pAVar13)[uVar17];
                                *puVar14 = 2;
                                pAVar19 = local_50;
                            }
                        }
                    }
                    uVar17 = uVar17 + 1;
                } while ((long)uVar17 < (long)*piVar9);
            }
        }
    }

    // 0x1003539e0
    void ModelUnlitImpl::Init() {
        unsigned long uVar1 = m_shareMap.capacity();
        m_shareMap.resize(uVar1);
        uVar1 = m_shareMap2.capacity();
        m_shareMap2.resize(uVar1);
    }

    // 0x100353b30
    ModelUnlitImpl::ModelUnlitImpl(unsigned char* arg1, unsigned long arg2, int arg3) : ModelUnlit(), field_20(0) {
        WindowSavedPosition local_128;

        uint8_t* local_108 = &field_24;
        new (&field_48) Array<int>();
        uint8_t* local_f8 = &field_72;
        uint8_t* local_100 = &field_48;
        new (local_f8) Array<int>();
        field_96 = 0;
        uint8_t* local_f0 = &field_104;
        new (local_f0) Array<int>();
        uint8_t* local_e8 = &field_128;
        new (local_e8) Array<int>();
        uint8_t* local_e0 = &field_152;
        new (local_e0) Array<int>();
        uint8_t* local_d8 = &field_176;
        new (local_d8) shared_ptr();
        uint8_t* local_d0 = &field_192;
        new (local_d0) shared_ptr();
        uint8_t* local_c8 = &field_208;
        new (local_c8) shared_ptr();
        uint8_t* local_c0 = &field_224;
        new (local_c0) shared_ptr();
        uint8_t* local_b8 = &field_240;
        new (local_b8) shared_ptr();
        uint8_t* local_b0 = &field_256;
        new (local_b0) shared_ptr();
        uint8_t* local_a8 = &field_272;
        new (local_a8) shared_ptr();
        uint8_t* local_a0 = &field_288;
        new (local_a0) SharedArray();
        field_312 = 0;
        uint8_t* local_98 = &field_320;
        new (local_98) Array<signed char>();
        uint8_t* local_90 = &field_344;
        new (local_90) Array<short>();
        uint8_t* local_88 = &field_368;
        new (local_88) Array<short>();
        uint8_t* local_80 = &field_392;
        new (local_80) Array<short>();
        uint8_t* local_78 = &field_416;
        new (local_78) shared_ptr();
        uint8_t* local_70 = &field_432;
        new (local_70) shared_ptr();
        uint8_t* local_68 = &field_448;
        new (local_68) shared_ptr();
        uint8_t* local_60 = &field_464;
        new (local_60) shared_ptr();
        uint8_t* local_58 = &field_480;
        new (local_58) shared_ptr();
        uint8_t* local_50 = &field_496;
        new (local_50) shared_ptr();
        uint8_t* local_48 = &field_512;
        new (local_48) shared_ptr();
        uint8_t* local_40 = &field_528;
        new (local_40) shared_ptr();
        new (&field_544) shared_ptr();
        new (&field_560) shared_ptr();
        field_576 = 0;
        field_12 = arg3;
        local_128.PacketT(10);
        local_128.p2<unsigned long>(65534);
        unsigned char uVar1 = arg1[arg2 - 1];
        if (uVar1 == 255) {
            if (arg1[arg2 - 2] == 255) {
                LoadOb3Engine200(arg1, arg2);
                goto LAB_100353dd0;
            }
        } else if (uVar1 == 254) {
            if (arg1[arg2 - 2] == 255) {
                LoadOb2(arg1, arg2);
                goto LAB_100353dd0;
            }
        } else if ((uVar1 == 253) && (arg1[arg2 - 2] == 255)) {
            LoadOb3(arg1, arg2);
            goto LAB_100353dd0;
        }
        LoadOb2Engine200(arg1, arg2);
    LAB_100353dd0:
    }

    // 0x100354080
    void ModelUnlitImpl::LoadOb3(unsigned char* arg1, unsigned long arg2) {
        char cVar3;
        uint8_t bVar4;
        uint8_t uVar5;
        short sVar10;
        short sVar11;
        short sVar12;
        uint32_t uVar16;
        char* pcVar17;
        uint8_t* puVar18;
        int* piVar19;
        uint32_t* puVar20;
        unsigned int* puVar21;
        Array<int>* pAVar22;
        Array<Array<int>>* pAVar23;
        Array<short>* pAVar24;
        uint16_t* puVar25;
        Array<signed char>* pAVar26;
        uint8_t* puVar27;
        short* psVar28;
        long lVar29;
        uint8_t* puVar33;
        unsigned long uVar38;
        unsigned long arg1_00;
        int iVar39;
        unsigned long arg1_01;
        int iVar42;
        shared_ptr<Array<int>>* local_b8;
        shared_ptr<Array<signed char>>* local_b0;
        unsigned int local_84;
        ReturnValue local_60;

        ModelUnlitImpl* local_48 = this;
        MultiCursorPacketHelper local_110(arg1, arg2);
        local_110.SetPos(1, arg2 - 26);
        unsigned short uVar7 = local_110.g2(1);
        unsigned int local_64 = (unsigned int)uVar7;
        uVar7 = local_110.g2(1);
        unsigned int local_34 = (unsigned int)uVar7;
        uint8_t local_35 = local_110.g1(1);
        char local_3a = local_110.g1(1);
        char local_39 = local_110.g1(1);
        char local_38 = local_110.g1(1);
        char local_37 = local_110.g1(1);
        char local_36 = local_110.g1(1);
        char local_4a = local_110.g1(1);
        char local_49 = local_110.g1(1);
        uint16_t uVar8 = local_110.g2(1);
        local_b8 = (shared_ptr<Array<int>>*)(((uint64_t)local_b8._2_6_ << 16) | (uint16_t)uVar8);
        uVar8 = local_110.g2(1);
        local_b0 = (shared_ptr<Array<signed char>>*)(((uint64_t)local_b0._2_6_ << 16) | (uint16_t)uVar8);
        unsigned short local_a2 = local_110.g2(1);
        uVar8 = local_110.g2(1);
        uVar7 = local_110.g2(1);
        local_84 = (((uint32_t)local_84._2_2_ << 16) | (uint16_t)uVar8);
        unsigned short uVar9 = local_110.g2(1);
        unsigned long local_80 = (unsigned long)local_35;
        int local_a0 = 0;
        unsigned long local_90 = 0;
        int iVar30 = 0;
        if (local_35 != 0) {
            puVar33 = &local_48->field_320;
            puVar33->set_max_size(local_80, 5);
            iVar30 = 0;
            local_110.SetPos(1, 0);
            uVar38 = 0;
            local_90 = 0;
            local_a0 = 0;
            do {
                cVar3 = local_110.g1s(1);
                pcVar17 = (char*)(*puVar33)[uVar38];
                *pcVar17 = cVar3;
                iVar30 = iVar30 + (unsigned int)(!cVar3);
                local_90 = (unsigned long)((int)local_90 + (unsigned int)((uint8_t)(cVar3 - 1U) < 3));
                local_a0 = local_a0 + (unsigned int)(cVar3 == '\x02');
                uVar38 = uVar38 + 1;
            } while (local_80 != uVar38);
        }
        unsigned int uVar2 = local_34;
        unsigned int uVar15 = local_64;
        unsigned int uVar36 = 0;
        if (local_3a == '\x01') {
            uVar36 = local_34;
        }
        unsigned int local_9c = 0;
        if (local_39 == -1) {
            local_9c = local_34;
        }
        unsigned int uVar40 = 0;
        if (local_37 == '\x01') {
            uVar40 = local_34;
        }
        unsigned int local_94 = 0;
        if (local_38 == '\x01') {
            local_94 = local_34;
        }
        int local_98 = local_34 * 2;
        if (local_36 != '\x01') {
            local_98 = 0;
        }
        local_48->field_20 = local_64;
        local_48->field_96 = local_34;
        local_48->field_316 = (int)local_80;
        Array<int>* local_78 = (Array<int>*)&local_48->field_24;
        local_78->set_max_size((long)(int)local_64, 5);
        Array<int>* local_70 = (Array<int>*)&local_48->field_48;
        local_70->set_max_size((long)(int)local_64, 5);
        puVar33 = &local_48->field_72;
        puVar33->set_max_size((long)(int)local_64, 5);
        uint8_t* this_00 = &local_48->field_104;
        this_00->set_max_size((long)(int)local_34, 5);
        uint8_t* this_01 = &local_48->field_128;
        this_01->set_max_size((long)(int)local_34, 5);
        uint8_t* this_02 = &local_48->field_152;
        this_02->set_max_size((long)(int)local_34, 5);
        if (local_4a == '\x01') {
            make_shared<Array<int>, int&>(&local_60, (int*)&local_64);
            local_48->field_480 = local_60;
        }
        if (local_3a == '\x01') {
            make_shared<Array<signed char>, int&>(&local_60, (int*)&local_34);
            local_48->field_176 = local_60;
        }
        if (local_39 == -1) {
            make_shared<Array<signed char>, int&>(&local_60, (int*)&local_34);
            local_48->field_192 = local_60;
        } else {
            local_48->field_312 = local_39;
        }
        if (local_38 == '\x01') {
            make_shared<Array<signed char>, int&>(&local_60, (int*)&local_34);
            local_48->field_208 = local_60;
        }
        if (local_37 == '\x01') {
            make_shared<Array<int>, int&>(&local_60, (int*)&local_34);
            local_48->field_496 = local_60;
        }
        if (local_36 == '\x01') {
            make_shared<Array<short>, int&>(&local_60, (int*)&local_34);
            local_48->field_256 = local_60;
            if (local_35 != 0) {
                make_shared<Array<signed char>, int&>(&local_60, (int*)&local_34);
                local_48->field_224 = local_60;
            }
        }
        if (local_49 == '\x01') {
            make_shared<Array<Array<int>>, int>(&local_60, (int*)&local_64);
            local_48->field_512 = local_60;
            make_shared<Array<Array<int>>, int>(&local_60, (int*)&local_64);
            local_48->field_528 = local_60;
        }
        make_shared<Array<short>, int&>(&local_60, (int*)&local_34);
        ModelUnlitImpl* pMVar1 = local_48;
        uint8_t* this_03 = &local_48->field_240;
        *this_03 = local_60;
        pMVar1->field_344.set_max_size(local_80, 1);
        uint8_t* this_04 = &local_48->field_368;
        this_04->set_max_size(local_80, 1);
        uint8_t* this_05 = &local_48->field_392;
        this_05->set_max_size(local_80, 1);
        local_110.SetPos(1, local_80);
        int iVar13 = (int)local_80 + uVar15;
        int iVar37 = uVar36 + iVar13;
        int iVar34 = iVar37 + uVar2;
        local_9c = local_9c + iVar34;
        int iVar41 = uVar40 + local_9c;
        int iVar32 = (unsigned int)uVar9 + iVar41;
        local_94 = local_94 + iVar32;
        int iVar31 = (local_84 & 65535) + local_94;
        local_98 = local_98 + iVar31;
        int iVar35 = (unsigned int)uVar7 + local_98;
        int iVar14 = iVar35 + uVar2 * 2;
        local_110.SetPos(2, (long)iVar14);
        iVar14 = iVar14 + (unsigned int)(unsigned short)local_b8;
        local_110.SetPos(3, (long)iVar14);
        iVar14 = iVar14 + (unsigned int)(unsigned short)local_b0;
        local_110.SetPos(4, (long)iVar14);
        local_110.SetPos(5, (long)iVar41);
        if (0 < (int)local_64) {
            puVar18 = &local_48->field_480;
            uVar38 = 0;
            local_84 = 0;
            local_b0 = (shared_ptr<Array<signed char>>*)((unsigned long)local_b0 & 18446744069414584320);
            local_b8 = (shared_ptr<Array<int>>*)((unsigned long)local_b8 & 18446744069414584320);
            do {
                uVar15 = local_110.g1(1);
                iVar39 = 0;
                iVar41 = 0;
                if ((uVar15 & 1) != 0) {
                    sVar10 = local_110.gSmart(2);
                    iVar41 = (int)sVar10;
                }
                if ((uVar15 & 2) != 0) {
                    sVar10 = local_110.gSmart(3);
                    iVar39 = (int)sVar10;
                }
                iVar42 = 0;
                if ((uVar15 & 4) != 0) {
                    sVar10 = local_110.gSmart(4);
                    iVar42 = (int)sVar10;
                }
                piVar19 = (int*)(*local_78)[uVar38];
                *piVar19 = iVar41 + (int)local_b8;
                piVar19 = (int*)(*local_70)[uVar38];
                *piVar19 = iVar39 + (int)local_b0;
                piVar19 = (int*)(*puVar33)[uVar38];
                *piVar19 = iVar42 + local_84;
                puVar20 = (uint32_t*)(*local_78)[uVar38];
                local_b8 = (shared_ptr<Array<int>>*)(((uint64_t)local_b8._4_4_ << 32) | (uint32_t)(*puVar20));
                puVar20 = (uint32_t*)(*local_70)[uVar38];
                local_b0 = (shared_ptr<Array<signed char>>*)(((uint64_t)local_b0._4_4_ << 32) | (uint32_t)(*puVar20));
                puVar21 = (unsigned int*)(*puVar33)[uVar38];
                local_84 = *puVar21;
                if (local_4a == '\x01') {
                    uVar15 = local_110.g1(5);
                    pAVar22 = (Array<int>*)**puVar18;
                    puVar21 = (unsigned int*)(*pAVar22)[uVar38];
                    *puVar21 = uVar15 & 255;
                }
                uVar38 = uVar38 + 1;
            } while ((long)uVar38 < (long)(int)local_64);
        }
        if ((local_49 == '\x01') && (0 < (int)local_64)) {
            local_78 = (Array<int>*)&local_48->field_512;
            local_70 = (Array<int>*)&local_48->field_528;
            uVar38 = 0;
            do {
                bVar4 = local_110.g1(5);
                pAVar23 = (Array<Array<int>>*)**local_78;
                pAVar22 = (Array<int>*)(*pAVar23)[uVar38];
                arg1_01 = (unsigned long)bVar4;
                pAVar22->set_max_size(arg1_01, 7);
                pAVar23 = (Array<Array<int>>*)**local_70;
                pAVar22 = (Array<int>*)(*pAVar23)[uVar38];
                pAVar22->set_max_size(arg1_01, 7);
                if (bVar4 != 0) {
                    arg1_00 = 0;
                    do {
                        uVar15 = local_110.g1(5);
                        pAVar23 = (Array<Array<int>>*)**local_78;
                        pAVar22 = (Array<int>*)(*pAVar23)[uVar38];
                        puVar21 = (unsigned int*)(*pAVar22)[arg1_00];
                        *puVar21 = uVar15 & 255;
                        uVar15 = local_110.g1(5);
                        pAVar23 = (Array<Array<int>>*)**local_70;
                        pAVar22 = (Array<int>*)(*pAVar23)[uVar38];
                        puVar21 = (unsigned int*)(*pAVar22)[arg1_00];
                        *puVar21 = uVar15 & 255;
                        arg1_00 = arg1_00 + 1;
                    } while (arg1_01 != arg1_00);
                }
                uVar38 = uVar38 + 1;
            } while ((long)uVar38 < (long)(int)local_64);
        }
        local_110.SetPos(1, (long)iVar35);
        local_110.SetPos(2, (long)iVar13);
        local_110.SetPos(3, (long)iVar34);
        local_110.SetPos(4, (long)iVar32);
        local_110.SetPos(5, (long)(int)local_9c);
        local_110.SetPos(6, (long)iVar31);
        local_110.SetPos(7, (long)local_98);
        if (0 < (int)local_34) {
            local_70 = (Array<int>*)&local_48->field_176;
            local_b0 = (shared_ptr<Array<signed char>>*)&local_48->field_192;
            puVar33 = &local_48->field_208;
            local_b8 = (shared_ptr<Array<int>>*)&local_48->field_496;
            local_78 = (Array<int>*)&local_48->field_256;
            puVar18 = &local_48->field_224;
            uVar38 = 0;
            do {
                uVar8 = local_110.g2(1);
                pAVar24 = (Array<short>*)**this_03;
                puVar25 = (uint16_t*)(*pAVar24)[uVar38];
                *puVar25 = uVar8;
                if (local_3a == '\x01') {
                    uVar5 = local_110.g1s(2);
                    pAVar26 = (Array<signed char>*)**local_70;
                    puVar27 = (uint8_t*)(*pAVar26)[uVar38];
                    *puVar27 = uVar5;
                }
                if (local_39 == -1) {
                    uVar5 = local_110.g1s(3);
                    pAVar26 = (Array<signed char>*)**local_b0;
                    puVar27 = (uint8_t*)(*pAVar26)[uVar38];
                    *puVar27 = uVar5;
                }
                if (local_38 == '\x01') {
                    uVar5 = local_110.g1s(4);
                    pAVar26 = (Array<signed char>*)**puVar33;
                    puVar27 = (uint8_t*)(*pAVar26)[uVar38];
                    *puVar27 = uVar5;
                }
                if (local_37 == '\x01') {
                    uVar15 = local_110.g1(5);
                    pAVar22 = (Array<int>*)**local_b8;
                    puVar21 = (unsigned int*)(*pAVar22)[uVar38];
                    *puVar21 = uVar15 & 255;
                }
                if (local_36 == '\x01') {
                    sVar10 = local_110.g2(6);
                    pAVar24 = (Array<short>*)**local_78;
                    psVar28 = (short*)(*pAVar24)[uVar38];
                    *psVar28 = sVar10 - 1;
                }
                if (*puVar18 != nullptr) {
                    pAVar24 = (Array<short>*)**local_78;
                    psVar28 = (short*)(*pAVar24)[uVar38];
                    if (*psVar28 != -1) {
                        cVar3 = local_110.g1(7);
                        pAVar26 = (Array<signed char>*)**puVar18;
                        pcVar17 = (char*)(*pAVar26)[uVar38];
                        *pcVar17 = cVar3 - 1;
                    }
                }
                uVar38 = uVar38 + 1;
            } while ((long)uVar38 < (long)(int)local_34);
        }
        local_110.SetPos(1, (long)(int)local_94);
        local_110.SetPos(2, (long)iVar37);
        if (0 < (int)local_34) {
            uVar38 = 0;
            iVar32 = 0;
            iVar31 = 0;
            iVar13 = 0;
            local_70 = (Array<int>*)((unsigned long)local_70 & 18446744069414584320);
            do {
                cVar3 = local_110.g1(2);
                local_78 = (Array<int>*)(((uint64_t)local_78._1_7_ << 8) | (uint8_t)cVar3);
                if (cVar3 == '\x01') {
                    sVar10 = local_110.gSmart(1);
                    sVar11 = local_110.gSmart(1);
                    sVar12 = local_110.gSmart(1);
                    piVar19 = (int*)(*this_00)[uVar38];
                    iVar31 = iVar32 + sVar10;
                    *piVar19 = iVar31;
                    piVar19 = (int*)(*this_01)[uVar38];
                    iVar13 = sVar11 + iVar31;
                    *piVar19 = iVar13;
                    piVar19 = (int*)(*this_02)[uVar38];
                    iVar32 = sVar12 + iVar13;
                    *piVar19 = iVar32;
                    local_70 = (Array<int>*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)iVar31);
                    iVar31 = iVar32;
                }
                iVar34 = iVar13;
                if ((char)local_78 == '\x02') {
                    sVar10 = local_110.gSmart(1);
                    puVar20 = (uint32_t*)(*this_00)[uVar38];
                    *puVar20 = (int)local_70;
                    piVar19 = (int*)(*this_01)[uVar38];
                    *piVar19 = iVar31;
                    piVar19 = (int*)(*this_02)[uVar38];
                    iVar32 = iVar32 + sVar10;
                    *piVar19 = iVar32;
                    iVar34 = iVar31;
                    iVar31 = iVar32;
                }
                if ((char)local_78 == '\x03') {
                    sVar10 = local_110.gSmart(1);
                    piVar19 = (int*)(*this_00)[uVar38];
                    *piVar19 = iVar31;
                    piVar19 = (int*)(*this_01)[uVar38];
                    *piVar19 = iVar34;
                    piVar19 = (int*)(*this_02)[uVar38];
                    iVar32 = iVar32 + sVar10;
                    *piVar19 = iVar32;
                    local_70 = (Array<int>*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)iVar31);
                    iVar31 = iVar32;
                }
                iVar13 = iVar34;
                if ((char)local_78 == '\x04') {
                    sVar10 = local_110.gSmart(1);
                    piVar19 = (int*)(*this_00)[uVar38];
                    *piVar19 = iVar34;
                    puVar20 = (uint32_t*)(*this_01)[uVar38];
                    *puVar20 = (int)local_70;
                    piVar19 = (int*)(*this_02)[uVar38];
                    iVar32 = iVar32 + sVar10;
                    *piVar19 = iVar32;
                    iVar13 = (int)local_70;
                    local_70 = (Array<int>*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)iVar34);
                    iVar31 = iVar32;
                }
                uVar38 = uVar38 + 1;
            } while ((long)uVar38 < (long)(int)local_34);
        }
        iVar14 = iVar14 + (unsigned int)local_a2;
        local_110.SetPos(1, (long)iVar14);
        iVar14 = iVar14 + iVar30 * 6;
        local_110.SetPos(2, (long)iVar14);
        iVar30 = (int)local_90 * 6;
        iVar14 = iVar14 + iVar30;
        local_110.SetPos(3, (long)iVar14);
        iVar14 = iVar14 + iVar30;
        local_110.SetPos(4, (long)iVar14);
        iVar14 = iVar14 + (int)local_90 * 2;
        local_110.SetPos(5, (long)iVar14);
        iVar14 = iVar14 + (int)local_90;
        local_110.SetPos(6, (long)iVar14);
        if (local_35 != 0) {
            puVar33 = &local_48->field_320;
            uVar38 = 0;
            do {
                pcVar17 = (char*)(*puVar33)[uVar38];
                if (*pcVar17 == '\0') {
                    uVar8 = local_110.g2(1);
                    puVar25 = &pMVar1->field_344[uVar38];
                    *puVar25 = uVar8;
                    uVar8 = local_110.g2(1);
                    puVar25 = (uint16_t*)(*this_04)[uVar38];
                    *puVar25 = uVar8;
                    uVar8 = local_110.g2(1);
                    puVar25 = (uint16_t*)(*this_05)[uVar38];
                    *puVar25 = uVar8;
                }
                uVar38 = uVar38 + 1;
            } while (local_80 != uVar38);
        }
        local_110.SetPos(1, (long)(iVar14 + ((int)local_90 + local_a0) * 2));
        bVar4 = local_110.g1(1);
        if (bVar4 != 0) {
            make_shared<LightSource>(&local_60);
            puVar33 = &local_48->field_544;
            *puVar33 = local_60;
            puVar21 = (unsigned int*)(*puVar33).operator->();
            *puVar21 = (unsigned int)bVar4;
            uVar15 = local_110.g2(1);
            lVar29 = (*puVar33).operator->();
            *(unsigned int*)(lVar29 + 4) = uVar15 & 65535;
            uVar15 = local_110.g2(1);
            lVar29 = (*puVar33).operator->();
            *(unsigned int*)(lVar29 + 8) = uVar15 & 65535;
            uVar15 = local_110.g2(1);
            lVar29 = (*puVar33).operator->();
            *(unsigned int*)(lVar29 + 12) = uVar15 & 65535;
            uVar16 = local_110.g4(1);
            lVar29 = (*puVar33).operator->();
            *(uint32_t*)(lVar29 + 16) = uVar16;
        }
    }

    // 0x1003552a0
    void ModelUnlitImpl::LoadOb2(unsigned char* arg1, unsigned long arg2) {
        uint8_t* this_00;
        uint8_t bVar4;
        short sVar8;
        short sVar9;
        short sVar10;
        uint32_t* puVar15;
        unsigned int* puVar16;
        Array<int>* pAVar17;
        Array<Array<int>>* pAVar18;
        Array<short>* pAVar19;
        uint16_t* puVar20;
        Array<signed char>* pAVar21;
        uint8_t* puVar22;
        uint8_t* pbVar23;
        short* psVar24;
        uint8_t* puVar26;
        unsigned short* puVar27;
        unsigned long arg1_00;
        unsigned long uVar38;
        unsigned long arg1_01;
        bool bVar39;
        int iVar40;
        shared_ptr<Array<signed char>>* local_88;
        shared_ptr<Array<short>>* local_78;
        unsigned int local_6c;
        unsigned int local_58;
        ReturnValue local_50;

        ModelUnlitImpl* local_38 = this;
        MultiCursorPacketHelper local_108(arg1, arg2);
        local_108.SetPos(1, arg2 - 23);
        unsigned short uVar6 = local_108.g2(1);
        unsigned int local_70 = (unsigned int)uVar6;
        uVar6 = local_108.g2(1);
        unsigned int local_40 = (unsigned int)uVar6;
        uint8_t local_39 = local_108.g1(1);
        char local_3c = local_108.g1(1);
        char cVar2 = local_108.g1(1);
        char local_3b = local_108.g1(1);
        char local_3a = local_108.g1(1);
        uint8_t uVar3 = local_108.g1(1);
        local_6c = (((uint32_t)local_6c._1_3_ << 8) | (uint8_t)uVar3);
        char local_51 = local_108.g1(1);
        uint16_t uVar7 = local_108.g2(1);
        uVar6 = local_108.g2(1);
        local_108.g2(1);
        uint32_t uVar11 = local_108.g2(1);
        local_58 = (((uint32_t)local_58._2_2_ << 16) | (uint16_t)uVar7);
        uVar7 = local_108.g2(1);
        unsigned int uVar1 = local_40;
        unsigned int uVar13 = local_70;
        local_78 = (shared_ptr<Array<short>>*)(((uint64_t)local_78._2_6_ << 16) | (uint16_t)uVar7);
        unsigned long local_98 = (unsigned long)local_39;
        if ((short)uVar11 == -1) {
            uVar11 = 0;
        }
        local_88 = (shared_ptr<Array<signed char>>*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)uVar11);
        unsigned int uVar36 = 0;
        if (cVar2 == -1) {
            uVar36 = local_40;
        }
        unsigned int uVar32 = 0;
        if (local_3a == '\x01') {
            uVar32 = local_40;
        }
        unsigned int uVar41 = 0;
        if (local_3c == '\x01') {
            uVar41 = local_40;
        }
        unsigned long uVar35 = (unsigned long)(int)local_70;
        unsigned int local_8c = 0;
        if (local_3b == '\x01') {
            local_8c = local_40;
        }
        local_38->field_20 = local_70;
        local_38->field_96 = local_40;
        local_38->field_316 = (unsigned int)local_39;
        Array<int>* local_68 = (Array<int>*)&local_38->field_24;
        char local_52 = cVar2;
        local_68->set_max_size(uVar35, 5);
        Array<int>* local_60 = (Array<int>*)&local_38->field_48;
        local_60->set_max_size((long)(int)local_70, 5);
        Array<int>* local_80 = (Array<int>*)&local_38->field_72;
        local_80->set_max_size((long)(int)local_70, 5);
        Array<int>* local_b0 = (Array<int>*)&local_38->field_104;
        local_b0->set_max_size((long)(int)local_40, 5);
        Array<int>* local_a8 = (Array<int>*)&local_38->field_128;
        local_a8->set_max_size((long)(int)local_40, 5);
        Array<int>* local_a0 = (Array<int>*)&local_38->field_152;
        local_a0->set_max_size((long)(int)local_40, 5);
        if (local_39 != 0) {
            local_38->field_320.set_max_size(local_98, 5);
            local_38->field_344.set_max_size(local_98, 1);
            local_38->field_368.set_max_size(local_98, 1);
            local_38->field_392.set_max_size(local_98, 1);
        }
        if ((char)local_6c == '\x01') {
            make_shared<Array<int>, int&>(&local_50, (int*)&local_70);
            local_38->field_480 = local_50;
        }
        if (local_3c == '\x01') {
            make_shared<Array<signed char>, int&>(&local_50, (int*)&local_40);
            local_38->field_176 = local_50;
            make_shared<Array<signed char>, int&>(&local_50, (int*)&local_40);
            local_38->field_224 = local_50;
            make_shared<Array<short>, int&>(&local_50, (int*)&local_40);
            local_38->field_256 = local_50;
        }
        int* piVar14 = &local_38->field_96;
        if (local_52 == -1) {
            make_shared<Array<signed char>, int&>(&local_50, piVar14);
            local_38->field_192 = local_50;
        } else {
            local_38->field_312 = local_52;
        }
        if (local_3b == '\x01') {
            make_shared<Array<signed char>, int&>(&local_50, piVar14);
            local_38->field_208 = local_50;
        }
        if (local_3a == '\x01') {
            make_shared<Array<int>, int&>(&local_50, piVar14);
            local_38->field_496 = local_50;
        }
        unsigned int* puVar25 = &local_38->field_20;
        if (local_51 == '\x01') {
            make_shared<Array<Array<int>>, int>(&local_50, (int*)puVar25);
            local_38->field_512 = local_50;
            make_shared<Array<Array<int>>, int>(&local_50, (int*)puVar25);
            local_38->field_528 = local_50;
        }
        make_shared<Array<short>, int&>(&local_50, piVar14);
        uint8_t* puVar28 = &local_38->field_240;
        *puVar28 = local_50;
        local_108.SetPos(1, 0);
        int iVar12 = uVar13 + uVar1;
        int iVar37 = uVar36 + iVar12;
        int iVar33 = uVar32 + iVar37;
        int iVar42 = uVar41 + iVar33;
        int iVar29 = (unsigned int)(unsigned short)local_78 + iVar42;
        local_8c = local_8c + iVar29;
        int iVar31 = (unsigned short)local_88 + local_8c;
        int iVar30 = iVar31 + uVar1 * 2;
        int iVar34 = iVar30 + (int)local_98 * 6;
        local_108.SetPos(2, (long)iVar34);
        iVar34 = iVar34 + (local_58 & 65535);
        local_108.SetPos(3, (long)iVar34);
        local_108.SetPos(4, (long)(int)(iVar34 + (unsigned int)uVar6));
        local_108.SetPos(5, (long)iVar42);
        if (0 < (int)local_70) {
            puVar26 = &local_38->field_480;
            uVar38 = 0;
            local_88 = (shared_ptr<Array<signed char>>*)((unsigned long)local_88 & 18446744069414584320);
            local_58 = 0;
            local_78 = (shared_ptr<Array<short>>*)((unsigned long)local_78 & 18446744069414584320);
            do {
                uVar13 = local_108.g1(1);
                iVar34 = 0;
                iVar42 = 0;
                if ((uVar13 & 1) != 0) {
                    sVar8 = local_108.gSmart(2);
                    iVar42 = (int)sVar8;
                }
                if ((uVar13 & 2) != 0) {
                    sVar8 = local_108.gSmart(3);
                    iVar34 = (int)sVar8;
                }
                iVar40 = 0;
                if ((uVar13 & 4) != 0) {
                    sVar8 = local_108.gSmart(4);
                    iVar40 = (int)sVar8;
                }
                piVar14 = (int*)(*local_68)[uVar38];
                *piVar14 = iVar42 + (int)local_78;
                piVar14 = (int*)(*local_60)[uVar38];
                *piVar14 = iVar34 + local_58;
                piVar14 = (int*)(*local_80)[uVar38];
                *piVar14 = iVar40 + (int)local_88;
                puVar15 = (uint32_t*)(*local_68)[uVar38];
                local_78 = (shared_ptr<Array<short>>*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)(*puVar15));
                puVar16 = (unsigned int*)(*local_60)[uVar38];
                local_58 = *puVar16;
                puVar15 = (uint32_t*)(*local_80)[uVar38];
                local_88 = (shared_ptr<Array<signed char>>*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)(*puVar15));
                if ((char)local_6c == '\x01') {
                    uVar13 = local_108.g1(5);
                    pAVar17 = (Array<int>*)**puVar26;
                    puVar16 = (unsigned int*)(*pAVar17)[uVar38];
                    *puVar16 = uVar13 & 255;
                }
                uVar38 = uVar38 + 1;
            } while ((long)uVar38 < (long)(int)local_70);
        }
        if ((local_51 == '\x01') && (0 < (int)local_38->field_20)) {
            local_68 = (Array<int>*)&local_38->field_512;
            local_60 = (Array<int>*)&local_38->field_528;
            uVar38 = 0;
            do {
                bVar4 = local_108.g1(5);
                pAVar18 = (Array<Array<int>>*)**local_68;
                pAVar17 = (Array<int>*)(*pAVar18)[uVar38];
                arg1_01 = (unsigned long)bVar4;
                pAVar17->set_max_size(arg1_01, 7);
                pAVar18 = (Array<Array<int>>*)**local_60;
                pAVar17 = (Array<int>*)(*pAVar18)[uVar38];
                pAVar17->set_max_size(arg1_01, 7);
                if (bVar4 != 0) {
                    arg1_00 = 0;
                    do {
                        uVar13 = local_108.g1(5);
                        pAVar18 = (Array<Array<int>>*)**local_68;
                        pAVar17 = (Array<int>*)(*pAVar18)[uVar38];
                        puVar16 = (unsigned int*)(*pAVar17)[arg1_00];
                        *puVar16 = uVar13 & 255;
                        uVar13 = local_108.g1(5);
                        pAVar18 = (Array<Array<int>>*)**local_60;
                        pAVar17 = (Array<int>*)(*pAVar18)[uVar38];
                        puVar16 = (unsigned int*)(*pAVar17)[arg1_00];
                        *puVar16 = uVar13 & 255;
                        arg1_00 = arg1_00 + 1;
                    } while (arg1_01 != arg1_00);
                }
                uVar38 = uVar38 + 1;
            } while ((long)uVar38 < (long)(int)*puVar25);
        }
        local_108.SetPos(1, (long)iVar31);
        local_108.SetPos(2, (long)iVar33);
        local_108.SetPos(3, (long)iVar12);
        local_108.SetPos(4, (long)iVar29);
        local_108.SetPos(5, (long)iVar37);
        local_88 = (shared_ptr<Array<signed char>>*)&local_38->field_176;
        local_80 = (Array<int>*)&local_38->field_224;
        local_78 = (shared_ptr<Array<short>>*)&local_38->field_256;
        if ((int)local_40 < 1) {
            local_58 = 0;
            local_6c = 0;
        } else {
            local_68 = (Array<int>*)&local_38->field_192;
            puVar26 = &local_38->field_208;
            this_00 = &local_38->field_496;
            uVar38 = 0;
            local_6c = 0;
            local_58 = 0;
            do {
                uVar7 = local_108.g2(1);
                pAVar19 = (Array<short>*)**puVar28;
                puVar20 = (uint16_t*)(*pAVar19)[uVar38];
                *puVar20 = uVar7;
                if (local_3c == '\x01') {
                    bVar4 = local_108.g1(2);
                    if ((bVar4 & 1) == 0) {
                        pAVar21 = (Array<signed char>*)**local_88;
                        puVar22 = (uint8_t*)(*pAVar21)[uVar38];
                        *puVar22 = 0;
                    } else {
                        pAVar21 = (Array<signed char>*)**local_88;
                        puVar22 = (uint8_t*)(*pAVar21)[uVar38];
                        *puVar22 = 1;
                        local_6c =
                            (unsigned int)(((uint64_t)((int64_t)((unsigned long)puVar22 >> 8)) << 8) | (uint8_t)1);
                    }
                    if ((bVar4 & 2) == 0) {
                        pAVar21 = (Array<signed char>*)**local_80;
                        puVar22 = (uint8_t*)(*pAVar21)[uVar38];
                        *puVar22 = 255;
                        pAVar19 = (Array<short>*)**local_78;
                        puVar20 = (uint16_t*)(*pAVar19)[uVar38];
                        *puVar20 = 65535;
                    } else {
                        pAVar21 = (Array<signed char>*)**local_80;
                        pbVar23 = (uint8_t*)(*pAVar21)[uVar38];
                        *pbVar23 = bVar4 >> 2;
                        pAVar19 = (Array<short>*)**puVar28;
                        puVar20 = (uint16_t*)(*pAVar19)[uVar38];
                        uVar7 = *puVar20;
                        pAVar19 = (Array<short>*)**local_78;
                        puVar20 = (uint16_t*)(*pAVar19)[uVar38];
                        *puVar20 = uVar7;
                        pAVar19 = (Array<short>*)**puVar28;
                        puVar20 = (uint16_t*)(*pAVar19)[uVar38];
                        *puVar20 = 127;
                        pAVar19 = (Array<short>*)**local_78;
                        psVar24 = (short*)(*pAVar19)[uVar38];
                        local_58 = local_58 & 255;
                        if (*psVar24 != -1) {
                            local_58 = 1;
                        }
                    }
                }
                if (local_52 == -1) {
                    uVar3 = local_108.g1s(3);
                    pAVar21 = (Array<signed char>*)**local_68;
                    puVar22 = (uint8_t*)(*pAVar21)[uVar38];
                    *puVar22 = uVar3;
                }
                if (local_3b == '\x01') {
                    uVar3 = local_108.g1s(4);
                    pAVar21 = (Array<signed char>*)**puVar26;
                    puVar22 = (uint8_t*)(*pAVar21)[uVar38];
                    *puVar22 = uVar3;
                }
                if (local_3a == '\x01') {
                    uVar13 = local_108.g1(5);
                    pAVar17 = (Array<int>*)**this_00;
                    puVar25 = (unsigned int*)(*pAVar17)[uVar38];
                    *puVar25 = uVar13 & 255;
                }
                uVar38 = uVar38 + 1;
            } while ((long)uVar38 < (long)(int)local_40);
        }
        local_108.SetPos(1, (long)(int)local_8c);
        local_108.SetPos(2, uVar35);
        if (0 < (int)local_40) {
            uVar35 = 0;
            iVar31 = 0;
            iVar29 = 0;
            iVar12 = 0;
            local_60 = (Array<int>*)((unsigned long)local_60 & 18446744069414584320);
            do {
                cVar2 = local_108.g1(2);
                local_68 = (Array<int>*)(((uint64_t)local_68._1_7_ << 8) | (uint8_t)cVar2);
                if (cVar2 == '\x01') {
                    sVar8 = local_108.gSmart(1);
                    sVar9 = local_108.gSmart(1);
                    sVar10 = local_108.gSmart(1);
                    piVar14 = (int*)(*local_b0)[uVar35];
                    iVar29 = iVar31 + sVar8;
                    *piVar14 = iVar29;
                    piVar14 = (int*)(*local_a8)[uVar35];
                    iVar12 = sVar9 + iVar29;
                    *piVar14 = iVar12;
                    piVar14 = (int*)(*local_a0)[uVar35];
                    iVar31 = sVar10 + iVar12;
                    *piVar14 = iVar31;
                    local_60 = (Array<int>*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)iVar29);
                    iVar29 = iVar31;
                }
                iVar33 = iVar29;
                iVar34 = iVar12;
                if ((char)local_68 == '\x02') {
                    sVar8 = local_108.gSmart(1);
                    puVar15 = (uint32_t*)(*local_b0)[uVar35];
                    *puVar15 = (int)local_60;
                    piVar14 = (int*)(*local_a8)[uVar35];
                    *piVar14 = iVar29;
                    piVar14 = (int*)(*local_a0)[uVar35];
                    iVar31 = iVar31 + sVar8;
                    *piVar14 = iVar31;
                    iVar33 = iVar31;
                    iVar34 = iVar29;
                }
                if ((char)local_68 == '\x03') {
                    sVar8 = local_108.gSmart(1);
                    piVar14 = (int*)(*local_b0)[uVar35];
                    *piVar14 = iVar33;
                    piVar14 = (int*)(*local_a8)[uVar35];
                    *piVar14 = iVar34;
                    piVar14 = (int*)(*local_a0)[uVar35];
                    iVar31 = iVar31 + sVar8;
                    *piVar14 = iVar31;
                    local_60 = (Array<int>*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)iVar33);
                    iVar33 = iVar31;
                }
                iVar29 = iVar33;
                iVar12 = iVar34;
                if ((char)local_68 == '\x04') {
                    sVar8 = local_108.gSmart(1);
                    piVar14 = (int*)(*local_b0)[uVar35];
                    *piVar14 = iVar34;
                    puVar15 = (uint32_t*)(*local_a8)[uVar35];
                    *puVar15 = (int)local_60;
                    piVar14 = (int*)(*local_a0)[uVar35];
                    iVar31 = iVar31 + sVar8;
                    *piVar14 = iVar31;
                    iVar12 = (int)local_60;
                    local_60 = (Array<int>*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)iVar34);
                    iVar29 = iVar31;
                }
                uVar35 = uVar35 + 1;
            } while ((long)uVar35 < (long)(int)local_40);
        }
        local_108.SetPos(1, (long)iVar30);
        puVar28 = &local_38->field_344;
        local_68 = (Array<int>*)&local_38->field_368;
        local_60 = (Array<int>*)&local_38->field_392;
        if (local_39 != 0) {
            local_38 = (ModelUnlitImpl*)&local_38->field_320;
            uVar35 = 0;
            do {
                puVar26 = (uint8_t*)(*local_38)[uVar35];
                *puVar26 = 0;
                uVar7 = local_108.g2(1);
                puVar20 = (uint16_t*)(*puVar28)[uVar35];
                *puVar20 = uVar7;
                uVar7 = local_108.g2(1);
                puVar20 = (uint16_t*)(*local_68)[uVar35];
                *puVar20 = uVar7;
                uVar7 = local_108.g2(1);
                puVar20 = (uint16_t*)(*local_60)[uVar35];
                *puVar20 = uVar7;
                uVar35 = uVar35 + 1;
            } while (local_98 != uVar35);
        }
        bool bVar5 = *local_80 != nullptr;
        if (bVar5) {
            if ((int)local_40 < 1) {
                bVar5 = false;
            } else {
                uVar35 = 0;
                local_38 = (ModelUnlitImpl*)puVar28;
                bVar39 = false;
                do {
                    pAVar21 = (Array<signed char>*)**local_80;
                    pbVar23 = (uint8_t*)(*pAVar21)[uVar35];
                    uVar38 = (unsigned long)*pbVar23;
                    if (uVar38 == 255) {
                    LAB_100356130:
                        bVar5 = bVar39;
                    } else {
                        puVar27 = (unsigned short*)(*local_38)[uVar38];
                        uVar6 = *puVar27;
                        puVar25 = (unsigned int*)(*local_b0)[uVar35];
                        bVar5 = true;
                        if (*puVar25 == (unsigned int)uVar6) {
                            puVar27 = (unsigned short*)(*local_68)[uVar38];
                            uVar6 = *puVar27;
                            puVar25 = (unsigned int*)(*local_a8)[uVar35];
                            if (*puVar25 == (unsigned int)uVar6) {
                                puVar27 = (unsigned short*)(*local_60)[uVar38];
                                uVar6 = *puVar27;
                                puVar25 = (unsigned int*)(*local_a0)[uVar35];
                                if (*puVar25 == (unsigned int)uVar6) {
                                    pAVar21 = (Array<signed char>*)**local_80;
                                    puVar28 = (uint8_t*)(*pAVar21)[uVar35];
                                    *puVar28 = 255;
                                    goto LAB_100356130;
                                }
                            }
                        }
                    }
                    uVar35 = uVar35 + 1;
                    bVar39 = bVar5;
                } while ((long)uVar35 < (long)(int)local_40);
            }
            if (!bVar5) {
                local_50 = shared_ptr();
                *local_80 = local_50;
            }
        }
        if ((local_58 & 1) == 0) {
            local_50 = shared_ptr();
            *local_78 = local_50;
        }
        if ((local_6c & 1) == 0) {
            local_50 = shared_ptr();
            *local_88 = local_50;
        }
    }

    // 0x100356360
    void ModelUnlitImpl::LoadOb3Engine200(unsigned char* arg1, unsigned long arg2) {
        char cVar3;
        uint8_t uVar4;
        short sVar9;
        short sVar10;
        short sVar11;
        uint32_t uVar15;
        char* pcVar16;
        uint8_t* puVar17;
        int* piVar18;
        uint32_t* puVar19;
        unsigned int* puVar20;
        Array<int>* pAVar21;
        Array<short>* pAVar22;
        uint16_t* puVar23;
        Array<signed char>* pAVar24;
        uint8_t* puVar25;
        short* psVar26;
        long lVar27;
        uint8_t* puVar31;
        unsigned long uVar35;
        int iVar38;
        int iVar39;
        shared_ptr<Array<int>>* local_b0;
        shared_ptr<Array<signed char>>* local_a8;
        unsigned int local_7c;
        ReturnValue local_58;

        ModelUnlitImpl* local_48 = this;
        MultiCursorPacketHelper local_108(arg1, arg2);
        local_108.SetPos(1, arg2 - 23);
        unsigned short uVar7 = local_108.g2(1);
        unsigned int local_5c = (unsigned int)uVar7;
        uVar7 = local_108.g2(1);
        unsigned int local_34 = (unsigned int)uVar7;
        uint8_t local_35 = local_108.g1(1);
        char local_3a = local_108.g1(1);
        char local_39 = local_108.g1(1);
        char local_38 = local_108.g1(1);
        char local_37 = local_108.g1(1);
        char local_36 = local_108.g1(1);
        char local_3b = local_108.g1(1);
        uint16_t uVar8 = local_108.g2(1);
        local_b0 = (shared_ptr<Array<int>>*)(((uint64_t)local_b0._2_6_ << 16) | (uint16_t)uVar8);
        uVar8 = local_108.g2(1);
        local_a8 = (shared_ptr<Array<signed char>>*)(((uint64_t)local_a8._2_6_ << 16) | (uint16_t)uVar8);
        unsigned short local_9e = local_108.g2(1);
        uVar8 = local_108.g2(1);
        local_7c = (((uint32_t)local_7c._2_2_ << 16) | (uint16_t)uVar8);
        uVar7 = local_108.g2(1);
        unsigned long local_78 = (unsigned long)local_35;
        int local_9c = 0;
        unsigned long local_88 = 0;
        int iVar28 = 0;
        if (local_35 != 0) {
            puVar31 = &local_48->field_320;
            puVar31->set_max_size(local_78, 7);
            iVar28 = 0;
            local_108.SetPos(1, 0);
            uVar35 = 0;
            local_88 = 0;
            local_9c = 0;
            do {
                cVar3 = local_108.g1s(1);
                pcVar16 = (char*)(*puVar31)[uVar35];
                *pcVar16 = cVar3;
                iVar28 = iVar28 + (unsigned int)(!cVar3);
                local_88 = (unsigned long)((int)local_88 + (unsigned int)((uint8_t)(cVar3 - 1U) < 3));
                local_9c = local_9c + (unsigned int)(cVar3 == '\x02');
                uVar35 = uVar35 + 1;
            } while (local_78 != uVar35);
        }
        unsigned int uVar2 = local_34;
        unsigned int uVar14 = local_5c;
        unsigned int uVar33 = 0;
        if (local_3a == '\x01') {
            uVar33 = local_34;
        }
        unsigned int local_94 = 0;
        if (local_39 == -1) {
            local_94 = local_34;
        }
        unsigned int uVar36 = 0;
        if (local_37 == '\x01') {
            uVar36 = local_34;
        }
        unsigned int local_98 = 0;
        if (local_3b == '\x01') {
            local_98 = local_5c;
        }
        unsigned int local_8c = 0;
        if (local_38 == '\x01') {
            local_8c = local_34;
        }
        int local_90 = local_34 * 2;
        if (local_36 != '\x01') {
            local_90 = 0;
        }
        local_48->field_20 = local_5c;
        local_48->field_96 = local_34;
        local_48->field_316 = (int)local_78;
        Array<int>* local_70 = (Array<int>*)&local_48->field_24;
        local_70->set_max_size((long)(int)local_5c, 7);
        Array<int>* local_68 = (Array<int>*)&local_48->field_48;
        local_68->set_max_size((long)(int)local_5c, 7);
        puVar31 = &local_48->field_72;
        puVar31->set_max_size((long)(int)local_5c, 7);
        uint8_t* this_00 = &local_48->field_104;
        this_00->set_max_size((long)(int)local_34, 7);
        uint8_t* this_01 = &local_48->field_128;
        this_01->set_max_size((long)(int)local_34, 7);
        uint8_t* this_02 = &local_48->field_152;
        this_02->set_max_size((long)(int)local_34, 7);
        if (local_3b == '\x01') {
            make_shared<Array<int>, int&>(&local_58, (int*)&local_5c);
            local_48->field_480 = local_58;
        }
        if (local_3a == '\x01') {
            make_shared<Array<signed char>, int&>(&local_58, (int*)&local_34);
            local_48->field_176 = local_58;
        }
        if (local_39 == -1) {
            make_shared<Array<signed char>, int&>(&local_58, (int*)&local_34);
            local_48->field_192 = local_58;
        } else {
            local_48->field_312 = local_39;
        }
        if (local_38 == '\x01') {
            make_shared<Array<signed char>, int&>(&local_58, (int*)&local_34);
            local_48->field_208 = local_58;
        }
        if (local_37 == '\x01') {
            make_shared<Array<int>, int&>(&local_58, (int*)&local_34);
            local_48->field_496 = local_58;
        }
        if (local_36 == '\x01') {
            make_shared<Array<short>, int&>(&local_58, (int*)&local_34);
            local_48->field_256 = local_58;
            if (local_35 != 0) {
                make_shared<Array<signed char>, int&>(&local_58, (int*)&local_34);
                local_48->field_224 = local_58;
            }
        }
        make_shared<Array<short>, int&>(&local_58, (int*)&local_34);
        ModelUnlitImpl* pMVar1 = local_48;
        uint8_t* this_03 = &local_48->field_240;
        *this_03 = local_58;
        pMVar1->field_344.set_max_size(local_78, 1);
        uint8_t* this_04 = &local_48->field_368;
        this_04->set_max_size(local_78, 1);
        uint8_t* this_05 = &local_48->field_392;
        this_05->set_max_size(local_78, 1);
        local_108.SetPos(1, local_78);
        int iVar12 = (int)local_78 + uVar14;
        int iVar34 = uVar33 + iVar12;
        int iVar29 = iVar34 + uVar2;
        local_94 = local_94 + iVar29;
        int iVar37 = uVar36 + local_94;
        local_98 = local_98 + iVar37;
        local_8c = local_8c + local_98;
        int iVar30 = (local_7c & 65535) + local_8c;
        local_90 = local_90 + iVar30;
        int iVar32 = (unsigned int)uVar7 + local_90;
        int iVar13 = iVar32 + uVar2 * 2;
        local_108.SetPos(2, (long)iVar13);
        iVar13 = iVar13 + (unsigned int)(unsigned short)local_b0;
        local_108.SetPos(3, (long)iVar13);
        iVar13 = iVar13 + (unsigned int)(unsigned short)local_a8;
        local_108.SetPos(4, (long)iVar13);
        local_108.SetPos(5, (long)iVar37);
        if (0 < (int)local_5c) {
            puVar17 = &local_48->field_480;
            uVar35 = 0;
            local_7c = 0;
            local_a8 = (shared_ptr<Array<signed char>>*)((unsigned long)local_a8 & 18446744069414584320);
            local_b0 = (shared_ptr<Array<int>>*)((unsigned long)local_b0 & 18446744069414584320);
            do {
                uVar14 = local_108.g1(1);
                iVar39 = 0;
                iVar37 = 0;
                if ((uVar14 & 1) != 0) {
                    sVar9 = local_108.gSmart(2);
                    iVar37 = (int)sVar9;
                }
                if ((uVar14 & 2) != 0) {
                    sVar9 = local_108.gSmart(3);
                    iVar39 = (int)sVar9;
                }
                iVar38 = 0;
                if ((uVar14 & 4) != 0) {
                    sVar9 = local_108.gSmart(4);
                    iVar38 = (int)sVar9;
                }
                piVar18 = (int*)(*local_70)[uVar35];
                *piVar18 = iVar37 + (int)local_b0;
                piVar18 = (int*)(*local_68)[uVar35];
                *piVar18 = iVar39 + (int)local_a8;
                piVar18 = (int*)(*puVar31)[uVar35];
                *piVar18 = iVar38 + local_7c;
                puVar19 = (uint32_t*)(*local_70)[uVar35];
                local_b0 = (shared_ptr<Array<int>>*)(((uint64_t)local_b0._4_4_ << 32) | (uint32_t)(*puVar19));
                puVar19 = (uint32_t*)(*local_68)[uVar35];
                local_a8 = (shared_ptr<Array<signed char>>*)(((uint64_t)local_a8._4_4_ << 32) | (uint32_t)(*puVar19));
                puVar20 = (unsigned int*)(*puVar31)[uVar35];
                local_7c = *puVar20;
                if (local_3b == '\x01') {
                    uVar14 = local_108.g1(5);
                    pAVar21 = (Array<int>*)**puVar17;
                    puVar20 = (unsigned int*)(*pAVar21)[uVar35];
                    *puVar20 = uVar14 & 255;
                }
                uVar35 = uVar35 + 1;
            } while ((long)uVar35 < (long)(int)local_5c);
        }
        local_108.SetPos(1, (long)iVar32);
        local_108.SetPos(2, (long)iVar12);
        local_108.SetPos(3, (long)iVar29);
        local_108.SetPos(4, (long)(int)local_98);
        local_108.SetPos(5, (long)(int)local_94);
        local_108.SetPos(6, (long)iVar30);
        local_108.SetPos(7, (long)local_90);
        if (0 < (int)local_34) {
            local_68 = (Array<int>*)&local_48->field_176;
            local_a8 = (shared_ptr<Array<signed char>>*)&local_48->field_192;
            puVar31 = &local_48->field_208;
            local_b0 = (shared_ptr<Array<int>>*)&local_48->field_496;
            local_70 = (Array<int>*)&local_48->field_256;
            puVar17 = &local_48->field_224;
            uVar35 = 0;
            do {
                uVar8 = local_108.g2(1);
                pAVar22 = (Array<short>*)**this_03;
                puVar23 = (uint16_t*)(*pAVar22)[uVar35];
                *puVar23 = uVar8;
                if (local_3a == '\x01') {
                    uVar4 = local_108.g1s(2);
                    pAVar24 = (Array<signed char>*)**local_68;
                    puVar25 = (uint8_t*)(*pAVar24)[uVar35];
                    *puVar25 = uVar4;
                }
                if (local_39 == -1) {
                    uVar4 = local_108.g1s(3);
                    pAVar24 = (Array<signed char>*)**local_a8;
                    puVar25 = (uint8_t*)(*pAVar24)[uVar35];
                    *puVar25 = uVar4;
                }
                if (local_38 == '\x01') {
                    uVar4 = local_108.g1s(4);
                    pAVar24 = (Array<signed char>*)**puVar31;
                    puVar25 = (uint8_t*)(*pAVar24)[uVar35];
                    *puVar25 = uVar4;
                }
                if (local_37 == '\x01') {
                    uVar14 = local_108.g1(5);
                    pAVar21 = (Array<int>*)**local_b0;
                    puVar20 = (unsigned int*)(*pAVar21)[uVar35];
                    *puVar20 = uVar14 & 255;
                }
                if (local_36 == '\x01') {
                    sVar9 = local_108.g2(6);
                    pAVar22 = (Array<short>*)**local_70;
                    psVar26 = (short*)(*pAVar22)[uVar35];
                    *psVar26 = sVar9 - 1;
                }
                if (*puVar17 != nullptr) {
                    pAVar22 = (Array<short>*)**local_70;
                    psVar26 = (short*)(*pAVar22)[uVar35];
                    if (*psVar26 != -1) {
                        cVar3 = local_108.g1(7);
                        pAVar24 = (Array<signed char>*)**puVar17;
                        pcVar16 = (char*)(*pAVar24)[uVar35];
                        *pcVar16 = cVar3 - 1;
                    }
                }
                uVar35 = uVar35 + 1;
            } while ((long)uVar35 < (long)(int)local_34);
        }
        local_108.SetPos(1, (long)(int)local_8c);
        local_108.SetPos(2, (long)iVar34);
        if (0 < (int)local_34) {
            uVar35 = 0;
            iVar30 = 0;
            iVar29 = 0;
            iVar12 = 0;
            local_68 = (Array<int>*)((unsigned long)local_68 & 18446744069414584320);
            do {
                cVar3 = local_108.g1(2);
                local_70 = (Array<int>*)(((uint64_t)local_70._1_7_ << 8) | (uint8_t)cVar3);
                if (cVar3 == '\x01') {
                    sVar9 = local_108.gSmart(1);
                    sVar10 = local_108.gSmart(1);
                    sVar11 = local_108.gSmart(1);
                    piVar18 = (int*)(*this_00)[uVar35];
                    iVar29 = iVar30 + sVar9;
                    *piVar18 = iVar29;
                    piVar18 = (int*)(*this_01)[uVar35];
                    iVar12 = sVar10 + iVar29;
                    *piVar18 = iVar12;
                    piVar18 = (int*)(*this_02)[uVar35];
                    iVar30 = sVar11 + iVar12;
                    *piVar18 = iVar30;
                    local_68 = (Array<int>*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)iVar29);
                    iVar29 = iVar30;
                }
                iVar32 = iVar12;
                if ((char)local_70 == '\x02') {
                    sVar9 = local_108.gSmart(1);
                    puVar19 = (uint32_t*)(*this_00)[uVar35];
                    *puVar19 = (int)local_68;
                    piVar18 = (int*)(*this_01)[uVar35];
                    *piVar18 = iVar29;
                    piVar18 = (int*)(*this_02)[uVar35];
                    iVar30 = iVar30 + sVar9;
                    *piVar18 = iVar30;
                    iVar32 = iVar29;
                    iVar29 = iVar30;
                }
                if ((char)local_70 == '\x03') {
                    sVar9 = local_108.gSmart(1);
                    piVar18 = (int*)(*this_00)[uVar35];
                    *piVar18 = iVar29;
                    piVar18 = (int*)(*this_01)[uVar35];
                    *piVar18 = iVar32;
                    piVar18 = (int*)(*this_02)[uVar35];
                    iVar30 = iVar30 + sVar9;
                    *piVar18 = iVar30;
                    local_68 = (Array<int>*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)iVar29);
                    iVar29 = iVar30;
                }
                iVar12 = iVar32;
                if ((char)local_70 == '\x04') {
                    sVar9 = local_108.gSmart(1);
                    piVar18 = (int*)(*this_00)[uVar35];
                    *piVar18 = iVar32;
                    puVar19 = (uint32_t*)(*this_01)[uVar35];
                    *puVar19 = (int)local_68;
                    piVar18 = (int*)(*this_02)[uVar35];
                    iVar30 = iVar30 + sVar9;
                    *piVar18 = iVar30;
                    iVar12 = (int)local_68;
                    local_68 = (Array<int>*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)iVar32);
                    iVar29 = iVar30;
                }
                uVar35 = uVar35 + 1;
            } while ((long)uVar35 < (long)(int)local_34);
        }
        iVar13 = iVar13 + (unsigned int)local_9e;
        local_108.SetPos(1, (long)iVar13);
        iVar13 = iVar13 + iVar28 * 6;
        local_108.SetPos(2, (long)iVar13);
        iVar28 = (int)local_88 * 6;
        iVar13 = iVar13 + iVar28;
        local_108.SetPos(3, (long)iVar13);
        iVar13 = iVar13 + iVar28;
        local_108.SetPos(4, (long)iVar13);
        iVar13 = iVar13 + (int)local_88 * 2;
        local_108.SetPos(5, (long)iVar13);
        iVar13 = iVar13 + (int)local_88;
        local_108.SetPos(6, (long)iVar13);
        if (local_35 != 0) {
            puVar31 = &local_48->field_320;
            uVar35 = 0;
            do {
                pcVar16 = (char*)(*puVar31)[uVar35];
                if (*pcVar16 == '\0') {
                    uVar8 = local_108.g2(1);
                    puVar23 = &pMVar1->field_344[uVar35];
                    *puVar23 = uVar8;
                    uVar8 = local_108.g2(1);
                    puVar23 = (uint16_t*)(*this_04)[uVar35];
                    *puVar23 = uVar8;
                    uVar8 = local_108.g2(1);
                    puVar23 = (uint16_t*)(*this_05)[uVar35];
                    *puVar23 = uVar8;
                }
                uVar35 = uVar35 + 1;
            } while (local_78 != uVar35);
        }
        local_108.SetPos(1, (long)(iVar13 + ((int)local_88 + local_9c) * 2));
        uint8_t bVar6 = local_108.g1(1);
        if (bVar6 != 0) {
            make_shared<LightSource>(&local_58);
            puVar31 = &local_48->field_544;
            *puVar31 = local_58;
            puVar20 = (unsigned int*)(*puVar31).operator->();
            *puVar20 = (unsigned int)bVar6;
            uVar14 = local_108.g2(1);
            lVar27 = (*puVar31).operator->();
            *(unsigned int*)(lVar27 + 4) = uVar14 & 65535;
            uVar14 = local_108.g2(1);
            lVar27 = (*puVar31).operator->();
            *(unsigned int*)(lVar27 + 8) = uVar14 & 65535;
            uVar14 = local_108.g2(1);
            lVar27 = (*puVar31).operator->();
            *(unsigned int*)(lVar27 + 12) = uVar14 & 65535;
            uVar15 = local_108.g4(1);
            lVar27 = (*puVar31).operator->();
            *(uint32_t*)(lVar27 + 16) = uVar15;
        }
    }

    // 0x100357390
    void ModelUnlitImpl::LoadOb2Engine200(unsigned char* arg1, unsigned long arg2) {
        uint8_t bVar4;
        short sVar9;
        short sVar10;
        short sVar11;
        uint32_t* puVar14;
        unsigned int* puVar15;
        Array<int>* pAVar16;
        Array<short>* pAVar17;
        uint16_t* puVar18;
        Array<signed char>* pAVar19;
        uint8_t* puVar20;
        uint8_t* pbVar21;
        short* psVar22;
        uint8_t* puVar23;
        unsigned short* puVar24;
        uint8_t* puVar25;
        unsigned long uVar32;
        bool bVar33;
        int iVar34;
        int iVar35;
        shared_ptr<Array<signed char>>* local_90;
        shared_ptr<Array<short>>* local_80;
        unsigned int local_60;
        ReturnValue local_58;

        ModelUnlitImpl* local_40 = this;
        MultiCursorPacketHelper local_128(arg1, arg2);
        local_128.SetPos(1, arg2 - 18);
        unsigned short uVar6 = local_128.g2(1);
        unsigned int local_64 = (unsigned int)uVar6;
        uVar6 = local_128.g2(1);
        unsigned int local_38 = (unsigned int)uVar6;
        uint8_t local_31 = local_128.g1(1);
        char local_34 = local_128.g1(1);
        char cVar2 = local_128.g1(1);
        char local_33 = local_128.g1(1);
        char local_32 = local_128.g1(1);
        uint8_t uVar3 = local_128.g1(1);
        local_60 = (((uint32_t)local_60._1_3_ << 8) | (uint8_t)uVar3);
        uint16_t uVar7 = local_128.g2(1);
        uint16_t uVar8 = local_128.g2(1);
        local_128.g2(1);
        local_80 = (shared_ptr<Array<short>>*)(((uint64_t)local_80._2_6_ << 16) | (uint16_t)uVar7);
        local_90 = (shared_ptr<Array<signed char>>*)(((uint64_t)local_90._2_6_ << 16) | (uint16_t)uVar8);
        unsigned int local_5c = local_128.g2(1);
        unsigned int uVar1 = local_38;
        unsigned int uVar12 = local_64;
        if ((short)local_5c == -1) {
            local_5c = 0;
        }
        unsigned long uVar30 = (unsigned long)(int)local_64;
        unsigned int uVar31 = 0;
        if (cVar2 == -1) {
            uVar31 = local_38;
        }
        unsigned int local_98 = 0;
        if (local_32 == '\x01') {
            local_98 = local_38;
        }
        unsigned int uVar36 = 0;
        if (local_34 == '\x01') {
            uVar36 = local_38;
        }
        unsigned int local_94 = 0;
        if ((char)local_60 == '\x01') {
            local_94 = local_64;
        }
        unsigned long local_a0 = (unsigned long)local_31;
        unsigned int uVar28 = 0;
        if (local_33 == '\x01') {
            uVar28 = local_38;
        }
        local_40->field_20 = local_64;
        local_40->field_96 = local_38;
        local_40->field_316 = (unsigned int)local_31;
        Array<int>* local_78 = (Array<int>*)&local_40->field_24;
        char local_41 = cVar2;
        local_78->set_max_size(uVar30, 5);
        Array<int>* local_70 = (Array<int>*)&local_40->field_48;
        local_70->set_max_size((long)(int)local_64, 5);
        Array<int>* local_88 = (Array<int>*)&local_40->field_72;
        local_88->set_max_size((long)(int)local_64, 5);
        Array<int>* local_b8 = (Array<int>*)&local_40->field_104;
        local_b8->set_max_size((long)(int)local_38, 5);
        Array<int>* local_b0 = (Array<int>*)&local_40->field_128;
        local_b0->set_max_size((long)(int)local_38, 5);
        Array<int>* local_a8 = (Array<int>*)&local_40->field_152;
        local_a8->set_max_size((long)(int)local_38, 5);
        if (local_31 != 0) {
            local_40->field_320.set_max_size(local_a0, 5);
            local_40->field_344.set_max_size(local_a0, 1);
            local_40->field_368.set_max_size(local_a0, 1);
            local_40->field_392.set_max_size(local_a0, 1);
        }
        if ((char)local_60 == '\x01') {
            make_shared<Array<int>, int&>(&local_58, (int*)&local_64);
            local_40->field_480 = local_58;
        }
        if (local_34 == '\x01') {
            make_shared<Array<signed char>, int&>(&local_58, (int*)&local_38);
            local_40->field_176 = local_58;
            make_shared<Array<signed char>, int&>(&local_58, (int*)&local_38);
            local_40->field_224 = local_58;
            make_shared<Array<short>, int&>(&local_58, (int*)&local_38);
            local_40->field_256 = local_58;
        }
        int* piVar13 = &local_40->field_96;
        if (local_41 == -1) {
            make_shared<Array<signed char>, int&>(&local_58, piVar13);
            local_40->field_192 = local_58;
        } else {
            local_40->field_312 = local_41;
        }
        if (local_33 == '\x01') {
            make_shared<Array<signed char>, int&>(&local_58, piVar13);
            local_40->field_208 = local_58;
        }
        if (local_32 == '\x01') {
            make_shared<Array<int>, int&>(&local_58, piVar13);
            local_40->field_496 = local_58;
        }
        make_shared<Array<short>, int&>(&local_58, piVar13);
        shared_ptr<Array<short>>* local_c0 = (shared_ptr<Array<short>>*)&local_40->field_240;
        *local_c0 = local_58;
        local_128.SetPos(1, 0);
        int local_cc = uVar12 + uVar1;
        int local_c8 = uVar31 + local_cc;
        local_98 = local_98 + local_c8;
        int iVar37 = uVar36 + local_98;
        local_94 = local_94 + iVar37;
        int local_c4 = uVar28 + local_94;
        int iVar26 = (local_5c & 65535) + local_c4;
        int iVar27 = iVar26 + uVar1 * 2;
        int iVar29 = iVar27 + (int)local_a0 * 6;
        local_128.SetPos(2, (long)iVar29);
        iVar29 = iVar29 + (unsigned int)(unsigned short)local_80;
        local_128.SetPos(3, (long)iVar29);
        local_128.SetPos(4, (long)(int)(iVar29 + (unsigned int)(unsigned short)local_90));
        local_128.SetPos(5, (long)iVar37);
        if (0 < (int)local_64) {
            puVar25 = &local_40->field_480;
            uVar32 = 0;
            local_90 = (shared_ptr<Array<signed char>>*)((unsigned long)local_90 & 18446744069414584320);
            local_5c = 0;
            local_80 = (shared_ptr<Array<short>>*)((unsigned long)local_80 & 18446744069414584320);
            do {
                uVar12 = local_128.g1(1);
                iVar29 = 0;
                iVar37 = 0;
                if ((uVar12 & 1) != 0) {
                    sVar9 = local_128.gSmart(2);
                    iVar37 = (int)sVar9;
                }
                if ((uVar12 & 2) != 0) {
                    sVar9 = local_128.gSmart(3);
                    iVar29 = (int)sVar9;
                }
                iVar34 = 0;
                if ((uVar12 & 4) != 0) {
                    sVar9 = local_128.gSmart(4);
                    iVar34 = (int)sVar9;
                }
                piVar13 = (int*)(*local_78)[uVar32];
                *piVar13 = iVar37 + (int)local_80;
                piVar13 = (int*)(*local_70)[uVar32];
                *piVar13 = iVar29 + local_5c;
                piVar13 = (int*)(*local_88)[uVar32];
                *piVar13 = iVar34 + (int)local_90;
                puVar14 = (uint32_t*)(*local_78)[uVar32];
                local_80 = (shared_ptr<Array<short>>*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)(*puVar14));
                puVar15 = (unsigned int*)(*local_70)[uVar32];
                local_5c = *puVar15;
                puVar14 = (uint32_t*)(*local_88)[uVar32];
                local_90 = (shared_ptr<Array<signed char>>*)(((uint64_t)local_90._4_4_ << 32) | (uint32_t)(*puVar14));
                if ((char)local_60 == '\x01') {
                    uVar12 = local_128.g1(5);
                    pAVar16 = (Array<int>*)**puVar25;
                    puVar15 = (unsigned int*)(*pAVar16)[uVar32];
                    *puVar15 = uVar12 & 255;
                }
                uVar32 = uVar32 + 1;
            } while ((long)uVar32 < (long)(int)local_64);
        }
        local_128.SetPos(1, (long)iVar26);
        local_128.SetPos(2, (long)(int)local_98);
        local_128.SetPos(3, (long)local_cc);
        local_128.SetPos(4, (long)(int)local_94);
        local_128.SetPos(5, (long)local_c8);
        local_90 = (shared_ptr<Array<signed char>>*)&local_40->field_176;
        local_88 = (Array<int>*)&local_40->field_224;
        local_80 = (shared_ptr<Array<short>>*)&local_40->field_256;
        if ((int)local_38 < 1) {
            local_5c = 0;
            local_60 = 0;
        } else {
            local_78 = (Array<int>*)&local_40->field_192;
            puVar25 = &local_40->field_208;
            puVar23 = &local_40->field_496;
            uVar32 = 0;
            local_60 = 0;
            local_5c = 0;
            do {
                uVar7 = local_128.g2(1);
                pAVar17 = (Array<short>*)**local_c0;
                puVar18 = (uint16_t*)(*pAVar17)[uVar32];
                *puVar18 = uVar7;
                if (local_34 == '\x01') {
                    bVar4 = local_128.g1(2);
                    if ((bVar4 & 1) == 0) {
                        pAVar19 = (Array<signed char>*)**local_90;
                        puVar20 = (uint8_t*)(*pAVar19)[uVar32];
                        *puVar20 = 0;
                    } else {
                        pAVar19 = (Array<signed char>*)**local_90;
                        puVar20 = (uint8_t*)(*pAVar19)[uVar32];
                        *puVar20 = 1;
                        local_60 =
                            (unsigned int)(((uint64_t)((int64_t)((unsigned long)puVar20 >> 8)) << 8) | (uint8_t)1);
                    }
                    if ((bVar4 & 2) == 0) {
                        pAVar19 = (Array<signed char>*)**local_88;
                        puVar20 = (uint8_t*)(*pAVar19)[uVar32];
                        *puVar20 = 255;
                        pAVar17 = (Array<short>*)**local_80;
                        puVar18 = (uint16_t*)(*pAVar17)[uVar32];
                        *puVar18 = 65535;
                    } else {
                        pAVar19 = (Array<signed char>*)**local_88;
                        pbVar21 = (uint8_t*)(*pAVar19)[uVar32];
                        *pbVar21 = bVar4 >> 2;
                        pAVar17 = (Array<short>*)**local_c0;
                        puVar18 = (uint16_t*)(*pAVar17)[uVar32];
                        uVar7 = *puVar18;
                        pAVar17 = (Array<short>*)**local_80;
                        puVar18 = (uint16_t*)(*pAVar17)[uVar32];
                        *puVar18 = uVar7;
                        pAVar17 = (Array<short>*)**local_c0;
                        puVar18 = (uint16_t*)(*pAVar17)[uVar32];
                        *puVar18 = 127;
                        pAVar17 = (Array<short>*)**local_80;
                        psVar22 = (short*)(*pAVar17)[uVar32];
                        local_5c = local_5c & 255;
                        if (*psVar22 != -1) {
                            local_5c = 1;
                        }
                    }
                }
                if (local_41 == -1) {
                    uVar3 = local_128.g1s(3);
                    pAVar19 = (Array<signed char>*)**local_78;
                    puVar20 = (uint8_t*)(*pAVar19)[uVar32];
                    *puVar20 = uVar3;
                }
                if (local_33 == '\x01') {
                    uVar3 = local_128.g1s(4);
                    pAVar19 = (Array<signed char>*)**puVar25;
                    puVar20 = (uint8_t*)(*pAVar19)[uVar32];
                    *puVar20 = uVar3;
                }
                if (local_32 == '\x01') {
                    uVar12 = local_128.g1(5);
                    pAVar16 = (Array<int>*)**puVar23;
                    puVar15 = (unsigned int*)(*pAVar16)[uVar32];
                    *puVar15 = uVar12 & 255;
                }
                uVar32 = uVar32 + 1;
            } while ((long)uVar32 < (long)(int)local_38);
        }
        local_128.SetPos(1, (long)local_c4);
        local_128.SetPos(2, uVar30);
        if (0 < (int)local_38) {
            uVar30 = 0;
            iVar37 = 0;
            iVar29 = 0;
            iVar26 = 0;
            local_70 = (Array<int>*)((unsigned long)local_70 & 18446744069414584320);
            do {
                cVar2 = local_128.g1(2);
                local_78 = (Array<int>*)(((uint64_t)local_78._1_7_ << 8) | (uint8_t)cVar2);
                if (cVar2 == '\x01') {
                    sVar9 = local_128.gSmart(1);
                    sVar10 = local_128.gSmart(1);
                    sVar11 = local_128.gSmart(1);
                    piVar13 = (int*)(*local_b8)[uVar30];
                    iVar29 = iVar37 + sVar9;
                    *piVar13 = iVar29;
                    piVar13 = (int*)(*local_b0)[uVar30];
                    iVar26 = sVar10 + iVar29;
                    *piVar13 = iVar26;
                    piVar13 = (int*)(*local_a8)[uVar30];
                    iVar37 = sVar11 + iVar26;
                    *piVar13 = iVar37;
                    local_70 = (Array<int>*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)iVar29);
                    iVar29 = iVar37;
                }
                iVar34 = iVar29;
                iVar35 = iVar26;
                if ((char)local_78 == '\x02') {
                    sVar9 = local_128.gSmart(1);
                    puVar14 = (uint32_t*)(*local_b8)[uVar30];
                    *puVar14 = (int)local_70;
                    piVar13 = (int*)(*local_b0)[uVar30];
                    *piVar13 = iVar29;
                    piVar13 = (int*)(*local_a8)[uVar30];
                    iVar37 = iVar37 + sVar9;
                    *piVar13 = iVar37;
                    iVar34 = iVar37;
                    iVar35 = iVar29;
                }
                if ((char)local_78 == '\x03') {
                    sVar9 = local_128.gSmart(1);
                    piVar13 = (int*)(*local_b8)[uVar30];
                    *piVar13 = iVar34;
                    piVar13 = (int*)(*local_b0)[uVar30];
                    *piVar13 = iVar35;
                    piVar13 = (int*)(*local_a8)[uVar30];
                    iVar37 = iVar37 + sVar9;
                    *piVar13 = iVar37;
                    local_70 = (Array<int>*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)iVar34);
                    iVar34 = iVar37;
                }
                iVar29 = iVar34;
                iVar26 = iVar35;
                if ((char)local_78 == '\x04') {
                    sVar9 = local_128.gSmart(1);
                    piVar13 = (int*)(*local_b8)[uVar30];
                    *piVar13 = iVar35;
                    puVar14 = (uint32_t*)(*local_b0)[uVar30];
                    *puVar14 = (int)local_70;
                    piVar13 = (int*)(*local_a8)[uVar30];
                    iVar37 = iVar37 + sVar9;
                    *piVar13 = iVar37;
                    iVar26 = (int)local_70;
                    local_70 = (Array<int>*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)iVar35);
                    iVar29 = iVar37;
                }
                uVar30 = uVar30 + 1;
            } while ((long)uVar30 < (long)(int)local_38);
        }
        local_128.SetPos(1, (long)iVar27);
        puVar25 = &local_40->field_344;
        local_78 = (Array<int>*)&local_40->field_368;
        local_70 = (Array<int>*)&local_40->field_392;
        if (local_31 != 0) {
            local_40 = (ModelUnlitImpl*)&local_40->field_320;
            uVar30 = 0;
            do {
                puVar23 = (uint8_t*)(*local_40)[uVar30];
                *puVar23 = 0;
                uVar7 = local_128.g2(1);
                puVar18 = (uint16_t*)(*puVar25)[uVar30];
                *puVar18 = uVar7;
                uVar7 = local_128.g2(1);
                puVar18 = (uint16_t*)(*local_78)[uVar30];
                *puVar18 = uVar7;
                uVar7 = local_128.g2(1);
                puVar18 = (uint16_t*)(*local_70)[uVar30];
                *puVar18 = uVar7;
                uVar30 = uVar30 + 1;
            } while (local_a0 != uVar30);
        }
        bool bVar5 = *local_88 != nullptr;
        if (bVar5) {
            if ((int)local_38 < 1) {
                bVar5 = false;
            } else {
                uVar30 = 0;
                local_40 = (ModelUnlitImpl*)puVar25;
                bVar33 = false;
                do {
                    pAVar19 = (Array<signed char>*)**local_88;
                    pbVar21 = (uint8_t*)(*pAVar19)[uVar30];
                    uVar32 = (unsigned long)*pbVar21;
                    if (uVar32 == 255) {
                    LAB_100358090:
                        bVar5 = bVar33;
                    } else {
                        puVar24 = (unsigned short*)(*local_40)[uVar32];
                        uVar6 = *puVar24;
                        puVar15 = (unsigned int*)(*local_b8)[uVar30];
                        bVar5 = true;
                        if (*puVar15 == (unsigned int)uVar6) {
                            puVar24 = (unsigned short*)(*local_78)[uVar32];
                            uVar6 = *puVar24;
                            puVar15 = (unsigned int*)(*local_b0)[uVar30];
                            if (*puVar15 == (unsigned int)uVar6) {
                                puVar24 = (unsigned short*)(*local_70)[uVar32];
                                uVar6 = *puVar24;
                                puVar15 = (unsigned int*)(*local_a8)[uVar30];
                                if (*puVar15 == (unsigned int)uVar6) {
                                    pAVar19 = (Array<signed char>*)**local_88;
                                    puVar25 = (uint8_t*)(*pAVar19)[uVar30];
                                    *puVar25 = 255;
                                    goto LAB_100358090;
                                }
                            }
                        }
                    }
                    uVar30 = uVar30 + 1;
                    bVar33 = bVar5;
                } while ((long)uVar30 < (long)(int)local_38);
            }
            if (!bVar5) {
                local_58 = shared_ptr();
                *local_88 = local_58;
            }
        }
        if ((local_5c & 1) == 0) {
            local_58 = shared_ptr();
            *local_80 = local_58;
        }
        if ((local_60 & 1) == 0) {
            local_58 = shared_ptr();
            *local_90 = local_58;
        }
    }

    // 0x1003588b0
    ModelUnlitImpl::ModelUnlitImpl(int arg1, int arg2, int arg3) {
        ReturnValue local_48;

        int local_4c = arg1;
        int local_34 = arg2;
        new (this) ModelUnlit();
        field_20 = 0;
        new (&field_24) Array<int>();
        new (&field_48) Array<int>();
        new (&field_72) Array<int>();
        field_96 = 0;
        new (&field_104) Array<int>();
        new (&field_128) Array<int>();
        new (&field_152) Array<int>();
        new (&field_176) shared_ptr();
        new (&field_192) shared_ptr();
        new (&field_208) shared_ptr();
        new (&field_224) shared_ptr();
        new (&field_240) shared_ptr();
        new (&field_256) shared_ptr();
        new (&field_272) shared_ptr();
        new (&field_288) SharedArray();
        field_312 = 0;
        new (&field_320) Array<signed char>();
        new (&field_344) Array<short>();
        new (&field_368) Array<short>();
        new (&field_392) Array<short>();
        new (&field_416) shared_ptr();
        new (&field_432) shared_ptr();
        new (&field_448) shared_ptr();
        new (&field_464) shared_ptr();
        new (&field_480) shared_ptr();
        new (&field_496) shared_ptr();
        new (&field_512) shared_ptr();
        new (&field_528) shared_ptr();
        new (&field_544) shared_ptr();
        new (&field_560) shared_ptr();
        field_576 = 0;
        field_24.set_max_size((long)local_4c, 5);
        field_48.set_max_size((long)local_4c, 5);
        field_72.set_max_size((long)local_4c, 5);
        make_shared<Array<int>, int&>(&local_48, &local_4c);
        field_480 = local_48;
        field_104.set_max_size((long)local_34, 5);
        field_128.set_max_size((long)local_34, 5);
        field_152.set_max_size((long)local_34, 5);
        make_shared<Array<signed char>, int&>(&local_48, &local_34);
        field_176 = local_48;
        make_shared<Array<signed char>, int&>(&local_48, &local_34);
        field_192 = local_48;
        make_shared<Array<signed char>, int&>(&local_48, &local_34);
        field_208 = local_48;
        make_shared<Array<short>, int&>(&local_48, &local_34);
        field_240 = local_48;
        make_shared<Array<short>, int&>(&local_48, &local_34);
        field_256 = local_48;
        make_shared<Array<signed char>, int&>(&local_48, &local_34);
        field_224 = local_48;
        make_shared<Array<int>, int&>(&local_48, &local_34);
        field_496 = local_48;
        if (0 < arg3) {
            field_320.set_max_size((unsigned long)arg3, 5);
            field_344.set_max_size((unsigned long)arg3, 1);
            field_368.set_max_size((unsigned long)arg3, 1);
            field_392.set_max_size((unsigned long)arg3, 1);
        }
    }

    // 0x100358fb0
    ModelUnlitImpl::ModelUnlitImpl(const eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>& modelUnlits)
        : ModelUnlit(), field_20(0), field_96(0) {
        uint8_t* midiPlayerMainThread;
        int iVar1;
        bool bVar2;
        bool bVar3;
        char cVar4;
        bool bVar5;
        bool bVar6;
        bool bVar7;
        bool bVar8;
        uint16_t uVar9;
        uint32_t uVar10;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar12;
        shared_ptr<ModelUnlit>* this_14;
        unsigned long uVar13;
        long* plVar14;
        ModelUnlitImpl* modelUnlitImpl;
        Array<signed char>* pAVar15;
        uint8_t* puVar16;
        Array<int>* pAVar17;
        uint32_t* puVar18;
        Array<short>* pAVar19;
        uint16_t* puVar20;
        char* pcVar21;
        int* piVar22;
        short* psVar23;
        uint8_t bVar24;
        uint8_t bVar25;
        uint8_t bVar26;
        uint8_t bVar27;
        uint8_t bVar28;
        uint8_t bVar29;
        uint8_t uVar30;
        unsigned long uVar31;
        ReturnValue local_48;

        uint8_t* this_00 = &field_104;
        new (this_00) Array<int>();
        uint8_t* this_01 = &field_128;
        new (this_01) Array<int>();
        uint8_t* this_02 = &field_152;
        new (this_02) Array<int>();
        uint8_t* this_03 = &field_176;
        new (this_03) shared_ptr();
        uint8_t* this_04 = &field_192;
        new (this_04) shared_ptr();
        uint8_t* this_05 = &field_208;
        new (this_05) shared_ptr();
        uint8_t* this_06 = &field_224;
        new (this_06) shared_ptr();
        uint8_t* this_07 = &field_240;
        new (this_07) shared_ptr();
        uint8_t* this_08 = &field_256;
        new (this_08) shared_ptr();
        new (&field_272) shared_ptr();
        new (&field_288) SharedArray();
        field_312 = 0;
        uint8_t* this_09 = &field_320;
        new (this_09) Array<signed char>();
        uint8_t* this_10 = &field_344;
        new (this_10) Array<short>();
        uint8_t* this_11 = &field_368;
        new (this_11) Array<short>();
        uint8_t* this_12 = &field_392;
        new (this_12) Array<short>();
        new (&field_416) shared_ptr();
        new (&field_432) shared_ptr();
        new (&field_448) shared_ptr();
        new (&field_464) shared_ptr();
        new (&field_480) shared_ptr();
        uint8_t* this_13 = &field_496;
        new (this_13) shared_ptr();
        new (&field_512) shared_ptr();
        new (&field_528) shared_ptr();
        uint8_t* local_38 = &field_544;
        new (local_38) shared_ptr();
        new (&field_560) shared_ptr();
        field_576 = 0;
        field_12 = -2;
        long lVar11 = modelUnlits.size();
        if (lVar11 == 1) {
            psVar12 = &modelUnlits[0];
            bVar2 = *psVar12 != nullptr;
            if (bVar2) {
                this_14 = &modelUnlits[0];
                lVar11 = (*this_14).operator->();
                field_12 = *(int*)(lVar11 + 12);
            }
        }
        field_20 = 0;
        field_96 = 0;
        field_316 = 0;
        field_312 = 255;
        lVar11 = modelUnlits.size();
        if (lVar11 == 0) {
            bVar26 = 0;
            bVar27 = 0;
            bVar28 = 0;
            bVar29 = 0;
            bVar25 = 0;
            bVar2 = false;
            bVar24 = 0;
        } else {
            bVar24 = 0;
            bVar2 = false;
            bVar25 = 0;
            uVar31 = 0;
            bVar29 = 0;
            bVar28 = 0;
            bVar27 = 0;
            bVar26 = 0;
            do {
                psVar12 = &modelUnlits[uVar31];
                bVar3 = *psVar12 != nullptr;
                if (bVar3) {
                    plVar14 = (long*)(*psVar12).operator->();
                    cVar4 = (**(void (**)(...))(*plVar14 + 56))(plVar14);
                    if (cVar4) {
                        LogAssert("mptr->IsForRSeven() == false",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                  "jagex3/dash3d/ModelUnlit.cpp",
                                  1704, nullptr);
                    }
                    lVar11 = psVar12->end();
                    field_20 = field_20 + *(int*)(lVar11 + 20);
                    field_96 = field_96 + *(int*)(lVar11 + 96);
                    field_316 = field_316 + *(int*)(lVar11 + 316);
                    bVar5 = (*((lVar11 + 192))) != nullptr;
                    bVar3 = true;
                    if (!bVar5) {
                        if (field_312 == -1) {
                            field_312 = *(uint8_t*)(lVar11 + 312);
                        }
                        bVar3 = bVar2;
                        if (field_312 != *(char*)(lVar11 + 312)) {
                            bVar3 = true;
                        }
                    }
                    bVar2 = bVar3;
                    bVar3 = (*((lVar11 + 176))) != nullptr;
                    bVar5 = (*((lVar11 + 208))) != nullptr;
                    bVar6 = (*((lVar11 + 496))) != nullptr;
                    bVar7 = (*((lVar11 + 256))) != nullptr;
                    bVar8 = (*((lVar11 + 224))) != nullptr;
                    bVar24 = bVar24 | bVar3;
                    bVar25 = bVar25 | bVar5;
                    bVar26 = bVar26 | bVar6;
                    bVar27 = bVar27 | bVar7;
                    bVar28 = bVar28 | bVar8;
                    bVar3 = (*((lVar11 + 512))) != nullptr;
                    bVar29 = bVar29 | bVar3;
                }
                uVar31 = uVar31 + 1;
                uVar13 = modelUnlits.size();
            } while (uVar31 < uVar13);
        }
        unsigned int* arg1 = &field_20;
        field_24.set_max_size((long)(int)*arg1, 5);
        field_48.set_max_size((long)(int)*arg1, 5);
        field_72.set_max_size((long)(int)*arg1, 5);
        make_shared<Array<int>, int&>(&local_48, (int*)arg1);
        field_480 = local_48;
        int* arg1_00 = &field_96;
        this_00->set_max_size((long)*arg1_00, 5);
        this_01->set_max_size((long)*arg1_00, 5);
        this_02->set_max_size((long)*arg1_00, 5);
        if (bVar24 != 0) {
            make_shared<Array<signed char>, int&>(&local_48, arg1_00);
            *this_03 = local_48;
        }
        if (bVar2) {
            make_shared<Array<signed char>, int&>(&local_48, arg1_00);
            *this_04 = local_48;
        }
        if (bVar25 != 0) {
            make_shared<Array<signed char>, int&>(&local_48, arg1_00);
            *this_05 = local_48;
        }
        if (bVar26 != 0) {
            make_shared<Array<int>, int&>(&local_48, arg1_00);
            *this_13 = local_48;
        }
        if (bVar27 != 0) {
            make_shared<Array<short>, int&>(&local_48, arg1_00);
            *this_08 = local_48;
        }
        if (bVar28 != 0) {
            make_shared<Array<signed char>, int&>(&local_48, arg1_00);
            *this_06 = local_48;
        }
        if (bVar29 != 0) {
            make_shared<Array<Array<int>>, int>(&local_48, (int*)arg1);
            field_512 = local_48;
            make_shared<Array<Array<int>>, int>(&local_48, (int*)arg1);
            field_528 = local_48;
        }
        make_shared<Array<short>, int&>(&local_48, arg1_00);
        *this_07 = local_48;
        if (0 < (long)field_316) {
            this_09->set_max_size((long)field_316, 5);
            this_10->set_max_size((long)field_316, 1);
            this_11->set_max_size((long)field_316, 1);
            this_12->set_max_size((long)field_316, 1);
        }
        field_20 = 0;
        field_96 = 0;
        field_316 = 0;
        lVar11 = modelUnlits.size();
        if (lVar11 != 0) {
            uVar31 = 0;
            do {
                psVar12 = &modelUnlits[uVar31];
                bVar3 = *psVar12 != nullptr;
                if (bVar3) {
                    modelUnlitImpl = (ModelUnlitImpl*)psVar12->end();
                    if (0 < modelUnlitImpl->field_96) {
                        midiPlayerMainThread = &modelUnlitImpl->field_224;
                        uVar13 = 0;
                        do {
                            if ((bVar24 != 0) && (bVar3 = modelUnlitImpl->field_176 != nullptr, bVar3)) {
                                pAVar15 = (Array<signed char>*)*modelUnlitImpl->field_176;
                                puVar16 = (uint8_t*)(*pAVar15)[uVar13];
                                uVar30 = *puVar16;
                                pAVar15 = (Array<signed char>*)**this_03;
                                puVar16 = (uint8_t*)(*pAVar15)[(long)*arg1_00];
                                *puVar16 = uVar30;
                            }
                            if (bVar2) {
                                bVar3 = modelUnlitImpl->field_192 != nullptr;
                                if (bVar3) {
                                    pAVar15 = (Array<signed char>*)*modelUnlitImpl->field_192;
                                    puVar16 = (uint8_t*)(*pAVar15)[uVar13];
                                    uVar30 = *puVar16;
                                    pAVar15 = (Array<signed char>*)**this_04;
                                    puVar16 = (uint8_t*)(*pAVar15)[(long)*arg1_00];
                                } else {
                                    uVar30 = modelUnlitImpl->field_312;
                                    pAVar15 = (Array<signed char>*)**this_04;
                                    puVar16 = (uint8_t*)(*pAVar15)[(long)*arg1_00];
                                }
                                *puVar16 = uVar30;
                            }
                            if ((bVar25 != 0) && (bVar3 = modelUnlitImpl->field_208 != nullptr, bVar3)) {
                                pAVar15 = (Array<signed char>*)*modelUnlitImpl->field_208;
                                puVar16 = (uint8_t*)(*pAVar15)[uVar13];
                                uVar30 = *puVar16;
                                pAVar15 = (Array<signed char>*)**this_05;
                                puVar16 = (uint8_t*)(*pAVar15)[(long)*arg1_00];
                                *puVar16 = uVar30;
                            }
                            if ((bVar26 != 0) && (bVar3 = modelUnlitImpl->field_496 != nullptr, bVar3)) {
                                pAVar17 = (Array<int>*)*modelUnlitImpl->field_496;
                                puVar18 = (uint32_t*)(*pAVar17)[uVar13];
                                uVar10 = *puVar18;
                                pAVar17 = (Array<int>*)**this_13;
                                puVar18 = (uint32_t*)(*pAVar17)[(long)*arg1_00];
                                *puVar18 = uVar10;
                            }
                            if (bVar27 != 0) {
                                bVar3 = modelUnlitImpl->field_256 != nullptr;
                                if (bVar3) {
                                    pAVar19 = (Array<short>*)*modelUnlitImpl->field_256;
                                    puVar20 = (uint16_t*)(*pAVar19)[uVar13];
                                    uVar9 = *puVar20;
                                    pAVar19 = (Array<short>*)**this_08;
                                    puVar20 = (uint16_t*)(*pAVar19)[(long)*arg1_00];
                                    *puVar20 = uVar9;
                                } else {
                                    pAVar19 = (Array<short>*)**this_08;
                                    puVar20 = (uint16_t*)(*pAVar19)[(long)*arg1_00];
                                    *puVar20 = 65535;
                                }
                            }
                            if (bVar28 != 0) {
                                bVar3 = *midiPlayerMainThread != nullptr;
                                if (bVar3) {
                                    pAVar15 = (Array<signed char>*)**midiPlayerMainThread;
                                    pcVar21 = (char*)(*pAVar15)[uVar13];
                                    if (*pcVar21 != -1) {
                                        pAVar15 = (Array<signed char>*)**midiPlayerMainThread;
                                        pcVar21 = (char*)(*pAVar15)[uVar13];
                                        cVar4 = *pcVar21;
                                        iVar1 = field_316;
                                        pAVar15 = (Array<signed char>*)**this_06;
                                        pcVar21 = (char*)(*pAVar15)[(long)*arg1_00];
                                        *pcVar21 = cVar4 + (char)iVar1;
                                        goto LAB_100359ac0;
                                    }
                                }
                                pAVar15 = (Array<signed char>*)**this_06;
                                puVar16 = (uint8_t*)(*pAVar15)[(long)*arg1_00];
                                *puVar16 = 255;
                            }
                        LAB_100359ac0:
                            pAVar19 = (Array<short>*)*modelUnlitImpl->field_240;
                            puVar20 = (uint16_t*)(*pAVar19)[uVar13];
                            uVar9 = *puVar20;
                            pAVar19 = (Array<short>*)**this_07;
                            puVar20 = (uint16_t*)(*pAVar19)[(long)*arg1_00];
                            *puVar20 = uVar9;
                            piVar22 = &modelUnlitImpl->field_104[uVar13];
                            uVar10 = AddPoint(*modelUnlitImpl, *piVar22);
                            puVar18 = (uint32_t*)(*this_00)[(long)*arg1_00];
                            *puVar18 = uVar10;
                            piVar22 = &modelUnlitImpl->field_128[uVar13];
                            uVar10 = AddPoint(*modelUnlitImpl, *piVar22);
                            puVar18 = (uint32_t*)(*this_01)[(long)*arg1_00];
                            *puVar18 = uVar10;
                            piVar22 = &modelUnlitImpl->field_152[uVar13];
                            uVar10 = AddPoint(*modelUnlitImpl, *piVar22);
                            puVar18 = (uint32_t*)(*this_02)[(long)*arg1_00];
                            *puVar18 = uVar10;
                            *arg1_00 = *arg1_00 + 1;
                            uVar13 = uVar13 + 1;
                        } while ((long)uVar13 < (long)modelUnlitImpl->field_96);
                    }
                    if (0 < modelUnlitImpl->field_316) {
                        uVar13 = 0;
                        do {
                            pcVar21 = &modelUnlitImpl->field_320[uVar13];
                            cVar4 = *pcVar21;
                            pcVar21 = (char*)(*this_09)[(long)field_316];
                            *pcVar21 = cVar4;
                            if (!cVar4) {
                                psVar23 = &modelUnlitImpl->field_344[uVar13];
                                uVar9 = AddPoint(*modelUnlitImpl, (int)*psVar23);
                                puVar20 = (uint16_t*)(*this_10)[(long)field_316];
                                *puVar20 = uVar9;
                                psVar23 = &modelUnlitImpl->field_368[uVar13];
                                uVar9 = AddPoint(*modelUnlitImpl, (int)*psVar23);
                                puVar20 = (uint16_t*)(*this_11)[(long)field_316];
                                *puVar20 = uVar9;
                                psVar23 = &modelUnlitImpl->field_392[uVar13];
                                uVar9 = AddPoint(*modelUnlitImpl, (int)*psVar23);
                                puVar20 = (uint16_t*)(*this_12)[(long)field_316];
                                *puVar20 = uVar9;
                            }
                            field_316 = field_316 + 1;
                            uVar13 = uVar13 + 1;
                        } while ((long)uVar13 < (long)modelUnlitImpl->field_316);
                    }
                }
                uVar31 = uVar31 + 1;
                uVar13 = modelUnlits.size();
            } while (uVar31 < uVar13);
        }
    }

    // 0x10035a030
    void ModelUnlitImpl::AddPoint(ModelUnlitImpl& modelUnlitImpl, int arg2) {
        uint32_t uVar4;
        Array<int>* pAVar8;
        uint32_t* puVar9;
        Array<Array<int>>* pAVar10;
        Array<int>* pAVar11;
        unsigned long arg1_00;

        int* piVar7 = &modelUnlitImpl.field_24[(unsigned long)arg2];
        int iVar1 = *piVar7;
        piVar7 = &modelUnlitImpl.field_48[(unsigned long)arg2];
        int iVar2 = *piVar7;
        piVar7 = &modelUnlitImpl.field_72[(unsigned long)arg2];
        int iVar3 = *piVar7;
        int iVar6 = -1;
        if (0 < (int)field_20) {
            arg1_00 = 0;
            do {
                piVar7 = &field_24[arg1_00];
                if (iVar1 == *piVar7) {
                    piVar7 = &field_48[arg1_00];
                    if (iVar2 == *piVar7) {
                        piVar7 = &field_72[arg1_00];
                        if (iVar3 == *piVar7) {
                            iVar6 = (int)arg1_00;
                            goto LAB_10035a104;
                        }
                    }
                }
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(int)field_20);
            iVar6 = -1;
        }
    LAB_10035a104:
        if (iVar6 == -1) {
            piVar7 = &field_24[(long)(int)field_20];
            *piVar7 = iVar1;
            piVar7 = &field_48[(long)(int)field_20];
            *piVar7 = iVar2;
            piVar7 = &field_72[(long)(int)field_20];
            *piVar7 = iVar3;
            if (modelUnlitImpl.field_480 != nullptr) {
                pAVar8 = (Array<int>*)modelUnlitImpl.field_480;
                puVar9 = (uint32_t*)(*pAVar8)[(unsigned long)arg2];
                uVar4 = *puVar9;
                pAVar8 = (Array<int>*)*field_480;
                puVar9 = (uint32_t*)(*pAVar8)[(long)(int)field_20];
                *puVar9 = uVar4;
            }
            if (modelUnlitImpl.field_512 != nullptr) {
                pAVar10 = (Array<Array<int>>*)modelUnlitImpl.field_512;
                pAVar11 = (Array<int>*)(*pAVar10)[(unsigned long)arg2];
                pAVar10 = (Array<Array<int>>*)*field_512;
                pAVar8 = (Array<int>*)(*pAVar10)[(long)(int)field_20];
                *pAVar8 = *pAVar11;
                pAVar10 = (Array<Array<int>>*)modelUnlitImpl.field_528;
                pAVar11 = (Array<int>*)(*pAVar10)[(unsigned long)arg2];
                pAVar10 = (Array<Array<int>>*)*field_528;
                pAVar8 = (Array<int>*)(*pAVar10)[(long)(int)field_20];
                *pAVar8 = *pAVar11;
            }
            field_20 = field_20 + 1;
        }
    }

    // 0x10035a240
    ModelUnlitImpl::ModelUnlitImpl(const ModelUnlit& modelUnlit, bool arg2, bool arg3, bool arg4, bool arg5)
        : ModelUnlit(), field_20(0), field_96(0) {
        new (&field_176) shared_ptr();
        new (&field_192) shared_ptr();
        new (&field_208) shared_ptr();
        new (&field_224) shared_ptr();
        new (&field_240) shared_ptr();
        new (&field_256) shared_ptr();
        new (&field_272) shared_ptr();
        new (&field_288) SharedArray();
        field_312 = 0;
        new (&field_320) Array<signed char>();
        new (&field_344) Array<short>();
        new (&field_368) Array<short>();
        new (&field_392) Array<short>();
        new (&field_416) shared_ptr();
        new (&field_432) shared_ptr();
        new (&field_448) shared_ptr();
        new (&field_464) shared_ptr();
        new (&field_480) shared_ptr();
        new (&field_496) shared_ptr();
        new (&field_512) shared_ptr();
        new (&field_528) shared_ptr();
        new (&field_544) shared_ptr();
        new (&field_560) shared_ptr();
        field_576 = 0;
        (modelUnlit._vptr[3]._x7e___2)(modelUnlit);
    }

    // 0x10035ae70
    ModelUnlitImpl* ModelUnlitImpl::CopyForShareLight() {
        int* arg1;
        uint8_t uVar1;
        Array<signed char>* pAVar6;
        uint8_t* puVar7;
        unsigned long arg1_00;
        long in_RSI;
        ReturnValue local_60;
        ReturnValue local_48;

        make_shared<ModelUnlitImpl>(&local_48);
        uint32_t uVar3 = *(uint32_t*)(in_RSI + 12);
        long local_38 = in_RSI;
        long lVar5 = local_48.operator->();
        *(uint32_t*)(lVar5 + 12) = uVar3;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread =
            (shared_ptr<midi2::MidiPlayerMainThread>*)(local_38 + 176);
        if (*midiPlayerMainThread != nullptr) {
            arg1 = (int*)(local_38 + 96);
            make_shared<Array<signed char>, int&>(&local_60, arg1);
            lVar5 = local_48.operator->();
            (*((lVar5 + 176))) = local_60;
            if (0 < *arg1) {
                arg1_00 = 0;
                do {
                    pAVar6 = (Array<signed char>*)**midiPlayerMainThread;
                    puVar7 = (uint8_t*)(*pAVar6)[arg1_00];
                    uVar1 = *puVar7;
                    lVar5 = local_48.operator->();
                    pAVar6 = (Array<signed char>*)*(*((lVar5 + 176)));
                    puVar7 = (uint8_t*)(*pAVar6)[arg1_00];
                    *puVar7 = uVar1;
                    arg1_00 = arg1_00 + 1;
                } while ((long)arg1_00 < (long)*arg1);
            }
        }
        uVar3 = *(uint32_t*)(local_38 + 20);
        lVar5 = local_48.operator->();
        *(uint32_t*)(lVar5 + 20) = uVar3;
        uVar3 = *(uint32_t*)(local_38 + 96);
        lVar5 = local_48.operator->();
        *(uint32_t*)(lVar5 + 96) = uVar3;
        uVar3 = *(uint32_t*)(local_38 + 316);
        lVar5 = local_48.operator->();
        *(uint32_t*)(lVar5 + 316) = uVar3;
        lVar5 = local_48.operator->();
        (*((lVar5 + 24))) = (*((local_38 + 24)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 48))) = (*((local_38 + 48)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 72))) = (*((local_38 + 72)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 104))) = (*((local_38 + 104)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 128))) = (*((local_38 + 128)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 152))) = (*((local_38 + 152)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 192))) = (*((local_38 + 192)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 208))) = (*((local_38 + 208)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 224))) = (*((local_38 + 224)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 240))) = (*((local_38 + 240)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 256))) = (*((local_38 + 256)));
        uVar1 = *(uint8_t*)(local_38 + 312);
        lVar5 = local_48.operator->();
        *(uint8_t*)(lVar5 + 312) = uVar1;
        lVar5 = local_48.operator->();
        (*((lVar5 + 320))) = (*((local_38 + 320)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 344))) = (*((local_38 + 344)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 368))) = (*((local_38 + 368)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 392))) = (*((local_38 + 392)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 480))) = (*((local_38 + 480)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 496))) = (*((local_38 + 496)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 448))) = (*((local_38 + 448)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 464))) = (*((local_38 + 464)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 432))) = (*((local_38 + 432)));
        lVar5 = local_48.operator->();
        (*((lVar5 + 416))) = (*((local_38 + 416)));
        uint16_t uVar2 = *(uint16_t*)(local_38 + 16);
        lVar5 = local_48.operator->();
        *(uint16_t*)(lVar5 + 16) = uVar2;
        uVar2 = *(uint16_t*)(local_38 + 18);
        lVar5 = local_48.operator->();
        *(uint16_t*)(lVar5 + 18) = uVar2;
        shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        return this;
    }

    // 0x10035b370
    ModelUnlitImpl* ModelUnlitImpl::HillSkewCopy(int arg1, int arg2, int arg3, int arg4, int arg5) {
        uint32_t in_register_00000034;
        int in_stack_00000008;
        ReturnValue local_40;

        long lVar8 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        make_shared<ModelUnlitImpl>(&local_40);
        uint32_t uVar3 = *(uint32_t*)(lVar8 + 12);
        long lVar4 = local_40.operator->();
        *(uint32_t*)(lVar4 + 12) = uVar3;
        uVar3 = *(uint32_t*)(lVar8 + 20);
        lVar4 = local_40.operator->();
        *(uint32_t*)(lVar4 + 20) = uVar3;
        uVar3 = *(uint32_t*)(lVar8 + 96);
        lVar4 = local_40.operator->();
        *(uint32_t*)(lVar4 + 96) = uVar3;
        uVar3 = *(uint32_t*)(lVar8 + 316);
        lVar4 = local_40.operator->();
        *(uint32_t*)(lVar4 + 316) = uVar3;
        lVar4 = local_40.operator->();
        (*((lVar4 + 24))) = (*((lVar8 + 24)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 72))) = (*((lVar8 + 72)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 104))) = (*((lVar8 + 104)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 128))) = (*((lVar8 + 128)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 152))) = (*((lVar8 + 152)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 176))) = (*((lVar8 + 176)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 192))) = (*((lVar8 + 192)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 208))) = (*((lVar8 + 208)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 224))) = (*((lVar8 + 224)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 240))) = (*((lVar8 + 240)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 256))) = (*((lVar8 + 256)));
        uint8_t uVar1 = *(uint8_t*)(lVar8 + 312);
        lVar4 = local_40.operator->();
        *(uint8_t*)(lVar4 + 312) = uVar1;
        lVar4 = local_40.operator->();
        (*((lVar4 + 320))) = (*((lVar8 + 320)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 344))) = (*((lVar8 + 344)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 368))) = (*((lVar8 + 368)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 392))) = (*((lVar8 + 392)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 480))) = (*((lVar8 + 480)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 496))) = (*((lVar8 + 496)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 448))) = (*((lVar8 + 448)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 464))) = (*((lVar8 + 464)));
        uint16_t uVar2 = *(uint16_t*)(lVar8 + 16);
        lVar4 = local_40.operator->();
        *(uint16_t*)(lVar4 + 16) = uVar2;
        uVar2 = *(uint16_t*)(lVar8 + 18);
        lVar4 = local_40.operator->();
        *(uint16_t*)(lVar4 + 18) = uVar2;
        lVar4 = local_40.operator->();
        long lVar5 = local_40.operator->();
        ((lVar4 + 48))->set_max_size((long)*(int*)(lVar5 + 20), 3);
        lVar4 = local_40.operator->();
        void* pvVar6 = (void*)((lVar4 + 48))->data();
        void* pvVar7 = (void*)((lVar8 + 48))->data();
        _memcpy(pvVar6, pvVar7, (long)*(int*)(lVar8 + 20) << 2);
        HillSkew((ModelUnlitImpl*)local_40.operator->(), arg2, arg3, arg4, arg5, in_stack_00000008);
        shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        return this;
    }

    // 0x10035b710
    void ModelUnlitImpl::HillSkew(int arg1, int arg2, int arg3, int arg4, int arg5) {
        unsigned long uVar1;
        ModelUnlitImpl* local_d8[2];
        uint8_t local_c8[16];
        uint64_t local_b4;
        function<jag::math::Vector3T<int>(int)> local_98[48];
        function<void(int, int)> local_68[48];
        long local_38;

        CalcBoundingCube();
        new (local_c8) HillSkewBuildInput();
        local_c8._0_4_ = arg1;
        new (local_d8) rs2lib::worldmap::LocationData(arg2, arg3, arg4);
        (*((local_c8 + 4))) = *local_d8;
        local_b4._0_4_ = field_584;
        local_b4._4_4_ = field_588;
        uVar1._0_4_ = field_592;
        uVar1._4_4_ = field_596;
        unsigned long local_ac = uVar1 << 32 | uVar1 >> 32;
        int local_a4 = field_8;
        unsigned int local_a0 = field_20;
        local_d8[0] = this;
        int local_b8 = arg5;
        local_98->operator=(local_d8);
        local_d8[0] = this;
        local_68->operator=(local_d8);
        ClientBuild::PerformHillSkew(*local_c8);
        GeometryChanged();
    }

    // 0x10035b860
    void ModelUnlitImpl::CalcBoundingCube() {
        int iVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        unsigned long arg1;

        if (field_576 == '\0') {
            field_8 = 0;
            field_580 = 0;
            field_584 = 999999;
            field_588 = -999999;
            field_592 = -99999;
            field_596 = 99999;
            if (0 < (int)field_20) {
                arg1 = 0;
                do {
                    piVar4 = &field_24[arg1];
                    iVar1 = *piVar4;
                    piVar4 = &field_48[arg1];
                    iVar2 = *piVar4;
                    piVar4 = &field_72[arg1];
                    iVar3 = *piVar4;
                    if (iVar1 < field_584) {
                        field_584 = iVar1;
                        if (field_588 < iVar1)
                            goto LAB_10035b970;
                    LAB_10035b91e:
                        if (field_596 <= iVar3)
                            goto LAB_10035b927;
                    LAB_10035b980:
                        field_596 = iVar3;
                        iVar1 = field_592;
                    } else {
                        if (iVar1 <= field_588)
                            goto LAB_10035b91e;
                    LAB_10035b970:
                        field_588 = iVar1;
                        if (iVar3 < field_596)
                            goto LAB_10035b980;
                    LAB_10035b927:
                        iVar1 = field_592;
                    }
                    if (iVar1 < iVar3) {
                        field_592 = iVar3;
                    }
                    if (field_8 < -iVar2) {
                        field_8 = -iVar2;
                    }
                    if (field_580 < iVar2) {
                        field_580 = iVar2;
                    }
                    arg1 = arg1 + 1;
                } while ((long)arg1 < (long)(int)field_20);
            }
            field_576 = 1;
        }
    }

    // 0x10035ba70
    void ModelUnlitImpl::GeometryChanged() {

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        field_432 = local_28;
        local_28 = shared_ptr();
        field_560 = local_28;
        local_28 = shared_ptr();
        field_416 = local_28;
        field_576 = 0;
    }

    // 0x10035bb30
    unsigned long ModelUnlitImpl::AddPoint(int arg1, int arg2, int arg3) {
        int* piVar1;
        unsigned long arg1_00;

        if (0 < (int)field_20) {
            arg1_00 = 0;
            do {
                piVar1 = &field_24[arg1_00];
                if (((*piVar1 == arg1) && (piVar1 = (int*)field_48[arg1_00], *piVar1 == arg2)) &&
                    (piVar1 = (int*)field_72[arg1_00], *piVar1 == arg3))
                    goto LAB_10035bbf2;
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(int)field_20);
        }
        piVar1 = &field_24[(long)(int)field_20];
        *piVar1 = arg1;
        piVar1 = &field_48[(long)(int)field_20];
        *piVar1 = arg2;
        piVar1 = &field_72[(long)(int)field_20];
        *piVar1 = arg3;
        arg1_00 = (unsigned long)field_20;
        field_20 = field_20 + 1;
    LAB_10035bbf2:
        return arg1_00 & 4294967295;
    }

    // 0x10035bc10
    int ModelUnlitImpl::AddAxisTemplate(short arg1, short arg2, short arg3) {
        if (254 < field_316) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "dash3d/ModelUnlit.cpp",
                            2183, "Maximum number of texture axes per model exceeded: %i");
        }
        uint8_t* puVar2 = &field_320[(long)field_316];
        *puVar2 = 0;
        short* psVar3 = &field_344[(long)field_316];
        *psVar3 = arg1;
        psVar3 = &field_368[(long)field_316];
        *psVar3 = arg2;
        psVar3 = &field_392[(long)field_316];
        *psVar3 = arg3;
        int iVar1 = field_316;
        field_316 = iVar1 + 1;
        return (int)(char)iVar1;
    }

    // 0x10035bcd0
    void ModelUnlitImpl::AddFace(int arg1, int arg2, int arg3, signed char arg4, signed char arg5, short arg6,
                                 short arg7) {
        int* piVar1 = &field_104[(long)field_96];
        *piVar1 = arg1;
        piVar1 = &field_128[(long)field_96];
        *piVar1 = arg2;
        piVar1 = &field_152[(long)field_96];
        *piVar1 = arg3;
        Array<signed char>* pAVar2 = (Array<signed char>*)*field_176;
        schar* psVar3 = (schar*)(*pAVar2)[(long)field_96];
        *psVar3 = arg4;
        pAVar2 = (Array<signed char>*)*field_224;
        psVar3 = (schar*)(*pAVar2)[(long)field_96];
        *psVar3 = arg5;
        Array<short>* pAVar4 = (Array<short>*)*field_240;
        short* psVar5 = (short*)(*pAVar4)[(long)field_96];
        *psVar5 = arg6;
        pAVar4 = (Array<short>*)*field_256;
        psVar5 = (short*)(*pAVar4)[(long)field_96];
        *psVar5 = arg7;
        field_96 = field_96 + 1;
    }

    // 0x10035bdc0
    void ModelUnlitImpl::PrepareAnim() {
        uint8_t* puVar1;
        int iVar2;
        unsigned long uVar5;
        Array<int>* pAVar6;
        int* piVar7;
        Array<Array<int>>* pAVar8;
        uint32_t* puVar9;
        int iVar10;
        unsigned long arg1;
        ReturnValue local_488;
        unsigned int local_46c;
        fixed_vector<int, 256ul> local_460;

        shared_ptr<Array<int>>* local_478 = (shared_ptr<Array<int>>*)&field_480;
        bool bVar4 = *local_478 != nullptr;
        ModelUnlitImpl* local_468 = this;
        if (bVar4) {
            local_460 = eastl::fixed_vector<int, 256ul>();
            uVar5 = local_460.capacity();
            local_460.resize(uVar5);
            if ((int)field_20 < 1) {
                iVar10 = 0;
            } else {
                uVar5 = 0;
                iVar10 = 0;
                do {
                    pAVar6 = (Array<int>*)**local_478;
                    piVar7 = (int*)(*pAVar6)[uVar5];
                    iVar2 = *piVar7;
                    piVar7 = &local_460[(long)iVar2];
                    *piVar7 = *piVar7 + 1;
                    if (iVar10 < iVar2) {
                        iVar10 = iVar2;
                    }
                    uVar5 = uVar5 + 1;
                } while ((long)uVar5 < (long)(int)local_468->field_20);
            }
            local_46c = iVar10 + 1U;
            make_shared<Array<Array<int>>, int>(&local_488, (int*)&local_46c);
            puVar1 = &local_468->field_448;
            *puVar1 = local_488;
            if (-1 < iVar10) {
                uVar5 = 0;
                do {
                    pAVar8 = (Array<Array<int>>*)**puVar1;
                    pAVar6 = (Array<int>*)(*pAVar8)[uVar5];
                    piVar7 = &local_460[uVar5];
                    pAVar6->set_max_size((long)*piVar7, 1);
                    puVar9 = &local_460[uVar5];
                    *puVar9 = 0;
                    uVar5 = uVar5 + 1;
                } while (iVar10 + 1U != uVar5);
            }
            if (0 < (int)local_468->field_20) {
                uVar5 = 0;
                do {
                    pAVar6 = (Array<int>*)**local_478;
                    piVar7 = (int*)(*pAVar6)[uVar5];
                    iVar10 = *piVar7;
                    pAVar8 = (Array<Array<int>>*)**puVar1;
                    pAVar6 = (Array<int>*)(*pAVar8)[(long)iVar10];
                    piVar7 = &local_460[(long)iVar10];
                    iVar10 = *piVar7;
                    *piVar7 = iVar10 + 1;
                    puVar9 = (uint32_t*)(*pAVar6)[(long)iVar10];
                    *puVar9 = (int)uVar5;
                    uVar5 = uVar5 + 1;
                } while ((long)uVar5 < (long)(int)local_468->field_20);
            }
        }
        ModelUnlitImpl* pMVar3 = local_468;
        local_478 = (shared_ptr<Array<int>>*)&local_468->field_496;
        iVar10 = 0;
        bVar4 = *local_478 != nullptr;
        if (bVar4) {
            local_460 = eastl::fixed_vector<int, 256ul>(256);
            if (0 < pMVar3->field_96) {
                uVar5 = 0;
                iVar10 = 0;
                do {
                    pAVar6 = (Array<int>*)**local_478;
                    piVar7 = (int*)(*pAVar6)[uVar5];
                    iVar2 = *piVar7;
                    piVar7 = &local_460[(long)iVar2];
                    *piVar7 = *piVar7 + 1;
                    if (iVar10 < iVar2) {
                        iVar10 = iVar2;
                    }
                    uVar5 = uVar5 + 1;
                } while ((long)uVar5 < (long)local_468->field_96);
            }
            local_46c = iVar10 + 1U;
            make_shared<Array<Array<int>>, int>(&local_488, (int*)&local_46c);
            puVar1 = &local_468->field_464;
            *puVar1 = local_488;
            if (-1 < iVar10) {
                uVar5 = 0;
                do {
                    pAVar8 = (Array<Array<int>>*)**puVar1;
                    pAVar6 = (Array<int>*)(*pAVar8)[uVar5];
                    piVar7 = &local_460[uVar5];
                    pAVar6->set_max_size((long)*piVar7, 1);
                    puVar9 = &local_460[uVar5];
                    *puVar9 = 0;
                    uVar5 = uVar5 + 1;
                } while (iVar10 + 1U != uVar5);
            }
            if (0 < local_468->field_96) {
                uVar5 = 0;
                do {
                    pAVar6 = (Array<int>*)**local_478;
                    piVar7 = (int*)(*pAVar6)[uVar5];
                    arg1 = (unsigned long)*piVar7;
                    pAVar8 = (Array<Array<int>>*)**puVar1;
                    pAVar6 = (Array<int>*)(*pAVar8)[arg1];
                    piVar7 = &local_460[arg1];
                    puVar9 = (uint32_t*)(*pAVar6)[(long)*piVar7];
                    *puVar9 = (int)uVar5;
                    piVar7 = &local_460[arg1];
                    *piVar7 = *piVar7 + 1;
                    uVar5 = uVar5 + 1;
                } while ((long)uVar5 < (long)local_468->field_96);
            }
        }
    }

    // 0x10035c260
    void ModelUnlitImpl::Animate(const AnimFrameSet& animFrameSet, int arg2) {
        int iVar1;
        int arg1;
        int arg4;
        shared_ptr<GroundDecor>* groundDecor;
        int* piVar3;
        long lVar4;
        vector<int>* arg1_00;
        unsigned long arg1_01;
        vector<int> local_90;
        shared_ptr<Decor> local_70;
        Array<int>* local_60;
        shared_ptr<GroundDecor>* local_58;
        shared_ptr<GroundDecor>* local_50;
        shared_ptr<GroundDecor>* local_48;
        shared_ptr<GroundDecor>* local_38;

        PrepareAnim();
        if ((!field_448 == nullptr) && (arg2 != -1)) {
            groundDecor = &animFrameSet[(long)arg2];
            local_70 = shared_ptr(groundDecor);
            m_oX = 0;
            m_oY = 0;
            m_oZ = 0;
            local_38 = groundDecor;
            if (0 < *(int*)(groundDecor + 16)) {
                local_60 = (Array<int>*)(groundDecor + 24);
                local_58 = groundDecor + 48;
                local_50 = groundDecor + 72;
                local_48 = groundDecor + 96;
                arg1_01 = 0;
                do {
                    piVar3 = (int*)(*local_60)[arg1_01];
                    iVar1 = *piVar3;
                    lVar4 = local_70.operator->();
                    piVar3 = (int*)(*((lVar4 + 8)))[(long)iVar1];
                    arg1 = *piVar3;
                    lVar4 = local_70.operator->();
                    arg1_00 = (vector<int>*)(*((lVar4 + 40)))[(long)iVar1];
                    local_90 = eastl::vector<int>(*arg1_00);
                    piVar3 = (int*)(*local_58)[arg1_01];
                    iVar1 = *piVar3;
                    piVar3 = (int*)(*local_50)[arg1_01];
                    arg4 = *piVar3;
                    piVar3 = (int*)(*local_48)[arg1_01];
                    Animate2(arg1, &local_90, iVar1, arg4, *piVar3);
                    arg1_01 = arg1_01 + 1;
                } while ((long)arg1_01 < (long)*(int*)(local_38 + 16));
            }
            GeometryChanged();
        }
    }

    // 0x10035c4a0
    void ModelUnlitImpl::Animate2(int arg1, eastl::vector<int> arg2, int arg3, int arg4, int arg5) {
        uint8_t* puVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        bool bVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int* piVar10;
        vector<EntityHighlight*, BucketAllocatorEASTL>* pvVar11;
        Array<Array<int>>* pAVar12;
        long lVar13;
        Array<signed char>* pAVar14;
        uint8_t* pbVar15;
        uint8_t* puVar16;
        unsigned long uVar17;
        unsigned long arg1_00;
        unsigned long uVar18;
        unsigned long arg1_01;
        unsigned long uVar19;
        uint8_t* puVar20;
        unsigned long uVar21;
        uint8_t local_70;

        unsigned long uVar9 = arg2->size();
        switch (arg1) {
        case 0:
            m_oX = 0;
            m_oY = 0;
            m_oZ = 0;
            if (uVar9 == 0) {
                iVar7 = 0;
            } else {
                iVar7 = 0;
                uVar19 = 0;
                do {
                    piVar10 = (int*)(*arg2)[uVar19];
                    iVar8 = *piVar10;
                    pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)field_448.operator->();
                    iVar6 = pvVar11->end();
                    if (iVar8 < iVar6) {
                        pAVar12 = (Array<Array<int>>*)*field_448;
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*pAVar12)[(long)iVar8];
                        lVar13 = pvVar11->end();
                        if (lVar13 != 0) {
                            uVar18 = 0;
                            do {
                                piVar10 = (int*)(*pvVar11)[uVar18];
                                uVar17 = (unsigned long)*piVar10;
                                piVar10 = &field_24[uVar17];
                                m_oX = m_oX + *piVar10;
                                piVar10 = &field_48[uVar17];
                                m_oY = m_oY + *piVar10;
                                piVar10 = &field_72[uVar17];
                                m_oZ = m_oZ + *piVar10;
                                uVar18 = uVar18 + 1;
                                uVar17 = pvVar11->end();
                            } while (uVar18 < uVar17);
                            iVar7 = iVar7 + (int)uVar18;
                        }
                    }
                    uVar19 = uVar19 + 1;
                } while (uVar19 != uVar9);
            }
            if (iVar7 < 1) {
                m_oX = arg3;
                m_oY = arg4;
            } else {
                m_oX = m_oX / iVar7 + arg3;
                m_oY = m_oY / iVar7 + arg4;
                arg5 = m_oZ / iVar7 + arg5;
            }
            m_oZ = arg5;
            break;
        case 1:
            if (uVar9 != 0) {
                uVar19 = 0;
                do {
                    piVar10 = (int*)(*arg2)[uVar19];
                    iVar7 = *piVar10;
                    pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)field_448.operator->();
                    iVar8 = pvVar11->end();
                    if (iVar7 < iVar8) {
                        pAVar12 = (Array<Array<int>>*)*field_448;
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*pAVar12)[(long)iVar7];
                        lVar13 = pvVar11->end();
                        if (lVar13 != 0) {
                            uVar18 = 0;
                            do {
                                piVar10 = (int*)(*pvVar11)[uVar18];
                                uVar17 = (unsigned long)*piVar10;
                                piVar10 = &field_24[uVar17];
                                *piVar10 = *piVar10 + arg3;
                                piVar10 = &field_48[uVar17];
                                *piVar10 = *piVar10 + arg4;
                                piVar10 = &field_72[uVar17];
                                *piVar10 = *piVar10 + arg5;
                                uVar18 = uVar18 + 1;
                                uVar17 = pvVar11->end();
                            } while (uVar18 < uVar17);
                        }
                    }
                    uVar19 = uVar19 + 1;
                } while (uVar19 != uVar9);
            }
            break;
        case 2:
            if (uVar9 != 0) {
                puVar1 = &field_24;
                puVar20 = &field_48;
                puVar16 = &field_72;
                uVar17 = (unsigned long)(uint8_t)arg3 << 3;
                uVar19 = (unsigned long)(uint8_t)arg4 << 3;
                local_70 = (uint8_t)arg5;
                uVar18 = (unsigned long)local_70 << 3;
                arg1_01 = 0;
                do {
                    piVar10 = (int*)(*arg2)[arg1_01];
                    iVar7 = *piVar10;
                    pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)field_448.operator->();
                    iVar8 = pvVar11->end();
                    if (iVar7 < iVar8) {
                        pAVar12 = (Array<Array<int>>*)*field_448;
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*pAVar12)[(long)iVar7];
                        lVar13 = pvVar11->end();
                        if (lVar13 != 0) {
                            arg1_00 = 0;
                            do {
                                piVar10 = (int*)(*pvVar11)[arg1_00];
                                iVar7 = m_oX;
                                uVar21 = (unsigned long)*piVar10;
                                piVar10 = (int*)(*puVar1)[uVar21];
                                *piVar10 = *piVar10 - iVar7;
                                iVar7 = m_oY;
                                piVar10 = (int*)(*puVar20)[uVar21];
                                *piVar10 = *piVar10 - iVar7;
                                iVar7 = m_oZ;
                                piVar10 = (int*)(*puVar16)[uVar21];
                                *piVar10 = *piVar10 - iVar7;
                                if ((unsigned long)local_70 != 0) {
                                    piVar10 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_sinTable))[uVar18];
                                    iVar7 = *piVar10;
                                    piVar10 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_cosTable))[uVar18];
                                    iVar8 = *piVar10;
                                    piVar10 = (int*)(*puVar20)[uVar21];
                                    iVar6 = *piVar10;
                                    piVar10 = (int*)(*puVar1)[uVar21];
                                    iVar2 = *piVar10;
                                    piVar10 = (int*)(*puVar20)[uVar21];
                                    iVar3 = *piVar10;
                                    piVar10 = (int*)(*puVar1)[uVar21];
                                    iVar4 = *piVar10;
                                    piVar10 = (int*)(*puVar20)[uVar21];
                                    *piVar10 = iVar8 * iVar3 - iVar7 * iVar4 >> 16;
                                    piVar10 = (int*)(*puVar1)[uVar21];
                                    *piVar10 = iVar2 * iVar8 + iVar6 * iVar7 >> 16;
                                }
                                if ((unsigned long)(uint8_t)arg3 != 0) {
                                    piVar10 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_sinTable))[uVar17];
                                    iVar7 = *piVar10;
                                    piVar10 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_cosTable))[uVar17];
                                    iVar8 = *piVar10;
                                    piVar10 = (int*)(*puVar20)[uVar21];
                                    iVar6 = *piVar10;
                                    piVar10 = (int*)(*puVar16)[uVar21];
                                    iVar2 = *piVar10;
                                    piVar10 = (int*)(*puVar20)[uVar21];
                                    iVar3 = *piVar10;
                                    piVar10 = (int*)(*puVar16)[uVar21];
                                    iVar4 = *piVar10;
                                    piVar10 = (int*)(*puVar16)[uVar21];
                                    *piVar10 = iVar8 * iVar4 + iVar7 * iVar3 >> 16;
                                    piVar10 = (int*)(*puVar20)[uVar21];
                                    *piVar10 = iVar6 * iVar8 - iVar2 * iVar7 >> 16;
                                }
                                if ((unsigned long)(uint8_t)arg4 != 0) {
                                    piVar10 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_sinTable))[uVar19];
                                    iVar7 = *piVar10;
                                    piVar10 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_cosTable))[uVar19];
                                    iVar8 = *piVar10;
                                    piVar10 = (int*)(*puVar16)[uVar21];
                                    iVar6 = *piVar10;
                                    piVar10 = (int*)(*puVar1)[uVar21];
                                    iVar2 = *piVar10;
                                    piVar10 = (int*)(*puVar16)[uVar21];
                                    iVar3 = *piVar10;
                                    piVar10 = (int*)(*puVar1)[uVar21];
                                    iVar4 = *piVar10;
                                    piVar10 = (int*)(*puVar16)[uVar21];
                                    *piVar10 = iVar8 * iVar3 - iVar7 * iVar4 >> 16;
                                    piVar10 = (int*)(*puVar1)[uVar21];
                                    *piVar10 = iVar2 * iVar8 + iVar6 * iVar7 >> 16;
                                }
                                iVar7 = m_oX;
                                piVar10 = (int*)(*puVar1)[uVar21];
                                *piVar10 = *piVar10 + iVar7;
                                iVar7 = m_oY;
                                piVar10 = (int*)(*puVar20)[uVar21];
                                *piVar10 = *piVar10 + iVar7;
                                iVar7 = m_oZ;
                                piVar10 = (int*)(*puVar16)[uVar21];
                                *piVar10 = *piVar10 + iVar7;
                                arg1_00 = arg1_00 + 1;
                                uVar21 = pvVar11->end();
                            } while (arg1_00 < uVar21);
                        }
                    }
                    arg1_01 = arg1_01 + 1;
                } while (arg1_01 != uVar9);
            }
            break;
        case 3:
            if (uVar9 != 0) {
                puVar1 = &field_24;
                puVar20 = &field_48;
                puVar16 = &field_72;
                uVar19 = 0;
                do {
                    piVar10 = (int*)(*arg2)[uVar19];
                    iVar7 = *piVar10;
                    pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)field_448.operator->();
                    iVar8 = pvVar11->end();
                    if (iVar7 < iVar8) {
                        pAVar12 = (Array<Array<int>>*)*field_448;
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*pAVar12)[(long)iVar7];
                        lVar13 = pvVar11->end();
                        if (lVar13 != 0) {
                            uVar18 = 0;
                            do {
                                piVar10 = (int*)(*pvVar11)[uVar18];
                                iVar7 = m_oX;
                                uVar17 = (unsigned long)*piVar10;
                                piVar10 = (int*)(*puVar1)[uVar17];
                                *piVar10 = *piVar10 - iVar7;
                                iVar7 = m_oY;
                                piVar10 = (int*)(*puVar20)[uVar17];
                                *piVar10 = *piVar10 - iVar7;
                                iVar7 = m_oZ;
                                piVar10 = (int*)(*puVar16)[uVar17];
                                *piVar10 = *piVar10 - iVar7;
                                piVar10 = (int*)(*puVar1)[uVar17];
                                iVar8 = *piVar10 * arg3;
                                iVar7 = iVar8 + 127;
                                if (-1 < iVar8) {
                                    iVar7 = iVar8;
                                }
                                piVar10 = (int*)(*puVar1)[uVar17];
                                *piVar10 = iVar7 >> 7;
                                piVar10 = (int*)(*puVar20)[uVar17];
                                iVar8 = *piVar10 * arg4;
                                iVar7 = iVar8 + 127;
                                if (-1 < iVar8) {
                                    iVar7 = iVar8;
                                }
                                piVar10 = (int*)(*puVar20)[uVar17];
                                *piVar10 = iVar7 >> 7;
                                piVar10 = (int*)(*puVar16)[uVar17];
                                iVar8 = *piVar10 * arg5;
                                iVar7 = iVar8 + 127;
                                if (-1 < iVar8) {
                                    iVar7 = iVar8;
                                }
                                piVar10 = (int*)(*puVar16)[uVar17];
                                *piVar10 = iVar7 >> 7;
                                iVar7 = m_oX;
                                piVar10 = (int*)(*puVar1)[uVar17];
                                *piVar10 = *piVar10 + iVar7;
                                iVar7 = m_oY;
                                piVar10 = (int*)(*puVar20)[uVar17];
                                *piVar10 = *piVar10 + iVar7;
                                iVar7 = m_oZ;
                                piVar10 = (int*)(*puVar16)[uVar17];
                                *piVar10 = *piVar10 + iVar7;
                                uVar18 = uVar18 + 1;
                                uVar17 = pvVar11->end();
                            } while (uVar18 < uVar17);
                        }
                    }
                    uVar19 = uVar19 + 1;
                } while (uVar19 != uVar9);
            }
            break;
        case 5:
            puVar1 = &field_464;
            bVar5 = *puVar1 != nullptr;
            if (bVar5) {
                puVar20 = &field_208;
                bVar5 = *puVar20 != nullptr;
                if ((bVar5) && (uVar9 != 0)) {
                    uVar19 = 0;
                    do {
                        piVar10 = (int*)(*arg2)[uVar19];
                        iVar7 = *piVar10;
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*puVar1).operator->();
                        iVar8 = pvVar11->end();
                        if (iVar7 < iVar8) {
                            pAVar12 = (Array<Array<int>>*)**puVar1;
                            pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*pAVar12)[(long)iVar7];
                            lVar13 = pvVar11->end();
                            if (lVar13 != 0) {
                                uVar18 = 0;
                                do {
                                    piVar10 = (int*)(*pvVar11)[uVar18];
                                    iVar7 = *piVar10;
                                    pAVar14 = (Array<signed char>*)**puVar20;
                                    pbVar15 = (uint8_t*)(*pAVar14)[(long)iVar7];
                                    iVar8 = (unsigned int)*pbVar15 + arg3 * 8;
                                    if (254 < iVar8) {
                                        iVar8 = 255;
                                    }
                                    if (iVar8 < 1) {
                                        iVar8 = 0;
                                    }
                                    pAVar14 = (Array<signed char>*)**puVar20;
                                    puVar16 = (uint8_t*)(*pAVar14)[(long)iVar7];
                                    *puVar16 = (char)iVar8;
                                    uVar18 = uVar18 + 1;
                                    uVar17 = pvVar11->end();
                                } while (uVar18 < uVar17);
                            }
                        }
                        uVar19 = uVar19 + 1;
                    } while (uVar19 != uVar9);
                }
            }
        }
    }

    // 0x10035ce10
    void ModelUnlitImpl::SplitAnimate(const AnimFrameSet& animFrameSet1, int arg2, const AnimFrameSet& animFrameSet2,
                                      int arg4, int* arg5) {
        int iVar1;
        int iVar2;
        shared_ptr<GroundDecor>* groundDecor;
        int* piVar4;
        long lVar5;
        vector<int>* pvVar6;
        int iVar7;
        int iVar8;
        unsigned long uVar9;
        unsigned long uVar10;
        vector<int> local_c8;
        vector<int> local_a8;
        shared_ptr<GroundDecor>* local_88;
        shared_ptr<Decor> local_80;
        long local_70;
        Array<int>* local_68;
        shared_ptr<GroundDecor>* local_60;
        shared_ptr<GroundDecor>* local_58;
        shared_ptr<GroundDecor>* local_48;
        int local_34;

        PrepareAnim();
        if ((!field_448 == nullptr) && (arg2 != -1)) {
            if ((arg5 == nullptr) || (arg4 == -1)) {
                Animate(animFrameSet1, arg2);
            } else {
                groundDecor = &animFrameSet1[(long)arg2];
                local_70 = animFrameSet2[(long)arg4];
                local_80 = shared_ptr(groundDecor);
                m_oX = 0;
                m_oY = 0;
                m_oZ = 0;
                local_48 = groundDecor;
                if (0 < *(int*)(groundDecor + 16)) {
                    local_68 = (Array<int>*)(groundDecor + 24);
                    local_60 = groundDecor + 48;
                    local_58 = groundDecor + 72;
                    local_88 = groundDecor + 96;
                    iVar8 = *arg5;
                    iVar7 = 1;
                    uVar9 = 0;
                    do {
                        piVar4 = (int*)(*local_68)[uVar9];
                        iVar1 = *piVar4;
                        uVar10 = (unsigned long)iVar1;
                        if (iVar8 < iVar1) {
                            piVar4 = arg5 + iVar7;
                            do {
                                iVar8 = *piVar4;
                                piVar4 = piVar4 + 1;
                                iVar7 = iVar7 + 1;
                            } while (iVar8 < iVar1);
                        }
                        if (iVar1 == iVar8) {
                            lVar5 = local_80.operator->();
                            piVar4 = (int*)(*((lVar5 + 8)))[uVar10];
                            if (*piVar4 == 0)
                                goto LAB_10035cf10;
                        } else {
                        LAB_10035cf10:
                            lVar5 = local_80.operator->();
                            piVar4 = (int*)(*((lVar5 + 8)))[uVar10];
                            local_34 = *piVar4;
                            lVar5 = local_80.operator->();
                            pvVar6 = (vector<int>*)(*((lVar5 + 40)))[uVar10];
                            local_c8 = eastl::vector<int>(*pvVar6);
                            piVar4 = (int*)(*local_60)[uVar9];
                            iVar1 = *piVar4;
                            piVar4 = (int*)(*local_58)[uVar9];
                            iVar2 = *piVar4;
                            piVar4 = (int*)(*local_88)[uVar9];
                            Animate2(local_34, &local_c8, iVar1, iVar2, *piVar4);
                        }
                        uVar9 = uVar9 + 1;
                    } while ((long)uVar9 < (long)*(int*)(local_48 + 16));
                }
                m_oX = 0;
                m_oY = 0;
                m_oZ = 0;
                if (0 < *(int*)(local_70 + 16)) {
                    local_48 = (shared_ptr<GroundDecor>*)(local_70 + 24);
                    local_68 = (Array<int>*)(local_70 + 48);
                    local_60 = (shared_ptr<GroundDecor>*)(local_70 + 72);
                    local_58 = (shared_ptr<GroundDecor>*)(local_70 + 96);
                    iVar8 = *arg5;
                    iVar7 = 1;
                    uVar9 = 0;
                    do {
                        piVar4 = (int*)(*local_48)[uVar9];
                        iVar1 = *piVar4;
                        uVar10 = (unsigned long)iVar1;
                        if (iVar8 < iVar1) {
                            piVar4 = arg5 + iVar7;
                            do {
                                iVar8 = *piVar4;
                                piVar4 = piVar4 + 1;
                                iVar7 = iVar7 + 1;
                            } while (iVar8 < iVar1);
                        }
                        if (iVar1 == iVar8) {
                        LAB_10035d111:
                            lVar5 = local_80.operator->();
                            piVar4 = (int*)(*((lVar5 + 8)))[uVar10];
                            local_34 = *piVar4;
                            lVar5 = local_80.operator->();
                            pvVar6 = (vector<int>*)(*((lVar5 + 40)))[uVar10];
                            local_a8 = eastl::vector<int>(*pvVar6);
                            piVar4 = (int*)(*local_68)[uVar9];
                            iVar1 = *piVar4;
                            piVar4 = (int*)(*local_60)[uVar9];
                            iVar2 = *piVar4;
                            piVar4 = (int*)(*local_58)[uVar9];
                            Animate2(local_34, &local_a8, iVar1, iVar2, *piVar4);
                        } else {
                            lVar5 = local_80.operator->();
                            piVar4 = (int*)(*((lVar5 + 8)))[uVar10];
                            if (*piVar4 == 0)
                                goto LAB_10035d111;
                        }
                        uVar9 = uVar9 + 1;
                    } while ((long)uVar9 < (long)*(int*)(local_70 + 16));
                }
                GeometryChanged();
            }
        }
    }

    // 0x10035d210
    void ModelUnlitImpl::DiscardAnimLabels() {

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        field_480 = local_28;
        local_28 = shared_ptr();
        field_496 = local_28;
        local_28 = shared_ptr();
        field_448 = local_28;
        local_28 = shared_ptr();
        field_464 = local_28;
    }

    // 0x10035d2f0
    void ModelUnlitImpl::Rotate90() {
        int iVar1;
        uint32_t uVar2;
        int* piVar3;
        uint32_t* puVar4;
        unsigned long arg1;

        if (0 < (int)field_20) {
            arg1 = 0;
            do {
                piVar3 = &field_24[arg1];
                iVar1 = *piVar3;
                puVar4 = &field_72[arg1];
                uVar2 = *puVar4;
                puVar4 = &field_24[arg1];
                *puVar4 = uVar2;
                piVar3 = &field_72[arg1];
                *piVar3 = -iVar1;
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)(int)field_20);
        }
        GeometryChanged();
    }

    // 0x10035d390
    void ModelUnlitImpl::Rotate180() {
        int iVar1;
        int* piVar2;
        unsigned long arg1;

        if (0 < (int)field_20) {
            arg1 = 0;
            do {
                piVar2 = &field_24[arg1];
                iVar1 = *piVar2;
                piVar2 = &field_24[arg1];
                *piVar2 = -iVar1;
                piVar2 = &field_72[arg1];
                iVar1 = *piVar2;
                piVar2 = &field_72[arg1];
                *piVar2 = -iVar1;
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)(int)field_20);
        }
        GeometryChanged();
    }

    // 0x10035d430
    void ModelUnlitImpl::Rotate270() {
        int iVar1;
        uint32_t uVar2;
        int* piVar3;
        uint32_t* puVar4;
        unsigned long arg1;

        if (0 < (int)field_20) {
            arg1 = 0;
            do {
                piVar3 = &field_72[arg1];
                iVar1 = *piVar3;
                puVar4 = &field_24[arg1];
                uVar2 = *puVar4;
                puVar4 = &field_72[arg1];
                *puVar4 = uVar2;
                piVar3 = &field_24[arg1];
                *piVar3 = -iVar1;
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)(int)field_20);
        }
        GeometryChanged();
    }

    // 0x10035d4d0
    void ModelUnlitImpl::RotateYAxis(int arg1) {
        uint8_t* this_00;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        uint8_t* this_01;
        unsigned long arg1_00;

        int* piVar7 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_sinTable))[(long)arg1];
        int iVar1 = *piVar7;
        piVar7 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_cosTable))[(long)arg1];
        if (0 < (int)field_20) {
            iVar2 = *piVar7;
            this_00 = &field_72;
            this_01 = &field_24;
            arg1_00 = 0;
            do {
                piVar7 = (int*)(*this_00)[arg1_00];
                iVar3 = *piVar7;
                piVar7 = (int*)(*this_01)[arg1_00];
                iVar4 = *piVar7;
                piVar7 = (int*)(*this_00)[arg1_00];
                iVar5 = *piVar7;
                piVar7 = (int*)(*this_01)[arg1_00];
                iVar6 = *piVar7;
                piVar7 = (int*)(*this_00)[arg1_00];
                *piVar7 = iVar5 * iVar2 - iVar6 * iVar1 >> 16;
                piVar7 = (int*)(*this_01)[arg1_00];
                *piVar7 = iVar4 * iVar2 + iVar3 * iVar1 >> 16;
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(int)field_20);
        }
        GeometryChanged();
    }

    // 0x10035d5f0
    void ModelUnlitImpl::RotateXAxis(int arg1) {
        uint8_t* this_00;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        uint8_t* this_01;
        unsigned long arg1_00;

        int* piVar7 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_sinTable))[(long)arg1];
        int iVar1 = *piVar7;
        piVar7 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_cosTable))[(long)arg1];
        if (0 < (int)field_20) {
            iVar2 = *piVar7;
            this_00 = &field_48;
            this_01 = &field_72;
            arg1_00 = 0;
            do {
                piVar7 = (int*)(*this_00)[arg1_00];
                iVar3 = *piVar7;
                piVar7 = (int*)(*this_01)[arg1_00];
                iVar4 = *piVar7;
                piVar7 = (int*)(*this_00)[arg1_00];
                iVar5 = *piVar7;
                piVar7 = (int*)(*this_01)[arg1_00];
                iVar6 = *piVar7;
                piVar7 = (int*)(*this_01)[arg1_00];
                *piVar7 = iVar6 * iVar2 + iVar5 * iVar1 >> 16;
                piVar7 = (int*)(*this_00)[arg1_00];
                *piVar7 = iVar3 * iVar2 - iVar4 * iVar1 >> 16;
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(int)field_20);
        }
        GeometryChanged();
    }

    // 0x10035d710
    void ModelUnlitImpl::Translate(int arg1, int arg2, int arg3) {
        int* piVar1;
        unsigned long arg1_00;

        if (0 < (int)field_20) {
            arg1_00 = 0;
            do {
                piVar1 = &field_24[arg1_00];
                *piVar1 = *piVar1 + arg1;
                piVar1 = &field_48[arg1_00];
                *piVar1 = *piVar1 + arg2;
                piVar1 = &field_72[arg1_00];
                *piVar1 = *piVar1 + arg3;
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(int)field_20);
        }
        GeometryChanged();
    }

    // 0x10035d7b0
    void ModelUnlitImpl::Recolour(short arg1, short arg2) {
        Array<short>* pAVar1;
        short* psVar2;
        unsigned long arg1_00;

        if (0 < field_96) {
            arg1_00 = 0;
            do {
                pAVar1 = (Array<short>*)*field_240;
                psVar2 = (short*)(*pAVar1)[arg1_00];
                if (*psVar2 == arg1) {
                    pAVar1 = (Array<short>*)*field_240;
                    psVar2 = (short*)(*pAVar1)[arg1_00];
                    *psVar2 = arg2;
                }
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)field_96);
        }
    }

    // 0x10035d830
    void ModelUnlitImpl::Retexture(short arg1, short arg2) {
        Array<short>* pAVar2;
        short* psVar3;
        unsigned long arg1_00;

        uint8_t* objType = &field_256;
        if ((!*objType == nullptr) && (0 < field_96)) {
            arg1_00 = 0;
            do {
                pAVar2 = (Array<short>*)**objType;
                psVar3 = (short*)(*pAVar2)[arg1_00];
                if (*psVar3 == arg1) {
                    pAVar2 = (Array<short>*)**objType;
                    psVar3 = (short*)(*pAVar2)[arg1_00];
                    *psVar3 = arg2;
                }
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)field_96);
        }
    }

    // 0x10035d8c0
    void ModelUnlitImpl::Mirror() {
        int iVar1;
        uint32_t uVar2;
        uint32_t uVar3;
        int* piVar4;
        uint32_t* puVar5;
        unsigned long uVar6;

        if (0 < (int)field_20) {
            uVar6 = 0;
            do {
                piVar4 = &field_72[uVar6];
                iVar1 = *piVar4;
                piVar4 = &field_72[uVar6];
                *piVar4 = -iVar1;
                uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)field_20);
        }
        if (0 < field_96) {
            uVar6 = 0;
            do {
                puVar5 = &field_104[uVar6];
                uVar2 = *puVar5;
                puVar5 = &field_152[uVar6];
                uVar3 = *puVar5;
                puVar5 = &field_104[uVar6];
                *puVar5 = uVar3;
                puVar5 = &field_152[uVar6];
                *puVar5 = uVar2;
                uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)field_96);
        }
        GeometryChanged();
    }

    // 0x10035d9a0
    void ModelUnlitImpl::Resize(int arg1, int arg2, int arg3) {
        int iVar1;
        int* piVar2;
        unsigned long arg1_00;
        int iVar3;

        if (0 < (int)field_20) {
            arg1_00 = 0;
            do {
                piVar2 = &field_24[arg1_00];
                iVar1 = *piVar2 * arg1;
                iVar3 = iVar1 + 127;
                if (-1 < iVar1) {
                    iVar3 = iVar1;
                }
                piVar2 = &field_24[arg1_00];
                *piVar2 = iVar3 >> 7;
                piVar2 = &field_48[arg1_00];
                iVar1 = *piVar2 * arg2;
                iVar3 = iVar1 + 127;
                if (-1 < iVar1) {
                    iVar3 = iVar1;
                }
                piVar2 = &field_48[arg1_00];
                *piVar2 = iVar3 >> 7;
                piVar2 = &field_72[arg1_00];
                iVar1 = *piVar2 * arg3;
                iVar3 = iVar1 + 127;
                if (-1 < iVar1) {
                    iVar3 = iVar1;
                }
                piVar2 = &field_72[arg1_00];
                *piVar2 = iVar3 >> 7;
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(int)field_20);
        }
        GeometryChanged();
    }

    // 0x10035dab0
    void ModelUnlitImpl::ResizePrecise(int arg1, int arg2, int arg3, int arg4) {
        int iVar1;
        int* piVar2;
        unsigned long arg1_00;

        if (0 < (int)field_20) {
            arg1_00 = 0;
            do {
                piVar2 = &field_24[arg1_00];
                iVar1 = *piVar2;
                piVar2 = &field_24[arg1_00];
                *piVar2 = (iVar1 * arg1) / arg4;
                piVar2 = &field_48[arg1_00];
                iVar1 = *piVar2;
                piVar2 = &field_48[arg1_00];
                *piVar2 = (iVar1 * arg2) / arg4;
                piVar2 = &field_72[arg1_00];
                iVar1 = *piVar2;
                piVar2 = &field_72[arg1_00];
                *piVar2 = (iVar1 * arg3) / arg4;
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)(int)field_20);
        }
        GeometryChanged();
    }

    // 0x10035dbc0
    int ModelUnlitImpl::ResizeToSphere(int arg1) {
        int iVar1;
        int* piVar2;
        int arg1_00;
        unsigned long arg1_01;
        int iVar3;

        if ((int)field_20 < 1) {
            arg1_00 = 0;
        } else {
            arg1_01 = 0;
            arg1_00 = 0;
            do {
                piVar2 = &field_24[arg1_01];
                iVar3 = *piVar2;
                piVar2 = &field_48[arg1_01];
                iVar1 = *piVar2;
                piVar2 = &field_72[arg1_01];
                iVar3 = iVar1 * iVar1 + iVar3 * iVar3 + *piVar2 * *piVar2;
                if (iVar3 <= arg1_00) {
                    iVar3 = arg1_00;
                }
                arg1_00 = iVar3;
                arg1_01 = arg1_01 + 1;
            } while ((long)arg1_01 < (long)(int)field_20);
        }
        double dVar4 = (double)sqrt<int>(arg1_00);
        ResizePrecise(arg1, arg1, arg1, (int)(dVar4 + 0.99));
        return (int)(dVar4 + 0.99);
    }

    // 0x10035dfe0
    void ModelUnlitImpl::CalculateTextureSet() {
        auto arg2 = field_256.end();
        CalculateTexturesForFaces((shared_ptr<Array<short> _>*)&field_272, arg2);
    }

    // 0x10035e010
    void ModelUnlitImpl::CalculateTexturesForFaces(shared_ptr<Array<short>>& arg1, Array<short>* arg2) {
        short sVar1;
        unsigned int uVar4;
        long lVar5;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_00;
        uint16_t* puVar6;
        uint16_t* puVar7;
        unsigned long uVar8;
        hash_set<short> local_98;
        uint8_t local_58[16];
        uint8_t local_40[16];

        if ((arg1 == nullptr) && (arg2 != nullptr)) {
            uVar4 = arg2->end();
            lVar5 = arg2->data();
            new (local_58) eastl::allocator("EASTL hash_set");
            local_98 = eastl::hash_set<short>(*local_58);
            if (0 < (int)uVar4) {
                uVar8 = 0;
                do {
                    sVar1 = *(short*)(lVar5 + uVar8 * 2);
                    local_40._0_2_ = sVar1;
                    if (sVar1 != -1) {
                        *local_58 = local_98.emplace<short&>(*local_40);
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar4 != uVar8);
            }
            local_40._0_8_ = local_98.size();
            make_shared<Array<short>, unsigned long>((ReturnValue*)local_58, (unsigned long*)local_40);
            arg1 = *local_58;
            this_00 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)arg1.operator->();
            puVar6 = (uint16_t*)this_00->data();
            local_58 = local_98.begin();
            local_40 = local_98.end();
            while (true) {
                if (*local_58 != *local_40 == '\0')
                    break;
                puVar7 = (uint16_t*)local_58->HeapBeginPtr();
                *puVar6 = *puVar7;
                puVar6 = puVar6 + 1;
                ++*local_58;
            }
        }
    }

    // 0x10035e1d0
    void ModelUnlitImpl::CalculateBoundingCuboid() {
        int iVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        unsigned long arg1;

        field_8 = 999999;
        field_580 = -999999;
        field_584 = 999999;
        field_588 = -999999;
        field_592 = -999999;
        field_596 = 99999;
        if (0 < (int)field_20) {
            arg1 = 0;
            do {
                piVar4 = &field_24[arg1];
                iVar1 = *piVar4;
                piVar4 = &field_48[arg1];
                iVar2 = *piVar4;
                piVar4 = &field_72[arg1];
                iVar3 = *piVar4;
                if (iVar1 < field_584) {
                    field_584 = iVar1;
                    if (field_588 < iVar1)
                        goto LAB_10035e2c0;
                LAB_10035e27e:
                    if (field_596 <= iVar3)
                        goto LAB_10035e287;
                LAB_10035e2d0:
                    field_596 = iVar3;
                    if (field_592 < iVar3)
                        goto LAB_10035e2e0;
                LAB_10035e290:
                    if (field_8 <= iVar2)
                        goto LAB_10035e296;
                LAB_10035e2ed:
                    field_8 = iVar2;
                    iVar1 = field_580;
                } else {
                    if (iVar1 <= field_588)
                        goto LAB_10035e27e;
                LAB_10035e2c0:
                    field_588 = iVar1;
                    if (iVar3 < field_596)
                        goto LAB_10035e2d0;
                LAB_10035e287:
                    if (iVar3 <= field_592)
                        goto LAB_10035e290;
                LAB_10035e2e0:
                    field_592 = iVar3;
                    if (iVar2 < field_8)
                        goto LAB_10035e2ed;
                LAB_10035e296:
                    iVar1 = field_580;
                }
                if (iVar1 < iVar2) {
                    field_580 = iVar2;
                }
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)(int)field_20);
        }
        field_576 = 1;
    }

    // 0x10035e370
    ModelUnlitImpl* ModelUnlitImpl::Light(int arg1, int arg2, int arg3, int arg4, int arg5) {
        uint8_t* midiPlayerMainThread;
        shared_ptr<Array<signed char>>* this_00;
        uint8_t uVar1;
        unsigned short uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        bool bVar6;
        char cVar7;
        uint32_t uVar8;
        long lVar9;
        Array<signed char>* pAVar10;
        char* pcVar11;
        uint8_t* pbVar12;
        int* piVar13;
        int* piVar14;
        unsigned short* puVar15;
        unsigned int* puVar16;
        uint8_t* puVar17;
        Array<short>* pAVar18;
        short* psVar19;
        Array<PointNormal>* pAVar20;
        Array<FaceNormal>* pAVar21;
        uint32_t* puVar22;
        short sVar23;
        uint32_t in_register_00000014;
        char cVar24;
        unsigned long uVar25;
        uint32_t in_register_00000034;
        int iVar27;
        unsigned long arg1_00;
        shared_ptr<configdecoder::ObjType>* objType;
        int in_stack_00000008;
        vector<EntityHighlight*, BucketAllocatorEASTL> local_128[16];
        ReturnValue local_118;
        Array<int>* local_108;
        shared_ptr<Array<FaceNormal>>* local_100;
        shared_ptr<Array<short>>* local_f8;
        int local_e4;
        Array<int>* local_e0;
        Array<int>* local_d8;
        Array<int>* local_d0;
        shared_ptr<configdecoder::ObjType>* local_c8;
        double local_c0;
        int* local_b8;
        Array<int>* local_b0;
        Array<int>* local_a8;
        long local_a0;
        Array<int>* local_90;
        Array<short>* local_88;
        ModelUnlitImpl* local_80;
        Array<short>* local_78;
        Array<short>* local_70;
        int local_68;
        int iStack_64;
        int iStack_60;
        int iStack_5c;
        Array<signed char>* local_40;
        unsigned long local_38;

        ModelUnlitImpl* pMVar26 = (ModelUnlitImpl*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        uint64_t local_98 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        if (g_usingRSeven == '\0') {
            local_c8 = (shared_ptr<configdecoder::ObjType>*)(((uint64_t)local_c8._4_4_ << 32) | (uint32_t)arg3);
            CalculateNormals(pMVar26);
            local_c0 = (double)sqrt<int>(in_stack_00000008 * in_stack_00000008 + arg5 * arg5 + arg4 * arg4);
            make_shared<ModelLitImpl>();
            lVar9 = local_128->end();
            local_d0 = (Array<int>*)(lVar9 + 176);
            local_d0->set_max_size((long)pMVar26->field_96, 1);
            piVar14 = &pMVar26->field_96;
            local_108 = (Array<int>*)(lVar9 + 200);
            local_108->set_max_size((long)*piVar14, 1);
            local_b0 = (Array<int>*)(lVar9 + 224);
            local_b0->set_max_size((long)*piVar14, 1);
            local_b8 = piVar14;
            local_a0 = lVar9;
            local_80 = pMVar26;
            if (0 < pMVar26->field_316) {
                midiPlayerMainThread = &pMVar26->field_224;
                bVar6 = *midiPlayerMainThread != nullptr;
                if (bVar6) {
                    new (&local_68) eastl::vector<int>();
                    local_68.resize((long)local_80->field_316);
                    if (0 < *piVar14) {
                        uVar25 = 0;
                        do {
                            pAVar10 = (Array<signed char>*)**midiPlayerMainThread;
                            pcVar11 = (char*)(*pAVar10)[uVar25];
                            if (*pcVar11 != -1) {
                                pAVar10 = (Array<signed char>*)**midiPlayerMainThread;
                                pbVar12 = (uint8_t*)(*pAVar10)[uVar25];
                                piVar13 = (int*)local_68[(unsigned long)*pbVar12];
                                *piVar13 = *piVar13 + 1;
                            }
                            uVar25 = uVar25 + 1;
                        } while ((long)uVar25 < (long)*piVar14);
                    }
                    *(uint32_t*)(local_a0 + 316) = 0;
                    puVar17 = &local_80->field_320;
                    if (0 < local_80->field_316) {
                        uVar25 = 0;
                        do {
                            piVar14 = &local_68[uVar25];
                            if (0 < *piVar14) {
                                pcVar11 = (char*)(*puVar17)[uVar25];
                                if (*pcVar11 == '\0') {
                                    *(int*)(local_a0 + 316) = *(int*)(local_a0 + 316) + 1;
                                }
                            }
                            uVar25 = uVar25 + 1;
                        } while ((long)uVar25 < (long)local_80->field_316);
                    }
                    local_e0 = (Array<int>*)(local_a0 + 320);
                    local_40 = (Array<signed char>*)puVar17;
                    local_e0->set_max_size((long)*(int*)(local_a0 + 316), 1);
                    local_d8 = (Array<int>*)(local_a0 + 344);
                    local_d8->set_max_size((long)*(int*)(local_a0 + 316), 1);
                    local_90 = (Array<int>*)(local_a0 + 368);
                    local_90->set_max_size((long)*(int*)(local_a0 + 316), 1);
                    if (0 < local_80->field_316) {
                        local_88 = (Array<short>*)&local_80->field_344;
                        local_78 = (Array<short>*)&local_80->field_368;
                        local_70 = (Array<short>*)&local_80->field_392;
                        uVar25 = 0;
                        local_38 = local_38 & 18446744069414584320;
                        do {
                            piVar14 = &local_68[uVar25];
                            if (*piVar14 < 1) {
                            LAB_10035e650:
                                puVar22 = &local_68[uVar25];
                                *puVar22 = 4294967295;
                            } else {
                                pcVar11 = (char*)(*local_40)[uVar25];
                                if (*pcVar11 != '\0')
                                    goto LAB_10035e650;
                                puVar15 = (unsigned short*)(*local_88)[uVar25];
                                uVar2 = *puVar15;
                                arg1_00 = (unsigned long)(int)local_38;
                                puVar16 = (unsigned int*)(*local_e0)[arg1_00];
                                *puVar16 = (unsigned int)uVar2;
                                puVar15 = (unsigned short*)(*local_78)[uVar25];
                                uVar2 = *puVar15;
                                puVar16 = (unsigned int*)(*local_d8)[arg1_00];
                                *puVar16 = (unsigned int)uVar2;
                                puVar15 = (unsigned short*)(*local_70)[uVar25];
                                uVar2 = *puVar15;
                                puVar16 = (unsigned int*)(*local_90)[arg1_00];
                                *puVar16 = (unsigned int)uVar2;
                                piVar14 = &local_68[uVar25];
                                *piVar14 = (int)local_38;
                                local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)((int)local_38 + 1));
                            }
                            uVar25 = uVar25 + 1;
                        } while ((long)uVar25 < (long)local_80->field_316);
                    }
                    piVar14 = local_b8;
                    make_shared<Array<signed char>, int&>(&local_118, local_b8);
                    this_00 = (shared_ptr<Array<signed char>>*)(local_a0 + 280);
                    *this_00 = local_118;
                    if (0 < *piVar14) {
                        uVar25 = 0;
                        do {
                            pAVar10 = (Array<signed char>*)**midiPlayerMainThread;
                            pcVar11 = (char*)(*pAVar10)[uVar25];
                            if (*pcVar11 == -1) {
                                pAVar10 = (Array<signed char>*)**this_00;
                                puVar17 = (uint8_t*)(*pAVar10)[uVar25];
                                *puVar17 = 255;
                            } else {
                                pAVar10 = (Array<signed char>*)**midiPlayerMainThread;
                                pbVar12 = (uint8_t*)(*pAVar10)[uVar25];
                                puVar17 = &local_68[(unsigned long)*pbVar12];
                                uVar1 = *puVar17;
                                pAVar10 = (Array<signed char>*)**this_00;
                                puVar17 = (uint8_t*)(*pAVar10)[uVar25];
                                *puVar17 = uVar1;
                            }
                            uVar25 = uVar25 + 1;
                            piVar14 = local_b8;
                        } while ((long)uVar25 < (long)*local_b8);
                    }
                    pMVar26 = local_80;
                }
            }
            local_e0 = (Array<int>*)&pMVar26->field_208;
            local_d8 = (Array<int>*)&pMVar26->field_256;
            local_78 = (Array<short>*)&pMVar26->field_104;
            local_70 = (Array<short>*)&pMVar26->field_128;
            local_a8 = (Array<int>*)&pMVar26->field_152;
            if (0 < pMVar26->field_96) {
                local_e4 = (int)local_c0 * (int)local_c8 >> 8;
                objType = (shared_ptr<configdecoder::ObjType>*)&local_80->field_176;
                local_100 = (shared_ptr<Array<FaceNormal>>*)&local_80->field_416;
                local_90 = (Array<int>*)(((uint64_t)local_90._4_4_ << 32) | (uint32_t)local_e4);
                local_e4 = (local_e4 - ((int)local_c0 * (int)local_c8 >> 31) >> 1) + local_e4;
                local_40 = (Array<signed char>*)&local_80->field_560;
                local_88 = (Array<short>*)&local_80->field_432;
                local_f8 = (shared_ptr<Array<short>>*)&local_80->field_240;
                uVar25 = 0;
                local_c8 = objType;
                do {
                    cVar7 = '\0';
                    bVar6 = *objType == nullptr;
                    if (!bVar6) {
                        pAVar10 = (Array<signed char>*)**objType;
                        pcVar11 = (char*)(*pAVar10)[uVar25];
                        cVar7 = *pcVar11;
                    }
                    cVar24 = '\0';
                    local_38 = uVar25;
                    bVar6 = *local_e0 == nullptr;
                    if (!bVar6) {
                        pAVar10 = (Array<signed char>*)**local_e0;
                        pcVar11 = (char*)(*pAVar10)[local_38];
                        cVar24 = *pcVar11;
                    }
                    bVar6 = *local_d8 == nullptr;
                    sVar23 = -1;
                    if (!bVar6) {
                        pAVar18 = (Array<short>*)**local_d8;
                        psVar19 = (short*)(*pAVar18)[local_38];
                        sVar23 = *psVar19;
                    }
                    uVar25 = local_38;
                    if (cVar24 == -2) {
                        cVar7 = '\x03';
                    }
                    if (cVar24 == -1) {
                        cVar7 = '\x02';
                    }
                    if (sVar23 == -1) {
                        if (cVar7 == '\x03') {
                            puVar22 = (uint32_t*)(*local_d0)[local_38];
                            *puVar22 = 128;
                            puVar22 = (uint32_t*)(*local_b0)[local_38];
                            *puVar22 = 4294967295;
                        } else {
                            if (cVar7 != '\x01') {
                                if (cVar7) {
                                    puVar22 = (uint32_t*)(*local_b0)[local_38];
                                    goto LAB_10035e8ef;
                                }
                                new (&local_68) shared_ptr();
                                pAVar18 = (Array<short>*)**local_f8;
                                puVar15 = (unsigned short*)(*pAVar18)[local_38];
                                local_c0 =
                                    (double)(((uint64_t)local_c0._4_4_ << 32) | (uint32_t)((unsigned int)*puVar15));
                                bVar6 = *local_40 != nullptr;
                                if (bVar6) {
                                    pAVar20 = (Array<PointNormal>*)**local_40;
                                    piVar14 = (int*)(*local_78)[local_38];
                                    lVar9 = (*pAVar20)[(long)*piVar14];
                                    if (*(int*)(lVar9 + 12) == 0)
                                        goto LAB_10035ef19;
                                    pAVar20 = (Array<PointNormal>*)**local_40;
                                    piVar14 = (int*)(*local_78)[local_38];
                                    piVar14 = (int*)(*pAVar20)[(long)*piVar14];
                                } else {
                                LAB_10035ef19:
                                    pAVar20 = (Array<PointNormal>*)**local_88;
                                    piVar14 = (int*)(*local_78)[local_38];
                                    piVar14 = (int*)(*pAVar20)[(long)*piVar14];
                                }
                                iVar27 = *piVar14;
                                iVar3 = piVar14[1];
                                iVar4 = piVar14[2];
                                iVar5 = piVar14[3];
                                local_68 = iVar27;
                                iStack_64 = iVar3;
                                iStack_60 = iVar4;
                                iStack_5c = iVar5;
                                if (iVar5 == 0) {
                                    LogAssert("p.m_c != 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "oldscape/jagex3/dash3d/ModelUnlit.cpp",
                                              3222, nullptr);
                                }
                                puVar22 = (uint32_t*)(*local_d0)[local_38];
                                uVar8 = ModelUnlit::GetColour(
                                    local_c0._0_4_, (iVar4 * in_stack_00000008 + iVar3 * arg5 + iVar27 * arg4) /
                                                            (iVar5 * (int)local_90) +
                                                        (int)local_98);
                                *puVar22 = uVar8;
                                bVar6 = *local_40 != nullptr;
                                if (bVar6) {
                                    pAVar20 = (Array<PointNormal>*)**local_40;
                                    piVar14 = (int*)(*local_70)[local_38];
                                    lVar9 = (*pAVar20)[(long)*piVar14];
                                    if (*(int*)(lVar9 + 12) == 0)
                                        goto LAB_10035f025;
                                    pAVar20 = (Array<PointNormal>*)**local_40;
                                    piVar14 = (int*)(*local_70)[local_38];
                                    piVar14 = (int*)(*pAVar20)[(long)*piVar14];
                                } else {
                                LAB_10035f025:
                                    pAVar20 = (Array<PointNormal>*)**local_88;
                                    piVar14 = (int*)(*local_70)[local_38];
                                    piVar14 = (int*)(*pAVar20)[(long)*piVar14];
                                }
                                iVar27 = *piVar14;
                                iVar3 = piVar14[1];
                                iVar4 = piVar14[2];
                                iVar5 = piVar14[3];
                                local_68 = iVar27;
                                iStack_64 = iVar3;
                                iStack_60 = iVar4;
                                iStack_5c = iVar5;
                                if (iVar5 == 0) {
                                    LogAssert("p.m_c != 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "oldscape/jagex3/dash3d/ModelUnlit.cpp",
                                              3235, nullptr);
                                }
                                puVar22 = (uint32_t*)(*local_108)[local_38];
                                uVar8 = ModelUnlit::GetColour(
                                    local_c0._0_4_, (iVar4 * in_stack_00000008 + iVar3 * arg5 + iVar27 * arg4) /
                                                            (iVar5 * (int)local_90) +
                                                        (int)local_98);
                                *puVar22 = uVar8;
                                bVar6 = *local_40 != nullptr;
                                if (bVar6) {
                                    pAVar20 = (Array<PointNormal>*)**local_40;
                                    piVar14 = (int*)(*local_a8)[local_38];
                                    lVar9 = (*pAVar20)[(long)*piVar14];
                                    if (*(int*)(lVar9 + 12) == 0)
                                        goto LAB_10035f137;
                                    pAVar20 = (Array<PointNormal>*)**local_40;
                                    piVar14 = (int*)(*local_a8)[local_38];
                                    piVar14 = (int*)(*pAVar20)[(long)*piVar14];
                                } else {
                                LAB_10035f137:
                                    pAVar20 = (Array<PointNormal>*)**local_88;
                                    piVar14 = (int*)(*local_a8)[local_38];
                                    piVar14 = (int*)(*pAVar20)[(long)*piVar14];
                                }
                                iVar27 = *piVar14;
                                iVar3 = piVar14[1];
                                iVar4 = piVar14[2];
                                iVar5 = piVar14[3];
                                local_68 = iVar27;
                                iStack_64 = iVar3;
                                iStack_60 = iVar4;
                                iStack_5c = iVar5;
                                if (iVar5 == 0) {
                                    LogAssert("p.m_c != 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "oldscape/jagex3/dash3d/ModelUnlit.cpp",
                                              3248, nullptr);
                                }
                                puVar22 = (uint32_t*)(*local_b0)[local_38];
                                uVar8 = ModelUnlit::GetColour(
                                    local_c0._0_4_, (iVar4 * in_stack_00000008 + iVar3 * arg5 + iVar27 * arg4) /
                                                            (iVar5 * (int)local_90) +
                                                        (int)local_98);
                                goto LAB_10035f1e3;
                            }
                            pAVar21 = (Array<FaceNormal>*)**local_100;
                            piVar14 = (int*)(*pAVar21)[uVar25];
                            iVar27 = (piVar14[2] * in_stack_00000008 + piVar14[1] * arg5 + *piVar14 * arg4) / local_e4;
                            pAVar18 = (Array<short>*)**local_f8;
                            puVar15 = (unsigned short*)(*pAVar18)[uVar25];
                            uVar2 = *puVar15;
                            puVar22 = (uint32_t*)(*local_d0)[uVar25];
                            uVar8 = ModelUnlit::GetColour((unsigned int)uVar2, iVar27 + (int)local_98);
                            *puVar22 = uVar8;
                            puVar22 = (uint32_t*)(*local_b0)[uVar25];
                            *puVar22 = 4294967295;
                            piVar14 = local_b8;
                        }
                    } else if (cVar7 == '\x01') {
                        pAVar21 = (Array<FaceNormal>*)**local_100;
                        piVar14 = (int*)(*pAVar21)[uVar25];
                        iVar27 = *piVar14;
                        iVar3 = piVar14[1];
                        iVar4 = piVar14[2];
                        puVar22 = (uint32_t*)(*local_d0)[uVar25];
                        uVar8 = ModelUnlit::GetTexLight(
                            (iVar4 * in_stack_00000008 + iVar3 * arg5 + iVar27 * arg4) / local_e4 + (int)local_98);
                        *puVar22 = uVar8;
                        puVar22 = (uint32_t*)(*local_b0)[uVar25];
                        *puVar22 = 4294967295;
                        objType = local_c8;
                        piVar14 = local_b8;
                    } else if (!cVar7) {
                        new (&local_68) shared_ptr();
                        bVar6 = *local_40 != nullptr;
                        if (bVar6) {
                            pAVar20 = (Array<PointNormal>*)**local_40;
                            piVar14 = (int*)(*local_78)[local_38];
                            lVar9 = (*pAVar20)[(long)*piVar14];
                            if (*(int*)(lVar9 + 12) == 0)
                                goto LAB_10035eb7b;
                            pAVar20 = (Array<PointNormal>*)**local_40;
                            piVar14 = (int*)(*local_78)[local_38];
                            piVar14 = (int*)(*pAVar20)[(long)*piVar14];
                        } else {
                        LAB_10035eb7b:
                            pAVar20 = (Array<PointNormal>*)**local_88;
                            piVar14 = (int*)(*local_78)[local_38];
                            piVar14 = (int*)(*pAVar20)[(long)*piVar14];
                        }
                        iVar27 = *piVar14;
                        iVar3 = piVar14[1];
                        iVar4 = piVar14[2];
                        iVar5 = piVar14[3];
                        local_68 = iVar27;
                        iStack_64 = iVar3;
                        iStack_60 = iVar4;
                        iStack_5c = iVar5;
                        if (iVar5 == 0) {
                            LogAssert("p.m_c != 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "jagex3/dash3d/ModelUnlit.cpp",
                                      3291, nullptr);
                        }
                        puVar22 = (uint32_t*)(*local_d0)[local_38];
                        uVar8 = ModelUnlit::GetTexLight((iVar4 * in_stack_00000008 + iVar3 * arg5 + iVar27 * arg4) /
                                                            (iVar5 * (int)local_90) +
                                                        (int)local_98);
                        *puVar22 = uVar8;
                        bVar6 = *local_40 != nullptr;
                        if (bVar6) {
                            pAVar20 = (Array<PointNormal>*)**local_40;
                            piVar14 = (int*)(*local_70)[local_38];
                            lVar9 = (*pAVar20)[(long)*piVar14];
                            if (*(int*)(lVar9 + 12) == 0)
                                goto LAB_10035ec80;
                            pAVar20 = (Array<PointNormal>*)**local_40;
                            piVar14 = (int*)(*local_70)[local_38];
                            piVar14 = (int*)(*pAVar20)[(long)*piVar14];
                        } else {
                        LAB_10035ec80:
                            pAVar20 = (Array<PointNormal>*)**local_88;
                            piVar14 = (int*)(*local_70)[local_38];
                            piVar14 = (int*)(*pAVar20)[(long)*piVar14];
                        }
                        iVar27 = *piVar14;
                        iVar3 = piVar14[1];
                        iVar4 = piVar14[2];
                        iVar5 = piVar14[3];
                        local_68 = iVar27;
                        iStack_64 = iVar3;
                        iStack_60 = iVar4;
                        iStack_5c = iVar5;
                        if (iVar5 == 0) {
                            LogAssert("p.m_c != 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "jagex3/dash3d/ModelUnlit.cpp",
                                      3304, nullptr);
                        }
                        puVar22 = (uint32_t*)(*local_108)[local_38];
                        uVar8 = ModelUnlit::GetTexLight((iVar4 * in_stack_00000008 + iVar3 * arg5 + iVar27 * arg4) /
                                                            (iVar5 * (int)local_90) +
                                                        (int)local_98);
                        *puVar22 = uVar8;
                        bVar6 = *local_40 != nullptr;
                        if (bVar6) {
                            pAVar20 = (Array<PointNormal>*)**local_40;
                            piVar14 = (int*)(*local_a8)[local_38];
                            lVar9 = (*pAVar20)[(long)*piVar14];
                            if (*(int*)(lVar9 + 12) == 0)
                                goto LAB_10035ed8c;
                            pAVar20 = (Array<PointNormal>*)**local_40;
                            piVar14 = (int*)(*local_a8)[local_38];
                            piVar14 = (int*)(*pAVar20)[(long)*piVar14];
                        } else {
                        LAB_10035ed8c:
                            pAVar20 = (Array<PointNormal>*)**local_88;
                            piVar14 = (int*)(*local_a8)[local_38];
                            piVar14 = (int*)(*pAVar20)[(long)*piVar14];
                        }
                        iVar27 = *piVar14;
                        iVar3 = piVar14[1];
                        iVar4 = piVar14[2];
                        iVar5 = piVar14[3];
                        local_68 = iVar27;
                        iStack_64 = iVar3;
                        iStack_60 = iVar4;
                        iStack_5c = iVar5;
                        if (iVar5 == 0) {
                            LogAssert("p.m_c != 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "jagex3/dash3d/ModelUnlit.cpp",
                                      3317, nullptr);
                        }
                        puVar22 = (uint32_t*)(*local_b0)[local_38];
                        uVar8 = ModelUnlit::GetTexLight((iVar4 * in_stack_00000008 + iVar3 * arg5 + iVar27 * arg4) /
                                                            (iVar5 * (int)local_90) +
                                                        (int)local_98);
                    LAB_10035f1e3:
                        *puVar22 = uVar8;
                        objType = local_c8;
                        piVar14 = local_b8;
                    } else {
                        puVar22 = (uint32_t*)(*local_b0)[local_38];
                    LAB_10035e8ef:
                        *puVar22 = 4294967294;
                    }
                    uVar25 = local_38 + 1;
                } while ((long)uVar25 < (long)*piVar14);
            }
            pMVar26 = local_80;
            PrepareAnim(local_80);
            lVar9 = local_a0;
            *(unsigned int*)(local_a0 + 20) = pMVar26->field_20;
            (*((local_a0 + 24))) = pMVar26->field_24;
            (*((lVar9 + 48))) = pMVar26->field_48;
            (*((lVar9 + 72))) = pMVar26->field_72;
            *(int*)(lVar9 + 96) = *piVar14;
            (*((lVar9 + 104))) = *local_78;
            (*((lVar9 + 128))) = *local_70;
            (*((lVar9 + 152))) = *local_a8;
            (*((lVar9 + 248))) = pMVar26->field_192;
            (*((lVar9 + 264))) = *local_e0;
            *(uint8_t*)(lVar9 + 312) = pMVar26->field_312;
            (*((lVar9 + 392))) = pMVar26->field_448;
            (*((lVar9 + 408))) = pMVar26->field_464;
            (*((lVar9 + 424))) = pMVar26->field_480;
            (*((lVar9 + 440))) = pMVar26->field_496;
            (*((lVar9 + 296))) = *local_d8;
            (*((lVar9 + 456))) = pMVar26->field_512;
            (*((lVar9 + 472))) = pMVar26->field_528;
            *(int*)(lVar9 + 12) = pMVar26->field_12;
            static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>((shared_ptr<ClientNpc>*)this);
            this = this;
        } else {
            new (this) shared_ptr();
        }
        return this;
    }

    // 0x10035f3d0
    int ModelUnlit::GetColour(int arg1, int arg2) {
        int iVar1 = (arg1 & 127U) * arg2;
        int iVar2 = iVar1 >> 7;
        int iVar3 = 126;
        if (iVar2 < 126) {
            iVar3 = iVar2;
        }
        iVar2 = 2;
        if (255 < iVar1) {
            iVar2 = iVar3;
        }
        return iVar2 + (arg1 & 65408U);
    }

    // 0x10035f410
    int ModelUnlit::GetTexLight(int arg1) {
        int iVar2 = 126;
        if (arg1 < 126) {
            iVar2 = arg1;
        }
        int iVar1 = 2;
        if (2 < iVar2) {
            iVar1 = iVar2;
        }
        return iVar1;
    }

    // 0x100c92b50: ModelUnlit::~ModelUnlit() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100350ce0
    shared_ptr_if_not_array<graphics::Model>::type make_shared<graphics::Model>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        Model* local_28[2];

        auto arg1 = aligned_alloc(976, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::Model>::type result;
        } else {
            local_28[0] = placement_new<graphics::Model>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::Model>, int, graphics::Model*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100350d90
    shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenUnlit>::type
    make_shared<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>>(shared_ptr<graphics::Model>&& model) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        ModelRSevenUnlit* local_30[2];

        auto arg1 = aligned_alloc(136, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenUnlit>::type result;
        } else {
            local_30[0] = placement_new<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>>(
                (void*)((long)arg1 + 32), model);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>, int,
                              oldscape::dash3d::ModelRSevenUnlit*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1003510c0
    shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenUnlit>::type
    make_shared<oldscape::dash3d::ModelRSevenUnlit, oldscape::dash3d::ModelRSevenUnlit&>(
        oldscape::dash3d::ModelRSevenUnlit& modelRSevenUnlit) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        ModelRSevenUnlit* local_30[2];

        auto arg1 = aligned_alloc(136, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenUnlit>::type result;
        } else {
            local_30[0] = placement_new<oldscape::dash3d::ModelRSevenUnlit, oldscape::dash3d::ModelRSevenUnlit const&>(
                (void*)((long)arg1 + 32), modelRSevenUnlit);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>, int,
                              oldscape::dash3d::ModelRSevenUnlit*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100351380
    shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenLit>::type
    make_shared<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit const&>(
        const oldscape::dash3d::ModelRSevenLit& modelRSevenLit) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        ModelRSevenLit* local_30[2];

        auto arg1 = aligned_alloc(136, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenLit>::type result;
        } else {
            local_30[0] = placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit const&>(
                (void*)((long)arg1 + 32), modelRSevenLit);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenLit>, int,
                              oldscape::dash3d::ModelRSevenLit*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100351c70
    shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenLit>::type
    make_shared<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall,
                oldscape::dash3d::ModelRSevenUnlit&, int&, int&, int&, int&, int&>(
        oldscape::dash3d::ModelRSevenLit::LightCall&& lightCall, oldscape::dash3d::ModelRSevenUnlit& modelRSevenUnlit,
        int& arg3, int& arg4, int& arg5, int& arg6, int& arg7) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000010;
        int local_44;
        ModelRSevenLit* local_40[2];

        auto arg1 = aligned_alloc(136, 8);
        if (arg1 == nullptr) {
            new (lightCall) shared_ptr();
        } else {
            local_40[0] = placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall,
                                        oldscape::dash3d::ModelRSevenUnlit&, int&, int&, int&, int&, int&>(
                (void*)((long)arg1 + 32), (LightCall*)modelRSevenUnlit, (ModelRSevenUnlit*)arg3, arg4, arg5, arg6, arg7,
                in_stack_00000010);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenLit>, int,
                              oldscape::dash3d::ModelRSevenLit*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (lightCall) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return lightCall;
    }

    // 0x100351d40
    shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenLit>::type
    make_shared<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall,
                oldscape::dash3d::ModelRSevenUnlit&>(oldscape::dash3d::ModelRSevenLit::LightCall&& lightCall,
                                                     oldscape::dash3d::ModelRSevenUnlit& modelRSevenUnlit) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        ModelRSevenLit* local_38[2];

        auto arg1 = aligned_alloc(136, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenLit>::type result;
        } else {
            local_38[0] = placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall,
                                        oldscape::dash3d::ModelRSevenUnlit&>((void*)((long)arg1 + 32), lightCall,
                                                                             modelRSevenUnlit);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenLit>, int,
                              oldscape::dash3d::ModelRSevenLit*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::math {
    // 0x100351660
    Vector3T<int> operator- <int>(const Vector3T<int>& vector3) {
        uint8_t auVar1[16];

        LocationData local_18(-*(int*)vector3, -*(int*)(vector3 + 4), -*(int*)(vector3 + 8));
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

} // namespace jag::math
