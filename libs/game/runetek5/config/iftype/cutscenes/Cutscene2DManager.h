// libs/game/runetek5/config/iftype/cutscenes/Cutscene2DManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class Cutscene2DManager {
    public:
        class ActiveCutsceneData;
        class PreloadRequest;
        // virtual methods in vtable order
        virtual ~Cutscene2DManager();
        Cutscene2DManager(Js5ResourceProvider*, ConfigProvider*, graphics::RT7Core*, graphics::FontManager*,
                          graphics::FontHelpers*, SoundManager*);
        void MainDraw(float);
        GetPlaybackParam(CutsceneParamID, unsigned char) const;
        void StopPlayback(CutscenePlaybackEndReason);
        void LoadActiveCutsceneResources(float);
        void PlayActiveCutscene(math::Rect<int> const&);
        void Preload(unsigned int);
        void FlushPreloadedCutscenes();
        ulong StartPlayback(unsigned int, bool);
        void RestartPlayback();
        void TriggerCutscenePlaybackEndCallbacks(unsigned int, bool, CutscenePlaybackEndReason);
        ulong SetPlaybackParam(CutsceneParamID, unsigned char, int);
        GetPlaybackSceneIndex(StringView) const;
        static /* 16 bytes */ m_debugEnableFullScreenAutoplay; // = { 0, 0, 0, 0 }

        // data members, from how the methods use this: 2524 bytes
        undefined* field_0;           // offset 0, vtable pointer
        Js5ResourceProvider* field_8; // offset 8
        ConfigProvider* field_16;     // offset 16
        RT7Core* field_24;            // offset 24
        FontManager* field_32;        // offset 32
        FontHelpers* field_40;        // offset 40
        SoundManager* field_48;       // offset 48
        char _unknown_56[104];
        function field_160; // offset 160
        char _unknown_320[16];
        uint field_336; // offset 336
        char _unknown_340[4];
        Cutscene2DResources field_344;        // offset 344
        Cutscene2DPlaybackState field_2464;   // offset 2464
        GlobalCutscene2DResources field_2480; // offset 2480
        char _unknown_2496[28];
    };

    class Cutscene2DManager::ActiveCutsceneData {
    public:
        bool IsValid() const;
        ActiveCutsceneData();
        ~ActiveCutsceneData();
        void Reset();
        bool IsPlayable() const;
        void FlagPlayable();
        void SetPaused(bool);

        // data members, from how the methods use this: 2136 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[1];
        char field_5; // offset 5
        char _unknown_6[2130];
    };

    class Cutscene2DManager::PreloadRequest {
    public:
        ~PreloadRequest();
        Ready() const;
        PreloadRequest* operator=(PreloadRequest&&);
        PreloadRequest();
        PreloadRequest(PreloadRequest&&);

        // data members, from how the methods use this: 2128 bytes
        undefined2 field_0; // offset 0
        char _unknown_2[6];
        Cutscene2DResources field_8; // offset 8
    };

    // 0x100522ef0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Cutscene2DManager::ActiveCutsceneData::ActiveCutsceneData(): jumps straight to the base-object constructor

    // 0x100522f30, 16 bytes, complete-object destructor, inline, placed by class name
    // Cutscene2DManager::ActiveCutsceneData::~ActiveCutsceneData(): jumps straight to the base-object destructor

    // 0x1005231b0, 32 bytes, inline, placed by class name
    // Cutscene2DManager::PreloadRequest::Ready() const
    undefined2 Cutscene2DManager::PreloadRequest::Ready() {
        return CONCAT11((char)((ushort)field_0 >> 8), field_0 != 5000);
    }

    // 0x100524610, 48 bytes, inline, placed by class name
    // Cutscene2DManager::ActiveCutsceneData::IsPlayable() const
    bool Cutscene2DManager::ActiveCutsceneData::IsPlayable() {
        bool bVar2;

        if (IsValid() == '\0') {
            bVar2 = false;
        } else {
            bVar2 = field_5 != '\0';
        }
        return bVar2;
    }

    // 0x1005249e0, 16 bytes, inline, placed by class name
    // Cutscene2DManager::ActiveCutsceneData::FlagPlayable()
    void Cutscene2DManager::ActiveCutsceneData::FlagPlayable() {
        field_5 = '\x01';
    }

    // 0x100529770, 16 bytes, complete-object destructor, inline, placed by class name
    // Cutscene2DManager::~Cutscene2DManager(): jumps straight to the base-object destructor

    // 0x100529780, 32 bytes, deleting destructor, inline, placed by class name
    // Cutscene2DManager::~Cutscene2DManager()
    void Cutscene2DManager::~Cutscene2DManager() {
        ~Cutscene2DManager(this);
        operator_delete(this);
    }

    // 0x1005297a0, 80 bytes, base-object constructor, inline, placed by class name
    // Cutscene2DManager::ActiveCutsceneData::ActiveCutsceneData()
    void Cutscene2DManager::ActiveCutsceneData::ActiveCutsceneData() {
        field_0 = 4294967295;
        *(undefined2*)&field_4 = 0;
        new (&field_8) Cutscene2DResources();
        new (&field_2128) Cutscene2DPlaybackState();
    }

    // 0x100529eb0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Cutscene2DManager::ActiveCutsceneData::~ActiveCutsceneData()
    /* Cutscene2DManager::PreloadRequest::~PreloadRequest() */

    void Cutscene2DManager::PreloadRequest::~PreloadRequest() {
        field_8->~Cutscene2DResources();
    }

    // 0x100531220, 288 bytes, inline, placed by class name
    // Cutscene2DManager::Cutscene2DManager(Js5ResourceProvider*, ConfigProvider*, graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, SoundManager*)::$_0::operator()(unsigned int, unsigned int, unsigned int, unsigned int, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&, Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >, eastl::allocator> const*) const
    /* Cutscene2DManager::Cutscene2DManager(Js5ResourceProvider*,
   ConfigProvider*, graphics::RT7Core*, graphics::FontManager*,
   graphics::FontHelpers*, SoundManager*)::$_0::TEMPNAMEPLACEHOLDERVALUE(unsigned
   int, unsigned int, unsigned int, unsigned int, shared_ptr<PacketT<Array<unsigned
   char, eastl::allocator> > > const&, Array<shared_ptr<PacketT<Array<unsigned
   char, eastl::allocator> > >, eastl::allocator> const*) const */

    void Cutscene2DManager::Cutscene2DManager(Js5ResourceProvider*, ConfigProvider*, graphics::RT7Core*,
                                              graphics::FontManager*, graphics::FontHelpers*,
                                              SoundManager*)::$_0::operator()(uint param_1, uint param_2, uint param_3,
                                                                              uint param_4, shared_ptr* param_5,
                                                                              Array* param_6) {
        long lVar1;
        bool bVar2;
        PacketT* pPVar4;
        Cutscene2D* this;
        undefined8 uVar5;
        undefined4 in_register_00000014;
        undefined4 in_register_0000003c;
        uint local_2e4;
        undefined1 local_2e0[712];

        local_2e0._704_8_ = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        lVar1 = *(long*)CONCAT44(in_register_0000003c, param_1);
        local_2e4 = param_2;
        bVar2 = operator!=((shared_ptr*)CONCAT44(in_register_00000014, param_3), (_func_decltype_nullptr*)0);
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("rawData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/cutscenes/Cutscene2DManager.cpp",
                      37, (char*)0);
        }
        new (local_2e0) Cutscene2D();
        pPVar4 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)CONCAT44(in_register_00000014, param_3));
        if (local_2e0->LoadFromPacket(pPVar4) == '\0') {
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/iftype/cutscenes/Cutscene2DManager.cpp",
                                46, "Could not decode sprite cutscene %u", local_2e4);
        } else {
            this =
                (Cutscene2D*)eastl::vector_map<unsigned int, Cutscene2D, eastl::less<unsigned int>, eastl::allocator,
                                               eastl::vector<eastl::pair<unsigned int, Cutscene2D>, eastl::allocator>>::
                operator[](
                    (vector_map<unsigned int, Cutscene2D, eastl::less<unsigned int>, eastl::allocator,
                                eastl::vector<eastl::pair<unsigned int, Cutscene2D>, eastl::allocator>>*)(lVar1 + 256),
                    &local_2e4);
            Cutscene2D::operator=(this, (Cutscene2D*)local_2e0);
        }
        local_2e0->~Cutscene2D();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_2e0._704_8_) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1005313f0, 16 bytes, inline, placed by class name
    // Cutscene2DManager::MainDraw(float)::$_1::operator()(eastl::pair<unsigned int, Cutscene2DManager::PreloadRequest> const&) const
    /* Cutscene2DManager::MainDraw(float)::$_1::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<unsigned
   int, Cutscene2DManager::PreloadRequest> const&) const */

    bool Cutscene2DManager::MainDraw(float)::$_1::operator()(pair* param_1) {
        return *(short*)(this + 8) == 0;
    }

    // 0x100531440, 48 bytes, inline, placed by class name
    // Cutscene2DManager::PreloadRequest::operator=(Cutscene2DManager::PreloadRequest&&)
    /* Cutscene2DManager::PreloadRequest::TEMPNAMEPLACEHOLDERVALUE(Cutscene2DManager::PreloadRequest&&)
    */

    PreloadRequest* Cutscene2DManager::PreloadRequest::operator=(PreloadRequest* param_1) {
        field_0 = param_1->field_0;
        Cutscene2DResources::operator=((Cutscene2DResources*)field_8, (Cutscene2DResources*)param_1->field_8);
        return this;
    }

    // 0x100531da0, 16 bytes, complete-object constructor, inline, placed by class name
    // Cutscene2DManager::PreloadRequest::PreloadRequest(): jumps straight to the base-object constructor

    // 0x1005325d0, 16 bytes, complete-object constructor, inline, placed by class name
    // Cutscene2DManager::PreloadRequest::PreloadRequest(Cutscene2DManager::PreloadRequest&&): jumps straight to the base-object constructor

    // 0x1005325e0, 32 bytes, base-object constructor, inline, placed by class name
    // Cutscene2DManager::PreloadRequest::PreloadRequest(Cutscene2DManager::PreloadRequest&&)
    void Cutscene2DManager::PreloadRequest::PreloadRequest(PreloadRequest* param_1) {
        field_0 = param_1->field_0;
        new (field_8, (Cutscene2DResources*)param_1->field_8) Cutscene2DResources();
    }

    // 0x100532880, 32 bytes, base-object constructor, inline, placed by class name
    // Cutscene2DManager::PreloadRequest::PreloadRequest()
    void Cutscene2DManager::PreloadRequest::PreloadRequest() {
        field_0 = 5000;
        new (field_8) Cutscene2DResources();
    }

    // 0x100534f70, 102 bytes, base-object destructor, inline, placed by class name
    // Cutscene2DManager::~Cutscene2DManager()
    void Cutscene2DManager::~Cutscene2DManager() {
        field_0 = PTR_vtable_100ee7fa8 + 16;
        field_2480->~GlobalCutscene2DResources();
        (&field_336)->~PreloadRequest();
        ((field_160 + 136))->~vector_map();
        ((field_160 + 96))->~vector_map();
        fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)field_160);
        fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)&field_64);
    }

} // namespace jag::game
