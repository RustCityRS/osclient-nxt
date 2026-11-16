// libs/game/runetek5/config/objtype/ObjTypeCustomisation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ObjTypeCustomisation {
    public:
        GetManAppearance() const;
        GetWomanAppearance() const;
        GetRecolourDest() const;
        GetRematerialDest() const;
        operator==(ObjTypeCustomisation const&) const;
        ObjTypeCustomisation(shared_ptr<ObjType> const&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 26160 bytes
        undefined4 field_0; // offset 0
        int field_4;        // offset 4
        undefined4 field_8; // offset 8
        int field_12;       // offset 12
        int field_16;       // offset 16
        char _unknown_20[12];
        Minimap field_32; // offset 32
    };

    // 0x100497c90, 96 bytes, inline, placed by class name and debug map
    // ObjTypeCustomisation::operator==(ObjTypeCustomisation const&) const
    /* ObjTypeCustomisation::TEMPNAMEPLACEHOLDERVALUE(ObjTypeCustomisation const&)
   const */

    undefined8 ObjTypeCustomisation::operator==(ObjTypeCustomisation* param_1) {
        char cVar1;
        undefined8 uVar2;

        cVar1 = ObjAppearanceData::operator==((ObjAppearanceData*)this, (ObjAppearanceData*)param_1);
        if (((cVar1 == '\0') || (cVar1 = ObjAppearanceData::operator==((ObjAppearanceData*)field_32,
                                                                       (ObjAppearanceData*)param_1->field_32),
                                 cVar1 == '\0')) ||
            (cVar1 = Array<unsigned short, eastl::allocator>::operator==(
                 (Array<unsigned short, eastl::allocator>*)(field_32 + 32), (Array*)(param_1->field_32 + 32)),
             cVar1 == '\0')) {
            return 0;
        }
        uVar2 = Array<unsigned short, eastl::allocator>::operator==(
            (Array<unsigned short, eastl::allocator>*)(field_32 + 56), (Array*)(param_1->field_32 + 56));
        return uVar2;
    }

} // namespace jag::game
