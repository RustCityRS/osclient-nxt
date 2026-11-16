// libs/oldscape/jagex3/dash3d/AnimFrameSet.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "AnimFrameSet.h"

namespace jag::oldscape::dash3d {
    // 0x10000c2f0: AnimFrameSet::EffectivelyPrivateConstructor::EffectivelyPrivateConstructor(int) has the same machine code as jag::math::Rect<int>::SetX(int)

    // 0x10034a130
    AnimFrameSet* AnimFrameSet::Load(jagex3::Js5& js51, jagex3::Js5& js52, int arg3, bool arg4) {
        unsigned int arg2;
        unsigned short* puVar6;
        PacketT<Array<unsigned char>>* pPVar7;
        AnimFrameSet* this_00;
        uint32_t in_register_00000081;
        ReturnValue local_68;
        XPlotBlender<graphics::XPlot_NormalAlpha> local_48;

        uint32_t local_34 = (((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4);
        vector<int, BucketAllocatorEASTL> local_90;
        auto puVar2 = js51.GetFileList(local_90, arg3);
        uint8_t* puVar5 = DataStatus::READY;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_78;
        bool bVar9 = puVar2 == puVar5;
        auto piVar3 = local_90.HeapBeginPtr();
        auto piVar4 = local_90.end();
        if (piVar3 != piVar4) {
            do {
                puVar5 = (uint8_t*)js51.PeekFile(local_78, arg3, *piVar3);
                if (puVar5 == DataStatus::READY) {
                    pPVar7 = (PacketT<Array<unsigned char>>*)local_78.operator->();
                    puVar6 = (unsigned short*)pPVar7->GetDataPtr();
                } else {
                    puVar6 = nullptr;
                }
                if (puVar6 == nullptr) {
                    bVar9 = false;
                } else {
                    arg2 = ((unsigned int)*puVar6 | (*puVar6 & 255) << 16) >> 8;
                    if ((char)local_34 == '\0') {
                        js52.PeekFile(local_78, arg2, 0);
                    } else {
                        js52.PeekFile(local_78, 0, arg2);
                    }
                    pPVar7 = (PacketT<Array<unsigned char>>*)local_78.operator->();
                    if (pPVar7->GetDataPtr() == 0) {
                        bVar9 = false;
                    }
                }
                piVar3 = piVar3 + 1;
            } while (piVar3 != piVar4);
        }
        AnimFrameSet* this_01 = this;
        if (bVar9) {
            local_48.XPlotBlender<int>(arg3);
            this_01 = this;
            make_shared<AnimFrameSet, AnimFrameSet::EffectivelyPrivateConstructor>(&local_68, &local_48);
            this_00 = (AnimFrameSet*)local_68.operator->();
            if (TryLoad(this_00, js51, js52, (bool)(char)local_34) == '\0') {
                new (this_01) shared_ptr();
            } else {
                this_01->shared_ptr<FileRSevenDebugPresetProvider, void>(local_68);
            }
        } else {
            new (this) shared_ptr();
        }
        return this_01;
    }

    // 0x10034a3f0
    unsigned int AnimFrameSet::TryLoad(jagex3::Js5& js51, jagex3::Js5& js52, bool arg3) {
        uint8_t* puVar3;
        Logger* pLVar4;
        int* piVar5;
        PacketT<Array<unsigned char>>* this_00;
        unsigned short* puVar6;
        shared_ptr<configdecoder::ObjType>* objType;
        PacketJ<Array<unsigned char> _>* packetJ;
        AnimFrame* this_01;
        uint64_t extraout_RAX;
        uint64_t in_register_00000009;
        unsigned int uVar7;
        AnimFrame local_158;
        map<int, shared_ptr<AnimBase>, eastl::less<int>, BucketAllocatorEASTL> local_d8;
        ReturnValue local_a8;
        vector<int, BucketAllocatorEASTL> local_98;
        shared_ptr<Decor> local_80;
        int* local_70;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_60;
        unsigned int local_38;
        unsigned int local_34;

        uint32_t local_3c = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        int iVar2 = js51.GetFileIdLimit(field_24);
        if (iVar2 < 0) {
            pLVar4 = logger::default_logger();
            uVar7 = 0;
            pLVar4->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                        "AnimFrameSet.cpp",
                        92, "GetFileIdLimit returned -1");
        } else {
            set_max_size((long)iVar2, 3);
            local_98 = eastl::vector<int, BucketAllocatorEASTL>();
            puVar3 = (uint8_t*)js51.GetFileList(local_98, field_24);
            if (puVar3 == DataStatus::READY) {
                local_158.destruct<highlight::NpcUID*>();
                local_d8 = eastl::map(local_158);
                piVar5 = (int*)local_98.HeapBeginPtr();
                local_70 = (int*)local_98.end();
                local_38 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)local_70 >> 8)) << 8) |
                                          (uint8_t)(piVar5 == local_70));
                if (piVar5 != local_70) {
                    do {
                        local_60 = shared_ptr();
                        js51.GetFile(local_60, field_24, *piVar5, nullptr);
                        this_00 = (PacketT<Array<unsigned char>>*)local_60.operator->();
                        puVar6 = (unsigned short*)this_00->GetDataPtr();
                        local_34 = ((unsigned int)*puVar6 | (*puVar6 & 255) << 16) >> 8;
                        objType = &local_d8[local_34];
                        if (*objType == nullptr) {
                            local_158 = shared_ptr();
                            if ((char)local_3c == '\0') {
                                js52.PeekFile(local_158, local_34, 0);
                            } else {
                                js52.PeekFile(local_158, 0, local_34);
                            }
                            if (local_158 == nullptr) {
                                break;
                            }
                            packetJ = (PacketJ<Array<unsigned char> _>*)*local_158;
                            make_shared<AnimBase, int&, PacketJ<Array<unsigned char>>&>(&local_a8, (int*)&local_34,
                                                                                        packetJ);
                            *objType = local_a8;
                        }
                        local_80 = shared_ptr(&local_60);
                        local_158 = AnimFrame(&local_80, *objType);
                        this_01 = (AnimFrame*)(*this)[(long)*piVar5];
                        *this_01 = local_158;
                        piVar5 = piVar5 + 1;
                        local_38 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)extraout_RAX >> 8)) << 8) |
                                                  (uint8_t)(piVar5 == local_70));
                    } while (piVar5 != local_70);
                }
                uVar7 = local_38;
            } else {
                pLVar4 = logger::default_logger();
                pLVar4->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "dash3d/AnimFrameSet.cpp",
                            105, "data not ready yet. status: %u", *(uint32_t*)(puVar3 + 8));
                uVar7 = 0;
            }
        }
        return uVar7 & 4294967041;
    }

    // 0x10034a760
    AnimFrameSet::AnimFrameSet(AnimFrameSet::EffectivelyPrivateConstructor effectivelyPrivateConstructor)
        : Array<AnimFrame>() {
        field_24 = (int)effectivelyPrivateConstructor;
    }

    // 0x10034ab90
    void AnimFrameSet::ResizePrecise(int arg1, int arg2, int arg3) {
        ((AnimFrame*)(*this)[(long)arg1])->ResizePrecise(arg2, arg3);
    }

    // 0x10034abc0
    uint8_t AnimFrameSet::GetAnimateTransparencies(int arg1) {
        long lVar1 = (*this)[(long)arg1];
        return *(uint8_t*)(lVar1 + 120);
    }

    // 0x10034abe0
    void AnimFrameSet::GetNumFrames() {
        end();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x10034a350
    shared_ptr_if_not_array<oldscape::dash3d::AnimFrameSet>::type
    make_shared<oldscape::dash3d::AnimFrameSet, oldscape::dash3d::AnimFrameSet::EffectivelyPrivateConstructor>(
        oldscape::dash3d::AnimFrameSet::EffectivelyPrivateConstructor&& effectivelyPrivateConstructor) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        AnimFrameSet* local_30[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::AnimFrameSet>::type result;
        } else {
            local_30[0] = placement_new<oldscape::dash3d::AnimFrameSet,
                                        oldscape::dash3d::AnimFrameSet::EffectivelyPrivateConstructor>(
                (void*)((long)arg1 + 32), effectivelyPrivateConstructor);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::AnimFrameSet>, int,
                              oldscape::dash3d::AnimFrameSet*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10034a990
    shared_ptr_if_not_array<oldscape::dash3d::AnimBase>::type
    make_shared<oldscape::dash3d::AnimBase, int&, oldscape::PacketJ<Array<unsigned char>>&>(
        int& arg1, oldscape::PacketJ<Array<unsigned char>>& packetJ) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        AnimBase* local_38[2];

        auto arg1_00 = aligned_alloc(184, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::AnimBase>::type result;
        } else {
            local_38[0] = placement_new<oldscape::dash3d::AnimBase, int&, oldscape::PacketJ<Array<unsigned char>>&>(
                (void*)((long)arg1_00 + 32), arg1, packetJ);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::AnimBase>, int, oldscape::dash3d::AnimBase*&>(
                    arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag
