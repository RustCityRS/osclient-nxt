// libs/oldscape/jagex3/dash3d/Occlude.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100308140
    shared_ptr_if_not_array<oldscape::dash3d::QuickGround>::type
    make_shared<oldscape::dash3d::QuickGround, int&, int&, int&, int&, int, int&, bool, bool>(
        int& arg1, int& arg2, int& arg3, int& arg4, int&& arg5, int& arg6, bool&& arg7, bool&& arg8) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        bool* in_stack_00000018;
        int local_44;
        QuickGround* local_40[2];

        auto arg1_00 = aligned_alloc(48, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<oldscape::dash3d::QuickGround, int&, int&, int&, int&, int&, int&, bool, bool>(
                (void*)((long)arg1_00 + 16), arg2, arg3, arg4, arg5, arg6, (int*)arg7, arg8, in_stack_00000018);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::dash3d::QuickGround>, int,
                              oldscape::dash3d::QuickGround*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x100308250
    shared_ptr_if_not_array<oldscape::dash3d::Ground>::type
    make_shared<oldscape::dash3d::Ground, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&, int&,
                int&, int&, int&, int&, int&, int&>(int& arg1, int& arg2, int& arg3, int& arg4, int& arg5, int& arg6,
                                                    int& arg7, int& arg8, int& arg9, int& arg10, int& arg11, int& arg12,
                                                    int& arg13, int& arg14, int& arg15, int& arg16, int& arg17,
                                                    int& arg18, int& arg19) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000070;
        int local_44;
        Ground* local_40[2];

        auto arg1_00 = aligned_alloc(392, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<oldscape::dash3d::Ground, int&, int&, int&, int&, int&, int&, int&, int&, int&,
                                        int&, int&, int&, int&, int&, int&, int&, int&, int&, int&>(
                (void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13,
                arg14, arg15, arg16, arg17, arg18, arg19, in_stack_00000070);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::Ground>, int, oldscape::dash3d::Ground*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x1003084b0
    shared_ptr_if_not_array<oldscape::dash3d::GroundDecor>::type make_shared<oldscape::dash3d::GroundDecor>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        GroundDecor* local_28[2];

        auto arg1 = aligned_alloc(88, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::GroundDecor>::type result;
        } else {
            local_28[0] = placement_new<oldscape::dash3d::GroundDecor>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::GroundDecor>, int, oldscape::dash3d::GroundDecor*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1003086f0
    shared_ptr_if_not_array<oldscape::dash3d::GroundObject>::type make_shared<oldscape::dash3d::GroundObject>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        GroundObject* local_28[2];

        auto arg1 = aligned_alloc(120, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::GroundObject>::type result;
        } else {
            local_28[0] = placement_new<oldscape::dash3d::GroundObject>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::GroundObject>, int,
                              oldscape::dash3d::GroundObject*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100308b40
    shared_ptr_if_not_array<oldscape::dash3d::Wall>::type make_shared<oldscape::dash3d::Wall>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        Wall* local_28[2];

        auto arg1 = aligned_alloc(112, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::Wall>::type result;
        } else {
            local_28[0] = placement_new<oldscape::dash3d::Wall>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::Wall>, int, oldscape::dash3d::Wall*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100308dc0
    shared_ptr_if_not_array<oldscape::dash3d::Decor>::type make_shared<oldscape::dash3d::Decor>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        Decor* local_28[2];

        auto arg1 = aligned_alloc(120, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::Decor>::type result;
        } else {
            local_28[0] = placement_new<oldscape::dash3d::Decor>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::Decor>, int, oldscape::dash3d::Decor*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class Occlude {
    public:
        Occlude();
    };

    // 0x100326ef0
    Occlude::Occlude() {
        *(uint64_t*)(this + 48) = 0;
        *(uint64_t*)(this + 56) = 0;
        *(uint64_t*)(this + 32) = 0;
        *(uint64_t*)(this + 40) = 0;
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 64) = 0;
    }

} // namespace jag::oldscape::dash3d
