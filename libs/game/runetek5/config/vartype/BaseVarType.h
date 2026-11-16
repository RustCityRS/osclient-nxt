// libs/game/runetek5/config/vartype/BaseVarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class BaseVarType {
    public:
        // virtual methods in vtable order
        virtual ~BaseVarType();
        void GetByID(unsigned int arg1);
        void Initialise();
        void Destroy();
        BaseVarType();
        static int64_t INTEGER;
        static int64_t LONG;
        static int64_t STRING;
        static int64_t COORDFINE;
    };

    class BaseVarTypeCoordFine {
    public:
        // virtual methods in vtable order
        virtual ~BaseVarTypeCoordFine();
        virtual uint64_t GetSerialID() const;
        virtual void Decode(VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        virtual void Decode(VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        virtual void Encode(const VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        virtual void Encode(const VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        BaseVarTypeCoordFine();
    };

    class BaseVarTypeInteger {
    public:
        // virtual methods in vtable order
        virtual ~BaseVarTypeInteger();
        virtual uint64_t GetSerialID() const;
        virtual void Decode(VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        virtual void Decode(VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        virtual void Encode(const VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        virtual void Encode(const VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        BaseVarTypeInteger();
    };

    class BaseVarTypeLong {
    public:
        // virtual methods in vtable order
        virtual ~BaseVarTypeLong();
        virtual uint64_t GetSerialID() const;
        virtual void Decode(VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        virtual void Decode(VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        virtual void Encode(const VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        virtual void Encode(const VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        BaseVarTypeLong();
    };

    class BaseVarTypeString {
    public:
        // virtual methods in vtable order
        virtual ~BaseVarTypeString();
        virtual uint64_t GetSerialID() const;
        virtual void Decode(VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        virtual void Decode(VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        virtual void Encode(const VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        virtual void Encode(const VarValue& varValue, PacketT<Array<unsigned char>>& arg2) const;
        BaseVarTypeString();
    };

    // 0x100125220
    void BaseVarType::GetByID(unsigned int arg1) {
        uint64_t* puVar1;

        switch (arg1) {
        case 0:
            puVar1 = &INTEGER;
            break;
        case 1:
            puVar1 = &LONG;
            break;
        case 2:
            puVar1 = &STRING;
            break;
        case 3:
            puVar1 = &COORDFINE;
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/vartype/BaseVarType.h",
                            46, "BaseVarType: Invalid type requested!");
        }
        return *puVar1;
    }

    // 0x1004d1e90
    BaseVarTypeInteger::BaseVarTypeInteger() : BaseVarType() {}

    // 0x1004d1eb0
    BaseVarType::BaseVarType() {}

    // 0x1004d1ed0
    BaseVarTypeLong::BaseVarTypeLong() : BaseVarType() {}

    // 0x1004d1ef0
    BaseVarTypeString::BaseVarTypeString() : BaseVarType() {}

    // 0x1004d1f10
    BaseVarTypeCoordFine::BaseVarTypeCoordFine() : BaseVarType() {}

} // namespace jag::game

namespace jag::oldscape::loottracker {
    // 0x1001259c0
    SourceItem::SourceItem(const SourceItem& sourceItem)
        : eastl::string(sourceItem), field_40(sourceItem.field_40), field_32(sourceItem.field_32) {}

} // namespace jag::oldscape::loottracker

namespace jag::oldscape {
    // 0x100126050
    PacketJ<Array<unsigned char>>::PacketJ() : oldscape::sound::BitUnpacker() {}

} // namespace jag::oldscape
