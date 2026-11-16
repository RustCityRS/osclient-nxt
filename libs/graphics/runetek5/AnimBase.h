// libs/graphics/runetek5/AnimBase.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class AnimBase {
    public:
        unsigned int GetBaseID();
        uint8_t* GetLabelSetToJointMap() const;
        uint8_t* GetJointMoveMap();
        unsigned short GetTransformCount() const;
        AnimBase();
        AnimBase(unsigned int arg1, PacketT<Array<unsigned char>>& arg2);
        void BuildParentJoints();
        uint16_t GetOriginTransformIDByJointID(unsigned int arg1);
        void GetTransformLabels(unsigned int arg1) const;
        void DebugDrawBindPose(const math::Matrix44T<float>& matrix44, unsigned char arg2) const;
        Array<Joint>* GetBindPose(unsigned char arg1) const;
        void GetJointTreeLevels(unsigned char arg1) const;
        uint8_t GetTransformType(unsigned int arg1) const;
        Joint* GetJointByOriginMappedID(unsigned int arg1, unsigned char arg2);
        uint16_t GetMaxLabelID() const;
        int GetNumJoints() const;
        ~AnimBase();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        unsigned int m_baseID;
        unsigned short m_transformCount;
        uint8_t _unknown_10[174];
        uint16_t m_maxLabelID;
        uint8_t _unknown_186[78];
        short m_numJoints;
        uint8_t _unknown_266[6];
    };

    // 0x1009782c0
    uint16_t AnimBase::GetOriginTransformIDByJointID(unsigned int arg1) {
        uint16_t* puVar1 = &field_160[(unsigned long)arg1];
        return *puVar1;
    }

    // 0x1009782e0
    void AnimBase::GetTransformLabels(unsigned int arg1) const {
        field_40[(unsigned long)arg1];
    }

    // 0x1009785d0
    Array<Joint>* AnimBase::GetBindPose(unsigned char arg1) const {
        uint64_t in_register_00000031;

        return (Array<Joint>*)field_64[(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295];
    }

    // 0x1009786c0
    void AnimBase::GetJointTreeLevels(unsigned char arg1) const {
        uint64_t in_register_00000031;

        field_88[(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295];
    }

    // 0x10097ab50
    uint8_t AnimBase::GetTransformType(unsigned int arg1) const {
        uint8_t* puVar1 = &field_16[(unsigned long)arg1];
        return *puVar1;
    }

    // 0x10097af00
    Joint* AnimBase::GetJointByOriginMappedID(unsigned int arg1, unsigned char arg2) {
        uint64_t in_register_00000011;

        short* psVar3 = &field_112[(unsigned long)arg1];
        short sVar1 = *psVar3;
        unsigned long arg1_00 = (((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) & 4294967295;
        short sVar2 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_64[arg1_00])->end();
        if ((int)sVar2 <= (int)sVar1) {
            LogAssert(
                "jointIndex < static_cast<decltype(jointIndex)>(m_poses[bindID].size())",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/AnimBase.h",
                62, nullptr);
        }
        Array<Joint>* this_01 = &field_64[arg1_00];
        return (Joint*)(*this_01)[(long)(int)sVar1];
    }

    // 0x100983a10
    uint16_t AnimBase::GetMaxLabelID() const {
        return m_maxLabelID;
    }

    // 0x100984360
    int AnimBase::GetNumJoints() const {
        return (int)m_numJoints;
    }

    // 0x100993f60
    AnimBase::~AnimBase() {
        field_240.~Array();
        field_192.~map();
        field_160.~Array();
        field_136.~Array();
        field_112.~Array();
        field_88.~Array();
        field_64.~Array();
        field_40.~Array();
        field_16.~Array();
    }

} // namespace jag::graphics

// 0x1009786e0
void pow(float arg1, float arg2) {
    _exp2f(arg1 * -0.0740006);
}
