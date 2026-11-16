// libs/oldscape/jagex3/client/HookArg.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class HookArg {
    public:
        HookArg(rs2lib::worldmap::MapElementPosition const&);
        ~HookArg();
        uint GetArgType() const;
        ulong operator==(HookArg const&) const;
        HookArg(int);
        HookArg* operator=(HookArg&&);
        IntValue() const;
        HookArg(eastl::string const&);
        HookArg(eastl::string&&);
        StrValue() const;
        HookArg();
        MapPos() const;
        HookArg(HookArg const&);
        HookArg(HookArg&&);

        // data members, from how the methods use this: 68 bytes
        uint m_argType; // offset 0
        char _unknown_4[36];
        MapElementPosition field_40; // offset 40
        char _unknown_64[4];
    };

    // 0x100026c10, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HookArg::HookArg(rs2lib::worldmap::MapElementPosition const&): jumps straight to the base-object constructor

    // 0x10002ec30, 80 bytes, base-object constructor, inline, placed by class name
    // HookArg::HookArg(rs2lib::worldmap::MapElementPosition const&)
    void HookArg::HookArg(MapElementPosition* param_1) {
        m_argType = 3;
        new (&field_8) eastl::string();
        new (field_40, param_1) rs2lib::worldmap::MapElementPosition();
    }

    // 0x100059090: the linker folded this into FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    HookArg::~HookArg();

    // 0x1000590a0: the linker folded this into FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    HookArg::~HookArg();

    // 0x1000b9960: the linker folded this into ScriptVarType::GetID() const, which has identical code
    uint HookArg::GetArgType() const;

    // 0x10014f2d0, 160 bytes, inline, placed by class name
    // HookArg::operator==(HookArg const&) const
    /* HookArg::TEMPNAMEPLACEHOLDERVALUE(HookArg const&) const */

    ulong HookArg::operator==(HookArg* param_1) {
        bool bVar1;
        char cVar2;
        uint uVar3;
        undefined7 extraout_var;
        ulong uVar4;

        uVar3 = param_1->m_argType;
        if (uVar3 == m_argType) {
            if (uVar3 != 3) {
                if (uVar3 == 2) {
                    bVar1 = eastl::operator==((basic_string*)&field_8, (basic_string*)&param_1->field_8);
                    uVar4 = CONCAT71(extraout_var, bVar1) & 4294967295;
                } else {
                    if (uVar3 != 1) {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/jagex3/client/HookArg.h",
                                        139, "HookArg has unknown argType == returning false");
                    }
                    uVar4 = CONCAT71((int7)((ulong)this >> 8), *(int*)field_40 == *(int*)param_1->field_40);
                }
                goto LAB_10014f348;
            }
            if (*(int*)field_40 == *(int*)param_1->field_40) {
                cVar2 = game::CoordGrid::operator==((CoordGrid*)(field_40 + 4), (CoordGrid*)(param_1->field_40 + 4));
                if (cVar2 != '\0') {
                    uVar3 =
                        game::CoordGrid::operator==((CoordGrid*)(field_40 + 16), (CoordGrid*)(param_1->field_40 + 16));
                    uVar4 = (ulong)uVar3;
                    goto LAB_10014f348;
                }
            }
        }
        uVar4 = 0;
    LAB_10014f348:
        return uVar4 & 4294967295;
    }

    // 0x1001829b0, 16 bytes, complete-object constructor, inline, placed by class name
    // HookArg::HookArg(int): jumps straight to the base-object constructor

    // 0x100182a90, 96 bytes, inline, placed by class name
    // HookArg::operator=(HookArg&&)
    /* HookArg::TEMPNAMEPLACEHOLDERVALUE(HookArg&&) */

    HookArg* HookArg::operator=(HookArg* param_1) {
        uint uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        uVar1 = param_1->m_argType;
        if (uVar1 == 3) {
            uVar2 = *(undefined8*)param_1->field_40;
            uVar3 = *(undefined8*)(param_1->field_40 + 8);
            uVar4 = *(undefined8*)(param_1->field_40 + 20);
            *(undefined8*)(field_40 + 12) = *(undefined8*)(param_1->field_40 + 12);
            *(undefined8*)(field_40 + 20) = uVar4;
            *(undefined8*)field_40 = uVar2;
            *(undefined8*)(field_40 + 8) = uVar3;
        } else {
            if (uVar1 == 2) {
                eastl::string::operator=((eastl::string*)&field_8, (basic_string*)&param_1->field_8);
                goto LAB_100182ae1;
            }
            if (uVar1 != 1)
                goto LAB_100182ae1;
            *(undefined4*)field_40 = *(undefined4*)param_1->field_40;
        }
        eastl::string::clear();
    LAB_100182ae1:
        m_argType = param_1->m_argType;
        return this;
    }

    // 0x100182b80, 64 bytes, inline, placed by class name
    // HookArg::IntValue() const
    undefined4 HookArg::IntValue() {
        if (m_argType != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_argType == INTEGER",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/client/"
                      "HookArg.h",
                      146, (char*)0);
        }
        return *(undefined4*)field_40;
    }

    // 0x100182c20, 16 bytes, complete-object constructor, inline, placed by class name
    // HookArg::HookArg(eastl::string const&): jumps straight to the base-object constructor

    // 0x100182c20: the linker folded this into HookArg::HookArg(eastl::string const&), which has identical code
    HookArg::HookArg(eastl::string&&);

    // 0x100182d00, 64 bytes, inline, placed by class name
    // HookArg::StrValue() const
    undefined1* HookArg::StrValue() {
        if (m_argType != 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_argType == STRING",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/client/"
                      "HookArg.h",
                      163, (char*)0);
        }
        return &field_8;
    }

    // 0x1001838e0, 16 bytes, complete-object constructor, inline, placed by class name
    // HookArg::HookArg(): jumps straight to the base-object constructor

    // 0x100190ac0, 64 bytes, inline, placed by class name
    // HookArg::MapPos() const
    undefined1* HookArg::MapPos() {
        if (m_argType != 3) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_argType == MAPPOS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/client/"
                      "HookArg.h",
                      157, (char*)0);
        }
        return field_40;
    }

    // 0x100197dc0, 48 bytes, base-object constructor, inline, placed by class name
    // HookArg::HookArg(int)
    void HookArg::HookArg(int param_1) {
        m_argType = 1;
        new (&field_8) eastl::string();
        *(int*)field_40 = param_1;
    }

    // 0x100197df0, 32 bytes, base-object constructor, inline, placed by class name
    // HookArg::HookArg(eastl::string const&)
    /* HookArg::HookArg(eastl::string&&) */

    void HookArg::HookArg(basic_string* param_1) {
        m_argType = 2;
        new (&field_8, param_1) eastl::string();
    }

    // 0x100197df0: the linker folded this into HookArg::HookArg(eastl::string const&), which has identical code
    HookArg::HookArg(eastl::string&&);

    // 0x100197e30, 16 bytes, complete-object constructor, inline, placed by class name
    // HookArg::HookArg(HookArg const&): jumps straight to the base-object constructor

    // 0x100197e40, 80 bytes, base-object constructor, inline, placed by class name
    // HookArg::HookArg(HookArg const&)
    void HookArg::HookArg(HookArg* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        m_argType = param_1->m_argType;
        new (&field_8, (basic_string*)&param_1->field_8) eastl::string();
        if (param_1->m_argType == 3) {
            uVar1 = *(undefined8*)param_1->field_40;
            uVar2 = *(undefined8*)(param_1->field_40 + 8);
            uVar3 = *(undefined8*)(param_1->field_40 + 20);
            *(undefined8*)(field_40 + 12) = *(undefined8*)(param_1->field_40 + 12);
            *(undefined8*)(field_40 + 20) = uVar3;
            *(undefined8*)field_40 = uVar1;
            *(undefined8*)(field_40 + 8) = uVar2;
        } else if (param_1->m_argType == 1) {
            *(undefined4*)field_40 = *(undefined4*)param_1->field_40;
        }
    }

    // 0x1001981b0, 32 bytes, base-object constructor, inline, placed by class name
    // HookArg::HookArg()
    void HookArg::HookArg() {
        m_argType = 0;
        new (&field_8) eastl::string();
    }

    // 0x1001abbd0, 16 bytes, complete-object constructor, inline, placed by class name
    // HookArg::HookArg(HookArg&&): jumps straight to the base-object constructor

    // 0x1001abbe0, 80 bytes, base-object constructor, inline, placed by class name
    // HookArg::HookArg(HookArg&&)
    void HookArg::HookArg(HookArg* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        m_argType = param_1->m_argType;
        new (&field_8, (basic_string*)&param_1->field_8) eastl::string();
        if (param_1->m_argType == 3) {
            uVar1 = *(undefined8*)param_1->field_40;
            uVar2 = *(undefined8*)(param_1->field_40 + 8);
            uVar3 = *(undefined8*)(param_1->field_40 + 20);
            *(undefined8*)(field_40 + 12) = *(undefined8*)(param_1->field_40 + 12);
            *(undefined8*)(field_40 + 20) = uVar3;
            *(undefined8*)field_40 = uVar1;
            *(undefined8*)(field_40 + 8) = uVar2;
        } else if (param_1->m_argType == 1) {
            *(undefined4*)field_40 = *(undefined4*)param_1->field_40;
        }
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100027480, 48 bytes, inline, placed by debug map only (low confidence)
    // bool operator!=<oldscape::rs2lib::worldmap::WorldmapAreaMetadata, oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> const&, shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(shared_ptr<oldscape::ClientPlayer> const&,
   shared_ptr<oldscape::ClientPlayer> const&) */

    bool operator!=(shared_ptr* param_1, shared_ptr* param_2) {
        long lVar1;
        long lVar2;

        lVar1 = param_1->end();
        lVar2 = param_2->end();
        return lVar1 != lVar2;
    }

} // namespace jag
