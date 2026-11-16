// libs/game/runetek5/assetbuilder/jobs/buildsinglelocation/BuildSingleLocationWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100634360, 48 bytes, inline, placed by debug map only (low confidence)
    // game::BuildSingleLocationRequestData* placement_new<game::BuildSingleLocationRequestData, shared_ptr<game::LocType> const&, shared_ptr<game::LocType> const&, shared_ptr<graphics::Model> const&, Rotation90&, int&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> >(void*, shared_ptr<game::LocType> const&, shared_ptr<game::LocType> const&, shared_ptr<graphics::Model> const&, Rotation90&, int&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&)
    BuildSingleLocationRequestData*
    jag::placement_new<game::BuildSingleLocationRequestData, shared_ptr<game::LocType> const&,
                       shared_ptr<game::LocType> const&, shared_ptr<graphics::Model> const&, Rotation90&, int&,
                       Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                       Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
        void* param_1, shared_ptr* param_2, shared_ptr* param_3, shared_ptr* param_4, Rotation90* param_5, int* param_6,
        Array* param_7, Array* param_8) {
        game::BuildSingleLocationRequestData::BuildSingleLocationRequestData();
        return param_1;
    }

    // 0x100634390, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildSingleLocationRequestData>* placement_new<BucketRefCounter<game::BuildSingleLocationRequestData>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationRequestData>, game::BuildSingleLocationRequestData>*&, game::BuildSingleLocationRequestData*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationRequestData>, game::BuildSingleLocationRequestData>*&, game::BuildSingleLocationRequestData*&)
    BucketRefCounter*
    jag::placement_new<BucketRefCounter<game::BuildSingleLocationRequestData>,
                       managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationRequestData>,
                                                    game::BuildSingleLocationRequestData>*&,
                       game::BuildSingleLocationRequestData*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                                               BuildSingleLocationRequestData** param_3) {
        BucketRefCounter<game::BuildSingleLocationRequestData>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x1006343b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildSingleLocationRequestData>::BucketRefCounter(void*, game::BuildSingleLocationRequestData*, unsigned int): jumps straight to the base-object constructor

    // 0x1006343c0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildSingleLocationRequestData>::BucketRefCounter(void*, game::BuildSingleLocationRequestData*, unsigned int)
    void BucketRefCounter<game::BuildSingleLocationRequestData>::BucketRefCounter(
        void* param_1, BuildSingleLocationRequestData* param_2, uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7140 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildSingleLocationRequestData**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x100634420, 48 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildSingleLocationRequestData>::DeleteData()
    void BucketRefCounter<game::BuildSingleLocationRequestData>::DeleteData() {
        if (*(BuildSingleLocationRequestData**)(this + 24) != (BuildSingleLocationRequestData*)0) {
            (*(BuildSingleLocationRequestData**)(this + 24))->~BuildSingleLocationRequestData();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100634450, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildSingleLocationRequestData>::DeleteSelf()
    void BucketRefCounter<game::BuildSingleLocationRequestData>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

} // namespace jag

namespace jag::game {
    class BuildSingleLocationWorker {
    public:
        // virtual methods in vtable order
        virtual ~BuildSingleLocationWorker();
        virtual GetWorkerJobType() const;
        virtual Service(int);
        BuildSingleLocationWorker();

        // data members, from how the methods use this: 32 bytes
        undefined** field_0; // offset 0, vtable pointer
        shared_ptr field_8;  // offset 8
        char _unknown_24[8];
    };

    // 0x1006333d0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BuildSingleLocationWorker::~BuildSingleLocationWorker(): jumps straight to the base-object destructor

    // 0x1006333e0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BuildSingleLocationWorker::~BuildSingleLocationWorker()
    /* BuildFunctionWorker::~BuildFunctionWorker() */

    void BuildFunctionWorker::~BuildFunctionWorker() {
        ~BuildFunctionWorker(this);
        operator_delete(this);
    }

    // 0x100633920, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LookatData::LookatData()
    /* eastl::DequeIterator<render::DynamicBuffer<render::VertexBuffer>::Buffer,
   render::DynamicBuffer<render::VertexBuffer>::Buffer*,
   render::DynamicBuffer<render::VertexBuffer>::Buffer&, 7u>::DequeIterator() */

    void eastl::DequeIterator<
        render::DynamicBuffer<render::VertexBuffer>::Buffer, render::DynamicBuffer<render::VertexBuffer>::Buffer*,
        render::DynamicBuffer<render::VertexBuffer>::Buffer&,
        7u>::DequeIterator(DequeIterator<render::DynamicBuffer<render::VertexBuffer>::Buffer,
                                         render::DynamicBuffer<render::VertexBuffer>::Buffer*,
                                         render::DynamicBuffer<render::VertexBuffer>::Buffer&, 7u>* this) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
    }

    // 0x1006339a0, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BuildSingleLocationWorker::~BuildSingleLocationWorker()
    /* BuildFunctionWorker::~BuildFunctionWorker() */

    void BuildFunctionWorker::~BuildFunctionWorker() {
        ~AssetWorker();
    }

} // namespace jag::game

namespace jag::graphics {
    // 0x100633730, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // TerrainTextureMeta::TerrainTextureMeta()
    /* ui::ServerActiveProperties::ServerActiveProperties() */

    void ui::ServerActiveProperties::ServerActiveProperties() {
        field_0 = 18446744069414584320;
    }

} // namespace jag::graphics

namespace jag::ui {
    // 0x100633730: the linker folded this into graphics::TerrainTextureMeta::TerrainTextureMeta(), which has identical code
    ServerActiveProperties::ServerActiveProperties();

} // namespace jag::ui

namespace jag::math {
    // 0x100633930, 48 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::operator=(QuaternionT<double> const&)
    /* QuaternionT<double>::TEMPNAMEPLACEHOLDERVALUE(QuaternionT<double> const&)
    */

    QuaternionT<double>* QuaternionT<double>::operator=(QuaternionT* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 16) = *(undefined8*)(param_1 + 16);
        *(undefined8*)(this + 24) = *(undefined8*)(param_1 + 24);
        return this;
    }

} // namespace jag::math
