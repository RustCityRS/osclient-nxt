// libs/game/runetek5/config/npctype/NPCTypeCustomisation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "NPCTypeCustomisation.h"

namespace jag::game {
    // 0x100f3c6e8
    int32_t NPCTypeCustomisation::m_bodyCustomisationCacheBuster = 1;

    // 0x100f3c6ec
    int32_t NPCTypeCustomisation::m_headCustomisationCacheBuster = 1;

    // 0x10000b2a0: NPCTypeCustomisation::GetUniqueID() const has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x1000b9950: NPCTypeCustomisation::GetModelList() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x100102fc0: NPCTypeCustomisation::GetModelRotationList() const has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x1001a3c10: NPCTypeCustomisation::GetModelScaleList() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1001d07d0: NPCTypeCustomisation::GetRecolourDest() const has the same machine code as graphics::SceneViewData::GetViewFrustum() const

    // 0x1001fb280: NPCTypeCustomisation::GetModelTranslationList() const has the same machine code as http::CRMData::GetActionInfo() const

    // 0x100324d40: NPCTypeCustomisation::GetModelRematerialList() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix2D()

    // 0x100324d50: NPCTypeCustomisation::GetRematerialDest() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix3D()

    // 0x100414cb0: NPCTypeCustomisation::GetModelRecolourList() const has the same machine code as math::Transitionable<graphics::IrradianceSHCoefConsts>::GetEndValue()

    // 0x100431760: NPCTypeCustomisation::GetPlayerIdkColour() const has the same machine code as Location::GetLocationType() const

    // 0x100504fa0
    NPCTypeCustomisation::NPCTypeCustomisation(eastl::vector<int>&& arg1, eastl::vector<float>&& arg2,
                                               eastl::vector<math::Vector3T<float>>&& vector3s1,
                                               eastl::vector<math::Vector3T<float>>&& vector3s2,
                                               eastl::vector<eastl::vector<int>>&& arg5,
                                               eastl::vector<eastl::vector<int>>&& arg6, Array<unsigned short>&& arg7,
                                               Array<unsigned short>&& arg8, bool arg9, Array<unsigned char>&& arg10)
        : field_0(false), field_1(true) {
        new (&field_48) eastl::vector<float>();
        new (&field_80) eastl::vector<math::Vector3T<float>>();
        new (&field_112) eastl::vector<math::Vector3T<float>>();
        new (&field_144) eastl::vector<eastl::vector<int>>();
        new (&field_176) eastl::vector<eastl::vector<int>>();
        new (m_pRecolourDest) Array<unsigned short>();
        new (&field_232) Array<unsigned short>();
        new (&field_256) Array<unsigned char>();
        UpdateUniqueID();
        field_16.swap(arg1);
        field_48.swap(arg2);
        field_80.swap(vector3s1);
        field_112.swap(vector3s2);
        field_144.swap(arg5);
        field_176.swap(arg6);
        m_pRecolourDest->swap(arg7);
        field_232.swap(arg8);
        field_256.swap(arg10);
        field_0 = arg9;
    }

    // 0x100505170
    void NPCTypeCustomisation::UpdateUniqueID() {
        long lVar1;

        if (field_1 == false) {
            lVar1 = GetNextHeadCustomisationCacheBuster();
        } else {
            lVar1 = GetNextBodyCustomisationCacheBuster();
        }
        field_8 = lVar1 << 32 | 4294967295;
    }

    // 0x1005051f0
    NPCTypeCustomisation::NPCTypeCustomisation(eastl::vector<int>&& arg1, Array<unsigned short>&& arg2,
                                               Array<unsigned short>&& arg3)
        : field_0(false), field_1(false) {
        new (&field_48) eastl::vector<float>();
        new (&field_80) eastl::vector<math::Vector3T<float>>();
        new (&field_112) eastl::vector<math::Vector3T<float>>();
        new (&field_144) eastl::vector<eastl::vector<int>>();
        new (&field_176) eastl::vector<eastl::vector<int>>();
        new (m_pRecolourDest) Array<unsigned short>();
        new (&field_232) Array<unsigned short>();
        new (&field_256) Array<unsigned char>();
        UpdateUniqueID();
        field_16.swap(arg1);
        m_pRecolourDest->swap(arg2);
        field_232.swap(arg3);
    }

