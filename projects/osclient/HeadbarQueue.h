// projects/osclient/HeadbarQueue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class HeadbarQueue {
    public:
        EventCurrent(int);
        void ListEmpty();
        void EventAdd(int, int, int, int);
        HeadbarQueue(shared_ptr<HeadbarType> const&);
        ~HeadbarQueue();

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[24];
    };

    // 0x100110b00, 336 bytes, inline, placed by class name and debug map
    // HeadbarQueue::EventCurrent(int)
    HeadbarQueue* HeadbarQueue::EventCurrent(int param_1) {
        hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                  eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        int iVar1;
        int iVar2;
        char cVar3;
        shared_ptr<Headbar>* psVar4;
        int* piVar5;
        long lVar6;
        shared_ptr* psVar7;
        int in_EDX;
        undefined4 in_register_00000034;
        list<console::Line, eastl::allocator> local_70[8];
        undefined1 local_68[8];
        list<console::Line, eastl::allocator> local_60[8];
        undefined8 local_58;
        undefined8 local_50;
        undefined8 local_48;
        ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&> local_40[8];
        eastl local_38[8];

        this_00 =
            (hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
                       eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                       true>*)((shared_ptr<HeadbarType>*)CONCAT44(in_register_00000034, param_1) + 16);
        cVar3 = eastl::hashtable<
            eastl::string, eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>,
            eastl::allocator,
            eastl::use_first<eastl::pair<eastl::stringconst, eastl::vector<unsigned int, eastl::allocator>>>,
            eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::empty(this_00);
        if (cVar3 == '\0') {
            psVar4 = (shared_ptr<Headbar>*)eastl::list<shared_ptr<Headbar>, eastl::allocator>::front();
            piVar5 = (int*)shared_ptr<Headbar>::operator->(psVar4);
            if (*piVar5 <= in_EDX) {
                eastl::list<console::Line, eastl::allocator>::begin(local_60);
                eastl::list<console::Line, eastl::allocator>::end(local_70);
                eastl::find_if<eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>,
                               int->EventCurrent()::_lambda(shared_ptr<Headbar>&) _1_>(local_38, local_60, local_70,
                                                                                       in_EDX);
                eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::operator--(
                    local_40, (int)local_38);
                local_40->begin();
                new (&local_58) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                                    shared_ptr<rs2lib::worldmap::MapElement> const*,
                                                    shared_ptr<rs2lib::worldmap::MapElement> const&>(local_40);
                new (&local_50) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                                    shared_ptr<rs2lib::worldmap::MapElement> const*,
                                                    shared_ptr<rs2lib::worldmap::MapElement> const&>(local_38);
                eastl::list<shared_ptr<ClientObj>, eastl::allocator>::erase(local_68, this_00, local_58, local_50);
                psVar4 =
                    (shared_ptr<Headbar>*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                piVar5 = (int*)shared_ptr<Headbar>::operator->(psVar4);
                iVar1 = *piVar5;
                psVar4 =
                    (shared_ptr<Headbar>*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                lVar6 = shared_ptr<Headbar>::operator->(psVar4);
                iVar2 = *(int*)(lVar6 + 12);
                lVar6 = shared_ptr<HeadbarType>::operator->(
                    (shared_ptr<HeadbarType>*)CONCAT44(in_register_00000034, param_1));
                if (in_EDX < iVar1 + iVar2 + *(int*)(lVar6 + 24)) {
                    psVar7 = (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                    new (this) shared_ptr<dash3d::Decor>(psVar7);
                    return this;
                }
                new (&local_48) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                                    shared_ptr<rs2lib::worldmap::MapElement> const*,
                                                    shared_ptr<rs2lib::worldmap::MapElement> const&>(local_38);
                eastl::list<shared_ptr<ClientObj>, eastl::allocator>::erase(local_40, this_00, local_48);
            }
        }
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this;
    }

    // 0x100110cd0, 16 bytes, inline, placed by class name and debug map
    // HeadbarQueue::ListEmpty()
    void HeadbarQueue::ListEmpty() {
        (&field_16)->empty();
    }

    // 0x10011c0f0, 560 bytes, inline, placed by class name
    // HeadbarQueue::EventAdd(int, int, int, int)
    void HeadbarQueue::EventAdd(int param_1, int param_2, int param_3, int param_4) {
        ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>* this_00;
        int iVar1;
        int iVar2;
        bool bVar3;
        uint uVar4;
        shared_ptr<Headbar>* psVar5;
        int* piVar6;
        GridRect* this_01;
        undefined8 uVar7;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        int iVar8;
        undefined8 local_78;
        undefined1 local_70[16];
        shared_ptr local_60;
        list<shared_ptr<Headbar>, eastl::allocator>* local_50;
        int local_44;
        int local_40;
        int local_3c;
        uint local_38;
        int local_34;

        local_44 = param_2;
        local_40 = param_3;
        local_3c = param_4;
        local_34 = param_1;
        local_70->begin();
        local_60.begin();
        local_50 = (list<shared_ptr<Headbar>, eastl::allocator>*)&field_16;
        ((local_70 + 8))->end();
        bVar3 = eastl::operator!=((eastl*)&local_60, (hashtable_iterator_base*)(local_70 + 8), extraout_RDX);
        uVar4 = 0;
        if (bVar3) {
            psVar5 =
                (shared_ptr<Headbar>*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_60);
            piVar6 = (int*)shared_ptr<Headbar>::operator->(psVar5);
            iVar1 = local_34;
            iVar8 = *piVar6;
            psVar5 =
                (shared_ptr<Headbar>*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_60);
            this_01 = (GridRect*)shared_ptr<Headbar>::operator->(psVar5);
            if (iVar8 == iVar1) {
                local_38 = 0;
                iVar8 = 1;
            } else {
                iVar8 = 1;
                local_38 = 0;
                do {
                    if (this_01->field_0 <= local_34) {
                        local_70._0_8_ = local_60._0_8_;
                        uVar7 = eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::
                        operator++(
                            (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)(local_70 +
                                                                                                             8),
                            (int)local_70);
                        local_38 = (uint)CONCAT71((int7)((ulong)uVar7 >> 8), 1);
                    }
                    this_00 =
                        (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)(local_70 + 8);
                    eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>::operator++(
                        this_00, (int)&local_60);
                    this_00->end();
                    bVar3 = eastl::operator!=((eastl*)&local_60, (hashtable_iterator_base*)this_00, extraout_RDX_00);
                    if (!bVar3)
                        goto LAB_10011c25a;
                    iVar8 = iVar8 + 1;
                    psVar5 = (shared_ptr<Headbar>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_60);
                    piVar6 = (int*)shared_ptr<Headbar>::operator->(psVar5);
                    iVar2 = local_34;
                    iVar1 = *piVar6;
                    psVar5 = (shared_ptr<Headbar>*)
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_60);
                    this_01 = (GridRect*)shared_ptr<Headbar>::operator->(psVar5);
                } while (iVar1 != iVar2);
            }
            dash3d::GridRect::GridRect(this_01, local_34, local_44, local_40, local_3c);
        LAB_10011c25a:
            uVar4 = local_38;
            if (bVar3 != false) {
                return;
            }
        } else {
            iVar8 = 0;
            if (bVar3) {
                return;
            }
        }
        if ((uVar4 & 1) == 0) {
            if (iVar8 < 4) {
                make_shared<Headbar, int&, int&, int&, int&>((jag*)&local_60, &local_34, &local_44, &local_40,
                                                             &local_3c);
                eastl::list<shared_ptr<Headbar>, eastl::allocator>::push_front(local_50, &local_60);
                local_60.~shared_ptr();
            }
        } else {
            new (&local_78) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                                shared_ptr<rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<rs2lib::worldmap::MapElement> const&>(local_70);
            make_shared<Headbar, int&, int&, int&, int&>((jag*)&local_60, &local_34, &local_44, &local_40, &local_3c);
            eastl::list<shared_ptr<Headbar>, eastl::allocator>::insert(local_70 + 8, local_50, local_78, &local_60);
            local_60.~shared_ptr();
            if (3 < iVar8) {
                eastl::list<shared_ptr<Headbar>, eastl::allocator>::pop_front(local_50);
            }
        }
    }

    // 0x10012e470, 32 bytes, inline, placed by class name
    // HeadbarQueue::EventCurrent(int)::{lambda(shared_ptr<Headbar>&)#1}::operator()(shared_ptr<Headbar>&) const
    /* HeadbarQueue::EventCurrent(int)::{lambda(shared_ptr<Headbar>&)#1}::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<Headbar>&)
   const */

    undefined4 HeadbarQueue::EventCurrent(int)::{
        lambda(shared_ptr<Headbar>&) #1
    }
    ::operator()(_lambda_jag__shared_ptr<Headbar> ___1_* this, shared_ptr * param_1)

    {
        int* piVar1;

        piVar1 = (int*)shared_ptr<Headbar>::operator->((shared_ptr<Headbar>*)param_1);
        return CONCAT31((int3)((uint)*piVar1 >> 8), *(int*)this < *piVar1);
    }

    // 0x100154120, 16 bytes, complete-object constructor, inline, placed by class name
    // HeadbarQueue::HeadbarQueue(shared_ptr<HeadbarType> const&): jumps straight to the base-object constructor

    // 0x100154130, 96 bytes, base-object constructor, inline, placed by class name
    // HeadbarQueue::HeadbarQueue(shared_ptr<HeadbarType> const&)
    void HeadbarQueue::HeadbarQueue(shared_ptr* param_1) {
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        new (&field_16) eastl::list<shared_ptr<Headbar>, eastl::allocator>();
        shared_ptr<HeadbarType>::operator=((shared_ptr<HeadbarType>*)this, param_1);
    }

    // 0x100154360, 16 bytes, complete-object destructor, inline, placed by class name
    // HeadbarQueue::~HeadbarQueue(): jumps straight to the base-object destructor

    // 0x100154370, 48 bytes, base-object destructor, inline, placed by class name
    // HeadbarQueue::~HeadbarQueue()
    void HeadbarQueue::~HeadbarQueue() {
        (&field_16)->~list();
        ~shared_ptr();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100111560, 16 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, eastl::allocator> >::p8<unsigned long long>(unsigned long long)
    /* void PacketT<Array<unsigned char, eastl::allocator> >::p8<long long>(long long) */

    void PacketT<Array<unsigned char, eastl::allocator>>::p8<long long>(
        PacketT<Array<unsigned char, eastl::allocator>>* this, longlong param_1) {
        pT<long long>(this, param_1);
    }

    // 0x100111570, 160 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, eastl::allocator> >::p3<int>(int)
    void PacketT<Array<unsigned char, eastl::allocator>>::p3<int>(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  int param_1) {
        long lVar1;
        ulong uVar2;
        undefined1* puVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 3U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 3 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      114, (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 16);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 8);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar2);
        *puVar3 = (char)param_1;
    }

    // 0x100111610, 304 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::rsaEncrypt(math::BigInteger const&, math::BigInteger const&)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::rsaEncrypt(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                BigInteger* param_1, BigInteger* param_2) {
        uchar* puVar2;
        long lVar3;
        ulong uVar4;
        BigInteger local_50[3];
        BigInteger local_38;
        BigInteger local_30;

        if (param_2->GetByteSize() <= *(int*)(this + 24)) {
            /* WARNING: Subroutine does not return */
            LogAssert("rsan.GetByteSize() > (int)m_pos",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      386, (char*)0);
        }
        puVar2 = (uchar*)data();
        new (&local_38) math::BigInteger(puVar2, *(ulong*)(this + 24));
        local_30.PowMod(&local_38, param_1);
        local_50->Get();
        SetPos(this, 0);
        lVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        p2<unsigned long>(this, lVar3 + 1);
        p1<unsigned long>(this, 0);
        puVar2 = (uchar*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar4 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        pArrayBuffer(this, puVar2, 0, uVar4);
        local_50->~basic_string();
        local_30.~BigInteger();
        local_38.~BigInteger();
    }

    // 0x100111790, 16 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p4<oldscape::shared::Version::{unnamed type#1}>(oldscape::shared::Version::{unnamed type#1})
    /* void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p4<int>(int) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        pT<int>(this, param_1);
    }

    // 0x1001117b0, 16 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p1<bool>(bool)
    /* void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p1<signed char>(signed
   char) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>() {
        pT<signed char>();
    }

} // namespace jag

namespace jag::oldscape::helpers {
    // 0x1001125d0, 192 bytes, inline, placed by debug map only (low confidence)
    // eastl::vector<int, eastl::allocator> GetKeys<int, SubInterface>(eastl::hash_map<int, SubInterface, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&)
    helpers* GetKeys<int, SubInterface>(hash_map* param_1) {
        bool bVar1;
        ulong uVar2;
        int* piVar3;
        hashtable_iterator_base* extraout_RDX;
        eastl local_40[16];
        hashtable_iterator_base local_30[16];

        new (this) eastl::vector<int, eastl::allocator>();
        uVar2 = param_1->size();
        reserve(uVar2);
        local_40 =
            (eastl[16])eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                        eastl::prime_rehash_policy, false, true, true>::begin();
        local_30 = (hashtable_iterator_base[16])param_1->end();
        bVar1 = eastl::operator!=(local_40, local_30, local_30._8_8_);
        if (bVar1) {
            do {
                piVar3 = (int*)local_40->HeapBeginPtr();
                push_back(piVar3);
                eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)local_40);
                bVar1 = eastl::operator!=(local_40, local_30, extraout_RDX);
            } while (bVar1);
        }
        return this;
    }

} // namespace jag::oldscape::helpers
