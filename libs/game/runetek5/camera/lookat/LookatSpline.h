// libs/game/runetek5/camera/lookat/LookatSpline.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LookatSpline : public ILookatManager // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LookatSpline();
        virtual void Update(float arg1, const math::Vector3T<double>& vector31, const math::Vector3T<double>& vector32);
        virtual uint8_t* GetCurrentLookat() const;
        virtual void GetLookatData(LookatData& lookatData);
        virtual void GetLookatOffset(math::Vector3T<double>& vector3) const;
        virtual void GetLookatPosition(math::Vector3T<double>& vector3) const;
        virtual void SetCurrentLookat(const math::Vector3T<double>& vector3);
        virtual void GetDestinationLookat(math::Vector3T<double>& vector3) const;
        virtual void GetLookatFine(CoordFine& coordFine) const;
        virtual uint64_t GetZRotation() const;
        virtual void GetFinishTriggers(eastl::fixed_vector<int, 2ul>& arg1);
        virtual void Ready() const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char>>& arg1,
                                         const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback);
        virtual void DrawDebug(unsigned int arg1);
        virtual void ToString(eastl::fixed_string<char, 512>& str) const;
        void GetSpline();
        LookatSpline(LookatMode lookatMode);

    private:
        AABB field_16;
        NXTPixToolkit field_40;
    };

    // 0x100619430
    void LookatSpline::GetLookatData(LookatData& lookatData) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSpline.h",
                        46, "Not implemented");
    }

    // 0x100619460
    void LookatSpline::GetLookatOffset(math::Vector3T<double>& vector3) const {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSpline.h",
                        47, "Not implemented");
    }

    // 0x1006194a0
    void LookatSpline::GetLookatPosition(math::Vector3T<double>& vector3) const {
        uint8_t local_30[24];

        *local_30 = field_40->GetCurrentPosition();
        vector3 = *local_30;
    }

    // 0x1006194e0
    void LookatSpline::SetCurrentLookat(const math::Vector3T<double>& vector3) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSpline.h",
                        43, "Not implemented");
    }

    // 0x100619510
    void LookatSpline::GetDestinationLookat(math::Vector3T<double>& vector3) const {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSpline.h",
                        44, "Not implemented");
    }

    // 0x100619540
    void LookatSpline::GetLookatFine(CoordFine& coordFine) const {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSpline.h",
                        45, "Not implemented");
    }

    // 0x100619570
    void LookatSpline::Ready() const {
        field_40->Ready();
    }

    // 0x100619580
    void
    LookatSpline::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                      const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback) {
        field_40->ProcessServerUpdateSpline(arg1);
    }

    // 0x100619590
    void LookatSpline::DrawDebug(unsigned int arg1) {
        field_40->DrawDebug(arg1);
    }

    // 0x10061a7a0
    LookatSpline::~LookatSpline() {
        field_40->~SplineMovement();
    }

} // namespace jag::game
