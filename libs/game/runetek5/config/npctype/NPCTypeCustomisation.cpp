// libs/game/runetek5/config/npctype/NPCTypeCustomisation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "NPCTypeCustomisation.h"

namespace jag::game {
    // 0x100f3c6e8, 4 bytes, __data
    NPCTypeCustomisation::m_bodyCustomisationCacheBuster = 1;

    // 0x100f3c6ec, 4 bytes, __data
    NPCTypeCustomisation::m_headCustomisationCacheBuster = 1;

    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    NPCTypeCustomisation::GetUniqueID() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    NPCTypeCustomisation::GetModelList() const;

    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    NPCTypeCustomisation::GetModelRotationList() const;

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    NPCTypeCustomisation::GetModelScaleList() const;

    // 0x1001d07d0: the linker folded this into graphics::SceneViewData::GetViewFrustum() const, which has identical code
    NPCTypeCustomisation::GetRecolourDest() const;

    // 0x1001fb280: the linker folded this into http::CRMData::GetActionInfo() const, which has identical code
    NPCTypeCustomisation::GetModelTranslationList() const;

    // 0x100324d40: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix2D(), which has identical code
    NPCTypeCustomisation::GetModelRematerialList() const;

    // 0x100324d50: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix3D(), which has identical code
    NPCTypeCustomisation::GetRematerialDest() const;

    // 0x100414cb0: the linker folded this into math::Transitionable<graphics::IrradianceSHCoefConsts>::GetEndValue(), which has identical code
    NPCTypeCustomisation::GetModelRecolourList() const;

    // 0x100431760: the linker folded this into Location::GetLocationType() const, which has identical code
    NPCTypeCustomisation::GetPlayerIdkColour() const;

    // 0x100504fa0, 464 bytes, base-object constructor, placed by class name and debug map
    // NPCTypeCustomisation::NPCTypeCustomisation(eastl::vector<int, eastl::allocator>&&, eastl::vector<float, eastl::allocator>&&, eastl::vector<math::Vector3T<float>, eastl::allocator>&&, eastl::vector<math::Vector3T<float>, eastl::allocator>&&, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&&, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, bool, Array<unsigned char, eastl::allocator>&&)
    void NPCTypeCustomisation::NPCTypeCustomisation(vector* param_1, vector* param_2, vector* param_3, vector* param_4,
                                                    vector* param_5, vector* param_6, Array* param_7, Array* param_8,
                                                    bool param_9, Array* param_10) {
        field_0 = false;
        field_1 = true;
        new (&field_16) eastl::vector<int, eastl::allocator>();
        new (&field_48) eastl::vector<float, eastl::allocator>();
        new (&field_80) eastl::vector<math::Vector3T<float>, eastl::allocator>();
        new (&field_112) eastl::vector<math::Vector3T<float>, eastl::allocator>();
        new (&field_144) eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>();
        new (&field_176) eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>();
        new (m_pRecolourDest) Array<unsigned short, eastl::allocator>();
        new (&field_232) Array<unsigned short, eastl::allocator>();
        new (&field_256) Array<unsigned char, eastl::allocator>();
        UpdateUniqueID(this);
        (&field_16, param_1)->swap();
        (&field_48, param_2)->swap();
        (&field_80, param_3)->swap();
        (&field_112, param_4)->swap();
        (&field_144, param_5)->swap();
        (&field_176, param_6)->swap();
        (m_pRecolourDest, param_7)->swap();
        (&field_232, param_8)->swap();
        (&field_256, param_10)->swap();
        field_0 = param_9;
    }

    // 0x100505170, 64 bytes, placed by class name and debug map
    // NPCTypeCustomisation::UpdateUniqueID()
    void NPCTypeCustomisation::UpdateUniqueID() {
        long lVar1;

        if (field_1 == false) {
            lVar1 = GetNextHeadCustomisationCacheBuster();
        } else {
            lVar1 = GetNextBodyCustomisationCacheBuster();
        }
        field_8 = lVar1 << 32 | 4294967295;
    }

