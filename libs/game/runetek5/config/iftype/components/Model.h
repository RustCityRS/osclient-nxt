// libs/game/runetek5/config/iftype/components/Model.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class Model : public ui::Component // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Model();
        virtual uint64_t GetType() const;
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual int GetLinkObjType() const;
        virtual void SetLinkObjType(int arg1);
        virtual unsigned long long GetLinkObjCount() const;
        virtual void SetLinkObjCount(unsigned long long arg1);
        void SetRecol(int arg1, unsigned short arg2, unsigned short arg3);
        void ClearModelCache(bool arg1);
        void SetRemat(int arg1, int arg2, int arg3);
        void SetModelTransform(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                               const math::Vector3T<float>& vector33, unsigned int arg4);
        uint8_t* GetModelTransform(bool arg1);

    private:
        uint8_t _unknown_368[24];
        uint32_t field_392;
        uint32_t field_396;
        uint8_t _unknown_400[28];
        unsigned int field_428;
        unsigned int field_432;
        unsigned int field_436;
        uint8_t field_440;
        uint8_t field_441;
        uint8_t _unknown_442[118];
        uint8_t field_560;
        uint8_t _unknown_561[3];
        uint32_t field_564;
        uint8_t _unknown_568[216];
        int m_linkObjType;
        uint8_t _unknown_788[4];
        unsigned long long m_linkObjCount;
        uint8_t _unknown_800[28];
        uint8_t field_828;
        bool field_829;
        uint8_t _unknown_830[171];
    };

    // 0x100536420
    void Model::ClearModelCache(bool arg1) {
        field_968.Clear();
        field_1000.reset();
        field_828 = 1;
        field_829 = arg1;
    }

    // 0x10053c290
    int Model::GetLinkObjType() const {
        return m_animationType;
    }

    // 0x10053c2a0
    void Model::SetLinkObjType(int arg1) {
        if (m_linkObjType != arg1) {
            ClearModelCache(true);
            field_832.reset();
            m_linkObjType = arg1;
        }
    }

    // 0x10053c2e0
    unsigned long long Model::GetLinkObjCount() const {
        return m_linkObjCount;
    }

    // 0x10053c2f0
    void Model::SetLinkObjCount(unsigned long long arg1) {
        if (m_linkObjCount != arg1) {
            ClearModelCache(true);
            m_linkObjCount = arg1;
        }
    }

} // namespace jag::game

namespace jag {
    class ModelRenderable {
    public:
        RenderableOutput* Render(TriangleVertexData* triangleVertexData, unsigned int arg2, RenderState& renderState,
                                 eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>,
                                                       eastl::equal_to<int>, false>& fixed_hash_map,
                                 unsigned int arg5) const;

        uint8_t _unknown_0[1];
    };

} // namespace jag

namespace jag::math {
    // 0x1005366e0
    QuaternionT<float> QuaternionYawPitchRoll<float>(const Vector3T<float>& vector3) {
        Vector3T<float>* in_RSI;

        new (vector3) QuaternionT<float>();
        vector3.FromYawPitchRoll(*in_RSI);
        return vector3;
    }

} // namespace jag::math
