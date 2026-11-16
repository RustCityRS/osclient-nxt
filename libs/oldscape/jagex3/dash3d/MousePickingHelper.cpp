// libs/oldscape/jagex3/dash3d/MousePickingHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "MousePickingHelper.h"

namespace jag::oldscape::dash3d {
    // 0x100f37e14
    int32_t MousePickingHelper::m_useAABBMouseCheck = 1;

    // 0x103949e60
    int32_t MousePickingHelper::m_mouseCheck;

    // 0x103949e64
    int32_t MousePickingHelper::m_mouseX;

    // 0x103949e68
    int32_t MousePickingHelper::m_mouseY;

    // 0x103949e6c
    int32_t MousePickingHelper::m_mouseWorldLineCalculated;

    // 0x103949e70
    int32_t MousePickingHelper::m_mouseLineWorldCentreX;

    // 0x103949e74
    int32_t MousePickingHelper::m_mouseLineWorldCentreY;

    // 0x103949e78
    int32_t MousePickingHelper::m_mouseLineWorldCentreZ;

    // 0x103949e7c
    int32_t MousePickingHelper::m_mouseLineWorldRadiusX;

    // 0x103949e80
    int32_t MousePickingHelper::m_mouseLineWorldRadiusY;

    // 0x103949e84
    int32_t MousePickingHelper::m_mouseLineWorldRadiusZ;

    // 0x103949e88
    int32_t MousePickingHelper::m_mouseLineWorldAbsRadiusX;

    // 0x103949e8c
    int32_t MousePickingHelper::m_mouseLineWorldAbsRadiusY;

    // 0x103949e90
    int32_t MousePickingHelper::m_mouseLineWorldAbsRadiusZ;

    // 0x103949e94, set at startup by ___cxx_global_var_init.110
    jag::math::Rect<unsigned int> MousePickingHelper::m_viewportRect =
        Rect<unsigned int>((Rect<int>*)PTR_ZERO_100ee6690);

    // 0x103949ea4
    uint8_t MousePickingHelper::m_viewportFov[12];

    // 0x103949eb0, set at startup by ___cxx_global_var_init.111
    jag::math::Matrix44T<float> MousePickingHelper::m_viewProjectionMatrixRSeven = Matrix44T<float>();

    // 0x103949ef0
    int64_t MousePickingHelper::m_pickedEntityCount;

    // 0x103949ef8, set at startup by ___cxx_global_var_init.112
    eastl::fixed_vector<long long, 1000ul> MousePickingHelper::m_pickedEntityTypecode =
        fixed_vector<long long, 1000ul>(1000);

    // 0x100342e90
    unsigned long MousePickingHelper::GetPackedTypeCodeLoc(int arg1, int arg2, int arg3, bool arg4, int arg5,
                                                           LocLayer locLayer) {
        uint32_t in_register_00000009;

        unsigned long uVar2 = (unsigned long)(locLayer & 3) << 52 | (unsigned long)(unsigned int)arg5 << 20 |
                              (unsigned long)((arg3 & 3U) * 16384 + ((arg2 & 127U) << 7 | arg1 & 127U) + 131072);
        unsigned long uVar1 = uVar2 | 524288;
        if ((((uint32_t)in_register_00000009 << 8) | (uint8_t)arg4) == 0) {
            uVar1 = uVar2;
        }
        return uVar1;
    }

    // 0x100343190
    void MousePickingHelper::GetEntityIdFromTypecode(long long arg1) {
        core::math::MathTool::UnsignedRightShift(arg1, '\x14');
    }

    // 0x10034def0
    void MousePickingHelper::AdjustAABBRadiiForPicking(int& arg1, int& arg2, bool arg3) {
        int iVar1;

        if (arg1 < 32) {
            arg1 = 32;
            iVar1 = arg2;
        } else {
            iVar1 = arg2;
        }
        if (iVar1 < 32) {
            arg2 = 32;
        }
        if (arg3) {
            arg1 = arg1 + 8;
            arg2 = arg2 + 8;
            return;
        }
    }

    // 0x10035f530
    void MousePickingHelper::GetPickedEntityCount() {
        return m_pickedEntityCount;
    }

    // 0x10035f540
    bool MousePickingHelper::IsPlayerTypecode(long long arg1) {
        return GetEntityTypeFromTypecode((long long)this) == 0;
    }

    // 0x10035f550
    unsigned int MousePickingHelper::GetEntityTypeFromTypecode(long long arg1) {
        return core::math::MathTool::UnsignedRightShift(arg1, '\x10') & 7;
    }

    // 0x10035f570
    bool MousePickingHelper::IsNpcTypecode(long long arg1) {
        return GetEntityTypeFromTypecode((long long)this) == 1;
    }

