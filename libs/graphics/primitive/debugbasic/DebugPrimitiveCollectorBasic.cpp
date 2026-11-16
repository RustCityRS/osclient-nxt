// libs/graphics/primitive/debugbasic/DebugPrimitiveCollectorBasic.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.debugbasic

#include "DebugPrimitiveCollectorBasic.h"

namespace jag {
    // 0x103bc16a0
    vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>
        DebugPrimitiveCollectorBasic::m_GlobalCollectors;

    // 0x1009c4ec0
    void DebugPrimitiveCollectorBasic::CreateCollector(const char* str,
                                                       DebugPrimitiveCollector<DebugDataBasic>::Config& config) {
        fixed_string<char, 64> local_90(this);
        auto local_98 = m_GlobalCollectors.find(local_90);
    }

    // 0x1009c51f0
    void DebugPrimitiveCollectorBasic::DestroyCollector(const char* str) {
        fixed_string<char, 64> local_88(str);
        auto local_90 = m_GlobalCollectors.find(local_88);
    }

    // 0x1009c53b0
    void DebugPrimitiveCollectorBasic::DestroyAllCollectors() {
        long lVar2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_28;

        auto local_30 = m_GlobalCollectors.rbegin();
        local_28.end();
        bool cVar1 = local_30 != local_28;
        if (cVar1) {
            do {
                lVar2 = *local_30;
                safe_delete<game::VarDomainType>((DebugPrimitiveCollectorBasic**)(lVar2 + 104));
                ++local_30;
                cVar1 = local_30 != local_28;
            } while (cVar1);
        }
        m_GlobalCollectors.clear();
    }

    // 0x1009c5470
    long* DebugPrimitiveCollectorBasic::GetCollector(const char* str) {
        fixed_string<char, 64> local_88(str);
        auto local_90 = m_GlobalCollectors.find(local_88);
    }

    // 0x1009c5580
    DebugPrimitiveCollectorBasic::DebugPrimitiveCollectorBasic(
        const DebugPrimitiveCollector<DebugDataBasic>::Config& config)
        : DebugPrimitiveCollector<DebugDataBasic>(config), field_624(*(int*)config), field_944(*(int*)(config + 4)),
          field_1264(*(int*)(config + 8)), field_1584(*(int*)(config + 12)), field_1904(*(int*)(config + 16)),
          field_2224(*(int*)(config + 20)), field_2544(*(int*)(config + 24)), field_2864(*(int*)(config + 28)),
          field_3184(*(int*)(config + 32)), field_3504(*(int*)(config + 36)), field_3824(*(int*)(config + 40)),
          field_4144(*(int*)(config + 44)), field_4464(*(int*)(config + 48)), field_4784(*(int*)(config + 52)),
          field_5104(*(int*)(config + 56)), field_5424(*(int*)(config + 60)), field_5744(*(int*)(config + 64)) {}

    // 0x1009c5ea0
    void DebugPrimitiveCollectorBasic::Clear() {
        Clear();
        field_624.Clear();
        field_944.Clear();
        field_1264.Clear();
        field_1584.Clear();
        field_1904.Clear();
        field_2224.Clear();
        field_2544.Clear();
        field_2864.Clear();
        field_3184.Clear();
        field_3504.Clear();
        field_3824.Clear();
        field_4144.Clear();
        field_4464.Clear();
        field_4784.Clear();
        field_5104.Clear();
        field_5424.Clear();
        field_5744.Clear();
    }

