// libs/oldscape/jagex3/dash3d/ModelSource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "ModelSource.h"

namespace jag::oldscape::dash3d {
    // 0x100009e70: ModelSource::~ModelSource() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: ModelSource::GetUniqueID(unsigned long long&) const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100352e40
    UniqueModelSource::UniqueModelSource() : ModelSource() {
        UniqueModelSource()::idGenerator = UniqueModelSource()::idGenerator + 1;
        field_16 = UniqueModelSource()::idGenerator;
    }

    // 0x100352e80
    uint64_t UniqueModelSource::GetUniqueID(unsigned long long& arg1) const {
        arg1 = field_16;
        return 1;
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100353080
    shared_ptr_if_not_array<oldscape::dash3d::ModelUnlitImpl>::type
    make_shared<oldscape::dash3d::ModelUnlitImpl,
                eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL> const&>(
        const eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>& modelUnlits) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        ModelUnlitImpl* local_30[2];

        auto arg1 = aligned_alloc(632, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ModelUnlitImpl>::type result;
        } else {
            local_30[0] =
                placement_new<oldscape::dash3d::ModelUnlitImpl,
                              eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL> const&>(
                    (void*)((long)arg1 + 32), modelUnlits);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>, int,
                              oldscape::dash3d::ModelUnlitImpl*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1003531e0
    shared_ptr_if_not_array<oldscape::dash3d::ModelUnlitImpl>::type
    make_shared<oldscape::dash3d::ModelUnlitImpl, oldscape::dash3d::ModelUnlitImpl const&, bool&, bool&, bool&, bool&>(
        const oldscape::dash3d::ModelUnlitImpl& modelUnlitImpl, bool& arg2, bool& arg3, bool& arg4, bool& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        ModelUnlitImpl* local_40[2];

        auto arg1 = aligned_alloc(632, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ModelUnlitImpl>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::dash3d::ModelUnlitImpl, oldscape::dash3d::ModelUnlitImpl const&, bool&, bool&,
                              bool&, bool&>((void*)((long)arg1 + 32), modelUnlitImpl, arg2, arg3, arg4, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>, int,
                              oldscape::dash3d::ModelUnlitImpl*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100353a80
    shared_ptr_if_not_array<oldscape::dash3d::ModelUnlitImpl>::type
    make_shared<oldscape::dash3d::ModelUnlitImpl, unsigned char*&, unsigned long, int>(unsigned char*& arg1,
                                                                                       unsigned long&& arg2,
                                                                                       int&& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        ModelUnlitImpl* local_40[2];

        auto arg1_00 = aligned_alloc(632, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ModelUnlitImpl>::type result;
        } else {
            local_40[0] = placement_new<oldscape::dash3d::ModelUnlitImpl, unsigned char*&, unsigned long, int>(
                (void*)((long)arg1_00 + 32), arg1, arg2, arg3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>, int,
                              oldscape::dash3d::ModelUnlitImpl*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag
