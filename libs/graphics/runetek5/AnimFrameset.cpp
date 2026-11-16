// libs/graphics/runetek5/AnimFrameset.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimFrameset.h"

namespace jag::graphics {
    // 0x103bc0ec0, set at startup by ___cxx_global_var_init.5
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> AnimFrameset::NullAnimFrameset =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1000096a0: AnimFrameset::IsLoaded() const has the same machine code as BaseApp::GetExitAfterInit()

    // 0x100009d10: AnimFrameset::GetLastLoadAttempt() const has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x1000b9950: AnimFrameset::GetFrames() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x100978700
    AnimFrameset::AnimFrameset(unsigned int arg1, Js5ResourceProvider& js5ResourceProvider,
                               const Js5ArchiveSettings& js5ArchiveSettings1,
                               const Js5ArchiveSettings& js5ArchiveSettings2)
        : MakeSharedPool<AnimFrameset, 256>(), field_0(0), m_loaded(0), field_40(arg1), field_48(js5ResourceProvider),
          field_56(js5ArchiveSettings1), field_64(js5ArchiveSettings2), field_72(0), field_128(0) {}

    // 0x100978840
    unsigned long AnimFrameset::Load() {
        uint8_t* puVar1;
        uint8_t* this_00;
        unsigned int arg4;
        bool bVar2;
        AnimFrameset* pAVar3;
        uint8_t uVar4;
        bool cVar5;
        unsigned short uVar6;
        unsigned int uVar7;
        PacketT<Array<unsigned char>>* pPVar9;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        long lVar11;
        shared_ptr<AnimBase>* this_01;
        PacketT<Array<unsigned char> _>* pPVar12;
        unsigned int* puVar13;
        shared_ptr<AnimationFrameRT5>* this_02;
        unsigned long uVar14;
        uint32_t* puVar15;
        uint32_t* puVar16;
        uint64_t extraout_var_01;
        unsigned long uVar17;
        vector<unsigned int, BucketAllocatorEASTL>* this_05;
        bool bVar18;
        uint8_t local_c0[64];
        ReturnValue local_80;
        unsigned int local_64;
        ReturnValue local_60;
        unsigned int local_4c;
        PacketT<Array<unsigned char>>* local_48;
        vector<unsigned int, BucketAllocatorEASTL>* local_40;

        uint64_t uVar8 = FrameTime::GetCurrentTimeMS();
        field_0 = uVar8;
        if (m_loaded != '\0') {
            return 1;
        }
        AnimFrameset* local_38 = this;
        if (field_128 == '\0') {
            puVar1 = &field_80;
            cVar5 = puVar1->empty();
            if (cVar5) {
                uVar4 = (**(void (**)(...)) & ((Js5Index*)local_38->field_48->_vptr)->m_indexVersion)(
                    (Js5Index**)local_38->field_48, (Js5ArchiveSettings*)local_c0);
                pAVar3 = local_38;
                if ((uint8_t*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar4) == DataStatus::NOTLOADED) {
                    return 0;
                }
                cVar5 = local_c0._0_8_->IsFileListContiguous(local_38->field_40);
                if (!cVar5) {
                    local_c0._0_8_->GetFileList(*puVar1, pAVar3->field_40);
                    cVar5 = puVar1->empty();
                    if (cVar5) {
                        (logger::default_logger())
                            ->Log(false, 3,
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek5/AnimFrameset.cpp",
                                  58, "AnimFrameset: Unable to find frame files for group: %u", local_38->field_40);
                    }
                } else {
                    uVar7 = local_c0._0_8_->GetMaximumFileID(pAVar3->field_40);
                    puVar1->reserve((unsigned long)uVar7);
                    local_60[0]._0_4_ = 0;
                    if (uVar7 != 0) {
                        do {
                            puVar1->push_back(local_60);
                            local_60[0]._0_4_ = local_60[0]._0_4_ + 1;
                        } while ((unsigned int)local_60[0]._0_4_ < uVar7);
                    }
                }
                this_00 = &local_38->field_104;
                uVar14 = puVar1->size();
                this_00->set_max_size(uVar14, 0);
            }
            puVar15 = (uint32_t*)puVar1->HeapBeginPtr();
            local_40 = (vector<unsigned int, BucketAllocatorEASTL>*)puVar1;
            puVar16 = (uint32_t*)puVar1->end();
            if (puVar15 != puVar16) {
                bVar2 = true;
                do {
                    uVar4 = local_38->field_48->FileReady((unsigned int)local_38->field_64, local_38->field_40,
                                                          (Priority*)*puVar15, (uint8_t)(Priority::HIGH));
                    if ((uint8_t*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar4) != DataStatus::READY) {
                        bVar2 = false;
                    }
                    puVar15 = puVar15 + 1;
                } while (puVar15 != puVar16);
                if (!bVar2) {
                    return 0;
                }
            }
            this_05 = local_40;
            lVar11 = local_40->size();
            if (lVar11 != 0) {
                local_48 = (PacketT<Array<unsigned char>>*)&local_38->field_104;
                uVar7 = 1;
                uVar14 = 0;
                do {
                    puVar13 = (unsigned int*)(*this_05)[uVar14];
                    arg4 = *puVar13;
                    new (local_c0) shared_ptr();
                    local_38->field_48->GetFile(*local_c0, *local_38->field_64, local_38->field_40, arg4,
                                                (Priority*)Priority::HIGH, true, false, false);
                    pPVar12 = (PacketT<Array<unsigned char> _>*)**local_c0;
                    pPVar9 = (PacketT<Array<unsigned char>>*)(*local_48)[uVar14];
                    *pPVar9 = *pPVar12;
                    lVar11 = ((TextureAtlasReference*)(*local_48)[uVar14])->GetTextureAtlas();
                    if (lVar11 == 0) {
                        LogAssert("m_frameData[frame].GetSize() > 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek5/AnimFrameset.cpp",
                                  84, "AnimFrameset: No data received for frame, group: %i frame: %i",
                                  (unsigned long)local_38->field_40, (unsigned long)arg4);
                    }
                    if ((unsigned int)local_38->field_72 < arg4) {
                        local_38->field_72 = arg4;
                    }
                    this_05 = local_40;
                    uVar14 = (unsigned long)uVar7;
                    uVar17 = local_40->size();
                    uVar7 = uVar7 + 1;
                } while (uVar14 < uVar17);
            }
            local_38->field_128 = 1;
        }
        puVar1 = &local_38->field_104;
        pPVar9 = (PacketT<Array<unsigned char>>*)puVar1->data();
        Array<PacketT<Array<unsigned char>>, BucketAllocatorEASTL>* local_70 =
            (Array<PacketT<Array<unsigned char>>, BucketAllocatorEASTL>*)puVar1;
        auto pPVar10 = puVar1->end();
        if (pPVar9 == pPVar10) {
            local_64 = 0;
        } else {
            bVar2 = true;
            do {
                pPVar9->SetPos(1);
                uVar7 = pPVar9->g2();
                uVar4 = local_38->field_48->FileReady((unsigned int)local_38->field_56, uVar7, nullptr,
                                                      (uint8_t)(Priority::HIGH));
                bVar18 = false;
                if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar4) == DataStatus::READY) {
                    bVar18 = bVar2;
                }
                pPVar9 = pPVar9 + 32;
                bVar2 = bVar18;
            } while (pPVar9 != pPVar10);
            uVar14 = (((uint64_t)extraout_var << 8) | (uint8_t)(!bVar18));
            local_64 = (unsigned int)uVar14;
            if (!bVar18)
                goto LAB_100978be0;
        }
        pAVar3 = local_38;
        local_c0._56_8_ = &local_38->field_16;
        local_c0._56_8_->set_max_size((unsigned long)(local_38->field_72 + 1), 0);
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_60);
        new (local_c0) eastl::hash_map<unsigned int, shared_ptr<AnimBase>, eastl::hash<unsigned int>,
                                       eastl::equal_to<unsigned int>, BucketAllocatorEASTL>(local_60);
        local_40 = (vector<unsigned int, BucketAllocatorEASTL>*)&pAVar3->field_80;
        lVar11 = local_40->size();
        if (lVar11 != 0) {
            uVar14 = 0;
            uVar17 = 1;
            do {
                pPVar9 = (PacketT<Array<unsigned char>>*)(*local_70)[uVar14];
                pPVar9->SetPos(1);
                local_48 = pPVar9;
                uVar6 = pPVar9->g2();
                local_4c = (unsigned int)uVar6;
                local_c0._48_8_ = uVar14;
                local_60 = local_c0->find(local_4c);
                local_80 = local_c0->end();
                cVar5 = local_60 == local_80;
                uVar8 = local_c0._48_8_;
                if (cVar5) {
                    local_60 = shared_ptr();
                    local_38->field_48->GetFile(local_60, *local_38->field_56, local_4c, 0, (Priority*)Priority::HIGH,
                                                true, false, false);
                    *local_60;
                    MakeSharedPool<AnimBase, 256>::MakeShared<unsigned int&, PacketT<Array<unsigned char>>&>(
                        &local_80, (PacketT<Array<unsigned char> _>*)&local_4c);
                    this_01 = (shared_ptr<AnimBase>*)(*local_c0)[local_4c];
                    *this_01 = local_80;
                }
                local_48->SetPos(0);
                pPVar12 = (PacketT<Array<unsigned char> _>*)(*local_c0)[local_4c];
                MakeSharedPool<AnimationFrameRT5, 20480>::MakeShared<shared_ptr<AnimBase>&,
                                                                     PacketT<Array<unsigned char>>&>(&local_60,
                                                                                                     pPVar12);
                puVar13 = (unsigned int*)(*local_40)[uVar8];
                this_02 = (shared_ptr<AnimationFrameRT5>*)(*local_c0._56_8_)[(unsigned long)*puVar13];
                *this_02 = local_60;
                uVar14 = local_40->size();
                bVar2 = uVar17 < uVar14;
                uVar14 = uVar17;
                uVar17 = (unsigned long)((int)uVar17 + 1);
            } while (bVar2);
        }
        local_40->set_capacity(0);
        local_70->clear();
        local_38->m_loaded = 1;
        uVar14 = (unsigned long)local_64;
    LAB_100978be0:
        return uVar14 ^ 1;
    }

} // namespace jag::graphics
