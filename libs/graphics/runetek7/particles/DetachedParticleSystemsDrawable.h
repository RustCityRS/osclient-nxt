// libs/graphics/runetek7/particles/DetachedParticleSystemsDrawable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class DetachedParticleSystemsDrawable : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DetachedParticleSystemsDrawable();
        virtual void GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&);
        DetachedParticleSystemsDrawable();
        void Add(eastl::vector<shared_ptr<ModularParticleSystem>, eastl::allocator> const&);
        void Add(eastl::fixed_vector<shared_ptr<ParticleSystem>, 1ul, true, eastl::allocator> const&);
        void GarbageCollect();

        // data members, from how the methods use this: 328 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        shared_ptr field_16; // offset 16
        char _unknown_32[280];
        shared_ptr field_312; // offset 312
    };

    // 0x10043cdf0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DetachedParticleSystemsDrawable::DetachedParticleSystemsDrawable(): jumps straight to the base-object constructor

    // 0x10043d080, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DetachedParticleSystemsDrawable::~DetachedParticleSystemsDrawable(): jumps straight to the base-object destructor

    // 0x10044bab0, 112 bytes, base-object constructor, inline, placed by class name
    // DetachedParticleSystemsDrawable::DetachedParticleSystemsDrawable()
    void DetachedParticleSystemsDrawable::DetachedParticleSystemsDrawable() {
        new (this) Drawable(0);
        field_0 = &PTR__DetachedParticleSystemsDrawable_100f15998;
        new (field_16) eastl::fixed_vector<shared_ptr<ModularParticleSystem>, 16ul, true, eastl::allocator>();
        new (field_312) eastl::fixed_vector<shared_ptr<ParticleSystem>, 16ul, true, eastl::allocator>();
    }

    // 0x10044bf70, 64 bytes, base-object destructor, inline, placed by class name
    // DetachedParticleSystemsDrawable::~DetachedParticleSystemsDrawable()
    void DetachedParticleSystemsDrawable::~DetachedParticleSystemsDrawable() {
        field_0 = &PTR__DetachedParticleSystemsDrawable_100f15998;
        field_312->~fixed_vector();
        field_16->~fixed_vector();
        ~AutoSingleton();
    }

    // 0x10082d580, 32 bytes, deleting destructor, inline, placed by class name
    // DetachedParticleSystemsDrawable::~DetachedParticleSystemsDrawable()
    void DetachedParticleSystemsDrawable::~DetachedParticleSystemsDrawable() {
        ~DetachedParticleSystemsDrawable(this);
        operator_delete(this);
    }

    // 0x10084f880, 32 bytes, inline, placed by class name
    // DetachedParticleSystemsDrawable::GarbageCollect()::$_7::operator()(shared_ptr<ModularParticleSystem> const&) const
    /* DetachedParticleSystemsDrawable::GarbageCollect()::$_7::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<ModularParticleSystem>
   const&) const */

    bool DetachedParticleSystemsDrawable::GarbageCollect()::$_7::operator()(shared_ptr* param_1) {
        int iVar1;

        iVar1 = use_count();
        return iVar1 == 1;
    }

    // 0x10084f940, 32 bytes, inline, placed by class name
    // DetachedParticleSystemsDrawable::GarbageCollect()::$_8::operator()(shared_ptr<ParticleSystem> const&) const
    /* DetachedParticleSystemsDrawable::GarbageCollect()::$_8::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<ParticleSystem>
   const&) const */

    bool DetachedParticleSystemsDrawable::GarbageCollect()::$_8::operator()(shared_ptr* param_1) {
        ParticleSystem* this_00;

        this_00 = (ParticleSystem*)shared_ptr<ParticleSystem>::operator->((shared_ptr<ParticleSystem>*)this);
        return this_00->GetParticleCount() == 0;
    }

} // namespace jag::graphics
