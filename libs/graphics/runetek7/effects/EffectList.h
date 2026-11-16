// libs/graphics/runetek7/effects/EffectList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class EffectList {
    public:
        void GetEnabledEffects() const;
        EffectList(const eastl::bitset<121ul, unsigned long long>& arg1);
        void Toggle(EffectType effectType);
        void Clear();
        void operator|=(const EffectList& effectList);
        EffectList();
        void Add(EffectType effectType);
        void Remove(EffectType effectType);
        void Set(EffectType effectType, bool arg2);
        void Contains(EffectType effectType) const;
        void operator!=(const EffectList& effectList) const;
        unsigned long Contains(const EffectList& effectList) const;
        unsigned long GetEffectListHash() const;
        void AppendAsStringDefines(
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>& basic_stringstream) const;
        void operator&=(const EffectList& effectList);
        EffectList(const std::initializer_list<EffectType>& initializer_list);

        uint8_t _unknown_0[1];
    };

    // 0x1000afcf0
    void EffectList::Toggle(EffectType effectType) {
        uint8_t bVar1 = test((unsigned long)effectType);
        *this = eastl::bitset<121ul, unsigned long long>::set((unsigned long)effectType, (bool)(bVar1 ^ 1));
    }

    // 0x1007e4080
    void EffectList::Clear() {
        reset();
    }

    // 0x10088fe80
    void EffectList::operator|=(const EffectList& effectList) {
        *this |= effectList;
    }

    // 0x1008eb5a0
    void EffectList::Add(EffectType effectType) {
        *this = eastl::bitset<121ul, unsigned long long>::set((unsigned long)effectType, true);
    }

    // 0x1008eb5c0
    void EffectList::Remove(EffectType effectType) {
        *this = eastl::bitset<121ul, unsigned long long>::set((unsigned long)effectType, false);
    }

    // 0x1008f2790
    void EffectList::Set(EffectType effectType, bool arg2) {
        *this = eastl::bitset<121ul, unsigned long long>::set((unsigned long)effectType, arg2);
    }

    // 0x1008f2a90
    void EffectList::Contains(EffectType effectType) const {
        test((unsigned long)effectType);
    }

    // 0x1008ffc30
    EffectList::EffectList() : eastl::bitset(0) {}

    // 0x100900c30
    void EffectList::operator!=(const EffectList& effectList) const {
        *this != effectList;
    }

    // 0x10092bf90
    void EffectList::operator&=(const EffectList& effectList) {
        *this &= effectList;
    }

    // 0x100938970
    EffectList::EffectList(const std::initializer_list<EffectType>& initializer_list) : eastl::bitset(0) {
        auto pbVar1 = initializer_list.begin();
        auto pbVar2 = initializer_list.end();
        for (; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
            *this = eastl::bitset<121ul, unsigned long long>::set((unsigned long)*pbVar1, true);
        }
    }

} // namespace jag::graphics
