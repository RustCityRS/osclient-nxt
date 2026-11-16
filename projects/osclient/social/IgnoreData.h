// projects/osclient/social/IgnoreData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::social {
    class IgnoreData {
    public:
        // virtual methods in vtable order
        virtual int CompareTo(IgnoreData const&) const;
        IgnoreData();
        ~IgnoreData();

        // data members, from how the methods use this: 176 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[160];
        int field_168; // offset 168
        char _unknown_172[4];
    };

    // 0x10013a900, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // IgnoreData::IgnoreData(): jumps straight to the base-object constructor

    // 0x10013a920, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // IgnoreData::IgnoreData()
    void IgnoreData::IgnoreData() {
        new (this) PlayerData<IgnoreData>();
        field_0 = PTR_vtable_100ee8af0 + 16;
        new (&field_136) eastl::string();
    }

    // 0x10013a9c0, 32 bytes, inline, placed by class name and debug map
    // IgnoreData::CompareTo(IgnoreData const&) const
    int IgnoreData::CompareTo(IgnoreData* param_1) {
        return field_168 - param_1->field_168;
    }

    // 0x1001af9e0, 16 bytes, complete-object destructor, inline, placed by class name
    // IgnoreData::~IgnoreData(): jumps straight to the base-object destructor

    // 0x1001af9f0, 48 bytes, base-object destructor, inline, placed by class name
    // IgnoreData::~IgnoreData()
    void IgnoreData::~IgnoreData() {
        (&field_136)->~basic_string();
        ~PlayerData();
    }

} // namespace jag::oldscape::social