    // 0x10035f590
    bool MousePickingHelper::IsLocTypecode(long long arg1) {
        return GetEntityTypeFromTypecode((long long)this) == 2;
    }

    // 0x10035f5b0
    bool MousePickingHelper::IsObjTypecode(long long arg1) {
        return GetEntityTypeFromTypecode((long long)this) == 3;
    }

    // 0x10035f5d0
    unsigned long MousePickingHelper::IsActiveEntityTypecode(long long arg1) {
        if (arg1 == 0) {
            return 0;
        }
        return GetEntityInactiveFromTypecode(arg1) ^ 1;
    }

    // 0x10035f5f0
    uint8_t MousePickingHelper::GetEntityInactiveFromTypecode(long long arg1) {
        return core::math::MathTool::UnsignedRightShift(arg1, '\x13') & 1;
    }

    // 0x10035f610
    void MousePickingHelper::GetPickedEntityTypecode(int arg1) {
        uint64_t* puVar1 = &m_pickedEntityTypecode[(long)arg1];
        return *puVar1;
    }

    // 0x10035f670
    void MousePickingHelper::GetPickedEntityX(int arg1) {
        long long* plVar1 = &m_pickedEntityTypecode[(long)arg1];
        GetEntityXFromTypecode(*plVar1);
    }

    // 0x10035f690
    unsigned int MousePickingHelper::GetEntityXFromTypecode(long long arg1) {
        return core::math::MathTool::UnsignedRightShift(arg1, '\0') & 127;
    }

    // 0x10035f6a0
    void MousePickingHelper::GetPickedEntityZ(int arg1) {
        long long* plVar1 = &m_pickedEntityTypecode[(long)arg1];
        GetEntityZFromTypecode(*plVar1);
    }

    // 0x10035f6c0
    unsigned int MousePickingHelper::GetEntityZFromTypecode(long long arg1) {
        return core::math::MathTool::UnsignedRightShift(arg1, '\a') & 127;
    }

    // 0x10035f6e0
    void MousePickingHelper::GetPickedEntityLevel(int arg1) {
        long long* plVar1 = &m_pickedEntityTypecode[(long)arg1];
        GetEntityLevelFromTypecode(*plVar1);
    }

    // 0x10035f700
    unsigned int MousePickingHelper::GetEntityLevelFromTypecode(long long arg1) {
        return core::math::MathTool::UnsignedRightShift(arg1, '\x0e') & 3;
    }

    // 0x10035f720
    void MousePickingHelper::GetPickedEntityType(int arg1) {
        long long* plVar1 = &m_pickedEntityTypecode[(long)arg1];
        GetEntityTypeFromTypecode(*plVar1);
    }

    // 0x10035f740
    void MousePickingHelper::GetPickedEntityInactive(int arg1) {
        long long* plVar1 = &m_pickedEntityTypecode[(long)arg1];
        GetEntityInactiveFromTypecode(*plVar1);
    }

    // 0x10035f760
    void MousePickingHelper::GetPickedEntityId(int arg1) {
        long long* plVar1 = &m_pickedEntityTypecode[(long)arg1];
        GetEntityIdFromTypecode(*plVar1);
    }

    // 0x10035f780
    void MousePickingHelper::GetPickedLocLayer(int arg1) {
        long long* plVar2 = &m_pickedEntityTypecode[(long)arg1];
        return GetLocLayerFromTypecode(*plVar2);
    }

    // 0x10035f7a0
    unsigned int MousePickingHelper::GetLocLayerFromTypecode(long long arg1) {
        return core::math::MathTool::UnsignedRightShift(arg1, '4') & 3;
    }

    // 0x10035f7c0
    unsigned long MousePickingHelper::OverwriteEntityCoordInTypecode(long long arg1, int arg2, int arg3, int arg4) {
        return (long)arg3 | arg1 & 18446744073709486080U | (long)arg2 << 14 | (long)arg4 << 7;
    }

    // 0x10035f7f0
    long MousePickingHelper::GetPackedTypeCode(int arg1, int arg2, int arg3, int arg4, bool arg5, int arg6) {
        uint32_t in_register_00000081;

        unsigned long uVar2 = (unsigned long)((arg4 & 7U) << 16 | (arg3 & 3U) << 14 | (arg2 & 127U) << 7 | arg1 & 127U);
        long lVar1 = (unsigned long)(unsigned int)arg6 * 1048576 + uVar2 + 524288;
        if ((((uint32_t)in_register_00000081 << 8) | (uint8_t)arg5) == 0) {
            lVar1 = (unsigned long)(unsigned int)arg6 * 1048576 + uVar2;
        }
        return lVar1;
    }

