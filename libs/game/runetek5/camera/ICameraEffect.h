// libs/game/runetek5/camera/ICameraEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.systemheap

namespace jag::game {
    class ICameraEffect {
    public:
        // virtual methods in vtable order
        virtual ~ICameraEffect();
        virtual void __pure_slot_2() = 0;
        virtual void __pure_slot_3() = 0;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char>>& arg1);
        int GetEffectID() const;
        ICameraEffect(Type arg1, int arg2);

    private:
        Type field_8;
        int m_effectID;
        uint8_t _unknown_16[4];
    };

    // 0x100009e70: ICameraEffect::~ICameraEffect() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1000e5d50: ICameraEffect::GetEffectID() const has the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const

    // 0x10061c3c0
    ICameraEffect::ICameraEffect(ICameraEffect::Type arg1, int arg2) : field_8(arg1), m_effectID(arg2) {}

    // 0x10061d8a0
    void ICameraEffect::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "ICameraEffect.h",
                        39, "Not implemented");
    }

} // namespace jag::game

namespace jag::math {
    // 0x10061c670
    auto Vector4T<float>::SetToIdentity() {
        auto result;
        result = *PTR_IDENTITY_100ee6710;
        return result;
    }

} // namespace jag::math

// 0x10061c690
void acos(float arg1) {
    _acosf();
}
