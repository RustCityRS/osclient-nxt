// libs/game/runetek5/config/achievementtype/AchievementRequirementSpec.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::game {
    class AchievementRequirementSpec {
    public:
        GetIDs() const;
        GetDescription() const;
        GetGroup() const;
        GetTarget() const;
        GetBitIndex() const;
        AchievementRequirementSpec(int, Array<int, eastl::allocator>&&, int,
                                   eastl::basic_string<char, BucketAllocatorEASTL> const&);
        AchievementRequirementSpec(int, Array<int, eastl::allocator>&&, int,
                                   eastl::basic_string<char, BucketAllocatorEASTL> const&, int);
        AchievementRequirementSpec(int, Array<int, eastl::allocator>&&);
        AchievementRequirementSpec* operator=(AchievementRequirementSpec&&);
        GetID(int) const;
        AchievementRequirementSpec(AchievementRequirementSpec&&);
        AchievementRequirementSpec();
        ~AchievementRequirementSpec();

        // data members, from how the methods use this: 72 bytes
        int field_0; // offset 0
        char _unknown_4[28];
        int field_32; // offset 32
        char _unknown_36[4];
        undefined1 field_40; // offset 40
        char _unknown_41[23];
        int field_64; // offset 64
        char _unknown_68[4];
    };

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    AchievementRequirementSpec::GetIDs() const;

    // 0x100067280: the linker folded this into console::Snow::GetSnowPiles() const, which has identical code
    AchievementRequirementSpec::GetDescription() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    AchievementRequirementSpec::GetGroup() const;

    // 0x1000fa830: the linker folded this into oldscape::graphics::NXTPixScreen::GetWidth() const, which has identical code
    AchievementRequirementSpec::GetTarget() const;

    // 0x100429b10: the linker folded this into StaticPointLight::GetRGB() const, which has identical code
    AchievementRequirementSpec::GetBitIndex() const;

    // 0x1005548d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AchievementRequirementSpec::AchievementRequirementSpec(int, Array<int, eastl::allocator>&&, int, eastl::basic_string<char, BucketAllocatorEASTL> const&): jumps straight to the base-object constructor

    // 0x1005548e0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AchievementRequirementSpec::AchievementRequirementSpec(int, Array<int, eastl::allocator>&&, int, eastl::basic_string<char, BucketAllocatorEASTL> const&, int): jumps straight to the base-object constructor

    // 0x1005548f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AchievementRequirementSpec::AchievementRequirementSpec(int, Array<int, eastl::allocator>&&): jumps straight to the base-object constructor

    // 0x100554ad0, 80 bytes, inline, placed by class name and debug map
    // AchievementRequirementSpec::operator=(AchievementRequirementSpec&&)
    /* AchievementRequirementSpec::TEMPNAMEPLACEHOLDERVALUE(AchievementRequirementSpec&&)
    */

    AchievementRequirementSpec* AchievementRequirementSpec::operator=(AchievementRequirementSpec* param_1) {
        field_0 = param_1->field_0;
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_8, (Array*)&param_1->field_8);
        field_32 = param_1->field_32;
        eastl::basic_string<char, BucketAllocatorEASTL>::operator=((basic_string<char, BucketAllocatorEASTL>*)&field_40,
                                                                   (basic_string*)&param_1->field_40);
        field_64 = param_1->field_64;
        return this;
    }

    // 0x100556a00, 32 bytes, inline, placed by class name and debug map
    // AchievementRequirementSpec::GetID(int) const
    undefined4 AchievementRequirementSpec::GetID(int param_1) {
        undefined4* puVar1;

        puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_8,
                                                                       (long)param_1);
        return *puVar1;
    }

    // 0x10055af30, 96 bytes, base-object constructor, inline, placed by class name
    // AchievementRequirementSpec::AchievementRequirementSpec(int, Array<int, eastl::allocator>&&, int, eastl::basic_string<char, BucketAllocatorEASTL> const&)
    void AchievementRequirementSpec::AchievementRequirementSpec(int param_1, Array* param_2, int param_3,
                                                                basic_string* param_4) {
        field_0 = param_1;
        new (&field_8, param_2) Array<int, eastl::allocator>();
        field_32 = param_3;
        new (&field_40) eastl::basic_string<char, BucketAllocatorEASTL>();
        field_64 = -1;
    }

    // 0x10055af90, 112 bytes, base-object constructor, inline, placed by class name
    // AchievementRequirementSpec::AchievementRequirementSpec(int, Array<int, eastl::allocator>&&, int, eastl::basic_string<char, BucketAllocatorEASTL> const&, int)
    void AchievementRequirementSpec::AchievementRequirementSpec(int param_1, Array* param_2, int param_3,
                                                                basic_string* param_4, int param_5) {
        field_0 = param_1;
        new (&field_8, param_2) Array<int, eastl::allocator>();
        field_32 = param_3;
        new (&field_40) eastl::basic_string<char, BucketAllocatorEASTL>();
        field_64 = param_5;
    }

    // 0x10055b000, 112 bytes, base-object constructor, inline, placed by class name
    // AchievementRequirementSpec::AchievementRequirementSpec(int, Array<int, eastl::allocator>&&)
    void AchievementRequirementSpec::AchievementRequirementSpec(int param_1, Array* param_2) {
        NpcUID* extraout_RDX;
        eastl local_20[8];

        field_0 = param_1;
        new (&field_8, param_2) Array<int, eastl::allocator>();
        field_32 = -1;
        eastl::destruct<oldscape::highlight::NpcUID*>(local_20, (NpcUID*)"EASTL basic_string", extraout_RDX);
        new (&field_40, (BucketAllocatorEASTL*)"") eastl::basic_string<char, BucketAllocatorEASTL>();
        field_64 = -1;
    }

    // 0x10055cbb0, 16 bytes, complete-object constructor, inline, placed by class name
    // AchievementRequirementSpec::AchievementRequirementSpec(AchievementRequirementSpec&&): jumps straight to the base-object constructor

    // 0x10055cca0, 64 bytes, base-object constructor, inline, placed by class name
    // AchievementRequirementSpec::AchievementRequirementSpec(AchievementRequirementSpec&&)
    void AchievementRequirementSpec::AchievementRequirementSpec(AchievementRequirementSpec* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (Array*)&param_1->field_8) Array<int, eastl::allocator>();
        field_32 = param_1->field_32;
        new (&field_40) eastl::basic_string<char, BucketAllocatorEASTL>();
        field_64 = param_1->field_64;
    }

    // 0x10055cf30, 16 bytes, complete-object constructor, inline, placed by class name
    // AchievementRequirementSpec::AchievementRequirementSpec(): jumps straight to the base-object constructor

    // 0x10055cf40, 112 bytes, base-object constructor, inline, placed by class name
    // AchievementRequirementSpec::AchievementRequirementSpec()
    void AchievementRequirementSpec::AchievementRequirementSpec() {
        NpcUID* extraout_RDX;
        eastl local_20[8];

        field_0 = 0;
        new (&field_8, 0) Array<int, eastl::allocator>();
        field_32 = -1;
        eastl::destruct<oldscape::highlight::NpcUID*>(local_20, (NpcUID*)"EASTL basic_string", extraout_RDX);
        new (&field_40, (BucketAllocatorEASTL*)"") eastl::basic_string<char, BucketAllocatorEASTL>();
        field_64 = -1;
    }

    // 0x1005f0d00, 16 bytes, complete-object destructor, inline, placed by class name
    // AchievementRequirementSpec::~AchievementRequirementSpec(): jumps straight to the base-object destructor

    // 0x1005f0d10, 48 bytes, base-object destructor, inline, placed by class name
    // AchievementRequirementSpec::~AchievementRequirementSpec()
    void AchievementRequirementSpec::~AchievementRequirementSpec() {
        (&field_40)->~basic_string();
        (&field_8)->~Array();
    }

} // namespace jag::game
