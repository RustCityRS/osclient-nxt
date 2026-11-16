// libs/game/runetek5/config/achievementtype/AchievementRequirementSpec.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::game {
    class AchievementRequirementSpec {
    public:
        void GetIDs() const;
        void GetDescription() const;
        int GetGroup() const;
        int GetTarget() const;
        int GetBitIndex() const;
        AchievementRequirementSpec(int arg1, Array<int>&& arg2, int arg3, const eastl::string& str);
        AchievementRequirementSpec(int arg1, Array<int>&& arg2, int arg3, const eastl::string& str, int arg5);
        AchievementRequirementSpec(int arg1, Array<int>&& arg2);
        AchievementRequirementSpec* operator=(AchievementRequirementSpec&& achievementRequirementSpec);
        uint32_t GetID(int arg1) const;
        AchievementRequirementSpec(AchievementRequirementSpec&& achievementRequirementSpec);
        AchievementRequirementSpec();
        ~AchievementRequirementSpec();

    private:
        int m_group;
        uint8_t _unknown_4[28];
        int m_target;
        uint8_t _unknown_36[28];
        int m_bitIndex;
        uint8_t _unknown_68[4];
    };

    // 0x100009d50: AchievementRequirementSpec::GetIDs() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100067280: AchievementRequirementSpec::GetDescription() const has the same machine code as console::Snow::GetSnowPiles() const

    // 0x1000b9960: AchievementRequirementSpec::GetGroup() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000fa830: AchievementRequirementSpec::GetTarget() const has the same machine code as oldscape::graphics::NXTPixScreen::GetWidth() const

    // 0x100429b10: AchievementRequirementSpec::GetBitIndex() const has the same machine code as StaticPointLight::GetRGB() const

    // 0x100554ad0
    AchievementRequirementSpec*
    AchievementRequirementSpec::operator=(AchievementRequirementSpec&& achievementRequirementSpec) {
        m_group = achievementRequirementSpec.m_group;
        field_8 = achievementRequirementSpec.field_8;
        m_target = achievementRequirementSpec.m_target;
        field_40 = &achievementRequirementSpec.field_40;
        m_bitIndex = achievementRequirementSpec.m_bitIndex;
        return this;
    }

    // 0x100556a00
    uint32_t AchievementRequirementSpec::GetID(int arg1) const {
        uint32_t* puVar1 = &field_8[(long)arg1];
        return *puVar1;
    }

    // 0x10055af30
    AchievementRequirementSpec::AchievementRequirementSpec(int arg1, Array<int>&& arg2, int arg3,
                                                           const eastl::basic_string<char, BucketAllocatorEASTL>& str)
        : m_group(arg1), field_8(arg2), m_target(arg3), field_40(str), m_bitIndex(-1) {}

    // 0x10055af90
    AchievementRequirementSpec::AchievementRequirementSpec(int arg1, Array<int>&& arg2, int arg3,
                                                           const eastl::basic_string<char, BucketAllocatorEASTL>& str,
                                                           int arg5)
        : m_group(arg1), field_8(arg2), m_target(arg3), field_40(str), m_bitIndex(arg5) {}

    // 0x10055b000
    AchievementRequirementSpec::AchievementRequirementSpec(int arg1, Array<int>&& arg2)
        : m_group(arg1), field_8(arg2), m_target(-1) {
        eastl local_20;

        eastl::destruct<oldscape::highlight::NpcUID*>(&local_20);
        new (&field_40) eastl::basic_string<char, BucketAllocatorEASTL>("", &local_20);
        m_bitIndex = -1;
    }

    // 0x10055cca0
    AchievementRequirementSpec::AchievementRequirementSpec(AchievementRequirementSpec&& achievementRequirementSpec)
        : m_group(achievementRequirementSpec.m_group), field_8(&achievementRequirementSpec.field_8),
          m_target(achievementRequirementSpec.m_target), field_40(achievementRequirementSpec.field_40),
          m_bitIndex(achievementRequirementSpec.m_bitIndex) {}

    // 0x10055cf40
    AchievementRequirementSpec::AchievementRequirementSpec() : m_group(0), field_8(0), m_target(-1) {
        eastl local_20;

        eastl::destruct<oldscape::highlight::NpcUID*>(&local_20);
        new (&field_40) eastl::basic_string<char, BucketAllocatorEASTL>("", &local_20);
        m_bitIndex = -1;
    }

    // 0x1005f0d10
    AchievementRequirementSpec::~AchievementRequirementSpec() {
        field_40.~basic_string();
        field_8.~Array();
    }

} // namespace jag::game
