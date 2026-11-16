// libs/game/runetek5/config/ConfigType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    template <typename...> // 29 instantiations, e.g. <AchievementType>, <BASType>, <CursorType>
    class ConfigType {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_2() = 0;
        virtual void __pure_slot_3() = 0;
        virtual uint8_t* Decode(PacketT<Array<unsigned char>>& arg1);
        ~ConfigType();
        void GetParam(int arg1, const shared_ptr<ParamType>& paramType) const;
        ConfigType(BaseTemplateConfigTypeList<VarBitType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<WaterType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<VarType>* baseTemplateConfigTypeList, int arg2);
        void DecodeParams(PacketT<Array<unsigned char>>& arg1);
        ConfigType(BaseTemplateConfigTypeList<SeqType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<NPCType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<ObjType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<LocType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<HitmarkType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<ParamType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<DBRowType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<DBTableType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<InvType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<BASType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<FloorUnderlayType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<FloorOverlayType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<HeadbarType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<IDKType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<MapElementType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<MSIType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<QuestType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<SeqGroupType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<LightType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<SkyBoxType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<CursorType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<WorldAreaType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<EnumType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<EffectAnimType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<StructType>* baseTemplateConfigTypeList, int arg2);
        ConfigType(BaseTemplateConfigTypeList<AchievementType>* baseTemplateConfigTypeList, int arg2);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullConfigType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
    };

    // 0x100f383a0, set at startup by ___cxx_global_var_init.125
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<LocType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f389c0, set at startup by ___cxx_global_var_init.60
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<WaterType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f38a78, set at startup by ___cxx_global_var_init.110
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<NPCType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f38a90, set at startup by ___cxx_global_var_init.102
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<BASType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f38c40, set at startup by ___cxx_global_var_init.91
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<HitmarkType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f38c58, set at startup by ___cxx_global_var_init.92
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<HeadbarType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f38c70, set at startup by ___cxx_global_var_init.114
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<WorldAreaType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f38d40, set at startup by ___cxx_global_var_init.123
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<SeqType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f38f60, set at startup by ___cxx_global_var_init.98
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<LightType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c0c0, set at startup by ___cxx_global_var_init.52
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<InvType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c180, set at startup by ___cxx_global_var_init.38
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<VarBitType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c3d0, set at startup by ___cxx_global_var_init.25
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<VarType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c620, set at startup by ___cxx_global_var_init.93
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<ObjType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c8f0, set at startup by ___cxx_global_var_init.127
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<MSIType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3cae0, set at startup by ___cxx_global_var_init.63
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<AchievementType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3ce10, set at startup by ___cxx_global_var_init.43
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<CursorType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3ce48, set at startup by ___cxx_global_var_init.46
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<DBRowType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3ce80, set at startup by ___cxx_global_var_init.49
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<DBTableType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3cef8, set at startup by ___cxx_global_var_init.106
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<EffectAnimType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3cf30, set at startup by ___cxx_global_var_init.100
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<EnumType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3cfd0, set at startup by ___cxx_global_var_init.61
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<FloorUnderlayType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d0f0, set at startup by ___cxx_global_var_init.57
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<IDKType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d1c0, set at startup by ___cxx_global_var_init.22
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<QuestType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d318, set at startup by ___cxx_global_var_init.126
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<MapElementType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d3a0, set at startup by ___cxx_global_var_init.54
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<ParamType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d4a8, set at startup by ___cxx_global_var_init.46
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<SeqGroupType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d528, set at startup by ___cxx_global_var_init.55
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<SkyBoxType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d5a0, set at startup by ___cxx_global_var_init.118
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<StructType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3df30, set at startup by ___cxx_global_var_init.58
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<FloorOverlayType>::NullConfigType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1001a3d80
    ConfigType<VarType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1004bc1c0
    void ConfigType<ObjType>::GetParam(int arg1, const shared_ptr<ParamType>& paramType) const {
        int* arg1_00;
        long lVar1;
        long lVar3;

        shared_ptr* this_02 = (shared_ptr*)(this + 5);
        if (shared_ptr::operator_cast_to_bool(this_02) != '\0') {
            arg1_00 = (int*)(*this_02).operator->();
            lVar1 = eastl::vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>::find(
                *arg1_00);
            lVar3 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_02).operator->())->end();
            if (lVar1 != lVar3) {
                ((lVar1 + 8))->GetInt();
                return;
            }
        }
        ((LightType*)paramType.operator->())->GetAmplitude();
    }

    // 0x1004c5a30
    ConfigType<VarBitType>::ConfigType(BaseTemplateConfigTypeList<VarBitType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1004c5af0
    ConfigType<VarBitType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1004c6350
    ConfigType<WaterType>::ConfigType(BaseTemplateConfigTypeList<WaterType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1004c6450
    ConfigType<WaterType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1004c9350
    ConfigType<WorldAreaType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1004d1850
    ConfigType<VarType>::ConfigType(BaseTemplateConfigTypeList<VarType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1004ddb50
    ConfigType<SeqType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1004de6b0
    void ConfigType<SeqType>::DecodeParams(PacketT<Array<unsigned char>>& arg1) {
        int arg1_00;
        VarValue local_b0;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_90;
        ReturnValue local_78;
        vector_map<int, VarValue>* local_40;
        int local_34;

        unsigned int uVar2 = arg1.g1();
        shared_ptr* this_02 = (shared_ptr*)(this + 5);
        char cVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!cVar1) {
            make_shared<eastl::vector_map<int, VarValue>>(&local_78);
            *this_02 = local_78;
        }
        unsigned long arg1_01 = (unsigned long)uVar2 & 255;
        shared_ptr* local_50 = this_02;
        ((vector<eastl::pair<int, VarValue>>*)(*this_02).operator->())->reserve(arg1_01);
        if ((int)arg1_01 != 0) {
            do {
                cVar1 = arg1.g1();
                local_34 = arg1.g3();
                local_40 = (vector_map<int, VarValue>*)(*local_50).operator->();
                if (cVar1 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(&local_90, (uint8_t)arg1);
                    local_b0 = VarValue(&local_90);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                } else {
                    arg1_00 = arg1.g4s();
                    local_b0 = VarValue(arg1_00);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                }
                uVar2 = (int)arg1_01 - 1;
                arg1_01 = (unsigned long)uVar2;
            } while (uVar2 != 0);
        }
    }

    // 0x1004e11d0
    void ConfigType<StructType>::DecodeParams(PacketT<Array<unsigned char>>& arg1) {
        int arg1_00;
        VarValue local_b0;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_90;
        ReturnValue local_78;
        vector_map<int, VarValue>* local_40;
        int local_34;

        unsigned int uVar2 = arg1.g1();
        shared_ptr* this_02 = (shared_ptr*)(this + 5);
        char cVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!cVar1) {
            make_shared<eastl::vector_map<int, VarValue>>(&local_78);
            *this_02 = local_78;
        }
        unsigned long arg1_01 = (unsigned long)uVar2 & 255;
        shared_ptr* local_50 = this_02;
        ((vector<eastl::pair<int, VarValue>>*)(*this_02).operator->())->reserve(arg1_01);
        if ((int)arg1_01 != 0) {
            do {
                cVar1 = arg1.g1();
                local_34 = arg1.g3();
                local_40 = (vector_map<int, VarValue>*)(*local_50).operator->();
                if (cVar1 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(&local_90, (uint8_t)arg1);
                    local_b0 = VarValue(&local_90);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                } else {
                    arg1_00 = arg1.g4s();
                    local_b0 = VarValue(arg1_00);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                }
                uVar2 = (int)arg1_01 - 1;
                arg1_01 = (unsigned long)uVar2;
            } while (uVar2 != 0);
        }
    }

    // 0x1004ebc40
    ConfigType<SeqType>::ConfigType(BaseTemplateConfigTypeList<SeqType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1004f4810
    void ConfigType<QuestType>::DecodeParams(PacketT<Array<unsigned char>>& arg1) {
        int arg1_00;
        VarValue local_b0;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_90;
        ReturnValue local_78;
        vector_map<int, VarValue>* local_40;
        int local_34;

        unsigned int uVar2 = arg1.g1();
        shared_ptr* this_02 = (shared_ptr*)(this + 5);
        char cVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!cVar1) {
            make_shared<eastl::vector_map<int, VarValue>>(&local_78);
            *this_02 = local_78;
        }
        unsigned long arg1_01 = (unsigned long)uVar2 & 255;
        shared_ptr* local_50 = this_02;
        ((vector<eastl::pair<int, VarValue>>*)(*this_02).operator->())->reserve(arg1_01);
        if ((int)arg1_01 != 0) {
            do {
                cVar1 = arg1.g1();
                local_34 = arg1.g3();
                local_40 = (vector_map<int, VarValue>*)(*local_50).operator->();
                if (cVar1 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(&local_90, (uint8_t)arg1);
                    local_b0 = VarValue(&local_90);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                } else {
                    arg1_00 = arg1.g4s();
                    local_b0 = VarValue(arg1_00);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                }
                uVar2 = (int)arg1_01 - 1;
                arg1_01 = (unsigned long)uVar2;
            } while (uVar2 != 0);
        }
    }

    // 0x1004f8f70
    ConfigType<ObjType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005023d0
    ConfigType<NPCType>::ConfigType(BaseTemplateConfigTypeList<NPCType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005024f0
    ConfigType<NPCType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x100503780
    void ConfigType<NPCType>::DecodeParams(PacketT<Array<unsigned char>>& arg1) {
        int arg1_00;
        VarValue local_b0;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_90;
        ReturnValue local_78;
        vector_map<int, VarValue>* local_40;
        int local_34;

        unsigned int uVar2 = arg1.g1();
        shared_ptr* this_02 = (shared_ptr*)(this + 5);
        char cVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!cVar1) {
            make_shared<eastl::vector_map<int, VarValue>>(&local_78);
            *this_02 = local_78;
        }
        unsigned long arg1_01 = (unsigned long)uVar2 & 255;
        shared_ptr* local_50 = this_02;
        ((vector<eastl::pair<int, VarValue>>*)(*this_02).operator->())->reserve(arg1_01);
        if ((int)arg1_01 != 0) {
            do {
                cVar1 = arg1.g1();
                local_34 = arg1.g3();
                local_40 = (vector_map<int, VarValue>*)(*local_50).operator->();
                if (cVar1 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(&local_90, (uint8_t)arg1);
                    local_b0 = VarValue(&local_90);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                } else {
                    arg1_00 = arg1.g4s();
                    local_b0 = VarValue(arg1_00);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                }
                uVar2 = (int)arg1_01 - 1;
                arg1_01 = (unsigned long)uVar2;
            } while (uVar2 != 0);
        }
    }

    // 0x1005060a0
    ConfigType<ObjType>::ConfigType(BaseTemplateConfigTypeList<ObjType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x100507120
    void ConfigType<ObjType>::DecodeParams(PacketT<Array<unsigned char>>& arg1) {
        int arg1_00;
        VarValue local_b0;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_90;
        ReturnValue local_78;
        vector_map<int, VarValue>* local_40;
        int local_34;

        unsigned int uVar2 = arg1.g1();
        shared_ptr* this_02 = (shared_ptr*)(this + 5);
        char cVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!cVar1) {
            make_shared<eastl::vector_map<int, VarValue>>(&local_78);
            *this_02 = local_78;
        }
        unsigned long arg1_01 = (unsigned long)uVar2 & 255;
        shared_ptr* local_50 = this_02;
        ((vector<eastl::pair<int, VarValue>>*)(*this_02).operator->())->reserve(arg1_01);
        if ((int)arg1_01 != 0) {
            do {
                cVar1 = arg1.g1();
                local_34 = arg1.g3();
                local_40 = (vector_map<int, VarValue>*)(*local_50).operator->();
                if (cVar1 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(&local_90, (uint8_t)arg1);
                    local_b0 = VarValue(&local_90);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                } else {
                    arg1_00 = arg1.g4s();
                    local_b0 = VarValue(arg1_00);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                }
                uVar2 = (int)arg1_01 - 1;
                arg1_01 = (unsigned long)uVar2;
            } while (uVar2 != 0);
        }
    }

    // 0x100516e70
    void ConfigType<MapElementType>::DecodeParams(PacketT<Array<unsigned char>>& arg1) {
        int arg1_00;
        VarValue local_b0;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_90;
        ReturnValue local_78;
        vector_map<int, VarValue>* local_40;
        int local_34;

        unsigned int uVar2 = arg1.g1();
        shared_ptr* this_02 = (shared_ptr*)(this + 5);
        char cVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!cVar1) {
            make_shared<eastl::vector_map<int, VarValue>>(&local_78);
            *this_02 = local_78;
        }
        unsigned long arg1_01 = (unsigned long)uVar2 & 255;
        shared_ptr* local_50 = this_02;
        ((vector<eastl::pair<int, VarValue>>*)(*this_02).operator->())->reserve(arg1_01);
        if ((int)arg1_01 != 0) {
            do {
                cVar1 = arg1.g1();
                local_34 = arg1.g3();
                local_40 = (vector_map<int, VarValue>*)(*local_50).operator->();
                if (cVar1 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(&local_90, (uint8_t)arg1);
                    local_b0 = VarValue(&local_90);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                } else {
                    arg1_00 = arg1.g4s();
                    local_b0 = VarValue(arg1_00);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                }
                uVar2 = (int)arg1_01 - 1;
                arg1_01 = (unsigned long)uVar2;
            } while (uVar2 != 0);
        }
    }

    // 0x10051b1a0
    ConfigType<LocType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x100525bd0
    ConfigType<LocType>::ConfigType(BaseTemplateConfigTypeList<LocType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x100527660
    void ConfigType<LocType>::DecodeParams(PacketT<Array<unsigned char>>& arg1) {
        int arg1_00;
        VarValue local_b0;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_90;
        ReturnValue local_78;
        vector_map<int, VarValue>* local_40;
        int local_34;

        unsigned int uVar2 = arg1.g1();
        shared_ptr* this_02 = (shared_ptr*)(this + 5);
        char cVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!cVar1) {
            make_shared<eastl::vector_map<int, VarValue>>(&local_78);
            *this_02 = local_78;
        }
        unsigned long arg1_01 = (unsigned long)uVar2 & 255;
        shared_ptr* local_50 = this_02;
        ((vector<eastl::pair<int, VarValue>>*)(*this_02).operator->())->reserve(arg1_01);
        if ((int)arg1_01 != 0) {
            do {
                cVar1 = arg1.g1();
                local_34 = arg1.g3();
                local_40 = (vector_map<int, VarValue>*)(*local_50).operator->();
                if (cVar1 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(&local_90, (uint8_t)arg1);
                    local_b0 = VarValue(&local_90);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                } else {
                    arg1_00 = arg1.g4s();
                    local_b0 = VarValue(arg1_00);
                    local_78 = eastl::make_pair<int&, VarValue>(local_34, local_b0);
                    local_40->insert<eastl::pair<int, VarValue>, void>(local_78);
                }
                uVar2 = (int)arg1_01 - 1;
                arg1_01 = (unsigned long)uVar2;
            } while (uVar2 != 0);
        }
    }

    // 0x100544ef0
    ConfigType<HitmarkType>::ConfigType(BaseTemplateConfigTypeList<HitmarkType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x100572b50
    ConfigType<ParamType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x100572dc0
    ConfigType<ParamType>::ConfigType(BaseTemplateConfigTypeList<ParamType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005784a0
    ConfigType<DBRowType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x100578ad0
    ConfigType<DBRowType>::ConfigType(BaseTemplateConfigTypeList<DBRowType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x10057df60
    ConfigType<DBTableType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x10057e1e0
    ConfigType<DBTableType>::ConfigType(BaseTemplateConfigTypeList<DBTableType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x100583640
    ConfigType<InvType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005838c0
    ConfigType<InvType>::ConfigType(BaseTemplateConfigTypeList<InvType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x10058d0e0
    ConfigType<BASType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x10058d3e0
    ConfigType<BASType>::ConfigType(BaseTemplateConfigTypeList<BASType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x100592810
    ConfigType<FloorUnderlayType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x100592a80
    ConfigType<FloorUnderlayType>::ConfigType(BaseTemplateConfigTypeList<FloorUnderlayType>* baseTemplateConfigTypeList,
                                              int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x100597ed0
    ConfigType<FloorOverlayType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x100598150
    ConfigType<FloorOverlayType>::ConfigType(BaseTemplateConfigTypeList<FloorOverlayType>* baseTemplateConfigTypeList,
                                             int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x10059d680
    ConfigType<HitmarkType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005a26a0
    ConfigType<HeadbarType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005a2930
    ConfigType<HeadbarType>::ConfigType(BaseTemplateConfigTypeList<HeadbarType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005a7ce0
    ConfigType<IDKType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005a80d0
    ConfigType<IDKType>::ConfigType(BaseTemplateConfigTypeList<IDKType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005ad670
    ConfigType<MapElementType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005ae2a0
    ConfigType<MapElementType>::ConfigType(BaseTemplateConfigTypeList<MapElementType>* baseTemplateConfigTypeList,
                                           int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005b3e90
    ConfigType<MSIType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005b40f0
    ConfigType<MSIType>::ConfigType(BaseTemplateConfigTypeList<MSIType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005b9980
    ConfigType<QuestType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005b9f70
    ConfigType<QuestType>::ConfigType(BaseTemplateConfigTypeList<QuestType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005bf4f0
    ConfigType<SeqGroupType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005bf790
    ConfigType<SeqGroupType>::ConfigType(BaseTemplateConfigTypeList<SeqGroupType>* baseTemplateConfigTypeList,
                                         int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005c4be0
    ConfigType<LightType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005c4e70
    ConfigType<LightType>::ConfigType(BaseTemplateConfigTypeList<LightType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005ca390
    ConfigType<SkyBoxType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005ca600
    ConfigType<SkyBoxType>::ConfigType(BaseTemplateConfigTypeList<SkyBoxType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005d44a0
    ConfigType<CursorType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005d46f0
    ConfigType<CursorType>::ConfigType(BaseTemplateConfigTypeList<CursorType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005d9ce0
    ConfigType<WorldAreaType>::ConfigType(BaseTemplateConfigTypeList<WorldAreaType>* baseTemplateConfigTypeList,
                                          int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005df3f0
    ConfigType<EnumType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005dfab0
    ConfigType<EnumType>::ConfigType(BaseTemplateConfigTypeList<EnumType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005e5750
    ConfigType<EffectAnimType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005e5a50
    ConfigType<EffectAnimType>::ConfigType(BaseTemplateConfigTypeList<EffectAnimType>* baseTemplateConfigTypeList,
                                           int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005eb440
    ConfigType<StructType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005eb690
    ConfigType<StructType>::ConfigType(BaseTemplateConfigTypeList<StructType>* baseTemplateConfigTypeList, int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

    // 0x1005f0c00
    ConfigType<AchievementType>::~ConfigType() {
        ((this + 5))->~shared_ptr();
        ((this + 1))->~enable_shared_from_this();
    }

    // 0x1005f1460
    ConfigType<AchievementType>::ConfigType(BaseTemplateConfigTypeList<AchievementType>* baseTemplateConfigTypeList,
                                            int arg2) {
        new ((this + 1)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new ((this + 5)) shared_ptr();
    }

} // namespace jag::game

namespace jag::math {
    // 0x1001a4060
    Vector3T<float>::Vector3T() {
        *(uint64_t*)this = 0;
        *(uint32_t*)(this + 8) = 0;
    }

    // 0x1001a4060: ColourHSL::ColourHSL() has the same machine code as Vector3T<float>::Vector3T()

    // 0x1001a4080
    Matrix44T<float>::Matrix44T(const Matrix33T<float>& matrix33, const Vector3T<float>& vector3) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        Set(this, matrix33, vector3);
    }

} // namespace jag::math

namespace jag::render {
    // 0x1001a4060: DispatchCallParams::DispatchCallParams() has the same machine code as math::Vector3T<float>::Vector3T()

    // 0x1001a4060: QueryView::QueryView() has the same machine code as math::Vector3T<float>::Vector3T()

} // namespace jag::render

namespace jag::graphics {
    // 0x1001a4060: TextRunCharacter::TextRunCharacter() has the same machine code as math::Vector3T<float>::Vector3T()

} // namespace jag::graphics

namespace jag::oldscape::dash3d {
    // 0x1001a4060: FaceNormal::FaceNormal() has the same machine code as jag::math::Vector3T<float>::Vector3T()

} // namespace jag::oldscape::dash3d

namespace jag::game::configtype {
    // 0x100561cd0
    auto GetConfigTypeListContainerStrategyArray(ConfigTypeListContainerStrategy configTypeListContainerStrategy) {
        ConfigTypeListContainerStrategy* configTypeListContainerStrategy1;
        ConfigTypeListContainerStrategy* configTypeListContainerStrategy2;

        auto result(86);
        configTypeListContainerStrategy1 = (ConfigTypeListContainerStrategy*)result.data();
        configTypeListContainerStrategy2 = (ConfigTypeListContainerStrategy*)result.end();
        std::fill<ConfigTypeListContainerStrategy*, ConfigTypeListContainerStrategy>(
            configTypeListContainerStrategy1, configTypeListContainerStrategy2, configTypeListContainerStrategy);
        return result;
    }

} // namespace jag::game::configtype
