// libs/oldscape/jagex3/javapal/loading/LoadingScreen.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class LoadingScreenScript {
    public:
        class AnimLayer;
        class ChildAnimLayer;
        class LoadingScreenAnimation;
        class RectLayer;
        class SpriteLayer;
        class TextLayer;
        // virtual methods in vtable order
        virtual ~LoadingScreenScript();
        virtual void __pure_slot_2() = 0;
        virtual void DestroyResources();
        virtual void Advance(unsigned int);
        virtual void Render(oldscape::graphics::Pix2D&, int, int);
        virtual void SetLoadingText(eastl::string const&);
        virtual void BroadcastTrigger(char const*);
        LoadingScreenScript();
        void CreateFont(unsigned char const*, unsigned long, unsigned char const*, unsigned long);
        static /* 8 bytes */ BACKGROUND_LOADED_TRIGGER; // = "BgLoaded"
        static /* 8 bytes */ ERROR_TRIGGER;             // = "Error"

        // data members, from how the methods use this: 128 bytes
        undefined** field_0;    // offset 0, vtable pointer
        ChildAnimLayer field_8; // offset 8
        ulong field_64;         // offset 64
        char _unknown_72[56];
    };

    class LoadingScreenScript::AnimLayer {
    public:
        // virtual methods in vtable order
        virtual ~AnimLayer();
        AnimLayer();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class LoadingScreenScript::ChildAnimLayer
        : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ChildAnimLayer();
        virtual void Render(oldscape::graphics::Pix2D&, LoadingScreenAnimation const&, int, int) const;
        virtual void Reset();
        ChildAnimLayer(ChildAnimData const&);
        ChildAnimLayer();

        // data members, from how the methods use this: 56 bytes, the first 9 are RenderDeviceOnEndFrame
        char _unknown_9[7];
        int field_16;  // offset 16
        int field_20;  // offset 20
        char field_24; // offset 24
        char _unknown_25[7];
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
    };

    class LoadingScreenScript::LoadingScreenAnimation {
    public:
        ~LoadingScreenAnimation();
        LoadingScreenAnimation(LoadingScreenAnimation&&);
        LoadingScreenAnimation();
        void DecodePng(unsigned int, void const*, unsigned long);
        void Advance(unsigned int, unsigned int);
        void Reset();
        bool DoKeyframes(eastl::vector<Keyframe, eastl::allocator>&, unsigned int);
        void OnTrigger(eastl::string const&);

        // data members, from how the methods use this: 232 bytes
        uint field_0; // offset 0
        uint field_4; // offset 4
        char field_8; // offset 8
        char _unknown_9[3];
        int field_12;   // offset 12
        long* field_16; // offset 16
        char _unknown_24[48];
        undefined1 field_72; // offset 72
        char _unknown_73[159];
    };

    class LoadingScreenScript::RectLayer
        : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~RectLayer();
        virtual void Render(oldscape::graphics::Pix2D&, LoadingScreenAnimation const&, int, int) const;
        virtual void Reset();
        RectLayer(RectData const&);

        // data members, from how the methods use this: 72 bytes, the first 9 are RenderDeviceOnEndFrame
        char _unknown_9[3];
        int field_12;        // offset 12
        int field_16;        // offset 16
        int field_20;        // offset 20
        uint field_24;       // offset 24
        uint field_28;       // offset 28
        int field_32;        // offset 32
        undefined1 field_36; // offset 36
        undefined3 field_37; // offset 37
        undefined4 field_40; // offset 40
        undefined4 field_44; // offset 44
        undefined4 field_48; // offset 48
        undefined4 field_52; // offset 52
        undefined4 field_56; // offset 56
        undefined4 field_60; // offset 60
        undefined4 field_64; // offset 64
        undefined1 field_68; // offset 68
        undefined3 field_69; // offset 69
    };

    class LoadingScreenScript::SpriteLayer
        : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~SpriteLayer();
        virtual void Render(oldscape::graphics::Pix2D&, LoadingScreenAnimation const&, int, int) const;
        virtual void Reset();
        SpriteLayer(SpriteData const&);

        // data members, from how the methods use this: 88 bytes, the first 9 are RenderDeviceOnEndFrame
        char _unknown_9[3];
        int field_12;        // offset 12
        int field_16;        // offset 16
        undefined4 field_20; // offset 20
        undefined4 field_24; // offset 24
        undefined4 field_28; // offset 28
        undefined4 field_32; // offset 32
        int field_36;        // offset 36
        undefined4 field_40; // offset 40
        undefined1 field_44; // offset 44
        undefined3 field_45; // offset 45
        undefined4 field_48; // offset 48
        undefined4 field_52; // offset 52
        undefined4 field_56; // offset 56
        undefined4 field_60; // offset 60
        undefined4 field_64; // offset 64
        undefined4 field_68; // offset 68
        undefined4 field_72; // offset 72
        undefined4 field_76; // offset 76
        undefined4 field_80; // offset 80
        undefined1 field_84; // offset 84
        undefined3 field_85; // offset 85
    };

    class LoadingScreenScript::TextLayer
        : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~TextLayer();
        virtual void Render(oldscape::graphics::Pix2D&, LoadingScreenAnimation const&, int, int) const;
        virtual void Reset();
        TextLayer(TextData const&);

        // data members, from how the methods use this: 88 bytes, the first 9 are RenderDeviceOnEndFrame
        char _unknown_9[3];
        int field_12;        // offset 12
        int field_16;        // offset 16
        int field_20;        // offset 20
        int field_24;        // offset 24
        int field_28;        // offset 28
        int field_32;        // offset 32
        int field_36;        // offset 36
        undefined1 field_40; // offset 40
        char _unknown_41[3];
        undefined4 field_44; // offset 44
        undefined4 field_48; // offset 48
        undefined4 field_52; // offset 52
        undefined4 field_56; // offset 56
        undefined4 field_60; // offset 60
        undefined4 field_64; // offset 64
        undefined4 field_68; // offset 68
        undefined4 field_72; // offset 72
        undefined4 field_76; // offset 76
        char _unknown_80[8];
    };

    // 0x10001d330, 32 bytes, inline, placed by debug map only (low confidence)
    // LoadingScreenScript::ChildAnimLayer::Reset()
    void LoadingScreenScript::ChildAnimLayer::Reset() {
        undefined4 uVar1;
        undefined4 uVar2;

        uVar1 = *(undefined4*)&field_40;
        uVar2 = *(undefined4*)((long)&field_40 + 4);
        field_8 = (LoadingScreenAnimation*)field_32;
        field_16 = uVar1;
        field_20 = uVar2;
        *(undefined8*)&field_24 = field_48;
        field_8->Reset();
    }

    // 0x10002ed80, 80 bytes, base-object destructor, inline, placed by class header (inline)
    // LoadingScreenScript::~LoadingScreenScript()
    void LoadingScreenScript::~LoadingScreenScript() {
        pair* in_RSI;

        field_0 = &PTR__OptionStore_100efa510;
        (&field_120)->~Array();
        (&field_88)->~basic_string();
        (&field_72)->~shared_ptr();
        (field_8, in_RSI)->~ScriptOption();
    }

    // 0x10002eea0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // LoadingScreenScript::LoadingScreenAnimation::~LoadingScreenAnimation(): jumps straight to the base-object destructor

    // 0x10002eeb0, 80 bytes, base-object destructor, inline, placed by class header (inline)
    // LoadingScreenScript::LoadingScreenAnimation::~LoadingScreenAnimation()
    void LoadingScreenScript::LoadingScreenAnimation::~LoadingScreenAnimation() {
        (&field_176)->~map();
        (&field_128)->~map();
        (&field_72)->~hash_map();
        (&field_48)->~Array();
        (&field_24)->~Array();
    }

    // 0x1000443d0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // LoadingScreenScript::ChildAnimLayer::ChildAnimLayer(LoadingScreenScript::ChildAnimData const&): jumps straight to the base-object constructor

    // 0x1000443f0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // LoadingScreenScript::ChildAnimLayer::ChildAnimLayer(LoadingScreenScript::ChildAnimData const&)
    void LoadingScreenScript::ChildAnimLayer::ChildAnimLayer(ChildAnimData* param_1) {
        undefined8 uVar1;

        new (this) AnimLayer();
        field_0 = &PTR__ScriptOption_100efa480;
        uVar1 = *(undefined8*)(param_1 + 8);
        field_32 = *(undefined8*)param_1;
        field_40 = uVar1;
        field_48 = *(undefined8*)(param_1 + 16);
    }

    // 0x100044e00, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // LoadingScreenScript::SpriteLayer::SpriteLayer(LoadingScreenScript::SpriteData const&): jumps straight to the base-object constructor

    // 0x100044e20, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // LoadingScreenScript::SpriteLayer::SpriteLayer(LoadingScreenScript::SpriteData const&)
    void LoadingScreenScript::SpriteLayer::SpriteLayer(SpriteData* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        new (this) AnimLayer();
        field_0 = &PTR__ScriptOption_100efa450;
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(undefined8*)(param_1 + 24);
        field_48 = (int)uVar1;
        field_52 = (int)((ulong)uVar1 >> 32);
        field_56 = (int)uVar2;
        field_60 = (int)((ulong)uVar2 >> 32);
        field_64 = (int)uVar3;
        field_68 = (int)((ulong)uVar3 >> 32);
        field_72 = (int)uVar4;
        field_76 = (int)((ulong)uVar4 >> 32);
        uVar1 = *(undefined8*)(param_1 + 32);
        field_80 = (int)uVar1;
        field_84 = (char)((ulong)uVar1 >> 32);
        field_85 = (int3)((ulong)uVar1 >> 40);
    }

    // 0x100044f60, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // LoadingScreenScript::TextLayer::TextLayer(LoadingScreenScript::TextData const&): jumps straight to the base-object constructor

    // 0x100044f80, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // LoadingScreenScript::TextLayer::TextLayer(LoadingScreenScript::TextData const&)
    void LoadingScreenScript::TextLayer::TextLayer(TextData* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        new (this) AnimLayer();
        field_0 = &PTR__TextLayer_100efa4e0;
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(undefined8*)(param_1 + 24);
        field_44 = (int)uVar1;
        field_48 = (int)((ulong)uVar1 >> 32);
        field_52 = (int)uVar2;
        field_56 = (int)((ulong)uVar2 >> 32);
        field_60 = (int)uVar3;
        field_64 = (int)((ulong)uVar3 >> 32);
        field_68 = (int)uVar4;
        field_72 = (int)((ulong)uVar4 >> 32);
        field_76 = *(undefined4*)(param_1 + 32);
        new (&field_80) eastl::string();
    }

    // 0x1000450e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // LoadingScreenScript::RectLayer::RectLayer(LoadingScreenScript::RectData const&): jumps straight to the base-object constructor

    // 0x100045100, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // LoadingScreenScript::RectLayer::RectLayer(LoadingScreenScript::RectData const&)
    void LoadingScreenScript::RectLayer::RectLayer(RectData* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        new (this) AnimLayer();
        field_0 = &PTR__ScriptOption_100efa4b0;
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(undefined8*)(param_1 + 24);
        field_40 = (int)uVar1;
        field_44 = (int)((ulong)uVar1 >> 32);
        field_48 = (int)uVar2;
        field_52 = (int)((ulong)uVar2 >> 32);
        field_56 = (int)uVar3;
        field_60 = (int)((ulong)uVar3 >> 32);
        field_64 = (int)uVar4;
        field_68 = (char)((ulong)uVar4 >> 32);
        field_69 = (int3)((ulong)uVar4 >> 40);
    }

    // 0x1000458c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // LoadingScreenScript::LoadingScreenAnimation::LoadingScreenAnimation(LoadingScreenScript::LoadingScreenAnimation&&): jumps straight to the base-object constructor

    // 0x1000458d0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // LoadingScreenScript::LoadingScreenAnimation::LoadingScreenAnimation(): jumps straight to the base-object constructor

    // 0x1000458e0, 256 bytes, base-object constructor, inline, placed by class header (inline)
    // LoadingScreenScript::LoadingScreenAnimation::LoadingScreenAnimation()
    void LoadingScreenScript::LoadingScreenAnimation::LoadingScreenAnimation() {
        allocator local_38[8];

        new (&field_24) Array<oldscape::graphics::Pix32, eastl::allocator>();
        new (&field_48)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_72, local_38)
            eastl::hash_map<LoadingScreenScript::Keyframe*, unsigned int, eastl::hash<LoadingScreenScript::Keyframe*>,
                            eastl::equal_to<LoadingScreenScript::Keyframe*>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_128);
        eastl::allocator::allocator(local_38, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_176);
        new (&field_224) math::Vector2T<int>();
    }

    // 0x100045c20, 240 bytes, base-object constructor, inline, placed by class header (inline)
    // LoadingScreenScript::LoadingScreenAnimation::LoadingScreenAnimation(LoadingScreenScript::LoadingScreenAnimation&&)
    void LoadingScreenScript::LoadingScreenAnimation::LoadingScreenAnimation(LoadingScreenAnimation* param_1) {
        uint uVar1;
        char cVar2;
        undefined3 uVar3;
        int iVar4;

        field_16 = param_1->field_16;
        uVar1 = param_1->field_4;
        cVar2 = param_1->field_8;
        uVar3 = *(undefined3*)&param_1->field_9;
        iVar4 = param_1->field_12;
        field_0 = param_1->field_0;
        field_4 = uVar1;
        field_8 = cVar2;
        *(undefined3*)&field_9 = uVar3;
        field_12 = iVar4;
        new (&field_24, (Array*)&param_1->field_24) Array<oldscape::graphics::Pix32, eastl::allocator>();
        new (&field_48, (Array*)&param_1->field_48)
            Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                  eastl::allocator>();
        new (&field_72, (hash_map*)&param_1->field_72)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        new (&field_128, (map*)&param_1->field_128)
            eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<eastl::string>, eastl::allocator>();
        new (&field_176, (map*)&param_1->field_176)
            eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                       eastl::less<eastl::string>, eastl::allocator>();
        new (&field_224, (ListIterator*)&param_1->field_224)
            eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>();
    }

    // 0x1002d9880, 32 bytes, inline, placed by class header (inline)
    // LoadingScreenScript::SpriteLayer::Reset()
    void LoadingScreenScript::SpriteLayer::Reset() {
        field_40 = field_80;
        field_44 = field_84;
        field_45 = field_85;
        field_24 = field_64;
        field_28 = field_68;
        field_32 = field_72;
        field_36 = field_76;
        field_8 = field_48;
        field_12 = field_52;
        field_16 = field_56;
        field_20 = field_60;
    }

    // 0x1002d98a0, 32 bytes, inline, placed by class header (inline)
    // LoadingScreenScript::RectLayer::Reset()
    void LoadingScreenScript::RectLayer::Reset() {
        field_24 = field_56;
        field_28 = field_60;
        field_32 = field_64;
        field_36 = field_68;
        field_37 = field_69;
        field_8 = field_40;
        field_12 = field_44;
        field_16 = field_48;
        field_20 = field_52;
    }

    // 0x1002d98c0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // LoadingScreenScript::TextLayer::~TextLayer(): jumps straight to the base-object destructor

    // 0x1002d98d0, 32 bytes, deleting destructor, inline, placed by class header (inline)
    // LoadingScreenScript::TextLayer::~TextLayer()
    void LoadingScreenScript::TextLayer::~TextLayer() {
        ~TextLayer(this);
        operator_delete(this);
    }

    // 0x1002d98f0, 32 bytes, inline, placed by class header (inline)
    // LoadingScreenScript::TextLayer::Reset()
    void LoadingScreenScript::TextLayer::Reset() {
        *(undefined4*)&field_40 = field_76;
        field_24 = field_60;
        field_28 = field_64;
        field_32 = field_68;
        field_36 = field_72;
        field_8 = field_44;
        field_12 = field_48;
        field_16 = field_52;
        field_20 = field_56;
    }

} // namespace jag
