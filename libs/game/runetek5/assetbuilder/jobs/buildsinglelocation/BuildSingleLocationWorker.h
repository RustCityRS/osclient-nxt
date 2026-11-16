// libs/game/runetek5/assetbuilder/jobs/buildsinglelocation/BuildSingleLocationWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100634360
    game::BuildSingleLocationRequestData*
    placement_new<game::BuildSingleLocationRequestData, shared_ptr<game::LocType> const&,
                  shared_ptr<game::LocType> const&, shared_ptr<graphics::Model> const&, Rotation90&, int&,
                  Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                  Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
        void* arg1, const shared_ptr<game::LocType>& locType1, const shared_ptr<game::LocType>& locType2,
        const shared_ptr<graphics::Model>& model, Rotation90& rotation90, int& arg6,
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&& arg7,
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&& arg8) {
        new (arg1) game::BuildSingleLocationRequestData(locType1, locType2, model,
                                                        (unsigned int)(uint8_t)(char)*rotation90, arg6, arg7, arg8);
        return arg1;
    }

    // 0x100634390
    BucketRefCounter<game::BuildSingleLocationRequestData>*
    placement_new<BucketRefCounter<game::BuildSingleLocationRequestData>,
                  managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationRequestData>,
                                               game::BuildSingleLocationRequestData>*&,
                  game::BuildSingleLocationRequestData*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationRequestData>,
                                     game::BuildSingleLocationRequestData>*& arg2,
        game::BuildSingleLocationRequestData*& arg3) {
        new (arg1) BucketRefCounter<game::BuildSingleLocationRequestData>(arg2, arg3, 0);
        return arg1;
    }

    // 0x1006343c0
    BucketRefCounter<game::BuildSingleLocationRequestData>::BucketRefCounter(
        void* arg1, game::BuildSingleLocationRequestData* buildSingleLocationRequestData, unsigned int arg3)
        : ref_counter_base() {}

    // 0x100634420
    void BucketRefCounter<game::BuildSingleLocationRequestData>::DeleteData() {
        if ((BuildSingleLocationRequestData*)this[3]._vptr != nullptr) {
            this[3]._vptr->~BuildSingleLocationRequestData();
            this[3]._vptr = nullptr;
        }
    }

    // 0x100634450
    void BucketRefCounter<game::BuildSingleLocationRequestData>::DeleteSelf() {
        BucketRefCounter<game::BuildSingleLocationRequestData> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildSingleLocationRequestData> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

} // namespace jag

namespace jag::game {
    class BuildSingleLocationWorker {
    public:
        // virtual methods in vtable order
        virtual ~BuildSingleLocationWorker();
        virtual uint64_t GetWorkerJobType() const;
        virtual uint8_t* Service(int arg1);
        BuildSingleLocationWorker();

    private:
        shared_ptr field_8;
        uint8_t _unknown_24[8];
    };

    // 0x100633920
    LookatData::LookatData() {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
    }

    // 0x1006339a0
    BuildSingleLocationWorker::~BuildSingleLocationWorker() {}

} // namespace jag::game

namespace jag::graphics {
    // 0x100633730
    TerrainTextureMeta::TerrainTextureMeta() : field_0(18446744069414584320) {}

} // namespace jag::graphics

namespace jag::ui {
    // 0x100633730: ServerActiveProperties::ServerActiveProperties() has the same machine code as graphics::TerrainTextureMeta::TerrainTextureMeta()

} // namespace jag::ui

namespace jag::math {
    // 0x100633930
    QuaternionT<double>* QuaternionT<double>::operator=(const QuaternionT<double>& quaternion) {
        *(uint64_t*)this = *(uint64_t*)quaternion;
        *(uint64_t*)(this + 8) = *(uint64_t*)(quaternion + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)(quaternion + 16);
        *(uint64_t*)(this + 24) = *(uint64_t*)(quaternion + 24);
        return this;
    }

} // namespace jag::math
