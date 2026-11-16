// libs/game/runetek5/scene/entities/CombinedLocationSection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class CombinedLocationSection : public LocationInterface // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~CombinedLocationSection();
        virtual bool IsAnimatable() const;
        virtual bool UsesTrianglePicking() const;
        virtual bool UsesFastPickingTests() const;
        virtual uint64_t PickTest(graphics::PickingHelper& pickingHelper);
        virtual void AddPickableEntity(World& world, const math::Matrix44T<float>& matrix44);
        virtual void NotifyInteracted(unsigned int arg1);
        virtual void NotifyMouseover(unsigned int arg1);
        virtual void NotifyPickable(unsigned int arg1, bool arg2, float arg3);
        virtual void GetID() const;
        virtual shared_ptr GetLocationType() const;
        virtual uint8_t GetShape() const;
        virtual uint8_t GetRotation90() const;
        virtual math::RotTransScale GetTransform() const;
        virtual void GetLocationLength() const;
        virtual void GetLocationWidth() const;
        virtual int GetAttachedWallWidth() const;
        uint8_t* GetParentLocationType() const;
        void ActivateRoofRemove();
        void Hide();
        void DeactivateRoofRemove();
        void Unhide();
        bool IsHidden() const;
        EntityHighlightState GetHighlightState();
        CombinedLocationSection(graphics::GraphNode* graphNode, const shared_ptr<World>& world, int arg3, int arg4,
                                int arg5, const shared_ptr<LocType>& locType, const LocData& locData, bool arg8,
                                int arg9, int arg10, const math::AABB& aabb, int arg12);
        CombinedLocationSection();
        uint64_t UpdateHeightMap(HeightChangeType heightChangeType);
        uint64_t GetOwner() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullSection; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t _unknown_220[12];
        shared_ptr m_locationType;
        uint8_t m_shape;
        uint8_t m_rotation90;
        uint8_t _unknown_250[50];
        bool field_300;
        uint8_t _unknown_301[1];
        short field_302;
        short field_304;
        uint8_t m_hidden;
        uint8_t field_307;
        short m_attachedWallWidth;
        uint8_t _unknown_310[2];
        EntityHighlightState m_highlightState;
    };

    // 0x100446790
    void CombinedLocationSection::ActivateRoofRemove() {
        field_307 = 1;
        UpdateHeightMap(2);
    }

    // 0x1004467b0
    void CombinedLocationSection::Hide() {
        m_hidden = 1;
        UpdateHeightMap(2);
    }

    // 0x1004468c0
    void CombinedLocationSection::DeactivateRoofRemove() {
        field_307 = 0;
        UpdateHeightMap(1);
    }

    // 0x1004468e0
    void CombinedLocationSection::Unhide() {
        m_hidden = 0;
        UpdateHeightMap(1);
    }

    // 0x100446a50
    bool CombinedLocationSection::IsHidden() const {
        return m_hidden;
    }

    // 0x1004491a0
    EntityHighlightState CombinedLocationSection::GetHighlightState() {
        return &field_312;
    }

    // 0x10044b660
    void CombinedLocationSection::GetID() const {
        ((GameToken*)(*m_locationType).operator->())->GetStatus();
    }

    // 0x10044b680
    uint8_t CombinedLocationSection::GetShape() const {
        return m_shape;
    }

    // 0x10044b690
    uint8_t CombinedLocationSection::GetRotation90() const {
        return m_rotation90;
    }

    // 0x10044b6a0
    math::RotTransScale CombinedLocationSection::GetTransform() const {
        math::RotTransScale result;
        new (&result) math::RotTransScale(field_252);
        return result;
    }

    // 0x10044b6c0
    void CombinedLocationSection::GetLocationLength() const {
        ((LocType*)(*m_locationType).operator->())->GetGridLength((unsigned int)m_rotation90);
    }

    // 0x10044b6f0
    void CombinedLocationSection::GetLocationWidth() const {
        ((LocType*)(*m_locationType).operator->())->GetGridWidth((unsigned int)m_rotation90);
    }

    // 0x10044b720
    int CombinedLocationSection::GetAttachedWallWidth() const {
        return (int)m_attachedWallWidth;
    }

    // 0x10044d7a0
    CombinedLocationSection::~CombinedLocationSection() {
        field_8 = &PTR__CombinedLocationSection_100f005c8;
        m_locationType->~shared_ptr();
    }

} // namespace jag::game
