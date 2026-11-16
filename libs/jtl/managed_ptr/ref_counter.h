// libs/jtl/managed_ptr/ref_counter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 20 instantiations, e.g. <Array<unsigned int, eastl::allocator> >, <Linkable<oldscape::dash3d::Square> >, <Linkable<oldscape::dash3d::Texture> >
    class ref_counter {
    public:
        // virtual methods in vtable order
        virtual void DeleteData();
        virtual void DeleteSelf();
        ref_counter(oldscape::sound::Wave*);
        ref_counter(oldscape::sound::WaveStream*);
        ref_counter(Linkable<oldscape::sound::PCMStream>*);
        ref_counter(Linkable<oldscape::sound::MixerController>*);
        ref_counter(oldscape::sound::JagFX*);
        ref_counter(oldscape::input::InputForm*);
        ref_counter(oldscape::rs2lib::worldmap::MultiLocMapElement*);
        ref_counter(oldscape::rs2lib::worldmap::StaticMapElement*);
        ref_counter(Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>*);
        ref_counter(Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*);
        ref_counter(oldscape::sound::JagVorbis*);
        ref_counter(oldscape::midi2::MidiFile*);
        ref_counter(Linkable<oldscape::midi2::MidiNote>*);
        ref_counter(oldscape::midi2::Patch*);
        ref_counter(oldscape::midi2::EnvelopeSet*);
        ref_counter(Array<unsigned int, eastl::allocator>*);
        ref_counter(Linkable<oldscape::dash3d::Texture>*);
        ref_counter(Linkable<oldscape::dash3d::Square>*);
        ref_counter(oldscape::graphics::animation::OldscapeAnimKeyFrameSet*);
        ref_counter(oldscape::dash3d::AnimBase*);
    };

    class ref_counter_base {
    public:
        // virtual methods in vtable order
        virtual ~ref_counter_base();
        ref_counter_base();
        ulong IncRefIfNZ();
        void GetRefCount() const;
        void IncWRef();
        void DecRef();
        void DecWRef();
        void IncRef();

        // data members, from how the methods use this: 20 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[12];
    };

    template <typename...> // 260 instantiations, e.g. <Js5WorkerThread>, <MixerWorker>, <VorbisWorker>
    class ref_counter_shared {
    public:
        // virtual methods in vtable order
        virtual void DeleteData();
        virtual void DeleteSelf();
        ref_counter_shared(unsigned long, oldscape::rs2lib::worldmap::WorldmapAreaMetadata*);
        ref_counter_shared(unsigned long, oldscape::FolderSelection::FolderSelectionRequest*);
        ref_counter_shared(unsigned long, oldscape::FileRSevenDebugPresetProvider*);
        ref_counter_shared(unsigned long, oldscape::highlight::HighlightManager*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::PlayerModel*);
        ref_counter_shared(unsigned long, oldscape::sound::Mixer*);
        ref_counter_shared(unsigned long, oldscape::midi2::MidiPlayer*);
        ref_counter_shared(unsigned long, oldscape::sound::Decimator*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::OldscapeVarTypeList*);
        ref_counter_shared(unsigned long, Array<oldscape::graphics::Pix8, eastl::allocator>*);
        ref_counter_shared(unsigned long, Array<oldscape::graphics::Pix32, eastl::allocator>*);
        ref_counter_shared(unsigned long, oldscape::dash3d::TextureCache*);
        ref_counter_shared(unsigned long, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>*);
        ref_counter_shared(unsigned long, oldscape::LogFileSink*);
        ref_counter_shared(unsigned long, oldscape::midi2::MidiRequest*);
        ref_counter_shared(unsigned long, oldscape::DesktopApplicationContext*);
        ref_counter_shared(unsigned long, oldscape::ClientLocAnim*);
        ref_counter_shared(unsigned long, oldscape::MapSpotAnim*);
        ref_counter_shared(unsigned long, oldscape::ClientProj*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannel*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettings*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta*);
        ref_counter_shared(unsigned long, game::VarContainerSparse*);
        ref_counter_shared(unsigned long, oldscape::ClientObj*);
        ref_counter_shared(unsigned long, oldscape::ClientNpc*);
        ref_counter_shared(unsigned long, oldscape::ClientPlayer*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::HeadbarQueue*);
        ref_counter_shared(unsigned long, Js5WorkerThread*);
        ref_counter_shared(unsigned long, oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*);
        ref_counter_shared(unsigned long, oldscape::ChatLine*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::DisplayName*);
        ref_counter_shared(unsigned long, oldscape::ClientScript*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::IfType*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::OldscapeVarType*);
        ref_counter_shared(unsigned long, Array<graphics::LabelData, eastl::allocator>*);
        ref_counter_shared(unsigned long, oldscape::rseven::DynamicGeometry*);
        ref_counter_shared(unsigned long, game::StaticPointLight*);
        ref_counter_shared(unsigned long, game::LightSource*);
        ref_counter_shared(unsigned long, oldscape::dash3d::PoseStateProviderRSeven*);
        ref_counter_shared(unsigned long, graphics::Model*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::HttpSpriteData*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::InterfaceGraphicMask*);
        ref_counter_shared(unsigned long,
                           std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                           std::default_delete<oldscape::rs2lib::worldmap::LocationData>>*);
        ref_counter_shared(unsigned long, oldscape::graphics::Pix32*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::worldmap::StaticMapElement*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::worldmap::MapSquareData*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::worldmap::MapZoneData*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::LocType*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::NpcType*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::ObjType*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::ObjSprite*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::ObjTypeCustomisation*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::ParamType*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::SeqType*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::SpotType*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::StructType*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::DBRowType*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::DBTableType*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelUser*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::AddUser*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::AddMember*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*);
        ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::EnumType*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::HitmarkType*);
        ref_counter_shared(unsigned long, oldscape::configdecoder::IdkType*);
        ref_counter_shared(unsigned long, oldscape::sound::WaveCache*);
        ref_counter_shared(unsigned long,
                           eastl::priority_queue<
                               oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                               eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                               eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>*);
        ref_counter_shared(unsigned long, oldscape::sound::DelayedStream*);
        ref_counter_shared(unsigned long, oldscape::sound::PCMPlayer::PlayerTask*);
        ref_counter_shared(unsigned long, oldscape::sound::LazyWave::LazyWaveImpl*);
        ref_counter_shared(unsigned long, oldscape::jagex3::Js5LocalLoader::Js5Local*);
        ref_counter_shared(unsigned long, oldscape::jagex3::Js5RemoteLoader::Js5Remote*);
        ref_counter_shared(unsigned long, graphics::FontMetrics*);
        ref_counter_shared(unsigned long, oldscape::math::RotTrans*);
        ref_counter_shared(unsigned long, oldscape::midi2::MidiFile*);
        ref_counter_shared(unsigned long, oldscape::midi2::AddRequestTask*);
        ref_counter_shared(unsigned long, oldscape::midi2::LoadSongTask*);
        ref_counter_shared(unsigned long, oldscape::midi2::FadeInTask*);
        ref_counter_shared(unsigned long, oldscape::midi2::StartSongTask*);
        ref_counter_shared(unsigned long, oldscape::midi2::ConcurrentMidiTask*);
        ref_counter_shared(unsigned long, oldscape::midi2::DelayFadeTask*);
        ref_counter_shared(unsigned long, oldscape::midi2::ClearRequestTask*);
        ref_counter_shared(unsigned long, oldscape::midi2::FadeOutTask*);
        ref_counter_shared(unsigned long, oldscape::midi2::SwapSongTask*);
        ref_counter_shared(unsigned long, oldscape::midi2::MidiMixer*);
        ref_counter_shared(unsigned long, oldscape::midi2::MidiNote*);
        ref_counter_shared(unsigned long, oldscape::dash3d::Square*);
        ref_counter_shared(unsigned long, RenderState::ModelSubmissionRSeven*);
        ref_counter_shared(unsigned long, oldscape::dash3d::ShareLightCache*);
        ref_counter_shared(unsigned long, oldscape::dash3d::ShareLightOperation*);
        ref_counter_shared(unsigned long, oldscape::graphics::animation::OldscapeJoint*);
        ref_counter_shared(unsigned long, oldscape::dash3d::Texture*);
        ref_counter_shared(unsigned long, graphics::GeometryBatch*);
        ref_counter_shared(unsigned long, oldscape::dash3d::Ground*);
        ref_counter_shared(unsigned long, oldscape::dash3d::GroundDecor*);
        ref_counter_shared(unsigned long, oldscape::dash3d::GroundObject*);
        ref_counter_shared(unsigned long, oldscape::dash3d::Wall*);
        ref_counter_shared(unsigned long, oldscape::dash3d::Decor*);
        ref_counter_shared(unsigned long, oldscape::dash3d::Sprite*);
        ref_counter_shared(unsigned long, Array<unsigned char, eastl::allocator>*);
        ref_counter_shared(unsigned long, oldscape::jstring::PixfontGeneric*);
        ref_counter_shared(unsigned long, oldscape::graphics::animation::OldscapeAnimKey*);
        ref_counter_shared(unsigned long, oldscape::graphics::animation::OldscapeAnimCurve*);
        ref_counter_shared(unsigned long,
                           oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob*);
        ref_counter_shared(unsigned long, oldscape::dash3d::ModelRSevenLit*);
        ref_counter_shared(unsigned long, oldscape::dash3d::ModelLitImpl*);
        ref_counter_shared(unsigned long, oldscape::dash3d::OperationBuffer::OperationImpl*);
        ref_counter_shared(unsigned long, oldscape::dash3d::Skeleton*);
        ref_counter_shared(unsigned long, oldscape::dash3d::AnimFrameSet*);
        ref_counter_shared(unsigned long, oldscape::dash3d::AnimBase*);
        ref_counter_shared(unsigned long, Array<signed char, eastl::allocator>*);
        ref_counter_shared(unsigned long, Array<short, eastl::allocator>*);
        ref_counter_shared(unsigned long, oldscape::dash3d::SetModelOperation*);
        ref_counter_shared(unsigned long, oldscape::dash3d::ModelRSevenUnlit*);
        ref_counter_shared(unsigned long,
                           eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange, eastl::allocator>*);
        ref_counter_shared(unsigned long, oldscape::dash3d::CombineOperation*);
        ref_counter_shared(unsigned long, oldscape::dash3d::RecolourOperation*);
        ref_counter_shared(unsigned long, oldscape::dash3d::DashAnimateOperation*);
        ref_counter_shared(unsigned long, oldscape::dash3d::MayaPoseStateRSeven*);
        ref_counter_shared(unsigned long, oldscape::dash3d::AnimateOperation*);
        ref_counter_shared(unsigned long, Array<bool, eastl::allocator>*);
        ref_counter_shared(unsigned long, Array<int, eastl::allocator>*);
        ref_counter_shared(unsigned long, oldscape::dash3d::ModelUnlitImpl*);
        ref_counter_shared(unsigned long, Array<Array<int, eastl::allocator>, eastl::allocator>*);
        ref_counter_shared(unsigned long, Array<oldscape::dash3d::PointNormal, eastl::allocator>*);
        ref_counter_shared(unsigned long, Array<oldscape::dash3d::FaceNormal, eastl::allocator>*);
        ref_counter_shared(unsigned long, oldscape::dash3d::ChainedPoseStateRSeven*);
        ref_counter_shared(unsigned long, oldscape::dash3d::ShiftedLabelRangePoseStateRSeven*);
        ref_counter_shared(unsigned long, oldscape::dash3d::MaskedDashPoseStateRSeven*);
        ref_counter_shared(unsigned long, oldscape::dash3d::DashPoseStateRSeven*);
        ref_counter_shared(
            unsigned long,
            eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul,
                                                                        true, eastl::allocator>,
                                                    8ul, true, eastl::allocator>,
                                4ul, true, eastl::allocator>*);
        ref_counter_shared(unsigned long, eastl::vector<graphics::WaterPatchConfig, eastl::allocator>*);
        ref_counter_shared(unsigned long, game::RT5AnimationResourceManager*);
        ref_counter_shared(unsigned long, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*);
        ref_counter_shared(unsigned long, EntityIcon*);
        ref_counter_shared(unsigned long, graphics::VFXAttachmentInfo*);
        ref_counter_shared(unsigned long, game::MapEnvironmentSettings*);
        ref_counter_shared(unsigned long, graphics::EquirectangularRenderer*);
        ref_counter_shared(unsigned long, game::World*);
        ref_counter_shared(unsigned long, eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>*);
        ref_counter_shared(unsigned long,
                           eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                               4ul, true, eastl::allocator>*);
        ref_counter_shared(unsigned long, game::NonSparseStringPool*);
        ref_counter_shared(unsigned long, game::SparseStringPool*);
        ref_counter_shared(unsigned long, game::SeqTypeSounds*);
        ref_counter_shared(unsigned long, game::QuickChatPhraseType*);
        ref_counter_shared(unsigned long,
                           eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                             eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>*);
        ref_counter_shared(unsigned long, game::QuickChatCatType*);
        ref_counter_shared(unsigned long, game::ConfigProviderMultiGroupSingleFileLoader*);
        ref_counter_shared(unsigned long, game::ConfigProviderMultiGroupMultiFileLoader*);
        ref_counter_shared(unsigned long, game::ConfigProviderFontMetricsLoader*);
        ref_counter_shared(unsigned long, game::ConfigProviderAnimationStateMachineLoader*);
        ref_counter_shared(unsigned long, game::ConfigProviderDefaultsLoader*);
        ref_counter_shared(unsigned long, game::Entity*);
        ref_counter_shared(unsigned long, game::camera::OldShake*);
        ref_counter_shared(unsigned long,
                           eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>*);
        ref_counter_shared(unsigned long,
                           eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*);
        ref_counter_shared(unsigned long,
                           eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*);
        ref_counter_shared(unsigned long, game::LookatPoint*);
        ref_counter_shared(unsigned long, game::LookatEntity*);
        ref_counter_shared(unsigned long, game::LookatSpline*);
        ref_counter_shared(unsigned long, game::LookatOrientation*);
        ref_counter_shared(unsigned long, game::LookatSplineMatchPosition*);
        ref_counter_shared(unsigned long, game::PositionPoint*);
        ref_counter_shared(unsigned long, game::PositionEntity*);
        ref_counter_shared(unsigned long, game::PositionSpline*);
        ref_counter_shared(unsigned long, game::camera::Shake*);
        ref_counter_shared(unsigned long, game::camera::ZTilt*);
        ref_counter_shared(unsigned long, std::function<void()>*);
        ref_counter_shared(unsigned long, VorbisJs5Resource*);
        ref_counter_shared(unsigned long, eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>*);
        ref_counter_shared(unsigned long, tweak::Tweaky*);
        ref_counter_shared(unsigned long, tweak::List*);
        ref_counter_shared(unsigned long, graphics::ModularParticleSystemTemplate*);
        ref_counter_shared(unsigned long, graphics::ModularParticleSystem*);
        ref_counter_shared(unsigned long, render::Query*);
        ref_counter_shared(unsigned long, graphics::GeometryQuery*);
        ref_counter_shared(unsigned long, graphics::TextureAtlas*);
        ref_counter_shared(unsigned long, graphics::TextureData*);
        ref_counter_shared(unsigned long, graphics::Shader*);
        ref_counter_shared(unsigned long, graphics::Font*);
        ref_counter_shared(unsigned long, graphics::FontHelpers*);
        ref_counter_shared(unsigned long, DebugOverlayMainFPS*);
        // ... 60 more instantiated members
    };

    template <
        typename...> // 38 instantiations, e.g. <int>, <game::MapSquareWorldAreaCompositeInner>, <graphics::PointLight>
    class ref_counter_shared_trivial {
    public:
        ref_counter_shared_trivial(unsigned long, oldscape::Headbar*);
        ref_counter_shared_trivial(unsigned long, unsigned int*);
        ref_counter_shared_trivial(unsigned long, int*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::InvType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::MesAnimType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarBitType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarConBitType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarConType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarGlobalType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarObjType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarcType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarnBitType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarnType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VarpType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::VeccType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::AreaType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::BugTemplateType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::ControllerType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::HeadbarType*);
        ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::HuntType*);
        ref_counter_shared_trivial(unsigned long, oldscape::math::AffineTransform3*);
        ref_counter_shared_trivial(unsigned long, math::QuaternionT<float>*);
        ref_counter_shared_trivial(unsigned long, math::Vector3T<float>*);
        ref_counter_shared_trivial(unsigned long, std::atomic<bool>*);
        ref_counter_shared_trivial(unsigned long, graphics::PointLight*);
        ref_counter_shared_trivial(unsigned long, oldscape::dash3d::QuickGround*);
        ref_counter_shared_trivial(unsigned long, signed char*);
        ref_counter_shared_trivial(unsigned long, oldscape::dash3d::FixNormalsOperation*);
        ref_counter_shared_trivial(unsigned long, oldscape::dash3d::HillSkewOperation*);
        ref_counter_shared_trivial(unsigned long, oldscape::dash3d::LightOperation*);
        ref_counter_shared_trivial(unsigned long, oldscape::dash3d::TransformOperation*);
        ref_counter_shared_trivial(unsigned long, oldscape::dash3d::RetextureOperation*);
        ref_counter_shared_trivial(unsigned long, oldscape::dash3d::MirrorOperation*);
        ref_counter_shared_trivial(unsigned long, oldscape::dash3d::TintOperation*);
        ref_counter_shared_trivial(unsigned long, oldscape::dash3d::LightSource*);
        ref_counter_shared_trivial(unsigned long, oldscape::dash3d::TransformedPoseStateRSeven*);
        ref_counter_shared_trivial(unsigned long, graphics::PointLightGridTextureData*);
        ref_counter_shared_trivial(unsigned long, game::MapSquareWorldAreaCompositeInner*);
    };

    template <
        typename...> // 1 instantiations, e.g. <unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int
    class ref_counter_with_deleter {
    public:
        // virtual methods in vtable order
        virtual ~ref_counter_with_deleter();
        virtual void DeleteData();
        virtual void DeleteSelf();
        ref_counter_with_deleter(unsigned char*, render::GutterCompressedTextureData(unsigned char*, unsigned int&,
                                                                                     unsigned int, unsigned int)::$_5);
    };

    // 0x100057b10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::ref_counter_shared(unsigned long, oldscape::rs2lib::worldmap::WorldmapAreaMetadata*): jumps straight to the base-object constructor

    // 0x100057b20, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::ref_counter_shared(unsigned long, oldscape::rs2lib::worldmap::WorldmapAreaMetadata*)
    void ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::ref_counter_shared(
        ulong param_1, WorldmapAreaMetadata* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7918 + 16;
        *(ulong*)(this + 16) = param_1;
        *(WorldmapAreaMetadata**)(this + 24) = param_2;
    }

    // 0x100057b60, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::DeleteData()
    void ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~WorldmapAreaMetadata();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 144;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100057bb0, 16 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::DeleteSelf()
    /* ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>::DeleteSelf() */

    void ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>::DeleteSelf() {
        aligned_dealloc(this);
    }

    // 0x100058f10, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::FolderSelection::FolderSelectionRequest* placement_new<oldscape::FolderSelection::FolderSelectionRequest>(void*)
    FolderSelectionRequest* placement_new<oldscape::FolderSelection::FolderSelectionRequest>(void* param_1) {
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        oldscape::FolderSelection::FolderSelectionRequest::FolderSelectionRequest(param_1);
        return param_1;
    }

    // 0x100058f40, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>* placement_new<ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>, int, oldscape::FolderSelection::FolderSelectionRequest*&>(void*, int&&, oldscape::FolderSelection::FolderSelectionRequest*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>, int,
                       oldscape::FolderSelection::FolderSelectionRequest*&>(void* param_1, int* param_2,
                                                                            FolderSelectionRequest** param_3) {
        ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1000816b0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>::ref_counter_shared(unsigned long, oldscape::FileRSevenDebugPresetProvider*): jumps straight to the base-object constructor

    // 0x1000816c0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>::ref_counter_shared(unsigned long, oldscape::FileRSevenDebugPresetProvider*)
    void ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>::ref_counter_shared(
        ulong param_1, FileRSevenDebugPresetProvider* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7660 + 16;
        *(ulong*)(this + 16) = param_1;
        *(FileRSevenDebugPresetProvider**)(this + 24) = param_2;
    }

    // 0x100081700, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>::DeleteData()
    void ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~FileRSevenDebugPresetProvider();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 80;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100138170, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<oldscape::sound::Wave>::ref_counter(oldscape::sound::Wave*): jumps straight to the base-object constructor

    // 0x1001381a0, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<oldscape::sound::Wave>::ref_counter(oldscape::sound::Wave*)
    void ref_counter<oldscape::sound::Wave>::ref_counter(Wave* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7058 + 16;
        *(Wave**)(this + 16) = param_1;
    }

    // 0x1001381d0, 48 bytes, inline, placed by class name
    // ref_counter<oldscape::sound::Wave>::DeleteData()
    void ref_counter<oldscape::sound::Wave>::DeleteData() {
        Wave* this_00;

        this_00 = *(Wave**)(this + 16);
        if (this_00 != (Wave*)0) {
            this_00->~Wave();
            operator_delete(this_00);
        }
        *(undefined8*)(this + 16) = 0;
    }

    // 0x100138200, 32 bytes, inline, placed by class name
    // ref_counter<oldscape::sound::Wave>::DeleteSelf()
    /* ref_counter<oldscape::sound::WaveStream>::DeleteSelf() */

    void ref_counter<oldscape::sound::WaveStream>::DeleteSelf() {
        if (this != (ref_counter<oldscape::sound::WaveStream>*)0) {
            (**(code**)(*(long*)this + 8))();
        }
    }

    // 0x100138300, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<oldscape::sound::WaveStream>::ref_counter(oldscape::sound::WaveStream*): jumps straight to the base-object constructor

    // 0x100138310, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<oldscape::sound::WaveStream>::ref_counter(oldscape::sound::WaveStream*)
    void ref_counter<oldscape::sound::WaveStream>::ref_counter(WaveStream* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7050 + 16;
        *(WaveStream**)(this + 16) = param_1;
    }

    // 0x100138340, 48 bytes, inline, placed by class name
    // ref_counter<oldscape::sound::WaveStream>::DeleteData()
    /* ref_counter<Linkable<oldscape::sound::PCMStream> >::DeleteData() */

    void ref_counter<Linkable<oldscape::sound::PCMStream>>::DeleteData() {
        if (*(long**)(this + 16) != (long*)0) {
            (**(code**)(**(long**)(this + 16) + 8))();
        }
        *(undefined8*)(this + 16) = 0;
    }

    // 0x10013dac0, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::sound::PCMStream> >::ref_counter(Linkable<oldscape::sound::PCMStream>*): jumps straight to the base-object constructor

    // 0x10013dad0, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::sound::PCMStream> >::ref_counter(Linkable<oldscape::sound::PCMStream>*)
    void ref_counter<Linkable<oldscape::sound::PCMStream>>::ref_counter(Linkable* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7008 + 16;
        *(Linkable**)(this + 16) = param_1;
    }

    // 0x10013dd80, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::sound::MixerController> >::ref_counter(Linkable<oldscape::sound::MixerController>*): jumps straight to the base-object constructor

    // 0x10013dd90, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::sound::MixerController> >::ref_counter(Linkable<oldscape::sound::MixerController>*)
    void ref_counter<Linkable<oldscape::sound::MixerController>>::ref_counter(Linkable* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7000 + 16;
        *(Linkable**)(this + 16) = param_1;
    }

    // 0x100147bf0, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<oldscape::sound::JagFX>::ref_counter(oldscape::sound::JagFX*): jumps straight to the base-object constructor

    // 0x100147c00, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<oldscape::sound::JagFX>::ref_counter(oldscape::sound::JagFX*)
    void ref_counter<oldscape::sound::JagFX>::ref_counter(JagFX* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7060 + 16;
        *(JagFX**)(this + 16) = param_1;
    }

    // 0x100147c30, 48 bytes, inline, placed by class name
    // ref_counter<oldscape::sound::JagFX>::DeleteData()
    void ref_counter<oldscape::sound::JagFX>::DeleteData() {
        JagFX* this_00;

        this_00 = *(JagFX**)(this + 16);
        if (this_00 != (JagFX*)0) {
            this_00->~JagFX();
            operator_delete(this_00);
        }
        *(undefined8*)(this + 16) = 0;
    }

    // 0x10014dd90, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<oldscape::input::InputForm>::ref_counter(oldscape::input::InputForm*): jumps straight to the base-object constructor

    // 0x10014dda0, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<oldscape::input::InputForm>::ref_counter(oldscape::input::InputForm*)
    void ref_counter<oldscape::input::InputForm>::ref_counter(InputForm* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7030 + 16;
        *(InputForm**)(this + 16) = param_1;
    }

    // 0x10014ddd0, 48 bytes, inline, placed by class name
    // ref_counter<oldscape::input::InputForm>::DeleteData()
    void ref_counter<oldscape::input::InputForm>::DeleteData() {
        if (*(void**)(this + 16) != (void*)0) {
            operator_delete(*(void**)(this + 16));
        }
        *(undefined8*)(this + 16) = 0;
    }

    // 0x1001a88a0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::ChatLine>::ref_counter_shared(unsigned long, oldscape::ChatLine*): jumps straight to the base-object constructor

    // 0x1001a88b0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::ChatLine>::ref_counter_shared(unsigned long, oldscape::ChatLine*)
    void ref_counter_shared<oldscape::ChatLine>::ref_counter_shared(ulong param_1, ChatLine* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7940 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ChatLine**)(this + 24) = param_2;
    }

    // 0x1001a88f0, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::ChatLine>::DeleteData()
    void ref_counter_shared<oldscape::ChatLine>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ChatLine();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 248;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001a8e40, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::DisplayName>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::DisplayName*): jumps straight to the base-object constructor

    // 0x1001a8e50, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::DisplayName>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::DisplayName*)
    void ref_counter_shared<oldscape::rs2lib::social::DisplayName>::ref_counter_shared(ulong param_1,
                                                                                       DisplayName* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7838 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DisplayName**)(this + 24) = param_2;
    }

    // 0x1001a8e90, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::DisplayName>::DeleteData()
    void ref_counter_shared<oldscape::rs2lib::social::DisplayName>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~pair();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 64;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001aa950, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::ClientScript>::ref_counter_shared(unsigned long, oldscape::ClientScript*): jumps straight to the base-object constructor

    // 0x1001aa960, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::ClientScript>::ref_counter_shared(unsigned long, oldscape::ClientScript*)
    void ref_counter_shared<oldscape::ClientScript>::ref_counter_shared(ulong param_1, ClientScript* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee75b8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ClientScript**)(this + 24) = param_2;
    }

    // 0x1001aa9a0, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::ClientScript>::DeleteData()
    void ref_counter_shared<oldscape::ClientScript>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ClientScript();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 168;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001af520, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::IfType>::ref_counter_shared(unsigned long, oldscape::rs2lib::IfType*): jumps straight to the base-object constructor

    // 0x1001af530, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::IfType>::ref_counter_shared(unsigned long, oldscape::rs2lib::IfType*)
    void ref_counter_shared<oldscape::rs2lib::IfType>::ref_counter_shared(ulong param_1, IfType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7828 + 16;
        *(ulong*)(this + 16) = param_1;
        *(IfType**)(this + 24) = param_2;
    }

    // 0x1001af570, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::IfType>::DeleteData()
    void ref_counter_shared<oldscape::rs2lib::IfType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~IfType();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 2160;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100217880, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<unsigned int>::ref_counter_shared_trivial(unsigned long, unsigned int*): jumps straight to the base-object constructor

    // 0x100217890, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<unsigned int>::ref_counter_shared_trivial(unsigned long, unsigned int*)
    void ref_counter_shared_trivial<unsigned int>::ref_counter_shared_trivial(ulong param_1, uint* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d70 + 16;
    }

    // 0x10021d310, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::HttpSpriteData>::ref_counter_shared(unsigned long, oldscape::rs2lib::HttpSpriteData*): jumps straight to the base-object constructor

    // 0x10021d320, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::HttpSpriteData>::ref_counter_shared(unsigned long, oldscape::rs2lib::HttpSpriteData*)
    void ref_counter_shared<oldscape::rs2lib::HttpSpriteData>::ref_counter_shared(ulong param_1,
                                                                                  HttpSpriteData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7818 + 16;
        *(ulong*)(this + 16) = param_1;
        *(HttpSpriteData**)(this + 24) = param_2;
    }

    // 0x10021d360, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::HttpSpriteData>::DeleteData()
    void ref_counter_shared<oldscape::rs2lib::HttpSpriteData>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~HttpSpriteData();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100225820, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<oldscape::rs2lib::worldmap::MultiLocMapElement>::ref_counter(oldscape::rs2lib::worldmap::MultiLocMapElement*): jumps straight to the base-object constructor

    // 0x100225830, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<oldscape::rs2lib::worldmap::MultiLocMapElement>::ref_counter(oldscape::rs2lib::worldmap::MultiLocMapElement*)
    void ref_counter<oldscape::rs2lib::worldmap::MultiLocMapElement>::ref_counter(MultiLocMapElement* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7080 + 16;
        *(MultiLocMapElement**)(this + 16) = param_1;
    }

    // 0x100225860, 48 bytes, inline, placed by class name
    // ref_counter<oldscape::rs2lib::worldmap::MultiLocMapElement>::DeleteData()
    void ref_counter<oldscape::rs2lib::worldmap::MultiLocMapElement>::DeleteData() {
        MultiLocMapElement* this_00;

        this_00 = *(MultiLocMapElement**)(this + 16);
        if (this_00 != (MultiLocMapElement*)0) {
            this_00->~MultiLocMapElement();
            operator_delete(this_00);
        }
        *(undefined8*)(this + 16) = 0;
    }

    // 0x100225950, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<oldscape::rs2lib::worldmap::StaticMapElement>::ref_counter(oldscape::rs2lib::worldmap::StaticMapElement*): jumps straight to the base-object constructor

    // 0x100225960, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<oldscape::rs2lib::worldmap::StaticMapElement>::ref_counter(oldscape::rs2lib::worldmap::StaticMapElement*)
    void ref_counter<oldscape::rs2lib::worldmap::StaticMapElement>::ref_counter(StaticMapElement* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7078 + 16;
        *(StaticMapElement**)(this + 16) = param_1;
    }

    // 0x100225990, 48 bytes, inline, placed by class name
    // ref_counter<oldscape::rs2lib::worldmap::StaticMapElement>::DeleteData()
    void ref_counter<oldscape::rs2lib::worldmap::StaticMapElement>::DeleteData() {
        StaticMapElement* this_00;

        this_00 = *(StaticMapElement**)(this + 16);
        if (this_00 != (StaticMapElement*)0) {
            this_00->~StaticMapElement();
            operator_delete(this_00);
        }
        *(undefined8*)(this + 16) = 0;
    }

    // 0x100244af0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<oldscape::configdecoder::InvType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::InvType*): jumps straight to the base-object constructor

    // 0x100244b00, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<oldscape::configdecoder::InvType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::InvType*)
    void ref_counter_shared_trivial<oldscape::configdecoder::InvType>::ref_counter_shared_trivial(ulong param_1,
                                                                                                  InvType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7cc0 + 16;
    }

    // 0x100246bb0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::configdecoder::LocType>::ref_counter_shared(unsigned long, oldscape::configdecoder::LocType*): jumps straight to the base-object constructor

    // 0x100246bc0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::configdecoder::LocType>::ref_counter_shared(unsigned long, oldscape::configdecoder::LocType*)
    void ref_counter_shared<oldscape::configdecoder::LocType>::ref_counter_shared(ulong param_1, LocType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7608 + 16;
        *(ulong*)(this + 16) = param_1;
        *(LocType**)(this + 24) = param_2;
    }

    // 0x100246c00, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::configdecoder::LocType>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::LocType>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~LocType();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 624;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1002486e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<oldscape::configdecoder::MesAnimType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::MesAnimType*): jumps straight to the base-object constructor

    // 0x1002486f0, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<oldscape::configdecoder::MesAnimType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::MesAnimType*)
    void
    ref_counter_shared_trivial<oldscape::configdecoder::MesAnimType>::ref_counter_shared_trivial(ulong param_1,
                                                                                                 MesAnimType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c90 + 16;
    }

    // 0x10026b950, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry> >::ref_counter(Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>*): jumps straight to the base-object constructor

    // 0x10026b960, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry> >::ref_counter(Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>*)
    void jag::ref_counter<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::ref_counter(
        Linkable* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7020 + 16;
        *(Linkable**)(this + 16) = param_1;
    }

    // 0x10027d670, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry> >::ref_counter(Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*): jumps straight to the base-object constructor

    // 0x10027d680, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry> >::ref_counter(Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>*)
    void jag::ref_counter<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::ref_counter(
        Linkable* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7028 + 16;
        *(Linkable**)(this + 16) = param_1;
    }

    // 0x10027d760, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::AddMember*): jumps straight to the base-object constructor

    // 0x10027d770, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::AddMember*)
    void
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>::ref_counter_shared(ulong param_1,
                                                                                                   AddMember* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee78f0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(AddMember**)(this + 24) = param_2;
    }

    // 0x10027d8d0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*): jumps straight to the base-object constructor

    // 0x10027d8e0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>::ref_counter_shared(
        ulong param_1, DeleteMember* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7890 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DeleteMember**)(this + 24) = param_2;
    }

    // 0x10027d960, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*): jumps straight to the base-object constructor

    // 0x10027d970, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>::ref_counter_shared(
        ulong param_1, SetMemberRank* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7898 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SetMemberRank**)(this + 24) = param_2;
    }

    // 0x10027d9f0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*): jumps straight to the base-object constructor

    // 0x10027da00, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*)
    void
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>::ref_counter_shared(ulong param_1,
                                                                                                  SetOwner* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee78e0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SetOwner**)(this + 24) = param_2;
    }

    // 0x10027da90, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*): jumps straight to the base-object constructor

    // 0x10027daa0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>::ref_counter_shared(
        ulong param_1, SetMemberExtraInfo* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee78b8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SetMemberExtraInfo**)(this + 24) = param_2;
    }

    // 0x10027db20, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*): jumps straight to the base-object constructor

    // 0x10027db30, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>::ref_counter_shared(
        ulong param_1, SetMemberMuted* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee78a8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SetMemberMuted**)(this + 24) = param_2;
    }

    // 0x10027dbf0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*): jumps straight to the base-object constructor

    // 0x10027dc00, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*)
    void
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>::ref_counter_shared(ulong param_1,
                                                                                                   AddBanned* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee78e8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(AddBanned**)(this + 24) = param_2;
    }

    // 0x10027dc80, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*): jumps straight to the base-object constructor

    // 0x10027dc90, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>::ref_counter_shared(
        ulong param_1, DeleteBanned* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7888 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DeleteBanned**)(this + 24) = param_2;
    }

    // 0x10027dd50, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*): jumps straight to the base-object constructor

    // 0x10027dd60, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>::ref_counter_shared(
        ulong param_1, SetClanName* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7880 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SetClanName**)(this + 24) = param_2;
    }

    // 0x10027dde0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*): jumps straight to the base-object constructor

    // 0x10027ddf0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*)
    void jag::ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>::
        ref_counter_shared(ulong param_1, UpdateClanSettingsBaseSettings* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee78d8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(UpdateClanSettingsBaseSettings**)(this + 24) = param_2;
    }

    // 0x10027de70, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*): jumps straight to the base-object constructor

    // 0x10027de80, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>::ref_counter_shared(
        ulong param_1, SetExtraSettingInt* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee78b0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SetExtraSettingInt**)(this + 24) = param_2;
    }

    // 0x10027df10, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*): jumps straight to the base-object constructor

    // 0x10027df20, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>::ref_counter_shared(
        ulong param_1, SetExtraSettingIntVarbit* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee78d0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SetExtraSettingIntVarbit**)(this + 24) = param_2;
    }

    // 0x10027dfa0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*): jumps straight to the base-object constructor

    // 0x10027dfb0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>::ref_counter_shared(
        ulong param_1, SetExtraSettingLong* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee78c0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SetExtraSettingLong**)(this + 24) = param_2;
    }

    // 0x10027e070, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*): jumps straight to the base-object constructor

    // 0x10027e080, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>::ref_counter_shared(
        ulong param_1, SetExtraSettingString* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee78c8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SetExtraSettingString**)(this + 24) = param_2;
    }

    // 0x10027e260, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1*): jumps straight to the base-object constructor

    // 0x10027e270, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>::ref_counter_shared(
        ulong param_1, AddMemberOldV1* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee78a0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(AddMemberOldV1**)(this + 24) = param_2;
    }

    // 0x10027ed20, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<oldscape::configdecoder::AreaType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::AreaType*): jumps straight to the base-object constructor

    // 0x10027ed30, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<oldscape::configdecoder::AreaType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::AreaType*)
    void ref_counter_shared_trivial<oldscape::configdecoder::AreaType>::ref_counter_shared_trivial(ulong param_1,
                                                                                                   AreaType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7cc8 + 16;
    }

    // 0x10027f400, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<oldscape::configdecoder::BugTemplateType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::BugTemplateType*): jumps straight to the base-object constructor

    // 0x10027f410, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<oldscape::configdecoder::BugTemplateType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::BugTemplateType*)
    void ref_counter_shared_trivial<oldscape::configdecoder::BugTemplateType>::ref_counter_shared_trivial(
        ulong param_1, BugTemplateType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7cb8 + 16;
    }

    // 0x10027fae0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<oldscape::configdecoder::ControllerType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::ControllerType*): jumps straight to the base-object constructor

    // 0x10027faf0, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<oldscape::configdecoder::ControllerType>::ref_counter_shared_trivial(unsigned long, oldscape::configdecoder::ControllerType*)
    void ref_counter_shared_trivial<oldscape::configdecoder::ControllerType>::ref_counter_shared_trivial(
        ulong param_1, ControllerType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7cb0 + 16;
    }

    // 0x1002a8ea0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >::ref_counter_shared(unsigned long, eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> >*): jumps straight to the base-object constructor

    // 0x1002a8eb0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >::ref_counter_shared(unsigned long, eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> >*)
    void jag::ref_counter_shared<
        eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                              eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                              eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>::
        ref_counter_shared(ref_counter_shared<eastl::priority_queue<
                               oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                               eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                               eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>* this,
                           ulong param_1, priority_queue* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee71c0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(priority_queue**)(this + 24) = param_2;
    }

    // 0x1002a8ef0, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >::DeleteData()
    void jag::ref_counter_shared<
        eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                              eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                              eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>::
        DeleteData(ref_counter_shared<eastl::priority_queue<
                       oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                       eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                       eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~priority_queue();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 40;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1002a9d10, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::sound::DelayedStream>::ref_counter_shared(unsigned long, oldscape::sound::DelayedStream*): jumps straight to the base-object constructor

    // 0x1002a9d20, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::sound::DelayedStream>::ref_counter_shared(unsigned long, oldscape::sound::DelayedStream*)
    void ref_counter_shared<oldscape::sound::DelayedStream>::ref_counter_shared(ulong param_1, DelayedStream* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee76e0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DelayedStream**)(this + 24) = param_2;
    }

    // 0x1002acba0, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<oldscape::sound::JagVorbis>::ref_counter(oldscape::sound::JagVorbis*): jumps straight to the base-object constructor

    // 0x1002acbb0, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<oldscape::sound::JagVorbis>::ref_counter(oldscape::sound::JagVorbis*)
    void ref_counter<oldscape::sound::JagVorbis>::ref_counter(JagVorbis* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7068 + 16;
        *(JagVorbis**)(this + 16) = param_1;
    }

    // 0x1002acbe0, 48 bytes, inline, placed by class name
    // ref_counter<oldscape::sound::JagVorbis>::DeleteData()
    void ref_counter<oldscape::sound::JagVorbis>::DeleteData() {
        JagVorbis* this_00;

        this_00 = *(JagVorbis**)(this + 16);
        if (this_00 != (JagVorbis*)0) {
            this_00->~JagVorbis();
            operator_delete(this_00);
        }
        *(undefined8*)(this + 16) = 0;
    }

    // 0x1002e29b0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>::ref_counter_shared(unsigned long, oldscape::jagex3::Js5RemoteLoader::Js5Remote*): jumps straight to the base-object constructor

    // 0x1002e29c0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>::ref_counter_shared(unsigned long, oldscape::jagex3::Js5RemoteLoader::Js5Remote*)
    void ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>::ref_counter_shared(ulong param_1,
                                                                                              Js5Remote* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7808 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Js5Remote**)(this + 24) = param_2;
    }

    // 0x1002e2a00, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>::DeleteData()
    /* ref_counter_shared<oldscape::midi2::StartSongTask>::DeleteData() */

    void ref_counter_shared<oldscape::midi2::StartSongTask>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 104;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1002e2f20, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<graphics::FontMetrics>::ref_counter_shared(unsigned long, graphics::FontMetrics*): jumps straight to the base-object constructor

    // 0x1002e2f30, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<graphics::FontMetrics>::ref_counter_shared(unsigned long, graphics::FontMetrics*)
    void ref_counter_shared<graphics::FontMetrics>::ref_counter_shared(ulong param_1, FontMetrics* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7510 + 16;
        *(ulong*)(this + 16) = param_1;
        *(FontMetrics**)(this + 24) = param_2;
    }

    // 0x1002e2f70, 96 bytes, inline, placed by class header (inline)
    // ref_counter_shared<graphics::FontMetrics>::DeleteData()
    void ref_counter_shared<graphics::FontMetrics>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 13696;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1002e3210, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<math::QuaternionT<float> >::ref_counter_shared_trivial(unsigned long, math::QuaternionT<float>*): jumps straight to the base-object constructor

    // 0x1002e3220, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<math::QuaternionT<float> >::ref_counter_shared_trivial(unsigned long, math::QuaternionT<float>*)
    void ref_counter_shared_trivial<math::QuaternionT<float>>::ref_counter_shared_trivial(ulong param_1,
                                                                                          QuaternionT* param_2) {
        new (param_1) ref_counter_base();
        *(undefined**)param_1 = PTR_vtable_100ee7c50 + 16;
    }

    // 0x1002e3310, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<math::Vector3T<float> >::ref_counter_shared_trivial(unsigned long, math::Vector3T<float>*): jumps straight to the base-object constructor

    // 0x1002e3320, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<math::Vector3T<float> >::ref_counter_shared_trivial(unsigned long, math::Vector3T<float>*)
    void ref_counter_shared_trivial<math::Vector3T<float>>::ref_counter_shared_trivial(ulong param_1,
                                                                                       Vector3T* param_2) {
        new (param_1) ref_counter_base();
        *(undefined**)param_1 = PTR_vtable_100ee7c58 + 16;
    }

    // 0x1002e3be0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::math::RotTrans>::ref_counter_shared(unsigned long, oldscape::math::RotTrans*): jumps straight to the base-object constructor

    // 0x1002e3bf0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::math::RotTrans>::ref_counter_shared(unsigned long, oldscape::math::RotTrans*)
    void ref_counter_shared<oldscape::math::RotTrans>::ref_counter_shared(ulong param_1, RotTrans* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7668 + 16;
        *(ulong*)(this + 16) = param_1;
        *(RotTrans**)(this + 24) = param_2;
    }

    // 0x1002e3c30, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::math::RotTrans>::DeleteData()
    void ref_counter_shared<oldscape::math::RotTrans>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ResolvedModel();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 48;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1002e3fa0, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<oldscape::midi2::MidiFile>::ref_counter(oldscape::midi2::MidiFile*): jumps straight to the base-object constructor

    // 0x1002e3fb0, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<oldscape::midi2::MidiFile>::ref_counter(oldscape::midi2::MidiFile*)
    void ref_counter<oldscape::midi2::MidiFile>::ref_counter(MidiFile* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7048 + 16;
        *(MidiFile**)(this + 16) = param_1;
    }

    // 0x1002e3fe0, 48 bytes, inline, placed by class name
    // ref_counter<oldscape::midi2::MidiFile>::DeleteData()
    void ref_counter<oldscape::midi2::MidiFile>::DeleteData() {
        MidiFile* this_00;

        this_00 = *(MidiFile**)(this + 16);
        if (this_00 != (MidiFile*)0) {
            this_00->~MidiFile();
            operator_delete(this_00);
        }
        *(undefined8*)(this + 16) = 0;
    }

    // 0x1002e4dd0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::AddRequestTask>::ref_counter_shared(unsigned long, oldscape::midi2::AddRequestTask*): jumps straight to the base-object constructor

    // 0x1002e4de0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::AddRequestTask>::ref_counter_shared(unsigned long, oldscape::midi2::AddRequestTask*)
    void ref_counter_shared<oldscape::midi2::AddRequestTask>::ref_counter_shared(ulong param_1,
                                                                                 AddRequestTask* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee76b0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(AddRequestTask**)(this + 24) = param_2;
    }

    // 0x1002e4e20, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::AddRequestTask>::DeleteData()
    /* ref_counter_shared<oldscape::midi2::FadeInTask>::DeleteData() */

    void ref_counter_shared<oldscape::midi2::FadeInTask>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 120;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1002e5040, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::LoadSongTask>::ref_counter_shared(unsigned long, oldscape::midi2::LoadSongTask*): jumps straight to the base-object constructor

    // 0x1002e5050, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::LoadSongTask>::ref_counter_shared(unsigned long, oldscape::midi2::LoadSongTask*)
    void ref_counter_shared<oldscape::midi2::LoadSongTask>::ref_counter_shared(ulong param_1, LoadSongTask* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7690 + 16;
        *(ulong*)(this + 16) = param_1;
        *(LoadSongTask**)(this + 24) = param_2;
    }

    // 0x1002e5170, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::FadeInTask>::ref_counter_shared(unsigned long, oldscape::midi2::FadeInTask*): jumps straight to the base-object constructor

    // 0x1002e5180, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::FadeInTask>::ref_counter_shared(unsigned long, oldscape::midi2::FadeInTask*)
    void ref_counter_shared<oldscape::midi2::FadeInTask>::ref_counter_shared(ulong param_1, FadeInTask* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7670 + 16;
        *(ulong*)(this + 16) = param_1;
        *(FadeInTask**)(this + 24) = param_2;
    }

    // 0x1002e5240, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::StartSongTask>::ref_counter_shared(unsigned long, oldscape::midi2::StartSongTask*): jumps straight to the base-object constructor

    // 0x1002e5250, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::StartSongTask>::ref_counter_shared(unsigned long, oldscape::midi2::StartSongTask*)
    void ref_counter_shared<oldscape::midi2::StartSongTask>::ref_counter_shared(ulong param_1, StartSongTask* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee76a8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(StartSongTask**)(this + 24) = param_2;
    }

    // 0x1002e5450, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::ConcurrentMidiTask>::ref_counter_shared(unsigned long, oldscape::midi2::ConcurrentMidiTask*): jumps straight to the base-object constructor

    // 0x1002e5460, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::ConcurrentMidiTask>::ref_counter_shared(unsigned long, oldscape::midi2::ConcurrentMidiTask*)
    void ref_counter_shared<oldscape::midi2::ConcurrentMidiTask>::ref_counter_shared(ulong param_1,
                                                                                     ConcurrentMidiTask* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee76c0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ConcurrentMidiTask**)(this + 24) = param_2;
    }

    // 0x1002e5520, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::DelayFadeTask>::ref_counter_shared(unsigned long, oldscape::midi2::DelayFadeTask*): jumps straight to the base-object constructor

    // 0x1002e5530, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::DelayFadeTask>::ref_counter_shared(unsigned long, oldscape::midi2::DelayFadeTask*)
    void ref_counter_shared<oldscape::midi2::DelayFadeTask>::ref_counter_shared(ulong param_1, DelayFadeTask* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee76a0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DelayFadeTask**)(this + 24) = param_2;
    }

    // 0x1002e5600, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::ClearRequestTask>::ref_counter_shared(unsigned long, oldscape::midi2::ClearRequestTask*): jumps straight to the base-object constructor

    // 0x1002e5610, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::ClearRequestTask>::ref_counter_shared(unsigned long, oldscape::midi2::ClearRequestTask*)
    void ref_counter_shared<oldscape::midi2::ClearRequestTask>::ref_counter_shared(ulong param_1,
                                                                                   ClearRequestTask* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee76b8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ClearRequestTask**)(this + 24) = param_2;
    }

    // 0x1002e56e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::FadeOutTask>::ref_counter_shared(unsigned long, oldscape::midi2::FadeOutTask*): jumps straight to the base-object constructor

    // 0x1002e56f0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::FadeOutTask>::ref_counter_shared(unsigned long, oldscape::midi2::FadeOutTask*)
    void ref_counter_shared<oldscape::midi2::FadeOutTask>::ref_counter_shared(ulong param_1, FadeOutTask* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7680 + 16;
        *(ulong*)(this + 16) = param_1;
        *(FadeOutTask**)(this + 24) = param_2;
    }

    // 0x1002e58e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::SwapSongTask>::ref_counter_shared(unsigned long, oldscape::midi2::SwapSongTask*): jumps straight to the base-object constructor

    // 0x1002e58f0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::SwapSongTask>::ref_counter_shared(unsigned long, oldscape::midi2::SwapSongTask*)
    void ref_counter_shared<oldscape::midi2::SwapSongTask>::ref_counter_shared(ulong param_1, SwapSongTask* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7698 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SwapSongTask**)(this + 24) = param_2;
    }

    // 0x1002e62a0, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::midi2::MidiNote> >::ref_counter(Linkable<oldscape::midi2::MidiNote>*): jumps straight to the base-object constructor

    // 0x1002e62b0, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::midi2::MidiNote> >::ref_counter(Linkable<oldscape::midi2::MidiNote>*)
    void ref_counter<Linkable<oldscape::midi2::MidiNote>>::ref_counter(Linkable* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee6ff8 + 16;
        *(Linkable**)(this + 16) = param_1;
    }

    // 0x1002e6660, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::MidiMixer>::ref_counter_shared(unsigned long, oldscape::midi2::MidiMixer*): jumps straight to the base-object constructor

    // 0x1002e6670, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::MidiMixer>::ref_counter_shared(unsigned long, oldscape::midi2::MidiMixer*)
    void ref_counter_shared<oldscape::midi2::MidiMixer>::ref_counter_shared(ulong param_1, MidiMixer* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee76d8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(MidiMixer**)(this + 24) = param_2;
    }

    // 0x1002e66b0, 96 bytes, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::MidiMixer>::DeleteData()
    void ref_counter_shared<oldscape::midi2::MidiMixer>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 272;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1002e6940, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<oldscape::midi2::Patch>::ref_counter(oldscape::midi2::Patch*): jumps straight to the base-object constructor

    // 0x1002e6950, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<oldscape::midi2::Patch>::ref_counter(oldscape::midi2::Patch*)
    void ref_counter<oldscape::midi2::Patch>::ref_counter(Patch* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7040 + 16;
        *(Patch**)(this + 16) = param_1;
    }

    // 0x1002e6980, 48 bytes, inline, placed by class name
    // ref_counter<oldscape::midi2::Patch>::DeleteData()
    void ref_counter<oldscape::midi2::Patch>::DeleteData() {
        Patch* this_00;

        this_00 = *(Patch**)(this + 16);
        if (this_00 != (Patch*)0) {
            this_00->~Patch();
            operator_delete(this_00);
        }
        *(undefined8*)(this + 16) = 0;
    }

    // 0x1002e7420, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<std::atomic<bool> >::ref_counter_shared_trivial(unsigned long, std::atomic<bool>*): jumps straight to the base-object constructor

    // 0x1002e7430, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared_trivial<std::atomic<bool> >::ref_counter_shared_trivial(unsigned long, std::atomic<bool>*)
    /* ref_counter_shared_trivial<std::atomic<bool> >::ref_counter_shared_trivial(unsigned long,
   std::atomic<bool>*) */

    void ref_counter_shared_trivial<std::atomic<bool>>::ref_counter_shared_trivial(ulong param_1, atomic* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d58 + 16;
    }

    // 0x1002ea520, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::MidiNote>::ref_counter_shared(unsigned long, oldscape::midi2::MidiNote*): jumps straight to the base-object constructor

    // 0x1002ea530, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::MidiNote>::ref_counter_shared(unsigned long, oldscape::midi2::MidiNote*)
    void ref_counter_shared<oldscape::midi2::MidiNote>::ref_counter_shared(ulong param_1, MidiNote* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee76d0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(MidiNote**)(this + 24) = param_2;
    }

    // 0x1002ea570, 96 bytes, inline, placed by class header (inline)
    // ref_counter_shared<oldscape::midi2::MidiNote>::DeleteData()
    void ref_counter_shared<oldscape::midi2::MidiNote>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 176;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1002eb580, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<oldscape::midi2::EnvelopeSet>::ref_counter(oldscape::midi2::EnvelopeSet*): jumps straight to the base-object constructor

    // 0x1002eb590, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<oldscape::midi2::EnvelopeSet>::ref_counter(oldscape::midi2::EnvelopeSet*)
    void ref_counter<oldscape::midi2::EnvelopeSet>::ref_counter(EnvelopeSet* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7038 + 16;
        *(EnvelopeSet**)(this + 16) = param_1;
    }

    // 0x1002eb5c0, 48 bytes, inline, placed by class name
    // ref_counter<oldscape::midi2::EnvelopeSet>::DeleteData()
    void ref_counter<oldscape::midi2::EnvelopeSet>::DeleteData() {
        EnvelopeSet* this_00;

        this_00 = *(EnvelopeSet**)(this + 16);
        if (this_00 != (EnvelopeSet*)0) {
            this_00->~EnvelopeSet();
            operator_delete(this_00);
        }
        *(undefined8*)(this + 16) = 0;
    }

    // 0x100330500, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<Array<unsigned int, eastl::allocator> >::ref_counter(Array<unsigned int, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x100330510, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<Array<unsigned int, eastl::allocator> >::ref_counter(Array<unsigned int, eastl::allocator>*)
    void ref_counter<Array<unsigned int, eastl::allocator>>::ref_counter(
        ref_counter<Array<unsigned int, eastl::allocator>>* this, Array* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee6ff0 + 16;
        *(Array**)(this + 16) = param_1;
    }

    // 0x100330540, 48 bytes, inline, placed by class name
    // ref_counter<Array<unsigned int, eastl::allocator> >::DeleteData()
    void ref_counter<Array<unsigned int, eastl::allocator>>::DeleteData(
        ref_counter<Array<unsigned int, eastl::allocator>>* this) {
        Array<unsigned int, eastl::allocator>* this_00;

        this_00 = *(Array<unsigned int, eastl::allocator>**)(this + 16);
        if (this_00 != (Array<unsigned int, eastl::allocator>*)0) {
            this_00->~Array();
            operator_delete(this_00);
        }
        *(undefined8*)(this + 16) = 0;
    }

    // 0x100330800, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::dash3d::Texture> >::ref_counter(Linkable<oldscape::dash3d::Texture>*): jumps straight to the base-object constructor

    // 0x100330810, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::dash3d::Texture> >::ref_counter(Linkable<oldscape::dash3d::Texture>*)
    void ref_counter<Linkable<oldscape::dash3d::Texture>>::ref_counter(Linkable* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7018 + 16;
        *(Linkable**)(this + 16) = param_1;
    }

    // 0x100332030, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::dash3d::Square> >::ref_counter(Linkable<oldscape::dash3d::Square>*): jumps straight to the base-object constructor

    // 0x100332040, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<Linkable<oldscape::dash3d::Square> >::ref_counter(Linkable<oldscape::dash3d::Square>*)
    void ref_counter<Linkable<oldscape::dash3d::Square>>::ref_counter(Linkable* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7010 + 16;
        *(Linkable**)(this + 16) = param_1;
    }

    // 0x100337970, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>::ref_counter(oldscape::graphics::animation::OldscapeAnimKeyFrameSet*): jumps straight to the base-object constructor

    // 0x100337980, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>::ref_counter(oldscape::graphics::animation::OldscapeAnimKeyFrameSet*)
    void
    ref_counter<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>::ref_counter(OldscapeAnimKeyFrameSet* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7088 + 16;
        *(OldscapeAnimKeyFrameSet**)(this + 16) = param_1;
    }

    // 0x1003379b0, 48 bytes, inline, placed by class name
    // ref_counter<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>::DeleteData()
    void ref_counter<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>::DeleteData() {
        OldscapeAnimKeyFrameSet* this_00;

        this_00 = *(OldscapeAnimKeyFrameSet**)(this + 16);
        if (this_00 != (OldscapeAnimKeyFrameSet*)0) {
            this_00->~OldscapeAnimKeyFrameSet();
            operator_delete(this_00);
        }
        *(undefined8*)(this + 16) = 0;
    }

    // 0x1003395c0, 16 bytes, complete-object constructor, inline, placed by class name
    // ref_counter<oldscape::dash3d::AnimBase>::ref_counter(oldscape::dash3d::AnimBase*): jumps straight to the base-object constructor

    // 0x1003395d0, 48 bytes, base-object constructor, inline, placed by class name
    // ref_counter<oldscape::dash3d::AnimBase>::ref_counter(oldscape::dash3d::AnimBase*)
    void ref_counter<oldscape::dash3d::AnimBase>::ref_counter(AnimBase* param_1) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7070 + 16;
        *(AnimBase**)(this + 16) = param_1;
    }

    // 0x100339600, 48 bytes, inline, placed by class name
    // ref_counter<oldscape::dash3d::AnimBase>::DeleteData()
    void ref_counter<oldscape::dash3d::AnimBase>::DeleteData() {
        AnimBase* this_00;

        this_00 = *(AnimBase**)(this + 16);
        if (this_00 != (AnimBase*)0) {
            this_00->~AnimBase();
            operator_delete(this_00);
        }
        *(undefined8*)(this + 16) = 0;
    }

    // 0x10046c790, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<graphics::EquirectangularRenderer>::ref_counter_shared(unsigned long, graphics::EquirectangularRenderer*): jumps straight to the base-object constructor

    // 0x10046c7a0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<graphics::EquirectangularRenderer>::ref_counter_shared(unsigned long, graphics::EquirectangularRenderer*)
    void ref_counter_shared<graphics::EquirectangularRenderer>::ref_counter_shared(ulong param_1,
                                                                                   EquirectangularRenderer* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7550 + 16;
        *(ulong*)(this + 16) = param_1;
        *(EquirectangularRenderer**)(this + 24) = param_2;
    }

    // 0x10046cc30, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<game::World>::ref_counter_shared(unsigned long, game::World*): jumps straight to the base-object constructor

    // 0x10046cc40, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<game::World>::ref_counter_shared(unsigned long, game::World*)
    void ref_counter_shared<game::World>::ref_counter_shared(ulong param_1, World* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee73a8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(World**)(this + 24) = param_2;
    }

    // 0x10046cc80, 96 bytes, inline, placed by class header (inline)
    // ref_counter_shared<game::World>::DeleteData()
    void ref_counter_shared<game::World>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (**(code**)(*(long*)(*(long*)(this + 24) + lVar1) + 16))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 950816;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100482560, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x100482570, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>*)
    void ref_counter_shared<eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>>* this, ulong param_1,
        fixed_vector* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee71b8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(fixed_vector**)(this + 24) = param_2;
    }

    // 0x1004825b0, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator> >::DeleteData()
    void ref_counter_shared<eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>>::DeleteData(
        ref_counter_shared<eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~fixed_vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 280;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1004b2230, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x1004b2240, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator>*)
    void
    jag::ref_counter_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                                4ul, true, eastl::allocator>>::
        ref_counter_shared(
            ref_counter_shared<
                eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true,
                                    eastl::allocator>>* this,
            ulong param_1, fixed_vector* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee71a8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(fixed_vector**)(this + 24) = param_2;
    }

    // 0x1004b2280, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> >::DeleteData()
    void
    jag::ref_counter_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                                4ul, true, eastl::allocator>>::
        DeleteData(ref_counter_shared<
                   eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true,
                                       eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~fixed_vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 168;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100623c80, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<game::Entity>::ref_counter_shared(unsigned long, game::Entity*): jumps straight to the base-object constructor

    // 0x100623c90, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<game::Entity>::ref_counter_shared(unsigned long, game::Entity*)
    void ref_counter_shared<game::Entity>::ref_counter_shared(ulong param_1, Entity* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee73b0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Entity**)(this + 24) = param_2;
    }

    // 0x100623e30, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<game::camera::OldShake>::ref_counter_shared(unsigned long, game::camera::OldShake*): jumps straight to the base-object constructor

    // 0x100623e40, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<game::camera::OldShake>::ref_counter_shared(unsigned long, game::camera::OldShake*)
    void ref_counter_shared<game::camera::OldShake>::ref_counter_shared(ulong param_1, OldShake* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee73c8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(OldShake**)(this + 24) = param_2;
    }

    // 0x100875860, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<graphics::TextureAtlas>::ref_counter_shared(unsigned long, graphics::TextureAtlas*): jumps straight to the base-object constructor

    // 0x100875870, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<graphics::TextureAtlas>::ref_counter_shared(unsigned long, graphics::TextureAtlas*)
    void ref_counter_shared<graphics::TextureAtlas>::ref_counter_shared(ulong param_1, TextureAtlas* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7520 + 16;
        *(ulong*)(this + 16) = param_1;
        *(TextureAtlas**)(this + 24) = param_2;
    }

    // 0x1008758b0, 96 bytes, inline, placed by class header (inline)
    // ref_counter_shared<graphics::TextureAtlas>::DeleteData()
    void ref_counter_shared<graphics::TextureAtlas>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 190992;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10087fd10, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<graphics::TextureData>::ref_counter_shared(unsigned long, graphics::TextureData*): jumps straight to the base-object constructor

    // 0x10087fd20, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<graphics::TextureData>::ref_counter_shared(unsigned long, graphics::TextureData*)
    void ref_counter_shared<graphics::TextureData>::ref_counter_shared(ulong param_1, TextureData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7518 + 16;
        *(ulong*)(this + 16) = param_1;
        *(TextureData**)(this + 24) = param_2;
    }

    // 0x10087fd60, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<graphics::TextureData>::DeleteData()
    void ref_counter_shared<graphics::TextureData>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~TextureData();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10089c110, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<graphics::Shader>::ref_counter_shared(unsigned long, graphics::Shader*): jumps straight to the base-object constructor

    // 0x10089c120, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<graphics::Shader>::ref_counter_shared(unsigned long, graphics::Shader*)
    void ref_counter_shared<graphics::Shader>::ref_counter_shared(ulong param_1, Shader* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7588 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Shader**)(this + 24) = param_2;
    }

    // 0x10089c160, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<graphics::Shader>::DeleteData()
    void ref_counter_shared<graphics::Shader>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Shader();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 1920;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1009116c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayMainFPS>::ref_counter_shared(unsigned long, DebugOverlayMainFPS*): jumps straight to the base-object constructor

    // 0x1009116d0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayMainFPS>::ref_counter_shared(unsigned long, DebugOverlayMainFPS*)
    void ref_counter_shared<DebugOverlayMainFPS>::ref_counter_shared(ulong param_1, DebugOverlayMainFPS* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7280 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayMainFPS**)(this + 24) = param_2;
    }

    // 0x100911710, 96 bytes, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayMainFPS>::DeleteData()
    /* ref_counter_shared<DebugOverlayRenderFPS>::DeleteData() */

    void ref_counter_shared<DebugOverlayRenderFPS>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 98696;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1009117f0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayRenderFPS>::ref_counter_shared(unsigned long, DebugOverlayRenderFPS*): jumps straight to the base-object constructor

    // 0x100911800, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayRenderFPS>::ref_counter_shared(unsigned long, DebugOverlayRenderFPS*)
    void ref_counter_shared<DebugOverlayRenderFPS>::ref_counter_shared(ulong param_1, DebugOverlayRenderFPS* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7298 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayRenderFPS**)(this + 24) = param_2;
    }

    // 0x100911880, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayLPS>::ref_counter_shared(unsigned long, DebugOverlayLPS*): jumps straight to the base-object constructor

    // 0x100911890, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayLPS>::ref_counter_shared(unsigned long, DebugOverlayLPS*)
    void ref_counter_shared<DebugOverlayLPS>::ref_counter_shared(ulong param_1, DebugOverlayLPS* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7250 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayLPS**)(this + 24) = param_2;
    }

    // 0x1009118d0, 96 bytes, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayLPS>::DeleteData()
    /* ref_counter_shared<DebugOverlayDiskCache>::DeleteData() */

    void ref_counter_shared<DebugOverlayDiskCache>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 98680;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100911970, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayParticlesSimulation>::ref_counter_shared(unsigned long, DebugOverlayParticlesSimulation*): jumps straight to the base-object constructor

    // 0x100911980, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayParticlesSimulation>::ref_counter_shared(unsigned long, DebugOverlayParticlesSimulation*)
    void
    ref_counter_shared<DebugOverlayParticlesSimulation>::ref_counter_shared(ulong param_1,
                                                                            DebugOverlayParticlesSimulation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee72c8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayParticlesSimulation**)(this + 24) = param_2;
    }

    // 0x1009119c0, 96 bytes, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayParticlesSimulation>::DeleteData()
    void ref_counter_shared<DebugOverlayParticlesSimulation>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 98800;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100911a60, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayParticlesRender>::ref_counter_shared(unsigned long, DebugOverlayParticlesRender*): jumps straight to the base-object constructor

    // 0x100911a70, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayParticlesRender>::ref_counter_shared(unsigned long, DebugOverlayParticlesRender*)
    void ref_counter_shared<DebugOverlayParticlesRender>::ref_counter_shared(ulong param_1,
                                                                             DebugOverlayParticlesRender* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee72c0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayParticlesRender**)(this + 24) = param_2;
    }

    // 0x100911ab0, 96 bytes, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayParticlesRender>::DeleteData()
    void ref_counter_shared<DebugOverlayParticlesRender>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 99088;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100911b50, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayGPU>::ref_counter_shared(unsigned long, DebugOverlayGPU*): jumps straight to the base-object constructor

    // 0x100911b60, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayGPU>::ref_counter_shared(unsigned long, DebugOverlayGPU*)
    void ref_counter_shared<DebugOverlayGPU>::ref_counter_shared(ulong param_1, DebugOverlayGPU* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7248 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayGPU**)(this + 24) = param_2;
    }

    // 0x100911ba0, 96 bytes, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayGPU>::DeleteData()
    /* ref_counter_shared<DebugOverlayRender>::DeleteData() */

    void ref_counter_shared<DebugOverlayRender>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 98656;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100911c40, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayRender>::ref_counter_shared(unsigned long, DebugOverlayRender*): jumps straight to the base-object constructor

    // 0x100911c50, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayRender>::ref_counter_shared(unsigned long, DebugOverlayRender*)
    void ref_counter_shared<DebugOverlayRender>::ref_counter_shared(ulong param_1, DebugOverlayRender* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7278 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayRender**)(this + 24) = param_2;
    }

    // 0x100911cd0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayShaderProfiler>::ref_counter_shared(unsigned long, DebugOverlayShaderProfiler*): jumps straight to the base-object constructor

    // 0x100911ce0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayShaderProfiler>::ref_counter_shared(unsigned long, DebugOverlayShaderProfiler*)
    void ref_counter_shared<DebugOverlayShaderProfiler>::ref_counter_shared(ulong param_1,
                                                                            DebugOverlayShaderProfiler* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee72b8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayShaderProfiler**)(this + 24) = param_2;
    }

    // 0x100911d60, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayTextureAtlas>::ref_counter_shared(unsigned long, DebugOverlayTextureAtlas*): jumps straight to the base-object constructor

    // 0x100911d70, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayTextureAtlas>::ref_counter_shared(unsigned long, DebugOverlayTextureAtlas*)
    void ref_counter_shared<DebugOverlayTextureAtlas>::ref_counter_shared(ulong param_1,
                                                                          DebugOverlayTextureAtlas* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee72b0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayTextureAtlas**)(this + 24) = param_2;
    }

    // 0x100911df0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayGPUStats>::ref_counter_shared(unsigned long, DebugOverlayGPUStats*): jumps straight to the base-object constructor

    // 0x100911e00, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayGPUStats>::ref_counter_shared(unsigned long, DebugOverlayGPUStats*)
    void ref_counter_shared<DebugOverlayGPUStats>::ref_counter_shared(ulong param_1, DebugOverlayGPUStats* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7288 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayGPUStats**)(this + 24) = param_2;
    }

    // 0x100911e80, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayMemory>::ref_counter_shared(unsigned long, DebugOverlayMemory*): jumps straight to the base-object constructor

    // 0x100911e90, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayMemory>::ref_counter_shared(unsigned long, DebugOverlayMemory*)
    void ref_counter_shared<DebugOverlayMemory>::ref_counter_shared(ulong param_1, DebugOverlayMemory* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7270 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayMemory**)(this + 24) = param_2;
    }

    // 0x100911ed0, 96 bytes, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayMemory>::DeleteData()
    /* ref_counter_shared<DebugOverlayMemoryCache>::DeleteData() */

    void ref_counter_shared<DebugOverlayMemoryCache>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 98672;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100911f70, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayMemoryCache>::ref_counter_shared(unsigned long, DebugOverlayMemoryCache*): jumps straight to the base-object constructor

    // 0x100911f80, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayMemoryCache>::ref_counter_shared(unsigned long, DebugOverlayMemoryCache*)
    void ref_counter_shared<DebugOverlayMemoryCache>::ref_counter_shared(ulong param_1,
                                                                         DebugOverlayMemoryCache* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee72a8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayMemoryCache**)(this + 24) = param_2;
    }

    // 0x100912000, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayDiskCache>::ref_counter_shared(unsigned long, DebugOverlayDiskCache*): jumps straight to the base-object constructor

    // 0x100912010, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayDiskCache>::ref_counter_shared(unsigned long, DebugOverlayDiskCache*)
    void ref_counter_shared<DebugOverlayDiskCache>::ref_counter_shared(ulong param_1, DebugOverlayDiskCache* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7290 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayDiskCache**)(this + 24) = param_2;
    }

    // 0x100912090, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayAllocations>::ref_counter_shared(unsigned long, DebugOverlayAllocations*): jumps straight to the base-object constructor

    // 0x1009120a0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayAllocations>::ref_counter_shared(unsigned long, DebugOverlayAllocations*)
    void ref_counter_shared<DebugOverlayAllocations>::ref_counter_shared(ulong param_1,
                                                                         DebugOverlayAllocations* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee72a0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayAllocations**)(this + 24) = param_2;
    }

    // 0x1009120e0, 96 bytes, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayAllocations>::DeleteData()
    void ref_counter_shared<DebugOverlayAllocations>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 98736;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100912180, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayPools>::ref_counter_shared(unsigned long, DebugOverlayPools*): jumps straight to the base-object constructor

    // 0x100912190, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayPools>::ref_counter_shared(unsigned long, DebugOverlayPools*)
    void ref_counter_shared<DebugOverlayPools>::ref_counter_shared(ulong param_1, DebugOverlayPools* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7258 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOverlayPools**)(this + 24) = param_2;
    }

    // 0x1009121d0, 96 bytes, inline, placed by class header (inline)
    // ref_counter_shared<DebugOverlayPools>::DeleteData()
    void ref_counter_shared<DebugOverlayPools>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 328;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100a0b440, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<ClientStream>::ref_counter_shared(unsigned long, ClientStream*): jumps straight to the base-object constructor

    // 0x100a0b450, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<ClientStream>::ref_counter_shared(unsigned long, ClientStream*)
    void ref_counter_shared<ClientStream>::ref_counter_shared(ulong param_1, ClientStream* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7238 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ClientStream**)(this + 24) = param_2;
    }

    // 0x100a0b490, 80 bytes, inline, placed by class header (inline)
    // ref_counter_shared<ClientStream>::DeleteData()
    void ref_counter_shared<ClientStream>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ClientStream();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 272;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100bbfbe0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<render::TextureCube>::ref_counter_shared(unsigned long, render::TextureCube*): jumps straight to the base-object constructor

    // 0x100bbfbf0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ref_counter_shared<render::TextureCube>::ref_counter_shared(unsigned long, render::TextureCube*)
    void ref_counter_shared<render::TextureCube>::ref_counter_shared(ulong param_1, TextureCube* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee74b0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(TextureCube**)(this + 24) = param_2;
    }

} // namespace jag
