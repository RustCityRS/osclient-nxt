// libs/jtl/managed_ptr/weak_ptr.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    template <typename...> // 57 instantiations, e.g. <ObjStackEntity>, <PathingEntity>, <game::BASType>
    class weak_ptr {
    public:
        weak_ptr();
        weak_ptr<oldscape::rs2lib::IfType>&
        operator= <oldscape::rs2lib::IfType, void>(shared_ptr<oldscape::rs2lib::IfType> const&);
        void reset();
        bool expired() const;
        weak_ptr(weak_ptr<oldscape::dash3d::Wall> const&);
        weak_ptr(weak_ptr<oldscape::dash3d::Wall>&&);
        ~weak_ptr();
        weak_ptr<oldscape::dash3d::Wall>* operator=(weak_ptr<oldscape::dash3d::Wall>&&);
        void swap(weak_ptr<oldscape::dash3d::Wall>&);
        weak_ptr<oldscape::dash3d::Decor>* operator=(weak_ptr<oldscape::dash3d::Decor>&&);
        void swap(weak_ptr<oldscape::dash3d::Decor>&);
        weak_ptr<oldscape::dash3d::GroundDecor>* operator=(weak_ptr<oldscape::dash3d::GroundDecor>&&);
        void swap(weak_ptr<oldscape::dash3d::GroundDecor>&);
        weak_ptr<oldscape::dash3d::Sprite>* operator=(weak_ptr<oldscape::dash3d::Sprite>&&);
        void swap(weak_ptr<oldscape::dash3d::Sprite>&);
        weak_ptr<oldscape::ClientObj>* operator=(weak_ptr<oldscape::ClientObj>&&);
        void swap(weak_ptr<oldscape::rs2lib::IfType>&);
        weak_ptr<oldscape::rs2lib::IfType>* operator=(weak_ptr<oldscape::rs2lib::IfType>&&);
        void lock() const;
        weak_ptr<oldscape::ClientObj>* operator=(weak_ptr<oldscape::ClientObj> const&);
        void swap(weak_ptr<oldscape::ClientObj>&);
        weak_ptr<game::ConfigType<game::VarType>>* operator=(weak_ptr<game::ConfigType<game::VarType>> const&);
        void swap(weak_ptr<game::ConfigType<game::VarType>>&);
        weak_ptr<render::RenderTargets>&
        operator= <render::RenderTargets, void>(shared_ptr<render::RenderTargets> const&);
        weak_ptr<graphics::Model>& operator= <graphics::Model, void>(shared_ptr<graphics::Model> const&);
        void swap(weak_ptr<graphics::Model>&);
        weak_ptr<oldscape::dash3d::ModelLitImpl>&
        operator= <oldscape::dash3d::ModelLitImpl, void>(shared_ptr<oldscape::dash3d::ModelLitImpl> const&);
        void swap(weak_ptr<oldscape::dash3d::ModelLitImpl>&);
        weak_ptr<ui::Component>* operator=(weak_ptr<ui::Component>&&);
        bool owner_before<ui::Component>(shared_ptr<ui::Component> const&) const;
        void swap(weak_ptr<PathingEntity>&);
        weak_ptr<game::Entity>& operator= <PathingEntity, void>(shared_ptr<PathingEntity> const&);
        weak_ptr<game::BASType>& operator= <game::BASType, void>(shared_ptr<game::BASType> const&);
        void swap(weak_ptr<game::BASType>&);
        void swap(weak_ptr<game::Entity>&);
        weak_ptr<game::LocationInterface>* operator=(weak_ptr<game::LocationInterface> const&);
        void swap(weak_ptr<game::LocationInterface>&);
        weak_ptr<game::World>* operator=(weak_ptr<game::World> const&);
        void swap(weak_ptr<game::World>&);
        weak_ptr<ObjStackEntity>* operator=(weak_ptr<ObjStackEntity> const&);
        void swap(weak_ptr<ObjStackEntity>&);
        weak_ptr<game::LightSource>* operator=(weak_ptr<game::LightSource>&&);
        void swap(weak_ptr<game::LightSource>&);
        weak_ptr<game::ConfigType<game::SeqType>>* operator=(weak_ptr<game::ConfigType<game::SeqType>> const&);
        void swap(weak_ptr<game::ConfigType<game::SeqType>>&);
        weak_ptr<game::ConfigType<game::ObjType>>* operator=(weak_ptr<game::ConfigType<game::ObjType>> const&);
        void swap(weak_ptr<game::ConfigType<game::ObjType>>&);
        weak_ptr<game::ConfigType<game::NPCType>>* operator=(weak_ptr<game::ConfigType<game::NPCType>> const&);
        void swap(weak_ptr<game::ConfigType<game::NPCType>>&);
        weak_ptr<game::ConfigType<game::LocType>>* operator=(weak_ptr<game::ConfigType<game::LocType>> const&);
        void swap(weak_ptr<game::ConfigType<game::LocType>>&);
        weak_ptr<game::ConfigType<game::ParamType>>* operator=(weak_ptr<game::ConfigType<game::ParamType>> const&);
        void swap(weak_ptr<game::ConfigType<game::ParamType>>&);
        weak_ptr<game::ConfigType<game::DBRowType>>* operator=(weak_ptr<game::ConfigType<game::DBRowType>> const&);
        void swap(weak_ptr<game::ConfigType<game::DBRowType>>&);
        weak_ptr<game::ConfigType<game::DBTableType>>* operator=(weak_ptr<game::ConfigType<game::DBTableType>> const&);
        void swap(weak_ptr<game::ConfigType<game::DBTableType>>&);
        weak_ptr<game::ConfigType<game::InvType>>* operator=(weak_ptr<game::ConfigType<game::InvType>> const&);
        void swap(weak_ptr<game::ConfigType<game::InvType>>&);
        weak_ptr<game::ConfigType<game::VarBitType>>* operator=(weak_ptr<game::ConfigType<game::VarBitType>> const&);
        void swap(weak_ptr<game::ConfigType<game::VarBitType>>&);
        weak_ptr<game::ConfigType<game::BASType>>* operator=(weak_ptr<game::ConfigType<game::BASType>> const&);
        void swap(weak_ptr<game::ConfigType<game::BASType>>&);
        weak_ptr<game::ConfigType<game::FloorUnderlayType>>*
        operator=(weak_ptr<game::ConfigType<game::FloorUnderlayType>> const&);
        void swap(weak_ptr<game::ConfigType<game::FloorUnderlayType>>&);
        weak_ptr<game::ConfigType<game::FloorOverlayType>>*
        operator=(weak_ptr<game::ConfigType<game::FloorOverlayType>> const&);
        void swap(weak_ptr<game::ConfigType<game::FloorOverlayType>>&);
        weak_ptr<game::ConfigType<game::HitmarkType>>* operator=(weak_ptr<game::ConfigType<game::HitmarkType>> const&);
        void swap(weak_ptr<game::ConfigType<game::HitmarkType>>&);
        weak_ptr<game::ConfigType<game::HeadbarType>>* operator=(weak_ptr<game::ConfigType<game::HeadbarType>> const&);
        void swap(weak_ptr<game::ConfigType<game::HeadbarType>>&);
        weak_ptr<game::ConfigType<game::IDKType>>* operator=(weak_ptr<game::ConfigType<game::IDKType>> const&);
        void swap(weak_ptr<game::ConfigType<game::IDKType>>&);
        weak_ptr<game::ConfigType<game::MapElementType>>*
        operator=(weak_ptr<game::ConfigType<game::MapElementType>> const&);
        void swap(weak_ptr<game::ConfigType<game::MapElementType>>&);
        weak_ptr<game::ConfigType<game::MSIType>>* operator=(weak_ptr<game::ConfigType<game::MSIType>> const&);
        void swap(weak_ptr<game::ConfigType<game::MSIType>>&);
        weak_ptr<game::ConfigType<game::QuestType>>* operator=(weak_ptr<game::ConfigType<game::QuestType>> const&);
        void swap(weak_ptr<game::ConfigType<game::QuestType>>&);
        weak_ptr<game::ConfigType<game::SeqGroupType>>*
        operator=(weak_ptr<game::ConfigType<game::SeqGroupType>> const&);
        void swap(weak_ptr<game::ConfigType<game::SeqGroupType>>&);
        weak_ptr<game::ConfigType<game::LightType>>* operator=(weak_ptr<game::ConfigType<game::LightType>> const&);
        void swap(weak_ptr<game::ConfigType<game::LightType>>&);
        weak_ptr<game::ConfigType<game::SkyBoxType>>* operator=(weak_ptr<game::ConfigType<game::SkyBoxType>> const&);
        void swap(weak_ptr<game::ConfigType<game::SkyBoxType>>&);
        weak_ptr<game::ConfigType<game::WaterType>>* operator=(weak_ptr<game::ConfigType<game::WaterType>> const&);
        void swap(weak_ptr<game::ConfigType<game::WaterType>>&);
        weak_ptr<game::ConfigType<game::CursorType>>* operator=(weak_ptr<game::ConfigType<game::CursorType>> const&);
        void swap(weak_ptr<game::ConfigType<game::CursorType>>&);
        weak_ptr<game::ConfigType<game::WorldAreaType>>*
        operator=(weak_ptr<game::ConfigType<game::WorldAreaType>> const&);
        void swap(weak_ptr<game::ConfigType<game::WorldAreaType>>&);
        weak_ptr<game::ConfigType<game::EnumType>>* operator=(weak_ptr<game::ConfigType<game::EnumType>> const&);
        void swap(weak_ptr<game::ConfigType<game::EnumType>>&);
        weak_ptr<game::ConfigType<game::EffectAnimType>>*
        operator=(weak_ptr<game::ConfigType<game::EffectAnimType>> const&);
        void swap(weak_ptr<game::ConfigType<game::EffectAnimType>>&);
        weak_ptr<game::ConfigType<game::StructType>>* operator=(weak_ptr<game::ConfigType<game::StructType>> const&);
        void swap(weak_ptr<game::ConfigType<game::StructType>>&);
        weak_ptr<game::ConfigType<game::AchievementType>>*
        operator=(weak_ptr<game::ConfigType<game::AchievementType>> const&);
        void swap(weak_ptr<game::ConfigType<game::AchievementType>>&);
        weak_ptr<ui::StyleSheet>& operator= <ui::StyleSheet, void>(shared_ptr<ui::StyleSheet> const&);
        void swap(weak_ptr<ui::Interface>&);
        void swap(weak_ptr<ui::StyleSheet>&);
        weak_ptr<tweak::List>& operator= <tweak::List, void>(shared_ptr<tweak::List> const&);
        weak_ptr<tweak::Label>& operator= <tweak::Label, void>(shared_ptr<tweak::Label> const&);
        weak_ptr<ui::Component>& operator= <ui::Component, void>(shared_ptr<ui::Component> const&);
        weak_ptr<ui::PagedLayer>& operator= <ui::PagedLayer, void>(shared_ptr<ui::PagedLayer> const&);
        void swap(weak_ptr<tweak::List>&);
        void swap(weak_ptr<tweak::Label>&);
        void swap(weak_ptr<ui::Component>&);
        void swap(weak_ptr<ui::PagedLayer>&);
        weak_ptr<graphics::ParticleSystem>* operator=(weak_ptr<graphics::ParticleSystem> const&);
        void swap(weak_ptr<graphics::ParticleSystem>&);
        weak_ptr<render::Query>* operator=(weak_ptr<render::Query> const&);
        void swap(weak_ptr<render::Query>&);
        weak_ptr* operator=(weak_ptr<tweak::Control> const&);
        void swap(weak_ptr<tweak::Control>&);
        weak_ptr<tweak::Tweaky>* operator=(weak_ptr<tweak::Tweaky> const&);
        weak_ptr<tweak::Container>* operator=(weak_ptr<tweak::Container> const&);
        void swap(weak_ptr<tweak::Container>&);
        void swap(weak_ptr<tweak::Tweaky>&);
        weak_ptr<network::Ping>* operator=(weak_ptr<network::Ping> const&);
        void swap(weak_ptr<network::Ping>&);
        void swap(weak_ptr<render::RenderTargets>&);
    };

    // 0x100017ca0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // weak_ptr<oldscape::rs2lib::IfType>::weak_ptr(): jumps straight to the base-object constructor

    // 0x100017eb0, 64 bytes, inline, placed by class name and debug map
    // weak_ptr<oldscape::rs2lib::IfType>& weak_ptr<oldscape::rs2lib::IfType>::operator=<oldscape::rs2lib::IfType, void>(shared_ptr<oldscape::rs2lib::IfType> const&)
    /* weak_ptr<oldscape::rs2lib::IfType>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<oldscape::rs2lib::IfType>
   const&) */

    weak_ptr* weak_ptr<oldscape::rs2lib::IfType>::operator=(shared_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, (weak_ptr*)param_1);
        swap((weak_ptr<oldscape::rs2lib::IfType>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return (weak_ptr*)this;
    }

    // 0x100017ef0, 64 bytes, inline, placed by class name and debug map
    // weak_ptr<oldscape::rs2lib::IfType>::reset()
    void weak_ptr<oldscape::rs2lib::IfType>::reset() {
        _func_decltype_nullptr* in_RSI;
        weak_ptr* in_RDI;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28[16];

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_28, in_RSI);
        swap((weak_ptr<oldscape::rs2lib::IfType>*)local_28, in_RDI);
        local_28->~weak_ptr();
    }

    // 0x100018660, 32 bytes, inline, placed by class name
    // weak_ptr<oldscape::rs2lib::IfType>::expired() const
    /* weak_ptr<oldscape::dash3d::Wall>::expired() const */

    bool weak_ptr<oldscape::dash3d::Wall>::expired() {
        if (*(ref_counter_base**)this == (ref_counter_base*)0) {
            return true;
        }
        return (*(ref_counter_base**)this)->GetRefCount() == 0;
    }

    // 0x10002b120, 16 bytes, complete-object constructor, inline, placed by class name
    // weak_ptr<oldscape::dash3d::Wall>::weak_ptr(weak_ptr<oldscape::dash3d::Wall> const&): jumps straight to the base-object constructor

    // 0x10002b130, 48 bytes, base-object constructor, inline, placed by class name
    // weak_ptr<oldscape::dash3d::Wall>::weak_ptr(weak_ptr<oldscape::dash3d::Wall> const&)
    /* weak_ptr<oldscape::dash3d::Decor>::weak_ptr(weak_ptr<oldscape::dash3d::Decor>
   const&) */

    void weak_ptr<oldscape::dash3d::Decor>::weak_ptr(weak_ptr* param_1) {
        ref_counter_base* this_00;

        this_00 = *(ref_counter_base**)param_1;
        *(ref_counter_base**)this = this_00;
        *(undefined8*)(this + 8) = *(undefined8*)(param_1 + 8);
        if (this_00 != (ref_counter_base*)0) {
            this_00->IncWRef();
        }
    }

    // 0x10002b3d0, 16 bytes, complete-object constructor, inline, placed by class name
    // weak_ptr<oldscape::dash3d::Wall>::weak_ptr(weak_ptr<oldscape::dash3d::Wall>&&): jumps straight to the base-object constructor

    // 0x10002b3e0, 32 bytes, base-object constructor, inline, placed by class name
    // weak_ptr<oldscape::dash3d::Wall>::weak_ptr(weak_ptr<oldscape::dash3d::Wall>&&)
    /* weak_ptr<oldscape::dash3d::Decor>::weak_ptr(weak_ptr<oldscape::dash3d::Decor>&&)
    */

    void weak_ptr<oldscape::dash3d::Decor>::weak_ptr(weak_ptr* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = *(undefined8*)(param_1 + 8);
        *(undefined8*)param_1 = 0;
        *(undefined8*)(param_1 + 8) = 0;
    }

    // 0x10002b450, 16 bytes, complete-object destructor, inline, placed by class name
    // weak_ptr<oldscape::dash3d::Wall>::~weak_ptr(): jumps straight to the base-object destructor

    // 0x10002b460, 32 bytes, base-object destructor, inline, placed by class name
    // weak_ptr<oldscape::dash3d::Wall>::~weak_ptr()
    /* weak_ptr<oldscape::dash3d::Decor>::~weak_ptr() */

    void weak_ptr<oldscape::dash3d::Decor>::~weak_ptr() {
        if (*(ref_counter_base**)this != (ref_counter_base*)0) {
            (*(ref_counter_base**)this)->DecWRef();
        }
    }

    // 0x10002be70, 64 bytes, inline, placed by class name
    // weak_ptr<oldscape::dash3d::Wall>::operator=(weak_ptr<oldscape::dash3d::Wall>&&)
    /* weak_ptr<oldscape::dash3d::Wall>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<oldscape::dash3d::Wall>&&)
    */

    weak_ptr<oldscape::dash3d::Wall>* weak_ptr<oldscape::dash3d::Wall>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<oldscape::dash3d::Wall>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x10002beb0, 48 bytes, inline, placed by class name
    // weak_ptr<oldscape::dash3d::Wall>::swap(weak_ptr<oldscape::dash3d::Wall>&)
    void weak_ptr<oldscape::dash3d::Wall>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<oldscape::dash3d::Wall*>((Wall**)(this + 8), (Wall**)(param_1 + 8));
    }

    // 0x10002c260, 64 bytes, inline, placed by class name
    // weak_ptr<oldscape::dash3d::Decor>::operator=(weak_ptr<oldscape::dash3d::Decor>&&)
    /* weak_ptr<oldscape::dash3d::Decor>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<oldscape::dash3d::Decor>&&)
    */

    weak_ptr<oldscape::dash3d::Decor>* weak_ptr<oldscape::dash3d::Decor>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr(local_28, param_1);
        swap(local_28, (weak_ptr*)this);
        ~weak_ptr(local_28);
        return this;
    }

    // 0x10002c2a0, 48 bytes, inline, placed by class name
    // weak_ptr<oldscape::dash3d::Decor>::swap(weak_ptr<oldscape::dash3d::Decor>&)
    void weak_ptr<oldscape::dash3d::Decor>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<oldscape::dash3d::Decor*>((Decor**)(this + 8), (Decor**)(param_1 + 8));
    }

    // 0x10002c630, 64 bytes, inline, placed by class name
    // weak_ptr<oldscape::dash3d::GroundDecor>::operator=(weak_ptr<oldscape::dash3d::GroundDecor>&&)
    /* weak_ptr<oldscape::dash3d::GroundDecor>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<oldscape::dash3d::GroundDecor>&&)
    */

    weak_ptr<oldscape::dash3d::GroundDecor>* weak_ptr<oldscape::dash3d::GroundDecor>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<oldscape::dash3d::GroundDecor>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x10002c670, 48 bytes, inline, placed by class name
    // weak_ptr<oldscape::dash3d::GroundDecor>::swap(weak_ptr<oldscape::dash3d::GroundDecor>&)
    void weak_ptr<oldscape::dash3d::GroundDecor>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<oldscape::dash3d::GroundDecor*>((GroundDecor**)(this + 8), (GroundDecor**)(param_1 + 8));
    }

    // 0x10002ca00, 64 bytes, inline, placed by class name
    // weak_ptr<oldscape::dash3d::Sprite>::operator=(weak_ptr<oldscape::dash3d::Sprite>&&)
    /* weak_ptr<oldscape::dash3d::Sprite>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<oldscape::dash3d::Sprite>&&)
    */

    weak_ptr<oldscape::dash3d::Sprite>* weak_ptr<oldscape::dash3d::Sprite>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<oldscape::dash3d::Sprite>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x10002ca40, 48 bytes, inline, placed by class name
    // weak_ptr<oldscape::dash3d::Sprite>::swap(weak_ptr<oldscape::dash3d::Sprite>&)
    void weak_ptr<oldscape::dash3d::Sprite>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<oldscape::dash3d::Sprite*>((Sprite**)(this + 8), (Sprite**)(param_1 + 8));
    }

    // 0x10002cdd0, 64 bytes, inline, placed by class name
    // weak_ptr<oldscape::ClientObj>::operator=(weak_ptr<oldscape::ClientObj>&&)
    /* weak_ptr<oldscape::ClientObj>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<oldscape::ClientObj>&&)
    */

    weak_ptr<oldscape::ClientObj>* weak_ptr<oldscape::ClientObj>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<oldscape::ClientObj>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x100030be0, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // weak_ptr<oldscape::rs2lib::IfType>::weak_ptr()
    /* shared_ptr<oldscape::DBTableIndex>::shared_ptr() */

    void shared_ptr<oldscape::DBTableIndex>::shared_ptr() {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
    }

    // 0x100030bf0, 48 bytes, inline, placed by class name
    // weak_ptr<oldscape::rs2lib::IfType>::swap(weak_ptr<oldscape::rs2lib::IfType>&)
    void weak_ptr<oldscape::rs2lib::IfType>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<oldscape::rs2lib::IfType*>((IfType**)(this + 8), (IfType**)(param_1 + 8));
    }

    // 0x100079390, 64 bytes, inline, placed by class name
    // weak_ptr<oldscape::rs2lib::IfType>::operator=(weak_ptr<oldscape::rs2lib::IfType>&&)
    /* weak_ptr<oldscape::rs2lib::IfType>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<oldscape::rs2lib::IfType>&&)
    */

    weak_ptr<oldscape::rs2lib::IfType>* weak_ptr<oldscape::rs2lib::IfType>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<oldscape::rs2lib::IfType>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x10016c9a0, 80 bytes, inline, placed by class name
    // weak_ptr<oldscape::ClientObj>::lock() const
    /* weak_ptr<oldscape::rs2lib::IfType>::lock() const */

    void weak_ptr<oldscape::rs2lib::IfType>::lock() {
        char cVar1;
        _func_decltype_nullptr* in_RSI;
        _func_decltype_nullptr* p_Var2;
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>* in_RDI;

        p_Var2 = in_RSI;
        if ((*(ref_counter_base**)in_RSI == (ref_counter_base*)0) ||
            (cVar1 = (*(ref_counter_base**)in_RSI)->IncRefIfNZ(), cVar1 == '\0')) {
            new (in_RDI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
            return;
        }
        eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
            in_RDI, *(hash_node**)in_RSI, *(hash_node***)(in_RSI + 8));
    }

    // 0x1001a3290, 64 bytes, inline, placed by class name
    // weak_ptr<oldscape::ClientObj>::operator=(weak_ptr<oldscape::ClientObj> const&)
    /* weak_ptr<oldscape::ClientObj>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<oldscape::ClientObj>
   const&) */

    weak_ptr<oldscape::ClientObj>* weak_ptr<oldscape::ClientObj>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<oldscape::ClientObj>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1001a32d0, 48 bytes, inline, placed by class name
    // weak_ptr<oldscape::ClientObj>::swap(weak_ptr<oldscape::ClientObj>&)
    void weak_ptr<oldscape::ClientObj>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<oldscape::ClientObj*>((ClientObj**)(this + 8), (ClientObj**)(param_1 + 8));
    }

    // 0x1001b2cd0, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::VarType> >::operator=(weak_ptr<game::ConfigType<game::VarType> > const&)
    /* weak_ptr<game::ConfigType<game::VarType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::VarType> > const&) */

    weak_ptr<game::ConfigType<game::VarType>>* weak_ptr<game::ConfigType<game::VarType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::VarType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1001b2d20, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::VarType> >::swap(weak_ptr<game::ConfigType<game::VarType> >&)
    void weak_ptr<game::ConfigType<game::VarType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::VarType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1001df5a0, 64 bytes, inline, placed by class name
    // weak_ptr<render::RenderTargets>& weak_ptr<render::RenderTargets>::operator=<render::RenderTargets, void>(shared_ptr<render::RenderTargets> const&)
    /* weak_ptr<render::RenderTargets>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<render::RenderTargets>
   const&) */

    weak_ptr* weak_ptr<render::RenderTargets>::operator=(shared_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, (weak_ptr*)param_1);
        swap((weak_ptr<render::RenderTargets>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return (weak_ptr*)this;
    }

    // 0x1002eeee0, 64 bytes, inline, placed by class name
    // weak_ptr<graphics::Model>& weak_ptr<graphics::Model>::operator=<graphics::Model, void>(shared_ptr<graphics::Model> const&)
    /* weak_ptr<graphics::Model>&
   weak_ptr<graphics::Model>::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<graphics::Model>
   const&) */

    weak_ptr* weak_ptr<graphics::Model>::operator=(shared_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, (weak_ptr*)param_1);
        swap((weak_ptr<graphics::Model>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return (weak_ptr*)this;
    }

    // 0x100329970, 48 bytes, inline, placed by class name
    // weak_ptr<graphics::Model>::swap(weak_ptr<graphics::Model>&)
    void weak_ptr<graphics::Model>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<graphics::Model*>((Model**)(this + 8), (Model**)(param_1 + 8));
    }

    // 0x100374130, 64 bytes, inline, placed by class name
    // weak_ptr<oldscape::dash3d::ModelLitImpl>& weak_ptr<oldscape::dash3d::ModelLitImpl>::operator=<oldscape::dash3d::ModelLitImpl, void>(shared_ptr<oldscape::dash3d::ModelLitImpl> const&)
    /* weak_ptr<oldscape::dash3d::ModelLitImpl>&
   weak_ptr<oldscape::dash3d::ModelLitImpl>::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<oldscape::dash3d::ModelLitImpl>
   const&) */

    weak_ptr* weak_ptr<oldscape::dash3d::ModelLitImpl>::operator=(shared_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, (weak_ptr*)param_1);
        swap((weak_ptr<oldscape::dash3d::ModelLitImpl>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return (weak_ptr*)this;
    }

    // 0x100374850, 48 bytes, inline, placed by class name
    // weak_ptr<oldscape::dash3d::ModelLitImpl>::swap(weak_ptr<oldscape::dash3d::ModelLitImpl>&)
    void weak_ptr<oldscape::dash3d::ModelLitImpl>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<oldscape::dash3d::ModelLitImpl*>((ModelLitImpl**)(this + 8), (ModelLitImpl**)(param_1 + 8));
    }

    // 0x1003ba0a0, 64 bytes, inline, placed by class name
    // weak_ptr<ui::Component>::operator=(weak_ptr<ui::Component>&&)
    /* weak_ptr<ui::Component>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<ui::Component>&&)
    */

    weak_ptr<ui::Component>* weak_ptr<ui::Component>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<ui::Component>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1003ba1f0, 16 bytes, inline, placed by class name
    // bool weak_ptr<ui::Component>::owner_before<ui::Component>(shared_ptr<ui::Component> const&) const
    /* bool 
   shared_ptr<ui::Component>::owner_before<ui::Component>(weak_ptr<ui::Component>
   const&) const */

    bool shared_ptr<ui::Component>::owner_before<ui::Component>(weak_ptr* param_1) {
        return *(ulong*)this < *(ulong*)param_1;
    }

    // 0x1003e77e0, 64 bytes, inline, placed by class name
    // weak_ptr<PathingEntity>::reset()
    void weak_ptr<PathingEntity>::reset() {
        _func_decltype_nullptr* in_RSI;
        weak_ptr* in_RDI;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28[16];

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_28, in_RSI);
        swap((weak_ptr<PathingEntity>*)local_28, in_RDI);
        local_28->~weak_ptr();
    }

    // 0x1003eb950, 48 bytes, inline, placed by class name
    // weak_ptr<PathingEntity>::swap(weak_ptr<PathingEntity>&)
    void weak_ptr<PathingEntity>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<PathingEntity*>((PathingEntity**)(this + 8), (PathingEntity**)(param_1 + 8));
    }

    // 0x1003f25c0, 64 bytes, inline, placed by class name
    // weak_ptr<game::Entity>& weak_ptr<game::Entity>::operator=<PathingEntity, void>(shared_ptr<PathingEntity> const&)
    /* weak_ptr<game::Entity>&
   weak_ptr<game::Entity>::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<game::LocationInterface>
   const&) */

    weak_ptr* weak_ptr<game::Entity>::operator=(shared_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, (weak_ptr*)param_1);
        swap((weak_ptr<game::Entity>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return (weak_ptr*)this;
    }

    // 0x1004003b0, 64 bytes, inline, placed by class name
    // weak_ptr<game::BASType>& weak_ptr<game::BASType>::operator=<game::BASType, void>(shared_ptr<game::BASType> const&)
    /* weak_ptr<game::BASType>&
   weak_ptr<game::BASType>::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<game::BASType>
   const&) */

    weak_ptr* weak_ptr<game::BASType>::operator=(shared_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, (weak_ptr*)param_1);
        swap((weak_ptr<game::BASType>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return (weak_ptr*)this;
    }

    // 0x1004003f0, 48 bytes, inline, placed by class name
    // weak_ptr<game::BASType>::swap(weak_ptr<game::BASType>&)
    void weak_ptr<game::BASType>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::BASType*>((BASType**)(this + 8), (BASType**)(param_1 + 8));
    }

    // 0x100439db0, 48 bytes, inline, placed by class name
    // weak_ptr<game::Entity>::swap(weak_ptr<game::Entity>&)
    void weak_ptr<game::Entity>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::Entity*>((Entity**)(this + 8), (Entity**)(param_1 + 8));
    }

    // 0x10045d690, 64 bytes, inline, placed by class name
    // weak_ptr<game::LocationInterface>::operator=(weak_ptr<game::LocationInterface> const&)
    /* weak_ptr<game::LocationInterface>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::LocationInterface>
   const&) */

    weak_ptr<game::LocationInterface>* weak_ptr<game::LocationInterface>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::LocationInterface>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x10045d6d0, 48 bytes, inline, placed by class name
    // weak_ptr<game::LocationInterface>::swap(weak_ptr<game::LocationInterface>&)
    void weak_ptr<game::LocationInterface>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::LocationInterface*>((LocationInterface**)(this + 8), (LocationInterface**)(param_1 + 8));
    }

    // 0x10046cd30, 64 bytes, inline, placed by class name
    // weak_ptr<game::World>::operator=(weak_ptr<game::World> const&)
    /* weak_ptr<game::World>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::World> const&)
    */

    weak_ptr<game::World>* weak_ptr<game::World>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::World>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x10046cd70, 48 bytes, inline, placed by class name
    // weak_ptr<game::World>::swap(weak_ptr<game::World>&)
    void weak_ptr<game::World>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::World*>((World**)(this + 8), (World**)(param_1 + 8));
    }

    // 0x100487660, 64 bytes, inline, placed by class name
    // weak_ptr<ObjStackEntity>::operator=(weak_ptr<ObjStackEntity> const&)
    /* weak_ptr<ObjStackEntity>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<ObjStackEntity>
   const&) */

    weak_ptr<ObjStackEntity>* weak_ptr<ObjStackEntity>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<ObjStackEntity>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1004876a0, 48 bytes, inline, placed by class name
    // weak_ptr<ObjStackEntity>::swap(weak_ptr<ObjStackEntity>&)
    void weak_ptr<ObjStackEntity>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<ObjStackEntity*>((ObjStackEntity**)(this + 8), (ObjStackEntity**)(param_1 + 8));
    }

    // 0x10048c090, 64 bytes, inline, placed by class name
    // weak_ptr<game::LightSource>::operator=(weak_ptr<game::LightSource>&&)
    /* weak_ptr<game::LightSource>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::LightSource>&&)
    */

    weak_ptr<game::LightSource>* weak_ptr<game::LightSource>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::LightSource>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x10048c0d0, 48 bytes, inline, placed by class name
    // weak_ptr<game::LightSource>::swap(weak_ptr<game::LightSource>&)
    void weak_ptr<game::LightSource>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::LightSource*>((LightSource**)(this + 8), (LightSource**)(param_1 + 8));
    }

    // 0x1004ecf20, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::SeqType> >::operator=(weak_ptr<game::ConfigType<game::SeqType> > const&)
    /* weak_ptr<game::ConfigType<game::SeqType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::SeqType> > const&) */

    weak_ptr<game::ConfigType<game::SeqType>>* weak_ptr<game::ConfigType<game::SeqType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::SeqType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1004ecf60, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::SeqType> >::swap(weak_ptr<game::ConfigType<game::SeqType> >&)
    void weak_ptr<game::ConfigType<game::SeqType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::SeqType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1004f94d0, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::ObjType> >::operator=(weak_ptr<game::ConfigType<game::ObjType> > const&)
    /* weak_ptr<game::ConfigType<game::ObjType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::ObjType> > const&) */

    weak_ptr<game::ConfigType<game::ObjType>>* weak_ptr<game::ConfigType<game::ObjType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::ObjType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1004f9510, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::ObjType> >::swap(weak_ptr<game::ConfigType<game::ObjType> >&)
    void weak_ptr<game::ConfigType<game::ObjType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::ObjType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x10050fe50, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::NPCType> >::operator=(weak_ptr<game::ConfigType<game::NPCType> > const&)
    /* weak_ptr<game::ConfigType<game::NPCType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::NPCType> > const&) */

    weak_ptr<game::ConfigType<game::NPCType>>* weak_ptr<game::ConfigType<game::NPCType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::NPCType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x10050fe90, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::NPCType> >::swap(weak_ptr<game::ConfigType<game::NPCType> >&)
    void weak_ptr<game::ConfigType<game::NPCType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::NPCType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x10051b950, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::LocType> >::operator=(weak_ptr<game::ConfigType<game::LocType> > const&)
    /* weak_ptr<game::ConfigType<game::LocType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::LocType> > const&) */

    weak_ptr<game::ConfigType<game::LocType>>* weak_ptr<game::ConfigType<game::LocType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::LocType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x10051b990, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::LocType> >::swap(weak_ptr<game::ConfigType<game::LocType> >&)
    void weak_ptr<game::ConfigType<game::LocType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::LocType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x100573c60, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::ParamType> >::operator=(weak_ptr<game::ConfigType<game::ParamType> > const&)
    /* weak_ptr<game::ConfigType<game::ParamType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::ParamType> > const&)
    */

    weak_ptr<game::ConfigType<game::ParamType>>*
    weak_ptr<game::ConfigType<game::ParamType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::ParamType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x100573ca0, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::ParamType> >::swap(weak_ptr<game::ConfigType<game::ParamType> >&)
    void weak_ptr<game::ConfigType<game::ParamType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::ParamType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005798e0, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::DBRowType> >::operator=(weak_ptr<game::ConfigType<game::DBRowType> > const&)
    /* weak_ptr<game::ConfigType<game::DBRowType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::DBRowType> > const&)
    */

    weak_ptr<game::ConfigType<game::DBRowType>>*
    weak_ptr<game::ConfigType<game::DBRowType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::DBRowType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x100579920, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::DBRowType> >::swap(weak_ptr<game::ConfigType<game::DBRowType> >&)
    void weak_ptr<game::ConfigType<game::DBRowType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::DBRowType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x10057efc0, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::DBTableType> >::operator=(weak_ptr<game::ConfigType<game::DBTableType> > const&)
    /* weak_ptr<game::ConfigType<game::DBTableType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::DBTableType> > const&)
    */

    weak_ptr<game::ConfigType<game::DBTableType>>*
    weak_ptr<game::ConfigType<game::DBTableType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::DBTableType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x10057f000, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::DBTableType> >::swap(weak_ptr<game::ConfigType<game::DBTableType> >&)
    void weak_ptr<game::ConfigType<game::DBTableType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::DBTableType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005846a0, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::InvType> >::operator=(weak_ptr<game::ConfigType<game::InvType> > const&)
    /* weak_ptr<game::ConfigType<game::InvType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::InvType> > const&) */

    weak_ptr<game::ConfigType<game::InvType>>* weak_ptr<game::ConfigType<game::InvType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::InvType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005846e0, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::InvType> >::swap(weak_ptr<game::ConfigType<game::InvType> >&)
    void weak_ptr<game::ConfigType<game::InvType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::InvType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x100588a30, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::VarBitType> >::operator=(weak_ptr<game::ConfigType<game::VarBitType> > const&)
    /* weak_ptr<game::ConfigType<game::VarBitType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::VarBitType> > const&)
    */

    weak_ptr<game::ConfigType<game::VarBitType>>*
    weak_ptr<game::ConfigType<game::VarBitType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::VarBitType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x100588a70, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::VarBitType> >::swap(weak_ptr<game::ConfigType<game::VarBitType> >&)
    void weak_ptr<game::ConfigType<game::VarBitType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::VarBitType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x10058e1e0, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::BASType> >::operator=(weak_ptr<game::ConfigType<game::BASType> > const&)
    /* weak_ptr<game::ConfigType<game::BASType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::BASType> > const&) */

    weak_ptr<game::ConfigType<game::BASType>>* weak_ptr<game::ConfigType<game::BASType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::BASType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x10058e220, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::BASType> >::swap(weak_ptr<game::ConfigType<game::BASType> >&)
    void weak_ptr<game::ConfigType<game::BASType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::BASType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x100593880, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::FloorUnderlayType> >::operator=(weak_ptr<game::ConfigType<game::FloorUnderlayType> > const&)
    /* weak_ptr<game::ConfigType<game::FloorUnderlayType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::FloorUnderlayType> >
   const&) */

    weak_ptr<game::ConfigType<game::FloorUnderlayType>>*
    weak_ptr<game::ConfigType<game::FloorUnderlayType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::FloorUnderlayType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005938c0, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::FloorUnderlayType> >::swap(weak_ptr<game::ConfigType<game::FloorUnderlayType> >&)
    void weak_ptr<game::ConfigType<game::FloorUnderlayType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::FloorUnderlayType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x100598f30, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::FloorOverlayType> >::operator=(weak_ptr<game::ConfigType<game::FloorOverlayType> > const&)
    /* weak_ptr<game::ConfigType<game::FloorOverlayType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::FloorOverlayType> >
   const&) */

    weak_ptr<game::ConfigType<game::FloorOverlayType>>*
    weak_ptr<game::ConfigType<game::FloorOverlayType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::FloorOverlayType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x100598f70, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::FloorOverlayType> >::swap(weak_ptr<game::ConfigType<game::FloorOverlayType> >&)
    void weak_ptr<game::ConfigType<game::FloorOverlayType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::FloorOverlayType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x10059dba0, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::HitmarkType> >::operator=(weak_ptr<game::ConfigType<game::HitmarkType> > const&)
    /* weak_ptr<game::ConfigType<game::HitmarkType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::HitmarkType> > const&)
    */

    weak_ptr<game::ConfigType<game::HitmarkType>>*
    weak_ptr<game::ConfigType<game::HitmarkType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::HitmarkType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x10059dbe0, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::HitmarkType> >::swap(weak_ptr<game::ConfigType<game::HitmarkType> >&)
    void weak_ptr<game::ConfigType<game::HitmarkType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::HitmarkType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005a3710, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::HeadbarType> >::operator=(weak_ptr<game::ConfigType<game::HeadbarType> > const&)
    /* weak_ptr<game::ConfigType<game::HeadbarType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::HeadbarType> > const&)
    */

    weak_ptr<game::ConfigType<game::HeadbarType>>*
    weak_ptr<game::ConfigType<game::HeadbarType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::HeadbarType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005a3750, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::HeadbarType> >::swap(weak_ptr<game::ConfigType<game::HeadbarType> >&)
    void weak_ptr<game::ConfigType<game::HeadbarType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::HeadbarType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005a8f10, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::IDKType> >::operator=(weak_ptr<game::ConfigType<game::IDKType> > const&)
    /* weak_ptr<game::ConfigType<game::IDKType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::IDKType> > const&) */

    weak_ptr<game::ConfigType<game::IDKType>>* weak_ptr<game::ConfigType<game::IDKType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::IDKType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005a8f50, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::IDKType> >::swap(weak_ptr<game::ConfigType<game::IDKType> >&)
    void weak_ptr<game::ConfigType<game::IDKType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::IDKType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005af170, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::MapElementType> >::operator=(weak_ptr<game::ConfigType<game::MapElementType> > const&)
    /* weak_ptr<game::ConfigType<game::MapElementType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::MapElementType> >
   const&) */

    weak_ptr<game::ConfigType<game::MapElementType>>*
    weak_ptr<game::ConfigType<game::MapElementType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::MapElementType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005af1b0, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::MapElementType> >::swap(weak_ptr<game::ConfigType<game::MapElementType> >&)
    void weak_ptr<game::ConfigType<game::MapElementType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::MapElementType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005b4ec0, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::MSIType> >::operator=(weak_ptr<game::ConfigType<game::MSIType> > const&)
    /* weak_ptr<game::ConfigType<game::MSIType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::MSIType> > const&) */

    weak_ptr<game::ConfigType<game::MSIType>>* weak_ptr<game::ConfigType<game::MSIType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::MSIType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005b4f00, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::MSIType> >::swap(weak_ptr<game::ConfigType<game::MSIType> >&)
    void weak_ptr<game::ConfigType<game::MSIType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::MSIType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005bae70, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::QuestType> >::operator=(weak_ptr<game::ConfigType<game::QuestType> > const&)
    /* weak_ptr<game::ConfigType<game::QuestType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::QuestType> > const&)
    */

    weak_ptr<game::ConfigType<game::QuestType>>*
    weak_ptr<game::ConfigType<game::QuestType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::QuestType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005baeb0, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::QuestType> >::swap(weak_ptr<game::ConfigType<game::QuestType> >&)
    void weak_ptr<game::ConfigType<game::QuestType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::QuestType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005c0590, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::SeqGroupType> >::operator=(weak_ptr<game::ConfigType<game::SeqGroupType> > const&)
    /* weak_ptr<game::ConfigType<game::SeqGroupType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::SeqGroupType> >
   const&) */

    weak_ptr<game::ConfigType<game::SeqGroupType>>*
    weak_ptr<game::ConfigType<game::SeqGroupType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::SeqGroupType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005c05d0, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::SeqGroupType> >::swap(weak_ptr<game::ConfigType<game::SeqGroupType> >&)
    void weak_ptr<game::ConfigType<game::SeqGroupType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::SeqGroupType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005c5c40, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::LightType> >::operator=(weak_ptr<game::ConfigType<game::LightType> > const&)
    /* weak_ptr<game::ConfigType<game::LightType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::LightType> > const&)
    */

    weak_ptr<game::ConfigType<game::LightType>>*
    weak_ptr<game::ConfigType<game::LightType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::LightType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005c5c80, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::LightType> >::swap(weak_ptr<game::ConfigType<game::LightType> >&)
    void weak_ptr<game::ConfigType<game::LightType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::LightType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005cb3e0, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::SkyBoxType> >::operator=(weak_ptr<game::ConfigType<game::SkyBoxType> > const&)
    /* weak_ptr<game::ConfigType<game::SkyBoxType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::SkyBoxType> > const&)
    */

    weak_ptr<game::ConfigType<game::SkyBoxType>>*
    weak_ptr<game::ConfigType<game::SkyBoxType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::SkyBoxType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005cb420, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::SkyBoxType> >::swap(weak_ptr<game::ConfigType<game::SkyBoxType> >&)
    void weak_ptr<game::ConfigType<game::SkyBoxType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::SkyBoxType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005cfe80, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::WaterType> >::operator=(weak_ptr<game::ConfigType<game::WaterType> > const&)
    /* weak_ptr<game::ConfigType<game::WaterType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::WaterType> > const&)
    */

    weak_ptr<game::ConfigType<game::WaterType>>*
    weak_ptr<game::ConfigType<game::WaterType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::WaterType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005cfec0, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::WaterType> >::swap(weak_ptr<game::ConfigType<game::WaterType> >&)
    void weak_ptr<game::ConfigType<game::WaterType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::WaterType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005d54f0, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::CursorType> >::operator=(weak_ptr<game::ConfigType<game::CursorType> > const&)
    /* weak_ptr<game::ConfigType<game::CursorType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::CursorType> > const&)
    */

    weak_ptr<game::ConfigType<game::CursorType>>*
    weak_ptr<game::ConfigType<game::CursorType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::CursorType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005d5530, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::CursorType> >::swap(weak_ptr<game::ConfigType<game::CursorType> >&)
    void weak_ptr<game::ConfigType<game::CursorType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::CursorType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005daae0, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::WorldAreaType> >::operator=(weak_ptr<game::ConfigType<game::WorldAreaType> > const&)
    /* weak_ptr<game::ConfigType<game::WorldAreaType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::WorldAreaType> >
   const&) */

    weak_ptr<game::ConfigType<game::WorldAreaType>>*
    weak_ptr<game::ConfigType<game::WorldAreaType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::WorldAreaType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005dab20, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::WorldAreaType> >::swap(weak_ptr<game::ConfigType<game::WorldAreaType> >&)
    void weak_ptr<game::ConfigType<game::WorldAreaType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::WorldAreaType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005e0e20, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::EnumType> >::operator=(weak_ptr<game::ConfigType<game::EnumType> > const&)
    /* weak_ptr<game::ConfigType<game::EnumType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::EnumType> > const&) */

    weak_ptr<game::ConfigType<game::EnumType>>*
    weak_ptr<game::ConfigType<game::EnumType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::EnumType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005e0e60, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::EnumType> >::swap(weak_ptr<game::ConfigType<game::EnumType> >&)
    void weak_ptr<game::ConfigType<game::EnumType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::EnumType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005e6840, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::EffectAnimType> >::operator=(weak_ptr<game::ConfigType<game::EffectAnimType> > const&)
    /* weak_ptr<game::ConfigType<game::EffectAnimType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::EffectAnimType> >
   const&) */

    weak_ptr<game::ConfigType<game::EffectAnimType>>*
    weak_ptr<game::ConfigType<game::EffectAnimType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::EffectAnimType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005e6880, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::EffectAnimType> >::swap(weak_ptr<game::ConfigType<game::EffectAnimType> >&)
    void weak_ptr<game::ConfigType<game::EffectAnimType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::EffectAnimType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005ec490, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::StructType> >::operator=(weak_ptr<game::ConfigType<game::StructType> > const&)
    /* weak_ptr<game::ConfigType<game::StructType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::StructType> > const&)
    */

    weak_ptr<game::ConfigType<game::StructType>>*
    weak_ptr<game::ConfigType<game::StructType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::StructType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005ec4d0, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::StructType> >::swap(weak_ptr<game::ConfigType<game::StructType> >&)
    void weak_ptr<game::ConfigType<game::StructType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::StructType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x1005f23e0, 64 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::AchievementType> >::operator=(weak_ptr<game::ConfigType<game::AchievementType> > const&)
    /* weak_ptr<game::ConfigType<game::AchievementType>
   >::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<game::ConfigType<game::AchievementType> >
   const&) */

    weak_ptr<game::ConfigType<game::AchievementType>>*
    weak_ptr<game::ConfigType<game::AchievementType>>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<game::ConfigType<game::AchievementType>>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1005f2420, 48 bytes, inline, placed by class name
    // weak_ptr<game::ConfigType<game::AchievementType> >::swap(weak_ptr<game::ConfigType<game::AchievementType> >&)
    void weak_ptr<game::ConfigType<game::AchievementType>>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<game::ConfigType<game::AchievementType>*>((ConfigType**)(this + 8), (ConfigType**)(param_1 + 8));
    }

    // 0x100674790, 64 bytes, inline, placed by class name
    // weak_ptr<ui::StyleSheet>& weak_ptr<ui::StyleSheet>::operator=<ui::StyleSheet, void>(shared_ptr<ui::StyleSheet> const&)
    /* weak_ptr<ui::StyleSheet>&
   weak_ptr<ui::StyleSheet>::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<ui::StyleSheet>
   const&) */

    weak_ptr* weak_ptr<ui::StyleSheet>::operator=(shared_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, (weak_ptr*)param_1);
        swap((weak_ptr<ui::StyleSheet>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return (weak_ptr*)this;
    }

    // 0x10067b240, 64 bytes, inline, placed by class name
    // weak_ptr<ui::Component>::reset()
    void weak_ptr<ui::Component>::reset() {
        _func_decltype_nullptr* in_RSI;
        weak_ptr* in_RDI;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28[16];

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_28, in_RSI);
        swap((weak_ptr<ui::Component>*)local_28, in_RDI);
        local_28->~weak_ptr();
    }

    // 0x10067b280, 64 bytes, inline, placed by class name
    // weak_ptr<ui::Interface>::reset()
    void weak_ptr<ui::Interface>::reset() {
        _func_decltype_nullptr* in_RSI;
        weak_ptr* in_RDI;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28[16];

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_28, in_RSI);
        swap((weak_ptr<ui::Interface>*)local_28, in_RDI);
        local_28->~weak_ptr();
    }

    // 0x10067b330, 48 bytes, inline, placed by class name
    // weak_ptr<ui::Interface>::swap(weak_ptr<ui::Interface>&)
    void weak_ptr<ui::Interface>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<ui::Interface*>((Interface**)(this + 8), (Interface**)(param_1 + 8));
    }

    // 0x10067c2d0, 48 bytes, inline, placed by class name
    // weak_ptr<ui::StyleSheet>::swap(weak_ptr<ui::StyleSheet>&)
    void weak_ptr<ui::StyleSheet>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<ui::StyleSheet*>((StyleSheet**)(this + 8), (StyleSheet**)(param_1 + 8));
    }

    // 0x100688130, 64 bytes, inline, placed by class name
    // weak_ptr<tweak::List>& weak_ptr<tweak::List>::operator=<tweak::List, void>(shared_ptr<tweak::List> const&)
    /* weak_ptr<tweak::List>&
   weak_ptr<tweak::List>::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<tweak::List>
   const&) */

    weak_ptr* weak_ptr<tweak::List>::operator=(shared_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, (weak_ptr*)param_1);
        swap((weak_ptr<tweak::List>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return (weak_ptr*)this;
    }

    // 0x100688170, 64 bytes, inline, placed by class name
    // weak_ptr<tweak::Label>& weak_ptr<tweak::Label>::operator=<tweak::Label, void>(shared_ptr<tweak::Label> const&)
    /* weak_ptr<tweak::Label>&
   weak_ptr<tweak::Label>::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<tweak::Label>
   const&) */

    weak_ptr* weak_ptr<tweak::Label>::operator=(shared_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, (weak_ptr*)param_1);
        swap((weak_ptr<tweak::Label>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return (weak_ptr*)this;
    }

    // 0x1006881c0, 64 bytes, inline, placed by class name
    // weak_ptr<tweak::List>::reset()
    void weak_ptr<tweak::List>::reset() {
        _func_decltype_nullptr* in_RSI;
        weak_ptr* in_RDI;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28[16];

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_28, in_RSI);
        swap((weak_ptr<tweak::List>*)local_28, in_RDI);
        local_28->~weak_ptr();
    }

    // 0x100692460, 64 bytes, inline, placed by class name
    // weak_ptr<ui::Component>& weak_ptr<ui::Component>::operator=<ui::Component, void>(shared_ptr<ui::Component> const&)
    /* weak_ptr<ui::Component>&
   weak_ptr<ui::Component>::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<ui::Component>
   const&) */

    weak_ptr* weak_ptr<ui::Component>::operator=(shared_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, (weak_ptr*)param_1);
        swap((weak_ptr<ui::Component>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return (weak_ptr*)this;
    }

    // 0x1006a4e00, 64 bytes, inline, placed by class name
    // weak_ptr<ui::PagedLayer>& weak_ptr<ui::PagedLayer>::operator=<ui::PagedLayer, void>(shared_ptr<ui::PagedLayer> const&)
    /* weak_ptr<ui::PagedLayer>&
   weak_ptr<ui::PagedLayer>::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<ui::PagedLayer>
   const&) */

    weak_ptr* weak_ptr<ui::PagedLayer>::operator=(shared_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, (weak_ptr*)param_1);
        swap((weak_ptr<ui::PagedLayer>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return (weak_ptr*)this;
    }

    // 0x1006bd210, 48 bytes, inline, placed by class name
    // weak_ptr<tweak::List>::swap(weak_ptr<tweak::List>&)
    void weak_ptr<tweak::List>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<tweak::List*>((List**)(this + 8), (List**)(param_1 + 8));
    }

    // 0x1006bd260, 48 bytes, inline, placed by class name
    // weak_ptr<tweak::Label>::swap(weak_ptr<tweak::Label>&)
    void weak_ptr<tweak::Label>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<tweak::Label*>((Label**)(this + 8), (Label**)(param_1 + 8));
    }

    // 0x1006c3920, 48 bytes, inline, placed by class name
    // weak_ptr<ui::Component>::swap(weak_ptr<ui::Component>&)
    void weak_ptr<ui::Component>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<ui::Component*>((Component**)(this + 8), (Component**)(param_1 + 8));
    }

    // 0x1006d6760, 48 bytes, inline, placed by class name
    // weak_ptr<ui::PagedLayer>::swap(weak_ptr<ui::PagedLayer>&)
    void weak_ptr<ui::PagedLayer>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<ui::PagedLayer*>((PagedLayer**)(this + 8), (PagedLayer**)(param_1 + 8));
    }

    // 0x1007f7920, 64 bytes, inline, placed by class name
    // weak_ptr<graphics::ParticleSystem>::operator=(weak_ptr<graphics::ParticleSystem> const&)
    /* weak_ptr<graphics::ParticleSystem>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<graphics::ParticleSystem>
   const&) */

    weak_ptr<graphics::ParticleSystem>* weak_ptr<graphics::ParticleSystem>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<graphics::ParticleSystem>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x1007f7960, 48 bytes, inline, placed by class name
    // weak_ptr<graphics::ParticleSystem>::swap(weak_ptr<graphics::ParticleSystem>&)
    void weak_ptr<graphics::ParticleSystem>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<graphics::ParticleSystem*>((ParticleSystem**)(this + 8), (ParticleSystem**)(param_1 + 8));
    }

    // 0x100838c30, 64 bytes, inline, placed by class name
    // weak_ptr<render::Query>::operator=(weak_ptr<render::Query> const&)
    /* weak_ptr<render::Query>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<render::Query>
   const&) */

    weak_ptr<render::Query>* weak_ptr<render::Query>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<render::Query>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x100838ca0, 48 bytes, inline, placed by class name
    // weak_ptr<render::Query>::swap(weak_ptr<render::Query>&)
    void weak_ptr<render::Query>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<render::Query*>((Query**)(this + 8), (Query**)(param_1 + 8));
    }

    // 0x1009413b0, 64 bytes, inline, placed by class name
    // weak_ptr<tweak::Control>::operator=(weak_ptr<tweak::Control> const&)
    /* weak_ptr<tweak::Control>&
   weak_ptr<tweak::Control>::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<tweak::Control>
   const&) */

    weak_ptr* weak_ptr<tweak::Control>::operator=(shared_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, (weak_ptr*)param_1);
        swap((weak_ptr<tweak::Control>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return (weak_ptr*)this;
    }

    // 0x1009413f0, 48 bytes, inline, placed by class name
    // weak_ptr<tweak::Control>::swap(weak_ptr<tweak::Control>&)
    void weak_ptr<tweak::Control>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<tweak::Control*>((Control**)(this + 8), (Control**)(param_1 + 8));
    }

    // 0x100a3e220, 64 bytes, inline, placed by class name
    // weak_ptr<tweak::Control>::reset()
    void weak_ptr<tweak::Control>::reset() {
        _func_decltype_nullptr* in_RSI;
        weak_ptr* in_RDI;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28[16];

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_28, in_RSI);
        swap((weak_ptr<tweak::Control>*)local_28, in_RDI);
        local_28->~weak_ptr();
    }

    // 0x100a41590, 64 bytes, inline, placed by class name
    // weak_ptr<tweak::Tweaky>::operator=(weak_ptr<tweak::Tweaky> const&)
    /* weak_ptr<tweak::Tweaky>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<tweak::Tweaky>
   const&) */

    weak_ptr<tweak::Tweaky>* weak_ptr<tweak::Tweaky>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<tweak::Tweaky>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x100a51c70, 64 bytes, inline, placed by class name
    // weak_ptr<tweak::Container>::operator=(weak_ptr<tweak::Container> const&)
    /* weak_ptr<tweak::Container>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<tweak::Container>
   const&) */

    weak_ptr<tweak::Container>* weak_ptr<tweak::Container>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<tweak::Container>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x100a51cb0, 48 bytes, inline, placed by class name
    // weak_ptr<tweak::Container>::swap(weak_ptr<tweak::Container>&)
    void weak_ptr<tweak::Container>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<tweak::Container*>((Container**)(this + 8), (Container**)(param_1 + 8));
    }

    // 0x100a533e0, 48 bytes, inline, placed by class name
    // weak_ptr<tweak::Tweaky>::swap(weak_ptr<tweak::Tweaky>&)
    void weak_ptr<tweak::Tweaky>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<tweak::Tweaky*>((Tweaky**)(this + 8), (Tweaky**)(param_1 + 8));
    }

    // 0x100b0cde0, 64 bytes, inline, placed by class name
    // weak_ptr<network::Ping>::operator=(weak_ptr<network::Ping> const&)
    /* weak_ptr<network::Ping>::TEMPNAMEPLACEHOLDERVALUE(weak_ptr<network::Ping>
   const&) */

    weak_ptr<network::Ping>* weak_ptr<network::Ping>::operator=(weak_ptr* param_1) {
        weak_ptr<oldscape::dash3d::Decor> local_28[16];

        weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_28, param_1);
        swap((weak_ptr<network::Ping>*)local_28, (weak_ptr*)this);
        local_28->~weak_ptr();
        return this;
    }

    // 0x100b0ce50, 48 bytes, inline, placed by class name
    // weak_ptr<network::Ping>::swap(weak_ptr<network::Ping>&)
    void weak_ptr<network::Ping>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<network::Ping*>((Ping**)(this + 8), (Ping**)(param_1 + 8));
    }

    // 0x100c5f2b0, 48 bytes, inline, placed by class name
    // weak_ptr<render::RenderTargets>::swap(weak_ptr<render::RenderTargets>&)
    void weak_ptr<render::RenderTargets>::swap(weak_ptr* param_1) {
        std::swap<ref_counter_base*>((ref_counter_base**)this, (ref_counter_base**)param_1);
        std::swap<render::RenderTargets*>((RenderTargets**)(this + 8), (RenderTargets**)(param_1 + 8));
    }

} // namespace jag

namespace jag::math {
    // 0x100017ca0: the linker folded this into weak_ptr<oldscape::rs2lib::IfType>::weak_ptr(), which has identical code
    Float4::Float4();

    // 0x100030be0: the linker folded this into weak_ptr<oldscape::rs2lib::IfType>::weak_ptr(), which has identical code
    Float4::Float4();

} // namespace jag::math

namespace jag::tweak {
    // 0x100017ca0: the linker folded this into weak_ptr<oldscape::rs2lib::IfType>::weak_ptr(), which has identical code
    Placement::Placement();

    // 0x100030be0: the linker folded this into weak_ptr<oldscape::rs2lib::IfType>::weak_ptr(), which has identical code
    Placement::Placement();

} // namespace jag::tweak

namespace jag::oldscape::dash3d {
    // 0x100017ca0: the linker folded this into weak_ptr<rs2lib::IfType>::weak_ptr(), which has identical code
    PointNormal::PointNormal();

    // 0x100030be0: the linker folded this into weak_ptr<rs2lib::IfType>::weak_ptr(), which has identical code
    PointNormal::PointNormal();

} // namespace jag::oldscape::dash3d