    // 0x100505380
    NPCTypeCustomisation::NPCTypeCustomisation(NPCType& npcType, bool arg2) : field_0(false) {
        int* piVar1;
        Array<int>* this_00;
        uint64_t in_register_00000009;
        Vector3T<float>* in_R8;

        new (&field_48) eastl::vector<float>();
        new (&field_80) eastl::vector<math::Vector3T<float>>();
        new (&field_112) eastl::vector<math::Vector3T<float>>();
        new (&field_144) eastl::vector<eastl::vector<int>>();
        new (&field_176) eastl::vector<eastl::vector<int>>();
        new (m_pRecolourDest) Array<unsigned short>();
        new (&field_232) Array<unsigned short>();
        new (&field_256) Array<unsigned char>();
        field_1 = (uint8_t)npcType;
        UpdateUniqueID();
        if ((uint8_t)npcType == false) {
        } else {
        }
        int arg1 = this_00->end();
        unsigned long arg1_00 = (unsigned long)arg1;
        while (arg1 = arg1 - 1, 0 < (long)arg1_00) {
            arg1_00 = arg1_00 - 1;
            piVar1 = (int*)(*this_00)[arg1_00];
            SetModelSlot(arg1, *piVar1, 1.0, (Vector3T<float>*)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg2),
                         in_R8);
        }
    }

    // 0x100505590
    void NPCTypeCustomisation::SetModelSlot(int arg1, int arg2, float arg3, math::Vector3T<float> vector31,
                                            math::Vector3T<float> vector32) {
        uint8_t* this_00;
        int* piVar2;
        float* pfVar3;
        Vector4T<float>* pVVar4;
        unsigned int uVar5;
        unsigned long uVar6;
        Vector3T<float> local_58;
        Vector3T<float> local_48;
        float local_34;

        if (-1 < arg1) {
            uVar5 = 12;
            if (field_1 == false) {
                uVar5 = 5;
            }
            if ((unsigned int)arg1 < uVar5) {
                this_00 = &field_16;
                if (this_00->size() <= arg1) {
                    uVar6 = (unsigned long)(arg1 + 1);
                    local_34 = -NAN;
                    this_00->resize(uVar6, local_34);
                    if (field_1 != false) {
                        local_34 = 1.0;
                        field_48.resize(uVar6, local_34);
                        field_112.resize(uVar6, *PTR_ZERO_100ee66e8);
                        field_80.resize(uVar6, *PTR_ZERO_100ee66e8);
                    }
                }
                uVar6 = (unsigned long)arg1;
                piVar2 = (int*)(*this_00)[uVar6];
                *piVar2 = arg2;
                if (field_1 != false) {
                    pfVar3 = &field_48[uVar6];
                    *pfVar3 = arg3;
                    pVVar4 = &field_112[uVar6];
                    pVVar4->SetXYZ(local_58);
                    pVVar4 = &field_80[uVar6];
                    pVVar4->SetXYZ(local_48);
                }
                return;
            }
        }
        LogAssert("slot > -1 && (uint)slot < (m_isBodyCustomisation ? game::NPCType::MAX_BODY_SLOTS : "
                  "game::NPCType::MAX_HEAD_SLOTS)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/npctype/"
                  "NPCTypeCustomisation.cpp",
                  70, nullptr);
    }

    // 0x1005057c0
    void NPCTypeCustomisation::SetModelSlotRematerial(int arg1, int arg2, int arg3, int arg4) {
        int iVar1;
        vector<int>* pvVar2;
        int* piVar3;
        unsigned int uVar4;
        uint8_t* this_01;
        int iVar5;

        if (-1 < arg1) {
            uVar4 = 12;
            if (field_1 == false) {
                uVar4 = 5;
            }
            if ((unsigned int)arg1 < uVar4) {
                if (15 < (unsigned int)arg2) {
                    LogAssert("rematerialSlot > -1 && (uint)rematerialSlot < game::Model::MAX_RETEX",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/npctype/NPCTypeCustomisation.cpp",
                              101, nullptr);
                }
                this_01 = &field_176;
                iVar1 = this_01->size();
                if (iVar1 <= arg1) {
                    this_01->resize((long)(arg1 + 1));
                }
                iVar5 = arg2 * 2 + 1;
                iVar1 = ((vector<unsigned int>*)(*this_01)[(unsigned long)arg1])->size();
                if (iVar1 <= iVar5) {
                    pvVar2 = (vector<int>*)(*this_01)[(unsigned long)arg1];
                    pvVar2->resize((long)(arg2 * 2 + 2), -1);
                }
                pvVar2 = (vector<int>*)(*this_01)[(unsigned long)arg1];
                piVar3 = (int*)(*pvVar2)[(long)(arg2 * 2)];
                *piVar3 = arg3;
                pvVar2 = (vector<int>*)(*this_01)[(unsigned long)arg1];
                piVar3 = (int*)(*pvVar2)[(long)iVar5];
                *piVar3 = arg4;
                return;
            }
        }
        LogAssert("modelSlot > -1 && (uint)modelSlot < (m_isBodyCustomisation ? game::NPCType::MAX_BODY_SLOTS : "
                  "game::NPCType::MAX_HEAD_SLOTS)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/npctype/"
                  "NPCTypeCustomisation.cpp",
                  100, nullptr);
    }

    // 0x100505900
    void NPCTypeCustomisation::SetModelSlotRecolour(int arg1, int arg2, int arg3, int arg4) {
        int iVar1;
        vector<int>* pvVar2;
        int* piVar3;
        unsigned int uVar4;
        uint8_t* this_01;
        int iVar5;

        if (-1 < arg1) {
            uVar4 = 12;
            if (field_1 == false) {
                uVar4 = 5;
            }
            if ((unsigned int)arg1 < uVar4) {
                if (15 < (unsigned int)arg2) {
                    LogAssert("recolourSlot > -1 && (uint)recolourSlot < game::Model::MAX_RECOL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/npctype/NPCTypeCustomisation.cpp",
                              122, nullptr);
                }
                this_01 = &field_144;
                iVar1 = this_01->size();
                if (iVar1 <= arg1) {
                    this_01->resize((long)(arg1 + 1));
                }
                iVar5 = arg2 * 2 + 1;
                iVar1 = ((vector<unsigned int>*)(*this_01)[(unsigned long)arg1])->size();
                if (iVar1 <= iVar5) {
                    pvVar2 = (vector<int>*)(*this_01)[(unsigned long)arg1];
                    pvVar2->resize((long)(arg2 * 2 + 2), -1);
                }
                pvVar2 = (vector<int>*)(*this_01)[(unsigned long)arg1];
                piVar3 = (int*)(*pvVar2)[(long)(arg2 * 2)];
                *piVar3 = arg3;
                pvVar2 = (vector<int>*)(*this_01)[(unsigned long)arg1];
                piVar3 = (int*)(*pvVar2)[(long)iVar5];
                *piVar3 = arg4;
                return;
            }
        }
        LogAssert("modelSlot > -1 && (uint)modelSlot < (m_isBodyCustomisation ? game::NPCType::MAX_BODY_SLOTS : "
                  "game::NPCType::MAX_HEAD_SLOTS)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/npctype/"
                  "NPCTypeCustomisation.cpp",
                  121, nullptr);
    }

} // namespace jag::game
