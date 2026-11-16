// libs/game/runetek5/camera/lookat/LookatEntity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LookatEntity : public ILookatManager // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LookatEntity();
        virtual auto GetLookatEntity() const;
        virtual AABB GetCurrentLookat() const;
        virtual uint32_t GetLookatData(LookatData& lookatData);
        virtual Vector3T<double>* GetLookatOffset(math::Vector3T<double>& vector3) const;
        virtual void GetLookatPosition(math::Vector3T<double>& vector3) const;
        virtual void SetCurrentLookat(const math::Vector3T<double>& vector3);
        virtual void GetDestinationLookat(math::Vector3T<double>& vector3) const;
        virtual void GetLookatFine(CoordFine& coordFine) const;
        virtual uint64_t GetZRotation() const;
        virtual uint64_t GetFinishTriggers(eastl::fixed_vector<int, 2ul>& arg1);
        virtual void Ready() const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char>>& arg1,
                                         const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback);
        virtual uint64_t ToString(eastl::fixed_string<char, 512>& str) const;
        void UpdateLookAtEntity(const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback);
        void SetLookatEntity(const shared_ptr<Entity>& entity, const math::Vector3T<double>& vector3, bool arg3);
        LookatEntity();

    private:
        uint8_t _unknown_16[16];
        unsigned int field_32;
        unsigned int field_36;
        uint8_t field_40;
        uint8_t _unknown_41[7];
        AABB field_48;
        bool field_72;
        uint8_t _unknown_73[7];
        AABB m_currentLookat;
        AABB field_104;
        AABB field_128;
        uint32_t field_152;
        uint8_t _unknown_156[4];
        AABB field_160;
    };

    // 0x10061d9e0
    Vector3T<double>* LookatEntity::GetLookatOffset(math::Vector3T<double>& vector3) const {
        vector3 = *field_48;
        return vector3;
    }

    // 0x10061dba0
    LookatEntity::~LookatEntity() {
        field_16.~weak_ptr();
    }

    // 0x100640b90
    LookatEntity::LookatEntity() : ILookatManager(1) {
        new (&field_16) shared_ptr();
        field_32 = 4294967295;
        field_36 = 4294967295;
        field_40 = 0;
        new (field_48) oldscape::dash3d::ModelLit::AABB();
        field_72 = false;
        new (m_currentLookat) oldscape::dash3d::ModelLit::AABB();
        new (field_104) oldscape::dash3d::ModelLit::AABB();
        new (field_128) oldscape::dash3d::ModelLit::AABB();
        field_152 = 4294967295;
        new (field_160) oldscape::dash3d::ModelLit::AABB();
    }

} // namespace jag::game