    // 0x1005051b0, 64 bytes, complete-object constructor, placed by class name and debug map
    // NPCTypeCustomisation::NPCTypeCustomisation(eastl::vector<int, eastl::allocator>&&, eastl::vector<float, eastl::allocator>&&, eastl::vector<math::Vector3T<float>, eastl::allocator>&&, eastl::vector<math::Vector3T<float>, eastl::allocator>&&, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&&, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, bool, Array<unsigned char, eastl::allocator>&&)
    void NPCTypeCustomisation::NPCTypeCustomisation(vector* param_1, vector* param_2, vector* param_3, vector* param_4,
                                                    vector* param_5, vector* param_6, Array* param_7, Array* param_8,
                                                    bool param_9, Array* param_10) {
        NPCTypeCustomisation(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9,
                             param_10);
    }

    // 0x1005051f0, 384 bytes, base-object constructor, placed by class name and debug map
    // NPCTypeCustomisation::NPCTypeCustomisation(eastl::vector<int, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&)
    void NPCTypeCustomisation::NPCTypeCustomisation(vector* param_1, Array* param_2, Array* param_3) {
        field_0 = false;
        field_1 = false;
        new (&field_16) eastl::vector<int, eastl::allocator>();
        new (&field_48) eastl::vector<float, eastl::allocator>();
        new (&field_80) eastl::vector<math::Vector3T<float>, eastl::allocator>();
        new (&field_112) eastl::vector<math::Vector3T<float>, eastl::allocator>();
        new (&field_144) eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>();
        new (&field_176) eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>();
        new (m_pRecolourDest) Array<unsigned short, eastl::allocator>();
        new (&field_232) Array<unsigned short, eastl::allocator>();
        new (&field_256) Array<unsigned char, eastl::allocator>();
        UpdateUniqueID(this);
        (&field_16, param_1)->swap();
        (m_pRecolourDest, param_2)->swap();
        (&field_232, param_3)->swap();
    }

    // 0x100505370, 16 bytes, complete-object constructor, placed by class name and debug map
    // NPCTypeCustomisation::NPCTypeCustomisation(eastl::vector<int, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&, Array<unsigned short, eastl::allocator>&&): jumps straight to the base-object constructor

    // 0x100505380, 512 bytes, base-object constructor, placed by class name and debug map
    // NPCTypeCustomisation::NPCTypeCustomisation(NPCType&, bool)
    void NPCTypeCustomisation::NPCTypeCustomisation(NPCType* param_1, bool param_2) {
        undefined4 uVar1;
        undefined8 uVar2;
        undefined4* puVar3;
        Array* pAVar4;
        undefined* puVar5;
        int iVar6;
        Array<int, eastl::allocator>* this_00;
        ulong uVar7;

        field_0 = false;
        new (&field_16) eastl::vector<int, eastl::allocator>();
        new (&field_48) eastl::vector<float, eastl::allocator>();
        new (&field_80) eastl::vector<math::Vector3T<float>, eastl::allocator>();
        new (&field_112) eastl::vector<math::Vector3T<float>, eastl::allocator>();
        new (&field_144) eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>();
        new (&field_176) eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>();
        new (m_pRecolourDest) Array<unsigned short, eastl::allocator>();
        new (&field_232) Array<unsigned short, eastl::allocator>();
        new (&field_256) Array<unsigned char, eastl::allocator>();
        field_1 = param_2;
        UpdateUniqueID(this);
        if (param_2) {
            this_00 = (Array<int, eastl::allocator>*)param_1->GetParticleEmitters();
        } else {
            this_00 = (Array<int, eastl::allocator>*)param_1->GetHeadList();
        }
        iVar6 = this_00->end();
        puVar5 = PTR_ZERO_100ee66e8;
        uVar7 = (ulong)iVar6;
        while (iVar6 = iVar6 + -1, 0 < (long)uVar7) {
            uVar7 = uVar7 - 1;
            puVar3 = (undefined4*)Array<int, eastl::allocator>::operator[](this_00, uVar7);
            uVar2 = *(undefined8*)puVar5;
            uVar1 = *(undefined4*)(puVar5 + 8);
            SetModelSlot(1065353216, uVar2, uVar1, (int)uVar2, uVar1, this, iVar6, *puVar3);
        }
        pAVar4 = (Array*)param_1->GetRecolourDest();
        Array<unsigned short, eastl::allocator>::operator=((Array<unsigned short, eastl::allocator>*)m_pRecolourDest,
                                                           pAVar4);
        pAVar4 = (Array*)param_1->GetWomanAppearance();
        Array<unsigned short, eastl::allocator>::operator=((Array<unsigned short, eastl::allocator>*)&field_232,
                                                           pAVar4);
    }

