// libs/oldscape/jagex3/dash3d/ModelSource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "ModelSource.h"

namespace jag::oldscape::dash3d {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ModelSource::~ModelSource();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ModelSource::GetUniqueID(unsigned long long&) const;

    // 0x100352e40, 64 bytes, base-object constructor, placed by debug map only (low confidence)
    // UniqueModelSource::UniqueModelSource()
    void UniqueModelSource::UniqueModelSource() {
        new (this) ModelSource();
        field_0 = &PTR__OptionStore_100efbdd0;
        UniqueModelSource()::idGenerator = UniqueModelSource()::idGenerator + 1;
        field_16 = UniqueModelSource()::idGenerator;
    }

    // 0x100352e80, 16 bytes, placed by debug map only (low confidence)
    // UniqueModelSource::GetUniqueID(unsigned long long&) const
    undefined8 UniqueModelSource::GetUniqueID(ulonglong* param_1) {
        ulonglong uVar1;

        uVar1 = field_16;
        *param_1 = uVar1;
        return CONCAT71((int7)(uVar1 >> 8), 1);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ModelSource::~ModelSource();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ModelSource::~ModelSource();

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100353080, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ModelUnlitImpl>::type make_shared<oldscape::dash3d::ModelUnlitImpl, eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL> const&>(eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL> const&)
    jag* jag::make_shared<oldscape::dash3d::ModelUnlitImpl,
                          eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL> const&>(
        vector* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        ModelUnlitImpl* local_30[2];

        pvVar1 = (void*)aligned_alloc(632, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<oldscape::dash3d::ModelUnlitImpl,
                              eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL> const&>(
                    (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>, int,
                                   oldscape::dash3d::ModelUnlitImpl*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1003531e0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ModelUnlitImpl>::type make_shared<oldscape::dash3d::ModelUnlitImpl, oldscape::dash3d::ModelUnlitImpl const&, bool&, bool&, bool&, bool&>(oldscape::dash3d::ModelUnlitImpl const&, bool&, bool&, bool&, bool&)
    jag* jag::make_shared<oldscape::dash3d::ModelUnlitImpl, oldscape::dash3d::ModelUnlitImpl_const&, bool&, bool&,
                          bool&, bool&>(ModelUnlitImpl* param_1, bool* param_2, bool* param_3, bool* param_4,
                                        bool* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ModelUnlitImpl* local_40[2];

        pvVar1 = (void*)aligned_alloc(632, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::dash3d::ModelUnlitImpl, oldscape::dash3d::ModelUnlitImpl_const&, bool&, bool&,
                              bool&, bool&>((void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>, int,
                                   oldscape::dash3d::ModelUnlitImpl*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100353a80, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ModelUnlitImpl>::type make_shared<oldscape::dash3d::ModelUnlitImpl, unsigned char*&, unsigned long, int>(unsigned char*&, unsigned long&&, int&&)
    jag* make_shared<oldscape::dash3d::ModelUnlitImpl, unsigned char*&, unsigned long, int>(uchar** param_1,
                                                                                            ulong* param_2,
                                                                                            int* param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ModelUnlitImpl* local_40[2];

        pvVar1 = (void*)aligned_alloc(632, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::dash3d::ModelUnlitImpl, unsigned char*&, unsigned long, int>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>, int,
                                   oldscape::dash3d::ModelUnlitImpl*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
