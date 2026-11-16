// libs/oldscape/jagex3/core/bytepacking/superpacket.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::core {
    class SuperPacket {
    public:
        void SetEnc(Isaac&);
        SuperPacket(SuperPacket&&);
        SuperPacket* operator=(SuperPacket&&);
        SuperPacket();
        ~SuperPacket();
        void pHead(int);
        void GBitStart();
        void gBit(int);
        void BitsLeft(int);
        void GBitEnd();

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[24];
        ulong field_24; // offset 24
        char _unknown_32[8];
        Isaac* m_pEnc; // offset 40
    };

    // 0x100126230, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SuperPacket::SuperPacket(SuperPacket&&): jumps straight to the base-object constructor

    // 0x100126240, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // SuperPacket::SuperPacket(SuperPacket&&)
    void SuperPacket::SuperPacket(SuperPacket* param_1) {
        new (this) PacketJ<Array<unsigned char, BucketAllocatorEASTL>>(param_1);
        new (&field_32, (unique_ptr*)&param_1->field_32)
            std::unique_ptr<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit,
                            std::default_delete<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit>>();
        m_pEnc = param_1->m_pEnc;
    }

    // 0x1001263b0, 48 bytes, inline, placed by class name and debug map
    // SuperPacket::operator=(SuperPacket&&)
    /* SuperPacket::TEMPNAMEPLACEHOLDERVALUE(SuperPacket&&) */

    SuperPacket* SuperPacket::operator=(SuperPacket* param_1) {
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::operator=(
            (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)this, (PacketJ*)param_1);
        std::unique_ptr<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit,
                        std::default_delete<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit>>::
        operator=((unique_ptr<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit,
                              std::default_delete<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit>>*)&field_32,
                  (unique_ptr*)&param_1->field_32);
        m_pEnc = param_1->m_pEnc;
        return this;
    }

    // 0x100126510, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SuperPacket::SuperPacket(): jumps straight to the base-object constructor

    // 0x100126520, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // SuperPacket::SuperPacket()
    void SuperPacket::SuperPacket() {
        new (this) PacketT<Array<unsigned char, BucketAllocatorEASTL>>();
        std::unique_ptr<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit,
                        std::default_delete<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit>>::
            unique_ptr<true, void>(
                (unique_ptr<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit,
                            std::default_delete<PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit>>*)&field_32);
        m_pEnc = (Isaac*)0;
    }

    // 0x100196f80, 16 bytes, complete-object destructor, inline, placed by class name
    // SuperPacket::~SuperPacket(): jumps straight to the base-object destructor

    // 0x100196f90, 48 bytes, base-object destructor, inline, placed by class name
    // SuperPacket::~SuperPacket()
    void SuperPacket::~SuperPacket() {
        (&field_32)->~unique_ptr();
        ~PacketT();
    }

    // 0x100292f10, 80 bytes, inline, placed by class name
    // SuperPacket::pHead(int)
    void SuperPacket::pHead(int param_1) {
        if (m_pEnc == (Isaac*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pIsaac != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/core/"
                      "bytepacking/superpacket.h",
                      24, (char*)0);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1Isaac<unsigned char>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, (uchar)param_1, m_pEnc);
    }

} // namespace jag::oldscape::core

namespace jag::oldscape {
    // 0x100126270, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::PacketJ(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&&)
    void PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::PacketJ(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* this, PacketJ* param_1) {
        new (this) PacketT<Array<unsigned char, BucketAllocatorEASTL>>(param_1);
    }

    // 0x1001263e0, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::operator=(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&&)
    /* PacketJ<Array<unsigned char, BucketAllocatorEASTL>
   >::TEMPNAMEPLACEHOLDERVALUE(PacketJ<Array<unsigned char,
   BucketAllocatorEASTL> >&&) */

    PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::operator=(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* this, PacketJ* param_1) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::operator=(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, (PacketT*)param_1);
        return this;
    }

    // 0x100126550, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::PacketJ()
    /* PacketT<Array<unsigned char, BucketAllocatorEASTL> >::PacketT() */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        PacketT(this);
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100126290, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::PacketT(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&&)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, PacketT* param_1) {
        new (this) Array<unsigned char, BucketAllocatorEASTL>(param_1);
        *(undefined8*)(this + 24) = *(undefined8*)(param_1 + 24);
        *(undefined8*)(param_1 + 24) = 0;
    }

    // 0x100126430, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::operator=(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&&)
    /* PacketT<Array<unsigned char, BucketAllocatorEASTL>
   >::TEMPNAMEPLACEHOLDERVALUE(PacketT<Array<unsigned char, BucketAllocatorEASTL>
   >&&) */

    PacketT<Array<unsigned char, BucketAllocatorEASTL>>* PacketT<Array<unsigned char, BucketAllocatorEASTL>>::operator=(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, PacketT* param_1) {
        swap(this, param_1);
        return this;
    }

    // 0x100126450, 48 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::swap(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::swap(PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this,
                                                              PacketT* param_1) {
        eastl::swap<oldscape::graphics::Pix8*>((Pix8**)(this + 24), (Pix8**)(param_1 + 24));
        swap(param_1);
    }

} // namespace jag

// 0x1001266f0, 16 bytes, placed by debug map only (low confidence)
// __libcpp_strchr(char const*, int)
void __libcpp_strchr(char* param_1, int param_2) {
    _strchr(param_1, 10);
}
