// libs/game/runetek5/config/iftype/components/Model.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class Model : public ui::Component // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Model();
        virtual GetType() const;
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual int GetLinkObjType() const;
        virtual void SetLinkObjType(int);
        virtual ulonglong GetLinkObjCount() const;
        virtual void SetLinkObjCount(unsigned long long);
        void SetRecol(int, unsigned short, unsigned short);
        void ClearModelCache(bool);
        void SetRemat(int, int, int);
        void SetModelTransform(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&,
                               unsigned int);
        GetModelTransform(bool);

        // data members, from how the methods use this: 969 bytes, the first 368 are Component
        char _unknown_368[24];
        undefined4 field_392; // offset 392
        undefined4 field_396; // offset 396
        char _unknown_400[28];
        uint field_428; // offset 428
        uint field_432; // offset 432
        uint field_436; // offset 436
        byte field_440; // offset 440
        byte field_441; // offset 441
        char _unknown_442[118];
        byte field_560; // offset 560
        char _unknown_561[3];
        undefined4 field_564; // offset 564
        char _unknown_568[216];
        int m_linkObjType; // offset 784
        char _unknown_788[4];
        ulonglong m_linkObjCount; // offset 792
        char _unknown_800[28];
        undefined1 field_828; // offset 828
        bool field_829;       // offset 829
        char _unknown_830[139];
    };

    // 0x100536420, 64 bytes, inline, placed by class name and debug map
    // Model::ClearModelCache(bool)
    void Model::ClearModelCache(bool param_1) {
        (&field_968)->Clear();
        shared_ptr<AnimationWrapper>::reset();
        field_828 = 1;
        field_829 = param_1;
    }

    // 0x10053c290, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Model::GetLinkObjType() const
    /* graphics::AnimationStateMachine::GetAnimationType() const */

    int graphics::AnimationStateMachine::GetAnimationType() {
        return m_animationType;
    }

    // 0x10053c2a0, 64 bytes, inline, placed by class name
    // Model::SetLinkObjType(int)
    void Model::SetLinkObjType(int param_1) {
        if (m_linkObjType != param_1) {
            ClearModelCache(this, true);
            shared_ptr<graphics::Model>::reset();
            m_linkObjType = param_1;
        }
    }

    // 0x10053c2e0, 16 bytes, inline, placed by class name
    // Model::GetLinkObjCount() const
    ulonglong Model::GetLinkObjCount() {
        return m_linkObjCount;
    }

    // 0x10053c2f0, 48 bytes, inline, placed by class name
    // Model::SetLinkObjCount(unsigned long long)
    void Model::SetLinkObjCount(ulonglong param_1) {
        if (m_linkObjCount != param_1) {
            ClearModelCache(this, true);
            m_linkObjCount = param_1;
        }
    }

} // namespace jag::game

namespace jag {
    class ModelRenderable {
    public:
        RenderableOutput* Render(TriangleVertexData*, unsigned int, RenderState&,
                                 eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>,
                                                       eastl::equal_to<int>, false, eastl::allocator>&,
                                 unsigned int) const;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

} // namespace jag

namespace jag::math {
    // 0x1005366e0, 48 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float> QuaternionYawPitchRoll<float>(Vector3T<float> const&)
    math* QuaternionYawPitchRoll<float>(Vector3T* param_1) {
        new (this) QuaternionT<float>();
        FromYawPitchRoll(param_1);
        return this;
    }

} // namespace jag::math
