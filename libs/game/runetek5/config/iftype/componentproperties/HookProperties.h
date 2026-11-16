// libs/game/runetek5/config/iftype/componentproperties/HookProperties.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class HookProperties {
    public:
        GetOnVarCStrTransmitVars();
        GetOnVarpTransmitVarps();
        GetOnInvTransmitInvs();
        GetOnVarCTransmitVars();
        GetOnStatTransmitStats();
        Hook* GetHook(HookType) const;
        void AddHook(HookType, Hook const&);
        void HasHook(HookType) const;
        ~HookProperties();
        bool HasInputHooks() const;
        HookProperties();

        // data members, from how the methods use this: 364 bytes
        char _unknown_0[8];
        undefined8 field_8; // offset 8
        char _unknown_16[320];
        undefined8 field_336; // offset 336
        char _unknown_344[4];
        undefined8 field_348; // offset 348
        undefined8 field_356; // offset 356
    };

    // 0x100549570, 32 bytes, inline, placed by class name and debug map
    // HookProperties::HasHook(HookType) const
    void HookProperties::HasHook(uint param_2) {
        eastl::bitset<56ul, unsigned long long>::operator[]((bitset<56ul, unsigned long long>*)&field_40,
                                                            (ulong)param_2);
    }

    // 0x100549fc0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // GameUIHookProperties::~GameUIHookProperties()
    void GameUIHookProperties::~GameUIHookProperties() {
        field_0 = &PTR__GameUIHookProperties_100f04068;
        field_8->~HookProperties();
        ~AutoSingleton();
    }

    // 0x100549ff0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // HookProperties::~HookProperties(): jumps straight to the base-object destructor

    // 0x10054a000, 96 bytes, base-object destructor, inline, placed by class name and debug map
    // HookProperties::~HookProperties()
    void HookProperties::~HookProperties() {
        (&field_288)->~fixed_vector();
        (&field_240)->~fixed_vector();
        (&field_192)->~fixed_vector();
        (&field_144)->~fixed_vector();
        (&field_96)->~fixed_vector();
        (&field_48)->~fixed_vector();
        ~vector_map();
    }

    // 0x10054a190, 32 bytes, inline, placed by class name and debug map
    // HookProperties::HasInputHooks() const
    bool HookProperties::HasInputHooks() {
        uint uVar1;

        uVar1 = (&field_40)->HeapBeginPtr();
        return (uVar1 & 131071) != 0;
    }

    // 0x10054d370, 16 bytes, complete-object constructor, inline, placed by class name
    // HookProperties::HookProperties(): jumps straight to the base-object constructor

    // 0x10054d380, 256 bytes, base-object constructor, inline, placed by class name
    // HookProperties::HookProperties()
    void HookProperties::HookProperties() {
        new (this) eastl::vector_map<unsigned char, Hook, eastl::less<unsigned char>, eastl::allocator,
                                     eastl::vector<eastl::pair<unsigned char, Hook>, eastl::allocator>>();
        new (&field_40) eastl::bitset<56ul, unsigned long long>();
        new (&field_48) eastl::fixed_vector<int, 1ul, true, eastl::allocator>();
        new (&field_96) eastl::fixed_vector<int, 1ul, true, eastl::allocator>();
        new (&field_144) eastl::fixed_vector<int, 1ul, true, eastl::allocator>();
        new (&field_192) eastl::fixed_vector<int, 1ul, true, eastl::allocator>();
        new (&field_240) eastl::fixed_vector<int, 1ul, true, eastl::allocator>();
        new (&field_288) eastl::fixed_vector<int, 1ul, true, eastl::allocator>();
        field_348 = 0;
        field_356 = 0;
        field_336 = 0;
        *(undefined8*)&field_344 = 0;
    }

} // namespace jag::game
