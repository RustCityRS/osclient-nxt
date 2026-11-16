// libs/graphics/runetek7/effects/EffectList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class EffectList {
    public:
        GetEnabledEffects() const;
        EffectList(eastl::bitset<121ul, unsigned long long> const&);
        void Toggle(EffectType);
        void Clear();
        void operator|=(EffectList const&);
        EffectList();
        void Add(EffectType);
        void Remove(EffectType);
        void Set(EffectType, bool);
        void Contains(EffectType) const;
        void operator!=(EffectList const&) const;
        ulong Contains(EffectList const&) const;
        ulong GetEffectListHash() const;
        void
        AppendAsStringDefines(std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>&) const;
        void operator&=(EffectList const&);
        EffectList(std::initializer_list<EffectType> const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1000afcf0, 48 bytes, inline, placed by class name and debug map
    // EffectList::Toggle(EffectType)
    void EffectList::Toggle(uint param_2) {
        byte bVar1;

        bVar1 = test((ulong)param_2);
        set((ulong)param_2, (bool)(bVar1 ^ 1));
    }

    // 0x1007e4080, 16 bytes, inline, placed by class name
    // EffectList::Clear()
    void EffectList::Clear() {
        reset();
    }

    // 0x10088fe80, 16 bytes, inline, placed by class name
    // EffectList::operator|=(EffectList const&)
    /* EffectList::TEMPNAMEPLACEHOLDERVALUE(EffectList const&) */

    void EffectList::operator|=(EffectList* param_1) {
        eastl::bitset<121ul, unsigned long long>::operator|=((bitset<121ul, unsigned long long>*)this,
                                                             (bitset*)param_1);
    }

    // 0x1008eadb0, 16 bytes, complete-object constructor, inline, placed by class name
    // EffectList::EffectList(): jumps straight to the base-object constructor

    // 0x1008eb5a0, 32 bytes, inline, placed by class name
    // EffectList::Add(EffectType)
    void EffectList::Add(uint param_2) {
        set((ulong)param_2, true);
    }

    // 0x1008eb5c0, 16 bytes, inline, placed by class name
    // EffectList::Remove(EffectType)
    void EffectList::Remove(uint param_2) {
        set((ulong)param_2, false);
    }

    // 0x1008f2790, 16 bytes, inline, placed by class name
    // EffectList::Set(EffectType, bool)
    void EffectList::Set(uint param_2, bool param_3) {
        set((ulong)param_2, param_3);
    }

    // 0x1008f2a90, 16 bytes, inline, placed by class name
    // EffectList::Contains(EffectType) const
    void EffectList::Contains(uint param_2) {
        test((ulong)param_2);
    }

    // 0x1008ffc30, 16 bytes, base-object constructor, inline, placed by class name
    // EffectList::EffectList()
    void EffectList::EffectList() {
        new (this) eastl::bitset<121ul, unsigned long long>(0);
    }

    // 0x100900c30, 16 bytes, inline, placed by class name
    // EffectList::operator!=(EffectList const&) const
    /* EffectList::TEMPNAMEPLACEHOLDERVALUE(EffectList const&) const */

    void EffectList::operator!=(EffectList* param_1) {
        eastl::bitset<121ul, unsigned long long>::operator!=((bitset<121ul, unsigned long long>*)this,
                                                             (bitset*)param_1);
    }

    // 0x10092bf90, 16 bytes, inline, placed by class name
    // EffectList::operator&=(EffectList const&)
    /* EffectList::TEMPNAMEPLACEHOLDERVALUE(EffectList const&) */

    void EffectList::operator&=(EffectList* param_1) {
        eastl::bitset<121ul, unsigned long long>::operator&=((bitset<121ul, unsigned long long>*)this,
                                                             (bitset*)param_1);
    }

    // 0x100930000, 16 bytes, complete-object constructor, inline, placed by class name
    // EffectList::EffectList(std::initializer_list<EffectType> const&): jumps straight to the base-object constructor

    // 0x100938970, 112 bytes, base-object constructor, inline, placed by class name
    // EffectList::EffectList(std::initializer_list<EffectType> const&)
    void EffectList::EffectList(initializer_list* param_1) {
        byte* pbVar1;
        byte* pbVar2;

        new (this) eastl::bitset<121ul, unsigned long long>(0);
        pbVar1 = (byte*)param_1->begin();
        pbVar2 = (byte*)param_1->end();
        for (; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
            set((ulong)*pbVar1, true);
        }
    }

} // namespace jag::graphics
