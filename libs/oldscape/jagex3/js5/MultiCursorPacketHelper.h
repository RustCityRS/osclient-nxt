// libs/oldscape/jagex3/js5/MultiCursorPacketHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    // 0x1003583f0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<int, eastl::allocator> >::type make_shared<Array<int, eastl::allocator>, int&>(int&)
    jag* make_shared<Array<int, eastl::allocator>, int&>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<Array<int, eastl::allocator>, int&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<Array<int, eastl::allocator>>, int, Array<int, eastl::allocator>*&>(
                    pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100358490, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<signed char, eastl::allocator> >::type make_shared<Array<signed char, eastl::allocator>, int&>(int&)
    jag* make_shared<Array<signed char, eastl::allocator>, int&>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<Array<signed char, eastl::allocator>, int&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<Array<signed char, eastl::allocator>>, int,
                                   Array<signed char, eastl::allocator>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100358530, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<short, eastl::allocator> >::type make_shared<Array<short, eastl::allocator>, int&>(int&)
    jag* make_shared<Array<short, eastl::allocator>, int&>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<Array<short, eastl::allocator>, int&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<Array<short, eastl::allocator>>, int,
                                   Array<short, eastl::allocator>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1003585d0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<Array<int, eastl::allocator>, eastl::allocator> >::type make_shared<Array<Array<int, eastl::allocator>, eastl::allocator>, int&>(int&)
    /* shared_ptr_if_not_array<Array<Array<int, eastl::allocator>, eastl::allocator>
   >::type make_shared<Array<Array<int, eastl::allocator>, eastl::allocator>,
   int>(int&&) */

    jag* make_shared<Array<Array<int, eastl::allocator>, eastl::allocator>, int>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<Array<Array<int, eastl::allocator>, eastl::allocator>, int>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<Array<Array<int, eastl::allocator>, eastl::allocator>>, int,
                              Array<Array<int, eastl::allocator>, eastl::allocator>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100358720, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::LightSource>::type make_shared<oldscape::dash3d::LightSource>()
    jag* make_shared<oldscape::dash3d::LightSource>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        LightSource* local_28[2];

        pvVar1 = (void*)aligned_alloc(40, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::dash3d::LightSource>((void*)((long)pvVar1 + 16));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::dash3d::LightSource>, int,
                                   oldscape::dash3d::LightSource*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10035b2e0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ModelUnlitImpl>::type make_shared<oldscape::dash3d::ModelUnlitImpl>()
    jag* make_shared<oldscape::dash3d::ModelUnlitImpl>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        ModelUnlitImpl* local_28[2];

        pvVar1 = (void*)aligned_alloc(632, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::dash3d::ModelUnlitImpl>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ModelUnlitImpl>, int,
                                   oldscape::dash3d::ModelUnlitImpl*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10035dca0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<oldscape::dash3d::PointNormal, eastl::allocator> >::type make_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator>, int&>(int&)
    jag* make_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator>, int&>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<Array<oldscape::dash3d::PointNormal, eastl::allocator>, int&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator>>, int,
                              Array<oldscape::dash3d::PointNormal, eastl::allocator>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10035de40, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<oldscape::dash3d::FaceNormal, eastl::allocator> >::type make_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator>, int&>(int&)
    jag* make_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator>, int&>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<Array<oldscape::dash3d::FaceNormal, eastl::allocator>, int&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator>>, int,
                              Array<oldscape::dash3d::FaceNormal, eastl::allocator>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10035f470, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<short, eastl::allocator> >::type make_shared<Array<short, eastl::allocator>, unsigned long>(unsigned long&&)
    jag* make_shared<Array<short, eastl::allocator>, unsigned long>(ulong* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<Array<short, eastl::allocator>, unsigned long>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<Array<short, eastl::allocator>>, int,
                                   Array<short, eastl::allocator>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::oldscape::jagex3 {
    class MultiCursorPacketHelper {
    public:
        MultiCursorPacketHelper(unsigned char const*, unsigned long);
        void SetPos(unsigned long, unsigned long);
        g2(unsigned long);
        g1(unsigned long);
        int g1s(unsigned long);
        int gSmart(unsigned long);
        g4(unsigned long);
        ~MultiCursorPacketHelper();

        // data members, from how the methods use this: 64 bytes
        char _unknown_0[64];
    };

    // 0x1003582a0, 112 bytes, inline, placed by class name and debug map
    // MultiCursorPacketHelper::g2(unsigned long)
    undefined2 MultiCursorPacketHelper::g2(ulong param_1) {
        undefined1* this_00;
        undefined2 uVar1;
        ulong* puVar2;
        undefined8 uVar3;
        undefined8* puVar4;
        ulong local_30;

        this_00 = &field_56;
        local_30 = param_1;
        puVar2 = (ulong*)eastl::hash_map<
            unsigned long, unsigned long, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>, eastl::allocator,
            false>::operator[]((hash_map<unsigned long, unsigned long, eastl::hash<unsigned long>,
                                         eastl::equal_to<unsigned long>, eastl::allocator, false>*)this,
                               &local_30);
        this_00->SetPos(*puVar2);
        uVar1 = this_00->g2();
        uVar3 = this_00->size();
        puVar4 = (undefined8*)eastl::hash_map<
            unsigned long, unsigned long, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>, eastl::allocator,
            false>::operator[]((hash_map<unsigned long, unsigned long, eastl::hash<unsigned long>,
                                         eastl::equal_to<unsigned long>, eastl::allocator, false>*)this,
                               &local_30);
        *puVar4 = uVar3;
        return uVar1;
    }

    // 0x100358310, 112 bytes, inline, placed by class name and debug map
    // MultiCursorPacketHelper::g1(unsigned long)
    undefined1 MultiCursorPacketHelper::g1(ulong param_1) {
        undefined1* this_00;
        undefined1 uVar1;
        ulong* puVar2;
        undefined8 uVar3;
        undefined8* puVar4;
        ulong local_30;

        this_00 = &field_56;
        local_30 = param_1;
        puVar2 = (ulong*)eastl::hash_map<
            unsigned long, unsigned long, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>, eastl::allocator,
            false>::operator[]((hash_map<unsigned long, unsigned long, eastl::hash<unsigned long>,
                                         eastl::equal_to<unsigned long>, eastl::allocator, false>*)this,
                               &local_30);
        this_00->SetPos(*puVar2);
        uVar1 = this_00->g1();
        uVar3 = this_00->size();
        puVar4 = (undefined8*)eastl::hash_map<
            unsigned long, unsigned long, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>, eastl::allocator,
            false>::operator[]((hash_map<unsigned long, unsigned long, eastl::hash<unsigned long>,
                                         eastl::equal_to<unsigned long>, eastl::allocator, false>*)this,
                               &local_30);
        *puVar4 = uVar3;
        return uVar1;
    }

    // 0x100358380, 112 bytes, inline, placed by class name and debug map
    // MultiCursorPacketHelper::g1s(unsigned long)
    int MultiCursorPacketHelper::g1s(ulong param_1) {
        undefined1* this_00;
        char cVar1;
        ulong* puVar2;
        undefined8 uVar3;
        undefined8* puVar4;
        ulong local_30;

        this_00 = &field_56;
        local_30 = param_1;
        puVar2 = (ulong*)eastl::hash_map<
            unsigned long, unsigned long, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>, eastl::allocator,
            false>::operator[]((hash_map<unsigned long, unsigned long, eastl::hash<unsigned long>,
                                         eastl::equal_to<unsigned long>, eastl::allocator, false>*)this,
                               &local_30);
        this_00->SetPos(*puVar2);
        cVar1 = this_00->g1s();
        uVar3 = this_00->size();
        puVar4 = (undefined8*)eastl::hash_map<
            unsigned long, unsigned long, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>, eastl::allocator,
            false>::operator[]((hash_map<unsigned long, unsigned long, eastl::hash<unsigned long>,
                                         eastl::equal_to<unsigned long>, eastl::allocator, false>*)this,
                               &local_30);
        *puVar4 = uVar3;
        return (int)cVar1;
    }

    // 0x100358670, 112 bytes, inline, placed by class name and debug map
    // MultiCursorPacketHelper::gSmart(unsigned long)
    int MultiCursorPacketHelper::gSmart(ulong param_1) {
        undefined1* this_00;
        short sVar1;
        ulong* puVar2;
        undefined8 uVar3;
        undefined8* puVar4;
        ulong local_30;

        this_00 = &field_56;
        local_30 = param_1;
        puVar2 = (ulong*)eastl::hash_map<
            unsigned long, unsigned long, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>, eastl::allocator,
            false>::operator[]((hash_map<unsigned long, unsigned long, eastl::hash<unsigned long>,
                                         eastl::equal_to<unsigned long>, eastl::allocator, false>*)this,
                               &local_30);
        this_00->SetPos(*puVar2);
        sVar1 = this_00->gSmart();
        uVar3 = this_00->size();
        puVar4 = (undefined8*)eastl::hash_map<
            unsigned long, unsigned long, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>, eastl::allocator,
            false>::operator[]((hash_map<unsigned long, unsigned long, eastl::hash<unsigned long>,
                                         eastl::equal_to<unsigned long>, eastl::allocator, false>*)this,
                               &local_30);
        *puVar4 = uVar3;
        return (int)sVar1;
    }

    // 0x100358830, 112 bytes, inline, placed by class name and debug map
    // MultiCursorPacketHelper::g4(unsigned long)
    undefined4 MultiCursorPacketHelper::g4(ulong param_1) {
        undefined1* this_00;
        undefined4 uVar1;
        ulong* puVar2;
        undefined8 uVar3;
        undefined8* puVar4;
        ulong local_30;

        this_00 = &field_56;
        local_30 = param_1;
        puVar2 = (ulong*)eastl::hash_map<
            unsigned long, unsigned long, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>, eastl::allocator,
            false>::operator[]((hash_map<unsigned long, unsigned long, eastl::hash<unsigned long>,
                                         eastl::equal_to<unsigned long>, eastl::allocator, false>*)this,
                               &local_30);
        this_00->SetPos(*puVar2);
        uVar1 = this_00->g4();
        uVar3 = this_00->size();
        puVar4 = (undefined8*)eastl::hash_map<
            unsigned long, unsigned long, eastl::hash<unsigned long>, eastl::equal_to<unsigned long>, eastl::allocator,
            false>::operator[]((hash_map<unsigned long, unsigned long, eastl::hash<unsigned long>,
                                         eastl::equal_to<unsigned long>, eastl::allocator, false>*)this,
                               &local_30);
        *puVar4 = uVar3;
        return uVar1;
    }

    // 0x1003588a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MultiCursorPacketHelper::~MultiCursorPacketHelper(): jumps straight to the base-object destructor

    // 0x100371dc0, 48 bytes, base-object destructor, inline, placed by class name
    // MultiCursorPacketHelper::~MultiCursorPacketHelper()
    void MultiCursorPacketHelper::~MultiCursorPacketHelper() {
        (&field_56)->~PacketJ();
        ~hash_map();
    }

} // namespace jag::oldscape::jagex3

namespace jag::math {
    // 0x10035fd70, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<int> operator+<int>(Vector3T<int> const&, Vector3T<int> const&)
    /* Vector3T<int> TEMPNAMEPLACEHOLDERVALUE(Vector3T<int> const&,
   Vector3T<int> const&) */

    undefined1[16] operator+(Vector3T * param_1, Vector3T * param_2) {
        undefined1 auVar1[16];
        LocationData local_18;

        new (&local_18) oldscape::rs2lib::worldmap::LocationData(*(int*)param_2 + *(int*)param_1,
                                                                 *(int*)(param_2 + 4) + *(int*)(param_1 + 4),
                                                                 *(int*)(param_2 + 8) + *(int*)(param_1 + 8));
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

    // 0x100360160, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float>::operator/=(Vector2T<float> const&)
    /* Vector2T<float>::TEMPNAMEPLACEHOLDERVALUE(Vector2T<float> const&) */

    Vector2T<float>* Vector2T<float>::operator/=(Vector2T* param_1) {
        *(float*)this = *(float*)this / *(float*)param_1;
        *(float*)(this + 4) = *(float*)(this + 4) / *(float*)(param_1 + 4);
        return this;
    }

    // 0x100360190, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector2T<float>::Vector2T(float): jumps straight to the base-object constructor

} // namespace jag::math

namespace jag::oldscape::dash3d {
    // 0x10035f510, 32 bytes, placed by debug map only (low confidence)
    // ModelUnlitImpl::GetTempModel(int)
    ModelUnlitImpl* ModelUnlitImpl::GetTempModel(int param_1) {
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this;
    }

} // namespace jag::oldscape::dash3d
