// libs/graphics/runetek7/model/GeometryQuery.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GeometryQuery.h"

namespace jag::graphics {
    // 0x1008138f0
    uint8_t[16] GeometryQuery::GetQueryInstance(unsigned long arg1) {
        FastPool<audio::SoundInstance, int>* fastPool;
        uint8_t auVar2[16];

        unsigned long uVar1 = field_8.size();
        if (uVar1 <= arg1) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryQuery.cpp",
                      76, "Attempted to retrieve nonexistant query object");
            fastPool = nullptr;
        } else {
            fastPool = &field_8[arg1];
        }
        ImGuiPlotArrayGetterData local_28(fastPool, (unsigned int)(uVar1 > arg1));
        auVar2._12_4_ = 0;
        auVar2[0] = local_28[0];
        auVar2[1] = local_28[1];
        auVar2[2] = local_28[2];
        auVar2[3] = local_28[3];
        auVar2[4] = local_28[4];
        auVar2[5] = local_28[5];
        auVar2[6] = local_28[6];
        auVar2[7] = local_28[7];
        auVar2[8] = local_28[8];
        auVar2[9] = local_28[9];
        auVar2[10] = local_28[10];
        auVar2[11] = local_28[11];
        return auVar2;
    }

    // 0x100815490
    GeometryQuery::GeometryQuery(render::QueryType queryType, bool arg2) : field_0(queryType), field_4(arg2) {}

    // 0x1008154d0
    GeometryQuery::~GeometryQuery() {
        Destroy();
        field_8.~vector();
    }

    // 0x100815510
    void GeometryQuery::Destroy() {
        uint8_t* this_02 = &field_8;
        auto this_00 = this_02->HeapBeginPtr();
        auto psVar1 = this_02->end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            ((Query*)(*this_00).operator->())->Destroy();
        }
        this_02->clear();
    }

    // 0x100815590
    void GeometryQuery::Reset(render::QueryType queryType, bool arg2) {
        Destroy();
        field_0 = queryType;
        field_4 = arg2;
    }

    // 0x1008155c0
    unsigned long GeometryQuery::CreateQueryInstances(unsigned long arg1) {
        shared_ptr<render::Query>* this_00;
        unsigned long uVar3;
        ReturnValue local_58;

        if (arg1 == 0) {
            LogAssert("maxQueryObjects > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryQuery.cpp",
                      30, nullptr);
        }
        Destroy();
        vector<shared_ptr<render::Query>, BucketAllocatorEASTL>* local_48 =
            (vector<shared_ptr<render::Query>, BucketAllocatorEASTL>*)&field_8;
        uint64_t uVar1 = local_48->reserve(arg1);
        uint8_t local_31 = arg1 != 0;
        uint64_t uVar2 = (uint64_t)((unsigned long)uVar1 >> 8);
        if (local_31) {
            uVar3 = 0;
            do {
                make_shared<render::Query>(&local_58);
                this_00 = local_48->emplace_back<shared_ptr<render::Query>>(local_58);
                uVar1 = ((Query*)(*this_00).operator->())->Create(field_0);
                if ((char)uVar1 == '\0') {
                    (logger::default_logger())
                        ->Log(false, 2,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/GeometryQuery.cpp",
                              46, "Could not create query %zu out of %zu", uVar3, arg1);
                    uVar1 = Destroy();
                    uVar2 = (uint64_t)((unsigned long)uVar1 >> 8);
                    break;
                }
                uVar3 = uVar3 + 1;
                local_31 = uVar3 < arg1;
                uVar2 = (uint64_t)((unsigned long)uVar1 >> 8);
            } while (arg1 != uVar3);
        }
        return ~local_31 & 18446744073709551361;
    }

    // 0x100815890
    int GeometryQuery::FetchResult() {
        int iVar1;
        int iVar3;

        auto this_00 = field_8.HeapBeginPtr();
        auto psVar2 = field_8.end();
        if (this_00 == psVar2) {
            iVar3 = 0;
        } else {
            iVar3 = 0;
            do {
                iVar1 = ((Query*)(*this_00).operator->())->FetchResult();
                iVar3 = iVar3 + iVar1;
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return iVar3;
    }

    // 0x1008158f0
    void GeometryQuery::PrepareResult() {
        auto this_00 = field_8.HeapBeginPtr();
        auto psVar1 = field_8.end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            ((Query*)(*this_00).operator->())->PrepareResult();
        }
    }

    // 0x100815940
    int GeometryQuery::GetResult() const {
        int iVar1;
        int iVar3;

        auto this_00 = field_8.HeapBeginPtr();
        auto psVar2 = field_8.end();
        if (this_00 == psVar2) {
            iVar3 = 0;
        } else {
            iVar3 = 0;
            do {
                iVar1 = ((Query*)(*this_00).operator->())->GetResult();
                iVar3 = iVar3 + iVar1;
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return iVar3;
    }

    // 0x1008159b0
    int GeometryQuery::GetNumActive() const {
        uint8_t bVar1;
        int iVar3;

        auto this_00 = field_8.HeapBeginPtr();
        auto psVar2 = field_8.end();
        if (this_00 == psVar2) {
            iVar3 = 0;
        } else {
            iVar3 = 0;
            do {
                bVar1 = ((Query*)(*this_00).operator->())->IsActive();
                iVar3 = iVar3 + (unsigned int)bVar1;
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return iVar3;
    }

    // 0x100815a20
    unsigned long GeometryQuery::IsResultReady() const {
        shared_ptr<render::Query>* this_00;
        shared_ptr<render::Query>* psVar2;
        Query* pQVar3;
        bool bVar4;
        uint8_t* this_01;
        uint64_t uVar5;

        bool cVar1 = IsValid();
        if (!cVar1) {
            bVar4 = false;
            uVar5 = 0;
        } else {
            this_01 = &field_8;
            this_00 = (shared_ptr<render::Query>*)this_01->HeapBeginPtr();
            psVar2 = (shared_ptr<render::Query>*)this_01->end();
            uVar5 = (uint64_t)((unsigned long)this_01 >> 8);
            for (; bVar4 = this_00 == psVar2, !bVar4; this_00 = this_00 + 16) {
                pQVar3 = (Query*)(*this_00).operator->();
                cVar1 = pQVar3->IsResultReady();
                if (!cVar1) {
                    pQVar3 = (Query*)(*this_00).operator->();
                    cVar1 = pQVar3->IsActive();
                    if (cVar1)
                        break;
                }
            }
        }
        return bVar4 & 4294967041;
    }

} // namespace jag::graphics
