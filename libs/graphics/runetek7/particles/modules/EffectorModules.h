// libs/graphics/runetek7/particles/modules/EffectorModules.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics::particlemodules {
    class Gravity {
    public:
        // virtual methods in vtable order
        virtual ~Gravity();
        virtual uint64_t LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2);
        virtual void ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                 ParticleModuleUpdateState& particleModuleUpdateState,
                                 ParticleData& particleData) const;
        Gravity();

    private:
        uint8_t _unknown_8[96];
    };

} // namespace jag::graphics::particlemodules
