// libs/jtl/managed_ptr/weak_ptr.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    template <typename...> // 57 instantiations, e.g. <ObjStackEntity>, <PathingEntity>, <game::BASType>
    class weak_ptr {
    public:
        weak_ptr();
        weak_ptr<oldscape::rs2lib::IfType>&
        operator= <oldscape::rs2lib::IfType, void>(const shared_ptr<oldscape::rs2lib::IfType>& ifType);
        void reset();
        bool expired() const;
        weak_ptr(const weak_ptr<oldscape::dash3d::Wall>& groundDecor);
        weak_ptr(weak_ptr<oldscape::dash3d::Wall>&& groundDecor);
        ~weak_ptr();
        weak_ptr<oldscape::dash3d::Wall>* operator=(weak_ptr<oldscape::dash3d::Wall>&& wall);
        void swap(weak_ptr<oldscape::dash3d::Wall>& wall);
        weak_ptr<oldscape::dash3d::Decor>* operator=(weak_ptr<oldscape::dash3d::Decor>&& decor);
        void swap(weak_ptr<oldscape::dash3d::Decor>& decor);
        weak_ptr<oldscape::dash3d::GroundDecor>* operator=(weak_ptr<oldscape::dash3d::GroundDecor>&& groundDecor);
        void swap(weak_ptr<oldscape::dash3d::GroundDecor>& groundDecor);
        weak_ptr<oldscape::dash3d::Sprite>* operator=(weak_ptr<oldscape::dash3d::Sprite>&& sprite);
        void swap(weak_ptr<oldscape::dash3d::Sprite>& sprite);
        weak_ptr<oldscape::ClientObj>* operator=(weak_ptr<oldscape::ClientObj>&& clientObj);
        void swap(weak_ptr<oldscape::rs2lib::IfType>& ifType);
        weak_ptr<oldscape::rs2lib::IfType>* operator=(weak_ptr<oldscape::rs2lib::IfType>&& ifType);
        auto lock() const;
        weak_ptr<oldscape::ClientObj>* operator=(const weak_ptr<oldscape::ClientObj>& clientObj);
        void swap(weak_ptr<oldscape::ClientObj>& clientObj);
        weak_ptr<game::ConfigType<game::VarType>>*
        operator=(const weak_ptr<game::ConfigType<game::VarType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::VarType>>& configType);
        weak_ptr<render::RenderTargets>&
        operator= <render::RenderTargets, void>(const shared_ptr<render::RenderTargets>& renderTargets);
        weak_ptr<graphics::Model>& operator= <graphics::Model, void>(const shared_ptr<graphics::Model>& model);
        void swap(weak_ptr<graphics::Model>& model);
        weak_ptr<oldscape::dash3d::ModelLitImpl>& operator=
            <oldscape::dash3d::ModelLitImpl, void>(const shared_ptr<oldscape::dash3d::ModelLitImpl>& modelLitImpl);
        void swap(weak_ptr<oldscape::dash3d::ModelLitImpl>& modelLitImpl);
        weak_ptr<ui::Component>* operator=(weak_ptr<ui::Component>&& component);
        bool owner_before<ui::Component>(const shared_ptr<ui::Component>& component) const;
        void swap(weak_ptr<PathingEntity>& pathingEntity);
        weak_ptr<game::Entity>& operator= <PathingEntity, void>(const shared_ptr<PathingEntity>& pathingEntity);
        weak_ptr<game::BASType>& operator= <game::BASType, void>(const shared_ptr<game::BASType>& basType);
        void swap(weak_ptr<game::BASType>& basType);
        void swap(weak_ptr<game::Entity>& entity);
        weak_ptr<game::LocationInterface>* operator=(const weak_ptr<game::LocationInterface>& locationInterface);
        void swap(weak_ptr<game::LocationInterface>& locationInterface);
        weak_ptr<game::World>* operator=(const weak_ptr<game::World>& world);
        void swap(weak_ptr<game::World>& world);
        weak_ptr<ObjStackEntity>* operator=(const weak_ptr<ObjStackEntity>& objStackEntity);
        void swap(weak_ptr<ObjStackEntity>& objStackEntity);
        weak_ptr<game::LightSource>* operator=(weak_ptr<game::LightSource>&& lightSource);
        void swap(weak_ptr<game::LightSource>& lightSource);
        weak_ptr<game::ConfigType<game::SeqType>>*
        operator=(const weak_ptr<game::ConfigType<game::SeqType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::SeqType>>& configType);
        weak_ptr<game::ConfigType<game::ObjType>>*
        operator=(const weak_ptr<game::ConfigType<game::ObjType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::ObjType>>& configType);
        weak_ptr<game::ConfigType<game::NPCType>>*
        operator=(const weak_ptr<game::ConfigType<game::NPCType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::NPCType>>& configType);
        weak_ptr<game::ConfigType<game::LocType>>*
        operator=(const weak_ptr<game::ConfigType<game::LocType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::LocType>>& configType);
        weak_ptr<game::ConfigType<game::ParamType>>*
        operator=(const weak_ptr<game::ConfigType<game::ParamType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::ParamType>>& configType);
        weak_ptr<game::ConfigType<game::DBRowType>>*
        operator=(const weak_ptr<game::ConfigType<game::DBRowType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::DBRowType>>& configType);
        weak_ptr<game::ConfigType<game::DBTableType>>*
        operator=(const weak_ptr<game::ConfigType<game::DBTableType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::DBTableType>>& configType);
        weak_ptr<game::ConfigType<game::InvType>>*
        operator=(const weak_ptr<game::ConfigType<game::InvType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::InvType>>& configType);
        weak_ptr<game::ConfigType<game::VarBitType>>*
        operator=(const weak_ptr<game::ConfigType<game::VarBitType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::VarBitType>>& configType);
        weak_ptr<game::ConfigType<game::BASType>>*
        operator=(const weak_ptr<game::ConfigType<game::BASType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::BASType>>& configType);
        weak_ptr<game::ConfigType<game::FloorUnderlayType>>*
        operator=(const weak_ptr<game::ConfigType<game::FloorUnderlayType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::FloorUnderlayType>>& configType);
        weak_ptr<game::ConfigType<game::FloorOverlayType>>*
        operator=(const weak_ptr<game::ConfigType<game::FloorOverlayType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::FloorOverlayType>>& configType);
        weak_ptr<game::ConfigType<game::HitmarkType>>*
        operator=(const weak_ptr<game::ConfigType<game::HitmarkType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::HitmarkType>>& configType);
        weak_ptr<game::ConfigType<game::HeadbarType>>*
        operator=(const weak_ptr<game::ConfigType<game::HeadbarType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::HeadbarType>>& configType);
        weak_ptr<game::ConfigType<game::IDKType>>*
        operator=(const weak_ptr<game::ConfigType<game::IDKType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::IDKType>>& configType);
        weak_ptr<game::ConfigType<game::MapElementType>>*
        operator=(const weak_ptr<game::ConfigType<game::MapElementType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::MapElementType>>& configType);
        weak_ptr<game::ConfigType<game::MSIType>>*
        operator=(const weak_ptr<game::ConfigType<game::MSIType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::MSIType>>& configType);
        weak_ptr<game::ConfigType<game::QuestType>>*
        operator=(const weak_ptr<game::ConfigType<game::QuestType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::QuestType>>& configType);
        weak_ptr<game::ConfigType<game::SeqGroupType>>*
        operator=(const weak_ptr<game::ConfigType<game::SeqGroupType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::SeqGroupType>>& configType);
        weak_ptr<game::ConfigType<game::LightType>>*
        operator=(const weak_ptr<game::ConfigType<game::LightType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::LightType>>& configType);
        weak_ptr<game::ConfigType<game::SkyBoxType>>*
        operator=(const weak_ptr<game::ConfigType<game::SkyBoxType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::SkyBoxType>>& configType);
        weak_ptr<game::ConfigType<game::WaterType>>*
        operator=(const weak_ptr<game::ConfigType<game::WaterType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::WaterType>>& configType);
        weak_ptr<game::ConfigType<game::CursorType>>*
        operator=(const weak_ptr<game::ConfigType<game::CursorType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::CursorType>>& configType);
        weak_ptr<game::ConfigType<game::WorldAreaType>>*
        operator=(const weak_ptr<game::ConfigType<game::WorldAreaType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::WorldAreaType>>& configType);
        weak_ptr<game::ConfigType<game::EnumType>>*
        operator=(const weak_ptr<game::ConfigType<game::EnumType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::EnumType>>& configType);
        weak_ptr<game::ConfigType<game::EffectAnimType>>*
        operator=(const weak_ptr<game::ConfigType<game::EffectAnimType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::EffectAnimType>>& configType);
        weak_ptr<game::ConfigType<game::StructType>>*
        operator=(const weak_ptr<game::ConfigType<game::StructType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::StructType>>& configType);
        weak_ptr<game::ConfigType<game::AchievementType>>*
        operator=(const weak_ptr<game::ConfigType<game::AchievementType>>& configType);
        void swap(weak_ptr<game::ConfigType<game::AchievementType>>& configType);
        weak_ptr<ui::StyleSheet>& operator= <ui::StyleSheet, void>(const shared_ptr<ui::StyleSheet>& styleSheet);
        void swap(weak_ptr<ui::Interface>& interface);
        void swap(weak_ptr<ui::StyleSheet>& styleSheet);
        weak_ptr<tweak::List>& operator= <tweak::List, void>(const shared_ptr<tweak::List>& arg1);
        weak_ptr<tweak::Label>& operator= <tweak::Label, void>(const shared_ptr<tweak::Label>& label);
        weak_ptr<ui::Component>& operator= <ui::Component, void>(const shared_ptr<ui::Component>& component);
        weak_ptr<ui::PagedLayer>& operator= <ui::PagedLayer, void>(const shared_ptr<ui::PagedLayer>& pagedLayer);
        void swap(weak_ptr<tweak::List>& arg1);
        void swap(weak_ptr<tweak::Label>& label);
        void swap(weak_ptr<ui::Component>& component);
        void swap(weak_ptr<ui::PagedLayer>& pagedLayer);
        weak_ptr<graphics::ParticleSystem>* operator=(const weak_ptr<graphics::ParticleSystem>& particleSystem);
        void swap(weak_ptr<graphics::ParticleSystem>& particleSystem);
        weak_ptr<render::Query>* operator=(const weak_ptr<render::Query>& query);
        void swap(weak_ptr<render::Query>& query);
        weak_ptr<tweak::Control>* operator=(const weak_ptr<tweak::Control>& control);
        void swap(weak_ptr<tweak::Control>& control);
        weak_ptr<tweak::Tweaky>* operator=(const weak_ptr<tweak::Tweaky>& tweaky);
        weak_ptr<tweak::Container>* operator=(const weak_ptr<tweak::Container>& container);
        void swap(weak_ptr<tweak::Container>& container);
        void swap(weak_ptr<tweak::Tweaky>& tweaky);
        weak_ptr<network::Ping>* operator=(const weak_ptr<network::Ping>& ping);
        void swap(weak_ptr<network::Ping>& ping);
        void swap(weak_ptr<render::RenderTargets>& renderTargets);
    };

    // 0x100017eb0
    weak_ptr<oldscape::rs2lib::IfType>& weak_ptr<oldscape::rs2lib::IfType>::operator=
        <oldscape::rs2lib::IfType, void>(const shared_ptr<oldscape::rs2lib::IfType>& ifType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(ifType);
        swap(&local_28, this);
        return this;
    }

    // 0x100017ef0
    void weak_ptr<oldscape::rs2lib::IfType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100018660
    bool weak_ptr<oldscape::rs2lib::IfType>::expired() const {
        if (*(ref_counter_base**)this == nullptr) {
            return true;
        }
        return (*(ref_counter_base**)this)->GetRefCount() == 0;
    }

    // 0x10002b130
    weak_ptr<oldscape::dash3d::Wall>::weak_ptr(const weak_ptr<oldscape::dash3d::Wall>& groundDecor) {
        ref_counter_base* this_00 = *(ref_counter_base**)groundDecor;
        *(ref_counter_base**)this = this_00;
        *(uint64_t*)(this + 8) = *(uint64_t*)(groundDecor + 8);
        if (this_00 != nullptr) {
            this_00->IncWRef();
        }
    }

    // 0x10002b3e0
    weak_ptr<oldscape::dash3d::Wall>::weak_ptr(weak_ptr<oldscape::dash3d::Wall>&& groundDecor) {
        *(uint64_t*)this = *(uint64_t*)groundDecor;
        *(uint64_t*)(this + 8) = *(uint64_t*)(groundDecor + 8);
        *(uint64_t*)groundDecor = 0;
        *(uint64_t*)(groundDecor + 8) = 0;
    }

    // 0x10002b460
    weak_ptr<oldscape::dash3d::Wall>::~weak_ptr() {
        if (*(ref_counter_base**)this != nullptr) {
            (*(ref_counter_base**)this)->DecWRef();
        }
    }

    // 0x10002be70
    weak_ptr<oldscape::dash3d::Wall>*
    weak_ptr<oldscape::dash3d::Wall>::operator=(weak_ptr<oldscape::dash3d::Wall>&& wall) {

        weak_ptr<oldscape::dash3d::Decor> local_28(wall);
        swap(&local_28, this);
        return this;
    }

    // 0x10002beb0
    void weak_ptr<oldscape::dash3d::Wall>::swap(weak_ptr<oldscape::dash3d::Wall>& wall) {
        std::swap<ref_counter_base*>(*this, wall);
        std::swap<oldscape::dash3d::Wall*>(*((this + 8)), *((wall + 8)));
    }

    // 0x10002c260
    weak_ptr<oldscape::dash3d::Decor>*
    weak_ptr<oldscape::dash3d::Decor>::operator=(weak_ptr<oldscape::dash3d::Decor>&& decor) {
        weak_ptr<oldscape::dash3d::Decor> local_28;

        weak_ptr(&local_28, (weak_ptr<oldscape::dash3d::GroundDecor>*)decor);
        swap(&local_28, this);
        ~weak_ptr(&local_28);
        return this;
    }

    // 0x10002c2a0
    void weak_ptr<oldscape::dash3d::Decor>::swap(weak_ptr<oldscape::dash3d::Decor>& decor) {
        std::swap<ref_counter_base*>(*this, decor);
        std::swap<oldscape::dash3d::Decor*>(*((this + 8)), *((decor + 8)));
    }

    // 0x10002c630
    weak_ptr<oldscape::dash3d::GroundDecor>*
    weak_ptr<oldscape::dash3d::GroundDecor>::operator=(weak_ptr<oldscape::dash3d::GroundDecor>&& groundDecor) {

        weak_ptr<oldscape::dash3d::Decor> local_28(groundDecor);
        swap(&local_28, this);
        return this;
    }

    // 0x10002c670
    void weak_ptr<oldscape::dash3d::GroundDecor>::swap(weak_ptr<oldscape::dash3d::GroundDecor>& groundDecor) {
        std::swap<ref_counter_base*>(*this, groundDecor);
        std::swap<oldscape::dash3d::GroundDecor*>(*((this + 8)), *((groundDecor + 8)));
    }

    // 0x10002ca00
    weak_ptr<oldscape::dash3d::Sprite>*
    weak_ptr<oldscape::dash3d::Sprite>::operator=(weak_ptr<oldscape::dash3d::Sprite>&& sprite) {

        weak_ptr<oldscape::dash3d::Decor> local_28(sprite);
        swap(&local_28, this);
        return this;
    }

    // 0x10002ca40
    void weak_ptr<oldscape::dash3d::Sprite>::swap(weak_ptr<oldscape::dash3d::Sprite>& sprite) {
        std::swap<ref_counter_base*>(*this, sprite);
        std::swap<oldscape::dash3d::Sprite*>(*((this + 8)), *((sprite + 8)));
    }

    // 0x10002cdd0
    weak_ptr<oldscape::ClientObj>* weak_ptr<oldscape::ClientObj>::operator=(weak_ptr<oldscape::ClientObj>&& clientObj) {

        weak_ptr<oldscape::dash3d::Decor> local_28(clientObj);
        swap(&local_28, this);
        return this;
    }

    // 0x100030be0
    weak_ptr<oldscape::rs2lib::IfType>::weak_ptr() {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
    }

    // 0x100030bf0
    void weak_ptr<oldscape::rs2lib::IfType>::swap(weak_ptr<oldscape::rs2lib::IfType>& ifType) {
        std::swap<ref_counter_base*>(*this, ifType);
        std::swap<oldscape::rs2lib::IfType*>(*((this + 8)), *((ifType + 8)));
    }

    // 0x100079390
    weak_ptr<oldscape::rs2lib::IfType>*
    weak_ptr<oldscape::rs2lib::IfType>::operator=(weak_ptr<oldscape::rs2lib::IfType>&& ifType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(ifType);
        swap(&local_28, this);
        return this;
    }

    // 0x10016c9a0
    auto weak_ptr<oldscape::ClientObj>::lock() const {
        bool cVar1;

        if ((*(ref_counter_base**)this == nullptr) || (cVar1 = (*(ref_counter_base**)this)->IncRefIfNZ(), !cVar1)) {
            return auto();
        }
        new (&result) eastl::hashtable_iterator(
            *(FastPool<MakeSharedPool<graphics::TextureAtlasReference, _8192>::RefCounterAndData, unsigned long>**)this,
            *(unsigned long*)(this + 8));
        return result;
    }

    // 0x1001a3290
    weak_ptr<oldscape::ClientObj>*
    weak_ptr<oldscape::ClientObj>::operator=(const weak_ptr<oldscape::ClientObj>& clientObj) {

        weak_ptr<oldscape::dash3d::Decor> local_28(clientObj);
        swap(&local_28, this);
        return this;
    }

    // 0x1001a32d0
    void weak_ptr<oldscape::ClientObj>::swap(weak_ptr<oldscape::ClientObj>& clientObj) {
        std::swap<ref_counter_base*>(*this, clientObj);
        std::swap<oldscape::ClientObj*>(*((this + 8)), *((clientObj + 8)));
    }

    // 0x1001b2cd0
    weak_ptr<game::ConfigType<game::VarType>>*
    weak_ptr<game::ConfigType<game::VarType>>::operator=(const weak_ptr<game::ConfigType<game::VarType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::VarType> _>*)this);
        return this;
    }

    // 0x1001b2d20
    void weak_ptr<game::ConfigType<game::VarType>>::swap(weak_ptr<game::ConfigType<game::VarType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::VarType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1001df5a0
    weak_ptr<render::RenderTargets>& weak_ptr<render::RenderTargets>::operator=
        <render::RenderTargets, void>(const shared_ptr<render::RenderTargets>& renderTargets) {

        weak_ptr<oldscape::dash3d::Decor> local_28(renderTargets);
        swap(&local_28, this);
        return this;
    }

    // 0x1002eeee0
    weak_ptr<graphics::Model>&
        weak_ptr<graphics::Model>::operator= <graphics::Model, void>(const shared_ptr<graphics::Model>& model) {

        weak_ptr<oldscape::dash3d::Decor> local_28(model);
        swap(&local_28, this);
        return this;
    }

    // 0x100329970
    void weak_ptr<graphics::Model>::swap(weak_ptr<graphics::Model>& model) {
        std::swap<ref_counter_base*>(*this, model);
        std::swap<graphics::Model*>(*((this + 8)), *((model + 8)));
    }

    // 0x100374130
    weak_ptr<oldscape::dash3d::ModelLitImpl>& weak_ptr<oldscape::dash3d::ModelLitImpl>::operator=
        <oldscape::dash3d::ModelLitImpl, void>(const shared_ptr<oldscape::dash3d::ModelLitImpl>& modelLitImpl) {

        weak_ptr<oldscape::dash3d::Decor> local_28(modelLitImpl);
        swap(&local_28, this);
        return this;
    }

    // 0x100374850
    void weak_ptr<oldscape::dash3d::ModelLitImpl>::swap(weak_ptr<oldscape::dash3d::ModelLitImpl>& modelLitImpl) {
        std::swap<ref_counter_base*>(*this, modelLitImpl);
        std::swap<oldscape::dash3d::ModelLitImpl*>(*((this + 8)), *((modelLitImpl + 8)));
    }

    // 0x1003ba0a0
    weak_ptr<ui::Component>* weak_ptr<ui::Component>::operator=(weak_ptr<ui::Component>&& component) {

        weak_ptr<oldscape::dash3d::Decor> local_28(component);
        swap(&local_28, this);
        return this;
    }

    // 0x1003ba1f0
    bool weak_ptr<ui::Component>::owner_before<ui::Component>(const shared_ptr<ui::Component>& component) const {
        return *(unsigned long*)this < *(unsigned long*)component;
    }

    // 0x1003e77e0
    void weak_ptr<PathingEntity>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1003eb950
    void weak_ptr<PathingEntity>::swap(weak_ptr<PathingEntity>& pathingEntity) {
        std::swap<ref_counter_base*>(*this, pathingEntity);
        std::swap<PathingEntity*>(*((this + 8)), *((pathingEntity + 8)));
    }

    // 0x1003f25c0
    weak_ptr<game::Entity>&
        weak_ptr<game::Entity>::operator= <PathingEntity, void>(const shared_ptr<PathingEntity>& pathingEntity) {

        weak_ptr<oldscape::dash3d::Decor> local_28(pathingEntity);
        swap(&local_28, this);
        return this;
    }

    // 0x1004003b0
    weak_ptr<game::BASType>&
        weak_ptr<game::BASType>::operator= <game::BASType, void>(const shared_ptr<game::BASType>& basType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(basType);
        swap(&local_28, this);
        return this;
    }

    // 0x1004003f0
    void weak_ptr<game::BASType>::swap(weak_ptr<game::BASType>& basType) {
        std::swap<ref_counter_base*>(*this, basType);
        std::swap<game::BASType*>(*((this + 8)), *((basType + 8)));
    }

    // 0x100439db0
    void weak_ptr<game::Entity>::swap(weak_ptr<game::Entity>& entity) {
        std::swap<ref_counter_base*>(*this, entity);
        std::swap<game::Entity*>(*((this + 8)), *((entity + 8)));
    }

    // 0x10045d690
    weak_ptr<game::LocationInterface>*
    weak_ptr<game::LocationInterface>::operator=(const weak_ptr<game::LocationInterface>& locationInterface) {

        weak_ptr<oldscape::dash3d::Decor> local_28(locationInterface);
        swap(&local_28, this);
        return this;
    }

    // 0x10045d6d0
    void weak_ptr<game::LocationInterface>::swap(weak_ptr<game::LocationInterface>& locationInterface) {
        std::swap<ref_counter_base*>(*this, locationInterface);
        std::swap<game::LocationInterface*>(*((this + 8)), *((locationInterface + 8)));
    }

    // 0x10046cd30
    weak_ptr<game::World>* weak_ptr<game::World>::operator=(const weak_ptr<game::World>& world) {

        weak_ptr<oldscape::dash3d::Decor> local_28(world);
        swap(&local_28, this);
        return this;
    }

    // 0x10046cd70
    void weak_ptr<game::World>::swap(weak_ptr<game::World>& world) {
        std::swap<ref_counter_base*>(*this, world);
        std::swap<game::World*>(*((this + 8)), *((world + 8)));
    }

    // 0x100487660
    weak_ptr<ObjStackEntity>* weak_ptr<ObjStackEntity>::operator=(const weak_ptr<ObjStackEntity>& objStackEntity) {

        weak_ptr<oldscape::dash3d::Decor> local_28(objStackEntity);
        swap(&local_28, this);
        return this;
    }

    // 0x1004876a0
    void weak_ptr<ObjStackEntity>::swap(weak_ptr<ObjStackEntity>& objStackEntity) {
        std::swap<ref_counter_base*>(*this, objStackEntity);
        std::swap<ObjStackEntity*>(*((this + 8)), *((objStackEntity + 8)));
    }

    // 0x10048c090
    weak_ptr<game::LightSource>* weak_ptr<game::LightSource>::operator=(weak_ptr<game::LightSource>&& lightSource) {

        weak_ptr<oldscape::dash3d::Decor> local_28(lightSource);
        swap(&local_28, this);
        return this;
    }

    // 0x10048c0d0
    void weak_ptr<game::LightSource>::swap(weak_ptr<game::LightSource>& lightSource) {
        std::swap<ref_counter_base*>(*this, lightSource);
        std::swap<game::LightSource*>(*((this + 8)), *((lightSource + 8)));
    }

    // 0x1004ecf20
    weak_ptr<game::ConfigType<game::SeqType>>*
    weak_ptr<game::ConfigType<game::SeqType>>::operator=(const weak_ptr<game::ConfigType<game::SeqType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::SeqType> _>*)this);
        return this;
    }

    // 0x1004ecf60
    void weak_ptr<game::ConfigType<game::SeqType>>::swap(weak_ptr<game::ConfigType<game::SeqType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::SeqType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1004f94d0
    weak_ptr<game::ConfigType<game::ObjType>>*
    weak_ptr<game::ConfigType<game::ObjType>>::operator=(const weak_ptr<game::ConfigType<game::ObjType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::ObjType> _>*)this);
        return this;
    }

    // 0x1004f9510
    void weak_ptr<game::ConfigType<game::ObjType>>::swap(weak_ptr<game::ConfigType<game::ObjType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::ObjType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x10050fe50
    weak_ptr<game::ConfigType<game::NPCType>>*
    weak_ptr<game::ConfigType<game::NPCType>>::operator=(const weak_ptr<game::ConfigType<game::NPCType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::NPCType> _>*)this);
        return this;
    }

    // 0x10050fe90
    void weak_ptr<game::ConfigType<game::NPCType>>::swap(weak_ptr<game::ConfigType<game::NPCType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::NPCType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x10051b950
    weak_ptr<game::ConfigType<game::LocType>>*
    weak_ptr<game::ConfigType<game::LocType>>::operator=(const weak_ptr<game::ConfigType<game::LocType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::LocType> _>*)this);
        return this;
    }

    // 0x10051b990
    void weak_ptr<game::ConfigType<game::LocType>>::swap(weak_ptr<game::ConfigType<game::LocType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::LocType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x100573c60
    weak_ptr<game::ConfigType<game::ParamType>>* weak_ptr<game::ConfigType<game::ParamType>>::operator=(
        const weak_ptr<game::ConfigType<game::ParamType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::ParamType> _>*)this);
        return this;
    }

    // 0x100573ca0
    void weak_ptr<game::ConfigType<game::ParamType>>::swap(weak_ptr<game::ConfigType<game::ParamType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::ParamType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005798e0
    weak_ptr<game::ConfigType<game::DBRowType>>* weak_ptr<game::ConfigType<game::DBRowType>>::operator=(
        const weak_ptr<game::ConfigType<game::DBRowType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::DBRowType> _>*)this);
        return this;
    }

    // 0x100579920
    void weak_ptr<game::ConfigType<game::DBRowType>>::swap(weak_ptr<game::ConfigType<game::DBRowType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::DBRowType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x10057efc0
    weak_ptr<game::ConfigType<game::DBTableType>>* weak_ptr<game::ConfigType<game::DBTableType>>::operator=(
        const weak_ptr<game::ConfigType<game::DBTableType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::DBTableType> _>*)this);
        return this;
    }

    // 0x10057f000
    void
    weak_ptr<game::ConfigType<game::DBTableType>>::swap(weak_ptr<game::ConfigType<game::DBTableType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::DBTableType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005846a0
    weak_ptr<game::ConfigType<game::InvType>>*
    weak_ptr<game::ConfigType<game::InvType>>::operator=(const weak_ptr<game::ConfigType<game::InvType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::InvType> _>*)this);
        return this;
    }

    // 0x1005846e0
    void weak_ptr<game::ConfigType<game::InvType>>::swap(weak_ptr<game::ConfigType<game::InvType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::InvType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x100588a30
    weak_ptr<game::ConfigType<game::VarBitType>>* weak_ptr<game::ConfigType<game::VarBitType>>::operator=(
        const weak_ptr<game::ConfigType<game::VarBitType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::VarBitType> _>*)this);
        return this;
    }

    // 0x100588a70
    void weak_ptr<game::ConfigType<game::VarBitType>>::swap(weak_ptr<game::ConfigType<game::VarBitType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::VarBitType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x10058e1e0
    weak_ptr<game::ConfigType<game::BASType>>*
    weak_ptr<game::ConfigType<game::BASType>>::operator=(const weak_ptr<game::ConfigType<game::BASType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::BASType> _>*)this);
        return this;
    }

    // 0x10058e220
    void weak_ptr<game::ConfigType<game::BASType>>::swap(weak_ptr<game::ConfigType<game::BASType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::BASType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x100593880
    weak_ptr<game::ConfigType<game::FloorUnderlayType>>* weak_ptr<game::ConfigType<game::FloorUnderlayType>>::operator=(
        const weak_ptr<game::ConfigType<game::FloorUnderlayType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::FloorUnderlayType> _>*)this);
        return this;
    }

    // 0x1005938c0
    void weak_ptr<game::ConfigType<game::FloorUnderlayType>>::swap(
        weak_ptr<game::ConfigType<game::FloorUnderlayType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::FloorUnderlayType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x100598f30
    weak_ptr<game::ConfigType<game::FloorOverlayType>>* weak_ptr<game::ConfigType<game::FloorOverlayType>>::operator=(
        const weak_ptr<game::ConfigType<game::FloorOverlayType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::FloorOverlayType> _>*)this);
        return this;
    }

    // 0x100598f70
    void weak_ptr<game::ConfigType<game::FloorOverlayType>>::swap(
        weak_ptr<game::ConfigType<game::FloorOverlayType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::FloorOverlayType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x10059dba0
    weak_ptr<game::ConfigType<game::HitmarkType>>* weak_ptr<game::ConfigType<game::HitmarkType>>::operator=(
        const weak_ptr<game::ConfigType<game::HitmarkType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::HitmarkType> _>*)this);
        return this;
    }

    // 0x10059dbe0
    void
    weak_ptr<game::ConfigType<game::HitmarkType>>::swap(weak_ptr<game::ConfigType<game::HitmarkType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::HitmarkType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005a3710
    weak_ptr<game::ConfigType<game::HeadbarType>>* weak_ptr<game::ConfigType<game::HeadbarType>>::operator=(
        const weak_ptr<game::ConfigType<game::HeadbarType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::HeadbarType> _>*)this);
        return this;
    }

    // 0x1005a3750
    void
    weak_ptr<game::ConfigType<game::HeadbarType>>::swap(weak_ptr<game::ConfigType<game::HeadbarType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::HeadbarType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005a8f10
    weak_ptr<game::ConfigType<game::IDKType>>*
    weak_ptr<game::ConfigType<game::IDKType>>::operator=(const weak_ptr<game::ConfigType<game::IDKType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::IDKType> _>*)this);
        return this;
    }

    // 0x1005a8f50
    void weak_ptr<game::ConfigType<game::IDKType>>::swap(weak_ptr<game::ConfigType<game::IDKType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::IDKType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005af170
    weak_ptr<game::ConfigType<game::MapElementType>>* weak_ptr<game::ConfigType<game::MapElementType>>::operator=(
        const weak_ptr<game::ConfigType<game::MapElementType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::MapElementType> _>*)this);
        return this;
    }

    // 0x1005af1b0
    void weak_ptr<game::ConfigType<game::MapElementType>>::swap(
        weak_ptr<game::ConfigType<game::MapElementType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::MapElementType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005b4ec0
    weak_ptr<game::ConfigType<game::MSIType>>*
    weak_ptr<game::ConfigType<game::MSIType>>::operator=(const weak_ptr<game::ConfigType<game::MSIType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::MSIType> _>*)this);
        return this;
    }

    // 0x1005b4f00
    void weak_ptr<game::ConfigType<game::MSIType>>::swap(weak_ptr<game::ConfigType<game::MSIType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::MSIType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005bae70
    weak_ptr<game::ConfigType<game::QuestType>>* weak_ptr<game::ConfigType<game::QuestType>>::operator=(
        const weak_ptr<game::ConfigType<game::QuestType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::QuestType> _>*)this);
        return this;
    }

    // 0x1005baeb0
    void weak_ptr<game::ConfigType<game::QuestType>>::swap(weak_ptr<game::ConfigType<game::QuestType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::QuestType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005c0590
    weak_ptr<game::ConfigType<game::SeqGroupType>>* weak_ptr<game::ConfigType<game::SeqGroupType>>::operator=(
        const weak_ptr<game::ConfigType<game::SeqGroupType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::SeqGroupType> _>*)this);
        return this;
    }

    // 0x1005c05d0
    void
    weak_ptr<game::ConfigType<game::SeqGroupType>>::swap(weak_ptr<game::ConfigType<game::SeqGroupType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::SeqGroupType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005c5c40
    weak_ptr<game::ConfigType<game::LightType>>* weak_ptr<game::ConfigType<game::LightType>>::operator=(
        const weak_ptr<game::ConfigType<game::LightType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::LightType> _>*)this);
        return this;
    }

    // 0x1005c5c80
    void weak_ptr<game::ConfigType<game::LightType>>::swap(weak_ptr<game::ConfigType<game::LightType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::LightType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005cb3e0
    weak_ptr<game::ConfigType<game::SkyBoxType>>* weak_ptr<game::ConfigType<game::SkyBoxType>>::operator=(
        const weak_ptr<game::ConfigType<game::SkyBoxType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::SkyBoxType> _>*)this);
        return this;
    }

    // 0x1005cb420
    void weak_ptr<game::ConfigType<game::SkyBoxType>>::swap(weak_ptr<game::ConfigType<game::SkyBoxType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::SkyBoxType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005cfe80
    weak_ptr<game::ConfigType<game::WaterType>>* weak_ptr<game::ConfigType<game::WaterType>>::operator=(
        const weak_ptr<game::ConfigType<game::WaterType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::WaterType> _>*)this);
        return this;
    }

    // 0x1005cfec0
    void weak_ptr<game::ConfigType<game::WaterType>>::swap(weak_ptr<game::ConfigType<game::WaterType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::WaterType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005d54f0
    weak_ptr<game::ConfigType<game::CursorType>>* weak_ptr<game::ConfigType<game::CursorType>>::operator=(
        const weak_ptr<game::ConfigType<game::CursorType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::CursorType> _>*)this);
        return this;
    }

    // 0x1005d5530
    void weak_ptr<game::ConfigType<game::CursorType>>::swap(weak_ptr<game::ConfigType<game::CursorType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::CursorType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005daae0
    weak_ptr<game::ConfigType<game::WorldAreaType>>* weak_ptr<game::ConfigType<game::WorldAreaType>>::operator=(
        const weak_ptr<game::ConfigType<game::WorldAreaType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::WorldAreaType> _>*)this);
        return this;
    }

    // 0x1005dab20
    void
    weak_ptr<game::ConfigType<game::WorldAreaType>>::swap(weak_ptr<game::ConfigType<game::WorldAreaType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::WorldAreaType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005e0e20
    weak_ptr<game::ConfigType<game::EnumType>>* weak_ptr<game::ConfigType<game::EnumType>>::operator=(
        const weak_ptr<game::ConfigType<game::EnumType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::EnumType> _>*)this);
        return this;
    }

    // 0x1005e0e60
    void weak_ptr<game::ConfigType<game::EnumType>>::swap(weak_ptr<game::ConfigType<game::EnumType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::EnumType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005e6840
    weak_ptr<game::ConfigType<game::EffectAnimType>>* weak_ptr<game::ConfigType<game::EffectAnimType>>::operator=(
        const weak_ptr<game::ConfigType<game::EffectAnimType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::EffectAnimType> _>*)this);
        return this;
    }

    // 0x1005e6880
    void weak_ptr<game::ConfigType<game::EffectAnimType>>::swap(
        weak_ptr<game::ConfigType<game::EffectAnimType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::EffectAnimType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005ec490
    weak_ptr<game::ConfigType<game::StructType>>* weak_ptr<game::ConfigType<game::StructType>>::operator=(
        const weak_ptr<game::ConfigType<game::StructType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::StructType> _>*)this);
        return this;
    }

    // 0x1005ec4d0
    void weak_ptr<game::ConfigType<game::StructType>>::swap(weak_ptr<game::ConfigType<game::StructType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::StructType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x1005f23e0
    weak_ptr<game::ConfigType<game::AchievementType>>* weak_ptr<game::ConfigType<game::AchievementType>>::operator=(
        const weak_ptr<game::ConfigType<game::AchievementType>>& configType) {

        weak_ptr<oldscape::dash3d::Decor> local_28(configType);
        swap(&local_28, (weak_ptr<game::ConfigType<game::AchievementType> _>*)this);
        return this;
    }

    // 0x1005f2420
    void weak_ptr<game::ConfigType<game::AchievementType>>::swap(
        weak_ptr<game::ConfigType<game::AchievementType>>& configType) {
        std::swap<ref_counter_base*>(*this, configType);
        std::swap<game::ConfigType<game::AchievementType>*>(*((this + 8)), *((configType + 8)));
    }

    // 0x100674790
    weak_ptr<ui::StyleSheet>&
        weak_ptr<ui::StyleSheet>::operator= <ui::StyleSheet, void>(const shared_ptr<ui::StyleSheet>& styleSheet) {

        weak_ptr<oldscape::dash3d::Decor> local_28(styleSheet);
        swap(&local_28, this);
        return this;
    }

    // 0x10067b240
    void weak_ptr<ui::Component>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10067b280
    void weak_ptr<ui::Interface>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10067b330
    void weak_ptr<ui::Interface>::swap(weak_ptr<ui::Interface>& interface) {
        std::swap<ref_counter_base*>(*this, interface);
        std::swap<ui::Interface*>(*((this + 8)), *((interface + 8)));
    }

    // 0x10067c2d0
    void weak_ptr<ui::StyleSheet>::swap(weak_ptr<ui::StyleSheet>& styleSheet) {
        std::swap<ref_counter_base*>(*this, styleSheet);
        std::swap<ui::StyleSheet*>(*((this + 8)), *((styleSheet + 8)));
    }

    // 0x100688130
    weak_ptr<tweak::List>& weak_ptr<tweak::List>::operator= <tweak::List, void>(const shared_ptr<tweak::List>& arg1) {

        weak_ptr<oldscape::dash3d::Decor> local_28(arg1);
        swap(&local_28, this);
        return this;
    }

    // 0x100688170
    weak_ptr<tweak::Label>&
        weak_ptr<tweak::Label>::operator= <tweak::Label, void>(const shared_ptr<tweak::Label>& label) {

        weak_ptr<oldscape::dash3d::Decor> local_28(label);
        swap(&local_28, this);
        return this;
    }

    // 0x1006881c0
    void weak_ptr<tweak::List>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100692460
    weak_ptr<ui::Component>&
        weak_ptr<ui::Component>::operator= <ui::Component, void>(const shared_ptr<ui::Component>& component) {

        weak_ptr<oldscape::dash3d::Decor> local_28(component);
        swap(&local_28, this);
        return this;
    }

    // 0x1006a4e00
    weak_ptr<ui::PagedLayer>&
        weak_ptr<ui::PagedLayer>::operator= <ui::PagedLayer, void>(const shared_ptr<ui::PagedLayer>& pagedLayer) {

        weak_ptr<oldscape::dash3d::Decor> local_28(pagedLayer);
        swap(&local_28, this);
        return this;
    }

    // 0x1006bd210
    void weak_ptr<tweak::List>::swap(weak_ptr<tweak::List>& arg1) {
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<tweak::List*>(*((this + 8)), *((arg1 + 8)));
    }

    // 0x1006bd260
    void weak_ptr<tweak::Label>::swap(weak_ptr<tweak::Label>& label) {
        std::swap<ref_counter_base*>(*this, label);
        std::swap<tweak::Label*>(*((this + 8)), *((label + 8)));
    }

    // 0x1006c3920
    void weak_ptr<ui::Component>::swap(weak_ptr<ui::Component>& component) {
        std::swap<ref_counter_base*>(*this, component);
        std::swap<ui::Component*>(*((this + 8)), *((component + 8)));
    }

    // 0x1006d6760
    void weak_ptr<ui::PagedLayer>::swap(weak_ptr<ui::PagedLayer>& pagedLayer) {
        std::swap<ref_counter_base*>(*this, pagedLayer);
        std::swap<ui::PagedLayer*>(*((this + 8)), *((pagedLayer + 8)));
    }

    // 0x1007f7920
    weak_ptr<graphics::ParticleSystem>*
    weak_ptr<graphics::ParticleSystem>::operator=(const weak_ptr<graphics::ParticleSystem>& particleSystem) {

        weak_ptr<oldscape::dash3d::Decor> local_28(particleSystem);
        swap(&local_28, this);
        return this;
    }

    // 0x1007f7960
    void weak_ptr<graphics::ParticleSystem>::swap(weak_ptr<graphics::ParticleSystem>& particleSystem) {
        std::swap<ref_counter_base*>(*this, particleSystem);
        std::swap<graphics::ParticleSystem*>(*((this + 8)), *((particleSystem + 8)));
    }

    // 0x100838c30
    weak_ptr<render::Query>* weak_ptr<render::Query>::operator=(const weak_ptr<render::Query>& query) {

        weak_ptr<oldscape::dash3d::Decor> local_28(query);
        swap(&local_28, this);
        return this;
    }

    // 0x100838ca0
    void weak_ptr<render::Query>::swap(weak_ptr<render::Query>& query) {
        std::swap<ref_counter_base*>(*this, query);
        std::swap<render::Query*>(*((this + 8)), *((query + 8)));
    }

    // 0x1009413b0
    weak_ptr<tweak::Control>* weak_ptr<tweak::Control>::operator=(const weak_ptr<tweak::Control>& control) {

        weak_ptr<oldscape::dash3d::Decor> local_28(control);
        swap(&local_28, this);
        return this;
    }

    // 0x1009413f0
    void weak_ptr<tweak::Control>::swap(weak_ptr<tweak::Control>& control) {
        std::swap<ref_counter_base*>(*this, control);
        std::swap<tweak::Control*>(*((this + 8)), *((control + 8)));
    }

    // 0x100a3e220
    void weak_ptr<tweak::Control>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100a41590
    weak_ptr<tweak::Tweaky>* weak_ptr<tweak::Tweaky>::operator=(const weak_ptr<tweak::Tweaky>& tweaky) {

        weak_ptr<oldscape::dash3d::Decor> local_28(tweaky);
        swap(&local_28, this);
        return this;
    }

    // 0x100a51c70
    weak_ptr<tweak::Container>* weak_ptr<tweak::Container>::operator=(const weak_ptr<tweak::Container>& container) {

        weak_ptr<oldscape::dash3d::Decor> local_28(container);
        swap(&local_28, this);
        return this;
    }

    // 0x100a51cb0
    void weak_ptr<tweak::Container>::swap(weak_ptr<tweak::Container>& container) {
        std::swap<ref_counter_base*>(*this, container);
        std::swap<tweak::Container*>(*((this + 8)), *((container + 8)));
    }

    // 0x100a533e0
    void weak_ptr<tweak::Tweaky>::swap(weak_ptr<tweak::Tweaky>& tweaky) {
        std::swap<ref_counter_base*>(*this, tweaky);
        std::swap<tweak::Tweaky*>(*((this + 8)), *((tweaky + 8)));
    }

    // 0x100b0cde0
    weak_ptr<network::Ping>* weak_ptr<network::Ping>::operator=(const weak_ptr<network::Ping>& ping) {

        weak_ptr<oldscape::dash3d::Decor> local_28(ping);
        swap(&local_28, this);
        return this;
    }

    // 0x100b0ce50
    void weak_ptr<network::Ping>::swap(weak_ptr<network::Ping>& ping) {
        std::swap<ref_counter_base*>(*this, ping);
        std::swap<network::Ping*>(*((this + 8)), *((ping + 8)));
    }

    // 0x100c5f2b0
    void weak_ptr<render::RenderTargets>::swap(weak_ptr<render::RenderTargets>& renderTargets) {
        std::swap<ref_counter_base*>(*this, renderTargets);
        std::swap<render::RenderTargets*>(*((this + 8)), *((renderTargets + 8)));
    }

} // namespace jag

namespace jag::math {
    // 0x100030be0: Float4::Float4() has the same machine code as weak_ptr<oldscape::rs2lib::IfType>::weak_ptr()

} // namespace jag::math

namespace jag::tweak {
    // 0x100030be0: Placement::Placement() has the same machine code as weak_ptr<oldscape::rs2lib::IfType>::weak_ptr()

} // namespace jag::tweak

namespace jag::oldscape::dash3d {
    // 0x100030be0: PointNormal::PointNormal() has the same machine code as weak_ptr<rs2lib::IfType>::weak_ptr()

} // namespace jag::oldscape::dash3d
