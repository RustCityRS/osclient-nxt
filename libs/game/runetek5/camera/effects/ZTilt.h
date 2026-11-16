// libs/game/runetek5/camera/effects/ZTilt.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game::camera {
    class ZTilt : public ICameraEffect // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ZTilt();
        virtual void Update(float arg1);
        virtual void Apply(math::Matrix44T<float>& matrix44);
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char>>& arg1);
        virtual void ToString(eastl::fixed_string<char, 256>& str);
        ZTilt(int arg1, float arg2);
        ZTilt(int arg1, PacketT<Array<unsigned char>>& arg2);

    private:
        uint8_t _unknown_20[4];
    };

    // 0x10061d980
    void ZTilt::ToString(eastl::fixed_string<char, 256>& str) {
        str.sprintf("ZTitle (%f)", (double)field_16);
    }

} // namespace jag::game::camera
