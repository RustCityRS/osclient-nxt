// libs/game/runetek5/camera/lookat/LookatPoint.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LookatPoint {
    public:
        // virtual methods in vtable order
        virtual ~LookatPoint();
        virtual AABB GetCurrentLookat() const;
        virtual void GetLookatData(LookatData& lookatData);
        virtual Vector3T<double>* GetLookatOffset(math::Vector3T<double>& vector3) const;
        virtual void GetLookatPosition(math::Vector3T<double>& vector3) const;
        virtual void SetCurrentLookat(const math::Vector3T<double>& vector3);
        virtual void GetDestinationLookat(math::Vector3T<double>& vector3) const;
        virtual void GetLookatFine(CoordFine& coordFine) const;
        virtual uint64_t GetZRotation() const;
        virtual uint64_t GetFinishTriggers(eastl::fixed_vector<int, 2ul>& arg1);
        virtual uint8_t Ready() const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char>>& arg1,
                                         const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback);
        virtual void ToString(eastl::fixed_string<char, 512>& str) const;
        void SetLookat(const CoordFine& coordFine);
        LookatPoint();

    private:
        LookatMode field_8;
        uint8_t field_12;
        uint8_t _unknown_13[3];
        AABB m_currentLookat;
        AABB field_40;
        AABB field_64;
        unsigned int field_88;
        uint8_t _unknown_92[4];
        AABB field_96;
    };

    // 0x10061da40
    Vector3T<double>* LookatPoint::GetLookatOffset(math::Vector3T<double>& vector3) const {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/lookat/"
                  "LookatPoint.h",
                  34, "???");
        return vector3;
    }

    // 0x10061da80
    void LookatPoint::GetLookatPosition(math::Vector3T<double>& vector3) const {
        vector3 = *m_currentLookat;
    }

    // 0x10061daa0
    void LookatPoint::GetDestinationLookat(math::Vector3T<double>& vector3) const {
        vector3 = *field_64;
    }

    // 0x1006409c0
    LookatPoint::LookatPoint() : ILookatManager(0), field_12(0), field_88(4294967295) {}

} // namespace jag::game
