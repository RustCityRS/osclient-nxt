// libs/jtl/managed_ptr/enable_shared_from_this.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::enable_shared_from_this {
    // 0x1001b2c80
    void enable_shared_from_this<game::ConfigType<game::VarType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::VarType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1003efcd0
    enable_shared_from_this<PathingEntity>* enable_shared_from_this<ObjStackEntity>::shared_from_this() {
        weak_ptr<oldscape::rs2lib::IfType>* in_RSI;

        *this = in_RSI->lock();
        return this;
    }

    // 0x10045d640
    void enable_shared_from_this<game::LocationInterface>::__internal_set_weak_ptr(
        const weak_ptr<game::LocationInterface>& locationInterface) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = locationInterface;
    }

    // 0x10046cce0
    void enable_shared_from_this<game::World>::__internal_set_weak_ptr(const weak_ptr<game::World>& world) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = world;
    }

    // 0x100487610
    void
    enable_shared_from_this<ObjStackEntity>::__internal_set_weak_ptr(const weak_ptr<ObjStackEntity>& objStackEntity) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = objStackEntity;
    }

    // 0x1004eced0
    void enable_shared_from_this<game::ConfigType<game::SeqType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::SeqType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1004f9450
    void enable_shared_from_this<game::ConfigType<game::ObjType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::ObjType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x10050fe00
    void enable_shared_from_this<game::ConfigType<game::NPCType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::NPCType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x10051b900
    void enable_shared_from_this<game::ConfigType<game::LocType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::LocType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x100573be0
    void enable_shared_from_this<game::ConfigType<game::ParamType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::ParamType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x100579890
    void enable_shared_from_this<game::ConfigType<game::DBRowType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::DBRowType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x10057ef70
    void enable_shared_from_this<game::ConfigType<game::DBTableType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::DBTableType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x100584650
    void enable_shared_from_this<game::ConfigType<game::InvType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::InvType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005889e0
    void enable_shared_from_this<game::ConfigType<game::VarBitType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::VarBitType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x10058e190
    void enable_shared_from_this<game::ConfigType<game::BASType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::BASType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x100593830
    void enable_shared_from_this<game::ConfigType<game::FloorUnderlayType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::FloorUnderlayType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x100598ee0
    void enable_shared_from_this<game::ConfigType<game::FloorOverlayType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::FloorOverlayType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x10059db50
    void enable_shared_from_this<game::ConfigType<game::HitmarkType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::HitmarkType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005a36c0
    void enable_shared_from_this<game::ConfigType<game::HeadbarType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::HeadbarType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005a8ec0
    void enable_shared_from_this<game::ConfigType<game::IDKType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::IDKType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005af120
    void enable_shared_from_this<game::ConfigType<game::MapElementType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::MapElementType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005b4e70
    void enable_shared_from_this<game::ConfigType<game::MSIType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::MSIType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005bae20
    void enable_shared_from_this<game::ConfigType<game::QuestType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::QuestType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005c0540
    void enable_shared_from_this<game::ConfigType<game::SeqGroupType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::SeqGroupType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005c5bf0
    void enable_shared_from_this<game::ConfigType<game::LightType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::LightType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005cb390
    void enable_shared_from_this<game::ConfigType<game::SkyBoxType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::SkyBoxType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005cfe30
    void enable_shared_from_this<game::ConfigType<game::WaterType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::WaterType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005d54a0
    void enable_shared_from_this<game::ConfigType<game::CursorType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::CursorType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005daa90
    void enable_shared_from_this<game::ConfigType<game::WorldAreaType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::WorldAreaType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005e0dd0
    void enable_shared_from_this<game::ConfigType<game::EnumType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::EnumType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005e67f0
    void enable_shared_from_this<game::ConfigType<game::EffectAnimType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::EffectAnimType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005ec440
    void enable_shared_from_this<game::ConfigType<game::StructType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::StructType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1005f2390
    void enable_shared_from_this<game::ConfigType<game::AchievementType>>::__internal_set_weak_ptr(
        const weak_ptr<game::ConfigType<game::AchievementType>>& configType) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = configType;
    }

    // 0x1006bcf20
    void enable_shared_from_this<tweak::Tweaky>::__internal_set_weak_ptr(const weak_ptr<tweak::Tweaky>& tweaky) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = tweaky;
    }

    // 0x1007f78d0
    void enable_shared_from_this<graphics::ParticleSystem>::__internal_set_weak_ptr(
        const weak_ptr<graphics::ParticleSystem>& particleSystem) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = particleSystem;
    }

    // 0x100838be0
    void enable_shared_from_this<render::Query>::__internal_set_weak_ptr(const weak_ptr<render::Query>& query) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = query;
    }

    // 0x100941360
    void enable_shared_from_this<tweak::Control>::__internal_set_weak_ptr(const weak_ptr<tweak::Control>& control) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = control;
    }

    // 0x100b0cd60
    void enable_shared_from_this<network::Ping>::__internal_set_weak_ptr(const weak_ptr<network::Ping>& ping) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = ping;
    }

    // 0x100c5f260
    void enable_shared_from_this<render::RenderTargets>::__internal_set_weak_ptr(
        const weak_ptr<render::RenderTargets>& renderTargets) {
        if (expired() == '\0') {
            LogAssert("m_internal_weak_ptr.expired()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                      "enable_shared_from_this.h",
                      31, nullptr);
        }
        *this = renderTargets;
    }

} // namespace jag::enable_shared_from_this

namespace jag {
    // 0x1001b2ae0
    void shared_ptr_do_enable_shared_from_this<oldscape::configdecoder::OldscapeVarType>(
        ref_counter_base* ref_counter_base, oldscape::configdecoder::OldscapeVarType* oldscapeVarType,
        oldscape::configdecoder::OldscapeVarType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)oldscapeVarType);
            local_38 = weak_ptr(local_48);
            oldscapeVarType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1001b2be0
    ref_counter_shared<oldscape::configdecoder::OldscapeVarType>::ref_counter_shared(
        unsigned long arg1, oldscape::configdecoder::OldscapeVarType* oldscapeVarType)
        : ref_counter_base() {}

    // 0x1001b2c20
    void ref_counter_shared<oldscape::configdecoder::OldscapeVarType>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::midi2::ClearRequestTask> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<oldscape::midi2::ClearRequestTask> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 136;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1001b2d10
    void ref_counter_base::GetRefCount() const {
        (&field_8)->operator_cast_to_int();
    }

    // 0x1001b2d50
    void ref_counter_base::IncWRef() {
        std::__atomic_base<int, true>::operator++();
    }

    // 0x1001b31f0
    unsigned short PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gSmart1or2() {
        uint8_t* pbVar2 = (uint8_t*)(*this)[*(unsigned long*)(this + 24)];
        unsigned short uVar1 = (unsigned short)*pbVar2;
        if ((char)*pbVar2 < '\0') {
            uVar1 = g2(this);
            uVar1 = uVar1 ^ 32768;
        } else {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
        }
        return uVar1;
    }

} // namespace jag
