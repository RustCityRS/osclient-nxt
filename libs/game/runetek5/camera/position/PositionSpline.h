// libs/game/runetek5/camera/position/PositionSpline.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class PositionSpline {
    public:
        // virtual methods in vtable order
        virtual ~PositionSpline();
        virtual bool IsSpline() const;
        virtual void Update(float arg1, const math::Vector3T<double>& vector31, const math::Vector3T<double>& vector32);
        virtual void Ready() const;
        virtual void SetCurrentPosition(const math::Vector3T<double>& vector3);
        virtual auto GetCurrentPosition() const;
        virtual auto GetPositionOffset() const;
        virtual void GetPositionData(PositionData& positionData, double arg2);
        virtual Vector3T<double>* GetPosition(math::Vector3T<double>& vector3, unsigned long long arg2) const;
        virtual void GetDestinationPosition(math::Vector3T<double>& vector3) const;
        virtual void GetPositionFine(CoordFine& coordFine, unsigned long long arg2) const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char>>& arg1,
                                         const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback);
        virtual void GetRollAngle() const;
        virtual void GetFinishTriggers(eastl::fixed_vector<int, 2ul>& arg1);
        virtual void DrawDebug(unsigned int arg1);
        virtual void ToString(eastl::fixed_string<char, 512>& str) const;
        SplineMovement GetSpline();
        uint64_t GetSplineParameter();
        PositionSpline(PositionMode positionMode);
        Vector3T<double>* GetScaledPosition(math::Vector3T<double>& vector3, unsigned long long arg2, float arg3) const;
        void Finished() const;

    private:
        PositionMode field_8;
        uint8_t _unknown_12[4];
        SplineMovement m_spline;
        uint8_t _unknown_264[32];
        ReturnValue field_296;
        ReturnValue field_304;
        uint8_t _unknown_312[6515544];
    };

    // 0x100619720
    void PositionSpline::Ready() const {
        m_spline->Ready();
    }

    // 0x100619730
    void PositionSpline::SetCurrentPosition(const math::Vector3T<double>& vector3) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "position/PositionSpline.h",
                        53, "Not implemented");
    }

    // 0x100619760
    auto PositionSpline::GetCurrentPosition() const {
        auto result;
        result = m_spline->GetCurrentPosition();
        return result;
    }

    // 0x100619780
    auto PositionSpline::GetPositionOffset() const {
        auto result;

        &result[2] = *(ReturnValue*)field_304;
        ReturnValue RVar1 = *(ReturnValue*)field_296;
        result = *(ReturnValue*)&field_288;
        &result[1] = RVar1;
        return result;
    }

    // 0x1006197a0
    void PositionSpline::GetPositionData(PositionData& positionData, double arg2) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "position/PositionSpline.h",
                        52, "Not implemented");
    }

    // 0x1006197d0
    Vector3T<double>* PositionSpline::GetPosition(math::Vector3T<double>& vector3, unsigned long long arg2) const {
        uint8_t local_30[24];

        *local_30 = m_spline->GetCurrentPosition();
        vector3 = *local_30;
        return vector3;
    }

    // 0x100619810
    void PositionSpline::GetDestinationPosition(math::Vector3T<double>& vector3) const {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "position/PositionSpline.h",
                        55, "Not implemented");
    }

    // 0x100619840
    void PositionSpline::GetPositionFine(CoordFine& coordFine, unsigned long long arg2) const {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "position/PositionSpline.h",
                        54, "Not implemented");
    }

    // 0x100619870
    void
    PositionSpline::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                        const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback) {
        m_spline->ProcessServerUpdateSpline(arg1);
    }

    // 0x100619880
    void PositionSpline::GetRollAngle() const {
        m_spline->GetRollAngle();
    }

    // 0x100619890
    void PositionSpline::GetFinishTriggers(eastl::fixed_vector<int, 2ul>& arg1) {
        m_spline->GetOnFinishTriggers(arg1);
    }

    // 0x1006198a0
    void PositionSpline::DrawDebug(unsigned int arg1) {
        m_spline->DrawDebug(arg1);
    }

    // 0x10061a860
    PositionSpline::~PositionSpline() {
        m_spline->~SplineMovement();
    }

    // 0x100620b10
    void PositionSpline::Finished() const {
        m_spline->Finished();
    }

} // namespace jag::game
