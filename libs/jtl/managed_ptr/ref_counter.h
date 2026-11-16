// libs/jtl/managed_ptr/ref_counter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <
        typename...> // 20 instantiations, e.g. <Array<unsigned int> >, <Linkable<oldscape::dash3d::Square> >, <Linkable<oldscape::dash3d::Texture> >
    class ref_counter {
    public:
        // virtual methods in vtable order
        virtual void DeleteData();
        virtual void DeleteSelf();
        ref_counter(oldscape::sound::Wave* wave);
        ref_counter(oldscape::sound::WaveStream* waveStream);
        ref_counter(Linkable<oldscape::sound::PCMStream>* linkable);
        ref_counter(Linkable<oldscape::sound::MixerController>* linkable);
        ref_counter(oldscape::sound::JagFX* jagFX);
        ref_counter(oldscape::input::InputForm* inputForm);
        ref_counter(oldscape::rs2lib::worldmap::MultiLocMapElement* multiLocMapElement);
        ref_counter(oldscape::rs2lib::worldmap::StaticMapElement* staticMapElement);
        ref_counter(Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>* linkable);
        ref_counter(Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* linkable);
        ref_counter(oldscape::sound::JagVorbis* jagVorbis);
        ref_counter(oldscape::midi2::MidiFile* midiFile);
        ref_counter(Linkable<oldscape::midi2::MidiNote>* linkable);
        ref_counter(oldscape::midi2::Patch* patch);
        ref_counter(oldscape::midi2::EnvelopeSet* envelopeSet);
        ref_counter(Array<unsigned int>* arg1);
        ref_counter(Linkable<oldscape::dash3d::Texture>* linkable);
        ref_counter(Linkable<oldscape::dash3d::Square>* linkable);
        ref_counter(oldscape::graphics::animation::OldscapeAnimKeyFrameSet* oldscapeAnimKeyFrameSet);
        ref_counter(oldscape::dash3d::AnimBase* animBase);
    };

    class ref_counter_base {
    public:
        // virtual methods in vtable order
        virtual ~ref_counter_base();
        ref_counter_base();
        unsigned long IncRefIfNZ();
        void GetRefCount() const;
        void IncWRef();
        void DecRef();
        void DecWRef();
        void IncRef();

    private:
        uint8_t _unknown_8[12];
    };

    template <typename...> // 260 instantiations, e.g. <Js5WorkerThread>, <MixerWorker>, <VorbisWorker>
    class ref_counter_shared {
    public:
        // virtual methods in vtable order
        virtual void DeleteData();
        virtual void DeleteSelf();
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::worldmap::WorldmapAreaMetadata* worldmapAreaMetadata);
        ref_counter_shared(unsigned long arg1,
                           oldscape::FolderSelection::FolderSelectionRequest* folderSelectionRequest);
        ref_counter_shared(unsigned long arg1, oldscape::FileRSevenDebugPresetProvider* fileRSevenDebugPresetProvider);
        ref_counter_shared(unsigned long arg1, oldscape::highlight::HighlightManager* highlightManager);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::PlayerModel* playerModel);
        ref_counter_shared(unsigned long arg1, oldscape::sound::Mixer* mixer);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::MidiPlayer* midiPlayer);
        ref_counter_shared(unsigned long arg1, oldscape::sound::Decimator* decimator);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::OldscapeVarTypeList* oldscapeVarTypeList);
        ref_counter_shared(unsigned long arg1, Array<oldscape::graphics::Pix8>* pix8s);
        ref_counter_shared(unsigned long arg1, Array<oldscape::graphics::Pix32>* pix32s);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::TextureCache* textureCache);
        ref_counter_shared(unsigned long arg1, oldscape::PacketJ<Array<unsigned char>>* packetJ);
        ref_counter_shared(unsigned long arg1, oldscape::LogFileSink* logFileSink);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::MidiRequest* midiRequest);
        ref_counter_shared(unsigned long arg1, oldscape::DesktopApplicationContext* desktopApplicationContext);
        ref_counter_shared(unsigned long arg1, oldscape::ClientLocAnim* clientLocAnim);
        ref_counter_shared(unsigned long arg1, oldscape::MapSpotAnim* mapSpotAnim);
        ref_counter_shared(unsigned long arg1, oldscape::ClientProj* clientProj);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::ClanChannel* clanChannel);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::ClanSettings* clanSettings);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::ClanChannelDelta* clanChannelDelta);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta* clanSettingsDelta);
        ref_counter_shared(unsigned long arg1, game::VarContainerSparse* varContainerSparse);
        ref_counter_shared(unsigned long arg1, oldscape::ClientObj* clientObj);
        ref_counter_shared(unsigned long arg1, oldscape::ClientNpc* clientNpc);
        ref_counter_shared(unsigned long arg1, oldscape::ClientPlayer* clientPlayer);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::HeadbarQueue* headbarQueue);
        ref_counter_shared(unsigned long arg1, Js5WorkerThread* js5WorkerThread);
        ref_counter_shared(unsigned long arg1, oldscape::PacketJ<Array<unsigned char>>* packetJ);
        ref_counter_shared(unsigned long arg1, oldscape::ChatLine* chatLine);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::DisplayName* displayName);
        ref_counter_shared(unsigned long arg1, oldscape::ClientScript* clientScript);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::IfType* ifType);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::OldscapeVarType* oldscapeVarType);
        ref_counter_shared(unsigned long arg1, Array<graphics::LabelData>* labelDatas);
        ref_counter_shared(unsigned long arg1, oldscape::rseven::DynamicGeometry* dynamicGeometry);
        ref_counter_shared(unsigned long arg1, game::StaticPointLight* staticPointLight);
        ref_counter_shared(unsigned long arg1, game::LightSource* lightSource);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::PoseStateProviderRSeven* poseStateProviderRSeven);
        ref_counter_shared(unsigned long arg1, graphics::Model* model);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::HttpSpriteData* httpSpriteData);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::InterfaceGraphicMask* interfaceGraphicMask);
        ref_counter_shared(unsigned long arg1, std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>* locationData);
        ref_counter_shared(unsigned long arg1, oldscape::graphics::Pix32* pix32);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::worldmap::StaticMapElement* staticMapElement);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::worldmap::MapSquareData* mapSquareData);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::worldmap::MapZoneData* mapZoneData);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::LocType* locType);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::NpcType* npcType);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::ObjType* objType);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::ObjSprite* objSprite);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::ObjTypeCustomisation* objTypeCustomisation);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::ParamType* paramType);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::SeqType* seqType);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::SpotType* spotType);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::StructType* structType);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::DBRowType* dbRowType);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::DBTableType* dbTableType);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::ClanChannelUser* clanChannelUser);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::ClanChannelDelta::AddUser* addUser);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::ClanChannelDelta::DeleteUser* deleteUser);
        ref_counter_shared(unsigned long arg1,
                           oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2* updateUserDetailsV2);
        ref_counter_shared(
            unsigned long arg1,
            oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings* updateClanChannelBaseSettings);
        ref_counter_shared(unsigned long arg1,
                           oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails* updateUserDetails);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::AddMember* addMember);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember* deleteMember);
        ref_counter_shared(unsigned long arg1,
                           oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank* setMemberRank);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::SetOwner* setOwner);
        ref_counter_shared(unsigned long arg1,
                           oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo* setMemberExtraInfo);
        ref_counter_shared(unsigned long arg1,
                           oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted* setMemberMuted);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::AddBanned* addBanned);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned* deleteBanned);
        ref_counter_shared(unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::SetClanName* setClanName);
        ref_counter_shared(unsigned long arg1,
                           oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*
                               updateClanSettingsBaseSettings);
        ref_counter_shared(unsigned long arg1,
                           oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt* setExtraSettingInt);
        ref_counter_shared(
            unsigned long arg1,
            oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit* setExtraSettingIntVarbit);
        ref_counter_shared(unsigned long arg1,
                           oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong* setExtraSettingLong);
        ref_counter_shared(unsigned long arg1,
                           oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString* setExtraSettingString);
        ref_counter_shared(unsigned long arg1,
                           oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1* addMemberOldV1);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::EnumType* enumType);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::HitmarkType* hitmarkType);
        ref_counter_shared(unsigned long arg1, oldscape::configdecoder::IdkType* idkType);
        ref_counter_shared(unsigned long arg1, oldscape::sound::WaveCache* waveCache);
        ref_counter_shared(unsigned long arg1,
                           eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                                 eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>*
                               priority_queue);
        ref_counter_shared(unsigned long arg1, oldscape::sound::DelayedStream* delayedStream);
        ref_counter_shared(unsigned long arg1, oldscape::sound::PCMPlayer::PlayerTask* playerTask);
        ref_counter_shared(unsigned long arg1, oldscape::sound::LazyWave::LazyWaveImpl* lazyWaveImpl);
        ref_counter_shared(unsigned long arg1, oldscape::jagex3::Js5LocalLoader::Js5Local* js5Local);
        ref_counter_shared(unsigned long arg1, oldscape::jagex3::Js5RemoteLoader::Js5Remote* js5Remote);
        ref_counter_shared(unsigned long arg1, graphics::FontMetrics* fontMetrics);
        ref_counter_shared(unsigned long arg1, oldscape::math::RotTrans* rotTrans);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::MidiFile* midiFile);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::AddRequestTask* addRequestTask);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::LoadSongTask* loadSongTask);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::FadeInTask* fadeInTask);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::StartSongTask* startSongTask);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::ConcurrentMidiTask* concurrentMidiTask);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::DelayFadeTask* delayFadeTask);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::ClearRequestTask* clearRequestTask);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::FadeOutTask* fadeOutTask);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::SwapSongTask* swapSongTask);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::MidiMixer* midiMixer);
        ref_counter_shared(unsigned long arg1, oldscape::midi2::MidiNote* midiNote);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::Square* square);
        ref_counter_shared(unsigned long arg1, RenderState::ModelSubmissionRSeven* modelSubmissionRSeven);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::ShareLightCache* shareLightCache);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::ShareLightOperation* shareLightOperation);
        ref_counter_shared(unsigned long arg1, oldscape::graphics::animation::OldscapeJoint* oldscapeJoint);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::Texture* texture);
        ref_counter_shared(unsigned long arg1, graphics::GeometryBatch* geometryBatch);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::Ground* ground);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::GroundDecor* groundDecor);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::GroundObject* groundObject);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::Wall* wall);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::Decor* decor);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::Sprite* sprite);
        ref_counter_shared(unsigned long arg1, Array<unsigned char>* arg2);
        ref_counter_shared(unsigned long arg1, oldscape::jstring::PixfontGeneric* pixfontGeneric);
        ref_counter_shared(unsigned long arg1, oldscape::graphics::animation::OldscapeAnimKey* oldscapeAnimKey);
        ref_counter_shared(unsigned long arg1, oldscape::graphics::animation::OldscapeAnimCurve* oldscapeAnimCurve);
        ref_counter_shared(
            unsigned long arg1,
            oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob* oldscapeAnimCurveLoadJob);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::ModelRSevenLit* modelRSevenLit);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::ModelLitImpl* modelLitImpl);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::OperationBuffer::OperationImpl* operationImpl);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::Skeleton* skeleton);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::AnimFrameSet* animFrameSet);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::AnimBase* animBase);
        ref_counter_shared(unsigned long arg1, Array<signed char>* arg2);
        ref_counter_shared(unsigned long arg1, Array<short>* arg2);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::SetModelOperation* setModelOperation);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::ModelRSevenUnlit* modelRSevenUnlit);
        ref_counter_shared(unsigned long arg1,
                           eastl::vector<oldscape::dash3d::CombineOperation::LabelShiftRange>* labelShiftRanges);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::CombineOperation* combineOperation);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::RecolourOperation* recolourOperation);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::DashAnimateOperation* dashAnimateOperation);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::MayaPoseStateRSeven* mayaPoseStateRSeven);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::AnimateOperation* animateOperation);
        ref_counter_shared(unsigned long arg1, Array<bool>* arg2);
        ref_counter_shared(unsigned long arg1, Array<int>* arg2);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::ModelUnlitImpl* modelUnlitImpl);
        ref_counter_shared(unsigned long arg1, Array<Array<int>>* arg2);
        ref_counter_shared(unsigned long arg1, Array<oldscape::dash3d::PointNormal>* pointNormals);
        ref_counter_shared(unsigned long arg1, Array<oldscape::dash3d::FaceNormal>* faceNormals);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::ChainedPoseStateRSeven* chainedPoseStateRSeven);
        ref_counter_shared(unsigned long arg1,
                           oldscape::dash3d::ShiftedLabelRangePoseStateRSeven* shiftedLabelRangePoseStateRSeven);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::MaskedDashPoseStateRSeven* maskedDashPoseStateRSeven);
        ref_counter_shared(unsigned long arg1, oldscape::dash3d::DashPoseStateRSeven* dashPoseStateRSeven);
        ref_counter_shared(
            unsigned long arg1,
            eastl::fixed_vector<
                eastl::fixed_vector<eastl::fixed_vector<shared_ptr<game::MapEnvironmentSettings>, 8ul>, 8ul>, 4ul>*
                mapEnvironmentSettingssss);
        ref_counter_shared(unsigned long arg1, eastl::vector<graphics::WaterPatchConfig>* waterPatchConfigs);
        ref_counter_shared(unsigned long arg1, game::RT5AnimationResourceManager* rt5AnimationResourceManager);
        ref_counter_shared(unsigned long arg1, eastl::vector<eastl::vector<int>>* arg2);
        ref_counter_shared(unsigned long arg1, EntityIcon* entityIcon);
        ref_counter_shared(unsigned long arg1, graphics::VFXAttachmentInfo* vfxAttachmentInfo);
        ref_counter_shared(unsigned long arg1, game::MapEnvironmentSettings* mapEnvironmentSettings);
        ref_counter_shared(unsigned long arg1, graphics::EquirectangularRenderer* equirectangularRenderer);
        ref_counter_shared(unsigned long arg1, game::World* world);
        ref_counter_shared(unsigned long arg1, eastl::fixed_vector<render::ImageData, 6ul>* imageDatas);
        ref_counter_shared(unsigned long arg1, eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>* arg2);
        ref_counter_shared(unsigned long arg1, game::NonSparseStringPool* nonSparseStringPool);
        ref_counter_shared(unsigned long arg1, game::SparseStringPool* sparseStringPool);
        ref_counter_shared(unsigned long arg1, game::SeqTypeSounds* seqTypeSounds);
        ref_counter_shared(unsigned long arg1, game::QuickChatPhraseType* quickChatPhraseType);
        ref_counter_shared(unsigned long arg1, eastl::vector_map<int, game::VarValue>* arg2);
        ref_counter_shared(unsigned long arg1, game::QuickChatCatType* quickChatCatType);
        ref_counter_shared(unsigned long arg1,
                           game::ConfigProviderMultiGroupSingleFileLoader* configProviderMultiGroupSingleFileLoader);
        ref_counter_shared(unsigned long arg1,
                           game::ConfigProviderMultiGroupMultiFileLoader* configProviderMultiGroupMultiFileLoader);
        ref_counter_shared(unsigned long arg1, game::ConfigProviderFontMetricsLoader* configProviderFontMetricsLoader);
        ref_counter_shared(unsigned long arg1,
                           game::ConfigProviderAnimationStateMachineLoader* configProviderAnimationStateMachineLoader);
        ref_counter_shared(unsigned long arg1, game::ConfigProviderDefaultsLoader* configProviderDefaultsLoader);
        ref_counter_shared(unsigned long arg1, game::Entity* entity);
        ref_counter_shared(unsigned long arg1, game::camera::OldShake* oldShake);
        ref_counter_shared(unsigned long arg1, eastl::map<int, graphics::TerrainTextureMeta>* arg2);
        ref_counter_shared(unsigned long arg1, eastl::vector<eastl::vector<unsigned char>>* arg2);
        ref_counter_shared(unsigned long arg1, eastl::vector<eastl::vector<graphics::GridGroup>>* gridGroupss);
        ref_counter_shared(unsigned long arg1, game::LookatPoint* lookatPoint);
        ref_counter_shared(unsigned long arg1, game::LookatEntity* lookatEntity);
        ref_counter_shared(unsigned long arg1, game::LookatSpline* lookatSpline);
        ref_counter_shared(unsigned long arg1, game::LookatOrientation* lookatOrientation);
        ref_counter_shared(unsigned long arg1, game::LookatSplineMatchPosition* lookatSplineMatchPosition);
        ref_counter_shared(unsigned long arg1, game::PositionPoint* positionPoint);
        ref_counter_shared(unsigned long arg1, game::PositionEntity* positionEntity);
        ref_counter_shared(unsigned long arg1, game::PositionSpline* positionSpline);
        ref_counter_shared(unsigned long arg1, game::camera::Shake* shake);
        ref_counter_shared(unsigned long arg1, game::camera::ZTilt* zTilt);
        ref_counter_shared(unsigned long arg1, std::function<void()>* callback);
        ref_counter_shared(unsigned long arg1, VorbisJs5Resource* vorbisJs5Resource);
        ref_counter_shared(unsigned long arg1,
                           eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>* fixed_stack);
        ref_counter_shared(unsigned long arg1, tweak::Tweaky* tweaky);
        ref_counter_shared(unsigned long arg1, tweak::List* arg2);
        ref_counter_shared(unsigned long arg1, graphics::ModularParticleSystemTemplate* modularParticleSystemTemplate);
        ref_counter_shared(unsigned long arg1, graphics::ModularParticleSystem* modularParticleSystem);
        ref_counter_shared(unsigned long arg1, render::Query* query);
        ref_counter_shared(unsigned long arg1, graphics::GeometryQuery* geometryQuery);
        ref_counter_shared(unsigned long arg1, graphics::TextureAtlas* textureAtlas);
        ref_counter_shared(unsigned long arg1, graphics::TextureData* textureData);
        ref_counter_shared(unsigned long arg1, graphics::Shader* shader);
        ref_counter_shared(unsigned long arg1, graphics::Font* font);
        ref_counter_shared(unsigned long arg1, graphics::FontHelpers* fontHelpers);
        ref_counter_shared(unsigned long arg1, DebugOverlayMainFPS* debugOverlayMainFPS);
        // ... 60 more instantiated members
    };

    template <
        typename...> // 38 instantiations, e.g. <int>, <game::MapSquareWorldAreaCompositeInner>, <graphics::PointLight>
    class ref_counter_shared_trivial {
    public:
        ref_counter_shared_trivial(unsigned long arg1, oldscape::Headbar* headbar);
        ref_counter_shared_trivial(unsigned long arg1, unsigned int* arg2);
        ref_counter_shared_trivial(unsigned long arg1, int* arg2);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::InvType* invType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::MesAnimType* mesAnimType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::VarBitType* varBitType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::VarConBitType* varConBitType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::VarConType* varConType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::VarGlobalType* varGlobalType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::VarObjType* varObjType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::VarcType* varcType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::VarnBitType* varnBitType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::VarnType* varnType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::VarpType* varpType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::VeccType* veccType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::AreaType* areaType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::BugTemplateType* bugTemplateType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::ControllerType* controllerType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::HeadbarType* headbarType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::configdecoder::HuntType* huntType);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::math::AffineTransform3* affineTransform3);
        ref_counter_shared_trivial(unsigned long arg1, math::QuaternionT<float>* quaternion);
        ref_counter_shared_trivial(unsigned long arg1, math::Vector3T<float>* vector3);
        ref_counter_shared_trivial(unsigned long arg1, std::atomic<bool>* atomic);
        ref_counter_shared_trivial(unsigned long arg1, graphics::PointLight* pointLight);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::dash3d::QuickGround* quickGround);
        ref_counter_shared_trivial(unsigned long arg1, signed char* arg2);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::dash3d::FixNormalsOperation* fixNormalsOperation);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::dash3d::HillSkewOperation* hillSkewOperation);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::dash3d::LightOperation* lightOperation);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::dash3d::TransformOperation* transformOperation);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::dash3d::RetextureOperation* retextureOperation);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::dash3d::MirrorOperation* mirrorOperation);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::dash3d::TintOperation* tintOperation);
        ref_counter_shared_trivial(unsigned long arg1, oldscape::dash3d::LightSource* lightSource);
        ref_counter_shared_trivial(unsigned long arg1,
                                   oldscape::dash3d::TransformedPoseStateRSeven* transformedPoseStateRSeven);
        ref_counter_shared_trivial(unsigned long arg1, graphics::PointLightGridTextureData* pointLightGridTextureData);
        ref_counter_shared_trivial(unsigned long arg1,
                                   game::MapSquareWorldAreaCompositeInner* mapSquareWorldAreaCompositeInner);
    };

    template <
        typename...> // 1 instantiations, e.g. <unsigned char, render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int
    class ref_counter_with_deleter {
    public:
        // virtual methods in vtable order
        virtual ~ref_counter_with_deleter();
        virtual void DeleteData();
        virtual void DeleteSelf();
        ref_counter_with_deleter(unsigned char* arg1,
                                 render::GutterCompressedTextureData(unsigned char*, unsigned int&, unsigned int,
                                                                     unsigned int)::$_5 arg2);
    };

    // 0x100057b20
    ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::worldmap::WorldmapAreaMetadata* worldmapAreaMetadata)
        : ref_counter_base() {}

    // 0x100057b60
    void ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::DeleteData() {
        ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((WorldmapAreaMetadata*)((long)&(this[3]._vptr)->_dtor + lVar2))->~WorldmapAreaMetadata();
                    prVar1 = (ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> _vtbl*)((long)&prVar1
                                                                                                               ->_dtor +
                                                                                                           1);
                    lVar2 = lVar2 + 144;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100057bb0
    void ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::DeleteSelf() {
        aligned_dealloc(this);
    }

    // 0x100058f10
    oldscape::FolderSelection::FolderSelectionRequest*
    placement_new<oldscape::FolderSelection::FolderSelectionRequest>(void* arg1) {
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        new (arg1) oldscape::FolderSelection::FolderSelectionRequest();
        return arg1;
    }

    // 0x100058f40
    ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>*
    placement_new<ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>, int,
                  oldscape::FolderSelection::FolderSelectionRequest*&>(
        void* arg1, int&& arg2, oldscape::FolderSelection::FolderSelectionRequest*& arg3) {
        new (arg1) ref_counter_shared<oldscape::FolderSelection::FolderSelectionRequest>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1000816c0
    ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>::ref_counter_shared(
        unsigned long arg1, oldscape::FileRSevenDebugPresetProvider* fileRSevenDebugPresetProvider)
        : ref_counter_base() {}

    // 0x100081700
    void ref_counter_shared<oldscape::FileRSevenDebugPresetProvider>::DeleteData() {
        ref_counter_shared<oldscape::FileRSevenDebugPresetProvider> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((FileRSevenDebugPresetProvider*)((long)&(this[3]._vptr)->_dtor + lVar2))
                        ->~FileRSevenDebugPresetProvider();
                    prVar1 =
                        (ref_counter_shared<oldscape::FileRSevenDebugPresetProvider> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 80;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1001381a0
    ref_counter<oldscape::sound::Wave>::ref_counter(oldscape::sound::Wave* wave) : ref_counter_base() {}

    // 0x1001381d0
    void ref_counter<oldscape::sound::Wave>::DeleteData() {
        Wave* this_00 = (Wave*)this[2]._vptr;
        if (this_00 != nullptr) {
            this_00->~Wave();
            operator delete(this_00);
        }
        this[2]._vptr = nullptr;
    }

    // 0x100138200
    void ref_counter<oldscape::sound::Wave>::DeleteSelf() {
        if (this != nullptr) {
            delete this;
        }
    }

    // 0x100138310
    ref_counter<oldscape::sound::WaveStream>::ref_counter(oldscape::sound::WaveStream* waveStream)
        : ref_counter_base() {}

    // 0x100138340
    void ref_counter<oldscape::sound::WaveStream>::DeleteData() {
        if (*(long**)(this + 16) != nullptr) {
            (**(void (**)(...))(**(long**)(this + 16) + 8))();
        }
        *(uint64_t*)(this + 16) = 0;
    }

    // 0x10013dad0
    ref_counter<Linkable<oldscape::sound::PCMStream>>::ref_counter(Linkable<oldscape::sound::PCMStream>* linkable)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7008 + 16;
        *(Linkable<oldscape::sound::PCMStream>**)(this + 16) = linkable;
    }

    // 0x10013dd90
    ref_counter<Linkable<oldscape::sound::MixerController>>::ref_counter(
        Linkable<oldscape::sound::MixerController>* linkable)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7000 + 16;
        *(Linkable<oldscape::sound::MixerController>**)(this + 16) = linkable;
    }

    // 0x100147c00
    ref_counter<oldscape::sound::JagFX>::ref_counter(oldscape::sound::JagFX* jagFX) : ref_counter_base() {}

    // 0x100147c30
    void ref_counter<oldscape::sound::JagFX>::DeleteData() {
        JagFX* this_00 = (JagFX*)this[2]._vptr;
        if (this_00 != nullptr) {
            this_00->~JagFX();
            operator delete(this_00);
        }
        this[2]._vptr = nullptr;
    }

    // 0x10014dda0
    ref_counter<oldscape::input::InputForm>::ref_counter(oldscape::input::InputForm* inputForm) : ref_counter_base() {}

    // 0x10014ddd0
    void ref_counter<oldscape::input::InputForm>::DeleteData() {
        if (this[2]._vptr != nullptr) {
            operator delete(this[2]._vptr);
        }
        this[2]._vptr = nullptr;
    }

    // 0x1001a88b0
    ref_counter_shared<oldscape::ChatLine>::ref_counter_shared(unsigned long arg1, oldscape::ChatLine* chatLine)
        : ref_counter_base() {}

    // 0x1001a88f0
    void ref_counter_shared<oldscape::ChatLine>::DeleteData() {
        ref_counter_shared<oldscape::ChatLine> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ChatLine*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ChatLine();
                    prVar1 = (ref_counter_shared<oldscape::ChatLine> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 248;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1001a8e50
    ref_counter_shared<oldscape::rs2lib::social::DisplayName>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::DisplayName* displayName)
        : ref_counter_base() {}

    // 0x1001a8e90
    void ref_counter_shared<oldscape::rs2lib::social::DisplayName>::DeleteData() {
        ref_counter_shared<oldscape::rs2lib::social::DisplayName> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((pair<eastl::stringconst, eastl::stringconst>*)((long)&(this[3]._vptr)->_dtor + lVar2))->~pair();
                    prVar1 =
                        (ref_counter_shared<oldscape::rs2lib::social::DisplayName> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 64;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1001aa960
    ref_counter_shared<oldscape::ClientScript>::ref_counter_shared(unsigned long arg1,
                                                                   oldscape::ClientScript* clientScript)
        : ref_counter_base() {}

    // 0x1001aa9a0
    void ref_counter_shared<oldscape::ClientScript>::DeleteData() {
        ref_counter_shared<oldscape::ClientScript> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ClientScript*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ClientScript();
                    prVar1 = (ref_counter_shared<oldscape::ClientScript> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 168;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1001af530
    ref_counter_shared<oldscape::rs2lib::IfType>::ref_counter_shared(unsigned long arg1,
                                                                     oldscape::rs2lib::IfType* ifType)
        : ref_counter_base() {}

    // 0x1001af570
    void ref_counter_shared<oldscape::rs2lib::IfType>::DeleteData() {
        ref_counter_shared<oldscape::rs2lib::IfType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((IfType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~IfType();
                    prVar1 = (ref_counter_shared<oldscape::rs2lib::IfType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 2160;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100217890
    ref_counter_shared_trivial<unsigned int>::ref_counter_shared_trivial(unsigned long arg1, unsigned int* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7d70 + 16;
    }

    // 0x10021d320
    ref_counter_shared<oldscape::rs2lib::HttpSpriteData>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::HttpSpriteData* httpSpriteData)
        : ref_counter_base() {}

    // 0x10021d360
    void ref_counter_shared<oldscape::rs2lib::HttpSpriteData>::DeleteData() {
        ref_counter_shared<oldscape::rs2lib::HttpSpriteData> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((HttpSpriteData*)((long)&(this[3]._vptr)->_dtor + lVar2))->~HttpSpriteData();
                    prVar1 = (ref_counter_shared<oldscape::rs2lib::HttpSpriteData> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 24;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100225830
    ref_counter<oldscape::rs2lib::worldmap::MultiLocMapElement>::ref_counter(
        oldscape::rs2lib::worldmap::MultiLocMapElement* multiLocMapElement)
        : ref_counter_base() {}

    // 0x100225860
    void ref_counter<oldscape::rs2lib::worldmap::MultiLocMapElement>::DeleteData() {
        MultiLocMapElement* this_00 = (MultiLocMapElement*)this[2]._vptr;
        if (this_00 != nullptr) {
            this_00->~MultiLocMapElement();
            operator delete(this_00);
        }
        this[2]._vptr = nullptr;
    }

    // 0x100225960
    ref_counter<oldscape::rs2lib::worldmap::StaticMapElement>::ref_counter(
        oldscape::rs2lib::worldmap::StaticMapElement* staticMapElement)
        : ref_counter_base() {}

    // 0x100225990
    void ref_counter<oldscape::rs2lib::worldmap::StaticMapElement>::DeleteData() {
        StaticMapElement* this_00 = (StaticMapElement*)this[2]._vptr;
        if (this_00 != nullptr) {
            this_00->~StaticMapElement();
            operator delete(this_00);
        }
        this[2]._vptr = nullptr;
    }

    // 0x100244b00
    ref_counter_shared_trivial<oldscape::configdecoder::InvType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::InvType* invType)
        : ref_counter_base() {}

    // 0x100246bc0
    ref_counter_shared<oldscape::configdecoder::LocType>::ref_counter_shared(unsigned long arg1,
                                                                             oldscape::configdecoder::LocType* locType)
        : ref_counter_base() {}

    // 0x100246c00
    void ref_counter_shared<oldscape::configdecoder::LocType>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::LocType> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((LocType*)((long)&(this[3]._vptr)->_dtor + lVar2))->~LocType();
                    prVar1 = (ref_counter_shared<oldscape::configdecoder::LocType> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 624;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1002486f0
    ref_counter_shared_trivial<oldscape::configdecoder::MesAnimType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::MesAnimType* mesAnimType)
        : ref_counter_base() {}

    // 0x10026b960
    ref_counter<Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>>::ref_counter(
        Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>* linkable)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7020 + 16;
        *(Linkable<oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDeltaEntry>**)(this + 16) = linkable;
    }

    // 0x10027d680
    ref_counter<Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>>::ref_counter(
        Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>* linkable)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7028 + 16;
        *(Linkable<oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDeltaEntry>**)(this + 16) = linkable;
    }

    // 0x10027d770
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::AddMember* addMember)
        : ref_counter_base() {}

    // 0x10027d8e0
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember* deleteMember)
        : ref_counter_base() {}

    // 0x10027d970
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank* setMemberRank)
        : ref_counter_base() {}

    // 0x10027da00
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::SetOwner* setOwner)
        : ref_counter_base() {}

    // 0x10027daa0
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo* setMemberExtraInfo)
        : ref_counter_base() {}

    // 0x10027db30
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted* setMemberMuted)
        : ref_counter_base() {}

    // 0x10027dc00
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::AddBanned* addBanned)
        : ref_counter_base() {}

    // 0x10027dc90
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned* deleteBanned)
        : ref_counter_base() {}

    // 0x10027dd60
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::SetClanName* setClanName)
        : ref_counter_base() {}

    // 0x10027ddf0
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>::ref_counter_shared(
        unsigned long arg1,
        oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings* updateClanSettingsBaseSettings)
        : ref_counter_base() {}

    // 0x10027de80
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt* setExtraSettingInt)
        : ref_counter_base() {}

    // 0x10027df20
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>::ref_counter_shared(
        unsigned long arg1,
        oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit* setExtraSettingIntVarbit)
        : ref_counter_base() {}

    // 0x10027dfb0
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong* setExtraSettingLong)
        : ref_counter_base() {}

    // 0x10027e080
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString* setExtraSettingString)
        : ref_counter_base() {}

    // 0x10027e270
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1* addMemberOldV1)
        : ref_counter_base() {}

    // 0x10027ed30
    ref_counter_shared_trivial<oldscape::configdecoder::AreaType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::AreaType* areaType)
        : ref_counter_base() {}

    // 0x10027f410
    ref_counter_shared_trivial<oldscape::configdecoder::BugTemplateType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::BugTemplateType* bugTemplateType)
        : ref_counter_base() {}

    // 0x10027faf0
    ref_counter_shared_trivial<oldscape::configdecoder::ControllerType>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::configdecoder::ControllerType* controllerType)
        : ref_counter_base() {}

    // 0x1002a8eb0
    ref_counter_shared<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>::
        ref_counter_shared(
            unsigned long arg1,
            eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>* priority_queue)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee71c0 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                         eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>,
                         eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> _>**)(this + 24) =
            priority_queue;
    }

    // 0x1002a8ef0
    void ref_counter_shared<
        eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                              eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((priority_queue<
                         oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                         eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>*)(*(long*)(this + 24) +
                                                                                                 lVar2))
                        ->~priority_queue();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 40;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1002a9d20
    ref_counter_shared<oldscape::sound::DelayedStream>::ref_counter_shared(
        unsigned long arg1, oldscape::sound::DelayedStream* delayedStream)
        : ref_counter_base() {}

    // 0x1002acbb0
    ref_counter<oldscape::sound::JagVorbis>::ref_counter(oldscape::sound::JagVorbis* jagVorbis) : ref_counter_base() {}

    // 0x1002acbe0
    void ref_counter<oldscape::sound::JagVorbis>::DeleteData() {
        JagVorbis* this_00 = (JagVorbis*)this[2]._vptr;
        if (this_00 != nullptr) {
            this_00->~JagVorbis();
            operator delete(this_00);
        }
        this[2]._vptr = nullptr;
    }

    // 0x1002e29c0
    ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>::ref_counter_shared(
        unsigned long arg1, oldscape::jagex3::Js5RemoteLoader::Js5Remote* js5Remote)
        : ref_counter_base() {}

    // 0x1002e2a00
    void ref_counter_shared<oldscape::jagex3::Js5RemoteLoader::Js5Remote>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::midi2::StartSongTask> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<oldscape::midi2::StartSongTask> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 104;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1002e2f30
    ref_counter_shared<graphics::FontMetrics>::ref_counter_shared(unsigned long arg1,
                                                                  graphics::FontMetrics* fontMetrics)
        : ref_counter_base() {}

    // 0x1002e2f70
    void ref_counter_shared<graphics::FontMetrics>::DeleteData() {
        long lVar1;
        ref_counter_shared<graphics::FontMetrics> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<graphics::FontMetrics> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 13696;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1002e3220
    ref_counter_shared_trivial<math::QuaternionT<float>>::ref_counter_shared_trivial(
        unsigned long arg1, math::QuaternionT<float>* quaternion)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7c50 + 16;
    }

    // 0x1002e3320
    ref_counter_shared_trivial<math::Vector3T<float>>::ref_counter_shared_trivial(unsigned long arg1,
                                                                                  math::Vector3T<float>* vector3)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7c58 + 16;
    }

    // 0x1002e3bf0
    ref_counter_shared<oldscape::math::RotTrans>::ref_counter_shared(unsigned long arg1,
                                                                     oldscape::math::RotTrans* rotTrans)
        : ref_counter_base() {}

    // 0x1002e3c30
    void ref_counter_shared<oldscape::math::RotTrans>::DeleteData() {
        ref_counter_shared<oldscape::math::RotTrans> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ResolvedModel*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ResolvedModel();
                    prVar1 = (ref_counter_shared<oldscape::math::RotTrans> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 48;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1002e3fb0
    ref_counter<oldscape::midi2::MidiFile>::ref_counter(oldscape::midi2::MidiFile* midiFile) : ref_counter_base() {}

    // 0x1002e3fe0
    void ref_counter<oldscape::midi2::MidiFile>::DeleteData() {
        MidiFile* this_00 = (MidiFile*)this[2]._vptr;
        if (this_00 != nullptr) {
            this_00->~MidiFile();
            operator delete(this_00);
        }
        this[2]._vptr = nullptr;
    }

    // 0x1002e4de0
    ref_counter_shared<oldscape::midi2::AddRequestTask>::ref_counter_shared(
        unsigned long arg1, oldscape::midi2::AddRequestTask* addRequestTask)
        : ref_counter_base() {}

    // 0x1002e4e20
    void ref_counter_shared<oldscape::midi2::AddRequestTask>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::midi2::FadeInTask> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<oldscape::midi2::FadeInTask> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 120;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1002e5050
    ref_counter_shared<oldscape::midi2::LoadSongTask>::ref_counter_shared(unsigned long arg1,
                                                                          oldscape::midi2::LoadSongTask* loadSongTask)
        : ref_counter_base() {}

    // 0x1002e5180
    ref_counter_shared<oldscape::midi2::FadeInTask>::ref_counter_shared(unsigned long arg1,
                                                                        oldscape::midi2::FadeInTask* fadeInTask)
        : ref_counter_base() {}

    // 0x1002e5250
    ref_counter_shared<oldscape::midi2::StartSongTask>::ref_counter_shared(
        unsigned long arg1, oldscape::midi2::StartSongTask* startSongTask)
        : ref_counter_base() {}

    // 0x1002e5460
    ref_counter_shared<oldscape::midi2::ConcurrentMidiTask>::ref_counter_shared(
        unsigned long arg1, oldscape::midi2::ConcurrentMidiTask* concurrentMidiTask)
        : ref_counter_base() {}

    // 0x1002e5530
    ref_counter_shared<oldscape::midi2::DelayFadeTask>::ref_counter_shared(
        unsigned long arg1, oldscape::midi2::DelayFadeTask* delayFadeTask)
        : ref_counter_base() {}

    // 0x1002e5610
    ref_counter_shared<oldscape::midi2::ClearRequestTask>::ref_counter_shared(
        unsigned long arg1, oldscape::midi2::ClearRequestTask* clearRequestTask)
        : ref_counter_base() {}

    // 0x1002e56f0
    ref_counter_shared<oldscape::midi2::FadeOutTask>::ref_counter_shared(unsigned long arg1,
                                                                         oldscape::midi2::FadeOutTask* fadeOutTask)
        : ref_counter_base() {}

    // 0x1002e58f0
    ref_counter_shared<oldscape::midi2::SwapSongTask>::ref_counter_shared(unsigned long arg1,
                                                                          oldscape::midi2::SwapSongTask* swapSongTask)
        : ref_counter_base() {}

    // 0x1002e62b0
    ref_counter<Linkable<oldscape::midi2::MidiNote>>::ref_counter(Linkable<oldscape::midi2::MidiNote>* linkable)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee6ff8 + 16;
        *(Linkable<oldscape::midi2::MidiNote>**)(this + 16) = linkable;
    }

    // 0x1002e6670
    ref_counter_shared<oldscape::midi2::MidiMixer>::ref_counter_shared(unsigned long arg1,
                                                                       oldscape::midi2::MidiMixer* midiMixer)
        : ref_counter_base() {}

    // 0x1002e66b0
    void ref_counter_shared<oldscape::midi2::MidiMixer>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::midi2::MidiMixer> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<oldscape::midi2::MidiMixer> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 272;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1002e6950
    ref_counter<oldscape::midi2::Patch>::ref_counter(oldscape::midi2::Patch* patch) : ref_counter_base() {}

    // 0x1002e6980
    void ref_counter<oldscape::midi2::Patch>::DeleteData() {
        Patch* this_00 = (Patch*)this[2]._vptr;
        if (this_00 != nullptr) {
            this_00->~Patch();
            operator delete(this_00);
        }
        this[2]._vptr = nullptr;
    }

    // 0x1002e7430
    ref_counter_shared_trivial<std::atomic<bool>>::ref_counter_shared_trivial(unsigned long arg1,
                                                                              std::atomic<bool>* atomic)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7d58 + 16;
    }

    // 0x1002ea530
    ref_counter_shared<oldscape::midi2::MidiNote>::ref_counter_shared(unsigned long arg1,
                                                                      oldscape::midi2::MidiNote* midiNote)
        : ref_counter_base() {}

    // 0x1002ea570
    void ref_counter_shared<oldscape::midi2::MidiNote>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::midi2::MidiNote> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<oldscape::midi2::MidiNote> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 176;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1002eb590
    ref_counter<oldscape::midi2::EnvelopeSet>::ref_counter(oldscape::midi2::EnvelopeSet* envelopeSet)
        : ref_counter_base() {}

    // 0x1002eb5c0
    void ref_counter<oldscape::midi2::EnvelopeSet>::DeleteData() {
        EnvelopeSet* this_00 = (EnvelopeSet*)this[2]._vptr;
        if (this_00 != nullptr) {
            this_00->~EnvelopeSet();
            operator delete(this_00);
        }
        this[2]._vptr = nullptr;
    }

    // 0x100330510
    ref_counter<Array<unsigned int>>::ref_counter(Array<unsigned int>* arg1) : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee6ff0 + 16;
        *(Array<unsigned int>**)(this + 16) = arg1;
    }

    // 0x100330540
    void ref_counter<Array<unsigned int>>::DeleteData() {
        Array<unsigned int>* this_00 = *(Array<unsigned int>**)(this + 16);
        if (this_00 != nullptr) {
            this_00->~Array();
            operator delete(this_00);
        }
        *(uint64_t*)(this + 16) = 0;
    }

    // 0x100330810
    ref_counter<Linkable<oldscape::dash3d::Texture>>::ref_counter(Linkable<oldscape::dash3d::Texture>* linkable)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7018 + 16;
        *(Linkable<oldscape::dash3d::Texture>**)(this + 16) = linkable;
    }

    // 0x100332040
    ref_counter<Linkable<oldscape::dash3d::Square>>::ref_counter(Linkable<oldscape::dash3d::Square>* linkable)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7010 + 16;
        *(Linkable<oldscape::dash3d::Square>**)(this + 16) = linkable;
    }

    // 0x100337980
    ref_counter<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>::ref_counter(
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet* oldscapeAnimKeyFrameSet) {
        new (this) ref_counter_base();
    }

    // 0x1003379b0
    void ref_counter<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>::DeleteData() {
        OldscapeAnimKeyFrameSet* this_00 = (OldscapeAnimKeyFrameSet*)this[2]._vptr;
        if (this_00 != nullptr) {
            this_00->~OldscapeAnimKeyFrameSet();
            operator delete(this_00);
        }
        this[2]._vptr = nullptr;
    }

    // 0x1003395d0
    ref_counter<oldscape::dash3d::AnimBase>::ref_counter(oldscape::dash3d::AnimBase* animBase) : ref_counter_base() {}

    // 0x100339600
    void ref_counter<oldscape::dash3d::AnimBase>::DeleteData() {
        AnimBase* this_00 = (AnimBase*)this[2]._vptr;
        if (this_00 != nullptr) {
            this_00->~AnimBase();
            operator delete(this_00);
        }
        this[2]._vptr = nullptr;
    }

    // 0x10046c7a0
    ref_counter_shared<graphics::EquirectangularRenderer>::ref_counter_shared(
        unsigned long arg1, graphics::EquirectangularRenderer* equirectangularRenderer)
        : ref_counter_base() {}

    // 0x10046cc40
    ref_counter_shared<game::World>::ref_counter_shared(unsigned long arg1, game::World* world) : ref_counter_base() {}

    // 0x10046cc80
    void ref_counter_shared<game::World>::DeleteData() {
        long lVar1;
        ref_counter_shared<game::World> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (**(void (**)(...))(*(long*)((long)&(this[3]._vptr)->_dtor + lVar1) + 16))(
                        (long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<game::World> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 950816;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100482570
    ref_counter_shared<eastl::fixed_vector<render::ImageData, 6ul>>::ref_counter_shared(
        unsigned long arg1, eastl::fixed_vector<render::ImageData, 6ul>* imageDatas)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee71b8 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(fixed_vector<render::ImageData, _6ul>**)(this + 24) = imageDatas;
    }

    // 0x1004825b0
    void ref_counter_shared<eastl::fixed_vector<render::ImageData, 6ul>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((fixed_vector<render::ImageData, 6ul>*)(*(long*)(this + 24) + lVar2))->~fixed_vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 280;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1004b2240
    ref_counter_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>::ref_counter_shared(
        unsigned long arg1, eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee71a8 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(fixed_vector<eastl::vector<eastl::vector<int>>, _4ul>**)(this + 24) = arg2;
    }

    // 0x1004b2280
    void ref_counter_shared<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>*)(*(long*)(this + 24) + lVar2))
                        ->~fixed_vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 168;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100623c90
    ref_counter_shared<game::Entity>::ref_counter_shared(unsigned long arg1, game::Entity* entity)
        : ref_counter_base() {}

    // 0x100623e40
    ref_counter_shared<game::camera::OldShake>::ref_counter_shared(unsigned long arg1, game::camera::OldShake* oldShake)
        : ref_counter_base() {}

    // 0x100875870
    ref_counter_shared<graphics::TextureAtlas>::ref_counter_shared(unsigned long arg1,
                                                                   graphics::TextureAtlas* textureAtlas)
        : ref_counter_base() {}

    // 0x1008758b0
    void ref_counter_shared<graphics::TextureAtlas>::DeleteData() {
        long lVar1;
        ref_counter_shared<graphics::TextureAtlas> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<graphics::TextureAtlas> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 190992;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10087fd20
    ref_counter_shared<graphics::TextureData>::ref_counter_shared(unsigned long arg1,
                                                                  graphics::TextureData* textureData)
        : ref_counter_base() {}

    // 0x10087fd60
    void ref_counter_shared<graphics::TextureData>::DeleteData() {
        ref_counter_shared<graphics::TextureData> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((TextureData*)((long)&(this[3]._vptr)->_dtor + lVar2))->~TextureData();
                    prVar1 = (ref_counter_shared<graphics::TextureData> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 24;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10089c120
    ref_counter_shared<graphics::Shader>::ref_counter_shared(unsigned long arg1, graphics::Shader* shader)
        : ref_counter_base() {}

    // 0x10089c160
    void ref_counter_shared<graphics::Shader>::DeleteData() {
        ref_counter_shared<graphics::Shader> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((Shader*)((long)&(this[3]._vptr)->_dtor + lVar2))->~Shader();
                    prVar1 = (ref_counter_shared<graphics::Shader> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 1920;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1009116d0
    ref_counter_shared<DebugOverlayMainFPS>::ref_counter_shared(unsigned long arg1,
                                                                DebugOverlayMainFPS* debugOverlayMainFPS)
        : ref_counter_base() {}

    // 0x100911710
    void ref_counter_shared<DebugOverlayMainFPS>::DeleteData() {
        long lVar1;
        ref_counter_shared<DebugOverlayRenderFPS> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<DebugOverlayRenderFPS> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 98696;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100911800
    ref_counter_shared<DebugOverlayRenderFPS>::ref_counter_shared(unsigned long arg1,
                                                                  DebugOverlayRenderFPS* debugOverlayRenderFPS)
        : ref_counter_base() {}

    // 0x100911890
    ref_counter_shared<DebugOverlayLPS>::ref_counter_shared(unsigned long arg1, DebugOverlayLPS* debugOverlayLPS)
        : ref_counter_base() {}

    // 0x1009118d0
    void ref_counter_shared<DebugOverlayLPS>::DeleteData() {
        long lVar1;
        ref_counter_shared<DebugOverlayDiskCache> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<DebugOverlayDiskCache> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 98680;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100911980
    ref_counter_shared<DebugOverlayParticlesSimulation>::ref_counter_shared(
        unsigned long arg1, DebugOverlayParticlesSimulation* debugOverlayParticlesSimulation)
        : ref_counter_base() {}

    // 0x1009119c0
    void ref_counter_shared<DebugOverlayParticlesSimulation>::DeleteData() {
        long lVar1;
        ref_counter_shared<DebugOverlayParticlesSimulation> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<DebugOverlayParticlesSimulation> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 98800;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100911a70
    ref_counter_shared<DebugOverlayParticlesRender>::ref_counter_shared(
        unsigned long arg1, DebugOverlayParticlesRender* debugOverlayParticlesRender)
        : ref_counter_base() {}

    // 0x100911ab0
    void ref_counter_shared<DebugOverlayParticlesRender>::DeleteData() {
        long lVar1;
        ref_counter_shared<DebugOverlayParticlesRender> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<DebugOverlayParticlesRender> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 99088;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100911b60
    ref_counter_shared<DebugOverlayGPU>::ref_counter_shared(unsigned long arg1, DebugOverlayGPU* debugOverlayGPU)
        : ref_counter_base() {}

    // 0x100911ba0
    void ref_counter_shared<DebugOverlayGPU>::DeleteData() {
        long lVar1;
        ref_counter_shared<DebugOverlayRender> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<DebugOverlayRender> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 98656;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100911c50
    ref_counter_shared<DebugOverlayRender>::ref_counter_shared(unsigned long arg1,
                                                               DebugOverlayRender* debugOverlayRender)
        : ref_counter_base() {}

    // 0x100911ce0
    ref_counter_shared<DebugOverlayShaderProfiler>::ref_counter_shared(
        unsigned long arg1, DebugOverlayShaderProfiler* debugOverlayShaderProfiler)
        : ref_counter_base() {}

    // 0x100911d70
    ref_counter_shared<DebugOverlayTextureAtlas>::ref_counter_shared(unsigned long arg1,
                                                                     DebugOverlayTextureAtlas* debugOverlayTextureAtlas)
        : ref_counter_base() {}

    // 0x100911e00
    ref_counter_shared<DebugOverlayGPUStats>::ref_counter_shared(unsigned long arg1,
                                                                 DebugOverlayGPUStats* debugOverlayGPUStats)
        : ref_counter_base() {}

    // 0x100911e90
    ref_counter_shared<DebugOverlayMemory>::ref_counter_shared(unsigned long arg1,
                                                               DebugOverlayMemory* debugOverlayMemory)
        : ref_counter_base() {}

    // 0x100911ed0
    void ref_counter_shared<DebugOverlayMemory>::DeleteData() {
        long lVar1;
        ref_counter_shared<DebugOverlayMemoryCache> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<DebugOverlayMemoryCache> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 98672;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100911f80
    ref_counter_shared<DebugOverlayMemoryCache>::ref_counter_shared(unsigned long arg1,
                                                                    DebugOverlayMemoryCache* debugOverlayMemoryCache)
        : ref_counter_base() {}

    // 0x100912010
    ref_counter_shared<DebugOverlayDiskCache>::ref_counter_shared(unsigned long arg1,
                                                                  DebugOverlayDiskCache* debugOverlayDiskCache)
        : ref_counter_base() {}

    // 0x1009120a0
    ref_counter_shared<DebugOverlayAllocations>::ref_counter_shared(unsigned long arg1,
                                                                    DebugOverlayAllocations* debugOverlayAllocations)
        : ref_counter_base() {}

    // 0x1009120e0
    void ref_counter_shared<DebugOverlayAllocations>::DeleteData() {
        long lVar1;
        ref_counter_shared<DebugOverlayAllocations> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<DebugOverlayAllocations> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 98736;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100912190
    ref_counter_shared<DebugOverlayPools>::ref_counter_shared(unsigned long arg1, DebugOverlayPools* debugOverlayPools)
        : ref_counter_base() {}

    // 0x1009121d0
    void ref_counter_shared<DebugOverlayPools>::DeleteData() {
        long lVar1;
        ref_counter_shared<DebugOverlayPools> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<DebugOverlayPools> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 328;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100a0b450
    ref_counter_shared<ClientStream>::ref_counter_shared(unsigned long arg1, ClientStream* clientStream)
        : ref_counter_base() {}

    // 0x100a0b490
    void ref_counter_shared<ClientStream>::DeleteData() {
        ref_counter_shared<ClientStream> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ClientStream*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ClientStream();
                    prVar1 = (ref_counter_shared<ClientStream> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 272;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100bbfbf0
    ref_counter_shared<render::TextureCube>::ref_counter_shared(unsigned long arg1, render::TextureCube* textureCube)
        : ref_counter_base() {}

} // namespace jag