    // 0x1009c65c0
    void DebugPrimitiveCollectorBasic::AddTri(const math::Vector3T<float>& vector31,
                                              const math::Vector3T<float>& vector32,
                                              const math::Vector3T<float>& vector33,
                                              const DebugDataBasic& debugDataBasic) {
        DebugTri<DebugDataBasic>* debugTri;
        DebugTri<DebugDataBasic> local_78;

        scoped_lock<std::mutex> local_38(field_624);
        uint8_t* this_00 = &field_8;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_78 = DebugTri<DebugDataBasic>(vector31, vector32, vector33, debugDataBasic);
            this_00->push_back(local_78);
            debugTri = (DebugTri<DebugDataBasic>*)this_00->back();
            field_624.AddPrimitive(*debugTri, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c67c0
    void DebugPrimitiveCollectorBasic::AddLine(const math::Vector3T<float>& vector31,
                                               const math::Vector3T<float>& vector32,
                                               const DebugDataBasic& debugDataBasic) {
        DebugLine<DebugDataBasic>* debugLine;
        DebugEllipsoid<DebugDataBasic> local_60;

        scoped_lock<std::mutex> local_38(field_944);
        uint8_t* this_00 = &field_40;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_60 = DebugEllipsoid(vector31, vector32, debugDataBasic);
            this_00->push_back(local_60);
            debugLine = (DebugLine<DebugDataBasic>*)this_00->back();
            field_944.AddPrimitive(*debugLine, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c6990
    void DebugPrimitiveCollectorBasic::AddSphere(const math::Sphere& sphere, const DebugDataBasic& debugDataBasic) {
        Vector3T<float>* vector31;
        DebugEllipsoid<DebugDataBasic>* debugEllipsoid;
        float arg1;
        DebugEllipsoid<DebugDataBasic> local_68;
        Vector3T<float> local_48;

        scoped_lock<std::mutex> local_38(field_1264);
        uint8_t* this_00 = &field_72;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            vector31 = (Vector3T<float>*)sphere.SSOBeginPtr();
            arg1 = (float)sphere.GetOutlineRadiusAdjustment();
            local_48 = math::Vector3T(arg1);
            local_68 = DebugEllipsoid(*vector31, local_48, debugDataBasic);
            this_00->push_back(local_68);
            debugEllipsoid = (DebugEllipsoid<DebugDataBasic>*)this_00->back();
            field_1264.AddPrimitive(*debugEllipsoid, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c6b60
    void DebugPrimitiveCollectorBasic::AddEllipsoid(const math::Vector3T<float>& vector31,
                                                    const math::Vector3T<float>& vector32,
                                                    const DebugDataBasic& debugDataBasic) {
        DebugEllipsoid<DebugDataBasic>* debugEllipsoid;
        DebugEllipsoid<DebugDataBasic> local_60;

        scoped_lock<std::mutex> local_38(field_1264);
        uint8_t* this_00 = &field_72;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_60 = DebugEllipsoid(vector31, vector32, debugDataBasic);
            this_00->push_back(local_60);
            debugEllipsoid = (DebugEllipsoid<DebugDataBasic>*)this_00->back();
            field_1264.AddPrimitive(*debugEllipsoid, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c6c20
    void DebugPrimitiveCollectorBasic::AddCapsule(const math::Capsule3D& capsule3D,
                                                  const DebugDataBasic& debugDataBasic) {
        DebugCapsule<DebugDataBasic>* debugCapsule;
        DebugCapsule<DebugDataBasic> local_60;

        scoped_lock<std::mutex> local_38(field_1584);
        uint8_t* this_00 = &field_104;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_60 = DebugCapsule<DebugDataBasic>(capsule3D, debugDataBasic);
            this_00->push_back(local_60);
            debugCapsule = (DebugCapsule<DebugDataBasic>*)this_00->back();
            field_1584.AddPrimitive(*debugCapsule, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c6e10
    void DebugPrimitiveCollectorBasic::AddCone(const math::Matrix44T<float>& matrix44,
                                               const DebugDataBasic& debugDataBasic) {
        DebugCone<DebugDataBasic>* debugCone;
        DebugCylinder<DebugDataBasic> local_88;

        scoped_lock<std::mutex> local_90(field_1904);
        uint8_t* this_00 = &field_136;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_88 = DebugCylinder(matrix44, debugDataBasic);
            this_00->push_back(local_88);
            debugCone = (DebugCone<DebugDataBasic>*)this_00->back();
            field_1904.AddPrimitive(*debugCone, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c7040
    void DebugPrimitiveCollectorBasic::AddCylinder(const math::Matrix44T<float>& matrix44,
                                                   const DebugDataBasic& debugDataBasic) {
        DebugCylinder<DebugDataBasic>* debugCylinder;
        DebugCylinder<DebugDataBasic> local_88;

        scoped_lock<std::mutex> local_90(field_2224);
        uint8_t* this_00 = &field_168;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_88 = DebugCylinder(matrix44, debugDataBasic);
            this_00->push_back(local_88);
            debugCylinder = (DebugCylinder<DebugDataBasic>*)this_00->back();
            field_2224.AddPrimitive(*debugCylinder, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c7230
    void DebugPrimitiveCollectorBasic::AddAABB(const math::AABB& aabb, const DebugDataBasic& debugDataBasic) {
        DebugAABB<DebugDataBasic>* debugAABB;
        DebugAABB<DebugDataBasic> local_68;

        scoped_lock<std::mutex> local_70(field_2544);
        uint8_t* this_00 = &field_200;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_68 = DebugAABB<DebugDataBasic>(aabb, debugDataBasic);
            this_00->push_back(local_68);
            debugAABB = (DebugAABB<DebugDataBasic>*)this_00->back();
            field_2544.AddPrimitive(*debugAABB, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c7430
    void DebugPrimitiveCollectorBasic::AddOBB(const math::OBB& obb, const DebugDataBasic& debugDataBasic) {
        DebugOBB<DebugDataBasic>* debugOBB;
        DebugOBB<DebugDataBasic> local_98;

        scoped_lock<std::mutex> local_a0(field_2864);
        uint8_t* this_00 = &field_232;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_98 = DebugOBB<DebugDataBasic>(obb, debugDataBasic);
            this_00->push_back(local_98);
            debugOBB = (DebugOBB<DebugDataBasic>*)this_00->back();
            field_2864.AddPrimitive(*debugOBB, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c7660
    void DebugPrimitiveCollectorBasic::AddAxes(const math::Vector3T<float>& vector3,
                                               const math::Matrix33T<float>& matrix33, float arg3,
                                               const DebugDataBasic& debugDataBasic) {
        uint8_t local_58[8];

        auto pVVar1 = matrix33.SSOBeginPtr();
        uint64_t local_40 = *arg3 * *pVVar1;
        uint64_t local_50 = vector3 + local_40;
        new (local_58) oldscape::sidebars::SideBarData(-16776961, *(int*)(debugDataBasic + 4));
        AddLine(vector3, (DebugDataBasic*)&local_50);
        pVVar1 = (Vector3T<float>*)matrix33.qw();
        local_40 = *arg3 * *pVVar1;
        local_50 = vector3 + local_40;
        new (local_58) oldscape::sidebars::SideBarData(-16711936, *(int*)(debugDataBasic + 4));
        AddLine(vector3, (DebugDataBasic*)&local_50);
        pVVar1 = (Vector3T<float>*)matrix33.second();
        local_40 = *arg3 * *pVVar1;
        local_50 = vector3 + local_40;
        new (local_58) oldscape::sidebars::SideBarData(-65536, *(int*)(debugDataBasic + 4));
        AddLine(vector3, (DebugDataBasic*)&local_50);
    }

    // 0x1009c77b0
    void DebugPrimitiveCollectorBasic::AddFrustum(const math::Frustum& frustum, const math::Matrix44T<float>& matrix44,
                                                  const DebugDataBasic& debugDataBasic) {
        DebugFrustum<DebugDataBasic>* debugFrustum;
        Vector3T<float>* vector32;
        Vector3T<float>* pVVar3;
        uint64_t local_1d0[2];
        uint64_t local_1b8[2];
        uint64_t local_1a8[2];
        uint64_t local_198[2];
        uint64_t local_188[2];
        uint64_t local_178[2];
        uint64_t local_168[2];
        Frustum local_158;

        scoped_lock<std::mutex> local_1c0(field_3184);
        uint8_t* this_00 = &field_264;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_158 = DebugFrustum<DebugDataBasic>(frustum, debugDataBasic);
            this_00->push_back(local_158);
            debugFrustum = (DebugFrustum<DebugDataBasic>*)this_00->back();
            field_3184.AddPrimitive(*debugFrustum, *(unsigned int*)(debugDataBasic + 4));
            if (((uint8_t)debugDataBasic[4] & 2) == 0) {
                local_158[0].field_0 = frustum.GetNearTopLeft();
                local_1b8[0] = frustum.GetNearTopRight();
                local_1d0[0] = frustum.GetNearBottomRight();
                local_168[0] = frustum.GetNearBottomLeft();
                local_1a8[0] = frustum.GetFarTopLeft();
                local_198[0] = frustum.GetFarTopRight();
                local_188[0] = frustum.GetFarBottomRight();
                local_178[0] = frustum.GetFarBottomLeft();
                AddTri(&local_158, (Vector3T<float>*)local_1b8, (DebugDataBasic*)local_168);
                AddTri((Vector3T<float>*)local_1b8, (Vector3T<float>*)local_1d0, (DebugDataBasic*)local_168);
                AddTri((Vector3T<float>*)local_198, (Vector3T<float>*)local_1a8, (DebugDataBasic*)local_178);
                AddTri((Vector3T<float>*)local_198, (Vector3T<float>*)local_178, (DebugDataBasic*)local_188);
                AddTri((Vector3T<float>*)local_1a8, &local_158, (DebugDataBasic*)local_178);
                AddTri(&local_158, (Vector3T<float>*)local_168, (DebugDataBasic*)local_178);
                AddTri((Vector3T<float>*)local_198, (Vector3T<float>*)local_188, (DebugDataBasic*)local_168);
                AddTri((Vector3T<float>*)local_188, (Vector3T<float>*)local_168, (DebugDataBasic*)local_1b8);
                AddTri(&local_158, (Vector3T<float>*)local_1a8, (DebugDataBasic*)local_198);
                AddTri((Vector3T<float>*)local_198, &local_158, &local_158);
                AddTri((Vector3T<float>*)local_168, (Vector3T<float>*)local_188, (DebugDataBasic*)local_178);
                AddTri((Vector3T<float>*)local_188, (Vector3T<float>*)local_168, (DebugDataBasic*)local_1d0);
            } else {
                local_158.GetBoundaryEdges();
                vector32 = (Vector3T<float>*)
                    std::array<std::pair<math::Vector3T<float>, math::Vector3T<float>>, 12ul>::begin();
                pVVar3 =
                    (Vector3T<float>*)std::array<std::pair<math::Vector3T<float>, math::Vector3T<float>>, 12ul>::end();
                for (; vector32 != pVVar3; vector32 = vector32 + 24) {
                    AddLine(vector32, (DebugDataBasic*)(vector32 + 12));
                }
            }
        }
    }

    // 0x1009c7d30
    void DebugPrimitiveCollectorBasic::AddPlane(const math::Vector3T<float>& vector3, const math::PlaneT<float>& plane,
                                                int arg3, int arg4, const DebugDataBasic& debugDataBasic) {
        Vector3T<float>* vector3_00;
        DebugPlane<DebugDataBasic>* debugPlane;
        ReturnValue* pRVar3;
        unsigned int in_XMM2_Db;
        unsigned int in_XMM2_Dc;
        unsigned int in_XMM2_Dd;
        uint64_t local_140[2];
        unsigned int uStack_124;
        unsigned int uStack_120;
        unsigned int uStack_11c;
        uint32_t uStack_114;
        uint32_t uStack_110;
        uint32_t uStack_10c;
        ReturnValue local_f8;
        uint32_t local_f0;
        uint8_t local_d8[16];
        uint64_t local_c0[2];
        ReturnValue local_b0;
        uint32_t local_a8;
        uint64_t local_a0[2];
        ReturnValue local_90;
        uint32_t local_88;
        ReturnValue local_80;
        uint64_t local_70[2];
        uint64_t local_60[2];
        uint64_t local_50[2];
        uint64_t local_40[2];

        local_d8._0_8_ = &field_3504;
        float local_128 = (float)arg3;
        float local_118 = (float)arg4;
        uint64_t local_108 = vector3;
        scoped_lock<std::mutex> local_e0(field_3504);
        uint8_t* this_00 = &field_296;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            new (&local_f8) DebugPlane<DebugDataBasic>(plane, debugDataBasic);
            this_00->push_back(local_f8);
            debugPlane = (DebugPlane<DebugDataBasic>*)this_00->back();
            vector3_00 = local_108;
            local_d8._0_8_->AddPrimitive(*debugPlane, *(unsigned int*)(debugDataBasic + 4));
            local_f0 = *(uint32_t*)(plane + 8);
            local_f8 = *(ReturnValue*)plane;
            local_f8 = math::Vector3T<float>::Normalize();
            local_90 = (ReturnValue)math::Vector3Cross<float>(*PTR_RIGHT_100ee66f0, local_f8);
            pRVar3 = local_90 = math::Vector3T<float>::Normalize();
            local_a8 = *(uint32_t*)(pRVar3 + 1);
            local_b0 = *pRVar3;
            local_80[0] = (ReturnValue)math::Vector3Cross<float>(local_f8, local_b0);
            pRVar3 = local_80 = math::Vector3T<float>::Normalize();
            local_88 = *(uint32_t*)(pRVar3 + 1);
            local_90 = *pRVar3;
            local_d8._0_4_ = plane.SignedDistanceTo(*vector3_00);
            local_70[0] = math::operator-((Vector3T<float>*)&local_f8);
            local_a0[0] = (*((float)local_d8._0_4_)) * *local_70;
            local_80[0] = (ReturnValue)*vector3_00 + *local_a0;
            local_108 = (Vector3T<float>*)(((uint64_t)in_XMM2_Db << 32) | (uint32_t)((float)((int)local_128 / 2)));
            local_128 = -(float)((int)local_128 / 2);
            uStack_124 = in_XMM2_Db ^ 2147483648;
            uStack_120 = in_XMM2_Dc ^ 2147483648;
            uStack_11c = in_XMM2_Dd ^ 2147483648;
            local_60[0] = *local_128 * local_b0;
            local_70[0] = local_80 + *local_60;
            local_d8 = (unsigned __int128)((unsigned int)(float)((int)local_118 / 2));
            local_118 = -(float)((int)local_118 / 2);
            uStack_114 = 2147483648;
            uStack_110 = 2147483648;
            uStack_10c = 2147483648;
            local_40[0] = *local_118 * local_90;
            local_a0[0] = *local_70 + *local_40;
            local_40[0] = *local_128 * local_b0;
            local_60[0] = local_80 + *local_40;
            local_50[0] = (*((float)local_d8._0_4_)) * local_90;
            local_70[0] = *local_60 + *local_50;
            local_50[0] = (*((float)local_108)) * local_b0;
            local_40[0] = local_80 + *local_50;
            local_c0[0] = *local_118 * local_90;
            local_60[0] = *local_40 + *local_c0;
            local_c0[0] = (*((float)local_108)) * local_b0;
            local_50[0] = local_80 + *local_c0;
            local_140[0] = (*((float)local_d8._0_4_)) * local_90;
            local_40[0] = *local_50 + *local_140;
            AddTri((Vector3T<float>*)local_a0, (Vector3T<float>*)local_40, (DebugDataBasic*)local_70);
            AddTri((Vector3T<float>*)local_a0, (Vector3T<float>*)local_60, (DebugDataBasic*)local_40);
        }
    }

    // 0x1009c8280
    void DebugPrimitiveCollectorBasic::AddImage2D(const render::Texture* texture, const math::Rect<float>& rect,
                                                  const math::Vector2T<float>& vector21,
                                                  const math::Vector2T<float>& vector22, bool arg5, bool arg6,
                                                  bool arg7, const DebugDataBasic& debugDataBasic) {
        DebugImage2D<DebugDataBasic>* debugImage2D;
        DebugImage2D<DebugDataBasic> local_88;

        scoped_lock<std::mutex> local_38(field_3824);
        uint8_t* this_00 = &field_328;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_88 = DebugImage2D(texture, rect, vector21, vector22, arg5, arg6, arg7, debugDataBasic);
            this_00->push_back(local_88);
            debugImage2D = (DebugImage2D<DebugDataBasic>*)this_00->back();
            field_3824.AddPrimitive(*debugImage2D, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c84c0
    void DebugPrimitiveCollectorBasic::AddImageCube(const render::Texture* texture, const math::Rect<float>& rect,
                                                    bool arg3, bool arg4, const DebugDataBasic& debugDataBasic) {
        DebugImageCube<DebugDataBasic>* debugImageCube;
        uint64_t in_register_00000081;
        DebugImageCube<DebugDataBasic> local_88;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        scoped_lock<std::mutex> local_40(field_4144);
        uint8_t* this_00 = &field_360;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_88 = DebugImageCube(texture, rect, arg3, local_34._0_1_, debugDataBasic);
            this_00->push_back(local_88);
            debugImageCube = (DebugImageCube<DebugDataBasic>*)this_00->back();
            field_4144.AddPrimitive(*debugImageCube, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c8690
    void DebugPrimitiveCollectorBasic::AddImage3D(const render::Texture* texture, const math::Rect<float>& rect,
                                                  bool arg3, bool arg4, const DebugDataBasic& debugDataBasic) {
        DebugImage3D<DebugDataBasic>* debugImage3D;
        uint64_t in_register_00000081;
        DebugImage3D<DebugDataBasic> local_88;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        scoped_lock<std::mutex> local_40(field_4464);
        uint8_t* this_00 = &field_392;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_88 = DebugImage3D(texture, rect, arg3, local_34._0_1_, debugDataBasic);
            this_00->push_back(local_88);
            debugImage3D = (DebugImage3D<DebugDataBasic>*)this_00->back();
            field_4464.AddPrimitive(*debugImage3D, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c8860
    void DebugPrimitiveCollectorBasic::AddText(const math::Vector3T<float>& vector3, const eastl::string& str,
                                               const DebugDataBasic& debugDataBasic) {
        DebugText<DebugDataBasic>* debugText;
        ObjSpriteCacheKey local_78;

        scoped_lock<std::mutex> local_38(field_4784);
        uint8_t* this_00 = &field_424;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_78 = DebugText<DebugDataBasic>(vector3, str, debugDataBasic);
            this_00->push_back(local_78);
            debugText = (DebugText<DebugDataBasic>*)this_00->back();
            field_4784.AddPrimitive(*debugText, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c8a30
    void DebugPrimitiveCollectorBasic::AddText2D(const math::Vector2T<float>& vector2, const eastl::string& str,
                                                 const DebugDataBasic& debugDataBasic) {
        DebugText2D<DebugDataBasic>* debugText2D;
        LanguageMessage local_70;

        scoped_lock<std::mutex> local_38(field_5104);
        uint8_t* this_00 = &field_456;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_70 = DebugText2D<DebugDataBasic>(vector2, str, debugDataBasic);
            this_00->push_back(local_70);
            debugText2D = (DebugText2D<DebugDataBasic>*)this_00->back();
            field_5104.AddPrimitive(*debugText2D, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c8c00
    void DebugPrimitiveCollectorBasic::AddRect2D(const math::Rect<int>& rect, bool arg2,
                                                 const DebugDataBasic& debugDataBasic) {
        DebugRect2D<DebugDataBasic>* debugRect2D;
        DebugRect2D<DebugDataBasic> local_60;

        scoped_lock<std::mutex> local_38(field_5424);
        uint8_t* this_00 = &field_488;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_60 = DebugRect2D(rect, arg2, debugDataBasic);
            this_00->push_back(local_60);
            debugRect2D = (DebugRect2D<DebugDataBasic>*)this_00->back();
            field_5424.AddPrimitive(*debugRect2D, *(unsigned int*)(debugDataBasic + 4));
        }
    }

    // 0x1009c8df0
    void DebugPrimitiveCollectorBasic::AddCircle2D(const math::Vector2T<float>& vector2, float arg2, bool arg3,
                                                   const DebugDataBasic& debugDataBasic) {
        DebugCircle2D<DebugDataBasic>* debugCircle2D;
        DebugCircle2D<DebugDataBasic> local_60;

        scoped_lock<std::mutex> local_40(field_5744);
        uint8_t* this_00 = &field_520;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_60 = DebugCircle2D<DebugDataBasic>(vector2, arg2, arg3, debugDataBasic);
            this_00->push_back(local_60);
            debugCircle2D = (DebugCircle2D<DebugDataBasic>*)this_00->back();
            field_5744.AddPrimitive(*debugCircle2D, *(unsigned int*)(debugDataBasic + 4));
        }
    }

} // namespace jag