    // 0x10035f830
    void MousePickingHelper::SetMouseCoords(int arg1, int arg2, bool arg3) {
        m_mouseX = arg1;
        m_mouseY = arg2;
        m_mouseCheck = arg3;
        m_pickedEntityCount = 0;
        m_mouseWorldLineCalculated = 0;
    }

    // 0x10035f860
    void MousePickingHelper::AddPickingEntity(long long arg1) {
        unsigned long arg1_00 = (unsigned long)m_pickedEntityCount;
        m_pickedEntityCount = m_pickedEntityCount + 1;
        long long* plVar1 = &m_pickedEntityTypecode[arg1_00];
        *plVar1 = arg1;
    }

    // 0x10035f890
    void MousePickingHelper::SortPickingEntities(game::CoordGrid coordGrid) {
        auto arg1 = m_pickedEntityTypecode.HeapBeginPtr();
        long lVar1 = m_pickedEntityTypecode.HeapBeginPtr();
        long lVar2 = (long)m_pickedEntityCount;
        DistanceFromCamera local_30(coordGrid.field_4, coordGrid.field_8);
        eastl::sort<long long*, MousePickingHelper::SortPickingEntities(game::CoordGrid)::DistanceFromCamera>(
            arg1, (lVar1 + lVar2 * 8), local_30);
    }

    // 0x10035f910
    void MousePickingHelper::IsMousePickingEnabled() {
        return m_mouseCheck;
    }

    // 0x10035f920
    bool MousePickingHelper::HasCheckedScreenCoordLastRender(int arg1, int arg2) {
        return arg2 == m_mouseY && arg1 == m_mouseX;
    }

    // 0x10035f940
    void MousePickingHelper::GetMouseScreenX() {
        return m_mouseX;
    }

    // 0x10035f950
    void MousePickingHelper::GetMouseScreenY() {
        return m_mouseY;
    }

    // 0x10035f960
    void MousePickingHelper::CheckCalculateMouseWorldVector(const Pix3D& pix3D) {
        int iVar2;
        int iVar3;
        unsigned int uVar4;
        int iVar5;
        int arg1;
        int iVar6;
        int iVar7;
        MousePickingHelper* local_68;
        unsigned int local_60;
        Vector3T<int>* local_58;
        int local_4c;
        int local_48;
        unsigned int local_44;
        int local_40;
        unsigned int local_3c;
        unsigned int local_38;
        int local_34;

        int iVar1 = dash3d::world::m_cameraCosX;
        if (m_mouseWorldLineCalculated == '\0') {
            local_34 = dash3d::world::m_cameraSinX;
            local_4c = dash3d::world::m_cameraSinY;
            local_48 = dash3d::world::m_cameraCosY;
            iVar3 = pix3D.GetRenderDepth();
            iVar2 = local_34;
            iVar5 = m_mouseX - pix3D.m_xOrigin;
            iVar7 = pix3D.m_zoom;
            local_38 = (iVar5 * 50) / iVar7;
            iVar6 = m_mouseY - pix3D.m_yOrigin;
            arg1 = (iVar6 * 50) / iVar7;
            local_40 = (iVar5 * iVar3) / iVar7;
            iVar7 = (iVar6 * iVar3) / iVar7;
            local_44 = Pix3D::InvRotateYAroundX(arg1, 50, iVar1, local_34);
            iVar5 = Pix3D::InvRotateZAroundX(arg1, 50, iVar1, iVar2);
            local_3c = Pix3D::InvRotateYAroundX(iVar7, iVar3, iVar1, iVar2);
            iVar3 = Pix3D::InvRotateZAroundX(iVar7, iVar3, iVar1, iVar2);
            uVar4 = local_38;
            iVar7 = local_48;
            iVar1 = local_4c;
            local_34 = Pix3D::InvRotateXAroundY(local_38, iVar5, local_48, local_4c);
            local_38 = Pix3D::InvRotateZAroundY(uVar4, iVar5, iVar7, iVar1);
            iVar2 = local_40;
            iVar5 = Pix3D::InvRotateXAroundY(local_40, iVar3, iVar7, iVar1);
            uVar4 = Pix3D::InvRotateZAroundY(iVar2, iVar3, iVar7, iVar1);
            new (&local_68) rs2lib::worldmap::LocationData(local_34, local_44, local_38);
            new (&local_58) rs2lib::worldmap::LocationData(iVar5, local_3c, uVar4);
            SetMouseWorldVector(local_68, (Vector3T<int>*)(unsigned long)local_60, local_58);
        }
    }

