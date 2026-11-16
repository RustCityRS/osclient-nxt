// libs/oldscape/rs2lib/worldmap/BlendedGround.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class BlendedGround {
    public:
        ~BlendedGround();
        BlendedGround();
        auto FromPNG(PacketJ<Array<unsigned char>>* packetJ);
        unsigned int GetBlendedGroundColour(int arg1, int arg2);
        BlendedGround(SharedArray<unsigned int>& sharedArray);

    private:
        unsigned long field_0;
        uint8_t _unknown_8[1];
    };

    // 0x1001327e0: BlendedGround::~BlendedGround() has the same machine code as graphics::Pix32::~Pix32()

    // 0x10020b380
    BlendedGround::BlendedGround() : SharedArray() {}

    // 0x10020b3a0
    auto BlendedGround::FromPNG(PacketJ<Array<unsigned char>>* packetJ) {
        SharedArray<unsigned int>* sharedArray;
        ReturnValue local_30;
        ReturnValue local_20;

        if (packetJ == nullptr) {
            result = std::make_unique<BlendedGround>();
        } else {
            local_30 = javapal::Pix32Tools::createPix32FromPNGData(*packetJ);
            sharedArray = (SharedArray<unsigned int>*)local_30.operator->();
            local_20 = std::make_unique<BlendedGround, SharedArray<unsigned int>&>(*sharedArray);
            auto result(local_20);
        }
        return result;
    }

    // 0x10020b4f0
    unsigned int BlendedGround::GetBlendedGroundColour(int arg1, int arg2) {
        unsigned int* puVar1 = (unsigned int*)(*this)[(long)(arg2 * 64 + arg1)];
        return *puVar1 | 4278190080;
    }

    // 0x10020b510
    BlendedGround::BlendedGround(SharedArray<unsigned int>& sharedArray) : SharedArray() {
        ref_assign(sharedArray);
    }

} // namespace jag::oldscape::rs2lib::worldmap
