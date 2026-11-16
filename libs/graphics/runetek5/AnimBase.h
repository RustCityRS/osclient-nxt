// libs/graphics/runetek5/AnimBase.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class AnimBase {
    public:
        GetBaseID();
        GetLabelSetToJointMap() const;
        GetJointMoveMap();
        ushort GetTransformCount() const;
        AnimBase();
        AnimBase(unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&);
        void BuildParentJoints();
        GetOriginTransformIDByJointID(unsigned int);
        void GetTransformLabels(unsigned int) const;
        void DebugDrawBindPose(math::Matrix44T<float> const&, unsigned char) const;
        void GetBindPose(unsigned char) const;
        void GetJointTreeLevels(unsigned char) const;
        GetTransformType(unsigned int) const;
        void GetJointByOriginMappedID(unsigned int, unsigned char);
        GetMaxLabelID() const;
        int GetNumJoints() const;
        ~AnimBase();

        // data members, from how the methods use this: 272 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        uint field_4;            // offset 4
        ushort m_transformCount; // offset 8
        char _unknown_10[174];
        undefined2 m_maxLabelID; // offset 184
        char _unknown_186[78];
        short m_numJoints; // offset 264
        char _unknown_266[6];
    };

    // 0x1009782c0, 32 bytes, inline, placed by class name and debug map
    // AnimBase::GetOriginTransformIDByJointID(unsigned int)
    undefined2 AnimBase::GetOriginTransformIDByJointID(uint param_1) {
        undefined2* puVar1;

        puVar1 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
            (Array<unsigned short, eastl::allocator>*)&field_160, (ulong)param_1);
        return *puVar1;
    }

    // 0x1009782e0, 32 bytes, inline, placed by class name and debug map
    // AnimBase::GetTransformLabels(unsigned int) const
    void AnimBase::GetTransformLabels(uint param_1) {
        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)&field_40, (ulong)param_1);
    }

    // 0x1009785d0, 32 bytes, inline, placed by class name and debug map
    // AnimBase::GetBindPose(unsigned char) const
    void AnimBase::GetBindPose(uchar param_1) {
        undefined7 in_register_00000031;

        Array<Array<Joint, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<Joint, eastl::allocator>, eastl::allocator>*)&field_64,
            CONCAT71(in_register_00000031, param_1) & 4294967295);
    }

    // 0x1009786c0, 32 bytes, inline, placed by class name and debug map
    // AnimBase::GetJointTreeLevels(unsigned char) const
    void AnimBase::GetJointTreeLevels(uchar param_1) {
        undefined7 in_register_00000031;

        Array<Array<short, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<short, eastl::allocator>, eastl::allocator>*)&field_88,
            CONCAT71(in_register_00000031, param_1) & 4294967295);
    }

    // 0x10097ab50, 32 bytes, inline, placed by class name
    // AnimBase::GetTransformType(unsigned int) const
    undefined1 AnimBase::GetTransformType(uint param_1) {
        undefined1* puVar1;

        puVar1 = (undefined1*)Array<AnimTransform, eastl::allocator>::operator[](
            (Array<AnimTransform, eastl::allocator>*)&field_16, (ulong)param_1);
        return *puVar1;
    }

    // 0x10097af00, 128 bytes, inline, placed by class name
    // AnimBase::GetJointByOriginMappedID(unsigned int, unsigned char)
    void AnimBase::GetJointByOriginMappedID(uint param_1, uchar param_2) {
        short sVar1;
        short sVar2;
        short* psVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Array<Joint, eastl::allocator>* this_01;
        undefined7 in_register_00000011;
        ulong uVar4;

        psVar3 = (short*)Array<short, eastl::allocator>::operator[]((Array<short, eastl::allocator>*)&field_112,
                                                                    (ulong)param_1);
        sVar1 = *psVar3;
        uVar4 = CONCAT71(in_register_00000011, param_2) & 4294967295;
        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<Array<Joint, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<Joint, eastl::allocator>, eastl::allocator>*)&field_64, uVar4);
        sVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if ((int)sVar2 <= (int)sVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "jointIndex < static_cast<decltype(jointIndex)>(m_poses[bindID].size())",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/AnimBase.h",
                62, (char*)0);
        }
        this_01 = (Array<Joint, eastl::allocator>*)Array<Array<Joint, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<Joint, eastl::allocator>, eastl::allocator>*)&field_64, uVar4);
        Array<Joint, eastl::allocator>::operator[](this_01, (long)(int)sVar1);
    }

    // 0x100983a10, 16 bytes, inline, placed by class name
    // AnimBase::GetMaxLabelID() const
    undefined2 AnimBase::GetMaxLabelID() {
        return m_maxLabelID;
    }

    // 0x100984360, 16 bytes, inline, placed by class name
    // AnimBase::GetNumJoints() const
    int AnimBase::GetNumJoints() {
        return (int)m_numJoints;
    }

    // 0x100993f50, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimBase::~AnimBase(): jumps straight to the base-object destructor

    // 0x100993f60, 112 bytes, base-object destructor, inline, placed by class name
    // AnimBase::~AnimBase()
    void AnimBase::~AnimBase() {
        (&field_240)->~Array();
        (&field_192)->~map();
        (&field_160)->~Array();
        (&field_136)->~Array();
        (&field_112)->~Array();
        (&field_88)->~Array();
        (&field_64)->~Array();
        (&field_40)->~Array();
        (&field_16)->~Array();
    }

} // namespace jag::graphics

// 0x1009786e0, 32 bytes, placed by debug map only (low confidence)
// pow(float, float)
void pow(float param_1, float param_2) {
    _exp2f(param_1 * -0.0740006);
}
