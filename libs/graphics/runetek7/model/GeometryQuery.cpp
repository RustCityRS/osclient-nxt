// libs/graphics/runetek7/model/GeometryQuery.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GeometryQuery.h"

namespace jag::graphics {
    // 0x1008138f0, 144 bytes, placed by class name and debug map
    // GeometryQuery::GetQueryInstance(unsigned long)
    undefined1[16] GeometryQuery::GetQueryInstance(ulong param_1) {
        ulong uVar1;
        float* pfVar2;
        undefined8 uVar3;
        undefined1 auVar4[16];
        ImGuiPlotArrayGetterData local_28[16];

        uVar1 = (&field_8)->size();
        if (uVar1 <= param_1) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/model/GeometryQuery.cpp",
                                76, "Attempted to retrieve nonexistant query object");
            pfVar2 = (float*)0;
        } else {
            pfVar2 = (float*)eastl::vector<shared_ptr<render::Query>, BucketAllocatorEASTL>::operator[](
                (vector<shared_ptr<render::Query>, BucketAllocatorEASTL>*)&field_8, param_1);
        }
        ImGuiPlotArrayGetterData::ImGuiPlotArrayGetterData(local_28, pfVar2, (uint)(uVar1 > param_1));
        auVar4._12_4_ = 0;
        auVar4[0] = local_28[0];
        auVar4[1] = local_28[1];
        auVar4[2] = local_28[2];
        auVar4[3] = local_28[3];
        auVar4[4] = local_28[4];
        auVar4[5] = local_28[5];
        auVar4[6] = local_28[6];
        auVar4[7] = local_28[7];
        auVar4[8] = local_28[8];
        auVar4[9] = local_28[9];
        auVar4[10] = local_28[10];
        auVar4[11] = local_28[11];
        return auVar4;
    }

    // 0x100815490, 32 bytes, base-object constructor, placed by class name
    // GeometryQuery::GeometryQuery(render::QueryType, bool)
    void GeometryQuery::GeometryQuery(undefined4 param_2, undefined1 param_3) {
        field_0 = param_2;
        field_4 = param_3;
        eastl::vector<shared_ptr<render::Query>, BucketAllocatorEASTL>::vector();
    }

    // 0x1008154c0, 16 bytes, complete-object constructor, placed by class name
    // GeometryQuery::GeometryQuery(render::QueryType, bool): jumps straight to the base-object constructor

    // 0x1008154d0, 64 bytes, base-object destructor, placed by class name
    // GeometryQuery::~GeometryQuery()
    void GeometryQuery::~GeometryQuery() {
        Destroy(this);
        (&field_8)->~vector();
    }

    // 0x100815510, 96 bytes, placed by class name
    // GeometryQuery::Destroy()
    void GeometryQuery::Destroy() {
        shared_ptr<render::Query>* this_00;
        shared_ptr<render::Query>* psVar1;
        Query* this_01;
        undefined1* this_02;

        this_02 = &field_8;
        this_00 = (shared_ptr<render::Query>*)this_02->HeapBeginPtr();
        psVar1 = (shared_ptr<render::Query>*)this_02->end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            this_01 = (Query*)shared_ptr<render::Query>::operator->(this_00);
            this_01->Destroy();
        }
        this_02->clear();
    }

    // 0x100815580, 16 bytes, complete-object destructor, placed by class name
    // GeometryQuery::~GeometryQuery(): jumps straight to the base-object destructor

    // 0x100815590, 48 bytes, placed by class name
    // GeometryQuery::Reset(render::QueryType, bool)
    void GeometryQuery::Reset(undefined4 param_2, undefined1 param_3) {
        Destroy(this);
        field_0 = param_2;
        field_4 = param_3;
    }

    // 0x1008155c0, 320 bytes, placed by class name
    // GeometryQuery::CreateQueryInstances(unsigned long)
    ulong GeometryQuery::CreateQueryInstances(ulong param_1) {
        undefined8 uVar1;
        undefined7 uVar3;
        shared_ptr* this_00;
        Query* pQVar2;
        ulong uVar4;
        shared_ptr local_58;
        vector<shared_ptr<render::Query>, BucketAllocatorEASTL>* local_48;
        byte local_31;

        if (param_1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("maxQueryObjects > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "GeometryQuery.cpp",
                      30, (char*)0);
        }
        Destroy(this);
        local_48 = (vector<shared_ptr<render::Query>, BucketAllocatorEASTL>*)&field_8;
        uVar1 = eastl::vector<shared_ptr<render::Query>, BucketAllocatorEASTL>::reserve(local_48, param_1);
        local_31 = param_1 != 0;
        uVar3 = (undefined7)((ulong)uVar1 >> 8);
        if ((bool)local_31) {
            uVar4 = 0;
            do {
                make_shared<render::Query>((jag*)&local_58);
                this_00 =
                    eastl::vector<shared_ptr<render::Query>,
                                  BucketAllocatorEASTL>::emplace_back<shared_ptr<render::Query>>(local_48, &local_58);
                local_58.~shared_ptr();
                pQVar2 = (Query*)shared_ptr<render::Query>::operator->((shared_ptr<render::Query>*)this_00);
                uVar1 = pQVar2->Create(field_0);
                if ((char)uVar1 == '\0') {
                    uVar1 = logger::default_logger();
                    logger::Logger::Log(uVar1, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/model/GeometryQuery.cpp",
                                        46, "Could not create query %zu out of %zu", uVar4, param_1);
                    uVar1 = Destroy(this);
                    uVar3 = (undefined7)((ulong)uVar1 >> 8);
                    break;
                }
                uVar4 = uVar4 + 1;
                local_31 = uVar4 < param_1;
                uVar3 = (undefined7)((ulong)uVar1 >> 8);
            } while (param_1 != uVar4);
        }
        return CONCAT71(uVar3, ~local_31) & 18446744073709551361;
    }

    // 0x100815890, 96 bytes, placed by class name
    // GeometryQuery::FetchResult()
    int GeometryQuery::FetchResult() {
        int iVar1;
        shared_ptr<render::Query>* this_00;
        shared_ptr<render::Query>* psVar2;
        Query* this_01;
        int iVar3;

        this_00 = (shared_ptr<render::Query>*)(&field_8)->HeapBeginPtr();
        psVar2 = (shared_ptr<render::Query>*)(&field_8)->end();
        if (this_00 == psVar2) {
            iVar3 = 0;
        } else {
            iVar3 = 0;
            do {
                this_01 = (Query*)shared_ptr<render::Query>::operator->(this_00);
                iVar1 = this_01->FetchResult();
                iVar3 = iVar3 + iVar1;
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return iVar3;
    }

    // 0x1008158f0, 80 bytes, placed by class name
    // GeometryQuery::PrepareResult()
    void GeometryQuery::PrepareResult() {
        shared_ptr<render::Query>* this_00;
        shared_ptr<render::Query>* psVar1;
        Query* this_01;

        this_00 = (shared_ptr<render::Query>*)(&field_8)->HeapBeginPtr();
        psVar1 = (shared_ptr<render::Query>*)(&field_8)->end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            this_01 = (Query*)shared_ptr<render::Query>::operator->(this_00);
            this_01->PrepareResult();
        }
    }

    // 0x100815940, 96 bytes, placed by class name
    // GeometryQuery::GetResult() const
    int GeometryQuery::GetResult() {
        int iVar1;
        shared_ptr<render::Query>* this_00;
        shared_ptr<render::Query>* psVar2;
        Query* this_01;
        int iVar3;

        this_00 = (shared_ptr<render::Query>*)(&field_8)->HeapBeginPtr();
        psVar2 = (shared_ptr<render::Query>*)(&field_8)->end();
        if (this_00 == psVar2) {
            iVar3 = 0;
        } else {
            iVar3 = 0;
            do {
                this_01 = (Query*)shared_ptr<render::Query>::operator->(this_00);
                iVar1 = this_01->GetResult();
                iVar3 = iVar3 + iVar1;
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return iVar3;
    }

    // 0x1008159b0, 112 bytes, placed by class name
    // GeometryQuery::GetNumActive() const
    int GeometryQuery::GetNumActive() {
        byte bVar1;
        shared_ptr<render::Query>* this_00;
        shared_ptr<render::Query>* psVar2;
        Query* this_01;
        int iVar3;

        this_00 = (shared_ptr<render::Query>*)(&field_8)->HeapBeginPtr();
        psVar2 = (shared_ptr<render::Query>*)(&field_8)->end();
        if (this_00 == psVar2) {
            iVar3 = 0;
        } else {
            iVar3 = 0;
            do {
                this_01 = (Query*)shared_ptr<render::Query>::operator->(this_00);
                bVar1 = this_01->IsActive();
                iVar3 = iVar3 + (uint)bVar1;
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return iVar3;
    }

    // 0x100815a20, 144 bytes, placed by class name
    // GeometryQuery::IsResultReady() const
    ulong GeometryQuery::IsResultReady() {
        char cVar1;
        shared_ptr<render::Query>* this_00;
        shared_ptr<render::Query>* psVar2;
        Query* pQVar3;
        bool bVar4;
        undefined1* this_01;
        undefined7 uVar5;

        cVar1 = IsValid(this);
        if (cVar1 == '\0') {
            bVar4 = false;
            uVar5 = 0;
        } else {
            this_01 = &field_8;
            this_00 = (shared_ptr<render::Query>*)this_01->HeapBeginPtr();
            psVar2 = (shared_ptr<render::Query>*)this_01->end();
            uVar5 = (undefined7)((ulong)this_01 >> 8);
            for (; bVar4 = this_00 == psVar2, !bVar4; this_00 = this_00 + 16) {
                pQVar3 = (Query*)shared_ptr<render::Query>::operator->(this_00);
                cVar1 = pQVar3->IsResultReady();
                if (cVar1 == '\0') {
                    pQVar3 = (Query*)shared_ptr<render::Query>::operator->(this_00);
                    cVar1 = pQVar3->IsActive();
                    if (cVar1 != '\0')
                        break;
                }
            }
        }
        return CONCAT71(uVar5, bVar4) & 4294967041;
    }

} // namespace jag::graphics
