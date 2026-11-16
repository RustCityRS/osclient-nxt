// libs/math/rectanglepacker/RectanglePacker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    template <typename...> // 1 instantiations, e.g. <int, BucketAllocatorEASTL>
    class RectanglePacker {
    public:
        RectanglePacker(int, int);
        ~RectanglePacker();
        bool addRectangle(unsigned long&, Rect<int>&, int, int);
        void removeRectangle(unsigned long);
        ulong getBestFitIndex(int, int) const;
        RectanglePacker<int, BucketAllocatorEASTL>* getAvailableUsageRectangles() const;
        RectanglePacker<int, BucketAllocatorEASTL>*
        getFilledUsageRectanglesByID(eastl::vector<unsigned long, BucketAllocatorEASTL> const&) const;
    };

    // 0x1008c7dd0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // RectanglePacker<int, BucketAllocatorEASTL>::RectanglePacker(int, int): jumps straight to the base-object constructor

    // 0x1008c8000, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // RectanglePacker<int, BucketAllocatorEASTL>::~RectanglePacker(): jumps straight to the base-object destructor

    // 0x1008c89e0, 768 bytes, inline, placed by class name
    // RectanglePacker<int, BucketAllocatorEASTL>::addRectangle(unsigned long&, Rect<int>&, int, int)
    bool RectanglePacker<int, BucketAllocatorEASTL>::addRectangle(RectanglePacker<int, BucketAllocatorEASTL>* this,
                                                                  ulong* param_1, Rect* param_2, int param_3,
                                                                  int param_4) {
        bool bVar1;
        vector<Rect<int>, BucketAllocatorEASTL>* this_00;
        type* ptVar3;
        int* piVar4;
        vector* pvVar5;
        undefined8 uVar6;
        long lVar7;
        Rect<unsigned int>* this_01;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        undefined1 local_a0[16];
        undefined1 local_90[16];
        ulong local_80;
        ulong* local_70;
        ulong local_68;
        Rect<unsigned int> local_60[20];
        int local_4c;
        vector<Rect<int>, BucketAllocatorEASTL>* local_48;
        int local_34;

        if ((param_3 < 1) || (param_4 < 1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("width > 0 && height > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/rectanglepacker/"
                      "RectanglePacker.h",
                      63, "RectanglePacker.addRectangle - Unable to add rect, invalid dimensions (%ix%i)",
                      (ulong)(uint)param_3, (ulong)(uint)param_4);
        }
        local_68 = getBestFitIndex(this, param_3, param_4);
        if (local_68 == 18446744073709551615)
            goto LAB_1008c8cc8;
        local_48 = (vector<Rect<int>, BucketAllocatorEASTL>*)(this + 16);
        local_70 = param_1;
        ptVar3 = (type*)eastl::vector<Rect<int>, BucketAllocatorEASTL>::operator[](local_48, local_68);
        Rect<unsigned int>::Rect(local_60, (Rect*)ptVar3);
        piVar4 = (int*)local_60->second();
        iVar9 = *piVar4 - param_3;
        piVar4 = (int*)local_60->qw();
        iVar11 = *piVar4 - param_4;
        new (local_a0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(ptVar3);
        new (local_90) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(ptVar3);
        if (iVar9 < iVar11) {
            if (iVar9 < 1) {
                local_34 = 0;
                if (iVar11 < 1)
                    goto LAB_1008c8c13;
            LAB_1008c8b7a:
                pvVar5 = local_60->SSOBeginPtr(ptVar3);
                iVar9 = *(int*)pvVar5;
                piVar4 = (int*)local_60->y();
                iVar11 = *piVar4;
                piVar4 = (int*)local_60->second();
                local_4c = *piVar4;
                piVar4 = (int*)local_60->qw();
                iVar10 = *piVar4 - param_4;
                iVar8 = local_4c;
                goto LAB_1008c8c09;
            }
            pvVar5 = local_60->SSOBeginPtr(ptVar3);
            iVar9 = *(int*)pvVar5;
            piVar4 = (int*)local_60->y();
            local_34 = *piVar4;
            piVar4 = (int*)local_60->second();
            ptVar3 = (type*)(ulong)(uint)(iVar9 + param_3);
            uVar6 = new (local_a0) oldscape::dash3d::GridRect(iVar9 + param_3, local_34, *piVar4 - param_3, param_4);
            local_34 = (int)CONCAT71((int7)((ulong)uVar6 >> 8), 1);
            if (0 < iVar11)
                goto LAB_1008c8b7a;
        LAB_1008c8c13:
            bVar1 = false;
        } else {
            if (iVar9 < 1) {
                local_34 = 0;
            } else {
                pvVar5 = local_60->SSOBeginPtr(ptVar3);
                iVar9 = *(int*)pvVar5;
                piVar4 = (int*)local_60->y();
                local_34 = *piVar4;
                piVar4 = (int*)local_60->second();
                iVar8 = *piVar4;
                piVar4 = (int*)local_60->qw();
                ptVar3 = (type*)(ulong)(uint)(iVar9 + param_3);
                uVar6 = new (local_a0) oldscape::dash3d::GridRect(iVar9 + param_3, local_34, iVar8 - param_3, *piVar4);
                local_34 = (int)CONCAT71((int7)((ulong)uVar6 >> 8), 1);
            }
            if (iVar11 < 1)
                goto LAB_1008c8c13;
            pvVar5 = local_60->SSOBeginPtr(ptVar3);
            iVar9 = *(int*)pvVar5;
            piVar4 = (int*)local_60->y();
            iVar11 = *piVar4;
            piVar4 = (int*)local_60->qw();
            iVar10 = *piVar4 - param_4;
            iVar8 = param_3;
        LAB_1008c8c09:
            new (local_90) oldscape::dash3d::GridRect(iVar9, iVar11 + param_4, iVar8, iVar10);
            bVar1 = true;
        }
        this_00 = local_48;
        lVar7 = local_48->HeapBeginPtr();
        eastl::vector<Rect<int>, BucketAllocatorEASTL>::erase(this_00, (Rect*)(local_68 * 16 + lVar7));
        if ((char)local_34 != '\0') {
            eastl::vector<Rect<int>, BucketAllocatorEASTL>::push_back(local_48, (Rect*)local_a0);
        }
        if (bVar1) {
            eastl::vector<Rect<int>, BucketAllocatorEASTL>::push_back(local_48, (Rect*)local_90);
        }
        new (local_60) oldscape::ServerConnectionWorkItem(param_3);
        local_60->SetLevel(param_4);
        local_80 = (long)*(int*)(this + 12) + 1;
        *(int*)(this + 12) = (int)local_80;
        this_01 = (Rect<unsigned int>*)
            eastl::map<unsigned long, Rect<int>, eastl::less<unsigned long>, BucketAllocatorEASTL>::operator[](
                (map<unsigned long, Rect<int>, eastl::less<unsigned long>, BucketAllocatorEASTL>*)(this + 40),
                &local_80);
        Rect<unsigned int>::operator=(this_01, (Rect*)local_60);
        *(int*)(this + 8) = *(int*)(this + 8) - param_4 * param_3;
        *local_70 = (long)*(int*)(this + 12);
        Rect<unsigned int>::operator=((Rect<unsigned int>*)param_2, (Rect*)local_60);
    LAB_1008c8cc8:
        return local_68 != 18446744073709551615;
    }

    // 0x1008c9620, 272 bytes, inline, placed by class name
    // RectanglePacker<int, BucketAllocatorEASTL>::removeRectangle(unsigned long)
    void RectanglePacker<int, BucketAllocatorEASTL>::removeRectangle(RectanglePacker<int, BucketAllocatorEASTL>* this,
                                                                     ulong param_1) {
        int iVar1;
        bool bVar2;
        long lVar3;
        Rect* pRVar4;
        int* piVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        Rect* this_00;
        undefined8 local_50;
        eastl local_40[8];
        hashtable_iterator_base local_38[8];

        eastl::rbtree<unsigned long, eastl::pair<unsigned long const, Rect<int>>, eastl::less<unsigned long>,
                      BucketAllocatorEASTL, eastl::use_first<eastl::pair<unsigned long const, Rect<int>>>, true,
                      true>::find((ulong*)local_40);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=(local_40, local_38, extraout_RDX);
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("it != m_rectsFilled.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/rectanglepacker/"
                      "RectanglePacker.h",
                      130, "RectanglePacker.removeRectangle - unable to remove, no rectangle found with ID %i",
                      param_1);
        }
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=(local_40, local_38, extraout_RDX_00);
        if (bVar2) {
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_40);
            this_00 = (Rect*)(lVar3 + 8);
            pRVar4 = (Rect*)((this + 16))->HeapBeginPtr();
            ((this + 16))->insert(pRVar4, this_00);
            piVar5 = (int*)this_00->second();
            iVar1 = *piVar5;
            piVar5 = (int*)this_00->qw();
            *(int*)(this + 8) = *(int*)(this + 8) + iVar1 * *piVar5;
            new (&local_50) eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_40);
            eastl::rbtree<unsigned long, eastl::pair<unsigned long const, Rect<int>>, eastl::less<unsigned long>,
                          BucketAllocatorEASTL, eastl::use_first<eastl::pair<unsigned long const, Rect<int>>>, true,
                          true>::erase(local_38, this + 40, local_50);
        }
    }

    // 0x1008cf740, 48 bytes, base-object destructor, inline, placed by class name
    // RectanglePacker<int, BucketAllocatorEASTL>::~RectanglePacker()
    void
        RectanglePacker<int, BucketAllocatorEASTL>::~RectanglePacker(RectanglePacker<int, BucketAllocatorEASTL>* this) {
        ((this + 40))->~map();
        ((this + 16))->~vector();
    }

    // 0x1008d6b80, 176 bytes, base-object constructor, inline, placed by class name
    // RectanglePacker<int, BucketAllocatorEASTL>::RectanglePacker(int, int)
    void RectanglePacker<int, BucketAllocatorEASTL>::RectanglePacker(RectanglePacker<int, BucketAllocatorEASTL>* this,
                                                                     int param_1, int param_2) {
        NpcUID* extraout_RDX;
        eastl local_38[16];

        *(int*)this = param_1;
        *(int*)(this + 4) = param_2;
        *(int*)(this + 8) = param_2 * param_1;
        *(undefined4*)(this + 12) = 4294967295;
        eastl::vector<Rect<int>, BucketAllocatorEASTL>::vector();
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL map", extraout_RDX);
        eastl::map<int, shared_ptr<oldscape::dash3d::AnimBase>, eastl::less<int>, BucketAllocatorEASTL>::map(
            (BucketAllocatorEASTL*)(this + 40));
        new (local_38) oldscape::dash3d::GridRect(0, 0, param_1, param_2);
        ((this + 16))->push_back(local_38);
    }

    // 0x1008d98f0, 272 bytes, inline, placed by class name
    // RectanglePacker<int, BucketAllocatorEASTL>::getBestFitIndex(int, int) const
    ulong RectanglePacker<int, BucketAllocatorEASTL>::getBestFitIndex(RectanglePacker<int, BucketAllocatorEASTL>* this,
                                                                      int param_1, int param_2) {
        int iVar1;
        long lVar2;
        Minimap* this_00;
        int* piVar3;
        ulong uVar4;
        int iVar5;
        ulong uVar6;
        ulong uVar7;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_01;
        int iVar8;
        ulong local_48;
        int local_40;
        int local_34;

        this_01 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(this + 16);
        lVar2 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_01);
        iVar5 = 2;
        if (lVar2 == 0) {
            uVar7 = 18446744073709551615;
            local_48 = 0;
        } else {
            iVar8 = 2147483647;
            uVar7 = 18446744073709551615;
            uVar6 = 0;
            do {
                this_00 = (Minimap*)eastl::vector<Rect<int>, BucketAllocatorEASTL>::operator[](
                    (vector<Rect<int>, BucketAllocatorEASTL>*)this_01, uVar6);
                local_34 = this_00->GetPos();
                local_34 = local_34 - param_1;
                local_40 = this_00->GetLevel();
                local_40 = local_40 - param_2;
                iVar5 = 1;
                if (local_40 == 0 && local_34 == 0)
                    goto LAB_1008d99d0;
                piVar3 = std::min<int>(&local_34, &local_40);
                iVar5 = *piVar3;
                uVar4 = uVar7;
                iVar1 = iVar8;
                if (iVar5 < iVar8) {
                    uVar4 = uVar6;
                    iVar1 = iVar5;
                }
                if (-1 < iVar5) {
                    uVar7 = uVar4;
                    iVar8 = iVar1;
                }
                uVar6 = uVar6 + 1;
                uVar4 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_01);
            } while (uVar6 < uVar4);
            iVar5 = 2;
            uVar6 = local_48;
        LAB_1008d99d0:
            local_48 = uVar6;
        }
        if (iVar5 != 2) {
            uVar7 = local_48;
        }
        return uVar7;
    }

    // 0x1008daf10, 384 bytes, inline, placed by class name
    // RectanglePacker<int, BucketAllocatorEASTL>::getAvailableUsageRectangles() const
    RectanglePacker<int, BucketAllocatorEASTL>* RectanglePacker<int, BucketAllocatorEASTL>::getAvailableUsageRectangles(
        RectanglePacker<int, BucketAllocatorEASTL>* this) {
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00;
        int iVar1;
        ulong uVar2;
        long lVar3;
        Minimap* this_01;
        ulong uVar4;
        int* in_RSI;
        undefined1 auVar5[16];
        eastl local_58[20];
        float local_44;
        float local_40;
        float local_3c;

        this_00 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(in_RSI + 4);
        auVar5 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_58, (NpcUID*)"EASTL vector", auVar5._8_8_);
        new (this) eastl::vector<Rect<float>, BucketAllocatorEASTL>(auVar5._0_8_, local_58);
        uVar2 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
        reserve(uVar2);
        lVar3 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
        if (lVar3 != 0) {
            uVar2 = 0;
            do {
                this_01 = (Minimap*)eastl::vector<Rect<int>, BucketAllocatorEASTL>::operator[](
                    (vector<Rect<int>, BucketAllocatorEASTL>*)this_00, uVar2);
                iVar1 = this_01->GetPos();
                local_44 = (float)iVar1 / (float)*in_RSI;
                iVar1 = this_01->GetLevel();
                local_40 = (float)iVar1 / (float)in_RSI[1];
                iVar1 = this_01->GetX();
                local_3c = (float)iVar1 / (float)*in_RSI;
                iVar1 = this_01->GetZ();
                new (local_58) ImVec4(local_3c, (float)iVar1 / (float)in_RSI[1], local_44, local_40);
                push_back(local_58);
                uVar2 = uVar2 + 1;
                uVar4 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
            } while (uVar2 < uVar4);
        }
        return this;
    }

    // 0x1008db0d0, 496 bytes, inline, placed by class name
    // RectanglePacker<int, BucketAllocatorEASTL>::getFilledUsageRectanglesByID(eastl::vector<unsigned long, BucketAllocatorEASTL> const&) const
    RectanglePacker<int, BucketAllocatorEASTL>*
    RectanglePacker<int, BucketAllocatorEASTL>::getFilledUsageRectanglesByID(
        RectanglePacker<int, BucketAllocatorEASTL>* this, vector* param_1) {
        vector* pvVar1;
        bool bVar2;
        int iVar3;
        ulong uVar4;
        long lVar5;
        undefined8* puVar6;
        ulong uVar7;
        vector<eastl::pair<int, int>, eastl::allocator>* in_RDX;
        Minimap* this_00;
        undefined1 auVar8[16];
        undefined8 local_70;
        undefined8 local_68[2];
        vector* local_58;
        float local_44;
        float local_40;
        float local_3c;

        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)local_68, (NpcUID*)"EASTL vector", (NpcUID*)in_RDX);
        new (this) eastl::vector<Rect<float>, BucketAllocatorEASTL>(0, local_68);
        uVar4 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(in_RDX);
        reserve(uVar4);
        lVar5 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(in_RDX);
        if (lVar5 != 0) {
            local_58 = param_1 + 40;
            uVar4 = 0;
            do {
                pvVar1 = local_58;
                eastl::vector<unsigned long, BucketAllocatorEASTL>::operator[](
                    (vector<unsigned long, BucketAllocatorEASTL>*)in_RDX, uVar4);
                local_70 = eastl::rbtree<unsigned long, eastl::pair<unsigned long const, Rect<int>>,
                                         eastl::less<unsigned long>, BucketAllocatorEASTL,
                                         eastl::use_first<eastl::pair<unsigned long const, Rect<int>>>, true,
                                         true>::find((ulong*)pvVar1);
                auVar8 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                       eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                       true>::end();
                local_68[0] = auVar8._0_8_;
                bVar2 = eastl::operator!=((eastl*)&local_70, (hashtable_iterator_base*)local_68, auVar8._8_8_);
                if (!bVar2) {
                    puVar6 = (undefined8*)eastl::vector<unsigned long, BucketAllocatorEASTL>::operator[](
                        (vector<unsigned long, BucketAllocatorEASTL>*)in_RDX, uVar4);
                    /* WARNING: Subroutine does not return */
                    LogAssert("it != m_rectsFilled.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/"
                              "rectanglepacker/RectanglePacker.h",
                              170, "RectanglePacker.getFilledUsageRectanglesByID - no rectangle found with ID %i",
                              *puVar6);
                }
                lVar5 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_70);
                this_00 = (Minimap*)(lVar5 + 8);
                iVar3 = this_00->GetPos();
                pvVar1 = param_1;
                local_44 = (float)iVar3 / (float)*(int*)param_1;
                iVar3 = this_00->GetLevel();
                local_40 = (float)iVar3 / (float)*(int*)(pvVar1 + 4);
                iVar3 = this_00->GetX();
                local_3c = (float)iVar3 / (float)*(int*)pvVar1;
                iVar3 = this_00->GetZ();
                new (local_68) ImVec4(local_3c, (float)iVar3 / (float)*(int*)(pvVar1 + 4), local_44, local_40);
                push_back(local_68);
                uVar4 = uVar4 + 1;
                uVar7 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(in_RDX);
            } while (uVar4 < uVar7);
        }
        return this;
    }

} // namespace jag::math
