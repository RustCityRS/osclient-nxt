// libs/game/runetek5/config/ConfigType.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100196be0
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(Array<unsigned char, BucketAllocatorEASTL>&& arg1)
        : Array<unsigned char, BucketAllocatorEASTL>() {
        *(uint64_t*)(this + 24) = 0;
        eastl::swap<Array<unsigned char, BucketAllocatorEASTL>>(*this, arg1);
    }

    // 0x100196e50
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::~PacketT() {}

    // 0x100197060
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit::~Bit() {
        *(unsigned long*)(*(long*)this + 24) = (unsigned long)(*(int*)(this + 8) + 7U >> 3);
    }

} // namespace jag

namespace jag::oldscape {
    // 0x100196bd0
    void
    PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(Array<unsigned char, BucketAllocatorEASTL>&& arg1) {
        PacketT(this, arg1);
    }

    // 0x100196e40
    PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::~PacketJ() {
        ~PacketT(this);
    }

} // namespace jag::oldscape

namespace jag::game {
    // 0x1001960c0
    uint8_t* ConfigType<VarType>::Decode(PacketT<Array<unsigned char>>& arg1) {
        bool cVar1;
        uint8_t* puVar2;
        int iVar3;

        do {
            cVar1 = arg1.g1();
            if (!cVar1) {
                iVar3 = 2;
                goto LAB_100196118;
            }
            puVar2 = (uint8_t*)slot2(arg1, cVar1);
        } while (puVar2 != DataStatus::NOTLOADED);
        iVar3 = 1;
        uint8_t* unaff_R14 = DataStatus::NOTLOADED;
    LAB_100196118:
        if (iVar3 != 1) {
            unaff_R14 = DataStatus::READY;
        }
        return unaff_R14;
    }

} // namespace jag::game

namespace jag::math {
    // 0x1001961b0
    Matrix44T<float>::Matrix44T(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
                                float arg8, float arg9, float arg10, float arg11, float arg12, float arg13, float arg14,
                                float arg15, float arg16) {
        Matrix44T(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15,
                  arg16);
    }

} // namespace jag::math
