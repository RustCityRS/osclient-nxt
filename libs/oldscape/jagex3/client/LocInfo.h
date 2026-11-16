// libs/oldscape/jagex3/client/LocInfo.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class LocInfo {
    public:
        bool IsSet() const;
        byte GetLevel() const;
        byte GetX() const;
        GetZ() const;
        GetLayer() const;
        LocInfo(long long);
        LocInfo* operator=(LocInfo&&);
        GetLocType() const;
        GetRotate() const;
        LocInfo(unsigned char, unsigned char, unsigned char, unsigned char, LocLayer,
                shared_ptr<configdecoder::LocType>);
        ~LocInfo();
        LocInfo(LocInfo&&);
        LocInfo(LocInfo const&);
        LocInfo();
        LocInfo* operator=(LocInfo const&);

        // data members, from how the methods use this: 24 bytes
        byte m_level;        // offset 0
        byte m_x;            // offset 1
        undefined1 m_z;      // offset 2
        undefined1 m_rotate; // offset 3
        undefined1 m_layer;  // offset 4
        char _unknown_5[3];
        shared_ptr field_8; // offset 8
    };

    // 0x1000b7670, 16 bytes, inline, placed by class name and debug map
    // LocInfo::IsSet() const
    bool LocInfo::IsSet() {
        return m_layer != '\x04';
    }

    // 0x1000b7680, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocInfo::GetLevel() const
    /* game::LocData::GetShape() const */

    byte game::LocData::GetShape() {
        return m_shape;
    }

    // 0x1000b7690, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocInfo::GetX() const
    /* game::LocData::GetRot() const */

    byte game::LocData::GetRot() {
        return m_rot;
    }

    // 0x1000b76a0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocInfo::GetZ() const
    /* ui::ComponentSwipeConfig::GetDirectionMask() const */

    undefined1 ui::ComponentSwipeConfig::GetDirectionMask() {
        return m_directionMask;
    }

    // 0x1000b76f0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocInfo::GetLayer() const
    /* ui::ComponentSwipeConfig::GetStopExponent() const */

    undefined1 ui::ComponentSwipeConfig::GetStopExponent() {
        return m_stopExponent;
    }

    // 0x1000b7930, 16 bytes, complete-object constructor, inline, placed by class name
    // LocInfo::LocInfo(long long): jumps straight to the base-object constructor

    // 0x1000b7940, 48 bytes, inline, placed by class name
    // LocInfo::operator=(LocInfo&&)
    /* LocInfo::TEMPNAMEPLACEHOLDERVALUE(LocInfo&&) */

    LocInfo* LocInfo::operator=(LocInfo* param_1) {
        byte bVar1;
        undefined1 uVar2;
        undefined1 uVar3;

        m_layer = param_1->m_layer;
        bVar1 = param_1->m_x;
        uVar2 = param_1->m_z;
        uVar3 = param_1->m_rotate;
        m_level = param_1->m_level;
        m_x = bVar1;
        m_z = uVar2;
        m_rotate = uVar3;
        shared_ptr<configdecoder::LocType>::operator=((shared_ptr<configdecoder::LocType>*)field_8,
                                                      (shared_ptr*)param_1->field_8);
        return this;
    }

    // 0x10011ac80, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocInfo::GetLocType() const
    /* midi2::MidiTask::GetCompletionTask() */

    MidiTask* midi2::MidiTask::GetCompletionTask() {
        long in_RSI;

        new (this) shared_ptr<dash3d::Decor>((shared_ptr*)(in_RSI + 8));
        return this;
    }

    // 0x10011aca0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocInfo::GetRotate() const
    /* ui::ComponentSwipeConfig::GetDeceleration() const */

    undefined1 ui::ComponentSwipeConfig::GetDeceleration() {
        return m_deceleration;
    }

    // 0x10011b790, 32 bytes, complete-object constructor, inline, placed by class name
    // LocInfo::LocInfo(unsigned char, unsigned char, unsigned char, unsigned char, LocLayer, shared_ptr<configdecoder::LocType>)
    void LocInfo::LocInfo() {
        LocInfo();
    }

    // 0x10011c9a0: the linker folded this into dash3d::ModelAppender::~ModelAppender(), which has identical code
    LocInfo::~LocInfo();

    // 0x100125030, 176 bytes, base-object constructor, inline, placed by class name
    // LocInfo::LocInfo(long long)
    void LocInfo::LocInfo(longlong param_1) {
        byte bVar1;
        undefined1 uVar2;
        int iVar4;
        shared_ptr* psVar5;

        bVar1 = dash3d::MousePickingHelper::GetEntityLevelFromTypecode(param_1);
        m_level = bVar1;
        bVar1 = dash3d::MousePickingHelper::GetEntityXFromTypecode(param_1);
        m_x = bVar1;
        uVar2 = dash3d::MousePickingHelper::GetEntityZFromTypecode(param_1);
        m_z = uVar2;
        m_rotate = 0;
        uVar2 = dash3d::MousePickingHelper::GetLocLayerFromTypecode(param_1);
        m_layer = uVar2;
        iVar4 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(param_1);
        psVar5 = (shared_ptr*)configdecoder::LocType::List(iVar4);
        new (field_8, psVar5) shared_ptr<dash3d::Decor>();
        if (!operator!=((shared_ptr*)field_8, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_locType != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/client/"
                      "LocInfo.h",
                      32, "Invalid LocType from typecode");
        }
    }

    // 0x10012a760: the linker folded this into eastl::pair<Font const, shared_ptr<jstring::PixfontGeneric> >::~pair(), which has identical code
    LocInfo::~LocInfo();

    // 0x1001307a0, 48 bytes, base-object constructor, inline, placed by class name
    // LocInfo::LocInfo(unsigned char, unsigned char, unsigned char, unsigned char, LocLayer, shared_ptr<configdecoder::LocType>)
    void LocInfo::LocInfo(byte param_1, byte param_2, undefined1 param_3, undefined1 param_4, undefined1 param_6,
                          shared_ptr* param_7) {
        m_level = param_1;
        m_x = param_2;
        m_z = param_3;
        m_rotate = param_4;
        m_layer = param_6;
        new (field_8, param_7) shared_ptr<dash3d::Decor>();
    }

    // 0x100146ac0, 16 bytes, complete-object constructor, inline, placed by class name
    // LocInfo::LocInfo(LocInfo&&): jumps straight to the base-object constructor

    // 0x100146ad0, 32 bytes, base-object constructor, inline, placed by class name
    // LocInfo::LocInfo(LocInfo&&)
    void LocInfo::LocInfo(LocInfo* param_1) {
        byte bVar1;
        undefined1 uVar2;
        undefined1 uVar3;

        m_layer = param_1->m_layer;
        bVar1 = param_1->m_x;
        uVar2 = param_1->m_z;
        uVar3 = param_1->m_rotate;
        m_level = param_1->m_level;
        m_x = bVar1;
        m_z = uVar2;
        m_rotate = uVar3;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)field_8, (shared_ptr*)param_1->field_8);
    }

    // 0x100147100, 16 bytes, complete-object constructor, inline, placed by class name
    // LocInfo::LocInfo(LocInfo const&): jumps straight to the base-object constructor

    // 0x100147110, 32 bytes, base-object constructor, inline, placed by class name
    // LocInfo::LocInfo(LocInfo const&)
    void LocInfo::LocInfo(LocInfo* param_1) {
        byte bVar1;
        undefined1 uVar2;
        undefined1 uVar3;

        m_layer = param_1->m_layer;
        bVar1 = param_1->m_x;
        uVar2 = param_1->m_z;
        uVar3 = param_1->m_rotate;
        m_level = param_1->m_level;
        m_x = bVar1;
        m_z = uVar2;
        m_rotate = uVar3;
        new (field_8, (shared_ptr*)param_1->field_8) shared_ptr<dash3d::Decor>();
    }

    // 0x1001a2bb0, 16 bytes, complete-object constructor, inline, placed by class name
    // LocInfo::LocInfo(): jumps straight to the base-object constructor

    // 0x1001a2fe0, 32 bytes, base-object constructor, inline, placed by class name
    // LocInfo::LocInfo()
    void LocInfo::LocInfo() {
        _func_decltype_nullptr* in_RSI;

        m_layer = 4;
        new (field_8, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1001a31a0, 48 bytes, inline, placed by class name
    // LocInfo::operator=(LocInfo const&)
    /* LocInfo::TEMPNAMEPLACEHOLDERVALUE(LocInfo const&) */

    LocInfo* LocInfo::operator=(LocInfo* param_1) {
        byte bVar1;
        undefined1 uVar2;
        undefined1 uVar3;

        m_layer = param_1->m_layer;
        bVar1 = param_1->m_x;
        uVar2 = param_1->m_z;
        uVar3 = param_1->m_rotate;
        m_level = param_1->m_level;
        m_x = bVar1;
        m_z = uVar2;
        m_rotate = uVar3;
        shared_ptr<configdecoder::LocType>::operator=((shared_ptr<configdecoder::LocType>*)field_8,
                                                      (shared_ptr*)param_1->field_8);
        return this;
    }

} // namespace jag::oldscape

namespace jag::ui {
    // 0x10011aca0: the linker folded this into oldscape::LocInfo::GetRotate() const, which has identical code
    ComponentSwipeConfig::GetDeceleration() const;

} // namespace jag::ui
