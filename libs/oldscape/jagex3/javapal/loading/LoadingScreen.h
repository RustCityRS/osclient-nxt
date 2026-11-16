// libs/oldscape/jagex3/javapal/loading/LoadingScreen.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

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
        virtual void Advance(unsigned int arg1);
        virtual void Render(oldscape::graphics::Pix2D& pix2D, int arg2, int arg3);
        virtual void SetLoadingText(const eastl::string& str);
        virtual void BroadcastTrigger(const char* str);
        LoadingScreenScript();
        void CreateFont(const unsigned char* arg1, unsigned long arg2, const unsigned char* arg3, unsigned long arg4);
        static const char* BACKGROUND_LOADED_TRIGGER; // = "BgLoaded"
        static const char* ERROR_TRIGGER;             // = "Error"

    private:
        ChildAnimLayer field_8;
        unsigned long field_64;
        uint8_t _unknown_72[56];
    };

    class LoadingScreenScript::AnimLayer {
    public:
        // virtual methods in vtable order
        virtual ~AnimLayer();
        AnimLayer();
    };

    class LoadingScreenScript::ChildAnimLayer
        : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ChildAnimLayer();
        virtual void Render(oldscape::graphics::Pix2D& pix2D, const LoadingScreenAnimation& loadingScreenAnimation,
                            int arg3, int arg4) const;
        virtual void Reset();
        ChildAnimLayer(const ChildAnimData& childAnimData);
        ChildAnimLayer();

    private:
        uint8_t _unknown_9[7];
        int field_16;
        int field_20;
        char field_24;
        uint8_t _unknown_25[7];
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
    };

    class LoadingScreenScript::LoadingScreenAnimation {
    public:
        ~LoadingScreenAnimation();
        LoadingScreenAnimation(LoadingScreenAnimation&& loadingScreenAnimation);
        LoadingScreenAnimation();
        void DecodePng(unsigned int arg1, const void* arg2, unsigned long arg3);
        void Advance(unsigned int arg1, unsigned int arg2);
        void Reset();
        bool DoKeyframes(eastl::vector<Keyframe>& keyframes, unsigned int arg2);
        void OnTrigger(const eastl::string& str);

    private:
        unsigned int field_0;
        unsigned int field_4;
        char field_8;
        uint8_t _unknown_9[3];
        int field_12;
        long* field_16;
        uint8_t _unknown_24[208];
    };

    class LoadingScreenScript::RectLayer
        : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~RectLayer();
        virtual void Render(oldscape::graphics::Pix2D& pix2D, const LoadingScreenAnimation& loadingScreenAnimation,
                            int arg3, int arg4) const;
        virtual void Reset();
        RectLayer(const RectData& rectData);

    private:
        uint8_t _unknown_9[3];
        int field_12;
        int field_16;
        int field_20;
        unsigned int field_24;
        unsigned int field_28;
        int field_32;
        uint8_t field_36;
        uint8_t field_37[3];
        uint32_t field_40;
        uint32_t field_44;
        uint32_t field_48;
        uint32_t field_52;
        uint32_t field_56;
        uint32_t field_60;
        uint32_t field_64;
        uint8_t field_68;
        uint8_t field_69[3];
    };

    class LoadingScreenScript::SpriteLayer
        : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~SpriteLayer();
        virtual void Render(oldscape::graphics::Pix2D& pix2D, const LoadingScreenAnimation& loadingScreenAnimation,
                            int arg3, int arg4) const;
        virtual void Reset();
        SpriteLayer(const SpriteData& spriteData);

    private:
        uint8_t _unknown_9[3];
        int field_12;
        int field_16;
        uint32_t field_20;
        uint32_t field_24;
        uint32_t field_28;
        uint32_t field_32;
        int field_36;
        uint32_t field_40;
        uint8_t field_44;
        uint8_t field_45[3];
        uint32_t field_48;
        uint32_t field_52;
        uint32_t field_56;
        uint32_t field_60;
        uint32_t field_64;
        uint32_t field_68;
        uint32_t field_72;
        uint32_t field_76;
        uint32_t field_80;
        uint8_t field_84;
        uint8_t field_85[3];
    };

    class LoadingScreenScript::TextLayer
        : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~TextLayer();
        virtual void Render(oldscape::graphics::Pix2D& pix2D, const LoadingScreenAnimation& loadingScreenAnimation,
                            int arg3, int arg4) const;
        virtual void Reset();
        TextLayer(const TextData& textData);

    private:
        uint8_t _unknown_9[3];
        int field_12;
        int field_16;
        int field_20;
        int field_24;
        int field_28;
        int field_32;
        int field_36;
        uint8_t field_40;
        uint8_t _unknown_41[3];
        uint32_t field_44;
        uint32_t field_48;
        uint32_t field_52;
        uint32_t field_56;
        uint32_t field_60;
        uint32_t field_64;
        uint32_t field_68;
        uint32_t field_72;
        uint32_t field_76;
        uint8_t _unknown_80[8];
    };

    // 0x10001d330
    void LoadingScreenScript::ChildAnimLayer::Reset() {
        uint32_t uVar1 = *(uint32_t*)&field_40;
        uint32_t uVar2 = *(uint32_t*)((long)&field_40 + 4);
        field_8 = (LoadingScreenAnimation*)field_32;
        field_16 = uVar1;
        field_20 = uVar2;
        *(uint64_t*)&field_24 = field_48;
        field_8->Reset();
    }

    // 0x10002ed80
    LoadingScreenScript::~LoadingScreenScript() {
        field_120.~Array();
        field_88.~basic_string();
        field_72.~shared_ptr();
        field_8->~ScriptOption();
    }

    // 0x10002eeb0
    LoadingScreenScript::LoadingScreenAnimation::~LoadingScreenAnimation() {
        field_176.~map();
        field_128.~map();
        field_72.~hash_map();
        field_48.~Array();
        field_24.~Array();
    }

    // 0x1000443f0
    LoadingScreenScript::ChildAnimLayer::ChildAnimLayer(const LoadingScreenScript::ChildAnimData& childAnimData)
        : AnimLayer() {
        uint64_t uVar1 = *(uint64_t*)(childAnimData + 8);
        field_32 = *(uint64_t*)childAnimData;
        field_40 = uVar1;
        field_48 = *(uint64_t*)(childAnimData + 16);
    }

    // 0x100044e20
    LoadingScreenScript::SpriteLayer::SpriteLayer(const LoadingScreenScript::SpriteData& spriteData) : AnimLayer() {
        uint64_t uVar1 = *(uint64_t*)spriteData;
        uint64_t uVar2 = *(uint64_t*)(spriteData + 8);
        uint64_t uVar3 = *(uint64_t*)(spriteData + 16);
        uint64_t uVar4 = *(uint64_t*)(spriteData + 24);
        field_48 = (int)uVar1;
        field_52 = (int)((unsigned long)uVar1 >> 32);
        field_56 = (int)uVar2;
        field_60 = (int)((unsigned long)uVar2 >> 32);
        field_64 = (int)uVar3;
        field_68 = (int)((unsigned long)uVar3 >> 32);
        field_72 = (int)uVar4;
        field_76 = (int)((unsigned long)uVar4 >> 32);
        uVar1 = *(uint64_t*)(spriteData + 32);
        field_80 = (int)uVar1;
        field_84 = (char)((unsigned long)uVar1 >> 32);
        field_85 = (int32_t)((unsigned long)uVar1 >> 40);
    }

    // 0x100044f80
    LoadingScreenScript::TextLayer::TextLayer(const LoadingScreenScript::TextData& textData) : AnimLayer() {
        uint64_t uVar1 = *(uint64_t*)textData;
        uint64_t uVar2 = *(uint64_t*)(textData + 8);
        uint64_t uVar3 = *(uint64_t*)(textData + 16);
        uint64_t uVar4 = *(uint64_t*)(textData + 24);
        field_44 = (int)uVar1;
        field_48 = (int)((unsigned long)uVar1 >> 32);
        field_52 = (int)uVar2;
        field_56 = (int)((unsigned long)uVar2 >> 32);
        field_60 = (int)uVar3;
        field_64 = (int)((unsigned long)uVar3 >> 32);
        field_68 = (int)uVar4;
        field_72 = (int)((unsigned long)uVar4 >> 32);
        field_76 = *(uint32_t*)(textData + 32);
        new (&field_80) eastl::string();
    }

    // 0x100045100
    LoadingScreenScript::RectLayer::RectLayer(const LoadingScreenScript::RectData& rectData) : AnimLayer() {
        uint64_t uVar1 = *(uint64_t*)rectData;
        uint64_t uVar2 = *(uint64_t*)(rectData + 8);
        uint64_t uVar3 = *(uint64_t*)(rectData + 16);
        uint64_t uVar4 = *(uint64_t*)(rectData + 24);
        field_40 = (int)uVar1;
        field_44 = (int)((unsigned long)uVar1 >> 32);
        field_48 = (int)uVar2;
        field_52 = (int)((unsigned long)uVar2 >> 32);
        field_56 = (int)uVar3;
        field_60 = (int)((unsigned long)uVar3 >> 32);
        field_64 = (int)uVar4;
        field_68 = (char)((unsigned long)uVar4 >> 32);
        field_69 = (int32_t)((unsigned long)uVar4 >> 40);
    }

    // 0x1000458e0
    LoadingScreenScript::LoadingScreenAnimation::LoadingScreenAnimation() {

        new (&field_24) Array<oldscape::graphics::Pix32>();
        new (&field_48) Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>();
        new (&field_72) eastl::hash_map(local_38);
        new (&field_128) eastl::map(local_38);
        new (&field_176) eastl::map(local_38);
        new (&field_224) math::Vector2T();
    }

    // 0x100045c20
    LoadingScreenScript::LoadingScreenAnimation::LoadingScreenAnimation(
        LoadingScreenScript::LoadingScreenAnimation&& loadingScreenAnimation)
        : field_16(loadingScreenAnimation.field_16) {
        unsigned int uVar1 = loadingScreenAnimation.field_4;
        char cVar2 = loadingScreenAnimation.field_8;
        uint32_t uVar3 = *(uint32_t*)&loadingScreenAnimation.field_9;
        int iVar4 = loadingScreenAnimation.field_12;
        field_0 = loadingScreenAnimation.field_0;
        field_4 = uVar1;
        field_8 = cVar2;
        *(uint32_t*)&field_9 = uVar3;
        field_12 = iVar4;
        new (&field_24) Array<oldscape::graphics::Pix32>(&loadingScreenAnimation.field_24);
        new (&field_48) Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>(loadingScreenAnimation.field_48);
        new (&field_72) eastl::hash_map(loadingScreenAnimation.field_72);
        new (&field_128) eastl::map(loadingScreenAnimation.field_128);
        new (&field_176) eastl::map(loadingScreenAnimation.field_176);
        new (&field_224) eastl::ListIterator(&loadingScreenAnimation.field_224);
    }

    // 0x1002d9880
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

    // 0x1002d98a0
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

    // 0x1002d98f0
    void LoadingScreenScript::TextLayer::Reset() {
        *(uint32_t*)&field_40 = field_76;
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
