// projects/osclient/highlighting/HighlightChannelProperties.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class HighlightChannelProperties {
    public:
        IsEnabled() const;
        HighlightChannelProperties();
        CreateHighlightData(HighlightChannelProperties const*);

        // data members, from how the methods use this: 11 bytes
        char _unknown_0[10];
        undefined1 field_10; // offset 10
    };

    // 0x10000e730, 48 bytes, inline, placed by class name and debug map
    // HighlightChannelProperties::IsEnabled() const
    undefined4 HighlightChannelProperties::IsEnabled() {
        char cVar1;
        undefined4 uVar2;

        cVar1 = HasModelHighlight();
        uVar2 = 1;
        if (cVar1 == '\0') {
            uVar2 = HasTileHighlight();
        }
        return uVar2;
    }

    // 0x10002a850, 16 bytes, complete-object constructor, inline, placed by class name
    // HighlightChannelProperties::HighlightChannelProperties(): jumps straight to the base-object constructor

    // 0x10002a860, 32 bytes, base-object constructor, inline, placed by class name
    // HighlightChannelProperties::HighlightChannelProperties()
    void HighlightChannelProperties::HighlightChannelProperties() {
        new (this) dash3d::EntityHighlight();
        field_10 = 255;
    }

    // 0x1000de450, 80 bytes, inline, placed by class name and debug map
    // HighlightChannelProperties::CreateHighlightData(HighlightChannelProperties const*)
    undefined1[16] HighlightChannelProperties::CreateHighlightData(HighlightChannelProperties* param_1) {
        undefined1 auVar1[16];
        EntityHighlight local_18;

        if (param_1 == (HighlightChannelProperties*)0) {
            local_18.field_8 = 0;
            local_18.field_9 = '\0';
            local_18.field_0 = 0;
            local_18.field_2 = 0;
            local_18.field_4 = '\0';
            local_18._5_1_ = 0;
            local_18.field_6 = 0;
            local_18._7_1_ = 0;
            new (&local_18) dash3d::EntityHighlight();
        } else {
            local_18.field_8 = param_1->field_8;
            local_18.field_9 = param_1->field_9;
            local_18.field_0 = *(undefined2*)&param_1->field_0;
            local_18.field_2 = *(short*)&param_1->field_2;
            local_18.field_4 = param_1->field_4;
            local_18._5_1_ = param_1->field_5;
            local_18.field_6 = param_1->field_6;
            local_18._7_1_ = param_1->field_7;
        }
        auVar1[8] = local_18.field_8;
        auVar1[9] = local_18.field_9;
        auVar1._0_2_ = local_18.field_0;
        auVar1._2_2_ = local_18.field_2;
        auVar1[4] = local_18.field_4;
        auVar1[5] = local_18._5_1_;
        auVar1[6] = local_18.field_6;
        auVar1[7] = local_18._7_1_;
        auVar1._10_6_ = 0;
        return auVar1;
    }

    // 0x1000de650, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ClientEntityID::ClientEntityID(bool, int): jumps straight to the base-object constructor

} // namespace jag::oldscape

namespace jag {
    // 0x1000de620, 32 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr<oldscape::dash3d::ModelSource> static_pointer_cast<oldscape::dash3d::ModelSource, shared_ptr<oldscape::ClientPlayer> >(shared_ptr<oldscape::ClientPlayer> const&)
    /* shared_ptr<oldscape::ClientEntity>
   static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>
   >(shared_ptr<oldscape::ClientNpc> const&) */

    shared_ptr*
    static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(shared_ptr* __return_storage_ptr__,
                                                                                 jag* this, shared_ptr* param_1) {
        new (__return_storage_ptr__) shared_ptr<oldscape::dash3d::Decor>(this);
        return __return_storage_ptr__;
    }

} // namespace jag
