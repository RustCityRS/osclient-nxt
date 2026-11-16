// libs/graphics/primitive/debugbasic/DebugPrimitiveCollectorBasic.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.primitive.debugbasic

#include "DebugPrimitiveCollectorBasic.h"

namespace jag {
    // 0x103bc16a0, 2544 bytes, __common; zero-initialised
    DebugPrimitiveCollectorBasic::m_GlobalCollectors;

    // 0x1009c4ec0, 384 bytes, placed by class name and debug map
    // DebugPrimitiveCollectorBasic::CreateCollector(char const*, DebugPrimitiveCollector<DebugDataBasic>::Config&)
    void DebugPrimitiveCollectorBasic::CreateCollector(char* param_1, Config* param_2) {
        fixed_string local_98[8];
        fixed_string<char, 64, true, eastl::allocator> local_90[104];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_90, param_1);
        eastl::rbtree<
            eastl::fixed_string<char, 64, true, eastl::allocator>,
            eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator> const, DebugPrimitiveCollectorBasic*>,
            eastl::less<eastl::fixed_string<char, 64, true, eastl::allocator>>,
            eastl::fixed_node_allocator<144ul, 16ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator> const,
                                         DebugPrimitiveCollectorBasic*>>,
            true, true>::find(local_98);
        /* WARNING: Subroutine does not return */
        local_90->~fixed_string();
    }

    // 0x1009c5120, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugPrimitiveCollectorBasic::DebugPrimitiveCollectorBasic(DebugPrimitiveCollector<DebugDataBasic>::Config const&): jumps straight to the base-object constructor

    // 0x1009c51f0, 320 bytes, placed by class name and debug map
    // DebugPrimitiveCollectorBasic::DestroyCollector(char const*)
    void DebugPrimitiveCollectorBasic::DestroyCollector(char* param_1) {
        fixed_string local_90[8];
        fixed_string<char, 64, true, eastl::allocator> local_88[104];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_88, param_1);
        eastl::rbtree<
            eastl::fixed_string<char, 64, true, eastl::allocator>,
            eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator> const, DebugPrimitiveCollectorBasic*>,
            eastl::less<eastl::fixed_string<char, 64, true, eastl::allocator>>,
            eastl::fixed_node_allocator<144ul, 16ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator> const,
                                         DebugPrimitiveCollectorBasic*>>,
            true, true>::find(local_90);
        /* WARNING: Subroutine does not return */
        local_88->~fixed_string();
    }

    // 0x1009c53b0, 144 bytes, placed by class name and debug map
    // DebugPrimitiveCollectorBasic::DestroyAllCollectors()
    void DebugPrimitiveCollectorBasic::DestroyAllCollectors() {
        long lVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_30[8];
        hashtable_iterator_base local_28[8];

        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=(local_30, local_28, extraout_RDX);
        if (bVar2) {
            do {
                lVar1 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_30);
                safe_delete<game::VarDomainType>((VarDomainType**)(lVar1 + 104));
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_30);
                bVar2 = eastl::operator!=(local_30, local_28, extraout_RDX_00);
            } while (bVar2);
        }
        m_GlobalCollectors.clear();
    }

    // 0x1009c5470, 272 bytes, placed by class name and debug map
    // DebugPrimitiveCollectorBasic::GetCollector(char const*)
    void DebugPrimitiveCollectorBasic::GetCollector(char* param_1) {
        fixed_string local_90[8];
        fixed_string<char, 64, true, eastl::allocator> local_88[104];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_88, param_1);
        eastl::rbtree<
            eastl::fixed_string<char, 64, true, eastl::allocator>,
            eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator> const, DebugPrimitiveCollectorBasic*>,
            eastl::less<eastl::fixed_string<char, 64, true, eastl::allocator>>,
            eastl::fixed_node_allocator<144ul, 16ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<eastl::pair<eastl::fixed_string<char, 64, true, eastl::allocator> const,
                                         DebugPrimitiveCollectorBasic*>>,
            true, true>::find(local_90);
        /* WARNING: Subroutine does not return */
        local_88->~fixed_string();
    }

    // 0x1009c5580, 656 bytes, base-object constructor, placed by class name and debug map
    // DebugPrimitiveCollectorBasic::DebugPrimitiveCollectorBasic(DebugPrimitiveCollector<DebugDataBasic>::Config const&)
    void DebugPrimitiveCollectorBasic::DebugPrimitiveCollectorBasic(Config* param_1) {
        new (this) DebugPrimitiveCollector<DebugDataBasic>(param_1);
        field_0 = &PTR__DebugPrimitiveCollectorBasic_100f1ca60;
        new (&field_624, *(int*)param_1) DebugPrimitiveRenderGroups<DebugTri<DebugDataBasic>>();
        new (&field_944, *(int*)(param_1 + 4)) DebugPrimitiveRenderGroups<DebugLine<DebugDataBasic>>();
        new (&field_1264, *(int*)(param_1 + 8)) DebugPrimitiveRenderGroups<DebugEllipsoid<DebugDataBasic>>();
        new (&field_1584, *(int*)(param_1 + 12)) DebugPrimitiveRenderGroups<DebugCapsule<DebugDataBasic>>();
        new (&field_1904, *(int*)(param_1 + 16)) DebugPrimitiveRenderGroups<DebugCone<DebugDataBasic>>();
        new (&field_2224, *(int*)(param_1 + 20)) DebugPrimitiveRenderGroups<DebugCylinder<DebugDataBasic>>();
        new (&field_2544, *(int*)(param_1 + 24)) DebugPrimitiveRenderGroups<DebugAABB<DebugDataBasic>>();
        new (&field_2864, *(int*)(param_1 + 28)) DebugPrimitiveRenderGroups<DebugOBB<DebugDataBasic>>();
        new (&field_3184, *(int*)(param_1 + 32)) DebugPrimitiveRenderGroups<DebugFrustum<DebugDataBasic>>();
        new (&field_3504, *(int*)(param_1 + 36)) DebugPrimitiveRenderGroups<DebugPlane<DebugDataBasic>>();
        new (&field_3824, *(int*)(param_1 + 40)) DebugPrimitiveRenderGroups<DebugImage2D<DebugDataBasic>>();
        new (&field_4144, *(int*)(param_1 + 44)) DebugPrimitiveRenderGroups<DebugImageCube<DebugDataBasic>>();
        new (&field_4464, *(int*)(param_1 + 48)) DebugPrimitiveRenderGroups<DebugImage3D<DebugDataBasic>>();
        new (&field_4784, *(int*)(param_1 + 52)) DebugPrimitiveRenderGroups<DebugText<DebugDataBasic>>();
        new (&field_5104, *(int*)(param_1 + 56)) DebugPrimitiveRenderGroups<DebugText2D<DebugDataBasic>>();
        new (&field_5424, *(int*)(param_1 + 60)) DebugPrimitiveRenderGroups<DebugRect2D<DebugDataBasic>>();
        new (&field_5744, *(int*)(param_1 + 64)) DebugPrimitiveRenderGroups<DebugCircle2D<DebugDataBasic>>();
    }

    // 0x1009c5ea0, 240 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::Clear()
    void DebugPrimitiveCollectorBasic::Clear() {
        Clear();
        (&field_624)->Clear();
        (&field_944)->Clear();
        (&field_1264)->Clear();
        (&field_1584)->Clear();
        (&field_1904)->Clear();
        (&field_2224)->Clear();
        (&field_2544)->Clear();
        (&field_2864)->Clear();
        (&field_3184)->Clear();
        (&field_3504)->Clear();
        (&field_3824)->Clear();
        (&field_4144)->Clear();
        (&field_4464)->Clear();
        (&field_4784)->Clear();
        (&field_5104)->Clear();
        (&field_5424)->Clear();
        (&field_5744)->Clear();
    }

    // 0x1009c65c0, 192 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddTri(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddTri(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3,
                                              DebugDataBasic* param_4) {
        ulong uVar1;
        ulong uVar2;
        DebugTri* pDVar3;
        undefined1* this_00;
        DebugTri<DebugDataBasic> local_78[48];
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_624);
        this_00 = &field_8;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            DebugTri<DebugDataBasic>::DebugTri(local_78, param_1, param_2, param_3, param_4);
            this_00->push_back(local_78);
            pDVar3 = (DebugTri*)this_00->back();
            (&field_624, pDVar3, *(uint*)(param_4 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x1009c67c0, 192 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddLine(math::Vector3T<float> const&, math::Vector3T<float> const&, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddLine(Vector3T* param_1, Vector3T* param_2, DebugDataBasic* param_3) {
        ulong uVar1;
        ulong uVar2;
        DebugLine* pDVar3;
        undefined1* this_00;
        DebugEllipsoid<DebugDataBasic> local_60[32];
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_944);
        this_00 = &field_40;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            DebugEllipsoid<DebugDataBasic>::DebugEllipsoid(local_60, param_1, param_2, param_3);
            this_00->push_back(local_60);
            pDVar3 = (DebugLine*)this_00->back();
            (&field_944, pDVar3, *(uint*)(param_3 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x1009c6990, 208 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddSphere(math::Sphere const&, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddSphere(Sphere* param_1, DebugDataBasic* param_2) {
        undefined1* this_00;
        ulong uVar1;
        ulong uVar2;
        vector* pvVar3;
        DebugEllipsoid* pDVar4;
        undefined1* this_01;
        type* ptVar5;
        float fVar6;
        DebugEllipsoid<DebugDataBasic> local_68[32];
        Vector3T<float> local_48[16];
        scoped_lock<std::mutex> local_38[8];

        this_00 = &field_1264;
        ptVar5 = (type*)this_00;
        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)this_00);
        this_01 = &field_72;
        uVar1 = this_01->size();
        uVar2 = this_01->capacity();
        if (uVar1 < uVar2) {
            pvVar3 = param_1->SSOBeginPtr(ptVar5);
            fVar6 = (float)param_1->GetOutlineRadiusAdjustment();
            math::Vector3T<float>::Vector3T(local_48, fVar6);
            DebugEllipsoid<DebugDataBasic>::DebugEllipsoid(local_68, (Vector3T*)pvVar3, (Vector3T*)local_48, param_2);
            this_01->push_back(local_68);
            pDVar4 = (DebugEllipsoid*)this_01->back();
            this_00->AddPrimitive(pDVar4, *(uint*)(param_2 + 4));
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x1009c6b60, 192 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddEllipsoid(math::Vector3T<float> const&, math::Vector3T<float> const&, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddEllipsoid(Vector3T* param_1, Vector3T* param_2, DebugDataBasic* param_3) {
        ulong uVar1;
        ulong uVar2;
        DebugEllipsoid* pDVar3;
        undefined1* this_00;
        DebugEllipsoid<DebugDataBasic> local_60[32];
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_1264);
        this_00 = &field_72;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            DebugEllipsoid<DebugDataBasic>::DebugEllipsoid(local_60, param_1, param_2, param_3);
            this_00->push_back(local_60);
            pDVar3 = (DebugEllipsoid*)this_00->back();
            (&field_1264, pDVar3, *(uint*)(param_3 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x1009c6c20, 176 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddCapsule(math::Capsule3D const&, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddCapsule(Capsule3D* param_1, DebugDataBasic* param_2) {
        ulong uVar1;
        ulong uVar2;
        DebugCapsule* pDVar3;
        undefined1* this_00;
        DebugCapsule<DebugDataBasic> local_60[40];
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_1584);
        this_00 = &field_104;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            DebugCapsule<DebugDataBasic>::DebugCapsule(local_60, param_1, param_2);
            this_00->push_back(local_60);
            pDVar3 = (DebugCapsule*)this_00->back();
            (&field_1584, pDVar3, *(uint*)(param_2 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x1009c6e10, 224 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddCone(math::Matrix44T<float> const&, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddCone(Matrix44T* param_1, DebugDataBasic* param_2) {
        ulong uVar1;
        ulong uVar2;
        DebugCone* pDVar3;
        undefined1* this_00;
        scoped_lock<std::mutex> local_90[8];
        DebugCylinder<DebugDataBasic> local_88[80];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::scoped_lock<std::mutex>::scoped_lock(local_90, (mutex*)&field_1904);
        this_00 = &field_136;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            DebugCylinder<DebugDataBasic>::DebugCylinder(local_88, param_1, param_2);
            this_00->push_back(local_88);
            pDVar3 = (DebugCone*)this_00->back();
            (&field_1904, pDVar3, *(uint*)(param_2 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_90);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009c7040, 224 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddCylinder(math::Matrix44T<float> const&, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddCylinder(Matrix44T* param_1, DebugDataBasic* param_2) {
        ulong uVar1;
        ulong uVar2;
        DebugCylinder* pDVar3;
        undefined1* this_00;
        scoped_lock<std::mutex> local_90[8];
        DebugCylinder<DebugDataBasic> local_88[80];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::scoped_lock<std::mutex>::scoped_lock(local_90, (mutex*)&field_2224);
        this_00 = &field_168;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            DebugCylinder<DebugDataBasic>::DebugCylinder(local_88, param_1, param_2);
            this_00->push_back(local_88);
            pDVar3 = (DebugCylinder*)this_00->back();
            (&field_2224, pDVar3, *(uint*)(param_2 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_90);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009c7230, 208 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddAABB(math::AABB const&, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddAABB(AABB* param_1, DebugDataBasic* param_2) {
        ulong uVar1;
        ulong uVar2;
        DebugAABB* pDVar3;
        undefined1* this_00;
        scoped_lock<std::mutex> local_70[8];
        DebugAABB<DebugDataBasic> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::scoped_lock<std::mutex>::scoped_lock(local_70, (mutex*)&field_2544);
        this_00 = &field_200;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            DebugAABB<DebugDataBasic>::DebugAABB(local_68, param_1, param_2);
            this_00->push_back(local_68);
            pDVar3 = (DebugAABB*)this_00->back();
            (&field_2544, pDVar3, *(uint*)(param_2 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_70);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009c7430, 224 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddOBB(math::OBB const&, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddOBB(OBB* param_1, DebugDataBasic* param_2) {
        ulong uVar1;
        ulong uVar2;
        DebugOBB* pDVar3;
        undefined1* this_00;
        scoped_lock<std::mutex> local_a0[8];
        DebugOBB<DebugDataBasic> local_98[96];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::scoped_lock<std::mutex>::scoped_lock(local_a0, (mutex*)&field_2864);
        this_00 = &field_232;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            DebugOBB<DebugDataBasic>::DebugOBB(local_98, param_1, param_2);
            this_00->push_back(local_98);
            pDVar3 = (DebugOBB*)this_00->back();
            (&field_2864, pDVar3, *(uint*)(param_2 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_a0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009c7660, 336 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddAxes(math::Vector3T<float> const&, math::Matrix33T<float> const&, float, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddAxes(Vector3T* param_1, Matrix33T* param_2, float param_3,
                                               DebugDataBasic* param_4) {
        vector* pvVar1;
        Vector3T* pVVar2;
        undefined1 local_58[8];
        undefined8 local_50[2];
        undefined8 local_40;

        pvVar1 = param_2->SSOBeginPtr(param_1);
        local_40 = math::operator*((Vector3T*)pvVar1, param_3);
        local_50[0] = math::operator+(param_1, (Vector3T*)&local_40);
        new (local_58) oldscape::sidebars::SideBarData(-16776961, *(int*)(param_4 + 4));
        (*(code*)field_0[3])(this, param_1, local_50, (SideBarData*)local_58);
        pVVar2 = (Vector3T*)param_2->qw();
        local_40 = math::operator*(pVVar2, param_3);
        local_50[0] = math::operator+(param_1, (Vector3T*)&local_40);
        new (local_58) oldscape::sidebars::SideBarData(-16711936, *(int*)(param_4 + 4));
        (*(code*)field_0[3])(this, param_1, local_50, (SideBarData*)local_58);
        pVVar2 = (Vector3T*)param_2->second();
        local_40 = math::operator*(pVVar2, param_3);
        local_50[0] = math::operator+(param_1, (Vector3T*)&local_40);
        new (local_58) oldscape::sidebars::SideBarData(-65536, *(int*)(param_4 + 4));
        (*(code*)field_0[3])(this, param_1, local_50, (SideBarData*)local_58);
    }

    // 0x1009c77b0, 976 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddFrustum(math::Frustum const&, math::Matrix44T<float> const&, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddFrustum(Frustum* param_1, Matrix44T* param_2, DebugDataBasic* param_3) {
        undefined1* this_00;
        ulong uVar1;
        ulong uVar2;
        DebugFrustum* pDVar3;
        long lVar4;
        long lVar5;
        undefined8 local_1d0[2];
        scoped_lock<std::mutex> local_1c0[8];
        undefined8 local_1b8[2];
        undefined8 local_1a8[2];
        undefined8 local_198[2];
        undefined8 local_188[2];
        undefined8 local_178[2];
        undefined8 local_168[2];
        Frustum local_158[2];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::scoped_lock<std::mutex>::scoped_lock(local_1c0, (mutex*)&field_3184);
        this_00 = &field_264;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            new (local_158) DebugFrustum<DebugDataBasic>(param_1, param_3);
            this_00->push_back(local_158);
            pDVar3 = (DebugFrustum*)this_00->back();
            (&field_3184, pDVar3, *(uint*)(param_3 + 4))->AddPrimitive();
            if (((byte)param_3[4] & 2) == 0) {
                local_158[0].field_0 = param_1->GetNearTopLeft();
                local_1b8[0] = param_1->GetNearTopRight();
                local_1d0[0] = param_1->GetNearBottomRight();
                local_168[0] = param_1->GetNearBottomLeft();
                local_1a8[0] = param_1->GetFarTopLeft();
                local_198[0] = param_1->GetFarTopRight();
                local_188[0] = param_1->GetFarBottomRight();
                local_178[0] = param_1->GetFarBottomLeft();
                (*(code*)field_0[2])(this, local_158, local_1b8, local_168, param_3);
                (*(code*)field_0[2])(this, local_1b8, local_1d0, local_168, param_3);
                (*(code*)field_0[2])(this, local_198, local_1a8, local_178, param_3);
                (*(code*)field_0[2])(this, local_198, local_178, local_188, param_3);
                (*(code*)field_0[2])(this, local_1a8, local_158, local_178, param_3);
                (*(code*)field_0[2])(this, local_158, local_168, local_178, param_3);
                (*(code*)field_0[2])(this, local_198, local_188, local_168, param_3);
                (*(code*)field_0[2])(this, local_188, local_168, local_1b8, param_3);
                (*(code*)field_0[2])(this, local_158, local_1a8, local_198, param_3);
                (*(code*)field_0[2])(this, local_198, local_158, local_158, param_3);
                (*(code*)field_0[2])(this, local_168, local_188, local_178, param_3);
                (*(code*)field_0[2])(this, local_188, local_168, local_1d0, param_3);
            } else {
                local_158->GetBoundaryEdges();
                lVar4 = local_158->begin();
                lVar5 = local_158->end();
                for (; lVar4 != lVar5; lVar4 = lVar4 + 24) {
                    (*(code*)field_0[3])(this, lVar4, lVar4 + 12, param_3);
                }
            }
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_1c0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009c7d30, 1088 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddPlane(math::Vector3T<float> const&, math::PlaneT<float> const&, int, int, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddPlane(Vector3T* param_1, PlaneT* param_2, int param_3, int param_4,
                                                DebugDataBasic* param_5) {
        undefined1* this_00;
        Vector3T* pVVar2;
        ulong uVar3;
        ulong uVar4;
        DebugPlane* pDVar5;
        undefined8* puVar6;
        Vector3T* pVVar7;
        uint in_XMM2_Db;
        uint in_XMM2_Dc;
        uint in_XMM2_Dd;
        undefined8 local_140[2];
        float local_128;
        uint uStack_124;
        uint uStack_120;
        uint uStack_11c;
        float local_118;
        undefined4 uStack_114;
        undefined4 uStack_110;
        undefined4 uStack_10c;
        undefined8 local_108;
        undefined1 local_f8[32];
        undefined1 local_d8[16];
        undefined8 local_c0[2];
        undefined8 local_b0;
        undefined4 local_a8;
        undefined8 local_a0[2];
        undefined8 local_90;
        undefined4 local_88;
        undefined8 local_80[2];
        undefined8 local_70[2];
        undefined8 local_60[2];
        undefined8 local_50[2];
        undefined8 local_40[2];

        local_d8._0_8_ = &field_3504;
        local_128 = (float)param_3;
        local_118 = (float)param_4;
        local_108 = param_1;
        new ((local_f8 + 24)) std::scoped_lock<std::mutex>((mutex*)&field_3504);
        this_00 = &field_296;
        uVar3 = this_00->size();
        uVar4 = this_00->capacity();
        if (uVar3 < uVar4) {
            new (local_f8) DebugPlane<DebugDataBasic>(param_2, param_5);
            this_00->push_back(local_f8);
            pDVar5 = (DebugPlane*)this_00->back();
            pVVar2 = local_108;
            local_d8._0_8_->AddPrimitive(pDVar5, *(uint*)(param_5 + 4));
            local_f8._8_4_ = *(undefined4*)(param_2 + 8);
            local_f8._0_8_ = *(undefined8*)param_2;
            local_f8->Normalize();
            local_90 = math::Vector3Cross<float>((Vector3T*)PTR_RIGHT_100ee66f0, (Vector3T*)local_f8);
            puVar6 = (undefined8*)local_90.Normalize();
            local_a8 = *(undefined4*)(puVar6 + 1);
            local_b0 = *puVar6;
            local_80[0] = math::Vector3Cross<float>((Vector3T*)local_f8, (Vector3T*)&local_b0);
            puVar6 = (undefined8*)local_80->Normalize();
            local_88 = *(undefined4*)(puVar6 + 1);
            local_90 = *puVar6;
            pVVar7 = pVVar2;
            local_d8._0_4_ = param_2->SignedDistanceTo(pVVar2);
            local_70[0] = math::operator-((math*)local_f8, pVVar7);
            local_a0[0] = math::operator*((Vector3T*)local_70, (float)local_d8._0_4_);
            local_80[0] = math::operator+(pVVar2, (Vector3T*)local_a0);
            local_108 = (Vector3T*)CONCAT44(in_XMM2_Db, (float)((int)local_128 / 2));
            local_128 = -(float)((int)local_128 / 2);
            uStack_124 = in_XMM2_Db ^ 2147483648;
            uStack_120 = in_XMM2_Dc ^ 2147483648;
            uStack_11c = in_XMM2_Dd ^ 2147483648;
            local_60[0] = math::operator*((Vector3T*)&local_b0, local_128);
            local_70[0] = math::operator+((Vector3T*)local_80, (Vector3T*)local_60);
            local_d8 = ZEXT416((uint)(float)((int)local_118 / 2));
            local_118 = -(float)((int)local_118 / 2);
            uStack_114 = 2147483648;
            uStack_110 = 2147483648;
            uStack_10c = 2147483648;
            local_40[0] = math::operator*((Vector3T*)&local_90, local_118);
            local_a0[0] = math::operator+((Vector3T*)local_70, (Vector3T*)local_40);
            local_40[0] = math::operator*((Vector3T*)&local_b0, local_128);
            local_60[0] = math::operator+((Vector3T*)local_80, (Vector3T*)local_40);
            local_50[0] = math::operator*((Vector3T*)&local_90, (float)local_d8._0_4_);
            local_70[0] = math::operator+((Vector3T*)local_60, (Vector3T*)local_50);
            local_50[0] = math::operator*((Vector3T*)&local_b0, (float)local_108);
            local_40[0] = math::operator+((Vector3T*)local_80, (Vector3T*)local_50);
            local_c0[0] = math::operator*((Vector3T*)&local_90, local_118);
            local_60[0] = math::operator+((Vector3T*)local_40, (Vector3T*)local_c0);
            local_c0[0] = math::operator*((Vector3T*)&local_b0, (float)local_108);
            local_50[0] = math::operator+((Vector3T*)local_80, (Vector3T*)local_c0);
            local_140[0] = math::operator*((Vector3T*)&local_90, (float)local_d8._0_4_);
            local_40[0] = math::operator+((Vector3T*)local_50, (Vector3T*)local_140);
            (*(code*)((DebugPrimitiveCollectorBasic*)this)->field_0[2])((DebugPrimitiveCollectorBasic*)this, local_a0,
                                                                        local_40, local_70, param_5);
            (*(code*)((DebugPrimitiveCollectorBasic*)this)->field_0[2])((DebugPrimitiveCollectorBasic*)this, local_a0,
                                                                        local_60, local_40, param_5);
        }
        ((local_f8 + 24))->~scoped_lock();
    }

    // 0x1009c8280, 240 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddImage2D(render::Texture const*, math::Rect<float> const&, math::Vector2T<float> const&, math::Vector2T<float> const&, bool, bool, bool, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddImage2D(Texture* param_1, Rect* param_2, Vector2T* param_3, Vector2T* param_4,
                                                  bool param_5, bool param_6, bool param_7, DebugDataBasic* param_8) {
        ulong uVar1;
        ulong uVar2;
        DebugImage2D* pDVar3;
        undefined1* this_00;
        DebugImage2D<DebugDataBasic> local_88[56];
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_3824);
        this_00 = &field_328;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            DebugImage2D<DebugDataBasic>::DebugImage2D(local_88, param_1, param_2, param_3, param_4, param_5, param_6,
                                                       param_7, param_8);
            this_00->push_back(local_88);
            pDVar3 = (DebugImage2D*)this_00->back();
            (&field_3824, pDVar3, *(uint*)(param_8 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x1009c84c0, 208 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddImageCube(render::Texture const*, math::Rect<float> const&, bool, bool, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddImageCube(Texture* param_1, Rect* param_2, bool param_3, bool param_4,
                                                    DebugDataBasic* param_5) {
        ulong uVar1;
        ulong uVar2;
        DebugImageCube* pDVar3;
        undefined1* this_00;
        undefined7 in_register_00000081;
        DebugImageCube<DebugDataBasic> local_88[56];
        scoped_lock<std::mutex> local_40[12];
        undefined4 local_34;

        local_34 = (undefined4)CONCAT71(in_register_00000081, param_4);
        std::scoped_lock<std::mutex>::scoped_lock(local_40, (mutex*)&field_4144);
        this_00 = &field_360;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            DebugImageCube<DebugDataBasic>::DebugImageCube(local_88, param_1, param_2, param_3, local_34._0_1_,
                                                           param_5);
            this_00->push_back(local_88);
            pDVar3 = (DebugImageCube*)this_00->back();
            (&field_4144, pDVar3, *(uint*)(param_5 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_40);
    }

    // 0x1009c8690, 208 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddImage3D(render::Texture const*, math::Rect<float> const&, bool, bool, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddImage3D(Texture* param_1, Rect* param_2, bool param_3, bool param_4,
                                                  DebugDataBasic* param_5) {
        ulong uVar1;
        ulong uVar2;
        DebugImage3D* pDVar3;
        undefined1* this_00;
        undefined7 in_register_00000081;
        DebugImage3D<DebugDataBasic> local_88[56];
        scoped_lock<std::mutex> local_40[12];
        undefined4 local_34;

        local_34 = (undefined4)CONCAT71(in_register_00000081, param_4);
        std::scoped_lock<std::mutex>::scoped_lock(local_40, (mutex*)&field_4464);
        this_00 = &field_392;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            DebugImage3D<DebugDataBasic>::DebugImage3D(local_88, param_1, param_2, param_3, local_34._0_1_, param_5);
            this_00->push_back(local_88);
            pDVar3 = (DebugImage3D*)this_00->back();
            (&field_4464, pDVar3, *(uint*)(param_5 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_40);
    }

    // 0x1009c8860, 208 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddText(math::Vector3T<float> const&, eastl::string const&, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddText(Vector3T* param_1, basic_string* param_2, DebugDataBasic* param_3) {
        ulong uVar1;
        ulong uVar2;
        DebugText* pDVar3;
        undefined1* this_00;
        ObjSpriteCacheKey local_78[2];
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_4784);
        this_00 = &field_424;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            new (local_78) DebugText<DebugDataBasic>(param_1, param_2, param_3);
            this_00->push_back(local_78);
            local_78->~ObjSpriteCacheKey();
            pDVar3 = (DebugText*)this_00->back();
            (&field_4784, pDVar3, *(uint*)(param_3 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x1009c8a30, 208 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddText2D(math::Vector2T<float> const&, eastl::string const&, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddText2D(Vector2T* param_1, basic_string* param_2, DebugDataBasic* param_3) {
        ulong uVar1;
        ulong uVar2;
        DebugText2D* pDVar3;
        undefined1* this_00;
        LanguageMessage local_70[3];
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_5104);
        this_00 = &field_456;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            new (local_70) DebugText2D<DebugDataBasic>(param_1, param_2, param_3);
            this_00->push_back(local_70);
            local_70->~LanguageMessage();
            pDVar3 = (DebugText2D*)this_00->back();
            (&field_5104, pDVar3, *(uint*)(param_3 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x1009c8c00, 192 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddRect2D(math::Rect<int> const&, bool, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddRect2D(Rect* param_1, bool param_2, DebugDataBasic* param_3) {
        ulong uVar1;
        ulong uVar2;
        DebugRect2D* pDVar3;
        undefined1* this_00;
        DebugRect2D<DebugDataBasic> local_60[32];
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_5424);
        this_00 = &field_488;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            DebugRect2D<DebugDataBasic>::DebugRect2D(local_60, param_1, param_2, param_3);
            this_00->push_back(local_60);
            pDVar3 = (DebugRect2D*)this_00->back();
            (&field_5424, pDVar3, *(uint*)(param_3 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x1009c8df0, 192 bytes, placed by class name
    // DebugPrimitiveCollectorBasic::AddCircle2D(math::Vector2T<float> const&, float, bool, DebugDataBasic const&)
    void DebugPrimitiveCollectorBasic::AddCircle2D(Vector2T* param_1, float param_2, bool param_3,
                                                   DebugDataBasic* param_4) {
        ulong uVar1;
        ulong uVar2;
        DebugCircle2D* pDVar3;
        undefined1* this_00;
        DebugCircle2D<DebugDataBasic> local_60[24];
        scoped_lock<std::mutex> local_40[12];

        std::scoped_lock<std::mutex>::scoped_lock(local_40, (mutex*)&field_5744);
        this_00 = &field_520;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            DebugCircle2D<DebugDataBasic>::DebugCircle2D(local_60, param_1, param_2, param_3, param_4);
            this_00->push_back(local_60);
            pDVar3 = (DebugCircle2D*)this_00->back();
            (&field_5744, pDVar3, *(uint*)(param_4 + 4))->AddPrimitive();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_40);
    }

} // namespace jag
