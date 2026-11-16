// libs/oldscape/jagex3/dash3d/MousePickingHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "MousePickingHelper.h"

namespace jag::oldscape::dash3d {
    // 0x100f37e14, 4 bytes, __data
    MousePickingHelper::m_useAABBMouseCheck = 1;

    // 0x103949e60, 4 bytes, __common; zero-initialised
    MousePickingHelper::m_mouseCheck;

    // 0x103949e64, 4 bytes, __common; zero-initialised
    MousePickingHelper::m_mouseX;

    // 0x103949e68, 4 bytes, __common; zero-initialised
    MousePickingHelper::m_mouseY;

    // 0x103949e6c, 4 bytes, __common; zero-initialised
    MousePickingHelper::m_mouseWorldLineCalculated;

    // 0x103949e70, 4 bytes, __common; zero-initialised
    MousePickingHelper::m_mouseLineWorldCentreX;

    // 0x103949e74, 4 bytes, __common; zero-initialised
    MousePickingHelper::m_mouseLineWorldCentreY;

    // 0x103949e78, 4 bytes, __common; zero-initialised
    MousePickingHelper::m_mouseLineWorldCentreZ;

    // 0x103949e7c, 4 bytes, __common; zero-initialised
    MousePickingHelper::m_mouseLineWorldRadiusX;

    // 0x103949e80, 4 bytes, __common; zero-initialised
    MousePickingHelper::m_mouseLineWorldRadiusY;

    // 0x103949e84, 4 bytes, __common; zero-initialised
    MousePickingHelper::m_mouseLineWorldRadiusZ;

    // 0x103949e88, 4 bytes, __common; zero-initialised
    MousePickingHelper::m_mouseLineWorldAbsRadiusX;

    // 0x103949e8c, 4 bytes, __common; zero-initialised
    MousePickingHelper::m_mouseLineWorldAbsRadiusY;

    // 0x103949e90, 4 bytes, __common; zero-initialised
    MousePickingHelper::m_mouseLineWorldAbsRadiusZ;

    // 0x103949e94, 16 bytes, __common; set at startup by ___cxx_global_var_init.110
    jag::math::Rect<unsigned int> MousePickingHelper::m_viewportRect = Rect<unsigned int>((Rect*)PTR_ZERO_100ee6690);

    // 0x103949ea4, 12 bytes, __common; zero-initialised
    MousePickingHelper::m_viewportFov;

    // 0x103949eb0, 64 bytes, __common; set at startup by ___cxx_global_var_init.111
    jag::math::Matrix44T<float> MousePickingHelper::m_viewProjectionMatrixRSeven = Matrix44T<float>();

    // 0x103949ef0, 8 bytes, __common; zero-initialised
    MousePickingHelper::m_pickedEntityCount;

    // 0x103949ef8, 8040 bytes, __common; zero-initialised
    MousePickingHelper::m_pickedEntityTypecode;

    // 0x100342e90, 80 bytes, placed by class name and debug map
    // MousePickingHelper::GetPackedTypeCodeLoc(int, int, int, bool, int, LocLayer)
    ulong MousePickingHelper::GetPackedTypeCodeLoc(uint param_1, uint param_2, uint param_3, int param_4, uint param_5,
                                                   uint param_6) {
        ulong uVar1;
        ulong uVar2;

        uVar2 = (ulong)(param_6 & 3) << 52 | (ulong)param_5 << 20 |
                (ulong)((param_3 & 3) * 16384 + ((param_2 & 127) << 7 | param_1 & 127) + 131072);
        uVar1 = uVar2 | 524288;
        if (param_4 == 0) {
            uVar1 = uVar2;
        }
        return uVar1;
    }

    // 0x100343190, 16 bytes, placed by class name and debug map
    // MousePickingHelper::GetEntityIdFromTypecode(long long)
    void MousePickingHelper::GetEntityIdFromTypecode(longlong param_1) {
        core::math::MathTool::UnsignedRightShift(param_1, '\x14');
    }

    // 0x10034def0, 64 bytes, placed by class name
    // MousePickingHelper::AdjustAABBRadiiForPicking(int&, int&, bool)
    void MousePickingHelper::AdjustAABBRadiiForPicking(int* param_1, int* param_2, bool param_3) {
        int iVar1;

        if (*param_1 < 32) {
            *param_1 = 32;
            iVar1 = *param_2;
        } else {
            iVar1 = *param_2;
        }
        if (iVar1 < 32) {
            *param_2 = 32;
        }
        if (param_3) {
            *param_1 = *param_1 + 8;
            *param_2 = *param_2 + 8;
            return;
        }
    }

    // 0x10035f530, 16 bytes, placed by class name
    // MousePickingHelper::GetPickedEntityCount()
    undefined4 MousePickingHelper::GetPickedEntityCount() {
        return m_pickedEntityCount;
    }

    // 0x10035f540, 16 bytes, placed by class name
    // MousePickingHelper::IsPlayerTypecode(long long)
    bool MousePickingHelper::IsPlayerTypecode(longlong param_1) {
        return GetEntityTypeFromTypecode(param_1) == 0;
    }

    // 0x10035f550, 32 bytes, placed by class name
    // MousePickingHelper::GetEntityTypeFromTypecode(long long)
    uint MousePickingHelper::GetEntityTypeFromTypecode(longlong param_1) {
        return core::math::MathTool::UnsignedRightShift(param_1, '\x10') & 7;
    }

    // 0x10035f570, 32 bytes, placed by class name
    // MousePickingHelper::IsNpcTypecode(long long)
    bool MousePickingHelper::IsNpcTypecode(longlong param_1) {
        return GetEntityTypeFromTypecode(param_1) == 1;
    }

    // 0x10035f590, 32 bytes, placed by class name
    // MousePickingHelper::IsLocTypecode(long long)
    bool MousePickingHelper::IsLocTypecode(longlong param_1) {
        return GetEntityTypeFromTypecode(param_1) == 2;
    }

    // 0x10035f5b0, 32 bytes, placed by class name
    // MousePickingHelper::IsObjTypecode(long long)
    bool MousePickingHelper::IsObjTypecode(longlong param_1) {
        return GetEntityTypeFromTypecode(param_1) == 3;
    }

