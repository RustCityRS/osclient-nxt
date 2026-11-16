// libs/graphics/runetek7/particles/modules/EffectorModules.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics::particlemodules {
    class Gravity {
    public:
        // virtual methods in vtable order
        virtual ~Gravity();
        virtual LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual void ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&,
                                 ParticleData&) const;
        Gravity();

        // data members, from how the methods use this: 104 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[96];
    };

    // 0x1007e5160, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // Gravity::~Gravity(): jumps straight to the base-object destructor

    // 0x1007e5170, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // Gravity::~Gravity()
    void Gravity::~Gravity() {
        ~Gravity(this);
        operator_delete(this);
    }

    // 0x1007e5190, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // TriggerPlane::~TriggerPlane(): jumps straight to the base-object destructor

    // 0x1007e51a0, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // TriggerPlane::~TriggerPlane()
    void TriggerPlane::~TriggerPlane() {
        ~TriggerPlane(this);
        operator_delete(this);
    }

    // 0x1007e51c0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // Attractor::~Attractor(): jumps straight to the base-object destructor

    // 0x1007e51d0, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // Attractor::~Attractor()
    void Attractor::~Attractor() {
        ~Attractor(this);
        operator_delete(this);
    }

    // 0x100829df0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Gravity::Gravity(): jumps straight to the base-object constructor

} // namespace jag::graphics::particlemodules
