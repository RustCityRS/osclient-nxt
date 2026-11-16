// libs/game/runetek5/camera/effects/ZTilt.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game::camera {
    class ZTilt : public ICameraEffect // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ZTilt();
        virtual Update(float);
        virtual void Apply(math::Matrix44T<float>&);
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void ToString(eastl::fixed_string<char, 256, true, eastl::allocator>&);
        ZTilt(int, float);
        ZTilt(int, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 24 bytes, the first 20 are ICameraEffect
        char _unknown_20[4];
    };

    // 0x10061d980, 48 bytes, inline, placed by class name and debug map
    // ZTilt::ToString(eastl::fixed_string<char, 256, true, eastl::allocator>&)
    void ZTilt::ToString(fixed_string* param_1) {
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, (double)field_16, "ZTitle (%f)");
    }

} // namespace jag::game::camera
