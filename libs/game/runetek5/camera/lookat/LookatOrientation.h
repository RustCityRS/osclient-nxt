// libs/game/runetek5/camera/lookat/LookatOrientation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LookatOrientation : public LookatPoint // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LookatOrientation();
        virtual AABB GetCurrentLookat() const;
        virtual uint64_t GetLookatData(LookatData& lookatData);
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
        virtual uint64_t Service();
        virtual void SetLookatVector(math::Vector3T<float> vector3);
        virtual unsigned int* GetCurrentOrientation() const;
        void SetOrientationYRotation(int arg1);
        void SetOrientationXRotation(int arg1);
        void SetOrientationXMovement(float arg1);
        void SetOrientationZMovement(float arg1);
        void ClampBoundary(math::Vector3T<double>& vector3) const;
        void SetMaxDistanceClamping(const math::Vector3T<float>& vector3, int arg2, int arg3, int arg4, int arg5,
                                    int arg6, int arg7);
        LookatOrientation();

    private:
        double field_120;
        double field_128;
        uint8_t m_pCurrentOrientation[4];
        uint8_t _unknown_140[4];
    };

    // 0x10061da00
    Vector3T<double>* LookatOrientation::GetLookatOffset(math::Vector3T<double>& vector3) const {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/lookat/"
                  "LookatOrientation.h",
                  27, "???");
        return vector3;
    }

    // 0x100640e30
    LookatOrientation::LookatOrientation()
        : ILookatManager(3), m_orientationXRotation(0), m_orientationYRotation(0), m_orientationXMovement(0.0),
          m_orientationZMovement(0.0), field_32(-1.0, -1.0, -1.0), field_56(-1.0, -1.0, -1.0) {
        *(uint16_t*)&field_80 = 0;
        new (m_currentLookat) oldscape::dash3d::ModelLit::AABB();
        new (&field_112) oldscape::dash3d::ModelLit::AABB();
        new (m_pCurrentOrientation) math::QuaternionT<float>();
    }

} // namespace jag::game
