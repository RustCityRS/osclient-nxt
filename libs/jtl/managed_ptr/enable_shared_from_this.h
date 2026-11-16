// libs/jtl/managed_ptr/enable_shared_from_this.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::enable_shared_from_this {
    // 0x1001b2c80, 80 bytes, inline, placed by class name and debug map
    // enable_shared_from_this<game::ConfigType<game::VarType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::VarType> > const&)
    void enable_shared_from_this<game::ConfigType<game::VarType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::VarType>>::operator=((weak_ptr<game::ConfigType<game::VarType>>*)this, param_1);
    }

    // 0x1003efcd0, 32 bytes, inline, placed by class name
    // enable_shared_from_this<ObjStackEntity>::shared_from_this()
    /* enable_shared_from_this<PathingEntity>::shared_from_this() */

    enable_shared_from_this<PathingEntity>* enable_shared_from_this<PathingEntity>::shared_from_this() {
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        return this;
    }

    // 0x10045d640, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::LocationInterface>::__internal_set_weak_ptr(weak_ptr<game::LocationInterface> const&)
    void enable_shared_from_this<game::LocationInterface>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::LocationInterface>::operator=((weak_ptr<game::LocationInterface>*)this, param_1);
    }

    // 0x10046cce0, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::World>::__internal_set_weak_ptr(weak_ptr<game::World> const&)
    void enable_shared_from_this<game::World>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::World>::operator=((weak_ptr<game::World>*)this, param_1);
    }

    // 0x100487610, 80 bytes, inline, placed by class name
    // enable_shared_from_this<ObjStackEntity>::__internal_set_weak_ptr(weak_ptr<ObjStackEntity> const&)
    void enable_shared_from_this<ObjStackEntity>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<ObjStackEntity>::operator=((weak_ptr<ObjStackEntity>*)this, param_1);
    }

    // 0x1004eced0, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::SeqType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::SeqType> > const&)
    void enable_shared_from_this<game::ConfigType<game::SeqType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::SeqType>>::operator=((weak_ptr<game::ConfigType<game::SeqType>>*)this, param_1);
    }

    // 0x1004f9450, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::ObjType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::ObjType> > const&)
    void enable_shared_from_this<game::ConfigType<game::ObjType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::ObjType>>::operator=((weak_ptr<game::ConfigType<game::ObjType>>*)this, param_1);
    }

    // 0x10050fe00, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::NPCType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::NPCType> > const&)
    void enable_shared_from_this<game::ConfigType<game::NPCType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::NPCType>>::operator=((weak_ptr<game::ConfigType<game::NPCType>>*)this, param_1);
    }

    // 0x10051b900, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::LocType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::LocType> > const&)
    void enable_shared_from_this<game::ConfigType<game::LocType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::LocType>>::operator=((weak_ptr<game::ConfigType<game::LocType>>*)this, param_1);
    }

    // 0x100573be0, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::ParamType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::ParamType> > const&)
    void enable_shared_from_this<game::ConfigType<game::ParamType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::ParamType>>::operator=((weak_ptr<game::ConfigType<game::ParamType>>*)this,
                                                               param_1);
    }

    // 0x100579890, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::DBRowType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::DBRowType> > const&)
    void enable_shared_from_this<game::ConfigType<game::DBRowType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::DBRowType>>::operator=((weak_ptr<game::ConfigType<game::DBRowType>>*)this,
                                                               param_1);
    }

    // 0x10057ef70, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::DBTableType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::DBTableType> > const&)
    void enable_shared_from_this<game::ConfigType<game::DBTableType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::DBTableType>>::operator=((weak_ptr<game::ConfigType<game::DBTableType>>*)this,
                                                                 param_1);
    }

    // 0x100584650, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::InvType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::InvType> > const&)
    void enable_shared_from_this<game::ConfigType<game::InvType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::InvType>>::operator=((weak_ptr<game::ConfigType<game::InvType>>*)this, param_1);
    }

    // 0x1005889e0, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::VarBitType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::VarBitType> > const&)
    void enable_shared_from_this<game::ConfigType<game::VarBitType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::VarBitType>>::operator=((weak_ptr<game::ConfigType<game::VarBitType>>*)this,
                                                                param_1);
    }

    // 0x10058e190, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::BASType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::BASType> > const&)
    void enable_shared_from_this<game::ConfigType<game::BASType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::BASType>>::operator=((weak_ptr<game::ConfigType<game::BASType>>*)this, param_1);
    }

    // 0x100593830, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::FloorUnderlayType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::FloorUnderlayType> > const&)
    void
    enable_shared_from_this<game::ConfigType<game::FloorUnderlayType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::FloorUnderlayType>>::operator=(
            (weak_ptr<game::ConfigType<game::FloorUnderlayType>>*)this, param_1);
    }

    // 0x100598ee0, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::FloorOverlayType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::FloorOverlayType> > const&)
    void enable_shared_from_this<game::ConfigType<game::FloorOverlayType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::FloorOverlayType>>::operator=(
            (weak_ptr<game::ConfigType<game::FloorOverlayType>>*)this, param_1);
    }

    // 0x10059db50, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::HitmarkType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::HitmarkType> > const&)
    void enable_shared_from_this<game::ConfigType<game::HitmarkType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::HitmarkType>>::operator=((weak_ptr<game::ConfigType<game::HitmarkType>>*)this,
                                                                 param_1);
    }

    // 0x1005a36c0, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::HeadbarType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::HeadbarType> > const&)
    void enable_shared_from_this<game::ConfigType<game::HeadbarType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::HeadbarType>>::operator=((weak_ptr<game::ConfigType<game::HeadbarType>>*)this,
                                                                 param_1);
    }

    // 0x1005a8ec0, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::IDKType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::IDKType> > const&)
    void enable_shared_from_this<game::ConfigType<game::IDKType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::IDKType>>::operator=((weak_ptr<game::ConfigType<game::IDKType>>*)this, param_1);
    }

    // 0x1005af120, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::MapElementType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::MapElementType> > const&)
    void enable_shared_from_this<game::ConfigType<game::MapElementType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::MapElementType>>::operator=(
            (weak_ptr<game::ConfigType<game::MapElementType>>*)this, param_1);
    }

    // 0x1005b4e70, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::MSIType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::MSIType> > const&)
    void enable_shared_from_this<game::ConfigType<game::MSIType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::MSIType>>::operator=((weak_ptr<game::ConfigType<game::MSIType>>*)this, param_1);
    }

    // 0x1005bae20, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::QuestType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::QuestType> > const&)
    void enable_shared_from_this<game::ConfigType<game::QuestType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::QuestType>>::operator=((weak_ptr<game::ConfigType<game::QuestType>>*)this,
                                                               param_1);
    }

    // 0x1005c0540, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::SeqGroupType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::SeqGroupType> > const&)
    void enable_shared_from_this<game::ConfigType<game::SeqGroupType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::SeqGroupType>>::operator=((weak_ptr<game::ConfigType<game::SeqGroupType>>*)this,
                                                                  param_1);
    }

    // 0x1005c5bf0, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::LightType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::LightType> > const&)
    void enable_shared_from_this<game::ConfigType<game::LightType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::LightType>>::operator=((weak_ptr<game::ConfigType<game::LightType>>*)this,
                                                               param_1);
    }

    // 0x1005cb390, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::SkyBoxType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::SkyBoxType> > const&)
    void enable_shared_from_this<game::ConfigType<game::SkyBoxType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::SkyBoxType>>::operator=((weak_ptr<game::ConfigType<game::SkyBoxType>>*)this,
                                                                param_1);
    }

    // 0x1005cfe30, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::WaterType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::WaterType> > const&)
    void enable_shared_from_this<game::ConfigType<game::WaterType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::WaterType>>::operator=((weak_ptr<game::ConfigType<game::WaterType>>*)this,
                                                               param_1);
    }

    // 0x1005d54a0, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::CursorType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::CursorType> > const&)
    void enable_shared_from_this<game::ConfigType<game::CursorType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::CursorType>>::operator=((weak_ptr<game::ConfigType<game::CursorType>>*)this,
                                                                param_1);
    }

    // 0x1005daa90, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::WorldAreaType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::WorldAreaType> > const&)
    void enable_shared_from_this<game::ConfigType<game::WorldAreaType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::WorldAreaType>>::operator=(
            (weak_ptr<game::ConfigType<game::WorldAreaType>>*)this, param_1);
    }

    // 0x1005e0dd0, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::EnumType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::EnumType> > const&)
    void enable_shared_from_this<game::ConfigType<game::EnumType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::EnumType>>::operator=((weak_ptr<game::ConfigType<game::EnumType>>*)this,
                                                              param_1);
    }

    // 0x1005e67f0, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::EffectAnimType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::EffectAnimType> > const&)
    void enable_shared_from_this<game::ConfigType<game::EffectAnimType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::EffectAnimType>>::operator=(
            (weak_ptr<game::ConfigType<game::EffectAnimType>>*)this, param_1);
    }

    // 0x1005ec440, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::StructType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::StructType> > const&)
    void enable_shared_from_this<game::ConfigType<game::StructType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::StructType>>::operator=((weak_ptr<game::ConfigType<game::StructType>>*)this,
                                                                param_1);
    }

    // 0x1005f2390, 80 bytes, inline, placed by class name
    // enable_shared_from_this<game::ConfigType<game::AchievementType> >::__internal_set_weak_ptr(weak_ptr<game::ConfigType<game::AchievementType> > const&)
    void enable_shared_from_this<game::ConfigType<game::AchievementType>>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<game::ConfigType<game::AchievementType>>::operator=(
            (weak_ptr<game::ConfigType<game::AchievementType>>*)this, param_1);
    }

    // 0x1006bcf20, 80 bytes, inline, placed by class name
    // enable_shared_from_this<tweak::Tweaky>::__internal_set_weak_ptr(weak_ptr<tweak::Tweaky> const&)
    void enable_shared_from_this<tweak::Tweaky>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<tweak::Tweaky>::operator=((weak_ptr<tweak::Tweaky>*)this, param_1);
    }

    // 0x1007f78d0, 80 bytes, inline, placed by class name
    // enable_shared_from_this<graphics::ParticleSystem>::__internal_set_weak_ptr(weak_ptr<graphics::ParticleSystem> const&)
    void enable_shared_from_this<graphics::ParticleSystem>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<graphics::ParticleSystem>::operator=((weak_ptr<graphics::ParticleSystem>*)this, param_1);
    }

    // 0x100838be0, 80 bytes, inline, placed by class name
    // enable_shared_from_this<render::Query>::__internal_set_weak_ptr(weak_ptr<render::Query> const&)
    void enable_shared_from_this<render::Query>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<render::Query>::operator=((weak_ptr<render::Query>*)this, param_1);
    }

    // 0x100941360, 80 bytes, inline, placed by class name
    // enable_shared_from_this<tweak::Control>::__internal_set_weak_ptr(weak_ptr<tweak::Control> const&)
    void enable_shared_from_this<tweak::Control>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<tweak::Control>::operator=((weak_ptr<tweak::Control>*)this, (shared_ptr*)param_1);
    }

    // 0x100b0cd60, 80 bytes, inline, placed by class name
    // enable_shared_from_this<network::Ping>::__internal_set_weak_ptr(weak_ptr<network::Ping> const&)
    void enable_shared_from_this<network::Ping>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<network::Ping>::operator=((weak_ptr<network::Ping>*)this, param_1);
    }

    // 0x100c5f260, 80 bytes, inline, placed by class name
    // enable_shared_from_this<render::RenderTargets>::__internal_set_weak_ptr(weak_ptr<render::RenderTargets> const&)
    void enable_shared_from_this<render::RenderTargets>::__internal_set_weak_ptr(weak_ptr* param_1) {
        char cVar1;

        cVar1 = expired();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, (char*)0);
        }
        weak_ptr<render::RenderTargets>::operator=((weak_ptr<render::RenderTargets>*)this, (shared_ptr*)param_1);
    }

} // namespace jag::enable_shared_from_this

