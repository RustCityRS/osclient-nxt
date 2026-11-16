// libs/graphics/runetek7/model/GeometryQueryManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GeometryQueryManager.h"

namespace jag::graphics {
    // 0x100815ab0, 64 bytes, base-object constructor, placed by class name and debug map
    // GeometryQueryManager::GeometryQueryManager()
    void GeometryQueryManager::GeometryQueryManager() {
        new (this) eastl::vector<shared_ptr<GeometryQuery>, eastl::allocator>();
        reserve(10);
    }

    // 0x100815b40, 16 bytes, complete-object constructor, placed by class name and debug map
    // GeometryQueryManager::GeometryQueryManager(): jumps straight to the base-object constructor

    // 0x100815b50, 288 bytes, placed by class name and debug map
    // GeometryQueryManager::Create(render::QueryType, bool)
    Singleton<render::RenderDevice>* GeometryQueryManager::Create(Singleton<render::RenderDevice>* param_1,
                                                                  Layout* param_2, uint param_3, undefined1 param_4) {
        char cVar1;
        MapArea* pMVar2;
        long lVar3;
        shared_ptr* this;
        shared_ptr* psVar4;
        GeometryQuery* pGVar5;
        shared_ptr local_40;
        uint local_30;
        bool local_29;

        local_30 = param_3;
        local_29 = (bool)param_4;
        pMVar2 = (MapArea*)param_1->Instance();
        lVar3 = pMVar2->GetOrigin();
        if (*(char*)(lVar3 + 171) != '\0') {
            pMVar2 = (MapArea*)pMVar2->Instance();
            lVar3 = pMVar2->GetOrigin();
            if ((*(char*)(lVar3 + 172) != '\0') || ((local_30 & 4294967294) != 2)) {
                this = (shared_ptr*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(param_2);
                psVar4 = (shared_ptr*)param_2->end();
                while (true) {
                    if (this == psVar4) {
                        make_shared<GeometryQuery, render::QueryType&, bool&>((jag*)&local_40, (QueryType*)&local_30,
                                                                              &local_29);
                        param_2->push_back(&local_40);
                        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<
                            oldscape::FileRSevenDebugPresetProvider, void>(
                            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)param_1, &local_40);
                        local_40.~shared_ptr();
                        return param_1;
                    }
                    cVar1 = unique();
                    if (cVar1 != '\0')
                        break;
                    this = this + 1;
                }
                pGVar5 = (GeometryQuery*)shared_ptr<GeometryQuery>::operator->((shared_ptr<GeometryQuery>*)this);
                pGVar5->Reset(local_30, local_29);
                new (param_1) shared_ptr<oldscape::dash3d::Decor>(this);
                return param_1;
            }
        }
        new (param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return param_1;
    }

    // 0x100815d70, 16 bytes, placed by class name and debug map
    // GeometryQueryManager::Destroy()
    void GeometryQueryManager::Destroy() {
        clear();
    }

    // 0x100815d80, 96 bytes, placed by class name and debug map
    // GeometryQueryManager::OnEndFrame()
    void GeometryQueryManager::OnEndFrame() {
        GeometryQuery* this_00;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar2;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_01;

        this_01 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)HeapBeginPtr();
        psVar2 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)end();
        for (; this_01 != psVar2; this_01 = this_01 + 16) {
            if (this_01->unique() == '\0') {
                this_00 = (GeometryQuery*)shared_ptr<GeometryQuery>::operator->((shared_ptr<GeometryQuery>*)this_01);
                this_00->PrepareResult();
            }
        }
    }

    // 0x100815de0, 112 bytes, placed by class name and debug map
    // GeometryQueryManager::HasQueries() const
    ulong GeometryQueryManager::HasQueries() {
        char cVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar2;
        bool bVar3;

        this_00 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)HeapBeginPtr();
        psVar2 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)end();
        bVar3 = this_00 == psVar2;
        if (!bVar3) {
            cVar1 = this_00->unique();
            while (cVar1 != '\0') {
                this_00 = this_00 + 16;
                bVar3 = this_00 == psVar2;
                if (bVar3)
                    break;
                cVar1 = this_00->unique();
            }
        }
        return (CONCAT71((int7)((ulong)this >> 8), bVar3) ^ 1) & 4294967295;
    }

    // 0x100815e50, 128 bytes, placed by class name and debug map
    // GeometryQueryManager::HasDestructiveQueries() const
    ulong GeometryQueryManager::HasDestructiveQueries() {
        char cVar1;
        shared_ptr<GeometryQuery>* this_00;
        shared_ptr<GeometryQuery>* psVar2;
        GeometryQuery* this_01;

        this_00 = (shared_ptr<GeometryQuery>*)HeapBeginPtr();
        psVar2 = (shared_ptr<GeometryQuery>*)end();
        for (; this_00 != psVar2; this_00 = this_00 + 16) {
            this_01 = (GeometryQuery*)shared_ptr<GeometryQuery>::operator->(this_00);
            cVar1 = this_01->IsDestructive();
            if ((cVar1 != '\0') && (cVar1 = this_00->unique(), cVar1 == '\0'))
                break;
        }
        return CONCAT71((int7)((ulong)this >> 8), ~(this_00 == psVar2)) & 4294967041;
    }

} // namespace jag::graphics

// 0x100816420, 16 bytes, placed by debug map only (low confidence)
// fmod(float, float)
void fmod(float param_1, float param_2) {
    _fmodf();
}

// 0x100816430, 16 bytes, placed by debug map only (low confidence)
// atan2(float, float)
void atan2(float param_1, float param_2) {
    _atan2f();
}

namespace jag {
    // 0x100815c70, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::GeometryQuery>::type make_shared<graphics::GeometryQuery, render::QueryType&, bool&>(render::QueryType&, bool&)
    jag* make_shared<graphics::GeometryQuery, render::QueryType&, bool&>(QueryType* param_1, bool* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        GeometryQuery* local_38[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<graphics::GeometryQuery, render::QueryType&, bool&>((void*)((long)pvVar1 + 32),
                                                                                            param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::GeometryQuery>, int, graphics::GeometryQuery*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag
