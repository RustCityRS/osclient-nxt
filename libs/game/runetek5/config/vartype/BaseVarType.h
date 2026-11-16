// libs/game/runetek5/config/vartype/BaseVarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class BaseVarType {
    public:
        // virtual methods in vtable order
        virtual ~BaseVarType();
        GetByID(unsigned int);
        void Initialise();
        void Destroy();
        BaseVarType();
        static /* 8 bytes */ INTEGER;
        static /* 8 bytes */ LONG;
        static /* 8 bytes */ STRING;
        static /* 8 bytes */ COORDFINE;

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class BaseVarTypeCoordFine {
    public:
        // virtual methods in vtable order
        virtual ~BaseVarTypeCoordFine();
        virtual GetSerialID() const;
        virtual void Decode(VarValue&, PacketT<Array<unsigned char, eastl::allocator>>&) const;
        virtual void Decode(VarValue&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&) const;
        virtual void Encode(VarValue const&, PacketT<Array<unsigned char, eastl::allocator>>&) const;
        virtual void Encode(VarValue const&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&) const;
        BaseVarTypeCoordFine();

        // data members, from how the methods use this: 8 bytes
        char _unknown_0[8];
    };

    class BaseVarTypeInteger {
    public:
        // virtual methods in vtable order
        virtual ~BaseVarTypeInteger();
        virtual GetSerialID() const;
        virtual void Decode(VarValue&, PacketT<Array<unsigned char, eastl::allocator>>&) const;
        virtual void Decode(VarValue&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&) const;
        virtual void Encode(VarValue const&, PacketT<Array<unsigned char, eastl::allocator>>&) const;
        virtual void Encode(VarValue const&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&) const;
        BaseVarTypeInteger();

        // data members, from how the methods use this: 8 bytes
        char _unknown_0[8];
    };

    class BaseVarTypeLong {
    public:
        // virtual methods in vtable order
        virtual ~BaseVarTypeLong();
        virtual GetSerialID() const;
        virtual void Decode(VarValue&, PacketT<Array<unsigned char, eastl::allocator>>&) const;
        virtual void Decode(VarValue&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&) const;
        virtual void Encode(VarValue const&, PacketT<Array<unsigned char, eastl::allocator>>&) const;
        virtual void Encode(VarValue const&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&) const;
        BaseVarTypeLong();

        // data members, from how the methods use this: 8 bytes
        char _unknown_0[8];
    };

    class BaseVarTypeString {
    public:
        // virtual methods in vtable order
        virtual ~BaseVarTypeString();
        virtual GetSerialID() const;
        virtual void Decode(VarValue&, PacketT<Array<unsigned char, eastl::allocator>>&) const;
        virtual void Decode(VarValue&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&) const;
        virtual void Encode(VarValue const&, PacketT<Array<unsigned char, eastl::allocator>>&) const;
        virtual void Encode(VarValue const&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&) const;
        BaseVarTypeString();

        // data members, from how the methods use this: 8 bytes
        char _unknown_0[8];
    };

    // 0x100125220, 128 bytes, inline, placed by class name and debug map
    // BaseVarType::GetByID(unsigned int)
    undefined8 BaseVarType::GetByID(uint param_1) {
        undefined8* puVar1;

        switch (param_1) {
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
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/vartype/BaseVarType.h",
                            46, "BaseVarType: Invalid type requested!");
        }
        return *puVar1;
    }

    // 0x1004cd7b0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // BaseVarTypeInteger::BaseVarTypeInteger(): jumps straight to the base-object constructor

    // 0x1004cd7c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // BaseVarTypeLong::BaseVarTypeLong(): jumps straight to the base-object constructor

    // 0x1004cd7d0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // BaseVarTypeString::BaseVarTypeString(): jumps straight to the base-object constructor

    // 0x1004cd7e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // BaseVarTypeCoordFine::BaseVarTypeCoordFine(): jumps straight to the base-object constructor

    // 0x1004d1e90, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // BaseVarTypeInteger::BaseVarTypeInteger()
    void BaseVarTypeInteger::BaseVarTypeInteger() {
        new (this) BaseVarType();
        *this = (BaseVarTypeInteger)&PTR__ScriptOption_100f01fc8;
    }

    // 0x1004d1eb0, 32 bytes, base-object constructor, inline, placed by class name
    // BaseVarType::BaseVarType()
    void BaseVarType::BaseVarType() {
        field_0 = PTR_vtable_100ee7ec8 + 16;
    }

    // 0x1004d1ed0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // BaseVarTypeLong::BaseVarTypeLong()
    void BaseVarTypeLong::BaseVarTypeLong() {
        new (this) BaseVarType();
        *this = (BaseVarTypeLong)&PTR__ScriptOption_100f02010;
    }

    // 0x1004d1ef0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // BaseVarTypeString::BaseVarTypeString()
    void BaseVarTypeString::BaseVarTypeString() {
        new (this) BaseVarType();
        *this = (BaseVarTypeString)&PTR__ScriptOption_100f02058;
    }

    // 0x1004d1f10, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // BaseVarTypeCoordFine::BaseVarTypeCoordFine()
    void BaseVarTypeCoordFine::BaseVarTypeCoordFine() {
        new (this) BaseVarType();
        *this = (BaseVarTypeCoordFine)&PTR__ScriptOption_100f020a0;
    }

} // namespace jag::game

namespace jag::oldscape::loottracker {
    // 0x1001259c0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SourceItem::SourceItem(SourceItem const&)
    void SourceItem::SourceItem(SourceItem* param_1) {
        new (this) eastl::string(param_1);
        field_40 = param_1->field_40;
        field_32 = param_1->field_32;
    }

} // namespace jag::oldscape::loottracker

namespace jag::oldscape {
    // 0x100126050, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PacketJ<Array<unsigned char, eastl::allocator> >::PacketJ()
    /* PacketT<Array<unsigned char, eastl::allocator> >::PacketT() */

    void
    PacketT<Array<unsigned char, eastl::allocator>>::PacketT(PacketT<Array<unsigned char, eastl::allocator>>* this) {
        new (this) oldscape::sound::BitUnpacker();
    }

} // namespace jag::oldscape
