// libs/math/rectanglepacker/RectanglePacker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    template <typename...> // 1 instantiations, e.g. <int, BucketAllocatorEASTL>
    class RectanglePacker {
    public:
        RectanglePacker(int arg1, int arg2);
        ~RectanglePacker();
        bool addRectangle(unsigned long& arg1, Rect<int>& rect, int arg3, int arg4);
        void removeRectangle(unsigned long arg1);
        unsigned long getBestFitIndex(int arg1, int arg2) const;
        RectanglePacker<int>* getAvailableUsageRectangles() const;
        RectanglePacker<int>* getFilledUsageRectanglesByID(const eastl::vector<unsigned long>& arg1) const;
    };

    // 0x1008c89e0
    bool RectanglePacker<int, BucketAllocatorEASTL>::addRectangle(unsigned long& arg1, Rect<int>& rect, int arg3,
                                                                  int arg4) {
        bool bVar1;
        uint64_t extraout_RAX;
        uint64_t extraout_RAX_00;
        int iVar5;
        int arg4_00;
        uint8_t local_a0[16];
        uint8_t local_90[16];
        int local_4c;
        int local_34;

        if ((arg3 < 1) || (arg4 < 1)) {
            LogAssert("width > 0 && height > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/rectanglepacker/"
                      "RectanglePacker.h",
                      63, "RectanglePacker.addRectangle - Unable to add rect, invalid dimensions (%ix%i)",
                      (unsigned long)(unsigned int)arg3, (unsigned long)(unsigned int)arg4);
        }
        unsigned long local_68 = getBestFitIndex(this, arg3, arg4);
        if (local_68 == 18446744073709551615)
            goto LAB_1008c8cc8;
        vector<Rect<int>, BucketAllocatorEASTL>* local_48 = (vector<Rect<int>, BucketAllocatorEASTL>*)(this + 16);
        unsigned long* local_70 = arg1;
        Rect<int>* rect_00 = (Rect<int>*)(*local_48)[local_68];
        Rect<unsigned int> local_60(*rect_00);
        auto piVar3 = local_60.second();
        int iVar6 = *piVar3 - arg3;
        piVar3 = (int*)local_60.qw();
        int iVar7 = *piVar3 - arg4;
        new (local_a0) shared_ptr();
        new (local_90) shared_ptr();
        if (iVar6 < iVar7) {
            if (iVar6 < 1) {
                local_34 = 0;
                if (iVar7 < 1)
                    goto LAB_1008c8c13;
            LAB_1008c8b7a:
                piVar3 = (int*)local_60.SSOBeginPtr();
                iVar6 = *piVar3;
                piVar3 = (int*)local_60.y();
                iVar7 = *piVar3;
                piVar3 = (int*)local_60.second();
                local_4c = *piVar3;
                piVar3 = (int*)local_60.qw();
                arg4_00 = *piVar3 - arg4;
                iVar5 = local_4c;
                goto LAB_1008c8c09;
            }
            piVar3 = (int*)local_60.SSOBeginPtr();
            iVar6 = *piVar3;
            piVar3 = (int*)local_60.y();
            local_34 = *piVar3;
            piVar3 = (int*)local_60.second();
            new (local_a0) oldscape::dash3d::GridRect(iVar6 + arg3, local_34, *piVar3 - arg3, arg4);
            local_34 = (int)(((uint64_t)((int64_t)((unsigned long)extraout_RAX >> 8)) << 8) | (uint8_t)1);
            if (0 < iVar7)
                goto LAB_1008c8b7a;
        LAB_1008c8c13:
            bVar1 = false;
        } else {
            if (iVar6 < 1) {
                local_34 = 0;
            } else {
                piVar3 = (int*)local_60.SSOBeginPtr();
                iVar6 = *piVar3;
                piVar3 = (int*)local_60.y();
                local_34 = *piVar3;
                piVar3 = (int*)local_60.second();
                iVar5 = *piVar3;
                piVar3 = (int*)local_60.qw();
                new (local_a0) oldscape::dash3d::GridRect(iVar6 + arg3, local_34, iVar5 - arg3, *piVar3);
                local_34 = (int)(((uint64_t)((int64_t)((unsigned long)extraout_RAX_00 >> 8)) << 8) | (uint8_t)1);
            }
            if (iVar7 < 1)
                goto LAB_1008c8c13;
            piVar3 = (int*)local_60.SSOBeginPtr();
            iVar6 = *piVar3;
            piVar3 = (int*)local_60.y();
            iVar7 = *piVar3;
            piVar3 = (int*)local_60.qw();
            arg4_00 = *piVar3 - arg4;
            iVar5 = arg3;
        LAB_1008c8c09:
            new (local_90) oldscape::dash3d::GridRect(iVar6, iVar7 + arg4, iVar5, arg4_00);
            bVar1 = true;
        }
        vector<Rect<int>, BucketAllocatorEASTL>* this_00 = local_48;
        long lVar4 = local_48->HeapBeginPtr();
        this_00->erase((local_68 * 16 + lVar4));
        if ((char)local_34 != '\0') {
            local_48->push_back(*local_a0);
        }
        if (bVar1) {
            local_48->push_back(*local_90);
        }
        local_60 = oldscape::ServerConnectionWorkItem(arg3);
        local_60.SetLevel(arg4);
        unsigned long local_80 = (long)*(int*)(this + 12) + 1;
        *(int*)(this + 12) = (int)local_80;
        Rect<unsigned int>* this_01 = (Rect<unsigned int>*)(*((this + 40)))[local_80];
        *this_01 = local_60;
        *(int*)(this + 8) = *(int*)(this + 8) - arg4 * arg3;
        *local_70 = (long)*(int*)(this + 12);
        rect = local_60;
    LAB_1008c8cc8:
        return local_68 != 18446744073709551615;
    }

    // 0x1008c9620
    void RectanglePacker<int, BucketAllocatorEASTL>::removeRectangle(unsigned long arg1) {
        int iVar1;
        long lVar3;
        Rect<int>* rect1;
        int* piVar4;
        Rect<int>* rect2;
        rbtree_iterator<eastl::pair<unsigned long const, Rect<int> _>,
                        eastl::pair<unsigned long const, Rect<int> _> const*,
                        eastl::pair<unsigned long const, Rect<int> _> const&>* local_50;
        ReturnValue local_38;

        ReturnValue local_40 = ((this + 40))->find(arg1);
        local_38.end();
        if (!(local_40 != local_38)) {
            LogAssert("it != m_rectsFilled.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/rectanglepacker/"
                      "RectanglePacker.h",
                      130, "RectanglePacker.removeRectangle - unable to remove, no rectangle found with ID %i", arg1);
        }
        local_38.end();
        if (local_40 != local_38) {
            lVar3 = *local_40;
            rect2 = (Rect<int>*)(lVar3 + 8);
            rect1 = (Rect<int>*)((this + 16))->HeapBeginPtr();
            ((this + 16))->insert(rect1, *rect2);
            piVar4 = (int*)rect2->second();
            iVar1 = *piVar4;
            piVar4 = (int*)rect2->qw();
            *(int*)(this + 8) = *(int*)(this + 8) + iVar1 * *piVar4;
            new (&local_50) eastl::ListIterator(&local_40);
            local_38 = ((this + 40))->erase(local_50);
        }
    }

    // 0x1008cf740
    RectanglePacker<int, BucketAllocatorEASTL>::~RectanglePacker() {
        ((this + 40))->~map();
        ((this + 16))->~vector();
    }

    // 0x1008d6b80
    RectanglePacker<int, BucketAllocatorEASTL>::RectanglePacker(int arg1, int arg2) {

        *(int*)this = arg1;
        *(int*)(this + 4) = arg2;
        *(int*)(this + 8) = arg2 * arg1;
        *(uint32_t*)(this + 12) = 4294967295;
        new ((this + 16)) eastl::vector<Rect<int>, BucketAllocatorEASTL>();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        new ((this + 40)) eastl::map(local_38);
        eastl local_38(0, 0, arg1, arg2);
        ((this + 16))->push_back(local_38);
    }

    // 0x1008d98f0
    unsigned long RectanglePacker<int, BucketAllocatorEASTL>::getBestFitIndex(int arg1, int arg2) const {
        int iVar1;
        Minimap* this_00;
        int* piVar3;
        unsigned long uVar4;
        unsigned long arg1_00;
        unsigned long uVar6;
        int iVar7;
        unsigned long local_48;
        int local_40;
        int local_34;

        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_01 =
            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(this + 16);
        long lVar2 = this_01->size();
        int iVar5 = 2;
        if (lVar2 == 0) {
            uVar6 = 18446744073709551615;
            local_48 = 0;
        } else {
            iVar7 = 2147483647;
            uVar6 = 18446744073709551615;
            arg1_00 = 0;
            do {
                this_00 = (Minimap*)(*this_01)[arg1_00];
                local_34 = this_00->GetPos();
                local_34 = local_34 - arg1;
                local_40 = this_00->GetLevel();
                local_40 = local_40 - arg2;
                iVar5 = 1;
                if (local_40 == 0 && local_34 == 0)
                    goto LAB_1008d99d0;
                piVar3 = std::min<int>(local_34, local_40);
                iVar5 = *piVar3;
                uVar4 = uVar6;
                iVar1 = iVar7;
                if (iVar5 < iVar7) {
                    uVar4 = arg1_00;
                    iVar1 = iVar5;
                }
                if (-1 < iVar5) {
                    uVar6 = uVar4;
                    iVar7 = iVar1;
                }
                arg1_00 = arg1_00 + 1;
                uVar4 = this_01->size();
            } while (arg1_00 < uVar4);
            iVar5 = 2;
            arg1_00 = local_48;
        LAB_1008d99d0:
            local_48 = arg1_00;
        }
        if (iVar5 != 2) {
            uVar6 = local_48;
        }
        return uVar6;
    }

    // 0x1008daf10
    RectanglePacker<int, BucketAllocatorEASTL>*
    RectanglePacker<int, BucketAllocatorEASTL>::getAvailableUsageRectangles() const {
        int iVar1;
        Minimap* this_01;
        unsigned long uVar4;
        int* in_RSI;
        eastl local_58;
        float local_44;
        float local_40;
        float local_3c;

        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00 =
            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(in_RSI + 4);
        unsigned long uVar2 = this_00->size();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_58);
        new (this) eastl::vector<Rect<float>, BucketAllocatorEASTL>(uVar2, local_58);
        uVar2 = this_00->size();
        reserve(uVar2);
        if (this_00->size() != 0) {
            uVar2 = 0;
            do {
                this_01 = (Minimap*)(*this_00)[uVar2];
                iVar1 = this_01->GetPos();
                local_44 = (float)iVar1 / (float)*in_RSI;
                iVar1 = this_01->GetLevel();
                local_40 = (float)iVar1 / (float)in_RSI[1];
                iVar1 = this_01->GetX();
                local_3c = (float)iVar1 / (float)*in_RSI;
                iVar1 = this_01->GetZ();
                local_58 = ImVec4(local_3c, (float)iVar1 / (float)in_RSI[1], local_44, local_40);
                push_back(local_58);
                uVar2 = uVar2 + 1;
                uVar4 = this_00->size();
            } while (uVar2 < uVar4);
        }
        return this;
    }

    // 0x1008db0d0
    RectanglePacker<int, BucketAllocatorEASTL>*
    RectanglePacker<int, BucketAllocatorEASTL>::getFilledUsageRectanglesByID(
        const eastl::vector<unsigned long, BucketAllocatorEASTL>& arg1) const {
        rbtree<unsigned long, eastl::pair<unsigned long const, Rect<int>>, eastl::less<unsigned long>,
               BucketAllocatorEASTL, eastl::use_first<eastl::pair<unsigned long const, Rect<int>>>, true, true>*
            this_00;
        int iVar3;
        unsigned long* arg1_00;
        uint64_t* puVar6;
        unsigned long uVar7;
        vector<eastl::pair<int, int>>* in_RDX;
        Minimap* this_01;
        uint64_t local_70;
        uint64_t local_68[2];
        rbtree<unsigned long, eastl::pair<unsigned long const, Rect<int>>, eastl::less<unsigned long>,
               BucketAllocatorEASTL, eastl::use_first<eastl::pair<unsigned long const, Rect<int>>>, true, true>*
            local_58;
        float local_44;
        float local_40;
        float local_3c;

        local_68->destruct<oldscape::highlight::NpcUID*>();
        new (this) eastl::vector<Rect<float>, BucketAllocatorEASTL>(0, *local_68);
        unsigned long uVar4 = in_RDX->size();
        reserve(uVar4);
        long lVar5 = in_RDX->size();
        if (lVar5 != 0) {
            local_58 = (rbtree<unsigned long, eastl::pair<unsigned long const, Rect<int>>, eastl::less<unsigned long>,
                               BucketAllocatorEASTL, eastl::use_first<eastl::pair<unsigned long const, Rect<int>>>,
                               true, true>*)(arg1 + 40);
            uVar4 = 0;
            do {
                this_00 = local_58;
                arg1_00 = (unsigned long*)(*in_RDX)[uVar4];
                local_70 = this_00->find(*arg1_00);
                local_68[0] = this_00->end();
                if (local_70 != *local_68 == '\0') {
                    puVar6 = (uint64_t*)(*in_RDX)[uVar4];
                    LogAssert("it != m_rectsFilled.end()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/"
                              "rectanglepacker/RectanglePacker.h",
                              170, "RectanglePacker.getFilledUsageRectanglesByID - no rectangle found with ID %i",
                              *puVar6);
                }
                lVar5 = *local_70;
                this_01 = (Minimap*)(lVar5 + 8);
                iVar3 = this_01->GetPos();
                local_44 = (float)iVar3 / (float)*(int*)arg1;
                iVar3 = this_01->GetLevel();
                local_40 = (float)iVar3 / (float)*(int*)(arg1 + 4);
                iVar3 = this_01->GetX();
                local_3c = (float)iVar3 / (float)*(int*)arg1;
                iVar3 = this_01->GetZ();
                new (local_68) ImVec4(local_3c, (float)iVar3 / (float)*(int*)(arg1 + 4), local_44, local_40);
                push_back(*local_68);
                uVar4 = uVar4 + 1;
                uVar7 = in_RDX->size();
            } while (uVar4 < uVar7);
        }
        return this;
    }

} // namespace jag::math