    // 0x100505590, 336 bytes, placed by class name and debug map
    // NPCTypeCustomisation::SetModelSlot(int, int, float, math::Vector3T<float>, math::Vector3T<float>)
    void NPCTypeCustomisation::SetModelSlot(undefined4 param_3, undefined8 param_2_00, undefined4 param_3_00,
                                            undefined8 param_4, undefined4 param_5, long param_6, uint param_2,
                                            undefined4 param_8) {
        vector<unsigned int, eastl::allocator>* this;
        undefined4* puVar2;
        Vector4T<float>* pVVar3;
        uint uVar4;
        ulong uVar5;
        undefined8 local_58;
        undefined4 local_50;
        undefined8 local_48;
        undefined4 local_40;
        float local_34;

        local_58 = param_2_00;
        local_50 = param_3_00;
        local_48 = param_4;
        local_40 = param_5;
        if (-1 < (int)param_2) {
            uVar4 = 12;
            if (*(char*)(param_6 + 1) == '\0') {
                uVar4 = 5;
            }
            if (param_2 < uVar4) {
                this = (vector<unsigned int, eastl::allocator>*)(param_6 + 16);
                if (eastl::vector<unsigned int, eastl::allocator>::size(this) <= (int)param_2) {
                    uVar5 = (ulong)(int)(param_2 + 1);
                    local_34 = -NAN;
                    resize(uVar5, (int*)&local_34);
                    if (*(char*)(param_6 + 1) != '\0') {
                        local_34 = 1.0;
                        ((param_6 + 48))->resize(uVar5, &local_34);
                        ((param_6 + 112))->resize(uVar5, PTR_ZERO_100ee66e8);
                        ((param_6 + 80))->resize(uVar5, PTR_ZERO_100ee66e8);
                    }
                }
                uVar5 = (ulong)(int)param_2;
                puVar2 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)this, uVar5);
                *puVar2 = param_8;
                if (*(char*)(param_6 + 1) != '\0') {
                    puVar2 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                        (vector<float, eastl::allocator>*)(param_6 + 48), uVar5);
                    *puVar2 = param_3;
                    pVVar3 = (Vector4T<float>*)eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                        (vector<math::Vector3T<float>, eastl::allocator>*)(param_6 + 112), uVar5);
                    math::Vector4T<float>::SetXYZ(pVVar3, (Vector3T*)&local_58);
                    pVVar3 = (Vector4T<float>*)eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                        (vector<math::Vector3T<float>, eastl::allocator>*)(param_6 + 80), uVar5);
                    math::Vector4T<float>::SetXYZ(pVVar3, (Vector3T*)&local_48);
                }
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("slot > -1 && (uint)slot < (m_isBodyCustomisation ? game::NPCType::MAX_BODY_SLOTS : "
                  "game::NPCType::MAX_HEAD_SLOTS)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/npctype/"
                  "NPCTypeCustomisation.cpp",
                  70, (char*)0);
    }

    // 0x100505700, 16 bytes, complete-object constructor, placed by class name and debug map
    // NPCTypeCustomisation::NPCTypeCustomisation(NPCType&, bool): jumps straight to the base-object constructor

    // 0x1005057c0, 320 bytes, placed by class name and debug map
    // NPCTypeCustomisation::SetModelSlotRematerial(int, int, int, int)
    void NPCTypeCustomisation::SetModelSlotRematerial(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        vector<unsigned int, eastl::allocator>* this_00;
        vector<int, eastl::allocator>* pvVar2;
        int* piVar3;
        uint uVar4;
        undefined1* this_01;
        int iVar6;
        int local_3c;

        if (-1 < param_1) {
            uVar4 = 12;
            if (field_1 == false) {
                uVar4 = 5;
            }
            if ((uint)param_1 < uVar4) {
                if (15 < (uint)param_2) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("rematerialSlot > -1 && (uint)rematerialSlot < game::Model::MAX_RETEX",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/npctype/NPCTypeCustomisation.cpp",
                              101, (char*)0);
                }
                this_01 = &field_176;
                iVar1 = this_01->size();
                if (iVar1 <= param_1) {
                    this_01->resize((long)(param_1 + 1));
                }
                iVar6 = param_2 * 2 + 1;
                this_00 = (vector<unsigned int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)this_01, (ulong)param_1);
                iVar1 = eastl::vector<unsigned int, eastl::allocator>::size(this_00);
                if (iVar1 <= iVar6) {
                    pvVar2 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                            (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)this_01, (ulong)param_1);
                    local_3c = -1;
                    eastl::vector<int, eastl::allocator>::resize(pvVar2, (long)(param_2 * 2 + 2), &local_3c);
                }
                pvVar2 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)this_01, (ulong)param_1);
                piVar3 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar2, (long)(param_2 * 2));
                *piVar3 = param_3;
                pvVar2 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)this_01, (ulong)param_1);
                piVar3 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar2, (long)iVar6);
                *piVar3 = param_4;
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("modelSlot > -1 && (uint)modelSlot < (m_isBodyCustomisation ? game::NPCType::MAX_BODY_SLOTS : "
                  "game::NPCType::MAX_HEAD_SLOTS)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/npctype/"
                  "NPCTypeCustomisation.cpp",
                  100, (char*)0);
    }

    // 0x100505900, 320 bytes, placed by class name and debug map
    // NPCTypeCustomisation::SetModelSlotRecolour(int, int, int, int)
    void NPCTypeCustomisation::SetModelSlotRecolour(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        vector<unsigned int, eastl::allocator>* this_00;
        vector<int, eastl::allocator>* pvVar2;
        int* piVar3;
        uint uVar4;
        undefined1* this_01;
        int iVar6;
        int local_3c;

        if (-1 < param_1) {
            uVar4 = 12;
            if (field_1 == false) {
                uVar4 = 5;
            }
            if ((uint)param_1 < uVar4) {
                if (15 < (uint)param_2) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("recolourSlot > -1 && (uint)recolourSlot < game::Model::MAX_RECOL",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/npctype/NPCTypeCustomisation.cpp",
                              122, (char*)0);
                }
                this_01 = &field_144;
                iVar1 = this_01->size();
                if (iVar1 <= param_1) {
                    this_01->resize((long)(param_1 + 1));
                }
                iVar6 = param_2 * 2 + 1;
                this_00 = (vector<unsigned int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)this_01, (ulong)param_1);
                iVar1 = eastl::vector<unsigned int, eastl::allocator>::size(this_00);
                if (iVar1 <= iVar6) {
                    pvVar2 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                            (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)this_01, (ulong)param_1);
                    local_3c = -1;
                    eastl::vector<int, eastl::allocator>::resize(pvVar2, (long)(param_2 * 2 + 2), &local_3c);
                }
                pvVar2 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)this_01, (ulong)param_1);
                piVar3 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar2, (long)(param_2 * 2));
                *piVar3 = param_3;
                pvVar2 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)this_01, (ulong)param_1);
                piVar3 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar2, (long)iVar6);
                *piVar3 = param_4;
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("modelSlot > -1 && (uint)modelSlot < (m_isBodyCustomisation ? game::NPCType::MAX_BODY_SLOTS : "
                  "game::NPCType::MAX_HEAD_SLOTS)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/npctype/"
                  "NPCTypeCustomisation.cpp",
                  121, (char*)0);
    }

} // namespace jag::game
