// libs/game/runetek5/config/objtype/ObjTypeCustomisation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ObjTypeCustomisation {
    public:
        void GetManAppearance() const;
        Option<float>* GetWomanAppearance() const;
        uint8_t* GetRecolourDest() const;
        uint8_t* GetRematerialDest() const;
        uint64_t operator==(const ObjTypeCustomisation& objTypeCustomisation) const;
        ObjTypeCustomisation(const shared_ptr<ObjType>& objType, PacketT<Array<unsigned char>>& arg2);

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        int field_16;
        uint8_t _unknown_20[12];
        Minimap field_32;
    };

    // 0x100497c90
    uint64_t ObjTypeCustomisation::operator==(const ObjTypeCustomisation& objTypeCustomisation) const {
        bool cVar1 = *this == objTypeCustomisation;
        if (((!cVar1) || (cVar1 = *field_32 == objTypeCustomisation.field_32, !cVar1)) ||
            (cVar1 = (*((field_32 + 32))) == (*((objTypeCustomisation.field_32 + 32))), !cVar1)) {
            return 0;
        }
        return (*((field_32 + 56))) == (*((objTypeCustomisation.field_32 + 56)));
    }

} // namespace jag::game
