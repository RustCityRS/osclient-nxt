// libs/game/runetek5/camera/lookat/LookatSplineMatchPosition.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LookatSplineMatchPosition {
    public:
        // virtual methods in vtable order
        virtual ~LookatSplineMatchPosition();
        virtual uint8_t* GetCurrentLookat() const;
        virtual void GetLookatData(LookatData& lookatData);
        virtual void GetLookatOffset(math::Vector3T<double>& vector3) const;
        virtual void GetLookatPosition(math::Vector3T<double>& vector3) const;
        virtual void SetCurrentLookat(const math::Vector3T<double>& vector3);
        virtual void GetDestinationLookat(math::Vector3T<double>& vector3) const;
        virtual void GetLookatFine(CoordFine& coordFine) const;
        virtual uint64_t GetZRotation() const;
        virtual uint64_t GetFinishTriggers(eastl::fixed_vector<int, 2ul>& arg1);
        virtual bool Ready() const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char>>& arg1,
                                         const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback);
        virtual void ToString(eastl::fixed_string<char, 512>& str) const;
        LookatSplineMatchPosition();

    private:
        LookatMode field_8;
        uint8_t _unknown_12[4];
        AABB field_16;
        BSplineCubic field_40;
        uint8_t _unknown_80[32];
    };

    // 0x1006195d0
    void LookatSplineMatchPosition::GetLookatData(LookatData& lookatData) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSplineMatchPosition.h",
                        52, "Not implemented");
    }

    // 0x100619600
    void LookatSplineMatchPosition::GetLookatOffset(math::Vector3T<double>& vector3) const {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSplineMatchPosition.h",
                        53, "Not implemented");
    }

    // 0x100619640
    void LookatSplineMatchPosition::SetCurrentLookat(const math::Vector3T<double>& vector3) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSplineMatchPosition.h",
                        54, "Not implemented");
    }

    // 0x100619670
    void LookatSplineMatchPosition::GetDestinationLookat(math::Vector3T<double>& vector3) const {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSplineMatchPosition.h",
                        55, "Not implemented");
    }

    // 0x1006196a0
    void LookatSplineMatchPosition::GetLookatFine(CoordFine& coordFine) const {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSplineMatchPosition.h",
                        56, "Not implemented");
    }

    // 0x1006196d0
    bool LookatSplineMatchPosition::Ready() const {
        int iVar1 = field_40->GetSegmentCount();
        return 0 < iVar1;
    }

    // 0x10061a7f0
    LookatSplineMatchPosition::~LookatSplineMatchPosition() {
        field_104.~weak_ptr();
        field_40->~BSplineCubic();
    }

    // 0x100640f70
    LookatSplineMatchPosition::LookatSplineMatchPosition() : ILookatManager(5) {
        new (&field_104) shared_ptr();
    }

} // namespace jag::game
