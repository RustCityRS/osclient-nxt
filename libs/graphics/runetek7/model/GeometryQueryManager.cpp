// libs/graphics/runetek7/model/GeometryQueryManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GeometryQueryManager.h"

namespace jag::graphics {
    // 0x100815ab0
    GeometryQueryManager::GeometryQueryManager() : eastl::vector<shared_ptr<GeometryQuery>>() {
        reserve(10);
    }

    // 0x100815b50
    auto GeometryQueryManager::Create(render::QueryType queryType, bool arg2) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar4;
        ReturnValue local_40;

        QueryType local_30 = queryType;
        bool local_29 = arg2;
        auto pMVar2 = result.Instance();
        long lVar3 = pMVar2->GetOrigin();
        if (*(char*)(lVar3 + 171) != '\0') {
            pMVar2 = (MapArea*)pMVar2->Instance();
            lVar3 = pMVar2->GetOrigin();
            if ((*(char*)(lVar3 + 172) != '\0') || ((local_30 & 4294967294) != 2)) {
                this_00 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)HeapBeginPtr();
                psVar4 = (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)end();
                while (true) {
                    if (this_00 == psVar4) {
                        make_shared<GeometryQuery, render::QueryType&, bool&>(&local_40, &local_30, &local_29);
                        push_back(local_40);
                        result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
                        return result;
                    }
                    if (this_00->unique() != '\0')
                        break;
                    this_00 = this_00 + 16;
                }
                ((GeometryQuery*)(*this_00).operator->())->Reset(local_30, local_29);
                return auto(this_00);
            }
        }
        new (&result) shared_ptr();
        return result;
    }

    // 0x100815d70
    void GeometryQueryManager::Destroy() {
        clear();
    }

    // 0x100815d80
    void GeometryQueryManager::OnEndFrame() {
        auto this_01 = HeapBeginPtr();
        auto psVar2 = end();
        for (; this_01 != psVar2; this_01 = this_01 + 16) {
            if (this_01->unique() == '\0') {
                ((GeometryQuery*)(*this_01).operator->())->PrepareResult();
            }
        }
    }

    // 0x100815de0
    unsigned long GeometryQueryManager::HasQueries() const {
        bool cVar1;

        auto this_00 = HeapBeginPtr();
        auto psVar2 = end();
        bool bVar3 = this_00 == psVar2;
        if (!bVar3) {
            cVar1 = this_00->unique();
            while (cVar1) {
                this_00 = this_00 + 16;
                bVar3 = this_00 == psVar2;
                if (bVar3)
                    break;
                cVar1 = this_00->unique();
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)bVar3) ^ 1) & 4294967295;
    }

    // 0x100815e50
    unsigned long GeometryQueryManager::HasDestructiveQueries() const {
        bool cVar1;

        auto this_00 = HeapBeginPtr();
        auto psVar2 = end();
        for (; this_00 != psVar2; this_00 = this_00 + 16) {
            cVar1 = ((GeometryQuery*)(*this_00).operator->())->IsDestructive();
            if ((cVar1) && (cVar1 = this_00->unique(), !cVar1))
                break;
        }
        return ~(this_00 == psVar2) & 4294967041;
    }

} // namespace jag::graphics

// 0x100816420
void fmod(float arg1, float arg2) {
    _fmodf();
}

// 0x100816430
void atan2(float arg1, float arg2) {
    _atan2f();
}

namespace jag {
    // 0x100815c70
    shared_ptr_if_not_array<graphics::GeometryQuery>::type
    make_shared<graphics::GeometryQuery, render::QueryType&, bool&>(render::QueryType& queryType, bool& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        GeometryQuery* local_38[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::GeometryQuery>::type result;
        } else {
            local_38[0] = placement_new<graphics::GeometryQuery, render::QueryType&, bool&>((void*)((long)arg1 + 32),
                                                                                            queryType, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::GeometryQuery>, int, graphics::GeometryQuery*&>(
                    arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag
