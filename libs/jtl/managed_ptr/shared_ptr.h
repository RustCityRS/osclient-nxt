// libs/jtl/managed_ptr/shared_ptr.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <typename...> // 364 instantiations, e.g. <Js5WorkerRequestMessage>, <Js5WorkerThread>, <MixerWorker>
    class shared_ptr {
    public:
        shared_ptr(const shared_ptr<oldscape::dash3d::Wall>& groundDecor);
        uint64_t operator*() const;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*
        operator=(const shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>& worldmapAreaMetadata);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*
        operator=(shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>&& worldmapAreaMetadata);
        shared_ptr(shared_ptr<unsigned int[]>&& arg1);
        void IncRef();
        void tracked_enable_shared_from_this_add_ref(const std::integral_constant<bool, false>& integral_constant);
        bool unique() const;
        uint64_t use_count() const;
        void swap(shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>& worldmapAreaMetadata);
        shared_ptr(shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>&& modelLit);
        shared_ptr(shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>&& headbar);
        operator bool() const;
        shared_ptr<oldscape::RSevenDebugPresetProvider>& operator= <oldscape::FileRSevenDebugPresetProvider, void>(
            shared_ptr<oldscape::FileRSevenDebugPresetProvider>&& fileRSevenDebugPresetProvider);
        ~shared_ptr();
        uint64_t operator->() const;
        shared_ptr<Array<oldscape::graphics::Pix32>>*
        operator=(const shared_ptr<Array<oldscape::graphics::Pix32>>& pix32s);
        void DecRef();
        void swap(shared_ptr<oldscape::RSevenDebugPresetProvider>& rSevenDebugPresetProvider);
        void reset();
        shared_ptr<oldscape::sound::Wave, void>(oldscape::sound::Wave* wave);
        shared_ptr<oldscape::sound::WaveStream, void>(oldscape::sound::WaveStream* waveStream);
        shared_ptr<oldscape::sound::WaveStream>* operator=(const shared_ptr<oldscape::sound::WaveStream>& waveStream);
        shared_ptr<oldscape::sound::MixerMainThread>&
        operator= <oldscape::sound::Mixer>(const shared_ptr<oldscape::sound::Mixer>& mixer);
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>&
        operator= <oldscape::midi2::MidiPlayer>(const shared_ptr<oldscape::midi2::MidiPlayer>& midiPlayer);
        shared_ptr<oldscape::sound::Decimator>* operator=(shared_ptr<oldscape::sound::Decimator>&& decimator);
        shared_ptr<oldscape::jstring::PixfontGeneric>*
        operator=(const shared_ptr<oldscape::jstring::PixfontGeneric>& pixfontGeneric);
        shared_ptr<oldscape::configdecoder::OldscapeVarTypeList>*
        operator=(shared_ptr<oldscape::configdecoder::OldscapeVarTypeList>&& oldscapeVarTypeList);
        shared_ptr<Array<oldscape::graphics::Pix8>>* operator=(shared_ptr<Array<oldscape::graphics::Pix8>>&& pix8s);
        shared_ptr<Array<oldscape::graphics::Pix32>>* operator=(shared_ptr<Array<oldscape::graphics::Pix32>>&& pix32s);
        shared_ptr<Array<oldscape::graphics::Pix8>>*
        operator=(const shared_ptr<Array<oldscape::graphics::Pix8>>& pix8s);
        shared_ptr<oldscape::dash3d::TextureCache>*
        operator=(shared_ptr<oldscape::dash3d::TextureCache>&& textureCache);
        shared_ptr<oldscape::LogFileSink>* operator=(shared_ptr<oldscape::LogFileSink>&& logFileSink);
        shared_ptr<oldscape::configdecoder::ObjType>*
        operator=(const shared_ptr<oldscape::configdecoder::ObjType>& objType);
        shared_ptr<oldscape::PacketJ<Array<unsigned char>>>*
        operator=(shared_ptr<oldscape::PacketJ<Array<unsigned char>>>&& packetJ);
        shared_ptr<oldscape::sound::JagFX>* operator=(shared_ptr<oldscape::sound::JagFX>&& jagFX);
        shared_ptr<oldscape::sound::JagFX>* operator=(const shared_ptr<oldscape::sound::JagFX>& jagFX);
        void reset<oldscape::sound::JagFX, void>(oldscape::sound::JagFX* jagFX);
        shared_ptr<oldscape::FolderSelection::FolderSelectionRequest>*
        operator=(shared_ptr<oldscape::FolderSelection::FolderSelectionRequest>&& folderSelectionRequest);
        shared_ptr<oldscape::ClientEntity>* operator=(shared_ptr<oldscape::ClientEntity>&& clientEntity);
        shared_ptr<oldscape::ClientEntity>&
        operator= <oldscape::ClientPlayer>(const shared_ptr<oldscape::ClientPlayer>& clientPlayer);
        shared_ptr<oldscape::ClientObj>* operator=(const shared_ptr<oldscape::ClientObj>& clientObj);
        shared_ptr<oldscape::ApplicationContext>& operator= <oldscape::DesktopApplicationContext, void>(
            shared_ptr<oldscape::DesktopApplicationContext>&& desktopApplicationContext);
        shared_ptr<oldscape::configdecoder::ObjType>* operator=(shared_ptr<oldscape::configdecoder::ObjType>&& objType);
        shared_ptr<oldscape::graphics::Pix32>* operator=(shared_ptr<oldscape::graphics::Pix32>&& pix32);
        shared_ptr<oldscape::graphics::Pix32>* operator=(const shared_ptr<oldscape::graphics::Pix32>& pix32);
        shared_ptr<oldscape::dash3d::ModelLit>* operator=(const shared_ptr<oldscape::dash3d::ModelLit>& modelLit);
        shared_ptr<oldscape::dash3d::ModelLit>* operator=(shared_ptr<oldscape::dash3d::ModelLit>&& modelLit);
        shared_ptr<oldscape::configdecoder::NpcType>*
        operator=(const shared_ptr<oldscape::configdecoder::NpcType>& npcType);
        shared_ptr<oldscape::configdecoder::HitmarkType>*
        operator=(shared_ptr<oldscape::configdecoder::HitmarkType>&& hitmarkType);
        shared_ptr<oldscape::jstring::PixfontGeneric>*
        operator=(shared_ptr<oldscape::jstring::PixfontGeneric>&& pixfontGeneric);
        shared_ptr<oldscape::rs2lib::social::ClanSettings>*
        operator=(shared_ptr<oldscape::rs2lib::social::ClanSettings>&& clanSettings);
        shared_ptr<oldscape::rs2lib::social::ClanChannel>*
        operator=(shared_ptr<oldscape::rs2lib::social::ClanChannel>&& clanChannel);
        shared_ptr<oldscape::ClientPlayer>* operator=(shared_ptr<oldscape::ClientPlayer>&& clientPlayer);
        shared_ptr<oldscape::dash3d::ModelSource>&
        operator= <oldscape::ClientLocAnim, void>(shared_ptr<oldscape::ClientLocAnim>&& clientLocAnim);
        shared_ptr<oldscape::rs2lib::social::ClanChannel>*
        operator=(const shared_ptr<oldscape::rs2lib::social::ClanChannel>& clanChannel);
        shared_ptr<oldscape::rs2lib::social::ClanSettings>*
        operator=(const shared_ptr<oldscape::rs2lib::social::ClanSettings>& clanSettings);
        shared_ptr<game::VarContainerSparse>* operator=(shared_ptr<game::VarContainerSparse>&& varContainerSparse);
        shared_ptr<oldscape::ClientNpc>* operator=(shared_ptr<oldscape::ClientNpc>&& clientNpc);
        shared_ptr<oldscape::configdecoder::NpcType>* operator=(shared_ptr<oldscape::configdecoder::NpcType>&& npcType);
        shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>*
        operator=(shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>&& objTypeCustomisation);
        shared_ptr<oldscape::rs2lib::PlayerModel>* operator=(shared_ptr<oldscape::rs2lib::PlayerModel>&& playerModel);
        shared_ptr<oldscape::input::InputForm>* operator=(shared_ptr<oldscape::input::InputForm>&& inputForm);
        shared_ptr<oldscape::configdecoder::LocType>* operator=(shared_ptr<oldscape::configdecoder::LocType>&& locType);
        void swap(shared_ptr<oldscape::PacketJ<Array<unsigned char>>>& packetJ);
        void swap(shared_ptr<oldscape::jstring::PixfontGeneric>& pixfontGeneric);
        long operator[](unsigned long arg1) const;
        void swap(shared_ptr<oldscape::sound::WaveStream>& waveStream);
        void enable_shared_from_this(const std::integral_constant<bool, false>& integral_constant);
        void swap(shared_ptr<oldscape::configdecoder::OldscapeVarTypeList>& oldscapeVarTypeList);
        void swap(shared_ptr<game::VarContainerSparse>& varContainerSparse);
        void swap(shared_ptr<oldscape::rs2lib::social::ClanSettings>& clanSettings);
        void swap(shared_ptr<oldscape::rs2lib::social::ClanChannel>& clanChannel);
        void swap(shared_ptr<oldscape::sound::MixerMainThread>& mixerMainThread);
        void swap(shared_ptr<oldscape::sound::Decimator>& decimator);
        void swap(shared_ptr<Array<oldscape::graphics::Pix32>>& pix32s);
        void swap(shared_ptr<Array<oldscape::graphics::Pix8>>& pix8s);
        void swap(shared_ptr<oldscape::dash3d::TextureCache>& textureCache);
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>*
        operator=(const shared_ptr<oldscape::midi2::MidiPlayerMainThread>& midiPlayerMainThread);
        void swap(shared_ptr<oldscape::midi2::MidiPlayerMainThread>& midiPlayerMainThread);
        void swap(shared_ptr<oldscape::rs2lib::PlayerModel>& playerModel);
        void reset<Linkable<oldscape::sound::PCMStream>, void>(Linkable<oldscape::sound::PCMStream>* linkable);
        shared_ptr<Linkable<oldscape::sound::PCMStream>>*
        operator=(const shared_ptr<Linkable<oldscape::sound::PCMStream>>& linkable);
        shared_ptr<Linkable<oldscape::sound::PCMStream>, void>(Linkable<oldscape::sound::PCMStream>* linkable);
        void swap(shared_ptr<Linkable<oldscape::sound::PCMStream>>& linkable);
        void
        reset<Linkable<oldscape::sound::MixerController>, void>(Linkable<oldscape::sound::MixerController>* linkable);
        shared_ptr<Linkable<oldscape::sound::MixerController>>*
        operator=(const shared_ptr<Linkable<oldscape::sound::MixerController>>& linkable);
        shared_ptr<Linkable<oldscape::sound::MixerController>, void>(
            Linkable<oldscape::sound::MixerController>* linkable);
        void swap(shared_ptr<Linkable<oldscape::sound::MixerController>>& linkable);
        shared_ptr<oldscape::sound::Mixer, void>(const shared_ptr<oldscape::sound::Mixer>& mixer);
        void swap(shared_ptr<oldscape::configdecoder::OldscapeVarType>& oldscapeVarType);
        shared_ptr<oldscape::configdecoder::OldscapeVarType>*
        operator=(const shared_ptr<oldscape::configdecoder::OldscapeVarType>& oldscapeVarType);
        shared_ptr<oldscape::configdecoder::OldscapeVarType>*
        operator=(shared_ptr<oldscape::configdecoder::OldscapeVarType>&& oldscapeVarType);
        shared_ptr<Linkable<oldscape::dash3d::Texture>>*
        operator=(const shared_ptr<Linkable<oldscape::dash3d::Texture>>& linkable);
        void swap(shared_ptr<Linkable<oldscape::dash3d::Texture>>& linkable);
        void swap(shared_ptr<oldscape::LogFileSink>& logFileSink);
        void swap(shared_ptr<oldscape::configdecoder::ObjType>& objType);
        void swap(shared_ptr<oldscape::sound::JagFX>& jagFX);
        shared_ptr<oldscape::sound::JagFX, void>(oldscape::sound::JagFX* jagFX);
        void swap(shared_ptr<oldscape::FolderSelection::FolderSelectionRequest>& folderSelectionRequest);
        void swap(shared_ptr<oldscape::ClientEntity>& clientEntity);
        void swap(shared_ptr<oldscape::ClientObj>& clientObj);
        void reset<oldscape::input::InputForm, void>(oldscape::input::InputForm* inputForm);
        shared_ptr<oldscape::input::InputForm, void>(oldscape::input::InputForm* inputForm);
        void swap(shared_ptr<oldscape::input::InputForm>& inputForm);
        void swap(shared_ptr<oldscape::ApplicationContext>& applicationContext);
        void swap(shared_ptr<oldscape::graphics::Pix32>& pix32);
        void swap(shared_ptr<oldscape::dash3d::ModelLit>& modelLit);
        void swap(shared_ptr<oldscape::configdecoder::NpcType>& npcType);
        void swap(shared_ptr<oldscape::configdecoder::HitmarkType>& hitmarkType);
        void swap(shared_ptr<oldscape::ClientNpc>& clientNpc);
        void swap(shared_ptr<oldscape::dash3d::ModelSource>& modelSource);
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>* operator=(
            const shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>& linkable);
        void swap(shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>& linkable);
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>* operator=(
            const shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>& linkable);
        void swap(shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>& linkable);
        shared_ptr<oldscape::configdecoder::HeadbarType>*
        operator=(const shared_ptr<oldscape::configdecoder::HeadbarType>& headbarType);
        void swap(shared_ptr<oldscape::configdecoder::HeadbarType>& headbarType);
        void swap(shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>& objTypeCustomisation);
        shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>*
        operator=(const shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>& objTypeCustomisation);
        shared_ptr<oldscape::configdecoder::EnumType>*
        operator=(shared_ptr<oldscape::configdecoder::EnumType>&& enumType);
        void swap(shared_ptr<oldscape::configdecoder::EnumType>& enumType);
        shared_ptr<oldscape::ChatLine>* operator=(const shared_ptr<oldscape::ChatLine>& chatLine);
        shared_ptr<oldscape::ChatLine>* operator=(shared_ptr<oldscape::ChatLine>&& chatLine);
        shared_ptr<oldscape::rs2lib::social::DisplayName>*
        operator=(shared_ptr<oldscape::rs2lib::social::DisplayName>&& displayName);
        shared_ptr<oldscape::rs2lib::IfType>* operator=(shared_ptr<oldscape::rs2lib::IfType>&& ifType);
        shared_ptr<oldscape::configdecoder::SeqType>* operator=(shared_ptr<oldscape::configdecoder::SeqType>&& seqType);
        shared_ptr<oldscape::ClientPlayer>* operator=(const shared_ptr<oldscape::ClientPlayer>& clientPlayer);
        shared_ptr<oldscape::PacketJ<Array<unsigned char>>>*
        operator=(shared_ptr<oldscape::PacketJ<Array<unsigned char>>>&& packetJ);
        shared_ptr<oldscape::ClientScript>* operator=(const shared_ptr<oldscape::ClientScript>& clientScript);
        shared_ptr<oldscape::rs2lib::IfType>* operator=(const shared_ptr<oldscape::rs2lib::IfType>& ifType);
        shared_ptr<oldscape::ClientScript>* operator=(shared_ptr<oldscape::ClientScript>&& clientScript);
        shared_ptr<Js5WorkerThread>* operator=(shared_ptr<Js5WorkerThread>&& js5WorkerThread);
        shared_ptr<PacketT<Array<unsigned char>>>* operator=(shared_ptr<PacketT<Array<unsigned char>>>&& arg1);
        void swap(shared_ptr<Js5WorkerThread>& js5WorkerThread);
        void swap(shared_ptr<PacketT<Array<unsigned char>>>& arg1);
        shared_ptr<oldscape::configdecoder::LocType>*
        operator=(const shared_ptr<oldscape::configdecoder::LocType>& locType);
        void swap(shared_ptr<oldscape::configdecoder::LocType>& locType);
        void swap(shared_ptr<oldscape::rs2lib::IfType>& ifType);
        void swap(shared_ptr<oldscape::ChatLine>& chatLine);
        void swap(shared_ptr<oldscape::rs2lib::social::DisplayName>& displayName);
        void swap(shared_ptr<oldscape::configdecoder::SeqType>& seqType);
        void swap(shared_ptr<oldscape::ClientPlayer>& clientPlayer);
        void swap(shared_ptr<oldscape::PacketJ<Array<unsigned char>>>& packetJ);
        void swap(shared_ptr<oldscape::ClientScript>& clientScript);
        shared_ptr<oldscape::rseven::BuildTerrainResultLevel>*
        operator=(shared_ptr<oldscape::rseven::BuildTerrainResultLevel>&& buildTerrainResultLevel);
        shared_ptr<graphics::TextureAtlasReference>*
        operator=(shared_ptr<graphics::TextureAtlasReference>&& textureAtlasReference);
        shared_ptr<Array<graphics::LabelData>>* operator=(shared_ptr<Array<graphics::LabelData>>&& labelDatas);
        shared_ptr<oldscape::rseven::DynamicGeometry>*
        operator=(shared_ptr<oldscape::rseven::DynamicGeometry>&& dynamicGeometry);
        shared_ptr<game::LightSource>* operator=(shared_ptr<game::LightSource>&& lightSource);
        shared_ptr<game::LightSource>* operator=(const shared_ptr<game::LightSource>& lightSource);
        shared_ptr<oldscape::dash3d::PoseStateRSeven>*
        operator=(const shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven);
        shared_ptr<graphics::Model>* operator=(const shared_ptr<graphics::Model>& model);
        shared_ptr<oldscape::dash3d::PoseStateRSeven>*
        operator=(shared_ptr<oldscape::dash3d::PoseStateRSeven>&& poseStateRSeven);
        shared_ptr<render::Texture>* operator=(const shared_ptr<render::Texture>& texture);
        shared_ptr<signed char[]>* operator=(const shared_ptr<signed char[]>& arg1);
        shared_ptr(const shared_ptr<signed char[]>& arg1);
        void swap(shared_ptr<signed char[]>& arg1);
        void swap(shared_ptr<oldscape::rseven::BuildTerrainResultLevel>& buildTerrainResultLevel);
        void swap(shared_ptr<graphics::TextureAtlasReference>& textureAtlasReference);
        void swap(shared_ptr<Array<graphics::LabelData>>& labelDatas);
        void swap(shared_ptr<oldscape::rseven::DynamicGeometry>& dynamicGeometry);
        void swap(shared_ptr<game::LightSource>& lightSource);
        void swap(shared_ptr<graphics::Model>& model);
        void swap(shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven);
        shared_ptr<oldscape::rs2lib::PlayerModel>(std::unique_ptr<oldscape::rs2lib::PlayerModel>&& playerModel);
        shared_ptr<oldscape::dash3d::ModelUnlit>* operator=(shared_ptr<oldscape::dash3d::ModelUnlit>&& modelUnlit);
        shared_ptr<oldscape::dash3d::ModelUnlit>* operator=(const shared_ptr<oldscape::dash3d::ModelUnlit>& modelUnlit);
        shared_ptr<oldscape::rs2lib::worldmap::MapSquareData>*
        operator=(const shared_ptr<oldscape::rs2lib::worldmap::MapSquareData>& mapSquareData);
        void reset<oldscape::rs2lib::worldmap::MultiLocMapElement, void>(
            oldscape::rs2lib::worldmap::MultiLocMapElement* multiLocMapElement);
        void reset<oldscape::rs2lib::worldmap::StaticMapElement, void>(
            oldscape::rs2lib::worldmap::StaticMapElement* staticMapElement);
        shared_ptr<oldscape::rs2lib::worldmap::MapElement>*
        operator=(const shared_ptr<oldscape::rs2lib::worldmap::MapElement>& mapElement);
        void swap(shared_ptr<oldscape::dash3d::ModelUnlit>& modelUnlit);
        shared_ptr<unsigned int[]>* operator=(const shared_ptr<unsigned int[]>& arg1);
        void swap(shared_ptr<unsigned int[]>& arg1);
        void operator=(shared_ptr<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>[]>&& locationData);
        void swap(shared_ptr<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>[]>& locationData);
        void swap(shared_ptr<oldscape::rs2lib::worldmap::MapSquareData>& mapSquareData);
        shared_ptr<oldscape::rs2lib::worldmap::MultiLocMapElement, void>(
            oldscape::rs2lib::worldmap::MultiLocMapElement* multiLocMapElement);
        void swap(shared_ptr<oldscape::rs2lib::worldmap::MapElement>& mapElement);
        shared_ptr<oldscape::rs2lib::worldmap::StaticMapElement, void>(
            oldscape::rs2lib::worldmap::StaticMapElement* staticMapElement);
        shared_ptr<oldscape::configdecoder::InvType>* operator=(shared_ptr<oldscape::configdecoder::InvType>&& invType);
        shared_ptr<oldscape::dash3d::ModelSource>&
        operator= <oldscape::dash3d::ModelLit>(const shared_ptr<oldscape::dash3d::ModelLit>& modelLit);
        shared_ptr<oldscape::configdecoder::MesAnimType>*
        operator=(shared_ptr<oldscape::configdecoder::MesAnimType>&& mesAnimType);
        shared_ptr<oldscape::configdecoder::ObjSprite>*
        operator=(const shared_ptr<oldscape::configdecoder::ObjSprite>& objSprite);
        shared_ptr<oldscape::configdecoder::ObjSprite>*
        operator=(shared_ptr<oldscape::configdecoder::ObjSprite>&& objSprite);
        shared_ptr<oldscape::configdecoder::ParamType>*
        operator=(shared_ptr<oldscape::configdecoder::ParamType>&& paramType);
        shared_ptr<oldscape::dash3d::AnimBase>* operator=(const shared_ptr<oldscape::dash3d::AnimBase>& animBase);
        shared_ptr<oldscape::dash3d::AnimFrameSet>*
        operator=(shared_ptr<oldscape::dash3d::AnimFrameSet>&& animFrameSet);
        shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>*
        operator=(shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>&& oldscapeAnimKeyFrameSet);
        shared_ptr<oldscape::configdecoder::SpotType>*
        operator=(shared_ptr<oldscape::configdecoder::SpotType>&& spotType);
        shared_ptr<oldscape::configdecoder::StructType>*
        operator=(shared_ptr<oldscape::configdecoder::StructType>&& structType);
        shared_ptr<oldscape::configdecoder::VarConBitType>*
        operator=(shared_ptr<oldscape::configdecoder::VarConBitType>&& varConBitType);
        shared_ptr<oldscape::configdecoder::VarConType>*
        operator=(shared_ptr<oldscape::configdecoder::VarConType>&& varConType);
        shared_ptr<oldscape::configdecoder::VarGlobalType>*
        operator=(shared_ptr<oldscape::configdecoder::VarGlobalType>&& varGlobalType);
        shared_ptr<oldscape::configdecoder::VarObjType>*
        operator=(shared_ptr<oldscape::configdecoder::VarObjType>&& varObjType);
        shared_ptr<oldscape::configdecoder::VarnBitType>*
        operator=(shared_ptr<oldscape::configdecoder::VarnBitType>&& varnBitType);
        shared_ptr<oldscape::configdecoder::VarnType>*
        operator=(shared_ptr<oldscape::configdecoder::VarnType>&& varnType);
        shared_ptr<oldscape::configdecoder::DBRowType>*
        operator=(shared_ptr<oldscape::configdecoder::DBRowType>&& dbRowType);
        shared_ptr<oldscape::configdecoder::DBTableType>*
        operator=(shared_ptr<oldscape::configdecoder::DBTableType>&& dbTableType);
        // ... 609 more instantiated members

    private:
        uint8_t _unknown_0[8];
        long field_8;
    };

    // 0x100012930
    uint64_t shared_ptr<oldscape::ClientObj>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000138f0
    uint64_t shared_ptr<oldscape::configdecoder::ObjType>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000260b0
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::operator=(
        const shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>& worldmapAreaMetadata) {

        shared_ptr<oldscape::dash3d::Decor> local_28(worldmapAreaMetadata);
        swap(&local_28, this);
        return this;
    }

    // 0x100026180
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::operator=(
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>&& worldmapAreaMetadata) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(worldmapAreaMetadata);
        swap(&local_28, this);
        return this;
    }

    // 0x10002a460
    shared_ptr<unsigned int[]>::shared_ptr(shared_ptr<unsigned int[]>&& arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = *(uint64_t*)(arg1 + 8);
        arg1.~AutoSingleton();
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)(arg1 + 8) = 0;
        ~AutoSingleton();
    }

    // 0x1000347e0
    shared_ptr<oldscape::dash3d::Wall>::shared_ptr(const shared_ptr<oldscape::dash3d::Wall>& groundDecor) {
        *(uint64_t*)this = *(uint64_t*)groundDecor;
        *(uint64_t*)(this + 8) = *(uint64_t*)(groundDecor + 8);
        IncRef(this);
        tracked_enable_shared_from_this_add_ref((integral_constant<bool, false>*)this);
    }

    // 0x100034810
    void shared_ptr<oldscape::dash3d::Wall>::IncRef() {
        if (*(ref_counter_base**)this != nullptr) {
            (*(ref_counter_base**)this)->IncRef();
        }
    }

    // 0x100034830
    void shared_ptr<oldscape::dash3d::Wall>::tracked_enable_shared_from_this_add_ref(
        const std::integral_constant<bool, false>& integral_constant) {
        (*(AutoSingleton<ShaderThreadPoolSingleton>**)(integral_constant + 8))->~AutoSingleton();
    }

    // 0x100054d20
    bool shared_ptr<oldscape::DBTableIndex>::unique() const {
        return use_count(this) == 1;
    }

    // 0x100054d90
    uint64_t shared_ptr<oldscape::DBTableIndex>::use_count() const {
        if (*(ref_counter_base**)this == nullptr) {
            return 0;
        }
        return (*(ref_counter_base**)this)->GetRefCount();
    }

    // 0x100057f70
    void shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::swap(
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>& worldmapAreaMetadata) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(worldmapAreaMetadata);
        std::swap<ref_counter_base*>(*this, worldmapAreaMetadata);
        std::swap<oldscape::rs2lib::worldmap::WorldmapAreaMetadata*>(*((this + 8)), *((worldmapAreaMetadata + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(worldmapAreaMetadata);
    }

    // 0x100058000
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>&& headbar) {
        *(uint64_t*)this = *(uint64_t*)headbar;
        *(uint64_t*)(this + 8) = *(uint64_t*)(headbar + 8);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(headbar);
        *(uint64_t*)headbar = 0;
        *(uint64_t*)(headbar + 8) = 0;
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
    }

    // 0x100058b00
    shared_ptr<oldscape::rs2lib::worldmap::MapElement>::operator bool() const {
        return field_8 != 0;
    }

    // 0x100062200
    shared_ptr<oldscape::RSevenDebugPresetProvider>&
        shared_ptr<oldscape::RSevenDebugPresetProvider>::operator= <oldscape::FileRSevenDebugPresetProvider, void>(
            shared_ptr<oldscape::FileRSevenDebugPresetProvider>&& fileRSevenDebugPresetProvider) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            &local_28, (shared_ptr<oldscape::dash3d::ModelLit>*)fileRSevenDebugPresetProvider);
        swap(&local_28, this);
        ~shared_ptr(&local_28);
        return this;
    }

    // 0x100064470
    uint64_t shared_ptr<oldscape::RSevenDebugPresetProvider>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10006ba40
    uint64_t shared_ptr<oldscape::rs2lib::InterfaceGraphicMask>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10006c190
    uint64_t shared_ptr<oldscape::rs2lib::InterfaceGraphicMask>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10006d120
    shared_ptr<Array<oldscape::graphics::Pix32>>* shared_ptr<Array<oldscape::graphics::Pix32>>::operator=(
        const shared_ptr<Array<oldscape::graphics::Pix32>>& pix32s) {

        shared_ptr<oldscape::dash3d::Decor> local_28(pix32s);
        swap(&local_28, (shared_ptr<Array<oldscape::graphics::Pix32> _>*)this);
        return this;
    }

    // 0x10006d180
    uint64_t shared_ptr<Array<oldscape::graphics::Pix32>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10006eb90
    uint64_t shared_ptr<Array<oldscape::graphics::Pix32>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100081620
    shared_ptr<oldscape::RSevenDebugPresetProvider>::~shared_ptr() {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        DecRef(this);
    }

    // 0x100081650
    void shared_ptr<oldscape::RSevenDebugPresetProvider>::DecRef() {
        if (*(ref_counter_base**)this != nullptr) {
            (*(ref_counter_base**)this)->DecRef();
        }
    }

    // 0x1000817a0
    void shared_ptr<oldscape::RSevenDebugPresetProvider>::swap(
        shared_ptr<oldscape::RSevenDebugPresetProvider>& rSevenDebugPresetProvider) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(rSevenDebugPresetProvider);
        std::swap<ref_counter_base*>(*this, rSevenDebugPresetProvider);
        std::swap<oldscape::RSevenDebugPresetProvider*>(*((this + 8)), *((rSevenDebugPresetProvider + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(rSevenDebugPresetProvider);
    }

    // 0x1000aaeb0
    uint64_t shared_ptr<oldscape::highlight::HighlightManager>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000b6620
    uint64_t shared_ptr<oldscape::ClientObj>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000b96f0
    uint64_t shared_ptr<oldscape::DBTableIndex>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000b9730
    uint64_t shared_ptr<oldscape::configdecoder::DBTableType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000b9850
    uint64_t shared_ptr<oldscape::configdecoder::DBTableType>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000b9890
    uint64_t shared_ptr<oldscape::configdecoder::DBRowType>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000b9a00
    uint64_t shared_ptr<oldscape::configdecoder::DBRowType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000c0a50
    uint64_t shared_ptr<oldscape::sound::MixerMainThread>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000c0a90
    void shared_ptr<oldscape::sound::WaveStream>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1000c0e30
    uint64_t shared_ptr<oldscape::configdecoder::LocType>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000c15c0
    uint64_t shared_ptr<oldscape::sound::Wave>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000c1600
    uint64_t shared_ptr<oldscape::sound::Decimator>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000c1680
    uint64_t shared_ptr<oldscape::sound::WaveStream>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000c16c0
    shared_ptr<oldscape::sound::WaveStream>*
    shared_ptr<oldscape::sound::WaveStream>::operator=(const shared_ptr<oldscape::sound::WaveStream>& waveStream) {

        shared_ptr<oldscape::dash3d::Decor> local_28(waveStream);
        swap(&local_28, this);
        return this;
    }

    // 0x1000c1730
    uint64_t shared_ptr<oldscape::configdecoder::LocType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000ccf00
    uint64_t shared_ptr<oldscape::jstring::PixfontGeneric>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000d26f0
    uint64_t shared_ptr<oldscape::midi2::MidiPlayerMainThread>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000d7e20
    void shared_ptr<oldscape::rs2lib::IfType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1000d7ea0
    void shared_ptr<oldscape::configdecoder::OldscapeVarTypeList>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1000d7ef0
    void shared_ptr<game::VarContainerSparse>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1000d7f70
    void shared_ptr<oldscape::rs2lib::social::ClanSettings>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1000d7fe0
    void shared_ptr<oldscape::rs2lib::social::ClanChannel>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1000d8100
    void shared_ptr<oldscape::sound::MixerMainThread>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1000d8150
    void shared_ptr<oldscape::sound::Decimator>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1000d8200
    void shared_ptr<oldscape::jstring::PixfontGeneric>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1000d8250
    void shared_ptr<Array<oldscape::graphics::Pix32>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, (shared_ptr<Array<oldscape::graphics::Pix32> _>*)this);
    }

    // 0x1000d82a0
    void shared_ptr<Array<oldscape::graphics::Pix8>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, (shared_ptr<Array<oldscape::graphics::Pix8> _>*)this);
    }

    // 0x1000d8350
    void shared_ptr<oldscape::dash3d::TextureCache>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1000d8470
    void shared_ptr<oldscape::rs2lib::PlayerModel>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1000d84f0
    void shared_ptr<oldscape::ClientPlayer>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1000d8cc0
    void shared_ptr<oldscape::midi2::MidiPlayerMainThread>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1000d9d90
    shared_ptr<oldscape::sound::MixerMainThread>& shared_ptr<oldscape::sound::MixerMainThread>::operator=
        <oldscape::sound::Mixer>(const shared_ptr<oldscape::sound::Mixer>& mixer) {
        shared_ptr<oldscape::midi2::MidiPlayerMainThread> local_28;

        local_28.shared_ptr<oldscape::midi2::MidiPlayer, void>(mixer);
        swap(&local_28, this);
        return this;
    }

    // 0x1000d9e70
    shared_ptr<oldscape::midi2::MidiPlayerMainThread>& shared_ptr<oldscape::midi2::MidiPlayerMainThread>::operator=
        <oldscape::midi2::MidiPlayer>(const shared_ptr<oldscape::midi2::MidiPlayer>& midiPlayer) {
        shared_ptr<oldscape::midi2::MidiPlayerMainThread> local_28;

        shared_ptr<oldscape::midi2::MidiPlayer, void>(&local_28, (shared_ptr<oldscape::sound::Mixer>*)midiPlayer);
        swap(&local_28, this);
        return this;
    }

    // 0x1000d9f70
    shared_ptr<oldscape::sound::Decimator>*
    shared_ptr<oldscape::sound::Decimator>::operator=(shared_ptr<oldscape::sound::Decimator>&& decimator) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(decimator);
        swap(&local_28, this);
        return this;
    }

    // 0x1000da0a0
    shared_ptr<oldscape::jstring::PixfontGeneric>* shared_ptr<oldscape::jstring::PixfontGeneric>::operator=(
        const shared_ptr<oldscape::jstring::PixfontGeneric>& pixfontGeneric) {

        shared_ptr<oldscape::dash3d::Decor> local_28(pixfontGeneric);
        swap(&local_28, this);
        return this;
    }

    // 0x1000da430
    shared_ptr<oldscape::configdecoder::OldscapeVarTypeList>*
    shared_ptr<oldscape::configdecoder::OldscapeVarTypeList>::operator=(
        shared_ptr<oldscape::configdecoder::OldscapeVarTypeList>&& oldscapeVarTypeList) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(oldscapeVarTypeList);
        swap(&local_28, this);
        return this;
    }

    // 0x1000da5a0
    shared_ptr<Array<oldscape::graphics::Pix8>>*
    shared_ptr<Array<oldscape::graphics::Pix8>>::operator=(shared_ptr<Array<oldscape::graphics::Pix8>>&& pix8s) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(pix8s);
        swap(&local_28, (shared_ptr<Array<oldscape::graphics::Pix8> _>*)this);
        return this;
    }

    // 0x1000da6c0
    shared_ptr<Array<oldscape::graphics::Pix32>>*
    shared_ptr<Array<oldscape::graphics::Pix32>>::operator=(shared_ptr<Array<oldscape::graphics::Pix32>>&& pix32s) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(pix32s);
        swap(&local_28, (shared_ptr<Array<oldscape::graphics::Pix32> _>*)this);
        return this;
    }

    // 0x1000da750
    uint64_t shared_ptr<oldscape::graphics::Pix32>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000da790
    shared_ptr<Array<oldscape::graphics::Pix8>>*
    shared_ptr<Array<oldscape::graphics::Pix8>>::operator=(const shared_ptr<Array<oldscape::graphics::Pix8>>& pix8s) {

        shared_ptr<oldscape::dash3d::Decor> local_28(pix8s);
        swap(&local_28, (shared_ptr<Array<oldscape::graphics::Pix8> _>*)this);
        return this;
    }

    // 0x1000da7e0
    uint64_t shared_ptr<Array<oldscape::graphics::Pix8>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000da950
    shared_ptr<oldscape::dash3d::TextureCache>*
    shared_ptr<oldscape::dash3d::TextureCache>::operator=(shared_ptr<oldscape::dash3d::TextureCache>&& textureCache) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(textureCache);
        swap(&local_28, this);
        return this;
    }

    // 0x1000da9a0
    uint64_t shared_ptr<oldscape::dash3d::TextureCache>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000dd260
    shared_ptr<oldscape::LogFileSink>*
    shared_ptr<oldscape::LogFileSink>::operator=(shared_ptr<oldscape::LogFileSink>&& logFileSink) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(logFileSink);
        swap(&local_28, this);
        return this;
    }

    // 0x1000dd3b0
    uint64_t shared_ptr<oldscape::LogFileSink>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000df6b0
    uint64_t shared_ptr<oldscape::ApplicationContext>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000dff50
    uint64_t shared_ptr<oldscape::jstring::PixfontGeneric>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000e09c0
    uint64_t shared_ptr<oldscape::rs2lib::social::ClanChannel>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000e0a40
    uint64_t shared_ptr<oldscape::rs2lib::social::ClanChannelUser>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000e1120
    shared_ptr<oldscape::configdecoder::ObjType>* shared_ptr<oldscape::configdecoder::ObjType>::operator=(
        const shared_ptr<oldscape::configdecoder::ObjType>& objType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(objType);
        swap(&local_28, this);
        return this;
    }

    // 0x1000e52d0
    shared_ptr<oldscape::PacketJ<Array<unsigned char>>>* shared_ptr<oldscape::PacketJ<Array<unsigned char>>>::operator=(
        shared_ptr<oldscape::PacketJ<Array<unsigned char>>>&& packetJ) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(packetJ);
        swap(&local_28, (shared_ptr<oldscape::PacketJ<Array<unsigned char> _> _>*)this);
        return this;
    }

    // 0x1000e6f30
    shared_ptr<oldscape::sound::JagFX>*
    shared_ptr<oldscape::sound::JagFX>::operator=(shared_ptr<oldscape::sound::JagFX>&& jagFX) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(jagFX);
        swap(&local_28, this);
        return this;
    }

    // 0x1000e80a0
    shared_ptr<oldscape::sound::JagFX>*
    shared_ptr<oldscape::sound::JagFX>::operator=(const shared_ptr<oldscape::sound::JagFX>& jagFX) {

        shared_ptr<oldscape::dash3d::Decor> local_28(jagFX);
        swap(&local_28, this);
        return this;
    }

    // 0x1000e80e0
    void shared_ptr<oldscape::sound::JagFX>::reset<oldscape::sound::JagFX, void>(oldscape::sound::JagFX* jagFX) {
        shared_ptr<oldscape::sound::JagFX> local_28;

        shared_ptr<oldscape::sound::JagFX, void>(&local_28, jagFX);
        swap(&local_28, this);
    }

    // 0x1000e8140
    uint64_t shared_ptr<oldscape::sound::JagFX>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000f3500
    uint64_t shared_ptr<oldscape::FolderSelection::FolderSelectionRequest>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000f35f0
    shared_ptr<oldscape::FolderSelection::FolderSelectionRequest>*
    shared_ptr<oldscape::FolderSelection::FolderSelectionRequest>::operator=(
        shared_ptr<oldscape::FolderSelection::FolderSelectionRequest>&& folderSelectionRequest) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(folderSelectionRequest);
        swap(&local_28, this);
        return this;
    }

    // 0x1000f6c10
    uint64_t shared_ptr<oldscape::ClientNpc>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000f9340
    uint64_t shared_ptr<oldscape::configdecoder::NpcType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000f9380
    shared_ptr<oldscape::ClientEntity>*
    shared_ptr<oldscape::ClientEntity>::operator=(shared_ptr<oldscape::ClientEntity>&& clientEntity) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(clientEntity);
        swap(&local_28, this);
        return this;
    }

    // 0x1000f93c0
    shared_ptr<oldscape::ClientEntity>& shared_ptr<oldscape::ClientEntity>::operator=
        <oldscape::ClientPlayer>(const shared_ptr<oldscape::ClientPlayer>& clientPlayer) {

        shared_ptr<oldscape::dash3d::Decor> local_28(clientPlayer);
        swap(&local_28, this);
        return this;
    }

    // 0x1000f9400
    uint64_t shared_ptr<oldscape::ClientEntity>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1000fcb30
    shared_ptr<oldscape::ClientObj>*
    shared_ptr<oldscape::ClientObj>::operator=(const shared_ptr<oldscape::ClientObj>& clientObj) {

        shared_ptr<oldscape::dash3d::Decor> local_28(clientObj);
        swap(&local_28, this);
        return this;
    }

    // 0x1000fce20
    shared_ptr<oldscape::ApplicationContext>&
        shared_ptr<oldscape::ApplicationContext>::operator= <oldscape::DesktopApplicationContext, void>(
            shared_ptr<oldscape::DesktopApplicationContext>&& desktopApplicationContext) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(desktopApplicationContext);
        swap(&local_28, this);
        return this;
    }

    // 0x100101430
    shared_ptr<oldscape::configdecoder::ObjType>*
    shared_ptr<oldscape::configdecoder::ObjType>::operator=(shared_ptr<oldscape::configdecoder::ObjType>&& objType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(objType);
        swap(&local_28, this);
        return this;
    }

    // 0x1001024a0
    uint64_t shared_ptr<oldscape::graphics::Pix32>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001024e0
    shared_ptr<oldscape::graphics::Pix32>*
    shared_ptr<oldscape::graphics::Pix32>::operator=(shared_ptr<oldscape::graphics::Pix32>&& pix32) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(pix32);
        swap(&local_28, this);
        return this;
    }

    // 0x100102520
    shared_ptr<oldscape::graphics::Pix32>*
    shared_ptr<oldscape::graphics::Pix32>::operator=(const shared_ptr<oldscape::graphics::Pix32>& pix32) {

        shared_ptr<oldscape::dash3d::Decor> local_28(pix32);
        swap(&local_28, this);
        return this;
    }

    // 0x100102600
    shared_ptr<oldscape::dash3d::ModelLit>*
    shared_ptr<oldscape::dash3d::ModelLit>::operator=(const shared_ptr<oldscape::dash3d::ModelLit>& modelLit) {

        shared_ptr<oldscape::dash3d::Decor> local_28(modelLit);
        swap(&local_28, this);
        return this;
    }

    // 0x100102640
    uint64_t shared_ptr<oldscape::dash3d::ModelLit>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100102680
    shared_ptr<oldscape::dash3d::ModelLit>*
    shared_ptr<oldscape::dash3d::ModelLit>::operator=(shared_ptr<oldscape::dash3d::ModelLit>&& modelLit) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(modelLit);
        swap(&local_28, this);
        return this;
    }

    // 0x100102c40
    uint64_t shared_ptr<oldscape::dash3d::ModelLit>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10010c860
    shared_ptr<oldscape::configdecoder::NpcType>* shared_ptr<oldscape::configdecoder::NpcType>::operator=(
        const shared_ptr<oldscape::configdecoder::NpcType>& npcType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(npcType);
        swap(&local_28, this);
        return this;
    }

    // 0x10010c8c0
    uint64_t shared_ptr<oldscape::configdecoder::VarpType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10010fb90
    uint64_t shared_ptr<oldscape::ClientNpc>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100110400
    uint64_t shared_ptr<oldscape::dash3d::Wall>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100110440
    uint64_t shared_ptr<oldscape::dash3d::ModelSource>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100110550
    uint64_t shared_ptr<oldscape::dash3d::Decor>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100110590
    uint64_t shared_ptr<oldscape::dash3d::GroundDecor>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001105d0
    uint64_t shared_ptr<oldscape::dash3d::Sprite>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100110ac0
    uint64_t shared_ptr<oldscape::configdecoder::HeadbarQueue>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100110c50
    uint64_t shared_ptr<oldscape::configdecoder::HeadbarType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100110c90
    uint64_t shared_ptr<oldscape::Headbar>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100111010
    shared_ptr<oldscape::configdecoder::HitmarkType>* shared_ptr<oldscape::configdecoder::HitmarkType>::operator=(
        shared_ptr<oldscape::configdecoder::HitmarkType>&& hitmarkType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(hitmarkType);
        swap(&local_28, this);
        return this;
    }

    // 0x100111050
    uint64_t shared_ptr<oldscape::configdecoder::HitmarkType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100111090
    shared_ptr<oldscape::jstring::PixfontGeneric>* shared_ptr<oldscape::jstring::PixfontGeneric>::operator=(
        shared_ptr<oldscape::jstring::PixfontGeneric>&& pixfontGeneric) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(pixfontGeneric);
        swap(&local_28, this);
        return this;
    }

    // 0x100112550
    void shared_ptr<oldscape::ClientNpc>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1001126e0
    shared_ptr<oldscape::rs2lib::social::ClanSettings>* shared_ptr<oldscape::rs2lib::social::ClanSettings>::operator=(
        shared_ptr<oldscape::rs2lib::social::ClanSettings>&& clanSettings) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(clanSettings);
        swap(&local_28, this);
        return this;
    }

    // 0x100112730
    shared_ptr<oldscape::rs2lib::social::ClanChannel>* shared_ptr<oldscape::rs2lib::social::ClanChannel>::operator=(
        shared_ptr<oldscape::rs2lib::social::ClanChannel>&& clanChannel) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(clanChannel);
        swap(&local_28, this);
        return this;
    }

    // 0x1001129c0
    shared_ptr<oldscape::ClientPlayer>*
    shared_ptr<oldscape::ClientPlayer>::operator=(shared_ptr<oldscape::ClientPlayer>&& clientPlayer) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(clientPlayer);
        swap(&local_28, this);
        return this;
    }

    // 0x100113750
    uint64_t shared_ptr<oldscape::configdecoder::OldscapeVarTypeList>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100113990
    shared_ptr<oldscape::dash3d::ModelSource>& shared_ptr<oldscape::dash3d::ModelSource>::operator=
        <oldscape::ClientLocAnim, void>(shared_ptr<oldscape::ClientLocAnim>&& clientLocAnim) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(clientLocAnim);
        swap(&local_28, this);
        return this;
    }

    // 0x100113f00
    uint64_t shared_ptr<oldscape::ClientProj>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100114100
    shared_ptr<oldscape::rs2lib::social::ClanChannel>* shared_ptr<oldscape::rs2lib::social::ClanChannel>::operator=(
        const shared_ptr<oldscape::rs2lib::social::ClanChannel>& clanChannel) {

        shared_ptr<oldscape::dash3d::Decor> local_28(clanChannel);
        swap(&local_28, this);
        return this;
    }

    // 0x1001142a0
    shared_ptr<oldscape::rs2lib::social::ClanSettings>* shared_ptr<oldscape::rs2lib::social::ClanSettings>::operator=(
        const shared_ptr<oldscape::rs2lib::social::ClanSettings>& clanSettings) {

        shared_ptr<oldscape::dash3d::Decor> local_28(clanSettings);
        swap(&local_28, this);
        return this;
    }

    // 0x1001143d0
    uint64_t shared_ptr<oldscape::rs2lib::social::ClanChannelDelta>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100114410
    uint64_t shared_ptr<oldscape::rs2lib::social::ClanChannel>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001144f0
    uint64_t shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100114530
    uint64_t shared_ptr<oldscape::rs2lib::social::ClanSettings>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100117150
    shared_ptr<game::VarContainerSparse>*
    shared_ptr<game::VarContainerSparse>::operator=(shared_ptr<game::VarContainerSparse>&& varContainerSparse) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(varContainerSparse);
        swap(&local_28, this);
        return this;
    }

    // 0x100119bd0
    shared_ptr<oldscape::ClientNpc>*
    shared_ptr<oldscape::ClientNpc>::operator=(shared_ptr<oldscape::ClientNpc>&& clientNpc) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(clientNpc);
        swap(&local_28, this);
        return this;
    }

    // 0x100119c20
    shared_ptr<oldscape::configdecoder::NpcType>*
    shared_ptr<oldscape::configdecoder::NpcType>::operator=(shared_ptr<oldscape::configdecoder::NpcType>&& npcType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(npcType);
        swap(&local_28, this);
        return this;
    }

    // 0x10011dac0
    shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>*
    shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>::operator=(
        shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>&& objTypeCustomisation) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(objTypeCustomisation);
        swap(&local_28, this);
        return this;
    }

    // 0x10011db00
    shared_ptr<oldscape::rs2lib::PlayerModel>*
    shared_ptr<oldscape::rs2lib::PlayerModel>::operator=(shared_ptr<oldscape::rs2lib::PlayerModel>&& playerModel) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(playerModel);
        swap(&local_28, this);
        return this;
    }

    // 0x10011f3a0
    uint64_t shared_ptr<oldscape::input::InputForm>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10011f960
    void shared_ptr<oldscape::graphics::Pix32>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100121550
    shared_ptr<oldscape::input::InputForm>*
    shared_ptr<oldscape::input::InputForm>::operator=(shared_ptr<oldscape::input::InputForm>&& inputForm) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(inputForm);
        swap(&local_28, this);
        return this;
    }

    // 0x1001250e0
    shared_ptr<oldscape::configdecoder::LocType>*
    shared_ptr<oldscape::configdecoder::LocType>::operator=(shared_ptr<oldscape::configdecoder::LocType>&& locType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(locType);
        swap(&local_28, this);
        return this;
    }

    // 0x10012afa0
    void shared_ptr<oldscape::PacketJ<Array<unsigned char>>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, (shared_ptr<oldscape::PacketJ<Array<unsigned char> _> _>*)this);
    }

    // 0x10012aff0
    void shared_ptr<oldscape::PacketJ<Array<unsigned char>>>::swap(
        shared_ptr<oldscape::PacketJ<Array<unsigned char>>>& packetJ) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(packetJ);
        std::swap<ref_counter_base*>(*this, packetJ);
        std::swap<oldscape::PacketJ<Array<unsigned char>>*>(*((this + 8)), *((packetJ + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(packetJ);
    }

    // 0x10012d380
    shared_ptr<Array<unsigned char>[]>::~shared_ptr() {
        DecRef();
    }

    // 0x100132f50
    void
    shared_ptr<oldscape::jstring::PixfontGeneric>::swap(shared_ptr<oldscape::jstring::PixfontGeneric>& pixfontGeneric) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pixfontGeneric);
        std::swap<ref_counter_base*>(*this, pixfontGeneric);
        std::swap<oldscape::jstring::PixfontGeneric*>(*((this + 8)), *((pixfontGeneric + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pixfontGeneric);
    }

    // 0x100136990
    long shared_ptr<unsigned int[]>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                340, nullptr);
        }
        return arg1 * 4 + *(long*)(this + 8);
    }

    // 0x100137830
    void shared_ptr<oldscape::sound::WaveStream>::swap(shared_ptr<oldscape::sound::WaveStream>& waveStream) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(waveStream);
        std::swap<ref_counter_base*>(*this, waveStream);
        std::swap<oldscape::sound::WaveStream*>(*((this + 8)), *((waveStream + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(waveStream);
    }

    // 0x100138100
    shared_ptr<oldscape::sound::Wave>::shared_ptr<oldscape::sound::Wave, void>(oldscape::sound::Wave* wave) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<oldscape::sound::Wave>* this_00 = (ref_counter<oldscape::sound::Wave>*)operator new(24);
        new (this_00) ref_counter<oldscape::sound::Wave>(wave);
        *(ref_counter<oldscape::sound::Wave>**)this = this_00;
        *(Wave**)(this + 8) = wave;
        tracked_enable_shared_from_this((integral_constant<bool, false>*)this);
        tracked_enable_shared_from_this((integral_constant<bool, false>*)this);
    }

    // 0x100138180
    void shared_ptr<oldscape::sound::Wave>::enable_shared_from_this(
        const std::integral_constant<bool, false>& integral_constant) {
        (*(AutoSingleton<ShaderThreadPoolSingleton>**)integral_constant)->~AutoSingleton();
    }

    // 0x100138290
    shared_ptr<oldscape::sound::WaveStream>::shared_ptr<oldscape::sound::WaveStream, void>(
        oldscape::sound::WaveStream* waveStream) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<oldscape::sound::WaveStream>* this_00 = (ref_counter<oldscape::sound::WaveStream>*)operator new(24);
        new (this_00) ref_counter<oldscape::sound::WaveStream>(waveStream);
        *(ref_counter<oldscape::sound::WaveStream>**)this = this_00;
        *(WaveStream**)(this + 8) = waveStream;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x10013bda0
    void shared_ptr<oldscape::configdecoder::OldscapeVarTypeList>::swap(
        shared_ptr<oldscape::configdecoder::OldscapeVarTypeList>& oldscapeVarTypeList) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeVarTypeList);
        std::swap<ref_counter_base*>(*this, oldscapeVarTypeList);
        std::swap<oldscape::configdecoder::OldscapeVarTypeList*>(*((this + 8)), *((oldscapeVarTypeList + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeVarTypeList);
    }

    // 0x10013be20
    void shared_ptr<game::VarContainerSparse>::swap(shared_ptr<game::VarContainerSparse>& varContainerSparse) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varContainerSparse);
        std::swap<ref_counter_base*>(*this, varContainerSparse);
        std::swap<game::VarContainerSparse*>(*((this + 8)), *((varContainerSparse + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varContainerSparse);
    }

    // 0x10013c0f0
    void shared_ptr<oldscape::rs2lib::social::ClanSettings>::swap(
        shared_ptr<oldscape::rs2lib::social::ClanSettings>& clanSettings) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clanSettings);
        std::swap<ref_counter_base*>(*this, clanSettings);
        std::swap<oldscape::rs2lib::social::ClanSettings*>(*((this + 8)), *((clanSettings + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clanSettings);
    }

    // 0x10013c1e0
    void shared_ptr<oldscape::rs2lib::social::ClanChannel>::swap(
        shared_ptr<oldscape::rs2lib::social::ClanChannel>& clanChannel) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clanChannel);
        std::swap<ref_counter_base*>(*this, clanChannel);
        std::swap<oldscape::rs2lib::social::ClanChannel*>(*((this + 8)), *((clanChannel + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clanChannel);
    }

    // 0x10013c790
    void
    shared_ptr<oldscape::sound::MixerMainThread>::swap(shared_ptr<oldscape::sound::MixerMainThread>& mixerMainThread) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mixerMainThread);
        std::swap<ref_counter_base*>(*this, mixerMainThread);
        std::swap<oldscape::sound::MixerMainThread*>(*((this + 8)), *((mixerMainThread + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mixerMainThread);
    }

    // 0x10013c810
    void shared_ptr<oldscape::sound::Decimator>::swap(shared_ptr<oldscape::sound::Decimator>& decimator) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(decimator);
        std::swap<ref_counter_base*>(*this, decimator);
        std::swap<oldscape::sound::Decimator*>(*((this + 8)), *((decimator + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(decimator);
    }

    // 0x10013ca70
    void shared_ptr<Array<oldscape::graphics::Pix32>>::swap(shared_ptr<Array<oldscape::graphics::Pix32>>& pix32s) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pix32s);
        std::swap<ref_counter_base*>(*this, pix32s);
        std::swap<Array<oldscape::graphics::Pix32>*>(*((this + 8)), *((pix32s + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pix32s);
    }

    // 0x10013caf0
    void shared_ptr<Array<oldscape::graphics::Pix8>>::swap(shared_ptr<Array<oldscape::graphics::Pix8>>& pix8s) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pix8s);
        std::swap<ref_counter_base*>(*this, pix8s);
        std::swap<Array<oldscape::graphics::Pix8>*>(*((this + 8)), *((pix8s + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pix8s);
    }

    // 0x10013cbe0
    void shared_ptr<oldscape::dash3d::TextureCache>::swap(shared_ptr<oldscape::dash3d::TextureCache>& textureCache) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(textureCache);
        std::swap<ref_counter_base*>(*this, textureCache);
        std::swap<oldscape::dash3d::TextureCache*>(*((this + 8)), *((textureCache + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(textureCache);
    }

    // 0x10013ce10
    shared_ptr<oldscape::midi2::MidiPlayerMainThread>* shared_ptr<oldscape::midi2::MidiPlayerMainThread>::operator=(
        const shared_ptr<oldscape::midi2::MidiPlayerMainThread>& midiPlayerMainThread) {

        shared_ptr<oldscape::dash3d::Decor> local_28(midiPlayerMainThread);
        swap(&local_28, this);
        return this;
    }

    // 0x10013ce50
    void shared_ptr<oldscape::midi2::MidiPlayerMainThread>::swap(
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>& midiPlayerMainThread) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(midiPlayerMainThread);
        std::swap<ref_counter_base*>(*this, midiPlayerMainThread);
        std::swap<oldscape::midi2::MidiPlayerMainThread*>(*((this + 8)), *((midiPlayerMainThread + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(midiPlayerMainThread);
    }

    // 0x10013cf10
    void shared_ptr<oldscape::rs2lib::PlayerModel>::swap(shared_ptr<oldscape::rs2lib::PlayerModel>& playerModel) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(playerModel);
        std::swap<ref_counter_base*>(*this, playerModel);
        std::swap<oldscape::rs2lib::PlayerModel*>(*((this + 8)), *((playerModel + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(playerModel);
    }

    // 0x10013d8f0
    void shared_ptr<Linkable<oldscape::sound::PCMStream>>::reset<Linkable<oldscape::sound::PCMStream>, void>(
        Linkable<oldscape::sound::PCMStream>* linkable) {
        shared_ptr<Linkable<oldscape::sound::PCMStream>> local_28;

        shared_ptr<Linkable<oldscape::sound::PCMStream>, void>(&local_28, linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::sound::PCMStream> _>*)this);
    }

    // 0x10013d950
    uint64_t shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10013d990
    shared_ptr<Linkable<oldscape::sound::PCMStream>>* shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator=(
        const shared_ptr<Linkable<oldscape::sound::PCMStream>>& linkable) {

        shared_ptr<oldscape::dash3d::Decor> local_28(linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::sound::PCMStream> _>*)this);
        return this;
    }

    // 0x10013d9f0
    void
    shared_ptr<Linkable<oldscape::sound::PCMStream>>::swap(shared_ptr<Linkable<oldscape::sound::PCMStream>>& linkable) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
        std::swap<ref_counter_base*>(*this, linkable);
        std::swap<Linkable<oldscape::sound::PCMStream>*>(*((this + 8)), *((linkable + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
    }

    // 0x10013da50
    shared_ptr<Linkable<oldscape::sound::PCMStream>>::shared_ptr<Linkable<oldscape::sound::PCMStream>, void>(
        Linkable<oldscape::sound::PCMStream>* linkable) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<Linkable<oldscape::sound::PCMStream>>* this_00 =
            (ref_counter<Linkable<oldscape::sound::PCMStream>>*)operator new(24);
        new (this_00) ref_counter<Linkable<oldscape::sound::PCMStream>>(linkable);
        *(ref_counter<Linkable<oldscape::sound::PCMStream>>**)this = this_00;
        *(Linkable<oldscape::sound::PCMStream>**)(this + 8) = linkable;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x10013dbb0
    void
    shared_ptr<Linkable<oldscape::sound::MixerController>>::reset<Linkable<oldscape::sound::MixerController>, void>(
        Linkable<oldscape::sound::MixerController>* linkable) {
        shared_ptr<Linkable<oldscape::sound::MixerController>> local_28;

        shared_ptr<Linkable<oldscape::sound::MixerController>, void>(&local_28, linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::sound::MixerController> _>*)this);
    }

    // 0x10013dc10
    uint64_t shared_ptr<Linkable<oldscape::sound::MixerController>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10013dc50
    shared_ptr<Linkable<oldscape::sound::MixerController>>*
    shared_ptr<Linkable<oldscape::sound::MixerController>>::operator=(
        const shared_ptr<Linkable<oldscape::sound::MixerController>>& linkable) {

        shared_ptr<oldscape::dash3d::Decor> local_28(linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::sound::MixerController> _>*)this);
        return this;
    }

    // 0x10013dcb0
    void shared_ptr<Linkable<oldscape::sound::MixerController>>::swap(
        shared_ptr<Linkable<oldscape::sound::MixerController>>& linkable) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
        std::swap<ref_counter_base*>(*this, linkable);
        std::swap<Linkable<oldscape::sound::MixerController>*>(*((this + 8)), *((linkable + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
    }

    // 0x10013dd10
    shared_ptr<Linkable<oldscape::sound::MixerController>>::shared_ptr<
        Linkable<oldscape::sound::MixerController>, void>(Linkable<oldscape::sound::MixerController>* linkable) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<Linkable<oldscape::sound::MixerController>>* this_00 =
            (ref_counter<Linkable<oldscape::sound::MixerController>>*)operator new(24);
        new (this_00) ref_counter<Linkable<oldscape::sound::MixerController>>(linkable);
        *(ref_counter<Linkable<oldscape::sound::MixerController>>**)this = this_00;
        *(Linkable<oldscape::sound::MixerController>**)(this + 8) = linkable;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x10013dfa0
    void shared_ptr<Linkable<oldscape::sound::PCMStream>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, (shared_ptr<Linkable<oldscape::sound::PCMStream> _>*)this);
    }

    // 0x10013e0b0
    shared_ptr<oldscape::sound::MixerMainThread>::shared_ptr<oldscape::sound::Mixer, void>(
        const shared_ptr<oldscape::sound::Mixer>& mixer) {
        *(uint64_t*)this = *(uint64_t*)mixer;
        long lVar1 = *(long*)(mixer + 8) + 72;
        if (*(long*)(mixer + 8) == 0) {
            lVar1 = 0;
        }
        *(long*)(this + 8) = lVar1;
        IncRef();
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
    }

    // 0x100141db0
    void shared_ptr<oldscape::configdecoder::OldscapeVarType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100141df0
    void shared_ptr<oldscape::configdecoder::OldscapeVarType>::swap(
        shared_ptr<oldscape::configdecoder::OldscapeVarType>& oldscapeVarType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeVarType);
        std::swap<ref_counter_base*>(*this, oldscapeVarType);
        std::swap<oldscape::configdecoder::OldscapeVarType*>(*((this + 8)), *((oldscapeVarType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeVarType);
    }

    // 0x100142410
    shared_ptr<oldscape::configdecoder::OldscapeVarType>*
    shared_ptr<oldscape::configdecoder::OldscapeVarType>::operator=(
        const shared_ptr<oldscape::configdecoder::OldscapeVarType>& oldscapeVarType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(oldscapeVarType);
        swap(&local_28, this);
        return this;
    }

    // 0x100142450
    shared_ptr<oldscape::configdecoder::OldscapeVarType>*
    shared_ptr<oldscape::configdecoder::OldscapeVarType>::operator=(
        shared_ptr<oldscape::configdecoder::OldscapeVarType>&& oldscapeVarType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(oldscapeVarType);
        swap(&local_28, this);
        return this;
    }

    // 0x100143a70
    uint64_t shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100143ab0
    void shared_ptr<Linkable<oldscape::dash3d::Texture>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, (shared_ptr<Linkable<oldscape::dash3d::Texture> _>*)this);
    }

    // 0x100143b00
    shared_ptr<Linkable<oldscape::dash3d::Texture>>* shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator=(
        const shared_ptr<Linkable<oldscape::dash3d::Texture>>& linkable) {

        shared_ptr<oldscape::dash3d::Decor> local_28(linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::dash3d::Texture> _>*)this);
        return this;
    }

    // 0x100143b50
    void
    shared_ptr<Linkable<oldscape::dash3d::Texture>>::swap(shared_ptr<Linkable<oldscape::dash3d::Texture>>& linkable) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
        std::swap<ref_counter_base*>(*this, linkable);
        std::swap<Linkable<oldscape::dash3d::Texture>*>(*((this + 8)), *((linkable + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
    }

    // 0x100144150
    void shared_ptr<oldscape::LogFileSink>::swap(shared_ptr<oldscape::LogFileSink>& logFileSink) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(logFileSink);
        std::swap<ref_counter_base*>(*this, logFileSink);
        std::swap<oldscape::LogFileSink*>(*((this + 8)), *((logFileSink + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(logFileSink);
    }

    // 0x100144a60
    void shared_ptr<oldscape::configdecoder::ObjType>::swap(shared_ptr<oldscape::configdecoder::ObjType>& objType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(objType);
        std::swap<ref_counter_base*>(*this, objType);
        std::swap<oldscape::configdecoder::ObjType*>(*((this + 8)), *((objType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(objType);
    }

    // 0x1001473b0
    void shared_ptr<oldscape::sound::JagFX>::swap(shared_ptr<oldscape::sound::JagFX>& jagFX) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(jagFX);
        std::swap<ref_counter_base*>(*this, jagFX);
        std::swap<oldscape::sound::JagFX*>(*((this + 8)), *((jagFX + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(jagFX);
    }

    // 0x100147b80
    shared_ptr<oldscape::sound::JagFX>::shared_ptr<oldscape::sound::JagFX, void>(oldscape::sound::JagFX* jagFX) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<oldscape::sound::JagFX>* this_00 = (ref_counter<oldscape::sound::JagFX>*)operator new(24);
        new (this_00) ref_counter<oldscape::sound::JagFX>(jagFX);
        *(ref_counter<oldscape::sound::JagFX>**)this = this_00;
        *(JagFX**)(this + 8) = jagFX;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x100148280
    void shared_ptr<oldscape::FolderSelection::FolderSelectionRequest>::swap(
        shared_ptr<oldscape::FolderSelection::FolderSelectionRequest>& folderSelectionRequest) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(folderSelectionRequest);
        std::swap<ref_counter_base*>(*this, folderSelectionRequest);
        std::swap<oldscape::FolderSelection::FolderSelectionRequest*>(*((this + 8)), *((folderSelectionRequest + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(folderSelectionRequest);
    }

    // 0x10014b810
    void shared_ptr<oldscape::ClientEntity>::swap(shared_ptr<oldscape::ClientEntity>& clientEntity) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientEntity);
        std::swap<ref_counter_base*>(*this, clientEntity);
        std::swap<oldscape::ClientEntity*>(*((this + 8)), *((clientEntity + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientEntity);
    }

    // 0x10014c290
    uint64_t shared_ptr<oldscape::MapSpotAnim>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10014cbe0
    void shared_ptr<oldscape::ClientObj>::swap(shared_ptr<oldscape::ClientObj>& clientObj) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientObj);
        std::swap<ref_counter_base*>(*this, clientObj);
        std::swap<oldscape::ClientObj*>(*((this + 8)), *((clientObj + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientObj);
    }

    // 0x10014dc50
    void shared_ptr<oldscape::input::InputForm>::reset<oldscape::input::InputForm, void>(
        oldscape::input::InputForm* inputForm) {
        shared_ptr<oldscape::input::InputForm> local_28;

        shared_ptr<oldscape::input::InputForm, void>(&local_28, inputForm);
        swap(&local_28, this);
    }

    // 0x10014dcc0
    void shared_ptr<oldscape::input::InputForm>::swap(shared_ptr<oldscape::input::InputForm>& inputForm) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(inputForm);
        std::swap<ref_counter_base*>(*this, inputForm);
        std::swap<oldscape::input::InputForm*>(*((this + 8)), *((inputForm + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(inputForm);
    }

    // 0x10014dd20
    shared_ptr<oldscape::input::InputForm>::shared_ptr<oldscape::input::InputForm, void>(
        oldscape::input::InputForm* inputForm) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<oldscape::input::InputForm>* this_00 = (ref_counter<oldscape::input::InputForm>*)operator new(24);
        new (this_00) ref_counter<oldscape::input::InputForm>(inputForm);
        *(ref_counter<oldscape::input::InputForm>**)this = this_00;
        *(InputForm**)(this + 8) = inputForm;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x10014df70
    void shared_ptr<oldscape::ApplicationContext>::swap(shared_ptr<oldscape::ApplicationContext>& applicationContext) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(applicationContext);
        std::swap<ref_counter_base*>(*this, applicationContext);
        std::swap<oldscape::ApplicationContext*>(*((this + 8)), *((applicationContext + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(applicationContext);
    }

    // 0x10014e040
    void shared_ptr<oldscape::graphics::Pix32>::swap(shared_ptr<oldscape::graphics::Pix32>& pix32) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pix32);
        std::swap<ref_counter_base*>(*this, pix32);
        std::swap<oldscape::graphics::Pix32*>(*((this + 8)), *((pix32 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pix32);
    }

    // 0x10014e0c0
    void shared_ptr<oldscape::dash3d::ModelLit>::swap(shared_ptr<oldscape::dash3d::ModelLit>& modelLit) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelLit);
        std::swap<ref_counter_base*>(*this, modelLit);
        std::swap<oldscape::dash3d::ModelLit*>(*((this + 8)), *((modelLit + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelLit);
    }

    // 0x10014f370
    void shared_ptr<oldscape::configdecoder::NpcType>::swap(shared_ptr<oldscape::configdecoder::NpcType>& npcType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(npcType);
        std::swap<ref_counter_base*>(*this, npcType);
        std::swap<oldscape::configdecoder::NpcType*>(*((this + 8)), *((npcType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(npcType);
    }

    // 0x100150060
    void shared_ptr<oldscape::configdecoder::HitmarkType>::swap(
        shared_ptr<oldscape::configdecoder::HitmarkType>& hitmarkType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(hitmarkType);
        std::swap<ref_counter_base*>(*this, hitmarkType);
        std::swap<oldscape::configdecoder::HitmarkType*>(*((this + 8)), *((hitmarkType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(hitmarkType);
    }

    // 0x1001506c0
    void shared_ptr<oldscape::ClientNpc>::swap(shared_ptr<oldscape::ClientNpc>& clientNpc) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientNpc);
        std::swap<ref_counter_base*>(*this, clientNpc);
        std::swap<oldscape::ClientNpc*>(*((this + 8)), *((clientNpc + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientNpc);
    }

    // 0x100151790
    void shared_ptr<oldscape::dash3d::ModelSource>::swap(shared_ptr<oldscape::dash3d::ModelSource>& modelSource) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelSource);
        std::swap<ref_counter_base*>(*this, modelSource);
        std::swap<oldscape::dash3d::ModelSource*>(*((this + 8)), *((modelSource + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelSource);
    }

    // 0x100152330
    uint64_t
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100152370
    void shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28,
             (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry> _>*)this);
    }

    // 0x1001523c0
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator=(
        const shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>& linkable) {

        shared_ptr<oldscape::dash3d::Decor> local_28(linkable);
        swap(&local_28,
             (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry> _>*)this);
        return this;
    }

    // 0x100152410
    void shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::swap(
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>& linkable) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
        std::swap<ref_counter_base*>(*this, linkable);
        std::swap<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>*>(*((this + 8)),
                                                                                                *((linkable + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
    }

    // 0x100152680
    uint64_t
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001526c0
    void shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28,
             (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry> _>*)this);
    }

    // 0x100152710
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator=(
        const shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>& linkable) {

        shared_ptr<oldscape::dash3d::Decor> local_28(linkable);
        swap(&local_28,
             (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry> _>*)this);
        return this;
    }

    // 0x100152760
    void shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::swap(
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>& linkable) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
        std::swap<ref_counter_base*>(*this, linkable);
        std::swap<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*>(*((this + 8)),
                                                                                                  *((linkable + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
    }

    // 0x1001541a0
    shared_ptr<oldscape::configdecoder::HeadbarType>* shared_ptr<oldscape::configdecoder::HeadbarType>::operator=(
        const shared_ptr<oldscape::configdecoder::HeadbarType>& headbarType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(headbarType);
        swap(&local_28, this);
        return this;
    }

    // 0x100154240
    void shared_ptr<oldscape::configdecoder::HeadbarType>::swap(
        shared_ptr<oldscape::configdecoder::HeadbarType>& headbarType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(headbarType);
        std::swap<ref_counter_base*>(*this, headbarType);
        std::swap<oldscape::configdecoder::HeadbarType*>(*((this + 8)), *((headbarType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(headbarType);
    }

    // 0x100155b20
    void shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>::swap(
        shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>& objTypeCustomisation) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(objTypeCustomisation);
        std::swap<ref_counter_base*>(*this, objTypeCustomisation);
        std::swap<oldscape::configdecoder::ObjTypeCustomisation*>(*((this + 8)), *((objTypeCustomisation + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(objTypeCustomisation);
    }

    // 0x100155c80
    shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>*
    shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>::operator=(
        const shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>& objTypeCustomisation) {

        shared_ptr<oldscape::dash3d::Decor> local_28(objTypeCustomisation);
        swap(&local_28, this);
        return this;
    }

    // 0x10015f170
    uint64_t shared_ptr<oldscape::configdecoder::EnumType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10015f1b0
    shared_ptr<oldscape::configdecoder::EnumType>*
    shared_ptr<oldscape::configdecoder::EnumType>::operator=(shared_ptr<oldscape::configdecoder::EnumType>&& enumType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(enumType);
        swap(&local_28, this);
        return this;
    }

    // 0x10016b430
    uint64_t shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10016feb0
    void shared_ptr<oldscape::configdecoder::EnumType>::swap(shared_ptr<oldscape::configdecoder::EnumType>& enumType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(enumType);
        std::swap<ref_counter_base*>(*this, enumType);
        std::swap<oldscape::configdecoder::EnumType*>(*((this + 8)), *((enumType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(enumType);
    }

    // 0x10017b400
    uint64_t shared_ptr<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10017b670
    uint64_t shared_ptr<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10017bef0
    uint64_t shared_ptr<oldscape::ApplicationContext>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10017d390
    uint64_t shared_ptr<oldscape::ChatLine>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10017d3d0
    shared_ptr<oldscape::ChatLine>*
    shared_ptr<oldscape::ChatLine>::operator=(const shared_ptr<oldscape::ChatLine>& chatLine) {

        shared_ptr<oldscape::dash3d::Decor> local_28(chatLine);
        swap(&local_28, this);
        return this;
    }

    // 0x10017dfa0
    shared_ptr<oldscape::ChatLine>*
    shared_ptr<oldscape::ChatLine>::operator=(shared_ptr<oldscape::ChatLine>&& chatLine) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(chatLine);
        swap(&local_28, this);
        return this;
    }

    // 0x10017e6f0
    uint64_t shared_ptr<oldscape::rs2lib::social::DisplayName>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10017e880
    shared_ptr<oldscape::rs2lib::social::DisplayName>* shared_ptr<oldscape::rs2lib::social::DisplayName>::operator=(
        shared_ptr<oldscape::rs2lib::social::DisplayName>&& displayName) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(displayName);
        swap(&local_28, this);
        return this;
    }

    // 0x10017f5f0
    uint64_t shared_ptr<oldscape::rs2lib::IfType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001813b0
    uint64_t shared_ptr<oldscape::PacketJ<Array<unsigned char>>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001813f0
    uint64_t shared_ptr<oldscape::ClientScript>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100181880
    uint64_t shared_ptr<oldscape::ClientScript>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100182810
    uint64_t shared_ptr<oldscape::configdecoder::VarcType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100182900
    uint64_t shared_ptr<oldscape::configdecoder::VeccType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001856a0
    shared_ptr<oldscape::rs2lib::IfType>*
    shared_ptr<oldscape::rs2lib::IfType>::operator=(shared_ptr<oldscape::rs2lib::IfType>&& ifType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(ifType);
        swap(&local_28, this);
        return this;
    }

    // 0x100185b80
    uint64_t shared_ptr<oldscape::ClientPlayer>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100185d70
    uint64_t shared_ptr<oldscape::rs2lib::social::DisplayName>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100187390
    uint64_t shared_ptr<oldscape::configdecoder::SpotType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001873d0
    shared_ptr<oldscape::configdecoder::SeqType>*
    shared_ptr<oldscape::configdecoder::SeqType>::operator=(shared_ptr<oldscape::configdecoder::SeqType>&& seqType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(seqType);
        swap(&local_28, this);
        return this;
    }

    // 0x100187500
    uint64_t shared_ptr<oldscape::configdecoder::SeqType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10018a770
    uint64_t shared_ptr<Js5WorkerThread>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10018ab70
    uint64_t shared_ptr<oldscape::jagex3::Js5>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10018ac30
    uint64_t shared_ptr<oldscape::jagex3::Js5>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10018bd00
    uint64_t shared_ptr<oldscape::PacketJ<Array<unsigned char>>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10018bdf0
    uint64_t shared_ptr<oldscape::configdecoder::OldscapeVarType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10018c1d0
    shared_ptr<oldscape::ClientPlayer>*
    shared_ptr<oldscape::ClientPlayer>::operator=(const shared_ptr<oldscape::ClientPlayer>& clientPlayer) {

        shared_ptr<oldscape::dash3d::Decor> local_28(clientPlayer);
        swap(&local_28, this);
        return this;
    }

    // 0x10018c220
    uint64_t shared_ptr<oldscape::ClientPlayer>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10018e4c0
    shared_ptr<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*
    shared_ptr<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::operator=(
        shared_ptr<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>&& packetJ) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(packetJ);
        swap((shared_ptr<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_28,
             (shared_ptr<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> _> _>*)this);
        return this;
    }

    // 0x10018ea70
    void shared_ptr<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap((shared_ptr<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*)&local_28,
             (shared_ptr<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> _> _>*)this);
    }

    // 0x10018f530
    shared_ptr<oldscape::ClientScript>*
    shared_ptr<oldscape::ClientScript>::operator=(const shared_ptr<oldscape::ClientScript>& clientScript) {

        shared_ptr<oldscape::dash3d::Decor> local_28(clientScript);
        swap(&local_28, this);
        return this;
    }

    // 0x100190b20
    uint64_t shared_ptr<oldscape::configdecoder::ObjType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100190b60
    shared_ptr<oldscape::rs2lib::IfType>*
    shared_ptr<oldscape::rs2lib::IfType>::operator=(const shared_ptr<oldscape::rs2lib::IfType>& ifType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(ifType);
        swap(&local_28, this);
        return this;
    }

    // 0x100190ec0
    shared_ptr<oldscape::ClientScript>*
    shared_ptr<oldscape::ClientScript>::operator=(shared_ptr<oldscape::ClientScript>&& clientScript) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(clientScript);
        swap(&local_28, this);
        return this;
    }

    // 0x100191300
    uint64_t shared_ptr<oldscape::rs2lib::social::ClanSettings>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100191350
    uint64_t shared_ptr<game::VarContainerSparse>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100195400
    uint64_t shared_ptr<oldscape::rs2lib::IfType>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100195670
    uint64_t shared_ptr<oldscape::rs2lib::PlayerModel>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10019b970
    shared_ptr<Js5WorkerThread>* shared_ptr<Js5WorkerThread>::operator=(shared_ptr<Js5WorkerThread>&& js5WorkerThread) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(js5WorkerThread);
        swap(&local_28, this);
        return this;
    }

    // 0x10019bae0
    shared_ptr<PacketT<Array<unsigned char>>>*
    shared_ptr<PacketT<Array<unsigned char>>>::operator=(shared_ptr<PacketT<Array<unsigned char>>>&& arg1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        swap(&local_28, (shared_ptr<PacketT<Array<unsigned char> _> _>*)this);
        return this;
    }

    // 0x10019bb20
    uint64_t shared_ptr<PacketT<Array<unsigned char>>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10019e3e0
    void shared_ptr<Js5WorkerThread>::swap(shared_ptr<Js5WorkerThread>& js5WorkerThread) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(js5WorkerThread);
        std::swap<ref_counter_base*>(*this, js5WorkerThread);
        std::swap<Js5WorkerThread*>(*((this + 8)), *((js5WorkerThread + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(js5WorkerThread);
    }

    // 0x10019fee0
    void shared_ptr<PacketT<Array<unsigned char>>>::swap(shared_ptr<PacketT<Array<unsigned char>>>& arg1) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<PacketT<Array<unsigned char>>*>(*((this + 8)), *((arg1 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
    }

    // 0x1001a31d0
    shared_ptr<oldscape::configdecoder::LocType>* shared_ptr<oldscape::configdecoder::LocType>::operator=(
        const shared_ptr<oldscape::configdecoder::LocType>& locType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(locType);
        swap(&local_28, this);
        return this;
    }

    // 0x1001a3210
    void shared_ptr<oldscape::configdecoder::LocType>::swap(shared_ptr<oldscape::configdecoder::LocType>& locType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(locType);
        std::swap<ref_counter_base*>(*this, locType);
        std::swap<oldscape::configdecoder::LocType*>(*((this + 8)), *((locType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(locType);
    }

    // 0x1001a6020
    void shared_ptr<oldscape::rs2lib::IfType>::swap(shared_ptr<oldscape::rs2lib::IfType>& ifType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(ifType);
        std::swap<ref_counter_base*>(*this, ifType);
        std::swap<oldscape::rs2lib::IfType*>(*((this + 8)), *((ifType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(ifType);
    }

    // 0x1001a7d70
    void shared_ptr<oldscape::ChatLine>::swap(shared_ptr<oldscape::ChatLine>& chatLine) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(chatLine);
        std::swap<ref_counter_base*>(*this, chatLine);
        std::swap<oldscape::ChatLine*>(*((this + 8)), *((chatLine + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(chatLine);
    }

    // 0x1001a8ee0
    void shared_ptr<oldscape::rs2lib::social::DisplayName>::swap(
        shared_ptr<oldscape::rs2lib::social::DisplayName>& displayName) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(displayName);
        std::swap<ref_counter_base*>(*this, displayName);
        std::swap<oldscape::rs2lib::social::DisplayName*>(*((this + 8)), *((displayName + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(displayName);
    }

    // 0x1001b0260
    void shared_ptr<oldscape::configdecoder::SeqType>::swap(shared_ptr<oldscape::configdecoder::SeqType>& seqType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(seqType);
        std::swap<ref_counter_base*>(*this, seqType);
        std::swap<oldscape::configdecoder::SeqType*>(*((this + 8)), *((seqType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(seqType);
    }

    // 0x1001b2f00
    void shared_ptr<oldscape::ClientPlayer>::swap(shared_ptr<oldscape::ClientPlayer>& clientPlayer) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientPlayer);
        std::swap<ref_counter_base*>(*this, clientPlayer);
        std::swap<oldscape::ClientPlayer*>(*((this + 8)), *((clientPlayer + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientPlayer);
    }

    // 0x1001b3170
    void shared_ptr<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::swap(
        shared_ptr<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>& packetJ) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(packetJ);
        std::swap<ref_counter_base*>(*this, packetJ);
        std::swap<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*>(*((this + 8)), *((packetJ + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(packetJ);
    }

    // 0x1001b3930
    void shared_ptr<oldscape::ClientScript>::swap(shared_ptr<oldscape::ClientScript>& clientScript) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientScript);
        std::swap<ref_counter_base*>(*this, clientScript);
        std::swap<oldscape::ClientScript*>(*((this + 8)), *((clientScript + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientScript);
    }

    // 0x1001c2460
    uint64_t shared_ptr<graphics::SkyBox>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001c3790
    uint64_t shared_ptr<hal::audio::AudioRenderer>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001c6110
    shared_ptr<oldscape::rseven::BuildTerrainResultLevel>*
    shared_ptr<oldscape::rseven::BuildTerrainResultLevel>::operator=(
        shared_ptr<oldscape::rseven::BuildTerrainResultLevel>&& buildTerrainResultLevel) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildTerrainResultLevel);
        swap(&local_28, this);
        return this;
    }

    // 0x1001c6150
    uint64_t shared_ptr<oldscape::rseven::BuildTerrainResultLevel>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001c6dd0
    uint64_t shared_ptr<oldscape::rseven::BuildTerrainResultLevel>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001c7030
    uint64_t shared_ptr<oldscape::dash3d::QuickGround>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001c7250
    uint64_t shared_ptr<oldscape::dash3d::Ground>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001c7f50
    uint64_t shared_ptr<oldscape::dash3d::Texture>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001c86b0
    shared_ptr<graphics::TextureAtlasReference>* shared_ptr<graphics::TextureAtlasReference>::operator=(
        shared_ptr<graphics::TextureAtlasReference>&& textureAtlasReference) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(textureAtlasReference);
        swap(&local_28, this);
        return this;
    }

    // 0x1001c8700
    uint64_t shared_ptr<graphics::TextureAtlasReference>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001cace0
    shared_ptr<Array<graphics::LabelData>>*
    shared_ptr<Array<graphics::LabelData>>::operator=(shared_ptr<Array<graphics::LabelData>>&& labelDatas) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(labelDatas);
        swap(&local_28, (shared_ptr<Array<graphics::LabelData> _>*)this);
        return this;
    }

    // 0x1001cbbe0
    uint64_t shared_ptr<oldscape::rseven::DynamicGeometry>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001cbeb0
    uint64_t shared_ptr<RenderState::ModelSubmissionRSeven>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001cbf90
    shared_ptr<oldscape::rseven::DynamicGeometry>* shared_ptr<oldscape::rseven::DynamicGeometry>::operator=(
        shared_ptr<oldscape::rseven::DynamicGeometry>&& dynamicGeometry) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(dynamicGeometry);
        swap(&local_28, this);
        return this;
    }

    // 0x1001cc060
    uint64_t shared_ptr<RenderState::ModelSubmissionRSeven>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001cd010
    shared_ptr<game::LightSource>*
    shared_ptr<game::LightSource>::operator=(shared_ptr<game::LightSource>&& lightSource) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(lightSource);
        swap(&local_28, this);
        return this;
    }

    // 0x1001cd050
    shared_ptr<game::LightSource>*
    shared_ptr<game::LightSource>::operator=(const shared_ptr<game::LightSource>& lightSource) {

        shared_ptr<oldscape::dash3d::Decor> local_28(lightSource);
        swap(&local_28, this);
        return this;
    }

    // 0x1001cd1e0
    uint64_t shared_ptr<game::LightSource>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001cd2c0
    uint64_t shared_ptr<game::LightSource>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001cd950
    uint64_t shared_ptr<graphics::PointLightIndicesEffect>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001cd9b0
    uint64_t shared_ptr<game::StaticPointLight>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001cdce0
    uint64_t shared_ptr<game::StaticPointLight>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001d09f0
    uint64_t shared_ptr<graphics::Model>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001d1030
    void shared_ptr<graphics::Model>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1001d1070
    uint64_t shared_ptr<oldscape::dash3d::PoseStateRSeven>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001d10b0
    shared_ptr<oldscape::dash3d::PoseStateRSeven>* shared_ptr<oldscape::dash3d::PoseStateRSeven>::operator=(
        const shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven) {

        shared_ptr<oldscape::dash3d::Decor> local_28(poseStateRSeven);
        swap(&local_28, this);
        return this;
    }

    // 0x1001d1410
    uint64_t shared_ptr<graphics::Model>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001d1450
    shared_ptr<graphics::Model>* shared_ptr<graphics::Model>::operator=(const shared_ptr<graphics::Model>& model) {

        shared_ptr<oldscape::dash3d::Decor> local_28(model);
        swap(&local_28, this);
        return this;
    }

    // 0x1001d1570
    shared_ptr<oldscape::dash3d::PoseStateRSeven>* shared_ptr<oldscape::dash3d::PoseStateRSeven>::operator=(
        shared_ptr<oldscape::dash3d::PoseStateRSeven>&& poseStateRSeven) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(poseStateRSeven);
        swap(&local_28, this);
        return this;
    }

    // 0x1001d1cf0
    uint64_t shared_ptr<graphics::WaterPatch>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001d4f70
    shared_ptr<render::Texture>* shared_ptr<render::Texture>::operator=(const shared_ptr<render::Texture>& texture) {

        shared_ptr<oldscape::dash3d::Decor> local_28(texture);
        swap(&local_28, this);
        return this;
    }

    // 0x1001dcff0
    uint64_t shared_ptr<Array<Array<int>>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001dd030
    uint64_t shared_ptr<Array<graphics::LabelData>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001dd1e0
    uint64_t shared_ptr<Array<Array<int>>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001dd220
    uint64_t shared_ptr<Array<graphics::LabelData>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001ddd30
    uint64_t shared_ptr<Array<short>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001ddd70
    uint64_t shared_ptr<Array<signed char>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001dddb0
    uint64_t shared_ptr<Array<oldscape::dash3d::FaceNormal>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001dddf0
    uint64_t shared_ptr<Array<oldscape::dash3d::PointNormal>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001ddec0
    uint64_t shared_ptr<Array<int>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001de2d0
    shared_ptr<signed char[]>* shared_ptr<signed char[]>::operator=(const shared_ptr<signed char[]>& arg1) {
        shared_ptr<unsigned int[]> local_28[16];

        new (local_28) shared_ptr(arg1);
        swap((shared_ptr<signed char[]>*)local_28, (shared_ptr<signed_char_[]>*)this);
        return this;
    }

    // 0x1001de330
    void shared_ptr<signed char[]>::swap(shared_ptr<signed char[]>& arg1) {
        ~AutoSingleton();
        arg1.~AutoSingleton();
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<signed char*>(*((this + 8)), *((arg1 + 8)));
        ~AutoSingleton();
        arg1.~AutoSingleton();
    }

    // 0x1001de390
    shared_ptr<signed char[]>::shared_ptr(const shared_ptr<signed char[]>& arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = *(uint64_t*)(arg1 + 8);
        IncRef();
        ~AutoSingleton();
    }

    // 0x1001e6d70
    void shared_ptr<oldscape::rseven::BuildTerrainResultLevel>::swap(
        shared_ptr<oldscape::rseven::BuildTerrainResultLevel>& buildTerrainResultLevel) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildTerrainResultLevel);
        std::swap<ref_counter_base*>(*this, buildTerrainResultLevel);
        std::swap<oldscape::rseven::BuildTerrainResultLevel*>(*((this + 8)), *((buildTerrainResultLevel + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildTerrainResultLevel);
    }

    // 0x1001e8d40
    void shared_ptr<graphics::TextureAtlasReference>::swap(
        shared_ptr<graphics::TextureAtlasReference>& textureAtlasReference) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(textureAtlasReference);
        std::swap<ref_counter_base*>(*this, textureAtlasReference);
        std::swap<graphics::TextureAtlasReference*>(*((this + 8)), *((textureAtlasReference + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(textureAtlasReference);
    }

    // 0x1001e97c0
    long shared_ptr<signed char[]>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                340, nullptr);
        }
        return arg1 + *(long*)(this + 8);
    }

    // 0x1001eaaf0
    void shared_ptr<Array<graphics::LabelData>>::swap(shared_ptr<Array<graphics::LabelData>>& labelDatas) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(labelDatas);
        std::swap<ref_counter_base*>(*this, labelDatas);
        std::swap<Array<graphics::LabelData>*>(*((this + 8)), *((labelDatas + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(labelDatas);
    }

    // 0x1001eb950
    void shared_ptr<oldscape::rseven::DynamicGeometry>::swap(
        shared_ptr<oldscape::rseven::DynamicGeometry>& dynamicGeometry) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(dynamicGeometry);
        std::swap<ref_counter_base*>(*this, dynamicGeometry);
        std::swap<oldscape::rseven::DynamicGeometry*>(*((this + 8)), *((dynamicGeometry + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(dynamicGeometry);
    }

    // 0x1001ec5f0
    uint64_t shared_ptr<graphics::TextureAtlas>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001eef20
    void shared_ptr<game::LightSource>::swap(shared_ptr<game::LightSource>& lightSource) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(lightSource);
        std::swap<ref_counter_base*>(*this, lightSource);
        std::swap<game::LightSource*>(*((this + 8)), *((lightSource + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(lightSource);
    }

    // 0x1001f3120
    void shared_ptr<graphics::Model>::swap(shared_ptr<graphics::Model>& model) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(model);
        std::swap<ref_counter_base*>(*this, model);
        std::swap<graphics::Model*>(*((this + 8)), *((model + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(model);
    }

    // 0x1001f31a0
    void shared_ptr<oldscape::dash3d::PoseStateRSeven>::swap(
        shared_ptr<oldscape::dash3d::PoseStateRSeven>& poseStateRSeven) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(poseStateRSeven);
        std::swap<ref_counter_base*>(*this, poseStateRSeven);
        std::swap<oldscape::dash3d::PoseStateRSeven*>(*((this + 8)), *((poseStateRSeven + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(poseStateRSeven);
    }

    // 0x1001fb990
    uint64_t shared_ptr<oldscape::configdecoder::VarBitType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1001fe6a0
    uint64_t shared_ptr<oldscape::rs2lib::PlayerModel>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100202110
    uint64_t shared_ptr<oldscape::rs2lib::HttpSpriteData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100202ad0
    shared_ptr<oldscape::dash3d::ModelUnlit>*
    shared_ptr<oldscape::dash3d::ModelUnlit>::operator=(shared_ptr<oldscape::dash3d::ModelUnlit>&& modelUnlit) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(modelUnlit);
        swap(&local_28, this);
        return this;
    }

    // 0x100202b20
    shared_ptr<oldscape::dash3d::ModelUnlit>*
    shared_ptr<oldscape::dash3d::ModelUnlit>::operator=(const shared_ptr<oldscape::dash3d::ModelUnlit>& modelUnlit) {

        shared_ptr<oldscape::dash3d::Decor> local_28(modelUnlit);
        swap(&local_28, this);
        return this;
    }

    // 0x100202fe0
    uint64_t shared_ptr<oldscape::dash3d::ModelUnlit>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100204e30
    uint64_t shared_ptr<oldscape::configdecoder::IdkType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100205f30
    void shared_ptr<oldscape::dash3d::ModelLit>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100205fc0
    uint64_t shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002064f0
    uint64_t shared_ptr<int>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10020b730
    uint64_t shared_ptr<oldscape::dash3d::TextureProvider>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100210e90
    shared_ptr<oldscape::rs2lib::worldmap::MapSquareData>*
    shared_ptr<oldscape::rs2lib::worldmap::MapSquareData>::operator=(
        const shared_ptr<oldscape::rs2lib::worldmap::MapSquareData>& mapSquareData) {

        shared_ptr<oldscape::dash3d::Decor> local_28(mapSquareData);
        swap(&local_28, this);
        return this;
    }

    // 0x1002111a0
    uint64_t shared_ptr<oldscape::rs2lib::worldmap::MapZoneData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002112e0
    uint64_t shared_ptr<oldscape::rs2lib::worldmap::MapElement>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100211860
    uint64_t shared_ptr<oldscape::rs2lib::worldmap::MapSquareData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100213600
    void
    shared_ptr<oldscape::rs2lib::worldmap::MapElement>::reset<oldscape::rs2lib::worldmap::MultiLocMapElement, void>(
        oldscape::rs2lib::worldmap::MultiLocMapElement* multiLocMapElement) {
        shared_ptr<oldscape::rs2lib::worldmap::MapElement> local_28;

        shared_ptr<oldscape::rs2lib::worldmap::MultiLocMapElement, void>(&local_28, multiLocMapElement);
        swap(&local_28, this);
    }

    // 0x100213650
    void shared_ptr<oldscape::rs2lib::worldmap::MapElement>::reset<oldscape::rs2lib::worldmap::StaticMapElement, void>(
        oldscape::rs2lib::worldmap::StaticMapElement* staticMapElement) {
        shared_ptr<oldscape::rs2lib::worldmap::MapElement> local_28;

        shared_ptr<oldscape::rs2lib::worldmap::StaticMapElement, void>(&local_28, staticMapElement);
        swap(&local_28, this);
    }

    // 0x100213720
    shared_ptr<oldscape::rs2lib::worldmap::MapElement>* shared_ptr<oldscape::rs2lib::worldmap::MapElement>::operator=(
        const shared_ptr<oldscape::rs2lib::worldmap::MapElement>& mapElement) {

        shared_ptr<oldscape::dash3d::Decor> local_28(mapElement);
        swap(&local_28, this);
        return this;
    }

    // 0x100213780
    uint64_t shared_ptr<oldscape::rs2lib::worldmap::StaticMapElement>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002138c0
    uint64_t shared_ptr<oldscape::rs2lib::worldmap::MapSquareData>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100213900
    uint64_t shared_ptr<oldscape::rs2lib::worldmap::MapZoneData>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002148b0
    uint64_t shared_ptr<oldscape::rs2lib::worldmap::MapElement>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100219310
    shared_ptr<oldscape::rs2lib::PlayerModel>::shared_ptr<oldscape::rs2lib::PlayerModel>(
        std::unique_ptr<oldscape::rs2lib::PlayerModel>&& playerModel) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = playerModel.get();
        *(uint64_t*)(this + 8) = uVar1;
        IncRef();
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        std::unique_ptr<oldscape::rs2lib::PlayerModel>::release();
    }

    // 0x10021d6d0
    void shared_ptr<oldscape::dash3d::ModelUnlit>::swap(shared_ptr<oldscape::dash3d::ModelUnlit>& modelUnlit) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelUnlit);
        std::swap<ref_counter_base*>(*this, modelUnlit);
        std::swap<oldscape::dash3d::ModelUnlit*>(*((this + 8)), *((modelUnlit + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelUnlit);
    }

    // 0x1002239c0
    shared_ptr<unsigned int[]>* shared_ptr<unsigned int[]>::operator=(const shared_ptr<unsigned int[]>& arg1) {
        shared_ptr<unsigned int[]> local_28[16];

        shared_ptr(local_28, (shared_ptr<signed_char_[]>*)arg1);
        swap(local_28, (shared_ptr<unsigned_int_[]>*)this);
        ~shared_ptr(local_28);
        return this;
    }

    // 0x100223a00
    void shared_ptr<unsigned int[]>::swap(shared_ptr<unsigned int[]>& arg1) {
        ~AutoSingleton();
        arg1.~AutoSingleton();
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<unsigned int*>(*((this + 8)), *((arg1 + 8)));
        ~AutoSingleton();
        arg1.~AutoSingleton();
    }

    // 0x100224850
    void shared_ptr<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>[]>::operator=(
        shared_ptr<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>[]>&& locationData) {
        shared_ptr<Array<unsigned char>[]> local_28[16];

        new (local_28) shared_ptr((shared_ptr<signed_char_[]>*)locationData);
        swap((shared_ptr<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>[]>*)local_28,
             (shared_ptr<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                         std::default_delete<oldscape::rs2lib::worldmap::LocationData> _>
                             _[]>*)this);
        ((shared_ptr<unsigned int[]>*)local_28)->~shared_ptr();
        return this;
    }

    // 0x100224890
    void shared_ptr<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>[]>::swap(
        shared_ptr<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>[]>& locationData) {
        ~AutoSingleton();
        locationData.~AutoSingleton();
        std::swap<ref_counter_base*>(*this, locationData);
        std::swap<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>*>(*((this + 8)), *((locationData + 8)));
        ~AutoSingleton();
        locationData.~AutoSingleton();
    }

    // 0x100224910
    long shared_ptr<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>[]>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                340, nullptr);
        }
        return arg1 * 8 + *(long*)(this + 8);
    }

    // 0x100224dd0
    void shared_ptr<oldscape::rs2lib::worldmap::MapSquareData>::swap(
        shared_ptr<oldscape::rs2lib::worldmap::MapSquareData>& mapSquareData) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapSquareData);
        std::swap<ref_counter_base*>(*this, mapSquareData);
        std::swap<oldscape::rs2lib::worldmap::MapSquareData*>(*((this + 8)), *((mapSquareData + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapSquareData);
    }

    // 0x100225750
    void shared_ptr<oldscape::rs2lib::worldmap::MapElement>::swap(
        shared_ptr<oldscape::rs2lib::worldmap::MapElement>& mapElement) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapElement);
        std::swap<ref_counter_base*>(*this, mapElement);
        std::swap<oldscape::rs2lib::worldmap::MapElement*>(*((this + 8)), *((mapElement + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapElement);
    }

    // 0x1002257b0
    shared_ptr<oldscape::rs2lib::worldmap::MapElement>::shared_ptr<oldscape::rs2lib::worldmap::MultiLocMapElement,
                                                                   void>(
        oldscape::rs2lib::worldmap::MultiLocMapElement* multiLocMapElement) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<oldscape::rs2lib::worldmap::MultiLocMapElement>* this_00 =
            (ref_counter<oldscape::rs2lib::worldmap::MultiLocMapElement>*)operator new(24);
        new (this_00) ref_counter<oldscape::rs2lib::worldmap::MultiLocMapElement>(multiLocMapElement);
        *(ref_counter<oldscape::rs2lib::worldmap::MultiLocMapElement>**)this = this_00;
        *(MultiLocMapElement**)(this + 8) = multiLocMapElement;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x1002258e0
    shared_ptr<oldscape::rs2lib::worldmap::MapElement>::shared_ptr<oldscape::rs2lib::worldmap::StaticMapElement, void>(
        oldscape::rs2lib::worldmap::StaticMapElement* staticMapElement) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<oldscape::rs2lib::worldmap::StaticMapElement>* this_00 =
            (ref_counter<oldscape::rs2lib::worldmap::StaticMapElement>*)operator new(24);
        new (this_00) ref_counter<oldscape::rs2lib::worldmap::StaticMapElement>(staticMapElement);
        *(ref_counter<oldscape::rs2lib::worldmap::StaticMapElement>**)this = this_00;
        *(StaticMapElement**)(this + 8) = staticMapElement;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x100228650
    shared_ptr<oldscape::configdecoder::InvType>*
    shared_ptr<oldscape::configdecoder::InvType>::operator=(shared_ptr<oldscape::configdecoder::InvType>&& invType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(invType);
        swap(&local_28, this);
        return this;
    }

    // 0x100228690
    uint64_t shared_ptr<oldscape::configdecoder::InvType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10022ae00
    shared_ptr<oldscape::dash3d::ModelSource>& shared_ptr<oldscape::dash3d::ModelSource>::operator=
        <oldscape::dash3d::ModelLit>(const shared_ptr<oldscape::dash3d::ModelLit>& modelLit) {

        shared_ptr<oldscape::dash3d::Decor> local_28(modelLit);
        swap(&local_28, this);
        return this;
    }

    // 0x10022bae0
    uint64_t shared_ptr<oldscape::dash3d::ModelUnlit>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10022d200
    shared_ptr<oldscape::configdecoder::MesAnimType>* shared_ptr<oldscape::configdecoder::MesAnimType>::operator=(
        shared_ptr<oldscape::configdecoder::MesAnimType>&& mesAnimType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(mesAnimType);
        swap(&local_28, this);
        return this;
    }

    // 0x10022d240
    uint64_t shared_ptr<oldscape::configdecoder::MesAnimType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100232830
    shared_ptr<oldscape::configdecoder::ObjSprite>* shared_ptr<oldscape::configdecoder::ObjSprite>::operator=(
        const shared_ptr<oldscape::configdecoder::ObjSprite>& objSprite) {

        shared_ptr<oldscape::dash3d::Decor> local_28(objSprite);
        swap(&local_28, this);
        return this;
    }

    // 0x100232870
    shared_ptr<oldscape::configdecoder::ObjSprite>* shared_ptr<oldscape::configdecoder::ObjSprite>::operator=(
        shared_ptr<oldscape::configdecoder::ObjSprite>&& objSprite) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(objSprite);
        swap(&local_28, this);
        return this;
    }

    // 0x100232960
    uint64_t shared_ptr<oldscape::configdecoder::ObjSprite>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002329a0
    uint64_t shared_ptr<oldscape::configdecoder::ObjSprite>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100234150
    uint64_t shared_ptr<oldscape::configdecoder::ObjTypeCustomisation>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100234400
    shared_ptr<oldscape::configdecoder::ParamType>* shared_ptr<oldscape::configdecoder::ParamType>::operator=(
        shared_ptr<oldscape::configdecoder::ParamType>&& paramType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(paramType);
        swap(&local_28, this);
        return this;
    }

    // 0x100234440
    uint64_t shared_ptr<oldscape::configdecoder::ParamType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002352d0
    uint64_t shared_ptr<oldscape::dash3d::AnimFrameSet>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002353a0
    uint64_t shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100235420
    shared_ptr<oldscape::dash3d::AnimBase>*
    shared_ptr<oldscape::dash3d::AnimBase>::operator=(const shared_ptr<oldscape::dash3d::AnimBase>& animBase) {

        shared_ptr<oldscape::dash3d::Decor> local_28(animBase);
        swap(&local_28, this);
        return this;
    }

    // 0x100235470
    shared_ptr<oldscape::dash3d::AnimFrameSet>*
    shared_ptr<oldscape::dash3d::AnimFrameSet>::operator=(shared_ptr<oldscape::dash3d::AnimFrameSet>&& animFrameSet) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(animFrameSet);
        swap(&local_28, this);
        return this;
    }

    // 0x100235e70
    shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>*
    shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>::operator=(
        shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>&& oldscapeAnimKeyFrameSet) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(oldscapeAnimKeyFrameSet);
        swap(&local_28, this);
        return this;
    }

    // 0x100236320
    shared_ptr<oldscape::configdecoder::SpotType>*
    shared_ptr<oldscape::configdecoder::SpotType>::operator=(shared_ptr<oldscape::configdecoder::SpotType>&& spotType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(spotType);
        swap(&local_28, this);
        return this;
    }

    // 0x1002370a0
    shared_ptr<oldscape::configdecoder::StructType>* shared_ptr<oldscape::configdecoder::StructType>::operator=(
        shared_ptr<oldscape::configdecoder::StructType>&& structType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(structType);
        swap(&local_28, this);
        return this;
    }

    // 0x1002370e0
    uint64_t shared_ptr<oldscape::configdecoder::StructType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100237ae0
    shared_ptr<oldscape::configdecoder::VarConBitType>* shared_ptr<oldscape::configdecoder::VarConBitType>::operator=(
        shared_ptr<oldscape::configdecoder::VarConBitType>&& varConBitType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(varConBitType);
        swap(&local_28, this);
        return this;
    }

    // 0x100237b20
    uint64_t shared_ptr<oldscape::configdecoder::VarConBitType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100237f80
    shared_ptr<oldscape::configdecoder::VarConType>* shared_ptr<oldscape::configdecoder::VarConType>::operator=(
        shared_ptr<oldscape::configdecoder::VarConType>&& varConType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(varConType);
        swap(&local_28, this);
        return this;
    }

    // 0x100237fc0
    uint64_t shared_ptr<oldscape::configdecoder::VarConType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100238400
    shared_ptr<oldscape::configdecoder::VarGlobalType>* shared_ptr<oldscape::configdecoder::VarGlobalType>::operator=(
        shared_ptr<oldscape::configdecoder::VarGlobalType>&& varGlobalType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(varGlobalType);
        swap(&local_28, this);
        return this;
    }

    // 0x100238440
    uint64_t shared_ptr<oldscape::configdecoder::VarGlobalType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100238860
    shared_ptr<oldscape::configdecoder::VarObjType>* shared_ptr<oldscape::configdecoder::VarObjType>::operator=(
        shared_ptr<oldscape::configdecoder::VarObjType>&& varObjType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(varObjType);
        swap(&local_28, this);
        return this;
    }

    // 0x1002388a0
    uint64_t shared_ptr<oldscape::configdecoder::VarObjType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100239110
    shared_ptr<oldscape::configdecoder::VarnBitType>* shared_ptr<oldscape::configdecoder::VarnBitType>::operator=(
        shared_ptr<oldscape::configdecoder::VarnBitType>&& varnBitType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(varnBitType);
        swap(&local_28, this);
        return this;
    }

    // 0x100239150
    uint64_t shared_ptr<oldscape::configdecoder::VarnBitType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100239570
    shared_ptr<oldscape::configdecoder::VarnType>*
    shared_ptr<oldscape::configdecoder::VarnType>::operator=(shared_ptr<oldscape::configdecoder::VarnType>&& varnType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(varnType);
        swap(&local_28, this);
        return this;
    }

    // 0x1002395b0
    uint64_t shared_ptr<oldscape::configdecoder::VarnType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10023a220
    shared_ptr<oldscape::configdecoder::DBRowType>* shared_ptr<oldscape::configdecoder::DBRowType>::operator=(
        shared_ptr<oldscape::configdecoder::DBRowType>&& dbRowType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(dbRowType);
        swap(&local_28, this);
        return this;
    }

    // 0x10023b440
    shared_ptr<oldscape::configdecoder::DBTableType>* shared_ptr<oldscape::configdecoder::DBTableType>::operator=(
        shared_ptr<oldscape::configdecoder::DBTableType>&& dbTableType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(dbTableType);
        swap(&local_28, this);
        return this;
    }

    // 0x100244b30
    void shared_ptr<oldscape::configdecoder::InvType>::swap(shared_ptr<oldscape::configdecoder::InvType>& invType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(invType);
        std::swap<ref_counter_base*>(*this, invType);
        std::swap<oldscape::configdecoder::InvType*>(*((this + 8)), *((invType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(invType);
    }

    // 0x100248720
    void shared_ptr<oldscape::configdecoder::MesAnimType>::swap(
        shared_ptr<oldscape::configdecoder::MesAnimType>& mesAnimType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mesAnimType);
        std::swap<ref_counter_base*>(*this, mesAnimType);
        std::swap<oldscape::configdecoder::MesAnimType*>(*((this + 8)), *((mesAnimType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mesAnimType);
    }

    // 0x10024a910
    void
    shared_ptr<oldscape::configdecoder::ObjSprite>::swap(shared_ptr<oldscape::configdecoder::ObjSprite>& objSprite) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(objSprite);
        std::swap<ref_counter_base*>(*this, objSprite);
        std::swap<oldscape::configdecoder::ObjSprite*>(*((this + 8)), *((objSprite + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(objSprite);
    }

    // 0x10024ba40
    void
    shared_ptr<oldscape::configdecoder::ParamType>::swap(shared_ptr<oldscape::configdecoder::ParamType>& paramType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(paramType);
        std::swap<ref_counter_base*>(*this, paramType);
        std::swap<oldscape::configdecoder::ParamType*>(*((this + 8)), *((paramType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(paramType);
    }

    // 0x10024d610
    void shared_ptr<oldscape::dash3d::AnimBase>::swap(shared_ptr<oldscape::dash3d::AnimBase>& animBase) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animBase);
        std::swap<ref_counter_base*>(*this, animBase);
        std::swap<oldscape::dash3d::AnimBase*>(*((this + 8)), *((animBase + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animBase);
    }

    // 0x10024d760
    void shared_ptr<oldscape::dash3d::AnimFrameSet>::swap(shared_ptr<oldscape::dash3d::AnimFrameSet>& animFrameSet) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animFrameSet);
        std::swap<ref_counter_base*>(*this, animFrameSet);
        std::swap<oldscape::dash3d::AnimFrameSet*>(*((this + 8)), *((animFrameSet + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animFrameSet);
    }

    // 0x10024dac0
    void shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>::swap(
        shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeAnimKeyFrameSet);
        std::swap<ref_counter_base*>(*this, oldscapeAnimKeyFrameSet);
        std::swap<oldscape::graphics::animation::OldscapeAnimKeyFrameSet*>(*((this + 8)),
                                                                           *((oldscapeAnimKeyFrameSet + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeAnimKeyFrameSet);
    }

    // 0x10024e850
    void shared_ptr<oldscape::configdecoder::SpotType>::swap(shared_ptr<oldscape::configdecoder::SpotType>& spotType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(spotType);
        std::swap<ref_counter_base*>(*this, spotType);
        std::swap<oldscape::configdecoder::SpotType*>(*((this + 8)), *((spotType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(spotType);
    }

    // 0x10024ef30
    void
    shared_ptr<oldscape::configdecoder::StructType>::swap(shared_ptr<oldscape::configdecoder::StructType>& structType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(structType);
        std::swap<ref_counter_base*>(*this, structType);
        std::swap<oldscape::configdecoder::StructType*>(*((this + 8)), *((structType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(structType);
    }

    // 0x10024fc90
    void shared_ptr<oldscape::configdecoder::VarConBitType>::swap(
        shared_ptr<oldscape::configdecoder::VarConBitType>& varConBitType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varConBitType);
        std::swap<ref_counter_base*>(*this, varConBitType);
        std::swap<oldscape::configdecoder::VarConBitType*>(*((this + 8)), *((varConBitType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varConBitType);
    }

    // 0x100250750
    void
    shared_ptr<oldscape::configdecoder::VarConType>::swap(shared_ptr<oldscape::configdecoder::VarConType>& varConType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varConType);
        std::swap<ref_counter_base*>(*this, varConType);
        std::swap<oldscape::configdecoder::VarConType*>(*((this + 8)), *((varConType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varConType);
    }

    // 0x100250e30
    void shared_ptr<oldscape::configdecoder::VarGlobalType>::swap(
        shared_ptr<oldscape::configdecoder::VarGlobalType>& varGlobalType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varGlobalType);
        std::swap<ref_counter_base*>(*this, varGlobalType);
        std::swap<oldscape::configdecoder::VarGlobalType*>(*((this + 8)), *((varGlobalType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varGlobalType);
    }

    // 0x100251130
    void
    shared_ptr<oldscape::configdecoder::VarObjType>::swap(shared_ptr<oldscape::configdecoder::VarObjType>& varObjType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varObjType);
        std::swap<ref_counter_base*>(*this, varObjType);
        std::swap<oldscape::configdecoder::VarObjType*>(*((this + 8)), *((varObjType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varObjType);
    }

    // 0x100252290
    void shared_ptr<oldscape::configdecoder::VarnBitType>::swap(
        shared_ptr<oldscape::configdecoder::VarnBitType>& varnBitType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varnBitType);
        std::swap<ref_counter_base*>(*this, varnBitType);
        std::swap<oldscape::configdecoder::VarnBitType*>(*((this + 8)), *((varnBitType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varnBitType);
    }

    // 0x100252590
    void shared_ptr<oldscape::configdecoder::VarnType>::swap(shared_ptr<oldscape::configdecoder::VarnType>& varnType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varnType);
        std::swap<ref_counter_base*>(*this, varnType);
        std::swap<oldscape::configdecoder::VarnType*>(*((this + 8)), *((varnType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varnType);
    }

    // 0x100254060
    void
    shared_ptr<oldscape::configdecoder::DBRowType>::swap(shared_ptr<oldscape::configdecoder::DBRowType>& dbRowType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(dbRowType);
        std::swap<ref_counter_base*>(*this, dbRowType);
        std::swap<oldscape::configdecoder::DBRowType*>(*((this + 8)), *((dbRowType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(dbRowType);
    }

    // 0x1002576d0
    void shared_ptr<oldscape::configdecoder::DBTableType>::swap(
        shared_ptr<oldscape::configdecoder::DBTableType>& dbTableType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(dbTableType);
        std::swap<ref_counter_base*>(*this, dbTableType);
        std::swap<oldscape::configdecoder::DBTableType*>(*((this + 8)), *((dbTableType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(dbTableType);
    }

    // 0x10025c8f0
    shared_ptr<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>&
        shared_ptr<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::operator=
            <oldscape::rs2lib::social::ClanChannelDelta::AddUser, void>(
                shared_ptr<oldscape::rs2lib::social::ClanChannelDelta::AddUser>&& updateUserDetails) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(updateUserDetails);
        swap((shared_ptr<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>*)&local_28, this);
        return this;
    }

    // 0x10025cb70
    uint64_t shared_ptr<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100263590
    shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>&
        shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=
            <oldscape::rs2lib::social::ClanSettingsDelta::AddBanned, void>(
                shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>&& updateClanSettingsBaseSettings) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(updateClanSettingsBaseSettings);
        swap((shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_28, this);
        return this;
    }

    // 0x100263db0
    uint64_t shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100265290
    shared_ptr<oldscape::configdecoder::AreaType>*
    shared_ptr<oldscape::configdecoder::AreaType>::operator=(shared_ptr<oldscape::configdecoder::AreaType>&& areaType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(areaType);
        swap(&local_28, this);
        return this;
    }

    // 0x1002652d0
    uint64_t shared_ptr<oldscape::configdecoder::AreaType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100265730
    shared_ptr<oldscape::configdecoder::BugTemplateType>*
    shared_ptr<oldscape::configdecoder::BugTemplateType>::operator=(
        shared_ptr<oldscape::configdecoder::BugTemplateType>&& bugTemplateType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(bugTemplateType);
        swap(&local_28, this);
        return this;
    }

    // 0x100265770
    uint64_t shared_ptr<oldscape::configdecoder::BugTemplateType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100265bd0
    shared_ptr<oldscape::configdecoder::ControllerType>* shared_ptr<oldscape::configdecoder::ControllerType>::operator=(
        shared_ptr<oldscape::configdecoder::ControllerType>&& controllerType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(controllerType);
        swap(&local_28, this);
        return this;
    }

    // 0x100265c10
    uint64_t shared_ptr<oldscape::configdecoder::ControllerType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100267320
    shared_ptr<oldscape::configdecoder::HeadbarType>* shared_ptr<oldscape::configdecoder::HeadbarType>::operator=(
        shared_ptr<oldscape::configdecoder::HeadbarType>&& headbarType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(headbarType);
        swap(&local_28, this);
        return this;
    }

    // 0x100268ac0
    shared_ptr<oldscape::configdecoder::HuntType>*
    shared_ptr<oldscape::configdecoder::HuntType>::operator=(shared_ptr<oldscape::configdecoder::HuntType>&& huntType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(huntType);
        swap(&local_28, this);
        return this;
    }

    // 0x100268b00
    uint64_t shared_ptr<oldscape::configdecoder::HuntType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100268f60
    shared_ptr<oldscape::configdecoder::IdkType>*
    shared_ptr<oldscape::configdecoder::IdkType>::operator=(shared_ptr<oldscape::configdecoder::IdkType>&& idkType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(idkType);
        swap(&local_28, this);
        return this;
    }

    // 0x10026b400
    shared_ptr<oldscape::rs2lib::social::ClanChannelUser>*
    shared_ptr<oldscape::rs2lib::social::ClanChannelUser>::operator=(
        shared_ptr<oldscape::rs2lib::social::ClanChannelUser>&& clanChannelUser) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(clanChannelUser);
        swap(&local_28, this);
        return this;
    }

    // 0x10026b450
    void shared_ptr<oldscape::rs2lib::social::ClanChannelUser>::swap(
        shared_ptr<oldscape::rs2lib::social::ClanChannelUser>& clanChannelUser) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clanChannelUser);
        std::swap<ref_counter_base*>(*this, clanChannelUser);
        std::swap<oldscape::rs2lib::social::ClanChannelUser*>(*((this + 8)), *((clanChannelUser + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clanChannelUser);
    }

    // 0x10026b870
    void shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::reset<
        Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>, void>(
        Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>* linkable) {
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>> local_28;

        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>, void>(&local_28,
                                                                                                      linkable);
        swap(&local_28,
             (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry> _>*)this);
    }

    // 0x10026b8e0
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::shared_ptr<
        Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>, void>(
        Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>* linkable) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>* this_00 =
            (ref_counter<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*)operator new(24);
        new (this_00)
            ref_counter<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>(linkable);
        *(ref_counter<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>**)this = this_00;
        *(Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>**)(this + 8) = linkable;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x10026bb30
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>*
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator=(
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>&& linkable) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(linkable);
        swap(&local_28,
             (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry> _>*)this);
        return this;
    }

    // 0x10026bb80
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>&
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::operator=
            <oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry, void>(
                shared_ptr<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>&& clanChannelDeltaEntry) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(clanChannelDeltaEntry);
        swap(&local_28,
             (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry> _>*)this);
        return (shared_ptr<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry> _>*)this;
    }

    // 0x10026bfa0
    void shared_ptr<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>::swap(
        shared_ptr<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>& clanChannelDeltaEntry) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clanChannelDeltaEntry);
        std::swap<ref_counter_base*>(*this, clanChannelDeltaEntry);
        std::swap<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry*>(*((this + 8)),
                                                                                      *((clanChannelDeltaEntry + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clanChannelDeltaEntry);
    }

    // 0x10027d590
    void shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::reset<
        Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>, void>(
        Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* linkable) {
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>> local_28;

        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>, void>(&local_28,
                                                                                                        linkable);
        swap(&local_28,
             (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry> _>*)this);
    }

    // 0x10027d600
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::shared_ptr<
        Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>, void>(
        Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* linkable) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>* this_00 =
            (ref_counter<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*)operator new(
                24);
        new (this_00)
            ref_counter<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>(linkable);
        *(ref_counter<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>**)this = this_00;
        *(Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>**)(this + 8) = linkable;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x10027d7f0
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>*
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator=(
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>&& linkable) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(linkable);
        swap(&local_28,
             (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry> _>*)this);
        return this;
    }

    // 0x10027d840
    shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>&
        shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::operator=
            <oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry, void>(
                shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>&&
                    clanSettingsDeltaEntry) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(clanSettingsDeltaEntry);
        swap(&local_28,
             (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry> _>*)this);
        return (shared_ptr<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry> _>*)this;
    }

    // 0x10027e140
    void shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>::swap(
        shared_ptr<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>& clanSettingsDeltaEntry) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clanSettingsDeltaEntry);
        std::swap<ref_counter_base*>(*this, clanSettingsDeltaEntry);
        std::swap<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry*>(
            *((this + 8)), *((clanSettingsDeltaEntry + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clanSettingsDeltaEntry);
    }

    // 0x10027ed60
    void shared_ptr<oldscape::configdecoder::AreaType>::swap(shared_ptr<oldscape::configdecoder::AreaType>& areaType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(areaType);
        std::swap<ref_counter_base*>(*this, areaType);
        std::swap<oldscape::configdecoder::AreaType*>(*((this + 8)), *((areaType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(areaType);
    }

    // 0x10027f440
    void shared_ptr<oldscape::configdecoder::BugTemplateType>::swap(
        shared_ptr<oldscape::configdecoder::BugTemplateType>& bugTemplateType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(bugTemplateType);
        std::swap<ref_counter_base*>(*this, bugTemplateType);
        std::swap<oldscape::configdecoder::BugTemplateType*>(*((this + 8)), *((bugTemplateType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(bugTemplateType);
    }

    // 0x10027fb20
    void shared_ptr<oldscape::configdecoder::ControllerType>::swap(
        shared_ptr<oldscape::configdecoder::ControllerType>& controllerType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(controllerType);
        std::swap<ref_counter_base*>(*this, controllerType);
        std::swap<oldscape::configdecoder::ControllerType*>(*((this + 8)), *((controllerType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(controllerType);
    }

    // 0x100283000
    void shared_ptr<oldscape::configdecoder::HuntType>::swap(shared_ptr<oldscape::configdecoder::HuntType>& huntType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(huntType);
        std::swap<ref_counter_base*>(*this, huntType);
        std::swap<oldscape::configdecoder::HuntType*>(*((this + 8)), *((huntType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(huntType);
    }

    // 0x1002838b0
    void shared_ptr<oldscape::configdecoder::IdkType>::swap(shared_ptr<oldscape::configdecoder::IdkType>& idkType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(idkType);
        std::swap<ref_counter_base*>(*this, idkType);
        std::swap<oldscape::configdecoder::IdkType*>(*((this + 8)), *((idkType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(idkType);
    }

    // 0x100292700
    shared_ptr<oldscape::midi2::MidiFile>*
    shared_ptr<oldscape::midi2::MidiFile>::operator=(shared_ptr<oldscape::midi2::MidiFile>&& midiFile) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(midiFile);
        swap(&local_28, this);
        return this;
    }

    // 0x1002927f0
    shared_ptr<oldscape::sound::WaveCache>*
    shared_ptr<oldscape::sound::WaveCache>::operator=(shared_ptr<oldscape::sound::WaveCache>&& waveCache) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(waveCache);
        swap(&local_28, this);
        return this;
    }

    // 0x1002928c0
    uint64_t shared_ptr<oldscape::midi2::MidiFile>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100292900
    uint64_t shared_ptr<oldscape::sound::WaveCache>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100293290
    uint64_t shared_ptr<oldscape::sound::LazyWave::LazyWaveImpl>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100293470
    uint64_t shared_ptr<oldscape::sound::JagVorbis>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002937a0
    shared_ptr<oldscape::sound::Wave>*
    shared_ptr<oldscape::sound::Wave>::operator=(shared_ptr<oldscape::sound::Wave>&& wave) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(wave);
        swap(&local_28, this);
        return this;
    }

    // 0x1002937f0
    shared_ptr<oldscape::sound::JagVorbis>*
    shared_ptr<oldscape::sound::JagVorbis>::operator=(shared_ptr<oldscape::sound::JagVorbis>&& jagVorbis) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(jagVorbis);
        swap(&local_28, this);
        return this;
    }

    // 0x100295a00
    uint64_t shared_ptr<oldscape::sound::PCMStream>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100295a40
    shared_ptr<oldscape::sound::PCMStreamable>* shared_ptr<oldscape::sound::PCMStreamable>::operator=(
        const shared_ptr<oldscape::sound::PCMStreamable>& pcmStreamable) {

        shared_ptr<oldscape::dash3d::Decor> local_28(pcmStreamable);
        swap(&local_28, this);
        return this;
    }

    // 0x10029dc60
    shared_ptr<oldscape::sound::PCMStream>*
    shared_ptr<oldscape::sound::PCMStream>::operator=(shared_ptr<oldscape::sound::PCMStream>&& pcmStream) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(pcmStream);
        swap(&local_28, this);
        return this;
    }

    // 0x10029eb30
    uint64_t shared_ptr<oldscape::sound::MixerController>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10029ec50
    uint64_t shared_ptr<oldscape::sound::MixerController>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10029fd10
    shared_ptr<oldscape::sound::PCMStream>*
    shared_ptr<oldscape::sound::PCMStream>::operator=(const shared_ptr<oldscape::sound::PCMStream>& pcmStream) {

        shared_ptr<oldscape::dash3d::Decor> local_28(pcmStream);
        swap(&local_28, this);
        return this;
    }

    // 0x10029fe90
    shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>* shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>::operator=(
        shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>&& playerTask) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(playerTask);
        swap(&local_28, this);
        return this;
    }

    // 0x1002a02c0
    uint64_t shared_ptr<oldscape::sound::PCMStream>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002a04c0
    uint64_t shared_ptr<oldscape::sound::PCMStreamable>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002a1510
    uint64_t shared_ptr<oldscape::sound::PCMStreamable>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002a6d90
    shared_ptr<oldscape::sound::JagVorbis>*
    shared_ptr<oldscape::sound::JagVorbis>::operator=(const shared_ptr<oldscape::sound::JagVorbis>& jagVorbis) {

        shared_ptr<oldscape::dash3d::Decor> local_28(jagVorbis);
        swap(&local_28, this);
        return this;
    }

    // 0x1002a8720
    void shared_ptr<oldscape::midi2::MidiFile>::swap(shared_ptr<oldscape::midi2::MidiFile>& midiFile) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(midiFile);
        std::swap<ref_counter_base*>(*this, midiFile);
        std::swap<oldscape::midi2::MidiFile*>(*((this + 8)), *((midiFile + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(midiFile);
    }

    // 0x1002a8d50
    void shared_ptr<oldscape::sound::WaveCache>::swap(shared_ptr<oldscape::sound::WaveCache>& waveCache) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(waveCache);
        std::swap<ref_counter_base*>(*this, waveCache);
        std::swap<oldscape::sound::WaveCache*>(*((this + 8)), *((waveCache + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(waveCache);
    }

    // 0x1002a97e0
    void shared_ptr<oldscape::sound::JagVorbis>::swap(shared_ptr<oldscape::sound::JagVorbis>& jagVorbis) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(jagVorbis);
        std::swap<ref_counter_base*>(*this, jagVorbis);
        std::swap<oldscape::sound::JagVorbis*>(*((this + 8)), *((jagVorbis + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(jagVorbis);
    }

    // 0x1002a9c50
    void shared_ptr<oldscape::sound::PCMStreamable>::swap(shared_ptr<oldscape::sound::PCMStreamable>& pcmStreamable) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pcmStreamable);
        std::swap<ref_counter_base*>(*this, pcmStreamable);
        std::swap<oldscape::sound::PCMStreamable*>(*((this + 8)), *((pcmStreamable + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pcmStreamable);
    }

    // 0x1002a9d60
    shared_ptr<Linkable<oldscape::sound::PCMStream>>* shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator=(
        shared_ptr<Linkable<oldscape::sound::PCMStream>>&& linkable) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::sound::PCMStream> _>*)this);
        return this;
    }

    // 0x1002a9da0
    shared_ptr<Linkable<oldscape::sound::PCMStream>>& shared_ptr<Linkable<oldscape::sound::PCMStream>>::operator=
        <oldscape::sound::PCMStream>(const shared_ptr<oldscape::sound::PCMStream>& pcmStream) {

        shared_ptr<oldscape::dash3d::Decor> local_28(pcmStream);
        swap(&local_28, (shared_ptr<Linkable<oldscape::sound::PCMStream> _>*)this);
        return (shared_ptr<Linkable<oldscape::sound::PCMStream> _>*)this;
    }

    // 0x1002aaf20
    void shared_ptr<oldscape::sound::PCMStream>::swap(shared_ptr<oldscape::sound::PCMStream>& pcmStream) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pcmStream);
        std::swap<ref_counter_base*>(*this, pcmStream);
        std::swap<oldscape::sound::PCMStream*>(*((this + 8)), *((pcmStream + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pcmStream);
    }

    // 0x1002ab010
    shared_ptr<oldscape::sound::PCMStream>::shared_ptr<oldscape::sound::WaveStream, void>(
        oldscape::sound::WaveStream* waveStream) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<oldscape::sound::WaveStream>* this_00 = (ref_counter<oldscape::sound::WaveStream>*)operator new(24);
        new (this_00) ref_counter<oldscape::sound::WaveStream>(waveStream);
        *(ref_counter<oldscape::sound::WaveStream>**)this = this_00;
        *(WaveStream**)(this + 8) = waveStream;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x1002ab120
    shared_ptr<Linkable<oldscape::sound::MixerController>>*
    shared_ptr<Linkable<oldscape::sound::MixerController>>::operator=(
        shared_ptr<Linkable<oldscape::sound::MixerController>>&& linkable) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::sound::MixerController> _>*)this);
        return this;
    }

    // 0x1002ab170
    shared_ptr<Linkable<oldscape::sound::MixerController>>&
        shared_ptr<Linkable<oldscape::sound::MixerController>>::operator=
            <oldscape::sound::MixerController>(const shared_ptr<oldscape::sound::MixerController>& mixerController) {

        shared_ptr<oldscape::dash3d::Decor> local_28(mixerController);
        swap(&local_28, (shared_ptr<Linkable<oldscape::sound::MixerController> _>*)this);
        return (shared_ptr<Linkable<oldscape::sound::MixerController> _>*)this;
    }

    // 0x1002abfe0
    void shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>::swap(
        shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>& playerTask) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(playerTask);
        std::swap<ref_counter_base*>(*this, playerTask);
        std::swap<oldscape::sound::PCMPlayer::PlayerTask*>(*((this + 8)), *((playerTask + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(playerTask);
    }

    // 0x1002ac0a0
    uint64_t shared_ptr<oldscape::sound::PCMPlayer::PlayerTask>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002acb30
    shared_ptr<oldscape::sound::JagVorbis>::shared_ptr<oldscape::sound::JagVorbis, void>(
        oldscape::sound::JagVorbis* jagVorbis) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<oldscape::sound::JagVorbis>* this_00 = (ref_counter<oldscape::sound::JagVorbis>*)operator new(24);
        new (this_00) ref_counter<oldscape::sound::JagVorbis>(jagVorbis);
        *(ref_counter<oldscape::sound::JagVorbis>**)this = this_00;
        *(JagVorbis**)(this + 8) = jagVorbis;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x1002af470
    uint64_t shared_ptr<oldscape::math::AffineTransform3>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002af8a0
    uint64_t shared_ptr<oldscape::math::AffineTransform3>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002b65f0
    shared_ptr<oldscape::PacketJ<Array<unsigned char>>>* shared_ptr<oldscape::PacketJ<Array<unsigned char>>>::operator=(
        const shared_ptr<oldscape::PacketJ<Array<unsigned char>>>& packetJ) {

        shared_ptr<oldscape::dash3d::Decor> local_28(packetJ);
        swap(&local_28, (shared_ptr<oldscape::PacketJ<Array<unsigned char> _> _>*)this);
        return this;
    }

    // 0x1002bae20
    shared_ptr<oldscape::jagex3::Js5>&
        shared_ptr<oldscape::jagex3::Js5>::operator= <oldscape::jagex3::Js5LocalLoader::Js5Local, void>(
            shared_ptr<oldscape::jagex3::Js5LocalLoader::Js5Local>&& js5Local) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(js5Local);
        swap(&local_28, this);
        return this;
    }

    // 0x1002baf40
    void shared_ptr<oldscape::jagex3::Js5>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1002be8f0
    uint64_t shared_ptr<Array<oldscape::graphics::Pix8>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002c3ed0
    uint64_t shared_ptr<math::Vector3T<float>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002c3f30
    uint64_t shared_ptr<math::QuaternionT<float>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002c7c20
    shared_ptr<math::QuaternionT<float>>*
    shared_ptr<math::QuaternionT<float>>::operator=(shared_ptr<math::QuaternionT<float>>&& quaternion) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(quaternion);
        swap(&local_28, (shared_ptr<math::QuaternionT<float> _>*)this);
        return this;
    }

    // 0x1002c7cf0
    shared_ptr<math::Vector3T<float>>*
    shared_ptr<math::Vector3T<float>>::operator=(shared_ptr<math::Vector3T<float>>&& vector3) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(vector3);
        swap(&local_28, (shared_ptr<math::Vector3T<float> _>*)this);
        return this;
    }

    // 0x1002c7f90
    uint64_t shared_ptr<math::QuaternionT<float>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002c8440
    uint64_t shared_ptr<math::Vector3T<float>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002c8ce0
    uint64_t shared_ptr<oldscape::math::RotTrans>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002cd0b0
    uint64_t shared_ptr<oldscape::midi2::MidiRequest>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002cdc10
    void shared_ptr<oldscape::midi2::MidiRequest>::swap(shared_ptr<oldscape::midi2::MidiRequest>& midiRequest) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(midiRequest);
        std::swap<ref_counter_base*>(*this, midiRequest);
        std::swap<oldscape::midi2::MidiRequest*>(*((this + 8)), *((midiRequest + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(midiRequest);
    }

    // 0x1002ce3c0
    uint64_t shared_ptr<oldscape::midi2::MidiTask>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002ce4f0
    void shared_ptr<oldscape::midi2::MidiTask>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1002cfed0
    void shared_ptr<oldscape::sound::WaveStream>::reset<oldscape::sound::WaveStream, void>(
        oldscape::sound::WaveStream* waveStream) {
        shared_ptr<oldscape::sound::WaveStream> local_28;

        shared_ptr<oldscape::sound::WaveStream, void>(&local_28, waveStream);
        swap(&local_28, this);
    }

    // 0x1002d0090
    uint64_t shared_ptr<oldscape::midi2::Patch>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002d15a0
    shared_ptr<oldscape::midi2::MidiMixer>*
    shared_ptr<oldscape::midi2::MidiMixer>::operator=(shared_ptr<oldscape::midi2::MidiMixer>&& midiMixer) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(midiMixer);
        swap(&local_28, this);
        return this;
    }

    // 0x1002d2100
    uint64_t shared_ptr<std::atomic<bool>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002d21f0
    shared_ptr<std::atomic<bool>>* shared_ptr<std::atomic<bool>>::operator=(shared_ptr<std::atomic<bool>>&& atomic) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(atomic);
        swap(&local_28, (shared_ptr<std::atomic<bool> _>*)this);
        return this;
    }

    // 0x1002d57d0
    shared_ptr<oldscape::midi2::MidiNote>*
    shared_ptr<oldscape::midi2::MidiNote>::operator=(shared_ptr<oldscape::midi2::MidiNote>&& midiNote) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(midiNote);
        swap(&local_28, this);
        return this;
    }

    // 0x1002d5810
    uint64_t shared_ptr<oldscape::midi2::MidiMixer>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002d58a0
    shared_ptr<oldscape::midi2::MidiNote>*
    shared_ptr<oldscape::midi2::MidiNote>::operator=(const shared_ptr<oldscape::midi2::MidiNote>& midiNote) {

        shared_ptr<oldscape::dash3d::Decor> local_28(midiNote);
        swap(&local_28, this);
        return this;
    }

    // 0x1002d58e0
    uint64_t shared_ptr<oldscape::midi2::Patch>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002d5a30
    shared_ptr<oldscape::midi2::Patch>*
    shared_ptr<oldscape::midi2::Patch>::operator=(const shared_ptr<oldscape::midi2::Patch>& patch) {

        shared_ptr<oldscape::dash3d::Decor> local_28(patch);
        swap(&local_28, this);
        return this;
    }

    // 0x1002d5a70
    shared_ptr<oldscape::sound::Wave>*
    shared_ptr<oldscape::sound::Wave>::operator=(const shared_ptr<oldscape::sound::Wave>& wave) {

        shared_ptr<oldscape::dash3d::Decor> local_28(wave);
        swap(&local_28, this);
        return this;
    }

    // 0x1002d5b30
    shared_ptr<oldscape::midi2::EnvelopeSet>*
    shared_ptr<oldscape::midi2::EnvelopeSet>::operator=(const shared_ptr<oldscape::midi2::EnvelopeSet>& envelopeSet) {

        shared_ptr<oldscape::dash3d::Decor> local_28(envelopeSet);
        swap(&local_28, this);
        return this;
    }

    // 0x1002d60a0
    uint64_t shared_ptr<oldscape::midi2::MidiNote>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002d64f0
    uint64_t shared_ptr<oldscape::midi2::EnvelopeSet>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002d88e0
    void shared_ptr<oldscape::midi2::EnvelopeSet>::reset<oldscape::midi2::EnvelopeSet, void>(
        oldscape::midi2::EnvelopeSet* envelopeSet) {
        shared_ptr<oldscape::midi2::EnvelopeSet> local_28;

        shared_ptr<oldscape::midi2::EnvelopeSet, void>(&local_28, envelopeSet);
        swap(&local_28, this);
    }

    // 0x1002d8920
    uint64_t shared_ptr<oldscape::midi2::EnvelopeSet>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002db070
    shared_ptr<oldscape::midi2::MidiRequest>*
    shared_ptr<oldscape::midi2::MidiRequest>::operator=(const shared_ptr<oldscape::midi2::MidiRequest>& midiRequest) {

        shared_ptr<oldscape::dash3d::Decor> local_28(midiRequest);
        swap(&local_28, this);
        return this;
    }

    // 0x1002db6c0
    void shared_ptr<Linkable<oldscape::sound::MixerController>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, (shared_ptr<Linkable<oldscape::sound::MixerController> _>*)this);
    }

    // 0x1002dc150
    shared_ptr<oldscape::sound::LazyWave::LazyWaveImpl>* shared_ptr<oldscape::sound::LazyWave::LazyWaveImpl>::operator=(
        shared_ptr<oldscape::sound::LazyWave::LazyWaveImpl>&& lazyWaveImpl) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(lazyWaveImpl);
        swap(&local_28, this);
        return this;
    }

    // 0x1002dc190
    void shared_ptr<oldscape::sound::LazyWave::LazyWaveImpl>::swap(
        shared_ptr<oldscape::sound::LazyWave::LazyWaveImpl>& lazyWaveImpl) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(lazyWaveImpl);
        std::swap<ref_counter_base*>(*this, lazyWaveImpl);
        std::swap<oldscape::sound::LazyWave::LazyWaveImpl*>(*((this + 8)), *((lazyWaveImpl + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(lazyWaveImpl);
    }

    // 0x1002dc210
    shared_ptr<oldscape::sound::LazyWave::LazyWaveImpl>* shared_ptr<oldscape::sound::LazyWave::LazyWaveImpl>::operator=(
        const shared_ptr<oldscape::sound::LazyWave::LazyWaveImpl>& lazyWaveImpl) {

        shared_ptr<oldscape::dash3d::Decor> local_28(lazyWaveImpl);
        swap(&local_28, this);
        return this;
    }

    // 0x1002e0f90
    void shared_ptr<oldscape::jagex3::Js5>::swap(shared_ptr<oldscape::jagex3::Js5>& js5) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(js5);
        std::swap<ref_counter_base*>(*this, js5);
        std::swap<oldscape::jagex3::Js5*>(*((this + 8)), *((js5 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(js5);
    }

    // 0x1002e2fd0
    shared_ptr<Array<unsigned char>[]>*
    shared_ptr<Array<unsigned char>[]>::operator=(shared_ptr<Array<unsigned char>[]>&& arg1) {
        shared_ptr<Array<unsigned char>[]> local_28[16];

        shared_ptr(local_28, (shared_ptr<signed_char_[]>*)arg1);
        swap(local_28, (shared_ptr<Array<unsigned char> _[]>*)this);
        ((shared_ptr<unsigned int[]>*)local_28)->~shared_ptr();
        return this;
    }

    // 0x1002e3010
    void shared_ptr<Array<unsigned char>[]>::swap(shared_ptr<Array<unsigned char>[]>& arg1) {
        ~AutoSingleton();
        arg1.~AutoSingleton();
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<Array<unsigned char>*>(*((this + 8)), *((arg1 + 8)));
        ~AutoSingleton();
        arg1.~AutoSingleton();
    }

    // 0x1002e3160
    long shared_ptr<Array<unsigned char>[]>::operator[](unsigned long arg1) const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                340, nullptr);
        }
        return arg1 * 24 + *(long*)(this + 8);
    }

    // 0x1002e3250
    void shared_ptr<math::QuaternionT<float>>::swap(shared_ptr<math::QuaternionT<float>>& quaternion) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(quaternion);
        std::swap<ref_counter_base*>(*this, quaternion);
        std::swap<math::QuaternionT<float>*>(*((this + 8)), *((quaternion + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(quaternion);
    }

    // 0x1002e3350
    void shared_ptr<math::Vector3T<float>>::swap(shared_ptr<math::Vector3T<float>>& vector3) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(vector3);
        std::swap<ref_counter_base*>(*this, vector3);
        std::swap<math::Vector3T<float>*>(*((this + 8)), *((vector3 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(vector3);
    }

    // 0x1002e3f30
    shared_ptr<oldscape::midi2::MidiFile>::shared_ptr<oldscape::midi2::MidiFile, void>(
        oldscape::midi2::MidiFile* midiFile) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<oldscape::midi2::MidiFile>* this_00 = (ref_counter<oldscape::midi2::MidiFile>*)operator new(24);
        new (this_00) ref_counter<oldscape::midi2::MidiFile>(midiFile);
        *(ref_counter<oldscape::midi2::MidiFile>**)this = this_00;
        *(MidiFile**)(this + 8) = midiFile;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x1002e47b0
    void shared_ptr<oldscape::midi2::MidiTask>::swap(shared_ptr<oldscape::midi2::MidiTask>& midiTask) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(midiTask);
        std::swap<ref_counter_base*>(*this, midiTask);
        std::swap<oldscape::midi2::MidiTask*>(*((this + 8)), *((midiTask + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(midiTask);
    }

    // 0x1002e5b80
    shared_ptr<oldscape::midi2::MidiTask>*
    shared_ptr<oldscape::midi2::MidiTask>::operator=(shared_ptr<oldscape::midi2::MidiTask>&& midiTask) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(midiTask);
        swap(&local_28, this);
        return this;
    }

    // 0x1002e6010
    shared_ptr<oldscape::midi2::MidiRequest>*
    shared_ptr<oldscape::midi2::MidiRequest>::operator=(shared_ptr<oldscape::midi2::MidiRequest>&& midiRequest) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(midiRequest);
        swap(&local_28, this);
        return this;
    }

    // 0x1002e60f0
    void shared_ptr<Linkable<oldscape::midi2::MidiNote>>::reset<Linkable<oldscape::midi2::MidiNote>, void>(
        Linkable<oldscape::midi2::MidiNote>* linkable) {
        shared_ptr<Linkable<oldscape::midi2::MidiNote>> local_28;

        shared_ptr<Linkable<oldscape::midi2::MidiNote>, void>(&local_28, linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::midi2::MidiNote> _>*)this);
    }

    // 0x1002e6140
    uint64_t shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002e6180
    shared_ptr<Linkable<oldscape::midi2::MidiNote>>* shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator=(
        const shared_ptr<Linkable<oldscape::midi2::MidiNote>>& linkable) {

        shared_ptr<oldscape::dash3d::Decor> local_28(linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::midi2::MidiNote> _>*)this);
        return this;
    }

    // 0x1002e61d0
    void
    shared_ptr<Linkable<oldscape::midi2::MidiNote>>::swap(shared_ptr<Linkable<oldscape::midi2::MidiNote>>& linkable) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
        std::swap<ref_counter_base*>(*this, linkable);
        std::swap<Linkable<oldscape::midi2::MidiNote>*>(*((this + 8)), *((linkable + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
    }

    // 0x1002e6230
    shared_ptr<Linkable<oldscape::midi2::MidiNote>>::shared_ptr<Linkable<oldscape::midi2::MidiNote>, void>(
        Linkable<oldscape::midi2::MidiNote>* linkable) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<Linkable<oldscape::midi2::MidiNote>>* this_00 =
            (ref_counter<Linkable<oldscape::midi2::MidiNote>>*)operator new(24);
        new (this_00) ref_counter<Linkable<oldscape::midi2::MidiNote>>(linkable);
        *(ref_counter<Linkable<oldscape::midi2::MidiNote>>**)this = this_00;
        *(Linkable<oldscape::midi2::MidiNote>**)(this + 8) = linkable;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x1002e6410
    void shared_ptr<Linkable<oldscape::midi2::MidiNote>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, (shared_ptr<Linkable<oldscape::midi2::MidiNote> _>*)this);
    }

    // 0x1002e6710
    void shared_ptr<oldscape::midi2::MidiMixer>::swap(shared_ptr<oldscape::midi2::MidiMixer>& midiMixer) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(midiMixer);
        std::swap<ref_counter_base*>(*this, midiMixer);
        std::swap<oldscape::midi2::MidiMixer*>(*((this + 8)), *((midiMixer + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(midiMixer);
    }

    // 0x1002e68d0
    shared_ptr<oldscape::midi2::Patch>::shared_ptr<oldscape::midi2::Patch, void>(oldscape::midi2::Patch* patch) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<oldscape::midi2::Patch>* this_00 = (ref_counter<oldscape::midi2::Patch>*)operator new(24);
        new (this_00) ref_counter<oldscape::midi2::Patch>(patch);
        *(ref_counter<oldscape::midi2::Patch>**)this = this_00;
        *(Patch**)(this + 8) = patch;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x1002e7460
    void shared_ptr<std::atomic<bool>>::swap(shared_ptr<std::atomic<bool>>& atomic) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(atomic);
        std::swap<ref_counter_base*>(*this, atomic);
        std::swap<std::atomic<bool>*>(*((this + 8)), *((atomic + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(atomic);
    }

    // 0x1002e7fe0
    uint64_t shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                              eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>::
    operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002ea350
    void shared_ptr<oldscape::midi2::MidiNote>::swap(shared_ptr<oldscape::midi2::MidiNote>& midiNote) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(midiNote);
        std::swap<ref_counter_base*>(*this, midiNote);
        std::swap<oldscape::midi2::MidiNote*>(*((this + 8)), *((midiNote + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(midiNote);
    }

    // 0x1002ea5d0
    void shared_ptr<oldscape::midi2::Patch>::swap(shared_ptr<oldscape::midi2::Patch>& patch) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(patch);
        std::swap<ref_counter_base*>(*this, patch);
        std::swap<oldscape::midi2::Patch*>(*((this + 8)), *((patch + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(patch);
    }

    // 0x1002ea650
    void shared_ptr<oldscape::sound::Wave>::swap(shared_ptr<oldscape::sound::Wave>& wave) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(wave);
        std::swap<ref_counter_base*>(*this, wave);
        std::swap<oldscape::sound::Wave*>(*((this + 8)), *((wave + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(wave);
    }

    // 0x1002ea6d0
    void shared_ptr<oldscape::midi2::EnvelopeSet>::swap(shared_ptr<oldscape::midi2::EnvelopeSet>& envelopeSet) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(envelopeSet);
        std::swap<ref_counter_base*>(*this, envelopeSet);
        std::swap<oldscape::midi2::EnvelopeSet*>(*((this + 8)), *((envelopeSet + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(envelopeSet);
    }

    // 0x1002ea7f0
    shared_ptr<Linkable<oldscape::midi2::MidiNote>>* shared_ptr<Linkable<oldscape::midi2::MidiNote>>::operator=(
        shared_ptr<Linkable<oldscape::midi2::MidiNote>>&& linkable) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::midi2::MidiNote> _>*)this);
        return this;
    }

    // 0x1002eb510
    shared_ptr<oldscape::midi2::EnvelopeSet>::shared_ptr<oldscape::midi2::EnvelopeSet, void>(
        oldscape::midi2::EnvelopeSet* envelopeSet) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<oldscape::midi2::EnvelopeSet>* this_00 =
            (ref_counter<oldscape::midi2::EnvelopeSet>*)operator new(24);
        new (this_00) ref_counter<oldscape::midi2::EnvelopeSet>(envelopeSet);
        *(ref_counter<oldscape::midi2::EnvelopeSet>**)this = this_00;
        *(EnvelopeSet**)(this + 8) = envelopeSet;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x1002ed6b0
    uint64_t shared_ptr<oldscape::dash3d::Skeleton>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002ed7a0
    uint64_t shared_ptr<Array<bool>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002edf10
    uint64_t shared_ptr<oldscape::dash3d::AnimFrameSet>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002ef100
    uint64_t shared_ptr<oldscape::dash3d::PoseStateRSeven>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002efdc0
    shared_ptr<RenderState::ModelSubmissionRSeven>* shared_ptr<RenderState::ModelSubmissionRSeven>::operator=(
        shared_ptr<RenderState::ModelSubmissionRSeven>&& modelSubmissionRSeven) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(modelSubmissionRSeven);
        swap(&local_28, this);
        return this;
    }

    // 0x1002f0f70
    uint64_t shared_ptr<graphics::PointLight>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002f2180
    void shared_ptr<RenderState::ModelSubmissionRSeven>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1002f3750
    uint64_t shared_ptr<oldscape::dash3d::ShareLightCache>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002f3a20
    uint64_t shared_ptr<oldscape::dash3d::ShareLightCache>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002f4700
    shared_ptr<oldscape::dash3d::ShareLightCache>* shared_ptr<oldscape::dash3d::ShareLightCache>::operator=(
        shared_ptr<oldscape::dash3d::ShareLightCache>&& shareLightCache) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(shareLightCache);
        swap(&local_28, this);
        return this;
    }

    // 0x1002f4cb0
    shared_ptr<oldscape::graphics::animation::OldscapeJoint>*
    shared_ptr<oldscape::graphics::animation::OldscapeJoint>::operator=(
        shared_ptr<oldscape::graphics::animation::OldscapeJoint>&& oldscapeJoint) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(oldscapeJoint);
        swap(&local_28, this);
        return this;
    }

    // 0x1002f4da0
    shared_ptr<oldscape::graphics::animation::OldscapeJoint>*
    shared_ptr<oldscape::graphics::animation::OldscapeJoint>::operator=(
        const shared_ptr<oldscape::graphics::animation::OldscapeJoint>& oldscapeJoint) {

        shared_ptr<oldscape::dash3d::Decor> local_28(oldscapeJoint);
        swap(&local_28, this);
        return this;
    }

    // 0x1002f4f30
    uint64_t shared_ptr<oldscape::graphics::animation::OldscapeJoint>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1002fe6b0
    uint64_t shared_ptr<Array<unsigned int>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100302260
    uint64_t shared_ptr<oldscape::dash3d::GroundObject>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100303180
    void shared_ptr<Array<unsigned int>>::reset<Array<unsigned int>, void>(Array<unsigned int>* arg1) {
        shared_ptr<Array<unsigned int>> local_28;

        shared_ptr<Array<unsigned int>, void>(&local_28, arg1);
        swap(&local_28, (shared_ptr<Array<unsigned int> _>*)this);
    }

    // 0x100303680
    uint64_t shared_ptr<Array<unsigned int>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003036c0
    void shared_ptr<Array<unsigned int>>::swap(shared_ptr<Array<unsigned int>>& arg1) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<Array<unsigned int>*>(*((this + 8)), *((arg1 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
    }

    // 0x100303a90
    shared_ptr<oldscape::dash3d::Texture>*
    shared_ptr<oldscape::dash3d::Texture>::operator=(shared_ptr<oldscape::dash3d::Texture>&& texture) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(texture);
        swap(&local_28, this);
        return this;
    }

    // 0x1003061a0
    uint64_t shared_ptr<oldscape::dash3d::Square>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100306340
    uint64_t shared_ptr<graphics::GeometryBatch>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003073f0
    shared_ptr<oldscape::dash3d::Sprite>*
    shared_ptr<oldscape::dash3d::Sprite>::operator=(shared_ptr<oldscape::dash3d::Sprite>&& sprite) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(sprite);
        swap(&local_28, this);
        return this;
    }

    // 0x100307a30
    shared_ptr<oldscape::dash3d::Square>*
    shared_ptr<oldscape::dash3d::Square>::operator=(const shared_ptr<oldscape::dash3d::Square>& square) {

        shared_ptr<oldscape::dash3d::Decor> local_28(square);
        swap(&local_28, this);
        return this;
    }

    // 0x100307b50
    uint64_t shared_ptr<oldscape::dash3d::Ground>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100308210
    shared_ptr<oldscape::dash3d::QuickGround>*
    shared_ptr<oldscape::dash3d::QuickGround>::operator=(const shared_ptr<oldscape::dash3d::QuickGround>& quickGround) {

        shared_ptr<oldscape::dash3d::Decor> local_28(quickGround);
        swap(&local_28, this);
        return this;
    }

    // 0x100308350
    shared_ptr<oldscape::dash3d::Ground>*
    shared_ptr<oldscape::dash3d::Ground>::operator=(const shared_ptr<oldscape::dash3d::Ground>& ground) {

        shared_ptr<oldscape::dash3d::Decor> local_28(ground);
        swap(&local_28, this);
        return this;
    }

    // 0x100308540
    shared_ptr<oldscape::dash3d::GroundDecor>*
    shared_ptr<oldscape::dash3d::GroundDecor>::operator=(const shared_ptr<oldscape::dash3d::GroundDecor>& groundDecor) {

        shared_ptr<oldscape::dash3d::Decor> local_28(groundDecor);
        swap(&local_28, this);
        return this;
    }

    // 0x100308910
    shared_ptr<oldscape::dash3d::GroundObject>* shared_ptr<oldscape::dash3d::GroundObject>::operator=(
        const shared_ptr<oldscape::dash3d::GroundObject>& groundObject) {

        shared_ptr<oldscape::dash3d::Decor> local_28(groundObject);
        swap(&local_28, this);
        return this;
    }

    // 0x100308bd0
    shared_ptr<oldscape::dash3d::Wall>*
    shared_ptr<oldscape::dash3d::Wall>::operator=(const shared_ptr<oldscape::dash3d::Wall>& wall) {

        shared_ptr<oldscape::dash3d::Decor> local_28(wall);
        swap(&local_28, this);
        return this;
    }

    // 0x100308e50
    shared_ptr<oldscape::dash3d::Decor>*
    shared_ptr<oldscape::dash3d::Decor>::operator=(const shared_ptr<oldscape::dash3d::Decor>& decor) {
        shared_ptr<oldscape::dash3d::Decor> local_28;

        shared_ptr(&local_28, (shared_ptr<oldscape::dash3d::GroundDecor>*)decor);
        swap(&local_28, this);
        return this;
    }

    // 0x100309620
    uint64_t shared_ptr<oldscape::dash3d::Sprite>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100309660
    shared_ptr<oldscape::dash3d::Sprite>*
    shared_ptr<oldscape::dash3d::Sprite>::operator=(const shared_ptr<oldscape::dash3d::Sprite>& sprite) {

        shared_ptr<oldscape::dash3d::Decor> local_28(sprite);
        swap(&local_28, this);
        return this;
    }

    // 0x100309b90
    shared_ptr<oldscape::dash3d::Wall>*
    shared_ptr<oldscape::dash3d::Wall>::operator=(shared_ptr<oldscape::dash3d::Wall>&& wall) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(wall);
        swap(&local_28, this);
        return this;
    }

    // 0x100309c50
    shared_ptr<oldscape::dash3d::Decor>*
    shared_ptr<oldscape::dash3d::Decor>::operator=(shared_ptr<oldscape::dash3d::Decor>&& decor) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(decor);
        swap(&local_28, this);
        return this;
    }

    // 0x100309df0
    shared_ptr<oldscape::dash3d::GroundDecor>*
    shared_ptr<oldscape::dash3d::GroundDecor>::operator=(shared_ptr<oldscape::dash3d::GroundDecor>&& groundDecor) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(groundDecor);
        swap(&local_28, this);
        return this;
    }

    // 0x100309eb0
    shared_ptr<oldscape::dash3d::GroundObject>*
    shared_ptr<oldscape::dash3d::GroundObject>::operator=(shared_ptr<oldscape::dash3d::GroundObject>&& groundObject) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(groundObject);
        swap(&local_28, this);
        return this;
    }

    // 0x10030bb40
    uint64_t shared_ptr<oldscape::dash3d::QuickGround>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10030d9b0
    uint64_t shared_ptr<oldscape::dash3d::Square>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10030da20
    uint64_t shared_ptr<oldscape::dash3d::ModelSource>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003210c0
    uint64_t shared_ptr<oldscape::graphics::animation::OldscapeAnimKey>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003211f0
    shared_ptr<oldscape::graphics::animation::OldscapeAnimKey>*
    shared_ptr<oldscape::graphics::animation::OldscapeAnimKey>::operator=(
        const shared_ptr<oldscape::graphics::animation::OldscapeAnimKey>& oldscapeAnimKey) {

        shared_ptr<oldscape::dash3d::Decor> local_28(oldscapeAnimKey);
        swap(&local_28, this);
        return this;
    }

    // 0x100321230
    shared_ptr<oldscape::graphics::animation::OldscapeAnimKey>*
    shared_ptr<oldscape::graphics::animation::OldscapeAnimKey>::operator=(
        shared_ptr<oldscape::graphics::animation::OldscapeAnimKey>&& oldscapeAnimKey) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(oldscapeAnimKey);
        swap(&local_28, this);
        return this;
    }

    // 0x100322a90
    void shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>::reset<
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet, void>(
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet* oldscapeAnimKeyFrameSet) {
        shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> local_28;

        shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, void>(&local_28, oldscapeAnimKeyFrameSet);
        swap(&local_28, this);
    }

    // 0x100323050
    void shared_ptr<oldscape::dash3d::AnimBase>::reset<oldscape::dash3d::AnimBase, void>(
        oldscape::dash3d::AnimBase* animBase) {
        shared_ptr<oldscape::dash3d::AnimBase> local_28;

        shared_ptr<oldscape::dash3d::AnimBase, void>(&local_28, animBase);
        swap(&local_28, this);
    }

    // 0x100323810
    uint64_t shared_ptr<oldscape::graphics::animation::OldscapeAnimCurve>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100323990
    uint64_t
    shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003239d0
    shared_ptr<oldscape::graphics::animation::OldscapeAnimCurve>*
    shared_ptr<oldscape::graphics::animation::OldscapeAnimCurve>::operator=(
        const shared_ptr<oldscape::graphics::animation::OldscapeAnimCurve>& oldscapeAnimCurve) {

        shared_ptr<oldscape::dash3d::Decor> local_28(oldscapeAnimCurve);
        swap(&local_28, this);
        return this;
    }

    // 0x100323a50
    shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>*
    shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::operator=(
        const shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>&
            oldscapeAnimCurveLoadJob) {

        shared_ptr<oldscape::dash3d::Decor> local_28(oldscapeAnimCurveLoadJob);
        swap(&local_28, this);
        return this;
    }

    // 0x100324630
    uint64_t shared_ptr<oldscape::graphics::animation::OldscapeAnimCurve>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100325960
    shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>*
    shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>::operator=(
        const shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>& operationImpl) {

        shared_ptr<oldscape::dash3d::Decor> local_28(operationImpl);
        swap(&local_28, (shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>*)this);
        return this;
    }

    // 0x1003262c0
    shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>*
    shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>::operator=(
        shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>&& operationImpl) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(operationImpl);
        swap(&local_28, (shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>*)this);
        return this;
    }

    // 0x100326970
    shared_ptr<Array<unsigned int>>*
    shared_ptr<Array<unsigned int>>::operator=(shared_ptr<Array<unsigned int>>&& arg1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        swap(&local_28, (shared_ptr<Array<unsigned int> _>*)this);
        return this;
    }

    // 0x10032c1b0
    void shared_ptr<oldscape::dash3d::Square>::swap(shared_ptr<oldscape::dash3d::Square>& square) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(square);
        std::swap<ref_counter_base*>(*this, square);
        std::swap<oldscape::dash3d::Square*>(*((this + 8)), *((square + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(square);
    }

    // 0x10032c6a0
    void shared_ptr<RenderState::ModelSubmissionRSeven>::swap(
        shared_ptr<RenderState::ModelSubmissionRSeven>& modelSubmissionRSeven) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelSubmissionRSeven);
        std::swap<ref_counter_base*>(*this, modelSubmissionRSeven);
        std::swap<RenderState::ModelSubmissionRSeven*>(*((this + 8)), *((modelSubmissionRSeven + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelSubmissionRSeven);
    }

    // 0x10032f360
    void shared_ptr<oldscape::dash3d::ShareLightCache>::swap(
        shared_ptr<oldscape::dash3d::ShareLightCache>& shareLightCache) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(shareLightCache);
        std::swap<ref_counter_base*>(*this, shareLightCache);
        std::swap<oldscape::dash3d::ShareLightCache*>(*((this + 8)), *((shareLightCache + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(shareLightCache);
    }

    // 0x10032f6c0
    void shared_ptr<oldscape::graphics::animation::OldscapeJoint>::swap(
        shared_ptr<oldscape::graphics::animation::OldscapeJoint>& oldscapeJoint) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeJoint);
        std::swap<ref_counter_base*>(*this, oldscapeJoint);
        std::swap<oldscape::graphics::animation::OldscapeJoint*>(*((this + 8)), *((oldscapeJoint + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeJoint);
    }

    // 0x100330490
    shared_ptr<Array<unsigned int>>::shared_ptr<Array<unsigned int>, void>(Array<unsigned int>* arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<Array<unsigned int>>* this_00 = (ref_counter<Array<unsigned int>>*)operator new(24);
        new (this_00) ref_counter<Array<unsigned int>>(arg1);
        *(ref_counter<Array<unsigned int>>**)this = this_00;
        *(Array<unsigned int>**)(this + 8) = arg1;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x100330720
    void shared_ptr<Linkable<oldscape::dash3d::Texture>>::reset<Linkable<oldscape::dash3d::Texture>, void>(
        Linkable<oldscape::dash3d::Texture>* linkable) {
        shared_ptr<Linkable<oldscape::dash3d::Texture>> local_28;

        shared_ptr<Linkable<oldscape::dash3d::Texture>, void>(&local_28, linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::dash3d::Texture> _>*)this);
    }

    // 0x100330790
    shared_ptr<Linkable<oldscape::dash3d::Texture>>::shared_ptr<Linkable<oldscape::dash3d::Texture>, void>(
        Linkable<oldscape::dash3d::Texture>* linkable) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<Linkable<oldscape::dash3d::Texture>>* this_00 =
            (ref_counter<Linkable<oldscape::dash3d::Texture>>*)operator new(24);
        new (this_00) ref_counter<Linkable<oldscape::dash3d::Texture>>(linkable);
        *(ref_counter<Linkable<oldscape::dash3d::Texture>>**)this = this_00;
        *(Linkable<oldscape::dash3d::Texture>**)(this + 8) = linkable;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x100330ac0
    void shared_ptr<oldscape::dash3d::Texture>::swap(shared_ptr<oldscape::dash3d::Texture>& texture) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(texture);
        std::swap<ref_counter_base*>(*this, texture);
        std::swap<oldscape::dash3d::Texture*>(*((this + 8)), *((texture + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(texture);
    }

    // 0x100330b80
    shared_ptr<Linkable<oldscape::dash3d::Texture>>* shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator=(
        shared_ptr<Linkable<oldscape::dash3d::Texture>>&& linkable) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::dash3d::Texture> _>*)this);
        return this;
    }

    // 0x100330bd0
    shared_ptr<Linkable<oldscape::dash3d::Texture>>& shared_ptr<Linkable<oldscape::dash3d::Texture>>::operator=
        <oldscape::dash3d::Texture>(const shared_ptr<oldscape::dash3d::Texture>& texture) {

        shared_ptr<oldscape::dash3d::Decor> local_28(texture);
        swap(&local_28, (shared_ptr<Linkable<oldscape::dash3d::Texture> _>*)this);
        return (shared_ptr<Linkable<oldscape::dash3d::Texture> _>*)this;
    }

    // 0x100331e60
    void shared_ptr<Linkable<oldscape::dash3d::Square>>::reset<Linkable<oldscape::dash3d::Square>, void>(
        Linkable<oldscape::dash3d::Square>* linkable) {
        shared_ptr<Linkable<oldscape::dash3d::Square>> local_28;

        shared_ptr<Linkable<oldscape::dash3d::Square>, void>(&local_28, linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::dash3d::Square> _>*)this);
    }

    // 0x100331ec0
    uint64_t shared_ptr<Linkable<oldscape::dash3d::Square>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100331f00
    shared_ptr<Linkable<oldscape::dash3d::Square>>* shared_ptr<Linkable<oldscape::dash3d::Square>>::operator=(
        const shared_ptr<Linkable<oldscape::dash3d::Square>>& linkable) {

        shared_ptr<oldscape::dash3d::Decor> local_28(linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::dash3d::Square> _>*)this);
        return this;
    }

    // 0x100331f60
    void
    shared_ptr<Linkable<oldscape::dash3d::Square>>::swap(shared_ptr<Linkable<oldscape::dash3d::Square>>& linkable) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
        std::swap<ref_counter_base*>(*this, linkable);
        std::swap<Linkable<oldscape::dash3d::Square>*>(*((this + 8)), *((linkable + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(linkable);
    }

    // 0x100331fc0
    shared_ptr<Linkable<oldscape::dash3d::Square>>::shared_ptr<Linkable<oldscape::dash3d::Square>, void>(
        Linkable<oldscape::dash3d::Square>* linkable) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<Linkable<oldscape::dash3d::Square>>* this_00 =
            (ref_counter<Linkable<oldscape::dash3d::Square>>*)operator new(24);
        new (this_00) ref_counter<Linkable<oldscape::dash3d::Square>>(linkable);
        *(ref_counter<Linkable<oldscape::dash3d::Square>>**)this = this_00;
        *(Linkable<oldscape::dash3d::Square>**)(this + 8) = linkable;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x1003324a0
    void shared_ptr<Linkable<oldscape::dash3d::Square>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, (shared_ptr<Linkable<oldscape::dash3d::Square> _>*)this);
    }

    // 0x100332de0
    void shared_ptr<oldscape::dash3d::Sprite>::swap(shared_ptr<oldscape::dash3d::Sprite>& sprite) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(sprite);
        std::swap<ref_counter_base*>(*this, sprite);
        std::swap<oldscape::dash3d::Sprite*>(*((this + 8)), *((sprite + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(sprite);
    }

    // 0x100332fd0
    void shared_ptr<oldscape::dash3d::QuickGround>::swap(shared_ptr<oldscape::dash3d::QuickGround>& quickGround) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(quickGround);
        std::swap<ref_counter_base*>(*this, quickGround);
        std::swap<oldscape::dash3d::QuickGround*>(*((this + 8)), *((quickGround + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(quickGround);
    }

    // 0x100333290
    void shared_ptr<oldscape::dash3d::Ground>::swap(shared_ptr<oldscape::dash3d::Ground>& ground) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(ground);
        std::swap<ref_counter_base*>(*this, ground);
        std::swap<oldscape::dash3d::Ground*>(*((this + 8)), *((ground + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(ground);
    }

    // 0x100333480
    void shared_ptr<oldscape::dash3d::GroundDecor>::swap(shared_ptr<oldscape::dash3d::GroundDecor>& groundDecor) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(groundDecor);
        std::swap<ref_counter_base*>(*this, groundDecor);
        std::swap<oldscape::dash3d::GroundDecor*>(*((this + 8)), *((groundDecor + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(groundDecor);
    }

    // 0x1003336e0
    void shared_ptr<oldscape::dash3d::GroundObject>::swap(shared_ptr<oldscape::dash3d::GroundObject>& groundObject) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(groundObject);
        std::swap<ref_counter_base*>(*this, groundObject);
        std::swap<oldscape::dash3d::GroundObject*>(*((this + 8)), *((groundObject + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(groundObject);
    }

    // 0x100333900
    void shared_ptr<oldscape::dash3d::Wall>::swap(shared_ptr<oldscape::dash3d::Wall>& wall) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(wall);
        std::swap<ref_counter_base*>(*this, wall);
        std::swap<oldscape::dash3d::Wall*>(*((this + 8)), *((wall + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(wall);
    }

    // 0x100333b30
    void shared_ptr<oldscape::dash3d::Decor>::swap(shared_ptr<oldscape::dash3d::Decor>& decor) {
        tracked_enable_shared_from_this_add_ref((integral_constant<bool, false>*)this);
        tracked_enable_shared_from_this_add_ref((integral_constant<bool, false>*)decor);
        std::swap<ref_counter_base*>(*this, decor);
        std::swap<oldscape::dash3d::Decor*>(*((this + 8)), *((decor + 8)));
        tracked_enable_shared_from_this_add_ref((integral_constant<bool, false>*)this);
        tracked_enable_shared_from_this_add_ref((integral_constant<bool, false>*)decor);
    }

    // 0x100334820
    shared_ptr<Linkable<oldscape::dash3d::Square>>* shared_ptr<Linkable<oldscape::dash3d::Square>>::operator=(
        shared_ptr<Linkable<oldscape::dash3d::Square>>&& linkable) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(linkable);
        swap(&local_28, (shared_ptr<Linkable<oldscape::dash3d::Square> _>*)this);
        return this;
    }

    // 0x100334870
    shared_ptr<Linkable<oldscape::dash3d::Square>>& shared_ptr<Linkable<oldscape::dash3d::Square>>::operator=
        <oldscape::dash3d::Square>(const shared_ptr<oldscape::dash3d::Square>& square) {

        shared_ptr<oldscape::dash3d::Decor> local_28(square);
        swap(&local_28, (shared_ptr<Linkable<oldscape::dash3d::Square> _>*)this);
        return (shared_ptr<Linkable<oldscape::dash3d::Square> _>*)this;
    }

    // 0x100336170
    shared_ptr<signed char[]>* shared_ptr<signed char[]>::operator=(shared_ptr<signed char[]>&& arg1) {
        shared_ptr<Array<unsigned char>[]> local_28[16];

        new (local_28) shared_ptr(arg1);
        swap((shared_ptr<signed char[]>*)local_28, (shared_ptr<signed_char_[]>*)this);
        ((shared_ptr<unsigned int[]>*)local_28)->~shared_ptr();
        return this;
    }

    // 0x100336e50
    void shared_ptr<unsigned int[]>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap((shared_ptr<unsigned int[]>*)&local_28, (shared_ptr<unsigned_int_[]>*)this);
        ~shared_ptr((shared_ptr<unsigned int[]>*)&local_28);
    }

    // 0x100336e90
    void shared_ptr<Array<unsigned char>[]>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap((shared_ptr<Array<unsigned char>[]>*)&local_28, (shared_ptr<Array<unsigned char> _[]>*)this);
        ((shared_ptr<unsigned int[]>*)&local_28)->~shared_ptr();
    }

    // 0x100337700
    void shared_ptr<oldscape::graphics::animation::OldscapeAnimKey>::swap(
        shared_ptr<oldscape::graphics::animation::OldscapeAnimKey>& oldscapeAnimKey) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeAnimKey);
        std::swap<ref_counter_base*>(*this, oldscapeAnimKey);
        std::swap<oldscape::graphics::animation::OldscapeAnimKey*>(*((this + 8)), *((oldscapeAnimKey + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeAnimKey);
    }

    // 0x100337900
    shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>::shared_ptr<
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet, void>(
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet* oldscapeAnimKeyFrameSet) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>* this_00 =
            (ref_counter<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>*)operator new(24);
        new (this_00) ref_counter<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>(oldscapeAnimKeyFrameSet);
        *(ref_counter<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>**)this = this_00;
        *(OldscapeAnimKeyFrameSet**)(this + 8) = oldscapeAnimKeyFrameSet;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x100339550
    shared_ptr<oldscape::dash3d::AnimBase>::shared_ptr<oldscape::dash3d::AnimBase, void>(
        oldscape::dash3d::AnimBase* animBase) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        ref_counter<oldscape::dash3d::AnimBase>* this_00 = (ref_counter<oldscape::dash3d::AnimBase>*)operator new(24);
        new (this_00) ref_counter<oldscape::dash3d::AnimBase>(animBase);
        *(ref_counter<oldscape::dash3d::AnimBase>**)this = this_00;
        *(AnimBase**)(this + 8) = animBase;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x10033c510
    void shared_ptr<oldscape::graphics::animation::OldscapeAnimCurve>::swap(
        shared_ptr<oldscape::graphics::animation::OldscapeAnimCurve>& oldscapeAnimCurve) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeAnimCurve);
        std::swap<ref_counter_base*>(*this, oldscapeAnimCurve);
        std::swap<oldscape::graphics::animation::OldscapeAnimCurve*>(*((this + 8)), *((oldscapeAnimCurve + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeAnimCurve);
    }

    // 0x10033c590
    void shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::swap(
        shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>&
            oldscapeAnimCurveLoadJob) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeAnimCurveLoadJob);
        std::swap<ref_counter_base*>(*this, oldscapeAnimCurveLoadJob);
        std::swap<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob*>(
            *((this + 8)), *((oldscapeAnimCurveLoadJob + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(oldscapeAnimCurveLoadJob);
    }

    // 0x10033cfb0
    shared_ptr<oldscape::graphics::animation::OldscapeAnimCurve>*
    shared_ptr<oldscape::graphics::animation::OldscapeAnimCurve>::operator=(
        shared_ptr<oldscape::graphics::animation::OldscapeAnimCurve>&& oldscapeAnimCurve) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(oldscapeAnimCurve);
        swap(&local_28, this);
        return this;
    }

    // 0x100347d50
    uint64_t shared_ptr<oldscape::ClientLocAnim>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100348170
    void shared_ptr<oldscape::configdecoder::SeqType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100349aa0
    shared_ptr<oldscape::dash3d::Skeleton>*
    shared_ptr<oldscape::dash3d::Skeleton>::operator=(shared_ptr<oldscape::dash3d::Skeleton>&& skeleton) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(skeleton);
        swap(&local_28, this);
        return this;
    }

    // 0x100349fb0
    uint64_t shared_ptr<oldscape::dash3d::AnimBase>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10034aa40
    shared_ptr<oldscape::dash3d::AnimBase>*
    shared_ptr<oldscape::dash3d::AnimBase>::operator=(shared_ptr<oldscape::dash3d::AnimBase>&& animBase) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(animBase);
        swap(&local_28, this);
        return this;
    }

    // 0x10034cb10
    uint64_t shared_ptr<Array<signed char>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10034cb50
    uint64_t shared_ptr<Array<short>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10034d000
    uint64_t shared_ptr<oldscape::dash3d::ModelLitImpl>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10034d0e0
    shared_ptr<Array<signed char>>* shared_ptr<Array<signed char>>::operator=(shared_ptr<Array<signed char>>&& arg1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        swap(&local_28, (shared_ptr<Array<signed char> _>*)this);
        return this;
    }

    // 0x10034d120
    shared_ptr<Array<short>>* shared_ptr<Array<short>>::operator=(const shared_ptr<Array<short>>& arg1) {

        shared_ptr<oldscape::dash3d::Decor> local_28(arg1);
        swap(&local_28, (shared_ptr<Array<short> _>*)this);
        return this;
    }

    // 0x10034d170
    shared_ptr<Array<Array<int>>>* shared_ptr<Array<Array<int>>>::operator=(const shared_ptr<Array<Array<int>>>& arg1) {

        shared_ptr<oldscape::dash3d::Decor> local_28(arg1);
        swap(&local_28, (shared_ptr<Array<Array<int>> _>*)this);
        return this;
    }

    // 0x10034d1c0
    shared_ptr<Array<int>>* shared_ptr<Array<int>>::operator=(const shared_ptr<Array<int>>& arg1) {

        shared_ptr<oldscape::dash3d::Decor> local_28(arg1);
        swap(&local_28, (shared_ptr<Array<int> _>*)this);
        return this;
    }

    // 0x10034da40
    uint64_t shared_ptr<oldscape::dash3d::ModelLitImpl>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10034da80
    shared_ptr<Array<signed char>>*
    shared_ptr<Array<signed char>>::operator=(const shared_ptr<Array<signed char>>& arg1) {

        shared_ptr<oldscape::dash3d::Decor> local_28(arg1);
        swap(&local_28, (shared_ptr<Array<signed char> _>*)this);
        return this;
    }

    // 0x10034edb0
    uint64_t shared_ptr<oldscape::dash3d::AnimBase>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10034ee10
    uint64_t shared_ptr<oldscape::dash3d::Skeleton>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10034ee50
    uint64_t shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10034fa30
    shared_ptr<Array<short>>* shared_ptr<Array<short>>::operator=(shared_ptr<Array<short>>&& arg1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        swap(&local_28, (shared_ptr<Array<short> _>*)this);
        return this;
    }

    // 0x100350020
    shared_ptr<Array<Array<int>>>* shared_ptr<Array<Array<int>>>::operator=(shared_ptr<Array<Array<int>>>&& arg1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        swap(&local_28, (shared_ptr<Array<Array<int>> _>*)this);
        return this;
    }

    // 0x100350070
    shared_ptr<Array<int>>* shared_ptr<Array<int>>::operator=(shared_ptr<Array<int>>&& arg1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        swap(&local_28, (shared_ptr<Array<int> _>*)this);
        return this;
    }

    // 0x100350350
    uint64_t shared_ptr<oldscape::graphics::animation::OldscapeJoint>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003507f0
    uint64_t shared_ptr<oldscape::dash3d::ModelUnlitImpl>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100350ca0
    uint64_t shared_ptr<oldscape::dash3d::ModelUnlitImpl>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100350e30
    uint64_t shared_ptr<oldscape::dash3d::ModelRSevenUnlit>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100351160
    shared_ptr<oldscape::dash3d::ModelRSevenUnlit>* shared_ptr<oldscape::dash3d::ModelRSevenUnlit>::operator=(
        shared_ptr<oldscape::dash3d::ModelRSevenUnlit>&& modelRSevenUnlit) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(modelRSevenUnlit);
        swap(&local_28, this);
        return this;
    }

    // 0x100351210
    shared_ptr<oldscape::dash3d::ModelRSevenUnlit>* shared_ptr<oldscape::dash3d::ModelRSevenUnlit>::operator=(
        const shared_ptr<oldscape::dash3d::ModelRSevenUnlit>& modelRSevenUnlit) {

        shared_ptr<oldscape::dash3d::Decor> local_28(modelRSevenUnlit);
        swap(&local_28, this);
        return this;
    }

    // 0x100351860
    uint64_t shared_ptr<oldscape::dash3d::ModelRSevenLit>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003586e0
    uint64_t shared_ptr<Array<int>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003587b0
    shared_ptr<oldscape::dash3d::LightSource>*
    shared_ptr<oldscape::dash3d::LightSource>::operator=(shared_ptr<oldscape::dash3d::LightSource>&& lightSource) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(lightSource);
        swap(&local_28, this);
        return this;
    }

    // 0x1003587f0
    uint64_t shared_ptr<oldscape::dash3d::LightSource>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10035ade0
    shared_ptr<Array<oldscape::dash3d::PointNormal>>* shared_ptr<Array<oldscape::dash3d::PointNormal>>::operator=(
        const shared_ptr<Array<oldscape::dash3d::PointNormal>>& pointNormals) {

        shared_ptr<oldscape::dash3d::Decor> local_28(pointNormals);
        swap(&local_28, (shared_ptr<Array<oldscape::dash3d::PointNormal> _>*)this);
        return this;
    }

    // 0x10035ae20
    shared_ptr<Array<oldscape::dash3d::FaceNormal>>* shared_ptr<Array<oldscape::dash3d::FaceNormal>>::operator=(
        const shared_ptr<Array<oldscape::dash3d::FaceNormal>>& faceNormals) {

        shared_ptr<oldscape::dash3d::Decor> local_28(faceNormals);
        swap(&local_28, (shared_ptr<Array<oldscape::dash3d::FaceNormal> _>*)this);
        return this;
    }

    // 0x10035dd40
    shared_ptr<Array<oldscape::dash3d::PointNormal>>* shared_ptr<Array<oldscape::dash3d::PointNormal>>::operator=(
        shared_ptr<Array<oldscape::dash3d::PointNormal>>&& pointNormals) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(pointNormals);
        swap(&local_28, (shared_ptr<Array<oldscape::dash3d::PointNormal> _>*)this);
        return this;
    }

    // 0x10035dd80
    uint64_t shared_ptr<Array<oldscape::dash3d::PointNormal>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10035dee0
    shared_ptr<Array<oldscape::dash3d::FaceNormal>>* shared_ptr<Array<oldscape::dash3d::FaceNormal>>::operator=(
        shared_ptr<Array<oldscape::dash3d::FaceNormal>>&& faceNormals) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(faceNormals);
        swap(&local_28, (shared_ptr<Array<oldscape::dash3d::FaceNormal> _>*)this);
        return this;
    }

    // 0x10035df20
    uint64_t shared_ptr<Array<oldscape::dash3d::FaceNormal>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100366100
    uint64_t shared_ptr<oldscape::dash3d::TextureProvider>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100369530
    uint64_t shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003695b0
    uint64_t shared_ptr<oldscape::dash3d::Operation>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100369b30
    uint64_t shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100369c20
    shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>&
        shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>::operator=
            <oldscape::dash3d::OperationBuffer::OperationImpl>(
                const shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl>& operationImpl) {

        shared_ptr<oldscape::dash3d::Decor> local_28(operationImpl);
        swap(&local_28, (shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>*)this);
        return (shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>*)this;
    }

    // 0x100369c60
    uint64_t shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100369ce0
    uint64_t shared_ptr<oldscape::dash3d::Operation>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10036a760
    shared_ptr<oldscape::dash3d::Operation>*
    shared_ptr<oldscape::dash3d::Operation>::operator=(const shared_ptr<oldscape::dash3d::Operation>& operation) {

        shared_ptr<oldscape::dash3d::Decor> local_28(operation);
        swap(&local_28, this);
        return this;
    }

    // 0x10036a8e0
    shared_ptr<graphics::Model>* shared_ptr<graphics::Model>::operator=(shared_ptr<graphics::Model>&& model) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(model);
        swap(&local_28, this);
        return this;
    }

    // 0x10036b5a0
    uint64_t shared_ptr<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10036b7a0
    shared_ptr<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>*
    shared_ptr<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>::operator=(
        const shared_ptr<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>& labelShiftRanges) {

        shared_ptr<oldscape::dash3d::Decor> local_28(labelShiftRanges);
        swap(&local_28, (shared_ptr<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange> _>*)this);
        return this;
    }

    // 0x10036bba0
    uint64_t shared_ptr<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100370a10
    shared_ptr<oldscape::dash3d::TextureProvider>* shared_ptr<oldscape::dash3d::TextureProvider>::operator=(
        const shared_ptr<oldscape::dash3d::TextureProvider>& textureProvider) {

        shared_ptr<oldscape::dash3d::Decor> local_28(textureProvider);
        swap(&local_28, this);
        return this;
    }

    // 0x100372c70
    uint64_t shared_ptr<graphics::GeometryBatch>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003768c0
    void shared_ptr<oldscape::dash3d::Skeleton>::swap(shared_ptr<oldscape::dash3d::Skeleton>& skeleton) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(skeleton);
        std::swap<ref_counter_base*>(*this, skeleton);
        std::swap<oldscape::dash3d::Skeleton*>(*((this + 8)), *((skeleton + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(skeleton);
    }

    // 0x1003775b0
    void shared_ptr<Array<signed char>>::swap(shared_ptr<Array<signed char>>& arg1) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<Array<signed char>*>(*((this + 8)), *((arg1 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
    }

    // 0x100377630
    void shared_ptr<Array<short>>::swap(shared_ptr<Array<short>>& arg1) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<Array<short>*>(*((this + 8)), *((arg1 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
    }

    // 0x1003776b0
    void shared_ptr<Array<Array<int>>>::swap(shared_ptr<Array<Array<int>>>& arg1) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<Array<Array<int>>*>(*((this + 8)), *((arg1 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
    }

    // 0x100377730
    void shared_ptr<Array<int>>::swap(shared_ptr<Array<int>>& arg1) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<Array<int>*>(*((this + 8)), *((arg1 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
    }

    // 0x10037a4b0
    void shared_ptr<oldscape::dash3d::ModelRSevenUnlit>::swap(
        shared_ptr<oldscape::dash3d::ModelRSevenUnlit>& modelRSevenUnlit) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelRSevenUnlit);
        std::swap<ref_counter_base*>(*this, modelRSevenUnlit);
        std::swap<oldscape::dash3d::ModelRSevenUnlit*>(*((this + 8)), *((modelRSevenUnlit + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelRSevenUnlit);
    }

    // 0x10037cfd0
    void shared_ptr<oldscape::dash3d::LightSource>::swap(shared_ptr<oldscape::dash3d::LightSource>& lightSource) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(lightSource);
        std::swap<ref_counter_base*>(*this, lightSource);
        std::swap<oldscape::dash3d::LightSource*>(*((this + 8)), *((lightSource + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(lightSource);
    }

    // 0x10037d050
    void shared_ptr<Array<oldscape::dash3d::PointNormal>>::swap(
        shared_ptr<Array<oldscape::dash3d::PointNormal>>& pointNormals) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pointNormals);
        std::swap<ref_counter_base*>(*this, pointNormals);
        std::swap<Array<oldscape::dash3d::PointNormal>*>(*((this + 8)), *((pointNormals + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pointNormals);
    }

    // 0x10037d0d0
    void shared_ptr<Array<oldscape::dash3d::FaceNormal>>::swap(
        shared_ptr<Array<oldscape::dash3d::FaceNormal>>& faceNormals) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(faceNormals);
        std::swap<ref_counter_base*>(*this, faceNormals);
        std::swap<Array<oldscape::dash3d::FaceNormal>*>(*((this + 8)), *((faceNormals + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(faceNormals);
    }

    // 0x100380690
    shared_ptr<oldscape::dash3d::ModelLitImpl>*
    shared_ptr<oldscape::dash3d::ModelLitImpl>::operator=(shared_ptr<oldscape::dash3d::ModelLitImpl>&& modelLitImpl) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(modelLitImpl);
        swap(&local_28, this);
        return this;
    }

    // 0x1003806d0
    void shared_ptr<oldscape::dash3d::ModelLitImpl>::swap(shared_ptr<oldscape::dash3d::ModelLitImpl>& modelLitImpl) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelLitImpl);
        std::swap<ref_counter_base*>(*this, modelLitImpl);
        std::swap<oldscape::dash3d::ModelLitImpl*>(*((this + 8)), *((modelLitImpl + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelLitImpl);
    }

    // 0x100380dc0
    shared_ptr<unsigned int[]>* shared_ptr<unsigned int[]>::operator=(shared_ptr<unsigned int[]>&& arg1) {
        shared_ptr<Array<unsigned char>[]> local_28[16];

        new (local_28) shared_ptr((shared_ptr<signed_char_[]>*)arg1);
        swap((shared_ptr<unsigned int[]>*)local_28, (shared_ptr<unsigned_int_[]>*)this);
        ~shared_ptr((shared_ptr<unsigned int[]>*)local_28);
        return this;
    }

    // 0x1003817e0
    void shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>::swap(
        shared_ptr<oldscape::dash3d::OperationBuffer::OperationImpl const>& operationImpl) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(operationImpl);
        std::swap<ref_counter_base*>(*this, operationImpl);
        std::swap<oldscape::dash3d::OperationBuffer::OperationImpl const*>(*((this + 8)), *((operationImpl + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(operationImpl);
    }

    // 0x1003820d0
    void shared_ptr<oldscape::dash3d::Operation>::swap(shared_ptr<oldscape::dash3d::Operation>& operation) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(operation);
        std::swap<ref_counter_base*>(*this, operation);
        std::swap<oldscape::dash3d::Operation*>(*((this + 8)), *((operation + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(operation);
    }

    // 0x100382490
    void shared_ptr<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>::swap(
        shared_ptr<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>>& labelShiftRanges) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(labelShiftRanges);
        std::swap<ref_counter_base*>(*this, labelShiftRanges);
        std::swap<eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>*>(*((this + 8)),
                                                                                       *((labelShiftRanges + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(labelShiftRanges);
    }

    // 0x10038e510
    void shared_ptr<oldscape::dash3d::TextureProvider>::swap(
        shared_ptr<oldscape::dash3d::TextureProvider>& textureProvider) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(textureProvider);
        std::swap<ref_counter_base*>(*this, textureProvider);
        std::swap<oldscape::dash3d::TextureProvider*>(*((this + 8)), *((textureProvider + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(textureProvider);
    }

    // 0x1003908a0
    void shared_ptr<oldscape::input::InputForm>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1003a1bc0
    uint64_t shared_ptr<OpenGLView>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003a5d20
    shared_ptr<OpenGLView>* shared_ptr<OpenGLView>::operator=(const shared_ptr<OpenGLView>& openGLView) {

        shared_ptr<oldscape::dash3d::Decor> local_28(openGLView);
        swap(&local_28, this);
        return this;
    }

    // 0x1003a9ad0
    void shared_ptr<OpenGLView>::swap(shared_ptr<OpenGLView>& openGLView) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(openGLView);
        std::swap<ref_counter_base*>(*this, openGLView);
        std::swap<OpenGLView*>(*((this + 8)), *((openGLView + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(openGLView);
    }

    // 0x1003b6ed0
    uint64_t shared_ptr<game::ClientScript>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003b70a0
    void shared_ptr<game::ClientScript>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1003b7e30
    void shared_ptr<ui::Component>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1003ba980
    void shared_ptr<game::ClientScript>::swap(shared_ptr<game::ClientScript>& clientScript) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientScript);
        std::swap<ref_counter_base*>(*this, clientScript);
        std::swap<game::ClientScript*>(*((this + 8)), *((clientScript + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientScript);
    }

    // 0x1003c2180
    uint64_t shared_ptr<game::LocType>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003c2540
    uint64_t shared_ptr<game::MSIType>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003db0d0
    uint64_t shared_ptr<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>::operator*()
        const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003db750
    void shared_ptr<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>::
    operator=(shared_ptr<eastl::fixed_vector<
                  eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>&&
                  mapEnvironmentSettingssss) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(mapEnvironmentSettingssss);
        swap(&local_28,
             (shared_ptr<eastl::fixed_vector<
                  eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, _8ul>, _8ul>, _4ul>
                             _>*)this);
        return this;
    }

    // 0x1003db790
    uint64_t shared_ptr<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>,
        4ul>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003dd4b0
    uint64_t shared_ptr<graphics::SkyBox>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003de620
    void shared_ptr<game::ClientCompositeData>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1003de8b0
    shared_ptr<eastl::vector<graphics::WaterPatchConfig>>*
    shared_ptr<eastl::vector<graphics::WaterPatchConfig>>::operator=(
        shared_ptr<eastl::vector<graphics::WaterPatchConfig>>&& waterPatchConfigs) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(waterPatchConfigs);
        swap(&local_28, (shared_ptr<eastl::vector<graphics::WaterPatchConfig> _>*)this);
        return this;
    }

    // 0x1003de960
    uint64_t shared_ptr<eastl::vector<graphics::WaterPatchConfig>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003df000
    uint64_t shared_ptr<eastl::vector<graphics::WaterPatchConfig>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003e14b0
    void shared_ptr<eastl::fixed_vector<
        eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>::
        swap(shared_ptr<eastl::fixed_vector<
                 eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>>&
                 mapEnvironmentSettingssss) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapEnvironmentSettingssss);
        std::swap<ref_counter_base*>(*this, mapEnvironmentSettingssss);
        std::swap<eastl::fixed_vector<
            eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>*>(
            *((this + 8)), *((mapEnvironmentSettingssss + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapEnvironmentSettingssss);
    }

    // 0x1003e6040
    void shared_ptr<eastl::vector<graphics::WaterPatchConfig>>::swap(
        shared_ptr<eastl::vector<graphics::WaterPatchConfig>>& waterPatchConfigs) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(waterPatchConfigs);
        std::swap<ref_counter_base*>(*this, waterPatchConfigs);
        std::swap<eastl::vector<graphics::WaterPatchConfig>*>(*((this + 8)), *((waterPatchConfigs + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(waterPatchConfigs);
    }

    // 0x1003e7ac0
    uint64_t shared_ptr<PathingEntity>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003f2260
    uint64_t shared_ptr<game::SeqType>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003f2ad0
    shared_ptr<game::RT5AnimationResourceManager>* shared_ptr<game::RT5AnimationResourceManager>::operator=(
        shared_ptr<game::RT5AnimationResourceManager>&& rt5AnimationResourceManager) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(rt5AnimationResourceManager);
        swap(&local_28, this);
        return this;
    }

    // 0x1003f2b90
    void shared_ptr<graphics::AnimationStateSystem>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1003f2be0
    void shared_ptr<game::RT5AnimationResourceManager>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1003f2c20
    void shared_ptr<graphics::AnimationStateMachineProvider>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1003f2c60
    uint64_t shared_ptr<game::RT5AnimationResourceManager>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003f2e30
    uint64_t shared_ptr<graphics::AnimationStateMachineProvider>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003f2e70
    shared_ptr<graphics::AnimationStateSystem>* shared_ptr<graphics::AnimationStateSystem>::operator=(
        shared_ptr<graphics::AnimationStateSystem>&& animationStateSystem) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(animationStateSystem);
        swap(&local_28, this);
        return this;
    }

    // 0x1003f31a0
    uint64_t shared_ptr<game::BASType>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003f6a30
    shared_ptr<game::SeqType>* shared_ptr<game::SeqType>::operator=(const shared_ptr<game::SeqType>& seqType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(seqType);
        swap(&local_28, this);
        return this;
    }

    // 0x1003f8e70
    shared_ptr<graphics::AnimationState>*
    shared_ptr<graphics::AnimationState>::operator=(const shared_ptr<graphics::AnimationState>& animationState) {

        shared_ptr<oldscape::dash3d::Decor> local_28(animationState);
        swap(&local_28, this);
        return this;
    }

    // 0x1003f8eb0
    shared_ptr<graphics::AnimationState>*
    shared_ptr<graphics::AnimationState>::operator=(shared_ptr<graphics::AnimationState>&& animationState) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(animationState);
        swap(&local_28, this);
        return this;
    }

    // 0x1003fa300
    shared_ptr<game::BuildTerrainMain>*
    shared_ptr<game::BuildTerrainMain>::operator=(shared_ptr<game::BuildTerrainMain>&& buildTerrainMain) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildTerrainMain);
        swap(&local_28, this);
        return this;
    }

    // 0x1003fa340
    uint64_t shared_ptr<game::BuildTerrainMain>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003fa390
    void shared_ptr<game::BuildTerrainMain>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1003fa3d0
    uint64_t shared_ptr<game::BuildTerrainResultData>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003fa510
    uint64_t shared_ptr<game::BuildTerrainResultLevelData>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003fa6c0
    shared_ptr<eastl::vector<eastl::vector<int>>>* shared_ptr<eastl::vector<eastl::vector<int>>>::operator=(
        const shared_ptr<eastl::vector<eastl::vector<int>>>& arg1) {

        shared_ptr<oldscape::dash3d::Decor> local_28(arg1);
        swap(&local_28, (shared_ptr<eastl::vector<eastl::vector<int>> _>*)this);
        return this;
    }

    // 0x1003fa700
    shared_ptr<eastl::vector<eastl::vector<unsigned char>>>*
    shared_ptr<eastl::vector<eastl::vector<unsigned char>>>::operator=(
        const shared_ptr<eastl::vector<eastl::vector<unsigned char>>>& arg1) {

        shared_ptr<oldscape::dash3d::Decor> local_28(arg1);
        swap((shared_ptr<eastl::vector<eastl::vector<unsigned char>>>*)&local_28,
             (shared_ptr<eastl::vector<eastl::vector<unsigned char>> _>*)this);
        return this;
    }

    // 0x1003fa780
    void shared_ptr<eastl::vector<eastl::vector<unsigned char>>>::swap(
        shared_ptr<eastl::vector<eastl::vector<unsigned char>>>& arg1) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<eastl::vector<eastl::vector<unsigned char>>*>(*((this + 8)), *((arg1 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
    }

    // 0x1003fa830
    void shared_ptr<eastl::vector<eastl::vector<unsigned char>>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap((shared_ptr<eastl::vector<eastl::vector<unsigned char>>>*)&local_28,
             (shared_ptr<eastl::vector<eastl::vector<unsigned char>> _>*)this);
    }

    // 0x1003fa870
    void shared_ptr<eastl::vector<eastl::vector<int>>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, (shared_ptr<eastl::vector<eastl::vector<int>> _>*)this);
    }

    // 0x1003fa950
    shared_ptr<eastl::vector<eastl::vector<int>>>*
    shared_ptr<eastl::vector<eastl::vector<int>>>::operator=(shared_ptr<eastl::vector<eastl::vector<int>>>&& arg1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        swap(&local_28, (shared_ptr<eastl::vector<eastl::vector<int>> _>*)this);
        return this;
    }

    // 0x1003fa990
    uint64_t shared_ptr<eastl::vector<eastl::vector<int>>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003fab40
    uint64_t shared_ptr<game::BuildTerrainResultWaterData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1003fab90
    uint64_t shared_ptr<game::WaterType>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100400210
    shared_ptr<game::World>* shared_ptr<game::World>::operator=(const shared_ptr<game::World>& world) {

        shared_ptr<oldscape::dash3d::Decor> local_28(world);
        swap(&local_28, this);
        return this;
    }

    // 0x100404ae0
    void shared_ptr<game::SeqType>::swap(shared_ptr<game::SeqType>& seqType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(seqType);
        std::swap<ref_counter_base*>(*this, seqType);
        std::swap<game::SeqType*>(*((this + 8)), *((seqType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(seqType);
    }

    // 0x100407b80
    void shared_ptr<game::RT5AnimationResourceManager>::swap(
        shared_ptr<game::RT5AnimationResourceManager>& rt5AnimationResourceManager) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(rt5AnimationResourceManager);
        std::swap<ref_counter_base*>(*this, rt5AnimationResourceManager);
        std::swap<game::RT5AnimationResourceManager*>(*((this + 8)), *((rt5AnimationResourceManager + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(rt5AnimationResourceManager);
    }

    // 0x100407c20
    void
    shared_ptr<graphics::AnimationStateSystem>::swap(shared_ptr<graphics::AnimationStateSystem>& animationStateSystem) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationStateSystem);
        std::swap<ref_counter_base*>(*this, animationStateSystem);
        std::swap<graphics::AnimationStateSystem*>(*((this + 8)), *((animationStateSystem + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationStateSystem);
    }

    // 0x100408970
    void shared_ptr<graphics::AnimationState>::swap(shared_ptr<graphics::AnimationState>& animationState) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationState);
        std::swap<ref_counter_base*>(*this, animationState);
        std::swap<graphics::AnimationState*>(*((this + 8)), *((animationState + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationState);
    }

    // 0x100409850
    void shared_ptr<game::BuildTerrainMain>::swap(shared_ptr<game::BuildTerrainMain>& buildTerrainMain) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildTerrainMain);
        std::swap<ref_counter_base*>(*this, buildTerrainMain);
        std::swap<game::BuildTerrainMain*>(*((this + 8)), *((buildTerrainMain + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildTerrainMain);
    }

    // 0x100409ff0
    void shared_ptr<eastl::vector<eastl::vector<int>>>::swap(shared_ptr<eastl::vector<eastl::vector<int>>>& arg1) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<eastl::vector<eastl::vector<int>>*>(*((this + 8)), *((arg1 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
    }

    // 0x10040c7d0
    uint64_t shared_ptr<game::MapSquareLocation>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10040c810
    uint64_t shared_ptr<game::MapSquareLocation>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10040cd40
    uint64_t shared_ptr<game::CombinedLocation>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10040ce00
    uint64_t shared_ptr<game::Location>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10040e6f0
    shared_ptr<game::BuildCombinedLocationMain>* shared_ptr<game::BuildCombinedLocationMain>::operator=(
        shared_ptr<game::BuildCombinedLocationMain>&& buildCombinedLocationMain) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildCombinedLocationMain);
        swap(&local_28, this);
        return this;
    }

    // 0x10040e740
    uint64_t shared_ptr<game::BuildCombinedLocationMain>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10040e780
    void shared_ptr<game::BuildCombinedLocationMain>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100410180
    uint64_t shared_ptr<game::Location>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100413fc0
    shared_ptr<game::ClientCompositeData>*
    shared_ptr<game::ClientCompositeData>::operator=(const shared_ptr<game::ClientCompositeData>& clientCompositeData) {

        shared_ptr<oldscape::dash3d::Decor> local_28(clientCompositeData);
        swap(&local_28, this);
        return this;
    }

    // 0x100417f70
    uint64_t shared_ptr<game::NPCType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100418010
    void shared_ptr<graphics::SpriteAtlasReference>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100418060
    uint64_t shared_ptr<Array<HardCodedSprites::SpriteReference>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004180a0
    uint64_t shared_ptr<Array<HardCodedSprites::SpriteReference>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004185e0
    void shared_ptr<EntityIcon>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1004186f0
    shared_ptr<EntityIcon>* shared_ptr<EntityIcon>::operator=(shared_ptr<EntityIcon>&& entityIcon) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(entityIcon);
        swap(&local_28, this);
        return this;
    }

    // 0x1004189a0
    void shared_ptr<game::NPCType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100419290
    shared_ptr<game::NPCType>* shared_ptr<game::NPCType>::operator=(const shared_ptr<game::NPCType>& npcType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(npcType);
        swap(&local_28, this);
        return this;
    }

    // 0x100419300
    shared_ptr<game::NPCType>* shared_ptr<game::NPCType>::operator=(shared_ptr<game::NPCType>&& npcType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(npcType);
        swap(&local_28, this);
        return this;
    }

    // 0x10041afc0
    uint64_t shared_ptr<graphics::AnimationStateSystem>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10041b400
    uint64_t shared_ptr<NPCEntity>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10041b540
    uint64_t shared_ptr<NPCEntity>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10041ba20
    shared_ptr<game::BuildCombinedLocationMain>* shared_ptr<game::BuildCombinedLocationMain>::operator=(
        const shared_ptr<game::BuildCombinedLocationMain>& buildCombinedLocationMain) {

        shared_ptr<oldscape::dash3d::Decor> local_28(buildCombinedLocationMain);
        swap(&local_28, this);
        return this;
    }

    // 0x10041be70
    shared_ptr<game::MapSquareLocation>*
    shared_ptr<game::MapSquareLocation>::operator=(const shared_ptr<game::MapSquareLocation>& mapSquareLocation) {

        shared_ptr<oldscape::dash3d::Decor> local_28(mapSquareLocation);
        swap(&local_28, this);
        return this;
    }

    // 0x10041bef0
    void shared_ptr<game::MapSquareLocation>::swap(shared_ptr<game::MapSquareLocation>& mapSquareLocation) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapSquareLocation);
        std::swap<ref_counter_base*>(*this, mapSquareLocation);
        std::swap<game::MapSquareLocation*>(*((this + 8)), *((mapSquareLocation + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapSquareLocation);
    }

    // 0x10041c720
    void shared_ptr<game::BuildCombinedLocationMain>::swap(
        shared_ptr<game::BuildCombinedLocationMain>& buildCombinedLocationMain) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildCombinedLocationMain);
        std::swap<ref_counter_base*>(*this, buildCombinedLocationMain);
        std::swap<game::BuildCombinedLocationMain*>(*((this + 8)), *((buildCombinedLocationMain + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildCombinedLocationMain);
    }

    // 0x10041ce50
    uint64_t shared_ptr<eastl::vector<eastl::vector<unsigned char>>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10041d890
    shared_ptr<game::BuildModelMain>*
    shared_ptr<game::BuildModelMain>::operator=(shared_ptr<game::BuildModelMain>&& buildModelMain) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildModelMain);
        swap(&local_28, this);
        return this;
    }

    // 0x10041db40
    shared_ptr<game::BuildModelMain>*
    shared_ptr<game::BuildModelMain>::operator=(const shared_ptr<game::BuildModelMain>& buildModelMain) {

        shared_ptr<oldscape::dash3d::Decor> local_28(buildModelMain);
        swap(&local_28, this);
        return this;
    }

    // 0x10041e9c0
    shared_ptr<game::CombinedLocation>*
    shared_ptr<game::CombinedLocation>::operator=(const shared_ptr<game::CombinedLocation>& combinedLocation) {

        shared_ptr<oldscape::dash3d::Decor> local_28(combinedLocation);
        swap(&local_28, this);
        return this;
    }

    // 0x10041ea00
    void shared_ptr<game::CombinedLocation>::swap(shared_ptr<game::CombinedLocation>& combinedLocation) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(combinedLocation);
        std::swap<ref_counter_base*>(*this, combinedLocation);
        std::swap<game::CombinedLocation*>(*((this + 8)), *((combinedLocation + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(combinedLocation);
    }

    // 0x10041fce0
    shared_ptr<game::Location>* shared_ptr<game::Location>::operator=(shared_ptr<game::Location>&& location) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(location);
        swap(&local_28, this);
        return this;
    }

    // 0x10041fd20
    void shared_ptr<game::Location>::swap(shared_ptr<game::Location>& location) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(location);
        std::swap<ref_counter_base*>(*this, location);
        std::swap<game::Location*>(*((this + 8)), *((location + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(location);
    }

    // 0x100425820
    void shared_ptr<EntityIcon>::swap(shared_ptr<EntityIcon>& entityIcon) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(entityIcon);
        std::swap<ref_counter_base*>(*this, entityIcon);
        std::swap<EntityIcon*>(*((this + 8)), *((entityIcon + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(entityIcon);
    }

    // 0x100425980
    void shared_ptr<game::NPCType>::swap(shared_ptr<game::NPCType>& npcType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(npcType);
        std::swap<ref_counter_base*>(*this, npcType);
        std::swap<game::NPCType*>(*((this + 8)), *((npcType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(npcType);
    }

    // 0x100428a00
    uint64_t shared_ptr<game::HitmarkType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100428fc0
    uint64_t shared_ptr<game::HeadbarType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10042c0c0
    void shared_ptr<game::BuildSingleLocationMain>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10042c290
    uint64_t shared_ptr<game::LocType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10042d380
    shared_ptr<game::LocType>* shared_ptr<game::LocType>::operator=(const shared_ptr<game::LocType>& locType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(locType);
        swap(&local_28, this);
        return this;
    }

    // 0x10042d450
    uint64_t shared_ptr<game::World>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10042e1a0
    uint64_t shared_ptr<game::ChangeLocationRequest>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10042e340
    uint64_t shared_ptr<game::ChangeLocationRequest>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10042e390
    shared_ptr<game::ChangeLocationRequest>* shared_ptr<game::ChangeLocationRequest>::operator=(
        shared_ptr<game::ChangeLocationRequest>&& changeLocationRequest) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(changeLocationRequest);
        swap(&local_28, this);
        return this;
    }

    // 0x10042e3d0
    void shared_ptr<game::ChangeLocationRequest>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10042e670
    void shared_ptr<game::LocType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10042ee50
    uint64_t shared_ptr<game::MapSquare>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10042f3a0
    uint64_t shared_ptr<graphics::VFXAttachmentInfo>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10042f470
    uint64_t shared_ptr<graphics::ModularParticleSystem>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100430650
    uint64_t shared_ptr<game::World>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100430c20
    shared_ptr<game::BuildSingleLocationMain>* shared_ptr<game::BuildSingleLocationMain>::operator=(
        shared_ptr<game::BuildSingleLocationMain>&& buildSingleLocationMain) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildSingleLocationMain);
        swap(&local_28, this);
        return this;
    }

    // 0x100430c80
    uint64_t shared_ptr<game::BuildSingleLocationMain>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100430f90
    shared_ptr<graphics::VFXAttachmentInfo>*
    shared_ptr<graphics::VFXAttachmentInfo>::operator=(shared_ptr<graphics::VFXAttachmentInfo>&& vfxAttachmentInfo) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(vfxAttachmentInfo);
        swap(&local_28, this);
        return this;
    }

    // 0x100430fd0
    shared_ptr<graphics::ModularParticleSystem>* shared_ptr<graphics::ModularParticleSystem>::operator=(
        shared_ptr<graphics::ModularParticleSystem>&& modularParticleSystem) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(modularParticleSystem);
        swap(&local_28, this);
        return this;
    }

    // 0x100431d50
    uint64_t shared_ptr<game::LocType::LocationSoundData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100432450
    uint64_t shared_ptr<game::AnimationWrapper>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100433460
    shared_ptr<game::HeadbarType>*
    shared_ptr<game::HeadbarType>::operator=(shared_ptr<game::HeadbarType>&& headbarType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(headbarType);
        swap(&local_28, this);
        return this;
    }

    // 0x1004334b0
    void shared_ptr<game::HeadbarType>::swap(shared_ptr<game::HeadbarType>& headbarType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(headbarType);
        std::swap<ref_counter_base*>(*this, headbarType);
        std::swap<game::HeadbarType*>(*((this + 8)), *((headbarType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(headbarType);
    }

    // 0x100433ae0
    shared_ptr<game::HeadbarType>*
    shared_ptr<game::HeadbarType>::operator=(const shared_ptr<game::HeadbarType>& headbarType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(headbarType);
        swap(&local_28, this);
        return this;
    }

    // 0x100434260
    void shared_ptr<game::BuildModelMain>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1004342b0
    void shared_ptr<game::BuildModelMain>::swap(shared_ptr<game::BuildModelMain>& buildModelMain) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildModelMain);
        std::swap<ref_counter_base*>(*this, buildModelMain);
        std::swap<game::BuildModelMain*>(*((this + 8)), *((buildModelMain + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildModelMain);
    }

    // 0x100436c40
    uint64_t shared_ptr<game::BuildModelMain>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100437ed0
    void shared_ptr<game::BuildSingleLocationMain>::swap(
        shared_ptr<game::BuildSingleLocationMain>& buildSingleLocationMain) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildSingleLocationMain);
        std::swap<ref_counter_base*>(*this, buildSingleLocationMain);
        std::swap<game::BuildSingleLocationMain*>(*((this + 8)), *((buildSingleLocationMain + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildSingleLocationMain);
    }

    // 0x100437fc0
    void shared_ptr<game::LocType>::swap(shared_ptr<game::LocType>& locType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(locType);
        std::swap<ref_counter_base*>(*this, locType);
        std::swap<game::LocType*>(*((this + 8)), *((locType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(locType);
    }

    // 0x1004397a0
    void shared_ptr<game::ChangeLocationRequest>::swap(shared_ptr<game::ChangeLocationRequest>& changeLocationRequest) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(changeLocationRequest);
        std::swap<ref_counter_base*>(*this, changeLocationRequest);
        std::swap<game::ChangeLocationRequest*>(*((this + 8)), *((changeLocationRequest + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(changeLocationRequest);
    }

    // 0x100439f20
    void shared_ptr<graphics::VFXAttachmentInfo>::swap(shared_ptr<graphics::VFXAttachmentInfo>& vfxAttachmentInfo) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(vfxAttachmentInfo);
        std::swap<ref_counter_base*>(*this, vfxAttachmentInfo);
        std::swap<graphics::VFXAttachmentInfo*>(*((this + 8)), *((vfxAttachmentInfo + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(vfxAttachmentInfo);
    }

    // 0x100439fa0
    void shared_ptr<graphics::ModularParticleSystem>::swap(
        shared_ptr<graphics::ModularParticleSystem>& modularParticleSystem) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modularParticleSystem);
        std::swap<ref_counter_base*>(*this, modularParticleSystem);
        std::swap<graphics::ModularParticleSystem*>(*((this + 8)), *((modularParticleSystem + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modularParticleSystem);
    }

    // 0x10043d470
    void shared_ptr<game::MapEnvironmentSettings>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10043d570
    shared_ptr<graphics::SkyBox>* shared_ptr<graphics::SkyBox>::operator=(shared_ptr<graphics::SkyBox>&& skyBox) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(skyBox);
        swap(&local_28, this);
        return this;
    }

    // 0x10043d7e0
    void shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, (shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, _4ul> _>*)this);
    }

    // 0x10043d820
    void shared_ptr<game::MapSquare>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10043e280
    void shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>::operator=(
        const shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>& arg1) {

        shared_ptr<oldscape::dash3d::Decor> local_28(arg1);
        swap(&local_28, (shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, _4ul> _>*)this);
        return this;
    }

    // 0x10043e470
    uint64_t shared_ptr<game::ClientCompositeData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10043e4b0
    uint64_t shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100441620
    uint64_t shared_ptr<game::MapEnvironmentSettings>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100441680
    shared_ptr<game::MapEnvironmentSettings>* shared_ptr<game::MapEnvironmentSettings>::operator=(
        const shared_ptr<game::MapEnvironmentSettings>& mapEnvironmentSettings) {

        shared_ptr<oldscape::dash3d::Decor> local_28(mapEnvironmentSettings);
        swap(&local_28, this);
        return this;
    }

    // 0x1004417a0
    uint64_t shared_ptr<game::MapEnvironmentSettings>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004419b0
    shared_ptr<game::MapEnvironmentSettings>* shared_ptr<game::MapEnvironmentSettings>::operator=(
        shared_ptr<game::MapEnvironmentSettings>&& mapEnvironmentSettings) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(mapEnvironmentSettings);
        swap(&local_28, this);
        return this;
    }

    // 0x100441c30
    uint64_t shared_ptr<eastl::vector<eastl::vector<int>>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100442fd0
    shared_ptr<game::MapSquare>* shared_ptr<game::MapSquare>::operator=(const shared_ptr<game::MapSquare>& mapSquare) {

        shared_ptr<oldscape::dash3d::Decor> local_28(mapSquare);
        swap(&local_28, this);
        return this;
    }

    // 0x100443450
    shared_ptr<game::ClientCompositeData>*
    shared_ptr<game::ClientCompositeData>::operator=(shared_ptr<game::ClientCompositeData>&& clientCompositeData) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(clientCompositeData);
        swap(&local_28, this);
        return this;
    }

    // 0x100443600
    shared_ptr<game::MapSquare>* shared_ptr<game::MapSquare>::operator=(shared_ptr<game::MapSquare>&& mapSquare) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(mapSquare);
        swap(&local_28, this);
        return this;
    }

    // 0x100446080
    shared_ptr<game::CombinedLocationSection>* shared_ptr<game::CombinedLocationSection>::operator=(
        const shared_ptr<game::CombinedLocationSection>& combinedLocationSection) {

        shared_ptr<oldscape::dash3d::Decor> local_28(combinedLocationSection);
        swap(&local_28, this);
        return this;
    }

    // 0x100446750
    uint64_t shared_ptr<game::CombinedLocationSection>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10044c620
    void shared_ptr<game::World>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10044c670
    void shared_ptr<game::World>::swap(shared_ptr<game::World>& world) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(world);
        std::swap<ref_counter_base*>(*this, world);
        std::swap<game::World*>(*((this + 8)), *((world + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(world);
    }

    // 0x10044fd50
    void
    shared_ptr<game::MapEnvironmentSettings>::swap(shared_ptr<game::MapEnvironmentSettings>& mapEnvironmentSettings) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapEnvironmentSettings);
        std::swap<ref_counter_base*>(*this, mapEnvironmentSettings);
        std::swap<game::MapEnvironmentSettings*>(*((this + 8)), *((mapEnvironmentSettings + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapEnvironmentSettings);
    }

    // 0x100450500
    void shared_ptr<graphics::SkyBox>::swap(shared_ptr<graphics::SkyBox>& skyBox) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(skyBox);
        std::swap<ref_counter_base*>(*this, skyBox);
        std::swap<graphics::SkyBox*>(*((this + 8)), *((skyBox + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(skyBox);
    }

    // 0x100450580
    void shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>::swap(
        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>& arg1) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>*>(*((this + 8)), *((arg1 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
    }

    // 0x100450600
    void shared_ptr<game::MapSquare>::swap(shared_ptr<game::MapSquare>& mapSquare) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapSquare);
        std::swap<ref_counter_base*>(*this, mapSquare);
        std::swap<game::MapSquare*>(*((this + 8)), *((mapSquare + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapSquare);
    }

    // 0x100455c00
    void shared_ptr<game::ClientCompositeData>::swap(shared_ptr<game::ClientCompositeData>& clientCompositeData) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientCompositeData);
        std::swap<ref_counter_base*>(*this, clientCompositeData);
        std::swap<game::ClientCompositeData*>(*((this + 8)), *((clientCompositeData + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientCompositeData);
    }

    // 0x10045d720
    void shared_ptr<game::CombinedLocationSection>::swap(
        shared_ptr<game::CombinedLocationSection>& combinedLocationSection) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(combinedLocationSection);
        std::swap<ref_counter_base*>(*this, combinedLocationSection);
        std::swap<game::CombinedLocationSection*>(*((this + 8)), *((combinedLocationSection + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(combinedLocationSection);
    }

    // 0x100461570
    shared_ptr<graphics::EquirectangularRenderer>* shared_ptr<graphics::EquirectangularRenderer>::operator=(
        shared_ptr<graphics::EquirectangularRenderer>&& equirectangularRenderer) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(equirectangularRenderer);
        swap(&local_28, this);
        return this;
    }

    // 0x100462680
    uint64_t shared_ptr<graphics::EquirectangularRenderer>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004688f0
    uint64_t shared_ptr<game::MapSquare>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10046c840
    void shared_ptr<graphics::EquirectangularRenderer>::swap(
        shared_ptr<graphics::EquirectangularRenderer>& equirectangularRenderer) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(equirectangularRenderer);
        std::swap<ref_counter_base*>(*this, equirectangularRenderer);
        std::swap<graphics::EquirectangularRenderer*>(*((this + 8)), *((equirectangularRenderer + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(equirectangularRenderer);
    }

    // 0x10046ca30
    shared_ptr<game::World>* shared_ptr<game::World>::operator=(shared_ptr<game::World>&& world) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(world);
        swap(&local_28, this);
        return this;
    }

    // 0x1004798e0
    uint64_t shared_ptr<render::BufferedRenderTargets>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10047ab90
    uint64_t shared_ptr<eastl::fixed_vector<render::ImageData, 6ul>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10047bb00
    void shared_ptr<game::Entity>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100487a80
    void shared_ptr<game::Entity>::swap(shared_ptr<game::Entity>& entity) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(entity);
        std::swap<ref_counter_base*>(*this, entity);
        std::swap<game::Entity*>(*((this + 8)), *((entity + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(entity);
    }

    // 0x1004882a0
    shared_ptr<game::Entity>* shared_ptr<game::Entity>::operator=(shared_ptr<game::Entity>&& entity) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(entity);
        swap(&local_28, this);
        return this;
    }

    // 0x100496ff0
    uint64_t shared_ptr<game::PlayerModelModelSet>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100497290
    shared_ptr<game::ObjTypeCustomisation>* shared_ptr<game::ObjTypeCustomisation>::operator=(
        const shared_ptr<game::ObjTypeCustomisation>& objTypeCustomisation) {

        shared_ptr<oldscape::dash3d::Decor> local_28(objTypeCustomisation);
        swap(&local_28, this);
        return this;
    }

    // 0x1004973a0
    void shared_ptr<game::ObjTypeCustomisation>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1004978b0
    shared_ptr<game::PlayerModelModelSet>*
    shared_ptr<game::PlayerModelModelSet>::operator=(const shared_ptr<game::PlayerModelModelSet>& playerModelModelSet) {

        shared_ptr<oldscape::dash3d::Decor> local_28(playerModelModelSet);
        swap(&local_28, this);
        return this;
    }

    // 0x100497c50
    uint64_t shared_ptr<game::ObjTypeCustomisation>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100497f30
    void shared_ptr<game::LocTypeCustomisation>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100498290
    shared_ptr<game::StaticPointLight>*
    shared_ptr<game::StaticPointLight>::operator=(const shared_ptr<game::StaticPointLight>& staticPointLight) {

        shared_ptr<oldscape::dash3d::Decor> local_28(staticPointLight);
        swap(&local_28, this);
        return this;
    }

    // 0x100499db0
    void shared_ptr<game::ObjTypeCustomisation>::swap(shared_ptr<game::ObjTypeCustomisation>& objTypeCustomisation) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(objTypeCustomisation);
        std::swap<ref_counter_base*>(*this, objTypeCustomisation);
        std::swap<game::ObjTypeCustomisation*>(*((this + 8)), *((objTypeCustomisation + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(objTypeCustomisation);
    }

    // 0x10049c570
    shared_ptr<game::ObjTypeCustomisation>*
    shared_ptr<game::ObjTypeCustomisation>::operator=(shared_ptr<game::ObjTypeCustomisation>&& objTypeCustomisation) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(objTypeCustomisation);
        swap(&local_28, this);
        return this;
    }

    // 0x10049c770
    void shared_ptr<game::PlayerModelModelSet>::swap(shared_ptr<game::PlayerModelModelSet>& playerModelModelSet) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(playerModelModelSet);
        std::swap<ref_counter_base*>(*this, playerModelModelSet);
        std::swap<game::PlayerModelModelSet*>(*((this + 8)), *((playerModelModelSet + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(playerModelModelSet);
    }

    // 0x10049dd10
    void shared_ptr<game::LocTypeCustomisation>::swap(shared_ptr<game::LocTypeCustomisation>& locTypeCustomisation) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(locTypeCustomisation);
        std::swap<ref_counter_base*>(*this, locTypeCustomisation);
        std::swap<game::LocTypeCustomisation*>(*((this + 8)), *((locTypeCustomisation + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(locTypeCustomisation);
    }

    // 0x10049e790
    shared_ptr<game::StaticPointLight>*
    shared_ptr<game::StaticPointLight>::operator=(shared_ptr<game::StaticPointLight>&& staticPointLight) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(staticPointLight);
        swap(&local_28, this);
        return this;
    }

    // 0x10049e7d0
    void shared_ptr<game::StaticPointLight>::swap(shared_ptr<game::StaticPointLight>& staticPointLight) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(staticPointLight);
        std::swap<ref_counter_base*>(*this, staticPointLight);
        std::swap<game::StaticPointLight*>(*((this + 8)), *((staticPointLight + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(staticPointLight);
    }

    // 0x1004a2af0
    uint64_t shared_ptr<game::TcpConnectionMessageBase>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004ae040
    void shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>::operator=(
        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>&& arg1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        swap(&local_28, (shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, _4ul> _>*)this);
        return this;
    }

    // 0x1004b04c0
    shared_ptr<render::Texture2D>*
    shared_ptr<render::Texture2D>::operator=(const shared_ptr<render::Texture2D>& texture2D) {

        shared_ptr<oldscape::dash3d::Decor> local_28(texture2D);
        swap(&local_28, this);
        return this;
    }

    // 0x1004c09f0
    shared_ptr<game::MapSquareWorldAreaCompositeInner>* shared_ptr<game::MapSquareWorldAreaCompositeInner>::operator=(
        const shared_ptr<game::MapSquareWorldAreaCompositeInner>& mapSquareWorldAreaCompositeInner) {

        shared_ptr<oldscape::dash3d::Decor> local_28(mapSquareWorldAreaCompositeInner);
        swap(&local_28, this);
        return this;
    }

    // 0x1004c0a40
    void shared_ptr<game::MapSquareWorldAreaCompositeInner>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1004c0b20
    shared_ptr<game::MapSquareWorldAreaCompositeInner>* shared_ptr<game::MapSquareWorldAreaCompositeInner>::operator=(
        shared_ptr<game::MapSquareWorldAreaCompositeInner>&& mapSquareWorldAreaCompositeInner) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(mapSquareWorldAreaCompositeInner);
        swap(&local_28, this);
        return this;
    }

    // 0x1004c0b70
    uint64_t shared_ptr<game::MapSquareWorldAreaCompositeInner>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004c0db0
    uint64_t shared_ptr<game::WorldAreaType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004c0f40
    void shared_ptr<game::WorldAreaType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1004c0f90
    shared_ptr<game::WorldAreaType>*
    shared_ptr<game::WorldAreaType>::operator=(const shared_ptr<game::WorldAreaType>& worldAreaType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(worldAreaType);
        swap(&local_28, this);
        return this;
    }

    // 0x1004c1e10
    uint64_t shared_ptr<game::DebugStringProvider::IStringPool>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004c2030
    shared_ptr<game::DebugStringProvider::IStringPool>* shared_ptr<game::DebugStringProvider::IStringPool>::operator=(
        const shared_ptr<game::DebugStringProvider::IStringPool>& iStringPool) {

        shared_ptr<oldscape::dash3d::Decor> local_28(iStringPool);
        swap(&local_28, this);
        return this;
    }

    // 0x1004c2110
    shared_ptr<game::DebugStringProvider::IStringPool>& shared_ptr<game::DebugStringProvider::IStringPool>::operator=
        <game::NonSparseStringPool, void>(shared_ptr<game::NonSparseStringPool>&& nonSparseStringPool) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(nonSparseStringPool);
        swap(&local_28, this);
        return this;
    }

    // 0x1004c35d0
    void shared_ptr<game::MapSquareWorldAreaCompositeInner>::swap(
        shared_ptr<game::MapSquareWorldAreaCompositeInner>& mapSquareWorldAreaCompositeInner) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapSquareWorldAreaCompositeInner);
        std::swap<ref_counter_base*>(*this, mapSquareWorldAreaCompositeInner);
        std::swap<game::MapSquareWorldAreaCompositeInner*>(*((this + 8)), *((mapSquareWorldAreaCompositeInner + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapSquareWorldAreaCompositeInner);
    }

    // 0x1004c3e50
    void shared_ptr<game::WorldAreaType>::swap(shared_ptr<game::WorldAreaType>& worldAreaType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(worldAreaType);
        std::swap<ref_counter_base*>(*this, worldAreaType);
        std::swap<game::WorldAreaType*>(*((this + 8)), *((worldAreaType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(worldAreaType);
    }

    // 0x1004c4bb0
    void shared_ptr<game::DebugStringProvider::IStringPool>::swap(
        shared_ptr<game::DebugStringProvider::IStringPool>& iStringPool) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(iStringPool);
        std::swap<ref_counter_base*>(*this, iStringPool);
        std::swap<game::DebugStringProvider::IStringPool*>(*((this + 8)), *((iStringPool + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(iStringPool);
    }

    // 0x1004ce2d0
    uint64_t shared_ptr<game::VarType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004ce5b0
    uint64_t shared_ptr<game::VarBitType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004cea00
    uint64_t shared_ptr<game::QuestType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004db1d0
    void shared_ptr<game::VarType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1004db220
    void shared_ptr<game::VarType>::swap(shared_ptr<game::VarType>& varType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varType);
        std::swap<ref_counter_base*>(*this, varType);
        std::swap<game::VarType*>(*((this + 8)), *((varType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varType);
    }

    // 0x1004db840
    shared_ptr<game::VarType>* shared_ptr<game::VarType>::operator=(const shared_ptr<game::VarType>& varType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(varType);
        swap(&local_28, this);
        return this;
    }

    // 0x1004db890
    shared_ptr<game::VarType>* shared_ptr<game::VarType>::operator=(shared_ptr<game::VarType>&& varType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(varType);
        swap(&local_28, this);
        return this;
    }

    // 0x1004dd3f0
    uint64_t shared_ptr<game::QuickChatPhraseType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004e0070
    uint64_t shared_ptr<game::SeqTypeSounds>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004e0520
    shared_ptr<graphics::AnimFrameset>*
    shared_ptr<graphics::AnimFrameset>::operator=(shared_ptr<graphics::AnimFrameset>&& animFrameset) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(animFrameset);
        swap(&local_28, this);
        return this;
    }

    // 0x1004e0650
    uint64_t shared_ptr<graphics::AnimFrameset>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004e17f0
    shared_ptr<game::SeqTypeSounds>*
    shared_ptr<game::SeqTypeSounds>::operator=(shared_ptr<game::SeqTypeSounds>&& seqTypeSounds) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(seqTypeSounds);
        swap(&local_28, this);
        return this;
    }

    // 0x1004e1840
    uint64_t shared_ptr<game::SeqTypeSounds>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004e1bd0
    void shared_ptr<game::SeqTypeSounds>::swap(shared_ptr<game::SeqTypeSounds>& seqTypeSounds) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(seqTypeSounds);
        std::swap<ref_counter_base*>(*this, seqTypeSounds);
        std::swap<game::SeqTypeSounds*>(*((this + 8)), *((seqTypeSounds + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(seqTypeSounds);
    }

    // 0x1004e5980
    uint64_t shared_ptr<game::BuildAnimationMain>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004e5fe0
    shared_ptr<game::BuildAnimationMain>*
    shared_ptr<game::BuildAnimationMain>::operator=(shared_ptr<game::BuildAnimationMain>&& buildAnimationMain) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildAnimationMain);
        swap(&local_28, this);
        return this;
    }

    // 0x1004e6020
    void shared_ptr<game::BuildAnimationMain>::swap(shared_ptr<game::BuildAnimationMain>& buildAnimationMain) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildAnimationMain);
        std::swap<ref_counter_base*>(*this, buildAnimationMain);
        std::swap<game::BuildAnimationMain*>(*((this + 8)), *((buildAnimationMain + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildAnimationMain);
    }

    // 0x1004e6230
    void shared_ptr<game::BuildAnimationMain>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1004ea480
    shared_ptr<game::BuildAnimationMain>*
    shared_ptr<game::BuildAnimationMain>::operator=(const shared_ptr<game::BuildAnimationMain>& buildAnimationMain) {

        shared_ptr<oldscape::dash3d::Decor> local_28(buildAnimationMain);
        swap(&local_28, this);
        return this;
    }

    // 0x1004ea4c0
    void shared_ptr<graphics::Animation>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1004ee830
    void shared_ptr<game::SeqType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1004eee30
    shared_ptr<game::SeqType>* shared_ptr<game::SeqType>::operator=(shared_ptr<game::SeqType>&& seqType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(seqType);
        swap(&local_28, this);
        return this;
    }

    // 0x1004f0c60
    void shared_ptr<graphics::AnimFrameset>::swap(shared_ptr<graphics::AnimFrameset>& animFrameset) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animFrameset);
        std::swap<ref_counter_base*>(*this, animFrameset);
        std::swap<graphics::AnimFrameset*>(*((this + 8)), *((animFrameset + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animFrameset);
    }

    // 0x1004f20d0
    bool shared_ptr<graphics::AnimKeyFrameSet>::unique() const {
        return use_count(this) == 1;
    }

    // 0x1004f20f0
    uint64_t shared_ptr<graphics::AnimKeyFrameSet>::use_count() const {
        if (*(ref_counter_base**)this == nullptr) {
            return 0;
        }
        return (*(ref_counter_base**)this)->GetRefCount();
    }

    // 0x1004f3570
    uint64_t shared_ptr<game::ObjType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004f5cc0
    uint64_t shared_ptr<game::QuickChatCatType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004fae80
    void shared_ptr<game::ObjType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1004faed0
    void shared_ptr<game::ObjType>::swap(shared_ptr<game::ObjType>& objType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(objType);
        std::swap<ref_counter_base*>(*this, objType);
        std::swap<game::ObjType*>(*((this + 8)), *((objType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(objType);
    }

    // 0x1004fb4f0
    shared_ptr<game::ObjType>* shared_ptr<game::ObjType>::operator=(const shared_ptr<game::ObjType>& objType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(objType);
        swap(&local_28, this);
        return this;
    }

    // 0x1004fb540
    shared_ptr<game::ObjType>* shared_ptr<game::ObjType>::operator=(shared_ptr<game::ObjType>&& objType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(objType);
        swap(&local_28, this);
        return this;
    }

    // 0x1004fcfe0
    void shared_ptr<eastl::vector_map<int, game::VarValue>>::operator=(
        shared_ptr<eastl::vector_map<int, game::VarValue>>&& arg1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        swap(&local_28, (shared_ptr<eastl::vector_map<int, game::VarValue> _>*)this);
        return this;
    }

    // 0x1004fd020
    uint64_t shared_ptr<eastl::vector_map<int, game::VarValue>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1004fd420
    void
    shared_ptr<eastl::vector_map<int, game::VarValue>>::swap(shared_ptr<eastl::vector_map<int, game::VarValue>>& arg1) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<eastl::vector_map<int, game::VarValue>*>(*((this + 8)), *((arg1 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
    }

    // 0x1005073b0
    uint64_t shared_ptr<game::ObjTypeCustomisation>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100509880
    void shared_ptr<eastl::vector_map<int, game::VarValue>>::operator=(
        const shared_ptr<eastl::vector_map<int, game::VarValue>>& arg1) {

        shared_ptr<oldscape::dash3d::Decor> local_28(arg1);
        swap(&local_28, (shared_ptr<eastl::vector_map<int, game::VarValue> _>*)this);
        return this;
    }

    // 0x100509b20
    uint64_t shared_ptr<eastl::vector_map<int, game::VarValue>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10051d8a0
    shared_ptr<game::LocType>* shared_ptr<game::LocType>::operator=(shared_ptr<game::LocType>&& locType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(locType);
        swap(&local_28, this);
        return this;
    }

    // 0x10052a950
    shared_ptr<game::LocType::LocationSoundData>* shared_ptr<game::LocType::LocationSoundData>::operator=(
        shared_ptr<game::LocType::LocationSoundData>&& locationSoundData) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(locationSoundData);
        swap(&local_28, this);
        return this;
    }

    // 0x10052a9a0
    uint64_t shared_ptr<game::LocType::LocationSoundData>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10052c240
    void shared_ptr<game::LocType::LocationSoundData>::swap(
        shared_ptr<game::LocType::LocationSoundData>& locationSoundData) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(locationSoundData);
        std::swap<ref_counter_base*>(*this, locationSoundData);
        std::swap<game::LocType::LocationSoundData*>(*((this + 8)), *((locationSoundData + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(locationSoundData);
    }

    // 0x100535e10
    shared_ptr<ui::Interface>* shared_ptr<ui::Interface>::operator=(const shared_ptr<ui::Interface>& interface) {

        shared_ptr<oldscape::dash3d::Decor> local_28(interface);
        swap(&local_28, this);
        return this;
    }

    // 0x100535f40
    uint64_t shared_ptr<ui::Interface>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005360a0
    void shared_ptr<ui::Interface>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10053f830
    void shared_ptr<ui::Interface>::swap(shared_ptr<ui::Interface>& interface) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(interface);
        std::swap<ref_counter_base*>(*this, interface);
        std::swap<ui::Interface*>(*((this + 8)), *((interface + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(interface);
    }

    // 0x100546570
    uint64_t shared_ptr<game::PlayerModel>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100548f00
    uint64_t shared_ptr<game::BuildModelRequestData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100567a90
    uint64_t shared_ptr<game::ConfigProviderBatchInterface>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10056ad90
    shared_ptr<graphics::AnimationStateMachineProvider>* shared_ptr<graphics::AnimationStateMachineProvider>::operator=(
        shared_ptr<graphics::AnimationStateMachineProvider>&& animationStateMachineProvider) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(animationStateMachineProvider);
        swap(&local_28, this);
        return this;
    }

    // 0x100570ae0
    shared_ptr<game::ConfigProviderBatchInterface>* shared_ptr<game::ConfigProviderBatchInterface>::operator=(
        shared_ptr<game::ConfigProviderBatchInterface>&& configProviderBatchInterface) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(configProviderBatchInterface);
        swap(&local_28, this);
        return this;
    }

    // 0x100570b30
    void shared_ptr<game::ConfigProviderBatchInterface>::swap(
        shared_ptr<game::ConfigProviderBatchInterface>& configProviderBatchInterface) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(configProviderBatchInterface);
        std::swap<ref_counter_base*>(*this, configProviderBatchInterface);
        std::swap<game::ConfigProviderBatchInterface*>(*((this + 8)), *((configProviderBatchInterface + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(configProviderBatchInterface);
    }

    // 0x100572250
    uint64_t shared_ptr<game::ParamType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005754b0
    void shared_ptr<game::ParamType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005754f0
    void shared_ptr<game::ParamType>::swap(shared_ptr<game::ParamType>& paramType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(paramType);
        std::swap<ref_counter_base*>(*this, paramType);
        std::swap<game::ParamType*>(*((this + 8)), *((paramType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(paramType);
    }

    // 0x100575b10
    shared_ptr<game::ParamType>* shared_ptr<game::ParamType>::operator=(const shared_ptr<game::ParamType>& paramType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(paramType);
        swap(&local_28, this);
        return this;
    }

    // 0x100575b50
    shared_ptr<game::ParamType>* shared_ptr<game::ParamType>::operator=(shared_ptr<game::ParamType>&& paramType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(paramType);
        swap(&local_28, this);
        return this;
    }

    // 0x100577c00
    uint64_t shared_ptr<game::DBRowType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10057af70
    void shared_ptr<game::DBRowType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10057afb0
    void shared_ptr<game::DBRowType>::swap(shared_ptr<game::DBRowType>& dbRowType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(dbRowType);
        std::swap<ref_counter_base*>(*this, dbRowType);
        std::swap<game::DBRowType*>(*((this + 8)), *((dbRowType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(dbRowType);
    }

    // 0x10057b5d0
    shared_ptr<game::DBRowType>* shared_ptr<game::DBRowType>::operator=(const shared_ptr<game::DBRowType>& dbRowType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(dbRowType);
        swap(&local_28, this);
        return this;
    }

    // 0x10057b610
    shared_ptr<game::DBRowType>* shared_ptr<game::DBRowType>::operator=(shared_ptr<game::DBRowType>&& dbRowType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(dbRowType);
        swap(&local_28, this);
        return this;
    }

    // 0x10057d6d0
    uint64_t shared_ptr<game::DBTableType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100580650
    void shared_ptr<game::DBTableType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100580690
    void shared_ptr<game::DBTableType>::swap(shared_ptr<game::DBTableType>& dbTableType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(dbTableType);
        std::swap<ref_counter_base*>(*this, dbTableType);
        std::swap<game::DBTableType*>(*((this + 8)), *((dbTableType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(dbTableType);
    }

    // 0x100580cb0
    shared_ptr<game::DBTableType>*
    shared_ptr<game::DBTableType>::operator=(const shared_ptr<game::DBTableType>& dbTableType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(dbTableType);
        swap(&local_28, this);
        return this;
    }

    // 0x100580cf0
    shared_ptr<game::DBTableType>*
    shared_ptr<game::DBTableType>::operator=(shared_ptr<game::DBTableType>&& dbTableType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(dbTableType);
        swap(&local_28, this);
        return this;
    }

    // 0x100582dc0
    uint64_t shared_ptr<game::InvType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100585d30
    void shared_ptr<game::InvType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100585d70
    void shared_ptr<game::InvType>::swap(shared_ptr<game::InvType>& invType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(invType);
        std::swap<ref_counter_base*>(*this, invType);
        std::swap<game::InvType*>(*((this + 8)), *((invType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(invType);
    }

    // 0x100586390
    shared_ptr<game::InvType>* shared_ptr<game::InvType>::operator=(const shared_ptr<game::InvType>& invType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(invType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005863d0
    shared_ptr<game::InvType>* shared_ptr<game::InvType>::operator=(shared_ptr<game::InvType>&& invType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(invType);
        swap(&local_28, this);
        return this;
    }

    // 0x10058a0c0
    void shared_ptr<game::VarBitType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10058a100
    void shared_ptr<game::VarBitType>::swap(shared_ptr<game::VarBitType>& varBitType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varBitType);
        std::swap<ref_counter_base*>(*this, varBitType);
        std::swap<game::VarBitType*>(*((this + 8)), *((varBitType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(varBitType);
    }

    // 0x10058a720
    shared_ptr<game::VarBitType>*
    shared_ptr<game::VarBitType>::operator=(const shared_ptr<game::VarBitType>& varBitType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(varBitType);
        swap(&local_28, this);
        return this;
    }

    // 0x10058a760
    shared_ptr<game::VarBitType>* shared_ptr<game::VarBitType>::operator=(shared_ptr<game::VarBitType>&& varBitType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(varBitType);
        swap(&local_28, this);
        return this;
    }

    // 0x10058c840
    uint64_t shared_ptr<game::BASType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10058f870
    void shared_ptr<game::BASType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10058f8b0
    void shared_ptr<game::BASType>::swap(shared_ptr<game::BASType>& basType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(basType);
        std::swap<ref_counter_base*>(*this, basType);
        std::swap<game::BASType*>(*((this + 8)), *((basType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(basType);
    }

    // 0x10058fed0
    shared_ptr<game::BASType>* shared_ptr<game::BASType>::operator=(const shared_ptr<game::BASType>& basType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(basType);
        swap(&local_28, this);
        return this;
    }

    // 0x10058ff10
    shared_ptr<game::BASType>* shared_ptr<game::BASType>::operator=(shared_ptr<game::BASType>&& basType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(basType);
        swap(&local_28, this);
        return this;
    }

    // 0x100591fb0
    uint64_t shared_ptr<game::FloorUnderlayType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100594f10
    void shared_ptr<game::FloorUnderlayType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100594f50
    void shared_ptr<game::FloorUnderlayType>::swap(shared_ptr<game::FloorUnderlayType>& floorUnderlayType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(floorUnderlayType);
        std::swap<ref_counter_base*>(*this, floorUnderlayType);
        std::swap<game::FloorUnderlayType*>(*((this + 8)), *((floorUnderlayType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(floorUnderlayType);
    }

    // 0x100595570
    shared_ptr<game::FloorUnderlayType>*
    shared_ptr<game::FloorUnderlayType>::operator=(const shared_ptr<game::FloorUnderlayType>& floorUnderlayType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(floorUnderlayType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005955b0
    shared_ptr<game::FloorUnderlayType>*
    shared_ptr<game::FloorUnderlayType>::operator=(shared_ptr<game::FloorUnderlayType>&& floorUnderlayType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(floorUnderlayType);
        swap(&local_28, this);
        return this;
    }

    // 0x100597670
    uint64_t shared_ptr<game::FloorOverlayType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10059a5c0
    void shared_ptr<game::FloorOverlayType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10059a600
    void shared_ptr<game::FloorOverlayType>::swap(shared_ptr<game::FloorOverlayType>& floorOverlayType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(floorOverlayType);
        std::swap<ref_counter_base*>(*this, floorOverlayType);
        std::swap<game::FloorOverlayType*>(*((this + 8)), *((floorOverlayType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(floorOverlayType);
    }

    // 0x10059ac20
    shared_ptr<game::FloorOverlayType>*
    shared_ptr<game::FloorOverlayType>::operator=(const shared_ptr<game::FloorOverlayType>& floorOverlayType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(floorOverlayType);
        swap(&local_28, this);
        return this;
    }

    // 0x10059ac60
    shared_ptr<game::FloorOverlayType>*
    shared_ptr<game::FloorOverlayType>::operator=(shared_ptr<game::FloorOverlayType>&& floorOverlayType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(floorOverlayType);
        swap(&local_28, this);
        return this;
    }

    // 0x10059f230
    void shared_ptr<game::HitmarkType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10059f270
    void shared_ptr<game::HitmarkType>::swap(shared_ptr<game::HitmarkType>& hitmarkType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(hitmarkType);
        std::swap<ref_counter_base*>(*this, hitmarkType);
        std::swap<game::HitmarkType*>(*((this + 8)), *((hitmarkType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(hitmarkType);
    }

    // 0x10059f890
    shared_ptr<game::HitmarkType>*
    shared_ptr<game::HitmarkType>::operator=(const shared_ptr<game::HitmarkType>& hitmarkType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(hitmarkType);
        swap(&local_28, this);
        return this;
    }

    // 0x10059f8d0
    shared_ptr<game::HitmarkType>*
    shared_ptr<game::HitmarkType>::operator=(shared_ptr<game::HitmarkType>&& hitmarkType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(hitmarkType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005a4da0
    void shared_ptr<game::HeadbarType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005a7410
    uint64_t shared_ptr<game::IDKType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005aa5a0
    void shared_ptr<game::IDKType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005aa5e0
    void shared_ptr<game::IDKType>::swap(shared_ptr<game::IDKType>& idkType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(idkType);
        std::swap<ref_counter_base*>(*this, idkType);
        std::swap<game::IDKType*>(*((this + 8)), *((idkType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(idkType);
    }

    // 0x1005aac00
    shared_ptr<game::IDKType>* shared_ptr<game::IDKType>::operator=(const shared_ptr<game::IDKType>& idkType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(idkType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005aac40
    shared_ptr<game::IDKType>* shared_ptr<game::IDKType>::operator=(shared_ptr<game::IDKType>&& idkType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(idkType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005acda0
    uint64_t shared_ptr<game::MapElementType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005b0800
    void shared_ptr<game::MapElementType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005b0840
    void shared_ptr<game::MapElementType>::swap(shared_ptr<game::MapElementType>& mapElementType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapElementType);
        std::swap<ref_counter_base*>(*this, mapElementType);
        std::swap<game::MapElementType*>(*((this + 8)), *((mapElementType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mapElementType);
    }

    // 0x1005b0e60
    shared_ptr<game::MapElementType>*
    shared_ptr<game::MapElementType>::operator=(const shared_ptr<game::MapElementType>& mapElementType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(mapElementType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005b0ea0
    shared_ptr<game::MapElementType>*
    shared_ptr<game::MapElementType>::operator=(shared_ptr<game::MapElementType>&& mapElementType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(mapElementType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005b3630
    uint64_t shared_ptr<game::MSIType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005b6550
    void shared_ptr<game::MSIType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005b6590
    void shared_ptr<game::MSIType>::swap(shared_ptr<game::MSIType>& msiType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(msiType);
        std::swap<ref_counter_base*>(*this, msiType);
        std::swap<game::MSIType*>(*((this + 8)), *((msiType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(msiType);
    }

    // 0x1005b6bb0
    shared_ptr<game::MSIType>* shared_ptr<game::MSIType>::operator=(const shared_ptr<game::MSIType>& msiType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(msiType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005b6bf0
    shared_ptr<game::MSIType>* shared_ptr<game::MSIType>::operator=(shared_ptr<game::MSIType>&& msiType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(msiType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005bc500
    void shared_ptr<game::QuestType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005bc540
    void shared_ptr<game::QuestType>::swap(shared_ptr<game::QuestType>& questType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(questType);
        std::swap<ref_counter_base*>(*this, questType);
        std::swap<game::QuestType*>(*((this + 8)), *((questType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(questType);
    }

    // 0x1005bcb60
    shared_ptr<game::QuestType>* shared_ptr<game::QuestType>::operator=(const shared_ptr<game::QuestType>& questType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(questType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005bcba0
    shared_ptr<game::QuestType>* shared_ptr<game::QuestType>::operator=(shared_ptr<game::QuestType>&& questType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(questType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005bec50
    uint64_t shared_ptr<game::SeqGroupType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005c1c20
    void shared_ptr<game::SeqGroupType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005c1c60
    void shared_ptr<game::SeqGroupType>::swap(shared_ptr<game::SeqGroupType>& seqGroupType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(seqGroupType);
        std::swap<ref_counter_base*>(*this, seqGroupType);
        std::swap<game::SeqGroupType*>(*((this + 8)), *((seqGroupType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(seqGroupType);
    }

    // 0x1005c2280
    shared_ptr<game::SeqGroupType>*
    shared_ptr<game::SeqGroupType>::operator=(const shared_ptr<game::SeqGroupType>& seqGroupType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(seqGroupType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005c22c0
    shared_ptr<game::SeqGroupType>*
    shared_ptr<game::SeqGroupType>::operator=(shared_ptr<game::SeqGroupType>&& seqGroupType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(seqGroupType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005c4380
    uint64_t shared_ptr<game::LightType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005c72d0
    void shared_ptr<game::LightType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005c7310
    void shared_ptr<game::LightType>::swap(shared_ptr<game::LightType>& lightType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(lightType);
        std::swap<ref_counter_base*>(*this, lightType);
        std::swap<game::LightType*>(*((this + 8)), *((lightType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(lightType);
    }

    // 0x1005c7930
    shared_ptr<game::LightType>* shared_ptr<game::LightType>::operator=(const shared_ptr<game::LightType>& lightType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(lightType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005c7970
    shared_ptr<game::LightType>* shared_ptr<game::LightType>::operator=(shared_ptr<game::LightType>&& lightType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(lightType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005c9b10
    uint64_t shared_ptr<game::SkyBoxType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005cca70
    void shared_ptr<game::SkyBoxType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005ccab0
    void shared_ptr<game::SkyBoxType>::swap(shared_ptr<game::SkyBoxType>& skyBoxType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(skyBoxType);
        std::swap<ref_counter_base*>(*this, skyBoxType);
        std::swap<game::SkyBoxType*>(*((this + 8)), *((skyBoxType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(skyBoxType);
    }

    // 0x1005cd0d0
    shared_ptr<game::SkyBoxType>*
    shared_ptr<game::SkyBoxType>::operator=(const shared_ptr<game::SkyBoxType>& skyBoxType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(skyBoxType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005cd110
    shared_ptr<game::SkyBoxType>* shared_ptr<game::SkyBoxType>::operator=(shared_ptr<game::SkyBoxType>&& skyBoxType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(skyBoxType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005cf880
    uint64_t shared_ptr<game::WaterType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005d1510
    void shared_ptr<game::WaterType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005d1550
    void shared_ptr<game::WaterType>::swap(shared_ptr<game::WaterType>& waterType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(waterType);
        std::swap<ref_counter_base*>(*this, waterType);
        std::swap<game::WaterType*>(*((this + 8)), *((waterType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(waterType);
    }

    // 0x1005d1b70
    shared_ptr<game::WaterType>* shared_ptr<game::WaterType>::operator=(const shared_ptr<game::WaterType>& waterType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(waterType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005d1bb0
    shared_ptr<game::WaterType>* shared_ptr<game::WaterType>::operator=(shared_ptr<game::WaterType>&& waterType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(waterType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005d3c40
    uint64_t shared_ptr<game::CursorType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005d6b80
    void shared_ptr<game::CursorType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005d6bc0
    void shared_ptr<game::CursorType>::swap(shared_ptr<game::CursorType>& cursorType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(cursorType);
        std::swap<ref_counter_base*>(*this, cursorType);
        std::swap<game::CursorType*>(*((this + 8)), *((cursorType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(cursorType);
    }

    // 0x1005d71e0
    shared_ptr<game::CursorType>*
    shared_ptr<game::CursorType>::operator=(const shared_ptr<game::CursorType>& cursorType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(cursorType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005d7220
    shared_ptr<game::CursorType>* shared_ptr<game::CursorType>::operator=(shared_ptr<game::CursorType>&& cursorType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(cursorType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005dc730
    shared_ptr<game::WorldAreaType>*
    shared_ptr<game::WorldAreaType>::operator=(shared_ptr<game::WorldAreaType>&& worldAreaType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(worldAreaType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005deb20
    uint64_t shared_ptr<game::EnumType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005e24b0
    void shared_ptr<game::EnumType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005e24f0
    void shared_ptr<game::EnumType>::swap(shared_ptr<game::EnumType>& enumType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(enumType);
        std::swap<ref_counter_base*>(*this, enumType);
        std::swap<game::EnumType*>(*((this + 8)), *((enumType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(enumType);
    }

    // 0x1005e2b10
    shared_ptr<game::EnumType>* shared_ptr<game::EnumType>::operator=(const shared_ptr<game::EnumType>& enumType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(enumType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005e2b50
    shared_ptr<game::EnumType>* shared_ptr<game::EnumType>::operator=(shared_ptr<game::EnumType>&& enumType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(enumType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005e4eb0
    uint64_t shared_ptr<game::EffectAnimType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005e7ed0
    void shared_ptr<game::EffectAnimType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005e7f10
    void shared_ptr<game::EffectAnimType>::swap(shared_ptr<game::EffectAnimType>& effectAnimType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(effectAnimType);
        std::swap<ref_counter_base*>(*this, effectAnimType);
        std::swap<game::EffectAnimType*>(*((this + 8)), *((effectAnimType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(effectAnimType);
    }

    // 0x1005e8530
    shared_ptr<game::EffectAnimType>*
    shared_ptr<game::EffectAnimType>::operator=(const shared_ptr<game::EffectAnimType>& effectAnimType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(effectAnimType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005e8570
    shared_ptr<game::EffectAnimType>*
    shared_ptr<game::EffectAnimType>::operator=(shared_ptr<game::EffectAnimType>&& effectAnimType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(effectAnimType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005eabe0
    uint64_t shared_ptr<game::StructType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005edb20
    void shared_ptr<game::StructType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005edb60
    void shared_ptr<game::StructType>::swap(shared_ptr<game::StructType>& structType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(structType);
        std::swap<ref_counter_base*>(*this, structType);
        std::swap<game::StructType*>(*((this + 8)), *((structType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(structType);
    }

    // 0x1005ee180
    shared_ptr<game::StructType>*
    shared_ptr<game::StructType>::operator=(const shared_ptr<game::StructType>& structType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(structType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005ee1c0
    shared_ptr<game::StructType>* shared_ptr<game::StructType>::operator=(shared_ptr<game::StructType>&& structType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(structType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005f0270
    uint64_t shared_ptr<game::AchievementType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1005f3a70
    void shared_ptr<game::AchievementType>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1005f3ab0
    void shared_ptr<game::AchievementType>::swap(shared_ptr<game::AchievementType>& achievementType) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(achievementType);
        std::swap<ref_counter_base*>(*this, achievementType);
        std::swap<game::AchievementType*>(*((this + 8)), *((achievementType + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(achievementType);
    }

    // 0x1005f40d0
    shared_ptr<game::AchievementType>*
    shared_ptr<game::AchievementType>::operator=(const shared_ptr<game::AchievementType>& achievementType) {

        shared_ptr<oldscape::dash3d::Decor> local_28(achievementType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005f4110
    shared_ptr<game::AchievementType>*
    shared_ptr<game::AchievementType>::operator=(shared_ptr<game::AchievementType>&& achievementType) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(achievementType);
        swap(&local_28, this);
        return this;
    }

    // 0x1005f5a20
    void shared_ptr<graphics::AnimationStateMachineProvider>::swap(
        shared_ptr<graphics::AnimationStateMachineProvider>& animationStateMachineProvider) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationStateMachineProvider);
        std::swap<ref_counter_base*>(*this, animationStateMachineProvider);
        std::swap<graphics::AnimationStateMachineProvider*>(*((this + 8)), *((animationStateMachineProvider + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationStateMachineProvider);
    }

    // 0x100601d00
    uint64_t shared_ptr<DebugOverlay>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100615ca0
    uint64_t shared_ptr<game::PositionSpline>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100620f60
    shared_ptr<game::IPositionManager>*
    shared_ptr<game::IPositionManager>::operator=(const shared_ptr<game::IPositionManager>& iPositionManager) {

        shared_ptr<oldscape::dash3d::Decor> local_28(iPositionManager);
        swap(&local_28, this);
        return this;
    }

    // 0x1006211b0
    shared_ptr<game::ILookatManager>*
    shared_ptr<game::ILookatManager>::operator=(const shared_ptr<game::ILookatManager>& iLookatManager) {

        shared_ptr<oldscape::dash3d::Decor> local_28(iLookatManager);
        swap(&local_28, this);
        return this;
    }

    // 0x100621cf0
    void shared_ptr<game::IPositionManager>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100621d40
    void shared_ptr<game::ILookatManager>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100621e80
    shared_ptr<game::Entity>* shared_ptr<game::Entity>::operator=(const shared_ptr<game::Entity>& entity) {

        shared_ptr<oldscape::dash3d::Decor> local_28(entity);
        swap(&local_28, this);
        return this;
    }

    // 0x1006253c0
    shared_ptr<game::BuildSingleLocationRequestData>* shared_ptr<game::BuildSingleLocationRequestData>::operator=(
        shared_ptr<game::BuildSingleLocationRequestData>&& buildSingleLocationRequestData) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildSingleLocationRequestData);
        swap(&local_28, this);
        return this;
    }

    // 0x100625600
    uint64_t shared_ptr<game::BuildSingleLocationRequestData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100625b60
    void shared_ptr<void>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100625cb0
    uint64_t shared_ptr<game::BuildSingleLocationResultData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1006262e0
    shared_ptr<game::BuildTerrainRequestData>* shared_ptr<game::BuildTerrainRequestData>::operator=(
        shared_ptr<game::BuildTerrainRequestData>&& buildTerrainRequestData) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildTerrainRequestData);
        swap(&local_28, this);
        return this;
    }

    // 0x100626320
    uint64_t shared_ptr<game::BuildTerrainRequestData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100626360
    shared_ptr<eastl::vector<graphics::WaterPatchConfig>>*
    shared_ptr<eastl::vector<graphics::WaterPatchConfig>>::operator=(
        const shared_ptr<eastl::vector<graphics::WaterPatchConfig>>& waterPatchConfigs) {

        shared_ptr<oldscape::dash3d::Decor> local_28(waterPatchConfigs);
        swap(&local_28, (shared_ptr<eastl::vector<graphics::WaterPatchConfig> _>*)this);
        return this;
    }

    // 0x100627be0
    shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>*
    shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>::operator=(
        shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>&& arg1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        swap(&local_28, (shared_ptr<eastl::map<int, graphics::TerrainTextureMeta> _>*)this);
        return this;
    }

    // 0x100627cc0
    uint64_t shared_ptr<game::BuildTerrainResultLevelData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10062a270
    uint64_t shared_ptr<game::BuildTerrainResultData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10062a2b0
    shared_ptr<game::BuildTerrainResultLevelData>* shared_ptr<game::BuildTerrainResultLevelData>::operator=(
        shared_ptr<game::BuildTerrainResultLevelData>&& buildTerrainResultLevelData) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildTerrainResultLevelData);
        swap(&local_28, this);
        return this;
    }

    // 0x10062a2f0
    uint64_t shared_ptr<game::BuiltTerrainLevel>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10062a480
    shared_ptr<eastl::vector<eastl::vector<unsigned char>>>*
    shared_ptr<eastl::vector<eastl::vector<unsigned char>>>::operator=(
        shared_ptr<eastl::vector<eastl::vector<unsigned char>>>&& arg1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        swap((shared_ptr<eastl::vector<eastl::vector<unsigned char>>>*)&local_28,
             (shared_ptr<eastl::vector<eastl::vector<unsigned char>> _>*)this);
        return this;
    }

    // 0x10062a4d0
    uint64_t shared_ptr<eastl::vector<eastl::vector<unsigned char>>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10062aab0
    uint64_t shared_ptr<game::BuiltTerrainLevel>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10062af40
    shared_ptr<game::BuildTerrainResultWaterData>* shared_ptr<game::BuildTerrainResultWaterData>::operator=(
        shared_ptr<game::BuildTerrainResultWaterData>&& buildTerrainResultWaterData) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildTerrainResultWaterData);
        swap(&local_28, this);
        return this;
    }

    // 0x10062d530
    shared_ptr<game::BuiltTerrainLevel>*
    shared_ptr<game::BuiltTerrainLevel>::operator=(shared_ptr<game::BuiltTerrainLevel>&& builtTerrainLevel) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(builtTerrainLevel);
        swap(&local_28, this);
        return this;
    }

    // 0x10062d600
    shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>*
    shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>::operator=(
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>&& gridGroupss) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(gridGroupss);
        swap(&local_28, (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>> _>*)this);
        return this;
    }

    // 0x10062dc70
    void shared_ptr<game::BuiltTerrainLevel>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10062ed40
    uint64_t shared_ptr<game::ILookatManager>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10062ed80
    uint64_t shared_ptr<game::IPositionManager>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10062f220
    shared_ptr<game::ILookatManager>& shared_ptr<game::ILookatManager>::operator=
        <game::LookatPoint, void>(shared_ptr<game::LookatPoint>&& lookatOrientation) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(lookatOrientation);
        swap(&local_28, this);
        return this;
    }

    // 0x10062f690
    shared_ptr<game::IPositionManager>& shared_ptr<game::IPositionManager>::operator=
        <game::PositionPoint, void>(shared_ptr<game::PositionPoint>&& positionPoint) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(positionPoint);
        swap(&local_28, this);
        return this;
    }

    // 0x1006304d0
    uint64_t shared_ptr<game::ICameraEffect>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100632550
    shared_ptr<game::ICameraEffect>*
    shared_ptr<game::ICameraEffect>::operator=(const shared_ptr<game::ICameraEffect>& iCameraEffect) {

        shared_ptr<oldscape::dash3d::Decor> local_28(iCameraEffect);
        swap(&local_28, this);
        return this;
    }

    // 0x100634560
    void shared_ptr<game::BuildSingleLocationRequestData>::swap(
        shared_ptr<game::BuildSingleLocationRequestData>& buildSingleLocationRequestData) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildSingleLocationRequestData);
        std::swap<ref_counter_base*>(*this, buildSingleLocationRequestData);
        std::swap<game::BuildSingleLocationRequestData*>(*((this + 8)), *((buildSingleLocationRequestData + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildSingleLocationRequestData);
    }

    // 0x100636250
    void shared_ptr<game::BuildTerrainRequestData>::swap(
        shared_ptr<game::BuildTerrainRequestData>& buildTerrainRequestData) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildTerrainRequestData);
        std::swap<ref_counter_base*>(*this, buildTerrainRequestData);
        std::swap<game::BuildTerrainRequestData*>(*((this + 8)), *((buildTerrainRequestData + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildTerrainRequestData);
    }

    // 0x10063ad40
    void shared_ptr<game::BuildTerrainResultLevelData>::swap(
        shared_ptr<game::BuildTerrainResultLevelData>& buildTerrainResultLevelData) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildTerrainResultLevelData);
        std::swap<ref_counter_base*>(*this, buildTerrainResultLevelData);
        std::swap<game::BuildTerrainResultLevelData*>(*((this + 8)), *((buildTerrainResultLevelData + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildTerrainResultLevelData);
    }

    // 0x10063d590
    void shared_ptr<game::BuildTerrainResultWaterData>::swap(
        shared_ptr<game::BuildTerrainResultWaterData>& buildTerrainResultWaterData) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildTerrainResultWaterData);
        std::swap<ref_counter_base*>(*this, buildTerrainResultWaterData);
        std::swap<game::BuildTerrainResultWaterData*>(*((this + 8)), *((buildTerrainResultWaterData + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildTerrainResultWaterData);
    }

    // 0x10063fb50
    void shared_ptr<game::BuiltTerrainLevel>::swap(shared_ptr<game::BuiltTerrainLevel>& builtTerrainLevel) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(builtTerrainLevel);
        std::swap<ref_counter_base*>(*this, builtTerrainLevel);
        std::swap<game::BuiltTerrainLevel*>(*((this + 8)), *((builtTerrainLevel + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(builtTerrainLevel);
    }

    // 0x100640ac0
    void shared_ptr<game::ILookatManager>::swap(shared_ptr<game::ILookatManager>& iLookatManager) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(iLookatManager);
        std::swap<ref_counter_base*>(*this, iLookatManager);
        std::swap<game::ILookatManager*>(*((this + 8)), *((iLookatManager + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(iLookatManager);
    }

    // 0x100641160
    void shared_ptr<game::IPositionManager>::swap(shared_ptr<game::IPositionManager>& iPositionManager) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(iPositionManager);
        std::swap<ref_counter_base*>(*this, iPositionManager);
        std::swap<game::IPositionManager*>(*((this + 8)), *((iPositionManager + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(iPositionManager);
    }

    // 0x100641c40
    shared_ptr<game::ICameraEffect>*
    shared_ptr<game::ICameraEffect>::operator=(shared_ptr<game::ICameraEffect>&& iCameraEffect) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(iCameraEffect);
        swap(&local_28, this);
        return this;
    }

    // 0x100641c80
    void shared_ptr<game::ICameraEffect>::swap(shared_ptr<game::ICameraEffect>& iCameraEffect) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(iCameraEffect);
        std::swap<ref_counter_base*>(*this, iCameraEffect);
        std::swap<game::ICameraEffect*>(*((this + 8)), *((iCameraEffect + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(iCameraEffect);
    }

    // 0x100641ff0
    shared_ptr<game::ICameraEffect>::shared_ptr<game::camera::ZTilt, void>(shared_ptr<game::camera::ZTilt>&& zTilt) {
        *(uint64_t*)this = *(uint64_t*)zTilt;
        *(uint64_t*)(this + 8) = *(uint64_t*)(zTilt + 8);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(zTilt);
        *(uint64_t*)zTilt = 0;
        *(uint64_t*)(zTilt + 8) = 0;
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
    }

    // 0x100643080
    shared_ptr<game::BuildFunctionRequestData>* shared_ptr<game::BuildFunctionRequestData>::operator=(
        shared_ptr<game::BuildFunctionRequestData>&& buildFunctionRequestData) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildFunctionRequestData);
        swap(&local_28, this);
        return this;
    }

    // 0x1006430c0
    uint64_t shared_ptr<game::BuildFunctionRequestData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100643100
    shared_ptr<std::function<void()>>*
    shared_ptr<std::function<void()>>::operator=(const shared_ptr<std::function<void()>>& callback) {

        shared_ptr<oldscape::dash3d::Decor> local_28(callback);
        swap((shared_ptr<std::function<void()>>*)&local_28, (shared_ptr<std::function<void_()> _>*)this);
        return this;
    }

    // 0x100643520
    uint64_t shared_ptr<std::function<void()>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100643b00
    shared_ptr<game::BuildModelRequestData>* shared_ptr<game::BuildModelRequestData>::operator=(
        shared_ptr<game::BuildModelRequestData>&& buildModelRequestData) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildModelRequestData);
        swap(&local_28, this);
        return this;
    }

    // 0x100643b40
    uint64_t shared_ptr<game::BuildModelRequestData>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100644d60
    uint64_t shared_ptr<game::BuildModelResultData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100645a30
    void shared_ptr<game::BuildFunctionRequestData>::swap(
        shared_ptr<game::BuildFunctionRequestData>& buildFunctionRequestData) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildFunctionRequestData);
        std::swap<ref_counter_base*>(*this, buildFunctionRequestData);
        std::swap<game::BuildFunctionRequestData*>(*((this + 8)), *((buildFunctionRequestData + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildFunctionRequestData);
    }

    // 0x100645ad0
    void shared_ptr<std::function<void()>>::swap(shared_ptr<std::function<void()>>& callback) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(callback);
        std::swap<ref_counter_base*>(*this, callback);
        std::swap<std::function<void()>*>(*((this + 8)), *((callback + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(callback);
    }

    // 0x100648690
    void shared_ptr<game::BuildModelRequestData>::swap(shared_ptr<game::BuildModelRequestData>& buildModelRequestData) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildModelRequestData);
        std::swap<ref_counter_base*>(*this, buildModelRequestData);
        std::swap<game::BuildModelRequestData*>(*((this + 8)), *((buildModelRequestData + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildModelRequestData);
    }

    // 0x100649f70
    shared_ptr<game::BuildAnimationRequestData>* shared_ptr<game::BuildAnimationRequestData>::operator=(
        shared_ptr<game::BuildAnimationRequestData>&& buildAnimationRequestData) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildAnimationRequestData);
        swap(&local_28, this);
        return this;
    }

    // 0x100649fb0
    uint64_t shared_ptr<game::BuildAnimationRequestData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10064a580
    uint64_t shared_ptr<game::BuildAnimationResultData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10064a870
    shared_ptr<game::BuildCombinedLocationRequestData>* shared_ptr<game::BuildCombinedLocationRequestData>::operator=(
        shared_ptr<game::BuildCombinedLocationRequestData>&& buildCombinedLocationRequestData) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildCombinedLocationRequestData);
        swap(&local_28, this);
        return this;
    }

    // 0x10064c540
    uint64_t shared_ptr<game::BuildCombinedLocationRequestData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10064ca10
    shared_ptr<game::Location>* shared_ptr<game::Location>::operator=(const shared_ptr<game::Location>& location) {

        shared_ptr<oldscape::dash3d::Decor> local_28(location);
        swap(&local_28, this);
        return this;
    }

    // 0x10064d1d0
    uint64_t shared_ptr<game::BuildCombinedLocationResultData>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10064eea0
    uint64_t shared_ptr<game::BuildCombinedLocationResultData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10064fde0
    void shared_ptr<game::BuildAnimationRequestData>::swap(
        shared_ptr<game::BuildAnimationRequestData>& buildAnimationRequestData) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildAnimationRequestData);
        std::swap<ref_counter_base*>(*this, buildAnimationRequestData);
        std::swap<game::BuildAnimationRequestData*>(*((this + 8)), *((buildAnimationRequestData + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildAnimationRequestData);
    }

    // 0x100651310
    void shared_ptr<game::BuildCombinedLocationRequestData>::swap(
        shared_ptr<game::BuildCombinedLocationRequestData>& buildCombinedLocationRequestData) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildCombinedLocationRequestData);
        std::swap<ref_counter_base*>(*this, buildCombinedLocationRequestData);
        std::swap<game::BuildCombinedLocationRequestData*>(*((this + 8)), *((buildCombinedLocationRequestData + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(buildCombinedLocationRequestData);
    }

    // 0x100659c50
    uint64_t shared_ptr<game::AssetJob>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10065a530
    uint64_t shared_ptr<game::BuildFunctionMain>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10065a5d0
    uint64_t shared_ptr<game::AssetWorker>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10065a700
    shared_ptr<void>* shared_ptr<void>::operator=(const shared_ptr<void>& arg1) {

        shared_ptr<oldscape::dash3d::Decor> local_28(arg1);
        swap(&local_28, this);
        return this;
    }

    // 0x10065b070
    shared_ptr<game::AssetWorker>*
    shared_ptr<game::AssetWorker>::operator=(const shared_ptr<game::AssetWorker>& assetWorker) {

        shared_ptr<oldscape::dash3d::Decor> local_28(assetWorker);
        swap(&local_28, this);
        return this;
    }

    // 0x10065b0c0
    shared_ptr<game::AssetJob>* shared_ptr<game::AssetJob>::operator=(const shared_ptr<game::AssetJob>& assetJob) {

        shared_ptr<oldscape::dash3d::Decor> local_28(assetJob);
        swap(&local_28, this);
        return this;
    }

    // 0x10065b110
    void shared_ptr<game::AssetWorker>::swap(shared_ptr<game::AssetWorker>& assetWorker) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(assetWorker);
        std::swap<ref_counter_base*>(*this, assetWorker);
        std::swap<game::AssetWorker*>(*((this + 8)), *((assetWorker + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(assetWorker);
    }

    // 0x10065b1c0
    void shared_ptr<game::AssetJob>::swap(shared_ptr<game::AssetJob>& assetJob) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(assetJob);
        std::swap<ref_counter_base*>(*this, assetJob);
        std::swap<game::AssetJob*>(*((this + 8)), *((assetJob + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(assetJob);
    }

    // 0x10065b240
    shared_ptr<game::AssetWorker>*
    shared_ptr<game::AssetWorker>::operator=(shared_ptr<game::AssetWorker>&& assetWorker) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(assetWorker);
        swap(&local_28, this);
        return this;
    }

    // 0x10065b290
    shared_ptr<game::AssetJob>* shared_ptr<game::AssetJob>::operator=(shared_ptr<game::AssetJob>&& assetJob) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(assetJob);
        swap(&local_28, this);
        return this;
    }

    // 0x10065c9f0
    shared_ptr<graphics::WalkMergeDataProvider>::shared_ptr<game::SeqGroupType>(
        const shared_ptr<game::SeqGroupType>& seqGroupType, const shared_ptr_static_cast& shared_ptr_static_cast) {
        *(uint64_t*)this = *(uint64_t*)seqGroupType;
        long lVar1 = *(long*)(seqGroupType + 8) + 56;
        if (*(long*)(seqGroupType + 8) == 0) {
            lVar1 = 0;
        }
        *(long*)(this + 8) = lVar1;
        IncRef();
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
    }

    // 0x10065da20
    void shared_ptr<void>::swap(shared_ptr<void>& arg1) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<void*>(*((this + 8)), *((arg1 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
    }

    // 0x10065f660
    shared_ptr<void>* shared_ptr<void>::operator=(shared_ptr<void>&& arg1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        swap(&local_28, this);
        return this;
    }

    // 0x1006640f0
    uint64_t shared_ptr<audio::SoundResource>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100664220
    void shared_ptr<audio::SoundResource>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100664990
    shared_ptr<audio::SoundResource>*
    shared_ptr<audio::SoundResource>::operator=(const shared_ptr<audio::SoundResource>& soundResource) {

        shared_ptr<oldscape::dash3d::Decor> local_28(soundResource);
        swap(&local_28, this);
        return this;
    }

    // 0x100667220
    uint64_t shared_ptr<graphics::AnimationState>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100667c80
    uint64_t shared_ptr<graphics::ParticleSystem>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1006680d0
    shared_ptr<game::AnimationWrapper>*
    shared_ptr<game::AnimationWrapper>::operator=(const shared_ptr<game::AnimationWrapper>& animationWrapper) {

        shared_ptr<oldscape::dash3d::Decor> local_28(animationWrapper);
        swap(&local_28, this);
        return this;
    }

    // 0x100668270
    shared_ptr<game::AnimationWrapper>*
    shared_ptr<game::AnimationWrapper>::operator=(shared_ptr<game::AnimationWrapper>&& animationWrapper) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(animationWrapper);
        swap(&local_28, this);
        return this;
    }

    // 0x1006687b0
    uint64_t shared_ptr<game::Entity>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100668950
    void shared_ptr<game::AnimationWrapper>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100668b30
    uint64_t shared_ptr<game::SeqType>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1006691c0
    uint64_t shared_ptr<graphics::AnimationState>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100669730
    void shared_ptr<game::AnimationWrapper>::swap(shared_ptr<game::AnimationWrapper>& animationWrapper) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationWrapper);
        std::swap<ref_counter_base*>(*this, animationWrapper);
        std::swap<game::AnimationWrapper*>(*((this + 8)), *((animationWrapper + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationWrapper);
    }

    // 0x10066a110
    shared_ptr<graphics::GeometryQuery>*
    shared_ptr<graphics::GeometryQuery>::operator=(const shared_ptr<graphics::GeometryQuery>& geometryQuery) {

        shared_ptr<oldscape::dash3d::Decor> local_28(geometryQuery);
        swap(&local_28, this);
        return this;
    }

    // 0x10066a160
    void shared_ptr<graphics::GeometryQuery>::swap(shared_ptr<graphics::GeometryQuery>& geometryQuery) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(geometryQuery);
        std::swap<ref_counter_base*>(*this, geometryQuery);
        std::swap<graphics::GeometryQuery*>(*((this + 8)), *((geometryQuery + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(geometryQuery);
    }

    // 0x10066ec60
    void shared_ptr<audio::SoundResource>::swap(shared_ptr<audio::SoundResource>& soundResource) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(soundResource);
        std::swap<ref_counter_base*>(*this, soundResource);
        std::swap<audio::SoundResource*>(*((this + 8)), *((soundResource + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(soundResource);
    }

    // 0x100670c40
    shared_ptr<hal::audio::AudioBuffer>*
    shared_ptr<hal::audio::AudioBuffer>::operator=(const shared_ptr<hal::audio::AudioBuffer>& audioBuffer) {

        shared_ptr<oldscape::dash3d::Decor> local_28(audioBuffer);
        swap(&local_28, this);
        return this;
    }

    // 0x100674a90
    uint64_t shared_ptr<ui::StyleSheet>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100687bd0
    uint64_t shared_ptr<tweak::Label>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100687e80
    uint64_t shared_ptr<tweak::List>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100687f70
    shared_ptr<tweak::Tweaky>* shared_ptr<tweak::Tweaky>::operator=(shared_ptr<tweak::Tweaky>&& tweaky) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(tweaky);
        swap(&local_28, this);
        return this;
    }

    // 0x1006886a0
    shared_ptr<tweak::Tweaky>* shared_ptr<tweak::Tweaky>::operator=(const shared_ptr<tweak::Tweaky>& tweaky) {

        shared_ptr<oldscape::dash3d::Decor> local_28(tweaky);
        swap(&local_28, this);
        return this;
    }

    // 0x1006948d0
    uint64_t shared_ptr<ui::ComponentCollectionBase>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10069af60
    uint64_t shared_ptr<ui::InputField>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1006a4380
    uint64_t shared_ptr<ui::PagedLayer>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1006a5110
    uint64_t shared_ptr<ui::PagedLayer>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1006c86d0
    shared_ptr<ui::FocusComponent>::shared_ptr<ui::ComboField, void>(const shared_ptr<ui::ComboField>& comboField) {
        *(uint64_t*)this = *(uint64_t*)comboField;
        long lVar1 = *(long*)(comboField + 8) + 400;
        if (*(long*)(comboField + 8) == 0) {
            lVar1 = 0;
        }
        *(long*)(this + 8) = lVar1;
        IncRef();
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
    }

    // 0x1006d35e0
    shared_ptr<ui::FocusComponent>::shared_ptr<ui::InputField, void>(const shared_ptr<ui::InputField>& inputField) {
        *(uint64_t*)this = *(uint64_t*)inputField;
        long lVar1 = *(long*)(inputField + 8) + 408;
        if (*(long*)(inputField + 8) == 0) {
            lVar1 = 0;
        }
        *(long*)(this + 8) = lVar1;
        IncRef();
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
    }

    // 0x1006d4d20
    shared_ptr<ui::FocusComponent>::shared_ptr<ui::List, void>(shared_ptr<ui::List>&& arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        long lVar1 = *(long*)(arg1 + 8) + 392;
        if (*(long*)(arg1 + 8) == 0) {
            lVar1 = 0;
        }
        *(long*)(this + 8) = lVar1;
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)(arg1 + 8) = 0;
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
    }

    // 0x1007b49d0
    shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>*
    shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>::operator=(
        const shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>& gridGroupss) {

        shared_ptr<oldscape::dash3d::Decor> local_28(gridGroupss);
        swap(&local_28, (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>> _>*)this);
        return this;
    }

    // 0x1007b4a10
    shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>*
    shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>::operator=(
        const shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>& arg1) {

        shared_ptr<oldscape::dash3d::Decor> local_28(arg1);
        swap(&local_28, (shared_ptr<eastl::map<int, graphics::TerrainTextureMeta> _>*)this);
        return this;
    }

    // 0x1007b58f0
    uint64_t shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1007b5930
    uint64_t shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1007b5d50
    uint64_t shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1007b5e60
    uint64_t shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1007bce00
    shared_ptr<graphics::TextureAtlasReference>* shared_ptr<graphics::TextureAtlasReference>::operator=(
        const shared_ptr<graphics::TextureAtlasReference>& textureAtlasReference) {

        shared_ptr<oldscape::dash3d::Decor> local_28(textureAtlasReference);
        swap(&local_28, this);
        return this;
    }

    // 0x1007bd3a0
    uint64_t shared_ptr<render::Texture>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1007c4bf0
    void shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>::swap(
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>& gridGroupss) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(gridGroupss);
        std::swap<ref_counter_base*>(*this, gridGroupss);
        std::swap<eastl::vector<eastl::vector<graphics::GridGroup>>*>(*((this + 8)), *((gridGroupss + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(gridGroupss);
    }

    // 0x1007c4c70
    void shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>::swap(
        shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>& arg1) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<eastl::map<int, graphics::TerrainTextureMeta>*>(*((this + 8)), *((arg1 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
    }

    // 0x1007ca310
    uint64_t shared_ptr<graphics::ModelParticleSource>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1007ca540
    shared_ptr<graphics::ModelParticleSource>* shared_ptr<graphics::ModelParticleSource>::operator=(
        const shared_ptr<graphics::ModelParticleSource>& modelParticleSource) {

        shared_ptr<oldscape::dash3d::Decor> local_28(modelParticleSource);
        swap(&local_28, this);
        return this;
    }

    // 0x1007ea970
    void
    shared_ptr<graphics::ModelParticleSource>::swap(shared_ptr<graphics::ModelParticleSource>& modelParticleSource) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelParticleSource);
        std::swap<ref_counter_base*>(*this, modelParticleSource);
        std::swap<graphics::ModelParticleSource*>(*((this + 8)), *((modelParticleSource + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modelParticleSource);
    }

    // 0x1007ecb70
    uint64_t shared_ptr<graphics::ModularParticleSystemTemplate>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1007ecc80
    shared_ptr<graphics::ModularParticleSystemTemplate>* shared_ptr<graphics::ModularParticleSystemTemplate>::operator=(
        const shared_ptr<graphics::ModularParticleSystemTemplate>& modularParticleSystemTemplate) {

        shared_ptr<oldscape::dash3d::Decor> local_28(modularParticleSystemTemplate);
        swap(&local_28, this);
        return this;
    }

    // 0x1007ed640
    shared_ptr<graphics::ModularParticleSystemTemplate>* shared_ptr<graphics::ModularParticleSystemTemplate>::operator=(
        shared_ptr<graphics::ModularParticleSystemTemplate>&& modularParticleSystemTemplate) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(modularParticleSystemTemplate);
        swap(&local_28, this);
        return this;
    }

    // 0x1007ed680
    void shared_ptr<graphics::ModularParticleSystemTemplate>::swap(
        shared_ptr<graphics::ModularParticleSystemTemplate>& modularParticleSystemTemplate) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modularParticleSystemTemplate);
        std::swap<ref_counter_base*>(*this, modularParticleSystemTemplate);
        std::swap<graphics::ModularParticleSystemTemplate*>(*((this + 8)), *((modularParticleSystemTemplate + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(modularParticleSystemTemplate);
    }

    // 0x1007f5c10
    shared_ptr<graphics::ModelParticleSource>* shared_ptr<graphics::ModelParticleSource>::operator=(
        shared_ptr<graphics::ModelParticleSource>&& modelParticleSource) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(modelParticleSource);
        swap(&local_28, this);
        return this;
    }

    // 0x100813890
    uint64_t shared_ptr<graphics::GeometryQuery>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100817570
    uint64_t shared_ptr<graphics::ModelParticleSource>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100817760
    uint64_t shared_ptr<graphics::VFXAttachmentInfo>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10081c6b0
    void shared_ptr<graphics::TextureAtlasReference>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10081c7d0
    uint64_t shared_ptr<graphics::TextureAtlasReference>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100821a90
    shared_ptr<render::TextureCube>*
    shared_ptr<render::TextureCube>::operator=(shared_ptr<render::TextureCube>&& textureCube) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(textureCube);
        swap(&local_28, this);
        return this;
    }

    // 0x10082e170
    void shared_ptr<graphics::AnimationStateProvider>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10084f960
    shared_ptr<graphics::ParticleSystem>*
    shared_ptr<graphics::ParticleSystem>::operator=(shared_ptr<graphics::ParticleSystem>&& particleSystem) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(particleSystem);
        swap(&local_28, this);
        return this;
    }

    // 0x10084f9a0
    void shared_ptr<graphics::ParticleSystem>::swap(shared_ptr<graphics::ParticleSystem>& particleSystem) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(particleSystem);
        std::swap<ref_counter_base*>(*this, particleSystem);
        std::swap<graphics::ParticleSystem*>(*((this + 8)), *((particleSystem + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(particleSystem);
    }

    // 0x10085b530
    uint64_t shared_ptr<graphics::TextureData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10085f2d0
    shared_ptr<graphics::TextureAtlas>*
    shared_ptr<graphics::TextureAtlas>::operator=(shared_ptr<graphics::TextureAtlas>&& textureAtlas) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(textureAtlas);
        swap(&local_28, this);
        return this;
    }

    // 0x10085fdf0
    shared_ptr<graphics::TextureAtlas>*
    shared_ptr<graphics::TextureAtlas>::operator=(const shared_ptr<graphics::TextureAtlas>& textureAtlas) {

        shared_ptr<oldscape::dash3d::Decor> local_28(textureAtlas);
        swap(&local_28, this);
        return this;
    }

    // 0x100861a70
    shared_ptr<render::Texture>&
        shared_ptr<render::Texture>::operator= <render::Texture3D, void>(shared_ptr<render::Texture3D>&& texture3D) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(texture3D);
        swap(&local_28, this);
        return this;
    }

    // 0x1008666e0
    uint64_t shared_ptr<graphics::BillboardBatch>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100866940
    uint64_t shared_ptr<graphics::BillboardBatch>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100866980
    uint64_t shared_ptr<graphics::AnimationStateProvider>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10086aff0
    shared_ptr<graphics::AnimationStateProvider>* shared_ptr<graphics::AnimationStateProvider>::operator=(
        const shared_ptr<graphics::AnimationStateProvider>& animationStateProvider) {

        shared_ptr<oldscape::dash3d::Decor> local_28(animationStateProvider);
        swap(&local_28, this);
        return this;
    }

    // 0x10086b030
    void shared_ptr<graphics::AnimationStateProvider>::swap(
        shared_ptr<graphics::AnimationStateProvider>& animationStateProvider) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationStateProvider);
        std::swap<ref_counter_base*>(*this, animationStateProvider);
        std::swap<graphics::AnimationStateProvider*>(*((this + 8)), *((animationStateProvider + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationStateProvider);
    }

    // 0x1008720c0
    void shared_ptr<graphics::TextureAtlas>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100872140
    void shared_ptr<graphics::TextureAtlas>::swap(shared_ptr<graphics::TextureAtlas>& textureAtlas) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(textureAtlas);
        std::swap<ref_counter_base*>(*this, textureAtlas);
        std::swap<graphics::TextureAtlas*>(*((this + 8)), *((textureAtlas + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(textureAtlas);
    }

    // 0x10087fed0
    shared_ptr<graphics::TextureData>*
    shared_ptr<graphics::TextureData>::operator=(const shared_ptr<graphics::TextureData>& textureData) {

        shared_ptr<oldscape::dash3d::Decor> local_28(textureData);
        swap(&local_28, this);
        return this;
    }

    // 0x10087ffc0
    void shared_ptr<graphics::TextureData>::swap(shared_ptr<graphics::TextureData>& textureData) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(textureData);
        std::swap<ref_counter_base*>(*this, textureData);
        std::swap<graphics::TextureData*>(*((this + 8)), *((textureData + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(textureData);
    }

    // 0x10088f920
    shared_ptr<graphics::SpriteAtlas>*
    shared_ptr<graphics::SpriteAtlas>::operator=(const shared_ptr<graphics::SpriteAtlas>& spriteAtlas) {

        shared_ptr<oldscape::dash3d::Decor> local_28(spriteAtlas);
        swap(&local_28, this);
        return this;
    }

    // 0x10089c010
    shared_ptr<graphics::Shader>* shared_ptr<graphics::Shader>::operator=(shared_ptr<graphics::Shader>&& shader) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(shader);
        swap(&local_28, this);
        return this;
    }

    // 0x1008aa0e0
    void shared_ptr<render::Texture2D>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1008aa130
    void shared_ptr<graphics::PointLightIndicesEffect>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1008aa1a0
    shared_ptr<render::Texture2D>* shared_ptr<render::Texture2D>::operator=(shared_ptr<render::Texture2D>&& texture2D) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(texture2D);
        swap(&local_28, this);
        return this;
    }

    // 0x1008aa360
    uint64_t shared_ptr<graphics::PointLightGridTextureData>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008aa520
    shared_ptr<graphics::PointLightIndicesEffect>* shared_ptr<graphics::PointLightIndicesEffect>::operator=(
        shared_ptr<graphics::PointLightIndicesEffect>&& pointLightIndicesEffect) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(pointLightIndicesEffect);
        swap(&local_28, this);
        return this;
    }

    // 0x1008c8770
    shared_ptr<graphics::SpriteAtlasReference>* shared_ptr<graphics::SpriteAtlasReference>::operator=(
        const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference) {

        shared_ptr<oldscape::dash3d::Decor> local_28(spriteAtlasReference);
        swap(&local_28, this);
        return this;
    }

    // 0x1008ca4c0
    void shared_ptr<graphics::SpriteAtlas>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1008cc680
    uint64_t shared_ptr<graphics::Font>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008cfd90
    shared_ptr<void const>* shared_ptr<void const>::operator=(shared_ptr<void const>&& arg1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        swap(&local_28, (shared_ptr<void const>*)this);
        return this;
    }

    // 0x1008cfe10
    void shared_ptr<void const>::swap(shared_ptr<void const>& arg1) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
        std::swap<ref_counter_base*>(*this, arg1);
        std::swap<void const*>(*((this + 8)), *((arg1 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(arg1);
    }

    // 0x1008d2680
    void shared_ptr<render::Texture2D>::swap(shared_ptr<render::Texture2D>& texture2D) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(texture2D);
        std::swap<ref_counter_base*>(*this, texture2D);
        std::swap<render::Texture2D*>(*((this + 8)), *((texture2D + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(texture2D);
    }

    // 0x1008d8cf0
    uint64_t shared_ptr<render::Texture2D>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008dbb30
    void shared_ptr<graphics::SpriteAtlas>::swap(shared_ptr<graphics::SpriteAtlas>& spriteAtlas) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(spriteAtlas);
        std::swap<ref_counter_base*>(*this, spriteAtlas);
        std::swap<graphics::SpriteAtlas*>(*((this + 8)), *((spriteAtlas + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(spriteAtlas);
    }

    // 0x1008dd9a0
    shared_ptr<graphics::SpriteAtlas>*
    shared_ptr<graphics::SpriteAtlas>::operator=(shared_ptr<graphics::SpriteAtlas>&& spriteAtlas) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(spriteAtlas);
        swap(&local_28, this);
        return this;
    }

    // 0x1008df640
    uint64_t shared_ptr<graphics::FontMetrics>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008dfbb0
    shared_ptr<graphics::SpriteAtlasReference>* shared_ptr<graphics::SpriteAtlasReference>::operator=(
        shared_ptr<graphics::SpriteAtlasReference>&& spriteAtlasReference) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(spriteAtlasReference);
        swap(&local_28, this);
        return this;
    }

    // 0x1008dfc30
    uint64_t shared_ptr<graphics::SpriteAtlasReference>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008dfc70
    uint64_t shared_ptr<graphics::SpriteAtlas>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008dfcb0
    shared_ptr<render::Texture>&
        shared_ptr<render::Texture>::operator= <render::Texture2D>(const shared_ptr<render::Texture2D>& texture2D) {

        shared_ptr<oldscape::dash3d::Decor> local_28(texture2D);
        swap(&local_28, this);
        return this;
    }

    // 0x1008e5f80
    shared_ptr<graphics::Font>* shared_ptr<graphics::Font>::operator=(shared_ptr<graphics::Font>&& font) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(font);
        swap(&local_28, this);
        return this;
    }

    // 0x1008e7d50
    shared_ptr<graphics::FontManager>*
    shared_ptr<graphics::FontManager>::operator=(const shared_ptr<graphics::FontManager>& fontManager) {

        shared_ptr<oldscape::dash3d::Decor> local_28(fontManager);
        swap(&local_28, this);
        return this;
    }

    // 0x1008e7e20
    shared_ptr<graphics::FontHelpers>*
    shared_ptr<graphics::FontHelpers>::operator=(shared_ptr<graphics::FontHelpers>&& fontHelpers) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(fontHelpers);
        swap(&local_28, this);
        return this;
    }

    // 0x1008e7e60
    uint64_t shared_ptr<graphics::FontHelpers>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008e7fa0
    uint64_t shared_ptr<graphics::FontManager>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008e7fe0
    shared_ptr<graphics::Font>* shared_ptr<graphics::Font>::operator=(const shared_ptr<graphics::Font>& font) {

        shared_ptr<oldscape::dash3d::Decor> local_28(font);
        swap(&local_28, this);
        return this;
    }

    // 0x1008e8070
    void shared_ptr<graphics::Font>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1008e80b0
    void shared_ptr<graphics::FontHelpers>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1008e8190
    uint64_t shared_ptr<graphics::FontMetrics>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008e88c0
    shared_ptr<graphics::FontMetrics>*
    shared_ptr<graphics::FontMetrics>::operator=(const shared_ptr<graphics::FontMetrics>& fontMetrics) {

        shared_ptr<oldscape::dash3d::Decor> local_28(fontMetrics);
        swap(&local_28, this);
        return this;
    }

    // 0x1008f2980
    shared_ptr<graphics::Shader>* shared_ptr<graphics::Shader>::operator=(const shared_ptr<graphics::Shader>& shader) {

        shared_ptr<oldscape::dash3d::Decor> local_28(shader);
        swap(&local_28, this);
        return this;
    }

    // 0x1008f29d0
    uint64_t shared_ptr<graphics::Shader>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008f2a50
    uint64_t shared_ptr<graphics::Shader>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008f6b00
    uint64_t shared_ptr<ui::Component>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008f6c40
    uint64_t shared_ptr<graphics::GUIAnimation>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008f7b00
    shared_ptr<graphics::GUIAnimation>*
    shared_ptr<graphics::GUIAnimation>::operator=(const shared_ptr<graphics::GUIAnimation>& guiAnimation) {

        shared_ptr<oldscape::dash3d::Decor> local_28(guiAnimation);
        swap(&local_28, this);
        return this;
    }

    // 0x1008f7b40
    shared_ptr<ui::Component>* shared_ptr<ui::Component>::operator=(const shared_ptr<ui::Component>& component) {

        shared_ptr<oldscape::dash3d::Decor> local_28(component);
        swap(&local_28, this);
        return this;
    }

    // 0x1008f88c0
    uint64_t shared_ptr<graphics::Font>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008f8900
    uint64_t shared_ptr<DebugOverlaySection>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008f9cf0
    shared_ptr<tweak::Container>*
    shared_ptr<tweak::Container>::operator=(const shared_ptr<tweak::Container>& container) {

        shared_ptr<oldscape::dash3d::Decor> local_28(container);
        swap(&local_28, this);
        return this;
    }

    // 0x1008f9d30
    uint64_t shared_ptr<tweak::Container>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008f9e10
    uint64_t shared_ptr<tweak::Container>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1008ff410
    shared_ptr<graphics::FontMetrics>*
    shared_ptr<graphics::FontMetrics>::operator=(shared_ptr<graphics::FontMetrics>&& fontMetrics) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(fontMetrics);
        swap(&local_28, this);
        return this;
    }

    // 0x1008ff460
    void shared_ptr<graphics::FontMetrics>::swap(shared_ptr<graphics::FontMetrics>& fontMetrics) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(fontMetrics);
        std::swap<ref_counter_base*>(*this, fontMetrics);
        std::swap<graphics::FontMetrics*>(*((this + 8)), *((fontMetrics + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(fontMetrics);
    }

    // 0x100901130
    void shared_ptr<graphics::Shader>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1009013a0
    void shared_ptr<graphics::Shader>::swap(shared_ptr<graphics::Shader>& shader) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(shader);
        std::swap<ref_counter_base*>(*this, shader);
        std::swap<graphics::Shader*>(*((this + 8)), *((shader + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(shader);
    }

    // 0x1009058e0
    void
    shared_ptr<graphics::SpriteAtlasReference>::swap(shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(spriteAtlasReference);
        std::swap<ref_counter_base*>(*this, spriteAtlasReference);
        std::swap<graphics::SpriteAtlasReference*>(*((this + 8)), *((spriteAtlasReference + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(spriteAtlasReference);
    }

    // 0x100905960
    void shared_ptr<render::Texture>::swap(shared_ptr<render::Texture>& texture) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(texture);
        std::swap<ref_counter_base*>(*this, texture);
        std::swap<render::Texture*>(*((this + 8)), *((texture + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(texture);
    }

    // 0x100908490
    void shared_ptr<graphics::Font>::swap(shared_ptr<graphics::Font>& font) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(font);
        std::swap<ref_counter_base*>(*this, font);
        std::swap<graphics::Font*>(*((this + 8)), *((font + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(font);
    }

    // 0x10090b680
    void shared_ptr<graphics::FontManager>::swap(shared_ptr<graphics::FontManager>& fontManager) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(fontManager);
        std::swap<ref_counter_base*>(*this, fontManager);
        std::swap<graphics::FontManager*>(*((this + 8)), *((fontManager + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(fontManager);
    }

    // 0x10090b7d0
    void shared_ptr<graphics::FontHelpers>::swap(shared_ptr<graphics::FontHelpers>& fontHelpers) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(fontHelpers);
        std::swap<ref_counter_base*>(*this, fontHelpers);
        std::swap<graphics::FontHelpers*>(*((this + 8)), *((fontHelpers + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(fontHelpers);
    }

    // 0x10090f7b0
    shared_ptr<graphics::GUIAnimation>*
    shared_ptr<graphics::GUIAnimation>::operator=(shared_ptr<graphics::GUIAnimation>&& guiAnimation) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(guiAnimation);
        swap(&local_28, this);
        return this;
    }

    // 0x10090f7f0
    void shared_ptr<graphics::GUIAnimation>::swap(shared_ptr<graphics::GUIAnimation>& guiAnimation) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(guiAnimation);
        std::swap<ref_counter_base*>(*this, guiAnimation);
        std::swap<graphics::GUIAnimation*>(*((this + 8)), *((guiAnimation + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(guiAnimation);
    }

    // 0x10090fea0
    void shared_ptr<ui::Component>::swap(shared_ptr<ui::Component>& component) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(component);
        std::swap<ref_counter_base*>(*this, component);
        std::swap<ui::Component*>(*((this + 8)), *((component + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(component);
    }

    // 0x100911290
    shared_ptr<ui::Component>* shared_ptr<ui::Component>::operator=(shared_ptr<ui::Component>&& component) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(component);
        swap(&local_28, this);
        return this;
    }

    // 0x100912230
    void shared_ptr<tweak::Container>::swap(shared_ptr<tweak::Container>& container) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(container);
        std::swap<ref_counter_base*>(*this, container);
        std::swap<tweak::Container*>(*((this + 8)), *((container + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(container);
    }

    // 0x10092c600
    uint64_t shared_ptr<tweak::Control>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10092dab0
    shared_ptr<render::TextureCube>*
    shared_ptr<render::TextureCube>::operator=(const shared_ptr<render::TextureCube>& textureCube) {

        shared_ptr<oldscape::dash3d::Decor> local_28(textureCube);
        swap(&local_28, this);
        return this;
    }

    // 0x10092daf0
    void shared_ptr<render::TextureCube>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x10092f5a0
    shared_ptr<render::BufferedRenderTargets>* shared_ptr<render::BufferedRenderTargets>::operator=(
        const shared_ptr<render::BufferedRenderTargets>& bufferedRenderTargets) {

        shared_ptr<oldscape::dash3d::Decor> local_28(bufferedRenderTargets);
        swap(&local_28, this);
        return this;
    }

    // 0x10092f650
    uint64_t shared_ptr<render::BufferedRenderTargets>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100930cb0
    shared_ptr<render::BufferedRenderTargets>* shared_ptr<render::BufferedRenderTargets>::operator=(
        shared_ptr<render::BufferedRenderTargets>&& bufferedRenderTargets) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(bufferedRenderTargets);
        swap(&local_28, this);
        return this;
    }

    // 0x100935910
    uint64_t shared_ptr<render::ShaderProgram>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100937090
    shared_ptr<graphics::PointLightIndicesEffect>* shared_ptr<graphics::PointLightIndicesEffect>::operator=(
        const shared_ptr<graphics::PointLightIndicesEffect>& pointLightIndicesEffect) {

        shared_ptr<oldscape::dash3d::Decor> local_28(pointLightIndicesEffect);
        swap(&local_28, this);
        return this;
    }

    // 0x100937940
    void shared_ptr<render::Texture>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100938a90
    void shared_ptr<render::BufferedRenderTargets>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100938ae0
    void
    shared_ptr<render::BufferedRenderTargets>::swap(shared_ptr<render::BufferedRenderTargets>& bufferedRenderTargets) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(bufferedRenderTargets);
        std::swap<ref_counter_base*>(*this, bufferedRenderTargets);
        std::swap<render::BufferedRenderTargets*>(*((this + 8)), *((bufferedRenderTargets + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(bufferedRenderTargets);
    }

    // 0x10093e920
    void shared_ptr<render::TextureCube>::swap(shared_ptr<render::TextureCube>& textureCube) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(textureCube);
        std::swap<ref_counter_base*>(*this, textureCube);
        std::swap<render::TextureCube*>(*((this + 8)), *((textureCube + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(textureCube);
    }

    // 0x100941440
    uint64_t shared_ptr<tweak::Slider>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10094ca70
    void shared_ptr<graphics::PointLightIndicesEffect>::swap(
        shared_ptr<graphics::PointLightIndicesEffect>& pointLightIndicesEffect) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pointLightIndicesEffect);
        std::swap<ref_counter_base*>(*this, pointLightIndicesEffect);
        std::swap<graphics::PointLightIndicesEffect*>(*((this + 8)), *((pointLightIndicesEffect + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pointLightIndicesEffect);
    }

    // 0x10094fe70
    uint64_t shared_ptr<graphics::Animation>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009502b0
    uint64_t shared_ptr<graphics::AnimationFrameRT5>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100950b80
    shared_ptr<graphics::AnimationFrameRT7>* shared_ptr<graphics::AnimationFrameRT7>::operator=(
        const shared_ptr<graphics::AnimationFrameRT7>& animationFrameRT7) {

        shared_ptr<oldscape::dash3d::Decor> local_28(animationFrameRT7);
        swap(&local_28, this);
        return this;
    }

    // 0x100950bd0
    uint64_t shared_ptr<graphics::AnimationFrameRT7>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009575b0
    uint64_t shared_ptr<graphics::AnimationResourceManager>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009793b0
    shared_ptr<graphics::AnimBase>*
    shared_ptr<graphics::AnimBase>::operator=(const shared_ptr<graphics::AnimBase>& animBase) {

        shared_ptr<oldscape::dash3d::Decor> local_28(animBase);
        swap(&local_28, this);
        return this;
    }

    // 0x100979580
    shared_ptr<graphics::AnimationFrameRT5>*
    shared_ptr<graphics::AnimationFrameRT5>::operator=(shared_ptr<graphics::AnimationFrameRT5>&& animationFrameRT5) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(animationFrameRT5);
        swap(&local_28, this);
        return this;
    }

    // 0x10097ab10
    uint64_t shared_ptr<graphics::AnimBase>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10097bf20
    shared_ptr<Array<HardCodedSprites::SpriteReference>>*
    shared_ptr<Array<HardCodedSprites::SpriteReference>>::operator=(
        shared_ptr<Array<HardCodedSprites::SpriteReference>>&& spriteReferences) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(spriteReferences);
        swap(&local_28, (shared_ptr<Array<HardCodedSprites::SpriteReference> _>*)this);
        return this;
    }

    // 0x10097c000
    void shared_ptr<Array<HardCodedSprites::SpriteReference>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, (shared_ptr<Array<HardCodedSprites::SpriteReference> _>*)this);
    }

    // 0x10097c1a0
    shared_ptr<Array<HardCodedSprites::SpriteReference>>*
    shared_ptr<Array<HardCodedSprites::SpriteReference>>::operator=(
        const shared_ptr<Array<HardCodedSprites::SpriteReference>>& spriteReferences) {

        shared_ptr<oldscape::dash3d::Decor> local_28(spriteReferences);
        swap(&local_28, (shared_ptr<Array<HardCodedSprites::SpriteReference> _>*)this);
        return this;
    }

    // 0x100980e90
    uint64_t shared_ptr<postprocess::ColourGradingBloomEffect>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100981260
    shared_ptr<postprocess::ColourGradingBloomEffect>* shared_ptr<postprocess::ColourGradingBloomEffect>::operator=(
        shared_ptr<postprocess::ColourGradingBloomEffect>&& colourGradingBloomEffect) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(colourGradingBloomEffect);
        swap(&local_28, this);
        return this;
    }

    // 0x100981330
    shared_ptr<postprocess::FXAAEffect>*
    shared_ptr<postprocess::FXAAEffect>::operator=(shared_ptr<postprocess::FXAAEffect>&& fxaaEffect) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(fxaaEffect);
        swap(&local_28, this);
        return this;
    }

    // 0x100981370
    uint64_t shared_ptr<postprocess::FXAAEffect>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100981440
    shared_ptr<postprocess::OutlineAndShadowEffect>* shared_ptr<postprocess::OutlineAndShadowEffect>::operator=(
        shared_ptr<postprocess::OutlineAndShadowEffect>&& outlineAndShadowEffect) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(outlineAndShadowEffect);
        swap(&local_28, this);
        return this;
    }

    // 0x100981480
    uint64_t shared_ptr<postprocess::OutlineAndShadowEffect>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100981550
    shared_ptr<postprocess::EquirectangularEffect>* shared_ptr<postprocess::EquirectangularEffect>::operator=(
        shared_ptr<postprocess::EquirectangularEffect>&& equirectangularEffect) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(equirectangularEffect);
        swap(&local_28, this);
        return this;
    }

    // 0x100981590
    uint64_t shared_ptr<postprocess::EquirectangularEffect>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100981660
    shared_ptr<postprocess::DepthOfFieldEffect>* shared_ptr<postprocess::DepthOfFieldEffect>::operator=(
        shared_ptr<postprocess::DepthOfFieldEffect>&& depthOfFieldEffect) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(depthOfFieldEffect);
        swap(&local_28, this);
        return this;
    }

    // 0x1009816a0
    uint64_t shared_ptr<postprocess::DepthOfFieldEffect>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009842d0
    shared_ptr<graphics::AnimBase>*
    shared_ptr<graphics::AnimBase>::operator=(shared_ptr<graphics::AnimBase>&& animBase) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(animBase);
        swap(&local_28, this);
        return this;
    }

    // 0x100986800
    shared_ptr<graphics::AnimKeyFrameSet>*
    shared_ptr<graphics::AnimKeyFrameSet>::operator=(const shared_ptr<graphics::AnimKeyFrameSet>& animKeyFrameSet) {

        shared_ptr<oldscape::dash3d::Decor> local_28(animKeyFrameSet);
        swap(&local_28, this);
        return this;
    }

    // 0x100986840
    uint64_t shared_ptr<graphics::AnimKeyFrameSet>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009873e0
    shared_ptr<graphics::AnimationFrameRT5>* shared_ptr<graphics::AnimationFrameRT5>::operator=(
        const shared_ptr<graphics::AnimationFrameRT5>& animationFrameRT5) {

        shared_ptr<oldscape::dash3d::Decor> local_28(animationFrameRT5);
        swap(&local_28, this);
        return this;
    }

    // 0x100987720
    shared_ptr<graphics::AnimationFrameRT7>*
    shared_ptr<graphics::AnimationFrameRT7>::operator=(shared_ptr<graphics::AnimationFrameRT7>&& animationFrameRT7) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(animationFrameRT7);
        swap(&local_28, this);
        return this;
    }

    // 0x100987760
    uint64_t shared_ptr<graphics::AnimationFrameRT7>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009877d0
    shared_ptr<graphics::AnimKeyFrameSet>*
    shared_ptr<graphics::AnimKeyFrameSet>::operator=(shared_ptr<graphics::AnimKeyFrameSet>&& animKeyFrameSet) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(animKeyFrameSet);
        swap(&local_28, this);
        return this;
    }

    // 0x100987d80
    uint64_t shared_ptr<graphics::AnimationFrameRT5>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100987e60
    uint64_t shared_ptr<graphics::AnimBase>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009893a0
    uint64_t shared_ptr<graphics::WalkMergeDataProvider>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100989ab0
    uint64_t shared_ptr<graphics::Animation>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x10098a7f0
    shared_ptr<graphics::WalkMergeDataProvider>* shared_ptr<graphics::WalkMergeDataProvider>::operator=(
        shared_ptr<graphics::WalkMergeDataProvider>&& walkMergeDataProvider) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(walkMergeDataProvider);
        swap(&local_28, this);
        return this;
    }

    // 0x10098b690
    shared_ptr<graphics::Animation>*
    shared_ptr<graphics::Animation>::operator=(const shared_ptr<graphics::Animation>& animation) {

        shared_ptr<oldscape::dash3d::Decor> local_28(animation);
        swap(&local_28, this);
        return this;
    }

    // 0x10098c760
    shared_ptr<graphics::WalkMergeDataProvider>* shared_ptr<graphics::WalkMergeDataProvider>::operator=(
        const shared_ptr<graphics::WalkMergeDataProvider>& walkMergeDataProvider) {

        shared_ptr<oldscape::dash3d::Decor> local_28(walkMergeDataProvider);
        swap(&local_28, this);
        return this;
    }

    // 0x1009969e0
    void shared_ptr<graphics::AnimBase>::swap(shared_ptr<graphics::AnimBase>& animBase) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animBase);
        std::swap<ref_counter_base*>(*this, animBase);
        std::swap<graphics::AnimBase*>(*((this + 8)), *((animBase + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animBase);
    }

    // 0x100997560
    void shared_ptr<graphics::AnimationFrameRT5>::swap(shared_ptr<graphics::AnimationFrameRT5>& animationFrameRT5) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationFrameRT5);
        std::swap<ref_counter_base*>(*this, animationFrameRT5);
        std::swap<graphics::AnimationFrameRT5*>(*((this + 8)), *((animationFrameRT5 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationFrameRT5);
    }

    // 0x10099a050
    void shared_ptr<graphics::Animation>::swap(shared_ptr<graphics::Animation>& animation) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animation);
        std::swap<ref_counter_base*>(*this, animation);
        std::swap<graphics::Animation*>(*((this + 8)), *((animation + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animation);
    }

    // 0x10099a0d0
    void shared_ptr<graphics::WalkMergeDataProvider>::swap(
        shared_ptr<graphics::WalkMergeDataProvider>& walkMergeDataProvider) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(walkMergeDataProvider);
        std::swap<ref_counter_base*>(*this, walkMergeDataProvider);
        std::swap<graphics::WalkMergeDataProvider*>(*((this + 8)), *((walkMergeDataProvider + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(walkMergeDataProvider);
    }

    // 0x10099a750
    void shared_ptr<Array<HardCodedSprites::SpriteReference>>::swap(
        shared_ptr<Array<HardCodedSprites::SpriteReference>>& spriteReferences) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(spriteReferences);
        std::swap<ref_counter_base*>(*this, spriteReferences);
        std::swap<Array<HardCodedSprites::SpriteReference>*>(*((this + 8)), *((spriteReferences + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(spriteReferences);
    }

    // 0x10099cb20
    void shared_ptr<postprocess::ColourGradingBloomEffect>::swap(
        shared_ptr<postprocess::ColourGradingBloomEffect>& colourGradingBloomEffect) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(colourGradingBloomEffect);
        std::swap<ref_counter_base*>(*this, colourGradingBloomEffect);
        std::swap<postprocess::ColourGradingBloomEffect*>(*((this + 8)), *((colourGradingBloomEffect + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(colourGradingBloomEffect);
    }

    // 0x10099cc90
    void shared_ptr<postprocess::FXAAEffect>::swap(shared_ptr<postprocess::FXAAEffect>& fxaaEffect) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(fxaaEffect);
        std::swap<ref_counter_base*>(*this, fxaaEffect);
        std::swap<postprocess::FXAAEffect*>(*((this + 8)), *((fxaaEffect + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(fxaaEffect);
    }

    // 0x10099cda0
    void shared_ptr<postprocess::OutlineAndShadowEffect>::swap(
        shared_ptr<postprocess::OutlineAndShadowEffect>& outlineAndShadowEffect) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(outlineAndShadowEffect);
        std::swap<ref_counter_base*>(*this, outlineAndShadowEffect);
        std::swap<postprocess::OutlineAndShadowEffect*>(*((this + 8)), *((outlineAndShadowEffect + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(outlineAndShadowEffect);
    }

    // 0x10099cf10
    void shared_ptr<postprocess::EquirectangularEffect>::swap(
        shared_ptr<postprocess::EquirectangularEffect>& equirectangularEffect) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(equirectangularEffect);
        std::swap<ref_counter_base*>(*this, equirectangularEffect);
        std::swap<postprocess::EquirectangularEffect*>(*((this + 8)), *((equirectangularEffect + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(equirectangularEffect);
    }

    // 0x10099d090
    void
    shared_ptr<postprocess::DepthOfFieldEffect>::swap(shared_ptr<postprocess::DepthOfFieldEffect>& depthOfFieldEffect) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(depthOfFieldEffect);
        std::swap<ref_counter_base*>(*this, depthOfFieldEffect);
        std::swap<postprocess::DepthOfFieldEffect*>(*((this + 8)), *((depthOfFieldEffect + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(depthOfFieldEffect);
    }

    // 0x10099fc50
    void shared_ptr<graphics::AnimKeyFrameSet>::swap(shared_ptr<graphics::AnimKeyFrameSet>& animKeyFrameSet) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animKeyFrameSet);
        std::swap<ref_counter_base*>(*this, animKeyFrameSet);
        std::swap<graphics::AnimKeyFrameSet*>(*((this + 8)), *((animKeyFrameSet + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animKeyFrameSet);
    }

    // 0x1009a2db0
    void shared_ptr<graphics::AnimationFrameRT7>::swap(shared_ptr<graphics::AnimationFrameRT7>& animationFrameRT7) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationFrameRT7);
        std::swap<ref_counter_base*>(*this, animationFrameRT7);
        std::swap<graphics::AnimationFrameRT7*>(*((this + 8)), *((animationFrameRT7 + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(animationFrameRT7);
    }

    // 0x1009aaf50
    uint64_t shared_ptr<postprocess::PostProcessEffect>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009af300
    uint64_t shared_ptr<render::Texture3D>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009af340
    uint64_t shared_ptr<render::Texture2D>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009b0330
    uint64_t shared_ptr<render::RenderTargets>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009bc310
    shared_ptr<postprocess::PostProcessEffect>* shared_ptr<postprocess::PostProcessEffect>::operator=(
        shared_ptr<postprocess::PostProcessEffect>&& postProcessEffect) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(postProcessEffect);
        swap(&local_28, this);
        return this;
    }

    // 0x1009bc350
    void
    shared_ptr<postprocess::PostProcessEffect>::swap(shared_ptr<postprocess::PostProcessEffect>& postProcessEffect) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(postProcessEffect);
        std::swap<ref_counter_base*>(*this, postProcessEffect);
        std::swap<postprocess::PostProcessEffect*>(*((this + 8)), *((postProcessEffect + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(postProcessEffect);
    }

    // 0x1009e22a0
    uint64_t shared_ptr<ClientStream>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009e3c60
    void shared_ptr<Js5WorkerThread>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1009e6750
    uint64_t shared_ptr<PacketT<Array<unsigned char>>>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009e6ae0
    uint64_t shared_ptr<Js5WorkerRequestMessage>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009e6cb0
    shared_ptr<Js5WorkerRequestMessage>*
    shared_ptr<Js5WorkerRequestMessage>::operator=(shared_ptr<Js5WorkerRequestMessage>&& js5WorkerRequestMessage) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(js5WorkerRequestMessage);
        swap(&local_28, this);
        return this;
    }

    // 0x1009e6de0
    shared_ptr<Js5WorkerRequestMessage>*
    shared_ptr<Js5WorkerRequestMessage>::operator=(const shared_ptr<Js5WorkerRequestMessage>& js5WorkerRequestMessage) {

        shared_ptr<oldscape::dash3d::Decor> local_28(js5WorkerRequestMessage);
        swap(&local_28, this);
        return this;
    }

    // 0x1009ea2d0
    shared_ptr<PacketT<Array<unsigned char>>>*
    shared_ptr<PacketT<Array<unsigned char>>>::operator=(const shared_ptr<PacketT<Array<unsigned char>>>& arg1) {

        shared_ptr<oldscape::dash3d::Decor> local_28(arg1);
        swap(&local_28, (shared_ptr<PacketT<Array<unsigned char> _> _>*)this);
        return this;
    }

    // 0x1009ef720
    uint64_t shared_ptr<Js5MemoryCacheWrapper>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x1009f2610
    shared_ptr<ClientStream>* shared_ptr<ClientStream>::operator=(const shared_ptr<ClientStream>& clientStream) {

        shared_ptr<oldscape::dash3d::Decor> local_28(clientStream);
        swap(&local_28, this);
        return this;
    }

    // 0x1009f2c00
    void shared_ptr<ClientStream>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x1009f6450
    shared_ptr<ClientStream>* shared_ptr<ClientStream>::operator=(shared_ptr<ClientStream>&& clientStream) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(clientStream);
        swap(&local_28, this);
        return this;
    }

    // 0x1009f99a0
    void shared_ptr<PacketT<Array<unsigned char>>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, (shared_ptr<PacketT<Array<unsigned char> _> _>*)this);
    }

    // 0x100a012b0
    void shared_ptr<Js5WorkerRequestMessage>::swap(shared_ptr<Js5WorkerRequestMessage>& js5WorkerRequestMessage) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(js5WorkerRequestMessage);
        std::swap<ref_counter_base*>(*this, js5WorkerRequestMessage);
        std::swap<Js5WorkerRequestMessage*>(*((this + 8)), *((js5WorkerRequestMessage + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(js5WorkerRequestMessage);
    }

    // 0x100a082b0
    void shared_ptr<ClientStream>::swap(shared_ptr<ClientStream>& clientStream) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientStream);
        std::swap<ref_counter_base*>(*this, clientStream);
        std::swap<ClientStream*>(*((this + 8)), *((clientStream + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(clientStream);
    }

    // 0x100a3b590
    shared_ptr<tweak::Container>* shared_ptr<tweak::Container>::operator=(shared_ptr<tweak::Container>&& container) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(container);
        swap(&local_28, this);
        return this;
    }

    // 0x100a3b670
    void shared_ptr<tweak::Container>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100a3bbd0
    uint64_t shared_ptr<tweak::Button>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100a3bda0
    uint64_t shared_ptr<tweak::CheckBox>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100a3c080
    uint64_t shared_ptr<tweak::EditField>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100a3c2b0
    uint64_t shared_ptr<tweak::Enum>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100a3f9d0
    uint64_t shared_ptr<tweak::Tweaky>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100a40950
    shared_ptr<tweak::GradientSlider>*
    shared_ptr<tweak::GradientSlider>::operator=(shared_ptr<tweak::GradientSlider>&& gradientSlider) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(gradientSlider);
        swap(&local_28, this);
        return this;
    }

    // 0x100a410f0
    uint64_t shared_ptr<tweak::GradientSlider>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100a41860
    shared_ptr<tweak::Swatch>* shared_ptr<tweak::Swatch>::operator=(shared_ptr<tweak::Swatch>&& swatch) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(swatch);
        swap(&local_28, this);
        return this;
    }

    // 0x100a418a0
    uint64_t shared_ptr<tweak::Swatch>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100a41e00
    shared_ptr<tweak::Button>* shared_ptr<tweak::Button>::operator=(shared_ptr<tweak::Button>&& button) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(button);
        swap(&local_28, this);
        return this;
    }

    // 0x100a42c40
    shared_ptr<tweak::Control>&
        shared_ptr<tweak::Control>::operator= <tweak::Button>(const shared_ptr<tweak::Button>& button) {

        shared_ptr<oldscape::dash3d::Decor> local_28(button);
        swap(&local_28, this);
        return this;
    }

    // 0x100a42c90
    shared_ptr<tweak::Control>* shared_ptr<tweak::Control>::operator=(const shared_ptr<tweak::Control>& control) {

        shared_ptr<oldscape::dash3d::Decor> local_28(control);
        swap(&local_28, this);
        return this;
    }

    // 0x100a42ce0
    shared_ptr<tweak::Control>* shared_ptr<tweak::Control>::operator=(shared_ptr<tweak::Control>&& control) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(control);
        swap(&local_28, this);
        return this;
    }

    // 0x100a43790
    uint64_t shared_ptr<tweak::ColourPicker>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100a448c0
    shared_ptr<tweak::Settings>* shared_ptr<tweak::Settings>::operator=(shared_ptr<tweak::Settings>&& settings) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(settings);
        swap(&local_28, this);
        return this;
    }

    // 0x100a44900
    uint64_t shared_ptr<tweak::Settings>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100a4b630
    uint64_t shared_ptr<tweak::RadioGroup>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100a4bb40
    uint64_t shared_ptr<tweak::RadioButton>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100a4c2e0
    shared_ptr<tweak::CheckBox>* shared_ptr<tweak::CheckBox>::operator=(shared_ptr<tweak::CheckBox>&& checkBox) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(checkBox);
        swap(&local_28, this);
        return this;
    }

    // 0x100a508c0
    void shared_ptr<tweak::Tweaky>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100a58230
    void shared_ptr<tweak::GradientSlider>::swap(shared_ptr<tweak::GradientSlider>& gradientSlider) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(gradientSlider);
        std::swap<ref_counter_base*>(*this, gradientSlider);
        std::swap<tweak::GradientSlider*>(*((this + 8)), *((gradientSlider + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(gradientSlider);
    }

    // 0x100a582b0
    void shared_ptr<tweak::Swatch>::swap(shared_ptr<tweak::Swatch>& swatch) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(swatch);
        std::swap<ref_counter_base*>(*this, swatch);
        std::swap<tweak::Swatch*>(*((this + 8)), *((swatch + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(swatch);
    }

    // 0x100a5a1c0
    void shared_ptr<tweak::Button>::swap(shared_ptr<tweak::Button>& button) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(button);
        std::swap<ref_counter_base*>(*this, button);
        std::swap<tweak::Button*>(*((this + 8)), *((button + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(button);
    }

    // 0x100a5ac50
    void shared_ptr<tweak::Control>::swap(shared_ptr<tweak::Control>& control) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(control);
        std::swap<ref_counter_base*>(*this, control);
        std::swap<tweak::Control*>(*((this + 8)), *((control + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(control);
    }

    // 0x100a5e700
    void shared_ptr<tweak::Settings>::swap(shared_ptr<tweak::Settings>& settings) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(settings);
        std::swap<ref_counter_base*>(*this, settings);
        std::swap<tweak::Settings*>(*((this + 8)), *((settings + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(settings);
    }

    // 0x100a61df0
    void shared_ptr<tweak::CheckBox>::swap(shared_ptr<tweak::CheckBox>& checkBox) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(checkBox);
        std::swap<ref_counter_base*>(*this, checkBox);
        std::swap<tweak::CheckBox*>(*((this + 8)), *((checkBox + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(checkBox);
    }

    // 0x100a688c0
    void shared_ptr<tweak::Tweaky>::swap(shared_ptr<tweak::Tweaky>& tweaky) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(tweaky);
        std::swap<ref_counter_base*>(*this, tweaky);
        std::swap<tweak::Tweaky*>(*((this + 8)), *((tweaky + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(tweaky);
    }

    // 0x100a68920
    shared_ptr<tweak::Window>::~shared_ptr() {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        DecRef(this);
    }

    // 0x100a68950
    void shared_ptr<tweak::Window>::DecRef() {
        if (*(ref_counter_base**)this != nullptr) {
            (*(ref_counter_base**)this)->DecRef();
        }
    }

    // 0x100afc980
    uint64_t shared_ptr<std::thread>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100afc9d0
    void shared_ptr<std::thread>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100afd510
    uint64_t shared_ptr<Task>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100afdab0
    shared_ptr<Task>* shared_ptr<Task>::operator=(const shared_ptr<Task>& task) {

        shared_ptr<oldscape::dash3d::Decor> local_28(task);
        swap(&local_28, this);
        return this;
    }

    // 0x100afe7c0
    void shared_ptr<std::thread>::swap(shared_ptr<std::thread>& thread) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(thread);
        std::swap<ref_counter_base*>(*this, thread);
        std::swap<std::thread*>(*((this + 8)), *((thread + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(thread);
    }

    // 0x100b01d90
    shared_ptr<Task>* shared_ptr<Task>::operator=(shared_ptr<Task>&& task) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(task);
        swap(&local_28, this);
        return this;
    }

    // 0x100b01dd0
    void shared_ptr<Task>::swap(shared_ptr<Task>& task) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(task);
        std::swap<ref_counter_base*>(*this, task);
        std::swap<Task*>(*((this + 8)), *((task + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(task);
    }

    // 0x100b02080
    shared_ptr<std::thread>* shared_ptr<std::thread>::operator=(shared_ptr<std::thread>&& thread) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(thread);
        swap(&local_28, this);
        return this;
    }

    // 0x100b0b950
    uint64_t shared_ptr<network::Ping>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100b0e1c0
    shared_ptr<network::HostResolution>*
    shared_ptr<network::HostResolution>::operator=(shared_ptr<network::HostResolution>&& hostResolution) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(hostResolution);
        swap(&local_28, this);
        return this;
    }

    // 0x100b0e630
    void shared_ptr<network::HostResolution>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100b0fc60
    shared_ptr<network::Ping>* shared_ptr<network::Ping>::operator=(shared_ptr<network::Ping>&& ping) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(ping);
        swap(&local_28, this);
        return this;
    }

    // 0x100b0ffd0
    void shared_ptr<network::Ping>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100b130e0
    void shared_ptr<network::HostResolution>::swap(shared_ptr<network::HostResolution>& hostResolution) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(hostResolution);
        std::swap<ref_counter_base*>(*this, hostResolution);
        std::swap<network::HostResolution*>(*((this + 8)), *((hostResolution + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(hostResolution);
    }

    // 0x100b15850
    void shared_ptr<network::Ping>::swap(shared_ptr<network::Ping>& ping) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(ping);
        std::swap<ref_counter_base*>(*this, ping);
        std::swap<network::Ping*>(*((this + 8)), *((ping + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(ping);
    }

    // 0x100b17420
    shared_ptr<FileSystem>* shared_ptr<FileSystem>::operator=(shared_ptr<FileSystem>&& fileSystem) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(fileSystem);
        swap(&local_28, this);
        return this;
    }

    // 0x100b17690
    void shared_ptr<FileSystem>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100b18f30
    void shared_ptr<FileSystem>::swap(shared_ptr<FileSystem>& fileSystem) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(fileSystem);
        std::swap<ref_counter_base*>(*this, fileSystem);
        std::swap<FileSystem*>(*((this + 8)), *((fileSystem + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(fileSystem);
    }

    // 0x100b1cc40
    uint64_t shared_ptr<FileSystem>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100b8b180
    shared_ptr<hal::audio::AudioRenderer>& shared_ptr<hal::audio::AudioRenderer>::operator=
        <hal::audio::osx::OSXAudioRenderer, void>(shared_ptr<hal::audio::osx::OSXAudioRenderer>&& osxAudioRenderer) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(osxAudioRenderer);
        swap(&local_28, this);
        return this;
    }

    // 0x100b8bc50
    uint64_t shared_ptr<hal::audio::AudioBuss>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100b8d460
    uint64_t shared_ptr<hal::audio::AudioBuffer>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100b8d850
    shared_ptr<hal::audio::AudioBuss>*
    shared_ptr<hal::audio::AudioBuss>::operator=(const shared_ptr<hal::audio::AudioBuss>& audioBuss) {

        shared_ptr<oldscape::dash3d::Decor> local_28(audioBuss);
        swap(&local_28, this);
        return this;
    }

    // 0x100b8db80
    uint64_t shared_ptr<hal::audio::SampleReadable>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100b8ead0
    uint64_t shared_ptr<MixerWorker>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100b8eb90
    void shared_ptr<MixerWorker>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100b8ffe0
    uint64_t shared_ptr<hal::audio::AudioBufferHandler>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100b90040
    void shared_ptr<hal::audio::AudioBuss>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100b901f0
    shared_ptr<hal::audio::AudioBuffer>*
    shared_ptr<hal::audio::AudioBuffer>::operator=(shared_ptr<hal::audio::AudioBuffer>&& audioBuffer) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(audioBuffer);
        swap(&local_28, this);
        return this;
    }

    // 0x100b904b0
    void shared_ptr<hal::audio::AudioBufferHandler>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100b90500
    void shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap((shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>*)&local_28,
             (shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, _1ul, true> _>*)this);
    }

    // 0x100b90590
    uint64_t shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100b90a30
    shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>*
    shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::operator=(
        const shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>& fixed_stack) {

        shared_ptr<oldscape::dash3d::Decor> local_28(fixed_stack);
        swap((shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>*)&local_28,
             (shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, _1ul, true> _>*)this);
        return this;
    }

    // 0x100b90b30
    shared_ptr<hal::audio::AudioBufferHandler>* shared_ptr<hal::audio::AudioBufferHandler>::operator=(
        shared_ptr<hal::audio::AudioBufferHandler>&& audioBufferHandler) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(audioBufferHandler);
        swap(&local_28, this);
        return this;
    }

    // 0x100b91100
    uint64_t shared_ptr<VorbisWorker>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100b91140
    void shared_ptr<VorbisWorker>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100b973f0
    uint64_t shared_ptr<hal::audio::SampleReadable>::operator*() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                304, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100b9fec0
    void shared_ptr<hal::audio::AudioBuss>::swap(shared_ptr<hal::audio::AudioBuss>& audioBuss) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(audioBuss);
        std::swap<ref_counter_base*>(*this, audioBuss);
        std::swap<hal::audio::AudioBuss*>(*((this + 8)), *((audioBuss + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(audioBuss);
    }

    // 0x100ba0090
    void shared_ptr<hal::audio::AudioRenderer>::swap(shared_ptr<hal::audio::AudioRenderer>& audioRenderer) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(audioRenderer);
        std::swap<ref_counter_base*>(*this, audioRenderer);
        std::swap<hal::audio::AudioRenderer*>(*((this + 8)), *((audioRenderer + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(audioRenderer);
    }

    // 0x100ba05f0
    void shared_ptr<MixerWorker>::swap(shared_ptr<MixerWorker>& mixerWorker) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mixerWorker);
        std::swap<ref_counter_base*>(*this, mixerWorker);
        std::swap<MixerWorker*>(*((this + 8)), *((mixerWorker + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(mixerWorker);
    }

    // 0x100ba1530
    void shared_ptr<hal::audio::AudioBuffer>::swap(shared_ptr<hal::audio::AudioBuffer>& audioBuffer) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(audioBuffer);
        std::swap<ref_counter_base*>(*this, audioBuffer);
        std::swap<hal::audio::AudioBuffer*>(*((this + 8)), *((audioBuffer + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(audioBuffer);
    }

    // 0x100ba16a0
    void
    shared_ptr<hal::audio::AudioBufferHandler>::swap(shared_ptr<hal::audio::AudioBufferHandler>& audioBufferHandler) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(audioBufferHandler);
        std::swap<ref_counter_base*>(*this, audioBufferHandler);
        std::swap<hal::audio::AudioBufferHandler*>(*((this + 8)), *((audioBufferHandler + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(audioBufferHandler);
    }

    // 0x100ba1720
    void shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::swap(
        shared_ptr<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>& fixed_stack) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(fixed_stack);
        std::swap<ref_counter_base*>(*this, fixed_stack);
        std::swap<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>*>(*((this + 8)),
                                                                                       *((fixed_stack + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(fixed_stack);
    }

    // 0x100ba25e0
    void shared_ptr<VorbisWorker>::swap(shared_ptr<VorbisWorker>& vorbisWorker) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(vorbisWorker);
        std::swap<ref_counter_base*>(*this, vorbisWorker);
        std::swap<VorbisWorker*>(*((this + 8)), *((vorbisWorker + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(vorbisWorker);
    }

    // 0x100ba8e60
    shared_ptr<testframework::GaiaLogSink>*
    shared_ptr<testframework::GaiaLogSink>::operator=(shared_ptr<testframework::GaiaLogSink>&& gaiaLogSink) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(gaiaLogSink);
        swap(&local_28, this);
        return this;
    }

    // 0x100ba9110
    void shared_ptr<testframework::GaiaLogSink>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100bb0450
    void shared_ptr<testframework::GaiaLogSink>::swap(shared_ptr<testframework::GaiaLogSink>& gaiaLogSink) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(gaiaLogSink);
        std::swap<ref_counter_base*>(*this, gaiaLogSink);
        std::swap<testframework::GaiaLogSink*>(*((this + 8)), *((gaiaLogSink + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(gaiaLogSink);
    }

    // 0x100bb80d0
    uint64_t shared_ptr<render::TextureCube>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100bce780
    uint64_t shared_ptr<render::Query>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100bd4b60
    shared_ptr<render::VertexArrayObject>*
    shared_ptr<render::VertexArrayObject>::operator=(const shared_ptr<render::VertexArrayObject>& vertexArrayObject) {

        shared_ptr<oldscape::dash3d::Decor> local_28(vertexArrayObject);
        swap(&local_28, this);
        return this;
    }

    // 0x100bd8570
    shared_ptr<unsigned char>::shared_ptr<
        unsigned char,
        render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)::$_5, void>(
        unsigned char* arg1,
        render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int, unsigned int)::$_5 arg2) {
        uint8_t auVar1[16];

        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        auVar1 = operator new(32);
        new (auVar1._0_8_) ref_counter_with_deleter<unsigned char, render::GutterCompressedTextureData(
                                                                       unsigned char*, unsigned int&, unsigned int,
                                                                       unsigned int)::$_5>(arg1, auVar1._8_8_);
        *(ref_counter_with_deleter<unsigned char,
                                   render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int,
                                                                       unsigned int)::__5>**)this = auVar1._0_8_;
        *(unsigned char**)(this + 8) = arg1;
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
        shared_ptr<oldscape::sound::Wave>::tracked_enable_shared_from_this(*this);
    }

    // 0x100be0470
    void shared_ptr<render::RenderTargets>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100be1c50
    shared_ptr<render::RenderTargets>*
    shared_ptr<render::RenderTargets>::operator=(shared_ptr<render::RenderTargets>&& renderTargets) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(renderTargets);
        swap(&local_28, this);
        return this;
    }

    // 0x100be1ca0
    shared_ptr<render::RenderTargets>*
    shared_ptr<render::RenderTargets>::operator=(const shared_ptr<render::RenderTargets>& renderTargets) {

        shared_ptr<oldscape::dash3d::Decor> local_28(renderTargets);
        swap(&local_28, this);
        return this;
    }

    // 0x100beb650
    uint64_t shared_ptr<render::ShaderProgram>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100bef600
    shared_ptr<render::VertexShader>*
    shared_ptr<render::VertexShader>::operator=(shared_ptr<render::VertexShader>&& vertexShader) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(vertexShader);
        swap(&local_28, this);
        return this;
    }

    // 0x100bef640
    uint64_t shared_ptr<render::VertexShader>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100bef7c0
    shared_ptr<render::PixelShader>*
    shared_ptr<render::PixelShader>::operator=(shared_ptr<render::PixelShader>&& pixelShader) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(pixelShader);
        swap(&local_28, this);
        return this;
    }

    // 0x100bef800
    uint64_t shared_ptr<render::PixelShader>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100bef980
    shared_ptr<render::ComputeShader>*
    shared_ptr<render::ComputeShader>::operator=(shared_ptr<render::ComputeShader>&& computeShader) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(computeShader);
        swap(&local_28, this);
        return this;
    }

    // 0x100bef9c0
    uint64_t shared_ptr<render::ComputeShader>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100bf58e0
    void shared_ptr<render::VertexArrayObject>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100bf5e80
    shared_ptr<render::VertexArrayObject>*
    shared_ptr<render::VertexArrayObject>::operator=(shared_ptr<render::VertexArrayObject>&& vertexArrayObject) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(vertexArrayObject);
        swap(&local_28, this);
        return this;
    }

    // 0x100bfa950
    void shared_ptr<render::RenderTargets>::swap(shared_ptr<render::RenderTargets>& renderTargets) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(renderTargets);
        std::swap<ref_counter_base*>(*this, renderTargets);
        std::swap<render::RenderTargets*>(*((this + 8)), *((renderTargets + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(renderTargets);
    }

    // 0x100bfe6c0
    shared_ptr<render::ShaderProgram>*
    shared_ptr<render::ShaderProgram>::operator=(shared_ptr<render::ShaderProgram>&& shaderProgram) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(shaderProgram);
        swap(&local_28, this);
        return this;
    }

    // 0x100bfe7d0
    shared_ptr<render::ShaderProgram>*
    shared_ptr<render::ShaderProgram>::operator=(const shared_ptr<render::ShaderProgram>& shaderProgram) {

        shared_ptr<oldscape::dash3d::Decor> local_28(shaderProgram);
        swap(&local_28, this);
        return this;
    }

    // 0x100bfe910
    void shared_ptr<render::ShaderProgram>::swap(shared_ptr<render::ShaderProgram>& shaderProgram) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(shaderProgram);
        std::swap<ref_counter_base*>(*this, shaderProgram);
        std::swap<render::ShaderProgram*>(*((this + 8)), *((shaderProgram + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(shaderProgram);
    }

    // 0x100bff0a0
    void shared_ptr<render::ShaderProgram>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100c03840
    shared_ptr<render::VertexShader>*
    shared_ptr<render::VertexShader>::operator=(const shared_ptr<render::VertexShader>& vertexShader) {

        shared_ptr<oldscape::dash3d::Decor> local_28(vertexShader);
        swap(&local_28, this);
        return this;
    }

    // 0x100c03ec0
    void shared_ptr<render::VertexShader>::swap(shared_ptr<render::VertexShader>& vertexShader) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(vertexShader);
        std::swap<ref_counter_base*>(*this, vertexShader);
        std::swap<render::VertexShader*>(*((this + 8)), *((vertexShader + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(vertexShader);
    }

    // 0x100c044a0
    shared_ptr<render::PixelShader>*
    shared_ptr<render::PixelShader>::operator=(const shared_ptr<render::PixelShader>& pixelShader) {

        shared_ptr<oldscape::dash3d::Decor> local_28(pixelShader);
        swap(&local_28, this);
        return this;
    }

    // 0x100c04ac0
    void shared_ptr<render::PixelShader>::swap(shared_ptr<render::PixelShader>& pixelShader) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pixelShader);
        std::swap<ref_counter_base*>(*this, pixelShader);
        std::swap<render::PixelShader*>(*((this + 8)), *((pixelShader + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(pixelShader);
    }

    // 0x100c050a0
    shared_ptr<render::ComputeShader>*
    shared_ptr<render::ComputeShader>::operator=(const shared_ptr<render::ComputeShader>& computeShader) {

        shared_ptr<oldscape::dash3d::Decor> local_28(computeShader);
        swap(&local_28, this);
        return this;
    }

    // 0x100c056c0
    void shared_ptr<render::ComputeShader>::swap(shared_ptr<render::ComputeShader>& computeShader) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(computeShader);
        std::swap<ref_counter_base*>(*this, computeShader);
        std::swap<render::ComputeShader*>(*((this + 8)), *((computeShader + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(computeShader);
    }

    // 0x100c05ce0
    void shared_ptr<render::ComputeShader>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100c05e20
    void shared_ptr<render::PixelShader>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100c05f60
    void shared_ptr<render::VertexShader>::reset() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        swap(&local_28, this);
    }

    // 0x100c0beb0
    void shared_ptr<render::VertexArrayObject>::swap(shared_ptr<render::VertexArrayObject>& vertexArrayObject) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(vertexArrayObject);
        std::swap<ref_counter_base*>(*this, vertexArrayObject);
        std::swap<render::VertexArrayObject*>(*((this + 8)), *((vertexArrayObject + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(vertexArrayObject);
    }

    // 0x100c31010
    uint64_t shared_ptr<render::RenderTargets>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100c35100
    uint64_t shared_ptr<render::VertexArrayObject>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100ca3130
    uint64_t shared_ptr<input::InputTextHandler>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100ca81a0
    uint64_t shared_ptr<logger::Sink>::operator->() const {
        if (*(long*)(this + 8) == 0) {
            LogAssert(
                "m_data != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/shared_ptr.h",
                305, nullptr);
        }
        return *(uint64_t*)(this + 8);
    }

    // 0x100cab280
    shared_ptr<logger::Sink>* shared_ptr<logger::Sink>::operator=(shared_ptr<logger::Sink>&& sink) {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_28;

        local_28.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(sink);
        swap(&local_28, this);
        return this;
    }

    // 0x100cab2d0
    void shared_ptr<logger::Sink>::swap(shared_ptr<logger::Sink>& sink) {
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(sink);
        std::swap<ref_counter_base*>(*this, sink);
        std::swap<logger::Sink*>(*((this + 8)), *((sink + 8)));
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(*this);
        shared_ptr<oldscape::dash3d::Decor>::tracked_enable_shared_from_this_add_ref(sink);
    }

} // namespace jag

namespace jag::oldscape::highlight {
    // 0x100013220
    void ShortIDFromNPCKey(long long arg1) {
        return arg1 & 65535;
    }

} // namespace jag::oldscape::highlight
