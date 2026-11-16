// libs/oldscape/jagex3/dash3d/AnimFrameSet.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "AnimFrameSet.h"

namespace jag::oldscape::dash3d {
    // 0x10000c2f0: the linker folded this into jag::math::Rect<int>::SetX(int), which has identical code
    AnimFrameSet::EffectivelyPrivateConstructor::EffectivelyPrivateConstructor(int);

    // 0x10017ebb0: the linker folded this into CoordType<UICoordSpecializer>::CoordType(int), which has identical code
    AnimFrameSet::EffectivelyPrivateConstructor::EffectivelyPrivateConstructor(int);

    // 0x10034a130, 544 bytes, placed by class name and debug map
    // AnimFrameSet::Load(jagex3::Js5&, jagex3::Js5&, int, bool)
    AnimFrameSet* AnimFrameSet::Load(Js5* param_1, Js5* param_2, int param_3, bool param_4) {
        undefined* puVar2;
        long lVar3;
        long lVar4;
        undefined* puVar5;
        ushort* puVar6;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar7;
        AnimFrameSet* this_00;
        AnimFrameSet* this_01;
        int iVar9;
        vector* pvVar10;
        undefined3 in_register_00000081;
        bool bVar11;
        vector local_90[24];
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_78[16];
        shared_ptr local_68;
        XPlotBlender<graphics::XPlot_NormalAlpha> local_48[8];
        undefined4 local_34;

        local_34 = CONCAT31(in_register_00000081, param_4);
        pvVar10 = local_90;
        eastl::vector<int, BucketAllocatorEASTL>::vector();
        puVar2 = (undefined*)param_1->GetFileList(pvVar10, param_3);
        puVar5 = DataStatus::READY;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_78, (_func_decltype_nullptr*)pvVar10);
        bVar11 = puVar2 == puVar5;
        lVar3 = local_90->HeapBeginPtr();
        lVar4 = local_90->end();
        if (lVar3 != lVar4) {
            do {
                iVar9 = (int)(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_78;
                puVar5 = (undefined*)((shared_ptr*)param_1)->PeekFile(iVar9, param_3);
                if (puVar5 == DataStatus::READY) {
                    pPVar7 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                     (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_78);
                    puVar6 = (ushort*)pPVar7->GetDataPtr();
                } else {
                    puVar6 = (ushort*)0;
                }
                if (puVar6 == (ushort*)0) {
                    bVar11 = false;
                } else {
                    if ((char)local_34 == '\0') {
                        ((shared_ptr*)param_2)->PeekFile(iVar9, ((uint)*puVar6 | (*puVar6 & 255) << 16) >> 8);
                    } else {
                        ((shared_ptr*)param_2)->PeekFile(iVar9, 0);
                    }
                    pPVar7 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                 shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                     (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_78);
                    if (pPVar7->GetDataPtr() == 0) {
                        bVar11 = false;
                    }
                }
                lVar3 = lVar3 + 4;
            } while (lVar3 != lVar4);
        }
        this_01 = (AnimFrameSet*)this;
        if (bVar11) {
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_48, param_3);
            this_01 = (AnimFrameSet*)this;
            make_shared<AnimFrameSet, AnimFrameSet::EffectivelyPrivateConstructor>(
                (jag*)&local_68, (EffectivelyPrivateConstructor*)local_48);
            this_00 = (AnimFrameSet*)shared_ptr<AnimFrameSet>::operator->((shared_ptr<AnimFrameSet>*)&local_68);
            if (TryLoad(this_00, param_1, param_2, (bool)(char)local_34) == '\0') {
                new (this_01) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this_01, &local_68);
            }
            local_68.~shared_ptr();
        } else {
            new ((AnimFrameSet*)this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        local_78->~shared_ptr();
        local_90->~vector_set();
        return this_01;
    }

    // 0x10034a3f0, 880 bytes, placed by class name and debug map
    // AnimFrameSet::TryLoad(jagex3::Js5&, jagex3::Js5&, bool)
    uint AnimFrameSet::TryLoad(Js5* param_1, Js5* param_2, bool param_3) {
        shared_ptr sVar1;
        bool bVar2;
        int iVar3;
        undefined8 uVar4;
        uint* puVar5;
        PacketT<Array<unsigned char, eastl::allocator>>* this_00;
        ushort* puVar6;
        shared_ptr* this_01;
        PacketJ* pPVar7;
        AnimFrame* this_02;
        undefined7 in_register_00000009;
        uint uVar8;
        undefined1 auVar9[16];
        undefined4 in_stack_fffffffffffffe98;
        undefined1 in_stack_fffffffffffffe9c[12];
        AnimFrame local_158;
        BucketAllocatorEASTL local_d8[48];
        shared_ptr local_a8;
        vector local_98[24];
        shared_ptr local_80;
        uint* local_70;
        shared_ptr local_60;
        undefined4 local_3c;
        uint local_38;
        uint local_34;

        local_3c = (undefined4)CONCAT71(in_register_00000009, param_3);
        iVar3 = param_1->GetFileIdLimit(field_24);
        if (iVar3 < 0) {
            uVar4 = logger::default_logger();
            uVar8 = 0;
            logger::Logger::Log(uVar4, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "dash3d/AnimFrameSet.cpp",
                                92, "GetFileIdLimit returned -1");
        } else {
            set_max_size((long)iVar3, 3);
            eastl::vector<int, BucketAllocatorEASTL>::vector();
            auVar9 = param_1->GetFileList(local_98, field_24);
            if (auVar9._0_8_ == DataStatus::READY) {
                eastl::destruct<highlight::NpcUID*>((eastl*)&local_158, (NpcUID*)"EASTL map", auVar9._8_8_);
                eastl::map<int, shared_ptr<AnimBase>, eastl::less<int>, BucketAllocatorEASTL>::map(local_d8);
                puVar5 = (uint*)local_98->HeapBeginPtr();
                local_70 = (uint*)local_98->end();
                local_38 = (uint)CONCAT71((int7)((ulong)local_70 >> 8), puVar5 == local_70);
                if (puVar5 != local_70) {
                    do {
                        new (&local_60) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        ((shared_ptr*)param_1)
                            ->GetFile((int)&local_60, ((AnimFrameSet*)this)->field_24, (array*)(ulong)*puVar5);
                        this_00 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                          (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_60);
                        puVar6 = (ushort*)this_00->GetDataPtr();
                        local_34 = ((uint)*puVar6 | (*puVar6 & 255) << 16) >> 8;
                        this_01 = (shared_ptr*)
                            eastl::map<int, shared_ptr<AnimBase>, eastl::less<int>, BucketAllocatorEASTL>::operator[](
                                (map<int, shared_ptr<AnimBase>, eastl::less<int>, BucketAllocatorEASTL>*)local_d8,
                                (int*)&local_34);
                        bVar2 = operator==(this_01, (_func_decltype_nullptr*)0);
                        if (bVar2) {
                            new (&local_158) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                            iVar3 = (int)&local_158;
                            if ((char)local_3c == '\0') {
                                ((shared_ptr*)param_2)->PeekFile(iVar3, local_34);
                            } else {
                                ((shared_ptr*)param_2)->PeekFile(iVar3, 0);
                            }
                            bVar2 = operator==((shared_ptr*)&local_158, (_func_decltype_nullptr*)0);
                            if (bVar2) {
                                local_158.~shared_ptr();
                                local_60.~shared_ptr();
                                break;
                            }
                            pPVar7 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_158);
                            make_shared<AnimBase, int&, PacketJ<Array<unsigned char, eastl::allocator>>&>(
                                (jag*)&local_a8, (int*)&local_34, pPVar7);
                            shared_ptr<AnimBase>::operator=((shared_ptr<AnimBase>*)this_01, &local_a8);
                            local_a8.~shared_ptr();
                            local_158.~shared_ptr();
                        }
                        new (&local_80) shared_ptr<Decor>(&local_60);
                        sVar1._4_12_ = in_stack_fffffffffffffe9c;
                        sVar1._0_4_ = in_stack_fffffffffffffe98;
                        new (&local_158) AnimFrame(sVar1, &local_80);
                        this_02 = (AnimFrame*)Array<AnimFrame, eastl::allocator>::operator[](
                            (Array<AnimFrame, eastl::allocator>*)(AnimFrameSet*)this, (long)(int)*puVar5);
                        AnimFrame::operator=(this_02, &local_158);
                        local_158.~AnimFrame();
                        local_80.~shared_ptr();
                        uVar4 = local_60.~shared_ptr();
                        puVar5 = puVar5 + 1;
                        local_38 = (uint)CONCAT71((int7)((ulong)uVar4 >> 8), puVar5 == local_70);
                    } while (puVar5 != local_70);
                }
                local_d8->~map();
                uVar8 = local_38;
            } else {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/dash3d/AnimFrameSet.cpp",
                                    105, "data not ready yet. status: %u", *(undefined4*)(auVar9._0_8_ + 8));
                uVar8 = 0;
            }
            local_98->~vector_set();
        }
        return uVar8 & 4294967041;
    }

    // 0x10034a760, 32 bytes, base-object constructor, placed by class name and debug map
    // AnimFrameSet::AnimFrameSet(AnimFrameSet::EffectivelyPrivateConstructor)
    void AnimFrameSet::AnimFrameSet(undefined4 param_2) {
        new (this) Array<AnimFrame, eastl::allocator>();
        field_24 = param_2;
    }

    // 0x10034a790, 16 bytes, complete-object constructor, placed by class name and debug map
    // AnimFrameSet::AnimFrameSet(AnimFrameSet::EffectivelyPrivateConstructor): jumps straight to the base-object constructor

    // 0x10034ab90, 48 bytes, placed by class name and debug map
    // AnimFrameSet::ResizePrecise(int, int, int)
    void AnimFrameSet::ResizePrecise(int param_1, int param_2, int param_3) {
        AnimFrame* this_00;

        this_00 = (AnimFrame*)Array<AnimFrame, eastl::allocator>::operator[]((Array<AnimFrame, eastl::allocator>*)this,
                                                                             (long)param_1);
        this_00->ResizePrecise(param_2, param_3);
    }

    // 0x10034abc0, 32 bytes, placed by class name and debug map
    // AnimFrameSet::GetAnimateTransparencies(int)
    undefined1 AnimFrameSet::GetAnimateTransparencies(int param_1) {
        long lVar1;

        lVar1 =
            Array<AnimFrame, eastl::allocator>::operator[]((Array<AnimFrame, eastl::allocator>*)this, (long)param_1);
        return *(undefined1*)(lVar1 + 120);
    }

    // 0x10034abe0, 16 bytes, placed by class name and debug map
    // AnimFrameSet::GetNumFrames()
    void AnimFrameSet::GetNumFrames() {
        end();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x10034a350, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::AnimFrameSet>::type make_shared<oldscape::dash3d::AnimFrameSet, oldscape::dash3d::AnimFrameSet::EffectivelyPrivateConstructor>(oldscape::dash3d::AnimFrameSet::EffectivelyPrivateConstructor&&)
    jag*
    jag::make_shared<oldscape::dash3d::AnimFrameSet, oldscape::dash3d::AnimFrameSet::EffectivelyPrivateConstructor>(
        EffectivelyPrivateConstructor* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        AnimFrameSet* local_30[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::dash3d::AnimFrameSet,
                                        oldscape::dash3d::AnimFrameSet::EffectivelyPrivateConstructor>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::AnimFrameSet>, int,
                                   oldscape::dash3d::AnimFrameSet*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10034a990, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::AnimBase>::type make_shared<oldscape::dash3d::AnimBase, int&, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&>(int&, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&)
    jag* jag::make_shared<oldscape::dash3d::AnimBase, int&, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&>(
        int* param_1, PacketJ* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        AnimBase* local_38[2];

        pvVar1 = (void*)aligned_alloc(184, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::dash3d::AnimBase, int&,
                                        oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::AnimBase>, int, oldscape::dash3d::AnimBase*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag
