// projects/osclient/HeadbarQueue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class HeadbarQueue {
    public:
        auto EventCurrent(int arg1);
        void ListEmpty();
        void EventAdd(int arg1, int arg2, int arg3, int arg4);
        HeadbarQueue(const shared_ptr<HeadbarType>& headbarType);
        ~HeadbarQueue();

    private:
        uint8_t _unknown_0[8];
        long field_8;
        uint8_t _unknown_16[8];
    };

    // 0x100110b00
    auto HeadbarQueue::EventCurrent(int arg1) {
        int iVar1;
        int iVar2;
        shared_ptr<Headbar>* psVar4;
        int* piVar5;
        long lVar6;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        ReturnValue local_70;
        list<shared_ptr<ClientObj>> local_68;
        ReturnValue local_60;
        ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar> const*, shared_ptr<Headbar> const&>* local_58;
        ListIterator<shared_ptr<rs2lib::worldmap::MapElement>, shared_ptr<rs2lib::worldmap::MapElement> const*,
                     shared_ptr<rs2lib::worldmap::MapElement> const&>
            local_50[8];
        ListIterator<shared_ptr<rs2lib::worldmap::MapElement>, shared_ptr<rs2lib::worldmap::MapElement> const*,
                     shared_ptr<rs2lib::worldmap::MapElement> const&>* local_48;
        ReturnValue local_40;
        ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&> local_38[8];

        uint8_t* this_00 = &field_16;
        if (this_00->empty() == '\0') {
            psVar4 = (shared_ptr<Headbar>*)this_00->front();
            piVar5 = (int*)(*psVar4).operator->();
            if (*piVar5 <= arg1) {
                local_60 = this_00->begin();
                local_70 = this_00->end();
                eastl::find_if<eastl::ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>,
                               int->EventCurrent()::_lambda(shared_ptr<Headbar>&) _1_>(
                    local_38, (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar>*, shared_ptr<Headbar>&>*)&local_60,
                    (_lambda_jag__shared_ptr<Headbar> ___1_*)&local_70);
                local_40--;
                local_40 = this_00->begin();
                new (&local_58) eastl::ListIterator(&local_40);
                new (local_50) eastl::ListIterator(local_38);
                eastl::list<shared_ptr<ClientObj>>::erase(
                    &local_68,
                    (ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar> const*, shared_ptr<Headbar> const&>*)this_00,
                    local_58);
                psVar4 = (shared_ptr<Headbar>*)**local_38;
                piVar5 = (int*)(*psVar4).operator->();
                iVar1 = *piVar5;
                psVar4 = (shared_ptr<Headbar>*)**local_38;
                lVar6 = (*psVar4).operator->();
                iVar2 = *(int*)(lVar6 + 12);
                lVar6 = (*this).operator->();
                if (arg1 < iVar1 + iVar2 + *(int*)(lVar6 + 24)) {
                    groundDecor = (shared_ptr<dash3d::GroundDecor>*)**local_38;
                    return auto(groundDecor);
                }
                new (&local_48) eastl::ListIterator(local_38);
                eastl::list<shared_ptr<ClientObj>>::erase(&local_40, (list<shared_ptr<ClientObj>>*)this_00, local_48);
            }
        }
        new (&result) shared_ptr();
        return result;
    }

    // 0x100110cd0
    void HeadbarQueue::ListEmpty() {
        field_16.empty();
    }

    // 0x10011c0f0
    void HeadbarQueue::EventAdd(int arg1, int arg2, int arg3, int arg4) {
        int iVar1;
        int iVar2;
        shared_ptr<Headbar>* psVar5;
        int* piVar6;
        GridRect* this_00;
        uint64_t uVar7;
        int iVar8;
        ListIterator<shared_ptr<Headbar>, shared_ptr<Headbar> const*, shared_ptr<Headbar> const&>* local_78;
        unsigned int local_38;

        uint8_t* this_01 = &field_16;
        int local_44 = arg2;
        int local_40 = arg3;
        int local_3c = arg4;
        int local_34 = arg1;
        auto local_70 = this_01->begin();
        auto local_60 = this_01->begin();
        list<console::Line>* local_50 = (list<console::Line>*)this_01;
        auto local_68 = this_01->end();
        bool cVar3 = local_60 != local_68;
        unsigned int uVar4 = 0;
        if (!cVar3) {
            iVar8 = 0;
        } else {
            psVar5 = (shared_ptr<Headbar>*)*local_60;
            piVar6 = (int*)(*psVar5).operator->();
            iVar1 = local_34;
            iVar8 = *piVar6;
            psVar5 = (shared_ptr<Headbar>*)*local_60;
            this_00 = (GridRect*)(*psVar5).operator->();
            if (iVar8 == iVar1) {
                local_38 = 0;
                iVar8 = 1;
            } else {
                iVar8 = 1;
                local_38 = 0;
                do {
                    if (this_00->field_0 <= local_34) {
                        local_70 = local_60[0];
                        uVar7 = local_68++;
                        local_38 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)uVar7 >> 8)) << 8) | (uint8_t)1);
                    }
                    local_68++;
                    local_68 = local_50->end();
                    cVar3 = local_60 != local_68;
                    if (!cVar3)
                        goto LAB_10011c25a;
                    iVar8 = iVar8 + 1;
                    psVar5 = (shared_ptr<Headbar>*)*local_60;
                    piVar6 = (int*)(*psVar5).operator->();
                    iVar2 = local_34;
                    iVar1 = *piVar6;
                    psVar5 = (shared_ptr<Headbar>*)*local_60;
                    this_00 = (GridRect*)(*psVar5).operator->();
                } while (iVar1 != iVar2);
            }
            new (this_00) dash3d::GridRect(local_34, local_44, local_40, local_3c);
        LAB_10011c25a:
            uVar4 = local_38;
            if (cVar3) {
                return;
            }
        }
        if ((uVar4 & 1) == 0) {
            if (iVar8 < 4) {
                make_shared<Headbar, int&, int&, int&, int&>(&local_60, &local_34, &local_44, &local_40, &local_3c);
                local_50->push_front(local_60);
            }
        } else {
            new (&local_78) eastl::ListIterator(&local_70);
            make_shared<Headbar, int&, int&, int&, int&>(&local_60, &local_34, &local_44, &local_40, &local_3c);
            local_68 = local_50->insert(local_78, local_60);
            if (3 < iVar8) {
                local_50->pop_front();
            }
        }
    }

    // 0x10012e470
    uint32_t HeadbarQueue::EventCurrent(int)::{
        lambda(shared_ptr<Headbar>&) #1
    }
    ::operator()(shared_ptr<Headbar>& int) const {
        lambda(shared_ptr<Headbar>&) #1
    }
    ::operator()(_lambda_jag__shared_ptr<Headbar> ___1_* this, shared_ptr<Headbar>* headbar) {
        int* piVar1;

        piVar1 = (int*)(*headbar).operator->();
        return *(int*)this < *piVar1;
    }

    // 0x100154130
    HeadbarQueue::HeadbarQueue(const shared_ptr<HeadbarType>& headbarType) : shared_ptr() {
        *this = headbarType;
    }

    // 0x100154370
    HeadbarQueue::~HeadbarQueue() {
        field_16.~list();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100111560
    void PacketT<Array<unsigned char>>::p8<unsigned long long>(unsigned long long arg1) {
        pT<long long>(this, arg1);
    }

    // 0x100111570
    void PacketT<Array<unsigned char>>::p3<int>(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 3U) {
            LogAssert("m_pos + 3 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      114, nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 16);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 8);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)arg1;
    }

    // 0x100111610
    void PacketT<Array<unsigned char>>::rsaEncrypt(const math::BigInteger& bigInteger1,
                                                   const math::BigInteger& bigInteger2) {
        BigInteger local_30;

        if (bigInteger2.GetByteSize() <= *(int*)(this + 24)) {
            LogAssert("rsan.GetByteSize() > (int)m_pos",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      386, nullptr);
        }
        auto puVar3 = data();
        BigInteger local_38(puVar3, *(unsigned long*)(this + 24));
        local_30.PowMod(&local_38, bigInteger1);
        auto local_50 = local_30.Get();
        SetPos(this, 0);
        short sVar1 = local_50.size();
        p2<unsigned long>(this, sVar1 + 1);
        p1<unsigned long>(this, 0);
        puVar3 = (unsigned char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg3 = local_50.size();
        pArrayBuffer(this, puVar3, 0, arg3);
    }

    // 0x100111790
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4 < oldscape::shared::Version::{
        unnamed type #1
    }
    > (oldscape::shared::Version::{ unnamed type #1 } arg1) {
        pT<int>(this, (int)arg1);
    }

    // 0x1001117b0
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<bool>(bool arg1) {
        pT<signed char>(this, arg1);
    }

} // namespace jag

namespace jag::oldscape::helpers {
    // 0x1001125d0
    eastl::vector<int> GetKeys<int, SubInterface>(const eastl::hash_map<int, SubInterface>& arg1) {
        int* arg1_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* in_RSI;
        eastl local_40;
        obj_iterator local_30;

        new (arg1) eastl::vector<int>();
        arg1.reserve(in_RSI->size());
        &local_40 = (eastl[16])in_RSI->begin();
        &local_30 = (obj_iterator[16])in_RSI->end();
        bool cVar1 = local_40 != local_30;
        if (cVar1) {
            do {
                arg1_01 = (int*)local_40.HeapBeginPtr();
                arg1.push_back(*arg1_01);
                ++local_40;
                cVar1 = local_40 != local_30;
            } while (cVar1);
        }
        return arg1;
    }

} // namespace jag::oldscape::helpers