    // 0x10035f5d0, 32 bytes, placed by class name
    // MousePickingHelper::IsActiveEntityTypecode(long long)
    ulong MousePickingHelper::IsActiveEntityTypecode(longlong param_1) {
        if (param_1 == 0) {
            return 0;
        }
        return GetEntityInactiveFromTypecode(param_1) ^ 1;
    }

    // 0x10035f5f0, 32 bytes, placed by class name
    // MousePickingHelper::GetEntityInactiveFromTypecode(long long)
    byte MousePickingHelper::GetEntityInactiveFromTypecode(longlong param_1) {
        return core::math::MathTool::UnsignedRightShift(param_1, '\x13') & 1;
    }

    // 0x10035f610, 32 bytes, placed by class name
    // MousePickingHelper::GetPickedEntityTypecode(int)
    undefined8 MousePickingHelper::GetPickedEntityTypecode(int param_1) {
        undefined8* puVar1;

        puVar1 = (undefined8*)eastl::
            vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true,
                                                                 eastl::allocator>>*)&m_pickedEntityTypecode,
                (long)param_1);
        return *puVar1;
    }

    // 0x10035f670, 32 bytes, placed by class name
    // MousePickingHelper::GetPickedEntityX(int)
    void MousePickingHelper::GetPickedEntityX(int param_1) {
        longlong* plVar1;

        plVar1 = (longlong*)eastl::
            vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true,
                                                                 eastl::allocator>>*)&m_pickedEntityTypecode,
                (long)param_1);
        GetEntityXFromTypecode(*plVar1);
    }

    // 0x10035f690, 16 bytes, placed by class name
    // MousePickingHelper::GetEntityXFromTypecode(long long)
    uint MousePickingHelper::GetEntityXFromTypecode(longlong param_1) {
        return core::math::MathTool::UnsignedRightShift(param_1, '\0') & 127;
    }

    // 0x10035f6a0, 32 bytes, placed by class name
    // MousePickingHelper::GetPickedEntityZ(int)
    void MousePickingHelper::GetPickedEntityZ(int param_1) {
        longlong* plVar1;

        plVar1 = (longlong*)eastl::
            vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true,
                                                                 eastl::allocator>>*)&m_pickedEntityTypecode,
                (long)param_1);
        GetEntityZFromTypecode(*plVar1);
    }

    // 0x10035f6c0, 32 bytes, placed by class name
    // MousePickingHelper::GetEntityZFromTypecode(long long)
    uint MousePickingHelper::GetEntityZFromTypecode(longlong param_1) {
        return core::math::MathTool::UnsignedRightShift(param_1, '\a') & 127;
    }

    // 0x10035f6e0, 32 bytes, placed by class name
    // MousePickingHelper::GetPickedEntityLevel(int)
    void MousePickingHelper::GetPickedEntityLevel(int param_1) {
        longlong* plVar1;

        plVar1 = (longlong*)eastl::
            vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true,
                                                                 eastl::allocator>>*)&m_pickedEntityTypecode,
                (long)param_1);
        GetEntityLevelFromTypecode(*plVar1);
    }

    // 0x10035f700, 32 bytes, placed by class name
    // MousePickingHelper::GetEntityLevelFromTypecode(long long)
    uint MousePickingHelper::GetEntityLevelFromTypecode(longlong param_1) {
        return core::math::MathTool::UnsignedRightShift(param_1, '\x0e') & 3;
    }

    // 0x10035f720, 32 bytes, placed by class name
    // MousePickingHelper::GetPickedEntityType(int)
    void MousePickingHelper::GetPickedEntityType(int param_1) {
        longlong* plVar1;

        plVar1 = (longlong*)eastl::
            vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true,
                                                                 eastl::allocator>>*)&m_pickedEntityTypecode,
                (long)param_1);
        GetEntityTypeFromTypecode(*plVar1);
    }

    // 0x10035f740, 32 bytes, placed by class name
    // MousePickingHelper::GetPickedEntityInactive(int)
    void MousePickingHelper::GetPickedEntityInactive(int param_1) {
        longlong* plVar1;

        plVar1 = (longlong*)eastl::
            vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true,
                                                                 eastl::allocator>>*)&m_pickedEntityTypecode,
                (long)param_1);
        GetEntityInactiveFromTypecode(*plVar1);
    }

    // 0x10035f760, 32 bytes, placed by class name
    // MousePickingHelper::GetPickedEntityId(int)
    void MousePickingHelper::GetPickedEntityId(int param_1) {
        longlong* plVar1;

        plVar1 = (longlong*)eastl::
            vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true,
                                                                 eastl::allocator>>*)&m_pickedEntityTypecode,
                (long)param_1);
        GetEntityIdFromTypecode(*plVar1);
    }

    // 0x10035f780, 32 bytes, placed by class name
    // MousePickingHelper::GetPickedLocLayer(int)
    undefined1 MousePickingHelper::GetPickedLocLayer(int param_1) {
        longlong* plVar2;

        plVar2 = (longlong*)eastl::
            vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true,
                                                                 eastl::allocator>>*)&m_pickedEntityTypecode,
                (long)param_1);
        return GetLocLayerFromTypecode(*plVar2);
    }

    // 0x10035f7a0, 32 bytes, placed by class name
    // MousePickingHelper::GetLocLayerFromTypecode(long long)
    uint MousePickingHelper::GetLocLayerFromTypecode(longlong param_1) {
        return core::math::MathTool::UnsignedRightShift(param_1, '4') & 3;
    }

    // 0x10035f7c0, 48 bytes, placed by class name
    // MousePickingHelper::OverwriteEntityCoordInTypecode(long long, int, int, int)
    ulong MousePickingHelper::OverwriteEntityCoordInTypecode(longlong param_1, int param_2, int param_3, int param_4) {
        return (long)param_3 | param_1 & 18446744073709486080U | (long)param_2 << 14 | (long)param_4 << 7;
    }

    // 0x10035f7f0, 64 bytes, placed by class name
    // MousePickingHelper::GetPackedTypeCode(int, int, int, int, bool, int)
    long MousePickingHelper::GetPackedTypeCode(int param_1, int param_2, int param_3, int param_4, bool param_5,
                                               int param_6) {
        long lVar1;
        ulong uVar2;
        undefined3 in_register_00000081;

        uVar2 = (ulong)((param_4 & 7U) << 16 | (param_3 & 3U) << 14 | (param_2 & 127U) << 7 | param_1 & 127U);
        lVar1 = (ulong)(uint)param_6 * 1048576 + uVar2 + 524288;
        if (CONCAT31(in_register_00000081, param_5) == 0) {
            lVar1 = (ulong)(uint)param_6 * 1048576 + uVar2;
        }
        return lVar1;
    }

    // 0x10035f830, 48 bytes, placed by class name
    // MousePickingHelper::SetMouseCoords(int, int, bool)
    void MousePickingHelper::SetMouseCoords(int param_1, int param_2, bool param_3) {
        m_mouseX = param_1;
        m_mouseY = param_2;
        m_mouseCheck = param_3;
        m_pickedEntityCount = 0;
        m_mouseWorldLineCalculated = 0;
    }

    // 0x10035f860, 48 bytes, placed by class name
    // MousePickingHelper::AddPickingEntity(long long)
    void MousePickingHelper::AddPickingEntity(longlong param_1) {
        longlong* plVar1;
        ulong uVar2;

        uVar2 = (ulong)m_pickedEntityCount;
        m_pickedEntityCount = m_pickedEntityCount + 1;
        plVar1 = (longlong*)eastl::
            vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<long long, eastl::fixed_vector_allocator<8ul, 1000ul, 8ul, 0ul, true,
                                                                 eastl::allocator>>*)&m_pickedEntityTypecode,
                uVar2);
        *plVar1 = param_1;
    }

    // 0x10035f890, 112 bytes, placed by class name
    // MousePickingHelper::SortPickingEntities(game::CoordGrid)
    void MousePickingHelper::SortPickingEntities(CoordGrid param_1) {
        undefined8 uVar1;
        long lVar2;
        long lVar3;
        undefined1 local_30[8];

        uVar1 = m_pickedEntityTypecode.HeapBeginPtr();
        lVar2 = m_pickedEntityTypecode.HeapBeginPtr();
        lVar3 = (long)m_pickedEntityCount;
        new (local_30) sidebars::SideBarData((int)((ulong)this >> 32), param_1.field_0);
        eastl::sort<long long*, (game::CoordGrid)->SortPickingEntities()::DistanceFromCamera>(uVar1, lVar2 + lVar3 * 8,
                                                                                              local_30);
    }

    // 0x10035f910, 16 bytes, placed by class name
    // MousePickingHelper::IsMousePickingEnabled()
    undefined1 MousePickingHelper::IsMousePickingEnabled() {
        return m_mouseCheck;
    }

    // 0x10035f920, 32 bytes, placed by class name
    // MousePickingHelper::HasCheckedScreenCoordLastRender(int, int)
    bool MousePickingHelper::HasCheckedScreenCoordLastRender(int param_1, int param_2) {
        return param_2 == m_mouseY && param_1 == m_mouseX;
    }

    // 0x10035f940, 16 bytes, placed by class name
    // MousePickingHelper::GetMouseScreenX()
    undefined4 MousePickingHelper::GetMouseScreenX() {
        return m_mouseX;
    }

    // 0x10035f950, 16 bytes, placed by class name
    // MousePickingHelper::GetMouseScreenY()
    undefined4 MousePickingHelper::GetMouseScreenY() {
        return m_mouseY;
    }

    // 0x10035f960, 416 bytes, placed by class name
    // MousePickingHelper::CheckCalculateMouseWorldVector(Pix3D const&)
    void MousePickingHelper::CheckCalculateMouseWorldVector(Pix3D* param_1) {
        undefined4 uVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        LocationData local_68;
        LocationData local_58;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        iVar4 = world::m_cameraCosX;
        if (m_mouseWorldLineCalculated == '\0') {
            local_34 = world::m_cameraSinX;
            local_58._12_4_ = world::m_cameraSinY;
            local_48 = world::m_cameraCosY;
            iVar2 = param_1->GetRenderDepth();
            iVar3 = local_34;
            iVar5 = m_mouseX - param_1->m_xOrigin;
            iVar8 = param_1->m_zoom;
            local_38 = (iVar5 * 50) / iVar8;
            iVar7 = m_mouseY - param_1->m_yOrigin;
            iVar6 = (iVar7 * 50) / iVar8;
            local_40 = (iVar5 * iVar2) / iVar8;
            iVar8 = (iVar7 * iVar2) / iVar8;
            local_44 = Pix3D::InvRotateYAroundX(iVar6, 50, iVar4, local_34);
            iVar5 = Pix3D::InvRotateZAroundX(iVar6, 50, iVar4, iVar3);
            local_3c = Pix3D::InvRotateYAroundX(iVar8, iVar2, iVar4, iVar3);
            iVar3 = Pix3D::InvRotateZAroundX(iVar8, iVar2, iVar4, iVar3);
            iVar8 = local_38;
            iVar4 = local_48;
            uVar1 = local_58._12_4_;
            local_34 = Pix3D::InvRotateXAroundY(local_38, iVar5, local_48, local_58._12_4_);
            local_38 = Pix3D::InvRotateZAroundY(iVar8, iVar5, iVar4, uVar1);
            iVar8 = local_40;
            iVar2 = Pix3D::InvRotateXAroundY(local_40, iVar3, iVar4, uVar1);
            iVar4 = Pix3D::InvRotateZAroundY(iVar8, iVar3, iVar4, uVar1);
            new (&local_68) rs2lib::worldmap::LocationData(local_34, local_44, local_38);
            new (&local_58) rs2lib::worldmap::LocationData(iVar2, local_3c, iVar4);
            SetMouseWorldVector(local_68._0_8_, local_68.field_8, local_58._0_8_, local_58.field_8);
        }
    }

    // 0x10035fb90, 320 bytes, placed by class name
    // MousePickingHelper::SetMouseWorldVector(jag::math::Vector3T<int>, jag::math::Vector3T<int>)
    void MousePickingHelper::SetMouseWorldVector(undefined8 param_1, type* param_2, undefined8 param_3,
                                                 undefined4 param_4) {
        int iVar1;
        vector* pvVar2;
        int* piVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined8 local_40;
        undefined4 local_38;
        undefined8 local_30;
        undefined4 local_28;

        uVar5 = (undefined4)((ulong)param_2 >> 32);
        uVar4 = SUB84(param_2, 0);
        local_40 = param_1;
        local_38 = uVar4;
        local_30 = param_3;
        local_28 = param_4;
        pvVar2 = local_30.SSOBeginPtr(param_2);
        iVar1 = *(int*)pvVar2;
        pvVar2 = local_40.SSOBeginPtr((type*)CONCAT44(uVar5, uVar4));
        m_mouseLineWorldCentreX = (iVar1 + *(int*)pvVar2) / 2;
        piVar3 = (int*)local_30.y();
        iVar1 = *piVar3;
        piVar3 = (int*)local_40.y();
        m_mouseLineWorldCentreY = (iVar1 + *piVar3) / 2;
        piVar3 = (int*)local_30.second();
        iVar1 = *piVar3;
        piVar3 = (int*)local_40.second();
        m_mouseLineWorldCentreZ = (iVar1 + *piVar3) / 2;
        pvVar2 = local_30.SSOBeginPtr((type*)CONCAT44(uVar5, uVar4));
        iVar1 = *(int*)pvVar2;
        pvVar2 = local_40.SSOBeginPtr((type*)CONCAT44(uVar5, uVar4));
        m_mouseLineWorldRadiusX = (iVar1 - *(int*)pvVar2) / 2;
        piVar3 = (int*)local_30.y();
        iVar1 = *piVar3;
        piVar3 = (int*)local_40.y();
        m_mouseLineWorldRadiusY = (iVar1 - *piVar3) / 2;
        piVar3 = (int*)local_30.second();
        iVar1 = *piVar3;
        piVar3 = (int*)local_40.second();
        m_mouseLineWorldRadiusZ = (iVar1 - *piVar3) / 2;
        m_mouseLineWorldAbsRadiusX = -m_mouseLineWorldRadiusX;
        if (-m_mouseLineWorldRadiusX < 0) {
            m_mouseLineWorldAbsRadiusX = m_mouseLineWorldRadiusX;
        }
        m_mouseLineWorldAbsRadiusY = -m_mouseLineWorldRadiusY;
        if (-m_mouseLineWorldRadiusY < 0) {
            m_mouseLineWorldAbsRadiusY = m_mouseLineWorldRadiusY;
        }
        m_mouseLineWorldAbsRadiusZ = -m_mouseLineWorldRadiusZ;
        if (-m_mouseLineWorldRadiusZ < 0) {
            m_mouseLineWorldAbsRadiusZ = m_mouseLineWorldRadiusZ;
        }
        m_mouseWorldLineCalculated = 1;
    }

    // 0x10035fcd0, 160 bytes, placed by class name
    // MousePickingHelper::GetMouseWorldVector(jag::math::Vector3T<int>&, jag::math::Vector3T<int>&)
    void MousePickingHelper::GetMouseWorldVector(Vector3T* param_1, Vector3T* param_2) {
        undefined1 auVar1[12];
        LocationData local_58;
        LocationData local_48;
        Vector3T local_38[16];

        new (&local_58)
            rs2lib::worldmap::LocationData(m_mouseLineWorldCentreX, m_mouseLineWorldCentreY, m_mouseLineWorldCentreZ);
        new (&local_48)
            rs2lib::worldmap::LocationData(m_mouseLineWorldRadiusX, m_mouseLineWorldRadiusY, m_mouseLineWorldRadiusZ);
        local_38._0_12_ = jag::math::operator-((Vector3T*)&local_58, (Vector3T*)&local_48);
        jag::math::Vector3T<int>::operator=((Vector3T<int>*)param_1, local_38);
        auVar1 = jag::math::operator+((Vector3T*)&local_58, (Vector3T*)&local_48);
        local_38._0_12_ = auVar1;
        jag::math::Vector3T<int>::operator=((Vector3T<int>*)param_2, local_38);
    }

    // 0x10035fda0, 16 bytes, placed by class name
    // MousePickingHelper::GetViewProjectionMatrix()
    undefined1* MousePickingHelper::GetViewProjectionMatrix() {
        return &m_viewProjectionMatrixRSeven;
    }

    // 0x10035fdb0, 32 bytes, placed by class name
    // MousePickingHelper::SetViewProjectionMatrix(jag::math::Matrix44T<float>)
    void MousePickingHelper::SetViewProjectionMatrix(Matrix44T param_1) {
        jag::math::Matrix44T<float>::operator=((Matrix44T<float>*)&m_viewProjectionMatrixRSeven, &param_1);
    }

    // 0x10035fdd0, 912 bytes, placed by class name
    // MousePickingHelper::CalculateMouseWorldVectorRSeven(jag::math::Vector2T<int>, jag::math::Vector3T<int>&, jag::math::Vector3T<int>&)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* MousePickingHelper::CalculateMouseWorldVectorRSeven(jag::math::Vector2T<int>,
   jag::math::Vector3T<int>&, jag::math::Vector3T<int>&) */

    void MousePickingHelper::CalculateMouseWorldVectorRSeven(undefined8 param_1, type* param_2,
                                                             Vector3T<int>* param_3) {
        float fVar1;
        vector* pvVar2;
        int* piVar3;
        float* pfVar4;
        type* ptVar5;
        Matrix44T* this;
        float fVar7;
        undefined4 uVar8;
        undefined1 local_d8[16];
        Matrix44T local_c8;
        undefined8 uStack_90;
        undefined8 local_88;
        LocationData local_78;
        Point<float> local_60[4];
        uint local_5c;
        undefined8 local_58;
        float fStack_50;
        undefined4 uStack_4c;
        undefined8 local_48;
        float fStack_40;
        undefined4 uStack_3c;
        float local_34;

        ptVar5 = param_2;
        local_88 = param_1;
        pvVar2 = local_88.SSOBeginPtr(param_2);
        local_34 = (float)*(int*)pvVar2;
        piVar3 = (int*)local_88.y();
        jag::math::Point<float>::Point(local_60, local_34, (float)*piVar3);
        pvVar2 = m_viewportRect.SSOBeginPtr(ptVar5);
        local_34 = (float)*(int*)pvVar2;
        piVar3 = (int*)m_viewportRect.y();
        new (&local_c8) jag::math::Point<float>(local_34, (float)*piVar3);
        jag::math::Vector2T<float>::operator-=((Vector2T<float>*)local_60, (Vector2T*)&local_c8);
        piVar3 = (int*)m_viewportRect.second();
        local_34 = (float)*piVar3;
        piVar3 = (int*)m_viewportRect.qw();
        new (&local_c8) jag::math::Point<float>(local_34, (float)*piVar3);
        jag::math::Vector2T<float>::operator/=((Vector2T<float>*)local_60, (Vector2T*)&local_c8);
        local_58 = jag::math::operator*(2.0, (Vector2T*)local_60);
        new (&local_48) jag::math::Vector2T<float>(1.0);
        local_c8._0_8_ = jag::math::operator-((Vector2T*)&local_58, (Vector2T*)&local_48);
        jag::math::Vector2T<float>::operator=((Vector2T<float>*)local_60, (Vector2T*)&local_c8);
        local_5c = local_5c ^ 2147483648;
        local_c8._48_8_ = _DAT_103949ee0;
        uStack_90 = uRam0000000103949ee8;
        local_c8._32_8_ = _DAT_103949ed0;
        local_c8._40_8_ = uRam0000000103949ed8;
        local_c8._16_8_ = _DAT_103949ec0;
        local_c8._24_8_ = uRam0000000103949ec8;
        local_c8._0_8_ = _m_viewProjectionMatrixRSeven;
        local_c8._8_8_ = uRam0000000103949eb8;
        this = &local_c8;
        ptVar5 = (type*)0;
        Invert(0);
        pvVar2 = local_60->SSOBeginPtr(ptVar5);
        local_34 = *(float*)pvVar2;
        pfVar4 = (float*)local_60->y();
        fVar7 = *pfVar4;
        uVar8 = 0;
        new (&local_48) ImVec4(local_34, fVar7, -1.0, 1.0);
        local_58 = jag::math::operator*((Vector4T*)&local_48, this);
        fStack_50 = fVar7;
        uStack_4c = uVar8;
        pfVar4 = (float*)local_58.qw();
        jag::math::Vector4T<float>::operator/=((Vector4T<float>*)&local_58, *pfVar4);
        pvVar2 = local_60->SSOBeginPtr(this);
        local_34 = *(float*)pvVar2;
        pfVar4 = (float*)local_60->y();
        fVar7 = *pfVar4;
        uVar8 = 0;
        new (&local_78) ImVec4(local_34, fVar7, 1.0, 1.0);
        local_48 = jag::math::operator*((Vector4T*)&local_78, this);
        fStack_40 = fVar7;
        uStack_3c = uVar8;
        pfVar4 = (float*)local_48.qw();
        jag::math::Vector4T<float>::operator/=((Vector4T<float>*)&local_48, *pfVar4);
        pfVar4 = (float*)local_58.y();
        if (0.0 < *pfVar4) {
            pfVar4 = (float*)local_48.y();
            if (*pfVar4 <= 0.0 && *pfVar4 != 0.0) {
                local_78._0_8_ = jag::math::operator-((Vector4T*)&local_48, (Vector4T*)&local_58);
                local_78.field_8 = (int)fVar7;
                local_78._12_4_ = uVar8;
                pfVar4 = (float*)local_58.y();
                local_34 = -1.0 - *pfVar4;
                pfVar4 = (float*)local_78.y();
                jag::math::Vector4T<float>::operator*=((Vector4T<float>*)&local_78, local_34 / *pfVar4);
                local_d8._0_8_ = jag::math::operator+((Vector4T*)&local_58, (Vector4T*)&local_78);
                this = (Matrix44T*)local_d8;
                local_d8._8_4_ = fVar7;
                local_d8._12_4_ = uVar8;
                jag::math::Rect<float>::operator=((Rect<float>*)&local_48, (Rect*)this);
            }
        }
        pvVar2 = local_58.SSOBeginPtr(this);
        fVar7 = *(float*)pvVar2;
        pfVar4 = (float*)local_58.y();
        fVar1 = *pfVar4;
        pfVar4 = (float*)local_58.second();
        new (&local_78) rs2lib::worldmap::LocationData((int)fVar7, (int)fVar1, (int)*pfVar4);
        jag::math::Vector3T<int>::operator=((Vector3T<int>*)param_2, (Vector3T*)&local_78);
        pvVar2 = local_48.SSOBeginPtr((type*)&local_78);
        fVar7 = *(float*)pvVar2;
        pfVar4 = (float*)local_48.y();
        fVar1 = *pfVar4;
        pfVar4 = (float*)local_48.second();
        new (&local_78) rs2lib::worldmap::LocationData((int)fVar7, (int)fVar1, (int)*pfVar4);
        jag::math::Vector3T<int>::operator=(param_3, (Vector3T*)&local_78);
    }

    // 0x1003601a0, 272 bytes, placed by class name
    // MousePickingHelper::GetGroundIntersection(world&, jag::math::Vector3T<int>, jag::math::Vector3T<int>, jag::math::Vector3T<int>&, jag::math::Vector3T<int>&)
    void MousePickingHelper::GetGroundIntersection(undefined8 param_1, undefined8 param_2, undefined4 param_3,
                                                   undefined8 param_4, undefined4 param_5, undefined8 param_6,
                                                   undefined8 param_7) {
        vector* pvVar1;
        int* piVar2;
        undefined8 local_78;
        undefined4 local_70;
        undefined8 local_68;
        undefined4 local_60;
        ColourHSL local_58;
        ColourHSL local_48;
        float local_38;
        float local_34;

        local_78 = param_2;
        local_70 = param_3;
        local_68 = param_4;
        local_60 = param_5;
        jag::math::operator-((Vector3T*)&local_68, (Vector3T*)&local_78);
        pvVar1 = local_78.SSOBeginPtr((type*)(Vector3T*)&local_78);
        local_38 = (float)*(int*)pvVar1;
        piVar2 = (int*)local_78.y();
        local_34 = (float)*piVar2;
        piVar2 = (int*)local_78.second();
        new (&local_58) jag::math::ColourHSL(local_38, local_34, (float)*piVar2);
        pvVar1 = local_68.SSOBeginPtr((type*)(Vector3T*)&local_78);
        local_38 = (float)*(int*)pvVar1;
        piVar2 = (int*)local_68.y();
        local_34 = (float)*piVar2;
        piVar2 = (int*)local_68.second();
        new (&local_48) jag::math::ColourHSL(local_38, local_34, (float)*piVar2);
        jag::math::operator-((Vector3T*)&local_48, (Vector3T*)&local_58);
        RecurseGroundIntersection(local_58._0_8_, local_58.field_8, local_48._0_8_, local_48.field_8, param_1, param_6,
                                  param_7, 4);
    }

    // 0x1003602b0, 832 bytes, placed by neighbouring functions
    // RecurseGroundIntersection(world&, jag::math::Vector3T<float>, jag::math::Vector3T<float>, jag::math::Vector3T<int>&, jag::math::Vector3T<int>&, int)
    ulong RecurseGroundIntersection(undefined8 param_1_00, float param_2, undefined8 param_3, undefined4 param_4,
                                    world* param_1, Vector3T<int>* param_6, Vector3T<int>* param_7, uint param_8) {
        Vector3T<int>* pVVar1;
        float fVar2;
        float fVar3;
        int iVar4;
        int iVar7;
        vector* pvVar8;
        float* pfVar9;
        int* piVar10;
        uint* puVar11;
        ulong uVar12;
        undefined8 uVar13;
        type* ptVar15;
        float fVar16;
        LocationData local_e0;
        LocationData local_d0;
        undefined8 local_c0;
        undefined4 local_b8;
        undefined8 local_b0;
        float local_a8;
        undefined8 local_80;
        float local_70;
        int local_6c;
        undefined8 local_68;
        float local_58;
        undefined4 uStack_54;
        undefined4 uStack_50;
        undefined4 uStack_4c;
        undefined8 local_48;
        float local_40;
        float local_38;
        bool local_31;

        local_c0 = param_3;
        local_b8 = param_4;
        local_68 = param_1_00;
        local_b0 = jag::math::operator-((Vector3T*)&local_c0, (Vector3T*)&local_68);
        local_38 = (float)(int)param_8 * 0.001;
        local_80 = local_68;
        fVar16 = local_38 + 1.0;
        local_58 = 0.0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        local_31 = 0.0 < fVar16;
        uVar13 = local_68;
        if (0.0 < fVar16) {
            local_6c = param_8 - 1;
            local_a8 = param_2;
            local_70 = fVar16;
            do {
                local_48 = jag::math::operator*((Vector3T*)&local_b0, local_58);
                local_40 = fVar16;
                jag::math::Vector3T<float>::operator+=((Vector3T<float>*)&local_48, (Vector3T*)&local_68);
                pvVar8 = local_48.SSOBeginPtr((type*)(Vector3T*)&local_68);
                fVar2 = *(float*)pvVar8;
                pfVar9 = (float*)local_48.y();
                fVar3 = *pfVar9;
                pfVar9 = (float*)local_48.second();
                ptVar15 = (type*)(ulong)(uint)(int)fVar2;
                new (&local_e0) rs2lib::worldmap::LocationData((int)fVar2, (int)fVar3, (int)*pfVar9);
                pvVar8 = local_e0.SSOBeginPtr(ptVar15);
                iVar7 = world::m_groundPickingLevel;
                iVar4 = *(int*)pvVar8;
                piVar10 = (int*)local_e0.second();
                ptVar15 = (type*)(ulong)(uint)(iVar4 >> 7);
                new (&local_d0) rs2lib::worldmap::LocationData(iVar4 >> 7, iVar7, *piVar10 >> 7);
                pvVar8 = local_d0.SSOBeginPtr(ptVar15);
                uVar12 = (ulong) * (uint*)pvVar8;
                if (world::m_minX <= (int)*(uint*)pvVar8) {
                    puVar11 = (uint*)local_d0.second();
                    uVar12 = (ulong)*puVar11;
                    if (world::m_minZ <= (int)*puVar11) {
                        pvVar8 = local_d0.SSOBeginPtr(ptVar15);
                        uVar12 = (ulong) * (uint*)pvVar8;
                        if ((int)*(uint*)pvVar8 < world::m_maxX) {
                            puVar11 = (uint*)local_d0.second();
                            uVar12 = (ulong)*puVar11;
                            if ((int)*puVar11 < world::m_maxZ) {
                                piVar10 = (int*)local_d0.y();
                                if (*piVar10 < 3) {
                                    piVar10 = (int*)local_d0.y();
                                    iVar4 = *piVar10;
                                    pvVar8 = local_48.SSOBeginPtr(ptVar15);
                                    fVar2 = *(float*)pvVar8;
                                    pfVar9 = (float*)local_48.second();
                                    ptVar15 = (type*)(ulong)(uint)((int)fVar2 >> 7);
                                    if (ClientBuild::IsLinkBelow(iVar4 + 1, (int)fVar2 >> 7, (int)*pfVar9 >> 7) !=
                                        '\0') {
                                        local_d0.field_4 = local_d0.field_4 + 1;
                                    }
                                }
                                piVar10 = (int*)local_d0.y();
                                iVar4 = *piVar10;
                                pvVar8 = local_e0.SSOBeginPtr(ptVar15);
                                iVar7 = *(int*)pvVar8;
                                piVar10 = (int*)local_e0.second();
                                iVar7 = param_1->GetGroundHeightAtFinePos(iVar4, iVar7, *piVar10);
                                piVar10 = (int*)local_e0.y();
                                iVar4 = *piVar10;
                                if (iVar4 < -iVar7) {
                                    jag::math::Vector3T<int>::operator=(param_6, (Vector3T*)&local_d0);
                                    uVar12 = jag::math::Vector3T<int>::operator=(param_7, (Vector3T*)&local_e0);
                                    pVVar1 = param_7 + 4;
                                    *(int*)pVVar1 = -*(int*)pVVar1;
                                    if ((int)(ulong)param_8 != 1) {
                                        local_58 = (float)(~-(uint)(0.0 < local_58) & (uint)local_58 |
                                                           (uint)(local_58 - local_38) & -(uint)(0.0 < local_58));
                                        fVar16 = param_2;
                                        uVar12 = RecurseGroundIntersection((int)local_80, param_2, local_48, local_40,
                                                                           param_1, param_6, param_7, local_6c);
                                    }
                                } else {
                                    uVar12 = local_80.SetXYZ((Vector3T*)&local_48);
                                }
                                if (iVar4 < -iVar7) {
                                    uVar13 = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
                uVar13 = CONCAT71((int7)(uVar12 >> 8), 1);
                local_58 = local_58 + local_38;
                local_31 = local_58 < local_70;
            } while (local_31);
        }
        return CONCAT71((int7)((ulong)uVar13 >> 8), local_31) & 18446744073709551361;
    }

    // 0x1003605f0, 336 bytes, placed by class name
    // MousePickingHelper::DoesMouseIntersectModelPoints(ModelLit const&, int*, int*, int)
    bool MousePickingHelper::DoesMouseIntersectModelPoints(ModelLit* param_1, int* param_2, int* param_3, int param_4) {
        int iVar1;
        int iVar2;
        byte bVar4;
        int* piVar5;
        ulong uVar6;

        if ((**(code**)(param_1->field_0 + 56))() != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!model.IsForRSeven()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "MousePickingHelper.cpp",
                      423, "Point intersection test only supports SD models.");
        }
        if (0 < *(int*)((long)&param_1[5].field_8 + 3)) {
            uVar6 = 0;
            do {
                piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)((long)&param_1[13].field_0 + 3), uVar6);
                if (*piVar5 != -2) {
                    piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)((long)&param_1[6].field_0 + 2), uVar6);
                    iVar1 = *piVar5;
                    piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)((long)&param_1[7].field_8 + 1), uVar6);
                    iVar2 = *piVar5;
                    piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&param_1[8].field_16, uVar6);
                    bVar4 = 4;
                    if ((param_2[iVar1] != -1) && (param_2[iVar2] != -1)) {
                        if (param_2[*piVar5] != -1) {
                            bVar4 =
                                IsMouseRoughlyInsideTriangle(param_3[iVar1], param_3[iVar2], param_3[*piVar5],
                                                             param_2[iVar1], param_2[iVar2], param_2[*piVar5], param_4);
                        }
                    }
                    if ((bVar4 & 3) != 0)
                        goto LAB_100360725;
                }
                uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)*(int*)((long)&param_1[5].field_8 + 3));
        }
        bVar4 = 2;
    LAB_100360725:
        return bVar4 != 2;
    }

    // 0x100360740, 112 bytes, placed by class name
    // MousePickingHelper::IsMouseRoughlyInsideTriangle(int, int, int, int, int, int, int)
    undefined4 MousePickingHelper::IsMouseRoughlyInsideTriangle(int param_1, int param_2, int param_3, int param_4,
                                                                int param_5, int param_6, int param_7) {
        int iVar1;

        iVar1 = m_mouseY + param_7;
        if ((((param_1 <= iVar1) || (param_2 <= iVar1)) || (param_3 <= iVar1)) &&
            (((iVar1 = m_mouseY - param_7, iVar1 <= param_1 || (iVar1 <= param_2)) || (iVar1 <= param_3)))) {
            iVar1 = m_mouseX + param_7;
            if (((param_4 <= iVar1) || (param_5 <= iVar1)) || (param_6 <= iVar1)) {
                iVar1 = m_mouseX - param_7;
                return CONCAT31((int3)((uint)iVar1 >> 8), iVar1 <= param_6 || (iVar1 <= param_5 || iVar1 <= param_4));
            }
        }
        return 0;
    }

    // 0x1003607b0, 112 bytes, placed by class name
    // MousePickingHelper::IsAABBWithinMaxViewDistanceFromCamera(ModelLit::AABB const&, int, int)
    void MousePickingHelper::IsAABBWithinMaxViewDistanceFromCamera(AABB* param_1, int param_2, int param_3) {
        int iVar1;
        vector* pvVar2;
        int* piVar3;
        Vector3T<int>* this;
        Vector3T<int> local_50[16];
        Vector3T<int> local_40[16];

        jag::math::Vector3T<int>::Vector3T(local_50);
        this = local_40;
        jag::math::Vector3T<int>::Vector3T(this);
        GetMouseWorldVector((Vector3T*)local_50, (Vector3T*)this);
        pvVar2 = local_50->SSOBeginPtr(this);
        iVar1 = *(int*)pvVar2;
        piVar3 = (int*)local_50->second();
        IsAABBWithinMaxViewDistance(param_1, param_2 - iVar1, param_3 - *piVar3);
    }

    // 0x100360820, 64 bytes, placed by class name
    // MousePickingHelper::IsAABBWithinMaxViewDistance(ModelLit::AABB const&, int, int)
    bool MousePickingHelper::IsAABBWithinMaxViewDistance(AABB* param_1, int param_2, int param_3) {
        bool bVar1;

        bVar1 = false;
        if (((-5185 < param_1->field_12 + param_2) && (param_2 - param_1->field_12 < 5185)) &&
            (-5185 < param_1->field_20 + param_3)) {
            bVar1 = param_3 - param_1->field_20 < 5185;
        }
        return bVar1;
    }

    // 0x100360860, 224 bytes, placed by class name
    // MousePickingHelper::SetupPickingHelper(jag::graphics::PickingHelper&)
    void MousePickingHelper::SetupPickingHelper(PickingHelper* param_1) {
        int iVar1;
        int iVar2;
        vector* pvVar3;
        int* piVar4;
        ImVec4 local_48[16];
        Point<float> local_38[12];
        float local_2c;
        float local_28;
        float local_24;

        pvVar3 = m_viewportRect.SSOBeginPtr(param_1);
        local_24 = (float)*(int*)pvVar3;
        piVar4 = (int*)m_viewportRect.y();
        local_2c = (float)*piVar4;
        piVar4 = (int*)m_viewportRect.second();
        local_28 = (float)*piVar4;
        piVar4 = (int*)m_viewportRect.qw();
        ImVec4::ImVec4(local_48, local_24, local_2c, local_28, (float)*piVar4);
        iVar1 = GetMouseScreenX();
        local_24 = (float)iVar1;
        piVar4 = (int*)m_viewportRect.qw();
        iVar1 = *piVar4;
        iVar2 = GetMouseScreenY();
        jag::math::Point<float>::Point(local_38, local_24, (float)(iVar1 - iVar2));
        ResetPointTest((Matrix44T*)&m_viewProjectionMatrixRSeven, local_48, local_38, false, 5.0);
    }

    // 0x100360940, 48 bytes, placed by class name
    // MousePickingHelper::SetViewportDimensions(jag::math::Rect<int>, int)
    void MousePickingHelper::SetViewportDimensions(Rect* param_1, undefined4 param_2) {
        jag::math::Rect<unsigned int>::operator=((Rect<unsigned int>*)&m_viewportRect, param_1);
        m_viewportFov = param_2;
    }

    // 0x100360970, 16 bytes, placed by class name
    // MousePickingHelper::GetViewportFov()
    undefined4 MousePickingHelper::GetViewportFov() {
        return m_viewportFov;
    }

    // 0x100360980, 32 bytes, placed by class name
    // MousePickingHelper::GetViewportRect()
    MousePickingHelper* MousePickingHelper::GetViewportRect() {
        new (this) jag::math::Rect<unsigned int>((Rect*)&m_viewportRect);
        return this;
    }

    // 0x1003609a0, 32 bytes, placed by class name
    // MousePickingHelper::Sign(int, int, int, int, int, int)
    int MousePickingHelper::Sign(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        return (param_6 - param_2) * (param_3 - param_5) + (param_4 - param_6) * (param_1 - param_5);
    }

    // 0x1003609c0, 176 bytes, placed by class name
    // MousePickingHelper::IsMouseInsideTriangle(int, int, int, int, int, int)
    undefined4 MousePickingHelper::IsMouseInsideTriangle(int param_1, int param_2, int param_3, int param_4,
                                                         int param_5, int param_6) {
        int iVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;

        iVar1 = m_mouseY;
        iVar5 = m_mouseX;
        uVar2 = Sign(m_mouseX, m_mouseY, param_4, param_1, param_5, param_2);
        uVar3 = Sign(iVar5, iVar1, param_5, param_2, param_6, param_3);
        uVar4 = Sign(iVar5, iVar1, param_6, param_3, param_4, param_1);
        iVar5 = -((int)(uVar4 ^ uVar3 | uVar2 ^ uVar3) >> 31);
        return CONCAT31((int3)((uint)iVar5 >> 8), iVar5 == 0);
    }

    // 0x10037fb80, 176 bytes, placed by class name
    // MousePickingHelper::SortPickingEntities(game::CoordGrid)::DistanceFromCamera::operator()(long long const&, long long const&)
    /* MousePickingHelper::SortPickingEntities(game::CoordGrid)::DistanceFromCamera::TEMPNAMEPLACEHOLDERVALUE(long
   long const&, long long const&) */

    bool MousePickingHelper::SortPickingEntities(game::CoordGrid)::DistanceFromCamera::operator()(longlong* param_1,
                                                                                                  longlong* param_2) {
        longlong lVar1;
        int iVar2;
        int iVar3;
        undefined1 local_50[16];
        undefined8 local_40;
        undefined8 local_38;

        lVar1 = *param_1;
        iVar2 = GetEntityXFromTypecode(lVar1);
        iVar3 = GetEntityZFromTypecode(lVar1);
        new (local_50) sidebars::SideBarData(iVar2, iVar3);
        lVar1 = *param_2;
        iVar2 = GetEntityXFromTypecode(lVar1);
        iVar3 = GetEntityZFromTypecode(lVar1);
        new ((local_50 + 8)) sidebars::SideBarData(iVar2, iVar3);
        local_40 = jag::math::operator-((Vector2T*)local_50, (Vector2T*)this);
        iVar2 = local_40.LengthSq();
        local_38 = jag::math::operator-((Vector2T*)(local_50 + 8), (Vector2T*)this);
        iVar3 = local_38.LengthSq();
        return iVar3 < iVar2;
    }

    // 0x10038f900, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.110
    void ___cxx_global_var_init_110() {
        new (&MousePickingHelper::m_viewportRect) jag::math::Rect<unsigned int>(PTR_ZERO_100ee6690);
    }

    // 0x10038f920, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.111
    void ___cxx_global_var_init_111() {
        new (&MousePickingHelper::m_viewProjectionMatrixRSeven) jag::math::Matrix44T<float>();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100342ee0, 224 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientLocAnim>::type make_shared<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(int&, int&&, int&, int&, int&, int&, int&, bool&, decltype(nullptr)&&, int&)
    jag*
    jag::make_shared<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
        int* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, bool* param_8,
        _func_decltype_nullptr** param_9, int* param_10) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClientLocAnim* local_40[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&,
                              decltype(nullptr), int&>((void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4,
                                                       param_5, param_6, param_7, param_8, param_9, param_10);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100342fc0, 224 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientLocAnim>::type make_shared<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(int&, int&, int&, int&, int&, int&, int&, bool&, decltype(nullptr)&&, int&)
    jag*
    jag::make_shared<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
        int* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, bool* param_8,
        _func_decltype_nullptr** param_9, int* param_10) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClientLocAnim* local_40[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int&, bool&,
                              decltype(nullptr), int&>((void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4,
                                                       param_5, param_6, param_7, param_8, param_9, param_10);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1003430b0, 224 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::ClientLocAnim>::type make_shared<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(int&, int&&, int&&, int&, int&, int&, int&, bool&, decltype(nullptr)&&, int&)
    jag*
    jag::make_shared<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
        int* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, bool* param_8,
        _func_decltype_nullptr** param_9, int* param_10) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ClientLocAnim* local_40[2];

        pvVar1 = (void*)aligned_alloc(96, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr),
                              int&>((void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6,
                                    param_7, param_8, param_9, param_10);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
