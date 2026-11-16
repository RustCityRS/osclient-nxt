// libs/game/runetek5/scene/entities/CombinedLocationSection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class CombinedLocationSection : public LocationInterface // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~CombinedLocationSection();
        virtual IsAnimatable() const;
        virtual bool UsesTrianglePicking() const;
        virtual UsesFastPickingTests() const;
        virtual PickTest(graphics::PickingHelper&);
        virtual void AddPickableEntity(World&, math::Matrix44T<float> const&);
        virtual void NotifyInteracted(unsigned int);
        virtual void NotifyMouseover(unsigned int);
        virtual void NotifyPickable(unsigned int, bool, float);
        virtual void GetID() const;
        virtual GetLocationType() const;
        virtual GetShape() const;
        virtual GetRotation90() const;
        virtual GetTransform() const;
        virtual void GetLocationLength() const;
        virtual void GetLocationWidth() const;
        virtual int GetAttachedWallWidth() const;
        GetParentLocationType() const;
        void ActivateRoofRemove();
        void Hide();
        void DeactivateRoofRemove();
        void Unhide();
        IsHidden() const;
        GetHighlightState();
        CombinedLocationSection(graphics::GraphNode*, shared_ptr<World> const&, int, int, int,
                                shared_ptr<LocType> const&, LocData const&, bool, int, int, math::AABB const&, int);
        CombinedLocationSection();
        UpdateHeightMap(HeightChangeType);
        GetOwner() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullSection;

        // data members, from how the methods use this: 332 bytes, the first 220 are LocationInterface
        char _unknown_220[12];
        shared_ptr field_232;    // offset 232
        undefined1 m_shape;      // offset 248
        undefined1 m_rotation90; // offset 249
        char _unknown_250[50];
        undefined1 field_300; // offset 300
        char _unknown_301[1];
        short field_302;           // offset 302
        short field_304;           // offset 304
        undefined1 m_hidden;       // offset 306
        undefined1 field_307;      // offset 307
        short m_attachedWallWidth; // offset 308
        char _unknown_310[2];
        EntityHighlightState field_312; // offset 312
    };

    // 0x100446790, 32 bytes, inline, placed by class name and debug map
    // CombinedLocationSection::ActivateRoofRemove()
    void CombinedLocationSection::ActivateRoofRemove() {
        field_307 = 1;
        UpdateHeightMap(this, 2);
    }

    // 0x1004467b0, 32 bytes, inline, placed by class name and debug map
    // CombinedLocationSection::Hide()
    void CombinedLocationSection::Hide() {
        m_hidden = 1;
        UpdateHeightMap(this, 2);
    }

    // 0x1004468c0, 32 bytes, inline, placed by class name and debug map
    // CombinedLocationSection::DeactivateRoofRemove()
    void CombinedLocationSection::DeactivateRoofRemove() {
        field_307 = 0;
        UpdateHeightMap(this, 1);
    }

    // 0x1004468e0, 32 bytes, inline, placed by class name and debug map
    // CombinedLocationSection::Unhide()
    void CombinedLocationSection::Unhide() {
        m_hidden = 0;
        UpdateHeightMap(this, 1);
    }

    // 0x100446a50, 16 bytes, inline, placed by class name and debug map
    // CombinedLocationSection::IsHidden() const
    undefined1 CombinedLocationSection::IsHidden() {
        return m_hidden;
    }

    // 0x1004491a0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CombinedLocationSection::GetHighlightState()
    /* MapSquarePointLights::GetLightSourcesDynamic() const */

    undefined1* MapSquarePointLights::GetLightSourcesDynamic() {
        return &field_312;
    }

    // 0x10044b630, 16 bytes, complete-object destructor, inline, placed by class name
    // CombinedLocationSection::~CombinedLocationSection(): jumps straight to the base-object destructor

    // 0x10044b640, 32 bytes, deleting destructor, inline, placed by class name
    // CombinedLocationSection::~CombinedLocationSection()
    void CombinedLocationSection::~CombinedLocationSection() {
        ~CombinedLocationSection(this);
        operator_delete(this);
    }

    // 0x10044b660, 32 bytes, inline, placed by class name
    // CombinedLocationSection::GetID() const
    void CombinedLocationSection::GetID() {
        GameToken* this_00;

        this_00 = (GameToken*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_232);
        this_00->GetStatus();
    }

    // 0x10044b680, 16 bytes, inline, placed by class name
    // CombinedLocationSection::GetShape() const
    undefined1 CombinedLocationSection::GetShape() {
        return m_shape;
    }

    // 0x10044b690, 16 bytes, inline, placed by class name
    // CombinedLocationSection::GetRotation90() const
    undefined1 CombinedLocationSection::GetRotation90() {
        return m_rotation90;
    }

    // 0x10044b6a0, 32 bytes, inline, placed by class name
    // CombinedLocationSection::GetTransform() const
    CombinedLocationSection* CombinedLocationSection::GetTransform() {
        long in_RSI;

        new (this) math::RotTransScale((RotTransScale*)(in_RSI + 252));
        return this;
    }

    // 0x10044b6c0, 48 bytes, inline, placed by class name
    // CombinedLocationSection::GetLocationLength() const
    void CombinedLocationSection::GetLocationLength() {
        LocType* pLVar1;

        pLVar1 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_232);
        pLVar1->GetGridLength(m_rotation90);
    }

    // 0x10044b6f0, 48 bytes, inline, placed by class name
    // CombinedLocationSection::GetLocationWidth() const
    void CombinedLocationSection::GetLocationWidth() {
        LocType* pLVar1;

        pLVar1 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)field_232);
        pLVar1->GetGridWidth(m_rotation90);
    }

    // 0x10044b720, 16 bytes, inline, placed by class name
    // CombinedLocationSection::GetAttachedWallWidth() const
    int CombinedLocationSection::GetAttachedWallWidth() {
        return (int)m_attachedWallWidth;
    }

    // 0x10044d7a0, 64 bytes, base-object destructor, inline, placed by class name
    // CombinedLocationSection::~CombinedLocationSection()
    void CombinedLocationSection::~CombinedLocationSection() {
        field_0 = &PTR__CombinedLocationSection_100f00430;
        field_8 = &PTR__CombinedLocationSection_100f005c8;
        field_232->~shared_ptr();
        ~LocationInterface();
    }

} // namespace jag::game
