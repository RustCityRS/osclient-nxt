// libs/game/runetek5/camera/lookat/LookatEntity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LookatEntity : public ILookatManager // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LookatEntity();
        virtual LookatEntity* GetLookatEntity() const;
        virtual AABB GetCurrentLookat() const;
        virtual ulong GetLookatData(LookatData&);
        virtual Vector3T* GetLookatOffset(math::Vector3T<double>&) const;
        virtual void GetLookatPosition(math::Vector3T<double>&) const;
        virtual void SetCurrentLookat(math::Vector3T<double> const&);
        virtual void GetDestinationLookat(math::Vector3T<double>&) const;
        virtual void GetLookatFine(CoordFine&) const;
        virtual GetZRotation() const;
        virtual GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);
        virtual Ready() const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&,
                                         std::function<shared_ptr<Entity>(CameraTrackableType, int)> const&);
        virtual ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;
        void UpdateLookAtEntity(std::function<shared_ptr<Entity>(CameraTrackableType, int)> const&);
        void SetLookatEntity(shared_ptr<Entity> const&, math::Vector3T<double> const&, bool);
        LookatEntity();

        // data members, from how the methods use this: 184 bytes, the first 16 are ILookatManager
        char _unknown_16[16];
        uint field_32;       // offset 32
        uint field_36;       // offset 36
        undefined1 field_40; // offset 40
        char _unknown_41[7];
        AABB field_48; // offset 48
        bool field_72; // offset 72
        char _unknown_73[7];
        AABB m_currentLookat; // offset 80
        AABB field_104;       // offset 104
        AABB field_128;       // offset 128
        undefined4 field_152; // offset 152
        char _unknown_156[4];
        AABB field_160; // offset 160
    };

    // 0x10061d9b0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // LookatEntity::~LookatEntity(): jumps straight to the base-object destructor

    // 0x10061d9c0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // LookatEntity::~LookatEntity()
    void LookatEntity::~LookatEntity() {
        ~LookatEntity(this);
        operator_delete(this);
    }

    // 0x10061d9e0, 32 bytes, inline, placed by class name and debug map
    // LookatEntity::GetLookatOffset(math::Vector3T<double>&) const
    Vector3T* LookatEntity::GetLookatOffset(Vector3T* param_1) {
        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, (Vector3T*)field_48);
        return param_1;
    }

    // 0x10061dba0, 48 bytes, base-object destructor, inline, placed by class name
    // LookatEntity::~LookatEntity()
    void LookatEntity::~LookatEntity() {
        field_0 = &PTR__LookatEntity_100f0c1f0;
        (&field_16)->~weak_ptr();
        ~AutoSingleton();
    }

    // 0x100640b80, 16 bytes, complete-object constructor, inline, placed by class name
    // LookatEntity::LookatEntity(): jumps straight to the base-object constructor

    // 0x100640b90, 176 bytes, base-object constructor, inline, placed by class name
    // LookatEntity::LookatEntity()
    void LookatEntity::LookatEntity() {
        _func_decltype_nullptr* p_Var1;

        p_Var1 = (_func_decltype_nullptr*)&DAT_00000001;
        ILookatManager::ILookatManager();
        field_0 = &PTR__LookatEntity_100f0c1f0;
        new (&field_16, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
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
