// projects/osclient/minimenu/OpGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class OpGroup {
    public:
        bool operator==(OpGroup const&) const;
        OpGroup(OpGroup const&);
        ulong IsBlank() const;
        MatchPattern(OpGroup const&, bool);
        OpGroup* MakeCommon(minimenu::MinimenuSubjType, eastl::string const&,
                            eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator> const&);
        OpGroup();
        OpGroup* Create(configdecoder::LocType const&);
        OpGroup* Create(configdecoder::NpcType const&);
        OpGroup* Create(configdecoder::ObjType const&);
        OpGroup* Create(shared_ptr<rs2lib::IfType> const&);
        OpGroup* Create(ClientNpc const&);
        OpGroup* Create(ClientObj const&);
        OpGroup* Create(eastl::string const&, bool);
        OpGroup(OpGroup&&);
        ToString() const;
        ~OpGroup();
        static eastl::vector<char, eastl::allocator> /* 32 bytes */ m_reservedChars;

        // data members, from how the methods use this: 336 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[332];
    };

    // 0x100034bc0, 64 bytes, inline, placed by class name and debug map
    // OpGroup::operator==(OpGroup const&) const
    /* OpGroup::TEMPNAMEPLACEHOLDERVALUE(OpGroup const&) const */

    bool OpGroup::operator==(OpGroup* param_1) {
        bool bVar1;

        if ((field_0 == param_1->field_0) &&
            (bVar1 = eastl::operator==((basic_string*)&field_8, (basic_string*)&param_1->field_8), bVar1)) {
            bVar1 = std::operator==((array*)&field_40, (array*)&param_1->field_40);
            return bVar1;
        }
        return false;
    }

    // 0x100034dd0, 16 bytes, complete-object constructor, inline, placed by class name
    // OpGroup::OpGroup(OpGroup const&): jumps straight to the base-object constructor

    // 0x100034de0, 96 bytes, base-object constructor, inline, placed by class name
    // OpGroup::OpGroup(OpGroup const&)
    void OpGroup::OpGroup(OpGroup* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (basic_string*)&param_1->field_8) eastl::string();
        new (&field_40, (array*)&param_1->field_40) std::array<eastl::string, 10ul>();
    }

    // 0x100074900, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OpGroup::OpGroup(): jumps straight to the base-object constructor

    // 0x100074f20, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OpGroup::OpGroup(OpGroup&&): jumps straight to the base-object constructor

    // 0x1000794e0, 608 bytes, base-object constructor, inline, placed by class name
    // OpGroup::OpGroup()
    void OpGroup::OpGroup() {
        allocator local_78[8];
        allocator local_70[8];
        allocator local_68[8];
        allocator local_60[8];
        allocator local_58[8];
        allocator local_50[8];
        allocator local_48[8];
        allocator local_40[8];
        allocator local_38[8];
        allocator local_30[8];

        field_0 = 0;
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (&field_8, "", local_30) eastl::string();
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (&field_40, "", local_30) eastl::string();
        eastl::allocator::allocator(local_78, "EASTL basic_string");
        new (&field_72, "", local_78) eastl::string();
        eastl::allocator::allocator(local_70, "EASTL basic_string");
        new (&field_104, "", local_70) eastl::string();
        eastl::allocator::allocator(local_68, "EASTL basic_string");
        new (&field_136, "", local_68) eastl::string();
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        new (&field_168, "", local_60) eastl::string();
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        new (&field_200, "", local_58) eastl::string();
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (&field_232, "", local_50) eastl::string();
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        new (&field_264, "", local_48) eastl::string();
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (&field_296, "", local_40) eastl::string();
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_328, "", local_38) eastl::string();
    }

    // 0x100079740, 64 bytes, base-object constructor, inline, placed by class name
    // OpGroup::OpGroup(OpGroup&&)
    void OpGroup::OpGroup(OpGroup* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (basic_string*)&param_1->field_8) eastl::string();
        new (&field_40, (array*)&param_1->field_40) std::array<eastl::string, 10ul>();
    }

    // 0x1000b5720, 16 bytes, complete-object destructor, inline, placed by class name
    // OpGroup::~OpGroup(): jumps straight to the base-object destructor

    // 0x100124f70, 48 bytes, base-object destructor, inline, placed by class name
    // OpGroup::~OpGroup()
    void OpGroup::~OpGroup() {
        (&field_40)->~array();
        (&field_8)->~basic_string();
    }

} // namespace jag::oldscape
