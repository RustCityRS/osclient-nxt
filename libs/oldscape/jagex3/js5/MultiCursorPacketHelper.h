// libs/oldscape/jagex3/js5/MultiCursorPacketHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    // 0x1003583f0
    shared_ptr_if_not_array<Array<int>>::type make_shared<Array<int>, int&>(int& arg1) {
        ref_counter_shared<Array<int> _>* ref_counter_shared;
        int local_34;
        Array<int>* local_30[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<int>>::type result;
        } else {
            local_30[0] = placement_new<Array<int>, int&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<Array<int>>, int, Array<int>*&>(arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100358490
    shared_ptr_if_not_array<Array<signed char>>::type make_shared<Array<signed char>, int&>(int& arg1) {
        ref_counter_shared<Array<signed char> _>* ref_counter_shared;
        int local_34;
        Array<signed char>* local_30[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<signed char>>::type result;
        } else {
            local_30[0] = placement_new<Array<signed char>, int&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared = placement_new<ref_counter_shared<Array<signed char>>, int, Array<signed char>*&>(
                arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100358530
    shared_ptr_if_not_array<Array<short>>::type make_shared<Array<short>, int&>(int& arg1) {
        ref_counter_shared<Array<short> _>* ref_counter_shared;
        int local_34;
        Array<short>* local_30[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<short>>::type result;
        } else {
            local_30[0] = placement_new<Array<short>, int&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<Array<short>>, int, Array<short>*&>(arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1003585d0
    shared_ptr_if_not_array<Array<Array<int>>>::type make_shared<Array<Array<int>>, int&>(int& arg1) {
        ref_counter_shared<Array<Array<int>> _>* ref_counter_shared;
        int local_34;
        Array<Array<int>>* local_30[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<Array<int>>>::type result;
        } else {
            local_30[0] = placement_new<Array<Array<int>>, int>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared = placement_new<ref_counter_shared<Array<Array<int>>>, int, Array<Array<int>>*&>(
                arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100358720
    shared_ptr_if_not_array<oldscape::dash3d::LightSource>::type make_shared<oldscape::dash3d::LightSource>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        LightSource* local_28[2];

        auto arg1 = aligned_alloc(40, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::LightSource>::type result;
        } else {
            local_28[0] = placement_new<oldscape::dash3d::LightSource>((void*)((long)arg1 + 16));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::dash3d::LightSource>, int,
                              oldscape::dash3d::LightSource*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10035b2e0
    shared_ptr_if_not_array<oldscape::dash3d::ModelUnlitImpl>::type make_shared<oldscape::dash3d::ModelUnlitImpl>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        ModelUnlitImpl* local_28[2];

        auto arg1 = aligned_alloc(632, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ModelUnlitImpl>::type result;
        } else {
            local_28[0] = placement_new<oldscape::dash3d::ModelUnlitImpl>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>, int,
                              oldscape::dash3d::ModelUnlitImpl*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10035dca0
    shared_ptr_if_not_array<Array<oldscape::dash3d::PointNormal>>::type
    make_shared<Array<oldscape::dash3d::PointNormal>, int&>(int& arg1) {
        ref_counter_shared<Array<oldscape::dash3d::PointNormal> _>* ref_counter_shared;
        int local_34;
        Array<oldscape::dash3d::PointNormal>* local_30[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<oldscape::dash3d::PointNormal>>::type result;
        } else {
            local_30[0] = placement_new<Array<oldscape::dash3d::PointNormal>, int&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared = placement_new<ref_counter_shared<Array<oldscape::dash3d::PointNormal>>, int,
                                               Array<oldscape::dash3d::PointNormal>*&>(arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10035de40
    shared_ptr_if_not_array<Array<oldscape::dash3d::FaceNormal>>::type
    make_shared<Array<oldscape::dash3d::FaceNormal>, int&>(int& arg1) {
        ref_counter_shared<Array<oldscape::dash3d::FaceNormal> _>* ref_counter_shared;
        int local_34;
        Array<oldscape::dash3d::FaceNormal>* local_30[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<oldscape::dash3d::FaceNormal>>::type result;
        } else {
            local_30[0] = placement_new<Array<oldscape::dash3d::FaceNormal>, int&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared = placement_new<ref_counter_shared<Array<oldscape::dash3d::FaceNormal>>, int,
                                               Array<oldscape::dash3d::FaceNormal>*&>(arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10035f470
    shared_ptr_if_not_array<Array<short>>::type make_shared<Array<short>, unsigned long>(unsigned long&& arg1) {
        ref_counter_shared<Array<short> _>* ref_counter_shared;
        int local_34;
        Array<short>* local_30[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<short>>::type result;
        } else {
            local_30[0] = placement_new<Array<short>, unsigned long>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<Array<short>>, int, Array<short>*&>(arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::oldscape::jagex3 {
    class MultiCursorPacketHelper {
    public:
        MultiCursorPacketHelper(const unsigned char* arg1, unsigned long arg2);
        void SetPos(unsigned long arg1, unsigned long arg2);
        uint16_t g2(unsigned long arg1);
        uint8_t g1(unsigned long arg1);
        int g1s(unsigned long arg1);
        int gSmart(unsigned long arg1);
        uint32_t g4(unsigned long arg1);
        ~MultiCursorPacketHelper();

        uint8_t _unknown_0[64];
    };

    // 0x1003582a0
    uint16_t MultiCursorPacketHelper::g2(unsigned long arg1) {
        uint8_t* this_00 = &field_56;
        unsigned long* puVar2 = (unsigned long*)(*this)[arg1];
        this_00->SetPos(*puVar2);
        uint16_t uVar1 = this_00->g2();
        uint64_t uVar3 = this_00->size();
        uint64_t* puVar4 = (uint64_t*)(*this)[arg1];
        *puVar4 = uVar3;
        return uVar1;
    }

    // 0x100358310
    uint8_t MultiCursorPacketHelper::g1(unsigned long arg1) {
        uint8_t* this_00 = &field_56;
        unsigned long* puVar2 = (unsigned long*)(*this)[arg1];
        this_00->SetPos(*puVar2);
        uint8_t uVar1 = this_00->g1();
        uint64_t uVar3 = this_00->size();
        uint64_t* puVar4 = (uint64_t*)(*this)[arg1];
        *puVar4 = uVar3;
        return uVar1;
    }

    // 0x100358380
    int MultiCursorPacketHelper::g1s(unsigned long arg1) {
        uint8_t* this_00 = &field_56;
        unsigned long* puVar2 = (unsigned long*)(*this)[arg1];
        this_00->SetPos(*puVar2);
        bool cVar1 = this_00->g1s();
        uint64_t uVar3 = this_00->size();
        uint64_t* puVar4 = (uint64_t*)(*this)[arg1];
        *puVar4 = uVar3;
        return (int)cVar1;
    }

    // 0x100358670
    int MultiCursorPacketHelper::gSmart(unsigned long arg1) {
        uint8_t* this_00 = &field_56;
        unsigned long* puVar2 = (unsigned long*)(*this)[arg1];
        this_00->SetPos(*puVar2);
        short sVar1 = this_00->gSmart();
        uint64_t uVar3 = this_00->size();
        uint64_t* puVar4 = (uint64_t*)(*this)[arg1];
        *puVar4 = uVar3;
        return (int)sVar1;
    }

    // 0x100358830
    uint32_t MultiCursorPacketHelper::g4(unsigned long arg1) {
        uint8_t* this_00 = &field_56;
        unsigned long* puVar2 = (unsigned long*)(*this)[arg1];
        this_00->SetPos(*puVar2);
        uint32_t uVar1 = this_00->g4();
        uint64_t uVar3 = this_00->size();
        uint64_t* puVar4 = (uint64_t*)(*this)[arg1];
        *puVar4 = uVar3;
        return uVar1;
    }

    // 0x100371dc0
    MultiCursorPacketHelper::~MultiCursorPacketHelper() {
        field_56.~PacketJ();
    }

} // namespace jag::oldscape::jagex3

namespace jag::math {
    // 0x10035fd70
    Vector3T<int> operator+ <int>(const Vector3T<int>& vector31, const Vector3T<int>& vector32) {
        uint8_t auVar1[16];

        LocationData local_18(*(int*)vector32 + *(int*)vector31, *(int*)(vector32 + 4) + *(int*)(vector31 + 4),
                              *(int*)(vector32 + 8) + *(int*)(vector31 + 8));
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

    // 0x100360160
    Vector2T<float>* Vector2T<float>::operator/=(const Vector2T<float>& vector2) {
        *(float*)this = *(float*)this / *(float*)vector2;
        *(float*)(this + 4) = *(float*)(this + 4) / *(float*)(vector2 + 4);
        return this;
    }

} // namespace jag::math

namespace jag::oldscape::dash3d {
    // 0x10035f510
    ModelUnlitImpl* ModelUnlitImpl::GetTempModel(int arg1) {
        new (this) shared_ptr();
        return this;
    }

} // namespace jag::oldscape::dash3d