namespace jag {
    // 0x1001b2ae0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<oldscape::configdecoder::OldscapeVarType>(ref_counter_base*, oldscape::configdecoder::OldscapeVarType*, oldscape::configdecoder::OldscapeVarType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<oldscape::configdecoder::OldscapeVarType>(ref_counter_base* param_1,
                                                                                         OldscapeVarType* param_2,
                                                                                         enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x1001b2bd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::OldscapeVarType>::ref_counter_shared(unsigned long, oldscape::configdecoder::OldscapeVarType*): jumps straight to the base-object constructor

    // 0x1001b2be0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::OldscapeVarType>::ref_counter_shared(unsigned long, oldscape::configdecoder::OldscapeVarType*)
    void ref_counter_shared<oldscape::configdecoder::OldscapeVarType>::ref_counter_shared(ulong param_1,
                                                                                          OldscapeVarType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee75e8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(OldscapeVarType**)(this + 24) = param_2;
    }

    // 0x1001b2c20, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::OldscapeVarType>::DeleteData()
    /* ref_counter_shared<oldscape::midi2::ClearRequestTask>::DeleteData() */

    void ref_counter_shared<oldscape::midi2::ClearRequestTask>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 136;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001b2d10, 16 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_base::GetRefCount() const
    void ref_counter_base::GetRefCount() {
        (&field_8)->operator_cast_to_int();
    }

    // 0x1001b2d50, 16 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_base::IncWRef()
    void ref_counter_base::IncWRef() {
        std::__atomic_base<int, true>::operator++((__atomic_base<int, true>*)&field_12);
    }

    // 0x1001b31f0, 64 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gSmart1or2()
    ushort PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gSmart1or2(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        ushort uVar1;
        byte* pbVar2;

        pbVar2 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(ulong*)(this + 24));
        uVar1 = (ushort)*pbVar2;
        if ((char)*pbVar2 < '\0') {
            uVar1 = g2(this);
            uVar1 = uVar1 ^ 32768;
        } else {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
        }
        return uVar1;
    }

} // namespace jag
