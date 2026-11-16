// projects/osclient/ChatHistory.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ChatHistory.h"

namespace jag::oldscape {
    // 0x100f8ad20, 56 bytes, __common; zero-initialised
    ChatHistory::m_history;

    // 0x100f8ad58, 32 bytes, __common; set at startup by ___cxx_global_var_init.44
    eastl::list<int, eastl::allocator> ChatHistory::m_activeUids = list<int, eastl::allocator>();

    // 0x100f8ad78, 56 bytes, __common; zero-initialised
    ChatHistory::m_historyByUid;

    // 0x100f8adb0, 8 bytes, __common; zero-initialised
    ChatHistory::m_nextID;

    // 0x10017ce70, 432 bytes, placed by class name and debug map
    // ChatHistory::AddChat(int, eastl::string const&, eastl::string const&, eastl::string const&)
    void ChatHistory::AddChat(int param_1, basic_string* param_2, basic_string* param_3, basic_string* param_4) {
        unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>* puVar1;
        HistoryBuffer* this;
        shared_ptr* psVar2;
        int* piVar3;
        ListIterator<console::Line, console::Line*, console::Line&>* this_00;
        shared_ptr<ChatLine>* this_01;
        Client* this_02;
        bool bVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base local_70[16];
        list<console::Line, eastl::allocator> local_60[8];
        undefined8 local_58;
        basic_string* local_50;
        shared_ptr local_48;
        int local_34;

        local_50 = param_4;
        local_34 = param_1;
        eastl::hashtable<
            int,
            eastl::pair<int const,
                        std::unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>>,
            eastl::allocator,
            eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                                    std::default_delete<ChatHistory::HistoryBuffer>>>>,
            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
            eastl::prime_rehash_policy, false, true, true>::find((int*)&local_48);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar4 = eastl::operator==((eastl*)&local_48, local_70, extraout_RDX);
        if (bVar4) {
            std::make_unique<ChatHistory::HistoryBuffer>();
            puVar1 = (unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>*)
                eastl::hash_map<
                    int, std::unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>,
                    eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::
                operator[](
                    (hash_map<
                        int,
                        std::unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>,
                        eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&m_history,
                    &local_34);
            std::unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>::operator=(
                puVar1, (unique_ptr*)&local_48);
            local_48.~unique_ptr();
        }
        puVar1 =
            (unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>*)eastl::hash_map<
                int, std::unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>,
                eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::
            operator[](
                (hash_map<int,
                          std::unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>,
                          eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&m_history,
                &local_34);
        this = (HistoryBuffer*)
            std::unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>::get(puVar1);
        local_70->end();
        psVar2 = (shared_ptr*)AddChat(local_34, param_2, param_3, local_50, local_70);
        new (&local_48) shared_ptr<dash3d::Decor>(psVar2);
        eastl::list<console::Line, eastl::allocator>::end(local_60);
        bVar4 = eastl::operator!=((eastl*)local_70, (hashtable_iterator_base*)local_60, extraout_RDX_00);
        if (bVar4) {
            piVar3 = (int*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                (ListIterator<console::Line, console::Line*, console::Line&>*)local_70);
            m_historyByUid.erase(piVar3);
            new (&local_58) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                                shared_ptr<rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<rs2lib::worldmap::MapElement> const&>(local_70);
            eastl::list<int, eastl::allocator>::erase(local_60, &m_activeUids, local_58);
        }
        this_00 = (ListIterator<console::Line, console::Line*, console::Line&>*)shared_ptr<ChatLine>::operator->(
            (shared_ptr<ChatLine>*)&local_48);
        piVar3 = (int*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(this_00);
        this_01 = (shared_ptr<ChatLine>*)eastl::hash_map<
            int, shared_ptr<ChatLine>, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
            false>::operator[]((hash_map<int, shared_ptr<ChatLine>, eastl::hash<int>, eastl::equal_to<int>,
                                         eastl::allocator, false>*)&m_historyByUid,
                               piVar3);
        shared_ptr<ChatLine>::operator=(this_01, &local_48);
        this_02 = (Client*)Client::Instance();
        this_02->TriggerOnChatTransmitHook();
        local_48.~shared_ptr();
    }

    // 0x10017d100, 320 bytes, placed by class name and debug map
    // ChatHistory::HistoryBuffer::AddChat(int, eastl::string const&, eastl::string const&, eastl::string const&, eastl::ListIterator<int, int*, int&>&)
    void ChatHistory::HistoryBuffer::AddChat(int param_1, basic_string* param_2, basic_string* param_3,
                                             basic_string* param_4, ListIterator* param_5) {
        int iVar2;
        shared_ptr* psVar3;
        shared_ptr<ChatLine>* psVar4;
        undefined8* puVar5;
        ChatLine* this_00;
        shared_ptr local_48;
        int local_34;

        iVar2 = field_1604 + ((field_1604 + 1) / 100) * -100 + 1;
        field_1604 = iVar2;
        local_34 = param_1;
        psVar3 = (shared_ptr*)std::array<shared_ptr<ChatLine>, 100ul>::operator[](
            (array<shared_ptr<ChatLine>, 100ul>*)this, (long)iVar2);
        if (operator!=(psVar3, (_func_decltype_nullptr*)0)) {
            psVar4 = (shared_ptr<ChatLine>*)std::array<shared_ptr<ChatLine>, 100ul>::operator[](
                (array<shared_ptr<ChatLine>, 100ul>*)this, (long)field_1604);
            puVar5 = (undefined8*)shared_ptr<ChatLine>::operator->(psVar4);
            *(undefined8*)param_5 = *puVar5;
            psVar4 = (shared_ptr<ChatLine>*)std::array<shared_ptr<ChatLine>, 100ul>::operator[](
                (array<shared_ptr<ChatLine>, 100ul>*)this, (long)field_1604);
            this_00 = (ChatLine*)shared_ptr<ChatLine>::operator->(psVar4);
            this_00->ReUse(local_34, param_2, param_4, param_3);
        } else {
            make_shared<ChatLine, int&, eastl::stringconst&, eastl::stringconst&, eastl::stringconst&>(
                (jag*)&local_48, &local_34, param_2, param_4, param_3);
            psVar4 = (shared_ptr<ChatLine>*)std::array<shared_ptr<ChatLine>, 100ul>::operator[](
                (array<shared_ptr<ChatLine>, 100ul>*)this, (long)field_1604);
            shared_ptr<ChatLine>::operator=(psVar4, &local_48);
            local_48.~shared_ptr();
        }
        if (m_length < 100) {
            m_length = m_length + 1;
        }
        std::array<shared_ptr<ChatLine>, 100ul>::operator[]((array<shared_ptr<ChatLine>, 100ul>*)this,
                                                            (long)field_1604);
    }

    // 0x10017d430, 112 bytes, placed by class name and debug map
    // ChatHistory::GetNextUID()
    ChatHistory* ChatHistory::GetNextUID() {
        ListIterator* pLVar1;
        list<console::Line, eastl::allocator> local_30[12];
        int local_24;

        local_24 = m_nextID;
        m_nextID = m_nextID + 1;
        m_activeUids.push_back(&local_24);
        eastl::list<console::Line, eastl::allocator>::end(local_30);
        pLVar1 = (ListIterator*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator--(
            (ListIterator<console::Line, console::Line*, console::Line&>*)local_30);
        new (this) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                       shared_ptr<rs2lib::worldmap::MapElement> const*,
                                       shared_ptr<rs2lib::worldmap::MapElement> const&>(pLVar1);
        return this;
    }

    // 0x10017d500, 240 bytes, placed by class name and debug map
    // ChatHistory::GetLine(int, int)
    undefined1* ChatHistory::GetLine(int param_1, int param_2) {
        undefined1* puVar3;
        long lVar4;
        HistoryBuffer* this;
        hashtable_iterator_base* extraout_RDX;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var5;
        hashtable_iterator_base local_50[16];
        eastl local_40[20];
        int local_2c;

        p_Var5 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_2);
        local_2c = param_1;
        if (GetLine(int, int)::nullLine == '\0') {
            if (___cxa_guard_acquire(&GetLine(int, int)::nullLine) != 0) {
                new (&GetLine(int, int)::nullLine) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var5);
                ___cxa_atexit(PTR__shared_ptr_100ee5528, &GetLine(int, int)::nullLine, 4294967296);
                ___cxa_guard_release(&GetLine(int, int)::nullLine);
            }
        }
        eastl::hashtable<
            int,
            eastl::pair<int const,
                        std::unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>>,
            eastl::allocator,
            eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                                    std::default_delete<ChatHistory::HistoryBuffer>>>>,
            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
            eastl::prime_rehash_policy, false, true, true>::find((int*)local_40);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator==(local_40, local_50, extraout_RDX)) {
            puVar3 = &GetLine(int, int)::nullLine;
        } else {
            lVar4 = local_40->HeapBeginPtr();
            this =
                (HistoryBuffer*)std::
                    unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>::operator->(
                        (unique_ptr<ChatHistory::HistoryBuffer,
                                    std::default_delete<ChatHistory::HistoryBuffer>>*)(lVar4 + 8));
            puVar3 = (undefined1*)GetLine(param_2);
        }
        return puVar3;
    }

    // 0x10017d600, 192 bytes, placed by class name and debug map
    // ChatHistory::HistoryBuffer::GetLine(int)
    undefined1* ChatHistory::HistoryBuffer::GetLine(int param_1) {
        undefined1* puVar2;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var3;

        p_Var3 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1);
        if (GetLine(int)::nullLine == '\0') {
            if (___cxa_guard_acquire(&GetLine(int)::nullLine) != 0) {
                new (&GetLine(int)::nullLine) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var3);
                ___cxa_atexit(PTR__shared_ptr_100ee5528, &GetLine(int)::nullLine, 4294967296);
                ___cxa_guard_release(&GetLine(int)::nullLine);
            }
        }
        puVar2 = &GetLine(int)::nullLine;
        if ((-1 < param_1) && (param_1 < m_length)) {
            puVar2 = (undefined1*)std::array<shared_ptr<ChatLine>, 100ul>::operator[](
                (array<shared_ptr<ChatLine>, 100ul>*)this, (long)(((field_1604 - param_1) + 100) % 100));
        }
        return puVar2;
    }

    // 0x10017d6c0, 112 bytes, placed by class name and debug map
    // ChatHistory::GetLineByUID(int)
    undefined8 ChatHistory::GetLineByUID(int param_1) {
        long lVar2;
        undefined8 uVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        eastl local_38[20];
        int local_24;

        local_24 = param_1;
        eastl::hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_38);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            uVar3 = ((lVar2 + 8))->end();
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10017d730, 128 bytes, placed by class name and debug map
    // ChatHistory::GetHistoryLength(int)
    undefined8 ChatHistory::GetHistoryLength(int param_1) {
        bool bVar1;
        long lVar2;
        HistoryBuffer* this;
        undefined8 uVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        eastl local_38[20];
        int local_24;

        local_24 = param_1;
        eastl::hashtable<
            int,
            eastl::pair<int const,
                        std::unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>>,
            eastl::allocator,
            eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                                    std::default_delete<ChatHistory::HistoryBuffer>>>>,
            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
            eastl::prime_rehash_policy, false, true, true>::find((int*)local_38);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==(local_38, local_48, extraout_RDX);
        uVar3 = 0;
        if (!bVar1) {
            lVar2 = local_38->HeapBeginPtr();
            this =
                (HistoryBuffer*)std::
                    unique_ptr<ChatHistory::HistoryBuffer, std::default_delete<ChatHistory::HistoryBuffer>>::operator->(
                        (unique_ptr<ChatHistory::HistoryBuffer,
                                    std::default_delete<ChatHistory::HistoryBuffer>>*)(lVar2 + 8));
            uVar3 = GetLength();
        }
        return uVar3;
    }

    // 0x10017d7b0, 16 bytes, placed by class name and debug map
    // ChatHistory::HistoryBuffer::GetLength()
    int ChatHistory::HistoryBuffer::GetLength() {
        return m_length;
    }

    // 0x10017d7c0, 64 bytes, placed by class name and debug map
    // ChatHistory::ResetHistory()
    void ChatHistory::ResetHistory() {
        m_history.clear();
        m_historyByUid.clear();
        m_activeUids.clear();
        m_nextID = 0;
    }

    // 0x10017d860, 144 bytes, placed by class name and debug map
    // ChatHistory::ResetFriendIndicators()
    void ChatHistory::ResetFriendIndicators() {
        long lVar1;
        ChatLine* this;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_40[16];
        hashtable_iterator_base local_30[16];

        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=(local_40, local_30, extraout_RDX);
        if (bVar2) {
            do {
                lVar1 = local_40->HeapBeginPtr();
                this = (ChatLine*)shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)(lVar1 + 8));
                ResetFriendIndicator();
                eastl::hashtable_iterator<
                    eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true, false>::
                operator++((hashtable_iterator<
                            eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true,
                            false>*)local_40);
                bVar2 = eastl::operator!=(local_40, local_30, extraout_RDX_00);
            } while (bVar2);
        }
    }

    // 0x10017d920, 144 bytes, placed by class name
    // ChatHistory::ResetIgnoreIndicators()
    void ChatHistory::ResetIgnoreIndicators() {
        long lVar1;
        ChatLine* this;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_40[16];
        hashtable_iterator_base local_30[16];

        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=(local_40, local_30, extraout_RDX);
        if (bVar2) {
            do {
                lVar1 = local_40->HeapBeginPtr();
                this = (ChatLine*)shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)(lVar1 + 8));
                ResetIgnoreIndicator();
                eastl::hashtable_iterator<
                    eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true, false>::
                operator++((hashtable_iterator<
                            eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true,
                            false>*)local_40);
                bVar2 = eastl::operator!=(local_40, local_30, extraout_RDX_00);
            } while (bVar2);
        }
    }

    // 0x10017d9c0, 192 bytes, placed by class name
    // ChatHistory::GetPreviousActiveUID(int)
    undefined4 ChatHistory::GetPreviousActiveUID(int param_1) {
        bool bVar1;
        undefined4 uVar2;
        long lVar3;
        ListIterator* pLVar4;
        undefined4* puVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_50[16];
        list<console::Line, eastl::allocator> local_40[8];
        hashtable_iterator_base local_38[20];
        int local_24;

        local_24 = param_1;
        eastl::hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_50);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==(local_50, local_38, extraout_RDX);
        uVar2 = 4294967295;
        if (!bVar1) {
            lVar3 = local_50->HeapBeginPtr();
            pLVar4 = (ListIterator*)shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)(lVar3 + 8));
            new (local_38) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                               shared_ptr<rs2lib::worldmap::MapElement> const*,
                                               shared_ptr<rs2lib::worldmap::MapElement> const&>(pLVar4);
            eastl::list<console::Line, eastl::allocator>::begin(local_40);
            bVar1 = eastl::operator==((eastl*)local_38, (hashtable_iterator_base*)local_40, extraout_RDX_00);
            uVar2 = 4294967295;
            if (!bVar1) {
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator--(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                puVar5 = (undefined4*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                uVar2 = *puVar5;
            }
        }
        return uVar2;
    }

    // 0x10017da80, 192 bytes, placed by class name
    // ChatHistory::GetNextActiveUID(int)
    undefined4 ChatHistory::GetNextActiveUID(int param_1) {
        bool bVar1;
        undefined4 uVar2;
        long lVar3;
        ListIterator* pLVar4;
        undefined4* puVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_50[16];
        list<console::Line, eastl::allocator> local_40[8];
        hashtable_iterator_base local_38[20];
        int local_24;

        local_24 = param_1;
        eastl::hashtable<int, eastl::pair<int const, shared_ptr<ChatLine>>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, shared_ptr<ChatLine>>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_50);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==(local_50, local_38, extraout_RDX);
        uVar2 = 4294967295;
        if (!bVar1) {
            lVar3 = local_50->HeapBeginPtr();
            pLVar4 = (ListIterator*)shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)(lVar3 + 8));
            new (local_38) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                               shared_ptr<rs2lib::worldmap::MapElement> const*,
                                               shared_ptr<rs2lib::worldmap::MapElement> const&>(pLVar4);
            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
            eastl::list<console::Line, eastl::allocator>::end(local_40);
            bVar1 = eastl::operator==((eastl*)local_38, (hashtable_iterator_base*)local_40, extraout_RDX_00);
            uVar2 = 4294967295;
            if (!bVar1) {
                puVar5 = (undefined4*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                uVar2 = *puVar5;
            }
        }
        return uVar2;
    }

    // 0x10017db40, 384 bytes, placed by class name
    // ChatHistory::GetCopyBuffer()
    ChatHistory* ChatHistory::GetCopyBuffer() {
        long lVar3;
        char* pcVar4;
        ostream* poVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar6;
        hashtable_iterator_base* extraout_RDX_00;
        shared_ptr<ChatLine>* this_00;
        undefined1 auVar7[16];
        stringstream local_170[16];
        ostream local_160[264];
        hashtable_iterator_base local_58[16];
        eastl local_48[24];

        std::stringstream::stringstream(local_170);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        phVar6 = extraout_RDX;
        while (true) {
            if (!eastl::operator!=(local_48, local_58, phVar6))
                break;
            lVar3 = local_48->HeapBeginPtr();
            this_00 = (shared_ptr<ChatLine>*)(lVar3 + 8);
            shared_ptr<ChatLine>::operator->(this_00);
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
                '\0') {
                shared_ptr<ChatLine>::operator->(this_00);
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                poVar5 = std::operator<<(local_160, pcVar4);
                std::operator<<(poVar5, ':');
            }
            shared_ptr<ChatLine>::operator->(this_00);
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            poVar5 = std::operator<<(local_160, pcVar4);
            std::operator<<(poVar5, '\n');
            eastl::hashtable_iterator<
                eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true, false>::
            operator++(
                (hashtable_iterator<eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>,
                                    true, false>*)local_48);
            phVar6 = extraout_RDX_00;
        }
        local_48->str();
        auVar7 = local_48->c_str();
        eastl::destruct<highlight::NpcUID*>((eastl*)local_58, (NpcUID*)"EASTL basic_string", auVar7._8_8_);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)this, auVar7._0_8_);
        local_48->~string();
        std::stringstream::~stringstream(local_170);
        return this;
    }

    // 0x10017dfe0, 32 bytes, placed by class name
    // ChatHistory::GetTimestampMode()
    void ChatHistory::GetTimestampMode() {
        long lVar1;
        GameOptions* this_00;

        lVar1 = Client::Instance();
        this_00 =
            (GameOptions*)std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)(lVar1 + 8384));
        this_00->GetChatTimestampMode();
    }

    // 0x10017e030, 176 bytes, placed by class name
    // ChatHistory::SetTimestampMode(ChatTimestampMode)
    void ChatHistory::SetTimestampMode(undefined4 param_1) {
        long lVar1;
        GameOptions* pGVar2;
        ChatLine* this;
        bool bVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_40[16];
        hashtable_iterator_base local_30[16];

        lVar1 = Client::Instance();
        pGVar2 =
            (GameOptions*)std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)(lVar1 + 8384));
        pGVar2->SetChatTimestampMode(param_1);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar3 = eastl::operator!=(local_40, local_30, extraout_RDX);
        if (bVar3) {
            do {
                lVar1 = local_40->HeapBeginPtr();
                this = (ChatLine*)shared_ptr<ChatLine>::operator->((shared_ptr<ChatLine>*)(lVar1 + 8));
                ApplyTimeStamp();
                eastl::hashtable_iterator<
                    eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true, false>::
                operator++((hashtable_iterator<
                            eastl::pair<int const, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>>, true,
                            false>*)local_40);
                bVar3 = eastl::operator!=(local_40, local_30, extraout_RDX_00);
            } while (bVar3);
        }
    }

    // 0x1001b6540, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.44
    void ___cxx_global_var_init_44() {
        new (&ChatHistory::m_activeUids) eastl::list<int, eastl::allocator>();
        ___cxa_atexit(PTR__list_100ee6d18, &ChatHistory::m_activeUids, 4294967296);
    }

} // namespace jag::oldscape