    // 0x10035fb90
    void MousePickingHelper::SetMouseWorldVector(jag::math::Vector3T<int> vector31, jag::math::Vector3T<int> vector32) {
        Vector3T<int>* local_30[2];

        uint32_t local_38 = (uint32_t)vector31;
        local_30[0] = vector32;
        auto piVar2 = local_30->SSOBeginPtr();
        int iVar1 = *piVar2;
        piVar2 = (int*)(this).SSOBeginPtr();
        m_mouseLineWorldCentreX = (iVar1 + *piVar2) / 2;
        piVar2 = (int*)local_30->y();
        iVar1 = *piVar2;
        piVar2 = (int*)(this).y();
        m_mouseLineWorldCentreY = (iVar1 + *piVar2) / 2;
        piVar2 = (int*)local_30->second();
        iVar1 = *piVar2;
        piVar2 = (int*)(this).second();
        m_mouseLineWorldCentreZ = (iVar1 + *piVar2) / 2;
        piVar2 = (int*)local_30->SSOBeginPtr();
        iVar1 = *piVar2;
        piVar2 = (int*)(this).SSOBeginPtr();
        m_mouseLineWorldRadiusX = (iVar1 - *piVar2) / 2;
        piVar2 = (int*)local_30->y();
        iVar1 = *piVar2;
        piVar2 = (int*)(this).y();
        m_mouseLineWorldRadiusY = (iVar1 - *piVar2) / 2;
        piVar2 = (int*)local_30->second();
        iVar1 = *piVar2;
        piVar2 = (int*)(this).second();
        m_mouseLineWorldRadiusZ = (iVar1 - *piVar2) / 2;
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

    // 0x10035fcd0
    void MousePickingHelper::GetMouseWorldVector(jag::math::Vector3T<int>& vector31,
                                                 jag::math::Vector3T<int>& vector32) {
        uint8_t auVar1[12];
        Vector3T<int> local_38;

        LocationData local_58(m_mouseLineWorldCentreX, m_mouseLineWorldCentreY, m_mouseLineWorldCentreZ);
        LocationData local_48(m_mouseLineWorldRadiusX, m_mouseLineWorldRadiusY, m_mouseLineWorldRadiusZ);
        local_38._0_12_ = local_58 - local_48;
        vector31 = local_38;
        auVar1 = local_58 + local_48;
        local_38._0_12_ = auVar1;
        vector32 = local_38;
    }

    // 0x10035fda0
    void MousePickingHelper::GetViewProjectionMatrix() {
        return &m_viewProjectionMatrixRSeven;
    }

    // 0x10035fdb0
    void MousePickingHelper::SetViewProjectionMatrix(jag::math::Matrix44T<float> matrix44) {
        Matrix44T<float> MStack0000000000000008;

        m_viewProjectionMatrixRSeven = MStack0000000000000008;
    }

    // 0x10035fdd0
    void MousePickingHelper::CalculateMouseWorldVectorRSeven(jag::math::Vector2T<int> vector2,
                                                             jag::math::Vector3T<int>& vector31,
                                                             jag::math::Vector3T<int>& vector32) {
        uint64_t local_d8;
        float fStack_d0;
        uint32_t uStack_cc;
        ReturnValue local_c8;
        unsigned int local_5c;
        uint64_t local_48;

        int* piVar2 = (int*)(vector2).SSOBeginPtr();
        float local_34 = (float)*piVar2;
        piVar2 = (int*)(vector2).y();
        Point<float> local_60(local_34, (float)*piVar2);
        piVar2 = (int*)m_viewportRect.SSOBeginPtr();
        local_34 = (float)*piVar2;
        piVar2 = (int*)m_viewportRect.y();
        new (&local_c8) jag::math::Point(local_34, (float)*piVar2);
        local_60 -= local_c8;
        piVar2 = (int*)m_viewportRect.second();
        local_34 = (float)*piVar2;
        piVar2 = (int*)m_viewportRect.qw();
        new (&local_c8) jag::math::Point(local_34, (float)*piVar2);
        local_60 /= &local_c8;
        uint64_t local_58 = *2.0 * local_60;
        new (&local_48) jag::math::Vector2T(1.0);
        local_c8 = (ReturnValue)local_58 - local_48;
        local_60 = local_c8;
        local_5c = local_5c ^ 2147483648;
        uint64_t local_98 = _DAT_103949ee0;
        uint64_t uStack_90 = reinterpret_cast<const uint64_t*>(&m_viewProjectionMatrixRSeven)[7];
        uint64_t local_a8 = _DAT_103949ed0;
        uint64_t uStack_a0 = reinterpret_cast<const uint64_t*>(&m_viewProjectionMatrixRSeven)[5];
        uint64_t local_b8 = _DAT_103949ec0;
        uint64_t uStack_b0 = reinterpret_cast<const uint64_t*>(&m_viewProjectionMatrixRSeven)[3];
        local_c8 = m_viewProjectionMatrixRSeven;
        uint64_t uStack_c0 = reinterpret_cast<const uint64_t*>(&m_viewProjectionMatrixRSeven)[1];
        local_c8 = jag::math::Matrix44T<float>::Invert(nullptr);
        auto pfVar3 = local_60.SSOBeginPtr();
        local_34 = *pfVar3;
        pfVar3 = (float*)local_60.y();
        float fVar4 = *pfVar3;
        uint32_t uVar5 = 0;
        new (&local_48) ImVec4(local_34, fVar4, -1.0, 1.0);
        local_58 = local_48 * local_c8;
        float fStack_50 = fVar4;
        uint32_t uStack_4c = uVar5;
        pfVar3 = (float*)local_58.qw();
        local_58 /= *pfVar3;
        pfVar3 = (float*)local_60.SSOBeginPtr();
        local_34 = *pfVar3;
        pfVar3 = (float*)local_60.y();
        fVar4 = *pfVar3;
        uVar5 = 0;
        LocationData local_78(local_34, fVar4, 1.0, 1.0);
        local_48 = local_78 * local_c8;
        float fStack_40 = fVar4;
        uint32_t uStack_3c = uVar5;
        pfVar3 = (float*)local_48.qw();
        local_48 /= *pfVar3;
        pfVar3 = (float*)local_58.y();
        if (0.0 < *pfVar3) {
            pfVar3 = (float*)local_48.y();
            if (*pfVar3 <= 0.0 && *pfVar3 != 0.0) {
                local_78._0_8_ = local_48 - local_58;
                local_78.field_8 = (int)fVar4;
                local_78._12_4_ = uVar5;
                pfVar3 = (float*)local_58.y();
                local_34 = -1.0 - *pfVar3;
                pfVar3 = (float*)local_78.y();
                local_78 *= (local_34 / *pfVar3);
                local_d8 = local_58 + local_78;
                fStack_d0 = fVar4;
                uStack_cc = uVar5;
                local_48 = local_d8;
            }
        }
        pfVar3 = (float*)local_58.SSOBeginPtr();
        fVar4 = *pfVar3;
        pfVar3 = (float*)local_58.y();
        float fVar1 = *pfVar3;
        pfVar3 = (float*)local_58.second();
        local_78 = rs2lib::worldmap::LocationData((int)fVar4, (int)fVar1, (int)*pfVar3);
        vector31 = local_78;
        pfVar3 = (float*)local_48.SSOBeginPtr();
        fVar4 = *pfVar3;
        pfVar3 = (float*)local_48.y();
        fVar1 = *pfVar3;
        pfVar3 = (float*)local_48.second();
        local_78 = rs2lib::worldmap::LocationData((int)fVar4, (int)fVar1, (int)*pfVar3);
        vector32 = local_78;
    }

    // 0x1003601a0
    void MousePickingHelper::GetGroundIntersection(world& world, jag::math::Vector3T<int> vector31,
                                                   jag::math::Vector3T<int> vector32,
                                                   jag::math::Vector3T<int>& vector33,
                                                   jag::math::Vector3T<int>& vector34) {
        Vector3T<float>* in_stack_00000008;

        uint32_t local_60 = (uint32_t)vector33;
        uint32_t local_70 = (uint32_t)vector31;
        vector32 - world;
        int* piVar1 = (int*)(world).SSOBeginPtr();
        float local_38 = (float)*piVar1;
        piVar1 = (int*)(world).y();
        float local_34 = (float)*piVar1;
        piVar1 = (int*)(world).second();
        ColourHSL local_58(local_38, local_34, (float)*piVar1);
        piVar1 = (int*)(vector32).SSOBeginPtr();
        local_38 = (float)*piVar1;
        piVar1 = (int*)(vector32).y();
        local_34 = (float)*piVar1;
        piVar1 = (int*)(vector32).second();
        ColourHSL local_48(local_38, local_34, (float)*piVar1);
        local_48 - local_58;
        RecurseGroundIntersection((world*)this, (Vector3T<float>*)vector34, in_stack_00000008, (Vector3T<int>*)4,
                                  vector33, (int)vector34);
    }

    // 0x1003602b0
    unsigned long RecurseGroundIntersection(world& world, jag::math::Vector3T<float> vector31,
                                            jag::math::Vector3T<float> vector32, jag::math::Vector3T<int>& vector33,
                                            jag::math::Vector3T<int>& vector34, int arg6) {
        Vector3T<int>* pVVar1;
        float fVar2;
        float fVar3;
        int iVar4;
        unsigned int arg2;
        int iVar6;
        float* pfVar7;
        int* piVar8;
        unsigned int* puVar9;
        unsigned long uVar10;
        uint32_t in_XMM0_Da;
        uint32_t in_XMM0_Db;
        float in_XMM1_Da;
        LocationData local_e0;
        LocationData local_d0;
        Vector3T<float> local_c0;
        uint64_t local_b0[2];
        unsigned long local_a0;
        float local_70;
        unsigned int local_6c;
        uint64_t local_48;
        float local_40;

        uint64_t local_68 = (((uint64_t)in_XMM0_Db << 32) | (uint32_t)in_XMM0_Da);
        float local_60 = in_XMM1_Da;
        local_b0[0] = local_c0 - local_68;
        float local_78 = local_60;
        float local_38 = (float)(int)vector33 * 0.001;
        uint64_t local_80 = local_68;
        float fVar11 = local_38 + 1.0;
        float local_58 = 0.0;
        uint32_t uStack_54 = 0;
        uint32_t uStack_50 = 0;
        uint32_t uStack_4c = 0;
        bool local_31 = 0.0 < fVar11;
        if (0.0 < fVar11) {
            local_6c = (int)vector33 - 1;
            local_a0 = (unsigned long)vector33 & 4294967295;
            local_70 = fVar11;
            do {
                local_48 = *local_58 * *local_b0;
                local_40 = fVar11;
                local_48 += local_68;
                pfVar7 = (float*)local_48.SSOBeginPtr();
                fVar2 = *pfVar7;
                pfVar7 = (float*)local_48.y();
                fVar3 = *pfVar7;
                pfVar7 = (float*)local_48.second();
                local_e0 = rs2lib::worldmap::LocationData((int)fVar2, (int)fVar3, (int)*pfVar7);
                piVar8 = (int*)local_e0.SSOBeginPtr();
                arg2 = dash3d::world::m_groundPickingLevel;
                iVar4 = *piVar8;
                piVar8 = (int*)local_e0.second();
                local_d0 = rs2lib::worldmap::LocationData(iVar4 >> 7, arg2, *piVar8 >> 7);
                puVar9 = (unsigned int*)local_d0.SSOBeginPtr();
                uVar10 = (unsigned long)*puVar9;
                if (dash3d::world::m_minX <= (int)*puVar9) {
                    puVar9 = (unsigned int*)local_d0.second();
                    uVar10 = (unsigned long)*puVar9;
                    if (dash3d::world::m_minZ <= (int)*puVar9) {
                        puVar9 = (unsigned int*)local_d0.SSOBeginPtr();
                        uVar10 = (unsigned long)*puVar9;
                        if ((int)*puVar9 < dash3d::world::m_maxX) {
                            puVar9 = (unsigned int*)local_d0.second();
                            uVar10 = (unsigned long)*puVar9;
                            if ((int)*puVar9 < dash3d::world::m_maxZ) {
                                piVar8 = (int*)local_d0.y();
                                if (*piVar8 < 3) {
                                    piVar8 = (int*)local_d0.y();
                                    iVar4 = *piVar8;
                                    pfVar7 = (float*)local_48.SSOBeginPtr();
                                    fVar2 = *pfVar7;
                                    pfVar7 = (float*)local_48.second();
                                    if (ClientBuild::IsLinkBelow(iVar4 + 1, (int)fVar2 >> 7, (int)*pfVar7 >> 7) !=
                                        '\0') {
                                        local_d0.field_4 = local_d0.field_4 + 1;
                                    }
                                }
                                piVar8 = (int*)local_d0.y();
                                iVar4 = *piVar8;
                                piVar8 = (int*)local_e0.SSOBeginPtr();
                                iVar6 = *piVar8;
                                piVar8 = (int*)local_e0.second();
                                iVar6 = world.GetGroundHeightAtFinePos(iVar4, iVar6, *piVar8);
                                piVar8 = (int*)local_e0.y();
                                iVar4 = *piVar8;
                                if (iVar4 < -iVar6) {
                                    *vector31 = local_d0;
                                    uVar10 = *vector32 = local_e0;
                                    pVVar1 = (Vector3T<int>*)(vector32 + 4);
                                    *(int*)pVVar1 = -*(int*)pVVar1;
                                    if ((int)local_a0 != 1) {
                                        local_58 = (float)(~-(unsigned int)(0.0 < local_58) & (unsigned int)local_58 |
                                                           (unsigned int)(local_58 - local_38) &
                                                               -(unsigned int)(0.0 < local_58));
                                        fVar11 = local_78;
                                        uVar10 = RecurseGroundIntersection(world, vector31, vector32,
                                                                           (Vector3T<int>*)(unsigned long)local_6c,
                                                                           vector34, arg6);
                                    }
                                } else {
                                    uVar10 = local_80.SetXYZ(local_48);
                                }
                                if (iVar4 < -iVar6) {
                                    local_68 = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
                local_68 = (((uint64_t)((int64_t)(uVar10 >> 8)) << 8) | (uint8_t)1);
                local_58 = local_58 + local_38;
                local_31 = local_58 < local_70;
            } while (local_31);
        }
        return local_31 & 18446744073709551361;
    }

    // 0x1003605f0
    bool MousePickingHelper::DoesMouseIntersectModelPoints(const ModelLit& modelLit, int* arg2, int* arg3, int arg4) {
        int iVar1;
        int iVar2;
        int arg3_00;
        int arg4_00;
        int arg5;
        uint8_t bVar4;
        int* piVar5;
        unsigned long arg1;

        if ((**(void (**)(...))(field_0 + 56))() != '\0') {
            LogAssert("!model.IsForRSeven()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "MousePickingHelper.cpp",
                      423, "Point intersection test only supports SD models.");
        }
        if (0 < field_96) {
            arg1 = 0;
            do {
                piVar5 = &field_224[arg1];
                if (*piVar5 != -2) {
                    piVar5 = &field_104[arg1];
                    iVar1 = *piVar5;
                    piVar5 = &field_128[arg1];
                    iVar2 = *piVar5;
                    piVar5 = &field_152[arg1];
                    arg3_00 = *(int*)((long)&modelLit._vptr + (long)iVar1 * 4);
                    bVar4 = 4;
                    if ((arg3_00 != -1) &&
                        (arg4_00 = *(int*)((long)&modelLit._vptr + (long)iVar2 * 4), arg4_00 != -1)) {
                        arg5 = *(int*)((long)&modelLit._vptr + (long)*piVar5 * 4);
                        if (arg5 != -1) {
                            bVar4 = IsMouseRoughlyInsideTriangle(
                                (MousePickingHelper*)(unsigned long)(unsigned int)arg2[iVar1], arg2[iVar2],
                                arg2[*piVar5], arg3_00, arg4_00, arg5, (int)arg3, (int)modelLit);
                        }
                    }
                    if ((bVar4 & 3) != 0)
                        goto LAB_100360725;
                }
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)field_96);
        }
        bVar4 = 2;
    LAB_100360725:
        return bVar4 != 2;
    }

    // 0x100360740
    bool MousePickingHelper::IsMouseRoughlyInsideTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                                                          int arg7) {
        int iVar1 = m_mouseY + arg6;
        if (((((int)this <= iVar1) || (arg1 <= iVar1)) || (arg2 <= iVar1)) &&
            (((iVar1 = m_mouseY - arg6, iVar1 <= (int)this || (iVar1 <= arg1)) || (iVar1 <= arg2)))) {
            iVar1 = m_mouseX + arg6;
            if (((arg3 <= iVar1) || (arg4 <= iVar1)) || (arg5 <= iVar1)) {
                iVar1 = m_mouseX - arg6;
                return iVar1 <= arg5 || (iVar1 <= arg4 || iVar1 <= arg3);
            }
        }
        return 0;
    }

    // 0x1003607b0
    void MousePickingHelper::IsAABBWithinMaxViewDistanceFromCamera(const ModelLit::AABB& aabb, int arg2, int arg3) {
        Vector3T<int> local_50;
        Vector3T<int> local_40;
        GetMouseWorldVector(&local_50, &local_40);
        auto piVar2 = local_50.SSOBeginPtr();
        int iVar1 = *piVar2;
        piVar2 = (int*)local_50.second();
        IsAABBWithinMaxViewDistance(aabb, arg2 - iVar1, arg3 - *piVar2);
    }

    // 0x100360820
    bool MousePickingHelper::IsAABBWithinMaxViewDistance(const ModelLit::AABB& aabb, int arg2, int arg3) {
        bool bVar1 = false;
        if (((-5185 < aabb.field_12 + arg2) && (arg2 - aabb.field_12 < 5185)) && (-5185 < aabb.field_20 + arg3)) {
            bVar1 = arg3 - aabb.field_20 < 5185;
        }
        return bVar1;
    }

    // 0x100360860
    void MousePickingHelper::SetupPickingHelper(jag::graphics::PickingHelper& pickingHelper) {
        auto piVar1 = m_viewportRect.SSOBeginPtr();
        float local_24 = (float)*piVar1;
        piVar1 = (int*)m_viewportRect.y();
        float local_2c = (float)*piVar1;
        piVar1 = (int*)m_viewportRect.second();
        float local_28 = (float)*piVar1;
        piVar1 = (int*)m_viewportRect.qw();
        ImVec4 local_48(local_24, local_2c, local_28, (float)*piVar1);
        int iVar2 = GetMouseScreenX();
        local_24 = (float)iVar2;
        piVar1 = (int*)m_viewportRect.qw();
        iVar2 = *piVar1;
        int iVar3 = GetMouseScreenY();
        Point<float> local_38(local_24, (float)(iVar2 - iVar3));
        pickingHelper.ResetPointTest(m_viewProjectionMatrixRSeven, local_48, local_38, false, 5.0);
    }

    // 0x100360940
    void MousePickingHelper::SetViewportDimensions(jag::math::Rect<int> rect, int arg2) {
        m_viewportRect = *rect;
        m_viewportFov = arg2;
    }

    // 0x100360970
    void MousePickingHelper::GetViewportFov() {
        return m_viewportFov;
    }

    // 0x100360980
    auto MousePickingHelper::GetViewportRect() {
        return auto(m_viewportRect);
    }

    // 0x1003609a0
    int MousePickingHelper::Sign(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        return (arg6 - arg2) * (arg3 - arg5) + (arg4 - arg6) * (arg1 - arg5);
    }

    // 0x1003609c0
    void MousePickingHelper::IsMouseInsideTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        int arg2_00 = m_mouseY;
        int iVar4 = m_mouseX;
        unsigned int uVar1 = Sign(m_mouseX, m_mouseY, arg4, arg1, arg5, arg2);
        unsigned int uVar2 = Sign(iVar4, arg2_00, arg5, arg2, arg6, arg3);
        unsigned int uVar3 = Sign(iVar4, arg2_00, arg6, arg3, arg4, arg1);
        iVar4 = -((int)(uVar3 ^ uVar2 | uVar1 ^ uVar2) >> 31);
        return iVar4 == 0;
    }

    // 0x10037fb80
    bool
    MousePickingHelper::SortPickingEntities(game::CoordGrid)::DistanceFromCamera::operator()(const long long& arg1,
                                                                                             const long long& arg2) {
        uint8_t local_50[16];

        long long lVar1 = arg1;
        int iVar2 = GetEntityXFromTypecode(lVar1);
        int iVar3 = GetEntityZFromTypecode(lVar1);
        new (local_50) sidebars::SideBarData(iVar2, iVar3);
        lVar1 = arg2;
        iVar2 = GetEntityXFromTypecode(lVar1);
        iVar3 = GetEntityZFromTypecode(lVar1);
        new ((local_50 + 8)) sidebars::SideBarData(iVar2, iVar3);
        iVar2 = (*local_50 - *this).LengthSq();
        iVar3 = ((*((local_50 + 8))) - *this).LengthSq();
        return iVar3 < iVar2;
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100342ee0
    shared_ptr_if_not_array<oldscape::ClientLocAnim>::type
    make_shared<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
        int& arg1, int&& arg2, int& arg3, int& arg4, int& arg5, int& arg6, int& arg7, bool& arg8,
        decltype(nullptr)&& arg9, int& arg10) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000028;
        int local_44;
        ClientLocAnim* local_40[2];

        auto arg1_00 = aligned_alloc(96, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] =
                placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&,
                              decltype(nullptr), int&>((void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7,
                                                       (int*)arg8, (bool*)arg9, (void**)arg10, in_stack_00000028);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x100342fc0
    shared_ptr_if_not_array<oldscape::ClientLocAnim>::type
    make_shared<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
        int& arg1, int& arg2, int& arg3, int& arg4, int& arg5, int& arg6, int& arg7, bool& arg8,
        decltype(nullptr)&& arg9, int& arg10) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000028;
        int local_44;
        ClientLocAnim* local_40[2];

        auto arg1_00 = aligned_alloc(96, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] =
                placement_new<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int&, bool&,
                              decltype(nullptr), int&>((void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7,
                                                       (int*)arg8, (bool*)arg9, (void**)arg10, in_stack_00000028);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x1003430b0
    shared_ptr_if_not_array<oldscape::ClientLocAnim>::type
    make_shared<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
        int& arg1, int&& arg2, int&& arg3, int& arg4, int& arg5, int& arg6, int& arg7, bool& arg8,
        decltype(nullptr)&& arg9, int& arg10) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000028;
        int local_44;
        ClientLocAnim* local_40[2];

        auto arg1_00 = aligned_alloc(96, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] =
                placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr),
                              int&>((void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7, (int*)arg8,
                                    (bool*)arg9, (void**)arg10, in_stack_00000028);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::ClientLocAnim>, int, oldscape::ClientLocAnim*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

} // namespace jag
