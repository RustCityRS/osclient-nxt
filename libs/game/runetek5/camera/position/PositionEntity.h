// libs/game/runetek5/camera/position/PositionEntity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class PositionEntity {
    public:
        // virtual methods in vtable order
        virtual ~PositionEntity();
        virtual GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);
        virtual Ready() const;
        virtual void SetCurrentPosition(math::Vector3T<double> const&);
        virtual GetCurrentPosition() const;
        virtual GetPositionOffset() const;
        virtual GetPositionEntity() const;
        virtual ulong GetPositionData(PositionData&, double);
        virtual Vector3T* GetPosition(math::Vector3T<double>&, unsigned long long) const;
        virtual Vector3T* GetScaledPosition(math::Vector3T<double>&, unsigned long long, float) const;
        virtual Vector3T* GetDestinationPosition(math::Vector3T<double>&) const;
        virtual void GetPositionFine(CoordFine&, unsigned long long) const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&,
                                         std::function<shared_ptr<Entity>(CameraTrackableType, int)> const&);
        virtual ulong GetFollowAngle() const;
        virtual ulong GetFollowAngle(math::Point<int>&) const;
        virtual double GetDeclination() const;
        virtual ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;
        CamLocked() const;
        void UpdatePositionEntity(std::function<shared_ptr<Entity>(CameraTrackableType, int)> const&);
        void GetOrientationOffset(math::QuaternionT<double>&, math::Point<int>&);
        void SetOrientationOffset(math::QuaternionT<double> const&);
        void SetOrientationOffset(math::QuaternionT<double> const&, int, int);
        void SetPositionEntity(shared_ptr<Entity> const&, math::Vector3T<double> const&,
                               math::QuaternionT<double> const&, bool, int, int);
        void SetPositionEntity(shared_ptr<Entity> const&, math::Vector3T<double> const&,
                               math::QuaternionT<double> const&, bool, int, int, int, int);
        void UpdateOrientationOffset(math::QuaternionT<double> const&, unsigned long long);
        void TestAndResolveCollision(HeightMap const*, LinkMap const*, bool, bool);
        CollisionTestHeightDiff(int&, HeightMap const*, LinkMap const*, bool, bool);
        void SetPositionOffset(math::Vector3T<double> const&);
        LockCamera();
        void UnlockCamera();
        void GetOrientationOffset(math::QuaternionT<double>&);
        PositionEntity();

        // data members, from how the methods use this: 1008 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[4];
        undefined1 field_12; // offset 12
        char _unknown_13[3];
        undefined8 field_16; // offset 16
        char _unknown_24[8];
        uint field_32; // offset 32
        uint field_36; // offset 36
        bool field_40; // offset 40
        char _unknown_41[7];
        undefined1 field_48; // offset 48
        char _unknown_49[143];
        undefined1 field_192; // offset 192
        char _unknown_193[11];
        bool field_204; // offset 204
        char _unknown_205[3];
        uint field_208;       // offset 208
        uint field_212;       // offset 212
        undefined1 field_216; // offset 216
        char _unknown_217[7];
        AABB field_224; // offset 224
        AABB field_248; // offset 248
        int field_272;  // offset 272
        char _unknown_276[4];
        AABB field_280; // offset 280
        char _unknown_304[32];
        AABB field_336; // offset 336
        char _unknown_360[648];
    };

    // 0x1006198b0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // PositionEntity::~PositionEntity(): jumps straight to the base-object destructor

    // 0x1006198c0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // PositionEntity::~PositionEntity()
    void PositionEntity::~PositionEntity() {
        ~PositionEntity(this);
        operator_delete(this);
    }

    // 0x1006198e0, 32 bytes, inline, placed by class name and debug map
    // PositionEntity::SetCurrentPosition(math::Vector3T<double> const&)
    void PositionEntity::SetCurrentPosition(Vector3T* param_1) {
        math::Vector3T<double>::operator=((Vector3T<double>*)field_224, param_1);
    }

    // 0x100619900, 32 bytes, inline, placed by class name and debug map
    // PositionEntity::GetCurrentPosition() const
    PositionEntity* PositionEntity::GetCurrentPosition() {
        undefined8 uVar1;
        long in_RSI;

        field_16 = *(undefined8*)(in_RSI + 240);
        uVar1 = *(undefined8*)(in_RSI + 232);
        field_0 = *(undefined***)(in_RSI + 224);
        *(undefined8*)&field_8 = uVar1;
        return this;
    }

    // 0x100619920, 48 bytes, inline, placed by class name and debug map
    // PositionEntity::GetPositionOffset() const
    PositionEntity* PositionEntity::GetPositionOffset() {
        undefined8 uVar1;
        undefined8* puVar2;
        long in_RSI;

        puVar2 = (undefined8*)((in_RSI + 48))->get_overflow_allocator();
        uVar1 = puVar2[1];
        field_0 = (undefined**)*puVar2;
        *(undefined8*)&field_8 = uVar1;
        field_16 = puVar2[2];
        return this;
    }

    // 0x100619950, 32 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PositionEntity::GetPositionEntity() const
    /* LookatEntity::GetLookatEntity() const */

    LookatEntity* LookatEntity::GetLookatEntity() {
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        return this;
    }

    // 0x10061a890, 48 bytes, base-object destructor, inline, placed by class name
    // PositionEntity::~PositionEntity()
    void PositionEntity::~PositionEntity() {
        field_0 = &PTR__PositionEntity_100f0bfb0;
        (&field_16)->~weak_ptr();
        ~AutoSingleton();
    }

    // 0x100620d40, 16 bytes, inline, placed by class name
    // PositionEntity::SetPositionOffset(math::Vector3T<double> const&)
    void PositionEntity::SetPositionOffset(Vector3T* param_1) {
        math::Transitionable<math::Vector3T<double>>::operator=((Transitionable<math::Vector3T<double>>*)&field_48,
                                                                param_1);
    }

    // 0x10062ef00, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PositionEntity::LockCamera()
    /* graphics::AnimationStateProvider::InvalidateAsyncUpdate() */

    void graphics::AnimationStateProvider::InvalidateAsyncUpdate() {
        field_12 = 1;
    }

    // 0x10062ef90, 16 bytes, inline, placed by class name
    // PositionEntity::UnlockCamera()
    void PositionEntity::UnlockCamera() {
        field_12 = 0;
    }

    // 0x100630060, 48 bytes, inline, placed by class name
    // PositionEntity::GetOrientationOffset(math::QuaternionT<double>&)
    void PositionEntity::GetOrientationOffset(QuaternionT* param_1) {
        QuaternionT* pQVar1;

        pQVar1 = (QuaternionT*)(&field_112)->GetMaterial();
        math::QuaternionT<double>::operator=((QuaternionT<double>*)param_1, pQVar1);
    }

    // 0x100641220, 16 bytes, complete-object constructor, inline, placed by class name
    // PositionEntity::PositionEntity(): jumps straight to the base-object constructor

    // 0x100641230, 320 bytes, base-object constructor, inline, placed by class name
    // PositionEntity::PositionEntity()
    void PositionEntity::PositionEntity() {
        _func_decltype_nullptr* p_Var1;
        QuaternionT<double> local_40[32];

        p_Var1 = (_func_decltype_nullptr*)&DAT_00000001;
        IPositionManager::IPositionManager();
        field_0 = &PTR__PositionEntity_100f0bfb0;
        field_12 = 1;
        new (&field_16, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_32 = 4294967295;
        field_36 = 4294967295;
        field_40 = false;
        new (&field_48) math::Transitionable<math::Vector3T<double>>();
        new (&field_112) math::Transitionable<math::QuaternionT<double>>();
        field_192 = 0;
        new (&field_196) math::Vector2T<int>();
        field_204 = false;
        field_208 = 200;
        field_212 = 100;
        field_216 = 0;
        new (field_224) oldscape::dash3d::ModelLit::AABB();
        new (field_248) oldscape::dash3d::ModelLit::AABB();
        field_272 = -1;
        new (field_280) oldscape::dash3d::ModelLit::AABB();
        new (&field_304, 0.0, 0.0, 0.0, 1.0) math::QuaternionT<double>();
        new (field_336) oldscape::dash3d::ModelLit::AABB();
        math::QuaternionT<double>::QuaternionT(local_40, 0.0, 0.0, 0.0, 1.0);
        math::Transitionable<math::QuaternionT<double>>::operator=(
            (Transitionable<math::QuaternionT<double>>*)&field_112, (QuaternionT*)local_40);
    }

} // namespace jag::game
