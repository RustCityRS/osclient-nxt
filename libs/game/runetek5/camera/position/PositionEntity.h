// libs/game/runetek5/camera/position/PositionEntity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class PositionEntity {
    public:
        // virtual methods in vtable order
        virtual ~PositionEntity();
        virtual uint64_t GetFinishTriggers(eastl::fixed_vector<int, 2ul>& arg1);
        virtual void Ready() const;
        virtual void SetCurrentPosition(const math::Vector3T<double>& vector3);
        virtual auto GetCurrentPosition() const;
        virtual auto GetPositionOffset() const;
        virtual auto GetPositionEntity() const;
        virtual uint32_t GetPositionData(PositionData& positionData, double arg2);
        virtual Vector3T<double>* GetPosition(math::Vector3T<double>& vector3, unsigned long long arg2) const;
        virtual Vector3T<double>* GetScaledPosition(math::Vector3T<double>& vector3, unsigned long long arg2,
                                                    float arg3) const;
        virtual Vector3T<double>* GetDestinationPosition(math::Vector3T<double>& vector3) const;
        virtual void GetPositionFine(CoordFine& coordFine, unsigned long long arg2) const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char>>& arg1,
                                         const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback);
        virtual unsigned long GetFollowAngle() const;
        virtual unsigned long GetFollowAngle(math::Point<int>& point) const;
        virtual double GetDeclination() const;
        virtual uint64_t ToString(eastl::fixed_string<char, 512>& str) const;
        uint8_t CamLocked() const;
        void UpdatePositionEntity(const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback);
        void GetOrientationOffset(math::QuaternionT<double>& quaternion, math::Point<int>& point);
        void SetOrientationOffset(const math::QuaternionT<double>& quaternion);
        void SetOrientationOffset(const math::QuaternionT<double>& quaternion, int arg2, int arg3);
        void SetPositionEntity(const shared_ptr<Entity>& entity, const math::Vector3T<double>& vector3,
                               const math::QuaternionT<double>& quaternion, bool arg4, int arg5, int arg6);
        void SetPositionEntity(const shared_ptr<Entity>& entity, const math::Vector3T<double>& vector3,
                               const math::QuaternionT<double>& quaternion, bool arg4, int arg5, int arg6, int arg7,
                               int arg8);
        void UpdateOrientationOffset(const math::QuaternionT<double>& quaternion, unsigned long long arg2);
        void TestAndResolveCollision(const HeightMap* heightMap, const LinkMap* linkMap, bool arg3, bool arg4);
        uint64_t CollisionTestHeightDiff(int& arg1, const HeightMap* heightMap, const LinkMap* linkMap, bool arg4,
                                         bool arg5);
        void SetPositionOffset(const math::Vector3T<double>& vector3);
        void LockCamera();
        void UnlockCamera();
        void GetOrientationOffset(math::QuaternionT<double>& quaternion);
        PositionEntity();

    private:
        PositionMode field_8;
        uint8_t field_12;
        uint8_t _unknown_13[19];
        unsigned int field_32;
        unsigned int field_36;
        uint8_t field_40;
        uint8_t _unknown_41[151];
        uint8_t field_192;
        uint8_t _unknown_193[11];
        bool field_204;
        uint8_t _unknown_205[3];
        unsigned int field_208;
        unsigned int field_212;
        uint8_t field_216;
        uint8_t _unknown_217[15];
        ReturnValue field_232;
        ReturnValue field_240;
        AABB field_248;
        int field_272;
        uint8_t _unknown_276[4];
        AABB field_280;
        int field_304;
        uint8_t _unknown_308[28];
        AABB field_336;
        uint8_t _unknown_360[1032];
    };

    // 0x1006198e0
    void PositionEntity::SetCurrentPosition(const math::Vector3T<double>& vector3) {
        field_224 = vector3;
    }

    // 0x100619900
    auto PositionEntity::GetCurrentPosition() const {
        auto result;

        &result[2] = *(ReturnValue*)field_240;
        ReturnValue RVar1 = *(ReturnValue*)field_232;
        result = *(ReturnValue*)&field_224;
        &result[1] = RVar1;
        return result;
    }

    // 0x100619920
    auto PositionEntity::GetPositionOffset() const {
        auto pRVar2 = field_48.get_overflow_allocator();
        ReturnValue RVar1 = pRVar2[1];
        auto result = *pRVar2;
        &result[1] = RVar1;
        &result[2] = pRVar2[2];
        return result;
    }

    // 0x100619950
    auto PositionEntity::GetPositionEntity() const {
        auto result;
        result = field_16.lock();
        return result;
    }

    // 0x10061a890
    PositionEntity::~PositionEntity() {
        field_16.~weak_ptr();
    }

    // 0x100620d40
    void PositionEntity::SetPositionOffset(const math::Vector3T<double>& vector3) {
        field_48 = vector3;
    }

    // 0x10062ef00
    void PositionEntity::LockCamera() {
        field_12 = 1;
    }

    // 0x10062ef90
    void PositionEntity::UnlockCamera() {
        field_12 = 0;
    }

    // 0x100630060
    void PositionEntity::GetOrientationOffset(math::QuaternionT<double>& quaternion) {
        QuaternionT<double>* quaternion_00;

        quaternion_00 = (QuaternionT<double>*)field_112.GetMaterial();
        quaternion = *quaternion_00;
    }

    // 0x100641230
    PositionEntity::PositionEntity() : IPositionManager(1), field_12(1) {

        new (&field_16) shared_ptr();
        field_32 = 4294967295;
        field_36 = 4294967295;
        field_40 = 0;
        new (&field_48) math::Transitionable<math::Vector3T<double>>();
        new (&field_112) math::Transitionable<math::QuaternionT<double>>();
        field_192 = 0;
        new (&field_196) math::Vector2T();
        field_204 = false;
        field_208 = 200;
        field_212 = 100;
        field_216 = 0;
        new (&field_224) oldscape::dash3d::ModelLit::AABB();
        new (field_248) oldscape::dash3d::ModelLit::AABB();
        field_272 = -1;
        new (field_280) oldscape::dash3d::ModelLit::AABB();
        new (&field_304) math::QuaternionT<double>(0.0, 0.0, 0.0, 1.0);
        new (field_336) oldscape::dash3d::ModelLit::AABB();
        QuaternionT<double> local_40(0.0, 0.0, 0.0, 1.0);
        field_112 = local_40;
    }

} // namespace jag::game
