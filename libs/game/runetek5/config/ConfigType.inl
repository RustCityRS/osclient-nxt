// libs/game/runetek5/config/ConfigType.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100196be0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::PacketT(Array<unsigned char, BucketAllocatorEASTL>&&)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, Array* param_1) {
        new (this) Array<unsigned char, BucketAllocatorEASTL>();
        *(undefined8*)(this + 24) = 0;
        eastl::swap<Array<unsigned char, BucketAllocatorEASTL>>((Array*)this, param_1);
    }

    // 0x100196e50, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::~PacketT()
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::~PacketT(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        ~Array();
    }

    // 0x100197050, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::Bit::~Bit(): jumps straight to the base-object destructor

    // 0x100197060, 32 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::Bit::~Bit()
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit::~Bit() {
        *(ulong*)(*(long*)this + 24) = (ulong)(*(int*)(this + 8) + 7U >> 3);
    }

} // namespace jag

namespace jag::oldscape {
    // 0x100196bd0, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::PacketT(Array<unsigned char, BucketAllocatorEASTL>&&)
    /* PacketT<Array<unsigned char, BucketAllocatorEASTL> >::PacketT(Array<unsigned
   char, BucketAllocatorEASTL>&&) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, Array* param_1) {
        PacketT(this, param_1);
    }

    // 0x100196e40, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::~PacketJ()
    /* PacketT<Array<unsigned char, BucketAllocatorEASTL> >::~PacketT() */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::~PacketT(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        ~PacketT(this);
    }

} // namespace jag::oldscape

namespace jag::game {
    // 0x1001960c0, 128 bytes, inline, placed by class name and debug map
    // ConfigType<VarType>::Decode(PacketT<Array<unsigned char, eastl::allocator> >&)
    /* ConfigType<VarBitType>::Decode(PacketT<Array<unsigned char,
   eastl::allocator> >&) */

    undefined* ConfigType<VarBitType>::Decode(PacketT* param_1) {
        char cVar1;
        undefined* puVar2;
        int iVar3;
        undefined* unaff_R14;

        do {
            cVar1 = param_1->g1();
            if (cVar1 == '\0') {
                iVar3 = 2;
                goto LAB_100196118;
            }
            puVar2 = (undefined*)(**(code**)(*(long*)this + 16))(this, param_1, cVar1);
        } while (puVar2 != DataStatus::NOTLOADED);
        iVar3 = 1;
        unaff_R14 = DataStatus::NOTLOADED;
    LAB_100196118:
        if (iVar3 != 1) {
            unaff_R14 = DataStatus::READY;
        }
        return unaff_R14;
    }

} // namespace jag::game

namespace jag::math {
    // 0x1001961b0, 128 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Matrix44T(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)
    void Matrix44T<float>::Matrix44T(float param_1, float param_2, float param_3, float param_4, float param_5,
                                     float param_6, float param_7, float param_8, float param_9, float param_10,
                                     float param_11, float param_12, float param_13, float param_14, float param_15,
                                     float param_16) {
        Matrix44T(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10,
                  param_11, param_12, param_13, param_14, param_15, param_16);
    }

} // namespace jag::math
