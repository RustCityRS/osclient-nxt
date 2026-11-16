// libs/game/runetek5/camera/ICameraEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.systemheap

namespace jag::game {
    class ICameraEffect {
    public:
        // virtual methods in vtable order
        virtual ~ICameraEffect();
        virtual void __pure_slot_2() = 0;
        virtual void __pure_slot_3() = 0;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);
        int GetEffectID() const;
        ICameraEffect(Type, int);

        // data members, from how the methods use this: 20 bytes
        undefined* field_0; // offset 0, vtable pointer
        undefined4 field_8; // offset 8
        int m_effectID;     // offset 12
        char _unknown_16[4];
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ICameraEffect::~ICameraEffect();

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    int ICameraEffect::GetEffectID() const;

    // 0x10061c3c0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // ICameraEffect::ICameraEffect(ICameraEffect::Type, int)
    void ICameraEffect::ICameraEffect(undefined4 param_2, int param_3) {
        field_0 = PTR_vtable_100ee7f18 + 16;
        field_8 = param_2;
        m_effectID = param_3;
    }

    // 0x10061d8a0, 48 bytes, inline, placed by class name
    // ICameraEffect::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ICameraEffect::ProcessServerUpdate(PacketT* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "ICameraEffect.h",
                        39, "Not implemented");
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ICameraEffect::~ICameraEffect();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ICameraEffect::~ICameraEffect();

} // namespace jag::game

namespace jag::math {
    // 0x10061c670, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float>::SetToIdentity()
    Vector4T<float>* Vector4T<float>::SetToIdentity() {
        Rect<float>::operator=((Rect<float>*)this, (Rect*)PTR_IDENTITY_100ee6710);
        return this;
    }

} // namespace jag::math

// 0x10061c690, 16 bytes, placed by debug map only (low confidence)
// acos(float)
void acos(float param_1) {
    _acosf();
}
